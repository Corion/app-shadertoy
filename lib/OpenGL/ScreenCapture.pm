package OpenGL::ScreenCapture;
use strict;
use Exporter 'import';
use vars qw($VERSION @EXPORT_OK);
use OpenGL::Glew qw(glReadPixels glReadBuffer glGetIntegerv
    GL_RGBA GL_VIEWPORT GL_RGB
    GL_UNSIGNED_BYTE
    GL_UNPACK_ALIGNMENT
    GL_PACK_ALIGNMENT
    glGetError
    glPixelStorei
);
use OpenGL::Glew::Helpers qw(xs_buffer);
use Imager;

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

@EXPORT_OK=('capture');

=head1 FUNCTIONS

=head2 C<< capture >>

    my $image = capture();
    $image->write(file => 'screenshot.png');

Returns the current OpenGL buffer as an L<Imager> image.

=cut

sub capture(%options) {
    $options{x} ||= 0;
    $options{y} ||= 0;
    $options{type} ||= GL_UNSIGNED_BYTE();
    
    if( not exists $options{ width } or not exists $options{height} ) {
        glGetIntegerv( GL_VIEWPORT, xs_buffer(my $viewport, 32 ));
        my($x,$y,$w,$h) = unpack 'IIII', $viewport;
        $options{width} ||= $w;
        $options{height} ||= $h;
    };
    if( exists $options{ buffer } and defined $options{ buffer }) {
        glReadBuffer($options{buffer});
    };
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(
        $options{x},
        $options{y},
        $options{width},
        $options{height},
        GL_RGBA,
        $options{type},
        xs_buffer(my $buffer, $options{width}*$options{height}*4),
    );
    print glGetError,"\n";
    
    my $i = Imager->new(
        xsize => $options{width},
        ysize => $options{height},
        type => 'direct',
        bits => 8, # per channel
        filetype => 'raw',
    );
    $i->read(
        data => $buffer,
        type => 'raw',
        xsize => $options{width},
        ysize => $options{height},
        raw_datachannels => 4,
        raw_interleave => 0,
    );
    $i->flip(dir => 'v');
    $i
}

1;