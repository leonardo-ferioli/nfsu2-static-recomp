#pragma once
// The translated code of the game's audio banks, bound to where the game loads them (docs/AUDIO_MODULES.md, docs/AUDIO_MODULES_TRANSLATION.md).
//
// The game's bank loader (0x7212e5) is told where a bank is; at that moment the bank's bytes are still the file's, so the sha256 of its code range
// finds the translation generated ahead of time (audio_modules.hpp). The platform calls `bank_loader_starts` there (the translated code's hook
// "audio_bank_loader", or the reference engine when its pc reaches the loader) and `run` from its dispatch: control that reaches a bound range runs
// the translation. There is no interpreter: a bank with no translation is an error. Both hosts (32-bit identity and the 64-bit arena) use this file.
#include "runtime.hpp"
#include <cstdint>
#include <string>

namespace nfsu2raw::audio_banks {

constexpr uint32_t kLoader = 0x7212e5u;

// The loader is about to run: ESP points at its return address, the bank's image is its first argument. Binds the bank's translated code at
// image + code_begin (replacing any bank that was bound over the same addresses). Throws Fault when the image is not an audio bank or its code
// has no translation.
void bank_loader_starts(Cpu& c);

// When c.pc is in a bound bank's code: runs the translation until control leaves the range, sets c.pc to where it went and returns true.
// Cheap when c.pc is in no bank (one comparison against the range of all banks).
bool run(Cpu& c);

// True when `address` is in the code of a bound bank (diagnostics, tests).
bool bound(uint32_t address);
// Banks bound and entries into their translated code since attach() (the platform logs them when it is torn down).
uint64_t banks_bound();
uint64_t entries();

// Lower-case hex sha256 (portable: the core of the 64-bit host has no Windows).
std::string sha256_hex(const uint8_t* bytes, size_t size);

// The platform starts: the translated code's hook "audio_bank_loader" (mods/platform_spec.json) calls bank_loader_starts in builds that have it
// (the fast backends); the reference engines check their pc instead. Throws Fault when a fast build's translated code has no such hook.
void attach();
// The platform is torn down (its guest threads have stopped): the hook is removed and every binding forgotten.
void detach();

}  // namespace nfsu2raw::audio_banks
