// relative addressing: c[a0.x + n] with a0 from a vertex attribute (mova)
float4 c[96] : register(c0);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
VOut main(VIn i) {
    VOut o;
    int k = (int)(abs(i.t0.x) * 7.0);
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    o.c0 = c[20 + k] * 0.5 + 0.5;
    o.t0 = c[30 + k * 2] * i.c0;
    return o;
}
