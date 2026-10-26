float4 main(float4 v0 : COLOR0, float f : VFACE) : COLOR {
    return f > 0 ? v0 : v0.zyxw;
}
