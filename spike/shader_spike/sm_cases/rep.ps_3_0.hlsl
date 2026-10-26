// flags: prefer_flow
float4 main(float4 v0 : COLOR0, float4 v1 : COLOR1, float4 t0 : TEXCOORD0) : COLOR {
    float4 sum = v0;
    [loop] for (int i = 0; i < 3; i++) sum = sum * 0.75 + v1 * 0.25;
    return sum;
}
