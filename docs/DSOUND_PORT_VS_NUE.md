# DirectSound: the port's copy against nue-dsound's copy

Short log kept while the port moves to `guest::Memory` (docs/MEMORY_MODEL_64.md). Compared on 2026-10-27: the port's `platform/audio/` (branch
`claude/port-dsound-mem`) against the NUE engine's `src/legacy/dsound` (working tree of the `nue-dsound` session, partly uncommitted at that time:
`include/nue_legacy/dsound_guest.hpp`, `guest_memory.hpp`, `src/legacy/dsound/guest/guest_facade.cpp`). "Applied" means done in the port in this branch.

| Piece | Port | NUE copy | Result |
|---|---|---|---|
| Guest facade (`dsound_facade.cpp` / `guest_facade.cpp`) | `DsoundFacade`, `GuestMemory` | `DsoundGuestFacade`, `nue::legacy::guest::Memory` | `diff` of the two files: only the names, `memory.host()` against `memory.ptr()`, and `static_cast` against `reinterpret_cast` for the host byte spans. **Applied:** `GuestMemory` is now an alias of `nfsu2::guest::Memory`, the facade calls `host()`, the span conversion is `ds::as_bytes()` (static_cast). The method table (75 slots), HRESULT table, QueryInterface graph and the measured semantics are identical. |
| `Memory` contract | `nfsu2::guest::Memory` (`alloc`, `free`, `host`, `address_of`) | `nue::legacy::guest::Memory` (same four members, same comments) | Same contract; the NUE header says the port adapts with a `using`. When `legacy_core` owns the header the port's `guest_memory.hpp` should alias it, not the reverse. |
| `HostServices` (`set_event`, `is_window`) | in `dsound_facade.hpp` | in `dsound_guest.hpp` | Identical. The port's implementation treats the guest value as a Windows kernel/window handle (`LongToHandle`), never as an address. |
| Level A device | own mixer (`ds_device.cpp`): 256-frame blocks behind a FIFO, 16-tap sinc | `device.cpp` on `nue::audio` (`nue_resampler_*`, its sink) | Same HRESULT behaviour (the `(Windows)` rows of `NUE_HANDOVER_DSOUND.md` section 3 are in both: round-up of the size, `E_NOTIMPL` for `LOCHARDWARE`, `ENTIREBUFFER` offset, 30 ms write margin); implementations differ on purpose. Nothing to apply either way. |
| Spatial renderers, FDN reverb, bed matrix | `spatial_*.cpp`, `reverb.cpp` | not duplicated (NUE's own `audio_spatial.h`, `nue_reverb_*` from `nue-audio`) | Port keeps its own until the NUE module reaches parity (the port's renderer tests are the oracle: ITD/ILD, pairwise power, RT60). |
| Sink | WASAPI sink with endpoint loss recovery (the clock keeps running without a device) | `nue_audio_stream` sink; "never asks for more channels than the device has" | The port's WASAPI sink had the same channel rule. Endpoint-loss behaviour (play cursor must never freeze: the game rebuilds its audio after 100 identical polls) is worth checking in NUE's sink. |
| Drop-in `dsound.dll`, native stream test, `dsound_inventory.py` copy | no | yes | Only in NUE. The inventory tool exists in both (same file). |
| Differential test against the system DirectSound | `dsound_differential_tests.cpp`, 296 comparisons | same test, same count | **Fix to carry to NUE:** its real-time checks assumed an idle machine ("play cursor monotonic", "near 0.8 s after 8 x 100 ms"); under load (other builds running) a 100 ms sleep took 140-230 ms, the real 1 s ring wrapped, and the test reported two false differences. Fixed in the port (commit 3e60ac5): forward progress is judged modulo the ring and the real cursor is compared with the elapsed wall clock. |
| Warnings | not compiled with `-Wold-style-cast -Wconversion` | clean with them | Not applied (no behaviour); the port's audio sources use no C-style casts of guest addresses any more. |

## No cast of a guest address left in `platform/audio`

`grep -rn reinterpret_cast platform/audio` finds only host objects: the WASAPI/COM interface pointers of the sink, the real-DirectSound COM calls
and `WAVEFORMATEX` blob of the differential test, and the arena reservation of the facade test (a host address range). Guest addresses are
converted in one place, `PortGuestMemory` (`guest::to_host` / `guest::to_guest`).

## How it is tested over `guest::Memory`

* `dsound_facade_tests` runs every scenario twice: over the fake `Arena` (guest address != host pointer, base 0x10000) and over `PortGuestMemory`.
  At 32 bits `PortGuestMemory` is the identity model (private heap). At 64 bits the test reserves a 4 GiB-aligned arena, calls `guest::set_arena_base`
  and `PortGuestMemory` allocates inside it (window at guest 0xF0000000): the facade runs with guest != host and the whole game sequence passes.
* `PortGuestMemory` itself: alignment, `host()` equals the model's conversion, `address_of`, foreign pointers refused, an address range past the end of
  the guest space refused, freed ranges reused in the arena window.
* `fast_dsound_install` (32-bit) still drives the glue through the real `NativePlatform`; its guest pointers are `guest::ptr<>`.
