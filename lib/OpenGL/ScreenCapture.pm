package OpenGL::ScreenCapture;
use strict;
use Carp 'croak';
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

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

@EXPORT_OK=('capture');

=head1 FUNCTIONS

=head2 C<< capture >>

    my $image = capture();
    $image->save('screenshot.png');

Returns the current OpenGL buffer as an L<Prima> image. This behaviour
is the default. If your program otherwise doesn't use Prima, you can pass
C<Imager> as an option to get an L<Imager> object back:

    my $image = capture(format => 'Imager');
    $image->write(filename => 'screenshot.png');

Note that the method names are different between Imager and Prima!

L<Imager> is not a prerequisite of this module and thus is not automatically
installed.

=cut

sub capture(%options) {
    $options{x} ||= 0;
    $options{y} ||= 0;
    $options{type} ||= GL_UNSIGNED_BYTE();

    $options{ format } ||= 'Prima';

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

    if( $options{ format } eq 'Prima' ) {
        require Prima;
        return Prima::Image->new(
            width    => $options{width},
            height   => $options{height},
            type     => im::Color | im::bpp32 | im::fmtBGRI,
            lineSize => $options{width}*4,
            data     => $buffer,
        );

    } elsif( $options{ format } eq 'Imager' ) {
        require Imager;
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
		return $i

    } else {
        croak "Unknown object format option '$options{format}', need 'Prima' or 'Imager'";
    };
}

1;

=head1 REPOSITORY

The public repository of this module is
L<http://github.com/Corion/app-shadertoy>.

=head1 SUPPORT

The public support forum of this module is
L<https://perlmonks.org/>.

=head1 BUG TRACKER

Please report bugs in this module via the RT CPAN bug queue at
L<https://rt.cpan.org/Public/Dist/Display.html?Name=App-ShaderToy>
or via mail to L<app-shadertoy-Bugs@rt.cpan.org>.

=head1 AUTHOR

Max Maischein C<corion@cpan.org>

=head1 COPYRIGHT (c)

Copyright 2016 by Max Maischein C<corion@cpan.org>.

=head1 LICENSE

This module is released under the same terms as Perl itself.

=cut
