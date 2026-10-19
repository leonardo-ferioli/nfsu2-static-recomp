// flags: prefer_flow
sampler2D s0 : register(s0);
float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 r = v0;
    if (v0.x > c[0].x * 0.5 + 0.5) r = v1 * 2;
    else r = tex2D(s0, t0.xy) + c[1] * 0.1;
    if (v1.y < 0.3) r = r.zyxw;
    return saturate(r);
}
