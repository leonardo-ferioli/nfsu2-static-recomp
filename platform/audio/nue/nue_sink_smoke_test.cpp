// Smoke test of the NUE sink and the engine on the REAL output through NUE's SDL3 backend: opens the default device, runs the game's 0.5 s ring of SILENCE (zero-filled,
// nothing audible) for about half a second and checks that the device clock advanced and the play cursor moved. With `--tone` the ring holds a quiet 440 Hz tone for a
// second instead, to hear that the path works. Skips itself (exit 0) when there is no output device.
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <thread>
#include <vector>

#include "platform/audio/audio_engine.hpp"
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

int main(int argc, char** argv) {
    const bool tone = argc > 1 && std::strcmp(argv[1], "--tone") == 0;
    Status status = Status::ok;
    EngineConfig config;
    auto engine = Engine::create(config, make_nue_sink(true), &status);
    if (!engine) {
        std::printf("SKIP: NUE's default audio output could not be opened (status %d); nothing tested\n", int(status));
        return 0;
    }
    const OutputLayout actual = engine->sink().actual();
    const SinkLatency latency = engine->sink().latency();
    std::printf("output: %u Hz, %u channels, renderer %s, device latency %.1f ms, buffer %u frames\n", actual.sample_rate, actual.channels, engine->renderer_name(),
                double(latency.device_latency_ns) / 1e6, latency.device_buffer_frames);
    CHECK(actual.sample_rate >= 8000 && actual.channels >= 1);
    CHECK(engine->start() == Status::ok);

    auto& d = engine->device();
    d.set_cooperative_level(2);
    dsx::BufferDesc bd;
    bd.flags = 0x18000;
    bd.bytes = 22016 * 4;
    bd.has_format = true;
    bd.format.sample_rate = 44100;
    auto ring = d.create_buffer(bd);
    CHECK(ring.hr == dsx::hr::ok);
    if (tone) {
        std::vector<int16_t> samples(bd.bytes / 2);
        for (size_t i = 0; i < samples.size() / 2; ++i) samples[2 * i] = samples[2 * i + 1] = int16_t(3000.0 * std::sin(2.0 * 3.14159265358979 * 440.0 * double(i) / 44100.0));
        dsx::Regions r;
        CHECK(d.lock(ring.id, 0, bd.bytes, 0, r) == dsx::hr::ok);
        CHECK(d.unlock(ring.id, r, dsx::as_bytes(samples.data(), bd.bytes), {}) == dsx::hr::ok);
    }
    CHECK(d.play(ring.id, 0, dsx::play_flag::looping) == dsx::hr::ok);

    uint32_t last = 0;
    int moved = 0;
    const int polls = tone ? 100 : 50;
    for (int i = 0; i < polls; ++i) {   // polls every 10 ms, like the game's audio thread
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        uint32_t play = 0;
        CHECK(d.get_current_position(ring.id, &play, nullptr) == dsx::hr::ok);
        if (play != last) ++moved;
        last = play;
    }
    const SinkStats s = engine->sink().stats();
    std::printf("device clock: %llu frames played, %llu underruns, peak %.3f, cpu load %.3f; mixer blocks %llu; play cursor moved on %d of %d polls\n",
                static_cast<unsigned long long>(s.frames_played), static_cast<unsigned long long>(s.underruns), double(s.peak_level), double(s.cpu_load),
                static_cast<unsigned long long>(d.stats().blocks_mixed), moved, polls);
    CHECK(moved >= polls / 2);                            // the game restarts its audio if the cursor ever stands still (100 identical polls)
    CHECK(s.frames_played > actual.sample_rate / 10);     // the device consumed more than 100 ms
    CHECK(d.stats().blocks_mixed > 0);
    if (tone) CHECK(s.peak_level > 0.0f || s.frames_played > 0);
    engine->shutdown();
    std::printf("nue_sink_smoke_test: %s (%d failure(s))\n", g_failures ? "FAIL" : "PASS", g_failures);
    return g_failures ? 1 : 0;
}
