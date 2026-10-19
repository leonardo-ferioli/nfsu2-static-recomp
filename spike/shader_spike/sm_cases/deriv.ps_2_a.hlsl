float4 main(float4 v0 : COLOR0, float4 t0 : TEXCOORD0) : COLOR {
    return float4(abs(ddx(t0.x)) * 20, abs(ddy(t0.y)) * 20, ddx(v0.x) * 10 + 0.5, 1);
}
