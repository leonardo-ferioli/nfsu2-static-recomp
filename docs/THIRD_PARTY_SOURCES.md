# Third-party sources

Rule for this file: every piece of external code or data that enters the repository (and, through the NUE agents, the public NUE-Engine
repository) is recorded here with source URL, commit, original path, licence, date copied, what changed and where it is used. Borrowed code
goes in its own folder with its LICENSE and untouched headers.

## Code or data copied into the repository for the audio work

**None.** (2026-10-25.) No file, function, table or data set from the projects below was copied or adapted verbatim. The DirectSound layer,
the mixer, the spatial renderers, the reverb, the sinks and the tests are original.

## Consulted (behaviour and test ideas only; nothing to remove or relicense)

| Source | URL | Commit read | Licence | What was read | Effect on this work |
|---|---|---|---|---|---|
| Wine `dlls/dsound` (`buffer.c`, `mixer.c`, `primary.c`, `dsound.c`, `dsound_private.h`) | https://github.com/wine-mirror/wine | `e3c3d348676128bc745c40aa6397b51951ef1cd6` | LGPL-2.1-or-later | return codes and argument validation of `SetVolume`, `SetFrequency`, `SetFormat`, `Play`, `Stop`, `Lock` flags; notification ordering | semantics only; implemented independently in `platform/audio/ds_device.cpp` and checked by tests derived from the documented behaviour |
| kcat/dsoal | https://github.com/kcat/dsoal | `e11128250439d586483ee6598d1670ab52ab5e37` | LGPL-2.1 | DS3D and EAX concepts and their OpenAL/EFX mapping (not read line by line) | parameter ranges of `ReverbParams`, EAX → EFX table in the handover |
| codepdbh/nfsu2-recompiled | https://github.com/codepdbh/nfsu2-recompiled | `a8c7a39ce7b75b7a49368445a9a2b7ca5cf6e1f3` | **none (all rights reserved)** | `android/app/src/main/cpp/guest_audio.inc`, `audio_mixer.h`, `docs/AUDIO_FRAME_PACING.md` | second opinion on which DirectSound methods the game calls and on `GetCaps` flag value `0xF1F`; each fact re-verified in the executable's disassembly |
| TalhaMudo/NFSU2Recomp | https://github.com/TalhaMudo/NFSU2Recomp | `main` as of 2026-10-25 (not pinned) | **proprietary** (no redistribution) | `runtime/audio.m` comments and `LICENSE` | observations about ring behaviour, re-verified; nothing taken |
| whoismept/OpenUG2 | https://github.com/whoismept/OpenUG2 | `main` as of 2026-10-25 (not pinned) | MIT | `docs/FORMATS.md` (sound section headings) | confirms the game's mixer decodes ABK/Ginsu/XAS in guest code; not needed for output |
| Microsoft Learn: DirectSound, spatial audio (`ISpatialAudioClient`), Android `Spatializer`, Apple PHASE | see `docs/NUE_RESEARCH_*.md` | - | documentation | API names and constants | constants (`DSERR_*`, `DSBCAPS_*`, status flags) and platform-hook notes |

## Dependencies already in the repository (unchanged by this work)

`third_party/sleigh` (Apache-2.0), `third_party/sleigh_spec`, `third_party/widescreen` (MIT), `third_party/bgfx.cmake`, `third_party/zlib_shim`;
see the `PROVENANCE.txt` in each. The audio work adds no third-party dependency: the real output uses the Windows SDK's WASAPI headers
(system component, linked at build time, not redistributed code).

## If something is borrowed later

Add a row to the first table **before** the code lands: source URL, commit hash, original file path, licence name, date, what changed, where
it is used; copy the LICENSE next to the code (`third_party/<project>/`), keep headers unchanged, and keep the code behind the interface it
implements (`ds::Device`, `AudioSink`, `SpatialRenderer`, `HrtfDataset`) so it can be rewritten if the licence is a problem. Flag GPL, LGPL
and unclear terms to the user explicitly.
