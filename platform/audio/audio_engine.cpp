#include "platform/audio/audio_engine.hpp"

#include <algorithm>

namespace nfsu2::platform::audio {

std::unique_ptr<Engine> Engine::create(const EngineConfig& config, std::unique_ptr<AudioSink> sink, Status* status) {
    std::unique_ptr<Engine> e(new Engine());
    e->cfg_ = config;
    e->device_ = ds::make_device(config.device);
    e->sink_ = std::move(sink);
    SinkDesc desc;
    desc.spec = {config.sample_rate, 2, speaker::stereo};
    desc.latency_ms = config.latency_ms;
    desc.name = "NFS Underground 2";
    const Status s = e->sink_->open(desc, &Engine::pull, e.get());
    if (status) *status = s;
    if (s != Status::ok) return nullptr;
    e->device_->set_format_callback(&Engine::primary_changed, e.get());
    e->apply_output(e->sink_->actual());
    return e;
}

Engine::~Engine() { shutdown(); }

void Engine::choose_renderer(const OutputLayout& actual) {
    RendererKind kind = RendererKind::stereo;
    switch (cfg_.spatial) {
        case SpatialMode::stereo: kind = RendererKind::stereo; break;
        case SpatialMode::speakers: kind = RendererKind::speakers; break;
        case SpatialMode::binaural: kind = RendererKind::binaural; break;
        case SpatialMode::automatic: kind = actual.channels > 2 ? RendererKind::speakers : RendererKind::stereo; break;
    }
    renderer_ = std::shared_ptr<SpatialRenderer>(make_renderer(kind, cfg_.renderer_options));
    device_->set_renderer(renderer_);
}

void Engine::apply_output(const OutputLayout& actual) {
    choose_renderer(actual);
    const SinkLatency l = sink_->latency();
    const uint32_t latency_frames = uint32_t(l.device_latency_ns * actual.sample_rate / 1000000000ull);
    device_->set_output(actual, latency_frames);
}

Status Engine::start() {
    if (started_) return Status::ok;
    const Status s = sink_->start();
    started_ = (s == Status::ok);
    return s;
}

void Engine::shutdown() {
    if (!sink_) return;
    sink_->stop();
    sink_->close();
    started_ = false;
}

const char* Engine::renderer_name() const { return renderer_ ? renderer_->name() : "none"; }

void Engine::pull(void* self, float* out, uint32_t frames) { static_cast<Engine*>(self)->device_->render(out, frames); }

void Engine::primary_changed(void* self, const WaveFormat& format) {
    Engine& e = *static_cast<Engine*>(self);
    if (!e.cfg_.follow_primary_channels || !e.sink_) return;
    const OutputLayout now = e.sink_->actual();
    const uint32_t want = std::clamp<uint32_t>(format.channels, 2u, 8u);   // a mono primary still plays on both speakers
    if (want == now.channels) return;
    const bool was_running = e.started_;
    e.sink_->stop();
    e.sink_->close();
    SinkDesc desc;
    desc.spec = {now.sample_rate, want, speaker::default_mask(want)};
    desc.latency_ms = e.cfg_.latency_ms;
    desc.name = "NFS Underground 2";
    if (e.sink_->open(desc, &Engine::pull, &e) != Status::ok) {
        // Could not open the wider layout: go back to what worked.
        desc.spec = now;
        if (e.sink_->open(desc, &Engine::pull, &e) != Status::ok) return;
    }
    e.apply_output(e.sink_->actual());
    ++e.reopens_;
    if (was_running) e.sink_->start();
}

}  // namespace nfsu2::platform::audio
