#include "platform/audio/nue/nue_sink.hpp"

#include <atomic>
#include <string>

#include "nue/audio.h"
#include "nue/core.h"
#include "platform/audio/host_sink.hpp"

namespace nfsu2::platform::audio {
namespace {

Status to_status(nue_result r) {
    if (NUE_SUCCEEDED(r)) return Status::ok;
    switch (r) {
        case NUE_ERR_INVALID_ARGUMENT:
        case NUE_ERR_INVALID_HANDLE: return Status::invalid_argument;
        case NUE_ERR_UNSUPPORTED: return Status::unsupported;
        case NUE_ERR_NOT_FOUND: return Status::not_found;
        case NUE_ERR_OUT_OF_MEMORY: return Status::out_of_memory;
        case NUE_ERR_DEVICE_LOST: return Status::device_lost;
        case NUE_ERR_TIMEOUT: return Status::timed_out;
        case NUE_ERR_WOULD_BLOCK: return Status::would_block;
        default: return Status::io_error;
    }
}

class NueSink final : public AudioSink {
public:
    explicit NueSink(bool init_engine_if_needed) : init_if_needed_(init_engine_if_needed) {}
    ~NueSink() override {
        close();
        if (owns_init_) nue_shutdown();
    }

    Status open(const SinkDesc& desc, SinkCallback callback, void* user) override {
        close();
        const uint32_t channels = desc.spec.channels;
        if (!callback || channels == 0 || channels > NUE_AUDIO_MAX_CHANNELS || desc.spec.sample_rate < 8000 || desc.spec.sample_rate > 384000) return Status::invalid_argument;
        if (channels == 3 || channels == 4 || channels == 5 || channels == 7) return Status::unsupported;   // no standard position in NUE's channel order
        if (!nue_is_initialized()) {
            if (!init_if_needed_) return Status::closed;
            nue_init_desc init;
            NUE_STRUCT_INIT(&init);
            init.api_version = NUE_API_VERSION;
            init.app_name = "NFS Underground 2";
            init.app_id = "nfsu2";
            init.org_name = "NUE";
            init.backend = NUE_BACKEND_AUTO;
            init.loop_model = NUE_LOOP_HOST;
            init.subsystems = NUE_SUBSYSTEM_EVENTS | NUE_SUBSYSTEM_AUDIO;
            init.flags = NUE_INIT_NO_LOG_FILE | NUE_INIT_NO_CRASH_HANDLER | NUE_INIT_NO_CONFIG_LOAD;
            init.log_level = NUE_LOG_WARN;
            const nue_result r = nue_init(&init);
            if (NUE_FAILED(r)) return to_status(r);
            owns_init_ = true;
        }

        callback_ = callback;
        user_ = user;
        nue_audio_stream_desc d;
        NUE_STRUCT_INIT(&d);
        d.device = 0;   // the system default, followed when it changes
        d.spec = {NUE_AUDIO_F32, channels, desc.spec.sample_rate};
        d.flags = NUE_AUDIO_START_PAUSED | NUE_AUDIO_KEEP_RUNNING_IN_BACKGROUND | (desc.low_latency ? NUE_AUDIO_LOW_LATENCY : 0u) |
                  (desc.exact_format ? NUE_AUDIO_EXACT_FORMAT : 0u);
        d.callback = &NueSink::trampoline;
        d.userdata = this;
        d.latency_ms = desc.latency_ms;
        name_ = std::string(desc.name);
        d.name = name_.c_str();
        nue_audio_stream stream = nullptr;
        const nue_result r = nue_audio_stream_create(&d, &stream);
        if (NUE_FAILED(r)) {
            callback_ = nullptr;
            return to_status(r);
        }
        stream_ = stream;
        nue_audio_spec app{}, device{};
        actual_ = desc.spec;
        if (NUE_SUCCEEDED(nue_audio_stream_get_spec(stream_, &app, &device)) && app.channels == channels) actual_.sample_rate = app.sample_rate;
        actual_.channel_mask = speaker::default_mask(channels);
        return Status::ok;
    }

    OutputLayout actual() const override { return actual_; }
    Status start() override { return stream_ ? to_status(nue_audio_stream_start(stream_)) : Status::closed; }
    Status stop() override { return stream_ ? to_status(nue_audio_stream_stop(stream_)) : Status::closed; }
    void close() override {
        if (!stream_) return;
        nue_audio_stream_destroy(stream_);   // stops and waits for the audio thread to leave the callback
        stream_ = nullptr;
        callback_ = nullptr;
    }
    bool running() const override { return stream_ && nue_audio_stream_is_running(stream_) != NUE_FALSE; }
    uint64_t frames_played() const override {
        uint64_t frames = 0;
        int64_t when = 0;
        if (stream_ && NUE_SUCCEEDED(nue_audio_stream_get_position(stream_, &frames, &when))) return frames;
        return 0;
    }
    SinkLatency latency() const override {
        SinkLatency l;
        nue_audio_latency q;
        NUE_STRUCT_INIT(&q);
        if (stream_ && NUE_SUCCEEDED(nue_audio_stream_get_latency(stream_, &q))) {
            l.device_buffer_frames = q.device_buffer_frames;
            l.device_latency_ns = q.device_latency_ns;
            l.total_latency_ns = q.total_latency_ns;
        }
        return l;
    }
    SinkStats stats() const override {
        SinkStats s;
        nue_audio_stream_stats q;
        NUE_STRUCT_INIT(&q);
        if (stream_ && NUE_SUCCEEDED(nue_audio_stream_get_stats(stream_, &q))) {
            s.frames_played = q.frames_played;
            s.underruns = q.underruns;
            s.peak_level = q.peak_level;
            s.cpu_load = q.cpu_load;
        }
        return s;
    }

private:
    static void NUE_CALL trampoline(void* self, void* out, uint32_t frames) {
        NueSink* sink = static_cast<NueSink*>(self);
        sink->callback_(sink->user_, static_cast<float*>(out), frames);
    }

    bool init_if_needed_;
    bool owns_init_ = false;
    nue_audio_stream stream_ = nullptr;
    SinkCallback callback_ = nullptr;
    void* user_ = nullptr;
    OutputLayout actual_;
    std::string name_;
};

}  // namespace

std::unique_ptr<AudioSink> make_nue_sink(bool init_engine_if_needed) { return std::make_unique<NueSink>(init_engine_if_needed); }

void register_nue_host_sink(bool init_engine_if_needed) {
    register_host_sink(HostSink::nue, [init_engine_if_needed] { return make_nue_sink(init_engine_if_needed); });
}

}  // namespace nfsu2::platform::audio
