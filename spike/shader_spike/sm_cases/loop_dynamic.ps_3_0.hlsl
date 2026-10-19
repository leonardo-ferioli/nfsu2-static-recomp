// flags: prefer_flow
float4 c[8] : register(c0);
int4 n : register(i0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 sum = v0;
    [loop] for (int i = 0; i < n.x; i++) sum = sum * 0.5 + v1 * 0.25 + c[i] * 0.1;
    return saturate(sum);
}
