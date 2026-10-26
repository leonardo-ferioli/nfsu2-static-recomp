#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>

#include "platform/audio/reverb.hpp"
#include "platform/audio/spatial.hpp"
#include "platform/audio/spatial_math.hpp"

namespace nfsu2::platform::audio {
namespace {
using namespace math;

constexpr uint32_t max_channels = 8;

// One-pole low-pass whose gain at Nyquist is k (Jot): y += (1-p)(x - y)... implemented as y = (1-p) x + p y with p = (1-k)/(1+k).
inline float pole_for(float k) { return (1.0f - std::clamp(k, 0.0f, 1.0f)) / (1.0f + std::clamp(k, 0.0f, 1.0f)); }

struct Entry {
    SourceId id = 0;
    ObjectParams params;
    bool used = false, has_object = false, primed = false;
    float prev[max_channels] = {};   // gains of the previous block per output channel (linear ramp to the new ones)
    float lp = 0;                    // direct-path HF filter state (obstruction/occlusion)
    float lp_pole = 0;
};

// Shared machinery: sources table, listener/world, environment send, gain ramps. Derived classes decide how a mono object, a 2D stereo pair
// and a bed reach the output channels.
class RendererBase : public SpatialRenderer {
public:
    explicit RendererBase(const RendererOptions& o) : options_(o) {}

    RendererCaps caps() const override {
        RendererCaps c;
        c.environment = true;
        c.max_output_channels = max_channels;
        return c;
    }

    void configure(const OutputLayout& output, uint32_t max_block) override {
        out_ = output;
        out_.channels = std::clamp<uint32_t>(out_.channels, 1, max_channels);
        speakers_ = speakers_of(out_.channel_mask, out_.channels);
        max_block_ = std::max<uint32_t>(max_block, 1);
        entries_.assign(options_.max_sources, Entry{});
        mono_.assign(max_block_, 0.0f);
        send_.assign(max_block_, 0.0f);
        reverb_.configure(out_.sample_rate, out_.channels, max_block_);
        reverb_.set(env_);
        on_configure();
    }
    void set_listener(const Listener& l) override { listener_ = l; basis_ = basis_of(l); }
    void set_world(const World& w) override { world_ = w; }
    void set_environment(const ReverbParams& p) override { env_ = p; reverb_.set(p); }
    void set_object(SourceId id, const ObjectParams& p) override {
        if (Entry* e = find(id, true)) {
            e->params = p;
            e->has_object = true;
        }
    }
    void remove_source(SourceId id) override {
        if (Entry* e = find(id, false)) {
            on_remove(*e);
            *e = Entry{};
        }
    }
    float pitch_ratio(SourceId id) const override {
        const Entry* e = const_cast<RendererBase*>(this)->find(id, false);
        if (!e || !e->has_object) return 1.0f;
        const Vec3 pos = e->params.head_relative ? Vec3{listener_.position.x + e->params.position.x, listener_.position.y + e->params.position.y, listener_.position.z + e->params.position.z} : e->params.position;
        const Vec3 vel = e->params.head_relative ? Vec3{listener_.velocity.x + e->params.velocity.x, listener_.velocity.y + e->params.velocity.y, listener_.velocity.z + e->params.velocity.z} : e->params.velocity;
        return doppler_ratio(world_, listener_.position, listener_.velocity, pos, vel);
    }

    void render(std::span<const SourceBlock> inputs, float* out, uint32_t frames) override {
        if (frames > max_block_) {   // never allocate in the audio path: split an oversized request
            uint32_t done = 0;
            while (done < frames) {
                const uint32_t n = std::min(max_block_, frames - done);
                std::vector<SourceBlock> shifted;   // cold path (callers keep blocks within max_block)
                shifted.reserve(inputs.size());
                for (auto b : inputs) { b.data += size_t(done) * b.channels; shifted.push_back(b); }
                render(std::span<const SourceBlock>(shifted), out + size_t(done) * out_.channels, n);
                done += n;
            }
            return;
        }
        const bool reverb_on = env_.enabled;
        if (reverb_on) std::fill(send_.begin(), send_.begin() + frames, 0.0f);
        for (const SourceBlock& in : inputs) {
            if (!in.data || in.channels == 0) continue;
            Entry* e = find(in.id, true);
            if (!e) continue;
            switch (in.kind) {
                case SourceKind::object: render_object(*e, in, out, frames, reverb_on); break;
                case SourceKind::stereo2d: render_stereo(*e, in, out, frames, reverb_on); break;
                case SourceKind::bed: render_bed(*e, in, out, frames); break;
            }
        }
        if (reverb_on) reverb_.process(send_.data(), out, frames);
    }

protected:
    virtual void on_configure() {}
    virtual void on_remove(Entry&) {}
    // gains per output channel for a 2D stereo pair: (left, right) go to the front pair
    virtual void render_object(Entry& e, const SourceBlock& in, float* out, uint32_t frames, bool reverb_on) = 0;
    virtual void render_stereo(Entry& e, const SourceBlock& in, float* out, uint32_t frames, bool reverb_on) {
        // Front left / front right of the output; mono input goes to both.
        const int l = channel_of(speaker::front_left), r = channel_of(speaker::front_right);
        float target[max_channels] = {};
        float send_gain = 0;
        if (in.channels == 1) {
            if (l >= 0) target[l] = in.gain[0];
            if (r >= 0) target[r] = in.gain[1];
            if (l < 0 && r < 0) target[0] = 0.5f * (in.gain[0] + in.gain[1]);
        } else {
            if (l >= 0) target[l] = in.gain[0];
            if (r >= 0) target[r] = in.gain[1];
        }
        send_gain = 0.5f * (in.gain[0] + in.gain[1]) * in.send.send_gain;
        if (!e.primed) std::memcpy(e.prev, target, sizeof(target));
        for (uint32_t f = 0; f < frames; ++f) {
            const float t = float(f + 1) / float(frames);
            const float sl = in.data[size_t(f) * in.channels];
            const float sr = in.channels > 1 ? in.data[size_t(f) * in.channels + 1] : sl;
            for (uint32_t c = 0; c < out_.channels; ++c) {
                const float g = e.prev[c] + (target[c] - e.prev[c]) * t;
                const float s = (int(c) == r && in.channels > 1) ? sr : sl;
                out[size_t(f) * out_.channels + c] += s * g;
            }
            if (reverb_on) send_[f] += 0.5f * (sl + sr) * send_gain;
        }
        std::memcpy(e.prev, target, sizeof(target));
        e.primed = true;
    }
    virtual void render_bed(Entry& e, const SourceBlock& in, float* out, uint32_t frames) {
        const BedMatrix m = bed_matrix(in.mask, in.channels, out_.channel_mask, out_.channels);
        const float g0 = e.primed ? e.prev[0] : in.gain[0], g1 = in.gain[0];
        for (uint32_t f = 0; f < frames; ++f) {
            const float g = g0 + (g1 - g0) * (float(f + 1) / float(frames));
            for (uint32_t i = 0; i < in.channels && i < max_channels; ++i) {
                const float s = in.data[size_t(f) * in.channels + i] * g;
                if (s == 0.0f) continue;
                for (uint32_t o = 0; o < out_.channels; ++o) out[size_t(f) * out_.channels + o] += s * m.m[i][o];
            }
        }
        e.prev[0] = g1;
        e.primed = true;
    }

    int channel_of(uint32_t bit) const {
        for (uint32_t i = 0; i < speakers_.count; ++i)
            if (speakers_.bits[i] == bit) return int(i);
        return -1;
    }

    // Scene values of one object right now (shared by every derived renderer).
    struct Scene {
        Direction dir;
        float gain = 1;   // distance * cone * direct-path gain
    };
    Scene scene_of(Entry& e, const SourceBlock& in) {
        const ObjectParams& p = e.has_object ? e.params : default_object_;
        Vec3 relative = p.head_relative ? p.position : sub(p.position, listener_.position);
        Scene s;
        s.dir = direction_of(to_listener_space(basis_, relative));
        const Vec3 source_to_listener = {-relative.x, -relative.y, -relative.z};
        s.gain = distance_gain(p, world_.rolloff_factor, s.dir.distance) * cone_gain(p, source_to_listener) * in.gain[0] * in.send.direct_gain;
        return s;
    }
    // Mono sum of an input block into mono_ (objects are point sources), through the direct-path HF filter of obstruction/occlusion.
    void mono_of(Entry& e, const SourceBlock& in, uint32_t frames) {
        const float inv = 1.0f / float(in.channels);
        const float k = in.send.direct_gain_hf;
        const bool filtered = k < 0.999f;
        const float pole = pole_for(k);
        for (uint32_t f = 0; f < frames; ++f) {
            float s = 0;
            for (uint32_t c = 0; c < in.channels; ++c) s += in.data[size_t(f) * in.channels + c];
            s *= inv;
            if (filtered) {
                e.lp = (1.0f - pole) * s + pole * e.lp;
                s = e.lp;
            } else {
                e.lp = s;
            }
            mono_[f] = s;
        }
    }
    void send_mono(const SourceBlock& in, uint32_t frames, bool reverb_on) {
        if (!reverb_on || in.send.send_gain <= 0.0f) return;
        const float g = in.gain[0] * in.send.send_gain;
        for (uint32_t f = 0; f < frames; ++f) send_[f] += mono_[f] * g;
    }

    Entry* find(SourceId id, bool create) {
        if (!id) return nullptr;
        Entry* free_slot = nullptr;
        for (auto& e : entries_) {
            if (e.used && e.id == id) return &e;
            if (!e.used && !free_slot) free_slot = &e;
        }
        if (create && free_slot) {
            *free_slot = Entry{};
            free_slot->used = true;
            free_slot->id = id;
            return free_slot;
        }
        return nullptr;
    }

    RendererOptions options_;
    OutputLayout out_;
    SpeakerList speakers_;
    uint32_t max_block_ = 1;
    Listener listener_;
    Basis basis_ = basis_of(Listener{});
    World world_;
    ReverbParams env_;
    ObjectParams default_object_;
    std::vector<Entry> entries_;
    std::vector<float> mono_, send_;
    Reverb reverb_;
};

// ---- Stereo: what DirectSound does by default ------------------------------------------------------------------------------------------
class StereoRenderer final : public RendererBase {
public:
    using RendererBase::RendererBase;
    const char* name() const override { return "stereo"; }

protected:
    void render_object(Entry& e, const SourceBlock& in, float* out, uint32_t frames, bool reverb_on) override {
        const Scene s = scene_of(e, in);
        mono_of(e, in, frames);
        send_mono(in, frames, reverb_on);
        // Balance pan from the lateral position: the near channel stays at unity, the far one falls as cos(pi/2 * |lateral|) (DirectSound's own
        // pan law attenuates only the far side; keeps a source crossing the centre level with a 2D one).
        const float lat = std::clamp(s.dir.lateral, -1.0f, 1.0f);
        const float far_gain = std::cos(std::fabs(lat) * pi * 0.5f);
        float target[max_channels] = {};
        const int l = channel_of(speaker::front_left) >= 0 ? channel_of(speaker::front_left) : 0;
        const int r = channel_of(speaker::front_right) >= 0 ? channel_of(speaker::front_right) : (out_.channels > 1 ? 1 : 0);
        if (l == r) {
            target[l] = s.gain;
        } else {
            target[l] = s.gain * (lat > 0 ? far_gain : 1.0f);
            target[r] = s.gain * (lat < 0 ? far_gain : 1.0f);
        }
        if (!e.primed) std::memcpy(e.prev, target, sizeof(target));
        for (uint32_t f = 0; f < frames; ++f) {
            const float t = float(f + 1) / float(frames);
            const float x = mono_[f];
            out[size_t(f) * out_.channels + l] += x * (e.prev[l] + (target[l] - e.prev[l]) * t);
            if (r != l) out[size_t(f) * out_.channels + r] += x * (e.prev[r] + (target[r] - e.prev[r]) * t);
        }
        std::memcpy(e.prev, target, sizeof(target));
        e.primed = true;
    }
};

// ---- Speakers: any layout up to 7.1 ------------------------------------------------------------------------------------------------------
class SpeakerRenderer final : public RendererBase {
public:
    using RendererBase::RendererBase;
    const char* name() const override { return "speakers"; }

protected:
    void render_object(Entry& e, const SourceBlock& in, float* out, uint32_t frames, bool reverb_on) override {
        const Scene s = scene_of(e, in);
        mono_of(e, in, frames);
        send_mono(in, frames, reverb_on);
        float pan[max_channels] = {}, target[max_channels] = {};
        pairwise_pan(speakers_, s.dir.azimuth_deg, pan);
        for (uint32_t c = 0; c < out_.channels; ++c) target[c] = pan[c] * s.gain;
        if (!e.primed) std::memcpy(e.prev, target, sizeof(target));
        for (uint32_t f = 0; f < frames; ++f) {
            const float t = float(f + 1) / float(frames);
            const float x = mono_[f];
            for (uint32_t c = 0; c < out_.channels; ++c) {
                if (e.prev[c] == 0.0f && target[c] == 0.0f) continue;
                out[size_t(f) * out_.channels + c] += x * (e.prev[c] + (target[c] - e.prev[c]) * t);
            }
        }
        std::memcpy(e.prev, target, sizeof(target));
        e.primed = true;
    }
};

// ---- Binaural: parametric spherical-head HRTF (or a measured dataset) ------------------------------------------------------------------
constexpr uint32_t hist_len = 512;   // power of two; holds the longest HRIR (<= 384 taps) and the largest ITD

struct BinState {
    float hist[hist_len] = {};
    uint32_t w = 0;
    float lp[2] = {};
    float prev_delay[2] = {};   // samples
    float prev_gain[2] = {};
    float prev_ir[2][384] = {};  // dataset path: impulse responses of the previous block (cross-fade)
    bool primed = false;
};

class BinauralRenderer final : public RendererBase {
public:
    using RendererBase::RendererBase;
    const char* name() const override { return options_.hrtf ? "binaural(dataset)" : "binaural(parametric)"; }
    RendererCaps caps() const override {
        RendererCaps c = RendererBase::caps();
        c.binaural = true;
        return c;
    }
    uint32_t latency_frames() const override { return 0; }

protected:
    void on_configure() override {
        // Binaural output is always a stereo pair; a wider layout is not meaningful for headphones.
        states_.assign(size_t(options_.max_sources) * 8 + 8, BinState{});
        used_.assign(states_.size(), 0);
        owner_.assign(states_.size(), 0);
        ir_l_.assign(384, 0.0f);
        ir_r_.assign(384, 0.0f);
        pair_.assign(size_t(max_block_) * 2, 0.0f);
    }
    void on_remove(Entry& e) override {
        for (size_t i = 0; i < owner_.size(); ++i)
            if (used_[i] && (owner_[i] >> 3) == e.id) used_[i] = 0;
    }

    BinState* state_for(SourceId id, uint32_t channel) {
        const uint64_t key = (uint64_t(id) << 3) | channel;
        size_t free_i = states_.size();
        for (size_t i = 0; i < states_.size(); ++i) {
            if (used_[i] && owner_[i] == key) return &states_[i];
            if (!used_[i] && free_i == states_.size()) free_i = i;
        }
        if (free_i == states_.size()) return nullptr;
        states_[free_i] = BinState{};
        used_[free_i] = 1;
        owner_[free_i] = key;
        return &states_[free_i];
    }

    // Mixes `frames` mono samples from `src` as a point source in direction (az, el) with `gain` into the stereo out (channels 0 and 1).
    void place(BinState& st, const float* src, uint32_t frames, float az_deg, float el_deg, float gain, float* out) {
        const float c = std::clamp(std::cos(el_deg * deg2rad), 0.0f, 1.0f);
        const float lateral = std::clamp(std::sin(az_deg * deg2rad) * c, -1.0f, 1.0f);
        const float front = std::cos(az_deg * deg2rad);   // +1 front, -1 behind
        if (options_.hrtf) return place_dataset(st, src, frames, az_deg, el_deg, gain, out);
        // Woodworth ITD: the ear far from the source hears it later.
        const float theta = std::asin(lateral);
        const float itd = (0.0875f / 343.0f) * (std::fabs(theta) + std::sin(std::fabs(theta)));   // seconds
        const float d_far = itd * float(out_.sample_rate);
        float delay[2] = {lateral > 0 ? d_far : 0.0f, lateral > 0 ? 0.0f : d_far};   // [left, right]: left is far when the source is on the right
        if (lateral == 0.0f) delay[0] = delay[1] = 0.0f;
        const float s = std::fabs(lateral);
        // Head shadow: far ear loses HF (cutoff falls from open to ~1.5 kHz at 90 degrees) and a few dB overall; near ear gains slightly.
        const float near_gain = std::pow(10.0f, 1.5f * s / 20.0f), far_gain = std::pow(10.0f, -4.5f * s / 20.0f);
        const float rear = 0.5f * (1.0f - front);   // 0 front .. 1 back: a gentle HF loss for sources behind (front/back cue)
        float g[2], pole[2];
        for (int ear = 0; ear < 2; ++ear) {
            const bool far = delay[ear] > 0.0f;
            g[ear] = gain * (far ? far_gain : near_gain);
            const float k_shadow = far ? (1.0f - 0.92f * s) : 1.0f;   // gain at Nyquist
            const float k = std::clamp(k_shadow * (1.0f - 0.4f * rear), 0.05f, 1.0f);
            pole[ear] = pole_for(k);
        }
        if (!st.primed) {
            st.prev_delay[0] = delay[0]; st.prev_delay[1] = delay[1];
            st.prev_gain[0] = g[0]; st.prev_gain[1] = g[1];
            st.primed = true;
        }
        for (uint32_t f = 0; f < frames; ++f) {
            st.hist[st.w & (hist_len - 1)] = src[f];
            const float t = float(f + 1) / float(frames);
            for (int ear = 0; ear < 2; ++ear) {
                const float d = st.prev_delay[ear] + (delay[ear] - st.prev_delay[ear]) * t;
                const float pos = float(st.w) - d;
                const float fl = std::floor(pos);
                const uint32_t i0 = uint32_t(int64_t(fl)) & (hist_len - 1), i1 = (i0 + 1) & (hist_len - 1);
                const float frac = pos - fl;
                float x = st.hist[i0] * (1.0f - frac) + st.hist[i1] * frac;
                st.lp[ear] = (1.0f - pole[ear]) * x + pole[ear] * st.lp[ear];
                out[size_t(f) * 2 + ear] += st.lp[ear] * (st.prev_gain[ear] + (g[ear] - st.prev_gain[ear]) * t);
            }
            ++st.w;
        }
        st.prev_delay[0] = delay[0]; st.prev_delay[1] = delay[1];
        st.prev_gain[0] = g[0]; st.prev_gain[1] = g[1];
    }

    // Measured HRIRs: direct-form convolution, cross-fading from the previous block's responses to the new ones.
    void place_dataset(BinState& st, const float* src, uint32_t frames, float az_deg, float el_deg, float gain, float* out) {
        const HrtfDataset& h = *options_.hrtf;
        const uint32_t taps = std::min<uint32_t>(h.length(), 384);
        std::fill(ir_l_.begin(), ir_l_.end(), 0.0f);
        std::fill(ir_r_.begin(), ir_r_.end(), 0.0f);
        h.get(az_deg, el_deg, ir_l_.data(), ir_r_.data());
        if (!st.primed) {
            std::memcpy(st.prev_ir[0], ir_l_.data(), taps * sizeof(float));
            std::memcpy(st.prev_ir[1], ir_r_.data(), taps * sizeof(float));
            st.primed = true;
        }
        for (uint32_t f = 0; f < frames; ++f) {
            st.hist[st.w & (hist_len - 1)] = src[f];
            const float t = float(f + 1) / float(frames);
            float acc[2] = {0, 0}, old_acc[2] = {0, 0};
            for (uint32_t k = 0; k < taps; ++k) {
                const float x = st.hist[(st.w - k) & (hist_len - 1)];
                acc[0] += x * ir_l_[k]; acc[1] += x * ir_r_[k];
                old_acc[0] += x * st.prev_ir[0][k]; old_acc[1] += x * st.prev_ir[1][k];
            }
            for (int ear = 0; ear < 2; ++ear) out[size_t(f) * 2 + ear] += gain * (old_acc[ear] + (acc[ear] - old_acc[ear]) * t);
            ++st.w;
        }
        std::memcpy(st.prev_ir[0], ir_l_.data(), taps * sizeof(float));
        std::memcpy(st.prev_ir[1], ir_r_.data(), taps * sizeof(float));
    }

    void render_object(Entry& e, const SourceBlock& in, float* out, uint32_t frames, bool reverb_on) override {
        const Scene s = scene_of(e, in);
        mono_of(e, in, frames);
        send_mono(in, frames, reverb_on);
        BinState* st = state_for(in.id, 0);
        if (!st) return;
        place_stereo_out(*st, mono_.data(), frames, s.dir.azimuth_deg, s.dir.elevation_deg, s.gain, out);
    }
    void place_stereo_out(BinState& st, const float* src, uint32_t frames, float az, float el, float gain, float* out) {
        if (out_.channels == 2) { place(st, src, frames, az, el, gain, out); return; }
        // Not a stereo device: render into a scratch pair and put it on the front channels.
        const int l = channel_of(speaker::front_left) >= 0 ? channel_of(speaker::front_left) : 0;
        const int r = channel_of(speaker::front_right) >= 0 ? channel_of(speaker::front_right) : 0;
        std::fill(pair_.begin(), pair_.begin() + size_t(frames) * 2, 0.0f);
        place(st, src, frames, az, el, gain, pair_.data());
        for (uint32_t f = 0; f < frames; ++f) {
            out[size_t(f) * out_.channels + l] += pair_[size_t(f) * 2];
            out[size_t(f) * out_.channels + r] += pair_[size_t(f) * 2 + 1];
        }
    }
    void render_stereo(Entry& e, const SourceBlock& in, float* out, uint32_t frames, bool reverb_on) override {
        if (!options_.virtualize_stereo || in.channels != 2) return RendererBase::render_stereo(e, in, out, frames, reverb_on);
        SourceBlock bed = in;
        bed.kind = SourceKind::bed;
        bed.mask = speaker::stereo;
        bed.gain[0] = 0.5f * (in.gain[0] + in.gain[1]);
        render_bed(e, bed, out, frames);
    }
    void render_bed(Entry& e, const SourceBlock& in, float* out, uint32_t frames) override {
        if (!options_.virtualize_beds || in.channels <= 2 || (in.channels == 2 && !options_.virtualize_stereo)) return RendererBase::render_bed(e, in, out, frames);
        // Each speaker feed becomes a point source at the speaker's azimuth (virtual loudspeakers); the LFE goes to both ears equally.
        const SpeakerList sp = speakers_of(in.mask, in.channels);
        const float g0 = e.primed ? e.prev[0] : in.gain[0], g1 = in.gain[0];
        float ramp[1] = {g1};
        (void)ramp;
        for (uint32_t ch = 0; ch < in.channels && ch < max_channels; ++ch) {
            for (uint32_t f = 0; f < frames; ++f) {
                const float g = g0 + (g1 - g0) * (float(f + 1) / float(frames));
                mono_[f] = in.data[size_t(f) * in.channels + ch] * g;
            }
            if (sp.bits[ch] == speaker::lfe) {
                for (uint32_t f = 0; f < frames; ++f) {
                    const float v = 0.5f * mono_[f];
                    if (out_.channels == 2) { out[size_t(f) * 2] += v; out[size_t(f) * 2 + 1] += v; }
                    else { out[size_t(f) * out_.channels] += v; }
                }
                continue;
            }
            BinState* st = state_for(in.id, ch);
            if (!st) continue;
            place_stereo_out(*st, mono_.data(), frames, sp.azimuth[ch], 0.0f, 1.0f, out);
        }
        e.prev[0] = g1;
        e.primed = true;
    }

private:
    std::vector<BinState> states_;
    std::vector<uint8_t> used_;
    std::vector<uint64_t> owner_;
    std::vector<float> ir_l_, ir_r_, pair_;
};

// ---- Platform spatializer hook ---------------------------------------------------------------------------------------------------------
class PlatformSpatializerRenderer final : public SpatialRenderer {
public:
    PlatformSpatializerRenderer(const RendererOptions& o, std::unique_ptr<SpatialRenderer> fallback) : options_(o), fallback_(std::move(fallback)) {}
    const char* name() const override { return active() ? "platform" : fallback_->name(); }
    RendererCaps caps() const override {
        RendererCaps c = fallback_->caps();
        if (active()) c.platform = true;
        return c;
    }
    void configure(const OutputLayout& o, uint32_t max_block) override {
        fallback_->configure(o, max_block);
        mono_.assign(std::max<uint32_t>(max_block, 1), 0.0f);
    }
    void set_listener(const Listener& l) override { listener_ = l; basis_ = basis_of(l); fallback_->set_listener(l); if (options_.platform) options_.platform->set_listener(l); }
    void set_world(const World& w) override { fallback_->set_world(w); }
    void set_environment(const ReverbParams& p) override { fallback_->set_environment(p); }
    void set_object(SourceId id, const ObjectParams& p) override {
        fallback_->set_object(id, p);
        for (auto& o : objects_) if (o.id == id) { o.params = p; return; }
        objects_.push_back({id, p});
    }
    void remove_source(SourceId id) override { fallback_->remove_source(id); std::erase_if(objects_, [&](auto& o) { return o.id == id; }); }
    float pitch_ratio(SourceId id) const override { return fallback_->pitch_ratio(id); }
    void render(std::span<const SourceBlock> inputs, float* out, uint32_t frames) override {
        if (!active()) return fallback_->render(inputs, out, frames);
        PlatformSpatializer& p = *options_.platform;
        p.begin_block(frames);
        for (const SourceBlock& in : inputs) {
            if (!in.data) continue;
            if (in.kind == SourceKind::object) {
                const ObjectParams* params = nullptr;
                for (const auto& o : objects_) if (o.id == in.id) { params = &o.params; break; }
                const float inv = 1.0f / float(std::max<uint32_t>(in.channels, 1));
                for (uint32_t f = 0; f < frames && f < mono_.size(); ++f) {
                    float s = 0;
                    for (uint32_t c = 0; c < in.channels; ++c) s += in.data[size_t(f) * in.channels + c];
                    mono_[f] = s * inv;
                }
                Vec3 rel = params ? (params->head_relative ? params->position : sub(params->position, listener_.position)) : Vec3{};
                p.submit_object(in.id, mono_.data(), frames, to_listener_space(basis_, rel), in.gain[0]);
            } else {
                p.submit_bed(in.id, in.data, in.channels, in.kind == SourceKind::stereo2d && !in.mask ? speaker::default_mask(in.channels) : in.mask, frames, in.kind == SourceKind::stereo2d ? 0.5f * (in.gain[0] + in.gain[1]) : in.gain[0]);
            }
        }
        p.end_block();   // the platform renders to the device itself: `out` stays silent
    }
    uint32_t latency_frames() const override { return fallback_->latency_frames(); }

private:
    bool active() const { return options_.platform && options_.platform->available(); }
    struct Obj { SourceId id; ObjectParams params; };
    RendererOptions options_;
    std::unique_ptr<SpatialRenderer> fallback_;
    Listener listener_;
    Basis basis_ = basis_of(Listener{});
    std::vector<Obj> objects_;
    std::vector<float> mono_;
};

}  // namespace

std::unique_ptr<SpatialRenderer> make_renderer(RendererKind kind, const RendererOptions& options) {
    switch (kind) {
        case RendererKind::stereo: return std::make_unique<StereoRenderer>(options);
        case RendererKind::speakers: return std::make_unique<SpeakerRenderer>(options);
        case RendererKind::binaural: return std::make_unique<BinauralRenderer>(options);
        case RendererKind::platform: {
            RendererKind fb = options.fallback == RendererKind::platform ? RendererKind::stereo : options.fallback;
            return std::make_unique<PlatformSpatializerRenderer>(options, make_renderer(fb, options));
        }
    }
    return std::make_unique<StereoRenderer>(options);
}

}  // namespace nfsu2::platform::audio
