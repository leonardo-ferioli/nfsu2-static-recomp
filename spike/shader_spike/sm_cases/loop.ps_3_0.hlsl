// flags: prefer_flow
sampler2D s0 : register(s0);
float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 sum = 0;
    [loop] for (int i = 0; i < 4; i++) {
        sum += tex2D(s0, t0.xy + float2(i * 0.125, -i * 0.0625)) * (1.0 / (i + 1));
    }
    return saturate(sum * 0.5 + v0 * 0.25);
}
