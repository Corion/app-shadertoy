#!perl -w
BEGIN {
    # Mostly for the benefit of Cygwin
    $ENV{ LIBGL_USE_WGL } = 1;
}

use strict;
use Time::HiRes 'time';
use Getopt::Long;
use Pod::Usage;
use Time::Slideshow;

use OpenGL::Glew ':all';
use OpenGL::Shader::OpenGL4;
use OpenGL::Texture;
use OpenGL::Glew::Helpers qw( xs_buffer pack_GLint pack_GLfloat );
use OpenGL::ScreenCapture 'capture';

use Prima::noARGV;
use Prima qw( Application GLWidget Label FileDialog MsgBox);
use App::ShaderToy::FileWatcher;
use App::ShaderToy::Effect;

use YAML 'LoadFile';
use File::Basename qw(basename dirname);
use Cwd;
use FindBin qw($Bin);

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

=head1 NAME

shadertoy - playground for OpenGL shaders

=head1 SYNOPSIS

  shadertoy.pl shaders/myshader.frag

Displays the GLSL shader loaded from C<shaders/myshader.frag>
in a window. Other shaders with the same basename will also be loaded
as the vertex and tesselation shaders respectively.

=cut

# TO-DO: Add "free" time between frames
# TO-DO: Render function into bitmap (set FBO)
#          http://www.opengl-tutorial.org/intermediate-tutorials/tutorial-14-render-to-texture/
# TO-DO: Render mesh from bitmap
# TO-DO: Add bitmap loader into FBO
# TO-DO: Add "debug" shader that renders any FBO to the screen (side) as two triangles
# TO-DO: Add configuration to specify which FBOs are the source for other shaders
# TO-DO: Add animated (modern) GIF export and automatic upload
#        ffmpeg -f image2 -framerate 9 -i image_%003d.jpg -vf scale=531x299,transpose=1,crop=299,431,0,100 out.gif
# TO-DO: Add mp4 and webm export and automatic upload (to wherever)
# TO-DO: Load shadertoys from the web API: https://www.shadertoy.com/api
# TO-DO: Keep a configuration per-shader (maybe ${shader}.json) so we can store
#        textures there. Basically a fragment of the general configuration

GetOptions(
    'fullscreen'       => \my $fullscreen,
    'duration|d=i'     => \my $duration,             # not yet implemented
    'config|c=s'       => \my $config_file,
    'watch|w'          => \my $watch_file,
    'always-on-top|t'  => \my $stay_always_on_top,
    'glsl-version|g:s' => \my $glsl_version,
    'help!'            => \my $opt_help,
    'man!'             => \my $opt_man,
    'verbose+'         => \my $verbose,
    'quiet'            => \my $quiet,
) or pod2usage( -verbose => 1 ) && exit;
pod2usage( -verbose => 1 ) && exit if defined $opt_help;
pod2usage( -verbose => 2 ) && exit if defined $opt_man;
$verbose ||= 0;

$glsl_version ||= 120;

sub status($message,$level=0) {
    if( !$quiet and $level <= $verbose ) {
        print "$message\n";
    }
}

my $header = <<HEADER;
#version $glsl_version
uniform vec4      iMouse;
uniform vec3      iResolution;
uniform float     iGlobalTime;
uniform float     iChannelTime[4];
uniform vec4      iDate;
uniform float     iSampleRate;
uniform vec3      iChannelResolution[4];
uniform int       iFrame;
uniform float     iTimeDelta;
uniform float     iFrameRate;
uniform mat4      iCamera;
uniform mat4      iModel;
uniform mat4      iProjection;

uniform sampler2D iChannel0;
uniform sampler2D iChannel1;
uniform sampler2D iChannel2;
uniform sampler2D iChannel3;

/*
struct Channel
{
    vec3 resolution;
    float time;
};
uniform Channel iChannel[4];
*/
HEADER

my $frag_footer = <<'FRAGMENT_FOOTER';
void main() {
    vec4 color = vec4(0.0,0.0,0.0,1.0);
    mainImage( color, gl_FragCoord.xy );
    gl_FragColor = color;
}
FRAGMENT_FOOTER

sub shader_base($filename) {
    if($filename) {
        $filename =~ s{\.(compute
                   |vert
                   |geom
                   |tesselation
                   |tessellation_control
                   |frag
                   )\z}!!x;
    }
    $filename;
}

sub slurp($filename) {
    status( "Loading '$filename'", 1 );
    open my $fh, '<:bytes', $filename
        or die "Couldn't load '$filename': $!";
    local $/;
    return join '', <$fh>;
}

#version 330 core
#layout(location = 0) in vec2 pos;
my $default_vertex_shader = <<'VERTEX';
attribute vec2 pos;
uniform float     iGlobalTime;
uniform mat4      iCamera;
uniform mat4      iModel;
uniform mat4      iProjection;

void main() {
    mat4 move = mat4(1.0,0.0,0.0,0.0,
                     0.0,1.0,0.0,0.0,
                     0.0,0.0,1.0,0.0,
                     0.0,0.0,0.0,1.0
                 );
    mat4 mvp =  iProjection * iCamera * iModel * move;
    gl_Position = mvp * vec4(pos,0.0,1.0);
    //gl_Position = vec4(pos,0.0,1.0);
}
VERTEX

my $default_fragment_shader = <<'FRAGMENT';
void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 uv = fragCoord.xy / iResolution.xy;
    fragColor = vec4(uv,0.5+0.5*sin(iGlobalTime),1.0);
}
FRAGMENT

sub init_shaders($effect={}) {
    my %shader_args;
    my $filename = shader_base($effect->{fragment});
    if( defined $filename and length $filename) {
        # XXX We should trust $effect here instead of re-globbing:
        my( @files ) = glob "$filename.*";

        my %param_name = (
            frag => 'fragment',
            geom => 'geometry',
            vert => 'vertex',
        );

        %shader_args = map {
            #warn "<<$_>>";
            /\.(compute|vert|geom|tesselation|tessellation_control|frag)$/
                ? (( $param_name{ $1 } || $1 ) => slurp($_) )
                : () # else ignore the file
        } @files;
    };

    # Supply some defaults:
    $shader_args{ vertex } ||= $default_vertex_shader;

=for openGL 3.30 or later
    $shader_args{ geometry } ||= <<'GEOMETRY';
#version 330 core
layout(triangles) in;
layout(triangle_strip, max_vertices = 6) out;
// Passthrough vertex shader

void main() {
   int i;
   vec4 vertex;
   for(i = 0; i < gl_in.length(); i++) {
     gl_Position = gl_in[i].gl_Position;
     EmitVertex();
   };
   EndPrimitive();
}
GEOMETRY
=cut

    if( ! $shader_args{ fragment }) {
        status("No shader program given, using default fragment shader",1);
        $shader_args{ fragment } = $default_fragment_shader;
    };

    # Make the error numbers line up nicely
    $shader_args{ fragment }
        = join "\n",
              $header,
              "#line 1",
              $shader_args{ fragment },
              $frag_footer
              ;

    my $pipeline = App::ShaderToy::Effect->new(
        %$effect,
    );
    if( my $err = $pipeline->set_shaders(
        %shader_args
    )) {
        status("Error in Shader: $err");
        # XXX What should we do here? Revert to default shaders?
        return undef
    };

    return $pipeline;
};

sub absolute_name( $filename, $base_file ) {
    return unless defined $filename;
    return $filename unless defined $base_file;
    return File::Spec->rel2abs(
        $filename,
        dirname( $base_file ),
    );
}

sub load_config( $config_file ) {
    my $conf = LoadFile($config_file);

    # Adjust filenames relative to directory of config file:
    my $id = 0;
    for my $effect (@{$conf->{shaders}}) {
        $effect->{id} = $id++;
        for my $shader (qw(vertex fragment geometry tessellation tessellation_control)) {
            if( $effect->{$shader}) {
                $effect->{$shader}
                    = absolute_name( $effect->{$shader}, $config_file );
            };
        };
        for my $texture (@{ $effect->{channels}}) {
            $texture = absolute_name( $texture, $config_file );
        };
    };

    $conf
}

# We want static memory here
# A 2x2 flat-screen set of coordinates for the triangles
my @vertices = ( -1.0, -1.0,   1.0, -1.0,    -1.0,  1.0,
                  1.0, -1.0,   1.0,  1.0,    -1.0,  1.0
               );
my $vertices = pack_GLfloat(@vertices);
my $VAO;

# create a 2D quad Vertex Buffer
sub createUnitQuad() {
    glGenVertexArrays( 1,  xs_buffer(my $buffer, 8 ));
    $VAO = (unpack 'I', $buffer)[0];
    glBindVertexArray($VAO);
    glObjectLabel(GL_VERTEX_ARRAY,$VAO,length "myVAO","myVAO");
    status("Created VAO: " . glGetError,2);

    glGenBuffers( 1, xs_buffer($buffer, 8));
    my $VBO_Quad = (unpack 'I', $buffer)[0];
    glBindBuffer( GL_ARRAY_BUFFER, $VBO_Quad );
    glBufferData(GL_ARRAY_BUFFER, length $vertices, $vertices, GL_STATIC_DRAW);
    #glNamedBufferData( $VBO_Quad, length $vertices, $vertices, GL_STATIC_DRAW );     # Not supported on Win10+Intel...
    glObjectLabel(GL_BUFFER,$VBO_Quad,length "my triangles","my triangles");

    $VBO_Quad
}

sub use_quad($VBO_Quad, $pipeline) {
    my $vpos = glGetAttribLocation($pipeline->shader->{program}, 'pos');
    if( $vpos < 0 ) {
        die join " ",
            "Couldn't get shader attribute 'pos'.",
            "Likely your OpenGL version is below 3.3,",
            "or there is a compilation error in the shader programs?";
    };

    glEnableVertexAttribArray( $vpos );
    glVertexAttribPointer( $vpos, 2, GL_FLOAT, GL_FALSE, 0, 0 );

    glBindBuffer(GL_ARRAY_BUFFER, $VBO_Quad);
};

=for OpenGL

1. generate 2 VAOs vao0, vao1
2. generate 2 buffers buf0, buf1
3. bind buf0, fill with data
4. bind buf1, fill with data
5. bind vao0
6. bind buf0, glVertexAttribPointer
7. bind buf1
8. bind vao1
9. glVertexAttribPointer
10. bind vao0, draw command -> using contents of b0
11. bind vao1, draw command -> using contents of b1

=cut

sub drawUnitQuad_XY() {
    glDrawArrays( GL_TRIANGLES, 0, 6 ); # 2 times 3 elements
    #warn "Drawn: " . glGetError;
    #glDisableVertexAttribArray( $vpos );
    #warn "Disabled array drawn";
}

use vars qw($xres $yres);

my $frame = 1;
my $time;
my $started = time();
my $frame_second=int time;
my $frames;
my $iMouse = pack_GLfloat(0,0,0,0); # until we click somewhere
my $VBO_Quad;

my $state = {
    grab => 0,
    effect => 0,
};

my ($pipeline,$next_pipeline,$default_pipeline);
my $glWidget;

my @channel;

sub updateShaderVariables($pipeline,$xres,$yres) {
    my $program = $pipeline->shader;
    $time = time - $started;
    $program->setUniform1f( "iGlobalTime", $time);
    $program->setUniform3f( "iResolution", $xres, $yres, 1.0);
    $program->setUniformMatrix4fv( "iModel", 0, 1,0,0,0,
                                                0,1,0,0,
                                                0,0,1,0,
                                                0,0,0,1);
    $program->setUniformMatrix4fv( "iCamera", 0, 1,0,0,0,
                                                 0,1,0,0,
                                                 0,0,1,0,
                                                 0,0,0,1);
    $program->setUniformMatrix4fv( "iProjection", 0, 1,0,0,0,
                                                     0,1,0,0,
                                                     0,0,1,0,
                                                     0,0,0,1);

    if ( $state->{grab} ) {
        my ( $x, $y ) = $glWidget->pointerPos;
        $iMouse = pack_GLfloat($x,$y,0,0);
        $program->setUniform4fv( "iMouse", $iMouse);
    }

    #$pipeline->setUniform4fv( "iDate", 0, 0, 0, 0 );
    #$pipeline->setUniform1f(  "iSampleRate", 0.0 ); #this.mSampleRate);

    # We should do that not in the per-frame setup but maybe once
    # before we render the first frame or maybe use the stateless DSA functions,
    # but these require OpenGL 4.4 (Works On My Machine)
    if( $pipeline->channel_changed(0) ) {
        my @channel = @{ $pipeline->channels };
        for my $ch (0..3) {
            if( $channel[$ch]) {
                glActiveTexture($ch+GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D,$channel[$ch]->id);
                $program->setUniform1i("iChannel$ch",$ch);
            }
        };
    };

    # We should also set up the dimensions, also these never change
    # so we shouldn't update these variables here
    #$pipeline->setUniform1i(  "iFrame", $frame++ ); # this.mFrame );
    #$pipeline->setUniform1f(  "iTimeDelta", 0 ); # dtime);
    #$pipeline->setUniform1f(  "iFrameRate", 60 ); # weeeell
}

my $config = {
    window => {
        width => 480,
        height => 480,
    },
    shaders => [],
    delay => 0,
};
if( $config_file ) {
    status( "Using config file '$config_file'", 1 );
    $config = load_config($config_file);
};

sub get_slideshow( $config ) {
    my $slideshow= Time::Slideshow->new(
        starttime => 0,
        slides    => $config->{shaders},
        shuffle   => 0, # pseudo-rng
        duration  => $config->{duration},
    );
    $slideshow
};

if( @{ $config->{shaders}} > 1 ) {
    $state->{slideshow} = get_slideshow( $config );
};
my $paused;

sub closeWindow($window) {
    status("Bye",2);
    if( $App::ShaderToy::FileWatcher::watcher ) {
        status("Stopping filesystem watcher thread",2);
        $App::ShaderToy::FileWatcher::watcher->kill('KILL')->detach;
        undef $App::ShaderToy::FileWatcher::watcher;
    };
    $window->close;
}

my $window = Prima::MainWindow->create(
    menuItems => [['~File' => [
        [ '~Open' => 'Ctrl+O' => '^O' => \&open_file ],
        [ ( $stay_always_on_top ? '*' : '') . 'top', 'Stay on ~top', sub {
            my ( $window, $menu ) = @_;
            recreate_gl_widget( sub { $window->onTop( $stay_always_on_top = $window->menu->toggle($menu))});
        } ],
        [ ( $fullscreen ? '*' : '') . 'fullscreen', '~Fullscreen', 'Alt+Enter', km::Alt|kb::Enter, sub {
            my ( $window, $menu ) = @_;
            $fullscreen = $window->menu->toggle($menu);
            $fullscreen ? $window->hide : $window->show if $stay_always_on_top;
            recreate_gl_widget();
        } ],
        [ 'pause' => '~Play/Pause' => 'Space' => kb::Space => sub {
            my ( $window, $menu ) = @_;
            if ( $paused = $window->menu->toggle($menu) ) {
                $window->Timer->stop;
            } else {
                $window->Timer->start;
            }
        } ],
        [ 'next' => '~Next shader' => 'Right' => kb::Right => sub($window,$menu,@stuff) {
            $state->{effect} = ($state->{effect} + 1) % @{ $config->{shaders} };
            undef $state->{slideshow};
            warn "Setting up next shader $state->{effect}";
            $next_pipeline = activate_shader( $config->{shaders}->[ $state->{effect} ] );
        } ],
        [ 'prev' => 'P~revious shader' => 'Left' => kb::Left => sub($window,$menu,@stuff) {
            $state->{effect} = ($state->{effect} + @{$config->{shaders}} -1) % @{ $config->{shaders} };
            undef $state->{slideshow};
            warn "Setting up prev shader $state->{effect}";
            $next_pipeline = activate_shader( $config->{shaders}->[ $state->{effect} ] );
        } ],
        [ 'pause' => '~Play/Pause' => 'Space' => kb::Space => sub {
            my ( $window, $menu ) = @_;
            if ( $paused = $window->menu->toggle($menu) ) {
                $window->Timer->stop;
            } else {
                $window->Timer->start;
            }
        } ],
        [ '~Save screenshot' => 'F5' => 'F5' => sub {
            my $template = 'capture%03d.png';
            my $idx = 1;

            my $name;
            do {
                $name = sprintf $template, $idx++;
            } until not -f $name;

            capture()->save($name)
                or die "error saving screen to '$name': $@";
            status("Saved to '$name'");
        } ],
        [],
    	[ 'E~xit' => 'Alt+X' => '@X' => sub { closeWindow(shift) }],
    ]]],
    width     => $config->{window}->{width},
    height    => $config->{window}->{height},
    onTop     => $stay_always_on_top,
    onKeyDown => sub {
        my( $self, $code, $key, $mod ) = @_;
        #print "@_\n";
        # XXX Move this into a separate file
        if( $key == kb::Esc ) {
            closeWindow( $self );
        }
    },
);

sub set_shadername( $effect ) {
    my $shadername_vis = exists $effect->{title}
                       ? $effect->{title}
                       : '<default shader>';
    $window->set(
        text => "$shadername_vis - ShaderToy",
    );
}

sub config_from_filename($filename) {
    my $c = $config;
    $c->{shaders} = [{
        id => 0,
        fragment => File::Spec->rel2abs( $filename, Cwd::getcwd() ),
    }];
    $c
}

my ($filename)= @ARGV;
#my $effect;
if( $filename ) {
    $config = config_from_filename( $filename );
} else {
    # nothing to do
};
$state->{current_effect} = 0;
#$effect = $config->{shaders}->[0];

my $status = $window->insert(
    Label => (
        # growMode => gm::Client,
        geometry => gt::Place,
        place => {
            x => 0,
            y => 0,
            anchor => 'sw',
            relwidth => 1.0,
            height => $window->font->height + 4,
        },
        alignment => ta::Center,
        text => '00.0 fps',
    ),
);

sub activate_shader( $effect, $fallback_default = 1 ) {
    my $res = init_shaders( $effect );
    if( !$res or !$res->shader->{program}) {
        if( $fallback_default ) {
            status( sprintf( "The shader '%s' did not load, using default shader", $effect->{fragment} ),0 );
            $res = $default_pipeline;
        } else {
            return undef
        }
    };
    set_shadername( $effect );

    # Load some textures if they are configured for the shader
    if( $res->channels and ! eval {
        $res->set_channels(
            @{ $res->{channels}}
        );
        1
    }) {
        warn "Couldn't load all textures: $@";
    };

    if( $watch_file ) {
        status("Watching files is enabled");
        App::ShaderToy::FileWatcher::watch_files( $effect->{fragment} );
    };
    $started = time();

    $res
}

sub leave_fullscreen {
     $fullscreen = 0;
     $window->menu->uncheck('fullscreen');
     $window->show if $stay_always_on_top;
     recreate_gl_widget();
}

my $glInitialized;

sub create_gl_widget {
    my %param;

    if( $fullscreen ) {
        my $primary = $::application->get_monitor_rects->[0];
        %param = (
	    clipOwner  => 0,
            origin     => [@{$primary}[0,1]],
            size       => [@{$primary}[2,3]],
            onLeave    => \&leave_fullscreen,
        );
    } else {
        %param = (
            growMode   => gm::Client,
            rect       => [0, $window->font->height + 4, $window->width, $window->height],
        );
    }
   
    $glWidget = Prima::GLWidget->new(
        #pack    => { expand => 1, fill => 'both'},
        %param,
        owner      => $window,
        gl_config => {
            pixels => 'rgba',
            color_bits => 32,
            depth_bits => 24,
        },
        onPaint => sub {
            my $self = shift;

            my $render_start = time;

            if( ! $glInitialized ) {
                # Initialize Glew. onCreate is too early unfortunately
                my $err = OpenGL::Glew::glewInit();
                if( $err != GLEW_OK ) {
                    die "Couldn't initialize Glew: ".glewGetErrorString($err);
                };
                status( sprintf ("Initialized using GLEW %s", OpenGL::Glew::glewGetString(GLEW_VERSION)));
                status( glGetString(GL_VERSION));
                $glInitialized = 1;
            };

            if( ! $default_pipeline ) {
                # Create a fallback shader so we don't just show a black screen
                $default_pipeline = init_shaders();
            };

            if( $next_pipeline and $next_pipeline->shader->{program}) {
                # We have a next shader ready to go, so swap it in and use it
                status("Swapping in new shader",2);
                $pipeline = $next_pipeline;
                undef $next_pipeline;
            };

            if( ! $pipeline ) {
                # Set up our shader
                my $effect = $config->{ shaders }->[ $state->{current_effect} ];
                $pipeline = activate_shader($effect);
                $VBO_Quad ||= createUnitQuad();

                use_quad($VBO_Quad,$pipeline);
            };

            if( $pipeline ) {
                glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

                $pipeline->shader->Enable();
                updateShaderVariables($pipeline,$self->width,$self->height);

                drawUnitQuad_XY();
                $pipeline->shader->Disable();
                glFlush();

                my $taken = time - $render_start;

                $frames++;
                if( int(time) != $frame_second) {
                    $status->set(
                        text => sprintf '%0.2f fps / %d ms taken rendering', $frames, 1000*$taken
                    );

                    $frames = 0;
                    $frame_second = int(time);
                };
            };

            # XXX Check if it's time to quit

            # Maybe this should happen asynchronously instead of in
            # the 16ms paint loop
            my %changed;
            for my $filename (App::ShaderToy::FileWatcher::files_changed()) {
                $changed{ shader_base( $filename ) } = $filename;
            };
            if( keys %changed ) {
                my @shader = sort { $a cmp $b } values %changed;
                # Now, find our current shader/effect configuration needs reloading:
                my( $effect ) = grep { $_->{fragment} eq $shader[0] } @{ $config->{shaders} };
                if( $effect ) {
                    status("$shader[0] changed, reloading",2);
                    $next_pipeline = activate_shader($effect, undef);
                    if( $next_pipeline ) {
                        status("$shader[0] changed, reloaded",1);
                    };
                };
            } elsif( $state->{slideshow} and $state->{slideshow}->current_slide != $effect) {
                $effect = $state->{slideshow}->current_slide;
                $next_pipeline = activate_shader($effect, undef);
                status("Changing to next shader",1);
            };
        },
        onMouseDown  => sub { $state->{grab} = 1 },
        onMouseUp    => sub { $state->{grab} = 0 },
        onSize => sub {
            my( $self ) = @_;
            ( $xres,$yres ) = $self->size;
        },
        onClose => sub {
            undef $pipeline;
            undef $next_pipeline;
        },
    );

    $glWidget->focus if $fullscreen;
}

sub recreate_gl_widget( $cb=undef ) {
    $glWidget->destroy;
    undef $pipeline;
    undef $VBO_Quad;
    $cb->() if $cb;
    create_gl_widget();
}

create_gl_widget();

# Start our timer for displaying an OpenGL frame
$window->insert( Timer =>
    timeout => 10,
    name    => 'Timer',
    onTick  => sub {
        $glWidget->repaint;
    }
)->start;

Prima->run;

my $opendlg;
sub open_file {
    $opendlg //= Prima::OpenDialog->new(
        filter => [
            ['Shaders' => '*.frag*'],
            ['All files' => '*'],
        ],
        directory => "$Bin/../shaders",
    );
    return unless $opendlg->execute;
    $filename = $opendlg->fileName;
    return message("Not found") unless -f $filename;

    $config = config_from_filename( $filename );
    $effect = $config->{shaders}->[0];
    $next_pipeline = activate_shader( $config->{shaders}->[ $state->{effect} ] );
    $pipeline = undef;
}

=head1 ARGUMENTS

  --help          print Options and Arguments
  --man           print complete man page

=head1 OPTIONS

  --verbose       output more messages

  --quiet         don't output anything except errors

  --config        configuration file of shader(s) to display

  --fullscreen    display fullscreen

  --duration      time in seconds until to quit, default is to run forever

  --watch         watch and reload shaders if a file changes

  --glsl-version  specify version header for shaders

=cut
