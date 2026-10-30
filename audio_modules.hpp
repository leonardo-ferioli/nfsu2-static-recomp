#pragma once
// The x86 code in the game's audio banks, translated ahead of time (tools/gen_audio_modules.py, docs/AUDIO_MODULES_TRANSLATION.md).
//
// A bank's loader (the executable's 0x7212e5) makes [image + code_begin, image + code_end) executable and the game calls into it. The translation of that
// range is found by the sha256 (lower-case hex) of the bytes [code_begin, code_end) of the bank file, before the loader's fixups and relocations; banks
// of one kind share it. `run` executes the translated code from c.pc, an address in [code_base, code_base + size) with code_base = image + code_begin,
// and returns when control leaves that range (a call or jump to the executable, a return to the executable or to a thread's end), with c.pc/ESP/registers
// as the guest would have them; the caller continues there (dispatch), and calls `run` again when control comes back into the range.
// The code must see the bank as the loader leaves it (fixups resolved, relocations applied, the section words stored): the translation reads the bank's
// data from guest memory. A c.pc in the range that is not the start of an instruction the translation knows is a fault (missing_instruction).
#include "runtime.hpp"
#include <cstdint>
#include <cstring>

namespace nfsu2raw {
struct AudioModule {
    const char* sha256;            // of the range's bytes in the file, 64 lower-case hex digits
    uint32_t size;                 // code_end - code_begin
    uint32_t instructions;         // translated instructions
    uint32_t (*run)(Cpu& c, uint32_t code_base);
    const uint32_t* entries;       // offsets (from code_base) of the functions found in the range: the start of the range and the code that follows a return/jump
    uint32_t entry_count;
};
extern const AudioModule audio_modules[];   // sorted by sha256
extern const unsigned audio_module_count;
inline const AudioModule* find_audio_module(const char* sha256) {
    unsigned lo = 0, hi = audio_module_count;
    while (lo < hi) {
        const unsigned mid = (lo + hi) / 2;
        const int order = std::memcmp(audio_modules[mid].sha256, sha256, 64);
        if (order == 0) return &audio_modules[mid];
        (order < 0 ? lo : hi) = order < 0 ? mid + 1 : mid;
    }
    return nullptr;
}
}
