#!perl -w
use strict;
use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';


=head1 PURPOSE

This script extracts the function signatures from glew-2.0.0/include/GL/glew.h
and creates XS stubs for each.

This should also autogenerate stub documentation by adding links
to the OpenGL documentation for each function via

L<https://www.opengl.org/sdk/docs/man/html/glShaderSource.xhtml>

Also, it should parse the feature groups of OpenGL and generate a data structure
that shows which features are associated with which functions.

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

my @exported_functions; # here we'll collect the names the module exports

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

# Functions where we need to override the type signature
my %signature_override = (
    'glVertexAttribPointer' => { name => 'pointer', type => 'GLsizeiptr' },
    'glVertexAttribPointerARB' => { name => 'pointer', type => 'GLsizeiptr' },
    'glVertexAttribPointerNV' => { name => 'pointer', type => 'GLsizeiptr' },
);

my %features = ();

for my $file (@headers) {

    my $feature_name;

    open my $fh, '<', $file
        or die "Couldn't read '$file': $!";
    while( my $line = <$fh>) {
	    if( $line =~ /^#define (\w+) 1$/ and $1 ne 'GL_ONE' and $1 ne 'GL_TRUE') {
		    $feature_name = $1;

        } elsif( $line =~ /^typedef (\w+) \(GLAPIENTRY \* PFN(\w+)PROC\)\s*\((.*)\);/ ) {
            my( $restype, $name, $sig ) = ($1,$2,$3);
			my $s = { signature => $sig, restype => $restype, feature => $feature_name, name => $name };
            $signature{ $name } = $s;
			push @{ $features{ $feature_name }}, $s;
            
                          # GLAPI void GLAPIENTRY glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
        } elsif( $line =~ /^GLAPI (\w+) GLAPIENTRY (\w+) \((.*)\);/ ) {
            # Some external function, likely imported from libopengl / opengl32
            my( $restype, $name, $sig ) = ($1,$2,$3);
			my $s = { signature => $sig, restype => $restype, feature => $feature_name, name => $name };
            $signature{ uc $name } = $s;
            $case_map{ uc $name } = $name;
			push @{ $features{ $feature_name }}, $s;
            
        } elsif( $line =~ /^GLEW_FUN_EXPORT PFN(\w+)PROC __(\w+)/ ) {
            my( $name, $impl ) = ($1,$2);
            $case_map{ $name } = $impl;

        } elsif( $line =~ /^#define (\w+) GLEW_GET_FUN\(__(\w+)\)/) {
            my( $name, $impl ) = ($1,$2);
            $alias{ $impl } = $name;
		};
    };
}

# Now rewrite the names to proper case when we only have their uppercase alias
for my $name (sort keys %signature) {
    my $impl = $case_map{ $name } || $name;
    my $real_name = $alias{ $impl } || $impl;

	my $s = $signature{ $name };

	$s->{name} = $real_name;
	if( exists $alias{ $impl }) {
	    $s->{alias} = $alias{ $impl };
	};
};

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
    my $item = $signature{ $upper };

    my $name = $item->{name};
    
    push @exported_functions, $name;
    
    if( $manual{ $name }) {
        #warn "Skipping $name, already implemented in Glew.xs";
        next
    };
    
    # If we didn't see this, it's likely an OpenGL 1.1 function:
    my $aliased = $item->{alias};
    
    my $args = $item->{signature}; # XXX clean up the C arguments here
    die "No args for $upper" unless $args;
    my $type = $item->{restype}; # XXX clean up the C arguments here
    my $no_return_value;
    
    if( $type eq 'void' ) {
        $no_return_value = 1;
    };

    my $glewImpl;
    if( $aliased ) {
         ($glewImpl = $name) =~ s!^gl!__glew!;
    };
    
    my $xs_args = $item->{signature};
    if( $args eq 'void') {
        $args = '';
        $xs_args = '';
    };
    
    my @xs_args = split /,/, $xs_args;
    
    # Patch function signatures if we want other types
    if( my $sig = $signature_override{ $name }) {
        for my $arg (@xs_args) {
            my $name = $sig->{name};
            my $type = $sig->{type};
            if( $arg =~ /\b\Q$name\E$/ ) {
                $arg = "$type $name";
            };
        };
    };
    
    $xs_args = join ";\n    ", @xs_args;

    # Rewrite const GLwhatever foo[];
    # into    const GLwhatever* foo;
    1 while $xs_args =~ s!^\s*const (\w+)\s+(\w+)\[\d*\](;?)$!     const $1 * $2$3!m;
    1 while $xs_args =~ s!^\s*(\w+)\s+(\w+)\[\d*\](;?)$!     $1 * $2$3!m;
    
    # Meh. We'll need a "proper" C type parser here and hope that we don't
    # incur any macros
    my $known_types = join "|", @known_type;
    $args =~ s!\b(?:(?:const\s+)?\w+(?:(?:\s*(?:\bconst\b|\*)))*\s*(\w+))\b!$1!g;
    
    1 while $args =~ s!(\bconst\b|\*|\[\d*\])!!g;
    
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
sub slurp( $filename ) {
    open my $old_fh, '<:raw', $filename
        or die "Couldn't read '$filename': $!";
    join '', <$old_fh>;
}

    print $res;
sub save_file( $filename, $new ) {
    my $old = slurp( $filename );
    if( $new ne $old ) {
        warn "Saving new version of $filename";
        open my $fh, '>:raw', $filename
            or die "Couldn't write new version of '$filename': $!";
        print $fh $new;
    };
};


# Now rewrite OpenGL::Glew.pm if we need to:
if( ! @ARGV) {
	my $module = 'lib/OpenGL/Glew.pm';
	my $glFunctions = sprintf "our \@glFunctions = qw(\n    %s\n);", join "\n    ", @exported_functions;

	my %glGroups = map {
	    $_ => [ map { $_->{name} } @{$features{$_}} ],
	} sort keys %features;
	use Data::Dumper;
	$Data::Dumper::Sortkeys = 1;
	my $gltags = Dumper \%glGroups;
	$gltags =~ s!\$VAR1 = {!!;
	$gltags =~ s!};$!!;

	$new =~ s!\bour \@glFunctions = qw\(.*?\);!$glFunctions!sm;
	# our %EXPORT_TAGS_GL = (
    # );
    # # end of EXPORT_TAGS_GL
	# # end of EXPORT_TAGS_GL
	$new =~ s!(our \%EXPORT_TAGS_GL = \().+(\);\s+# end of EXPORT_TAGS_GL)$!$1$gltags$2!sm;
    $new =~ s!(our \%EXPORT_TAGS_GL = \().+(\);\s+# end of EXPORT_TAGS_GL)$!$1$gltags$2!sm;

    save_file( $module, $new);
};