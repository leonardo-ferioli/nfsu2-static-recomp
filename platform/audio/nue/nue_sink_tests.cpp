// The NUE sink on NUE's null backend (deterministic mode): no sound card, no window, no real time. NUE's virtual clock consumes the stream at its sample rate
// when the test advances it, so every number below is exact. What this proves: the adapter's contract (open, format, start/stop, device clock, latency,
// statistics, close), the engine and DirectSound ring on top of it (the play cursor follows the device clock), and the host selection that picks it.
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

#include "nue/nue.h"
#include "nue/null_backend.h"
#include "platform/audio/audio_engine.hpp"
#include "platform/audio/host_sink.hpp"
#include "platform/audio/nue/nue_sink.hpp"

using namespace nfsu2::platform;
using namespace nfsu2::platform::audio;
namespace dsx = nfsu2::platform::audio::ds;

static int g_failures = 0;
#define CHECK(cond)                                                            \
    do {                                                                       \
        if (!(cond)) {                                                         \
            ++g_failures;                                                      \
            std::printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #cond);        \
        }                                                                      \
    } while (0)

namespace {

constexpr int64_t kMs = 1000000;

// The engine on the null backend with a private user folder; the same setup NUE's own tests use.
struct NueNull {
    std::filesystem::path root;
    bool ok = false;
    NueNull() {
        root = std::filesystem::temp_directory_path() / ("nfsu2_nue_sink_" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
        std::filesystem::create_directories(root / "data");
        nue_init_desc d;
        NUE_STRUCT_INIT(&d);
        d.api_version = NUE_API_VERSION;
        d.app_name = "nfsu2 audio test";
        d.app_id = "nfsu2-audio-test";
        d.org_name = "NUE";
        d.backend = NUE_BACKEND_NULL;
        d.flags = NUE_INIT_HEADLESS | NUE_INIT_NO_CRASH_HANDLER | NUE_INIT_NO_LOG_FILE | NUE_INIT_NO_CONFIG_LOAD | NUE_INIT_DETERMINISTIC;
        const std::string data = (root / "data").generic_string(), user = (root / "user").generic_string();
        d.game_data_path = data.c_str();
        d.user_data_path = user.c_str();
        d.log_level = NUE_LOG_WARN;
        ok = NUE_SUCCEEDED(nue_init(&d));
    }
    ~NueNull() {
        nue_shutdown();
        std::error_code ec;
        std::filesystem::remove_all(root, ec);
    }
};

struct Tone {
    uint32_t channels = 2;
    uint64_t frames = 0;
    uint64_t calls = 0;
    double phase = 0;
    std::vector<float> first_block;   // the first callback's samples, to look at
};
void tone_callback(void* user, float* out, uint32_t frames) {
    auto* t = static_cast<Tone*>(user);
    for (uint32_t i = 0; i < frames; ++i) {
        const float v = float(0.5 * std::sin(t->phase));
        t->phase += 2.0 * 3.14159265358979 * 440.0 / 48000.0;
        for (uint32_t c = 0; c < t->channels; ++c) out[i * t->channels + c] = v * float(c + 1);   // a different level per channel
    }
    if (t->calls == 0) t->first_block.assign(out, out + size_t(frames) * t->channels);
    t->frames += frames;
    ++t->calls;
}

void test_sink_contract() {
    // No engine initialised and the sink may not initialise it: refused, nothing created.
    {
        auto sink = make_nue_sink(false);
        Tone t;
        SinkDesc d;
        d.spec = {48000, 2, speaker::stereo};
        CHECK(sink->open(d, &tone_callback, &t) == Status::closed);
        CHECK(!sink->running() && sink->frames_played() == 0);
    }
    NueNull nue;
    CHECK(nue.ok);
    if (!nue.ok) return;
    auto sink = make_nue_sink(false);
    Tone t;
    SinkDesc d;
    d.spec = {48000, 2, speaker::stereo};
    d.latency_ms = 20;
    CHECK(sink->open(d, nullptr, &t) == Status::invalid_argument);
    SinkDesc bad = d;
    bad.spec.channels = 0;
    CHECK(sink->open(bad, &tone_callback, &t) == Status::invalid_argument);
    bad.spec = {4000, 2, speaker::stereo};
    CHECK(sink->open(bad, &tone_callback, &t) == Status::invalid_argument);
    bad.spec = {48000, 4, speaker::quad};
    CHECK(sink->open(bad, &tone_callback, &t) == Status::unsupported);   // no standard position in NUE's order
    CHECK(sink->open(d, &tone_callback, &t) == Status::ok);
    CHECK(sink->actual().channels == 2 && sink->actual().channel_mask == speaker::stereo && sink->actual().sample_rate > 0);
    CHECK(!sink->running());   // opened paused
    nue_null_advance_time(50 * kMs);
    CHECK(t.frames == 0 && sink->frames_played() == 0);   // a paused stream consumes nothing

    CHECK(sink->start() == Status::ok && sink->running());
    CHECK(nue_null_advance_time(100 * kMs) == NUE_OK);
    CHECK(sink->frames_played() == 4800);            // 100 ms at 48 kHz, exactly
    CHECK(t.frames >= 4800 && t.frames < 4800 + 4800);   // the callback is served a block ahead of the clock, never starved
    CHECK(sink->stats().frames_played == 4800);
    CHECK(sink->stats().peak_level > 0.4f && sink->stats().peak_level <= 1.0f);
    CHECK(!t.first_block.empty() && std::fabs(t.first_block[1]) >= 0.0f);   // interleaved: channel 2 is twice channel 1 (checked below on a later sample)
    if (t.first_block.size() >= 8) CHECK(std::fabs(t.first_block[7] - 2.0f * t.first_block[6]) < 1e-5f);

    const SinkLatency lat = sink->latency();
    CHECK(lat.device_buffer_frames > 0);

    CHECK(sink->stop() == Status::ok && !sink->running());
    const uint64_t at_stop = sink->frames_played();
    nue_null_advance_time(100 * kMs);
    CHECK(sink->frames_played() == at_stop);         // stop keeps the position, nothing consumed
    CHECK(sink->start() == Status::ok);
    nue_null_advance_time(10 * kMs);
    CHECK(sink->frames_played() == at_stop + 480);   // resumes where it was

    sink->close();
    const uint64_t calls = t.calls;
    nue_null_advance_time(100 * kMs);
    CHECK(t.calls == calls && !sink->running() && sink->frames_played() == 0);   // closed: no callback, no clock
    CHECK(sink->start() == Status::closed);
}

void test_surround_layouts() {
    NueNull nue;
    CHECK(nue.ok);
    if (!nue.ok) return;
    for (uint32_t channels : {1u, 2u, 6u, 8u}) {
        auto sink = make_nue_sink(false);
        Tone t;
        t.channels = channels;
        SinkDesc d;
        d.spec = {48000, channels, speaker::default_mask(channels)};
        CHECK(sink->open(d, &tone_callback, &t) == Status::ok);
        CHECK(sink->actual().channels == channels && sink->actual().channel_mask == speaker::default_mask(channels));
        CHECK(sink->start() == Status::ok);
        nue_null_advance_time(20 * kMs);
        CHECK(sink->frames_played() == 960);
        CHECK(t.calls > 0);
        sink->close();
    }
}

// The engine and the game's ring over the NUE sink: the play cursor follows the device clock, and the cursor of a ring that plays never stands still.
void test_ring_over_nue() {
    NueNull nue;
    CHECK(nue.ok);
    if (!nue.ok) return;
    EngineConfig config;
    Status status = Status::closed;
    auto engine = Engine::create(config, make_nue_sink(false), &status);
    CHECK(engine && status == Status::ok);
    if (!engine) return;
    CHECK(engine->start() == Status::ok);
    auto& dev = engine->device();
    dev.set_cooperative_level(2);
    dsx::BufferDesc bd;
    bd.flags = 0x18000;                // the game's flags: GETCURRENTPOSITION2 | GLOBALFOCUS
    bd.bytes = 22016 * 4;              // 0.5 s of 44.1 kHz 16-bit stereo, the game's ring
    bd.has_format = true;
    bd.format.sample_rate = 44100;
    auto ring = dev.create_buffer(bd);
    CHECK(ring.hr == dsx::hr::ok);

    // Fill the ring with a tone and play it looping.
    std::vector<int16_t> tone(bd.bytes / 2);
    for (size_t i = 0; i < tone.size() / 2; ++i) tone[2 * i] = tone[2 * i + 1] = int16_t(12000.0 * std::sin(2.0 * 3.14159265358979 * 440.0 * double(i) / 44100.0));
    dsx::Regions regions;
    CHECK(dev.lock(ring.id, 0, bd.bytes, 0, regions) == dsx::hr::ok);
    CHECK(dev.unlock(ring.id, regions, dsx::as_bytes(tone.data(), bd.bytes), {}) == dsx::hr::ok);
    CHECK(dev.play(ring.id, 0, dsx::play_flag::looping) == dsx::hr::ok);

    uint32_t last = 0;
    int moved = 0;
    for (int i = 0; i < 50; ++i) {     // 50 polls of 10 ms of the virtual clock, like the game's audio thread
        nue_null_advance_time(10 * kMs);
        uint32_t play = 0;
        CHECK(dev.get_current_position(ring.id, &play, nullptr) == dsx::hr::ok);
        if (play != last) ++moved;
        last = play;
    }
    CHECK(moved >= 45);                 // the stall detector (100 identical polls) must never see the cursor stand still
    CHECK(engine->sink().frames_played() == 24000);   // 500 ms at 48 kHz
    CHECK(engine->sink().stats().peak_level > 0.1f);  // the tone reached the device
    CHECK(dev.stats().blocks_mixed > 0);

    // The game's surround setting asks for a 6-channel primary format: NUE's stream is reopened with 6 channels and the cursor keeps moving.
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary;
    auto prim = dev.create_buffer(pd);
    WaveFormat six;
    six.channels = 6;
    six.sample_rate = 44100;
    six.channel_mask = speaker::surround_5_1;
    CHECK(dev.set_format(prim.id, six) == dsx::hr::ok);
    CHECK(engine->sink().actual().channels == 6 && engine->reopen_count() == 1);
    uint32_t p0 = 0, p1 = 0;
    dev.get_current_position(ring.id, &p0, nullptr);
    nue_null_advance_time(50 * kMs);
    dev.get_current_position(ring.id, &p1, nullptr);
    CHECK(p0 != p1);
    CHECK(engine->sink().running());
    engine->shutdown();
}

// The host's selection: registering the adapter makes "nue" a real choice, and "auto" prefers it.
void test_host_selection() {
    NueNull nue;
    CHECK(nue.ok);
    if (!nue.ok) return;
    register_nue_host_sink(false);
    CHECK(host_sink_available(HostSink::nue));
    HostSink chosen = HostSink::null;
    std::string note;
    auto factory = make_host_sink_factory(HostSink::automatic, chosen, note);
    CHECK(chosen == HostSink::nue && note.empty());
    EngineConfig config;
    auto engine = Engine::create(config, factory(), nullptr);
    CHECK(engine);
    if (!engine) return;
    CHECK(engine->start() == Status::ok);
    nue_null_advance_time(40 * kMs);
    CHECK(engine->sink().frames_played() == 1920);   // really NUE's clock, not the paced null sink's wall clock
    engine->shutdown();
}

// A host without a window: the sink starts the engine itself (audio only) and releases it with the sink.
void test_sink_initialises_the_engine() {
    CHECK(!nue_is_initialized());
#ifdef _WIN32
    _putenv_s("SDL_AUDIODRIVER", "dummy");   // SDL's own silent driver: the real backend runs, no sound card is opened
#endif
    {
        auto sink = make_nue_sink(true);
        Tone t;
        SinkDesc d;
        d.spec = {48000, 2, speaker::stereo};
        const Status s = sink->open(d, &tone_callback, &t);
        CHECK(s == Status::ok || s == Status::unsupported || s == Status::not_found || s == Status::io_error);   // a machine with no audio device may refuse; then nothing is left behind
        if (s == Status::ok) {
            CHECK(nue_is_initialized());
            CHECK(sink->start() == Status::ok);
            sink->close();
        }
    }
    CHECK(!nue_is_initialized());
}

}  // namespace

int main() {
    test_sink_contract();
    test_surround_layouts();
    test_ring_over_nue();
    test_host_selection();
    test_sink_initialises_the_engine();
    std::printf("nue_sink_tests: %s (%d failure(s))\n", g_failures ? "FAIL" : "PASS", g_failures);
    return g_failures ? 1 : 0;
}
