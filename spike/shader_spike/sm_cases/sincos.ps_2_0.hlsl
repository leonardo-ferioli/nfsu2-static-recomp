float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float2 t0 : TEXCOORD0, float2 t1 : TEXCOORD1) : COLOR {
    float4 r;
    sincos(t0.x * 6.2831853, r.x, r.y);
    r.z = sin(t1.y * 3.0 + c[0].x);
    r.w = cos(v0.x * 2.0 + c[0].y);
    return r * 0.5 + 0.5;
}
