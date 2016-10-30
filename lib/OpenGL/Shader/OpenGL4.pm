package OpenGL::Shader::OpenGL4;
use strict;
#use OpenGL qw(glShaderSource);
use OpenGL::Glew ':all';
use OpenGL::Glew::Helpers qw(
    glGetShaderInfoLog_p
    pack_ptr
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
    #return undef if (!$id);
    glShaderSource($id, 1, pack_GLstrings($shaders{$shader}), undef);
    croak_on_gl_error;

    warn "Compiling $shader shader";
    glCompileShader($id);
    croak_on_gl_error;
    
    my $ok;
    glGetShaderiv($id, GL_COMPILE_STATUS, pack_ptr($ok, 8));
    warn $ok;
    $ok = unpack 'I', $ok;
    warn $ok;
    if( $ok == GL_FALSE ) {
      my $stat = glGetShaderInfoLog($id);
      return "$shader shader: $stat" if ($stat);
    };
    $self->{$shader . "_id"} = $id;
  }

  # Link shaders
  my $sp = glCreateProgramObjectARB();
  for my $shader (sort keys %shaders) {
    glAttachObjectARB($sp, $self->{$shader . "_id"});
  };
  glLinkProgramARB($sp);
  my $linked = glGetObjectParameterivARB_p($sp, GL_OBJECT_LINK_STATUS_ARB);
  if (!$linked) {
    my $stat = glGetInfoLogARB_p($sp);
    #print STDERR "Load shader: $stat\n";
    return "Link shader: $stat" if ($stat);
    return 'Unable to link shader';
  }

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

sub setUniform1I( $self, $name, $value ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform1i( $loc, $value );
}

sub setUniform1F( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform1F( $loc, @values );
}

sub setUniform2F( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform2F( $loc, @values );
}

sub setUniform3F( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform3F( $loc, @values );
}


sub setUniform4F( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform4F( $loc, @values );
}

sub setUniform2V( $self, $name, @values ) {
  return undef if (!$self->{program});
  my $loc = glGetUniformLocation($self->{program}, $name );
  glProgramUniform2V( $loc, @values );
}


1;