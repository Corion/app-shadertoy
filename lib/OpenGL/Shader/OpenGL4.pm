package OpenGL::Shader::OpenGL4;
use strict;
use parent 'OpenGL::Shader';
use OpenGL::Shader::Common;
#use OpenGL ':all';
use OpenGL::GLEW;
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
    #compute => GL_COMPUTE_SHADER,
    vertex => GL_VERTEX_SHADER,
    #tessellation_control => GL_TESS_CONTROL_SHADER,
    #tessellation => GL_TESS_EVALUATION_SHADER,
    #geometry => GL_GEOMETRY_SHADER,
    fragment => GL_FRAGMENT_SHADER,
);

# Shader constructor
sub new ($this,@args) {
  my $class = ref($this) || $this;
  warn "new $class";

  #my $self = OpenGL::Shader::Common->new(@args);
  my $self = {};
  #return undef if (!$self);
  bless($self => $class);

  # Check for required OpenGL extensions
  # Well, just hope they are there

  $self->{type} = '';
  $self->{version} = '';
  $self->{description} = '';

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

# Load shader strings
sub Load($self, %shaders) {
  for my $shader (sort keys %shaders) {
    my $name = $shader . "_id";
    # Meh, where is it?
    my $id = glCreateShaderProgramv($GL_shader_names{ $shader });
    return undef if (!$id);
    glShaderSource_p($id, $shaders{$shader});

    glCompileShaderARB($id);
    my $stat = glGetInfoLogARB_p($id);
    return "$shader shader: $stat" if ($stat);
    $self->{$name} = $id;
  }

  # Link shaders
  my $sp = glCreateProgramObjectARB();
  for my $shader (sort keys %shaders) {
    my $name = $shader . "_id";
    glAttachObjectARB($sp, $self->{$name});
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

1;