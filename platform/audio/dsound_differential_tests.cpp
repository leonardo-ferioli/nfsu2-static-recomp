// Differential test: the same DirectSound call sequences on the REAL system DirectSound (dsound.dll of this Windows) and on our facade + layer,
// comparing HRESULTs, structures and (loosely, in real time) cursor behaviour. It plays only silence (zero-filled buffers) and creates no
// window apart from a hidden one that DirectSound needs for its cooperative level. Skips itself (exit 0) when the machine has no output device.
//
// This is the ground truth for the semantics in ds_device.cpp / dsound_facade.cpp. A mismatch is a bug in our layer unless it is listed in
// `known_differences` with the reason (and in docs/NUE_HANDOVER_DSOUND.md, "Deviations").
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <mmsystem.h>
#include <mmreg.h>
#include <dsound.h>

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>

#include "platform/audio/test_guest.hpp"

using namespace nfsu2::platform::audio;
using namespace nfsu2::platform::audio::testing;

namespace {

int g_total = 0, g_mismatch = 0, g_known = 0;
bool g_verbose = false;

struct Known {
    const char* name;
    const char* reason;
};
// Differences from the real DirectSound that are decided and documented (none so far unless listed here).
const std::vector<Known> known_differences = {};

const char* known_reason(const std::string& name) {
    for (const Known& k : known_differences)
        if (name == k.name) return k.reason;
    return nullptr;
}

void report(const std::string& name, bool equal, const std::string& detail) {
    ++g_total;
    if (equal) {
        if (g_verbose) std::printf("  ok    %s  %s\n", name.c_str(), detail.c_str());
        return;
    }
    if (const char* reason = known_reason(name)) {
        ++g_known;
        std::printf("  KNOWN %s  %s  (%s)\n", name.c_str(), detail.c_str(), reason);
        return;
    }
    ++g_mismatch;
    std::printf("  DIFF  %s  %s\n", name.c_str(), detail.c_str());
}

void same_hr(const std::string& name, HRESULT real, uint32_t mine) {
    char d[96];
    std::snprintf(d, sizeof(d), "real 0x%08x  mine 0x%08x", unsigned(real), unsigned(mine));
    report(name, uint32_t(real) == mine, d);
}
void same_u32(const std::string& name, uint32_t real, uint32_t mine) {
    char d[96];
    std::snprintf(d, sizeof(d), "real %u  mine %u", real, mine);
    report(name, real == mine, d);
}

// A WAVEFORMATEX blob (18 bytes) with every field settable, for both worlds.
struct Wfx {
    WORD tag = 1, channels = 2;
    DWORD rate = 44100;
    WORD bits = 16;
    int block = -1;      // -1: channels * bits / 8
    DWORD mask = 0;      // != 0: WAVEFORMATEXTENSIBLE (PCM sub-format) with this channel mask
    std::vector<uint8_t> blob() const {
        std::vector<uint8_t> b(mask ? 40 : 18, 0);
        auto p16 = [&](int o, uint16_t v) { std::memcpy(b.data() + o, &v, 2); };
        auto p32 = [&](int o, uint32_t v) { std::memcpy(b.data() + o, &v, 4); };
        const uint16_t ba = uint16_t(block < 0 ? channels * bits / 8 : block);
        p16(0, mask ? 0xFFFE : tag);
        p16(2, channels);
        p32(4, rate);
        p32(8, rate * ba);
        p16(12, ba);
        p16(14, bits);
        if (mask) {
            p16(16, 22);
            p16(18, bits);
            p32(20, mask);
            const uint8_t pcm[16] = {1, 0, 0, 0, 0, 0, 0x10, 0, 0x80, 0, 0, 0xAA, 0, 0x38, 0x9B, 0x71};
            std::memcpy(b.data() + 24, pcm, 16);
        }
        return b;
    }
    WAVEFORMATEX* real(std::vector<uint8_t>& storage) const {
        storage = blob();
        return reinterpret_cast<WAVEFORMATEX*>(storage.data());
    }
    uint32_t mine(Guest& g) const {
        const auto b = blob();
        return g.put(b.data(), uint32_t(b.size()));
    }
};

struct Pair {
    IDirectSoundBuffer* real = nullptr;
    uint32_t mine = 0;
};

struct Rig {
    HWND hwnd = nullptr;
    IDirectSound* rds = nullptr;
    Guest g;
    uint32_t mds = 0;
    ~Rig() {
        if (rds) rds->Release();
        if (hwnd) DestroyWindow(hwnd);
    }
    bool open() {
        hwnd = CreateWindowExW(0, L"STATIC", L"dsound differential test", WS_POPUP, 0, 0, 1, 1, nullptr, nullptr, GetModuleHandleW(nullptr), nullptr);
        if (!hwnd) return false;
        if (FAILED(DirectSoundCreate(nullptr, &rds, nullptr))) return false;
        if (g.create(&mds) != 0) return false;
        return true;
    }
    uint32_t coop(uint32_t level, const std::string& label) {
        const HRESULT r = rds->SetCooperativeLevel(hwnd, level);
        const uint32_t m = g.call(mds, ds_slot::SetCoop, {0x1234, level});
        same_hr("SetCooperativeLevel " + label, r, m);
        return m;
    }
    Pair create(const std::string& label, DWORD flags, DWORD bytes, const Wfx* w, bool expect_object_same = false) {
        (void)expect_object_same;
        DSBUFFERDESC d{};
        d.dwSize = sizeof(d);
        d.dwFlags = flags;
        d.dwBufferBytes = bytes;
        std::vector<uint8_t> storage;
        if (w) d.lpwfxFormat = w->real(storage);
        Pair p;
        const HRESULT r = rds->CreateSoundBuffer(&d, &p.real, nullptr);
        const uint32_t out = g.cell();
        const uint32_t m = g.call(mds, ds_slot::CreateSoundBuffer, {g.desc(flags, bytes, w ? w->mine(g) : 0), out, 0});
        p.mine = g.get32(out);
        same_hr("CreateSoundBuffer " + label, r, m);
        if (FAILED(r)) {
            if (p.real) { p.real->Release(); p.real = nullptr; }
            if (p.mine && int32_t(m) < 0) p.mine = 0;
        }
        if (SUCCEEDED(r) != (int32_t(m) >= 0)) {   // diverged: keep neither
            if (p.real) { p.real->Release(); p.real = nullptr; }
            p.mine = 0;
        }
        return p;
    }
    void release(Pair& p) {
        if (p.real) p.real->Release();
        if (p.mine) g.call(p.mine, buf_slot::Release);
        p = {};
    }
};

DWORD caps_flags(IDirectSoundBuffer* b, DWORD* bytes) {
    DSBCAPS c{};
    c.dwSize = sizeof(c);
    if (FAILED(b->GetCaps(&c))) return 0xFFFFFFFF;
    if (bytes) *bytes = c.dwBufferBytes;
    return c.dwFlags;
}

void run_device(Rig& r) {
    std::printf("[device and primary buffer]\n");
    // Cooperative levels.
    for (uint32_t level : {0u, 5u, 99u}) same_hr("SetCooperativeLevel invalid " + std::to_string(level), r.rds->SetCooperativeLevel(r.hwnd, level), r.g.call(r.mds, ds_slot::SetCoop, {0x1234, level}));
    same_hr("SetCooperativeLevel null window", r.rds->SetCooperativeLevel(nullptr, DSSCL_NORMAL), r.g.call(r.mds, ds_slot::SetCoop, {0, 1}));
    // Primary buffer, SetFormat needs the priority level.
    r.coop(DSSCL_NORMAL, "normal");
    Pair prim = r.create("primary", DSBCAPS_PRIMARYBUFFER | DSBCAPS_CTRLVOLUME, 0, nullptr);
    if (!prim.real || !prim.mine) return;
    Wfx stereo44;
    std::vector<uint8_t> wst;
    WAVEFORMATEX* wr = stereo44.real(wst);
    same_hr("primary SetFormat at normal level", prim.real->SetFormat(wr), r.g.call(prim.mine, buf_slot::SetFormat, {stereo44.mine(r.g)}));
    r.coop(DSSCL_PRIORITY, "priority");
    same_hr("primary SetFormat 44100/16/2", prim.real->SetFormat(wr), r.g.call(prim.mine, buf_slot::SetFormat, {stereo44.mine(r.g)}));
    struct Case { const char* name; Wfx w; };
    std::vector<Case> formats;
    { Wfx w; w.channels = 1; w.bits = 8; w.rate = 22050; formats.push_back({"22050/8/1", w}); }
    { Wfx w; w.rate = 48000; formats.push_back({"48000/16/2", w}); }
    { Wfx w; w.rate = 11025; w.bits = 8; formats.push_back({"11025/8/2", w}); }
    { Wfx w; w.channels = 0; w.block = 0; formats.push_back({"0 channels", w}); }
    { Wfx w; w.tag = 0x55; formats.push_back({"unknown tag", w}); }
    { Wfx w; w.block = 7; formats.push_back({"wrong block align", w}); }
    { Wfx w; w.channels = 9; formats.push_back({"9 channels", w}); }
    { Wfx w; w.bits = 12; w.block = 3; formats.push_back({"12 bits", w}); }
    { Wfx w; w.rate = 50; formats.push_back({"50 Hz", w}); }
    { Wfx w; w.rate = 99; formats.push_back({"99 Hz", w}); }
    { Wfx w; w.rate = 100; formats.push_back({"100 Hz", w}); }
    { Wfx w; w.rate = 192000; formats.push_back({"192000 Hz", w}); }
    { Wfx w; w.rate = 200000; formats.push_back({"200000 Hz", w}); }
    { Wfx w; w.rate = 200001; formats.push_back({"200001 Hz", w}); }
    { Wfx w; w.tag = 3; w.bits = 32; formats.push_back({"float 32", w}); }
    { Wfx w; w.bits = 24; formats.push_back({"24 bit", w}); }
    { Wfx w; w.bits = 32; formats.push_back({"32 bit", w}); }
    { Wfx w; w.channels = 6; formats.push_back({"6 channels, plain WAVEFORMATEX", w}); }
    { Wfx w; w.channels = 4; w.mask = 0x33; formats.push_back({"4 channels extensible (quad)", w}); }
    { Wfx w; w.channels = 6; w.mask = 0x3F; formats.push_back({"6 channels extensible (5.1)", w}); }
    { Wfx w; w.channels = 8; w.mask = 0x63F; formats.push_back({"8 channels extensible (7.1)", w}); }
    { Wfx w; w.channels = 3; w.mask = 0x7; formats.push_back({"3 channels extensible", w}); }
    { Wfx w; w.channels = 9; w.mask = 0x7FF; formats.push_back({"9 channels extensible", w}); }
    for (auto& c : formats) {
        std::vector<uint8_t> st;
        WAVEFORMATEX* w = c.w.real(st);
        same_hr(std::string("primary SetFormat ") + c.name, prim.real->SetFormat(w), r.g.call(prim.mine, buf_slot::SetFormat, {c.w.mine(r.g)}));
    }
    // Back to a known format, then GetFormat.
    prim.real->SetFormat(wr);
    r.g.call(prim.mine, buf_slot::SetFormat, {stereo44.mine(r.g)});
    WAVEFORMATEX got{};
    DWORD written = 0;
    const HRESULT gf = prim.real->GetFormat(&got, sizeof(got), &written);
    const uint32_t fmt = r.g.arena.alloc(64), cell = r.g.cell();
    const uint32_t gm = r.g.call(prim.mine, buf_slot::GetFormat, {fmt, 64, cell});
    same_hr("primary GetFormat", gf, gm);
    same_u32("primary GetFormat size written", written, r.g.get32(cell));
    same_u32("primary GetFormat rate", got.nSamplesPerSec, r.g.get32(fmt + 4));
    // Second request for the primary buffer yields the same object.
    IDirectSoundBuffer* again = nullptr;
    DSBUFFERDESC pd{};
    pd.dwSize = sizeof(pd);
    pd.dwFlags = DSBCAPS_PRIMARYBUFFER | DSBCAPS_CTRLVOLUME;
    const HRESULT rr = r.rds->CreateSoundBuffer(&pd, &again, nullptr);
    const uint32_t out2 = r.g.cell();
    const uint32_t mm = r.g.call(r.mds, ds_slot::CreateSoundBuffer, {r.g.desc(DSBCAPS_PRIMARYBUFFER | DSBCAPS_CTRLVOLUME, 0, 0), out2, 0});
    same_hr("primary requested twice", rr, mm);
    if (SUCCEEDED(rr)) {
        report("primary twice is the same object (real)", again == prim.real, "");
        report("primary twice is the same object (mine)", r.g.get32(out2) == prim.mine, "");
        again->Release();
    }
    // Primary: Play needs DSBPLAY_LOOPING; secondary-only controls are refused.
    same_hr("primary Play without looping", prim.real->Play(0, 0, 0), r.g.call(prim.mine, buf_slot::Play, {0, 0, 0}));
    same_hr("primary Play looping", prim.real->Play(0, 0, DSBPLAY_LOOPING), r.g.call(prim.mine, buf_slot::Play, {0, 0, 1}));
    same_hr("primary SetFrequency", prim.real->SetFrequency(22050), r.g.call(prim.mine, buf_slot::SetFrequency, {22050}));
    // Device caps.
    DSCAPS rc{};
    rc.dwSize = sizeof(rc);
    const HRESULT cr = r.rds->GetCaps(&rc);
    const uint32_t cp = r.g.arena.alloc(96);
    const uint32_t cs = 96;
    std::memcpy(r.g.arena.host(cp, 4), &cs, 4);
    const uint32_t cm = r.g.call(r.mds, ds_slot::GetCaps, {cp});
    same_hr("GetCaps", cr, cm);
    std::printf("        (info) real DSCAPS flags 0x%x min rate %lu max rate %lu primary buffers %lu; mine 0x%x %u %u\n", unsigned(rc.dwFlags), rc.dwMinSecondarySampleRate,
                rc.dwMaxSecondarySampleRate, rc.dwPrimaryBuffers, r.g.get32(cp + 4), r.g.get32(cp + 8), r.g.get32(cp + 12));
    same_u32("GetCaps format flags (low 12 bits, formats the device accepts)", rc.dwFlags & 0xF1F, r.g.get32(cp + 4) & 0xF1F);
    same_hr("GetCaps wrong dwSize", [&] { DSCAPS bad{}; bad.dwSize = 40; return r.rds->GetCaps(&bad); }(), [&] {
        const uint32_t tiny = r.g.arena.alloc(96);
        const uint32_t wrong = 40;
        std::memcpy(r.g.arena.host(tiny, 4), &wrong, 4);
        return r.g.call(r.mds, ds_slot::GetCaps, {tiny});
    }());
    same_hr("GetSpeakerConfig null", r.rds->GetSpeakerConfig(nullptr), r.g.call(r.mds, ds_slot::GetSpeaker, {0}));
    same_hr("Initialize after DirectSoundCreate", r.rds->Initialize(nullptr), r.g.call(r.mds, ds_slot::Initialize, {0}));
    r.release(prim);
}

void run_secondary_creation(Rig& r) {
    std::printf("[secondary buffer creation]\n");
    r.coop(DSSCL_PRIORITY, "priority");
    struct C { const char* name; DWORD flags, bytes; Wfx w; bool format = true; };
    std::vector<C> cases;
    auto add = [&](const char* n, DWORD f, DWORD b, Wfx w, bool fmt = true) { cases.push_back({n, f, b, w, fmt}); };
    Wfx s22; s22.rate = 22050;
    Wfx m22; m22.channels = 1; m22.rate = 22050;
    add("plain 4096 stereo", 0, 4096, s22);
    add("no format", 0, 4096, s22, false);
    add("3 bytes", 0, 3, s22);
    add("0 bytes", 0, 0, s22);
    add("4 bytes (minimum)", 0, 4, s22);
    add("4001 bytes (not a whole frame multiple)", 0, 4001, s22);
    add("size 7 (less than a frame twice)", 0, 7, s22);
    add("CTRL3D stereo", DSBCAPS_CTRL3D, 4096, s22);
    add("CTRL3D mono", DSBCAPS_CTRL3D, 4096, m22);
    add("CTRL3D + CTRLPAN mono", DSBCAPS_CTRL3D | DSBCAPS_CTRLPAN, 4096, m22);
    add("LOCHARDWARE", DSBCAPS_LOCHARDWARE, 4096, s22);
    add("LOCSOFTWARE", DSBCAPS_LOCSOFTWARE, 4096, s22);
    add("LOCHARDWARE + LOCSOFTWARE", DSBCAPS_LOCHARDWARE | DSBCAPS_LOCSOFTWARE, 4096, s22);
    add("STATIC", DSBCAPS_STATIC, 4096, s22);
    add("all controls", DSBCAPS_CTRLVOLUME | DSBCAPS_CTRLPAN | DSBCAPS_CTRLFREQUENCY | DSBCAPS_CTRLPOSITIONNOTIFY, 4096, s22);
    add("GETCURRENTPOSITION2 + GLOBALFOCUS (the game)", DSBCAPS_GETCURRENTPOSITION2 | DSBCAPS_GLOBALFOCUS, 88192, [] { Wfx w; return w; }());
    { Wfx w; w.tag = 3; w.bits = 32; add("float 32-bit", 0, 4096, w); }
    { Wfx w; w.bits = 24; add("24-bit", 0, 4096, w); }
    { Wfx w; w.bits = 32; add("32-bit integer", 0, 4096, w); }
    { Wfx w; w.bits = 8; w.channels = 1; w.rate = 8000; add("8000/8/1", 0, 800, w); }
    { Wfx w; w.rate = 96000; add("96000/16/2", 0, 4096, w); }
    { Wfx w; w.rate = 50; add("50 Hz", 0, 4096, w); }
    { Wfx w; w.rate = 300000; add("300000 Hz", 0, 4096, w); }
    { Wfx w; w.channels = 6; add("6 channels plain WAVEFORMATEX", 0, 4096 * 3, w); }
    { Wfx w; w.channels = 6; w.mask = 0x3F; add("6 channels extensible", 0, 4096 * 3, w); }
    { Wfx w; w.channels = 4; w.mask = 0x33; add("4 channels extensible", 0, 4096 * 2, w); }
    { Wfx w; w.channels = 8; w.mask = 0x63F; add("8 channels extensible", 0, 4096 * 4, w); }
    { Wfx w; w.channels = 6; w.mask = 0x3F; add("6 channels extensible, 0x18000 (the game's ring)", DSBCAPS_GETCURRENTPOSITION2 | DSBCAPS_GLOBALFOCUS, 22048 * 12, w); }
    { Wfx w; w.channels = 0; w.block = 0; add("0 channels", 0, 4096, w); }
    { Wfx w; w.bits = 12; w.block = 3; add("12 bits", 0, 4096, w); }
    { Wfx w; w.block = 7; add("wrong block align", 0, 4096, w); }
    { Wfx w; w.tag = 0x55; add("unknown tag", 0, 4096, w); }
    for (C& c : cases) {
        Pair p = r.create(c.name, c.flags, c.bytes, c.format ? &c.w : nullptr);
        if (p.real && p.mine) {
            DWORD rb = 0;
            const DWORD rf = caps_flags(p.real, &rb);
            const uint32_t caps = r.g.arena.alloc(20), sz = 20;
            std::memcpy(r.g.arena.host(caps, 4), &sz, 4);
            r.g.call(p.mine, buf_slot::GetCaps, {caps});
            same_u32(std::string("GetCaps bytes: ") + c.name, rb, r.g.get32(caps + 8));
            same_u32(std::string("GetCaps flags: ") + c.name, rf, r.g.get32(caps + 4));
        }
        r.release(p);
    }
}

void run_controls(Rig& r) {
    std::printf("[controls]\n");
    r.coop(DSSCL_PRIORITY, "priority");
    Wfx w;
    w.rate = 22050;
    Pair none = r.create("no controls", 0, 4096, &w);
    Pair all = r.create("all controls", DSBCAPS_CTRLVOLUME | DSBCAPS_CTRLPAN | DSBCAPS_CTRLFREQUENCY, 4096, &w);
    if (!none.real || !none.mine || !all.real || !all.mine) return;
    LONG lv = 0;
    DWORD hz = 0;
    const uint32_t cell = r.g.cell();
    for (Pair* p : {&none, &all}) {
        const std::string tag = p == &none ? "(no flag) " : "(flag) ";
        for (int v : {0, -1, -600, -10000, -10001, 1, 100}) {
            same_hr(tag + "SetVolume " + std::to_string(v), p->real->SetVolume(v), r.g.call(p->mine, buf_slot::SetVolume, {uint32_t(v)}));
        }
        same_hr(tag + "GetVolume", p->real->GetVolume(&lv), r.g.call(p->mine, buf_slot::GetVolume, {cell}));
        if (p == &all) same_u32("GetVolume value", uint32_t(lv), r.g.get32(cell));
        for (int v : {0, 5000, -10000, 10000, -10001, 10001}) {
            same_hr(tag + "SetPan " + std::to_string(v), p->real->SetPan(v), r.g.call(p->mine, buf_slot::SetPan, {uint32_t(v)}));
        }
        same_hr(tag + "GetPan", p->real->GetPan(&lv), r.g.call(p->mine, buf_slot::GetPan, {cell}));
        if (p == &all) same_u32("GetPan value", uint32_t(lv), r.g.get32(cell));
        for (unsigned f : {0u, 50u, 99u, 100u, 101u, 11025u, 44100u, 100000u, 200000u, 200001u, 1000000u}) {
            same_hr(tag + "SetFrequency " + std::to_string(f), p->real->SetFrequency(f), r.g.call(p->mine, buf_slot::SetFrequency, {f}));
        }
        same_hr(tag + "GetFrequency", p->real->GetFrequency(&hz), r.g.call(p->mine, buf_slot::GetFrequency, {cell}));
        if (p == &all) same_u32("GetFrequency value (after SetFrequency 1000000, last valid 200000)", hz, r.g.get32(cell));
        same_hr(tag + "SetFormat on a secondary", [&] { std::vector<uint8_t> st; return p->real->SetFormat(w.real(st)); }(), r.g.call(p->mine, buf_slot::SetFormat, {w.mine(r.g)}));
    }
    // SetFrequency(0) restores the original rate.
    all.real->SetFrequency(0);
    r.g.call(all.mine, buf_slot::SetFrequency, {0});
    all.real->GetFrequency(&hz);
    r.g.call(all.mine, buf_slot::GetFrequency, {cell});
    same_u32("SetFrequency(0) = original rate", hz, r.g.get32(cell));
    r.release(none);
    r.release(all);
}

void run_lock(Rig& r) {
    std::printf("[lock and unlock]\n");
    r.coop(DSSCL_PRIORITY, "priority");
    Wfx w;
    w.rate = 22050;
    Pair b = r.create("lock buffer", 0, 4000, &w);
    if (!b.real || !b.mine) return;
    struct L { const char* name; DWORD off, bytes, flags; };
    const L cases[] = {
        {"0,0", 0, 0, 0},
        {"0,4000 (whole)", 0, 4000, 0},
        {"0,4001 (too long)", 0, 4001, 0},
        {"4000,4 (offset at the end)", 4000, 4, 0},
        {"4001,4 (offset past the end)", 4001, 4, 0},
        {"3996,8 (wraps)", 3996, 8, 0},
        {"3999,2 (unaligned, wraps)", 3999, 2, 0},
        {"1,3 (unaligned)", 1, 3, 0},
        {"ENTIREBUFFER", 123, 5, DSBLOCK_ENTIREBUFFER},
        {"FROMWRITECURSOR stopped", 100, 8, DSBLOCK_FROMWRITECURSOR},
        {"unknown flag", 0, 8, 0x80},
    };
    for (const L& c : cases) {
        void *p1 = nullptr, *p2 = nullptr;
        DWORD l1 = 0, l2 = 0;
        const HRESULT rr = b.real->Lock(c.off, c.bytes, &p1, &l1, &p2, &l2, c.flags);
        const uint32_t p1c = r.g.cell(), n1c = r.g.cell(), p2c = r.g.cell(), n2c = r.g.cell();
        const uint32_t mm = r.g.call(b.mine, buf_slot::Lock, {c.off, c.bytes, p1c, n1c, p2c, n2c, c.flags});
        same_hr(std::string("Lock ") + c.name, rr, mm);
        if (SUCCEEDED(rr) && int32_t(mm) >= 0) {
            same_u32(std::string("Lock bytes1 ") + c.name, l1, r.g.get32(n1c));
            same_u32(std::string("Lock bytes2 ") + c.name, l2, r.g.get32(n2c));
            same_hr(std::string("Unlock after ") + c.name, b.real->Unlock(p1, l1, p2, l2), r.g.call(b.mine, buf_slot::Unlock, {r.g.get32(p1c), l1, r.g.get32(p2c), l2}));
        } else if (SUCCEEDED(rr) != (int32_t(mm) >= 0)) {
            if (SUCCEEDED(rr)) b.real->Unlock(p1, l1, p2, l2);
            else r.g.call(b.mine, buf_slot::Unlock, {r.g.get32(p1c), r.g.get32(n1c), r.g.get32(p2c), r.g.get32(n2c)});
        }
    }
    // Locking twice, mismatched Unlock, Unlock without Lock.
    void *a1 = nullptr, *a2 = nullptr, *b1 = nullptr, *b2 = nullptr;
    DWORD al1 = 0, al2 = 0, bl1 = 0, bl2 = 0;
    const uint32_t mp1 = r.g.cell(), mn1 = r.g.cell(), mp2 = r.g.cell(), mn2 = r.g.cell();
    same_hr("first Lock", b.real->Lock(0, 400, &a1, &al1, &a2, &al2, 0), r.g.call(b.mine, buf_slot::Lock, {0, 400, mp1, mn1, mp2, mn2, 0}));
    same_hr("second Lock while locked", b.real->Lock(1000, 400, &b1, &bl1, &b2, &bl2, 0), r.g.call(b.mine, buf_slot::Lock, {1000, 400, mp1 + 0, mn1, mp2, mn2, 0}));
    const uint32_t m_ptr = r.g.get32(mp1);
    same_hr("Unlock with wrong pointer", b.real->Unlock(static_cast<char*>(a1) + 4, 396, nullptr, 0), r.g.call(b.mine, buf_slot::Unlock, {m_ptr + 4, 396, 0, 0}));
    same_hr("Unlock correct", b.real->Unlock(a1, al1, nullptr, 0), r.g.call(b.mine, buf_slot::Unlock, {m_ptr, al1, 0, 0}));
    same_hr("Unlock without Lock", b.real->Unlock(a1, al1, nullptr, 0), r.g.call(b.mine, buf_slot::Unlock, {m_ptr, al1, 0, 0}));
    // Lock with the output pointer missing.
    void* p = nullptr;
    DWORD l = 0;
    const uint32_t pn1 = r.g.cell(), pn2 = r.g.cell();
    same_hr("Lock without second region where it wraps", b.real->Lock(3900, 400, &p, &l, nullptr, nullptr, 0), r.g.call(b.mine, buf_slot::Lock, {3900, 400, pn1, pn2, 0, 0, 0}));
    same_u32("  bytes1 of that Lock", l, r.g.get32(pn2));
    r.release(b);
}

void run_transport_static(Rig& r) {
    std::printf("[status, position, restore, duplicate, notifications]\n");
    r.coop(DSSCL_PRIORITY, "priority");
    Wfx w;
    w.rate = 22050;
    Pair b = r.create("transport buffer", DSBCAPS_CTRLPOSITIONNOTIFY | DSBCAPS_CTRLVOLUME | DSBCAPS_GETCURRENTPOSITION2, 22050 * 4, &w);
    if (!b.real || !b.mine) return;
    b.real->SetVolume(-10000);   // silence for sure (the data is zero anyway)
    r.g.call(b.mine, buf_slot::SetVolume, {uint32_t(-10000)});
    const uint32_t cell = r.g.cell(), cell2 = r.g.cell();
    DWORD status = 0, play = 0, write = 0;
    same_hr("GetStatus stopped", b.real->GetStatus(&status), r.g.call(b.mine, buf_slot::GetStatus, {cell}));
    same_u32("status of a stopped buffer", status, r.g.get32(cell));
    same_hr("GetCurrentPosition stopped", b.real->GetCurrentPosition(&play, &write), r.g.call(b.mine, buf_slot::GetCurrentPosition, {cell, cell2}));
    same_u32("play cursor of a new buffer", play, r.g.get32(cell));
    same_u32("write cursor of a stopped buffer", write, r.g.get32(cell2));
    same_hr("GetCurrentPosition both null", b.real->GetCurrentPosition(nullptr, nullptr), r.g.call(b.mine, buf_slot::GetCurrentPosition, {0, 0}));
    same_hr("SetCurrentPosition 4000", b.real->SetCurrentPosition(4000), r.g.call(b.mine, buf_slot::SetCurrentPosition, {4000}));
    same_hr("SetCurrentPosition 4002 (unaligned)", b.real->SetCurrentPosition(4002), r.g.call(b.mine, buf_slot::SetCurrentPosition, {4002}));
    same_hr("SetCurrentPosition = size", b.real->SetCurrentPosition(22050 * 4), r.g.call(b.mine, buf_slot::SetCurrentPosition, {22050 * 4}));
    b.real->SetCurrentPosition(4000);
    r.g.call(b.mine, buf_slot::SetCurrentPosition, {4000});
    b.real->GetCurrentPosition(&play, &write);
    r.g.call(b.mine, buf_slot::GetCurrentPosition, {cell, cell2});
    same_u32("play cursor after SetCurrentPosition(4000)", play, r.g.get32(cell));
    same_hr("Play reserved1 != 0", b.real->Play(1, 0, 0), r.g.call(b.mine, buf_slot::Play, {1, 0, 0}));
    same_hr("Play priority != 0 without LOCDEFER", b.real->Play(0, 5, 0), r.g.call(b.mine, buf_slot::Play, {0, 5, 0}));
    same_hr("Play unknown flags", b.real->Play(0, 0, 0x4000), r.g.call(b.mine, buf_slot::Play, {0, 0, 0x4000}));
    same_hr("Restore of a healthy buffer", b.real->Restore(), r.g.call(b.mine, buf_slot::Restore));
    // GetCaps of the buffer.
    DWORD bytes = 0;
    const DWORD rf = caps_flags(b.real, &bytes);
    const uint32_t caps = r.g.arena.alloc(20), sz = 20;
    std::memcpy(r.g.arena.host(caps, 4), &sz, 4);
    r.g.call(b.mine, buf_slot::GetCaps, {caps});
    same_u32("buffer caps flags", rf, r.g.get32(caps + 4));
    // Duplicate.
    IDirectSoundBuffer* dup = nullptr;
    const HRESULT dr = r.rds->DuplicateSoundBuffer(b.real, &dup);
    const uint32_t dcell = r.g.cell();
    const uint32_t dm = r.g.call(r.mds, ds_slot::Duplicate, {b.mine, dcell});
    same_hr("DuplicateSoundBuffer", dr, dm);
    if (dup) dup->Release();
    if (int32_t(dm) >= 0) r.g.call(r.g.get32(dcell), buf_slot::Release);
    // Notification positions: needs CTRLPOSITIONNOTIFY, refused while playing.
    IDirectSoundNotify* notify = nullptr;
    const HRESULT qr = b.real->QueryInterface(::IID_IDirectSoundNotify, reinterpret_cast<void**>(&notify));
    const uint32_t qcell = r.g.cell();
    const uint32_t qm = r.g.call(b.mine, buf_slot::QI, {r.g.guid(testing::IID_IDirectSoundNotify), qcell});
    same_hr("QueryInterface IDirectSoundNotify", qr, qm);
    if (notify && int32_t(qm) >= 0) {
        HANDLE ev = CreateEventW(nullptr, FALSE, FALSE, nullptr);
        DSBPOSITIONNOTIFY pos[2] = {{22050 * 4 / 2, ev}, {DSBPN_OFFSETSTOP, ev}};
        uint32_t list[4] = {22050 * 4 / 2, 0xE1, 0xFFFFFFFFu, 0xE2};
        const uint32_t mlist = r.g.put(list, 16);
        const uint32_t mnotify = r.g.get32(qcell);
        same_hr("SetNotificationPositions", notify->SetNotificationPositions(2, pos), r.g.call(mnotify, 3, {2, mlist}));
        same_hr("SetNotificationPositions count 0", notify->SetNotificationPositions(0, nullptr), r.g.call(mnotify, 3, {0, 0}));
        notify->SetNotificationPositions(2, pos);
        r.g.call(mnotify, 3, {2, mlist});
        b.real->SetCurrentPosition(0);
        r.g.call(b.mine, buf_slot::SetCurrentPosition, {0});
        b.real->Play(0, 0, DSBPLAY_LOOPING);
        r.g.call(b.mine, buf_slot::Play, {0, 0, 1});
        same_hr("SetNotificationPositions while playing", notify->SetNotificationPositions(2, pos), r.g.call(mnotify, 3, {2, mlist}));
        // The position passes the middle after 0.5 s.
        const DWORD waited = WaitForSingleObject(ev, 1500);
        r.g.sink->advance(22050 / 2 * 48000 / 22050 + 2000);   // half a second of our time (+ latency)
        report("notification at the middle fires (real)", waited == WAIT_OBJECT_0, "");
        report("notification at the middle fires (mine)", !r.g.host.events.empty() && r.g.host.events.front() == 0xE1, "");
        b.real->Stop();
        r.g.call(b.mine, buf_slot::Stop);
        const DWORD stopped = WaitForSingleObject(ev, 500);
        report("stop notification (real)", stopped == WAIT_OBJECT_0, "");
        r.g.sink->advance(1);
        bool stop_event = false;
        for (uint32_t e : r.g.host.events) stop_event = stop_event || e == 0xE2;
        report("stop notification (mine)", stop_event, "");
        CloseHandle(ev);
        notify->Release();
        r.g.call(mnotify, 2);
    }
    r.release(b);
}

// Real time: cursors of a playing looping buffer. The real device's behaviour is printed; the checks are loose (a driver-dependent margin).
void run_realtime(Rig& r) {
    std::printf("[cursors in real time]\n");
    r.coop(DSSCL_PRIORITY, "priority");
    Wfx w;
    w.rate = 44100;
    const DWORD bytes = 44100 * 4;   // 1 s ring
    Pair b = r.create("1 s ring", DSBCAPS_GETCURRENTPOSITION2 | DSBCAPS_CTRLVOLUME, bytes, &w);
    if (!b.real || !b.mine) return;
    b.real->SetVolume(-10000);
    r.g.call(b.mine, buf_slot::SetVolume, {uint32_t(-10000)});
    same_hr("Play looping", b.real->Play(0, 0, DSBPLAY_LOOPING), r.g.call(b.mine, buf_slot::Play, {0, 0, 1}));
    const uint32_t c1 = r.g.cell(), c2 = r.g.cell();
    std::printf("        t(ms)   real play/write (frames)      mine play/write (frames)\n");
    double real_margin_sum = 0, mine_margin_sum = 0;
    DWORD last_real_play = 0;
    bool real_monotone = true, mine_monotone = true;
    uint32_t last_mine_play = 0;
    const ULONGLONG t0 = GetTickCount64();
    for (int step = 1; step <= 8; ++step) {
        Sleep(100);
        const ULONGLONG elapsed = GetTickCount64() - t0;
        DWORD play = 0, write = 0;
        b.real->GetCurrentPosition(&play, &write);
        r.g.sink->advance(uint32_t(480 * 10));   // 100 ms of our time per step
        r.g.call(b.mine, buf_slot::GetCurrentPosition, {c1, c2});
        const uint32_t mp = r.g.get32(c1), mw = r.g.get32(c2);
        std::printf("        %5llu   %8lu / %-8lu            %8u / %-8u\n", static_cast<unsigned long long>(elapsed), play / 4, write / 4, mp / 4, mw / 4);
        real_margin_sum += double((write + bytes - play) % bytes) / 4.0 / 44.1;
        mine_margin_sum += double((mw + bytes - mp) % bytes) / 4.0 / 44.1;
        // The ring is one second long and the machine may be busy (a step of 100 ms can take 250 ms): "forward" is judged modulo the ring.
        real_monotone = real_monotone && (play + bytes - last_real_play) % bytes < bytes * 6 / 10;
        mine_monotone = mine_monotone && (mp + bytes - last_mine_play) % bytes < bytes * 6 / 10;
        last_real_play = play;
        last_mine_play = mp;
    }
    std::printf("        mean write-play margin: real %.1f ms, mine %.1f ms\n", real_margin_sum / 8, mine_margin_sum / 8);
    report("play cursor advances monotonically (real)", real_monotone, "");
    report("play cursor advances monotonically (mine)", mine_monotone, "");
    DWORD play = 0;
    b.real->GetCurrentPosition(&play, nullptr);
    const double elapsed_ms = double(GetTickCount64() - t0);
    // The real cursor follows the wall clock (it starts about 50 ms behind it); compared on the circle of the 1 s ring, whatever the load.
    auto circular_ms = [](double a, double b) { double d = std::fmod(std::fabs(a - b), 1000.0); return d > 500.0 ? 1000.0 - d : d; };
    report("real play cursor follows the clock (within 200 ms of elapsed time, modulo the ring)", circular_ms(double(play) / 4.0 / 44.1, elapsed_ms - 50.0) < 200.0, "");
    r.g.call(b.mine, buf_slot::GetCurrentPosition, {c1, 0});
    report("mine play cursor is where 8 x 100 ms of our time put it (within 60 ms)", std::fabs(double(r.g.get32(c1)) / 4.0 / 44.1 - 800.0) < 60.0, "");
    // Stop keeps the position; a stopped buffer does not move.
    same_hr("Stop", b.real->Stop(), r.g.call(b.mine, buf_slot::Stop));
    DWORD p1 = 0, p2 = 0;
    b.real->GetCurrentPosition(&p1, nullptr);
    Sleep(150);
    b.real->GetCurrentPosition(&p2, nullptr);
    report("stopped buffer does not move (real)", p1 == p2, "");
    r.g.sink->advance(480 * 15);
    r.g.call(b.mine, buf_slot::GetCurrentPosition, {c1, 0});
    const uint32_t m1 = r.g.get32(c1);
    r.g.sink->advance(480 * 15);
    r.g.call(b.mine, buf_slot::GetCurrentPosition, {c1, 0});
    report("stopped buffer does not move (mine)", m1 == r.g.get32(c1), "");
    DWORD st = 0;
    b.real->GetStatus(&st);
    r.g.call(b.mine, buf_slot::GetStatus, {c1});
    same_u32("status after Stop", st, r.g.get32(c1));
    r.release(b);
    // A one-shot buffer stops by itself and goes back to the start.
    Pair shot = r.create("100 ms one-shot", DSBCAPS_GETCURRENTPOSITION2 | DSBCAPS_CTRLVOLUME, 4410 * 4, &w);
    if (!shot.real || !shot.mine) return;
    shot.real->SetVolume(-10000);
    r.g.call(shot.mine, buf_slot::SetVolume, {uint32_t(-10000)});
    shot.real->Play(0, 0, 0);
    r.g.call(shot.mine, buf_slot::Play, {0, 0, 0});
    Sleep(400);
    r.g.sink->advance(480 * 40);
    DWORD rs = 0, rp = 0;
    shot.real->GetStatus(&rs);
    shot.real->GetCurrentPosition(&rp, nullptr);
    r.g.call(shot.mine, buf_slot::GetStatus, {c1});
    r.g.call(shot.mine, buf_slot::GetCurrentPosition, {c2, 0});
    same_u32("one-shot status after the end", rs, r.g.get32(c1));
    same_u32("one-shot play cursor after the end", rp, r.g.get32(c2));
    r.release(shot);
}

// The game's own audio startup and polling, call for call (see the inventory in docs/NUE_HANDOVER_DSOUND.md): priority level, primary buffer with
// flags 1, SetFormat probes with 1, 2, 4 and 6 channels, a 0.5 s secondary ring with flags 0x18000, one Lock of the whole ring with NO second
// region, memset, Unlock(p, n, 0, 0), Play(0, 0, DSBPLAY_LOOPING), then GetStatus and GetCurrentPosition(&play, NULL) polls.
void run_game_sequence(Rig& r) {
    std::printf("[the game's startup sequence]\n");
    r.coop(DSSCL_PRIORITY, "priority");
    Pair prim = r.create("game primary (flags 1)", DSBCAPS_PRIMARYBUFFER, 0, nullptr);
    if (!prim.real || !prim.mine) return;
    for (uint16_t channels : {1, 2, 4, 6}) {
        Wfx f;
        f.channels = channels;
        f.mask = channels == 6 ? 0x3F : channels == 4 ? 0x33 : 0;
        std::vector<uint8_t> st;
        same_hr("game probe SetFormat " + std::to_string(channels) + " channels", prim.real->SetFormat(f.real(st)), r.g.call(prim.mine, buf_slot::SetFormat, {f.mine(r.g)}));
    }
    Wfx f;   // the default the game ends with: 2 channels, 44.1 kHz, 16 bits
    std::vector<uint8_t> st;
    same_hr("game final SetFormat", prim.real->SetFormat(f.real(st)), r.g.call(prim.mine, buf_slot::SetFormat, {f.mine(r.g)}));
    const DWORD frames = (44100 * 500 / 1000) & ~15u, bytes = frames * 4;
    Pair ring = r.create("game ring (0x18000)", DSBCAPS_GETCURRENTPOSITION2 | DSBCAPS_GLOBALFOCUS, bytes, &f);
    if (!ring.real || !ring.mine) {
        r.release(prim);
        return;
    }
    void* p1 = nullptr;
    DWORD l1 = 0;
    const uint32_t mp = r.g.cell(), ml = r.g.cell();
    same_hr("game Lock whole ring, no second region", ring.real->Lock(0, bytes, &p1, &l1, nullptr, nullptr, 0), r.g.call(ring.mine, buf_slot::Lock, {0, bytes, mp, ml, 0, 0, 0}));
    same_u32("game Lock length", l1, r.g.get32(ml));
    std::memset(p1, 0, l1);
    std::memset(r.g.arena.host(r.g.get32(mp), l1), 0, l1);
    same_hr("game Unlock(p, n, 0, 0)", ring.real->Unlock(p1, l1, nullptr, 0), r.g.call(ring.mine, buf_slot::Unlock, {r.g.get32(mp), l1, 0, 0}));
    same_hr("game Play looping", ring.real->Play(0, 0, DSBPLAY_LOOPING), r.g.call(ring.mine, buf_slot::Play, {0, 0, 1}));
    DWORD status = 0;
    const uint32_t cs = r.g.cell(), cp = r.g.cell();
    ring.real->GetStatus(&status);
    r.g.call(ring.mine, buf_slot::GetStatus, {cs});
    same_u32("game GetStatus while playing", status, r.g.get32(cs));
    DWORD last_real = 0;
    uint32_t last_mine = 0;
    bool real_ok = true, mine_ok = true;
    for (int poll = 0; poll < 20; ++poll) {   // 20 polls at 10 ms, as the audio thread does
        Sleep(10);
        DWORD play = 0;
        same_hr("game GetCurrentPosition(&play, NULL)", ring.real->GetCurrentPosition(&play, nullptr), r.g.call(ring.mine, buf_slot::GetCurrentPosition, {cp, 0}));
        r.g.sink->advance(480);
        const uint32_t mine_play = r.g.get32(cp);
        if (poll > 0) {
            real_ok = real_ok && (play >= last_real || last_real - play > bytes / 2);
            mine_ok = mine_ok && (mine_play >= last_mine || last_mine - mine_play > bytes / 2);
        }
        last_real = play;
        last_mine = mine_play;
    }
    report("game polls: the real play cursor never goes backwards", real_ok, "");
    report("game polls: our play cursor never goes backwards", mine_ok, "");
    same_hr("game Restore on a healthy buffer", ring.real->Restore(), r.g.call(ring.mine, buf_slot::Restore));
    r.release(ring);
    r.release(prim);
}

}  // namespace

int main(int argc, char** argv) {
    for (int i = 1; i < argc; ++i)
        if (std::string(argv[i]) == "-v") g_verbose = true;
    Rig rig;
    if (!rig.open()) {
        std::printf("SKIP: no usable DirectSound output device on this machine (DirectSoundCreate failed); nothing compared\n");
        return 0;
    }
    run_device(rig);
    run_secondary_creation(rig);
    run_controls(rig);
    run_lock(rig);
    run_transport_static(rig);
    run_realtime(rig);
    run_game_sequence(rig);
    std::printf("%s: %d comparisons, %d differences, %d known differences\n", g_mismatch ? "FAIL" : "PASS", g_total, g_mismatch, g_known);
    return g_mismatch ? 1 : 0;
}
