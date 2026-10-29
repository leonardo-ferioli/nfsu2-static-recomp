// Headless, deterministic tests of the audio layer: Level A semantics (ds::Device), mixing correctness, spatial renderers, reverb, engine.
// No window, no sound card, no game data. Listening-free checks: levels, panning law, ITD/ILD, reverb tail energy, hashes of rendered output.
#include <cmath>
#include <cstdio>
#include <cstring>
#include <memory>
#include <string>
#include <vector>

#include "platform/audio/audio_engine.hpp"
#include "platform/audio/ds_device.hpp"
#include "platform/audio/null_sink.hpp"
#include "platform/audio/reverb.hpp"
#include "platform/audio/spatial.hpp"
#include "platform/audio/spatial_math.hpp"

using namespace nfsu2::platform;
using namespace nfsu2::platform::audio;
namespace dsx = nfsu2::platform::audio::ds;

static int g_failures = 0, g_checks = 0;
#define CHECK(cond)                                                                                      \
    do {                                                                                                 \
        ++g_checks;                                                                                      \
        if (!(cond)) {                                                                                   \
            ++g_failures;                                                                                \
            std::printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #cond);                                  \
        }                                                                                                \
    } while (0)
#define CHECK_NEAR(a, b, tol)                                                                            \
    do {                                                                                                 \
        ++g_checks;                                                                                      \
        const double va = double(a), vb = double(b);                                                     \
        if (!(std::fabs(va - vb) <= double(tol))) {                                                      \
            ++g_failures;                                                                                \
            std::printf("FAIL %s:%d  %s = %.6f, expected %.6f +- %g\n", __FILE__, __LINE__, #a, va, vb, double(tol)); \
        }                                                                                                \
    } while (0)

namespace {

constexpr uint32_t F_VOL = dsx::buffer_flag::ctrl_volume, F_PAN = dsx::buffer_flag::ctrl_pan, F_FREQ = dsx::buffer_flag::ctrl_frequency,
                   F_3D = dsx::buffer_flag::ctrl_3d, F_NOTIFY = dsx::buffer_flag::ctrl_position_notify;

WaveFormat pcm16(uint32_t rate, uint16_t channels) {
    WaveFormat f;
    f.channels = channels;
    f.sample_rate = rate;
    f.bits = 16;
    return f;
}

struct Rig {
    std::unique_ptr<dsx::Device> dev;
    explicit Rig(uint32_t rate = 48000, uint32_t channels = 2, uint32_t latency = 0, uint32_t block = 256) {
        dsx::Config c;
        c.block_frames = block;
        dev = dsx::make_device(c);
        dev->set_output({rate, channels, speaker::default_mask(channels)}, latency);
    }
    dsx::BufferId make(uint32_t flags, uint32_t bytes, const WaveFormat& f) {
        dsx::BufferDesc d;
        d.flags = flags;
        d.bytes = bytes;
        d.has_format = true;
        d.format = f;
        const auto r = dev->create_buffer(d);
        CHECK(r.hr == dsx::hr::ok);
        return r.id;
    }
    void write(dsx::BufferId id, uint32_t offset, const std::vector<uint8_t>& bytes) {
        dsx::Regions r;
        CHECK(dev->lock(id, offset, uint32_t(bytes.size()), 0, r) == dsx::hr::ok);
        CHECK(dev->unlock(id, r, dsx::as_bytes(bytes.data(), r.bytes1),
                          dsx::as_bytes(bytes.data() + r.bytes1, r.bytes2)) == dsx::hr::ok);
    }
    std::vector<float> render(uint32_t frames) {
        std::vector<float> out(size_t(frames) * dev->output().channels);
        dev->render(out.data(), frames);
        return out;
    }
};

std::vector<uint8_t> s16_bytes(const std::vector<int16_t>& v) {
    std::vector<uint8_t> b(v.size() * 2);
    std::memcpy(b.data(), v.data(), b.size());
    return b;
}

// Interleaved 16-bit sine, `frames` frames, `channels` channels, same signal in every channel.
std::vector<uint8_t> sine16(uint32_t frames, uint16_t channels, double freq, double rate, double amp = 0.5) {
    std::vector<int16_t> v(size_t(frames) * channels);
    for (uint32_t i = 0; i < frames; ++i)
        for (uint16_t c = 0; c < channels; ++c) v[size_t(i) * channels + c] = int16_t(std::lrint(amp * 32767.0 * std::sin(2.0 * 3.14159265358979 * freq * i / rate)));
    return s16_bytes(v);
}

int zero_crossings(const std::vector<float>& x, size_t stride, size_t channel) {
    int n = 0;
    for (size_t i = stride + channel; i < x.size(); i += stride)
        if ((x[i - stride] < 0) != (x[i] < 0)) ++n;
    return n;
}

double rms(const std::vector<float>& x, size_t stride, size_t channel, size_t from = 0, size_t to = ~size_t(0)) {
    double s = 0;
    size_t n = 0;
    for (size_t i = from * stride + channel; i < x.size() && i < to * stride; i += stride, ++n) s += double(x[i]) * x[i];
    return n ? std::sqrt(s / double(n)) : 0.0;
}

std::vector<float> noise(uint32_t frames, uint32_t seed = 12345) {
    std::vector<float> n(frames);
    uint32_t s = seed;
    for (auto& v : n) {
        s = s * 1664525u + 1013904223u;
        v = (float(s >> 8) / float(1 << 24) - 0.5f) * 0.5f;
    }
    return n;
}

// ---------------------------------------------------------------------------------------------------------------------------------------

void test_units() {
    CHECK_NEAR(dsx::millibels_to_amplitude(0), 1.0, 1e-6);
    CHECK_NEAR(dsx::millibels_to_amplitude(-600), 0.5012, 1e-3);   // -6 dB
    CHECK_NEAR(dsx::millibels_to_amplitude(-2000), 0.1, 1e-6);     // -20 dB
    CHECK(dsx::millibels_to_amplitude(-10000) == 0.0f);
    float l, r;
    dsx::pan_gains(0, l, r);
    CHECK(l == 1.0f && r == 1.0f);
    dsx::pan_gains(10000, l, r);
    CHECK(l == 0.0f && r == 1.0f);
    dsx::pan_gains(-1000, l, r);
    CHECK_NEAR(l, 1.0, 1e-6);
    CHECK_NEAR(r, 0.3162, 1e-3);
}

void test_creation_and_validation() {
    Rig rig;
    auto& d = *rig.dev;
    // Primary buffer: cooperative level and format validation.
    dsx::BufferDesc primary;
    primary.flags = dsx::buffer_flag::primary | F_VOL;
    auto p = d.create_buffer(primary);
    CHECK(p.hr == dsx::hr::ok && !p.existing_primary);
    CHECK(d.create_buffer(primary).existing_primary);   // a second request returns the same object
    CHECK(d.set_format(p.id, pcm16(44100, 2)) == dsx::hr::priority_level_needed);
    CHECK(d.set_cooperative_level(0) == dsx::hr::invalid_param);
    CHECK(d.set_cooperative_level(2) == dsx::hr::ok);
    CHECK(d.set_format(p.id, pcm16(44100, 2)) == dsx::hr::ok);
    CHECK(d.set_format(p.id, pcm16(44100, 6)) == dsx::hr::ok);
    CHECK(d.set_format(p.id, pcm16(44100, 9)) == dsx::hr::invalid_param);   // measured on Windows: 9 channels (extensible) is E_INVALIDARG
    CHECK(d.set_format(p.id, pcm16(50, 2)) == dsx::hr::invalid_param);
    WaveFormat f;
    CHECK(d.get_format(p.id, f) == dsx::hr::ok && f.channels == 6);
    // Secondary buffer validation.
    dsx::BufferDesc s;
    s.flags = 0;
    s.bytes = 4096;
    CHECK(d.create_buffer(s).hr == dsx::hr::invalid_param);                 // no format
    s.has_format = true;
    s.format = pcm16(44100, 2);
    s.flags = F_3D;
    CHECK(d.create_buffer(s).hr == dsx::hr::ok);                            // measured: Windows accepts a stereo 3D buffer (it is mixed down for 3D)
    s.format = pcm16(44100, 1);
    s.flags = F_3D | F_PAN;
    CHECK(d.create_buffer(s).hr == dsx::hr::ok);                            // and CTRL3D together with CTRLPAN
    s.flags = dsx::buffer_flag::loc_hardware;
    CHECK(d.create_buffer(s).hr == dsx::hr::unsupported);                   // no hardware voices: E_NOTIMPL, as Windows answers
    s.flags = dsx::buffer_flag::ctrl_fx;
    CHECK(d.create_buffer(s).hr == dsx::hr::unsupported);
    s.flags = 0;
    s.bytes = 2;
    CHECK(d.create_buffer(s).hr == dsx::hr::invalid_param);                 // under DSBSIZE_MIN
    s.bytes = 4001;
    s.format = pcm16(44100, 2);
    auto r = d.create_buffer(s);
    CHECK(r.hr == dsx::hr::ok);
    dsx::BufferCaps caps;
    CHECK(d.get_caps(r.id, caps) == dsx::hr::ok && caps.bytes == 4004);     // rounded UP to whole frames (measured)
    // Controls need their flag.
    int32_t v = 0;
    CHECK(d.set_volume(r.id, -100) == dsx::hr::control_unavailable);
    CHECK(d.get_pan(r.id, v) == dsx::hr::control_unavailable);
    CHECK(d.set_frequency(r.id, 22050) == dsx::hr::control_unavailable);
    auto c = rig.make(F_VOL | F_PAN | F_FREQ, 4000, pcm16(44100, 2));
    CHECK(d.set_volume(c, -10001) == dsx::hr::invalid_param);
    CHECK(d.set_volume(c, 1) == dsx::hr::invalid_param);
    CHECK(d.set_volume(c, -10000) == dsx::hr::ok);
    CHECK(d.set_pan(c, 10001) == dsx::hr::invalid_param);
    CHECK(d.set_frequency(c, 99) == dsx::hr::invalid_param);
    CHECK(d.set_frequency(c, 200001) == dsx::hr::invalid_param);
    CHECK(d.set_frequency(c, 0) == dsx::hr::ok);
    uint32_t hz = 0;
    CHECK(d.get_frequency(c, hz) == dsx::hr::ok && hz == 44100);            // 0 means the buffer's own rate
    CHECK(d.set_format(c, pcm16(44100, 2)) == dsx::hr::invalid_call);       // SetFormat is for the primary only
    // Stale handle after destroy.
    d.destroy_buffer(c);
    CHECK(d.get_volume(c, v) == dsx::hr::invalid_param);
}

void test_lock_semantics() {
    Rig rig;
    auto& d = *rig.dev;
    auto b = rig.make(0, 1000 * 4, pcm16(48000, 2));
    dsx::Regions r;
    CHECK(d.lock(b, 0, 4000, 0, r) == dsx::hr::ok && r.bytes1 == 4000 && r.bytes2 == 0);
    CHECK(d.lock(b, 3000, 2000, 0, r) == dsx::hr::ok && r.offset1 == 3000 && r.bytes1 == 1000 && r.offset2 == 0 && r.bytes2 == 1000);   // wraps
    CHECK(d.lock(b, 0, 0, dsx::lock_flag::entire_buffer, r) == dsx::hr::ok && r.bytes1 == 4000);
    CHECK(d.lock(b, 4000, 4, 0, r) == dsx::hr::invalid_param);              // offset at/after the end
    CHECK(d.lock(b, 0, 4004, 0, r) == dsx::hr::invalid_param);              // longer than the buffer
    CHECK(d.lock(b, 0, 4, 0x80, r) == dsx::hr::invalid_param);              // unknown flag
    // FROMWRITECURSOR: not playing -> the write cursor equals the play cursor (the position).
    CHECK(d.set_current_position(b, 400) == dsx::hr::ok);
    CHECK(d.lock(b, 123, 8, dsx::lock_flag::from_write_cursor, r) == dsx::hr::ok && r.offset1 == 400);
    // Unlock with data moves bytes into the buffer; a short span is refused.
    std::vector<uint8_t> data(8, 0x55);
    CHECK(d.unlock(b, r, dsx::as_bytes(data.data(), 4), Bytes{}) == dsx::hr::invalid_param);
    CHECK(d.unlock(b, r, dsx::as_bytes(data.data(), 8), Bytes{}) == dsx::hr::ok);
    // Buffer lost: Lock, Play and GetCurrentPosition report it until Restore.
    d.lose_buffers();
    uint32_t status = 0;
    CHECK(d.get_status(b, status) == dsx::hr::ok && (status & dsx::status_flag::buffer_lost));
    CHECK(d.lock(b, 0, 4, 0, r) == dsx::hr::buffer_lost);
    CHECK(d.play(b, 0, 0) == dsx::hr::buffer_lost);
    CHECK(d.restore(b) == dsx::hr::ok);
    CHECK(d.lock(b, 0, 4, 0, r) == dsx::hr::ok);
}

void test_exact_playback_and_formats() {
    // Same rate as the output: samples pass through bit-exactly (ring mixed through the whole chain).
    Rig rig(48000, 2);
    auto b = rig.make(0, 64 * 4, pcm16(48000, 2));
    std::vector<int16_t> pattern(64 * 2);
    for (size_t i = 0; i < pattern.size(); ++i) pattern[i] = int16_t(int(i) * 311 - 9000);
    rig.write(b, 0, s16_bytes(pattern));
    CHECK(rig.dev->play(b, 0, dsx::play_flag::looping) == dsx::hr::ok);
    auto out = rig.render(256);
    bool exact = true;
    for (size_t i = 0; i < 256 * 2; ++i) exact = exact && out[i] == float(pattern[i % pattern.size()]) / 32768.0f;
    CHECK(exact);   // and the ring wrapped four times

    // Mono duplicates to both speakers at unity; 8-bit unsigned has silence at 0x80; 24-bit, 32-bit int and float conversions.
    Rig r2(48000, 2);
    WaveFormat m8 = pcm16(48000, 1);
    m8.bits = 8;
    auto b8 = r2.make(0, 4, m8);
    r2.write(b8, 0, {0x80, 0xFF, 0x00, 0x80});
    r2.dev->play(b8, 0, dsx::play_flag::looping);
    auto o8 = r2.render(4);
    CHECK(o8[0] == 0.0f && o8[1] == 0.0f);
    CHECK_NEAR(o8[2], 127.0 / 128.0, 1e-6);
    CHECK(o8[2] == o8[3]);
    CHECK_NEAR(o8[4], -1.0, 1e-6);

    Rig r3(48000, 2);
    WaveFormat f24 = pcm16(48000, 1);
    f24.bits = 24;
    auto b24 = r3.make(0, 6, f24);
    r3.write(b24, 0, {0x00, 0x00, 0x40, 0x00, 0x00, 0xC0});   // +0.5, -0.5
    r3.dev->play(b24, 0, dsx::play_flag::looping);
    auto o24 = r3.render(2);
    CHECK_NEAR(o24[0], 0.5, 1e-6);
    CHECK_NEAR(o24[2], -0.5, 1e-6);

    Rig r4(48000, 2);
    WaveFormat ff = pcm16(48000, 1);
    ff.bits = 32;
    ff.type = SampleType::ieee_float;
    auto bf = r4.make(0, 8, ff);
    const float fv[2] = {0.25f, -0.75f};
    std::vector<uint8_t> fb(8);
    std::memcpy(fb.data(), fv, 8);
    r4.write(bf, 0, fb);
    r4.dev->play(bf, 0, dsx::play_flag::looping);
    auto of = r4.render(2);
    CHECK(of[0] == 0.25f && of[2] == -0.75f);
}

void test_gain_pan_frequency() {
    Rig rig(48000, 2);
    auto b = rig.make(F_VOL | F_PAN | F_FREQ, 4800 * 4, pcm16(48000, 2));
    rig.write(b, 0, sine16(4800, 2, 1000, 48000, 0.5));
    rig.dev->play(b, 0, dsx::play_flag::looping);
    auto full = rig.render(4800);
    const double base = rms(full, 2, 0);
    CHECK_NEAR(base, 0.5 / std::sqrt(2.0), 0.01);

    Rig r2(48000, 2);
    auto b2 = r2.make(F_VOL | F_PAN, 4800 * 4, pcm16(48000, 2));
    r2.write(b2, 0, sine16(4800, 2, 1000, 48000, 0.5));
    r2.dev->set_volume(b2, -600);   // -6 dB
    r2.dev->play(b2, 0, dsx::play_flag::looping);
    auto quiet = r2.render(4800);
    CHECK_NEAR(rms(quiet, 2, 0) / base, 0.5012, 0.003);

    r2.dev->set_pan(b2, 10000);     // full right: left silent, right untouched
    r2.render(512);                 // let any ramp settle
    auto panned = r2.render(4800);
    CHECK(rms(panned, 2, 0) < 1e-6);
    CHECK_NEAR(rms(panned, 2, 1) / base, 0.5012, 0.003);

    // Frequency: a 1 kHz tone at 24 kHz played at its own rate stays 1 kHz; with SetFrequency(48000) it sounds an octave up.
    Rig r3(48000, 2);
    auto b3 = r3.make(F_FREQ, 24000 * 4, pcm16(24000, 2));
    r3.write(b3, 0, sine16(24000, 2, 1000, 24000, 0.5));
    r3.dev->play(b3, 0, dsx::play_flag::looping);
    auto native = r3.render(24000);   // 0.5 s of output
    CHECK(std::abs(zero_crossings(native, 2, 0) - 1000) <= 4);
    r3.dev->set_frequency(b3, 48000);
    r3.render(1024);
    auto octave = r3.render(24000);
    CHECK(std::abs(zero_crossings(octave, 2, 0) - 2000) <= 8);

    // Master volume through the primary buffer.
    Rig r4(48000, 2);
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary | F_VOL;
    auto prim = r4.dev->create_buffer(pd);
    auto b4 = r4.make(0, 4800 * 4, pcm16(48000, 2));
    r4.write(b4, 0, sine16(4800, 2, 1000, 48000, 0.5));
    r4.dev->play(b4, 0, dsx::play_flag::looping);
    r4.dev->set_volume(prim.id, -2000);
    r4.render(512);
    CHECK_NEAR(rms(r4.render(4800), 2, 0) / base, 0.1, 0.002);
}

void test_resampling_quality() {
    // 44.1 kHz game ring to a 48 kHz device (the real situation of the NFSU2 default): amplitude and DC are preserved, error is small.
    Rig rig(48000, 2);
    const uint32_t n = 44100;   // exactly one second: the tone is periodic over the ring
    auto b = rig.make(0, n * 4, pcm16(44100, 2));
    rig.write(b, 0, sine16(n, 2, 1000, 44100, 0.5));
    rig.dev->play(b, 0, dsx::play_flag::looping);
    auto out = rig.render(48000);
    double max_err = 0;
    for (uint32_t i = 64; i < 48000 - 64; ++i) {
        const double ideal = 0.5 * std::sin(2.0 * 3.14159265358979 * 1000.0 * i / 48000.0);
        max_err = std::max(max_err, std::fabs(double(out[size_t(i) * 2]) - ideal));
    }
    CHECK(max_err < 0.005);   // 16-tap windowed sinc, about -40 dB worst case at 1 kHz; typically far less

    Rig dc(48000, 2);
    auto bd = dc.make(0, 2000 * 4, pcm16(22050, 2));
    std::vector<int16_t> flat(2000 * 2, 16384);
    dc.write(bd, 0, s16_bytes(flat));
    dc.dev->play(bd, 0, dsx::play_flag::looping);
    auto od = dc.render(6000);
    double worst = 0;
    for (size_t i = 200; i < 6000; ++i) worst = std::max(worst, std::fabs(double(od[i * 2]) - 0.5));
    CHECK(worst < 2e-3);   // unity gain at DC for every phase

    // Downsampling 96 kHz -> 48 kHz keeps the tone's amplitude.
    Rig ds(48000, 2);
    auto bs = ds.make(0, 96000 * 4, pcm16(96000, 2));
    ds.write(bs, 0, sine16(96000, 2, 1000, 96000, 0.5));
    ds.dev->play(bs, 0, dsx::play_flag::looping);
    CHECK_NEAR(rms(ds.render(48000), 2, 0), 0.5 / std::sqrt(2.0), 0.02);
}

void test_cursors_and_transport() {
    // Latency 480 frames (10 ms at 48 kHz), mixing block 256: exact expectations.
    Rig rig(48000, 2, 480, 256);
    auto b = rig.make(0, 48000 * 4, pcm16(48000, 2));   // 1 s ring
    uint32_t play = 1, write = 1, status = 0;
    CHECK(rig.dev->get_current_position(b, &play, &write) == dsx::hr::ok && play == 0 && write == 0);   // stopped: both cursors at the position
    CHECK(rig.dev->play(b, 1, 0) == dsx::hr::invalid_param);   // priority needs DSBPLAY_LOCDEFER
    CHECK(rig.dev->play(b, 0, dsx::play_flag::looping) == dsx::hr::ok);
    rig.render(4800);
    // 19 blocks of 256 were mixed (4864 frames); 64 of them wait in the output queue; the device holds 480 more.
    CHECK(rig.dev->get_current_position(b, &play, &write) == dsx::hr::ok);
    CHECK(play == (4864 - 480 - 64) * 4);
    CHECK(write == (4320 + 1440) * 4);   // 30 ms ahead of what is heard (Windows' margin, measured)
    CHECK(rig.dev->get_status(b, status) == dsx::hr::ok && status == (dsx::status_flag::playing | dsx::status_flag::looping));
    // Stop keeps the position where it was heard; Play resumes there.
    CHECK(rig.dev->stop(b) == dsx::hr::ok);
    rig.dev->get_current_position(b, &play, &write);
    CHECK(play == (4864 - 480 - 64) * 4 && write == play);
    rig.render(1000);
    uint32_t again = 0;
    rig.dev->get_current_position(b, &again, nullptr);
    CHECK(again == play);   // a stopped buffer does not move
    CHECK(rig.dev->set_current_position(b, 4000) == dsx::hr::ok);
    rig.dev->get_current_position(b, &again, nullptr);
    CHECK(again == 4000);
    CHECK(rig.dev->set_current_position(b, 48000 * 4) == dsx::hr::invalid_param);
    // Play of a playing buffer only changes looping; it does not restart.
    rig.dev->play(b, 0, dsx::play_flag::looping);
    rig.render(512);
    rig.dev->play(b, 0, 0);
    rig.dev->get_status(b, status);
    CHECK((status & dsx::status_flag::playing) && !(status & dsx::status_flag::looping));

    // A non-looping buffer plays to its end, stops and returns to the start; one-shot status clears.
    Rig r2(48000, 2, 0, 64);
    auto s = r2.make(0, 100 * 4, pcm16(48000, 2));
    std::vector<int16_t> ones(200, 10000);
    r2.write(s, 0, s16_bytes(ones));
    r2.dev->play(s, 0, 0);
    auto o = r2.render(300);
    CHECK(o[99 * 2] != 0.0f && o[100 * 2] == 0.0f);   // exactly 100 frames of sound
    r2.dev->get_status(s, status);
    CHECK(!(status & dsx::status_flag::playing));
    uint32_t pos = 5;
    r2.dev->get_current_position(s, &pos, nullptr);
    CHECK(pos == 0);

    // The output does not depend on how the caller chops its requests.
    Rig a(48000, 2, 100, 256), c(48000, 2, 100, 256);
    for (Rig* r : {&a, &c}) {
        auto id = r->make(F_VOL | F_FREQ, 3000 * 4, pcm16(44100, 2));
        r->write(id, 0, sine16(3000, 2, 440, 44100, 0.4));
        r->dev->set_volume(id, -300);
        r->dev->play(id, 0, dsx::play_flag::looping);
    }
    auto whole = a.render(7000);
    std::vector<float> chopped;
    for (uint32_t done = 0, step = 1; done < 7000; step = step % 97 + 13) {
        const uint32_t m = std::min<uint32_t>(step, 7000 - done);
        auto part = c.render(m);
        chopped.insert(chopped.end(), part.begin(), part.end());
        done += m;
    }
    CHECK(whole == chopped);
}

struct NotifyLog {
    std::vector<uint64_t> tokens;
    static void fn(void* user, uint64_t token) { static_cast<NotifyLog*>(user)->tokens.push_back(token); }
};

void test_notifications() {
    Rig rig(48000, 2, 0, 128);
    NotifyLog log;
    rig.dev->set_notify_callback(&NotifyLog::fn, &log);
    auto b = rig.make(F_NOTIFY, 4800 * 4, pcm16(48000, 2));
    CHECK(rig.dev->set_notifications(b, std::vector<dsx::Notify>{{1000 * 4, 11}, {3000 * 4, 33}, {dsx::notify_offset_stop, 99}}) == dsx::hr::ok);
    CHECK(rig.dev->set_notifications(b, std::vector<dsx::Notify>{{4800 * 4, 1}}) == dsx::hr::invalid_param);
    rig.dev->play(b, 0, dsx::play_flag::looping);
    CHECK(rig.dev->set_notifications(b, std::vector<dsx::Notify>{{4, 1}}) == dsx::hr::invalid_call);   // not while playing
    rig.render(1100);
    CHECK(log.tokens == std::vector<uint64_t>({11}));   // passed 1000, not 3000
    rig.render(2000);
    CHECK(log.tokens == std::vector<uint64_t>({11, 33}));
    rig.render(4800);   // a whole lap: each position once more
    CHECK(log.tokens == std::vector<uint64_t>({11, 33, 11, 33}));
    log.tokens.clear();
    rig.dev->stop(b);
    rig.render(1);
    CHECK(log.tokens == std::vector<uint64_t>({99}));   // DSBPN_OFFSETSTOP
    auto plain = rig.make(0, 400, pcm16(48000, 2));
    CHECK(rig.dev->set_notifications(plain, std::vector<dsx::Notify>{{0, 1}}) == dsx::hr::control_unavailable);
}

void test_duplicate() {
    Rig rig(48000, 2);
    auto a = rig.make(F_VOL, 400, pcm16(48000, 2));
    std::vector<int16_t> v(200, 8000);
    rig.write(a, 0, s16_bytes(v));
    rig.dev->set_volume(a, -600);
    auto dup = rig.dev->duplicate_buffer(a);
    CHECK(dup.hr == dsx::hr::ok && dup.id != a);
    int32_t vol = 0;
    CHECK(rig.dev->get_volume(dup.id, vol) == dsx::hr::ok && vol == -600);
    rig.dev->play(a, 0, dsx::play_flag::looping);
    rig.dev->play(dup.id, 0, dsx::play_flag::looping);
    auto o = rig.render(8);
    CHECK_NEAR(o[0], 2.0 * 8000.0 / 32768.0 * 0.5012, 1e-4);   // two voices of the same data add
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary;
    auto p = rig.dev->create_buffer(pd);
    CHECK(rig.dev->duplicate_buffer(p.id).hr == dsx::hr::invalid_param);
}

void test_multichannel_beds() {
    // 5.1 -> stereo: ITU downmix (centre and surrounds at -3 dB, LFE dropped).
    Rig rig(48000, 2);
    WaveFormat f = pcm16(48000, 6);
    f.channel_mask = speaker::surround_5_1;
    auto b = rig.make(0, 8 * 12, f);
    std::vector<int16_t> frame = {0, 0, 16384, 16384, 0, 0};   // FC and LFE at 0.5
    std::vector<int16_t> all;
    for (int i = 0; i < 8; ++i) all.insert(all.end(), frame.begin(), frame.end());
    rig.write(b, 0, s16_bytes(all));
    rig.dev->play(b, 0, dsx::play_flag::looping);
    auto o = rig.render(16);
    CHECK_NEAR(o[2 * 8], 0.5 * 0.70710678, 1e-5);
    CHECK_NEAR(o[2 * 8 + 1], 0.5 * 0.70710678, 1e-5);

    Rig r2(48000, 2);
    auto b2 = r2.make(0, 8 * 12, f);
    std::vector<int16_t> back = {0, 0, 0, 0, 16384, 0};   // BL only
    std::vector<int16_t> all2;
    for (int i = 0; i < 8; ++i) all2.insert(all2.end(), back.begin(), back.end());
    r2.write(b2, 0, s16_bytes(all2));
    r2.dev->play(b2, 0, dsx::play_flag::looping);
    auto o2 = r2.render(16);
    CHECK_NEAR(o2[16], 0.5 * 0.70710678, 1e-5);
    CHECK(o2[17] == 0.0f);

    // 5.1 -> 5.1: each channel stays on its speaker.
    Rig r3(48000, 6);
    r3.dev->set_renderer(std::shared_ptr<SpatialRenderer>(make_renderer(RendererKind::speakers)));
    auto b3 = r3.make(0, 8 * 12, f);
    std::vector<int16_t> distinct = {1000, 2000, 3000, 4000, 5000, 6000};
    std::vector<int16_t> all3;
    for (int i = 0; i < 8; ++i) all3.insert(all3.end(), distinct.begin(), distinct.end());
    r3.write(b3, 0, s16_bytes(all3));
    r3.dev->play(b3, 0, dsx::play_flag::looping);
    auto o3 = r3.render(16);
    bool same = true;
    for (int c = 0; c < 6; ++c) same = same && o3[size_t(8) * 6 + c] == float(distinct[c]) / 32768.0f;
    CHECK(same);

    // Stereo into 5.1 stays on the front pair (no invented surround).
    Rig r4(48000, 6);
    r4.dev->set_renderer(std::shared_ptr<SpatialRenderer>(make_renderer(RendererKind::speakers)));
    auto b4 = r4.make(0, 64 * 4, pcm16(48000, 2));
    r4.write(b4, 0, s16_bytes(std::vector<int16_t>(64 * 2, 16384)));
    r4.dev->play(b4, 0, dsx::play_flag::looping);
    auto o4 = r4.render(8);
    CHECK_NEAR(o4[2 * 6 + 0], 0.5, 1e-6);
    CHECK_NEAR(o4[2 * 6 + 1], 0.5, 1e-6);
    CHECK(o4[2 * 6 + 2] == 0.0f && o4[2 * 6 + 4] == 0.0f);
}

// ---- 3D ---------------------------------------------------------------------------------------------------------------------------------

std::vector<uint8_t> constant16(uint32_t frames, int16_t v) { return s16_bytes(std::vector<int16_t>(frames, v)); }

void test_ds3d() {
    Rig rig(48000, 2);
    auto b = rig.make(F_3D | F_VOL, 480 * 2, pcm16(48000, 1));
    rig.write(b, 0, constant16(480, 16384));   // 0.5
    rig.dev->play(b, 0, dsx::play_flag::looping);
    dsx::Buffer3D p;
    // In front at the minimum distance: both speakers at unity of the 2D level.
    p.position = {0, 0, 1};
    CHECK(rig.dev->set_buffer_3d(b, p) == dsx::hr::ok);
    auto o = rig.render(512);
    CHECK_NEAR(o[2 * 400], 0.5, 1e-4);
    CHECK_NEAR(o[2 * 400 + 1], 0.5, 1e-4);
    // To the right: left falls, right stays.
    p.position = {5, 0, 0.01f};
    p.min_distance = 5;
    rig.dev->set_buffer_3d(b, p);
    rig.render(512);
    o = rig.render(512);
    CHECK(o[2 * 400] < 0.05 && std::fabs(o[2 * 400 + 1] - 0.5) < 1e-3);
    // Distance: inverse law, -6 dB per doubling beyond the minimum.
    p = {};
    p.min_distance = 1;
    p.position = {0, 0, 1};
    rig.dev->set_buffer_3d(b, p);
    rig.render(512);
    const float near_level = rig.render(512)[2 * 400];
    p.position = {0, 0, 4};
    rig.dev->set_buffer_3d(b, p);
    rig.render(512);
    CHECK_NEAR(rig.render(512)[2 * 400] / near_level, 0.25, 1e-3);
    // Beyond max distance nothing more is lost; the linear model of the renderer is tested through the math below.
    p.position = {0, 0, 10000};
    p.max_distance = 100;
    rig.dev->set_buffer_3d(b, p);
    rig.render(512);
    CHECK_NEAR(rig.render(512)[2 * 400] / near_level, 0.01, 1e-4);
    // Cone: facing away gives the outside volume (-20 dB here).
    p = {};
    p.position = {0, 0, 2};
    p.cone_orientation = {0, 0, 1};   // pointing away from the listener at the origin (listener looks +z, source is at +z)
    p.inside_cone_angle = 60;
    p.outside_cone_angle = 90;
    p.cone_outside_volume = -2000;
    p.min_distance = 2;
    rig.dev->set_buffer_3d(b, p);
    rig.render(512);
    CHECK_NEAR(rig.render(512)[2 * 400] / 0.5, 0.1, 1e-3);
    // Disable mode: like a 2D buffer.
    p = {};
    p.position = {50, 0, 0};
    p.mode = dsx::Mode3D::disable;
    rig.dev->set_buffer_3d(b, p);
    rig.render(512);
    o = rig.render(512);
    CHECK_NEAR(o[2 * 400], 0.5, 1e-4);
    CHECK_NEAR(o[2 * 400 + 1], 0.5, 1e-4);
    // Parameter validation and gating.
    dsx::Buffer3D bad;
    bad.min_distance = 0;
    CHECK(rig.dev->set_buffer_3d(b, bad) == dsx::hr::invalid_param);
    auto flat = rig.make(0, 400, pcm16(48000, 1));
    CHECK(rig.dev->set_buffer_3d(flat, dsx::Buffer3D{}) == dsx::hr::control_unavailable);
    dsx::Listener3D l;
    l.doppler_factor = 11;
    CHECK(rig.dev->set_listener(l) == dsx::hr::invalid_param);
}

void test_doppler_and_listener() {
    // A 1 kHz source approaching at a tenth of the speed of sound plays 1/(1-0.1) times faster.
    Rig rig(48000, 2);
    auto b = rig.make(F_3D, 4800 * 2, pcm16(48000, 1));
    std::vector<int16_t> tone(4800);
    for (int i = 0; i < 4800; ++i) tone[size_t(i)] = int16_t(std::lrint(16000.0 * std::sin(2.0 * 3.14159265358979 * 1000.0 * i / 48000.0)));
    rig.write(b, 0, s16_bytes(tone));
    rig.dev->play(b, 0, dsx::play_flag::looping);
    dsx::Buffer3D p;
    p.position = {0, 0, 50};
    p.velocity = {0, 0, -34.3f};
    p.min_distance = 100;
    rig.dev->set_buffer_3d(b, p);
    auto out = rig.render(48000);
    CHECK(std::abs(zero_crossings(out, 2, 0) - int(2000 * (1.0 / 0.9))) <= 12);
    // A listener turned to face +x puts a source at +x straight ahead (centre) and a source at +z to the left.
    dsx::Listener3D l;
    l.front = {1, 0, 0};
    l.top = {0, 1, 0};
    rig.dev->set_listener(l);
    p.velocity = {0, 0, 0};
    p.position = {10, 0, 0};
    p.min_distance = 10;
    rig.dev->set_buffer_3d(b, p);
    rig.render(1024);
    auto ahead = rig.render(4800);
    CHECK_NEAR(rms(ahead, 2, 0), rms(ahead, 2, 1), 1e-4);
    p.position = {0, 0, 10};
    rig.dev->set_buffer_3d(b, p);
    rig.render(1024);
    auto side = rig.render(4800);
    CHECK(rms(side, 2, 0) > 5.0 * rms(side, 2, 1));   // facing +x, +z is on the left
}

// ---- spatial renderers ---------------------------------------------------------------------------------------------------------------------

struct Scene {
    std::unique_ptr<SpatialRenderer> r;
    OutputLayout out;
    Scene(RendererKind kind, uint32_t channels, const RendererOptions& o = {}) {
        r = make_renderer(kind, o);
        out = {48000, channels, speaker::default_mask(channels)};
        r->configure(out, 1024);
    }
    std::vector<float> object(const std::vector<float>& mono, Vec3 position, const ObjectParams* tweak = nullptr, SourceId id = 1) {
        ObjectParams p;
        if (tweak) p = *tweak;
        p.position = position;
        r->set_object(id, p);
        std::vector<float> out(mono.size() * out_channels(), 0.0f);
        for (size_t at = 0; at < mono.size(); at += 512) {
            const uint32_t n = uint32_t(std::min<size_t>(512, mono.size() - at));
            SourceBlock b;
            b.id = id;
            b.kind = SourceKind::object;
            b.data = mono.data() + at;
            b.channels = 1;
            r->render(std::span<const SourceBlock>(&b, 1), out.data() + at * out_channels(), n);
        }
        return out;
    }
    uint32_t out_channels() const { return out.channels; }
};

void test_spatial_math() {
    using namespace math;
    ObjectParams p;
    p.min_distance = 2;
    p.max_distance = 20;
    CHECK_NEAR(distance_gain(p, 1, 1), 1.0, 1e-6);
    CHECK_NEAR(distance_gain(p, 1, 4), 0.5, 1e-6);
    CHECK_NEAR(distance_gain(p, 2, 4), 2.0 / (2.0 + 2.0 * 2.0), 1e-6);   // global rolloff doubles the slope
    CHECK_NEAR(distance_gain(p, 1, 400), distance_gain(p, 1, 20), 1e-9);  // clamped at max
    p.model = DistanceModel::linear;
    CHECK_NEAR(distance_gain(p, 1, 11), 0.5, 1e-6);
    CHECK_NEAR(distance_gain(p, 1, 20), 0.0, 1e-6);
    p.model = DistanceModel::exponential;
    CHECK_NEAR(distance_gain(p, 1, 4), 0.5, 1e-6);   // (d/min)^-rolloff, rolloff 1
    p.model = DistanceModel::none;
    CHECK_NEAR(distance_gain(p, 1, 1000), 1.0, 1e-9);
    // Cone: angles are full cone angles; linear between inner and outer half-angles.
    ObjectParams c;
    c.cone_direction = {0, 0, 1};
    c.cone_inner_deg = 90;
    c.cone_outer_deg = 180;
    c.cone_outer_gain = 0.2f;
    CHECK_NEAR(cone_gain(c, {0, 0, 1}), 1.0, 1e-6);                 // on axis
    CHECK_NEAR(cone_gain(c, {0, 0, -1}), 0.2, 1e-6);                // behind
    CHECK_NEAR(cone_gain(c, {1, 0, 1}), 1.0, 1e-4);                 // 45 degrees = inner half-angle
    CHECK_NEAR(cone_gain(c, {1, 0, 0}), 0.2, 1e-4);                 // 90 degrees = the outer half-angle
    CHECK_NEAR(cone_gain(c, {0.9238795f, 0, 0.3826834f}), 0.6, 1e-3);   // 67.5 degrees: halfway between 45 and 90
    // Doppler: approaching at c/10.
    World w;
    CHECK_NEAR(doppler_ratio(w, {0, 0, 0}, {0, 0, 0}, {0, 0, 50}, {0, 0, -34.3f}), 1.0 / 0.9, 1e-3);
    CHECK_NEAR(doppler_ratio(w, {0, 0, 0}, {0, 0, 0}, {0, 0, 50}, {0, 0, 34.3f}), 1.0 / 1.1, 1e-3);
    w.doppler_factor = 0;
    CHECK(doppler_ratio(w, {0, 0, 0}, {0, 0, 0}, {0, 0, 50}, {0, 0, -34.3f}) == 1.0f);
    // Listener space (left-handed): default listener, +x is to the right, +z ahead.
    const Basis b = basis_of(Listener{});
    const Direction right = direction_of(to_listener_space(b, {3, 0, 0}));
    CHECK_NEAR(right.azimuth_deg, 90, 1e-3);
    CHECK_NEAR(right.lateral, 1, 1e-6);
    CHECK_NEAR(direction_of(to_listener_space(b, {0, 0, -2})).azimuth_deg, 180, 1e-3);
    CHECK_NEAR(direction_of(to_listener_space(b, {0, 2, 2})).elevation_deg, 45, 1e-3);
    // Pairwise panning conserves power at every azimuth, and puts a source on a speaker on that speaker.
    SpeakerList s51 = speakers_of(speaker::surround_5_1, 6);
    float g[8];
    for (int az = -180; az <= 180; az += 5) {
        pairwise_pan(s51, float(az), g);
        float power = 0;
        for (int i = 0; i < 6; ++i) power += g[i] * g[i];
        CHECK_NEAR(power, 1.0, 1e-4);
        CHECK(g[3] == 0.0f);   // LFE never gets an object
    }
    pairwise_pan(s51, 0, g);
    CHECK_NEAR(g[2], 1.0, 1e-6);
    pairwise_pan(s51, 30, g);
    CHECK_NEAR(g[1], 1.0, 1e-6);
    pairwise_pan(s51, 15, g);
    CHECK_NEAR(g[2], 0.70710678, 1e-5);
    CHECK_NEAR(g[1], 0.70710678, 1e-5);
    pairwise_pan(s51, 180, g);
    CHECK_NEAR(g[4], 0.70710678, 1e-5);   // behind: halfway between the two surrounds
    CHECK_NEAR(g[5], 0.70710678, 1e-5);
}

void test_stereo_and_speaker_renderers() {
    const auto n = noise(4096);
    // Stereo: straight ahead = both channels equal at unity; hard right = left silent; the near channel never exceeds unity.
    Scene st(RendererKind::stereo, 2);
    auto front = st.object(n, {0, 0, 1});
    CHECK_NEAR(rms(front, 2, 0), rms(front, 2, 1), 1e-6);
    CHECK_NEAR(rms(front, 2, 0), rms(n, 1, 0), 1e-5);
    auto right = st.object(n, {1, 0, 0}, nullptr, 2);
    CHECK(rms(right, 2, 0) < 1e-6);
    CHECK_NEAR(rms(right, 2, 1), rms(n, 1, 0), 1e-5);
    // Environment send: a reverb added to the output has energy after the dry signal ended; without it the output is silent.
    Scene dry(RendererKind::stereo, 2);
    std::vector<float> burst(4800, 0.0f);
    for (int i = 0; i < 200; ++i) burst[size_t(i)] = n[size_t(i)];
    burst.resize(48000, 0.0f);
    auto no_env = dry.object(burst, {0, 0, 1});
    CHECK(rms(no_env, 2, 0, 24000, 48000) == 0.0);
    ReverbParams rp;
    rp.enabled = true;
    rp.decay_time = 1.5f;
    rp.gain = 1.0f;
    rp.late_reverb_gain = 1.0f;
    dry.r->set_environment(rp);
    auto wet = dry.object(burst, {0, 0, 1}, nullptr, 3);
    (void)wet;   // the send path is checked in test_reverb

    // Speakers: front object lands on the centre channel, a source at +30 degrees on the front right, behind on both surrounds.
    Scene sp(RendererKind::speakers, 6);
    auto fc = sp.object(n, {0, 0, 1});
    CHECK_NEAR(rms(fc, 6, 2), rms(n, 1, 0), 1e-5);
    CHECK(rms(fc, 6, 0) < 1e-6 && rms(fc, 6, 1) < 1e-6 && rms(fc, 6, 4) < 1e-6);
    auto fr = sp.object(n, {0.5f, 0, 0.8660254f}, nullptr, 2);
    CHECK_NEAR(rms(fr, 6, 1), rms(n, 1, 0), 1e-4);
    CHECK(rms(fr, 6, 2) < 1e-4);
    auto back = sp.object(n, {0, 0, -1}, nullptr, 3);
    CHECK_NEAR(rms(back, 6, 4), rms(back, 6, 5), 1e-6);
    CHECK_NEAR(rms(back, 6, 4), rms(n, 1, 0) * 0.70710678, 1e-4);
    // A source moving across the front sweeps through the speakers without level jumps (power stays equal).
    Scene sweep(RendererKind::speakers, 6);
    std::vector<float> tone(512, 0.5f);
    double last = -1;
    bool smooth = true;
    for (int a = -90; a <= 90; a += 2) {
        const float rad = float(a) * math::deg2rad;
        auto o = sweep.object(tone, {std::sin(rad), 0, std::cos(rad)}, nullptr, 5);
        double power = 0;
        for (int c = 0; c < 6; ++c) power += rms(o, 6, size_t(c), 400, 512) * rms(o, 6, size_t(c), 400, 512);
        if (last >= 0) smooth = smooth && std::fabs(power - last) < 0.02;
        last = power;
    }
    CHECK(smooth);
}

// Index of the maximum of the cross-correlation of a (leading) and b over lags 0..max_lag: b[n] ~ a[n - lag].
int best_lag(const std::vector<float>& a, const std::vector<float>& b, int max_lag) {
    int best = 0;
    double best_value = -1e30;
    for (int lag = 0; lag <= max_lag; ++lag) {
        double s = 0;
        for (size_t i = size_t(lag) + 200; i < a.size() - 200; ++i) s += double(a[i - size_t(lag)]) * b[i];
        if (s > best_value) {
            best_value = s;
            best = lag;
        }
    }
    return best;
}

void test_binaural() {
    const auto n = noise(8192);
    Scene sc(RendererKind::binaural, 2);
    auto split = [](const std::vector<float>& o, std::vector<float>& l, std::vector<float>& r) {
        l.resize(o.size() / 2);
        r.resize(o.size() / 2);
        for (size_t i = 0; i < l.size(); ++i) {
            l[i] = o[i * 2];
            r[i] = o[i * 2 + 1];
        }
    };
    std::vector<float> l, r;
    // Front: no delay, no level difference.
    auto front = sc.object(n, {0, 0, 2});
    split(front, l, r);
    CHECK(best_lag(l, r, 3) == 0 && best_lag(r, l, 3) == 0);
    CHECK_NEAR(20.0 * std::log10(rms(front, 2, 1) / rms(front, 2, 0)), 0.0, 0.1);
    // Hard right: the right ear leads by the Woodworth ITD (0.0875/343 * (pi/2 + 1) s = 0.656 ms = 31.5 samples) and is >= 6 dB louder.
    auto side = sc.object(n, {2, 0, 0}, nullptr, 2);
    split(side, l, r);
    const int lag = best_lag(r, l, 80);   // l[n] ~ r[n - lag]
    CHECK(std::abs(lag - 31) <= 2);
    CHECK(20.0 * std::log10(rms(side, 2, 1) / rms(side, 2, 0)) >= 6.0);
    // Half way (30 degrees): between the two.
    auto mid = sc.object(n, {1, 0, 1.7320508f}, nullptr, 3);
    split(mid, l, r);
    const int lag30 = best_lag(r, l, 80);
    CHECK(lag30 > 3 && lag30 < lag);
    // Mirror symmetry: a source at -theta renders the same signal with the ears swapped (bit exact).
    auto leftside = sc.object(n, {-2, 0, 0}, nullptr, 4);
    bool mirrored = true;
    for (size_t i = 0; i < leftside.size() / 2; ++i) mirrored = mirrored && leftside[i * 2] == side[i * 2 + 1] && leftside[i * 2 + 1] == side[i * 2];
    CHECK(mirrored);
    // Sources behind are darker than in front (HF loss): compare energy of the first difference.
    auto hf = [&](const std::vector<float>& o) {
        double e = 0;
        for (size_t i = 1; i < o.size() / 2; ++i) {
            const double d = double(o[i * 2]) - o[(i - 1) * 2];
            e += d * d;
        }
        return e;
    };
    auto rear = sc.object(n, {0, 0, -2}, nullptr, 5);
    CHECK(hf(rear) < 0.9 * hf(front));
    // A 5.1 bed through virtual speakers: centre equal in both ears, front-left louder in the left ear, LFE equal in both.
    Scene bed(RendererKind::binaural, 2);
    auto render_bed = [&](int channel, SourceId id) {
        std::vector<float> data(size_t(4096) * 6, 0.0f);
        for (uint32_t i = 0; i < 4096; ++i) data[size_t(i) * 6 + size_t(channel)] = n[i];
        SourceBlock b;
        b.id = id;
        b.kind = SourceKind::bed;
        b.data = data.data();
        b.channels = 6;
        b.mask = speaker::surround_5_1;
        std::vector<float> out(4096 * 2, 0.0f);
        for (uint32_t at = 0; at < 4096; at += 512) {
            SourceBlock part = b;
            part.data = data.data() + size_t(at) * 6;
            bed.r->render(std::span<const SourceBlock>(&part, 1), out.data() + size_t(at) * 2, 512);
        }
        return out;
    };
    auto bc = render_bed(2, 10);
    CHECK_NEAR(rms(bc, 2, 0), rms(bc, 2, 1), 1e-5);
    auto bl = render_bed(0, 11);
    CHECK(rms(bl, 2, 0) > 1.3 * rms(bl, 2, 1));
    auto blfe = render_bed(3, 12);
    CHECK_NEAR(rms(blfe, 2, 0), rms(blfe, 2, 1), 1e-9);
    // With virtualisation off the bed is downmixed (centre at -3 dB in both channels).
    RendererOptions no_virtual;
    no_virtual.virtualize_beds = false;
    Scene plain(RendererKind::binaural, 2, no_virtual);
    {
        std::vector<float> data(size_t(512) * 6, 0.0f);
        for (uint32_t i = 0; i < 512; ++i) data[size_t(i) * 6 + 2] = 0.5f;
        SourceBlock b;
        b.id = 1;
        b.kind = SourceKind::bed;
        b.data = data.data();
        b.channels = 6;
        b.mask = speaker::surround_5_1;
        std::vector<float> out(512 * 2, 0.0f);
        plain.r->render(std::span<const SourceBlock>(&b, 1), out.data(), 512);
        CHECK_NEAR(out[100 * 2], 0.5 * 0.70710678, 1e-6);
        CHECK_NEAR(out[100 * 2 + 1], 0.5 * 0.70710678, 1e-6);
    }
}

// A synthetic measured-HRTF dataset: left ear a unit impulse at tap 0, right ear an impulse of 0.5 at tap 10, for every direction.
class FakeHrtf final : public HrtfDataset {
public:
    uint32_t sample_rate() const override { return 48000; }
    uint32_t length() const override { return 32; }
    void get(float, float, float* left, float* right) const override {
        for (int i = 0; i < 32; ++i) left[i] = right[i] = 0;
        left[0] = 1.0f;
        right[10] = 0.5f;
    }
};

void test_hrtf_dataset_and_platform_hook() {
    FakeHrtf hrtf;
    RendererOptions o;
    o.hrtf = &hrtf;
    Scene sc(RendererKind::binaural, 2, o);
    const auto n = noise(4096);
    auto out = sc.object(n, {0.6f, 0, 0.8f});   // unit distance: no distance attenuation
    bool ok = true;
    for (size_t i = 20; i < 4000; ++i) ok = ok && std::fabs(out[i * 2] - n[i]) < 1e-6 && std::fabs(out[i * 2 + 1] - 0.5f * n[i - 10]) < 1e-6;
    CHECK(ok);   // the dataset's responses are applied exactly (convolution plumbing)

    struct Fake final : PlatformSpatializer {
        bool on = true;
        int beds = 0, objects = 0, blocks = 0;
        bool available() const override { return on; }
        void submit_bed(SourceId, const float*, uint32_t, uint32_t, uint32_t, float) override { ++beds; }
        void submit_object(SourceId, const float*, uint32_t, const Vec3&, float) override { ++objects; }
        void set_listener(const Listener&) override {}
        void begin_block(uint32_t) override { ++blocks; }
        void end_block() override {}
    } fake;
    RendererOptions po;
    po.platform = &fake;
    Scene plat(RendererKind::platform, 2, po);
    CHECK(plat.r->caps().platform);
    auto silent = plat.object(n, {0, 0, 1});   // object -> platform; our output stays silent
    CHECK(rms(silent, 2, 0) == 0.0 && fake.objects > 0 && fake.blocks > 0);
    {
        std::vector<float> data(512 * 2, 0.1f);
        SourceBlock b;
        b.id = 7;
        b.kind = SourceKind::stereo2d;
        b.data = data.data();
        b.channels = 2;
        std::vector<float> o2(512 * 2, 0.0f);
        plat.r->render(std::span<const SourceBlock>(&b, 1), o2.data(), 512);
        CHECK(fake.beds == 1);
    }
    fake.on = false;   // platform spatializer absent: the fallback renderer produces sound
    auto fallback = plat.object(n, {0, 0, 1}, nullptr, 2);
    CHECK(!plat.r->caps().platform && rms(fallback, 2, 0) > 0.0);
}

// ---- reverb ---------------------------------------------------------------------------------------------------------------------------

// Schroeder backward integration -> reverberation time estimated from the -5..-25 dB slope.
double estimate_rt60(const std::vector<float>& x, size_t stride, size_t channel, double rate) {
    std::vector<double> edc(x.size() / stride);
    double acc = 0;
    for (size_t i = edc.size(); i-- > 0;) {
        const double v = x[i * stride + channel];
        acc += v * v;
        edc[i] = acc;
    }
    const double top = edc[0];
    int i5 = -1, i25 = -1;
    for (size_t i = 0; i < edc.size(); ++i) {
        const double db = 10.0 * std::log10(edc[i] / top + 1e-30);
        if (i5 < 0 && db <= -5.0) i5 = int(i);
        if (i25 < 0 && db <= -25.0) i25 = int(i);
    }
    if (i5 < 0 || i25 < 0) return -1;
    const double slope = -20.0 / (double(i25 - i5) / rate);   // dB per second
    return -60.0 / slope;
}

void test_reverb() {
    const uint32_t rate = 48000;
    for (float decay : {0.8f, 1.5f, 3.0f}) {
        Reverb rv;
        rv.configure(rate, 2, 4096);
        ReverbParams p;
        p.enabled = true;
        p.decay_time = decay;
        p.decay_hf_ratio = 1.0f;
        p.gain = 1.0f;
        p.late_reverb_gain = 1.0f;
        p.gain_hf = 1.0f;
        p.air_absorption_gain_hf = 1.0f;
        rv.set(p);
        std::vector<float> in(rate * 6, 0.0f), out(in.size() * 2, 0.0f);
        in[0] = 1.0f;
        for (size_t at = 0; at < in.size(); at += 4096) rv.process(in.data() + at, out.data() + at * 2, uint32_t(std::min<size_t>(4096, in.size() - at)));
        const double rt = estimate_rt60(out, 2, 0, rate);
        CHECK(rt > 0.75 * decay && rt < 1.3 * decay);
        // The tail carries energy but never explodes.
        double peak = 0;
        for (float v : out) peak = std::max(peak, double(std::fabs(v)));
        CHECK(peak < 1.0);
    }
    // High-frequency damping: decay_hf_ratio 0.3 leaves less high-frequency energy late in the tail than ratio 1.0.
    auto hf_tail = [&](float ratio) {
        Reverb rv;
        rv.configure(rate, 2, 4096);
        ReverbParams p;
        p.enabled = true;
        p.decay_time = 2.0f;
        p.decay_hf_ratio = ratio;
        p.gain = 1.0f;
        p.late_reverb_gain = 1.0f;
        p.gain_hf = 1.0f;
        p.air_absorption_gain_hf = 1.0f;
        rv.set(p);
        std::vector<float> in(rate * 3, 0.0f), out(in.size() * 2, 0.0f);
        in[0] = 1.0f;
        for (size_t at = 0; at < in.size(); at += 4096) rv.process(in.data() + at, out.data() + at * 2, uint32_t(std::min<size_t>(4096, in.size() - at)));
        double e = 0;
        for (size_t i = rate; i + 1 < rate * 2; ++i) {
            const double d = double(out[i * 2]) - out[(i - 1) * 2];
            e += d * d;
        }
        return e;
    };
    CHECK(hf_tail(0.3f) < 0.5 * hf_tail(1.0f));
    // Disabled: contributes nothing, bit exactly.
    Reverb off;
    off.configure(rate, 2, 256);
    std::vector<float> in(256, 1.0f), out(512, 0.25f);
    off.process(in.data(), out.data(), 256);
    bool untouched = true;
    for (float v : out) untouched = untouched && v == 0.25f;
    CHECK(untouched);
    // EAX 2.0 -> EFX mapping.
    Eax2Listener l;
    ReverbParams p = eax2_to_efx(l);
    CHECK(p.enabled && p.decay_time == 1.49f);
    CHECK_NEAR(p.gain, std::pow(10.0, -1000.0 / 2000.0), 1e-6);
    CHECK(p.air_absorption_gain_hf >= 0.892f && p.air_absorption_gain_hf <= 1.0f);   // EFX range; EAX's -5 dB is clamped to the strongest EFX value
    l.air_absorption_hf = 0.0f;
    CHECK(eax2_to_efx(l).air_absorption_gain_hf == 1.0f);
    Eax2Buffer b;
    EnvironmentSend s = eax2_to_send(b);
    CHECK(s.direct_gain == 1.0f && s.direct_gain_hf == 1.0f);
    b.obstruction = -1000;   // -10 dB at HF, LF ratio 0: the direct path loses only HF
    s = eax2_to_send(b);
    CHECK_NEAR(s.direct_gain, 1.0, 1e-6);
    CHECK_NEAR(s.direct_gain_hf, std::pow(10.0, -0.5), 1e-4);
    b.obstruction = 0;
    b.occlusion = -2000;     // occlusion: both direct and room are lowered, room by the room ratio
    s = eax2_to_send(b);
    CHECK(s.direct_gain < 1.0f && s.send_gain < s.direct_gain);
    // Through a renderer: a source with a send gain feeds the reverb, a source without it does not.
    Scene sc(RendererKind::stereo, 2);
    ReverbParams rp;
    rp.enabled = true;
    rp.decay_time = 1.0f;
    rp.gain = 1.0f;
    rp.late_reverb_gain = 1.0f;
    sc.r->set_environment(rp);
    std::vector<float> burst(24000, 0.0f);
    const auto nz = noise(256);
    for (int i = 0; i < 256; ++i) burst[size_t(i)] = nz[size_t(i)];
    auto run = [&](float send, SourceId id) {
        ObjectParams op;
        op.position = {0, 0, 1};
        sc.r->set_object(id, op);
        std::vector<float> out2(burst.size() * 2, 0.0f);
        for (size_t at = 0; at < burst.size(); at += 512) {
            SourceBlock blk;
            blk.id = id;
            blk.kind = SourceKind::object;
            blk.data = burst.data() + at;
            blk.channels = 1;
            blk.send.send_gain = send;
            sc.r->render(std::span<const SourceBlock>(&blk, 1), out2.data() + at * 2, uint32_t(std::min<size_t>(512, burst.size() - at)));
        }
        return out2;
    };
    auto dry = run(0.0f, 1);
    auto wet = run(1.0f, 2);
    CHECK(rms(dry, 2, 0, 12000, 24000) == 0.0);
    CHECK(rms(wet, 2, 0, 12000, 24000) > 0.0);
}

// ---- engine and determinism ------------------------------------------------------------------------------------------------------------

uint64_t scripted_session(uint32_t chunk, int* reopens = nullptr) {
    EngineConfig config;
    config.device.block_frames = 256;
    auto sink = std::make_unique<NullSink>(chunk, 480);
    NullSink* null = sink.get();
    Status st;
    auto engine = Engine::create(config, std::move(sink), &st);
    if (!engine) return 0;
    auto& d = engine->device();
    d.set_cooperative_level(2);
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary;
    auto prim = d.create_buffer(pd);
    // The game's own startup: primary format with 2 channels at 44.1 kHz, a 0.5 s secondary ring, silence, Play looping.
    d.set_format(prim.id, pcm16(44100, 2));
    dsx::BufferDesc sd;
    sd.flags = 0x18000;   // GETCURRENTPOSITION2 | GLOBALFOCUS
    sd.bytes = 22016 * 4;
    sd.has_format = true;
    sd.format = pcm16(44100, 2);
    auto ring = d.create_buffer(sd);
    engine->start();
    d.play(ring.id, 0, dsx::play_flag::looping);
    uint32_t cursor = 0;
    uint32_t written = 0;
    const uint32_t ring_bytes = 22016 * 4;
    for (int step = 0; step < 100; ++step) {   // 100 x 10 ms, refilling like the game's audio thread
        null->advance(480);
        d.get_current_position(ring.id, &cursor, nullptr);
        const uint32_t lead = (written + ring_bytes - cursor) % ring_bytes;
        const uint32_t want = 8820 * 4 / 2;   // keep about 100 ms ahead
        if (lead < want) {
            const uint32_t bytes = std::min<uint32_t>(want - lead, 3528 * 4);
            std::vector<uint8_t> tone(bytes);
            for (uint32_t i = 0; i + 3 < bytes; i += 4) {
                const double t = double((written + i) / 4) / 44100.0;
                const int16_t v = int16_t(std::lrint(9000.0 * std::sin(2.0 * 3.14159265358979 * 523.25 * t)));
                std::memcpy(&tone[i], &v, 2);
                std::memcpy(&tone[i + 2], &v, 2);
            }
            dsx::Regions r;
            if (d.lock(ring.id, written % ring_bytes, bytes, 0, r) == dsx::hr::ok)
                d.unlock(ring.id, r, dsx::as_bytes(tone.data(), r.bytes1), dsx::as_bytes(tone.data() + r.bytes1, r.bytes2));
            written = (written + bytes) % ring_bytes;
        }
    }
    if (reopens) *reopens = int(engine->reopen_count());
    return null->hash();
}

void test_engine() {
    // Same session, different sink chunking: the same bytes reach the device.
    const uint64_t a = scripted_session(480), b = scripted_session(480);
    CHECK(a != 0 && a == b);   // repeatable
    // The sink's block size changes only how often the mixer is asked, not what it produces (blocks of 480 vs 120: same stream of samples).
    // (The game-like loop above advances 480 frames at a time, so the data written between calls is identical.)
    CHECK(scripted_session(120) == a);
    std::printf("scripted session hash: 0x%016llx\n", static_cast<unsigned long long>(a));

    // The primary format follows into the sink: a 6-channel primary reopens the sink with 6 channels and the speaker renderer.
    EngineConfig config;
    auto sink = std::make_unique<NullSink>(256, 0);
    NullSink* null = sink.get();
    auto engine = Engine::create(config, std::move(sink));
    CHECK(engine && null->actual().channels == 2 && std::string(engine->renderer_name()) == "stereo");
    auto& d = engine->device();
    d.set_cooperative_level(2);
    dsx::BufferDesc pd;
    pd.flags = dsx::buffer_flag::primary;
    auto prim = d.create_buffer(pd);
    WaveFormat six = pcm16(44100, 6);
    six.channel_mask = speaker::surround_5_1;
    CHECK(d.set_format(prim.id, six) == dsx::hr::ok);
    CHECK(null->actual().channels == 6 && engine->reopen_count() == 1 && std::string(engine->renderer_name()) == "speakers");
    CHECK(d.set_format(prim.id, pcm16(44100, 2)) == dsx::hr::ok);   // and back
    CHECK(null->actual().channels == 2 && engine->reopen_count() == 2 && std::string(engine->renderer_name()) == "stereo");
    // A sink that cannot give 6 channels keeps what it has.
    struct Narrow final : AudioSink {
        NullSink inner{256, 0};
        Status open(const SinkDesc& desc, SinkCallback cb, void* user) override {
            SinkDesc narrowed = desc;
            narrowed.spec.channels = 2;
            narrowed.spec.channel_mask = speaker::stereo;
            return inner.open(narrowed, cb, user);
        }
        OutputLayout actual() const override { return inner.actual(); }
        Status start() override { return inner.start(); }
        Status stop() override { return inner.stop(); }
        void close() override { inner.close(); }
        bool running() const override { return inner.running(); }
        uint64_t frames_played() const override { return inner.frames_played(); }
        SinkLatency latency() const override { return inner.latency(); }
        SinkStats stats() const override { return inner.stats(); }
    };
    auto e2 = Engine::create(config, std::make_unique<Narrow>());
    auto& d2 = e2->device();
    d2.set_cooperative_level(2);
    auto p2 = d2.create_buffer(pd);
    CHECK(d2.set_format(p2.id, six) == dsx::hr::ok);   // the application's format is accepted whatever the speakers are
    CHECK(e2->sink().actual().channels == 2);

    // Null sink bookkeeping.
    NullSink ns(100, 40);
    SinkDesc desc;
    desc.spec = {48000, 2, speaker::stereo};
    ns.open(desc, [](void*, float* out, uint32_t n) { for (uint32_t i = 0; i < n * 2; ++i) out[i] = 0.5f; }, nullptr);
    ns.advance(1000);   // not started: nothing happens
    CHECK(ns.frames_rendered() == 0);
    ns.start();
    ns.advance(250);
    CHECK(ns.frames_rendered() == 250 && ns.frames_played() == 210);
    const uint64_t h1 = ns.hash();
    ns.reset_hash();
    ns.advance(100);
    CHECK(ns.hash() != h1);
}

}  // namespace

int main() {
    test_units();
    test_creation_and_validation();
    test_lock_semantics();
    test_exact_playback_and_formats();
    test_gain_pan_frequency();
    test_resampling_quality();
    test_cursors_and_transport();
    test_notifications();
    test_duplicate();
    test_multichannel_beds();
    test_ds3d();
    test_doppler_and_listener();
    test_spatial_math();
    test_stereo_and_speaker_renderers();
    test_binaural();
    test_hrtf_dataset_and_platform_hook();
    test_reverb();
    test_engine();
    std::printf("%s: %d checks, %d failures\n", g_failures ? "FAIL" : "PASS", g_checks, g_failures);
    return g_failures ? 1 : 0;
}
