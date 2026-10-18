// Console-only benchmark of the translated JDLZ decompressor (VA 573700) for any host architecture.
// Guest memory is plain VirtualAlloc at fixed low addresses (guest address == host address), so the same
// source runs as a 32-bit or a 64-bit program; link it with whichever generated_fast variant is being measured.
// usage: jdlz_bench <file.lzc> [repeats]
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include "runtime.hpp"
#include <chrono>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace nfsu2raw;
static uint32_t word(const std::vector<uint8_t>& b, size_t a) { uint32_t v; std::memcpy(&v, b.data() + a, 4); return v; }
static std::vector<uint8_t> reference(const std::vector<uint8_t>& input) {
    const size_t end = word(input, 12), length = word(input, 8);
    std::vector<uint8_t> out; out.reserve(length); size_t cursor = 18; unsigned flags = input[16] | 256, flags2 = input[17] | 256;
    auto take = [&]() { return unsigned(input[cursor++]); };
    while (cursor < end && out.size() < length) {
        if (!(flags & 1)) out.push_back(uint8_t(take()));
        else {
            auto first = take(), second = take(); unsigned count, distance;
            if (flags2 & 1) { count = ((first & 0xf0) << 4 | second) + 3; distance = (first & 15) + 1; }
            else { count = (first & 31) + 3; distance = ((first & 0xe0) << 3 | second) + 17; }
            for (unsigned i = 0; i < count; ++i) out.push_back(out[out.size() - distance]);
            flags2 >>= 1;
        }
        if (out.size() == length) break;
        flags >>= 1; if (flags == 1) flags = take() | 256; if (flags2 == 1) flags2 = take() | 256;
    }
    return out;
}
static void* alloc_at(uintptr_t at, size_t size) {
    void* p = VirtualAlloc(reinterpret_cast<void*>(at), size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    if (!p) { std::cerr << "VirtualAlloc failed at " << std::hex << at << "\n"; std::exit(2); }
    return p;
}
int main(int argc, char** argv) {
    if (argc < 2) return 2;
    const int repeats = argc > 2 ? std::atoi(argv[2]) : 5;
    std::ifstream f(argv[1], std::ios::binary);
    std::vector<uint8_t> input((std::istreambuf_iterator<char>(f)), {});
    const auto expected = reference(input);
    Cpu c;
    const uint32_t src = uint32_t(uintptr_t(alloc_at(0x20000000, input.size() + 4096)));
    const uint32_t dst = uint32_t(uintptr_t(alloc_at(0x40000000, expected.size() + 4096)));
    const uint32_t stack = uint32_t(uintptr_t(alloc_at(0x10000000, 0x10000)));
    std::memcpy(reinterpret_cast<void*>(uintptr_t(src)), input.data(), input.size());
    const uint32_t stop = 0xdead0000;
    double best = 1e9; uint64_t steps = 0;
    for (int i = 0; i < repeats; ++i) {
        std::memset(reinterpret_cast<void*>(uintptr_t(dst)), 0, expected.size());
        c.regs.fill(0);
        const uint32_t sp = stack + 0x8000;
        auto put = [&](uint32_t a, uint32_t v) { std::memcpy(reinterpret_cast<void*>(uintptr_t(a)), &v, 4); };
        put(sp, stop); put(sp + 4, src); put(sp + 8, dst);
        std::memcpy(c.regs.data() + 16, &sp, 4);
        c.pc = 0x573700; c.chain = 0;
        const auto t0 = std::chrono::steady_clock::now();
        steps = run(c, stop, 3000000000ull);
        const double s = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
        if (std::memcmp(reinterpret_cast<void*>(uintptr_t(dst)), expected.data(), expected.size()) != 0) { std::cerr << "MISMATCH\n"; return 1; }
        best = std::min(best, s);
    }
    std::printf("PASS %zu bytes out, %llu guest instr, best %.1f ms = %.0f M instr/s\n", expected.size(), (unsigned long long)steps, best * 1000, double(steps) / best / 1e6);
    return 0;
}
