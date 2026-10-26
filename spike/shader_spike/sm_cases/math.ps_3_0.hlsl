float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 r;
    r.x = pow(abs(v0.x) + 0.1, c[0].x * 2 + 3);
    r.y = exp(v0.y) * 0.3 + log(abs(v0.z) + 1.0) * 0.5;
    r.z = rcp(abs(v1.x) + 0.5) * 0.4 + sqrt(abs(t0.x));
    r.w = sin(t0.y * 4) * 0.5 + cos(t0.z * 4) * 0.5;
    return saturate(r);
}
