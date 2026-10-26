// Smoke test of the WASAPI sink and of the engine on a real output: opens the default render endpoint, runs the engine with a DirectSound
// ring of SILENCE for about half a second and checks that the device clock advanced, the callback was served, the play cursor of the ring moved
// and nothing underran badly. Nothing audible is produced (zero-filled data). Skips itself (exit 0) when there is no output device.
#include <chrono>
#include <cstdio>
#include <thread>
#include <vector>

#include "platform/audio/audio_engine.hpp"
#include "platform/audio/win32/wasapi_sink.hpp"

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

int main() {
    Status status = Status::ok;
    EngineConfig config;
    config.latency_ms = 40;
    auto engine = Engine::create(config, make_wasapi_sink(), &status);
    if (!engine) {
        std::printf("SKIP: the default audio endpoint could not be opened (status %d); nothing tested\n", int(status));
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
    CHECK(d.play(ring.id, 0, dsx::play_flag::looping) == dsx::hr::ok);

    uint32_t last = 0;
    bool moved = false;
    for (int i = 0; i < 50; ++i) {   // 50 polls at 10 ms, like the game's audio thread
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        uint32_t play = 0;
        CHECK(d.get_current_position(ring.id, &play, nullptr) == dsx::hr::ok);
        moved = moved || play != last;
        last = play;
    }
    const SinkStats s = engine->sink().stats();
    std::printf("device clock: %llu frames played, %llu underruns, cpu load %.3f; mixer blocks %llu\n", static_cast<unsigned long long>(s.frames_played),
                static_cast<unsigned long long>(s.underruns), double(s.cpu_load), static_cast<unsigned long long>(d.stats().blocks_mixed));
    CHECK(moved);                           // the play cursor of a playing ring moves (the game restarts audio if it ever stands still)
    CHECK(s.frames_played > actual.sample_rate / 10);   // the device consumed more than 100 ms
    CHECK(d.stats().blocks_mixed > 0);
    // A 6-channel primary format (what the game's surround setting asks): the engine reopens the endpoint with 6 channels, or keeps what the
    // endpoint gives, and a 6-channel ring still plays and its cursor still moves.
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary;
    auto prim = d.create_buffer(pd);
    WaveFormat six;
    six.channels = 6;
    six.sample_rate = 44100;
    six.channel_mask = speaker::surround_5_1;
    CHECK(d.set_format(prim.id, six) == dsx::hr::ok);
    const OutputLayout after = engine->sink().actual();
    std::printf("after a 6-channel primary: output %u Hz, %u channels, renderer %s, reopened %u time(s)\n", after.sample_rate, after.channels, engine->renderer_name(),
                engine->reopen_count());
    dsx::BufferDesc bd6 = bd;
    bd6.format = six;
    bd6.bytes = 22048 * 12;
    auto ring6 = d.create_buffer(bd6);
    CHECK(ring6.hr == dsx::hr::ok);
    CHECK(d.play(ring6.id, 0, dsx::play_flag::looping) == dsx::hr::ok);
    uint32_t p0 = 0, p1 = 0;
    d.get_current_position(ring6.id, &p0, nullptr);
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    d.get_current_position(ring6.id, &p1, nullptr);
    CHECK(p1 != p0);
    // The endpoint disappears while the game plays (headset unplugged, driver reset): the clock must keep moving without a device, so that the game
    // does not see a frozen play cursor and rebuild its audio over and over; the default endpoint is taken again within a second or so.
    const uint64_t before = engine->sink().stats().frames_played;
    CHECK(wasapi_drop_endpoint(engine->sink()));
    bool cursor_moved_during_outage = false;
    last = 0;
    d.get_current_position(ring6.id, &last, nullptr);
    for (int i = 0; i < 12; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        uint32_t now = 0;
        d.get_current_position(ring6.id, &now, nullptr);
        cursor_moved_during_outage = cursor_moved_during_outage || now != last;
        last = now;
    }
    CHECK(cursor_moved_during_outage);
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));   // re-acquisition (retried every 500 ms)
    const uint64_t after_outage = engine->sink().stats().frames_played;
    std::printf("endpoint losses: %u, device clock %llu -> %llu frames, output %u channels\n", wasapi_endpoint_losses(engine->sink()), static_cast<unsigned long long>(before),
                static_cast<unsigned long long>(after_outage), engine->sink().actual().channels);
    CHECK(wasapi_endpoint_losses(engine->sink()) == 1);
    CHECK(after_outage > before + 48000 / 2);   // the clock kept counting through the outage and after it
    CHECK(engine->sink().running());
    engine->shutdown();
    std::printf("%s\n", g_failures ? "FAIL" : "PASS");
    return g_failures ? 1 : 0;
}
