// flags: prefer_flow
sampler2D s0 : register(s0);
sampler2D s1 : register(s1);
float4 c[8] : register(c0);
bool b0 : register(b0);
bool b1 : register(b1);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0, float4 t1 : TEXCOORD1) : COLOR {
    float4 r = v0;
    if (b0) r = v1 + t0; else r = v0 * 0.5;
    if (b1) r = r * 2;
    if (v0.x > 0.5) { r += tex2D(s0, t0.xy) * 0.25; if (v1.y > 0.5) r -= 0.1; else r += 0.1; }
    return saturate(r);
}
