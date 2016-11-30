#!perl -w
use strict;
use ExtUtils::MakeMaker;
use Config '%Config';
use Devel::CheckOS 'os_is';

my $include = "-I. -Iinclude -Isrc";
my @libs;
my $define;

if( os_is('MSWin32')) {
    @libs = '-ldwmapi';
    $define = "-D_WIN32", # XXX Platform specific
} else {
    die "OSes other than Win32 / Win64 not supported";
};

# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'Win32::TransparentWindow',
    VERSION_FROM      => 'lib/Win32/TransparentWindow.pm',
    PREREQ_PM         => {
      'Filter::signatures'      => '0.06', # for empty function signatures

      'Carp' => 0,
    }, # e.g., Module::Name => 1.1
    ABSTRACT_FROM     => 'lib/Win32/TransparentWindow.pm', # retrieve abstract from module
    AUTHOR            => 'Max Maischein <corion@cpan.org>',
    LICENSE           => 'perl',
    #Value must be from legacy list of licenses here
    #http://search.cpan.org/perldoc?Module%3A%3ABuild%3A%3AAPI

    LIBS              => "@libs", # e.g., '-lm'
    DEFINE            => $define,
    INC               => $include,
    CONFIGURE_REQUIRES    => {
        'Devel::CheckOS' => 0,
        'ExtUtils::MakeMaker' => 0,
    },
    XSPROTOARG => '-prototypes',
    depend => {
      #'Glew.c' => 'Glew.xs auto-xs.inc src/glew.c include/GL/glew.h include/GL/wglew.h',
    },
);
