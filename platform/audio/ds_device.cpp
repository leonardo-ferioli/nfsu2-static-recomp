// MixerDevice: the Level A implementation (see ds_device.hpp). A software mixer with DirectSound semantics.
#include "platform/audio/ds_device.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <mutex>
#include <vector>

#include "platform/audio/spatial_math.hpp"

namespace nfsu2::platform::audio::ds {

float millibels_to_amplitude(int32_t mb) { return mb <= volume_min ? 0.0f : std::pow(10.0f, float(mb) / 2000.0f); }

void pan_gains(int32_t pan, float& left, float& right) {
    // DirectSound's pan attenuates only the opposite channel, by |pan| hundredths of dB.
    left = pan > 0 ? millibels_to_amplitude(-pan) : 1.0f;
    right = pan < 0 ? millibels_to_amplitude(pan) : 1.0f;
}

namespace {

constexpr uint32_t kernel_taps = 16, kernel_phases = 512;

// Polyphase windowed-sinc interpolation kernels (Blackman window, 16 taps, cutoff 0.97 of the source's Nyquist), normalised to unity DC gain.
struct Kernels {
    float k[kernel_phases + 1][kernel_taps];
    Kernels() {
        constexpr double pi = 3.14159265358979323846, cutoff = 0.97;
        for (uint32_t p = 0; p <= kernel_phases; ++p) {
            const double frac = double(p) / double(kernel_phases);
            double sum = 0;
            for (uint32_t t = 0; t < kernel_taps; ++t) {
                const double x = double(int(t) - 7) - frac;   // distance from the output position, taps at -7..8
                const double arg = pi * cutoff * x;
                const double s = std::fabs(x) < 1e-12 ? 1.0 : std::sin(arg) / arg;
                const double w = std::fabs(x) >= 8.0 ? 0.0 : 0.42 + 0.5 * std::cos(pi * x / 8.0) + 0.08 * std::cos(2.0 * pi * x / 8.0);
                k[p][t] = float(s * w);
                sum += s * w;
            }
            for (uint32_t t = 0; t < kernel_taps; ++t) k[p][t] = float(double(k[p][t]) / sum);
        }
    }
};
const Kernels& kernels() {
    static const Kernels instance;
    return instance;
}

bool format_ok(const WaveFormat& f, uint32_t max_channels, uint32_t max_rate) {
    if (f.channels < 1 || f.channels > max_channels || f.channels > 8) return false;
    if (f.sample_rate < frequency_min || f.sample_rate > max_rate) return false;
    if (f.type == SampleType::ieee_float) return f.bits == 32;
    return f.bits == 8 || f.bits == 16 || f.bits == 24 || f.bits == 32;
}

struct Voice {
    bool used = false, primary = false, lost = false, playing = false, looping = false, primary_playing = false;
    uint32_t generation = 1, flags = 0;
    WaveFormat format;
    std::vector<uint8_t> data;
    uint32_t frames = 0, frame_bytes = 0;
    double pos = 0;                // next source frame to mix (0 .. frames)
    double start = 0, consumed = 0;   // position at Play and source frames mixed since: the heard position is start + consumed - latency
    double last_step = 1.0;
    int32_t volume = 0, pan = 0;
    uint32_t frequency = 0;
    std::vector<Notify> notifies;
    double notify_from = 0;        // heard position (unwrapped, frames) up to which notifications were already checked
    bool has_3d = false;
    Buffer3D b3d;
    EnvironmentSend send;
    std::vector<float> block;      // `block_frames` frames of `channels` floats at the output rate
};

class MixerDevice final : public Device {
public:
    explicit MixerDevice(const Config& c) : cfg_(c) {
        voices_.resize(size_t(c.max_buffers) + 1);
        inputs_.reserve(voices_.size());
        // Slot 0 is the primary buffer (created on demand).
        primary_format_.sample_rate = c.default_rate;
        primary_format_.channels = uint16_t(c.default_channels);
        renderer_ = make_renderer(RendererKind::stereo);
        set_output_locked({48000, 2, speaker::stereo}, 0);
    }

    // ---- IDirectSound
    Hr set_cooperative_level(uint32_t level) override {
        if (level < coop::normal || level > coop::write_primary) return hr::invalid_param;
        std::lock_guard lock(mutex_);
        coop_ = level;
        return hr::ok;
    }
    void reset() override {
        std::lock_guard lock(mutex_);
        for (auto& v : voices_) {
            if (v.used && renderer_) renderer_->remove_source(id_of(int(&v - voices_.data())).value);
            const uint32_t gen = v.generation + 1;
            v = Voice{};
            v.generation = gen;
        }
        coop_ = coop::normal;
        primary_format_ = WaveFormat{};
        primary_format_.sample_rate = cfg_.default_rate;
        primary_format_.channels = uint16_t(cfg_.default_channels);
        listener_ = Listener3D{};
        env_ = ReverbParams{};
        fifo_pos_ = fifo_count_ = 0;
        configure_renderer();
    }
    Caps caps() const override {
        Caps c;
        c.flags = caps_flag::primary_mono | caps_flag::primary_stereo | caps_flag::primary_8bit | caps_flag::primary_16bit | caps_flag::continuous_rate |
                  caps_flag::secondary_mono | caps_flag::secondary_stereo | caps_flag::secondary_8bit | caps_flag::secondary_16bit;
        return c;
    }

    CreateResult create_buffer(const BufferDesc& d) override {
        std::lock_guard lock(mutex_);
        CreateResult r;
        if (d.flags & buffer_flag::primary) {
            if (d.has_format || d.bytes != 0) { r.hr = hr::invalid_param; return r; }
            if (d.flags & (buffer_flag::ctrl_fx | buffer_flag::static_buffer)) { r.hr = hr::invalid_param; return r; }
            Voice& p = voices_[0];
            if (p.used) {
                r.hr = hr::ok;
                r.id = id_of(0);
                r.existing_primary = true;
                return r;
            }
            const uint32_t primary_generation = p.generation + 1;
            p = Voice{};
            p.used = true;
            p.primary = true;
            p.flags = d.flags;
            p.generation = primary_generation;
            p.format = primary_format_;
            p.has_3d = (d.flags & buffer_flag::ctrl_3d) != 0;
            r.id = id_of(0);
            r.hr = hr::ok;
            return r;
        }
        if (!d.has_format) { r.hr = hr::invalid_param; return r; }
        if (d.flags & buffer_flag::ctrl_fx) { r.hr = hr::unsupported; return r; }
        if ((d.flags & buffer_flag::loc_hardware) && (d.flags & buffer_flag::loc_software)) { r.hr = hr::invalid_param; return r; }
        if (d.flags & buffer_flag::loc_hardware) { r.hr = hr::unsupported; return r; }   // measured: Windows answers E_NOTIMPL, there are no hardware voices
        if (!format_ok(d.format, 8, frequency_max)) { r.hr = hr::invalid_param; return r; }
        if (d.bytes < size_min || d.bytes > size_max) { r.hr = hr::invalid_param; return r; }
        const uint32_t fb = d.format.frame_bytes();
        const uint32_t bytes = (d.bytes + fb - 1) / fb * fb;   // measured: Windows rounds the size UP to a whole number of frames
        if (bytes > size_max) { r.hr = hr::invalid_param; return r; }
        const int slot = free_slot();
        if (slot < 0) { r.hr = hr::out_of_memory; return r; }
        Voice& v = voices_[size_t(slot)];
        const uint32_t gen = v.generation + 1;
        v = Voice{};
        v.generation = gen;
        v.used = true;
        v.flags = d.flags & ~buffer_flag::primary;
        v.format = d.format;
        v.frame_bytes = fb;
        v.frames = bytes / fb;
        v.data.assign(bytes, d.format.bits == 8 ? uint8_t(0x80) : uint8_t(0));   // silence
        v.frequency = d.format.sample_rate;
        v.has_3d = (d.flags & buffer_flag::ctrl_3d) != 0;
        v.block.assign(size_t(cfg_.block_frames) * d.format.channels, 0.0f);
        r.id = id_of(slot);
        r.hr = hr::ok;
        if (v.has_3d) sync_object(slot);
        return r;
    }

    CreateResult duplicate_buffer(BufferId source) override {
        std::lock_guard lock(mutex_);
        CreateResult r;
        Voice* s = find(source);
        if (!s || s->primary) { r.hr = hr::invalid_param; return r; }
        const int slot = free_slot();
        if (slot < 0) { r.hr = hr::out_of_memory; return r; }
        Voice& v = voices_[size_t(slot)];
        const uint32_t gen = v.generation + 1;
        v = *s;
        v.generation = gen;
        v.playing = v.looping = false;
        v.pos = v.start = v.consumed = 0;
        v.notifies.clear();
        v.notify_from = 0;
        r.id = id_of(slot);
        r.hr = hr::ok;
        if (v.has_3d) sync_object(slot);
        return r;
    }

    void destroy_buffer(BufferId id) override {
        std::lock_guard lock(mutex_);
        const int slot = slot_of(id);
        if (slot < 0) return;
        if (renderer_) renderer_->remove_source(id.value);
        Voice& v = voices_[size_t(slot)];
        const uint32_t gen = v.generation;
        v = Voice{};
        v.generation = gen + 1;
    }

    // ---- format and caps
    Hr set_format(BufferId id, const WaveFormat& f) override {
        FormatChangedFn fn = nullptr;
        void* user = nullptr;
        {
            std::lock_guard lock(mutex_);
            Voice* v = find(id);
            if (!v) return hr::invalid_param;
            if (!v->primary) return hr::invalid_call;
            if (coop_ == coop::normal) return hr::priority_level_needed;
            if (f.channels > cfg_.max_primary_channels && f.channels <= 8 && f.sample_rate >= frequency_min) return hr::allocated;   // the device cannot do that many channels (measured: DSERR_ALLOCATED)
            if (!format_ok(f, cfg_.max_primary_channels, cfg_.max_primary_rate)) return hr::invalid_param;
            primary_format_ = f;
            v->format = f;
            fn = format_cb_;
            user = format_user_;
        }
        if (fn) fn(user, f);   // outside the lock: the callback may reopen the sink, which joins the mix thread
        return hr::ok;
    }
    Hr get_format(BufferId id, WaveFormat& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        out = v->primary ? primary_format_ : v->format;
        return hr::ok;
    }
    Hr get_caps(BufferId id, BufferCaps& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        out.flags = v->flags | (v->primary ? 0u : buffer_flag::loc_software);
        out.bytes = v->primary ? 0 : uint32_t(v->data.size());
        return hr::ok;
    }

    // ---- data
    Hr lock(BufferId id, uint32_t offset, uint32_t bytes, uint32_t flags, Regions& out) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (v->primary) return coop_ == coop::write_primary ? hr::unsupported : hr::invalid_call;
        if (v->lost) return hr::buffer_lost;
        if (flags & ~(lock_flag::from_write_cursor | lock_flag::entire_buffer)) return hr::invalid_param;
        const uint32_t size = uint32_t(v->data.size());
        if (flags & lock_flag::from_write_cursor) offset = write_cursor_bytes(*v);
        if (flags & lock_flag::entire_buffer) bytes = size;   // measured: the whole buffer starting at `offset` (wrapping), not forced to 0
        if (bytes > size || offset >= size || bytes == 0) return hr::invalid_param;
        out = {};
        out.offset1 = offset;
        if (offset + bytes <= size) {
            out.bytes1 = bytes;
        } else {
            out.bytes1 = size - offset;
            out.offset2 = 0;
            out.bytes2 = bytes - out.bytes1;
        }
        return hr::ok;
    }

    Hr unlock(BufferId id, const Regions& r, Bytes p1, Bytes p2) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v || v->primary) return hr::invalid_param;
        const uint32_t size = uint32_t(v->data.size());
        if (uint64_t(r.offset1) + r.bytes1 > size || uint64_t(r.offset2) + r.bytes2 > size) return hr::invalid_param;
        if (p1.size() < r.bytes1 || p2.size() < r.bytes2) return hr::invalid_param;
        if (r.bytes1) std::memcpy(v->data.data() + r.offset1, p1.data(), r.bytes1);
        if (r.bytes2) std::memcpy(v->data.data() + r.offset2, p2.data(), r.bytes2);
        return hr::ok;
    }

    // ---- transport
    Hr play(BufferId id, uint32_t priority, uint32_t flags) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (flags & ~0x3fu) return hr::invalid_param;
        if (v->primary) {
            if (!(flags & play_flag::looping)) return hr::invalid_param;
            v->primary_playing = true;
            return hr::ok;
        }
        if (priority != 0) return hr::invalid_param;
        if (v->lost) return hr::buffer_lost;
        v->looping = (flags & play_flag::looping) != 0;
        if (!v->playing) {
            v->playing = true;
            v->start = v->pos;
            v->consumed = 0;
            v->notify_from = v->pos;
        }
        return hr::ok;
    }

    Hr stop(BufferId id) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (v->primary) {
            v->primary_playing = false;
            return hr::ok;
        }
        if (v->playing) {
            v->pos = std::floor(heard_frames(*v));   // resume where it was heard, not where the mixer had got to
            v->playing = false;
            fire_stop(*v, id);
        }
        return hr::ok;
    }

    Hr get_status(BufferId id, uint32_t& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        out = 0;
        if (v->primary) {
            if (v->primary_playing) out |= status_flag::playing | status_flag::looping;
            return hr::ok;
        }
        if (v->lost) out |= status_flag::buffer_lost;
        if (v->playing) out |= status_flag::playing | (v->looping ? status_flag::looping : 0u);
        return hr::ok;   // measured: no location bit for a software buffer
    }

    Hr get_current_position(BufferId id, uint32_t* play_cursor, uint32_t* write_cursor) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (!play_cursor && !write_cursor) return hr::invalid_param;   // measured
        if (v->primary) {
            if (play_cursor) *play_cursor = 0;
            if (write_cursor) *write_cursor = 0;
            return hr::ok;
        }
        if (v->lost) return hr::buffer_lost;
        const uint32_t play = play_cursor_bytes(*v);
        if (play_cursor) *play_cursor = play;
        if (write_cursor) *write_cursor = v->playing ? write_cursor_bytes(*v) : play;
        return hr::ok;
    }

    Hr set_current_position(BufferId id, uint32_t byte_position) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (v->primary) return hr::invalid_call;
        if (v->lost) return hr::buffer_lost;
        if (byte_position >= v->data.size()) return hr::invalid_param;
        v->pos = double(byte_position / v->frame_bytes);
        v->start = v->pos;
        v->consumed = 0;
        v->notify_from = v->pos;
        return hr::ok;
    }

    Hr restore(BufferId id) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        v->lost = false;
        return hr::ok;
    }

    // ---- controls
    Hr set_volume(BufferId id, int32_t mb) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (mb < volume_min || mb > volume_max) return hr::invalid_param;   // measured: the range is checked before the control flag
        if (!(v->flags & buffer_flag::ctrl_volume)) return hr::control_unavailable;
        v->volume = mb;
        return hr::ok;
    }
    Hr get_volume(BufferId id, int32_t& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (!(v->flags & buffer_flag::ctrl_volume)) return hr::control_unavailable;
        out = v->volume;
        return hr::ok;
    }
    Hr set_pan(BufferId id, int32_t mb) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (mb < pan_left || mb > pan_right) return hr::invalid_param;
        if (!(v->flags & buffer_flag::ctrl_pan)) return hr::control_unavailable;
        v->pan = mb;
        return hr::ok;
    }
    Hr get_pan(BufferId id, int32_t& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (!(v->flags & buffer_flag::ctrl_pan)) return hr::control_unavailable;
        out = v->pan;
        return hr::ok;
    }
    Hr set_frequency(BufferId id, uint32_t hz) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (v->primary) return hr::control_unavailable;
        if (hz != 0 && (hz < frequency_min || hz > frequency_max)) return hr::invalid_param;
        if (!(v->flags & buffer_flag::ctrl_frequency)) return hr::control_unavailable;
        if (hz == 0) hz = v->format.sample_rate;
        v->frequency = hz;
        return hr::ok;
    }
    Hr get_frequency(BufferId id, uint32_t& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (v->primary) return hr::control_unavailable;
        if (!(v->flags & buffer_flag::ctrl_frequency)) return hr::control_unavailable;
        out = v->frequency;
        return hr::ok;
    }
    Hr set_notifications(BufferId id, std::span<const Notify> positions) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (v->primary || !(v->flags & buffer_flag::ctrl_position_notify)) return hr::control_unavailable;
        if (v->playing) return hr::invalid_call;
        for (const Notify& n : positions)
            if (n.offset != notify_offset_stop && n.offset >= v->data.size()) return hr::invalid_param;
        v->notifies.assign(positions.begin(), positions.end());
        std::stable_sort(v->notifies.begin(), v->notifies.end(), [](const Notify& a, const Notify& b) { return a.offset < b.offset; });
        return hr::ok;
    }

    // ---- 3D
    Hr set_listener(const Listener3D& l) override {
        if (l.rolloff_factor < 0 || l.rolloff_factor > 10 || l.doppler_factor < 0 || l.doppler_factor > 10 || l.distance_factor <= 0) return hr::invalid_param;
        std::lock_guard lock(mutex_);
        listener_ = l;
        push_scene();
        return hr::ok;
    }
    Listener3D listener() const override {
        std::lock_guard lock(mutex_);
        return listener_;
    }
    Hr set_buffer_3d(BufferId id, const Buffer3D& p) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (!v->has_3d || v->primary) return hr::control_unavailable;
        if (p.min_distance <= 0 || p.max_distance <= 0 || p.inside_cone_angle > 360 || p.outside_cone_angle > 360 || p.inside_cone_angle > p.outside_cone_angle ||
            p.cone_outside_volume < volume_min || p.cone_outside_volume > volume_max)
            return hr::invalid_param;
        v->b3d = p;
        sync_object(slot_of(id));
        return hr::ok;
    }
    Hr get_buffer_3d(BufferId id, Buffer3D& out) const override {
        std::lock_guard lock(mutex_);
        const Voice* v = find(id);
        if (!v) return hr::invalid_param;
        if (!v->has_3d || v->primary) return hr::control_unavailable;
        out = v->b3d;
        return hr::ok;
    }
    void set_environment(const ReverbParams& p) override {
        std::lock_guard lock(mutex_);
        env_ = p;
        if (renderer_) renderer_->set_environment(p);
    }
    Hr set_buffer_send(BufferId id, const EnvironmentSend& s) override {
        std::lock_guard lock(mutex_);
        Voice* v = find(id);
        if (!v || v->primary) return hr::invalid_param;
        v->send = s;
        return hr::ok;
    }

    // ---- output
    void set_output(const OutputLayout& layout, uint32_t latency_frames) override {
        std::lock_guard lock(mutex_);
        set_output_locked(layout, latency_frames);
    }
    OutputLayout output() const override {
        std::lock_guard lock(mutex_);
        return out_;
    }
    void set_renderer(std::shared_ptr<SpatialRenderer> r) override {
        std::lock_guard lock(mutex_);
        renderer_ = std::move(r);
        if (!renderer_) renderer_ = make_renderer(RendererKind::stereo);
        configure_renderer();
    }
    void set_notify_callback(NotifyFn fn, void* user) override {
        std::lock_guard lock(mutex_);
        notify_cb_ = fn;
        notify_user_ = user;
    }
    void set_format_callback(FormatChangedFn fn, void* user) override {
        std::lock_guard lock(mutex_);
        format_cb_ = fn;
        format_user_ = user;
    }

    void render(float* out, uint32_t frames) override {
        std::array<uint64_t, 64> fired;
        size_t fired_count = 0;
        NotifyFn cb = nullptr;
        void* user = nullptr;
        {
            std::lock_guard lock(mutex_);
            const uint32_t channels = out_.channels;
            while (frames) {
                if (fifo_count_ == 0) {
                    mix_block();
                    fifo_pos_ = 0;
                    fifo_count_ = cfg_.block_frames;
                }
                const uint32_t n = std::min(frames, fifo_count_);
                std::memcpy(out, fifo_.data() + size_t(fifo_pos_) * channels, size_t(n) * channels * sizeof(float));
                out += size_t(n) * channels;
                fifo_pos_ += n;
                fifo_count_ -= n;
                frames -= n;
            }
            cb = notify_cb_;
            user = notify_user_;
            fired_count = pending_count_;
            std::copy(pending_.begin(), pending_.begin() + pending_count_, fired.begin());
            pending_count_ = 0;
        }
        if (cb)
            for (size_t i = 0; i < fired_count; ++i) cb(user, fired[i]);
    }

    DeviceStats stats() const override {
        std::lock_guard lock(mutex_);
        DeviceStats s = stats_;
        for (size_t i = 1; i < voices_.size(); ++i) {
            if (voices_[i].used) ++s.buffers;
            if (voices_[i].used && voices_[i].playing) ++s.playing;
        }
        return s;
    }

    void lose_buffers() override {
        std::lock_guard lock(mutex_);
        for (size_t i = 1; i < voices_.size(); ++i)
            if (voices_[i].used) {
                voices_[i].lost = true;
                voices_[i].playing = false;
            }
    }

private:
    // ---- handles
    BufferId id_of(int slot) const { return BufferId{(voices_[size_t(slot)].generation << 12) | uint32_t(slot + 1)}; }
    int slot_of(BufferId id) const {
        const uint32_t slot = (id.value & 0xfff);
        if (slot == 0 || slot > voices_.size()) return -1;
        const Voice& v = voices_[slot - 1];
        if (!v.used || (id.value >> 12) != v.generation) return -1;
        return int(slot - 1);
    }
    Voice* find(BufferId id) {
        const int s = slot_of(id);
        return s < 0 ? nullptr : &voices_[size_t(s)];
    }
    const Voice* find(BufferId id) const { return const_cast<MixerDevice*>(this)->find(id); }
    int free_slot() const {
        for (size_t i = 1; i < voices_.size(); ++i)
            if (!voices_[i].used) return int(i);
        return -1;
    }

    // ---- cursors
    double step_of(const Voice& v) const { return out_.sample_rate ? double(v.frequency) / double(out_.sample_rate) : 1.0; }
    // Source position (frames, unwrapped from the Play) that the speaker is reproducing now.
    double heard_frames(const Voice& v) const {
        const double lat = double(latency_frames_ + fifo_count_) * v.last_step;
        double unwrapped = v.start + std::max(0.0, v.consumed - lat);
        if (v.looping) return std::fmod(unwrapped, double(v.frames));
        return std::min(unwrapped, double(v.frames));
    }
    uint32_t play_cursor_bytes(const Voice& v) const {
        const double f = v.playing ? heard_frames(v) : v.pos;
        const uint32_t frame = std::min<uint32_t>(uint32_t(f), v.frames ? v.frames - 1 : 0);
        return frame * v.frame_bytes;
    }
    uint32_t write_cursor_bytes(const Voice& v) const {
        // The first frame the mixer has not read yet plus one block (it may be mixing right now), and never closer to the play cursor than
        // the margin Windows gives (measured about 30 ms): data written at the write cursor is always in time.
        double ahead = double(cfg_.block_frames) * (v.playing ? v.last_step : 0.0);
        if (v.playing) {
            double queued = v.pos - heard_frames(v);   // frames mixed but not yet heard
            if (queued < 0) queued += v.looping ? double(v.frames) : 0.0;
            ahead = std::max(ahead, double(cfg_.write_margin_ms) * 0.001 * double(v.frequency) - std::max(0.0, queued));
        }
        double f = v.pos + ahead;
        if (v.playing) {
            if (v.looping) f = std::fmod(f, double(v.frames));
            else f = std::min(f, double(v.frames - 1));
        }
        return uint32_t(f) * v.frame_bytes;
    }

    // ---- 3D plumbing
    void sync_object(int slot) {
        if (!renderer_ || slot < 0) return;
        const Voice& v = voices_[size_t(slot)];
        ObjectParams o;
        o.position = v.b3d.position;
        o.velocity = v.b3d.velocity;
        o.min_distance = v.b3d.min_distance;
        o.max_distance = v.b3d.max_distance;
        o.rolloff = 1.0f;
        o.model = DistanceModel::inverse;
        o.cone_direction = v.b3d.cone_orientation;
        o.cone_inner_deg = float(v.b3d.inside_cone_angle);
        o.cone_outer_deg = float(v.b3d.outside_cone_angle);
        o.cone_outer_gain = millibels_to_amplitude(v.b3d.cone_outside_volume);
        o.head_relative = v.b3d.mode == Mode3D::head_relative;
        renderer_->set_object(id_of(slot).value, o);
    }
    void push_scene() {
        if (!renderer_) return;
        Listener l;
        l.position = listener_.position;
        l.velocity = listener_.velocity;
        l.forward = listener_.front;
        l.up = listener_.top;
        renderer_->set_listener(l);
        World w;
        w.doppler_factor = listener_.doppler_factor;
        w.rolloff_factor = listener_.rolloff_factor;
        w.distance_factor = listener_.distance_factor;
        w.speed_of_sound = 343.0f / listener_.distance_factor;   // world units per second when one unit is distance_factor meters
        renderer_->set_world(w);
    }
    void configure_renderer() {
        renderer_->configure(out_, cfg_.block_frames);
        renderer_->set_environment(env_);
        push_scene();
        for (size_t i = 1; i < voices_.size(); ++i)
            if (voices_[i].used && voices_[i].has_3d) sync_object(int(i));
    }
    void set_output_locked(const OutputLayout& layout, uint32_t latency_frames) {
        out_ = layout;
        if (out_.channels == 0) out_.channels = 2;
        if (!out_.channel_mask) out_.channel_mask = speaker::default_mask(out_.channels);
        latency_frames_ = latency_frames;
        fifo_.assign(size_t(cfg_.block_frames) * out_.channels, 0.0f);
        fifo_pos_ = fifo_count_ = 0;
        configure_renderer();
    }

    // ---- notifications
    void queue_notify(uint64_t token) {
        if (pending_count_ < pending_.size()) pending_[pending_count_++] = token;
    }
    void fire_stop(Voice& v, BufferId) {
        for (const Notify& n : v.notifies)
            if (n.offset == notify_offset_stop) queue_notify(n.token);
    }
    // Notifications whose offset the heard cursor passed in this block.
    void check_notifications(Voice& v) {
        if (v.notifies.empty() || !v.playing) return;
        const double lat = double(latency_frames_ + cfg_.block_frames) * v.last_step;   // heard = mixed - latency
        const double heard_unw = v.start + std::max(0.0, v.consumed - lat);
        if (heard_unw <= v.notify_from) return;
        const double size = double(v.frames);
        for (const Notify& n : v.notifies) {
            if (n.offset == notify_offset_stop) continue;
            const double o = double(n.offset / v.frame_bytes);
            // first crossing at o + k*size > notify_from and <= heard_unw (k >= 0)
            double k = std::ceil((v.notify_from - o) / size);
            if (k < 0) k = 0;
            double at = o + k * size;
            if (at <= v.notify_from) at += size;
            if (at <= heard_unw && (v.looping || at < size + 1e-9)) queue_notify(n.token);
        }
        v.notify_from = heard_unw;
    }

    // ---- the mixer
    static void convert_frame(const Voice& v, int64_t frame, float* out) {
        const uint32_t ch = v.format.channels;
        const uint8_t* p = v.data.data() + size_t(frame) * v.frame_bytes;
        switch (v.format.bits) {
            case 8:
                for (uint32_t c = 0; c < ch; ++c) out[c] = (float(p[c]) - 128.0f) * (1.0f / 128.0f);
                break;
            case 16:
                for (uint32_t c = 0; c < ch; ++c) {
                    int16_t s;
                    std::memcpy(&s, p + c * 2, 2);
                    out[c] = float(s) * (1.0f / 32768.0f);
                }
                break;
            case 24:
                for (uint32_t c = 0; c < ch; ++c) {
                    int32_t s = int32_t(uint32_t(p[c * 3]) << 8 | uint32_t(p[c * 3 + 1]) << 16 | uint32_t(p[c * 3 + 2]) << 24) >> 8;
                    out[c] = float(s) * (1.0f / 8388608.0f);
                }
                break;
            default:   // 32
                if (v.format.type == SampleType::ieee_float) {
                    for (uint32_t c = 0; c < ch; ++c) std::memcpy(&out[c], p + c * 4, 4);
                } else {
                    for (uint32_t c = 0; c < ch; ++c) {
                        int32_t s;
                        std::memcpy(&s, p + c * 4, 4);
                        out[c] = float(double(s) * (1.0 / 2147483648.0));
                    }
                }
        }
    }
    // A source frame by index with the buffer's loop rules; outside a non-looping buffer it is silence.
    static void fetch(const Voice& v, int64_t index, float* out) {
        const int64_t n = int64_t(v.frames);
        if (v.looping) {
            index %= n;
            if (index < 0) index += n;
        } else if (index < 0 || index >= n) {
            for (uint32_t c = 0; c < v.format.channels; ++c) out[c] = 0.0f;
            return;
        }
        convert_frame(v, index, out);
    }

    // Produces `frames` output-rate frames of voice `v` into v.block, advancing v.pos. Returns false if the voice ended during the block.
    bool produce(Voice& v, uint32_t frames, double step) {
        const uint32_t ch = v.format.channels;
        const Kernels& K = kernels();
        double pos = v.pos;
        bool ended = false;
        float tap[kernel_taps][8];
        const bool unity = std::fabs(step - 1.0) < 1e-9;
        for (uint32_t i = 0; i < frames; ++i) {
            float* o = v.block.data() + size_t(i) * ch;
            if (!v.looping && pos >= double(v.frames)) {
                ended = true;
                for (uint32_t c = 0; c < ch; ++c) o[c] = 0.0f;
                continue;
            }
            const double fl = std::floor(pos);
            const double frac = pos - fl;
            const int64_t i0 = int64_t(fl);
            if (unity && frac == 0.0) {
                fetch(v, i0, o);
            } else if (step <= 1.0 + 1e-9) {
                uint32_t phase = uint32_t(frac * kernel_phases + 0.5);
                for (uint32_t t = 0; t < kernel_taps; ++t) fetch(v, i0 - 7 + int64_t(t), tap[t]);
                const float* k = K.k[phase];
                for (uint32_t c = 0; c < ch; ++c) {
                    float acc = 0;
                    for (uint32_t t = 0; t < kernel_taps; ++t) acc += k[t] * tap[t][c];
                    o[c] = acc;
                }
            } else {
                // Downsampling (source rate above the output rate): average of linearly interpolated points over one output period.
                const uint32_t n = std::min<uint32_t>(uint32_t(std::ceil(step)), 8);
                float acc[8] = {};
                for (uint32_t j = 0; j < n; ++j) {
                    const double q = pos + (double(j) + 0.5) * step / double(n) - 0.5 * step;
                    const double qf = std::floor(q);
                    const float a = float(q - qf);
                    float s0[8], s1[8];
                    fetch(v, int64_t(qf), s0);
                    fetch(v, int64_t(qf) + 1, s1);
                    for (uint32_t c = 0; c < ch; ++c) acc[c] += s0[c] + (s1[c] - s0[c]) * a;
                }
                for (uint32_t c = 0; c < ch; ++c) o[c] = acc[c] / float(n);
            }
            pos += step;
            if (v.looping) {
                if (pos >= double(v.frames)) pos -= double(v.frames) * std::floor(pos / double(v.frames));
            }
        }
        v.consumed += double(frames) * step;
        v.pos = ended ? 0.0 : pos;
        if (!ended && !v.looping && pos >= double(v.frames)) ended = true;
        return !ended;
    }

    void mix_block() {
        const uint32_t frames = cfg_.block_frames;
        const uint32_t out_ch = out_.channels;
        float* out = fifo_.data();
        std::fill(out, out + size_t(frames) * out_ch, 0.0f);
        inputs_.clear();
        const float master = voices_[0].used && (voices_[0].flags & buffer_flag::ctrl_volume) ? millibels_to_amplitude(voices_[0].volume) : 1.0f;
        for (size_t slot = 1; slot < voices_.size(); ++slot) {
            Voice& v = voices_[slot];
            if (!v.used || !v.playing || v.frames == 0) continue;
            const BufferId id = id_of(int(slot));
            const bool object3d = v.has_3d && v.b3d.mode != Mode3D::disable;
            const float ratio = object3d ? renderer_->pitch_ratio(id.value) : 1.0f;
            const double step = double(v.frequency) * double(ratio) / double(out_.sample_rate);
            v.last_step = step;
            const bool alive = produce(v, frames, step);
            SourceBlock b;
            b.id = id.value;
            b.data = v.block.data();
            b.channels = v.format.channels;
            b.mask = v.format.effective_mask();
            b.send = v.send;
            const float volume = millibels_to_amplitude(v.volume) * master;
            if (object3d) {
                b.kind = SourceKind::object;
                b.gain[0] = volume;
            } else if (v.format.channels <= 2) {
                b.kind = SourceKind::stereo2d;
                float l, r;
                pan_gains(v.pan, l, r);
                b.gain[0] = volume * l;
                b.gain[1] = volume * r;
            } else {
                b.kind = SourceKind::bed;
                b.gain[0] = volume;
            }
            inputs_.push_back(b);
            check_notifications(v);
            if (!alive) {
                v.playing = false;
                v.consumed = 0;
                v.start = 0;
                fire_stop(v, id);
            }
        }
        renderer_->render(std::span<const SourceBlock>(inputs_.data(), inputs_.size()), out, frames);
        float peak = 0;
        for (size_t i = 0, n = size_t(frames) * out_ch; i < n; ++i) {
            const float a = std::fabs(out[i]);
            if (a > 1.0f) ++stats_.clipped_samples;
            peak = std::max(peak, a);
        }
        stats_.peak = peak;
        ++stats_.blocks_mixed;
    }

    Config cfg_;
    mutable std::mutex mutex_;
    std::vector<Voice> voices_;
    std::vector<SourceBlock> inputs_;
    std::shared_ptr<SpatialRenderer> renderer_;
    OutputLayout out_;
    WaveFormat primary_format_;
    uint32_t coop_ = coop::normal, latency_frames_ = 0;
    Listener3D listener_;
    ReverbParams env_;
    std::vector<float> fifo_;
    uint32_t fifo_pos_ = 0, fifo_count_ = 0;
    DeviceStats stats_;
    NotifyFn notify_cb_ = nullptr;
    void* notify_user_ = nullptr;
    FormatChangedFn format_cb_ = nullptr;
    void* format_user_ = nullptr;
    std::array<uint64_t, 64> pending_{};
    size_t pending_count_ = 0;
};

}  // namespace

std::unique_ptr<Device> make_device(const Config& config) { return std::make_unique<MixerDevice>(config); }

}  // namespace nfsu2::platform::audio::ds
