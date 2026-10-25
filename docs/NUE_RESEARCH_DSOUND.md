# Research: DirectSound reimplementations and related open-source work

Status: written for the `legacy_dsound` work (private game repository; the NUE agents read this). Search date: 2026-10-25, done with the GitHub
API (`gh`), web search and by reading the files named below. "Last activity" is GitHub's `pushed_at`. Licences are what the repository's own
LICENSE file says (verified by reading its first lines), not what a search summary said; where I could only see GitHub's `NOASSERTION` I say so.

**What the game really needs (so the ranking makes sense).** SPEED2.EXE imports exactly one audio function, `dsound.dll` ordinal 1
(`DirectSoundCreate`). All DirectSound code is one module of about 2.3 KB (0x725a6a..0x7263b5); it uses `IDirectSound` (CreateSoundBuffer,
GetCaps, SetCooperativeLevel, Release), one primary buffer (SetFormat with a `WAVEFORMATEXTENSIBLE`) and **one secondary 0.5 s looping
streaming ring** (Lock, Unlock, Play, GetStatus, GetCurrentPosition, Restore, Release). No DirectSound3D, no EAX, no IKsPropertySet, no
volume/pan/frequency, no notifications. The game mixes and pans in its own software mixer and writes 2, 4 or 6 channel 16-bit PCM. See
`docs/NUE_HANDOVER_DSOUND.md`, section "Inventory". So most of what the projects below offer (3D, EAX, effects) is **not needed by this game**
and is relevant only to other games the same layer will serve.

## Shortlist, ranked by usefulness to this job

| # | Project | URL | Covers | Language | Licence | Last activity | Use |
|---|---|---|---|---|---|---|---|
| 1 | **Wine `dlls/dsound`** (+ `tests/`) | https://github.com/wine-mirror/wine/tree/master/dlls/dsound (read at commit `e3c3d348676128bc745c40aa6397b51951ef1cd6`) | Complete DirectSound/DirectSound8 incl. primary/secondary buffer semantics, Lock/Unlock/cursors, status flags, error codes, 3D, notifications, DMO effects. The tests (`dsound.c`, `dsound8.c`, `ds3d.c`, `propset.c`, `duplex.c`) are the best public record of what real Windows returns. | C | LGPL-2.1-or-later (file headers) | 2026-10-24 | **Behaviour reference and test oracle. No code copied** (see below). The error-code choices in `ds::Device` (`DSERR_CONTROLUNAVAIL` when a CTRL flag is missing, `DSERR_INVALIDCALL` for `SetFormat` on a secondary, Stop keeps the position, Play of a stopped buffer restarts the mix) were checked against it. |
| 2 | **Microsoft DirectSound documentation and `dsound.h`** | https://learn.microsoft.com/en-us/previous-versions/windows/desktop/ee416960(v=vs.85) | The contract: structures, flags, HRESULTs, volume in hundredths of dB, pan, GetCurrentPosition/write-cursor definition. | - | Microsoft docs (not code) | - | Primary source for every constant (numbers are the published API values). |
| 3 | **The real system DirectSound** on the Windows machine (`dsound.dll`) | (the OS) | Ground truth for a **differential test**: the same call sequence on the real device and on `ds::Device`, comparing results and status/cursor behaviour (not audio samples). | - | OS component, only called, never copied | - | `tests/dsound_differential` (skips when the machine has no output device). |
| 4 | **kcat/dsoal** | https://github.com/kcat/dsoal (commit `e11128250439d586483ee6598d1670ab52ab5e37`) | DirectSound/DirectSound3D/EAX 1-4 `dsound.dll` replacement over OpenAL Soft (EFX reverb, HRTF). The mapping DS3D → OpenAL (min/max distance, rolloff, cones, Doppler) and EAX → EFX presets are the reference for the spatial part. | C++ | LGPL-2.1 | 2026-10-25 | Reference for the EAX → EFX parameter mapping and DS3D defaults (`SpatialRenderer`). No code copied. Not usable as a drop-in: it is a DLL that needs OpenAL; NUE needs its own mixer and sink. |
| 5 | **codepdbh/nfsu2-recompiled** | https://github.com/codepdbh/nfsu2-recompiled (commit `a8c7a39ce7b75b7a49368445a9a2b7ca5cf6e1f3`) | Another static recompilation of **this same game** with a guest DirectSound shim (`android/app/src/main/cpp/guest_audio.inc`), a PCM mixer, an AAudio sink and notes (`docs/AUDIO_FRAME_PACING.md`). Independent confirmation of the method set the game calls (it throws on any other), of `GetCaps` flags `0xF1F`, and of the audio-glitch causes (callback starvation, stale ring data, 22.05 → 48 kHz images). | C++ | **No licence file: all rights reserved by default** | 2026-10-23 | **Read only. Nothing copied.** Used as a second opinion on which methods matter; every fact I took from it was re-verified in the executable. |
| 6 | **TalhaMudo/NFSU2Recomp** | https://github.com/TalhaMudo/NFSU2Recomp | A macOS recompilation; `runtime/audio.m` mixes the same ring through CoreAudio and documents ring symptoms (stale-data replay, sync to game speed). | Objective-C | **Proprietary** ("all rights reserved", personal use only, no redistribution) | 2026-10-25 | **Read only, do not copy.** Its observations (the ring is 0.5 s, the game keeps about 180 ms ahead, a stalled writer replays old data) were verified against the disassembly before use. |
| 7 | **whoismept/OpenUG2** | https://github.com/whoismept/OpenUG2 | A from-scratch NFSU2 engine; `docs/FORMATS.md` documents the game's sound containers (ABK/Ginsu/XAS banks, `GIN_*.gin`). Not the output path. | C | MIT | 2026-10-25 | Reference for the **content** the game's mixer decodes, only if a future layer ever replaces the game's mixer (not planned). |
| 8 | **yugecin/nfsu2-re** | https://github.com/yugecin/nfsu2-re | Reverse-engineering notes and Cheat Engine table of SPEED2.EXE (function names, globals). No audio notes found in its tree. | C | none stated | 2025-02-26 | Not used. |
| 9 | **SDL3 audio** (`SDL_AudioStream`) | https://github.com/libsdl-org/SDL | A portable output + resampler/converter; the likely sink on Linux/Android/iOS. | C | zlib | 2026-10-25 | Not vendored here. The sink interface is shaped so an SDL3 sink is ~100 lines; NUE has its own platform layers. |
| 10 | **miniaudio** | https://github.com/mackron/miniaudio | Single-header device I/O (WASAPI, CoreAudio, AAudio, ALSA...), resampler, mixing helpers. | C | Public domain (Unlicense) **or** MIT-0 (your choice) | 2026-10-24 | Candidate for a quick cross-platform sink. **Not used**: the Windows sink is a small own WASAPI file; nothing to borrow. Cleanest licence of all, so the first choice if a borrowed sink is ever wanted. |
| 11 | **isledecomp/isle-portable** | https://github.com/isledecomp/isle-portable | A decompilation port that replaces LEGO Island's DirectSound by SDL3 audio / miniaudio at *source* level. Shows the shape of the replacement for a game that uses streaming and static buffers. | C++ | LGPL-3.0 | 2026-10-18 | Idea only. Source-level port, not a layer. |
| 12 | **ReactOS dsound**, **elishacloud/dxwrapper**, **ironyman/dsoundhook** | https://github.com/reactos/reactos, https://github.com/elishacloud/dxwrapper, https://github.com/ironyman/dsoundhook | ReactOS imports Wine's dsound (GPL-2.0 tree; the dsound part is LGPL); dxwrapper wraps/forwards the DirectX DLLs (mixed licences, "multiple licenses" notice); dsoundhook dumps PCM sent to DirectSound (Apache-2.0, 2019). | C/C++ | see column 3 | active / 2019 | Not used. dsoundhook's idea (hash the PCM that reaches DirectSound) is what the null sink does. |
| 13 | **XenonRecomp / UnleashedRecomp / N64Recomp family** | https://github.com/hedge-dev/XenonRecomp (MIT), https://github.com/hedge-dev/UnleashedRecomp (GPL-3.0) | Static recompilers whose runtimes provide a console OS surface. They replace *console* audio hardware (XMA/XAudio), not DirectSound. | C++ | MIT / GPL-3.0 | 2025-08 / 2026-06 | No overlap with DirectSound; a useful comparison for the "legacy layer" idea. Nothing copied (GPL-3.0 would also be incompatible with a permissive NUE). |

## Findings that changed the design

1. **The only existing open reimplementations of DirectSound are Wine's (LGPL) and DSOAL (LGPL).** Both are libraries to *link into a DLL*,
   built on their own mixer/driver model; neither is shaped like NUE's `nue_mixer` (voices, rings, cursors, buses). The semantics are documented
   well enough (Microsoft docs + Wine tests) to write a small, original implementation shaped like NUE's mixer instead of adapting LGPL code
   that NUE would then have to ship with relinking obligations.
2. **No project documents the game's audio middleware at the DirectSound level**; the two NFSU2 recompilations that exist have audio, but one
   has no licence and the other is proprietary. Both confirm the shape of the problem (one streaming ring, software mixing by the game) and
   both were written for the platform they target, so the facade here is original.
3. **Test oracles**: Wine's `dsound.c` tests give exact expected return codes and states (for example what `GetCurrentPosition` returns for a
   stopped buffer, `Lock` argument validation, `GetStatus` flags); the differential test against the real `dsound.dll` gives the same for the
   current Windows. Both are used as *ideas*; the test code is original.

## What was copied

Nothing. See `docs/THIRD_PARTY_SOURCES.md` (which lists what was **consulted** with commit hashes, and states that no file or function was
copied, so there is nothing to remove or relicense).

## Reasons for not copying, stated for the licence review

* Wine and DSOAL are LGPL-2.1: copying code into the public NUE repository would make those files LGPL inside a library that is meant to be
  statically linked into recompiled games (relinking obligations).
* The two NFSU2 recompilations cannot be copied from at all (no licence / proprietary).
* What is left that is permissively licensed (miniaudio, SDL) offers I/O, which the small sink interface already covers; adding a
  dependency for 150 lines was not worth the licence bookkeeping.
