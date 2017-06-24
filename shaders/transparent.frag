void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    fragColor = vec4(0.0,fragCoord.y/iResolution.y,0.0,0);
}