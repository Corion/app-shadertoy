package WWW::ShaderToy;
use strict;
use JSON;
use Moo => 2.0; # we don't want fatal warnings
use vars qw($VERSION $base_url);
use feature 'signatures';
no warnings 'experimental::signatures';

use Future::HTTP;

$base_url = 'https://www.shadertoy.com/';

has base_url => (
    is      => 'rw',
    default => sub { $base_url },
);

has api_key => (
    is      => 'rw',
    default => undef,
);

has ua => (
    is      => 'rw',
    default => sub { Future::HTTP->new() },
);

sub api_base($self) {
    $self->base_url . 'api/v1/';
}

sub api_endpoint($self, $endpoint) {
    $self->api_base . $endpoint;
}

sub preset_url($self, $preset) {
    $self->{base_url} . $preset
}

sub add_key( $self, $url ) {
    $url . '?key=' . $self->api_key
}

sub process_result( $self, $response ) {
    json_decode( $response )
}

sub request( $self, $endpoint, %options ) {
    my $uri = $self->api_endpoint( $endpoint ) . 
    $self->ua->request( $uri )
}

sub shaders( $self, %options ) {
    $self->request( 'shaders', %options )
}

sub by_shader_id( $self, $id ) {
    $self->request( 'shaders', %options )
}

sub find_shaders( $self, $string, %options ) {
    my $str = sprintf 'shaders/query/%s', uri_escape($string);
    $self->request( $str, %options )
}

1;