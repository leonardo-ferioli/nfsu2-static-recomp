# Integration checkpoint (`checkpoint-pre-64bit`)

Five feature branches that had grown apart from `bgfx` were combined into it, tested together, and tagged before the 64-bit guest memory model
work starts. Nothing was rewritten: every source tip has an annotated tag `pre-integration/<name>`.

## What is inside

| Order | Source branch (tag) | Tip | Brings |
|---|---|---|---|
| 0 | `bgfx` (`pre-integration/bgfx`) | `33d2db7` | Base: README rewrite, embedded image by default, register-parameter fast backend by default, `--fps-log`, roadmap |
| 1 | `claude/platform-api-5da14e` (`pre-integration/platform-api`) | `69dfc21` | `platform/` interfaces with Windows and null backends, `legacy_win32/` (handles, time, text, registry, sync, files, window, DirectInput, process, memory) compared against the real Windows, Win32 + DirectInput facade behind `--win32-layer`, Direct3D 9 recorder, `docs/PLATFORM_API.md` |
| 2 | `claude/laughing-heyrovsky-c8cd6f` (`pre-integration/d3d9-worker`) | `5b83647` | `nue_d3d9/`: Direct3D 9 layer, shader translator, bgfx adapter and the drop-in `d3d9.dll` (worker-thread mode, shader pre-warm, spike logs, texture-lock shadow, window fit) |
| 2b | `claude/d3d9-bgfx-d42a87` (`pre-integration/d3d9-bgfx`) | `ed984ac` | The same chain without the worker commits, plus one documentation commit (the coverage table in `docs/D3D9_BGFX.md`) |
| 3 | `claude/port-dsound-6fa90d` (`pre-integration/port-dsound`) | `729631c` | DirectSound layer (`platform/audio/`, `audio=system\|nue`), differential tests against the real DirectSound, handover documents |
| 4 | `claude/fps-optimization-layer-4c9fe1` (`pre-integration/fps-launcher`) | `36e07c8` | Speed layer (`speed.*`: native calls, predicted returns, jump-table switches, hot code layout), frame limiter, power-throttling opt-out, `[detail]` settings, `dist\speed` bundle, regenerated `generated_fast` |

Merge commits on `integrate-port` (merge order as above): `3650d09` (platform-api), `f2317e2` (d3d9 worker chain), `8ab2fef` (d3d9 documentation commit),
`3c68d36` (port-dsound), `e03901a` (fps), then the packaging and documentation commits of this integration.

## Switches and defaults (nothing changes for the user unless a switch is turned on)

| Switch | Command line / ini | Default |
|---|---|---|
| DirectSound layer | `--audio system\|nue`, `audio=`; `--audio-latency MS`, `--audio-spatial MODE` | `system` (the Windows DirectSound) |
| Win32 + DirectInput layer | `--win32-layer GROUPS`, `win32_layer=`, env `NFSU2_WIN32_LAYER` | off (every call goes to Windows) |
| Direct3D 9 layer | `d3d9.dll` next to the launcher; `NFSU2_SYSTEM_D3D9=1` ignores it | the system's Direct3D 9 unless the file is present |
| `d3d9.dll` options | `nue_d3d9.ini`: `renderer`, `vsync`, `render_thread`, `worker_thread`, `msaa`, `texture_copy_mb`, `shader_cache`, `log` | built-in (`d3d11`, `worker_thread=0`) |
| Speed layer | `--no-speed`, `[speed]` | on (as on the fps branch) |
| Frame limiter | `--fps-limit N` | 60 |
| Frame-rate log | `--fps-log`, `fps_log=` | off |
| Detail settings | `[detail]` `world_detail`, `car_detail` | `original` |
| Direct3D 9 recorder | `--record-d3d9 DIR` and friends | off |

## How each conflict was resolved

Both sides' intent was kept; no feature was dropped.

**platform-api into bgfx**
* `launcher.cpp`, usage text: `--fps-log` (bgfx) and `--record-d3d9*` (platform-api) both kept. Platform construction: `set_fps_log` followed by the Win32 facade and recorder blocks.
* `native32.hpp`: `set_fps_log` (bgfx) next to `set_d3d9_recorder` / `finish_d3d9_recorder` (platform-api); the `fps_log_on` flag and the recorder members both stay.

**d3d9 worker chain into the above**
* `CMakeLists.txt`, `PLATFORM_SOURCE`: the platform-api list (with `win32_facade.cpp`, `win32_facade_dinput.cpp`) with the trace and null GPU sources taken from their new place (`nue_d3d9/src/d3d9_trace.cpp`, `nue_d3d9/src/null_gpu.cpp`).
* `platform_api_tests`: its expectation of live objects after the trace replay was 2 and is now 3. The replay opens an implicit state block for state calls made outside a capture window (a deliberate change of the d3d9 branch); the test was never updated there, so it failed on `5b83647` itself.

**port-dsound**
* `CMakeLists.txt`: `platform/audio/dsound_install.cpp` added to the platform sources; the audio library, its tests and the install test sit next to the Win32 facade test and `legacy_win32`.
* `launcher.cpp`: `Config` has the `audio` settings and `fps_log`; the `--audio*` options and the `--fps-log` option both stay.
* `tools/package_launcher.py`: the `launcher.ini` documentation has the `fps_log` and the `audio*` blocks.
* `docs/THIRD_PARTY_SOURCES.md` (added on both sides): the first file stays as it was; the audio file became its section "Audio work: the DirectSound layer".

**fps**
* `CMakeLists.txt`: `speed.cpp` in the platform sources; the fast-variant compile options of the fps branch (`-ffunction-sections`) with the link line that includes `nfsu2_audio`.
* `launcher.cpp`: `Config` has `audio`, `speed`, `detail` and `fps_log`; usage text and option parsing have `--audio*`, `--fps-log` and `--no-speed`.
* `README.md`: both option rows (`--fps-log`, `--no-speed`) are kept.

**Added by the integration**
* `tools/package_launcher.py` puts `d3d9.dll`, a `nue_d3d9.ini` with every value commented out (the built-in defaults apply) and `LEEME.txt` (the switches, in Spanish) in `dist\NFSU2-static`; the `launcher.ini` template documents `win32_layer`. `--d3d9-dll` selects the dll (default `build_nue32\d3d9.dll`).
* `launcher.cpp` usage text lists `--win32-layer`; `README.md` documents it, the Direct3D 9 layer and the new tests.
* `.gitignore`: `build_nue64/`.

## Test results at the checkpoint

Everything is headless; the game was never started. The game folder was only read (the tests that decompress and check resources).

**32-bit launcher** (`build.ps1`, clang `-m32`, embedded image): `ctest` 49 of 49 passed:
`audio`, `dsound_facade`, `dsound_differential` (real Windows DirectSound), `wasapi_smoke`, `raw_semantics`, `raw_platform`, `raw_seh`, `raw_userops`, `raw_resources`,
`d3d_shadow`, `platform_api`, `fast_facade`, `win32_facade`, `fast_dsound_install`, `fast_recorder`, `fast_platform`, `launcher_cli`, `fast_dynamic`,
`x87_host_fpu`, `fast_dynamic_boot`, `fast_widescreen`, `fast_widescreen_scaled`, `fast_seh`, `fast_resources`, `reg_entries`, and the 24 `legacy_win32_*` tests
(the Level A modules and the ones compared with the real Windows: time, text, registry, sync, files, window, DirectInput, process, memory).

**`d3d9.dll`, 32-bit, static CRT** (`nue_d3d9`, clang `-m32 -msse4.2`, 6 MB-class dll): `nue_tests` pass; `nue_replay --null --twice` on the `menu`, `garage` and `loading` captures:
identical call hashes between runs (`8c968ee2c6382b3d`, `b56e64e6f3f5fc33`, `99cc80cf20ec650f`), 0 unsupported records; ground truth against the system's Direct3D 9 on hidden windows:
`nue_window_test`, `nue_format_test`, `nue_state_test` (117 cases), `nue_defaults_test` pass; bgfx/Direct3D 11 replay of `menu` and `loading` (3 frames each, 0 shader failures,
MAE 2.72 and 1.39 of 255 against the recorded reference images) and the same traces through the dll's COM path (MAE 2.92 and 1.60, 0 unsupported records, 0 bad objects).
The `race` capture does not open (`not a Direct3D 9 trace`) with the pre-integration binaries either: the file itself is the problem (1.6 MB), not the code.

**64-bit**: the `nue_d3d9` build (`build_nue64`) gives the same results as above, with the same call hashes. The raw (reference) configuration built with `build.ps1 -HostArchitecture x64` runs 32 of 32 tests: `audio`, `dsound_facade`, `dsound_differential`, `wasapi_smoke`, `raw_semantics`, `raw_platform`, `raw_userops`, `raw_resources` and the 24 `legacy_win32_*` tests. The 64-bit configuration did not build before this integration (the same code is in `bgfx` `33d2db7`), so four small fixes were made: `<windows.h>` is included on Windows in `runtime.cpp`, `userops.cpp` and `resource_tests.cpp` (it was only included for the 32-bit native boundary, and the code uses `GetEnvironmentVariableA`), and `platform_tests.cpp` accepts the game-folder argument that CMake passes. `raw_x87_diff` is not built at 64 bits (it needs the 32-bit native boundary); the x87 comparison (`x87_host_fpu`) runs in the 32-bit configuration. The fast backend exists only at 32 bits.

**Package**: `dist\NFSU2-static` holds `nfsu2_launcher.exe`, `d3d9.dll`, `launcher.ini` / `nue_d3d9.ini` (defaults unchanged), `README.txt`, `LEEME.txt`, the SLEIGH specification and checksums.
`--help` lists the new switches; `--verify-only` passes with and without `--audio nue --win32-layer all`. No game file is in the repository or in the package (the launcher holds
the translated image of `SPEED2.EXE` as data, as before).

## After the checkpoint: HUD about 110 % in the first test folder

The code that places and scales the HUD (`mods_anchor.cpp`, `mods_frontend.cpp`, `mods_widescreen.hpp`) is byte-identical to `pre-integration/bgfx`, and the display queries the mods use
(`mods_resolution.cpp`, `mods_system.cpp` through `platform::services().display`) return exactly what the old Win32 calls returned on the test machine (same 138 modes, same
2496x1664 current mode, same desktop size before and after the DPI call; compared by a scratch program). The cause is configuration: the earlier `launcher.ini` files used for testing carry
`FEScale = 0.80`, and a fresh folder from the package has every value commented out, so the in-race HUD is at the default 1.00 (1.25 times larger). The game also runs in the
scaled-window mode (1920x1080 into 2496x1404, from `fit_aspect`; the old code made a 2958x1664 window that cropped the sides), which makes the picture 0.84 times what it was on
screen; together 1.05 to 1.10 times the HUD of the earlier tests. Put `FEScale = 0.80` back in `[MAIN]` of the new `launcher.ini` (or copy the old file: its keys still apply).
The launcher log now says `hud on (scale X)`.

## Known open issues and what is not verified

* **Audio never heard in the game.** `audio=nue` is tested against the real DirectSound with silence and with a fake guest, never with the running game.
* **`--win32-layer` never run in the game.** The facade is tested with the translated code boundary and against the real Windows, not in a play session.
* **The new `d3d9.dll` and the fps launcher were not tried by the user in this combination.** The user ran the earlier worker-thread dll; the speed layer and the dll together, and the frame limiter with the dll, are untested in play.
* `race` capture file is unreadable (see above); the `menu`, `garage` and `loading` captures are the replay set.
* `platform_api` was red on the d3d9 branch before this integration (see the conflict notes); it passes now.
* `nue_d3d9` is still a copy inside this repository. The public NUE-Engine repository (`src/legacy/d3d9`) has a newer version with graphics-provider groundwork; moving to it is a later step and was deliberately not done here.
* Building from a git worktree needs two things outside the repository: `GAME_DIR` for the tests (`-DGAME_DIR=...`), and `SPEED2.EXE` / `data/text.bin` at `..\binaries` and `..\data` relative to the worktree's parent (junctions were used); `third_party/bgfx.cmake` must be initialised (`git submodule update --init --recursive`).
* `dist\` stays out of git (ignored).

## Next step

The 64-bit guest memory model. This commit is the checkpoint to return to if that work needs to be backed out: tag `checkpoint-pre-64bit`.
