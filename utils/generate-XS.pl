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

# The functions where we specify manual implementations or prototypes
# These could also be read from Glew.xs, later maybe
my @manual = qw(
    glGetError
    glShaderSource
);

my %manual; @manual{@manual} = (1) x @manual;

my @known_type = sort { $b cmp $a } qw(
    GLbitfield
    GLboolean
    GLbyte
    GLchar
    GLcharARB
    GLclampd
    GLclampf
    GLclampx
    GLdouble
    GLenum
    GLfixed
    GLfloat
    GLhalf
    GLhandleARB
    GLint
    GLint64
    GLint64EXT
    GLintptr
    GLintptrARB
    GLuint
    GLuint64
    GLuint64EXT
    GLshort
    GLsizei
    GLsizeiptr
    GLsizeiptrARB
    GLsync
    GLubyte
    GLushort
    GLvdpauSurfaceNV
    GLvoid
    void

    cl_context
    cl_event

    GLLOGPROCREGAL
    GLDEBUGPROCARB
    GLDEBUGPROCAMD
    GLDEBUGPROC
);

for my $file (@headers) {
    open my $fh, '<', $file
        or die "Couldn't read '$file': $!";
    while( my $line = <$fh>) {
        warn $line if $line =~ /gl(ew)?ClearColor\b/;

        if( $line =~ /^typedef (\w+) \(GLAPIENTRY \* PFN(\w+)PROC\)\s*\((.*)\);/ ) {
            my( $restype, $name, $sig ) = ($1,$2,$3);
            $signature{ $name } = { signature => $sig, restype => $restype };
            
                          # GLAPI void GLAPIENTRY glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
        } elsif( $line =~ /^GLAPI (\w+) GLAPIENTRY (\w+) \((.*)\);/ ) {
            # Some external function, likely imported from libopengl / opengl32
            my( $restype, $name, $sig ) = ($1,$2,$3);
            $signature{ uc $name } = { signature => $sig, restype => $restype };
            $case_map{ uc $name } = $name;
            
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

We should move the function existence check
into the AUTOLOAD part so the check is made only once
instead of on every call. Microoptimization, I know.

=cut

sub munge_GL_args {
    my( @args ) = @_;
    # GLsizei n
    # GLsizei count
}

my @process = map { uc $_ } @ARGV;
if( ! @process) {
    @process = sort keys %signature;
};

for my $upper (@process) {
    my $impl = $case_map{ $upper } || $upper;
    my $name = $alias{ $impl } || $impl;
    
    if( $manual{ $name }) {
        #warn "Skipping $name, already implemented in Glew.xs";
        next
    };
    
    # If we didn't see this, it's likely an OpenGL 1.1 function:
    my $aliased = exists $alias{ $impl };
    
    my $args = $signature{ $upper }->{signature}; # XXX clean up the C arguments here
    die "No args for $upper" unless $args;
    my $type = $signature{ $upper }->{restype}; # XXX clean up the C arguments here
    my $no_return_value;
    
    if( $type eq 'void' ) {
        $no_return_value = 1;
    };

    my $glewImpl;
    if( $aliased ) {
         ($glewImpl = $name) =~ s!^gl!__glew!;
    };
    
    my $xs_args = $signature{ $upper }->{signature};
    if( $args eq 'void') {
        $args = '';
        $xs_args = '';
    };
    
    $xs_args =~ s!,!;\n    !g;
    
    # Meh. We'll need a "proper" C type parser here and hope that we don't
    # incur any macros
    my $known_types = join "|", @known_type;
    $args =~ s!\b(?:(?:const\s+)?\w+(?:(?:\s*(?:\bconst\b|\*)))*\s*(\w+))\b!$1!g;
    
    1 while $args =~ s!(\bconst\b|\*|\[\d*\])!!g;
    
    # Rewrite const GLwhatever foo[];
    # into    const GLwhatever* foo;
    1 while $xs_args =~ s!^\s*const (\w+)\s+(\w+)\[\d*\](;?)$!     const $1 * $2$3!m;
    1 while $xs_args =~ s!^\s*(\w+)\s+(\w+)\[\d*\](;?)$!     $1 * $2$3!m;
    
    # Kill off all pointer indicators
    $args =~ s!\*! !g;
    
    my $decl = <<XS;
$type
$name($args);
XS
    if( $xs_args ) {
        $decl .= "     $xs_args;\n"
    };
    
    my $res = $decl . <<XS;
CODE:
XS
    if( $glewImpl ) {
        $res .= <<XS;
    if(! $glewImpl) {
        croak("$name not available on this machine");
    };
XS
    };

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