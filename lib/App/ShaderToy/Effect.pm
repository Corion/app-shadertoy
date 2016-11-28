package App::ShaderToy::Effect;
use strict;

use OpenGL::Shader::OpenGL4;

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

=head1 NAME

App::ShaderToy::Effect - encapsulate a shader program with its configuration

=cut

sub new( $class, %config ) {
    $config{ shader } ||= OpenGL::Shader::OpenGL4->new(
        strict_uniforms => 0,
    );
    bless (\%config => $class)
}

sub shader( $self ) {
    $self->{shader}
}

sub set_shaders( $self, %shaders ) {
    $self->shader->Load( %shaders )
}

1;