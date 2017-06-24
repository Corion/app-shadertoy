// Panteleymonov A K 2015

//
// procedural noise from https://www.shadertoy.com/view/4sfGzS
// for first variant
/*float hash( float n ) { return fract(sin(n)*753.5453123); }
float noise( vec3 x )
{
    vec3 p = floor(x);
    vec3 f = fract(x);
    f = f*f*(3.0-2.0*f);

    float n = p.x + p.y*157.0 + 113.0*p.z;
    return mix(mix(mix( hash(n+  0.0), hash(n+  1.0),f.x),
                   mix( hash(n+157.0), hash(n+158.0),f.x),f.y),
               mix(mix( hash(n+113.0), hash(n+114.0),f.x),
                   mix( hash(n+270.0), hash(n+271.0),f.x),f.y),f.z);
}*/

// animated noise
vec4 NC0=vec4(0.0,157.0,113.0,270.0);
vec4 NC1=vec4(1.0,158.0,114.0,271.0);
//vec4 WS=vec4(10.25,32.25,15.25,3.25);
vec4 WS=vec4(0.25,0.25,0.25,0.25);

//
//vec4 hash4(vec4 x){ return fract(fract(x*0.31830988618379067153776752674503)*fract(x*0.15915494309189533576888376337251)*265871.1723); }
//vec4 hash4( vec4 n ) { return fract(sin(n)*753.5453123); }
//float noise3( vec3 x )
//{
//    vec3 p = floor(x);
//    vec3 f = fract(x);
//    f = f*f*(3.0-2.0*f);
//    float n = p.x + dot(p.yz,vec2(157.0,113.0));
//    vec4 s1=mix(hash4(vec4(n)+NC0),hash4(vec4(n)+NC1),vec4(f.x));
//    return mix(mix(s1.x,s1.y,f.y),mix(s1.z,s1.w,f.y),f.z);
//}

// just a noise
//float noise4( vec4 x )
//{
//    vec4 p = floor(x);
//    vec4 f = fract(x);
//    p.w=mod(p.w,100.0); // looping noise in one axis
//    f = f*f*(3.0-2.0*f);
//    float n = p.x + dot(p.yzw,vec3(157.0,113.0,642.0));
//    vec4 vs1=mix(hash4(vec4(n)+NC0),hash4(vec4(n)+NC1),vec4(f.x));
//    n = n-642.0*p.w + 642.0*mod(p.w+1.0,100.0);
//    vec4 vs2=mix(hash4(vec4(n)+NC0),hash4(vec4(n)+NC1),vec4(f.x));
//    vs1=mix(vec4(vs1.xz,vs2.xz),vec4(vs1.yw,vs2.yw),vec4(f.y));
//    vs1.xy=mix(vs1.xz,vs1.yw,vec2(f.z));
//    return mix(vs1.x,vs1.y,f.w);
//}

// mix noise for alive animation
//float noise4r( vec4 x )
//{
//    return (noise4(x)+noise4(x+=WS)+noise4(x+=WS)+noise4(x+=WS))*0.25;
//    //return noise4(x);
//}

// mix noise for alive animation, full source
vec4 hash4( vec4 n ) { return fract(sin(n)*1399763.5453123); }
vec3 hash3( vec3 n ) { return fract(sin(n)*1399763.5453123); }
vec3 hpos( vec3 n ) { return hash3(vec3(dot(n,vec3(157.0,113.0,271.0)),dot(n,vec3(271.0,157.0,113.0)),dot(n,vec3(113.0,271.0,157.0)))); }
//vec4 hash4( vec4 n ) { return fract(n*fract(n*0.5453123)); }
//vec4 hash4( vec4 n ) { n*=1.987654321; return fract(n*fract(n)); }
float noise4q(vec4 x)
{
	vec4 n3 = vec4(0,0.25,0.5,0.75);
	vec4 p2 = floor(x.wwww+n3);
	vec4 b = floor(x.xxxx+n3) + floor(x.yyyy+n3)*157.0 + floor(x.zzzz +n3)*113.0;
	vec4 p1 = b + fract(p2*0.00390625)*vec4(164352.0, -164352.0, 163840.0, -163840.0);
	p2 = b + fract((p2+1.0)*0.00390625)*vec4(164352.0, -164352.0, 163840.0, -163840.0);
	vec4 f1 = fract(x.xxxx+n3);
	vec4 f2 = fract(x.yyyy+n3);
	f1=f1*f1*(3.0-2.0*f1);
	f2=f2*f2*(3.0-2.0*f2);
	vec4 n1 = vec4(0,1.0,157.0,158.0);
	vec4 n2 = vec4(113.0,114.0,270.0,271.0);
	vec4 vs1 = mix(hash4(p1), hash4(n1.yyyy+p1), f1);
	vec4 vs2 = mix(hash4(n1.zzzz+p1), hash4(n1.wwww+p1), f1);
	vec4 vs3 = mix(hash4(p2), hash4(n1.yyyy+p2), f1);
	vec4 vs4 = mix(hash4(n1.zzzz+p2), hash4(n1.wwww+p2), f1);
	vs1 = mix(vs1, vs2, f2);
	vs3 = mix(vs3, vs4, f2);
	vs2 = mix(hash4(n2.xxxx+p1), hash4(n2.yyyy+p1), f1);
	vs4 = mix(hash4(n2.zzzz+p1), hash4(n2.wwww+p1), f1);
	vs2 = mix(vs2, vs4, f2);
	vs4 = mix(hash4(n2.xxxx+p2), hash4(n2.yyyy+p2), f1);
	vec4 vs5 = mix(hash4(n2.zzzz+p2), hash4(n2.wwww+p2), f1);
	vs4 = mix(vs4, vs5, f2);
	f1 = fract(x.zzzz+n3);
	f2 = fract(x.wwww+n3);
	f1=f1*f1*(3.0-2.0*f1);
	f2=f2*f2*(3.0-2.0*f2);
	vs1 = mix(vs1, vs2, f1);
	vs3 = mix(vs3, vs4, f1);
	vs1 = mix(vs1, vs3, f2);
	float r=dot(vs1,vec4(0.25));
	//r=r*r*(3.0-2.0*r);
	return r*r*(3.0-2.0*r);
}

// body of a star
float noiseSpere(vec3 ray,vec3 pos,float r,mat3 mr,float zoom,vec3 subnoise,float anim)
{
  	float b = dot(ray,pos);
  	float c = dot(pos,pos) - b*b;

    vec3 r1=vec3(0.0);

    float s=0.0;
    float d=0.03125;
    float d2=zoom/(d*d);
    float ar=5.0;

    for (int i=0;i<3;i++) {
		float rq=r*r;
        if(c <rq)
        {
            float l1=sqrt(rq-c);
            r1= ray*(b-l1)-pos;
            r1=r1*mr;
            s+=abs(noise4q(vec4(r1*d2+subnoise*ar,anim*ar))*d);
        }
        ar-=2.0;
        d*=4.0;
        d2*=0.0625;
        r=r-r*0.02;
    }
    return s;
}

// glow ring
float ring(vec3 ray,vec3 pos,float r,float size)
{
  	float b = dot(ray,pos);
  	float c = dot(pos,pos) - b*b;

    float s=max(0.0,(1.0-size*abs(r-sqrt(c))));

    return s;
}

// rays of a star
float ringRayNoise(vec3 ray,vec3 pos,float r,float size,mat3 mr,float anim)
{
  	float b = dot(ray,pos);
    vec3 pr=ray*b-pos;

    float c=length(pr);

    pr*=mr;

    pr=normalize(pr);

    float s=max(0.0,(1.0-size*abs(r-c)));

    float nd=noise4q(vec4(pr*1.0,-anim+c))*2.0;
    nd=pow(nd,2.0);
    float n=0.4;
    float ns=1.0;
    if (c>r) {
        n=noise4q(vec4(pr*10.0,-anim+c));
        ns=noise4q(vec4(pr*50.0,-anim*2.5+c*2.0))*2.0;
    }
    n=n*n*nd*ns;

    return pow(s,4.0)+s*s*n;
}

vec4 noiseSpace(vec3 ray,vec3 pos,float r,mat3 mr,float zoom,vec3 subnoise,float anim)
{
  	float b = dot(ray,pos);
  	float c = dot(pos,pos) - b*b;

    vec3 r1=vec3(0.0);

    float s=0.0;
    float d=0.0625*1.5;
    float d2=zoom/d;

	float rq=r*r;
    float l1=sqrt(abs(rq-c));
    r1= (ray*(b-l1)-pos)*mr;

    r1*=d2;
    s+=abs(noise4q(vec4(r1+subnoise,anim))*d);
    s+=abs(noise4q(vec4(r1*0.5+subnoise,anim))*d*2.0);
    s+=abs(noise4q(vec4(r1*0.25+subnoise,anim))*d*4.0);
    //return s;
    return vec4(s*2.0,abs(noise4q(vec4(r1*0.1+subnoise,anim))),abs(noise4q(vec4(r1*0.1+subnoise*6.0,anim))),abs(noise4q(vec4(r1*0.1+subnoise*13.0,anim))));
}

float sphereZero(vec3 ray,vec3 pos,float r)
{
  	float b = dot(ray,pos);
  	float c = dot(pos,pos) - b*b;
    float s=1.0;
    if (c<r*r) s=0.0;
    return s;
}

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
	vec2 p = (-iResolution.xy + 2.0*fragCoord.xy) / iResolution.y;

	float mx = iMouse.x>0.0?iMouse.x/iResolution.x*10.0:0.5;
    float my = iMouse.y>0.0?iMouse.y/iResolution.y*4.0-2.0:0.0;
    vec2 rotate = vec2(mx,my);

    vec2 sins=sin(rotate);
    vec2 coss=cos(rotate);
    mat3 mr=mat3(vec3(coss.x,0.0,sins.x),vec3(0.0,1.0,0.0),vec3(-sins.x,0.0,coss.x));
    mr=mat3(vec3(1.0,0.0,0.0),vec3(0.0,coss.y,sins.y),vec3(0.0,-sins.y,coss.y))*mr;

    mat3 imr=mat3(vec3(coss.x,0.0,-sins.x),vec3(0.0,1.0,0.0),vec3(sins.x,0.0,coss.x));
    imr=imr*mat3(vec3(1.0,0.0,0.0),vec3(0.0,coss.y,-sins.y),vec3(0.0,sins.y,coss.y));

    float time=iGlobalTime*1.0;

    vec3 ray = normalize(vec3(p,2.0));
    vec3 pos = vec3(0.0,0.0,3.0);

    float s1=noiseSpere(ray,pos,1.0,mr,0.5,vec3(0.0),time);
    s1=pow(min(1.0,s1*2.4),2.0);
    float s2=noiseSpere(ray,pos,1.0,mr,4.0,vec3(83.23,34.34,67.453),time);
    s2=min(1.0,s2*2.2);
    fragColor = vec4( mix(vec3(1.0,1.0,0.0),vec3(1.0),pow(s1,60.0))*s1, 1.0 );
    fragColor += vec4( mix(mix(vec3(1.0,0.0,0.0),vec3(1.0,0.0,1.0),pow(s2,2.0)),vec3(1.0),pow(s2,10.0))*s2, 1.0 );

    fragColor.xyz -= vec3(ring(ray,pos,1.03,11.0))*2.0;
    fragColor = max( vec4(0.0), fragColor );

    float s3=ringRayNoise(ray,pos,0.96,1.0,mr,time);
    fragColor.xyz += mix(vec3(1.0,0.6,0.1),vec3(1.0,0.95,1.0),pow(s3,3.0))*s3;

    float zero=sphereZero(ray,pos,0.9);
    if (zero>0.0) {
    	//float s4=noiseSpace(ray,pos,100.0,mr,0.5,vec3(0.0),time*0.01);
	    vec4 s4=noiseSpace(ray,pos,100.0,mr,0.05,vec3(1.0,2.0,4.0),0.0);
    	//float s5=noiseSpace(ray,pos,100.0,vec3(mx,my,0.5),vec3(83.23,34.34,67.453),time*0.01);
    	//s4=pow(s4*2.0,6.0);
    	//s4=pow(s4*1.8,5.7);
    	s4.x=pow(s4.x,3.0);
    	//s5=pow(s5*2.0,6.0);
    	//fragColor.xyz += (vec3(0.0,0.0,1.0)*s4*0.6+vec3(0.9,0.0,1.0)*s5*0.3)*sphereZero(ray,pos,0.9);
    	fragColor.xyz += mix(mix(vec3(1.0,0.0,0.0),vec3(0.0,0.0,1.0),s4.y*1.9),vec3(0.9,1.0,0.1),s4.w*0.75)*s4.x*pow(s4.z*2.5,3.0)*0.2*zero;
    	//fragColor.xyz += (mix(mix(vec3(1.0,0.0,0.0),vec3(0.0,0.0,1.0),s4*3.0),vec3(1.0),pow(s4*2.0,4.0))*s4*0.6)*sphereZero(ray,pos,0.9);


		/*float b = dot(ray,pos);
  		float c = dot(pos,pos) - b*b;
    	float l1 = sqrt(abs(10.0-c));
    	vec3 spos = (ray*(b-l1))*mr;
        vec3 sposr=ceil(spos)+spos/abs(spos)*0.5;
        //sposr+=hpos(sposr)*0.2;

        float ss3=max(0.0,ringRayNoise(ray,(sposr)*imr,0.001,10.0,mr,time));
        fragColor.xyz += vec3(ss3);*/
    };

    //fragColor = max( vec4(0.0), fragColor );
    //s+=noiseSpere(ray,vec3(0.0,0.0,3.0),0.96,vec2(mx+1.4,my),vec3(83.23,34.34,67.453));
    //s+=noiseSpere(ray,vec3(0.0,0.0,3.0),0.90,vec2(mx,my),vec3(123.223311,956.34,7.45333))*0.6;

    fragColor = max( vec4(0.0), fragColor );
	fragColor = min( vec4(1.0), fragColor );
    fragColor.w = 0.5;
}

//
// SunShader 1.0 for Unity3D 4-5
//
// Panteleymonov Aleksandr 2016
//
// foxes@bk.ru
// manil@panteleymonov.ru
//
/*
Shader "Space/Star/Sun"
{
	Properties
	{
		_Radius("Radius", Float) = 0.5
		_Light("Light",Color) = (1,1,1,1)
		_Color("Color", Color) = (1,1,0,1)
		_Base("Base", Color) = (1,0,0,1)
		_Dark("Dark", Color) = (1,0,1,1)
		_RayString("Ray String", Range(0.02,10.0)) = 1.0
		_RayLight("Ray Light", Color) = (1,0.95,1.0,1)
		_Ray("Ray End", Color) = (1,0.6,0.1,1)
		_Detail("Detail Body", Range(0,5)) = 3
		_Rays("Rays", Range(1.0,10.0)) = 2.0
		_RayRing("Ray Ring", Range(1.0,10.0)) = 1.0
		_RayGlow("Ray Glow", Range(1.0,10.0)) = 2.0
		_Glow("Glow", Range(1.0,100.0)) = 4.0
		_Zoom("Zoom", Float) = 1.0
		_SpeedHi("Speed Hi", Range(0.0,10)) = 2.0
		_SpeedLow("Speed Low", Range(0.0,10)) = 2.0
		_SpeedRay("Speed Ray", Range(0.0,10)) = 5.0
		_SpeedRing("Speed Ring", Range(0.0,20)) = 2.0
		_Seed("Seed", Range(-10,10)) = 0
	}
		SubShader
	{
		Tags{ "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
		LOD 100

		Pass
		{
			Blend One OneMinusSrcAlpha
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 4.0

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
			#if UNITY_5_0
				UNITY_FOG_COORDS(1)
			#endif
				float4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			float _Radius;
			float _RayString;
			fixed4 _Light;
			fixed4 _Color;
			fixed4 _Base;
			fixed4 _Dark;
			fixed4 _Ray;
			fixed4 _RayLight;
			int _Detail;
			float _Rays;
			float _RayRing;
			float _RayGlow;
			float _Zoom;
			float _SpeedHi;
			float _SpeedLow;
			float _SpeedRay;
			float _SpeedRing;
			float _Glow;
			float _Seed;

			float4 posGlob; // center position

			v2f vert (appdata v)
			{
				v2f o;
				posGlob = float4(UNITY_MATRIX_MV[0].w, UNITY_MATRIX_MV[1].w, UNITY_MATRIX_MV[2].w,0);
				float3x3 r=transpose((float3x3)UNITY_MATRIX_MV);
				float3x3 m;
				m[2]=normalize(mul(r,(float3)posGlob));
				m[1]=normalize(cross(m[2],float3(0.0, 1.0, 0.0)));
				m[0]=normalize(cross(m[1],m[2]));
				o.uv1 = mul(transpose(m), (float3)v.vertex);
            	o.vertex = mul(UNITY_MATRIX_MVP, float4(o.uv1, 1.0));

				#if UNITY_5_0
				UNITY_TRANSFER_FOG(o,o.vertex);
				#endif
				return o;
			}

			// animated noise
			fixed4 hash4(fixed4 n) { return frac(sin(n)*(fixed)753.5453123); }

			// mix noise for alive animation
			fixed noise4q(fixed4 x)
			{
				fixed4 n3 = fixed4(0,0.25,0.5,0.75);
				fixed4 p2 = floor(x.wwww+n3);
				fixed4 b = floor(x.xxxx +n3) + floor(x.yyyy +n3)*157.0 + floor(x.zzzz +n3)*113.0;
				fixed4 p1 = b + frac(p2*0.00390625)*fixed4(164352.0, -164352.0, 163840.0, -163840.0);
				p2 = b + frac((p2+1)*0.00390625)*fixed4(164352.0, -164352.0, 163840.0, -163840.0);
				fixed4 f1 = frac(x.xxxx+n3);
				fixed4 f2 = frac(x.yyyy+n3);

				fixed4 n1 = fixed4(0,1.0,157.0,158.0);
				fixed4 n2 = fixed4(113.0,114.0,270.0,271.0);
				fixed4 vs1 = lerp(hash4(p1), hash4(n1.yyyy+p1), f1);
				fixed4 vs2 = lerp(hash4(n1.zzzz+p1), hash4(n1.wwww+p1), f1);
				fixed4 vs3 = lerp(hash4(p2), hash4(n1.yyyy+p2), f1);
				fixed4 vs4 = lerp(hash4(n1.zzzz+p2), hash4(n1.wwww+p2), f1);
				vs1 = lerp(vs1, vs2, f2);
				vs3 = lerp(vs3, vs4, f2);

				vs2 = lerp(hash4(n2.xxxx+p1), hash4(n2.yyyy+p1), f1);
				vs4 = lerp(hash4(n2.zzzz+p1), hash4(n2.wwww+p1), f1);
				vs2 = lerp(vs2, vs4, f2);
				vs4 = lerp(hash4(n2.xxxx+p2), hash4(n2.yyyy+p2), f1);
				fixed4 vs5 = lerp(hash4(n2.zzzz+p2), hash4(n2.wwww+p2), f1);
				vs4 = lerp(vs4, vs5, f2);
				f1 = frac(x.zzzz+n3);
				f2 = frac(x.wwww+n3);

				vs1 = lerp(vs1, vs2, f1);
				vs3 = lerp(vs3, vs4, f1);
				vs1 = lerp(vs1, vs3, f2);

				return dot(vs1,0.25);
			}

			float RayProj;
			float sqRadius; // sphere radius
			float fragTime;
			float sphere; // sphere distance
			float3 surfase; // position on surfase

			// body of a star
			fixed noiseSpere(float zoom, float3 subnoise, float anim)
			{
				fixed s = 0.0;

				if (sphere <sqRadius) {
					if (_Detail>0.0) s = noise4q(fixed4(surfase*zoom*3.6864 + subnoise, fragTime*_SpeedHi))*0.625;
					if (_Detail>1.0) s =s*0.85+noise4q(fixed4(surfase*zoom*61.44 + subnoise*3.0, fragTime*_SpeedHi*3.0))*0.125;
					if (_Detail>2.0) s =s*0.94+noise4q(fixed4(surfase*zoom*307.2 + subnoise*5.0, anim*5.0))*0.0625;//*0.03125;
					if (_Detail>3.0) s =s*0.98+noise4q(fixed4(surfase*zoom*600.0 + subnoise*6.0, fragTime*_SpeedLow*6.0))*0.03125;
					if (_Detail>4.0) s =s*0.98+noise4q(fixed4(surfase*zoom*1200.0 + subnoise*9.0, fragTime*_SpeedLow*9.0))*0.01125;
				}
				return s;
			}

			fixed4 frag (v2f i) : SV_Target
			{
				float invz =1/_Zoom;
				_Radius*=invz;
				fragTime=_Time.x*10.0;
				posGlob = float4(UNITY_MATRIX_MV[0].w, UNITY_MATRIX_MV[1].w, UNITY_MATRIX_MV[2].w,0);
				float3x3 m = (float3x3)UNITY_MATRIX_MV;
				float3 ray = normalize(mul(m, i.uv1) + posGlob.xyz);
				m = transpose((float3x3)UNITY_MATRIX_V);

				RayProj = dot(ray, (float3)posGlob);
				float sqDist=dot((float3)posGlob, (float3)posGlob);
				sphere = sqDist - RayProj*RayProj;
				sqRadius = _Radius*_Radius;
				if (RayProj<=0.0) sphere=sqRadius;
				float3 pr = ray*abs(RayProj) - (float3)posGlob;

				if (sqDist<=sqRadius) {
					surfase=-posGlob;
					sphere=sqDist;
				} else if (sphere <sqRadius) {
					float l1 = sqrt(sqRadius - sphere);
					surfase = mul(m,pr - ray*l1);
				} else {
					surfase=(float3)0;
				}

				fixed4 col = fixed4(0,0,0,0);

				if (_Detail >= 1.0) {
					float s1 = noiseSpere(0.5*_Zoom, float3(45.78, 113.04, 28.957)*_Seed, fragTime*_SpeedLow);
					s1 = pow(s1*2.4, 2.0);
					float s2 = noiseSpere(4.0*_Zoom, float3(83.23, 34.34, 67.453)*_Seed, fragTime*_SpeedHi);
					s2 = s2*2.2;

					col.xyz = fixed3(lerp((float3)_Color, (float3)_Light, pow(s1, 60.0))*s1);
					col.xyz += fixed3(lerp(lerp((float3)_Base, (float3)_Dark, s2*s2), (float3)_Light, pow(s2, 10.0))*s2);
				}

				fixed c = length(pr)*_Zoom;
				pr = normalize(mul(m, pr));//-ray;
				fixed s = max(0.0, (1.0 - abs(_Radius*_Zoom - c) / _RayString));//*RayProj;
				fixed nd = noise4q(float4(pr+float3(83.23, 34.34, 67.453)*_Seed, -fragTime*_SpeedRing + c))*2.0;
				nd = pow(nd, 2.0);
				fixed dr=1.0;
				if (sphere < sqRadius) dr = sphere / sqRadius;
				pr*=10.0;
				fixed n = noise4q(float4(pr+ float3(83.23, 34.34, 67.453)*_Seed, -fragTime*_SpeedRing + c))*dr;
				pr*=5.0;
				fixed ns = noise4q(float4(pr+ float3(83.23, 34.34, 67.453)*_Seed, -fragTime*_SpeedRay + c))*2.0*dr;
				if (_Detail>=3.0) {
					pr *= 3.0;
					ns = ns*0.5+noise4q(float4(pr+ float3(83.23, 34.34, 67.453)*_Seed, -fragTime*_SpeedRay + 0))*dr;
				}
				n = pow(n, _Rays)*pow(nd,_RayRing)*ns;
				fixed s3 = pow(s, _Glow) + pow(s, _RayGlow)*n;

				if (sphere < sqRadius) col.w = 1.0-s3*dr;
				if (sqDist>sqRadius)
					col.xyz = col.xyz+lerp((fixed3)_Ray, (fixed3)_RayLight, s3*s3*s3)*s3; //pow(s3, 3.0)

				col = clamp(col, 0, 1);

#if UNITY_5_0
				// apply fog
				UNITY_APPLY_FOG(i.fogCoord, col);
#endif
				return col;
			}
			ENDCG
		}
	}
}
*/
