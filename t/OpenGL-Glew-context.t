#! /usr/bin/perl

use strict;
use warnings;
use Test::More;
use OpenGL::Glew ':all';

#eval 'use Test::Pod::Coverage';
#my $xerror = Prima::XOpenDisplay;
#plan skip_all => $xerror if defined $xerror;

my $tests = 2;
plan tests => $tests;

glewCreateContext();
glewInit();


diag glGetString(GL_VERSION);
