package Win32::TransparentWindow;
use strict;
use Win32::API;

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

use Exporter 'import';

use vars qw(@EXPORT_OK $VERSION $DwmEnableBlurBehindWindow );
$VERSION = '0.01';

=head1 NAME

Win32::TransparentWindow - transparent/translucent windows for Windows 7+

=cut

my $initialized;
sub installDwmEnableBlurBehindWindow() {
    return if $initialized++;
    
    $DwmEnableBlurBehindWindow = Win32::API::More->new(
      'dwmapi.dll', 'DwmEnableBlurBehindWindow', 'IP', 'I'
    );
}

# typedef struct _DWM_BLURBEHIND {
#   DWORD dwFlags;
#   BOOL  fEnable;
#   HRGN  hRgnBlur;
#   BOOL  fTransitionOnMaximized;
# } DWM_BLURBEHIND, *PDWM_BLURBEHIND;

sub enableAlphaChannel( $hDC, %options ) {
    installDwmEnableBlurBehindWindow();
    if( $DwmEnableBlurBehindWindow ) {
        # Remove window Style as well:
        
        #$options{dwFlags} = 7 if not exists $options{ dwFlags };
        #$options{fEnable} = 1 if not exists $options{ fEnable };
        #$options{hRgnBlur} = 0 if not exists $options{ hRgnBlur };
        #$options{fTransitionOnMaximized} = 1 if not exists $options{ fTransitionOnMaximized };
        #my $buf = pack 'VcVc', @options{qw(dwFlags fEnable hRgnBlur fTransitionOnMaximized)};
        my $buf = join "",
                       "\x03\0\0\0",
                       "\x01\0\0\0",
                       "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",
                       "\x01"
                       ;
        DwmEnableBlurBehindWindow($hDC, $buf);
    };
    return 0
}

require XSLoader;
XSLoader::load('Win32::TransparentWindow', $VERSION);

1;