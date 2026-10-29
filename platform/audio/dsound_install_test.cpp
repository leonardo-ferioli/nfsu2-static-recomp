// End-to-end test of the launcher glue: a real NativePlatform (the guest image mapped at its real 32-bit addresses), install_dsound() with a null
// sink, and a "guest" that reaches DirectSoundCreate through the game's own import slot (IAT 0x78302c) and then calls the COM methods through
// the vtable it got back, with stdcall stacks, exactly as the translated code does. Checks the tokens, the argument words popped, the returned
// values and that audio really reaches the sink. No window, no sound card. Needs the export and game directories like the other platform tests.
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

#include "guest_memory.hpp"
#ifdef NFSU2_GUEST_IDENTITY
#include "native32.hpp"
#else
#include "platform64.hpp"
#include "win32_facade.hpp"
#endif
#include "platform/audio/dsound_install.hpp"
#include "platform/audio/null_sink.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

using namespace nfsu2raw;
using namespace nfsu2::platform::audio;

int main(int argc, char** argv) try {
    if (argc != 3) throw Fault("requires export and game directories");
#ifdef NFSU2_GUEST_IDENTITY
    Cpu c;
    NativePlatform p(c, argv[1], argv[2]);
#else
    // A 64-bit host: the guest in the arena, the Win32 layer on top (its tokens are the handles the DirectSound layer is given).
    const char* arena_error = nullptr;
    auto arena = nfsu2::guest::create_arena(nfsu2::guest::arena_config_from_environment(), &arena_error);
    if (!arena) throw Fault(std::string("arena: ") + (arena_error ? arena_error : "?"));
    Cpu c;
    Platform64 p(c, argv[1], argv[2]);
    std::string bad;
    Win32Facade facade(p, parse_win32_layer("all", bad));
    const GuestHandles handles{[&](uint32_t h) { facade.set_event(h); }, [&](uint32_t h) { return facade.is_window(h); }};
#endif

    NullSink* sink = nullptr;
    AudioSettings settings;
    settings.enabled = true;
    settings.sink_factory = [&] {
        auto s = std::make_unique<NullSink>(480, 480);
        s->keep_samples(true);
        sink = s.get();
        return std::unique_ptr<AudioSink>(std::move(s));
    };
    std::vector<std::string> log;
    std::string why;
#ifdef NFSU2_GUEST_IDENTITY
    const GuestHandles* handles_pointer = nullptr;
#else
    const GuestHandles* handles_pointer = &handles;
#endif
    if (!install_dsound(p, settings, [&](const std::string& t) { log.push_back(t); }, why, handles_pointer)) throw Fault("install_dsound failed: " + why);

    c.map(0, 65536);
    const uint32_t scratch = c.memory.back().base;
    uint32_t used = 0;
    auto block = [&](uint32_t bytes) { const uint32_t a = scratch + used; used += (bytes + 15) & ~15u; return a; };
    auto cell = [&](uint32_t v = 0) { const uint32_t a = block(16); wm<4>(c, a, v); return a; };
    const uint32_t sp = uint32_t(r<4>(c, 16));
    // One stdcall call: push the words, set pc to the token, dispatch, check that the callee popped exactly its arguments.
    auto call_token = [&](uint32_t token, std::vector<uint32_t> args) {
        wr<4>(c, 16, sp);
        wm<4>(c, sp, 0xdead0000);
        for (size_t i = 0; i < args.size(); ++i) wm<4>(c, sp + 4 + 4 * uint32_t(i), args[i]);
        c.pc = token;
        if (!p.dispatch(c)) throw Fault("token was not dispatched: 0x" + std::to_string(token));
        if (r<4>(c, 16) != sp + 4 + 4 * args.size() || c.pc != 0xdead0000) throw Fault("stdcall cleanup: the callee must pop exactly its arguments");
        return uint32_t(r<4>(c, 0));
    };
    auto method = [&](uint32_t object, uint32_t slot, std::vector<uint32_t> args) {
        const uint32_t vtable = uint32_t(m<4>(c, object));
        args.insert(args.begin(), object);
        return call_token(uint32_t(m<4>(c, vtable + slot * 4)), args);
    };

    // The game's import slot for dsound.dll ordinal 1 holds the call token the launcher overrode.
    const uint32_t create_token = uint32_t(m<4>(c, 0x78302c));
    const uint32_t pds = cell();
    if (call_token(create_token, {0, pds, 0}) != 0) throw Fault("DirectSoundCreate through the import slot");
    const uint32_t ds = uint32_t(m<4>(c, pds));
    if (!ds) throw Fault("DirectSoundCreate returned no object");
#ifdef NFSU2_GUEST_IDENTITY
    const uint32_t desktop = uint32_t(HandleToLong(GetDesktopWindow()));
#else
    const uint32_t desktop = call_token(p.import_token("GetDesktopWindow"), {});
#endif
    if (method(ds, 6, {desktop, 2}) != 0) throw Fault("SetCooperativeLevel with the desktop window (the game's fallback)");

    // Primary buffer, then a 2-channel 44.1 kHz format (plain WAVEFORMATEX), then the 0.5 s ring exactly as the game asks for it.
    const uint32_t desc_primary = block(36);
    for (int i = 0; i < 9; ++i) wm<4>(c, desc_primary + 4 * i, i == 0 ? 36 : i == 1 ? 1 : 0);
    const uint32_t pprimary = cell();
    if (method(ds, 3, {desc_primary, pprimary, 0}) != 0) throw Fault("CreateSoundBuffer primary");
    const uint32_t primary = uint32_t(m<4>(c, pprimary));
    const uint32_t wfx = scratch + used;
    used += 32;
    const uint8_t wfx_bytes[18] = {1, 0, 2, 0, 0x44, 0xAC, 0, 0, 0x10, 0xB1, 2, 0, 4, 0, 16, 0, 0, 0};
    std::memcpy(c.pointer(wfx, 18), wfx_bytes, 18);
    if (method(primary, 14, {wfx}) != 0) throw Fault("primary SetFormat");
    const uint32_t ring_bytes = 22048 * 4;
    const uint32_t desc_ring = block(36);
    const uint32_t words[9] = {36, 0x18000, ring_bytes, 0, wfx, 0, 0, 0, 0};
    for (int i = 0; i < 9; ++i) wm<4>(c, desc_ring + 4 * i, words[i]);
    const uint32_t pring = cell();
    if (method(ds, 3, {desc_ring, pring, 0}) != 0) throw Fault("CreateSoundBuffer ring");
    const uint32_t ring = uint32_t(m<4>(c, pring));

    // Fill the ring with a tone through Lock/Unlock (guest pointers are host pointers on this host) and play it.
    const uint32_t pp1 = cell(), pn1 = cell();
    if (method(ring, 11, {0, ring_bytes, pp1, pn1, 0, 0, 0}) != 0) throw Fault("Lock");
    int16_t* samples = nfsu2::guest::ptr<int16_t>(uint32_t(m<4>(c, pp1)));
    for (uint32_t i = 0; i < ring_bytes / 4; ++i) samples[2 * i] = samples[2 * i + 1] = int16_t(12000.0 * std::sin(2.0 * 3.14159265358979 * 440.0 * i / 44100.0));
    if (method(ring, 19, {uint32_t(m<4>(c, pp1)), ring_bytes, 0, 0}) != 0) throw Fault("Unlock");
    if (method(ring, 12, {0, 0, 1}) != 0) throw Fault("Play");

    sink->advance(4800);   // 100 ms of the output
    const uint32_t ppos = cell();
    if (method(ring, 4, {ppos, 0}) != 0) throw Fault("GetCurrentPosition");
    const uint32_t play = uint32_t(m<4>(c, ppos));
    if (play == 0 || play % 4 != 0) throw Fault("the play cursor must have advanced");
    double energy = 0;
    for (float v : sink->samples()) energy += double(v) * v;
    if (energy < 100.0) throw Fault("the ring's tone did not reach the sink");
    const uint32_t pstatus = cell();
    method(ring, 9, {pstatus});
    if ((uint32_t(m<4>(c, pstatus)) & 3) != 1) throw Fault("GetStatus must say playing and not lost");

    // Release in the game's order: ring, primary, device.
    if (method(ring, 2, {}) != 0 || method(primary, 2, {}) != 0 || method(ds, 2, {}) != 0) throw Fault("Release");
    shutdown_dsound([&](const std::string& t) { log.push_back(t); });
    bool summary = false;
    for (const auto& line : log) summary = summary || line.find("audio summary") != std::string::npos;
    if (!summary) throw Fault("the shutdown summary was not logged");
    for (const auto& line : log) std::cout << line << '\n';
    std::cout << "PASS dsound install glue (token dispatch, stdcall cleanup, audio reaches the sink)\n";
    return 0;
} catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return 1;
}
