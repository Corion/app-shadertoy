# -*- mode: perl; c-basic-offset: 4; indent-tabs-mode: nil; -*-

use strict;
use ExtUtils::MakeMaker qw(WriteMakefile);
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.

# Normalize version strings like 6.30_02 to 6.3002,
# so that we can do numerical comparisons on it.
my $eumm_version = $ExtUtils::MakeMaker::VERSION;
$eumm_version =~ s/_//;

my $module = 'App::ShaderToy';
(my $main_file = "lib/$module.pm" ) =~ s!::!/!g;

# I should maybe use something like Shipwright...
regen_README($main_file);
#regen_EXAMPLES();

my @tests = map { glob $_ } 't/*.t', 't/*/*.t';

my %module = (
    NAME                => $module,
    AUTHOR              => q{Max Maischein <corion@cpan.org>},
    VERSION_FROM        => $main_file,
    ABSTRACT_FROM       => $main_file,
    META_MERGE => {
        "meta-spec" => { version => 2 },
        resources => {
            repository => {
                web => 'https://github.com/Corion/app-shadertoy',
                url => 'git://github.com/Corion/app-shadertoy.git',
                type => 'git',
            }
        },
        dynamic_config   => 0, # we promise to keep META.* up-to-date
        x_static_install => 1, # we are pure Perl and don't do anything fancy
    },

    MIN_PERL_VERSION => '5.006',

    ($eumm_version >= 6.3001
      ? ('LICENSE'=> 'perl')
      : ()),

    #PL_FILES            => {},
    BUILD_REQUIRES => {
        'ExtUtils::MakeMaker' => 0,
    },

    PREREQ_PM => {
      'OpenGL::Modern'          => '0.04',
      'Prima'                   => '1.53',
      'Prima::OpenGL'           => '0.07',
      'Filter::signatures'      => '0.08', # for functions without signatures
      'Imager'                  => 0,
      'Imager::File::JPEG'      => 0,
      'Imager::File::GIF'       => 0,

      'AnyEvent::Impl::Prima'   => 0,
      'JSON'                    => 0,
      'YAML'                    => 0,

      # Hot code reloading:
      'threads'                 => 0,
      'Thread::Queue'           => 0,
      'Filesys::Notify::Simple' => 0,
      'File::Basename'          => 0,
      'File::Spec'              => 0,

      # Switching between shaders
      'Time::Slideshow'         => '0.01',

      # Download shaders via HTTP
      'Future' => 0,
      'Future::HTTP' => 0,

      'Carp' => 0,
    },
    TEST_REQUIRES => {
        'Test::More' => 0,
    },

    dist                => { COMPRESS => 'gzip -9f', SUFFIX => 'gz', },
    clean               => { FILES => 'App-ShaderToy-*' },

    test            => { TESTS => join( ' ', @tests ) },
);

# This is so that we can do
#     require 'Makefile.PL'
# and then call get_module_info

sub get_module_info { %module }

if( ! caller ) {
    # I should maybe use something like Shipwright...
    regen_README($main_file);
    #regen_EXAMPLES();
    WriteMakefile1(get_module_info);
};

1;

sub WriteMakefile1 {  #Written by Alexandr Ciornii, version 0.21. Added by eumm-upgrade.
    my %params=@_;
    my $eumm_version=$ExtUtils::MakeMaker::VERSION;
    $eumm_version=eval $eumm_version;
    die "EXTRA_META is deprecated" if exists $params{EXTRA_META};
    die "License not specified" if not exists $params{LICENSE};
    if ($params{BUILD_REQUIRES} and $eumm_version < 6.5503) {
        #EUMM 6.5502 has problems with BUILD_REQUIRES
        $params{PREREQ_PM}={ %{$params{PREREQ_PM} || {}} , %{$params{BUILD_REQUIRES}} };
        delete $params{BUILD_REQUIRES};
    }
    if ($params{TEST_REQUIRES} and $eumm_version < 6.64) {
        $params{PREREQ_PM}={ %{$params{PREREQ_PM} || {}} , %{$params{TEST_REQUIRES}} };
        delete $params{TEST_REQUIRES};
    }
    delete $params{CONFIGURE_REQUIRES} if $eumm_version < 6.52;
    delete $params{MIN_PERL_VERSION} if $eumm_version < 6.48;
    delete $params{META_MERGE} if $eumm_version < 6.46;
    delete $params{META_ADD} if $eumm_version < 6.46;
    delete $params{LICENSE} if $eumm_version < 6.31;
    delete $params{AUTHOR} if $] < 5.005;
    delete $params{ABSTRACT_FROM} if $] < 5.005;
    delete $params{BINARY_LOCATION} if $] < 5.005;

    WriteMakefile(%params);
}

sub regen_README {
    eval {
        require Pod::Readme;
        Pod::Readme->VERSION('1.0.2'); #0.11 may hang

        my $parser = Pod::Readme->new();

        # Read POD from Module.pm and write to README
        $parser->parse_from_file($_[0], 'README');
    };
    eval {
        require Pod::Markdown;

        my $parser = Pod::Markdown->new();

        # Read POD from Module.pm and write to README
        $parser->parse_from_file($_[0]);
        open my $fh, '>', 'README.mkdn'
            or die "Couldn't open 'README.mkdn': $!";
        print $fh $parser->as_markdown;
    };
}

