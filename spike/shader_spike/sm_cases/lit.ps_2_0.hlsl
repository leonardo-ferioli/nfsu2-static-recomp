float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 t0 : TEXCOORD0) : COLOR {
    return saturate(lit(v0.x * 2 - 1, v0.y * 2 - 1, abs(c[0].x) * 4 + 1)) + t0 * 0.1;
}
