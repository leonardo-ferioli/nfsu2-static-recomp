float4 c[96] : register(c0);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };
VOut main(VIn i) {
    VOut o;
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    float s, k; sincos(i.t0.x * 6.28, s, k);
    o.c0 = float4(s, k, pow(abs(i.c0.x) + 0.1, 2.5), rsqrt(abs(i.c0.y) + 0.5)) * 0.5 + 0.5;
    o.c1 = lit(i.c1.x * 2 - 1, i.c1.y * 2 - 1, abs(i.c1.z) * 4 + 1);
    o.t0 = float4(exp2(i.t0.y), log2(abs(i.t0.z) + 1), frac(i.t1.x * 5), min(i.t1.y, c[10].x));
    o.t1 = float4(normalize(i.t1.xyz), 1);
    return o;
}
