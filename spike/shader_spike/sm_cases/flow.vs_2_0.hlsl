// flags: prefer_flow
float4 c[96] : register(c0);
bool b0 : register(b0);
bool b1 : register(b1);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
VOut main(VIn i) {
    VOut o;
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    o.c0 = i.c0;
    if (b0) o.c0 = o.c0 * 0.5 + 0.25;
    if (b1) o.c0 = 1 - o.c0;
    if (i.t0.x > 0.5) o.c0 = o.c0.zyxw;
    o.t0 = i.t0;
    return o;
}
