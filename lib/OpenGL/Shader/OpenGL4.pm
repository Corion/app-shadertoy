package OpenGL::Shader::OpenGL4;
use strict;
use OpenGL::Glew ':all';
use OpenGL::Glew::Helpers qw(
    glGetShaderInfoLog_p
    glGetProgramInfoLog_p
    
    pack_ptr
    pack_GLstrings
    pack_GLint
    xs_buffer
    croak_on_gl_error
);
use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

=head1 NAME

OpenGL::Shader::OpenGL4 - compile vertex, geometry, tesselation and fragment shaders

=cut

sub LoadFiles( $self, %shaders ) {
    for my $s (sort keys %shaders) {
        $shaders{ $s } = $self->read_file( $shaders{ $s });
    };
    $self->Load( %shaders );
}

my %GL_shader_names = (
    compute => GL_COMPUTE_SHADER,
    vertex => GL_VERTEX_SHADER,
    tessellation_control => GL_TESS_CONTROL_SHADER,
    tessellation => GL_TESS_EVALUATION_SHADER,
    geometry => GL_GEOMETRY_SHADER,
    fragment => GL_FRAGMENT_SHADER,
);

# Shader constructor
sub new ($this,@args) {
  my $class = ref($this) || $this;

  my $self = {};
  bless($self => $class);
  
  my $glVersion = glGetString(GL_VERSION);
  ($glVersion) = ($glVersion =~ m!^(\d+\.\d+)!g);
  if( $glVersion < 3.3 ) {
      warn "You have an old version of OpenGL loaded ($glVersion), you won't have much fun.";
  };

  # Check for required OpenGL extensions
  # Well, just hope they are there

  $self->{type} = '';
  $self->{version} = '';
  $self->{description} = '';
  
  my %shaders;
  for ( keys %GL_shader_names ) {
    $shaders{ $_ } = delete $self->{$_}
        if exists $self->{$_};
  };
  $self->Load( %shaders )
      if scalar keys %shaders;

  warn "Created $self";
  return $self;
}

sub DESTROY {
    my($self) = @_;

    my @delete_shaders;
    if ($self->{program}) {
        for (qw(fragment_id vertex_id gemoetry_id vertex_id)) {
            if( my $id = $self->{$_}) {
                glDetachShader($self->{program},$id);
                croak_on_gl_error;
                push @delete_shaders, $id;
            };
        };
        glDeleteProgram($self->{program});
                croak_on_gl_error;
    }

    for (@delete_shaders) {
        glDeleteShader($_);
                croak_on_gl_error;
    };
}

# Load shader strings
sub Load($self, %shaders) {
  for my $shader (sort keys %shaders) {
    warn "Creating $shader shader";
    my $id = OpenGL::Glew::glCreateShader($GL_shader_names{ $shader });
    warn "Couldn't create a '$shader' shader?!"
        unless $id; 
    croak_on_gl_error;
    warn "Got $shader shader $id, setting source";
    glShaderSource($id, 1, pack_GLstrings($shaders{$shader}), pack_ptr(my $shader_length, 8));
    croak_on_gl_error;

    warn "Compiling $shader shader";
    glCompileShader($id);
    croak_on_gl_error;
    
    glGetShaderiv($id, GL_COMPILE_STATUS, xs_buffer(my $ok,8));
    $ok = unpack 'I', $ok;
    if( $ok == GL_FALSE ) {
      my $log = glGetShaderInfoLog_p($id);
      return "Bad $shader shader: $log" if ($log);
    };
    $self->{$shader . "_id"} = $id;
  }

    # Link shaders
    warn "Attaching shaders to program";
    my $sp = glCreateProgram();
    return "Couldn't create shader program: " . glGetError()
        unless $sp;
    my $log = glGetProgramInfoLog_p($sp);
    warn $log if $log;
    for my $shader (sort keys %shaders) {
        warn sprintf "glAttachShader(%d,%d)\n", $sp,$self->{$shader . "_id"};
        _glAttachShader($sp, $self->{$shader . "_id"});
        my $err = glGetError;
        warn glGetProgramInfoLog_p($sp) if $err;
    };
    glLinkProgram($sp);
    warn "Program status";
    my $err = glGetError;
    warn glGetProgramInfoLog_p($sp) if $err;
    warn _glGetProgramiv($sp, GL_LINK_STATUS, xs_buffer(my $linked, 8));
    $linked = unpack 'I', $linked;
    if ($linked != GL_TRUE) {
        warn "Something went wrong, looking at log";
        my $log = glGetProgramInfoLog_p($sp);
    
        return "Link shader to program: $log" if ($log);
        return 'Unable to link shader';
    }
    warn "Program status OK";

    $self->{program} = $sp;

    return '';
}

# Enable shader
sub Enable {
  my($self) = @_;
  glUseProgramObjectARB($self->{program}) if ($self->{program});
}


# Disable shader
sub Disable {
  my($self) = @_;
  glUseProgramObjectARB(0) if ($self->{program});
}


# Return shader vertex attribute ID
sub MapAttr {
  my($self,$attr) = @_;
  return undef if (!$self->{program});
  my $id = glGetAttribLocationARB_p($self->{program},$attr);
  return undef if ($id < 0);
  return $id;
}


# Return shader uniform variable ID
sub Map {
  my($self,$var) = @_;
  return undef if (!$self->{program});
  my $id = glGetUniformLocationARB_p($self->{program},$var);
  return undef if ($id < 0);
  return $id;
}

sub setUniform1i( $self, $name, $value ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform1i( $self->{program}, $loc, $value );
}

sub setUniform1f( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform1f( $self->{program}, $loc, @values );
}

sub setUniform2f( $self, $name, $x, $y) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform2f( $self->{program}, $loc, $x, $y );
}

sub setUniform3f( $self, $name, $x,$y,$z ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform3f( $self->{program}, $loc, $x,$y,$z );
}


sub setUniform4f( $self, $name, $x,$y,$z,$w ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform4f( $self->{program}, $loc, $x,$y,$z,$w );
}

sub setUniform2v( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform2v( $self->{program}, $loc, @values );
}


1;