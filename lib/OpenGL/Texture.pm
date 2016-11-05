package OpenGL::Texture;
use strict;
use Imager;
use OpenGL::Glew qw(
    glGenTextures
    glActiveTexture
    glBindTexture
    glTexImage2D
    GL_TEXTURE_2D
	GL_TEXTURE
    GL_TEXTURE0
    GL_RGBA
    GL_UNSIGNED_BYTE
    
    glObjectLabel
);
use OpenGL::Glew::Helpers (qw(xs_buffer croak_on_gl_error));

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

use vars '$VERSION';
$VERSION = '0.01';

# This should also use Prima as default instead of Imager, at least
# for App::ShaderToy
sub load($class,$filename,%options) {
    my $self = $class->new(%options);
    if(! exists $options{ name }) {
        $options{ name } = $filename;
    };
    warn "Loading $filename";
    my $image = Imager->new(
        file => $filename,
        %options,
    )
    or die Imager->errstr;
    $options{ width } ||= $image->getwidth;
    $options{ height } ||= $image->getheight;
	$image->flip(dir => 'v');
    $image->write(data => \my $data, type => 'raw');
    $options{ data } = \$data;
    $self->store(
        %options
    );
    $self
}

sub new($class,%options) {
    $options{ target_format } ||= GL_RGBA;
    $options{ source_format } ||= GL_RGBA;
    
    bless \%options => $class;
}

sub id($self) {
    my $id = $self->{id};
    if( ! defined $id ) {
        glGenTextures( 1, xs_buffer(my $new_id,8 ));
        croak_on_gl_error;
        $self->{id} = unpack 'I', $new_id;
        $id = $self->{id};
    }
    $id
}

=head2 C<< ->store >>

Stores the data in the GPU and associates it with the id of the texture.

As a side effect, C<GL_TEXTURE0> is unbound.

=cut

sub store($self,%options) {
    glActiveTexture(GL_TEXTURE0);
    my $id = $self->id;
    glBindTexture(GL_TEXTURE_2D,$id);
	my $buf = ${$options{data}} . '    '; # padding to prevent segfaults by the OpenGL API tracer...
    glTexImage2D(GL_TEXTURE_2D,
                 0,
                 $options{ target_format } || $self->{target_format},
                 $options{ width },
                 $options{ height },
                 0,
                 $options{ source_format } || $self->{source_format },
                 GL_UNSIGNED_BYTE,
                 $buf
    );
    
    if( $options{ name }) {
        glObjectLabel(GL_TEXTURE,$id, length $options{name},$options{name});
    };
    glBindTexture(GL_TEXTURE_2D,0);
}

1;