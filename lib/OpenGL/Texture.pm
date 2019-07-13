package OpenGL::Texture;
use strict;
use Imager;
use OpenGL::Modern qw(
    glActiveTexture
    glBindTexture
    glTexImage2D_c
    glTexSubImage2D_c
    glTexStorage2D
    GL_TEXTURE_2D
    GL_TEXTURE
    GL_TEXTURE0
    GL_RGBA8
    GL_RGBA
    GL_UNSIGNED_BYTE

    glObjectLabel
    glTexParameteri
    GL_TEXTURE_BASE_LEVEL
    GL_TEXTURE_MAX_LEVEL
);
use OpenGL::Modern::Helpers (qw(xs_buffer croak_on_gl_error glGetVersion_p
    glGenTextures_p
    pack_ptr
    iv_ptr
));

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

our $glVersion;
our $VERSION = '0.01';

# This should also use Prima as default instead of Imager, at least
# for App::ShaderToy
sub load($class,$filename,%options) {
    my $self = $class->new(%options);
    if(! exists $options{ name }) {
        $options{ name } = $filename;
    };
    #warn "Loading $filename";
    my $image = Imager->new(
        file => $filename,
        %options,
    )
    or die Imager->errstr;
    $image = $image->convert(preset => 'addalpha');
    $options{ width } ||= $image->getwidth;
    $options{ height } ||= $image->getheight;
    $image->flip(dir => 'v');
    $image->write(
        data => \my $data,
        type => 'raw',
        xsize => $options{ width },
        ysize => $options{ height },
        raw_storechannels => 4,
    );
    $options{ data } = \$data;
    $self->store(
        %options
    );
    $self
}

sub new($class,%options) {
    $options{ target_format } ||= GL_RGBA8;
    $options{ source_format } ||= GL_RGBA;

    bless \%options => $class;
}

sub id($self) {
    my $id = $self->{id};
    if( ! defined $id ) {
        my $new_id = glGenTextures_p( 1 );
        croak_on_gl_error;
        $self->{id} = $new_id;
        $id = $self->{id};
    }
    $id
}

=head2 C<< ->store >>

Stores the data in the GPU and associates it with the id of the texture.

As a side effect, C<GL_TEXTURE0> is unbound.

=cut

sub store($self,%options) {
    my $id = $self->id;
    my $buf = ${$options{data}} . '    '; # padding to prevent segfaults by the OpenGL API tracer...
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D,$id);

    $glVersion ||= glGetVersion_p;

    if($glVersion >= 4.2) {
        # This is OpenGL 4.2 only but much more typesafe:
        glTexStorage2D(GL_TEXTURE_2D,
                       1,
                       $options{ target_format } || $self->{target_format},
                       $options{width},
                       $options{height}
        );
        glTexSubImage2D_c(GL_TEXTURE_2D,
                     0,
                     0,
                     0,
                     $options{ width },
                     $options{ height },
                     $options{ source_format } || $self->{source_format },
                     GL_UNSIGNED_BYTE,
                     \$buf
                     #unpack 'I', pack 'p', $buf
        );

    } else {
        # OpenGL 1.2 to OpenGL 3
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 0);
        glTexImage2D_c(GL_TEXTURE_2D,
                     0,
                     $options{ target_format } || $self->{target_format},
                     $options{ width },
                     $options{ height },
                     0,
                     $options{ source_format } || $self->{source_format },
                     GL_UNSIGNED_BYTE,
                     iv_ptr $buf
        );
    };

    # This should also only be done if the GL version is high enough
    if( $options{ name }) {
        #glObjectLabel(GL_TEXTURE,$id, length $options{name},$options{name});
    };
    glBindTexture(GL_TEXTURE_2D,0);
}

1;
