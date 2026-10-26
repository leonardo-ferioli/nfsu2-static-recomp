// Reverb behind the spatial interface: an original feedback delay network (8 lines, Householder feedback matrix, per-line damping so that the
// high frequencies decay at decay_time * decay_hf_ratio) with an EFX-like parameter set, plus the EAX 2.0 -> EFX parameter mapping.
// Not Creative hardware, not OpenAL: the parameter names and ranges are the public EFX/EAX ones, the algorithm is ours.
#pragma once
#include <cstdint>
#include <vector>

#include "platform/audio/spatial.hpp"

namespace nfsu2::platform::audio {

class Reverb {
public:
    void configure(uint32_t sample_rate, uint32_t out_channels, uint32_t max_block_frames);
    void set(const ReverbParams& params);
    bool enabled() const { return params_.enabled; }
    void reset();
    // `in` is the mono send bus (frames samples); the effect output is ADDED to `out` (interleaved, out_channels).
    void process(const float* in, float* out, uint32_t frames);

private:
    static constexpr int lines = 8;
    struct Line {
        std::vector<float> buf;
        uint32_t pos = 0, len = 0;
        float lp = 0, g = 0, p = 0;   // damping state, mid gain, damping pole
    };
    void rebuild();
    uint32_t rate_ = 48000, channels_ = 2;
    ReverbParams params_;
    Line line_[lines];
    std::vector<float> predelay_, early_;
    uint32_t pre_pos_ = 0, pre_len_ = 1, early_pos_ = 0, early_len_ = 1;
    float out_lp_[8] = {};
    float out_gain_ = 0, hf_pole_ = 0, early_gain_ = 0;
};

// ---- EAX 2.0 (the version DirectSound games used most) -> EFX-style parameters -------------------------------------------------------------
// Fields and units are EAX 2.0's (EAXLISTENERPROPERTIES / EAXBUFFERPROPERTIES): levels in hundredths of dB (millibels).
struct Eax2Listener {
    int32_t room = -1000, room_hf = -100;
    float room_rolloff = 0.0f, decay_time = 1.49f, decay_hf_ratio = 0.83f;
    int32_t reflections = -2602;
    float reflections_delay = 0.007f;
    int32_t reverb = 200;
    float reverb_delay = 0.011f;
    uint32_t environment = 0;
    float environment_size = 7.5f, environment_diffusion = 1.0f, air_absorption_hf = -5.0f;   // dB
    uint32_t flags = 0;
};
struct Eax2Buffer {
    int32_t direct = 0, direct_hf = 0, room = 0, room_hf = 0;
    float room_rolloff = 0.0f;
    int32_t obstruction = 0;
    float obstruction_lf_ratio = 0.0f;
    int32_t occlusion = 0;
    float occlusion_lf_ratio = 0.25f, occlusion_room_ratio = 1.5f;
    float outside_volume_hf = 0.0f, air_absorption_factor = 1.0f;
    uint32_t flags = 0;
};
ReverbParams eax2_to_efx(const Eax2Listener& listener);
EnvironmentSend eax2_to_send(const Eax2Buffer& buffer);
float millibels_to_gain(int32_t millibels);   // 10^(mB/2000)

}  // namespace nfsu2::platform::audio
