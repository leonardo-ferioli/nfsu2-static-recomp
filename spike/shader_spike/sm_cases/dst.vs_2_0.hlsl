float4 c[96] : register(c0);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
VOut main(VIn i) {
    VOut o;
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    o.c0 = saturate(dst(i.c0, i.t0));
    o.t0 = float4(sign(i.c0.x - 0.5), floor(i.t0.y * 4), ceil(i.t0.z * 4), round(i.t0.w * 3));
    return o;
}
