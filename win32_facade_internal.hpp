// Internals shared by the parts of the Win32 facade (win32_facade.cpp, win32_facade_dinput.cpp): the guest calling-convention helpers and the state.
#pragma once
#include "win32_facade.hpp"
#include "legacy_win32/dinput.hpp"
#include "legacy_win32/files.hpp"
#include "legacy_win32/memory.hpp"
#include "legacy_win32/process.hpp"
#include "legacy_win32/sync.hpp"
#include "legacy_win32/text.hpp"
#include "legacy_win32/time.hpp"
#include "host/windows_address_space.hpp"
#include "guest_arena.hpp"
#include "platform/input.hpp"
#include "platform/std/std_platform.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <algorithm>
#include <atomic>
#include <cstring>
#include <mutex>
#include <sstream>
#include <unordered_map>

namespace nfsu2raw {
namespace lw = nfsu2::legacy::win32;
namespace ldi = nfsu2::legacy::dinput;
namespace plat = nfsu2::platform;

namespace {

// ---- the guest's calling convention: stdcall words on the guest stack, a 32-bit guest address is a host address
inline uint32_t sp(Cpu& c) { return uint32_t(r<4>(c, 16)); }
inline uint32_t arg(Cpu& c, unsigned i) { uint32_t v; std::memcpy(&v, nfsu2::guest::ptr<const void>(sp(c) + 4 + 4 * i), 4); return v; }
template <class T> inline T* ptr(uint32_t address) { return nfsu2::guest::ptr<T>(address); }
inline uint32_t* last_error_slot(Cpu& c) { return ptr<uint32_t>(uint32_t(r<4>(c, 0x110)) + 0x34); }
inline void set_error(Cpu& c, uint32_t e) { *last_error_slot(c) = e; }
inline std::string cstr(uint32_t address) { return address ? std::string(ptr<const char>(address)) : std::string(); }
// A call of the real Windows function from a handler: the guest's last error goes in before and comes out after, as the bridge does for every native call.
// A HANDLE of the real system as the guest holds it: only on the 32-bit host (declared and not defined on an arena host: see guest_memory.hpp).
inline HANDLE H(uint32_t h) { return nfsu2::guest::host_handle<HANDLE>(h); }
#ifdef NFSU2_GUEST_IDENTITY
template <class F> inline uint32_t real(Cpu& c, F&& f) {
    SetLastError(*last_error_slot(c));
    const uint32_t v = uint32_t(f());
    set_error(c, GetLastError());
    return v;
}
inline uint32_t foreign_wait_zero(uint32_t h) { return WaitForSingleObject(H(h), 0); }
#else
// A 64-bit host: the guest holds no handle of the real system (a host object reaches it as a token of the library), so a handle that the library
// does not own is a bug or an object nobody serves yet. Say so instead of answering something.
template <class F> [[noreturn]] inline uint32_t real(Cpu&, F&&) { throw Fault("a handle the Win32 layer does not own reached the pass-through to the real system (not available on a 64-bit host)"); }
[[noreturn]] inline uint32_t foreign_wait_zero(uint32_t) { throw Fault("a handle the Win32 layer does not own was waited on (not available on a 64-bit host)"); }
#endif

constexpr uint32_t kHandleBias = 0x00C00000u;   // the library's handles live above the range of the real system's (which are small)

}  // namespace

struct Win32Facade::Impl {
    Impl(GuestPlatform& p, const Win32LayerOptions& o)
        : platform(p), options(o), clock(plat::stdlib::make_clock()), threads(plat::stdlib::make_threads()), system(plat::stdlib::make_system()), storage(plat::stdlib::make_storage()),
          handles(kHandleBias), time(*clock), text(system->info().ansi_code_page, system->info().oem_code_page, system->info().user_lcid),
          sync(*threads, *clock, handles), space(make_space()), heaps(*space), process(*system, handles, process_config(*system)),
          files(*storage, handles, file_config()) {}

    // The address space the library's heaps and VirtualAlloc run in: the process' own on the 32-bit host; on a 64-bit host a window of the guest arena
    // (committed here, so the processor's Cpu::pointer reaches it), whose Win32 region rules are the library's.
    static constexpr uint32_t kWindowBase = 0x20000000u, kWindowBytes = 0x20000000u;
    static std::unique_ptr<lw::AddressSpace> make_space() {
#ifdef NFSU2_GUEST_IDENTITY
        return lw::host::make_identity_address_space();
#else
        auto* guest_space = nfsu2::guest::current_address_space();
        if (!guest_space) throw Fault("the Win32 layer needs the guest arena (nfsu2::guest::create_arena) before it is installed");
        if (!guest_space->commit(kWindowBase, kWindowBytes, nfsu2::guest::kPageReadWrite)) throw Fault("cannot commit the Win32 layer's address window in the guest arena");
        return lw::make_arena_address_space_over(reinterpret_cast<std::byte*>(guest_space->host(kWindowBase, kWindowBytes)), kWindowBase, kWindowBytes);
#endif
    }
    static lw::ProcessConfig process_config(plat::System& system) {
        lw::ProcessConfig c;
        c.process_id = GetCurrentProcessId();
        OSVERSIONINFOA v{sizeof v};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
        GetVersionExA(&v);
#pragma clang diagnostic pop
        c.version.major = v.dwMajorVersion; c.version.minor = v.dwMinorVersion; c.version.build = v.dwBuildNumber; c.version.platform = v.dwPlatformId; c.version.service_pack = v.szCSDVersion;
        c.environment.clear();
        if (LPCH block = GetEnvironmentStringsA()) {
            for (const char* e = block; *e; e += std::strlen(e) + 1) c.environment.emplace_back(e);
            FreeEnvironmentStringsA(block);
        }
        (void)system;
        return c;
    }
    static lw::FileSystemConfig file_config() {
        lw::FileSystemConfig c;
        char cwd[MAX_PATH];
        const DWORD n = GetCurrentDirectoryA(MAX_PATH, cwd);
        c.current_directory = n ? std::string(cwd, n) : "C:\\";
        c.logical_drives_mask = GetLogicalDrives();
        return c;                                   // no drive mapping: every path is a native path
    }

    GuestPlatform& platform;
    Win32LayerOptions options;
    std::unique_ptr<plat::Clock> clock;
    std::unique_ptr<plat::Threads> threads;
    std::unique_ptr<plat::System> system;
    std::unique_ptr<plat::Storage> storage;
    lw::HandleTable handles;
    lw::TimeApi time;
    lw::TextApi text;
    lw::Sync sync;
    std::unique_ptr<lw::AddressSpace> space;
    lw::HeapManager heaps;
    lw::ProcessApi process;
    lw::FileSystem files;
    std::mutex cs_mutex;
    std::unordered_map<uint32_t, lw::CsId> sections;
    std::string report;
    std::string environment_a;
    std::u16string environment_w;
    uint32_t environment_a_address = 0, environment_w_address = 0;

    void on(const char* name, unsigned argc, GuestPlatform::NativeHook hook) {
        if (!platform.has_import(name)) return;
        platform.override_import(name, argc, std::move(hook));
        report += name; report += ' ';
    }
    void install_time();
    void install_text();
    void install_process();
    void install_sync();
    void install_memory();
    void install_files();
    void install_dinput();   // win32_facade_dinput.cpp
    plat::Input* input_override = nullptr;          // tests give the DirectInput part a scripted input instead of the Windows one
    std::unique_ptr<plat::Input> input_owned;
    std::unique_ptr<ldi::DirectInput> di;
    struct DInputState {
        struct Object { bool is_device = false; std::shared_ptr<ldi::Device> device; std::atomic<int> refs{1}; };
        std::mutex m;
        std::unordered_map<uint32_t, std::shared_ptr<Object>> objects;     // by the guest address of the COM object
        uint32_t di_vtable = 0, device_vtable = 0;
        std::vector<uint32_t> di_tokens, device_tokens;
    };
    std::unique_ptr<DInputState> dinput;
    ~Impl();
};


}  // namespace nfsu2raw
