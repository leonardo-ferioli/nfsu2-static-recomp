// Differential test of the audio banks' translated code (tools/gen_audio_modules.py, audio_modules.hpp) against the SLEIGH interpreter.
//
//   audio_module_tests <x86.sla> <game dir> <export dir> [trials per entry (default 60)] [boot trials per entry (default 400)] [seed]
//
// Every bank of <game dir>/SOUND is parsed, the sha256 of its code range must name a translation (a bank without one is a failure), and the loader
// of the executable (0x7212e5) is imitated on a copy of the file: fixups into the executable's function table, relocations, the section table, the
// words the loader stores the image base into. Then each entry of the translation is run from random processor and memory states by both engines:
//   - the SLEIGH interpreter (DynamicCode, generic mode 0: the specification), and
//   - the translated code, driven the way the platform will drive it (run until control leaves the range, continue at the new pc).
// A call or jump out of the range stands for a function of the executable: both engines stop, the harness records the state (pc, registers, the
// stack words the callee would see), answers it like a function would (a deterministic EAX, the return address popped) and lets the engine go on.
// Compared per trial: whether it faulted, the trace of these exits, the registers, the instruction count and all memory of the arena.
// The three banks a boot loads (FE_COMMON_MB, Nitrous_00_MB, FE_MB) get the boot trial count; every other range the normal one.
#include "audio_modules.hpp"
#include "dynamic_code.hpp"
#include <algorithm>
#include <csetjmp>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <map>
#include <set>
#include <random>
#include <string>
#include <vector>
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>
using namespace nfsu2raw;
namespace fs = std::filesystem;

namespace nfsu2raw {
// Filled by units built for coverage (tools/build_audio_tests.sh ... coverage): which instructions of which range the trials executed.
std::map<std::string, std::set<uint32_t>> g_audio_coverage;
void audio_cov(const char* unit, uint32_t offset) { g_audio_coverage[unit].insert(offset); }
}

namespace {
constexpr uint32_t function_table = 0x817fe0;
constexpr uint32_t sentinel = 0xdead0000u;
constexpr uint32_t stack_top = 0x40000, scratch_base = 0x40000, scratch_size = 0x8000, scratch_count = 6, image_offset = 0x100000;

uint32_t rd32(const std::vector<uint8_t>& b, size_t o) { uint32_t v = 0; if (o + 4 <= b.size()) std::memcpy(&v, b.data() + o, 4); return v; }
uint16_t rd16(const std::vector<uint8_t>& b, size_t o) { uint16_t v = 0; if (o + 2 <= b.size()) std::memcpy(&v, b.data() + o, 2); return v; }

std::string sha256_hex(const uint8_t* data, size_t size) {
    BCRYPT_ALG_HANDLE algorithm = nullptr;
    if (BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM, nullptr, 0) < 0) throw Fault("SHA-256 provider unavailable");
    uint8_t digest[32];
    const NTSTATUS status = BCryptHash(algorithm, nullptr, 0, const_cast<PUCHAR>(data), ULONG(size), digest, sizeof(digest));
    BCryptCloseAlgorithmProvider(algorithm, 0);
    if (status < 0) throw Fault("SHA-256 failed");
    static const char* digits = "0123456789abcdef";
    std::string out;
    for (uint8_t byte : digest) { out += digits[byte >> 4]; out += digits[byte & 15]; }
    return out;
}

struct Section { uint32_t offset, start, end; uint8_t words; };
struct Bank {
    std::string path;
    std::vector<uint8_t> file;
    uint32_t lo = 0, hi = 0;
    std::string hash;
    std::vector<uint32_t> fixups, relocations;
    std::vector<Section> sections;
};

Bank parse_bank(const fs::path& path, const fs::path& game) {
    Bank bank;
    bank.path = fs::relative(path, game).generic_string();
    std::ifstream in(path, std::ios::binary);
    bank.file.assign(std::istreambuf_iterator<char>(in), {});
    const auto& f = bank.file;
    if (f.size() < 0x40 || std::memcmp(f.data(), "ABKC", 4) != 0) throw Fault(bank.path + ": not an ABKC bank");
    const uint16_t count = rd16(f, 0x0a);
    uint32_t o = rd32(f, 0x1c);
    bank.lo = 0xffffffffu;
    for (unsigned i = 0; i < count; ++i) {
        const unsigned a = f[o + 0x24], b = f[o + 0x27];
        Section s{o, rd32(f, o + 0x28), rd32(f, o + 0x2c), uint8_t(a)};
        bank.sections.push_back(s);
        bank.lo = std::min(bank.lo, s.start);
        bank.hi = std::max(bank.hi, s.end);
        o += 0x3c + 4 * (a + b);
    }
    for (uint32_t k = 0, t = rd32(f, 0x30), n = rd32(f, t); k < n; ++k) bank.fixups.push_back(rd32(f, t + 4 + 4 * k));
    for (uint32_t k = 0, t = rd32(f, 0x34), n = rd32(f, t); k < n; ++k) bank.relocations.push_back(rd32(f, t + 4 + 4 * k));
    bank.hash = sha256_hex(f.data() + bank.lo, bank.hi - bank.lo);
    return bank;
}

// What the executable's loader (0x7212e5) does to the file once it is in memory at `image`.
void load_bank(const Bank& bank, uint8_t* image, uint32_t image_address, const std::vector<uint32_t>& table) {
    std::memcpy(image, bank.file.data(), bank.file.size());
    auto w32 = [&](uint32_t offset, uint32_t value) { std::memcpy(image + offset, &value, 4); };
    auto r32 = [&](uint32_t offset) { uint32_t v; std::memcpy(&v, image + offset, 4); return v; };
    for (uint32_t offset : bank.fixups) w32(offset, table.at(r32(offset)) - (image_address + offset) - 4);
    for (uint32_t offset : bank.relocations) w32(offset, r32(offset) + image_address);
    for (const Section& s : bank.sections) {
        w32(s.offset + 0x28, r32(s.offset + 0x28) + image_address);
        w32(s.offset + 0x2c, r32(s.offset + 0x2c) + image_address);
        w32(s.offset + 0x14, 0x721096);
        w32(s.offset + 0x18, image_address + s.offset);
        for (unsigned k = 0; k < s.words; ++k) w32(r32(s.offset + 0x3c + 4 * k) + r32(s.offset + 0x2c) - image_address, image_address);   // [word + end] = image
    }
}

// A wild pointer is an access violation of the process: inside a trial it is a "fault" outcome of that engine.
jmp_buf trial_exit;
volatile bool in_trial = false;
LONG CALLBACK trial_guard(EXCEPTION_POINTERS* e) {
    if (in_trial && e->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) { in_trial = false; longjmp(trial_exit, 1); }
    return EXCEPTION_CONTINUE_SEARCH;
}

uint64_t fnv(const uint8_t* data, size_t size, uint64_t h = 1469598103934665603ull) {
    for (size_t i = 0; i < size; ++i) h = (h ^ data[i]) * 1099511628211ull;
    return h;
}

struct Outcome {
    bool fault = false, missing = false;
    std::string what;
    uint64_t trace = 0, memory = 0, instructions = 0;
    unsigned exits = 0;
    std::array<uint8_t, 0x300> regs{};
    std::vector<uint8_t> image;   // arena copy, kept to explain a mismatch
};

struct World {
    uint8_t* arena = nullptr;
    uint32_t base = 0, size = 0;
    std::vector<uint8_t> initial;
    uint32_t image = 0, code_begin = 0, code_end = 0;
};

void regs_set(Cpu& c, unsigned reg, uint32_t value) { std::memcpy(c.regs.data() + 4 * reg, &value, 4); }
uint32_t regs_get(Cpu& c, unsigned reg) { uint32_t v; std::memcpy(&v, c.regs.data() + 4 * reg, 4); return v; }
constexpr unsigned EAX = 0, ECX = 1, EDX = 2, EBX = 3, ESP = 4, EBP = 5, ESI = 6, EDI = 7;

// One engine from the prepared state until the trial ends. `step` runs from c.pc while it is inside the range and returns.
template <class Step>
Outcome drive(World& w, Cpu& c, uint32_t entry_pc, Step&& step) {
    Outcome out;
    c.pc = entry_pc;
    c.instructions = 0;
    uint64_t trace = 1469598103934665603ull;
    in_trial = true;
    if (setjmp(trial_exit) == 0) {
        try {
            for (unsigned rounds = 0; rounds < 400 && c.instructions < 400000; ++rounds) {
                if (c.pc >= w.code_begin && c.pc < w.code_end) {
                    step(c);
                    if (c.pc >= w.code_begin && c.pc < w.code_end) continue;   // the budget ended inside the range: go on
                }
                if (c.pc == sentinel) break;
                // control left the range: a function of the executable (or the end of the world)
                const uint32_t sp = regs_get(c, ESP);
                uint32_t event[16] = {c.pc, sp};
                for (unsigned k = 0; k < 8; ++k) event[2 + k] = regs_get(c, k);
                for (unsigned k = 0; k < 4; ++k) std::memcpy(&event[10 + k], reinterpret_cast<void*>(uintptr_t(sp) + 4 * (k + 1)), 4);
                trace = fnv(reinterpret_cast<const uint8_t*>(event), sizeof(event), trace);
                ++out.exits;
                uint32_t ret;
                std::memcpy(&ret, reinterpret_cast<void*>(uintptr_t(sp)), 4);
                regs_set(c, ESP, sp + 4);
                const uint32_t answer = (c.pc * 2654435761u) ^ (out.exits * 40503u);
                regs_set(c, EAX, answer);
                regs_set(c, ECX, answer >> 3);
                regs_set(c, EDX, answer >> 7);
                c.pc = ret;
                if (ret == sentinel) break;
                if (!(ret >= w.code_begin && ret < w.code_end)) break;
            }
        } catch (const Fault& e) {
            out.fault = true;
            out.what = e.what();
            out.missing = out.what.find("no statically translated instruction") != std::string::npos;
        }
    } else {
        out.fault = true;
        out.what = "access violation";
    }
    in_trial = false;
    out.trace = trace;
    out.instructions = c.instructions;
    if (!out.fault) {
        std::memcpy(out.regs.data(), c.regs.data(), out.regs.size());
        std::memset(out.regs.data() + 644, 0, 4);   // the shadow EIP is the translation's own bookkeeping
        out.memory = fnv(w.arena, w.size);
        out.image.assign(w.arena, w.arena + w.size);
    }
    return out;
}

void prepare(World& w, std::mt19937_64& rng, Cpu& c) {
    std::memcpy(w.arena, w.initial.data(), w.size);
    auto pick_pointer = [&] { return w.base + scratch_base + uint32_t(rng() % scratch_count) * scratch_size + uint32_t(rng() % (scratch_size - 0x200)) / 4 * 4; };
    // Values are pointers into the scratch buffers or small numbers: a random 32-bit value as an index would be a store into the test's own process.
    auto pick_value = [&]() -> uint32_t {
        switch (rng() % 20) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: return pick_pointer();
        case 12: case 13: return uint32_t(rng() % 64);
        case 14: case 15: return uint32_t(rng() % 4096);
        case 16: return uint32_t(rng() % 100000);
        case 17: return uint32_t(rng() % 4) * 0x40000000u + uint32_t(rng() % 3);   // 0, 1, 2, 0x40000000.. (floats and flags tests)
        case 18: return 0x3f800000u + uint32_t(rng() % 0x10000000);                   // float-like
        default: return 0;
        }
    };
    for (uint32_t i = 0; i < scratch_count * scratch_size; i += 4) {
        const uint32_t v = (rng() % 3 == 0) ? pick_pointer() : (rng() % 3 ? uint32_t(rng() % 1000) : (rng() % 3 ? uint32_t(rng() % 100000) : 0x3f800000u + uint32_t(rng() % 0x10000000)));
        std::memcpy(w.arena + scratch_base + i, &v, 4);
    }
    std::memset(c.regs.data(), 0, c.regs.size());
    for (unsigned r = 0; r < 8; ++r) regs_set(c, r, pick_value());
    const uint32_t sp = w.base + stack_top - 0x100 - uint32_t(rng() % 32) * 4;
    regs_set(c, ESP, sp);
    uint32_t frame[8] = {sentinel};
    for (unsigned k = 1; k < 8; ++k) frame[k] = rng() % 100 < 75 ? pick_pointer() : pick_value();
    std::memcpy(w.arena + (sp - w.base), frame, sizeof(frame));
    for (uint32_t i = 0; i < 0x40; i += 4) { const uint32_t v = pick_value(); std::memcpy(w.arena + stack_top - 0x100 + 0x20 + i, &v, 4); }
    std::memcpy(w.arena + (sp - w.base), frame, sizeof(frame));
}

bool same(const Outcome& a, const Outcome& b) {
    if (a.fault != b.fault) return false;
    if (a.fault) return true;   // after a fault the state is whatever the engine had written so far
    return a.trace == b.trace && a.exits == b.exits && a.regs == b.regs && a.instructions == b.instructions && a.memory == b.memory;
}
}  // namespace

int main(int argc, char** argv) {
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    try {
        if (argc < 4) throw Fault("usage: audio_module_tests <x86.sla> <game dir> <export dir> [trials] [boot trials] [seed]");
        const fs::path sla = argv[1], game = argv[2], exported = argv[3];
        const unsigned trials = argc > 4 ? unsigned(std::stoul(argv[4])) : 60, boot_trials = argc > 5 ? unsigned(std::stoul(argv[5])) : 400;
        const uint64_t seed = argc > 6 ? std::stoull(argv[6]) : 1;
        // the executable's function table, from the exported image
        std::vector<uint8_t> data;
        {
            std::ifstream in(exported / "memory_7e8000.bin", std::ios::binary);
            data.assign(std::istreambuf_iterator<char>(in), {});
        }
        std::vector<uint32_t> table(64);
        for (size_t i = 0; i < table.size(); ++i) table[i] = rd32(data, function_table - 0x7e8000 + 4 * i);
        // the banks
        std::vector<Bank> banks;
        for (const auto& entry : fs::recursive_directory_iterator(game / "SOUND"))
            if (entry.is_regular_file() && (entry.path().extension() == ".abk" || entry.path().extension() == ".ABK")) banks.push_back(parse_bank(entry.path(), game));
        std::sort(banks.begin(), banks.end(), [](const Bank& a, const Bank& b) { return a.path < b.path; });
        unsigned untranslated = 0;
        for (const Bank& b : banks)
            if (!find_audio_module(b.hash.c_str())) { std::printf("NO TRANSLATION for %s (code sha256 %s)\n", b.path.c_str(), b.hash.c_str()); ++untranslated; }
        std::printf("%zu banks, %u without a translation\n", banks.size(), untranslated);
        if (untranslated) return 1;

        World w;
        AddVectoredExceptionHandler(1, trial_guard);
        DynamicCode reference(sla);
        reference.set_mode(0);
        Cpu a, b;
        std::map<std::string, unsigned> done;   // one run per distinct range and image position
        const bool selfcheck = GetEnvironmentVariableA("NFSU2_AUDIO_SELFCHECK", nullptr, 0) != 0;
        bool sabotaged = false;
        char only_buffer[260];
        const char* only = GetEnvironmentVariableA("NFSU2_AUDIO_ONLY", only_buffer, sizeof(only_buffer)) ? only_buffer : nullptr;   // a bank path fragment
        const unsigned first_trial = GetEnvironmentVariableA("NFSU2_AUDIO_FIRST", only_buffer + 200, 40) ? unsigned(std::atoi(only_buffer + 200)) : 0;
        unsigned failures = 0, trial_count = 0, faults = 0, compared_exits = 0, unstable = 0;
        uint64_t executed = 0;
        for (const Bank& bank : banks) {
            const bool boot = bank.path.find("FE_COMMON_MB") != std::string::npos || bank.path.find("Nitrous_00_MB") != std::string::npos || bank.path.rfind("SOUND/FE/FE_MB", 0) == 0;
            if (only && bank.path.find(only) == std::string::npos) continue;
            if (done[bank.hash]++ && !boot) continue;
            const AudioModule* unit = find_audio_module(bank.hash.c_str());
            if (w.arena) VirtualFree(w.arena, 0, MEM_RELEASE);
            w.size = (image_offset + uint32_t(bank.file.size()) + 0x8000 + 0xfff) & ~0xfffu;
            w.arena = static_cast<uint8_t*>(VirtualAlloc(reinterpret_cast<void*>(0x30000000), w.size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE));
            if (!w.arena) w.arena = static_cast<uint8_t*>(VirtualAlloc(nullptr, w.size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE));
            if (!w.arena) throw Fault("cannot allocate the test arena");
            w.base = uint32_t(uintptr_t(w.arena));
            w.image = w.base + image_offset;
            load_bank(bank, w.arena + image_offset, w.image, table);
            w.code_begin = w.image + bank.lo;
            w.code_end = w.image + bank.hi;
            w.initial.assign(w.arena, w.arena + w.size);
            reference.add_region(w.code_begin, bank.hi - bank.lo);
            const unsigned count = boot ? boot_trials : trials;
            unsigned bank_failures = 0, bank_faults = 0;
            for (unsigned e = 0; e < unit->entry_count; ++e) {
                for (unsigned t = first_trial; t < count; ++t) {
                    std::mt19937_64 rng(seed * 0x9e3779b97f4a7c15ull ^ fnv(reinterpret_cast<const uint8_t*>(bank.hash.data()), 16) ^ (uint64_t(e) << 32) ^ t);
                    const uint32_t entry_pc = w.code_begin + unit->entries[e];
                    prepare(w, rng, a);
                    const std::vector<uint8_t> start(w.arena, w.arena + w.size);
                    const std::array<uint8_t, 0x4000> regs0 = a.regs;
                    Outcome oa, ob;
                    auto run_both = [&] {
                        std::memcpy(w.arena, start.data(), w.size);
                        a.regs = regs0;
                        oa = drive(w, a, entry_pc, [&](Cpu& c) { reference.run(c, 1u << 18); });
                        std::memcpy(w.arena, start.data(), w.size);   // the same initial state for the second engine
                        b.regs = regs0;
                        ob = drive(w, b, entry_pc, [&](Cpu& c) { c.pc = unit->run(c, w.code_begin); });
                    };
                    run_both();
                    if (selfcheck && !sabotaged && !ob.fault && !oa.fault) {   // the harness must notice a difference
                        sabotaged = true;
                        ob.regs[0] ^= 1;
                        if (same(oa, ob)) { std::printf("SELFCHECK FAILED: a changed register went unnoticed\n"); return 1; }
                        std::printf("selfcheck: the harness noticed a sabotaged register\n");
                        continue;
                    }
                    ++trial_count;
                    executed += oa.instructions;
                    compared_exits += oa.exits;
                    if (oa.fault) { ++faults; ++bank_faults; }
                    if (!same(oa, ob)) {
                        // A difference that does not repeat comes from the process (a wild pointer into memory that changes), not from the translation.
                        bool repeats = true;
                        for (int again = 0; again < 2 && repeats; ++again) { run_both(); repeats = !same(oa, ob); }
                        if (!repeats) { ++unstable; continue; }
                    }
                    if (!same(oa, ob)) {
                        ++failures;
                        ++bank_failures;
                        if (bank_failures <= 3) {
                            if (!oa.fault && !ob.fault) {
                                std::printf("  differs:%s%s%s%s\n", oa.trace != ob.trace ? " trace" : "", oa.regs != ob.regs ? " regs" : "", oa.memory != ob.memory ? " memory" : "", oa.instructions != ob.instructions ? " instructions" : "");
                                for (size_t k = 0, shown = 0; k < oa.regs.size() && shown < 8; ++k)
                                    if (oa.regs[k] != ob.regs[k]) { std::printf("    register byte 0x%zx: reference %02x translated %02x\n", k, oa.regs[k], ob.regs[k]); ++shown; }
                                for (size_t k = 0, shown = 0; k < oa.image.size() && shown < 8; ++k)
                                    if (oa.image[k] != ob.image[k]) { std::printf("    memory +0x%zx (image+0x%zx): reference %02x translated %02x\n", k, k - image_offset, oa.image[k], ob.image[k]); ++shown; }
                            }
                            std::printf("MISMATCH %s entry +0x%x trial %u: reference %s%s instr=%llu exits=%u, translated %s%s instr=%llu exits=%u%s\n", bank.path.c_str(), unit->entries[e], t,
                                        oa.fault ? "fault " : "", oa.what.c_str(), (unsigned long long)oa.instructions, oa.exits, ob.fault ? "fault " : "", ob.what.c_str(),
                                        (unsigned long long)ob.instructions, ob.exits, ob.missing ? "  (MISSING TRANSLATION)" : "");
                        }
                    }
                }
            }
            std::printf("%-44s %s %u entries x %u trials: %u faults, %u mismatches\n", bank.path.c_str(), boot ? "[boot]" : "      ", unit->entry_count, count, bank_faults, bank_failures);
        }
        std::printf("%u trials, %llu instructions interpreted, %u exits compared, %u faults (both engines), %u mismatches (%u more differed once and not again: wild pointers into the process)\n", trial_count, (unsigned long long)executed, compared_exits, faults, failures, unstable);
        if (!g_audio_coverage.empty()) {
            uint64_t hit = 0, total = 0;
            std::vector<std::pair<double, std::string>> worst;
            for (unsigned i = 0; i < audio_module_count; ++i) {
                const std::string name(audio_modules[i].sha256, 12);
                const size_t covered = g_audio_coverage.count(name) ? g_audio_coverage[name].size() : 0;
                hit += covered;
                total += audio_modules[i].instructions;
                worst.push_back({double(covered) / audio_modules[i].instructions, name});
            }
            std::sort(worst.begin(), worst.end());
            std::printf("coverage: %llu of %llu translated instructions executed at least once (%.1f%%); lowest ranges:", (unsigned long long)hit, (unsigned long long)total, 100.0 * double(hit) / double(total));
            for (size_t i = 0; i < worst.size() && i < 5; ++i) std::printf(" %s %.0f%%", worst[i].second.c_str(), 100 * worst[i].first);
            std::printf("\n");
        }
        return failures ? 1 : 0;
    } catch (const std::exception& e) {
        std::fprintf(stderr, "%s\n", e.what());
        return 1;
    }
}
