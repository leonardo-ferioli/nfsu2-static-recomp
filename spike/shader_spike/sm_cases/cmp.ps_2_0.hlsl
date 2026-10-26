float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 a = (v0 - 0.5 >= 0) ? v1 : c[0];
    float4 b = step(c[1], v1) * sign(t0 - 0.5);
    return saturate(a + b * 0.5);
}
