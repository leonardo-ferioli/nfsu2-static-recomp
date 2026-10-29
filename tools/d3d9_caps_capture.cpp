// Writes the capability profile the guest Direct3D 9 facade answers with on a host without a system Direct3D 9 (win32_facade_d3d9.cpp):
// the D3DCAPS9 record of the default adapter's HAL device and the numbers of its adapter identifier, as a C++ include. Run once on a
// Windows machine with a Direct3D 9 capable GPU (no window, no device is made):
//     clang++ -std=c++20 tools/d3d9_caps_capture.cpp -ld3d9 -o d3d9_caps_capture.exe && d3d9_caps_capture > d3d9_caps_profile.inc
// The identifier's text (driver and GPU names) is not kept: the facade reports its own.
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <d3d9.h>
#include <cstdio>
#include <cstring>

int main() {
    IDirect3D9* d3d = Direct3DCreate9(D3D_SDK_VERSION);
    if (!d3d) { std::fprintf(stderr, "Direct3DCreate9 failed\n"); return 1; }
    D3DCAPS9 caps{};
    if (FAILED(d3d->GetDeviceCaps(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &caps))) { std::fprintf(stderr, "GetDeviceCaps failed\n"); return 1; }
    D3DADAPTER_IDENTIFIER9 id{};
    d3d->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &id);
    static_assert(sizeof(D3DCAPS9) == 304, "D3DCAPS9 is 304 bytes on every x86 target");
    unsigned char bytes[sizeof caps];
    std::memcpy(bytes, &caps, sizeof caps);
    std::printf("// D3DCAPS9 of a HAL device (adapter 0), captured with tools/d3d9_caps_capture.cpp: vertex shader %lu.%lu, pixel shader %lu.%lu, max texture %lux%lu.\n",
                (caps.VertexShaderVersion >> 8) & 0xFF, caps.VertexShaderVersion & 0xFF, (caps.PixelShaderVersion >> 8) & 0xFF, caps.PixelShaderVersion & 0xFF, caps.MaxTextureWidth, caps.MaxTextureHeight);
    std::printf("static const uint8_t kCapsProfile[304] = {");
    for (unsigned i = 0; i < sizeof bytes; ++i) std::printf("%s0x%02x", i % 24 ? ", " : (i ? ",\n    " : "\n    "), bytes[i]);
    std::printf("\n};\n");
    std::printf("// Adapter identifier numbers (DriverVersion high/low, VendorId, DeviceId, SubSysId, Revision, WHQLLevel).\n");
    std::printf("static const uint32_t kAdapterProfile[7] = {0x%08lx, 0x%08lx, 0x%08lx, 0x%08lx, 0x%08lx, 0x%08lx, 0x%08lx};\n",
                static_cast<unsigned long>(id.DriverVersion.HighPart), static_cast<unsigned long>(id.DriverVersion.LowPart), id.VendorId, id.DeviceId, id.SubSysId, id.Revision, id.WHQLLevel);
    d3d->Release();
    return 0;
}
