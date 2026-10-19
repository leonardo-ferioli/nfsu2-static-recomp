float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float3 n = normalize(v0.xyz * 2 - 1 + c[0].xyz);
    float3 l = normalize(t0.xyz - 0.5);
    float d = saturate(dot(n, l));
    return float4(n * 0.5 + 0.5, d) * v1;
}
