#!perl -w
BEGIN {
    # Mostly for the benefit of Cygwin
    $ENV{LIBGL_USE_WGL} = 1;
}

use strict;
use Time::HiRes 'time';
use Getopt::Long;
use Pod::Usage;

use OpenGL::Glew ':all';
use OpenGL::Shader::OpenGL4;
use OpenGL::Texture;
use OpenGL::Glew::Helpers qw( xs_buffer pack_GLint pack_GLfloat );
use OpenGL::ScreenCapture 'capture';

use Prima::noARGV;
use Prima qw( Application GLWidget Label );
use App::ShaderToy::FileWatcher;

use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

=head1 NAME

shadertoy - playground for OpenGL shaders

=head1 SYNOPSIS

  shadertoy.pl shaders/myshader.fragment

Displays the GLSL shader loaded from C<shaders/myshader.fragment>
in a window. Other shaders with the same basename will also be loaded
as the vertex and tesselation shaders respectively.

=cut

# TO-DO: Add playlist (and other configuration) support using Time::Slideshow
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

GetOptions(
  'fullscreen'     => \my $fullscreen, # not yet implemented
  'duration|d=i'   => \my $duration,   # not yet implemented
  'watch|w'        => \my $watch_file,
  'always-on-top|t'=> \my $stay_always_on_top,
  'glsl-version|g:s' => \my $glsl_version,
  'help!'          => \my $opt_help,
  'man!'           => \my $opt_man,
  'verbose+'       => \my $verbose,
  'quiet'          => \my $quiet,
) or pod2usage(-verbose => 1) && exit;
pod2usage(-verbose => 1) && exit if defined $opt_help;
pod2usage(-verbose => 2) && exit if defined $opt_man;
$verbose ||= 0;

$glsl_version ||= 120;

sub status($message,$level=0) {
    if( !$quiet and $level <= $verbose ) {
        print "$message\n";
    };
};

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
    if( $filename ) {
        $filename
            =~ s{\.(compute
                   |vertex
                   |geometry
                   |tesselation
                   |tessellation_control
                   |fragment
                   )\z}!!x;
    };
    $filename
}

sub slurp($filename) {
    status("Loading '$filename'", 1);
    open my $fh, '<:bytes', $filename
        or die "Couldn't load '$filename': $!";
    local $/;
    return join '', <$fh>
}

sub init_shaders($filename) {
    my %shader_args;
    $filename = shader_base($filename);
    if( defined $filename and length $filename) {
        my( @files ) = glob "$filename.*";

        %shader_args = map {
            warn "<<$_>>";
            /\.(compute|vertex|geometry|tesselation|tessellation_control|fragment)$/
                ? ($1 => slurp($_) )
                : () # else ignore the file
        } @files;
    };

    # Supply some defaults:
#version 330 core
#layout(location = 0) in vec2 pos;
    $shader_args{ vertex } ||= <<'VERTEX';
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
    //sgl_Position = vec4(pos,0.0,1.0);
}
VERTEX

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
        $shader_args{ fragment } = <<'FRAGMENT';
void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 uv = fragCoord.xy / iResolution.xy;
    fragColor = vec4(uv,0.5+0.5*sin(iGlobalTime),1.0);
}
FRAGMENT
    };

    $shader_args{ fragment }
        = join "\n",
              $header,
              "#line 1",
              $shader_args{ fragment },
              $frag_footer
              ;

    my $pipeline = OpenGL::Shader::OpenGL4->new(
        strict_uniforms => 0,
    );
    if( my $err = $pipeline->Load(
        %shader_args
    )) {
        status("Error in Shader: $err");
        # XXX What should we do here? Revert to default shaders?
        return undef
    };

    return $pipeline;
};

# We want static memory here
# A 2x2 flat-screen set of coordinates for the triangles
my @vertices = ( -1.0, -1.0,   1.0, -1.0,    -1.0,  1.0,
                  1.0, -1.0,   1.0,  1.0,    -1.0,  1.0
               );
my $vertices = pack_GLfloat(@vertices);
my $VAO;
my $VBO_Quad;

# create a 2D quad Vertex Buffer
sub createUnitQuad($pipeline) {
    glGenVertexArrays( 1,  xs_buffer(my $buffer, 8 ));
    $VAO = (unpack 'I', $buffer)[0];
    glBindVertexArray($VAO);
    glObjectLabel(GL_VERTEX_ARRAY,$VAO,length "myVAO","myVAO");
    status("Created VAO: " . glGetError,2);

    glGenBuffers( 1, xs_buffer($buffer, 8));
    $VBO_Quad = (unpack 'I', $buffer)[0];
    glBindBuffer( GL_ARRAY_BUFFER, $VBO_Quad );
    glBufferData(GL_ARRAY_BUFFER, length $vertices, $vertices, GL_DYNAMIC_DRAW);
    glObjectLabel(GL_BUFFER,$VBO_Quad,length "my triangles","my triangles");
    #warn sprintf "%08x", glGetError;
    # Not supported on Win10+Intel...
    #glNamedBufferData( $VBO_Quad, length $vertices, $vertices, GL_STATIC_DRAW );
    #warn sprintf "%08x", glGetError;

    my $vpos = glGetAttribLocation($pipeline->{program}, 'pos');
    if( $vpos < 0 ) {
        die "Couldn't get shader attribute 'pos'. Likely your OpenGL version is below 3.3, or there is a compilation error in the shader programs?";
    };

    glEnableVertexAttribArray( $vpos );
    glVertexAttribPointer( $vpos, 2, GL_FLOAT, GL_FALSE, 0, 0 );

    glBindBuffer(GL_ARRAY_BUFFER, $VBO_Quad);
}

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
my $iMouse = pack_GLfloat(0,0,0,0);

my $config = {
    grab => 0,
};

my ($pipeline,$next_pipeline);
my $glWidget;

my @channel;

sub updateShaderVariables($pipeline,$xres,$yres) {
    $time = time - $started;
    $pipeline->setUniform1f( "iGlobalTime", $time);
    $pipeline->setUniform3f( "iResolution", $xres, $yres, 1.0);
    $pipeline->setUniformMatrix4fv( "iModel", 0, 1,0,0,0,
                                                 0,1,0,0,
                                                 0,0,1,0,
                                                 0,0,0,1);
    $pipeline->setUniformMatrix4fv( "iCamera", 0, 1,0,0,0,
                                                  0,1,0,0,
                                                  0,0,1,0,
                                                  0,0,0,1);
    $pipeline->setUniformMatrix4fv( "iProjection", 0, 1,0,0,0,
                                                      0,1,0,0,
                                                      0,0,1,0,
                                                      0,0,0,1);

    if ( $config->{grab} ) {
        my ( $x, $y ) = $glWidget->pointerPos;
        $iMouse = pack_GLfloat($x,$y,0,0);
        $pipeline->setUniform4fv( "iMouse", $iMouse);
    }

    #$pipeline->setUniform4fv( "iDate", 0, 0, 0, 0 );
    #$pipeline->setUniform1f(  "iSampleRate", 0.0 ); #this.mSampleRate);

    # We should do that not in the per-frame setup but maybe once
    # before we render the first frame or maybe use the stateless DSA functions,
    # but these require OpenGL 4.4 (Works On My Machine)
    for my $ch (0..3) {
        if( $channel[$ch]) {
            glActiveTexture($ch+GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D,$channel[$ch]->id);
            $pipeline->setUniform1i("iChannel$ch",$ch);
        }
    };

    # We should also set up the dimensions, also these never change
    # so we shouldn't update these variables here
    #$pipeline->setUniform1i(  "iFrame", $frame++ ); # this.mFrame );
    #$pipeline->setUniform1f(  "iTimeDelta", 0 ); # dtime);
    #$pipeline->setUniform1f(  "iFrameRate", 60 ); # weeeell
}

my $window = Prima::MainWindow->create(
    width     => 480,
    height    => 160,
    onTop     => $stay_always_on_top,
    onKeyDown => sub {
        my( $self, $code, $key, $mod ) = @_;
        #print "@_\n";
        # XXX handle ^O to load a new shader
        # XXX handle space bar to pause/play
        # XXX Add a menu for the options
        # XXX Move this into a separate file
        if( $key == kb::F11 ) {
            my @wsaverect = $self-> rect;
            $self->rect( 0, 0, $self->owner->size);

        } elsif( $key == kb::F5 ) {
            my( $name ) = 'capture.png';
            capture()->save($name) or die "error saving: $@";
            status("Saved to '$name'");

        } elsif( $key == kb::Esc ) {
            status("Bye",2);
            if( $App::ShaderToy::FileWatcher::watcher ) {
                status("Stopping filesystem watcher thread",2);
                $App::ShaderToy::FileWatcher::watcher->kill('KILL')->detach;
                undef $App::ShaderToy::FileWatcher::watcher;
            };
            $::application->close
        };
    },
);
#$window->set(
#    top => 1000,
#    left => 128,
#);

sub set_shadername( $shadername ) {
    my $shadername_vis = defined $shadername ? $shadername : '<default shader>';

    $window->set(
        text => "$shadername_vis - ShaderToy",
    );
}

my ($filename)= @ARGV;

set_shadername( $filename );

if( $watch_file ) {
    status("Watching files is enabled");
    App::ShaderToy::FileWatcher::watch_files( $filename );
};

my $status = $window->insert(
    Label => (
        # growMode => gm::Client,
        geometry => gt::Place,
        place => {
            x => 0,
            y => 0,
            anchor => 'sw',
            relwidth => 1.0,
            height => 16,
        },
        alignment => ta::Center,
        text => '00.0 fps',
    ),
);

my $initialized;
$glWidget = $window->insert(
    'Prima::GLWidget' =>
    #pack    => { expand => 1, fill => 'both'},
    growMode => gm::Client,
    rect => [0, 16, $window->width, $window->height],
    gl_config => {
        pixels => 'rgba',
        color_bits => 32,
        depth_bits => 24,
    },
    onPaint => sub {
        my $self = shift;

        my $render_start = time;

        if( ! $initialized ) {
            my $err = OpenGL::Glew::glewInit();
            if( $err != GLEW_OK ) {
                die "Couldn't initialize Glew: ".glewGetErrorString($err);
            };
            status( sprintf ("Initialized using GLEW %s", OpenGL::Glew::glewGetString(GLEW_VERSION)));
            status( glGetString(GL_VERSION));
            $initialized = 1;
        };

        if( ! $default_pipeline ) {
            # Create a fallback shader so we don't just show a black screen
            $default_pipeline = init_shaders('');
        };
        if( ! $pipeline ) {
            # Set up our shader
            $pipeline = init_shaders($filename);
            if( !$pipeline or !$pipeline->{program}) {
                warn "The shader '$filename' did not load, using default shader";
                $pipeline = $default_pipeline;
                set_shadername( 'default shader' );
            };

            $VBO_Quad ||= createUnitQuad($pipeline);

            # Load some textures
            #$channel[0] = OpenGL::Texture->load('demo/shadertoy-01-seascape-still.png');
            $channel[0] = OpenGL::Texture->load('demo/IMG_7379_gray.png');
        };

        if( $next_pipeline and $next_pipeline->{program}) {
            # We have a next shader ready to go, so swap it in and use it
            status("Swapping in new shader",2);
            $pipeline = $next_pipeline;
            undef $next_pipeline;
        };

        if( $pipeline ) {
            glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

            $pipeline->Enable();
            updateShaderVariables($pipeline,$self->width,$self->height);

            drawUnitQuad_XY();
            $pipeline->Disable();
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

        # Maybe this should happen asynchronously
        my %changed;
        for my $filename (App::ShaderToy::FileWatcher::files_changed()) {
            $changed{ shader_base( $filename ) } = $filename;
        };
        if( keys %changed ) {
            my @shader = sort { $a cmp $b } values %changed;
            status("$shader[0] changed, reloading",2);
            $next_pipeline = init_shaders($shader[0]);
            if( $next_pipeline ) {
                status("$shader[0] changed, reloaded",1);
            };
        };
    },
    onMouseDown  => sub { $config->{grab} = 1 },
    onMouseUp    => sub { $config->{grab} = 0 },
    onSize => sub {
        my( $self ) = @_;
        ( $xres,$yres ) = $self->size;
    },
    onClose => sub {
        warn "Closing window";
        undef $pipeline;
        undef $next_pipeline;
    },
);

# Start our timer for displaying an OpenGL frame
$window->insert( Timer =>
    timeout => 5,
    onTick  => sub {
        $glWidget->repaint;
    }
)->start;

Prima->run;

=head1 ARGUMENTS

  --help          print Options and Arguments
  --man           print complete man page

=head1 OPTIONS

  --verbose       output more messages

  --quiet         don't output anything except errors

  --fullscreen    display fullscreen

  --duration      time in seconds until to quit, default is to run forever

  --watch         watch and reload shaders if a file changes

=cut