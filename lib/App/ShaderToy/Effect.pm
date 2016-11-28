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
    my $self = bless (\%config => $class);

    if( $self->{channels}) {
        $self->set_channels( @{ $self->{channels} });
    }

    $self
}

sub shader( $self ) {
    $self->{shader}
}

sub title( $self ) {
    $self->{title} || '<untitled>'
}

sub channels( $self ) {
    $self->{channels}
}

sub set_shaders( $self, %shaders ) {
    $self->shader->Load( %shaders )
}

sub set_channels( $self, @channels ) {
    my @new;
    for my $ch (@channels) {
        if( ref $ch ) {
            push @new, $ch
        } else {
            push @new, OpenGL::Texture->load($ch);
        }
    };
    $self->{channels} = \@new;
}

1;