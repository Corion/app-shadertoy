#!perl -w
use strict;
use OpenGL qw(glClearColor glClear glDrawArrays);
use OpenGL::Glew ':all';
use OpenGL::Shader::OpenGL4;
use Prima qw( Application GLWidget );

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

=begin later

    this.mRenderer.AttachShader(prog);

    this.mRenderer.SetShaderConstant1F(  "iGlobalTime", time);
    this.mRenderer.SetShaderConstant3F(  "iResolution", xres, yres, 1.0);
    this.mRenderer.SetShaderConstant4FV( "iMouse", mouse);
    this.mRenderer.SetShaderConstant1FV( "iChannelTime", times );              // OBSOLETE
    this.mRenderer.SetShaderConstant4FV( "iDate", dates );
    this.mRenderer.SetShaderConstant3FV( "iChannelResolution", resos );        // OBSOLETE
    this.mRenderer.SetShaderConstant1F(  "iSampleRate", this.mSampleRate);
    this.mRenderer.SetShaderTextureUnit( "iChannel0", 0 );
    this.mRenderer.SetShaderTextureUnit( "iChannel1", 1 );
    this.mRenderer.SetShaderTextureUnit( "iChannel2", 2 );
    this.mRenderer.SetShaderTextureUnit( "iChannel3", 3 );
    this.mRenderer.SetShaderConstant1I(  "iFrame", this.mFrame );
    this.mRenderer.SetShaderConstant1F(  "iTimeDelta", dtime);
    this.mRenderer.SetShaderConstant1F(  "iFrameRate", fps );

    this.mRenderer.SetShaderConstant1F(  "iChannel[0].time",       times[0] );
    this.mRenderer.SetShaderConstant1F(  "iChannel[1].time",       times[1] );
    this.mRenderer.SetShaderConstant1F(  "iChannel[2].time",       times[2] );
    this.mRenderer.SetShaderConstant1F(  "iChannel[3].time",       times[3] );
    this.mRenderer.SetShaderConstant3F(  "iChannel[0].resolution", resos[0], resos[ 1], resos[ 2] );
    this.mRenderer.SetShaderConstant3F(  "iChannel[1].resolution", resos[3], resos[ 4], resos[ 5] );
    this.mRenderer.SetShaderConstant3F(  "iChannel[2].resolution", resos[6], resos[ 7], resos[ 8] );
    this.mRenderer.SetShaderConstant3F(  "iChannel[3].resolution", resos[9], resos[10], resos[11] );

    var l1 = this.mRenderer.GetAttribLocation(this.mProgram, "pos");


=cut

sub init_shaders {
	my $pipeline = OpenGL::Shader::OpenGL4->new();
	$pipeline->Load(
    vertex => <<'VERTEX', fragment => <<'FRAGMENT',
attribute vec2 pos;
void main() {
	gl_Position = vec4(pos.xy,0.0,1.0);
}

VERTEX

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
FRAGMENT
) or die "Couldn't load shaders";

    warn ref $pipeline;
    return $pipeline;
};

sub drawUnitQuad_XY($pipeline) {
    #if( mDerivatives != null) mGL.hint( mDerivatives.FRAGMENT_SHADER_DERIVATIVE_HINT_OES, mGL.NICEST);

	my $vpos = glGetAttribLocation($pipeline->{program}, "pos");

    # create a 2D quad Vertex Buffer
    my @vertices = ( -1.0, -1.0,   1.0, -1.0,    -1.0,  1.0,     1.0, -1.0,    1.0,  1.0,    -1.0,  1.0 );
    my $buffer = "\0" x 8;
    glGenBuffers(1, pack 'P', $buffer);
    my $VBO_Quad = (unpack 'I', $buffer)[0];
    glBindBuffer( $VBO_Quad, GL_ARRAY_BUFFER );
    glBufferData( GL_ARRAY_BUFFER, @vertices, GL_STATIC_DRAW );
    glBindBuffer( GL_ARRAY_BUFFER, undef );
	
	glBindBuffer( GL_ARRAY_BUFFER, $VBO_Quad );
	glVertexAttribPointer( $vpos, 2, GL_FLOAT, 0, 0, 0 );
	glEnableVertexAttribArray( $vpos );
	glDrawArrays( GL_TRIANGLES, 0, 6 );
	glDisableVertexAttribArray( $vpos );
	glBindBuffer( GL_ARRAY_BUFFER, undef );
}

use Time::HiRes;
sub updateShaderVariables($pipeline,$xres,$yres) {
	#my %variables = (
	#    iGlobalTime => time,
	#    iResolution => [],
	#);
	
	
	$pipeline->setUniform1I( "iGlobalTime", time);
    $pipeline->setUniform3F( "iResolution", $xres, $yres, 1.0);
    $pipeline->setUniform2V("iMouse", 0.0, 0.0);
    $pipeline->setUniform4F( "iDate", 0, 0, 0, 0 );
    $pipeline->setUniform1F(  "iSampleRate", 0.0 ); #this.mSampleRate);
    #glSetShaderTextureUnit( "iChannel0", 0 );
    #glSetShaderTextureUnit( "iChannel1", 1 );
    #glSetShaderTextureUnit( "iChannel2", 2 );
    #glSetShaderTextureUnit( "iChannel3", 3 );
    $pipeline->setUniform1I(  "iFrame", 0 ); # this.mFrame );
    $pipeline->setUniform1F(  "iTimeDelta", 0 ); # dtime);
    $pipeline->setUniform1F(  "iFrameRate", 60 ); # weeeell
}

my $pipeline;

my $window = Prima::MainWindow->create();

$window->insert(
    GLWidget =>
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
			$pipeline = init_shaders;
			die "Got no pipeline"
			    unless $pipeline;
		};
		
		if( $pipeline ) {
			glClearColor(0,0,0,1);
			glClear(GL_COLOR_BUFFER_BIT);
			
			$pipeline->Enable();
			
			# Well, we should only update these when resizing, later
			updateShaderVariables($pipeline,$self->width,$self->height);
			
			drawUnitQuad_XY($pipeline);
			$pipeline->Disable();
		};
	}
);

#warn "Window handle: ".$window->get_handle;
#my $err = OpenGL::Glew::glewInit(eval $window->get_handle);
#if( $err != GLEW_OK ) {
#	die "Couldn't initialize Glew: ".glewGetErrorString($err);
#};
#print sprintf "Initialized using GLEW %s\n", OpenGL::Glew::glewGetString(GLEW_VERSION);
#print sprintf "GL_VERSION_4_5 is supported: %d", glewIsSupported("GL_VERSION_4_5");
#$pipeline = init_shaders;


Prima->run;

