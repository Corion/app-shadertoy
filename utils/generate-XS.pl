#!perl -w
use strict;

=head1 PURPOSE

This script extracts the function signatures from glew-2.0.0/include/GL/glew.h
and creates XS stubs for each.

This should also autogenerate stub documentation by adding links
to the OpenGL documentation for each function via

L<https://www.opengl.org/sdk/docs/man/html/glShaderSource.xhtml>

=cut

my @headers = glob "include/GL/*.h";

my %signature;
my %case_map;
my %alias;

for my $file (@headers) {
    open my $fh, '<', $file
        or die "Couldn't read '$file': $!";
    while( my $line = <$fh>) {
        warn $line if $line =~ /glViewport/;
        if( $line =~ /^typedef (\w+) \(GLAPIENTRY \* PFN(\w+)PROC\)\s*\((.*)\);/ ) {
            my( $restype, $name, $sig ) = ($1,$2,$3);
            $signature{ $name } = { signature => $sig, restype => $restype };
            
        } elsif( $line =~ /^GLAPI (\w+) GLAPIENTRY (\w+) \((.*)\);/ ) {
            # Some external function, likely imported from libopengl / opengl32
            my( $restype, $name, $sig ) = ($1,$2,$3);
            $signature{ $name } = { signature => $sig, restype => $restype };
            
        } elsif( $line =~ /^GLEW_FUN_EXPORT PFN(\w+)PROC __(\w+)/ ) {
            my( $name, $impl ) = ($1,$2);
            $case_map{ $name } = $impl;

        } elsif( $line =~ /^#define (\w+) GLEW_GET_FUN\(__(\w+)\)/) {
            my( $name, $impl ) = ($1,$2);
            $alias{ $impl } = $name;
        };
    };
}

=head1 Automagic Perlification

We should think about how to ideally enable the typemap
to automatically perlify the API. Or just handwrite
it for the _p functions?!

=cut

sub munge_GL_args {
    my( @args ) = @_;
    # GLsizei n
    # GLsizei count
}

for my $upper (sort keys %signature) {
    my $impl = $case_map{ $upper } || $upper;
    my $name = $alias{ $impl } || $impl;
    my $args = $signature{ $upper }->{signature}; # XXX clean up the C arguments here
    die "No args for $upper" unless $args;
    my $type = $signature{ $upper }->{restype}; # XXX clean up the C arguments here
    my $no_return_value;
    
    if( $type eq 'void' ) {
        # See perlxs
        $type = 'SV *';
        $no_return_value = 1;
    };
        
    (my $glewImpl = $name) =~ s!^gl!__glew!;
    
    my $xs_args = $signature{ $upper }->{signature};
    $xs_args =~ s!,!;\n    !g;
    1 while $args =~ s!\b(const\s+\*|GLchar|GLenum|GLint|GLintptr|GLuint|GLsizei)\b!!g;
    $xs_args =~ s!\bconst\s*! !g;
    
    # Kill off all pointer indicators
    $args =~ s!\*! !g;
    
    my $res = <<XS;
$type
$name($args);
    $xs_args
CODE:
    if(! $glewImpl) {
        croak("$name not available on this machine");
    };
XS

    if( $no_return_value ) {
        $res .= <<XS;
    $name($args);

XS

    } else {
        $res .= <<XS;
    RETVAL = $name($args);
OUTPUT:
    RETVAL

XS
    };

    print $res;
};