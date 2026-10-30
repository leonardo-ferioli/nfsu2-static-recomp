// The host's choice of audio output (host_sink.hpp) and the paced null sink: no sound card, no NUE. Real time only where the thing tested is a clock (the paced sink).
#include <chrono>
#include <cstdio>
#include <memory>
#include <string>
#include <thread>
#include <vector>

#include "platform/audio/audio_engine.hpp"
#include "platform/audio/host_sink.hpp"
#include "platform/audio/paced_null_sink.hpp"

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

struct Counter {
    uint64_t frames = 0;
    uint32_t channels = 2;
};
void count_callback(void* user, float* out, uint32_t frames) {
    auto* c = static_cast<Counter*>(user);
    for (uint32_t i = 0; i < frames * c->channels; ++i) out[i] = 0.25f;
    c->frames += frames;
}

// A sink that cannot open (a missing device) or that opens only the layouts it is given.
class FailingSink final : public AudioSink {
public:
    explicit FailingSink(uint32_t max_channels = 0) : max_channels_(max_channels) {}
    Status open(const SinkDesc& d, SinkCallback, void*) override {
        if (d.spec.channels > max_channels_) return Status::device_lost;
        spec_ = d.spec;
        return Status::ok;
    }
    OutputLayout actual() const override { return spec_; }
    Status start() override { return Status::ok; }
    Status stop() override { return Status::ok; }
    void close() override {}
    bool running() const override { return false; }
    uint64_t frames_played() const override { return 0; }
    SinkLatency latency() const override { return {}; }
    SinkStats stats() const override { return {}; }

private:
    uint32_t max_channels_;
    OutputLayout spec_;
};

void test_names() {
    HostSink k = HostSink::null;
    CHECK(parse_host_sink("nue", k) && k == HostSink::nue);
    CHECK(parse_host_sink("wasapi", k) && k == HostSink::wasapi);
    CHECK(parse_host_sink("auto", k) && k == HostSink::automatic);
    CHECK(parse_host_sink("null", k) && k == HostSink::null);
    k = HostSink::wasapi;
    CHECK(!parse_host_sink("NUE", k) && !parse_host_sink("", k) && !parse_host_sink("system", k) && k == HostSink::wasapi);   // unknown text changes nothing
    for (HostSink x : {HostSink::null, HostSink::wasapi, HostSink::nue, HostSink::automatic}) {
        HostSink back = HostSink::null;
        CHECK(parse_host_sink(host_sink_name(x), back) && back == x);
    }
}

void test_unavailable_kinds_fall_back() {
    HostSink chosen = HostSink::automatic;
    std::string note;
    // Nothing registered for NUE in this program.
    CHECK(!host_sink_available(HostSink::nue));
    auto nue = make_host_sink_factory(HostSink::nue, chosen, note);
    CHECK(nue && !note.empty());
#ifdef _WIN32
    CHECK(chosen == HostSink::wasapi);   // the next real output down the chain
#else
    CHECK(chosen == HostSink::null);
#endif
    auto null = make_host_sink_factory(HostSink::null, chosen, note);
    CHECK(null && chosen == HostSink::null && note.empty());
    auto automatic = make_host_sink_factory(HostSink::automatic, chosen, note);
    CHECK(automatic && note.empty());
#ifdef _WIN32
    CHECK(chosen == HostSink::wasapi);
#else
    CHECK(chosen == HostSink::null);
#endif
}

// The paced null sink: its device clock follows the wall clock without any device, which is what the game's audio start-up loop needs.
void test_paced_clock() {
    auto sink = make_paced_null_sink();
    Counter c;
    SinkDesc d;
    d.spec = {48000, 2, speaker::stereo};
    CHECK(sink->open(d, &count_callback, &c) == Status::ok);
    CHECK(sink->actual() == d.spec);
    CHECK(sink->frames_played() == 0);
    CHECK(sink->start() == Status::ok && sink->running());
    uint64_t last = 0;
    int moved = 0;
    const auto begin = std::chrono::steady_clock::now();
    for (int i = 0; i < 30; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        const uint64_t now = sink->frames_played();
        if (now != last) ++moved;
        last = now;
    }
    const double seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - begin).count();
    sink->close();
    const double expected = seconds * 48000.0;
    CHECK(moved >= 10);                       // the cursor moves on most polls
    CHECK(c.frames > 0 && double(c.frames) <= expected + 1000.0);   // never ahead of the wall clock
    CHECK(double(c.frames) >= expected * 0.5 - 2000.0);             // nor a slow motion version of it (generous: a loaded machine delays the thread)
    const uint64_t frozen = c.frames;
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    CHECK(c.frames == frozen);                // closed: the thread is gone, the callback never runs again
}

// install_dsound's factory keeps the game running when the real output cannot open: the engine ends up on the paced null sink with a working clock.
void test_fallback_on_open_failure() {
    register_host_sink(HostSink::nue, [] { return std::unique_ptr<AudioSink>(std::make_unique<FailingSink>(0)); });
    CHECK(host_sink_available(HostSink::nue));
    HostSink chosen = HostSink::null;
    std::string note, logged;
    auto factory = make_host_sink_factory(HostSink::nue, chosen, note, [&](const std::string& t) { logged += t; });
    CHECK(chosen == HostSink::nue && note.empty());

    EngineConfig config;
    Status status = Status::closed;
    auto engine = Engine::create(config, factory(), &status);
    CHECK(engine && status == Status::ok);
    CHECK(logged.find("'nue' output could not be opened") != std::string::npos);
    if (!engine) return;
    CHECK(engine->start() == Status::ok);
    auto& dev = engine->device();
    dev.set_cooperative_level(2);
    dsx::BufferDesc bd;
    bd.flags = 0x18000;
    bd.bytes = 22016 * 4;
    bd.has_format = true;
    bd.format.sample_rate = 44100;
    auto ring = dev.create_buffer(bd);
    CHECK(ring.hr == dsx::hr::ok && dev.play(ring.id, 0, dsx::play_flag::looping) == dsx::hr::ok);
    int moved = 0;
    uint32_t last = 0;
    for (int i = 0; i < 40; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        uint32_t play = 0;
        CHECK(dev.get_current_position(ring.id, &play, nullptr) == dsx::hr::ok);
        if (play != last) ++moved;
        last = play;
    }
    CHECK(moved >= 20);   // a play cursor that stands still makes the game rebuild its audio for ever
    engine->shutdown();
}

// After the real output has opened once, a layout it refuses is not a reason to leave it: the engine reopens the layout that worked.
void test_refused_layout_keeps_the_real_output() {
    register_host_sink(HostSink::nue, [] { return std::unique_ptr<AudioSink>(std::make_unique<FailingSink>(2)); });
    HostSink chosen;
    std::string note, logged;
    auto factory = make_host_sink_factory(HostSink::nue, chosen, note, [&](const std::string& t) { logged += t; });
    EngineConfig config;
    auto engine = Engine::create(config, factory(), nullptr);
    CHECK(engine && logged.empty());
    if (!engine) return;
    auto& dev = engine->device();
    dev.set_cooperative_level(2);   // priority: the primary format can be set
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary;
    auto prim = dev.create_buffer(pd);
    WaveFormat six;
    six.channels = 6;
    six.sample_rate = 44100;
    six.channel_mask = speaker::surround_5_1;
    CHECK(dev.set_format(prim.id, six) == dsx::hr::ok);
    CHECK(logged.empty());                              // no fallback: the stereo output of the real sink is still the one in use
    CHECK(engine->sink().actual().channels == 2);
    engine->shutdown();
}

}  // namespace

int main() {
    test_names();
    test_unavailable_kinds_fall_back();
    test_paced_clock();
    test_fallback_on_open_failure();
    test_refused_layout_keeps_the_real_output();
    std::printf("host_sink_tests: %s (%d failure(s))\n", g_failures ? "FAIL" : "PASS", g_failures);
    return g_failures ? 1 : 0;
}
