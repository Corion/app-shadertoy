const vec4 nohit = vec4(0.,0.,0.,0.);
const vec4 white = vec4(1.,1.,1.,1.);
const float linewidth = 0.002;
float hitdistance = 1./iResolution.x;

// Distance functions
float grid(vec2 ratio, float step, float width) {
    vec2 center = vec2(0.5,0.5);
    center.x *= iResolution.x / iResolution.y;

    vec2 p = center - ratio +linewidth;
	return 
	    abs(
            abs(mod(p.x*100., step))
          + abs(mod(p.x*100., step)-width)
		  - width
		)
		*
	    abs(
            abs(mod(p.y*100., step))
          + abs(mod(p.y*100., step)-width)
		  - width
		);
}

float circle(vec2 ratio,float inner, float outer) {
    vec2 center = vec2(0.5,0.5);
    center.x *= iResolution.x / iResolution.y;
    vec2 p = center - ratio;
    return
        abs(
            abs(length(p)-inner)
          + abs(length(p)-outer)
            - (outer-inner)
        )
    ;
}

float colorbar(vec2 botleft, vec2 lowright, vec2 ratio) {
    vec2 center = vec2(0.5,0.5);
    center.x *= iResolution.x / iResolution.y;

    return abs (
             abs( ratio.x - center.x  - botleft.x )
           + abs( ratio.x - center.x  - lowright.x )
           + abs( ratio.y - center.y  - botleft.y )
           + abs( ratio.y - center.y  - lowright.y )
         - (lowright.x-botleft.x+lowright.y-botleft.y)
         )
    ;
}

const float sat = 192./256.;

struct ColorRect {
    vec2 botleft;
	vec2 lowright;
	vec4 color;
};
const float greyW = 0.84 / 5; // Width of grey bars
const ColorRect colorbars[17] = ColorRect[17](
    // Color saturation test
    ColorRect( vec2(-.420+linewidth,0.14), vec2(-0.315,0.35-linewidth), vec4( sat, sat, sat, 1.) ),
    ColorRect( vec2(-.315,0.14), vec2(-0.210,0.35-linewidth), vec4( sat, sat, 0.0, 1.) ),
    ColorRect( vec2(-.210,0.14), vec2(-0.105,0.35-linewidth), vec4( 0.0, sat, sat, 1.) ),
    ColorRect( vec2(-.105,0.14), vec2( 0.000,0.35-linewidth), vec4( 0.0, sat, 0.0, 1.) ),
    ColorRect( vec2( .000,0.14), vec2( 0.105,0.35-linewidth), vec4( sat, 0.0, sat, 1.) ),
    ColorRect( vec2( .105,0.14), vec2( 0.210,0.35-linewidth), vec4( sat, 0.0, 0.0, 1.) ),
    ColorRect( vec2( .210,0.14), vec2( 0.315,0.35-linewidth), vec4( 0.0, 0.0, sat, 1.) ),
    ColorRect( vec2( .315,0.14), vec2( 0.420-linewidth,0.35-linewidth), vec4( 0.0, 0.0, 0.0, 1.) ),
	
	// Grey bars
    ColorRect( vec2(-.42+0. *greyW+linewidth,0.0015), vec2(-.42+1.*greyW,0.14), vec4( 0.00, 0.00, 0.00, 1.) ),
    ColorRect( vec2(-.42+1. *greyW,0.0015), vec2(-.42+2.*greyW,0.30), vec4( 0.25, 0.25, 0.25, 1.) ),
    ColorRect( vec2(-.42+2.0*greyW,0.0015), vec2(-.42+2.5*greyW-0.0015,0.30), vec4( 0.50, 0.50, 0.50, 1.) ), 	// Split this bar for the white grid line in the middle
    ColorRect( vec2(-.42+2.5*greyW+0.0015,0.0015), vec2(-.42+3.*greyW,0.30), vec4( 0.50, 0.50, 0.50, 1.) ), 
    ColorRect( vec2(-.42+3. *greyW,0.0015), vec2(-.42+4.*greyW,0.30), vec4( 0.75, 0.75, 0.75, 1.) ),
    ColorRect( vec2(-.42+4. *greyW,0.0015), vec2(-.42+5.*greyW,0.30), vec4( 1.00, 1.00, 1.00, 1.) ),
    
    // Black bar
    ColorRect( vec2(-.42+1. *greyW,-0.07+linewidth), vec2(-.42+4.*greyW,0.0-linewidth), vec4( 0.00, 0.00, 0.00, 1.) ),
    
    // White bar
    ColorRect( vec2(-.42+linewidth,-0.21+linewidth), vec2(+.42-linewidth,-0.14-linewidth), vec4( 1.00, 1.00, 1.00, 1.) ),

    // Gray bar in lower right
    ColorRect( vec2(+.14,-0.35+linewidth), vec2(+.42-linewidth,-0.21-linewidth), vec4( .50, .50, .50, 1.) )
);
const ColorRect gradients[2] = ColorRect[2](
    ColorRect( vec2(-.42+linewidth,-0.28),           vec2(+.14,-0.21-linewidth), vec4( 1.0, .00, .33, 1.) ),
    ColorRect( vec2(-.42+linewidth,-0.35+linewidth), vec2(+.14,-0.28), vec4( .33, .00, 1.0, 1.) )
);

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 ratio = fragCoord.xy / iResolution.y;
    vec2 center = vec2(0.5,0.5);
    center.x *= iResolution.x / iResolution.y;
    vec2 pos = center - ratio;

    // adjustment grid
    vec4 color = nohit;
    float d = hitdistance +1;

	// Grid is in the background
	if( d > hitdistance) {
		if( (d = grid(ratio, 7., .35)) <= hitdistance ) {
			color = mix(white, nohit, d);
		};
	};

	// Draw the color bars over the grid
	int i;
	for ( i=0; i < colorbars.length(); i++ ) {
		if( (d = colorbar(colorbars[i].botleft, colorbars[i].lowright, ratio)) <= hitdistance ) {
			color = mix(colorbars[i].color, nohit, d);
			break;
		}
	};
    
    // Gradients are also rectangles but the coloring is different
	for ( i=0; i < gradients.length(); i++ ) {
		if( (d = colorbar(gradients[i].botleft, gradients[i].lowright, ratio)) <= hitdistance ) {
            float width = gradients[i].lowright.x-gradients[i].botleft.x;
            float p = ( -gradients[i].botleft.x - pos.x) / width;
            vec4 gr = mix(gradients[i].color, vec4(0,0,0,0), p);
			color = mix(gr, nohit, d);
		}
	};
	
	// Circle goes over the colorbars
	if( (d = circle(ratio,.470,.470+linewidth)) <= hitdistance ) {
		color = mix(white, color, d*iResolution.x);
	};

    fragColor = color;
}