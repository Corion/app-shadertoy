#!perl -w
use strict;
use OpenGL::Glew ':all';
use OpenGL::Shader::OpenGL4;
use Prima qw( Application GLWidget Label );
use OpenGL::Glew::Helpers qw( xs_buffer pack_GLint pack_GLfloat );
use OpenGL::ScreenCapture 'capture';
use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

# TO-DO: Add FPS and "free" time between frames
# TO-DO: Add bitmap loading via Imager -> RGBA -> buffer
# TO-DO: Render function into bitmap (set FBO)
#          http://www.opengl-tutorial.org/intermediate-tutorials/tutorial-14-render-to-texture/
# TO-DO: Render mesh from bitmap
# TO-DO: Add bitmap loader into FBO
# TO-DO: Add "debug" shader that renders any FBO to the screen (side) as two triangles
# TO-DO: Add configuration to specify which FBOs are the source for other shaders
# TO-DO: Add live-editor for shader(s)
# TO-DO: Add animated (modern) GIF export and automatic upload
# TO-DO: Shadow mapping for distant lights (deferred)
#          http://www.opengl-tutorial.org/intermediate-tutorials/tutorial-16-shadow-mapping/
#        Easily also for directional lights
#        Need six-cubemap for local undirected lights
# TO-DO: What is needed to make a tube race track from a (deformed+extruded) circle?

my $header = <<HEADER;
#version 330 core

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
struct Channel
{
    vec3 resolution;
    float time;
};
uniform Channel iChannel[4];
HEADER

my $frag_footer = <<'FRAGMENT_FOOTER';
void main() {
    vec4 color = vec4(0.0,0.0,0.0,1.0);
    mainImage( color, gl_FragCoord.xy );
    gl_FragColor = color;
}
FRAGMENT_FOOTER

sub init_shaders($filename) {
    $filename =~ s!\.(compute|vertex|geometry|tesselation|tessellation_control|fragment)$!!;
    my( @files ) = glob "$filename.*";
    
    my %shader_args = map {
        /\.(compute|vertex|geometry|tesselation|tessellation_control|fragment)$/
        ? ($1 => do { local(@ARGV,$/) = $_; <> })
           : () # else ignore the file
    } @files;
    
    # Supply some defaults:
    $shader_args{ vertex } ||= <<'VERTEX';
#version 330 core
layout(location = 0) in vec2 pos;
void main() {
    gl_Position = vec4(pos,0.0,1.0);
}
VERTEX

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

    $shader_args{ fragment } ||= <<'FRAGMENT';
void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 uv = fragCoord.xy / iResolution.xy;
    fragColor = vec4(uv,0.5+0.5*sin(iGlobalTime),1.0);
}
FRAGMENT
    
    $shader_args{ fragment }
        = join "\n",
              $header,
              $shader_args{ fragment },
              $frag_footer
              ;

    my $pipeline = OpenGL::Shader::OpenGL4->new(
        strict_uniforms => 0,
    );
    $pipeline->Load(
        %shader_args
    );
    
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
    warn "Created VAO: " . glGetError;
    
    glGenBuffers( 1, xs_buffer($buffer, 8));
    $VBO_Quad = (unpack 'I', $buffer)[0];
    glBindBuffer( GL_ARRAY_BUFFER, $VBO_Quad );
    glBufferData(GL_ARRAY_BUFFER, length $vertices, $vertices, GL_DYNAMIC_DRAW);
    glObjectLabel(GL_BUFFER,$VBO_Quad,length "my triangles","my triangles");
    warn sprintf "%08x", glGetError;
    # Not supported on Win10+Intel...
    #glNamedBufferData( $VBO_Quad, length $vertices, $vertices, GL_STATIC_DRAW );
    #warn sprintf "%08x", glGetError;

    my $vpos = glGetAttribLocation($pipeline->{program}, 'pos');
    if( $vpos < 0 ) {
        die sprintf "Couldn't get shader attribute 'pos', compilation error?";
    };
    
    glEnableVertexAttribArray( $vpos );
    glVertexAttribPointer( $vpos, 2, GL_FLOAT, GL_FALSE, 0, 0 );

    warn "Enabled:" . glGetError;
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

sub drawUnitQuad_XY($pipeline) {
    #if( mDerivatives != null) mGL.hint( mDerivatives.FRAGMENT_SHADER_DERIVATIVE_HINT_OES, mGL.NICEST);

    #warn "Bound:" . glGetError;
    # We have pairs of coordinates:
    glDrawArrays( GL_TRIANGLES, 0, 6 ); # 2 times 3 elements
    #warn "Drawn: " . glGetError;
    #glDisableVertexAttribArray( $vpos );
    #warn "Disabled array drawn";
}

use vars qw($xres $yres);

use Time::HiRes 'time';
my $frame = 1;
my $time;
my $started = time();
my $frame_second=int time;
my $frames;
my $iMouse = pack_GLfloat(0,0,0,0);

my $config = {
    grab => 0,
};

my $pipeline;
my $glWidget;

sub updateShaderVariables($pipeline,$xres,$yres) {
    $time = time - $started;
    $pipeline->setUniform1f( "iGlobalTime", $time);
    $pipeline->setUniform3f( "iResolution", $xres, $yres, 1.0);
    
    if ( $config->{grab} ) {
        my ( $x, $y ) = $glWidget->pointerPos;
        $iMouse = pack_GLfloat($x,$y,0,0);
        $pipeline->setUniform4fv( "iMouse", $iMouse);
    }		

    #$pipeline->setUniform4fv( "iDate", 0, 0, 0, 0 );
    #$pipeline->setUniform1f(  "iSampleRate", 0.0 ); #this.mSampleRate);
    #glSetShaderTextureUnit( "iChannel0", 0 );
    #glSetShaderTextureUnit( "iChannel1", 1 );
    #glSetShaderTextureUnit( "iChannel2", 2 );
    #glSetShaderTextureUnit( "iChannel3", 3 );
    #$pipeline->setUniform1i(  "iFrame", $frame++ ); # this.mFrame );
    #$pipeline->setUniform1f(  "iTimeDelta", 0 ); # dtime);
    #$pipeline->setUniform1f(  "iFrameRate", 60 ); # weeeell
}

my $window = Prima::MainWindow->create(
    width => 500,
    height => 500,
    height => 200,
    onKeyDown        => sub {
        my( $self, $code, $key, $mod ) = @_;
        #print "@_\n";
        if( $key == kb::F11 ) {
            print "Fullscreen\n";
            my @wsaverect = $self-> rect;
            $self->rect( 0, 0, $self->owner->size);

        } elsif( $key == kb::F5 ) {
            my( $name ) = 'capture.png';
            capture()->write(file => $name);
            print "Saved to '$name'\n";

        } elsif( $key == kb::Esc ) {
            print "Bye\n";
            $::application->close
        };
    },
);
#$window->set(
#    top => 1000,
#    left => 128,
#);

my ($filename)= @ARGV;

$window->set(
    text => "$filename - ShaderToy",
);
my $status = $window->insert(
    Label => (
        growMode => gm::Client,
		rect => [0, $window->height-20, $window->width, $window->height],
        alignment => ta::Center,
        text => '00.0 fps',
    ),
);

$glWidget = $window->insert(
    'Prima::GLWidget' =>
    #pack    => { expand => 1, fill => 'both'},
	growMode => gm::Client,
	rect => [0, 0, $window->width, $window->height-20,],
    gl_config => {
        pixels => 'rgba',
        color_bits => 32,
        depth_bits => 24,
    },
    onPaint => sub {
        my $self = shift;
        
        if( ! $pipeline ) {
            my $err = OpenGL::Glew::glewInit();
            if( $err != GLEW_OK ) {
                die "Couldn't initialize Glew: ".glewGetErrorString($err);
            };
            print sprintf "Initialized using GLEW %s\n", OpenGL::Glew::glewGetString(GLEW_VERSION);
            print sprintf "%s\n", glGetString(GL_VERSION);

            #glClearColor(0,0,0.5,1);

            $pipeline = init_shaders($filename);
            die "Got no pipeline"
                unless $pipeline;
            $VBO_Quad ||= createUnitQuad($pipeline);
        };
        
        if( $pipeline ) {
            glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

            updateShaderVariables($pipeline,$self->width,$self->height);

            $pipeline->Enable();
            drawUnitQuad_XY($pipeline);
            $pipeline->Disable();
            glFlush();
            
            $frames++;
            if( int(time) != $frame_second) {
                $status->set(
                    text => sprintf '%0.2f fps', $frames,
				);

				$frames = 0;
				$frame_second = int(time);
            };
        };
    },
    onMouseDown  => sub { $config->{grab} = 1 },
    onMouseUp    => sub { $config->{grab} = 0 },
    onSize => sub {
        my( $self ) = @_;
        ( $xres,$yres ) = $self->size;
    },
);

# Start our timer
$window-> insert( Timer => 
    timeout => 5,
    onTick  => sub {
        $glWidget->repaint;
    }
)-> start;

Prima->run;

