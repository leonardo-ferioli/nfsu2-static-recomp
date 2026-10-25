# Hand-over for the NUE agents: `legacy_dsound`

Written for the agents who will port the DirectSound part of the Need for Speed Underground 2 port into NUE Engine as the native legacy layer
`legacy_dsound` (and the spatial module underneath it). It says what the game really needs, every semantic that had to be got right and why,
what differs from real DirectSound, how it is tested, what is borrowed (nothing) and what is missing. No game data and no personal paths are
in it. Companion documents: [`NUE_RESEARCH_DSOUND.md`](NUE_RESEARCH_DSOUND.md), [`NUE_RESEARCH_SPATIAL_AUDIO.md`](NUE_RESEARCH_SPATIAL_AUDIO.md),
[`THIRD_PARTY_SOURCES.md`](THIRD_PARTY_SOURCES.md), [`PLATFORM_API.md`](PLATFORM_API.md) (the rule: no guest pointer, no COM object, no Windows type
crosses the line between the guest shim and the platform API).

**State.** The layer is implemented, compiled (32-bit and 64-bit), tested headless and tested against the real Windows DirectSound. In the
launcher it is behind `audio=system|nue` (default `system`, so nothing changes until the player asks): the build and the headless tests were
run; **no game session with audible output has been run** (the rules of this work forbid running the game; the first audible test is the
player's, with `--audio nue`).

## 1. Inventory: what SPEED2.EXE really does for audio

Measured on the executable (SHA-256 `f9dd86c054878ce6276beb07c1fd61874f7a1e4bf1f241b084c65b73e24168a7`) by `python tools/dsound_inventory.py <exe>`
plus reading the disassembly of the module it points to. Addresses are virtual addresses in that image.

**The whole DirectSound surface is one module of about 2.3 KB (0x725a6a..0x7263b5) plus a thread (0x7263c7).** Nothing else in the 3.6 MB of
code touches a DirectSound object: the three object pointers live in three globals (`0x8b4778` IDirectSound, `0x8b477c` primary buffer,
`0x8b4780` the secondary ring) and are referenced only inside that range. The game mixes, pans, reverberates and decodes in its own software
mixer (EA's, in the translated code: strings `NFS3DMixCtl Pool`, `MixMapProc Pool`, `Master Channel Pool`, `SFXObj_Reverb`, mix maps `*.mxb`, effect
presets `sound\fxedit\*.fx`, codecs ABK/Ginsu/XAS) and hands DirectSound finished interleaved speaker feeds in **one streaming ring**.

| Item | Result |
|---|---|
| DLLs and imports | `dsound.dll` ordinal 1 (`DirectSoundCreate`) only. No `dsound.dll` EAX/3D entry points, no `DirectSoundCreate8`, no `DirectSoundEnumerate`, no winmm `waveOut`/`mixer`/`midi`, no `ole32` COM creation, no XAudio/OpenAL/Miles/FMOD import. winmm is imported for timers only (`timeBeginPeriod`, `timeGetTime`, `timeSetEvent`...). |
| Interfaces used | `IDirectSound` (legacy, from `DirectSoundCreate`) and `IDirectSoundBuffer`. **No QueryInterface anywhere** (slot 0 is never called): the IIDs of `IDirectSound3DBuffer`, `IDirectSound3DListener`, `IDirectSoundNotify`, `IKsPropertySet`, `IDirectSound8` and the EAX property sets are **absent from the image**. |
| 3D, EAX, speaker config | **None.** No DirectSound3D listener or buffers, no EAX (the strings `EAXCar`, `EAXFrontEnd`... are EA's own class names), no `Get/SetSpeakerConfig`, no Dolby/DTS/non-PCM format (the only sub-format GUID in the image is `KSDATAFORMAT_SUBTYPE_PCM`). Surround is decided by the game itself: it probes **1, 2, 4 and 6 channel** primary formats (masks `0x33` quad, `0x3F` 5.1; plain `WAVEFORMATEX` up to 2 channels), uses the highest its settings allow (default 2 channels, 44.1 kHz, 16-bit; rates 11025-48000 are possible) and pans into those channels itself. |
| Buffers | exactly **one primary** (flags `DSBCAPS_PRIMARYBUFFER`, only `SetFormat` is called on it) and **one secondary streaming ring**: flags `0x18000` (`GETCURRENTPOSITION2 \| GLOBALFOCUS`), no `CTRLVOLUME/PAN/FREQUENCY/3D/POSITIONNOTIFY`, size `blockAlign * ((rate * 500 / 1000) & ~15)` = **0.5 s**, same format as the primary, played with `DSBPLAY_LOOPING`. A new ring is created by every probe step and released by the next. No static buffers, no per-sound buffers, no `DuplicateSoundBuffer`. |
| Threads and timing | one audio thread (`CreateThread` at 0x726454, priority `THREAD_PRIORITY_TIME_CRITICAL`, capped to above-normal by the launcher's policy) polling every ~10 ms (`timeBeginPeriod(1)`, `timeGetTime`, `Sleep(10 - elapsed)`), each poll bracketed by a pair of calls through function pointers (0x818088 / 0x81808c: the engine's audio lock). No notifications and no callbacks from DirectSound: the game polls. |

### Calls (who calls, how often, status)

"Layer" status is for `audio=nue`; with `audio=system` every call goes to the Windows DirectSound as before.

| Call | Called from | How often | Layer status | Notes |
|---|---|---|---|---|
| `DirectSoundCreate(NULL, &pDS, NULL)` (import `dsound.dll!#1`, thunk 0x770d16) | 0x725dd4 (capability probe), 0x725fe9 (start of real audio) | twice at start-up; again after a stall recovery (below) | implemented (`DsoundFacade::direct_sound_create`; `NativePlatform::override_import("#1")`) | Also accepts `DSDEVID_DefaultPlayback`/`DefaultVoicePlayback`; another GUID is `DSERR_NODRIVER`; aggregation is `CLASS_E_NOAGGREGATION`. |
| `IDirectSound::SetCooperativeLevel(hwnd, DSSCL_PRIORITY)` | 0x725e20, 0x72602f | once per create | implemented | `hwnd` is `GetForegroundWindow()`, or `GetDesktopWindow()` when that is NULL (0x725c7d). The window is validated with `IsWindow`. |
| `IDirectSound::GetCaps` | 0x725e3c | once, in the probe (`DSCAPS` size 0x60) | implemented | Flags `0xF1F` (primary mono/stereo/8/16-bit, continuous rate, secondary mono/stereo/8/16-bit), rates 100..200000; identical to what this Windows reports. |
| `IDirectSound::CreateSoundBuffer` | 0x725e76 and 0x72605c (primary, flags 1); 0x725bae (the ring, inside the format-probe function 0x725a85) | probe: 1 primary + 4 rings; real start: 1 primary + 1 ring | implemented | The ring is created with a `WAVEFORMATEXTENSIBLE` (`cbSize` 22) above 2 channels. A failing `CreateSoundBuffer` makes the game conclude that the format is unsupported. |
| `IDirectSoundBuffer::SetFormat` (primary) | 0x725b13 | once per probed channel count (1, 2, 4, 6) and once for the chosen one | implemented | Plain `WAVEFORMATEX` for 1-2 channels, extensible for 4 and 6. The primary's channel count drives the engine's sink layout. |
| `IDirectSoundBuffer::Lock` (ring) | 0x7260a1 (whole ring, once), 0x726268 (every poll, once or twice) | ~100 per second | implemented | **Always `ppv2 = NULL`, `pcb2 = NULL`, flags 0**: the game splits a wrapping write into two separate Locks itself, so the two-region path is never used by it. |
| `IDirectSoundBuffer::Unlock` | 0x7260cb, 0x72629c | with every Lock | implemented | `Unlock(ptr, len, NULL, 0)`. |
| `IDirectSoundBuffer::Play(0, 0, DSBPLAY_LOOPING)` | 0x7260d9 (start), 0x72639b (restart when `GetStatus` says not playing) | start, and after any stop | implemented | |
| `IDirectSoundBuffer::GetStatus` | 0x72611a | every poll | implemented | Tests bit 2 (`BUFFERLOST`) -> `Restore`; bit 1 (`PLAYING`) clear -> `Play` again. |
| `IDirectSoundBuffer::GetCurrentPosition(&play, NULL)` | 0x72614e | every poll | implemented | **Only the play cursor is read; the write cursor argument is NULL.** |
| `IDirectSoundBuffer::Restore` | 0x7263a8 | only if the buffer is lost | implemented | `GLOBALFOCUS` makes loss unlikely. |
| `Release` (secondary, primary, device) | 0x725b2a, 0x725bc1..0x725bed, 0x725f19..0x725f43 | shutdown, probe steps, stall recovery | implemented | The game releases in the order secondary, primary, device. |
| every other `IDirectSound`/`IDirectSoundBuffer` method, `IDirectSoundNotify`, `IDirectSound3D*`, `IKsPropertySet` | never | - | implemented where DirectSound defines it (needed by other games) but never reached by this game | `IKsPropertySet`/EAX is **not offered** (`QueryInterface` -> `E_NOINTERFACE`). |

### The polling loop (the behavioural contract of the ring)

Reading 0x7260f7..0x7263b5: every ~10 ms the game (1) `GetStatus` (restore / replay when needed); (2) `GetCurrentPosition(&play, NULL)`;
(3) **stall detector**: if `play` is the same as in the previous poll 100 times in a row (about 1 s) it releases secondary, primary and device and runs
the whole start-up again; (4) computes the position it must have written up to = `play + lead`, with `lead = (30 ms + adaptive margin) * rate`,
the margin starting at 15 ms and growing to the largest observed gap between polls (re-evaluated every 1000-3000 polls); positions are in frames and the target is rounded down to 16 frames;
(5) asks its mixer for exactly the missing bytes and writes them with one or two `Lock`/`Unlock` pairs (never reading the data back), and (6)
sleeps the rest of 10 ms. The ring is 0.5 s long, so the game keeps about 45-75 ms ahead of the play cursor.

What this demands of an implementation, in order of how much it matters:

1. **The play cursor must advance while the buffer plays** (the stall detector rebuilds the whole audio every second if it does not) and must
   advance at the real-time rate of the output, not faster or slower: the game derives how many frames to produce from it.
2. A write at `play + lead` must be heard (the data written to a ring region that has not been mixed yet must be audible): `Unlock` publishes data
   immediately, in both layers.
3. `GetStatus` and `GetCurrentPosition` must be cheap (called 100 times per second from a time-critical thread).
4. Format negotiation must answer like Windows so that the probe settles on the same channel count.
5. Latency: a 40 ms output buffer plus the game's own 45-75 ms lead is comfortable; the layer reports the play cursor behind what the mixer has
   mixed by the sink's latency, so the game's lead stays correct whatever the output buffer is.

## 2. Architecture

```
 translated game (guest, 32-bit, stdcall/COM)
   |  call [vtable+slot] -> method token         NativePlatform::add_method_token / override_import("#1")   (dsound_install.cpp: glue, the only
   |                                                                                                       code that knows NativePlatform)
 DsoundFacade   (dsound_facade.*: guest ABI: COM objects in guest memory, refcounts, QueryInterface, WAVEFORMATEX/DSBUFFERDESC/DS3D structs,
   |             GUIDs, event handles, Lock staging mirror)                            <- the only game-aware part; no host pointer leaks in
   |  plain C++ calls, handles (BufferId), spans, DirectSound HRESULTs as integers
 ds::Device     (Level A: ds_device.hpp, MixerDevice in ds_device.cpp: DirectSound semantics, software mixer, cursors, 3D, notifications)
   |  per voice: a float32 block + how it is placed (SourceBlock)
 SpatialRenderer (spatial.hpp: stereo | speakers | binaural(HRTF) | platform spatializer; reverb)        <- generic, no DirectSound, no game
   |  interleaved float32 in the output layout
 AudioSink      (sink.hpp: shaped like include/nue/audio.h; WASAPI sink on Windows, deterministic NullSink for tests)
```

* **Level A knows nothing about guest pointers or COM**: buffers are `BufferId`; `Lock` returns byte *regions*, the facade keeps a guest-visible
  **mirror** of each ring (Lock hands out pointers into the mirror, `Unlock` passes the written bytes to Level A). On a 64-bit host the mirror is
  the only guest-arena memory involved.
* **Level A returns DirectSound's HRESULT values** as plain integers, so that the facade passes them through and the differential test can compare.
* **The engine** (`audio_engine.*`) wires Device + renderer + sink: it opens the sink, tells the device the output layout and the sink's latency,
  picks the renderer (stereo output -> `StereoRenderer`, more channels -> `SpeakerRenderer`, or what `audio_spatial=` says), and when the
  application sets a primary format with 4 or 6 channels it **reopens the sink** with that many channels (falling back to the endpoint's own
  layout; the renderer then down-mixes with ITU coefficients).
* The mixer renders in fixed blocks of 256 frames behind a small FIFO, so **the output does not depend on how the sink chops its requests**
  (tested: the same bytes for any chunking).

### File map (`platform/audio/`)

| File | What | Origin |
|---|---|---|
| `audio_types.hpp`, `sink.hpp`, `null_sink.*`, `win32/wasapi_sink.*` | formats, sink interface (NUE-shaped), deterministic sink with output hash, WASAPI shared-mode event-driven sink | original |
| `ds_device.hpp/.cpp` | Level A + software mixer (static/ring voices, cursors, volume/pan/frequency, notifications, 3D, 16-tap sinc resampler) | original |
| `spatial.hpp`, `spatial_math.hpp`, `spatial_renderers.cpp`, `reverb.*` | spatial stage: scene math, stereo/speaker/binaural/platform renderers, FDN reverb, EAX2 -> EFX mapping | original |
| `dsound_facade.*` | guest ABI facade (5 COM interfaces, 75 vtable slots) | original |
| `dsound_install.*` | launcher glue (method tokens, `override_import("#1")`, WASAPI engine) | original |
| `audio_engine.*` | engine | original |
| `audio_tests.cpp`, `dsound_facade_tests.cpp`, `dsound_differential_tests.cpp`, `dsound_install_test.cpp`, `wasapi_smoke_test.cpp`, `test_guest.hpp` | tests (section 5) | original |
| `tools/dsound_inventory.py` | reproducible inventory of any executable's DirectSound use | original |

### Mapping onto NUE's own API (what `legacy_dsound` should call)

| DirectSound concept | NUE (`include/nue/mixer.h`, `audio.h`) | Gap |
|---|---|---|
| secondary buffer that the application writes while it plays | `NUE_VOICE_RING` voice, `nue_voice_ring_write` at `Unlock`, `nue_voice_ring_get_cursors` | A ring voice **always loops**: a one-shot DirectSound buffer (`Play` without `DSBPLAY_LOOPING`, stops at the end, position back to 0, stop notification) needs a ring voice flag `ONESHOT` or an equivalent. Copy-at-`Play` into a static buffer is wrong because the application may keep writing while it plays. |
| play cursor, write cursor | `nue_voice_ring_get_cursors` | Same meaning. Windows keeps the write cursor **about 30 ms** ahead of the play cursor (measured); `ds::Config::write_margin_ms` does that. NUE's "play + pending block + device latency" is fine but should be at least that for compatibility with games that write at the write cursor. |
| volume in hundredths of dB | `nue_centibels_to_linear` | Matches (`10^(mB/2000)`; -10000 is silence). |
| pan in hundredths of dB | `nue_pan_from_centibels` / constant-power pan | **Different law.** DirectSound's pan attenuates only the **far** channel by `|pan|` mB (the near channel stays at unity, a centred sound is at unity in both). NUE's constant-power law is -3 dB per channel at the centre: mapping DirectSound pan onto it lowers every centred sound by 3 dB. Needed: a balance mode or a per-channel gain pair (`ds::pan_gains` is the reference). |
| frequency | `nue_voice_set_frequency` | Matches. NUE resamples linearly; the game plays 44.1 kHz material through 48 kHz devices all the time, where a windowed-sinc (16 taps here) is audibly cleaner: recommended for fixed ratios. |
| notifications | `nue_voice_ring_set_notifications` | No `DSBPN_OFFSETSTOP` (notification at stop). |
| 3D listener/buffers | `nue_listener`, `nue_world_3d`, `nue_voice_3d` | `ds::Buffer3D` / `ObjectParams` map one to one (cones are full angles; DirectSound's min/max distance, rolloff and Doppler factors included). |
| multichannel secondary buffers (4/6/8 channels) | ring voice with a `spec` of up to 8 channels | Needs a **bed mapper** (speaker feeds to the output layout): `spatial_math.hpp: bed_matrix()` is the reference (ITU-R BS.775 style, tested). |
| primary buffer volume | master bus | See deviations (Windows maps it onto the endpoint volume). |
| the output | `nue_audio_stream_create` (callback model) | `AudioSink` is a transcription of it: `SinkDesc` <-> `nue_audio_stream_desc`, `frames_played` <-> `nue_audio_stream_get_position`, `latency()` <-> `get_latency`, `stats()` <-> `get_stats`. |

## 3. Semantics that had to be got right (and the bugs found)

Everything in this table is checked by a test. Items marked **(Windows)** were found by the differential test against the real system
DirectSound of the machine (Windows 11, DirectSound emulation over WASAPI); the first run had **39 differences**, all fixed or documented;
they are a list of things a paper reading of the documentation gets wrong.

| Semantic | Right behaviour | How it was found |
|---|---|---|
| Buffer size not a multiple of the frame | **rounded up** to whole frames: 4001 bytes of 4-byte frames -> 4004; 7 -> 8; 4096 of 6-byte frames -> 4098 | **(Windows)** |
| `CTRL3D` | accepted for a **stereo** buffer and together with `CTRLPAN` (mixed down / pan ignored for 3D); the docs say mono only | **(Windows)** |
| `DSBCAPS_LOCHARDWARE` | `E_NOTIMPL`, not `DSERR_ALLOCATED` | **(Windows)** |
| Malformed format | `E_INVALIDARG` for 0 channels, 0 or non-multiple-of-8 bits, wrong `nBlockAlign`, rate outside 100..200000 - for `CreateSoundBuffer` and for primary `SetFormat` alike; more than 2 channels need `WAVEFORMATEXTENSIBLE` (plain: `E_INVALIDARG` for a buffer, `DSERR_ALLOCATED` for primary `SetFormat`); 9+ channels extensible: `E_INVALIDARG`; unknown tag: `E_NOTIMPL` for a buffer, **`S_OK` ignored** for primary `SetFormat` | **(Windows)** |
| Order of checks in the controls | **range first, control flag second**: `SetVolume(1)` on a buffer without `CTRLVOLUME` is `E_INVALIDARG`, `SetVolume(-100)` there is `DSERR_CONTROLUNAVAIL`. Same for pan and frequency (`SetFrequency(0)` = the buffer's own rate) | **(Windows)** |
| `Lock` with `DSBLOCK_ENTIREBUFFER` | the whole buffer **starting at the given offset** and wrapping (offset 123 -> regions 3877 and 123 bytes), not forced to offset 0 | **(Windows)** |
| Several outstanding `Lock`s | allowed; `Unlock` matches the pointers to one of them, else `E_INVALIDARG` | **(Windows)** |
| `Lock` that wraps without a second pointer | succeeds, offering only the first region | **(Windows)** |
| `GetStatus` of a software buffer | no location bit (0 when stopped, 1/5 when playing/looping) | **(Windows)** |
| `GetCurrentPosition(NULL, NULL)` | `E_INVALIDARG` | **(Windows)** |
| Write cursor margin | about 30 ms ahead of the play cursor (30.0 ms measured on every poll) | **(Windows)** |
| Stopped buffer | both cursors equal the position; a `Stop` keeps the position where it was **heard**, not where the mixer had got to | **(Windows)** + unit test |
| One-shot buffer at its end | stops by itself, status clears, play cursor back to 0 | **(Windows)** |
| `SetNotificationPositions` while playing | `DSERR_INVALIDCALL`; without `CTRLPOSITIONNOTIFY`: `DSERR_CONTROLUNAVAIL`; offsets are byte offsets, `DSBPN_OFFSETSTOP` signals at stop | **(Windows)** |
| Primary buffer: `SetFormat` at `DSSCL_NORMAL` | `DSERR_PRIORITYLEVELNEEDED`; a second request for the primary returns the **same object** with one more reference; `Play` needs `DSBPLAY_LOOPING` | **(Windows)** |
| Cursors while mixing in blocks | the play cursor is `mixed - (sink latency + frames still queued)`, the write cursor is never closer than 30 ms | design; exact values tested |
| The cursor never stands still while playing | the game rebuilds its audio after 100 identical polls | reading of the game |
| Gain ramps start at the target | a voice's first block used to ramp up from silence (the renderer's "previous gain" was 0): the first 256 frames of every sound were faded in and no bit-exact test passed | **bug found by the exact-playback test** |
| Doppler sign | the ratio is `(c - vl)/(c - vs)` with velocities along **source -> listener**; the first version had it inverted (an approaching source played lower) | **bug found by the math test** |
| Resampling | 44.1 kHz -> 48 kHz must not add images or change level: 16-tap Blackman-windowed sinc, DC gain exactly 1 at every phase, maximum error 0.5 % at 1 kHz | tests |
| Output independent of the caller's chunking | same samples for any request sizes | test |
| Determinism | same call sequence -> same output hash, identical in the 32-bit (SSE, no x87) and the 64-bit build | test |

## 4. Deviations from real DirectSound

| Deviation | Why / what to do |
|---|---|
| Primary buffer `SetVolume` is a **master gain** of our mixer. On Windows 11 it drives the *endpoint* volume (the differential test saw `-300` read back as `-290`; the test no longer touches it). | Changing the user's system volume from a game is a bug, not a feature. |
| The play cursor comes from the mixed position minus the sink's reported latency, not from a hardware clock. | There is none; the null sink makes it exact. |
| Resampling is a 16-tap sinc, not Windows' resampler; downsampling (source rate above the output) is a box average of linear points. | Quality; both are tested for level. |
| No hardware voices (`DSCAPS` max hardware = 0); `LOCDEFER`, `STATIC`, `STICKYFOCUS`, `MUTE3DATMAXDISTANCE` are accepted and ignored. Buffers are never lost by focus changes (only `lose_buffers()` for tests). `GLOBALFOCUS` is therefore the effective behaviour, which is what the game asks for. | The game never loses audio on Windows either. |
| `CTRLFX` (DirectSound8 effects) returns `E_NOTIMPL`; `IDirectSound8` is not offered. | Not used by the game. |
| EAX (`IKsPropertySet`) is not exposed. The reverb/occlusion **model** exists (`ReverbParams`, `EnvironmentSend`, `eax2_to_efx`, `eax2_to_send`), but there is no property-set facade. | Not used by the game; add the facade when a game needs EAX. |
| DirectSound3D uses our renderer's pan law (balance), not DirectSound's HRTF algorithms (`DS3DALG_HRTF_*` are accepted and ignored); the binaural renderer is chosen by the user, not by the buffer. | Spatialisation is the player's choice here. |
| `GetSpeakerConfig` answers from the output layout, `SetSpeakerConfig` is accepted and ignored. | The output layout follows the device and the primary format. |
| Stats: `underruns` of the mixer are not counted (the sink counts its own). | Not needed by the game. |

## 5. Tests and how to verify

All headless. Build and run (any configuration, 32-bit adds `-DCMAKE_CXX_FLAGS="-m32 -msse2"`):

```
cmake -S . -B build_audio -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Release
cmake --build build_audio --target audio_tests dsound_facade_tests dsound_differential_tests wasapi_smoke_test
build_audio/audio_tests          # Level A, mixer, spatial renderers, reverb, engine: 426+ checks, deterministic
build_audio/dsound_facade_tests  # the guest ABI: the game's exact call sequence, COM rules, 3D, notifications: ~970 checks
build_audio/dsound_differential_tests   # the same calls on the REAL system DirectSound and on the layer: ~300 comparisons
build_audio/wasapi_smoke_test    # the WASAPI sink and the engine on the real endpoint (silence), including an endpoint loss
ctest --test-dir build_audio -R "audio|dsound|wasapi"
ctest --test-dir build32 -R fast_dsound_install   # (32-bit, full project build) the launcher glue end to end through NativePlatform
python tools/dsound_inventory.py <path to SPEED2.EXE>      # reproduces section 1
```

| Test | What it proves |
|---|---|
| `audio_tests` | units (centibels, pan); creation/validation matrix; Lock regions; **bit-exact pass-through** at the output rate; 8/24/32-bit and float conversion; volume/pan/frequency/master volume levels; resampling error and DC gain; exact cursor values with 10 ms latency and 256-frame blocks; stop/seek/one-shot; **chunking independence**; notifications; duplicate; 5.1 -> stereo ITU downmix, 5.1 -> 5.1 pass-through, stereo stays on the front pair; DS3D (distance law, cone, disable, validation); Doppler; listener orientation; scene math; pairwise panning conserves power at every azimuth; stereo/speaker renderers; **binaural ITD (31 +- 2 samples at 90 degrees, theory 31.5), ILD >= 6 dB, mirror symmetry bit-exact, rear darker than front**, virtual speakers for beds; measured-HRTF dataset plumbing (convolution exact); platform hook; **reverb RT60 within -25 %/+30 % of `decay_time` for 0.8, 1.5 and 3 s**, HF damping, disabled = bit-exact silence; EAX2 mappings; engine reopening the sink for a 6-channel primary; null-sink bookkeeping; **scripted session hash `0x50ad3b844002d6bd`** (same in 32-bit and 64-bit). |
| `dsound_facade_tests` | the game's start-up and polling replayed call for call through vtables of tokens (probe 1/2/4/6, 0.5 s ring, refill loop with wrapping Locks for 2 s of audio, teardown, re-creation as after a stall, a 5.1 session reopening the sink); not one call fails; COM rules (QueryInterface graph, shared refcounts, the device outlives its buffers); argument validation; Lock/Unlock discipline; 3D buffer and listener through the ABI incl. deferred settings; notification events. Words popped by each method are checked against the number pushed. |
| `dsound_differential_tests` | **296 comparisons against the real Windows DirectSound, 0 differences**: HRESULTs of ~120 argument combinations, `GetCaps` structures, Lock lengths, status values, cursor behaviour in real time (the real write-play margin is 30.0 ms, ours 30.0 ms), the game's own sequence. Skips (exit 0) on a machine without an output device. It plays only zero-filled buffers. |
| `dsound_install_test` (32-bit) | the launcher glue with a real `NativePlatform` and the guest image mapped: the game's own import slot (IAT 0x78302c) leads to the facade, a guest-style sequence (create, cooperative level, primary, SetFormat, the 0.5 s ring, Lock/Unlock of a tone, Play, GetCurrentPosition, GetStatus, Release) runs through vtable tokens with stdcall stacks, each call pops exactly its arguments, and the tone reaches the sink. |
| `wasapi_smoke_test` | the real WASAPI endpoint: opens, the device clock advances, the ring's cursor moves, 0 underruns in 0.5 s, a 6-channel primary on a stereo endpoint is down-mixed by our renderer (the sink never asks the endpoint for more channels than it has); **endpoint loss**: the test drops the endpoint while a ring plays - the cursor keeps moving without a device and the default endpoint is taken again within about a second. |

## 6. Spatial audio

**What the game needs.** Nothing object-based: it uses no DirectSound3D and no EAX (section 1). Its own mixer places sounds in 2, 4 or 6 channels.
What the player needs is to hear those channels well on whatever is plugged in: stereo speakers, headphones, a 5.1 system. That is a *bed*
problem (speaker feeds to an output layout), solved here by `bed_matrix()` (down/up-mix) and, for headphones, virtual speakers through the
binaural renderer. DirectSound3D and EAX are implemented generically because other games and other consoles' layers will need them.

**What is implemented** (`spatial.hpp`, all original, all tested deterministically):

* `SpatialRenderer`: listener (left-handed, like Direct3D/DirectSound and `nue_listener`), world (Doppler, rolloff, speed of sound), per-source
  `ObjectParams` (position, velocity, min/max distance, rolloff, distance model inverse/linear/exponential/none, cone, head-relative), environment,
  `SourceBlock` inputs of three kinds: `object` (mono point source), `stereo2d` (gain pair, routed to the front pair), `bed` (speaker feeds with a mask).
* `StereoRenderer` (what DirectSound does by default: balance pan, near channel at unity), `SpeakerRenderer` (any layout up to 7.1: pairwise
  constant-power panning on the horizontal circle from the channel mask, LFE never receives an object), `BinauralRenderer` (parametric spherical-head
  model: Woodworth interaural time difference, head-shadow low-pass and level difference, rear high-frequency loss; or **measured HRIRs through
  `HrtfDataset`**), `PlatformSpatializerRenderer` (hook: objects and beds go to a `PlatformSpatializer` backend, falls back when it is unavailable).
* Reverb: an 8-line feedback delay network (Householder matrix, per-line absorption so that the high frequencies decay at `decay_time *
  decay_hf_ratio`), EFX-style `ReverbParams`, `eax2_to_efx` and `eax2_to_send` (obstruction/occlusion).
* Beds: ITU-style down-mix (centre and surrounds at -3 dB, LFE dropped), pass-through, stereo stays on the front pair.
* Doppler is returned to the mixer as a playback-rate ratio (`pitch_ratio`).

**What is borrowed.** Nothing. (Candidates and licences: `NUE_RESEARCH_SPATIAL_AUDIO.md`: OpenAL Soft LGPL-2, DSOAL LGPL-2.1, libspatialaudio LGPL-2.1,
Steam Audio Apache-2.0, libmysofa BSD-style, libiamf BSD-3-Clause-Clear, Resonance Audio Apache-2.0 but archived. Dolby Atmos is proprietary and not attempted;
Dolby Digital decoding in FFmpeg has commercial licensing implications and is neither shipped nor needed.)

**What remains.**

1. A **measured HRTF**: `ParametricHrtf` is a head model, not a person. Plug a SOFA reader (libmysofa, BSD-style) or Steam Audio's data behind
   `HrtfDataset`; the convolution path is already exercised by a synthetic dataset. Check the licence of any dataset separately from the code that reads it.
2. **Elevation** is computed but not rendered by the parametric model (no pinna cues); the speaker renderer is horizontal only (no height layers).
3. **Platform spatializers** (`PlatformSpatializer` has no real backend): Windows spatial audio objects (`ISpatialAudioClient`, `ISpatialAudioObjectRenderStream`),
   Android 13+ `Spatializer` (it takes a clean 5.1 bed, not objects), Apple PHASE. Confirmed APIs are in the research document; none was wired.
4. **EAX `IKsPropertySet` facade** on top of `eax2_to_efx`/`eax2_to_send` (EAX 1, 3, 4 mappings are not written; the EFX model has the fields).
5. Distance-based air absorption and the `room_rolloff_factor` of the environment are parameters but not applied to the send.
6. Per-source `direct_gain_hf` uses a one-pole filter; a proper shelf would match EAX curves better.

**Recommended order for the native module.** (1) Port `SpatialRenderer`'s *interface* and `spatial_math.hpp` as they are (they follow `nue/mixer.h` on
purpose) and the **bed mapper**: that alone fixes surround on stereo devices for any legacy layer. (2) Add the stereo renderer's balance pan as a
mode of `nue_voice_set_pan` (section 2, gaps). (3) Speaker renderer for 5.1/7.1 outputs. (4) The binaural renderer with `HrtfDataset` + a SOFA
loader, default HRTF chosen after a licence review. (5) Reverb/EFX as a bus effect (`NUE_EFFECT_REVERB` exists; keep the EAX mapping in the legacy layer).
(6) Platform spatializers through the sink, one per platform layer, starting with Windows spatial audio objects.

## 7. What is original, what is borrowed, licences

Original: every file listed in section 2. Borrowed: **none** (see `THIRD_PARTY_SOURCES.md`, which lists what was only consulted, with commits).
Licences found while researching (flagged for the review): **LGPL**: Wine's dsound (2.1+), DSOAL (2.1), OpenAL Soft (library GPL v2 + Apache/BSD parts),
libspatialaudio (2.1+, also commercial), FFmpeg decoders; **GPL**: UnleashedRecomp (3.0), ReactOS tree; **no licence / proprietary** (so unusable
and not used): codepdbh/nfsu2-recompiled (no licence file), TalhaMudo/NFSU2Recomp (proprietary, personal use only), yugecin/nfsu2-re (none stated);
**unclear**: dxwrapper ("multiple licenses"), the SONICOM toolbox (repository not located), OpenAL Soft's default HRTF dataset (provenance not verified).
Permissive and usable if ever needed: miniaudio (public domain or MIT-0), SDL (zlib), Steam Audio (Apache-2.0), libmysofa (BSD-style), libiamf and
`ebu_adm_renderer` (BSD-3-Clause-Clear), `libbw64` (Apache-2.0), OpenUG2 (MIT).

## 8. What is missing or not verified

* **No audible run of the game.** `--audio nue` has been built into the launcher (`nfsu2_launcher` compiles and links) and every call the game makes
  is replayed in the tests; whether the music and engine sounds are right *by ear* is for the player's first run. The log (`nfsu2_launcher.log`)
  says what output was opened and, at a normal exit, prints the call counts and the first failing call if any; send it back.
* **No Level A trace format.** The NUE checklist asks for a versioned trace before recording; this layer only keeps counters (`DsoundFacade::report()`).
  Proposal: record `create_buffer/lock/unlock/play/stop/set_*` with their data as the d3d9 trace does and replay it on `NullSink`; the facade test
  already holds the one sequence the game produces.
* The system volume mapping of the primary buffer, hardware voices, focus-loss muting (non-`GLOBALFOCUS` buffers), `DuplicateSoundBuffer` sharing of
  static data, `DirectSoundEnumerate`/`DirectSoundCaptureCreate` (capture is not used by the game), `DirectSound8` interfaces and effects.
* The Windows sink was run on one machine (stereo endpoint, 48 kHz). A 5.1 or 7.1 endpoint, exclusive mode and Windows spatial formats are untested. An endpoint
  that disappears is handled (the clock keeps running without a device, the endpoint is re-acquired every 500 ms with the same layout; exercised with a
  test hook, not with a real unplug), but a *different* default endpoint is not followed to a different rate or layout (NUE streams follow the default
  device; this sink only re-acquires with the format it already has).
* The 3D and environment paths are covered by unit tests and by the differential test only at the interface level (HRESULTs); their *sound* was
  never compared with Windows' (DirectSound3D's algorithms are not documented well enough to do that headless).
* `audio=nue` requires the 32-bit Windows host today (guest addresses are host addresses). The facade itself is portable (guest memory is an interface);
  the NUE `legacy_core` guest memory and handle tables replace `HeapGuestMemory`.
