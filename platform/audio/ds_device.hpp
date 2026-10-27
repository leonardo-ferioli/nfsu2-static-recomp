// Level A of the DirectSound layer: "what the game says", with DirectSound's semantics, as a handle-based C++ interface.
//   - no guest pointer, no COM object, no Windows type: buffers are `BufferId`, bytes cross as spans valid for the call,
//   - results are DirectSound's HRESULT values as plain integers (the published constants), so that the facade passes them through,
//   - nothing about any game.
// Implementation: MixerDevice (ds_device.cpp), a software mixer shaped like nue/mixer.h (static/ring voices with play and write cursors,
// volume in hundredths of dB, pan, frequency, notification positions, 3D listener and buffers) that renders float32 through a SpatialRenderer.
// It never touches the system DirectSound. The output side is pulled: an AudioSink (or a test) calls render().
//
// Thread: every method may be called from any thread (one internal mutex); render() is the mix thread. Lock/Unlock never block on the mixer
// for longer than one block.
#pragma once
#include <cstdint>
#include <memory>
#include <span>

#include "platform/audio/audio_types.hpp"
#include "platform/audio/spatial.hpp"
#include "platform/types.hpp"

namespace nfsu2::platform::audio::ds {

using Hr = int32_t;

// A span of host bytes for Unlock (host memory only: guest addresses never reach this layer).
inline Bytes as_bytes(const void* data, size_t size) { return Bytes(static_cast<const std::byte*>(data), size); }
constexpr bool succeeded(Hr h) { return h >= 0; }

// DirectSound HRESULTs (dsound.h; the values Windows returns).
namespace hr {
constexpr Hr ok = 0;
constexpr Hr allocated = Hr(0x8878000A), control_unavailable = Hr(0x8878001E), invalid_call = Hr(0x88780032), priority_level_needed = Hr(0x88780046),
             bad_format = Hr(0x88780064), no_driver = Hr(0x88780078), already_initialized = Hr(0x88780082), buffer_lost = Hr(0x88780096),
             other_app_has_priority = Hr(0x887800A0), uninitialized = Hr(0x887800AA), buffer_too_small = Hr(0x887800B4);
constexpr Hr invalid_param = Hr(0x80070057), out_of_memory = Hr(0x8007000E), unsupported = Hr(0x80004001), no_interface = Hr(0x80004002),
             generic = Hr(0x80004005), no_aggregation = Hr(0x80040110), access_denied = Hr(0x80070005);
}  // namespace hr

// DirectSound flag values (dsound.h).
namespace caps_flag {
constexpr uint32_t primary_mono = 0x1, primary_stereo = 0x2, primary_8bit = 0x4, primary_16bit = 0x8, continuous_rate = 0x10, emul_driver = 0x20,
                   secondary_mono = 0x100, secondary_stereo = 0x200, secondary_8bit = 0x400, secondary_16bit = 0x800;
}
namespace buffer_flag {
constexpr uint32_t primary = 0x1, static_buffer = 0x2, loc_hardware = 0x4, loc_software = 0x8, ctrl_3d = 0x10, ctrl_frequency = 0x20, ctrl_pan = 0x40,
                   ctrl_volume = 0x80, ctrl_position_notify = 0x100, ctrl_fx = 0x200, sticky_focus = 0x4000, global_focus = 0x8000,
                   get_current_position2 = 0x10000, mute_3d_at_max_distance = 0x20000, loc_defer = 0x40000;
}
namespace status_flag {
constexpr uint32_t playing = 0x1, buffer_lost = 0x2, looping = 0x4, loc_hardware = 0x8, loc_software = 0x10, terminated = 0x20;
}
namespace play_flag { constexpr uint32_t looping = 0x1; }
namespace lock_flag { constexpr uint32_t from_write_cursor = 0x1, entire_buffer = 0x2; }
namespace coop { constexpr uint32_t normal = 1, priority = 2, exclusive = 3, write_primary = 4; }
constexpr int32_t volume_min = -10000, volume_max = 0, pan_left = -10000, pan_right = 10000;
constexpr uint32_t frequency_min = 100, frequency_max = 200000, size_min = 4, size_max = 0x0FFFFFFF;
constexpr uint32_t notify_offset_stop = 0xFFFFFFFFu;   // DSBPN_OFFSETSTOP

using BufferId = Id<struct DsBufferTag>;

struct Caps {
    uint32_t flags = 0;
    uint32_t min_secondary_rate = frequency_min, max_secondary_rate = frequency_max;
    uint32_t primary_buffers = 1;
    uint32_t max_hw_buffers = 0;   // no hardware voices: everything is mixed in software
};

struct BufferDesc {
    uint32_t flags = 0;
    uint32_t bytes = 0;
    bool has_format = false;       // a secondary buffer needs one; the primary must not have one
    WaveFormat format;
};

struct BufferCaps {
    uint32_t flags = 0, bytes = 0;
};

struct CreateResult {
    Hr hr = hr::generic;
    BufferId id;
    bool existing_primary = false;   // CreateSoundBuffer for the primary returns the same object again; the facade AddRefs it
};

// Where a Lock landed: byte offsets into the buffer (the facade stages the bytes in guest memory and hands them back at Unlock).
struct Regions {
    uint32_t offset1 = 0, bytes1 = 0, offset2 = 0, bytes2 = 0;
};

struct Notify {
    uint32_t offset = 0;     // byte offset, or notify_offset_stop
    uint64_t token = 0;      // opaque to the device (the facade stores a guest event handle)
};
using NotifyFn = void (*)(void* user, uint64_t token);   // runs on the mix thread, outside the device lock; should only signal
using FormatChangedFn = void (*)(void* user, const WaveFormat& primary);   // after a successful primary SetFormat, outside the lock

struct Listener3D {
    Vec3 position{0, 0, 0}, velocity{0, 0, 0}, front{0, 0, 1}, top{0, 1, 0};
    float distance_factor = 1.0f, rolloff_factor = 1.0f, doppler_factor = 1.0f;
};
enum class Mode3D : uint32_t { normal = 0, head_relative = 1, disable = 2 };
struct Buffer3D {
    Vec3 position{0, 0, 0}, velocity{0, 0, 0};
    uint32_t inside_cone_angle = 360, outside_cone_angle = 360;
    Vec3 cone_orientation{0, 0, 1};
    int32_t cone_outside_volume = 0;   // hundredths of dB
    float min_distance = 1.0f, max_distance = 1e9f;
    Mode3D mode = Mode3D::normal;
};

struct Config {
    uint32_t max_buffers = 128;
    uint32_t block_frames = 256;           // mixing granularity; also the safety margin of the write cursor
    uint32_t write_margin_ms = 30;         // the write cursor is at least this far ahead of the play cursor (Windows: about 30 ms, measured)
    uint32_t max_primary_channels = 8;     // SetFormat on the primary refuses more (the game probes the channel count this way)
    uint32_t max_primary_rate = 200000;
    uint32_t default_rate = 44100;         // primary format before the application sets one
    uint32_t default_channels = 2;
};

struct DeviceStats {
    uint32_t buffers = 0, playing = 0;
    uint64_t blocks_mixed = 0, clipped_samples = 0, underruns = 0;   // underrun: a looping/ring voice played over data nobody had rewritten (never counted for static)
    float peak = 0;
};

class Device {
public:
    virtual ~Device() = default;

    // ---- IDirectSound
    virtual Hr set_cooperative_level(uint32_t level) = 0;
    // A new DirectSound object after the last one was released: destroys every buffer and restores the defaults (cooperative level, primary
    // format, listener, environment).
    virtual void reset() = 0;
    virtual Caps caps() const = 0;
    virtual CreateResult create_buffer(const BufferDesc& desc) = 0;
    virtual CreateResult duplicate_buffer(BufferId source) = 0;
    virtual void destroy_buffer(BufferId id) = 0;   // last Release()

    // ---- IDirectSoundBuffer (primary and secondary)
    virtual Hr set_format(BufferId id, const WaveFormat& format) = 0;   // primary only
    virtual Hr get_format(BufferId id, WaveFormat& out) const = 0;
    virtual Hr get_caps(BufferId id, BufferCaps& out) const = 0;
    virtual Hr lock(BufferId id, uint32_t offset, uint32_t bytes, uint32_t flags, Regions& out) = 0;
    // `part1`/`part2` are the bytes the application wrote into the regions Lock returned (sizes equal to the regions' bytes).
    virtual Hr unlock(BufferId id, const Regions& regions, Bytes part1, Bytes part2) = 0;
    virtual Hr play(BufferId id, uint32_t priority, uint32_t flags) = 0;
    virtual Hr stop(BufferId id) = 0;
    virtual Hr get_status(BufferId id, uint32_t& out) const = 0;
    virtual Hr get_current_position(BufferId id, uint32_t* play_cursor, uint32_t* write_cursor) const = 0;
    virtual Hr set_current_position(BufferId id, uint32_t byte_position) = 0;
    virtual Hr restore(BufferId id) = 0;
    virtual Hr set_volume(BufferId id, int32_t millibels) = 0;
    virtual Hr get_volume(BufferId id, int32_t& out) const = 0;
    virtual Hr set_pan(BufferId id, int32_t millibels) = 0;
    virtual Hr get_pan(BufferId id, int32_t& out) const = 0;
    virtual Hr set_frequency(BufferId id, uint32_t hz) = 0;   // 0 = the buffer's own rate
    virtual Hr get_frequency(BufferId id, uint32_t& out) const = 0;
    virtual Hr set_notifications(BufferId id, std::span<const Notify> positions) = 0;   // empty clears

    // ---- 3D (IDirectSound3DListener / IDirectSound3DBuffer) and environment (what EAX maps to)
    virtual Hr set_listener(const Listener3D& listener) = 0;
    virtual Listener3D listener() const = 0;
    virtual Hr set_buffer_3d(BufferId id, const Buffer3D& params) = 0;
    virtual Hr get_buffer_3d(BufferId id, Buffer3D& out) const = 0;
    virtual void set_environment(const ReverbParams& params) = 0;
    virtual Hr set_buffer_send(BufferId id, const EnvironmentSend& send) = 0;

    // ---- Output side
    // Declares the format `render` produces and the largest chunk it will be asked for; `latency_frames` is what the sink adds between render
    // and the speaker (the play cursor is reported that far behind what was mixed).
    virtual void set_output(const OutputLayout& layout, uint32_t latency_frames) = 0;
    virtual OutputLayout output() const = 0;
    virtual void set_renderer(std::shared_ptr<SpatialRenderer> renderer) = 0;
    virtual void set_notify_callback(NotifyFn fn, void* user) = 0;
    virtual void set_format_callback(FormatChangedFn fn, void* user) = 0;
    // [mix thread] Mixes `frames` frames of interleaved float32 in the output layout (overwrites `out`).
    virtual void render(float* out, uint32_t frames) = 0;
    virtual DeviceStats stats() const = 0;
    // Test hook: marks every buffer lost, as when the application loses focus (Lock/Play then return buffer_lost until restore()).
    virtual void lose_buffers() = 0;
};

std::unique_ptr<Device> make_device(const Config& config = {});

// Unit conversions shared with the tests and the facade.
float millibels_to_amplitude(int32_t millibels);          // 10^(mB/2000); <= -10000 is silence
void pan_gains(int32_t pan_millibels, float& left, float& right);

}  // namespace nfsu2::platform::audio::ds
