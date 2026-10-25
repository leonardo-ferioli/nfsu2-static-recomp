# Hand-over for NUE: the Win32 subset and DirectInput of SPEED2.EXE

Status: **work in progress** (this file is rewritten when the work is done; a final version ends with `READY-FOR-NUE <commit>`).
Audience: the NUE agents that will absorb this as `legacy_win32` and `legacy_dinput`. No game data and no personal paths are in this file.

## 1. What is in the branch

```
legacy_win32/                 the library (target legacy_win32, tests legacy_win32_tests, ctest names legacy_win32_*)
  include/legacy_win32/       Level A interfaces: no Windows header, no guest pointer, no COM object, no host call
  src/                        the portable implementations
  host/                       Windows backends (the real OS behind a Level A interface); Windows only
  tests/                      headless tests; the *_windows ones compare with the real OS
  tools/gen_text_data.cpp     regenerates src/text_data.inc from the Windows NLS answers (Windows only)
platform/                     the platform interfaces the library is written against, shaped like NUE's native headers:
  clock.hpp (core.h time_*), threads.hpp (core.h thread/mutex/cond/semaphore/tls/timer), storage.hpp (storage.h),
  config.hpp (core.h config_*), system.hpp (system.h), input.hpp (input.h), window.hpp / display.hpp (window.h)
  std/                        implementations over the C++ standard library (the default on every host)
  null/null_services.*        deterministic implementations: virtual clock, in-memory file system, scripted input
tools/win32_inventory.py      inventory of what SPEED2.EXE imports and how often (counts from the game's own traces)
tools/win32_api_status.py     the function-by-function status table (module, status, notes)
docs/legacy/win32.tbl, dinput8.tbl   the NUE version tables generated from it
docs/NUE_RESEARCH_WIN32_DINPUT.md    open-source prior art and licences;  docs/THIRD_PARTY_SOURCES.md  every borrowed piece
```

Layers (same shape as `legacy_d3d9`): facade (knows the game: calling convention, guest pointers, COM objects) -> **Level A** (`legacy_win32`, plain
handle-based C++) -> platform interfaces (NUE-shaped) -> backends (std, null, Windows host).

## 2. Progress log (kept up to date while working)

| Module | State | Verified against Windows |
|---|---|---|
| handles (generation-checked table) | done, tested | unit |
| time (ticks, QPC, FILETIME, time zone, timeBeginPeriod) | done | 80,000 random conversions against kernel32 |
| text (code pages, best fit, classes, case, collation, locale, wsprintf) | done | NLS data generated from Windows; every function compared |
| registry | done | scripted run against the real registry |
| sync (events, mutexes, waits, critical sections, TLS, threads, mm timers) | done | 60 scenarios against kernel32 |
| files (CreateFile rules, share modes, find, paths) | done | 88 observations against kernel32 |
| memory (heaps, VirtualAlloc) | not started | |
| process (modules, environment, system info, errors) | not started | |
| window / messages / cursor / timers | not started | |
| DirectInput | not started | |
| facade and routing in the bridge | not started | |

## 3. Traps found so far (read before porting)

- Object names (events, mutexes) are **case-sensitive** in the Win32 namespace; file names are not.
- `TlsGetValue` of an index that was freed returns 0 with **no error**; `TlsFree` of it fails with ERROR_INVALID_PARAMETER.
- `WaitForMultipleObjects` with `bWaitAll` and a duplicated handle fails with ERROR_INVALID_PARAMETER; any wait on an invalid handle fails with ERROR_INVALID_HANDLE.
- `RegQueryValueEx` of a missing value zeroes `*lpType`.
- `wsprintf` is not printf: flags are only `-`, `#`, `0`; there is no `*`; an unknown conversion drops the `%` and prints the character.
- A file opened with `fopen` on Windows does not share by default in every mode: open with `_wfsopen(..., _SH_DENYNO)` and enforce share modes in the Win32 layer.
- Resizing a file by name while it is open fails on Windows: resize through the open descriptor.
- Evaluation order of call arguments is unspecified (MSVC ABI evaluates right to left): never write `f(g(e), e)` in an observation.
- Heredocs and `sed` mangle backslashes in this environment: write C++ strings with the editor tool.
