// dependent texture reads
sampler2D s0 : register(s0);
sampler2D s1 : register(s1);
float4 main(float4 v0 : COLOR0, float4 t0 : TEXCOORD0) : COLOR {
    float4 a = tex2D(s0, t0.xy);
    return tex2D(s1, a.xy * 0.5 + t0.zw) * v0;
}
