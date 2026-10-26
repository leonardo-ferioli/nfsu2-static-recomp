// Audio sink: the one place where the audio layer meets an output device. Shaped like NUE's native audio API (include/nue/audio.h):
// a stream with a pull callback (nue_audio_stream_desc.callback), position/latency/statistics queries (nue_audio_stream_get_position,
// _get_latency, _get_stats) and an application format of interleaved float32 that the sink converts to what the device wants.
// A NUE implementation is a ten-line adapter over nue_audio_stream_create; the WASAPI sink here and the null sink are the two used today.
#pragma once
#include <cstdint>
#include <string_view>

#include "platform/audio/audio_types.hpp"
#include "platform/types.hpp"

namespace nfsu2::platform::audio {

// [audio thread] Fill `frames` frames of interleaved float32 in the sink's format. Always fill the whole block (silence if nothing to play).
// Real-time rules as in nue_audio_callback: no allocation, no I/O, no logging.
using SinkCallback = void (*)(void* user, float* out, uint32_t frames);

struct SinkDesc {
    OutputLayout spec;               // what the application wants to produce; the sink may report a different `actual` layout
    uint32_t latency_ms = 40;        // target total latency (device buffer + queue), 0 = sink default (nue_audio_stream_desc.latency_ms)
    bool low_latency = false;        // NUE_AUDIO_LOW_LATENCY
    bool exact_format = false;       // fail instead of letting the device convert (NUE_AUDIO_EXACT_FORMAT); used by tests
    std::string_view name = "audio"; // shown in OS mixers
};

struct SinkLatency {
    uint32_t device_buffer_frames = 0;
    uint64_t device_latency_ns = 0;   // from handing a frame to the device to hearing it
    uint64_t total_latency_ns = 0;
};

struct SinkStats {
    uint64_t frames_played = 0;       // total frames the device consumed since start
    uint64_t underruns = 0;           // times the device found nothing to play / the callback was late
    float peak_level = 0;             // peak |sample| over the last block
    float cpu_load = 0;               // callback time / available time, rolling
};

// Thread: open/close/start/stop from one controlling thread; the queries are callable from any thread; the callback runs on the sink's thread.
class AudioSink {
public:
    virtual ~AudioSink() = default;
    // Opens (but does not start) a stream. After a successful open `actual()` is the format the callback will be asked for; it equals
    // `desc.spec` unless the sink had to choose another one (then the caller re-configures its renderer).
    virtual Status open(const SinkDesc& desc, SinkCallback callback, void* user) = 0;
    virtual OutputLayout actual() const = 0;
    virtual Status start() = 0;
    virtual Status stop() = 0;      // pause: keeps the position
    virtual void close() = 0;       // waits for the audio thread to leave the callback
    virtual bool running() const = 0;
    // Device clock: frames the device has consumed (nue_audio_stream_get_position).
    virtual uint64_t frames_played() const = 0;
    virtual SinkLatency latency() const = 0;
    virtual SinkStats stats() const = 0;
};

}  // namespace nfsu2::platform::audio
