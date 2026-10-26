// both colours and all four texture coordinates at once
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0, float4 t1 : TEXCOORD1, float4 t2 : TEXCOORD2, float4 t3 : TEXCOORD3) : COLOR {
    return saturate(v0 * 0.2 + v1 * 0.2 + t0 * 0.2 + t1 * 0.2 + t2 * 0.1 + t3 * 0.1);
}
