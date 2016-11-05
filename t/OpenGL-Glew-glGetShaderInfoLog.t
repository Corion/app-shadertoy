#!perl -w
use strict;
use Test::More tests => 2;
use OpenGL::Glew ':all';
use OpenGL::Glew::Helpers qw(
    pack_ptr
    pack_GLstrings
    pack_GLuint
    xs_buffer

    glGetShaderInfoLog_p
);

glewCreateContext();
glewInit();

# Set up a windowless OpenGL context?!
my $id = glCreateShader(GL_VERTEX_SHADER);
diag "Got vertex shader $id, setting source";

my $shader = <<SHADER;
int i;
provoke a syntax error
SHADER

my $shader_length = length($shader);
glShaderSource($id, 1, pack_GLstrings($shader), pack_GLuint($shader_length));

glCompileShader($id);
    
warn "Looking for errors";
glGetShaderiv($id, GL_COMPILE_STATUS, xs_buffer(my $ok,8));
$ok = unpack 'I', $ok;
if( $ok == GL_FALSE ) {
    pass "We recognize an invalid shader as invalid";
    my $log = glGetShaderInfoLog_p($id);
    isn't $log, '', "We get some error message";
      
    diag "Error message: $log";
      
} else {
    fail "We recognize an invalid shader as valid";
};

done_testing;