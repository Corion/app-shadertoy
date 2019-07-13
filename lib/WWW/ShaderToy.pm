package WWW::ShaderToy;
use strict;
use JSON 'from_json';
use Moo 2.0; # we don't want fatal warnings
use feature 'signatures';
no warnings 'experimental::signatures';

use Future;
use Future::HTTP;
use URI::Escape;
use Data::Dumper;

our $VERSION = '0.01';

=head1 NAME

WWW::ShaderToy - access the https://www.shadertoy.com API

=head1 SYNOPSIS

  my $api = WWW::ShaderToy->new(
    api_key => $ENV{SHADERTOY_API_KEY},
  );

  my $seascape = $api->by_shader_id('MdcSzX')->get;
  print $seascape->{Shader}->{info}->{name}, "\n"; # Seascape VR

=cut

our $base_url = 'https://www.shadertoy.com/';

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

sub request( $self, $method, $endpoint, %options ) {
    my $uri = $self->api_endpoint( $endpoint );
    $uri = $self->add_key($uri);
    warn $uri;
    $self->ua->http_request( $method, $uri )
    ->then(sub($body, $headers) {
        my @decoded = from_json($body);
        Future->done(@decoded);
    })
}

sub shaders( $self, %options ) {
    $self->request( 'GET', 'shaders', %options )
}

sub by_shader_id( $self, $id, %options ) {
    my $str = sprintf 'shaders/%s', uri_escape($id);
    $self->request( 'GET', $str, %options )
}

sub find_shaders( $self, $string, %options ) {
    my $str = sprintf 'shaders/query/%s', uri_escape($string);
    $self->request( 'GET', $str, %options )
}

1;
