void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 p = fragCoord.xy / iResolution.xy;
    vec2 uv = p;
	
    //---------------------------------------------	
	// regular texture map filtering
    //---------------------------------------------	
	if( p.x < 0.5 ) {
		fragColor = vec4(texture2D( iChannel0, uv ).xyz,1);
	} else {
		fragColor = vec4(texture2D( iChannel1, uv ).xyz,1);
	};
}