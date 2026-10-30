#pragma once
// The console gamma pixel shader of the widescreen fix (X360GammaApprox, MIT: third_party/widescreen/). The 32-bit host compiles it at run time with the
// system's HLSL compiler; hosts without one use the compiled bytes in mods_gamma_ps20.inc (tools/compile_gamma_shader.cpp, ps_2_0).
namespace nfsu2raw::mods {
inline const char kGammaShader[] =
    "sampler2D InputTex : register(s0);\n"
    "float X360GammaApprox(float x)\n"
    "{\n"
    "    float A = 0.541901f; float B = 1.13465f; float C = 13.53054f; float D = 6.56649f; float E = 0.311465f;\n"
    "    x = max(0.0f, x);\n"
    "    float f1 = A * x;\n"
    "    float f2 = pow(x, B) * (1.0f - exp2(-C * x));\n"
    "    float f3 = saturate(x * D + E);\n"
    "    return lerp(f1, f2, f3);\n"
    "}\n"
    "float4 main(in float2 uv : TEXCOORD0) : COLOR0\n"
    "{\n"
    "    float3 color = tex2D(InputTex, uv).rgb;\n"
    "    return float4(X360GammaApprox(color.x), X360GammaApprox(color.y), X360GammaApprox(color.z), 1.0f);\n"
    "}\n";
}  // namespace nfsu2raw::mods
