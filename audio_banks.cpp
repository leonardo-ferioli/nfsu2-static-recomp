#include "audio_banks.hpp"
#include "audio_modules.hpp"
#include "guest_platform.hpp"
#ifdef NFSU2_FAST_BACKEND
#include "mods.hpp"
#endif
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <memory>
#include <mutex>
#include <vector>

namespace nfsu2raw::audio_banks {
namespace {

// ---- SHA-256 (FIPS 180-4) ----------------------------------------------------------------------------------------------------------------------
constexpr uint32_t kRound[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
inline uint32_t rotr(uint32_t x, unsigned n) { return (x >> n) | (x << (32 - n)); }
void compress(uint32_t h[8], const uint8_t block[64]) {
    uint32_t w[64];
    for (int i = 0; i < 16; ++i) w[i] = uint32_t(block[4 * i]) << 24 | uint32_t(block[4 * i + 1]) << 16 | uint32_t(block[4 * i + 2]) << 8 | block[4 * i + 3];
    for (int i = 16; i < 64; ++i) {
        const uint32_t s0 = rotr(w[i - 15], 7) ^ rotr(w[i - 15], 18) ^ (w[i - 15] >> 3), s1 = rotr(w[i - 2], 17) ^ rotr(w[i - 2], 19) ^ (w[i - 2] >> 10);
        w[i] = w[i - 16] + s0 + w[i - 7] + s1;
    }
    uint32_t a = h[0], b = h[1], c = h[2], d = h[3], e = h[4], f = h[5], g = h[6], k = h[7];
    for (int i = 0; i < 64; ++i) {
        const uint32_t t1 = k + (rotr(e, 6) ^ rotr(e, 11) ^ rotr(e, 25)) + ((e & f) ^ (~e & g)) + kRound[i] + w[i];
        const uint32_t t2 = (rotr(a, 2) ^ rotr(a, 13) ^ rotr(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
        k = g; g = f; f = e; e = d + t1; d = c; c = b; b = a; a = t1 + t2;
    }
    h[0] += a; h[1] += b; h[2] += c; h[3] += d; h[4] += e; h[5] += f; h[6] += g; h[7] += k;
}

// ---- the bindings ------------------------------------------------------------------------------------------------------------------------------
// Readers (every dispatch outside the image, on any guest thread) take no lock: the table is immutable and replaced whole when a bank is bound.
// Bank loads are rare (tens per race), so the replaced tables are kept until reset() instead of being reclaimed while a reader may hold one.
struct Binding { uint32_t begin, end; const AudioModule* unit; std::shared_ptr<std::atomic<bool>> entered; };
struct Table { std::vector<Binding> bindings; uint32_t low = 0xffffffffu, high = 0; };
std::mutex g_mutex;
std::vector<std::unique_ptr<Table>> g_tables;   // every table published since reset(); the last one is current
std::atomic<const Table*> g_current{nullptr};
std::atomic<uint64_t> g_banks{0}, g_entries{0};

const Binding* find(const Table* table, uint32_t pc) {
    if (!table || pc < table->low || pc >= table->high) return nullptr;
    for (const Binding& b : table->bindings) if (pc >= b.begin && pc < b.end) return &b;
    return nullptr;
}
std::string hex(uint32_t v) { char s[16]; std::snprintf(s, sizeof s, "0x%x", v); return s; }

}  // namespace

std::string sha256_hex(const uint8_t* bytes, size_t size) {
    uint32_t h[8] = {0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};
    size_t done = 0;
    for (; done + 64 <= size; done += 64) compress(h, bytes + done);
    uint8_t tail[128] = {};
    const size_t rest = size - done;
    std::copy(bytes + done, bytes + size, tail);
    tail[rest] = 0x80;
    const size_t blocks = rest + 9 <= 64 ? 1 : 2;
    const uint64_t bits = uint64_t(size) * 8;
    for (int i = 0; i < 8; ++i) tail[blocks * 64 - 1 - i] = uint8_t(bits >> (8 * i));
    for (size_t i = 0; i < blocks; ++i) compress(h, tail + 64 * i);
    static const char digits[] = "0123456789abcdef";
    std::string text(64, '0');
    for (int i = 0; i < 32; ++i) {
        const uint8_t byte = uint8_t(h[i / 4] >> (24 - 8 * (i % 4)));
        text[2 * i] = digits[byte >> 4];
        text[2 * i + 1] = digits[byte & 15];
    }
    return text;
}

void bank_loader_starts(Cpu& c) {
    const uint32_t image = uint32_t(m<4>(c, uint32_t(r<4>(c, 16)) + 4));
    if (uint32_t(m<4>(c, image)) != 0x434b4241u) throw Fault("the audio bank loader was given an image that is not an audio bank (ABKC) at " + hex(image));
    // The section table (the loader's own reading of it, docs/AUDIO_MODULES.md): the code range is the union of the sections' [start, end).
    const unsigned sections = unsigned(m<2>(c, image + 0xa));
    uint32_t entry = image + uint32_t(m<4>(c, image + 0x1c)), begin = 0xffffffffu, end = 0;
    for (unsigned i = 0; i < sections; ++i) {
        begin = std::min(begin, uint32_t(m<4>(c, entry + 0x28)));
        end = std::max(end, uint32_t(m<4>(c, entry + 0x2c)));
        entry += 0x3c + 4 * (unsigned(m<1>(c, entry + 0x24)) + unsigned(m<1>(c, entry + 0x27)));
    }
    if (!sections || begin >= end || end > uint32_t(m<4>(c, image + 0x14)))
        throw Fault("the audio bank at " + hex(image) + " has no code range the translation knows (" + std::to_string(sections) + " sections)");
    const std::string key = sha256_hex(c.pointer(image + begin, end - begin), end - begin);
    const AudioModule* unit = find_audio_module(key.c_str());
    if (!unit) throw Fault("the audio bank at " + hex(image) + " has code with no translation (sha256 " + key + " of its bytes " + hex(begin) + ".." + hex(end) +
                           "); export/modules/audio_modules.json and generated_audio/ list the banks of the game's files");
    if (unit->size != end - begin) throw Fault("the translation of audio code " + key + " has another size");
    const Binding added{image + begin, image + end, unit, std::make_shared<std::atomic<bool>>(false)};
    if (auto* platform = GuestPlatform::active())
        platform->log_line("AUDIO BANK bound at " + hex(image) + ": code " + hex(image + begin) + ".." + hex(image + end) + " sha256 " + key);
    std::lock_guard lock(g_mutex);
    auto table = std::make_unique<Table>();
    if (const Table* now = g_current.load())
        for (const Binding& b : now->bindings) if (b.end <= added.begin || b.begin >= added.end) table->bindings.push_back(b);   // a bank loaded over an older one replaces it
    table->bindings.push_back(added);
    for (const Binding& b : table->bindings) { table->low = std::min(table->low, b.begin); table->high = std::max(table->high, b.end); }
    g_current.store(table.get());
    g_tables.push_back(std::move(table));
    g_banks.fetch_add(1, std::memory_order_relaxed);
}

bool run(Cpu& c) {
    const Binding* b = find(g_current.load(std::memory_order_acquire), c.pc);
    if (!b) return false;
    g_entries.fetch_add(1, std::memory_order_relaxed);
    if (!b->entered->load(std::memory_order_relaxed) && !b->entered->exchange(true))
        if (auto* platform = GuestPlatform::active()) platform->log_line("AUDIO BANK code at " + hex(b->begin) + " entered (translated) at " + hex(c.pc));
    c.pc = b->unit->run(c, b->begin);
    return true;
}

bool bound(uint32_t address) { return find(g_current.load(), address) != nullptr; }
uint64_t banks_bound() { return g_banks.load(); }
uint64_t entries() { return g_entries.load(); }

void attach() {
#ifdef NFSU2_FAST_BACKEND
    const int hook = mod_hook_index("audio_bank_loader");
    if (hook < 0) throw Fault("the translated code has no audio_bank_loader hook (mods/platform_spec.json): it was generated without it");
    mod_hook_table[hook] = bank_loader_starts;
#endif
    g_banks = 0;
    g_entries = 0;
}

void detach() {
#ifdef NFSU2_FAST_BACKEND
    if (const int hook = mod_hook_index("audio_bank_loader"); hook >= 0) mod_hook_table[hook] = nullptr;
#endif
    std::lock_guard lock(g_mutex);
    g_current.store(nullptr);
    g_tables.clear();
}

}  // namespace nfsu2raw::audio_banks
