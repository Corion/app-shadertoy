#!perl -w
use strict;

=head1 PURPOSE

This script extracts the function signatures from glew-2.0.0/include/GL/glew.h
and creates XS stubs for each.

=cut

my ($version) = @ARGV;

if( ! $version) {
    $version = glob 'glew-*';
};

my @headers = glob "$version/include/GL/*.h";

my %signature;
my %case_map;
my %alias;

for my $file (@headers) {
    open my $fh, '<', $file
        or die "Couldn't read '$file': $!";
    while( my $line = <$fh>) {
        if( $line =~ /^typedef (\w+) \(GLAPIENTRY \* PFN(\w+)PROC\)\s*\((.*)\);/ ) {
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

sub munge_GL_args {
    my( @args ) = @_;
    # GLsizei n + 
}

for my $upper (sort keys %signature) {
    my $impl = $case_map{ $upper } || $upper;
    my $name = $alias{ $impl } || $impl;
    warn "$upper -> $impl -> $name";
    my $args = $signature{ $upper }->{signature}; # XXX clean up the C arguments here
    my $type = $signature{ $upper }->{restype}; # XXX clean up the C arguments here
    my $xs_args = $signature{ $upper }->{signature};
    $xs_args =~ s!,!;\n    !g;
    print <<XS;
$type
$name($args);
    $xs_args
CODE:
    // XXX Convert the input values to the expected types. However that's done.
    RETVAL = $name($args);
OUTPUT:
    RETVAL

XS
};