float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 r;
    r.x = dot(v0.xy, v1.xy) + c[0].x;
    r.y = dot(t0.xyz, v1.xyz);
    r.z = dot(v0, t0);
    r.w = v0.w * v1.w + c[1].w * (1 - v0.w);
    return saturate(r);
}
