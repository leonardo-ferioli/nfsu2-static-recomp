float4 main(float4 v0 : COLOR0, float2 vp : VPOS) : COLOR {
    return float4(frac(vp.x / 8.0), frac(vp.y / 8.0), vp.x / 32.0, 1) * v0;
}
