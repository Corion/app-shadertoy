package OpenGL::Shader::OpenGL4;
use strict;
use Carp qw(croak);
use OpenGL::Glew ':all';
use OpenGL::Glew::Helpers qw(
    glGetShaderInfoLog_p
    glGetProgramInfoLog_p

    pack_ptr
    pack_GLstrings
    pack_GLint
    xs_buffer
    croak_on_gl_error

    glGetVersion_p
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

use vars qw($glVersion);

# Shader constructor
sub new ($this,@args) {
  my $class = ref($this) || $this;

  my $self = { @args };
  bless($self => $class);

  $glVersion ||= glGetVersion_p;
  if( $glVersion < 3.3 ) {
      warn "You have an old version of OpenGL loaded ($glVersion), you won't have much fun.";
  };

  # Check for required OpenGL extensions
  # Well, just hope they are there

  $self->{type} = '';
  $self->{version} = '';
  $self->{description} = '';
  $self->{uniforms} = {};
  if(! exists $self->{strict_uniforms} ) {
    $self->{strict_uniforms} = 1;
};

  my %shaders;
  for ( keys %GL_shader_names ) {
    $shaders{ $_ } = delete $self->{$_}
        if exists $self->{$_};
  };
  $self->Load( %shaders )
      if scalar keys %shaders;

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
    # Instead of a loop, we should make one call to glShaderSource, passing in
    # all shaders
    for my $shader (sort keys %shaders) {
        #warn "Creating $shader shader";
        my $id = glCreateShader($GL_shader_names{ $shader });
        warn "Couldn't create a '$shader' shader?!"
            unless $id;
        croak_on_gl_error;
        #warn "Got $shader shader $id, setting source";
        glShaderSource($id, 1, pack_GLstrings($shaders{$shader}), pack_ptr(my $shader_length, 8));
        croak_on_gl_error;

        #warn "Compiling $shader shader";
        glCompileShader($id);
        croak_on_gl_error;

        glGetShaderiv($id, GL_COMPILE_STATUS, xs_buffer(my $ok,8));
        $ok = unpack 'I', $ok;
        if( $ok == GL_FALSE ) {
          my $log = glGetShaderInfoLog_p($id);
          croak $log if $log;
          return "Bad $shader shader: $log" if ($log);
        };
        $self->{$shader . "_id"} = $id;
    }

    # Link shaders
    #warn "Attaching shaders to program";
    my $sp = glCreateProgram();
    return "Couldn't create shader program: " . glGetError()
        unless $sp;
    my $log = glGetProgramInfoLog_p($sp);
    warn $log if $log;
    for my $shader (sort keys %shaders) {
        glAttachShader($sp, $self->{$shader . "_id"});
        my $err = glGetError;
        warn glGetProgramInfoLog_p($sp) if $err;
    };
    glLinkProgram($sp);
    my $err = glGetError;
    glGetProgramiv($sp, GL_LINK_STATUS, xs_buffer(my $linked, 8));
    $linked = unpack 'I', $linked;
    if ($linked != GL_TRUE) {
        warn "Something went wrong, looking at log";
        my $log = glGetProgramInfoLog_p($sp);

        return "Link shader to program: $log" if ($log);
        return 'Unable to link shader';
    }
    #warn "Program status OK";

    # Free up the shader memory, later
    #glDetachShader(ProgramID, VertexShaderID);
    #glDetachShader(ProgramID, FragmentShaderID);

    #glDeleteShader(VertexShaderID);
    #glDeleteShader(FragmentShaderID);

    # Get all the uniforms and cache them:
    glGetProgramiv($sp, GL_ACTIVE_UNIFORMS, xs_buffer(my $count, 8 ));
    $count = unpack 'I', $count;
    for my $index (0..$count-1) {
        # Names are maximum 16 chars:
        glGetActiveUniform($sp, $index, 16, xs_buffer(my $length, 8), xs_buffer(my $size,8), xs_buffer(my $type,8), xs_buffer(my $name, 16));
        $length = unpack 'I', $length;
        $name = substr $name, 0, $length;
        $self->{uniforms}->{$name} = $index;
        #warn "$index [$name]";
    };

    $self->{program} = $sp;
    #glObjectLabel(GL_PROGRAM,$sp,length "myshaders","myshaders");

    return '';
}

# Enable shader
sub Enable($self) {
    glUseProgram($self->{program}) if ($self->{program});
}


# Disable shader
sub Disable($self) {
    glUseProgram(0);
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
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform1i( $self->{program}, $self->{uniforms}->{$name}, $value );
        croak_on_gl_error;
    }
}

sub setUniform1f( $self, $name, $float ) {
    return undef if (!$self->{program});
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform1f( $self->{program}, $self->{uniforms}->{$name}, $float );
        croak_on_gl_error;
    }
}

sub setUniform2f( $self, $name, $x, $y) {
    return undef if (!$self->{program});
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform2f( $self->{program}, $self->{uniforms}->{$name}, $x, $y );
        croak_on_gl_error;
    }
}

sub setUniform3f( $self, $name, $x,$y,$z ) {
    return undef if (!$self->{program});
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform3f( $self->{program}, $self->{uniforms}->{$name}, $x,$y,$z );
        croak_on_gl_error;
    }
}

sub setUniform4f( $self, $name, $x,$y,$z,$w ) {
    return undef if (!$self->{program});
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform4f( $self->{program}, $self->{uniforms}->{$name}, $x,$y,$z,$w );
        croak_on_gl_error;
    }
}

sub setUniform4fv( $self, $name, $vec ) {
    return undef if (!$self->{program});
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform4fv( $self->{program}, $self->{uniforms}->{$name}, length($vec)/(4*4), $vec );
        croak_on_gl_error;
    };
}

sub setUniform2v( $self, $name, @values ) {
    return undef if (!$self->{program});
    if( ! exists $self->{uniforms}->{$name}) {
        croak "Unknown shader uniform '$name'"
            if $self->{strict_uniforms}
    } else {
        glProgramUniform2v( $self->{program}, $self->{uniforms}->{$name}, @values );
        croak_on_gl_error;
    }
}

1;