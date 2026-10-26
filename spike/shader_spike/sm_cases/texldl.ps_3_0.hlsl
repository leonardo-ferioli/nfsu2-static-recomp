sampler2D s0 : register(s0);
sampler2D s1 : register(s1);
float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 t0 : TEXCOORD0, float4 t1 : TEXCOORD1) : COLOR {
    float4 a = tex2Dlod(s0, float4(t0.xy, 0, 0));
    float4 b = tex2Dlod(s1, float4(t1.xy, 0, 0));
    float4 d = tex2Dproj(s0, float4(t0.xy, 0, abs(t1.z) + 0.5));
    return (a + b + d) * (1.0 / 3.0) * v0;
}
