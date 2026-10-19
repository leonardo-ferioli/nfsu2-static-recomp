// pow, exp2, log2, rsqrt, frac, lerp, abs, min/max on interpolated colours and constants
float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float2 t0 : TEXCOORD0) : COLOR {
    float4 r;
    r.x = pow(abs(v0.x) + 0.1, c[0].x * 2 + 3);
    r.y = exp2(v0.y * 2 - 1);
    r.z = log2(abs(v0.z) + 0.5);
    r.w = rsqrt(v1.x + 0.5);
    float4 f = frac(v1 * 3 + c[1]);
    return saturate(r * 0.25 + lerp(f, max(v0, c[2]), 0.5) * min(abs(c[3]), v1));
}
