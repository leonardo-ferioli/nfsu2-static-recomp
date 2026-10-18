// Shader spike S1 (docs/PLATFORM_API.md, 3.4): console tool.
//   shader_spike dis <blob...>                       our disassembly of Direct3D 9 shader blobs
//   shader_spike ref <blob...>                       Microsoft's disassembly (d3dcompiler_47), the reference for the decoder
//   shader_spike translate <file-or-folder...> [--dump <folder>]
//        decode, lower to SPIR-V, cross-compile to GLSL ES 3.0 / GLSL 3.30 / MSL / HLSL 5.0, compile the HLSL with D3DCompile, time everything
// Shader blobs are game data: they live outside the repository (tools/scan_d3d9_shaders.py --out <folder>).
#include "shader/cross_compile.hpp"
#include "shader/d3d9_shader.hpp"
#include "shader/d3d9_to_spirv.hpp"
#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#ifdef HAVE_D3DCOMPILER
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <d3dcompiler.h>
#endif

namespace fs = std::filesystem;
using namespace nue::shader;

static std::vector<uint8_t> read_file(const fs::path& path) {
    std::ifstream f(path, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), {});
}

static std::vector<fs::path> collect(int argc, char** argv, int from) {
    std::vector<fs::path> files;
    for (int i = from; i < argc; ++i) {
        if (std::strncmp(argv[i], "--", 2) == 0) { ++i; continue; }
        fs::path p = argv[i];
        if (fs::is_directory(p)) { for (auto& e : fs::directory_iterator(p)) if (e.is_regular_file()) files.push_back(e.path()); }
        else files.push_back(p);
    }
    std::sort(files.begin(), files.end());
    return files;
}

static std::span<const uint32_t> words(const std::vector<uint8_t>& bytes) { return {reinterpret_cast<const uint32_t*>(bytes.data()), bytes.size() / 4}; }

int main(int argc, char** argv) {
    if (argc < 3) { std::cerr << "usage: shader_spike dis|ref|translate <blobs...> [--dump <folder>]\n"; return 2; }
    const std::string command = argv[1];
    std::string dump;
    for (int i = 2; i + 1 < argc; ++i) if (!std::strcmp(argv[i], "--dump")) dump = argv[i + 1];
    const auto files = collect(argc, argv, 2);

    if (command == "dis") {
        for (auto& f : files) {
            Program program; std::string error;
            const auto bytes = read_file(f);
            if (!decode(words(bytes), program, error)) { std::cout << f.filename().string() << ": decode failed: " << error << "\n"; return 1; }
            std::cout << disassemble(program);
        }
        return 0;
    }
#ifdef HAVE_D3DCOMPILER
    if (command == "ref") {
        for (auto& f : files) {
            const auto bytes = read_file(f);
            ID3DBlob* blob = nullptr;
            if (FAILED(D3DDisassemble(bytes.data(), bytes.size(), 0, nullptr, &blob)) || !blob) { std::cout << "disassembly failed\n"; return 1; }
            std::cout.write(static_cast<const char*>(blob->GetBufferPointer()), std::streamsize(blob->GetBufferSize()));
            blob->Release();
        }
        return 0;
    }
#endif
    if (command != "translate") { std::cerr << "unknown command\n"; return 2; }

    using Clock = std::chrono::steady_clock;
    auto ms = [](Clock::time_point a, Clock::time_point b) { return std::chrono::duration<double, std::milli>(b - a).count(); };
    const Target targets[] = {Target::glsl_es300, Target::glsl330, Target::msl, Target::hlsl50};
    unsigned total = 0, decoded = 0, lowered = 0, crossed[4] = {}, hlsl_compiled = 0;
    double t_decode = 0, t_lower = 0, t_cross[4] = {}, t_hlsl = 0;
    std::vector<std::string> failures;
    if (!dump.empty()) fs::create_directories(dump);
    for (auto& f : files) {
        ++total;
        const std::string name = f.stem().string();
        const auto bytes = read_file(f);
        Program program; std::string error;
        auto t0 = Clock::now();
        if (!decode(words(bytes), program, error)) { failures.push_back(name + ": decode: " + error); continue; }
        auto t1 = Clock::now(); t_decode += ms(t0, t1); ++decoded;
        TranslateOptions options; TranslateResult result;
        if (program.stage == Stage::pixel && program.major == 1 && program.minor == 4) { /* texld stages use the default 2D */ }
        if (!translate_to_spirv(program, options, result)) { failures.push_back(name + ": lower: " + result.error); continue; }
        auto t2 = Clock::now(); t_lower += ms(t1, t2); ++lowered;
        if (!dump.empty()) {
            std::ofstream(fs::path(dump) / (name + ".spv"), std::ios::binary).write(reinterpret_cast<const char*>(result.spirv.data()), std::streamsize(result.spirv.size() * 4));
            std::ofstream(fs::path(dump) / (name + ".d3d9.txt")) << disassemble(program);
        }
        TranslateResult plain;
        { TranslateOptions plain_options; plain_options.plain_uniforms = true; if (!translate_to_spirv(program, plain_options, plain)) { failures.push_back(name + ": lower (plain): " + plain.error); continue; } }
        for (int k = 0; k < 4; ++k) {
            std::string text, cross_error;
            CrossOptions co;
            auto a = Clock::now();
            const bool gl = targets[k] == Target::glsl_es300 || targets[k] == Target::glsl330;
            if (!cross_compile(gl ? plain.spirv : result.spirv, program.stage, targets[k], co, text, cross_error)) { failures.push_back(name + ": " + target_name(targets[k]) + ": " + cross_error); continue; }
            auto b = Clock::now(); t_cross[k] += ms(a, b); ++crossed[k];
            if (!dump.empty()) {
                const char* ext = k == 0 ? ".es.glsl" : k == 1 ? ".glsl" : k == 2 ? ".metal" : ".hlsl";
                std::ofstream(fs::path(dump) / (name + ext)) << text;
            }
#ifdef HAVE_D3DCOMPILER
            if (targets[k] == Target::hlsl50) {
                ID3DBlob* code = nullptr; ID3DBlob* errors = nullptr;
                auto c = Clock::now();
                const HRESULT hr = D3DCompile(text.data(), text.size(), name.c_str(), nullptr, nullptr, "main", program.stage == Stage::vertex ? "vs_5_0" : "ps_5_0", 0, 0, &code, &errors);
                t_hlsl += ms(c, Clock::now());
                if (FAILED(hr)) failures.push_back(name + ": D3DCompile: " + (errors ? std::string(static_cast<const char*>(errors->GetBufferPointer())) : "?"));
                else ++hlsl_compiled;
                if (code) code->Release();
                if (errors) errors->Release();
            }
#endif
        }
    }
    std::printf("%u blobs: decoded %u, lowered to SPIR-V %u\n", total, decoded, lowered);
    for (int k = 0; k < 4; ++k) std::printf("  %-10s cross-compiled %u (%.3f ms per shader)\n", target_name(targets[k]), crossed[k], crossed[k] ? t_cross[k] / crossed[k] : 0.0);
#ifdef HAVE_D3DCOMPILER
    std::printf("  HLSL -> DXBC (D3DCompile) succeeded %u (%.3f ms per shader)\n", hlsl_compiled, hlsl_compiled ? t_hlsl / hlsl_compiled : 0.0);
#endif
    std::printf("  decode %.4f ms, lowering %.4f ms per shader\n", decoded ? t_decode / decoded : 0.0, lowered ? t_lower / lowered : 0.0);
    for (auto& failure : failures) std::printf("FAIL %s\n", failure.c_str());
    return failures.empty() ? 0 : 1;
}
