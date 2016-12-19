#!perl -w
use strict;
use Test::More tests => 6;
use WWW::ShaderToy;
use Data::Dumper;

skip BAIL_OUT, ""
    unless $ENV{SHADERTOY_API_KEY};

my $api = WWW::ShaderToy->new(
    api_key => $ENV{SHADERTOY_API_KEY},
);
    
my $seascape = $api->by_shader_id('MdcSzX')->get;
ok $seascape, "We get an answer";
is $seascape->{Shader}->{info}->{id}, 'MdcSzX';
is $seascape->{Shader}->{info}->{name}, 'Seascape VR'
    or diag Dumper $seascape;

my $results = $api->find_shaders('Seascape')->get;
ok $results, "We get an answer";
ok !$results->{Error}, 'No error'
    or diag $results->{Error};
cmp_ok $results->{Shaders}, '>=', 2, 'We find at least two shaders of that name'
    or diag Dumper $results;

done_testing;