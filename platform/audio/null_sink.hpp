// Deterministic sink for tests: there is no device and no thread. The test drives time with advance(frames); every block the callback
// produced is hashed (FNV-1a over the samples quantised to 16 bits, so the hash does not depend on float formatting) and optionally kept.
#pragma once
#include <vector>

#include "platform/audio/sink.hpp"

namespace nfsu2::platform::audio {

class NullSink final : public AudioSink {
public:
    explicit NullSink(uint32_t block_frames = 256, uint32_t simulated_latency_frames = 0) : block_(block_frames), latency_frames_(simulated_latency_frames) {}
    Status open(const SinkDesc& desc, SinkCallback callback, void* user) override;
    OutputLayout actual() const override { return spec_; }
    Status start() override { running_ = true; return Status::ok; }
    Status stop() override { running_ = false; return Status::ok; }
    void close() override { running_ = false; callback_ = nullptr; }
    bool running() const override { return running_; }
    uint64_t frames_played() const override { return played_ > latency_frames_ ? played_ - latency_frames_ : 0; }
    SinkLatency latency() const override;
    SinkStats stats() const override { return {played_, 0, peak_, 0}; }

    // Runs the callback for `frames` frames in blocks of `block_frames` (the last block may be shorter). No-op unless started.
    void advance(uint32_t frames);
    uint64_t hash() const { return hash_; }
    uint64_t frames_rendered() const { return played_; }
    void keep_samples(bool keep) { keep_ = keep; }
    const std::vector<float>& samples() const { return samples_; }   // interleaved, only when keep_samples(true)
    void reset_hash() { hash_ = 0xcbf29ce484222325ull; }

private:
    uint32_t block_, latency_frames_;
    OutputLayout spec_;
    SinkCallback callback_ = nullptr;
    void* user_ = nullptr;
    bool running_ = false, keep_ = false;
    uint64_t played_ = 0, hash_ = 0xcbf29ce484222325ull;
    float peak_ = 0;
    std::vector<float> scratch_, samples_;
};

}  // namespace nfsu2::platform::audio
