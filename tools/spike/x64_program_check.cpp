// Bridge-free execution check of the generated program on a 64-bit host: the guest image blocks of the export (memory_<hex address>.bin) are
// mapped at their own addresses with VirtualAlloc (guest address == host address, as in the 32-bit product), and the game's resource-name
// hash routine (0x575330: calls, loops and table lookups over .rdata) is run for the strings given on the command line. The output has the
// format of `speed_fast --hash`, so the 32-bit product and this program can be compared line by line.
//   usage: x64_program_check <export dir> <string>...
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include "runtime.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>

using namespace nfsu2raw;
#ifdef ARENA
namespace nfsu2raw { uint8_t* g_guest_base = nullptr; }
static inline void* H(uint64_t a) { return g_guest_base + a; }
#else
static inline void* H(uint64_t a) { return reinterpret_cast<void*>(uintptr_t(a)); }
#endif
int main(int argc, char** argv) {
    if (argc < 3) { std::cerr << "usage: x64_program_check <export dir> <string>...\n"; return 2; }
    // The reservation granularity is 64 KiB while the image blocks start at 4 KiB boundaries: reserve the whole image range once, commit per block.
#ifdef ARENA
    // 4 GiB of address space, 4 GiB aligned like the arena of docs/MEMORY_MODEL_64.md: guest address a lives at base + a
    uint8_t* raw = static_cast<uint8_t*>(VirtualAlloc(nullptr, 0x200000000ull, MEM_RESERVE, PAGE_NOACCESS));
    if (!raw) { std::cerr << "cannot reserve the arena" << "\n"; return 3; }
    g_guest_base = reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(raw) + 0xffffffffull) & ~0xffffffffull);
    // the blocks below are committed inside this reservation
#else
    if (!VirtualAlloc(reinterpret_cast<void*>(uintptr_t(0x400000)), 0x540000, MEM_RESERVE, PAGE_READWRITE)) { std::cerr << "cannot reserve the image range" << "\n"; return 3; }
#endif
    for (const auto& entry : std::filesystem::directory_iterator(argv[1])) {
        const std::string name = entry.path().filename().string();
        if (name.rfind("memory_", 0) != 0) continue;
        const uint64_t start = std::strtoull(name.c_str() + 7, nullptr, 16);
        if (start >= 0x80000000ull) continue;   // the TEB-like block at 0xffdff000 is not part of the image
        std::ifstream f(entry.path(), std::ios::binary);
        std::vector<char> bytes((std::istreambuf_iterator<char>(f)), {});
        void* p = VirtualAlloc(H(start), (bytes.size() + 0xfff) & ~size_t(0xfff), MEM_COMMIT, PAGE_READWRITE);
        if (p != H(start)) { std::cerr << "cannot map " << name << " at its address\n"; return 3; }
        std::memcpy(p, bytes.data(), bytes.size());
    }
    void* data_page = VirtualAlloc(H(0x20000000), 0x10000, MEM_COMMIT, PAGE_READWRITE);
    void* stack_page = VirtualAlloc(H(0x10000000), 0x10000, MEM_COMMIT, PAGE_READWRITE);
    if (!data_page || !stack_page) { std::cerr << "cannot map data or stack\n"; return 3; }
    Cpu c;
    for (int i = 2; i < argc; ++i) {
        const std::string text = argv[i];
        if (text.size() > 150) { std::cerr << "the routine has a fixed 160-byte buffer\n"; return 2; }
        const uint32_t data = 0x20000100, sp = 0x10008000, stop = 0xdead0000;
        std::memcpy(H(data), text.c_str(), text.size() + 1);
        c.regs.fill(0);
        std::memcpy(c.regs.data() + 16, &sp, 4);
        std::memcpy(H(sp), &stop, 4);
        std::memcpy(H(sp + 4), &data, 4);
        c.pc = 0x00575330; c.instructions = 0;
        const uint64_t steps = run(c, stop, 5000000);
        uint32_t eax; std::memcpy(&eax, c.regs.data(), 4);
        std::printf("%08x (%llu statically translated instructions)\n", eax, static_cast<unsigned long long>(steps));
    }
    return 0;
}
