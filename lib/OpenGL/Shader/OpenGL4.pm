package OpenGL::Shader::OpenGL4;
use strict;
#use OpenGL qw(glShaderSource);
use OpenGL::Glew ':all';
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

# Shader destructor
# Must be disabled first
sub DESTROY
{
  my($self) = @_;

  if ($self->{program})
  {
    for (qw(fragment_id vertex_id gemoetry_id vertex_id)) {
        glDetachObject($self->{program},$self->{$_}) if ($self->{$_});
    };
    glDeletePrograms_p($self->{program});
  }

  for (qw(fragment_id vertex_id gemoetry_id vertex_id)) {
    glDeletePrograms_p($self->{$_}) if ($self->{$_});
  };
}

sub glGetShaderInfoLog_p($shader) {
    my $buffer = "\0" x 1024 * 64; # 64k should be enough for everybody
    my $p_buffer = pack 'P', $buffer;
    my $len = length $buffer;
    my $result_len = "\0\0\0\0";
    my $p_result_len = pack 'P', $result_len;
    
    glGetShaderInfoLog($shader, length $buffer, $p_result_len, $p_buffer );
    return substr( $p_buffer, $p_result_len );
};

# Load shader strings
sub Load($self, %shaders) {
  for my $shader (sort keys %shaders) {
    warn "Creating $shader shader";
    my $id = OpenGL::Glew::glCreateShader($GL_shader_names{ $shader });
    warn "Couldn't create a '$shader' shader?!"
        unless $id;
    return undef if (!$id);
    glShaderSource_p($id, 1, pack('P', $shaders{$shader}), undef);
    glCompileShader($id);
    
    my $ok = "\0" x 8;
    glGetShaderiv($id, GL_COMPILE_STATUS, pack 'P', $ok);
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