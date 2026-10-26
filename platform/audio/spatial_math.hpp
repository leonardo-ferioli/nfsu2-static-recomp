// Pure scene mathematics of the spatial stage (no state, no allocation): listener space, distance models, cones, Doppler, speaker tables,
// bed matrices. Separate so that the tests and any other renderer can use exactly the same formulas.
#pragma once
#include <algorithm>
#include <cmath>

#include "platform/audio/spatial.hpp"

namespace nfsu2::platform::audio::math {

constexpr float pi = 3.14159265358979f;
constexpr float deg2rad = pi / 180.0f;

inline Vec3 sub(Vec3 a, Vec3 b) { return {a.x - b.x, a.y - b.y, a.z - b.z}; }
inline float dot(Vec3 a, Vec3 b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
inline Vec3 cross(Vec3 a, Vec3 b) { return {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x}; }
inline float length(Vec3 a) { return std::sqrt(dot(a, a)); }
inline Vec3 normalized(Vec3 a, Vec3 fallback = {0, 0, 1}) {
    const float l = length(a);
    return l > 1e-12f ? Vec3{a.x / l, a.y / l, a.z / l} : fallback;
}

// The listener's axes in the world (left-handed: x right, y up, z forward).
struct Basis {
    Vec3 right, up, forward;
};
inline Basis basis_of(const Listener& l) {
    Basis b;
    b.forward = normalized(l.forward, {0, 0, 1});
    b.right = normalized(cross(l.up, b.forward), {1, 0, 0});
    b.up = cross(b.forward, b.right);
    return b;
}

// Source position in listener space (x right, y up, z forward).
inline Vec3 to_listener_space(const Basis& b, Vec3 relative) { return {dot(relative, b.right), dot(relative, b.up), dot(relative, b.forward)}; }

struct Direction {
    float azimuth_deg = 0;     // 0 = front, +90 = right, +-180 = behind
    float elevation_deg = 0;   // +90 = up
    float lateral = 0;         // component along the interaural axis, -1 (left) .. 1 (right)
    float distance = 0;
};
inline Direction direction_of(Vec3 local) {
    Direction d;
    d.distance = length(local);
    d.azimuth_deg = std::atan2(local.x, local.z) * (180.0f / pi);
    const float horizontal = std::sqrt(local.x * local.x + local.z * local.z);
    d.elevation_deg = std::atan2(local.y, horizontal) * (180.0f / pi);
    d.lateral = d.distance > 1e-9f ? local.x / d.distance : 0.0f;
    return d;
}

// Distance attenuation (linear gain), same models as nue_attenuation_model / DirectSound's min-max distance rules.
inline float distance_gain(const ObjectParams& p, float world_rolloff, float distance) {
    if (p.model == DistanceModel::none) return 1.0f;
    const float min_d = std::max(p.min_distance, 1e-6f);
    const float max_d = std::max(p.max_distance, min_d);
    const float d = std::clamp(distance, min_d, max_d);
    const float rolloff = p.rolloff * world_rolloff;
    switch (p.model) {
        case DistanceModel::linear: return max_d > min_d ? std::clamp(1.0f - rolloff * (d - min_d) / (max_d - min_d), 0.0f, 1.0f) : 1.0f;
        case DistanceModel::exponential: return std::pow(d / min_d, -rolloff);
        default: return min_d / (min_d + rolloff * (d - min_d));
    }
}

// Cone: angle between the source's cone axis and the direction to the listener.
inline float cone_gain(const ObjectParams& p, Vec3 source_to_listener) {
    if (length(p.cone_direction) < 1e-9f || p.cone_inner_deg >= 360.0f) return 1.0f;
    const float c = std::clamp(dot(normalized(p.cone_direction), normalized(source_to_listener)), -1.0f, 1.0f);
    const float angle = std::acos(c) * (180.0f / pi);
    const float inner = p.cone_inner_deg * 0.5f, outer = std::max(p.cone_outer_deg, p.cone_inner_deg) * 0.5f;
    if (angle <= inner) return 1.0f;
    if (angle >= outer) return p.cone_outer_gain;
    return 1.0f + (p.cone_outer_gain - 1.0f) * (angle - inner) / (outer - inner);
}

// Doppler playback ratio. Physics: f' = f (c - vl) / (c - vs), with vl and vs the velocities of listener and source along the direction from the
// source to the listener (both positive when approaching each other's side). The nue_world_3d.doppler_factor scales both velocities.
inline float doppler_ratio(const World& w, Vec3 listener_pos, Vec3 listener_vel, Vec3 source_pos, Vec3 source_vel) {
    if (w.doppler_factor <= 0.0f || w.speed_of_sound <= 0.0f) return 1.0f;
    const Vec3 u = normalized(sub(listener_pos, source_pos), {0, 0, 0});   // source -> listener
    const float c = w.speed_of_sound, f = w.doppler_factor;
    const float limit = c / f;
    const float vl = std::min(dot(u, listener_vel), limit - 1e-3f);
    const float vs = std::min(dot(u, source_vel), limit - 1e-3f);
    return std::clamp((c - f * vl) / (c - f * vs), 0.1f, 10.0f);
}

// Speaker azimuth (degrees, 0 = front, + = right) of one speaker bit of a channel mask; `has_sides` moves the back pair to 150 degrees.
inline float speaker_azimuth(uint32_t bit, bool has_sides) {
    switch (bit) {
        case speaker::front_left: return -30.0f;
        case speaker::front_right: return 30.0f;
        case speaker::front_center: return 0.0f;
        case speaker::front_left_of_center: return -15.0f;
        case speaker::front_right_of_center: return 15.0f;
        case speaker::back_left: return has_sides ? -150.0f : -110.0f;
        case speaker::back_right: return has_sides ? 150.0f : 110.0f;
        case speaker::back_center: return 180.0f;
        case speaker::side_left: return -90.0f;
        case speaker::side_right: return 90.0f;
        default: return 0.0f;
    }
}

// Channel index (position among the set bits, in interleave order) of each speaker bit of a mask; the bit list in order.
struct SpeakerList {
    uint32_t bits[8] = {};
    float azimuth[8] = {};
    uint32_t count = 0;
};
inline SpeakerList speakers_of(uint32_t mask, uint32_t channels) {
    SpeakerList s;
    if (!mask) mask = speaker::default_mask(channels);
    const bool sides = (mask & (speaker::side_left | speaker::side_right)) != 0;
    for (uint32_t bit = 1; bit && s.count < 8 && s.count < channels; bit <<= 1)
        if (mask & bit) {
            s.bits[s.count] = bit;
            s.azimuth[s.count] = speaker_azimuth(bit, sides);
            ++s.count;
        }
    // A format with more channels than mask bits: remaining channels are anonymous (azimuth 0, treated as front).
    while (s.count < channels && s.count < 8) {
        s.bits[s.count] = 0;
        s.azimuth[s.count] = 0;
        ++s.count;
    }
    return s;
}

// Pairwise (two adjacent speakers) constant-power panning around the horizontal circle. `gains[i]` for the speakers of `out` (LFE excluded).
inline void pairwise_pan(const SpeakerList& out, float azimuth_deg, float* gains) {
    for (uint32_t i = 0; i < out.count; ++i) gains[i] = 0;
    // Gather the non-LFE speakers sorted by azimuth (insertion sort over at most 8).
    uint32_t order[8], n = 0;
    for (uint32_t i = 0; i < out.count; ++i) {
        if (out.bits[i] == speaker::lfe) continue;
        uint32_t j = n++;
        while (j > 0 && out.azimuth[order[j - 1]] > out.azimuth[i]) {
            order[j] = order[j - 1];
            --j;
        }
        order[j] = i;
    }
    if (n == 0) return;
    if (n == 1) {
        gains[order[0]] = 1.0f;
        return;
    }
    float az = std::fmod(azimuth_deg + 180.0f, 360.0f);
    if (az < 0) az += 360.0f;
    az -= 180.0f;   // (-180, 180]
    for (uint32_t k = 0; k < n; ++k) {
        const uint32_t a = order[k], b = order[(k + 1) % n];
        float aa = out.azimuth[a], bb = out.azimuth[b];
        if (k == n - 1) bb += 360.0f;   // wrap: from the last speaker around the back to the first
        float x = az;
        if (x < aa) x += 360.0f;
        if (x >= aa && x <= bb) {
            const float span = bb - aa;
            const float t = span > 1e-6f ? (x - aa) / span : 0.0f;
            gains[a] = std::cos(t * pi * 0.5f);
            gains[b] = std::sin(t * pi * 0.5f);
            return;
        }
    }
    gains[order[0]] = 1.0f;
}

// Downmix / pass-through matrix from a bed (mask_in, channels_in) to an output layout: m[in][out] (ITU-R BS.775 style coefficients).
struct BedMatrix {
    float m[8][8] = {};
};
inline BedMatrix bed_matrix(uint32_t mask_in, uint32_t channels_in, uint32_t mask_out, uint32_t channels_out) {
    BedMatrix r;
    const SpeakerList in = speakers_of(mask_in, channels_in), out = speakers_of(mask_out, channels_out);
    auto index_of = [&](uint32_t bit) -> int {
        for (uint32_t i = 0; i < out.count; ++i)
            if (out.bits[i] == bit) return int(i);
        return -1;
    };
    constexpr float h = 0.70710678f;
    auto add = [&](uint32_t i, uint32_t bit, float g) {
        const int o = index_of(bit);
        if (o >= 0) r.m[i][o] += g;
        return o >= 0;
    };
    for (uint32_t i = 0; i < in.count; ++i) {
        const uint32_t bit = in.bits[i];
        if (bit == 0) { add(i, speaker::front_left, h); add(i, speaker::front_right, h); continue; }
        if (index_of(bit) >= 0) { add(i, bit, 1.0f); continue; }
        switch (bit) {
            case speaker::lfe: break;   // dropped when the output has no LFE (ITU)
            case speaker::front_center:
                if (!add(i, speaker::front_left, h)) break;
                add(i, speaker::front_right, h);
                break;
            case speaker::front_left_of_center: if (!add(i, speaker::front_left, 1.0f)) add(i, speaker::front_center, h); break;
            case speaker::front_right_of_center: if (!add(i, speaker::front_right, 1.0f)) add(i, speaker::front_center, h); break;
            case speaker::back_left: if (!add(i, speaker::side_left, 1.0f)) add(i, speaker::front_left, h); break;
            case speaker::back_right: if (!add(i, speaker::side_right, 1.0f)) add(i, speaker::front_right, h); break;
            case speaker::side_left: if (!add(i, speaker::back_left, 1.0f)) add(i, speaker::front_left, h); break;
            case speaker::side_right: if (!add(i, speaker::back_right, 1.0f)) add(i, speaker::front_right, h); break;
            case speaker::back_center:
                if (index_of(speaker::back_left) >= 0) { add(i, speaker::back_left, h); add(i, speaker::back_right, h); }
                else { add(i, speaker::front_left, 0.5f); add(i, speaker::front_right, 0.5f); }
                break;
            case speaker::front_left: case speaker::front_right: break;   // an output without front speakers: nothing sensible
            default: break;
        }
    }
    return r;
}

}  // namespace nfsu2::platform::audio::math
