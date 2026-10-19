// flags: prefer_flow
float4 c[96] : register(c0);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
VOut main(VIn i) {
    VOut o;
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    float4 sum = 0;
    [loop] for (int k = 0; k < 4; k++) sum += c[10 + k] * i.c0.x;
    o.c0 = saturate(sum * 0.25);
    o.t0 = i.t0;
    return o;
}
