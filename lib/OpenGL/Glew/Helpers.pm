package OpenGL::Glew::Helpers;
use strict;
use Exporter 'import';
use Carp qw(croak);
use Filter::signatures;

use OpenGL::Glew qw(
    GL_NO_ERROR
    GL_INVALID_ENUM
    GL_INVALID_VALUE
    GL_INVALID_OPERATION
    GL_STACK_OVERFLOW
    GL_STACK_UNDERFLOW
    GL_OUT_OF_MEMORY
    GL_TABLE_TOO_LARGE
    
    glGetError
    glGetShaderInfoLog
    glGetProgramInfoLog
);

use feature 'signatures';
no warnings 'experimental::signatures';

=head1 NAME

OpenGL::Glew::Helpers - perlish API for OpenGL

=head1 WARNING

This API is an experiment and will change.

=cut

use vars qw(@EXPORT_OK $VERSION %glErrorStrings);
$VERSION = '0.01';

@EXPORT_OK = qw(
    pack_GLuint
    pack_GLint
    pack_GLstrings
    pack_ptr
    xs_buffer
    
    glGetShaderInfoLog_p
    glGetProgamInfoLog_p
    croak_on_gl_error
);


%glErrorStrings = (
    GL_NO_ERROR() => 'No error has been recorded.',
    GL_INVALID_ENUM() => 'An unacceptable value is specified for an enumerated argument.',
    GL_INVALID_VALUE() => 'A numeric argument is out of range.',
    GL_INVALID_OPERATION() => 'The specified operation is not allowed in the current state.',
    GL_STACK_OVERFLOW() => 'This command would cause a stack overflow.',
    GL_STACK_UNDERFLOW() => 'This command would cause a stack underflow.',
    GL_OUT_OF_MEMORY() => 'There is not enough memory left to execute the command.',
    GL_TABLE_TOO_LARGE() => 'The specified table exceeds the implementation\'s maximum supported table size.',
);


sub pack_GLuint(@gluints) {
    pack 'I*', @gluints
}

sub pack_GLint(@gluints) {
    pack 'I*', @gluints
}

# No parameter declaration because we don't want copies
sub pack_GLstrings {
    pack 'P*', @_
}

# No parameter declaration because we don't want copies
sub pack_ptr {
    $_[0] = "\0" x $_[1];
    pack 'P', $_[0];
}

# No parameter declaration because we don't want copies
sub xs_buffer {
    $_[0] = "\0" x $_[1];
}

sub glGetShaderInfoLog_p( $shader ) {
    my $bufsize = 1024*64;
    glGetShaderInfoLog( $shader, $bufsize, xs_buffer(my $len, 8), xs_buffer(my $buffer, $bufsize));
    $len = unpack 'I', $len;
    return substr $buffer, 0, $len;
}

sub glGetProgramInfoLog_p( $program ) {
    my $bufsize = 1024*64;
    glGetProgramInfoLog( $program, $bufsize, xs_buffer(my $len, 8), xs_buffer(my $buffer, $bufsize));
    $len = unpack 'I', $len;
    return substr $buffer, 0, $len;
}


sub croak_on_gl_error() {
    my $error = glGetError();
    if( $error != GL_NO_ERROR ) {
        croak $glErrorStrings{ $error } || "Unknown OpenGL error: $error"
    };
}

1;