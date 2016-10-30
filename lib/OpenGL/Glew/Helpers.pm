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
    
    glGetShaderInfoLog_p
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


sub glGetShaderInfoLog_p($shader) {
    my $p_buffer = pack_ptr(my $buffer, 1024*64); # 64k should be enough for everybody
    my $p_result_len = pack_ptr(my $result_len, 4);
    
    glGetShaderInfoLog($shader, length $buffer, $p_result_len, $p_buffer );
    return substr( $p_buffer, $p_result_len );
};

sub croak_on_gl_error() {
    my $error = glGetError();
    if( $error != GL_NO_ERROR ) {
        croak $glErrorStrings{ $error } || "Unknown OpenGL error: $error"
    };
}

1;