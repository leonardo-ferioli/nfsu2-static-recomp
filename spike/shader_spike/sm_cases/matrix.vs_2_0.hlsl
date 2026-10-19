float4 c[96] : register(c0);
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 t0 : TEXCOORD0; };
VOut main(VIn i) {
    VOut o;
    o.p = float4(dot(i.p, c[0]), dot(i.p, c[1]), dot(i.p, c[2]), dot(i.p, c[3]));
    float4x4 m = float4x4(c[10], c[11], c[12], c[13]);
    float3x3 m3 = float3x3(c[14].xyz, c[15].xyz, c[16].xyz);
    o.c0 = saturate(mul(i.c0, m) * 0.5 + 0.5);
    o.t0 = float4(cross(i.t0.xyz, c[17].xyz), dot(mul(i.t0.xyz, m3), c[18].xyz));
    return o;
}
