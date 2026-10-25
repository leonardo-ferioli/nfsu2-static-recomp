// Spatial audio stage: a pluggable renderer between the DirectSound semantics (ds::Device) and the audio sink.
//
//   ds::Device  --(per voice: PCM block + how it is placed)-->  SpatialRenderer  --(interleaved float32, output layout)-->  AudioSink
//
// It knows nothing about DirectSound, COM, guest memory or any game: it takes a 3D scene (listener pose; sources with position, velocity,
// cone, distance model, environment send) and ready-made speaker feeds (a "bed": stereo or multichannel), and produces the output channel
// layout. Other games and other consoles' audio layers can use it unchanged. NUE replaces it by its own native spatial module; the
// interface follows nue/mixer.h (listener, world, voice 3D parameters, left-handed coordinates, same attenuation models).
//
// Implementations (spatial_renderers.cpp): StereoRenderer (what DirectSound does by default), SpeakerRenderer (any layout up to 7.1,
// pairwise panning), BinauralRenderer (parametric HRTF, or a measured dataset through HrtfDataset), PlatformSpatializerRenderer (hook for
// Windows spatial audio / Android Spatializer / Apple PHASE, through a PlatformSpatializer backend).
#pragma once
#include <cstdint>
#include <memory>
#include <span>

#include "platform/audio/audio_types.hpp"

namespace nfsu2::platform::audio {

using SourceId = uint32_t;   // chosen by the caller (the DirectSound layer uses its buffer handle); 0 = none

// Coordinates are LEFT-HANDED like Direct3D and DirectSound: forward (0,0,1), up (0,1,0), a source at +x is to the listener's right.
struct Listener {
    Vec3 position{0, 0, 0}, velocity{0, 0, 0}, forward{0, 0, 1}, up{0, 1, 0};
};

struct World {
    float doppler_factor = 1.0f;     // 0 = off, 1 = real (DirectSound: 0..10)
    float speed_of_sound = 343.0f;   // world units per second (distance_factor already applied by the caller)
    float rolloff_factor = 1.0f;     // global multiplier of the per-source rolloff (DirectSound: 0..10)
    float distance_factor = 1.0f;    // meters per world unit (DirectSound's default is 1 m)
};

enum class DistanceModel : uint8_t { inverse, linear, exponential, none };

// How one source is placed. DirectSound's DS3DBUFFER maps onto this one to one.
struct ObjectParams {
    Vec3 position{0, 0, 0}, velocity{0, 0, 0};
    float min_distance = 1.0f;       // full volume inside
    float max_distance = 1e9f;       // no further attenuation beyond (the linear model is silent there)
    float rolloff = 1.0f;
    DistanceModel model = DistanceModel::inverse;
    Vec3 cone_direction{0, 0, 1};    // zero vector = omnidirectional
    float cone_inner_deg = 360.0f, cone_outer_deg = 360.0f, cone_outer_gain = 1.0f;   // gain beyond the outer cone, linear
    bool head_relative = false;      // position relative to the listener (DS3DMODE_HEADRELATIVE)
};

// Environment (an EFX-like effect model; EAX presets map onto it, see eax_to_efx in reverb.hpp). Only one environment is active at a time.
struct ReverbParams {
    float density = 1.0f, diffusion = 1.0f;
    float gain = 0.32f, gain_hf = 0.89f;                 // overall and high-frequency gain of the effect output
    float decay_time = 1.49f, decay_hf_ratio = 0.83f;    // seconds; HF decay relative to the mid decay
    float reflections_gain = 0.05f, reflections_delay = 0.007f;
    float late_reverb_gain = 1.26f, late_reverb_delay = 0.011f;
    float air_absorption_gain_hf = 0.994f, room_rolloff_factor = 0.0f;
    bool enabled = false;
};

// Per-source send into the environment and the effect of obstruction/occlusion on the direct path (EAX buffer properties map onto it).
struct EnvironmentSend {
    float direct_gain = 1.0f, direct_gain_hf = 1.0f;     // linear; the HF value is the gain at high frequencies relative to low
    float send_gain = 1.0f, send_gain_hf = 1.0f;
};

enum class SourceKind : uint8_t {
    object,      // mono (or downmixed) source placed in 3D by ObjectParams
    stereo2d,    // mono or stereo, not placed: gain per channel (volume and pan already applied), routed to the front pair
    bed          // speaker feeds in `mask` order (stereo or multichannel, 2D): mapped to the output layout
};

// One block of one source for one render call. `data` is interleaved float32, `frames` frames of `channels` channels.
struct SourceBlock {
    SourceId id = 0;
    SourceKind kind = SourceKind::stereo2d;
    const float* data = nullptr;
    uint32_t channels = 0;
    uint32_t mask = 0;               // speaker mask of the channels (0 = default for the channel count)
    float gain[2] = {1, 1};          // stereo2d: left, right gain; object and bed: gain[0] is the overall gain
    EnvironmentSend send;            // object and stereo2d: contribution to the environment
};

struct RendererCaps {
    bool binaural = false;           // output is headphones-style stereo with HRTF cues
    bool environment = false;        // reverb implemented
    bool platform = false;           // the platform's own spatializer is in the path
    uint32_t max_output_channels = 8;
};

// Thread: configure/set_* from the control thread, render from the mix thread; the caller serialises them (ds::Device holds one mutex
// around both). No allocation inside render().
class SpatialRenderer {
public:
    virtual ~SpatialRenderer() = default;
    virtual const char* name() const = 0;
    virtual RendererCaps caps() const = 0;
    // (Re)allocates all state for an output layout and the largest block that will be asked for. Resets the sources.
    virtual void configure(const OutputLayout& output, uint32_t max_block_frames) = 0;
    virtual void set_listener(const Listener&) = 0;
    virtual void set_world(const World&) = 0;
    virtual void set_environment(const ReverbParams&) = 0;
    virtual void set_object(SourceId, const ObjectParams&) = 0;       // creates the persistent state of an object source
    virtual void remove_source(SourceId) = 0;
    // Playback-rate ratio the Doppler effect asks for this object right now (1 = none). The mixer multiplies its resampling step by it.
    virtual float pitch_ratio(SourceId) const = 0;
    // Adds `frames` frames of every input to `out` (interleaved, output.channels channels; the caller zeroes it first).
    virtual void render(std::span<const SourceBlock> inputs, float* out, uint32_t frames) = 0;
    // Number of frames of latency the renderer itself adds (HRTF convolution, reverb pre-delay excluded).
    virtual uint32_t latency_frames() const { return 0; }
};

// ---- Head-related transfer functions -------------------------------------------------------------------------------------------------

// Source of measured HRIRs (a SOFA reader, Steam Audio's data...). The built-in renderer works without one (parametric model).
class HrtfDataset {
public:
    virtual ~HrtfDataset() = default;
    virtual uint32_t sample_rate() const = 0;
    virtual uint32_t length() const = 0;                                   // taps per ear
    // Fills left/right impulse responses for a direction (azimuth: 0 = front, +90 = right; elevation: +90 = up), interpolated.
    virtual void get(float azimuth_deg, float elevation_deg, float* left, float* right) const = 0;
};

// ---- Platform spatializers (Windows spatial audio, Android Spatializer, Apple PHASE) --------------------------------------------------
// The sink side of these is not implemented here (nothing in the game needs it, and it cannot be tested headless); the hook defines what a
// backend receives so that it can be added without touching the DirectSound layer.
class PlatformSpatializer {
public:
    virtual ~PlatformSpatializer() = default;
    virtual bool available() const = 0;
    // Static objects mapped to speaker channels of a bed, and dynamic objects with positions. Called per block.
    virtual void submit_bed(SourceId, const float* data, uint32_t channels, uint32_t mask, uint32_t frames, float gain) = 0;
    virtual void submit_object(SourceId, const float* mono, uint32_t frames, const Vec3& listener_relative_position, float gain) = 0;
    virtual void set_listener(const Listener&) = 0;
    virtual void begin_block(uint32_t frames) = 0;
    virtual void end_block() = 0;   // the backend delivers its output to the device itself; `out` of render() stays silent
};

// ---- Factories -----------------------------------------------------------------------------------------------------------------------
enum class RendererKind { stereo, speakers, binaural, platform };

struct RendererOptions {
    const HrtfDataset* hrtf = nullptr;            // binaural: nullptr = parametric model
    PlatformSpatializer* platform = nullptr;      // platform: the backend; when it is not available the renderer falls back to `fallback`
    RendererKind fallback = RendererKind::stereo;
    bool virtualize_beds = true;                  // binaural: put multichannel beds through virtual speakers (stereo beds stay L/R)
    bool virtualize_stereo = false;               // binaural: also place a stereo bed at +-30 degrees
    uint32_t max_sources = 128;
};

// Chooses the layout-appropriate renderer: stereo output -> StereoRenderer (or Binaural when asked); other layouts -> SpeakerRenderer.
std::unique_ptr<SpatialRenderer> make_renderer(RendererKind kind, const RendererOptions& options = {});

}  // namespace nfsu2::platform::audio
