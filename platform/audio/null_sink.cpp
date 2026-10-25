#include "platform/audio/null_sink.hpp"

#include <algorithm>
#include <cmath>

namespace nfsu2::platform::audio {

Status NullSink::open(const SinkDesc& desc, SinkCallback callback, void* user) {
    if (!callback || desc.spec.channels == 0 || desc.spec.channels > 8 || desc.spec.sample_rate < 8000) return Status::invalid_argument;
    spec_ = desc.spec;
    callback_ = callback;
    user_ = user;
    scratch_.assign(size_t(block_) * spec_.channels, 0.0f);
    played_ = 0;
    reset_hash();
    return Status::ok;
}

SinkLatency NullSink::latency() const {
    SinkLatency l;
    l.device_buffer_frames = block_;
    l.device_latency_ns = spec_.sample_rate ? uint64_t(latency_frames_) * 1000000000ull / spec_.sample_rate : 0;
    l.total_latency_ns = l.device_latency_ns;
    return l;
}

void NullSink::advance(uint32_t frames) {
    if (!running_ || !callback_) return;
    while (frames) {
        const uint32_t n = std::min(frames, block_);
        std::fill(scratch_.begin(), scratch_.begin() + size_t(n) * spec_.channels, 0.0f);
        callback_(user_, scratch_.data(), n);
        const size_t count = size_t(n) * spec_.channels;
        float peak = 0;
        for (size_t i = 0; i < count; ++i) {
            const float v = scratch_[i];
            peak = std::max(peak, std::fabs(v));
            const float clamped = std::clamp(v, -1.0f, 1.0f);
            const auto q = uint16_t(int16_t(std::lrintf(clamped * 32767.0f)));
            hash_ = (hash_ ^ (q & 0xffu)) * 0x100000001b3ull;
            hash_ = (hash_ ^ (q >> 8)) * 0x100000001b3ull;
        }
        peak_ = peak;
        if (keep_) samples_.insert(samples_.end(), scratch_.begin(), scratch_.begin() + count);
        played_ += n;
        frames -= n;
    }
}

}  // namespace nfsu2::platform::audio
