#!perl -w
use strict;
use OpenGL::Glew ':all';
use OpenGL::Shader::OpenGL4;
use Prima qw( Application GLWidget );
use OpenGL::Glew::Helpers qw( xs_buffer pack_GLint pack_GLfloat );
use Filter::signatures;
use feature 'signatures';
no warnings 'experimental::signatures';

# TO-DO: Render function into bitmap (set FBO)
#          http://www.opengl-tutorial.org/intermediate-tutorials/tutorial-14-render-to-texture/
# TO-DO: Render mesh from bitmap
# TO-DO: Add bitmap loader into FBO
# TO-DO: Add "debug" shader that renders any FBO to the screen (side) as two triangles
# TO-DO: Add configuration to specify which FBOs are the source for other shaders
# TO-DO: Add live-editor for shader(s)
# TO-DO: Shadow mapping for distant lights
#          http://www.opengl-tutorial.org/intermediate-tutorials/tutorial-16-shadow-mapping/
#        Easily also for directional lights
#        Need six-cubemap for local undirected lights

my $header = <<HEADER;
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

sub init_shaders {
	my $pipeline = OpenGL::Shader::OpenGL4->new();
	
	my $v = <<'VERTEX';
#version 330 core
layout(location = 0) in vec2 pos;
void main() {
	gl_Position = vec4(pos,0.0,1.0);
}
VERTEX

	my $f = $header . <<'FRAGMENT';

/*
"Seascape" by Alexander Alekseev aka TDM - 2014
License Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License.
Contact: tdmaav@gmail.com
*/

const int NUM_STEPS = 8;
const float PI	 	= 3.1415;
const float EPSILON	= 1e-3;
float EPSILON_NRM	= 0.1 / iResolution.x;

// sea
const int ITER_GEOMETRY = 3;
const int ITER_FRAGMENT = 5;
const float SEA_HEIGHT = 0.6;
const float SEA_CHOPPY = 4.0;
const float SEA_SPEED = 0.8;
const float SEA_FREQ = 0.16;
const vec3 SEA_BASE = vec3(0.1,0.19,0.22);
const vec3 SEA_WATER_COLOR = vec3(0.8,0.9,0.6);
float SEA_TIME = 1.0 + iGlobalTime * SEA_SPEED;
mat2 octave_m = mat2(1.6,1.2,-1.2,1.6);

// math
mat3 fromEuler(vec3 ang) {
	vec2 a1 = vec2(sin(ang.x),cos(ang.x));
    vec2 a2 = vec2(sin(ang.y),cos(ang.y));
    vec2 a3 = vec2(sin(ang.z),cos(ang.z));
    mat3 m;
    m[0] = vec3(a1.y*a3.y+a1.x*a2.x*a3.x,a1.y*a2.x*a3.x+a3.y*a1.x,-a2.y*a3.x);
	m[1] = vec3(-a2.y*a1.x,a1.y*a2.y,a2.x);
	m[2] = vec3(a3.y*a1.x*a2.x+a1.y*a3.x,a1.x*a3.x-a1.y*a3.y*a2.x,a2.y*a3.y);
	return m;
}
float hash( vec2 p ) {
	float h = dot(p,vec2(127.1,311.7));	
    return fract(sin(h)*43758.5453123);
}
float noise( in vec2 p ) {
    vec2 i = floor( p );
    vec2 f = fract( p );	
	vec2 u = f*f*(3.0-2.0*f);
    return -1.0+2.0*mix( mix( hash( i + vec2(0.0,0.0) ), 
                     hash( i + vec2(1.0,0.0) ), u.x),
                mix( hash( i + vec2(0.0,1.0) ), 
                     hash( i + vec2(1.0,1.0) ), u.x), u.y);
}

// lighting
float diffuse(vec3 n,vec3 l,float p) {
    return pow(dot(n,l) * 0.4 + 0.6,p);
}
float specular(vec3 n,vec3 l,vec3 e,float s) {    
    float nrm = (s + 8.0) / (3.1415 * 8.0);
    return pow(max(dot(reflect(e,n),l),0.0),s) * nrm;
}

// sky
vec3 getSkyColor(vec3 e) {
    e.y = max(e.y,0.0);
    vec3 ret;
    ret.x = pow(1.0-e.y,2.0);
    ret.y = 1.0-e.y;
    ret.z = 0.6+(1.0-e.y)*0.4;
    return ret;
}

// sea
float sea_octave(vec2 uv, float choppy) {
    uv += noise(uv);        
    vec2 wv = 1.0-abs(sin(uv));
    vec2 swv = abs(cos(uv));    
    wv = mix(wv,swv,wv);
    return pow(1.0-pow(wv.x * wv.y,0.65),choppy);
}

float map(vec3 p) {
    float freq = SEA_FREQ;
    float amp = SEA_HEIGHT;
    float choppy = SEA_CHOPPY;
    vec2 uv = p.xz; uv.x *= 0.75;
    
    float d, h = 0.0;    
    for(int i = 0; i < ITER_GEOMETRY; i++) {        
    	d = sea_octave((uv+SEA_TIME)*freq,choppy);
    	d += sea_octave((uv-SEA_TIME)*freq,choppy);
        h += d * amp;        
    	uv *= octave_m; freq *= 1.9; amp *= 0.22;
        choppy = mix(choppy,1.0,0.2);
    }
    return p.y - h;
}

float map_detailed(vec3 p) {
    float freq = SEA_FREQ;
    float amp = SEA_HEIGHT;
    float choppy = SEA_CHOPPY;
    vec2 uv = p.xz; uv.x *= 0.75;
    
    float d, h = 0.0;    
    for(int i = 0; i < ITER_FRAGMENT; i++) {        
    	d = sea_octave((uv+SEA_TIME)*freq,choppy);
    	d += sea_octave((uv-SEA_TIME)*freq,choppy);
        h += d * amp;        
    	uv *= octave_m; freq *= 1.9; amp *= 0.22;
        choppy = mix(choppy,1.0,0.2);
    }
    return p.y - h;
}

vec3 getSeaColor(vec3 p, vec3 n, vec3 l, vec3 eye, vec3 dist) {  
    float fresnel = clamp(1.0 - dot(n,-eye), 0.0, 1.0);
    fresnel = pow(fresnel,3.0) * 0.65;
        
    vec3 reflected = getSkyColor(reflect(eye,n));    
    vec3 refracted = SEA_BASE + diffuse(n,l,80.0) * SEA_WATER_COLOR * 0.12; 
    
    vec3 color = mix(refracted,reflected,fresnel);
    
    float atten = max(1.0 - dot(dist,dist) * 0.001, 0.0);
    color += SEA_WATER_COLOR * (p.y - SEA_HEIGHT) * 0.18 * atten;
    
    color += vec3(specular(n,l,eye,60.0));
    
    return color;
}

// tracing
vec3 getNormal(vec3 p, float eps) {
    vec3 n;
    n.y = map_detailed(p);    
    n.x = map_detailed(vec3(p.x+eps,p.y,p.z)) - n.y;
    n.z = map_detailed(vec3(p.x,p.y,p.z+eps)) - n.y;
    n.y = eps;
    return normalize(n);
}

float heightMapTracing(vec3 ori, vec3 dir, out vec3 p) {  
    float tm = 0.0;
    float tx = 1000.0;    
    float hx = map(ori + dir * tx);
    if(hx > 0.0) return tx;   
    float hm = map(ori + dir * tm);    
    float tmid = 0.0;
    for(int i = 0; i < NUM_STEPS; i++) {
        tmid = mix(tm,tx, hm/(hm-hx));                   
        p = ori + dir * tmid;                   
    	float hmid = map(p);
		if(hmid < 0.0) {
        	tx = tmid;
            hx = hmid;
        } else {
            tm = tmid;
            hm = hmid;
        }
    }
    return tmid;
}

// main
void mainImage( out vec4 fragColor, in vec2 fragCoord ) {
	vec2 uv = fragCoord.xy / iResolution.xy;
    uv = uv * 2.0 - 1.0;
    uv.x *= iResolution.x / iResolution.y;    
    float time = iGlobalTime * 0.3 + iMouse.x*0.01;
        
    // ray
    vec3 ang = vec3(sin(time*3.0)*0.1,sin(time)*0.2+0.3,time);    
    vec3 ori = vec3(0.0,3.5,time*5.0);
    vec3 dir = normalize(vec3(uv.xy,-2.0)); dir.z += length(uv) * 0.15;
    dir = normalize(dir) * fromEuler(ang);
    
    // tracing
    vec3 p;
    heightMapTracing(ori,dir,p);
    vec3 dist = p - ori;
    vec3 n = getNormal(p, dot(dist,dist) * EPSILON_NRM);
    vec3 light = normalize(vec3(0.0,1.0,0.8)); 
             
    // color
    vec3 color = mix(
        getSkyColor(dir),
        getSeaColor(p,n,light,dir,dist),
    	pow(smoothstep(0.0,-0.05,dir.y),0.3));
        
    // post
	fragColor = vec4(pow(color,vec3(0.75)), 1.0);
}

void main() {
    vec4 color = vec4(0.0,0.0,0.0,1.0);
    mainImage( color, gl_FragCoord.xy );
    gl_FragColor = color;
}
FRAGMENT
	
	my $err = $pipeline->Load(
		vertex => $v,
		fragment => $f,
    );

    #die $err if $err;
    warn "Shaders loaded";

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
    #glBufferData(GL_ARRAY_BUFFER, length $vertices, $vertices, GL_DYNAMIC_DRAW);
    glObjectLabel(GL_BUFFER,$VBO_Quad,length "my triangles","my triangles");
    warn sprintf "%08x", glGetError;
    #warn sprintf "%08x", glGetError;
	#glBindBuffer( GL_ARRAY_BUFFER, 0 );
    #warn sprintf "%08x", glGetError;
    # This didn't work at some time, need to revisit
    glNamedBufferData( $VBO_Quad, length $vertices, $vertices, GL_STATIC_DRAW );
    warn sprintf "%08x", glGetError;

    my $attrname = 'pos';
	my $vpos = glGetAttribLocation($pipeline->{program}, $attrname);
	if( $vpos < 0 ) {
		die sprintf "Couldn't get shader attribute '%s'", $attrname;
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
    height => 200,
);
$window->set(
    top => 1000,
    left => 128,
);

$glWidget = $window->insert(
    'Prima::GLWidget' =>
	pack    => { expand => 1, fill => 'both'},
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
			#print sprintf "GL_VERSION_4_5 is supported: %d", glewIsSupported("GL_VERSION_4_5");

			#glClearColor(0,0,0.5,1);

			$pipeline = init_shaders;
			die "Got no pipeline"
			    unless $pipeline;
			$pipeline->Enable();
			$VBO_Quad ||= createUnitQuad($pipeline);
		};
		
		if( $pipeline ) {
			glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

			updateShaderVariables($pipeline,$self->width,$self->height);
			
			drawUnitQuad_XY($pipeline);
			#$pipeline->Disable();
			#warn "Shader disabled";
			glFlush();
			
		};
		#warn "Leaving call";
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

