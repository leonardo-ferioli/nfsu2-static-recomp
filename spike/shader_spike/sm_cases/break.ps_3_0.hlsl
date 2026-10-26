// flags: prefer_flow
float4 c[8] : register(c0);
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 sum = 0;
    [loop] for (int i = 0; i < 6; i++) {
        sum += v1 * 0.2;
        if (sum.x > v0.x) break;
    }
    return saturate(sum);
}
