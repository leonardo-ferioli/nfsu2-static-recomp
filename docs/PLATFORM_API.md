# Platform API

Status: **Phase 0 — inventory and proposal.** Nothing in this document is implemented yet. What is *measured*, what is *inferred* and what
is a *proposal* is marked as such. The graphics decision (bgfx first) is in [`GRAPHICS_BACKEND.md`](GRAPHICS_BACKEND.md); the order of the
work is in [`ROADMAP.md`](ROADMAP.md); the Windows boundary as it is today is in [`../PLATFORM.md`](../PLATFORM.md).

Goal: the translated game stops depending on Direct3D 9, DirectInput 8, DirectSound and Windows. It talks to **our own platform API**
(graphics, input, audio, window/display, files, settings, time/threads, memory) and one backend per target implements that API: Windows
native (today's behaviour, kept as the reference), and later SDL3/bgfx for Linux, Android, iOS/macOS. The same API is used for the APK
and IPA builds.

## 1. Two layers, one rule

```
 translated game (generated C++; 32-bit guest address space; stdcall / COM / Win32 ABI)
        |  calls Windows functions and COM methods through call tokens
 +------+----------------------------------------------------------------------------------+
 | GUEST ABI SHIM  ("win32 personality", portable C++, today inside native32.cpp)            |
 |   knows: guest pointers, stdcall stacks, COM vtable layout, struct layouts, HANDLE        |
 |   values, WM_* messages, DirectInput/DirectSound/Direct3D 9 semantics and constants       |
 |   does:  marshal guest memory <-> plain C++ arguments, own refcounts, lock staging,       |
 |          heap/TLS/critical sections of the guest, error codes (HRESULT, GetLastError)     |
 +------+----------------------------------------------------------------------------------+
        |  plain C++ calls; handles, spans and POD descriptors only
 +------+----------------------------------------------------------------------------------+
 | PLATFORM API  (namespace nfsu2::platform; this document, section 3)                       |
 |   Clock  Threads  Sync  Memory  Storage  Settings  Window  Display  Input  Audio  Gpu     |
 +------+----------------------------------------------------------------------------------+
        |  one implementation per target (section 5)
   win32 (reference, native Direct3D 9 / DirectInput / DirectSound)   sdl3 + bgfx   null (tests)
```

**The rule:** no Windows type, no guest pointer, no 32-bit assumption and no COM object crosses the line between the two layers.

- *Handles.* Every object the platform owns is an `Id<Tag>` (32-bit, 0 = invalid, generation bits to catch stale use). The shim keeps the
  mapping guest object ↔ handle.
- *Memory.* Data crosses as `std::span` of host memory that is valid only for the duration of the call. The platform never keeps a pointer
  it was given and never returns a pointer into guest memory. Where the guest has to write into a buffer the platform will consume later
  (Direct3D `Lock`, DirectSound `Lock`) the **shim** hands out *staging memory from the guest arena* and calls the platform at `Unlock`
  (section 4). This is what lets the CPU side become 64-bit portable: guest addresses stay 32-bit values inside the shim, host pointers
  stay inside the platform.
- *Errors.* `Status` codes, no exceptions across the boundary; the shim maps them to HRESULT / `GetLastError`.
- *Threads.* Every interface says which thread may call it. The game keeps its own threads (translated workers run on real host
  threads); only `Window`/`Display` event pumping can be bound to the application's main thread (macOS, iOS, Android).
- *Capabilities.* Optional features are queried (`caps()`), never assumed.
- *Everything is testable headless.* A `null` platform implements every interface with counters and in-memory stores; the guest-ABI shim
  and the Direct3D 9 layer are tested against it (and against a recorded trace, section 3.10).

The old x64 experimental adapter (`platform.hpp`, class `nfsu2raw::Platform`) already keeps its own guest heap, handle tokens and
critical-section table; it is a seed for the shim's portable parts, not part of the selected gameplay path.

## 2. Inventory (measured)

Sources: `export/platform_imports.json` (the 252 import slots), `dist/NFSU2-static/logs/native_trace.log` (the user's last run: the menus
and several races; 38 five-second profile windows, FPS 17.6–60, median 20.2; 748 first-call records), the SDK headers for the COM method
tables, and the game's `.text` only to decode the vtable slot of each recorded COM call site. The script is
[`tools/platform_inventory.py`](../tools/platform_inventory.py) (read-only, prints Markdown, no game bytes); regenerate with

```
python tools/platform_inventory.py --trace <native_trace.log> [--trace <another.log> ...]
```

### 2.1 What the trace can and cannot say

- The trace records the **first** call of each (native target, guest call site) pair, plus the 14 most frequent calls of each 5-second
  window. So "seen" means *exercised in that session* — one run through menus and races. A feature the run never reached (network play,
  photo mode, a rarely used options screen) is invisible. The replay tool of phase 2 and further traces from the user will widen this.
- Per-frame rates are means over the windows in which the call was among the 14 most frequent; they are comparable to each other, not to a
  total.
- The interface of a COM call is not recorded. It is **inferred**: the instruction before each recorded return address is
  `call [reg+disp]`, `disp/4` is the vtable slot, the stack pop gives the argument count, and the targets form one address cluster per
  system DLL. Within a cluster the candidates are the interface methods whose slot *and* argument count agree. Where several interfaces
  fit (e.g. `Release`), the table says so. Every cluster matched its DLL's family for 100 % of its targets (Direct3D 9: 89/89, DirectInput 8:
  13/13, DirectSound: 11/11).

### 2.2 Imports by subsystem

252 import slots, **124 called** in the traced session (`*` = never called there).

| Subsystem | Imports | Called | Names |
|---|---:|---:|---|
| network (sockets, serial, TAPI, NetBIOS) | 42 | 0 | WSAStartup, socket, bind, connect, listen, accept, send, recv, sendto, recvfrom, select, ioctlsocket, setsockopt, WSAIoctl, getpeername, getsockname, gethostbyname, gethostname, closesocket, shutdown, WSAGetLastError, WSACleanup; serial: SetCommState, GetCommState, SetCommConfig, GetCommConfig, SetCommTimeouts, SetCommMask, WaitCommEvent, GetOverlappedResult, PurgeComm, SetupComm; TAPI: line*(9); Netbios |
| files | 39 | 24 | CreateFileA/W, ReadFile, WriteFile*, SetFilePointer, GetFileSize, CloseHandle, FindFirst/Next/Close, CreateDirectoryA, GetFullPathNameA, GetLongPathNameA, GetCurrentDirectoryA, GetDriveTypeA, GetLogicalDrives, file mapping*, FindResourceA/LoadResource/LockResource/SizeofResource, time-zone and file-time conversion |
| window and cursor (user32) | 38 | 26 | CreateWindowExA*, RegisterClassExA, DefWindowProcA, ShowWindow, UpdateWindow, SetFocus, SetForegroundWindow, GetClientRect, GetWindowRect, GetSystemMetrics, GetDesktopWindow, PeekMessageA, TranslateMessage, DispatchMessageA, PostMessageA, PostQuitMessage, SetCapture, ReleaseCapture, GetCursorPos, LoadCursorA, LoadIconA, BeginPaint, EndPaint, IsIconic, GetForegroundWindow, DestroyWindow, wvsprintfA |
| threads and synchronisation | 34 | 21 | CreateThread, ResumeThread, SetThreadPriority, GetCurrentThread(Id), Create/Set/ResetEvent, WaitForSingleObject, CreateMutexA, ReleaseMutex, Enter/Leave/Init/DeleteCriticalSection, Tls*, DuplicateHandle, GetSystemInfo, IsProcessorFeaturePresent |
| process and runtime | 30 | 20 | GetModuleHandleA, GetModuleFileNameA, GetCommandLineA, GetProcAddress, LoadLibraryA, GetVersionExA, GetStartupInfoA, GetEnvironmentStringsW, Get/SetLastError, SetUnhandledExceptionFilter, Process32First/Next + CreateToolhelp32Snapshot (process list), SetErrorMode, OutputDebugStringA, ExitProcess |
| text and locale | 18 | 7 | MultiByteToWideChar, WideCharToMultiByte, GetStringTypeW, CompareStringW, LCMapStringW/A, GetCPInfo, GetACP |
| memory | 16 | 7 | HeapCreate, HeapAlloc, HeapFree, HeapReAlloc, HeapSize, VirtualProtect, IsBadReadPtr |
| time | 12 | 11 | QueryPerformanceCounter/Frequency, GetTickCount, timeGetTime, GetSystemTimeAsFileTime, Sleep, SleepEx, timeSetEvent, timeBeginPeriod/EndPeriod, timeGetDevCaps |
| GDI text | 12 | 1 | CreateFontA*, ExtTextOutA*, CreateCompatibleDC*, CreateBitmap*, BitBlt*, GetPixel*, SelectObject*, SetTextColor*, SetBkColor*, SetBkMode*, DeleteDC*; only DeleteObject was called |
| settings | 7 | 4 | RegQueryValueExA, RegSetValueExA, RegCloseKey, SHGetFolderPathA (the other registry calls are overridden by the mods) |
| graphics entry | 2 | 1 | Direct3DCreate9; DirectDrawCreate* (legacy, never called) |
| input entry | 1 | 1 | DirectInput8Create |
| audio entry | 1 | 1 | dsound ordinal 1 = DirectSoundCreate |

Reading it:

1. The three COM entry points (`Direct3DCreate9`, `DirectInput8Create`, `DirectSoundCreate`) are the whole graphics, input and audio
   surface; everything else is "ordinary" Win32.
2. **Network is 42 imports and 0 calls.** LAN/online play is dormant in the traced session. The plan: stub it (return `WSAENETDOWN`-style
   errors, never crash) until someone wants it; BSD sockets are on every target, so a later implementation does not need a platform
   interface, only the shim.
3. GDI text (12 imports, 1 call) is the one place where the game rasterises text through the OS. Only `DeleteObject` ran, so the font path
   is unexercised; it must be checked before it is called "not needed" (possible users: localised or wide-character strings).
4. `Process32First/Next` + `CreateToolhelp32Snapshot` are called (a process-list scan at start-up). The shim can answer with an empty list
   (the deterministic-test mode already does).
5. `timeSetEvent` is a multimedia-timer callback on a timer thread; `timeKillEvent` is synchronous. It needs a `Timers` service
   (section 3.2), not just `Sleep`.

### 2.3 COM interfaces (inferred, see 2.1)

| Interface family | Targets | Call sites | Methods seen (slot) |
|---|---:|---:|---|
| Direct3D 9 | 89 | 419 | **Device, unambiguous** (only one Direct3D 9 interface has a method with that slot and argument count; 39 methods): TestCooperativeLevel(3), Present(17), GetBackBuffer(18), CreateTexture(23), CreateCubeTexture(25), CreateVertexBuffer(26), CreateIndexBuffer(27), CreateRenderTarget(28), CreateDepthStencilSurface(29), StretchRect(34), SetRenderTarget(37), SetDepthStencilSurface(39), GetDepthStencilSurface(40), BeginScene(41), EndScene(42), Clear(43), SetTransform(44), SetViewport(47), LightEnable(53), SetRenderState(57), BeginStateBlock(60), EndStateBlock(61), SetTexture(65), SetTextureStageState(67), SetSamplerState(69), ValidateDevice(70), DrawIndexedPrimitive(82), DrawPrimitiveUP(83), CreateVertexDeclaration(86), SetVertexDeclaration(87), SetFVF(89), CreateVertexShader(91), SetVertexShader(92), SetVertexShaderConstantF(94), SetStreamSource(100), SetIndices(104), CreatePixelShader(106), SetPixelShader(107), SetPixelShaderConstantF(109). **IDirect3D9, unambiguous**: GetAdapterModeCount(6), EnumAdapterModes(7), CheckDeviceMultiSampleType(11), GetDeviceCaps(14), CreateDevice(16). **Ambiguous slots** (several interfaces fit; the likely reading in brackets): 4/1 arg [IDirect3D9::GetAdapterCount or StateBlock::Capture], 5/1 [StateBlock::Apply: 13 call sites, state blocks are in use], 5/4 [IDirect3D9::GetAdapterIdentifier], 7/2 [Device::GetDeviceCaps], 8/3 [IDirect3D9::GetAdapterDisplayMode or Device::GetDisplayMode], 11/5 and 12/1 [vertex/index buffer Lock and Unlock], 12/2 [Surface::GetDesc or Device::ShowCursor], 17/3 and 18/3 [texture GetLevelDesc, GetSurfaceLevel], 19/5 and 20/2 [texture LockRect and UnlockRect], AddRef(1) and Release(2) on every resource |
| DirectInput 8 | 13 | 22 | **IDirectInput8A**: CreateDevice(3), EnumDevices(4); **Device8**: Acquire(7), Unacquire(8), GetDeviceState(9), GetDeviceData(10), SetDataFormat(11), SetCooperativeLevel(13), Poll(25), **BuildActionMap(29), SetActionMap(30)**. `EnumDevicesBySemantics` and `EnumObjects` are handled by `native32.cpp` and are part of the contract even though this trace did not record them |
| DirectSound | 11 | 22 | **IDirectSound**: CreateSoundBuffer(3), GetCaps(4), SetCooperativeLevel(6). **Buffer**: GetCurrentPosition(4), GetStatus(9), Lock(11, 8 words), Play(12), SetFormat(14), Unlock(19), Release(2) |

The `nfsu2raw` state cache and the profiler find device methods **by vtable slot** (`native32.cpp`, `d3d_shadow.hpp`); the table above is
the same idea applied to a whole trace.

Reading it:

- The Direct3D 9 surface seen in the session is **about 40 device methods** (39 unambiguous plus a few ambiguous slots), not 119. Not seen:
  `DrawPrimitive` (non-UP), queries, clip planes, materials, `SetPaletteEntries`, N-patches, `Get*` calls. That is the contract of the
  Direct3D 9 layer's first version (section 3.9), with everything else answered `unsupported` and logged. *Caveat:* one session; shader
  and fixed-function usage (`SetTransform`, `LightEnable`, texture stage states are called, so a fixed-function path exists) must be
  confirmed by the replay tool.
- DirectInput is used with **action mapping** (`BuildActionMap`/`SetActionMap` + `GetDeviceData`), not only raw `GetDeviceState`. The
  mods then read the polled state (`joy_state`, `mouse_state`, `keyboard_state` hooks in `mods_input.cpp`). The input facade must
  deliver the same buffers; see section 3.7 and open question 3.
- DirectSound is a **streaming ring buffer**: `CreateSoundBuffer`, `SetFormat`, `Lock`/`Unlock` + `GetCurrentPosition` + `Play`. There
  is no per-sound hardware buffer (no `SetVolume`/`SetPan`/`SetFrequency`/3D in the trace): the game's own audio engine (the run-time
  generated x86 modules the P-code interpreter executes) mixes in software and feeds the buffer. The audio interface can therefore be
  small: a PCM ring with cursors (section 3.8).

### 2.4 Per-frame budget (measured; means over the profile windows, 38 windows)

| Call | per frame (mean) | min–max |
|---|---:|---|
| IDirect3DTexture9::AddRef / Release | 5,287 each | 86 – 9,458 |
| QueryPerformanceCounter | 4,064 | 130 – 41,209 (the latter is the start-up spin) |
| SetVertexShaderConstantF | 719 | 68 – 1,107 |
| SetRenderState | 706 | 56 – 990 |
| SetStreamSource / SetIndices | 517 each | 42 – 789 |
| SetTexture | 460 | 7 – 741 |
| SetSamplerState | 399 | 46 – 553 |
| SetTextureStageState | 305 | 102 – 389 |
| unidentified d3d9 method pair (adjacent addresses, called together) | 271 each | 25 – 378 |
| SetPixelShaderConstantF | 142 | 58 – 295 |
| DrawPrimitiveUP | 113 | 44 – 204 |
| IDirect3DVertexBuffer9::Unlock | 77 | (one window) |
| EnterCriticalSection / LeaveCriticalSection | 83 each | (one window) |
| SetVertexDeclaration | 63 | 5 – 82 |
| SetDepthStencilSurface / SetRenderTarget | 61 / 50 | (few windows) |

Time inside Windows/Direct3D (mean over the windows in which the call was among the most expensive): `IDirect3DDevice9::Present` 1.6 ms/frame
(max 7.0), `IDirect3DVertexBuffer9::Lock` 1.6 ms (max 4.0 in these windows; the user's heavy 2496×1664 scenes reach 6–18 ms), texture
`AddRef`+`Release` 0.9 ms, `SetVertexShaderConstantF` 0.36 ms, `QueryPerformanceCounter` 1.8 ms (mean) — **the clock alone is a
call-rate problem**: `Clock::now` must be a plain inline function, not a virtual call plus a guest→host bridge.

Consequences for the design:

- ~10,000+ guest→Windows calls per frame: the interface between shim and platform must be **batchable and cheap**. Texture
  `AddRef`/`Release` (more than half of all calls) never reach the platform: refcounts live in the shim's facade object (section 4); only
  the final release does.
- Redundant state calls are about half of all calls: the Direct3D 9 layer keeps a shadow of device state and only builds a draw
  state when a draw happens (what `d3d_shadow.hpp` does today for the native path, made structural).
- A frame has ~440 draws and ~900 constant uploads: the GPU interface takes one `DrawState` per draw with the constants already packed.

### 2.5 Host-side code of ours that also uses Windows directly

Not guest calls, but they must go behind the same interfaces for a port:

| File | Windows services used |
|---|---|
| `native32.cpp` | `timeBeginPeriod`, `Sleep`/spin frame limiter (`limit_frame_rate`), `QueryPerformanceCounter`, `ClipCursor`, thread creation/priority cap/affinity, `timeSetEvent` timers, vectored exception handler and crash report, process/thread CPU times and memory report (profiler), `LoadLibraryExA`/`GetProcAddress` to reach the system libraries |
| `launcher.cpp` | process power-throttling opt-out, priority class, `AttachConsole`, `MessageBoxA`, `SetProcessDPIAware`, watchdog `ExitProcess`, log files |
| `mods_system.cpp`, `mods_resolution.cpp` | `MonitorFromWindow`/`GetMonitorInfoA`/`EnumDisplaySettingsA`/`EnumDisplayDevicesA` (resolution list, refresh rate), `SetWindowPos`/placement, `ShowCursor`, `SetProcessDPIAware`, import overrides of `CreateWindowExA`/`SetWindowLongA`/`AdjustWindowRect` |
| `mods_input.cpp` | `GetForegroundWindow`, `keybd_event` (quit chord), reads DirectInput state buffers |
| `mods_registry.cpp` | registry in the current user or a settings file, `SHGetFolderPathA` |
| `mods_gamma.cpp` | **calls Direct3D 9 directly** (pixel shader, render targets, state blocks) for the optional console-gamma pass (off by default); it must be ported onto the graphics layer or dropped |

## 3. The interfaces (proposal)

All in `namespace nfsu2::platform`, C++20, headers under `platform/` with no `<windows.h>`. Sketches below are the proposal for phase 1; they
are meant to be lifted into headers almost verbatim.

### 3.1 Common types

```cpp
template <class Tag> struct Id {                    // opaque handle; 0 = none
    uint32_t value = 0;
    constexpr explicit operator bool() const { return value != 0; }
    friend constexpr bool operator==(Id, Id) = default;
};
enum class Status : int32_t { ok, invalid_argument, not_found, already_exists, unsupported, out_of_memory,
                              io_error, would_block, timed_out, device_lost, closed };
template <class T> struct Result { Status status = Status::ok; T value{}; explicit operator bool() const { return status == Status::ok; } };
using Bytes = std::span<const std::byte>;
using MutableBytes = std::span<std::byte>;
```

### 3.2 Clock, Threads, Sync, Timers  (data: 4,064 clock reads and 83 critical-section pairs per frame)

```cpp
uint64_t now_ns() noexcept;            // free, inline-able, monotonic, >= 10 MHz effective; the only hot-path time call

class Clock {                           // any thread
public:
    virtual uint64_t unix_time_ns() = 0;           // GetSystemTimeAsFileTime
    virtual int32_t  utc_offset_minutes() = 0;     // GetTimeZoneInformation
    virtual void     sleep_ns(uint64_t) = 0;       // precise sleep (the frame limiter's bulk wait)
    virtual void     request_timer_resolution(uint32_t milliseconds) = 0;  // timeBeginPeriod; no-op where meaningless
    virtual ~Clock() = default;
};

enum class ThreadClass  { normal, above_normal, background, audio_realtime };   // the game asks for TIME_CRITICAL; the platform caps it
enum class CoreHint     { any, performance, efficiency };                         // Android/Apple big.LITTLE, Windows hybrid CPUs
struct ThreadDesc { void (*entry)(void*); void* user; const char* name; uint32_t stack_bytes; ThreadClass klass; CoreHint cores; };
using ThreadId = Id<struct ThreadTag>;

class Threads {                         // any thread
public:
    virtual Result<ThreadId> start(const ThreadDesc&) = 0;
    virtual Status join(ThreadId, uint32_t timeout_ms) = 0;
    virtual void   set_class(ThreadId, ThreadClass) = 0;   // ThreadId{} = calling thread
    virtual uint32_t cpu_count() = 0;
    virtual void   set_process_core_hint(CoreHint) = 0;    // replaces SetProcessAffinityMask and the launcher's power-throttling opt-out
    virtual ~Threads() = default;
};

using EventId = Id<struct EventTag>; using MutexId = Id<struct MutexTag>; using SemaphoreId = Id<struct SemTag>;
class Sync {                            // any thread
public:
    virtual EventId create_event(bool manual_reset, bool signaled) = 0;     // CreateEventA/SetEvent/ResetEvent
    virtual void set(EventId) = 0;  virtual void reset(EventId) = 0;
    virtual Status wait(EventId, uint32_t timeout_ms) = 0;
    virtual Result<uint32_t> wait_any(std::span<const EventId>, uint32_t timeout_ms) = 0;   // WaitForMultipleObjects
    virtual MutexId create_mutex() = 0; virtual Status lock(MutexId, uint32_t timeout_ms) = 0; virtual void unlock(MutexId) = 0;
    // Address-keyed wait/wake (futex semantics) so the shim can build CRITICAL_SECTION on a word of guest memory without the
    // platform knowing that it is guest memory.
    virtual Status address_wait(const std::atomic<uint32_t>*, uint32_t expected, uint32_t timeout_ms) = 0;
    virtual void   address_wake(const std::atomic<uint32_t>*, bool all) = 0;
    virtual void   destroy(EventId) = 0; virtual void destroy(MutexId) = 0;
    virtual ~Sync() = default;
};

using TimerId = Id<struct TimerTag>;
class Timers {                          // timeSetEvent / timeKillEvent
public:
    virtual TimerId start(uint32_t delay_ms, uint32_t resolution_ms, bool periodic, void (*callback)(void*), void* user) = 0;
    virtual Status  cancel_and_wait(TimerId) = 0;      // synchronous: returns after a running callback has returned
    virtual ~Timers() = default;
};
```

TLS stays in the shim (guest TLS slots are guest memory words); the guest `TEB` is synthetic already.

### 3.3 Memory  (the Android budget is 2 GB for the whole process)

```cpp
struct MemoryStats { uint64_t process_private_bytes, process_resident_bytes, gpu_bytes_estimate, budget_bytes; };
class Memory {
public:
    // One reserved, uncommitted range for the guest's 32-bit address space (4 GiB). Identity-mapped at 0x00401000 today on
    // 32-bit Windows; at an arbitrary host base on a 64-bit host (the shim adds the base).
    virtual Result<MutableBytes> reserve(uint64_t bytes, uint64_t preferred_address) = 0;
    virtual Status commit(MutableBytes) = 0;   virtual Status decommit(MutableBytes) = 0;
    virtual Status protect(MutableBytes, bool read, bool write, bool execute) = 0;   // VirtualProtect
    virtual bool   can_execute_generated_code() = 0;        // false on iOS: the audio modules must be interpreted there
    virtual MemoryStats stats() = 0;                         // the profiler's memory report, portable
    virtual void   set_pressure_callback(void (*)(void*, int level), void* user) = 0;  // onTrimMemory / didReceiveMemoryWarning
    virtual ~Memory() = default;
};
```

The guest heap (`HeapAlloc` ×56 per frame, CRT heaps) and the guest stack live in that arena and are implemented by the shim.

### 3.4 Storage  (files)

The game opens files by Windows path and assumes **case-insensitive** names and `\` separators. Android's scoped storage may give the game
data as a document-tree URI. So paths are `Area` + UTF-8 relative path with `/`, and the platform resolves them.

```cpp
enum class Area { game_data /*read-only, the user's own files*/, user_data /*saves, settings*/, cache, temp, logs };
enum class OpenMode : uint8_t { read = 1, write = 2, create = 4, truncate = 8, append = 16 };
enum class AccessHint { random, sequential };
struct FileInfo { bool exists, is_directory; uint64_t size; int64_t modified_unix_ns; };
using FileId = Id<struct FileTag>;

class Storage {                         // any thread; one FileId may be used by one thread at a time
public:
    virtual Result<FileId> open(Area, std::string_view path, OpenMode, AccessHint) = 0;
    virtual Result<uint64_t> read(FileId, uint64_t offset, MutableBytes) = 0;       // short read = end of file
    virtual Result<uint64_t> write(FileId, uint64_t offset, Bytes) = 0;
    virtual Result<uint64_t> size(FileId) = 0;      virtual Status resize(FileId, uint64_t) = 0;
    virtual Status flush(FileId) = 0;               virtual void close(FileId) = 0;
    virtual void   prefetch(FileId, uint64_t offset, uint64_t length) = 0;           // hint (streaming of tracks and cars)
    virtual Result<FileInfo> stat(Area, std::string_view path) = 0;
    virtual Status list(Area, std::string_view directory, void (*each)(void*, std::string_view name, const FileInfo&), void* user) = 0;
    virtual Status make_directory(Area, std::string_view) = 0;  virtual Status remove(Area, std::string_view) = 0;
    virtual Status rename(Area, std::string_view from, std::string_view to) = 0;
    virtual Result<uint64_t> free_bytes(Area) = 0;
    virtual Result<MutableBytes> map(FileId, uint64_t offset, uint64_t length, bool writable) = 0;   // optional: caps
    virtual void   unmap(MutableBytes) = 0;
    virtual std::optional<std::filesystem::path> native_path(Area, std::string_view) = 0;  // desktop only (logs, diagnostics)
    virtual ~Storage() = default;
};
```

Windows `HANDLE` values, `C:\` paths, drive queries (`GetDriveTypeA`, `GetLogicalDrives`) and the case-insensitive lookup cache are the shim's;
the platform sees `Area` + path. `game_data` is configured by the user (folder picker on mobile) and is never written.

### 3.5 Settings

The game keeps its options in the registry; the mods already redirect that into a per-user settings file. One portable store:

```cpp
class Settings {                        // any thread; values are small
public:
    virtual Result<std::string>   get_string(std::string_view key, std::string_view fallback) = 0;
    virtual Result<uint32_t>      get_u32(std::string_view key, uint32_t fallback) = 0;
    virtual Result<std::vector<std::byte>> get_blob(std::string_view key) = 0;
    virtual Status set_string(std::string_view key, std::string_view) = 0;
    virtual Status set_u32(std::string_view key, uint32_t) = 0;
    virtual Status set_blob(std::string_view key, Bytes) = 0;
    virtual Status remove(std::string_view key) = 0;
    virtual Status flush() = 0;         // atomic write to Area::user_data/settings
    virtual ~Settings() = default;
};
```

Keys are `Game/<registry subkey>/<value>` for what the game stores and `Port/<name>` for the port's own settings (resolution list,
frame cap, graphics backend, touch layout, UI scale). Registry key handles (`HKEY`) stay in the shim.

### 3.6 Window and Display  (data: 26 window imports called; the mods place and style the window)

```cpp
struct DisplayMode { uint32_t width, height; uint32_t refresh_millihertz; };
struct DisplayInfo { uint32_t id; std::string name; DisplayMode current; std::vector<DisplayMode> modes;
                     float content_scale; /* DPI factor */ struct { int32_t left, top, right, bottom; } safe_area_px; bool primary; };
class Display { public: virtual std::vector<DisplayInfo> list() = 0; virtual ~Display() = default; };

enum class WindowMode { windowed, borderless, fullscreen };
struct WindowDesc { std::string title; uint32_t width, height; WindowMode mode; bool resizable; uint32_t display_id; };
struct NativeSurface { enum class Kind { win32_hwnd, xlib_window, wayland_surface, android_native_window, cametal_layer } kind; void* a; void* b; };  // for the graphics backend only

enum class EventKind { close, focus_gained, focus_lost, resized, display_changed, suspended, resumed, low_memory, surface_lost, surface_ready, terminating };
struct WindowEvent { EventKind kind; uint32_t width, height; };

class Window {
public:
    virtual Status create(const WindowDesc&) = 0;      virtual void destroy() = 0;
    virtual Status set_mode(WindowMode, uint32_t width, uint32_t height) = 0;
    virtual void   set_position(int32_t x, int32_t y) = 0;   virtual void set_title(std::string_view) = 0;
    virtual uint32_t width() = 0;  virtual uint32_t height() = 0;            // client area, framebuffer pixels
    virtual float    content_scale() = 0;
    virtual void   show_cursor(bool) = 0;
    virtual void   capture_cursor(bool relative_mouse) = 0;    // ClipCursor/SetCapture and mouse look
    virtual bool   focused() = 0;
    virtual NativeSurface native_surface() = 0;
    virtual size_t poll_events(std::span<WindowEvent>) = 0;    // pumps the OS loop where the caller's thread may do so
    virtual void   run_on_window_thread(void (*fn)(void*), void* user) = 0;   // main thread on Apple/Android
    virtual ~Window() = default;
};
```

Where the OS requires the loop on the application's main thread (macOS, iOS, Android), the application thread pumps, converts to
`WindowEvent`s and the game thread calls `poll_events`. The **shim** turns events into `WM_*` messages for the guest's `PeekMessageA` loop
and `WNDPROC` (it already does this for the 8 window-procedure trampolines). `suspended`/`resumed`/`surface_lost` become Direct3D
`D3DERR_DEVICELOST`/`NOTRESET` through `TestCooperativeLevel`, which the game already handles by recreating its default-pool resources.

### 3.7 Input  (data: the game uses DirectInput action mapping; the mods choose button texts by "last device used")

Two views of the same thing: a **state snapshot** per frame (what the game and the mods poll) and an **event queue** (what an on-screen
HUD and mouse look want). Plus the signal that does not exist in DirectInput: the **active device**.

```cpp
enum class DeviceClass { keyboard, mouse, gamepad, touch, motion };
enum class PadStyle    { generic, xbox, playstation, nintendo, virtual_touch };          // picks the glyph set
enum class ActiveDevice{ none, keyboard_mouse, gamepad, touch };

struct Key { uint16_t usb_hid_usage; };                  // physical key, layout independent; the shim maps it to DIK_* scancodes
struct PadButtons { enum : uint32_t { south = 1, east = 2, west = 4, north = 8, left_shoulder = 16, right_shoulder = 32, back = 64, start = 128,
                                      guide = 256, left_stick = 512, right_stick = 1024, dpad_up = 2048, dpad_down = 4096, dpad_left = 8192, dpad_right = 16384 }; };
struct PadState { bool connected; PadStyle style; uint32_t buttons;           // PadButtons mask
                  float left_x, left_y, right_x, right_y, left_trigger, right_trigger;   // -1..1, 0..1; no dead zone applied (the game and mods do)
                  float battery; };
struct TouchPoint { uint32_t id; float x, y; float pressure; enum class Phase { down, move, up, cancel } phase; };   // x,y in window pixels
struct MotionState { float gyro_rad_s[3]; float accel_m_s2[3]; bool available; };

struct InputFrame {                                       // filled by Input::poll, immutable afterwards
    std::bitset<256>  keys_down;                          // index = usb_hid_usage & 0xff for the keyboard page (0x04..0xe7)
    struct { int32_t dx, dy, wheel; uint32_t buttons; int32_t x, y; } mouse;
    PadState pads[4];
    TouchPoint touches[10]; uint32_t touch_count;
    MotionState motion;
    ActiveDevice active;       uint64_t active_serial;    // serial changes whenever `active` changes
    uint64_t timestamp_ns;
};
struct InputEvent { DeviceClass device; uint32_t index; /* pad number, touch id */ uint32_t code; float value; uint64_t timestamp_ns; };

class Input {                           // poll(): game thread; events/set_*: any thread
public:
    virtual void   poll(InputFrame&) = 0;
    virtual size_t drain_events(std::span<InputEvent>) = 0;
    virtual ActiveDevice active_device() = 0;                    // last device that produced input above its noise threshold
    virtual void   set_active_device_callback(void (*)(void*, ActiveDevice, PadStyle), void*) = 0;
    virtual void   set_rumble(uint32_t pad, float low, float high, uint32_t milliseconds) = 0;
    virtual void   set_touch_layout(const TouchLayout&) = 0;       // data, below; empty = no on-screen controls
    virtual void   set_relative_mouse(bool) = 0;                 // mouse look
    virtual void   set_text_input(bool) = 0;                     // on-screen keyboard (profile name entry)
    virtual ~Input() = default;
};
```

**Active device.** The rule is in the platform, not in game hooks: each device class has a noise threshold (stick above its dead zone,
any button, mouse movement above 2 px, any touch); the class that last exceeded it is `active`. A change bumps `active_serial` and calls
the callback. The HUD/menu text code (today `g_last_input_was_pad` in `mods_input.cpp`, which swaps "(A) Continue" / "[Enter] Continue"
texts) reads `active_device()` and `pads[n].style`, and gains a fourth set, touch ("Tap to continue"), without any new plumbing.

**Touch controls as data** (`TouchLayout`; shipped as a JSON file the player may edit, loaded through `Storage`):

```cpp
struct TouchControl {
    enum class Kind { button, steering_wheel, steering_slider, pedal, stick, tilt_steer, swipe_area, dpad };
    std::string id;                                   // "accelerate", "brake", "nos", "handbrake", "steer", "look", "pause"
    enum class Anchor { top_left, top_right, bottom_left, bottom_right, center } anchor;
    float x, y, width, height;                        // fractions of the safe area, measured from the anchor
    std::string icon;                                 // glyph name in the HUD atlas
    uint32_t pad_button;                              // PadButtons it presses (button/dpad), or 0
    int axis;                                         // pad axis it drives (steer -> left_x, pedal -> left/right trigger), or -1
    float dead_zone, sensitivity, opacity; bool haptic;
};
struct TouchLayout { std::string name; std::vector<TouchControl> controls; bool tilt_steering; float tilt_degrees_for_full_lock; };
```

The touch layer **presents itself as virtual gamepad 0** (`style = virtual_touch`), so the shim's DirectInput facade needs only one code
path for "a pad". Drawing the controls is the game's HUD layer (a Direct3D 9 overlay in the layer, or the front-end package extended in
memory, see ROADMAP §4); the platform only turns touches into pad state and reports which control is pressed.

### 3.8 Audio  (data: one DirectSound streaming ring buffer; no per-sound buffers in the trace)

```cpp
enum class SampleFormat { s16, f32 };
struct AudioFormat { uint32_t sample_rate; uint8_t channels; SampleFormat format; };
struct AudioDeviceInfo { AudioFormat preferred; uint32_t latency_frames; };
using StreamId = Id<struct StreamTag>;

class Audio {                           // game thread and the audio module thread (guest worker) may call
public:
    virtual AudioDeviceInfo device_info() = 0;
    // A looping ring of `frames` frames that the game fills ahead of the play cursor (DirectSound's model).
    virtual Result<StreamId> open_ring(const AudioFormat&, uint32_t frames) = 0;
    virtual Status ring_write(StreamId, uint32_t frame_offset, Bytes) = 0;        // may wrap; called at Unlock
    struct Cursors { uint32_t play_frame, write_frame; };
    virtual Cursors ring_cursors(StreamId) = 0;                                   // GetCurrentPosition
    virtual Status play(StreamId, bool looping) = 0;   virtual Status stop(StreamId) = 0;
    virtual void   set_volume(StreamId, float gain) = 0;   virtual void set_pan(StreamId, float) = 0;
    virtual void   set_frequency(StreamId, uint32_t hz) = 0;
    // Optional lower-latency path (Oboe/AAudio, CoreAudio render callback): the platform pulls.
    virtual Result<StreamId> open_pull(const AudioFormat&, void (*fill)(void*, MutableBytes), void* user) = 0;
    virtual void   close(StreamId) = 0;
    virtual void   set_paused_by_system(bool) = 0;      // app in background: stop pulling, keep the ring
    virtual ~Audio() = default;
};
```

The platform mixes all open streams; the shim's `IDirectSound`/`IDirectSoundBuffer` facade is a thin map onto it (primary buffer =
format; secondary buffers = rings; `Lock` returns arena staging memory, `Unlock` calls `ring_write`).

### 3.9 Gpu: two levels

The graphics boundary is cut **twice**, because two different things must be swappable:

```
 shim: IDirect3DDevice9 facade objects (COM, refcounts, lock staging)
   |  Level A: d3d9::Device    "what the game says" — Direct3D 9 semantics, handle-based, ~60 methods; the RECORD/REPLAY point
 d3d9 layer (written once): state shadow, state blocks, FVF + fixed-function emulation, shader translation, lock rings,
   |                        format conversion, reset/lost-device logic, render-target and surface bookkeeping
   |  Level B: gpu::Gpu       "what a modern API does" — explicit buffers, textures, passes, one DrawState per draw
 backends: bgfx adapter (Vulkan | OpenGL ES | Metal | D3D11/12)      later: own Vulkan / Metal
```

Backend A (**native Direct3D 9**) implements Level A directly: a thin object that calls the real `IDirect3DDevice9`. The layer and Level B
are then skipped; this is the reference the replay tool compares against. Today's behaviour (guest talks to real COM objects, no
facade) stays selectable as `--graphics=d3d9-direct` until the facade has proven itself, so the launcher "keeps working unchanged".

#### Level A: `d3d9::Device` (sketch; numeric values are Direct3D 9's published constants, kept as plain integers)

```cpp
namespace nfsu2::platform::d3d9 {
using TextureId = Id<struct TexTag>; using BufferId = Id<struct BufTag>; using SurfaceId = Id<struct SurfTag>;
using DeclarationId = Id<struct DeclTag>; using ShaderId = Id<struct ShaderTag>; using StateBlockId = Id<struct SbTag>;
struct Float4 { float x, y, z, w; };
struct LockedRegion { std::byte* data; uint32_t pitch, slice_pitch; };   // data lies in the guest arena (see section 4)

struct DeviceParams { uint32_t back_width, back_height, back_format, depth_format, multisample, buffers; bool windowed; uint32_t present_interval; };
struct Caps { /* the fields the game reads from D3DCAPS9: shader versions, max texture size, formats, anisotropy, ... */ };

class Device {                          // game thread only
public:
    // lifecycle
    virtual Status reset(const DeviceParams&) = 0;
    virtual Status test_cooperative_level() = 0;                  // ok | device_lost | (not reset)
    virtual Status present() = 0;
    virtual Caps   caps() = 0;
    virtual uint32_t available_texture_memory() = 0;  virtual void evict_managed_resources() = 0;
    // resources
    virtual Result<TextureId> create_texture(uint32_t w, uint32_t h, uint32_t levels, uint32_t usage, uint32_t format, uint32_t pool) = 0;
    virtual Result<TextureId> create_cube_texture(uint32_t edge, uint32_t levels, uint32_t usage, uint32_t format, uint32_t pool) = 0;
    virtual Result<BufferId>  create_vertex_buffer(uint32_t bytes, uint32_t usage, uint32_t fvf, uint32_t pool) = 0;
    virtual Result<BufferId>  create_index_buffer(uint32_t bytes, uint32_t usage, uint32_t format, uint32_t pool) = 0;
    virtual Result<SurfaceId> create_render_target(uint32_t w, uint32_t h, uint32_t format, uint32_t multisample, bool lockable) = 0;
    virtual Result<SurfaceId> create_depth_stencil(uint32_t w, uint32_t h, uint32_t format, uint32_t multisample) = 0;
    virtual Result<DeclarationId> create_vertex_declaration(std::span<const uint8_t> d3dvertexelement9_array) = 0;
    virtual Result<ShaderId>  create_vertex_shader(std::span<const uint32_t> bytecode) = 0;
    virtual Result<ShaderId>  create_pixel_shader(std::span<const uint32_t> bytecode) = 0;
    virtual void destroy(TextureId) = 0; virtual void destroy(BufferId) = 0; virtual void destroy(SurfaceId) = 0;
    virtual void destroy(DeclarationId) = 0; virtual void destroy(ShaderId) = 0;
    // locks: ALWAYS answered from CPU staging memory; the transfer happens at unlock (flags are explicit)
    enum LockFlags : uint32_t { read_only = 0x10, discard = 0x2000, no_overwrite = 0x1000, no_dirty_update = 0x8000 };
    virtual Result<LockedRegion> lock_buffer(BufferId, uint32_t offset, uint32_t bytes, uint32_t flags) = 0;
    virtual Status unlock_buffer(BufferId) = 0;
    virtual Result<LockedRegion> lock_texture(TextureId, uint32_t level, uint32_t face, const int32_t* rect4, uint32_t flags) = 0;
    virtual Status unlock_texture(TextureId, uint32_t level, uint32_t face) = 0;
    virtual Result<TextureId> surface_texture(SurfaceId) = 0;
    virtual Result<SurfaceId> texture_surface(TextureId, uint32_t level, uint32_t face) = 0;
    virtual Status stretch_rect(SurfaceId from, const int32_t* from_rect, SurfaceId to, const int32_t* to_rect, uint32_t filter) = 0;
    // state (each is a plain store into the shadow; nothing reaches the GPU until a draw)
    virtual void set_render_state(uint32_t state, uint32_t value) = 0;
    virtual void set_sampler_state(uint32_t sampler, uint32_t type, uint32_t value) = 0;
    virtual void set_texture_stage_state(uint32_t stage, uint32_t type, uint32_t value) = 0;
    virtual void set_transform(uint32_t type, const float* matrix16) = 0;
    virtual void set_viewport(const uint32_t* x_y_w_h, float min_z, float max_z) = 0;
    virtual void set_texture(uint32_t sampler, TextureId) = 0;
    virtual void set_render_target(uint32_t index, SurfaceId) = 0;  virtual void set_depth_stencil(SurfaceId) = 0;
    virtual void set_vertex_declaration(DeclarationId) = 0;  virtual void set_fvf(uint32_t) = 0;
    virtual void set_vertex_shader(ShaderId) = 0;  virtual void set_pixel_shader(ShaderId) = 0;
    virtual void set_vertex_shader_constants_f(uint32_t start, std::span<const Float4>) = 0;
    virtual void set_pixel_shader_constants_f(uint32_t start, std::span<const Float4>) = 0;
    virtual void set_stream_source(uint32_t stream, BufferId, uint32_t offset, uint32_t stride) = 0;
    virtual void set_indices(BufferId) = 0;
    virtual StateBlockId begin_state_block() = 0;  virtual void end_state_block(StateBlockId) = 0;  virtual void apply(StateBlockId) = 0;  virtual void destroy(StateBlockId) = 0;
    // scene and draws
    virtual void begin_scene() = 0;  virtual void end_scene() = 0;
    virtual void clear(std::span<const int32_t> rects4, uint32_t flags, uint32_t argb, float z, uint32_t stencil) = 0;
    virtual void draw_indexed(uint32_t primitive, int32_t base_vertex, uint32_t min_vertex, uint32_t vertex_count, uint32_t start_index, uint32_t primitive_count) = 0;
    virtual void draw_up(uint32_t primitive, uint32_t primitive_count, Bytes vertices, uint32_t stride) = 0;
    virtual ~Device() = default;
};
}
```

Everything not in this list answers `Status::unsupported` (logged once with its name).

The **record/replay tool** (phase 2) serialises exactly these calls (opcode + arguments + a blob table keyed by content hash for buffer,
texture and shader data), so a trace is backend-independent and a replay can run headless against the null Gpu, against backend A and
against bgfx; images are then compared.

#### Level B: `gpu::Gpu` (sketch)

```cpp
namespace nfsu2::platform::gpu {
using Buffer = Id<struct B>; using Texture = Id<struct T>; using Program = Id<struct P>; using Target = Id<struct R>;
enum class Format : uint8_t { rgba8, bgra8, r5g6b5, a4r4g4b4, a1r5g5b5, r8, a8, rg8, rgba16f, rgba32f, d16, d24s8, d32f,
                              bc1, bc2, bc3, astc4x4, etc2_rgba8 };
enum class Topology : uint8_t { points, lines, line_strip, triangles, triangle_strip, triangle_fan_emulated };
struct VertexAttribute { uint8_t stream, offset, type /*float1-4, ubyte4, ubyte4n, short2/4, ...*/, semantic /*position, normal, color, texcoord, ...*/, index; };
struct SamplerDesc { uint8_t min, mag, mip, address_u, address_v, address_w; float lod_bias; uint8_t max_aniso; uint32_t border_argb; };
struct BlendDesc  { /* enable, src, dst, op, separate alpha, write mask */ };
struct DepthStencilDesc { /* test, write, func, stencil ops, masks */ };
struct RasterDesc { uint8_t cull, fill; float depth_bias, slope_bias; bool scissor; };

struct DrawState {                       // everything a draw needs; the layer builds it from the shadow
    Program program;
    std::array<Buffer, 4> vertex_buffers; std::array<uint32_t, 4> vertex_offsets, vertex_strides; Buffer index_buffer; bool index32;
    std::span<const VertexAttribute> layout;                         // hashed by the backend into a layout cache
    std::array<Texture, 16> textures; std::array<SamplerDesc, 16> samplers;
    Bytes vertex_constants;  Bytes pixel_constants;                  // packed float4 arrays, uploaded per draw as one block
    BlendDesc blend; DepthStencilDesc depth_stencil; RasterDesc raster;
    Topology topology; int32_t base_vertex; uint32_t first_index, index_count, vertex_count, instance_count;
    int32_t scissor[4];
};
struct PassDesc { std::array<Texture, 4> colors; Texture depth_stencil; bool clear_color, clear_depth, clear_stencil; uint32_t clear_argb; float clear_z; uint8_t clear_stencil_value; int32_t viewport[4]; };

struct GpuCaps { bool texture_format[32]; uint32_t max_texture_size, max_anisotropy; bool uniform_blocks_256_float4, instancing, mrt, srgb_write, persistent_upload_ring; };

class Gpu {                               // game thread; the backend may own a render thread and a queue behind this
public:
    virtual const GpuCaps& caps() = 0;
    virtual Result<Buffer>  create_buffer(uint32_t bytes, bool dynamic) = 0;
    virtual void            update_buffer(Buffer, uint32_t offset, Bytes) = 0;          // copies; may orphan (DISCARD) or append (NOOVERWRITE)
    virtual Result<Texture> create_texture(uint32_t w, uint32_t h, uint32_t levels, Format, bool render_target, bool cube) = 0;
    virtual void            update_texture(Texture, uint32_t level, uint32_t face, const uint32_t* rect4, Bytes, uint32_t row_pitch) = 0;
    virtual Result<Program> create_program(Bytes vertex_binary, Bytes pixel_binary) = 0;     // binary = backend-specific, produced by the layer's shader translator
    virtual void begin_pass(const PassDesc&) = 0;
    virtual void draw(const DrawState&) = 0;
    virtual void end_pass() = 0;
    virtual Status present(uint32_t swap_interval) = 0;
    virtual Status resize(uint32_t w, uint32_t h) = 0;                                     // surface or window size changed
    virtual void   read_back(Texture, uint32_t level, MutableBytes) = 0;                      // GetRenderTargetData (rare)
    virtual void   destroy(Buffer) = 0; virtual void destroy(Texture) = 0; virtual void destroy(Program) = 0;
    virtual ~Gpu() = default;
};
}
```

This is deliberately close to what bgfx, SDL_gpu and Metal agree on, so replacing bgfx by an own Vulkan/Metal backend later changes one
class. Three decisions live in the layer, not in `Gpu`:

1. **Dynamic buffers.** `discard` → ring-allocate a fresh region (the old one lives until the GPU is done), `no_overwrite` → append to the
   current region, anything else on a dynamic buffer → treated as `discard` when the whole range is written, else a shadow-copy update.
   `Lock` never maps GPU memory to the guest, so a lock can never wait for the GPU: this is the structural answer to the 6–18 ms `Lock`
   stalls measured in heavy scenes. (Not yet measured on a backend; a design property, to be verified with the replay.)
2. **Compressed formats.** `Gpu::caps().texture_format[bc1…]` decides: supported → upload as is; else the layer transcodes (ASTC 4×4 where
   available, else ETC2 or decompression to RGBA8). The memory price is the question that matters for the 2 GB budget (BC1 is 0.5 byte per
   pixel, RGBA8 is 4 — eight times). *Open*, needs the texture memory split (not in the current profile).
3. **Shader translation.** The game creates a small number of D3D9 shader-model bytecode programs (`CreateVertexShader`: 1 site,
   `CreatePixelShader`: 1 site in the trace; the same sites create many programs) and uses the fixed-function pipeline for the rest.
   bgfx wants a precompiled binary per renderer. The layer translates D3D9 bytecode → SPIR-V (DXVK's `dxso` front-end is the model, zlib)
   → SPIRV-Cross → GLSL ES / MSL / HLSL / SPIR-V, caches the result on disk (`Area::cache`) keyed by the bytecode hash, and builds the
   fixed-function permutations the same way. **This is the largest unknown of phase 2**; the spike decides whether translation at first
   run is fast enough on a low-end phone or whether the cache must be built at install time from the user's own data.

### 3.10 Diagnostics and the null platform

`Log` (levels, rotating file under `Area::logs`), crash handler (vectored handler on Windows, signal handlers elsewhere, the guest PC
and registers in the report as today), `Profiler` hooks (call counters, the memory report). The **null platform** gives every interface a
trivial deterministic implementation so the shim and the Direct3D 9 layer have tests that need no window, GPU, audio device or game
data, and so the existing instruction-count tests keep running unchanged.

## 4. How a non-Windows backend gets its COM objects

Today the guest holds **real** COM pointers: `Direct3DCreate9` is the real d3d9.dll, the vtable slots are real code, and
`NativePlatform::dispatch` calls them with the guest stack as arguments (`invoke_native32`). That is why `native32.cpp` needs the
host to be 32-bit Windows.

The facade replaces the real objects by guest-visible ones, with **no new dispatch mechanism**: `dispatch` already recognises call tokens
(`0xf0000000 + 16*i` for imports, used by `override_import`).

- `Direct3DCreate9` (handled by the shim) returns a **facade object** in the guest arena: `{ u32 vtable; u32 refcount; u32 handle; u32 kind }`
  with `vtable` pointing at an array of 32-bit **method tokens** in a new reserved range (e.g. `0xf1000000 + (interface << 12 | slot << 2)`).
  A guest `call [eax+0x38]` therefore sets `pc` to the token, the translated code returns to the dispatcher, and the dispatcher routes
  to the handler registered for that `(interface, slot)`, which reads the stdcall arguments from the guest stack, converts them, calls
  `d3d9::Device`, and returns through the existing `returned()` helper. Cost is below the present ~60 ns per Windows call (no stack
  switch, no real call).
- `AddRef`/`Release` are handlers that touch only the facade's refcount (> 10,000 per frame, ≈ 5,000 pairs, now no Windows call); `Release` to
  zero calls `Device::destroy(handle)`. The guest may later inline this as a plain atomic add; it is a separate optimisation.
- **Lock staging.** `Lock` returns an address in the guest arena (a region of a per-device staging allocator). `Unlock` calls
  `update_buffer`/`update_texture` with the written range. The platform never sees a guest pointer, and a 64-bit host never has to give
  the guest an address above 4 GiB.
- **Structures the guest reads** (`D3DCAPS9`, `D3DSURFACE_DESC`, `D3DADAPTER_IDENTIFIER9`, `D3DDISPLAYMODE`, `DIDEVICEINSTANCE`,
  `WAVEFORMATEX`…) are written by the shim into guest memory from platform data (`Display::list`, `Gpu::caps`, `Input` device lists).
  Their layouts are taken from the installed SDK headers (as `native32.cpp` already does for DirectInput) and tested against them.
- **Callbacks into the guest** (`EnumDevices`, `EnumDevicesBySemantics`, window procedures, timers, thread entries) already go through
  `call_guest`/`callback`; they stay in the shim and call platform services through plain function pointers plus a user pointer.

The native Windows backend does not need the facade for Direct3D/DirectInput/DirectSound (`--graphics=d3d9-direct` etc.), which keeps
the reference path bit-for-bit the same until the facade has been compared against it with the replay tool.

## 5. Backends

| Subsystem | `win32` (reference, today) | `sdl3` (candidate; Linux, Android, macOS, iOS, optional Windows) | `null` |
|---|---|---|---|
| Clock, Threads, Sync, Timers | QPC, `CreateThread`, events, `timeSetEvent` (plus the priority cap) | `SDL_GetTicksNS`/`clock_gettime`, `SDL_CreateThread`, pthread futex / `std::atomic::wait` | virtual clock |
| Memory | `VirtualAlloc` reserve at `0x00401000` (the `.raw_guest` section), `VirtualProtect` | `mmap`/`mprotect` (Android, Linux), `mach_vm` (Apple); no execute on iOS | `malloc` |
| Storage | Win32 file API, case-insensitive natively | POSIX + a case-insensitive directory index; Android document-tree through SDL's content-URI I/O | in-memory |
| Settings | file in `%APPDATA%` (as the mods do today) | file in the app's data dir | in-memory |
| Window, Display | HWND, `EnumDisplaySettings`, `SetWindowPos` | `SDL_Window`, `SDL_GetDisplays`, safe-area and content-scale queries | fixed 1280×720 |
| Input | DirectInput 8 (keyboard, mouse, joysticks) + XInput for glyph style; `GetForegroundWindow` focus | `SDL_Gamepad` (sensors, rumble, glyph style), keyboard/mouse events, `SDL_Finger` touch, `SDL_Sensor` | scripted |
| Audio | DirectSound ring (passthrough) or WASAPI | `SDL_AudioStream` (AAudio/Oboe on Android, CoreAudio on Apple), software ring | counts frames |
| Gpu | Level A native D3D9 (reference) | Level B `bgfx` adapter | counts draws |

SDL3 for everything except graphics is **a candidate, not a decision** (ROADMAP §3): it brings window, gamepad (including gyro, haptics,
glyph-style hints and device-change events), touch, audio streams and the Android/iOS activity lifecycle that every APK/IPA needs, which is
the part that is most expensive to write per platform; bgfx has first-class SDL examples. The API above does not depend on that choice:
if SDL3 proves unsuitable for a target, that one backend is written natively.

## 6. How the work is cut (phases 1–3, verification)

**Phase 1 — skeleton and Windows backend, no behaviour change.**
- Add `platform/` (headers of section 3 minus `d3d9`/`gpu`, which are phase 2) and `platform/win32/` (implementation), `platform/null/`.
- Move **our own host-side Windows use** (section 2.5) behind the interfaces: frame limiter and timing, cursor clip/show, timers, thread
  start with priority cap and affinity, display enumeration and window placement of the mods, settings/registry file store, crash
  report and profiler memory report, DPI/power-throttling opt-outs.
- Introduce the shim's **import routing table**: a guest import with a registered handler is served by the shim + platform; every other
  import keeps today's native pass-through. Migrate per subsystem in this order (each step verified by the unchanged tests): time,
  settings (already overridden), threads/sync/timers, window messages, files. Direct3D/DirectInput/DirectSound stay pass-through in phase 1.
- Verification: the existing 15 ctest tests green, `launcher_cli` instruction counts identical, a unit test per interface against the
  `null` backend and, for `win32`, against the real OS where a console test can (clock, storage, settings, sync, threads, memory).

**Phase 2 — graphics.** Section 3.9: Level A types and the call-trace recorder first (recording on the *direct* path costs nothing: the
shim already sees every call and decodes vtable slots); then the layer and the null Gpu; then bgfx: first the out-of-game spike (textured
quad, tens of thousands of draws, DXT upload and conversion on Windows with Vulkan and D3D11), then the replay against both backends.

**Phase 3 — input.** Section 3.7 on the null and win32 backends, the active-device signal wired into `mods_input.cpp`, the touch layout as
data with a layout/hit-test unit test; the DirectInput facade (action mapping) behind `--input=facade`.

## 7. Open questions and risks

1. **Case-insensitive file names on Android/Linux** over a document-tree: needs a directory index; cost and cache invalidation are not
   measured.
2. **D3D9 shader translation at first run** (section 3.9). The spike must measure compile time per shader on a low-end phone; the
   fallback is to build the cache during an install step from the user's own data. No game bytes may enter the repository either way.
3. **DirectInput action mapping.** `BuildActionMap`/`SetActionMap` + `GetDeviceData` (and `EnumDevicesBySemantics`) mean the game asks
   DirectInput to map semantic actions to device objects. The facade must implement enough of that to give the game the same
   buffers the mods read. Next evidence: a run with `NFSU2_TRACE_INPUT=1` (the code exists) to log the action format and delivered data.
4. **GDI text** (section 2.2, point 3).
5. **What one session did not exercise:** network, photo mode, any Direct3D 9 method not listed in 2.3. Mitigation: record more traces
   (sections 3.9 and Appendix) and keep `unsupported` loud and logged.
6. **Texture memory under 2 GB**: BC→ASTC/ETC2/RGBA8 policy and a texture-memory profile do not exist yet.
7. **Frame pacing and vsync**: `limit_frame_rate`, `set_vsync` and the present interval rewrite are Windows-specific today; on mobile the
   display's own vsync is the pacer (swap interval 1), so the frame limiter becomes a policy of `Gpu::present`.
8. **Render thread.** The profile says the game is GPU-bound in heavy scenes with Lock stalls; whether the backend uses its own render
   thread (bgfx does by default) behind the single-threaded `Device` is a backend detail, but the shim's `Present`/`Reset`/lost-device
   protocol with a render thread must be specified in phase 2.
9. **64-bit CPU backend** is outside this document but constrains it: no host pointer may be assumed to fit in 32 bits, which is why
   section 4 insists on arena-relative staging and handle tables.
10. **Nothing graphical has been verified.** This document is derived from code, headers and one trace.

## Appendix A: where the numbers come from

```
python tools/platform_inventory.py --trace "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\raw_recomp\dist\NFSU2-static\logs\native_trace.log"
```

prints the tables of 2.2, 2.3 and 2.4 (and the per-call time table) for any trace. To widen the inventory the user can run a longer
session with the profile on:

```
$env:NFSU2_PROFILE = "1"; & "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\raw_recomp\dist\NFSU2-static\nfsu2_launcher.exe" --game-dir "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\data game (pc)"
```

and send `logs\native_trace.log` (the trace is capped at 4 MiB of ordinary records; first-call records are enough for this inventory).
