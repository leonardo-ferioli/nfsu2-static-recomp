// flags: prefer_flow
float4 c[96] : register(c0);
bool b0 : register(b0);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };
VOut main(VIn i) {
    VOut o;
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    o.c0 = i.c0; o.c1 = i.c1; o.t0 = i.t0; o.t1 = i.t1;
    if (b0) o.c0 = i.c0 * c[10]; else o.c0 = i.c0 + c[11];
    [loop] for (int k = 0; k < 3; k++) o.c1 += c[12 + k] * 0.1;
    return o;
}
