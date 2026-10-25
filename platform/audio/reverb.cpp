#include "platform/audio/reverb.hpp"

#include <algorithm>
#include <cmath>

namespace nfsu2::platform::audio {
namespace {
// Delay lengths in samples at 48 kHz: mutually prime, from 28 ms to 64 ms, so the modal density is high without audible ringing.
constexpr uint32_t base_lengths[8] = {1327, 1601, 1811, 2053, 2287, 2539, 2819, 3067};
}  // namespace

float millibels_to_gain(int32_t millibels) { return std::pow(10.0f, float(millibels) / 2000.0f); }

void Reverb::configure(uint32_t sample_rate, uint32_t out_channels, uint32_t) {
    rate_ = std::max<uint32_t>(sample_rate, 8000);
    channels_ = std::clamp<uint32_t>(out_channels, 1, 8);
    for (int i = 0; i < lines; ++i) {
        line_[i].len = std::max<uint32_t>(16, uint32_t(uint64_t(base_lengths[i]) * rate_ / 48000));
        line_[i].buf.assign(line_[i].len, 0.0f);
    }
    // Predelay up to 0.3 s + reflections up to 0.3 s (the largest values EFX allows).
    pre_len_ = std::max<uint32_t>(1, rate_ * 3 / 10 + 1);
    early_len_ = pre_len_;
    predelay_.assign(pre_len_, 0.0f);
    early_.assign(early_len_, 0.0f);
    reset();
    rebuild();
}

void Reverb::set(const ReverbParams& params) {
    params_ = params;
    rebuild();
}

void Reverb::reset() {
    for (auto& l : line_) {
        std::fill(l.buf.begin(), l.buf.end(), 0.0f);
        l.pos = 0;
        l.lp = 0;
    }
    std::fill(predelay_.begin(), predelay_.end(), 0.0f);
    std::fill(early_.begin(), early_.end(), 0.0f);
    pre_pos_ = early_pos_ = 0;
    std::fill(std::begin(out_lp_), std::end(out_lp_), 0.0f);
}

void Reverb::rebuild() {
    const float t_mid = std::clamp(params_.decay_time, 0.1f, 20.0f);
    const float t_hf = std::clamp(t_mid * std::clamp(params_.decay_hf_ratio, 0.1f, 2.0f), 0.05f, 40.0f);
    for (auto& l : line_) {
        const float seconds = float(l.len) / float(rate_);
        l.g = std::pow(10.0f, -3.0f * seconds / t_mid);                    // -60 dB after t_mid
        const float g_hf = std::pow(10.0f, -3.0f * seconds / t_hf);
        const float k = std::min(1.0f, g_hf / l.g);
        l.p = (1.0f - k) / (1.0f + k);                                      // Jot's one-pole absorption filter: gain k at Nyquist
    }
    // Output damping from gain_hf (a one-pole low-pass whose Nyquist gain is gain_hf).
    const float k_out = std::clamp(params_.gain_hf * params_.air_absorption_gain_hf, 0.01f, 1.0f);
    hf_pole_ = (1.0f - k_out) / (1.0f + k_out);
    // Eight lines each feed output with +-1/sqrt(8); late gain and master gain scale the whole tail.
    out_gain_ = params_.gain * params_.late_reverb_gain * 0.35355339f * 0.5f;
    early_gain_ = params_.gain * params_.reflections_gain * 0.5f;
}

void Reverb::process(const float* in, float* out, uint32_t frames) {
    if (!params_.enabled) return;
    const uint32_t pre_delay = std::clamp<uint32_t>(uint32_t(params_.late_reverb_delay * float(rate_)), 0, pre_len_ - 1);
    const uint32_t early_delay = std::clamp<uint32_t>(uint32_t(params_.reflections_delay * float(rate_)), 0, early_len_ - 1);
    for (uint32_t n = 0; n < frames; ++n) {
        const float x = in[n];
        // Early reflection: one tap, same on every channel with alternating sign (decorrelates left from right).
        early_[early_pos_] = x;
        const float e = early_[(early_pos_ + early_len_ - early_delay) % early_len_] * early_gain_;
        early_pos_ = (early_pos_ + 1) % early_len_;
        predelay_[pre_pos_] = x;
        const float d = predelay_[(pre_pos_ + pre_len_ - pre_delay) % pre_len_];
        pre_pos_ = (pre_pos_ + 1) % pre_len_;

        float y[lines], sum = 0;
        for (int i = 0; i < lines; ++i) {
            y[i] = line_[i].buf[line_[i].pos];
            sum += y[i];
        }
        const float input = d * 0.35355339f;
        const float mean = sum * (2.0f / float(lines));
        for (int i = 0; i < lines; ++i) {
            Line& l = line_[i];
            float v = y[i] - mean;                       // Householder reflection: energy preserving mixing
            l.lp = (1.0f - l.p) * v + l.p * l.lp;         // damping
            float w = l.g * l.lp + input;
            if (std::fabs(w) < 1e-20f) w = 0.0f;         // no denormals in the feedback path
            l.buf[l.pos] = w;
            l.pos = (l.pos + 1) % l.len;
        }
        for (uint32_t c = 0; c < channels_; ++c) {
            // Hadamard-like sign pattern per channel: bit parity of (line index & (c + 1)).
            float acc = 0;
            for (int i = 0; i < lines; ++i) acc += (__builtin_popcount(unsigned(i) & (c + 1u)) & 1) ? -y[i] : y[i];
            acc *= out_gain_ * 2.0f;
            out_lp_[c] = (1.0f - hf_pole_) * acc + hf_pole_ * out_lp_[c];
            out[size_t(n) * channels_ + c] += out_lp_[c] + ((c & 1) ? -e : e);
        }
    }
}

// ---- EAX 2.0 -> EFX ---------------------------------------------------------------------------------------------------------------------
ReverbParams eax2_to_efx(const Eax2Listener& l) {
    ReverbParams p;
    p.enabled = true;
    p.gain = std::clamp(millibels_to_gain(l.room), 0.0f, 1.0f);
    p.gain_hf = std::clamp(millibels_to_gain(l.room_hf), 0.0f, 1.0f);
    p.room_rolloff_factor = std::clamp(l.room_rolloff, 0.0f, 10.0f);
    p.decay_time = std::clamp(l.decay_time, 0.1f, 20.0f);
    p.decay_hf_ratio = std::clamp(l.decay_hf_ratio, 0.1f, 2.0f);
    p.reflections_gain = std::clamp(millibels_to_gain(l.reflections), 0.0f, 3.16f);
    p.reflections_delay = std::clamp(l.reflections_delay, 0.0f, 0.3f);
    p.late_reverb_gain = std::clamp(millibels_to_gain(l.reverb), 0.0f, 10.0f);
    p.late_reverb_delay = std::clamp(l.reverb_delay, 0.0f, 0.1f);
    p.diffusion = std::clamp(l.environment_diffusion, 0.0f, 1.0f);
    // EAX gives the environment size in meters (1..100): density follows the cube of the size like OpenAL Soft's conversion (small rooms are dense).
    p.density = std::clamp(std::pow(std::max(l.environment_size, 1.0f), 3.0f) / 16.0f / 100.0f, 0.0f, 1.0f);
    p.air_absorption_gain_hf = std::clamp(std::pow(10.0f, std::min(l.air_absorption_hf, 0.0f) / 20.0f), 0.892f, 1.0f);
    return p;
}

EnvironmentSend eax2_to_send(const Eax2Buffer& b) {
    EnvironmentSend s;
    // EAX 2.0: obstruction lowers the HF of the direct path (and obstruction * LF ratio the LF); occlusion lowers both direct and room, the
    // room by occlusion * occlusion_room_ratio.
    const float lf_mb = float(b.direct) + float(b.obstruction) * b.obstruction_lf_ratio + float(b.occlusion) * b.occlusion_lf_ratio;
    const float hf_mb = float(b.direct) + float(b.direct_hf) + float(b.obstruction) + float(b.occlusion);
    s.direct_gain = std::clamp(std::pow(10.0f, lf_mb / 2000.0f), 0.0f, 1.0f);
    s.direct_gain_hf = std::clamp(std::pow(10.0f, (hf_mb - lf_mb) / 2000.0f), 0.0f, 1.0f);
    const float room_mb = float(b.room) + float(b.occlusion) * b.occlusion_room_ratio;
    s.send_gain = std::clamp(std::pow(10.0f, room_mb / 2000.0f), 0.0f, 1.0f);
    s.send_gain_hf = std::clamp(std::pow(10.0f, float(b.room_hf) / 2000.0f), 0.0f, 1.0f);
    return s;
}

}  // namespace nfsu2::platform::audio
