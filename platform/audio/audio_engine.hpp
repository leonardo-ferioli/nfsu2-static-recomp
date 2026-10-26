// Audio engine: ties a ds::Device (DirectSound semantics), a SpatialRenderer and an AudioSink into one running output. This is the object a
// program creates; the facade (game-specific) only ever talks to engine.device().
#pragma once
#include <memory>

#include "platform/audio/ds_device.hpp"
#include "platform/audio/sink.hpp"

namespace nfsu2::platform::audio {

enum class SpatialMode { automatic, stereo, speakers, binaural };

struct EngineConfig {
    ds::Config device;
    uint32_t sample_rate = 48000;        // what the engine asks the sink for (the sink may answer with the device's rate)
    uint32_t latency_ms = 40;
    SpatialMode spatial = SpatialMode::automatic;   // automatic: stereo for two channels, speakers for more
    bool follow_primary_channels = true; // when the application sets a 4/6 channel primary format, ask the sink for that many channels (falls back to its own layout)
    RendererOptions renderer_options;
};

class Engine {
public:
    // Opens the sink (not started). Returns nullptr and sets `status` if the sink cannot open.
    static std::unique_ptr<Engine> create(const EngineConfig& config, std::unique_ptr<AudioSink> sink, Status* status = nullptr);
    ~Engine();
    Engine(const Engine&) = delete;
    Engine& operator=(const Engine&) = delete;

    Status start();
    void shutdown();                      // stops and closes the sink; the device stays usable for inspection
    ds::Device& device() { return *device_; }
    AudioSink& sink() { return *sink_; }
    const char* renderer_name() const;
    uint32_t reopen_count() const { return reopens_; }   // times the sink was reopened to follow a new primary format

private:
    Engine() = default;
    static void pull(void* self, float* out, uint32_t frames);
    static void primary_changed(void* self, const WaveFormat& format);
    void apply_output(const OutputLayout& actual);
    void choose_renderer(const OutputLayout& actual);

    EngineConfig cfg_;
    std::unique_ptr<ds::Device> device_;
    std::unique_ptr<AudioSink> sink_;
    std::shared_ptr<SpatialRenderer> renderer_;
    bool started_ = false;
    uint32_t reopens_ = 0;
};

}  // namespace nfsu2::platform::audio
