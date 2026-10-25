# Research: spatial audio (DirectSound3D, EAX, HRTF, object audio, platform spatializers)

Status: written for the `legacy_dsound` / native spatial module work. Search date 2026-10-25. Licences were read from each repository's LICENSE
file (first lines); "NOASSERTION" in GitHub's metadata means it could not classify it, not that it is unlicensed. API facts for the platform
spatializers come from the official documentation pages linked below (checked by search; a few details not visible in the search summaries are
marked *to confirm when wiring*).

## 0. What SPEED2.EXE uses (measured, from the executable)

| Feature | Used? | Evidence |
|---|---|---|
| DirectSound 3D buffers / listener (`DSBCAPS_CTRL3D`, `IDirectSound3DBuffer`, `IDirectSound3DListener`) | **No** | The IIDs of both interfaces are absent from the image; the only buffer-description flags are `0x18000` (`GETCURRENTPOSITION2 \| GLOBALFOCUS`) and `1` (`PRIMARYBUFFER`); no `QueryInterface` call (slot 0) on any DirectSound object. |
| EAX (Creative) via `IKsPropertySet` | **No** | None of the EAX 1/2/3 property-set GUIDs and not the `IKsPropertySet` IID is in the image. The strings `EAXCar`, `EAXFrontEnd`, `EAXS_PFController` are EA's own engine class names ("EAX" = EA audio), unrelated to Creative EAX. Reverb exists, but in the game's software mixer (`SFXObj_Reverb`, `sound\fxedit\*.fx`). |
| Speaker configuration | **Own multichannel probe, 2 / 4 / 6 channels** | It calls `SetFormat` on the primary buffer with a `WAVEFORMATEXTENSIBLE` of 1, 2, 4 and 6 channels (channel masks `0x33` quad, `0x3F` 5.1) to learn what the device accepts, then uses the highest allowed by its settings (default 2 channels, 44.1 kHz, 16-bit). Never `SetSpeakerConfig`/`GetSpeakerConfig`, never 7.1, never headphone mode. |
| Dolby Digital / DTS / S/PDIF passthrough | **No** | No non-PCM format tag; the only sub-format GUID is KSDATAFORMAT_SUBTYPE_PCM. |
| Audio middleware doing its own panning | **Yes, inside the game** | EA's mixer in the translated code (strings `NFS3DMixCtl Pool`, `MixMapProc Pool`, `Master Channel Pool`, `AI STEREO`, mix maps `SOUND\MixMaps\*.mxb`) places sounds in the 2/4/6 output channels *before* DirectSound sees them. DirectSound only receives the finished interleaved speaker feeds. |

**Consequence for the design.** For this game the spatial need is *output-side*: take a guest-mixed 2/4/6-channel **bed** and present it
well on the user's real output (stereo speakers, stereo headphones with virtual speakers/HRTF, 5.1/7.1 speakers, a platform spatializer).
Object-based 3D (DirectSound3D, EAX) matters for the other games the same layer will serve, so it is implemented generically at Level A and
tested without this game.

## 1. Shortlist

| # | Project | URL | Covers | Language | Licence (read) | Last activity | How I use it |
|---|---|---|---|---|---|---|---|
| 1 | **OpenAL Soft** | https://github.com/kcat/openal-soft | The reference open spatial mixer: DS3D-like distance models, cones, Doppler, EFX reverb (EAX-style environments), HRTF via `.mhr` datasets, ambisonic decoding, UHJ. | C++ | `COPYING` is **LGPL-2** (library GPL v2) plus bundled pffft (BSD-like), Apache-2.0 and BSD-3 files | 2026-10-19 | Reference for the distance models, Doppler formula and EFX reverb parameter ranges (`EnvironmentSend` / `ReverbParams`). **Not copied** (LGPL). Its default HRTF dataset (`hrtf/Default HRTF.mhr`) has its own provenance and licence that I did not verify: do not ship it without checking. |
| 2 | **kcat/dsoal** | https://github.com/kcat/dsoal | DS3D + EAX 1-4 on top of OpenAL Soft: exact mappings (min/max distance → reference/max distance, rolloff, `DS3DMODE_HEADRELATIVE`, EAX presets → EFX). | C++ | LGPL-2.1 | 2026-10-25 | Reference for the EAX → EFX mapping table in the handover. Not copied. |
| 3 | **Steam Audio** (Valve) | https://github.com/ValveSoftware/steam-audio | HRTF binaural, ambisonics, distance/air absorption, occlusion/transmission, reflections and pathing, SOFA import; C API (`phonon`). | C++ (C API) | **Apache-2.0** (`LICENSE.md`) | 2026-03-25 | Best candidate for a **future borrowed HRTF/occlusion backend** behind `SpatialRenderer` (permissive, maintained, C API). Needs prebuilt binaries per platform or a build of its large dependency tree; not vendored now. Its built-in HRTF dataset licence is separate and must be checked before shipping. |
| 4 | **Resonance Audio** (Google) | https://github.com/resonance-audio/resonance-audio | Ambisonic rendering, HRTF (SADIE-based), room effects. | C++ | **Apache-2.0** | 2022-09-08, **repository archived** | Reference for ambisonic-to-binaural structure only. Archived: do not build on it. |
| 5 | **libmysofa** | https://github.com/hoene/libmysofa | Reader for SOFA (AES69) HRTF files (HDF5-based), with interpolation and a small lookup. | C | **BSD-3-Clause style** (Symonics, Christian Hoene; custom text, redistribution with notice) | 2026-09-08 | The way to load measured HRTFs (`HrtfDataset` implementation in a later step). Not vendored: the renderer ships a parametric model that needs no data file. |
| 6 | **libspatialaudio** (VideoLAN/VideoLabs) | https://github.com/videolabs/libspatialaudio | Ambisonic encode/decode, binaural decoding, higher-order ambisonics. | C++ | **LGPL-2.1-or-later**, also commercial | 2026-07-14 | Reference. **Flag: LGPL**; not copied. |
| 7 | **SONICOM Binaural Rendering Toolbox** (3D Tune-In derived) | https://github.com/sonicom-project (the toolbox repository was not found under that organisation name; search results only gave project pages) | Research toolbox: HRTF binaural, ITD customisation, reverb. | C++ | not verified | not verified | Not used. Listed so the NUE agents know it exists; verify the repository and its licence before relying on it. |
| 8 | **IAMF / Eclipsa Audio** (AOMedia): `libiamf`, `iamf-tools`, specification | https://github.com/AOMediaCodec/libiamf, https://github.com/AOMediaCodec/iamf-tools | Open object/scene-based immersive audio container + a decoder/renderer with a binaural path. | C / C++ | libiamf **BSD-3-Clause-Clear**; iamf-tools NOASSERTION (read before use) | 2026-10-21 / 2026-10-22 | Future: the open format to *export/consume* object audio. No game audio uses it. Not vendored. |
| 9 | **EBU ADM Renderer** (`ebu_adm_renderer`, `libbw64`) | https://github.com/ebu/ebu_adm_renderer, https://github.com/ebu/libbw64 | ITU-R BS.2127 reference renderer for ADM (Python) and BW64 reader (C++). | Python / C++ | BSD-3-Clause-Clear / Apache-2.0 | 2026-02-11 / 2024-04-13 | The loudspeaker panning algorithm of BS.2127 is the principled generalisation of the pairwise panner in `SpeakerRenderer`; reference only. |
| 10 | **Dolby Atmos** | proprietary | Cannot be reimplemented; not attempted. A game gets Atmos only through the *platform* (Windows spatial audio object API, below). | - | proprietary | - | Out of scope by decision. |
| 11 | **Dolby Digital (AC-3 / E-AC-3) decoding in FFmpeg** | https://github.com/FFmpeg/FFmpeg | Decoder exists in FFmpeg (LGPL; GPL parts if enabled), but AC-3 / E-AC-3 are **patented formats licensed by Dolby**; commercial distribution can need a licence. | C | LGPL-2.1+ (GPL-2+ for optional parts) | active | **Documented, not shipped.** The game does not use Dolby Digital. |

## 2. Platform spatializers (to wire in later through the sink, not to implement)

Confirmed from official documentation:

| Platform | API | What it takes | Notes |
|---|---|---|---|
| **Windows** (Windows Sonic for Headphones, Dolby Atmos for Headphones/Home Theater, DTS Headphone:X when installed) | **Windows spatial audio**: `ISpatialAudioClient` → `ActivateSpatialAudioStream` → `ISpatialAudioObjectRenderStream` (Windows 10 1703+, desktop apps); objects are `ISpatialAudioObject` (static objects map to speaker-bed channels, dynamic objects take `SetPosition`/`SetVolume`); `ISpatialAudioObjectRenderStreamNotify::OnAvailableDynamicObjectCountChange` reports changes in how many dynamic objects the renderer can do. https://learn.microsoft.com/en-us/windows/win32/coreaudio/render-spatial-sound-using-spatial-audio-objects | Dynamic **objects with positions** (plus a static bed), 48 kHz float. | The user chooses the spatial format in Windows settings; the app only discovers which object counts are available. A sink that exposes objects maps `SourceDesc` positions to `SetPosition`. |
| **Android 13+** | `android.media.Spatializer` (API 32): `AudioManager.getSpatializer()`, `canBeSpatialized(AudioAttributes, AudioFormat)`; opt out of double processing with `setIsContentSpatialized(true)` or `SPATIALIZATION_BEHAVIOR_NEVER`. https://developer.android.com/reference/android/media/Spatializer | The OS spatializes a **multichannel bed** (5.1) with the head-tracked renderer; the app does not pass positions. | So on Android the "platform spatializer hook" is *"output a clean 5.1 bed and set the right AudioAttributes"*, not objects. *To confirm when wiring:* the channel masks accepted. |
| **Apple** | **PHASE** (`PHASEEngine`, iOS 15+/macOS 12+/tvOS 17+/visionOS 1+): sources, listener, acoustic geometry, materials, reverb. https://developer.apple.com/documentation/phase/phaseengine | Object sources + listener. AVAudioEngine's spatial mixer is the simpler alternative. | Object model like `SpatialRenderer`'s scene: the hook for Apple maps sources to PHASE sources. *To confirm when wiring:* real-time PCM injection (PHASE is asset-oriented; push sources exist but need checking). |

## 3. Reuse decision

* **Nothing was copied.** Every permissively licensed candidate that matters (Steam Audio, libmysofa, libiamf) is a *large* dependency whose value
  appears only with measured HRTF data or object formats; the game needs neither. The spatial stage is therefore written as original code
  behind a `SpatialRenderer` interface designed so that those libraries drop in as additional implementations:
  - `ParametricHrtf` (spherical-head ITD/ILD model, no data file) is the built-in binaural renderer.
  - `HrtfDataset` is the seam where libmysofa/SOFA files or Steam Audio's HRTF plug in.
  - `PlatformSpatializerHook` is the seam for the three platform APIs above.
* The reverb is an original feedback delay network (FDN) with an EFX-like parameter set (`ReverbParams`) and a documented EAX → EFX mapping
  (the mapping *values* are the public EAX/EFX parameter ranges; OpenAL Soft and DSOAL were read as reference).
* Recommended order for the native module: see `docs/NUE_HANDOVER_DSOUND.md`, section "Spatial audio".
