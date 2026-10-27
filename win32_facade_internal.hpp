// Internals shared by the parts of the Win32 facade (win32_facade.cpp, win32_facade_dinput.cpp): the guest calling-convention helpers and the state.
#pragma once
#include "guest_memory.hpp"
#include "win32_facade.hpp"
#include "legacy_win32/dinput.hpp"
#include "legacy_win32/files.hpp"
#include "legacy_win32/memory.hpp"
#include "legacy_win32/process.hpp"
#include "legacy_win32/registry.hpp"
#include "legacy_win32/sync.hpp"
#include "legacy_win32/text.hpp"
#include "legacy_win32/time.hpp"
#include "platform/input.hpp"
#include "platform/std/std_platform.hpp"
// The real operating system is reachable only where the guest shares the process: a 32-bit Windows host (identity model). There, a handle the library does
// not own goes to the real function, and the process facts (pid, version, environment) are the host's. Everywhere else the facade is pure: a handle the
// library does not own is an invalid handle and every fact comes from the configuration.
#if defined(_WIN32) && defined(NFSU2_GUEST_IDENTITY)
#define NFSU2_FACADE_REAL_OS 1
#include "host/windows_address_space.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif
#include <algorithm>
#include <atomic>
#include <cstring>
#include <mutex>
#include <sstream>
#include <unordered_map>

namespace nfsu2raw {
namespace guest = nfsu2::guest;
namespace lw = nfsu2::legacy::win32;
namespace ldi = nfsu2::legacy::dinput;
namespace plat = nfsu2::platform;

namespace {

// ---- the guest's calling convention: stdcall words on the guest stack. A guest address becomes a host pointer only through guest::to_host / guest::ptr.
inline uint32_t sp(Cpu& c) { return uint32_t(r<4>(c, 16)); }
inline uint32_t arg(Cpu& c, unsigned i) { uint32_t v; std::memcpy(&v, guest::to_host(sp(c) + 4 + 4 * i), 4); return v; }
template <class T> inline T* ptr(uint32_t address) { return guest::ptr<T>(address); }
inline uint32_t* last_error_slot(Cpu& c) { return ptr<uint32_t>(uint32_t(r<4>(c, 0x110)) + 0x34); }
inline void set_error(Cpu& c, uint32_t e) { *last_error_slot(c) = e; }
inline std::string cstr(uint32_t address) { return address ? std::string(ptr<const char>(address)) : std::string(); }
#ifdef NFSU2_FACADE_REAL_OS
// A call of the real Windows function from a handler: the guest's last error goes in before and comes out after, as the bridge does for every native call.
template <class F> inline uint32_t real(Cpu& c, F&& f) {
    SetLastError(*last_error_slot(c));
    const uint32_t v = uint32_t(f());
    set_error(c, GetLastError());
    return v;
}
inline HANDLE H(uint32_t h) { return reinterpret_cast<HANDLE>(uintptr_t(h)); }
#define FACADE_REAL(c, name, ...) real(c, [&] { return __VA_ARGS__; })
constexpr bool kRealOs = true;
#else
// No real OS: the expression of the real call is not even compiled. Reaching here means a handle the library does not own: ERROR_INVALID_HANDLE.
inline uint32_t no_real_os(Cpu& c) { set_error(c, 6 /* ERROR_INVALID_HANDLE */); return 0; }
#define FACADE_REAL(c, name, ...) no_real_os(c)
constexpr bool kRealOs = false;
#endif

constexpr uint32_t kHandleBias = 0x00C00000u;   // the library's handles live above the range of the real system's (which are small)

}  // namespace

struct Win32Facade::Impl {
    Impl(NativePlatform& p, const Win32LayerOptions& o)
        : platform(p), options(o), clock(plat::stdlib::make_clock()), threads(plat::stdlib::make_threads()), system(plat::stdlib::make_system()), storage(plat::stdlib::make_storage()),
          handles(kHandleBias), time(*clock), text(system->info().ansi_code_page, system->info().oem_code_page, system->info().user_lcid),
          sync(*threads, *clock, handles), space(make_space(o)), heaps(*space), process(*system, handles, process_config(*system)),
          files(*storage, handles, file_config()) {}

    // The address space of the guest: the portable one over the guest memory the port gives (any host), or, without one, the real VirtualAlloc of a 32-bit
    // Windows process (identity model: today's behaviour).
    static std::unique_ptr<lw::AddressSpace> make_space(const Win32LayerOptions& o) {
        if (o.guest_memory) return lw::make_arena_address_space(*o.guest_memory, o.address_space_bytes);
#ifdef NFSU2_FACADE_REAL_OS
        return lw::host::make_identity_address_space();
#else
        throw std::runtime_error("Win32 layer: this host needs the guest memory (Win32LayerOptions::guest_memory)");
#endif
    }
    static lw::ProcessConfig process_config(plat::System& system) {
        lw::ProcessConfig c;
#ifdef NFSU2_FACADE_REAL_OS
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
#endif
        (void)system;
        return c;
    }
    static lw::FileSystemConfig file_config() {
        lw::FileSystemConfig c;
#ifdef NFSU2_FACADE_REAL_OS
        char cwd[MAX_PATH];
        const DWORD n = GetCurrentDirectoryA(MAX_PATH, cwd);
        c.current_directory = n ? std::string(cwd, n) : "C:\\";
        c.logical_drives_mask = GetLogicalDrives();
#endif
        return c;                                   // no drive mapping: every path is a native path
    }

    NativePlatform& platform;
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

    bool mine(uint32_t handle) const { return !kRealOs || handles.owns(handle); }   // a handle the library owns (the only kind without a real OS)

    void on(const char* name, unsigned argc, NativePlatform::NativeHook hook) {
        if (!NativePlatform::imports_function(name)) return;
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
    void install_registry(); // win32_facade_extra.cpp
    void install_traps();    // win32_facade_extra.cpp
    std::unique_ptr<plat::Config> config;
    std::unique_ptr<lw::Registry> registry;
    std::atomic<uint32_t> wsa_error{0};
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
