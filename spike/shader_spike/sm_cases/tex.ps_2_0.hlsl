// tex2D, tex2Dproj, tex2Dbias from several samplers
sampler2D s0 : register(s0);
sampler2D s1 : register(s1);
sampler2D s2 : register(s2);
float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 t0 : TEXCOORD0, float4 t1 : TEXCOORD1, float4 t2 : TEXCOORD2) : COLOR {
    float4 a = tex2D(s0, t0.xy);
    float4 b = tex2Dproj(s1, float4(t1.xy, 0, abs(t1.w) + 0.5));
    float4 d = tex2Dbias(s2, float4(t2.xy, 0, 0.0));
    return (a + b * v0 + d) * 0.5;
}
