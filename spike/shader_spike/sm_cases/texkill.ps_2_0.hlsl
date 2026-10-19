sampler2D s0 : register(s0);
float4 main(float4 v0 : COLOR0, float4 t0 : TEXCOORD0) : COLOR {
    clip(v0.x - 0.4);
    return tex2D(s0, t0.xy);
}
