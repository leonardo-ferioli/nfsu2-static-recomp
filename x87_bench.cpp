// Throughput of one x87-heavy guest function (host FPU, virtual double, virtual soft80): the same function is called in a loop with
// well-formed float operands. Usage: x87_bench <export dir> <game dir> <entry hex> <calls> [repeat]
// Default entry 0x6717c7 is a 4x4 float matrix product (about 90 instructions, 64 x87 operations, FLD/FMUL/FADDP/FXCH/FSTP).
#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <chrono>
#include <cstring>
#include <iostream>
#include <random>
using namespace nfsu2raw;
int main(int argc, char** argv) {
    try {
        if (argc < 5) { std::cerr << "usage: x87_bench <export> <game> <entry hex> <calls> [repeat]\n"; return 2; }
        _putenv_s("NFSU2_DETERMINISTIC_MAP", "1"); _putenv_s("NFSU2_DETERMINISTIC_TIME", "1");
        const uint32_t entry = uint32_t(std::stoul(argv[3], nullptr, 16));
        const unsigned calls = unsigned(std::stoul(argv[4])), repeat = argc > 5 ? unsigned(std::stoul(argv[5])) : 5;
        Cpu c; NativePlatform p(c, argv[1], argv[2]);
        c.map(0, 0x10000); const uint32_t buffer = c.memory.back().base;
        const uint32_t sp = uint32_t(r<4>(c, 16)), stop = 0xdead0000;
        std::mt19937 rng(42);
        float* f = reinterpret_cast<float*>(c.pointer(buffer, 0x10000));
        for (unsigned i = 0; i < 0x10000 / 4; ++i) f[i] = float(int(rng() % 2001) - 1000) / 37.f;
        const uint32_t a1 = buffer + 0x100, a2 = buffer + 0x400, a3 = buffer + 0x800;
        double best = 1e9; uint64_t instructions = 0;
        for (unsigned rep = 0; rep < repeat; ++rep) {
            instructions = 0;
            const auto started = std::chrono::steady_clock::now();
            for (unsigned i = 0; i < calls; ++i) {
                wr<4>(c, 16, sp); wm<4>(c, sp, stop); wm<4>(c, sp + 4, a1); wm<4>(c, sp + 8, a2); wm<4>(c, sp + 12, a3);
                wr<4>(c, 4, a1); wr<4>(c, 8, a3);   // ECX / EDX for functions that take their operands there
                c.pc = entry;
                const uint64_t before = c.instructions;
                nfsu2raw::run(c, stop, 100000);
                instructions += c.instructions - before;
            }
            const double s = std::chrono::duration<double>(std::chrono::steady_clock::now() - started).count();
            best = std::min(best, s);
        }
        std::printf("entry %x: %u calls, %llu guest instructions, best %.1f ms, %.1f ns per call, %.0f M instr/s\n", entry, calls,
                    (unsigned long long)instructions, best * 1000, best * 1e9 / calls, double(instructions) / best / 1e6);
        return 0;
    } catch (const std::exception& e) { std::cerr << e.what() << '\n'; return 1; }
}
