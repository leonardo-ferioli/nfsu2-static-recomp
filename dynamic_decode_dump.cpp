// Test tool: decode the exported .text bytes with the runtime SLEIGH engine, as if at their original addresses,
// and print each instruction in a canonical form that tools/test_dynamic_decode.py compares with Ghidra's export.
#include "dynamic_code.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>
using namespace nfsu2raw;
int main(int argc, char** argv) {
    try {
        if (argc != 4) throw Fault("usage: dynamic_decode_dump <x86.sla> <memory_401000.bin> <addresses.txt>");
        std::ifstream text_file(argv[2], std::ios::binary);
        std::vector<uint8_t> text((std::istreambuf_iterator<char>(text_file)), {});
        const uint32_t base = 0x401000;
        DynamicCode code(argv[1], [&](uint8_t* out, size_t size, uint32_t address) {
            for (size_t i = 0; i < size; ++i) out[i] = (address + i >= base && address + i - base < text.size()) ? text[address + i - base] : 0;
        });
        std::ifstream list(argv[3]);
        unsigned long address;
        std::string line;
        static const char* spaces[] = {"const", "register", "unique", "ram"};
        auto show = [](const VarnodeRef& v) {
            char buffer[64];
            std::snprintf(buffer, sizeof(buffer), "%s:%llx:%u", spaces[v.space], (unsigned long long)v.offset, v.size);
            return std::string(buffer);
        };
        while (std::getline(list, line)) {
            address = std::stoul(line, nullptr, 16);
            const DecodedInstruction d = code.decode_raw(uint32_t(address));
            std::printf("@%lx %u %zu\n", address, d.length, d.ops.size());
            for (const auto& op : d.ops) {
                std::printf(" %d", op.opcode);
                if (op.has_output) std::printf(" >%s", show(op.output).c_str());
                for (const auto& in : op.inputs) std::printf(" %s", show(in).c_str());
                std::printf("\n");
            }
        }
        return 0;
    } catch (const std::exception& e) {
        std::fprintf(stderr, "%s\n", e.what());
        return 1;
    }
}
