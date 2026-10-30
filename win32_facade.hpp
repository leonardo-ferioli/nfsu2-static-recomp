// The Win32 facade: the only code that knows how the translated game calls Windows (stdcall words on the guest stack, 32-bit guest pointers, COM objects)
// and that turns those calls into calls of the Level A library legacy_win32 (docs/NUE_HANDOVER_WIN32_DINPUT.md). It installs import overrides
// (NativePlatform::override_import) for the groups of functions that are switched on; every group that is off keeps the pass-through to the real
// Windows, which is the default, so the behaviour of a launcher that does not ask for the layer is unchanged.
//
// Groups: time, text, process, sync, memory, files, dinput, loader, registry, resources, user32, system, traps. A group never answers a function for a handle or an object that belongs to another source:
// handles of the library live in a range of their own (HandleTable bias) and a call with a handle of the real system is passed to the real function.
#pragma once
#include "guest_memory.hpp"
#include "guest_platform.hpp"
#ifdef NFSU2_NATIVE32
#include "native32.hpp"   // tests and tools that build the facade over the 32-bit platform
#endif
#include <functional>
#include <memory>
#include <string>

namespace nfsu2::platform { class Input; class Window; class Display; }
namespace nue::gpu { class Gpu; }
namespace nue::d3d9 { class GfxDevice; struct LayerOptions; }   // NUE's Direct3D 9 layer on a nue_gfx context (nue_legacy/d3d9_gfx.hpp)

namespace nfsu2raw {

struct Win32LayerOptions {
    bool time = false, text = false, process = false, sync = false, memory = false, files = false, dinput = false;
    // registry: the Reg* imports answered by legacy_win32's registry over an in-memory Config (persisted by the host through win32_registry_config()), seeded with the game's
    // own keys. traps: the imports the game never calls (network, serial, TAPI, GDI drawing) answered with a logged failure instead of reaching a host.
    // Both belong to hosts without a real Windows; "all" includes them only there, because on 32-bit Windows the mods' registry policy and the real functions are in place.
    bool registry = false, traps = false;
    std::string registry_text;                     // the Config text of an earlier run (Win32Facade::registry_text())
    std::string registry_language = "English US";  // the value of "Language" when the key is first created
    // The guest's memory when the guest does not share the process' address space (any 64-bit host). Null: identity model (32-bit Windows host).
    // The address-space window [0x10000, 0x10000 + address_space_bytes) of it belongs to VirtualAlloc and the heaps (make_arena_address_space).
    nfsu2::guest::Memory* guest_memory = nullptr;
    uint32_t address_space_bytes = 256u << 20;
    bool loader = false;   // modules, threads, timers, VirtualAlloc, exit: what the 32-bit host leaves to its own bridge; installed only on a 64-bit host (Platform64)
    // More groups of a host without a real Windows ("all" includes them only there): resources (FindResource and friends over the guest image's PE resources), user32 (windows
    // and messages over legacy_win32's window system; handles are library tokens and the guest's window procedures run through GuestPlatform::callback), system (CreateFileW,
    // file mappings, toolhelp, drive queries, the shell of a machine that has none).
    bool resources = false, user32 = false, system = false;
    // The platform window and display the user32 group listens to (not owned, optional): null means headless fixtures that report a 1280x720 display and no events.
    nfsu2::platform::Window* window = nullptr;
    nfsu2::platform::Display* display = nullptr;
    // d3d9: Direct3DCreate9 and the Direct3D 9 objects as COM objects in guest memory over the layer nue::d3d9 (win32_facade_d3d9.cpp). A host without a real Windows only
    // ("all" includes it there); the 32-bit Windows host keeps the drop-in d3d9.dll. `d3d9_gpu` makes the GPU the layer draws with for a device on the guest window `hwnd`
    // (a token of the user32 group) whose client area is width x height; empty means the null GPU (draws nothing, for headless runs and tests).
    bool d3d9 = false;
    std::function<std::unique_ptr<nue::gpu::Gpu>(uint32_t hwnd, uint32_t width, uint32_t height, std::string& error)> d3d9_gpu;
    // Builds with NUE (NFSU2_HAVE_NUE): the device of the game's CreateDevice comes from the host instead, normally NUE's Direct3D 9 layer on the host's nue_gfx
    // (d3d9_device_on_nue_gfx, win32_facade_d3d9_nue.hpp). The layer then draws into the NUE window, follows nue_gfx's lost / suspended states (TestCooperativeLevel,
    // Present, Reset) and Present goes through nue_gfx_present. It is called on the thread that runs the guest's main thread, the one that created the nue_gfx context,
    // with the layer options the facade wants; it wins over d3d9_gpu. Empty: d3d9_gpu or the null GPU, as before.
    std::function<std::unique_ptr<nue::d3d9::GfxDevice>(uint32_t hwnd, uint32_t width, uint32_t height, const nue::d3d9::LayerOptions& options, std::string& error)> d3d9_device;
    bool any() const { return time || text || process || sync || memory || files || dinput || loader || registry || traps || resources || user32 || system || d3d9; }
};

// "all", "none", or a comma separated list of group names. `error` receives the first name that is not a group.
Win32LayerOptions parse_win32_layer(const std::string& spec, std::string& error);

class Win32Facade {
public:
    // `input` (optional, not owned) is the input of the DirectInput part; null means the Windows one. It must be given before the group is installed, so it is a constructor argument.
    Win32Facade(GuestPlatform& platform, const Win32LayerOptions& options, nfsu2::platform::Input* input = nullptr);
    ~Win32Facade();
    // Names of the imports that were taken over (for the log and the tests).
    const std::string& installed_report() const;
    // What the guest's handles mean, for the layers that live outside the facade (the DirectSound layer signals the guest's events and checks its window).
    bool set_event(uint32_t handle);
    bool is_window(uint32_t handle);
    // The text of the registry's Config store ("key=value" lines) so that a host can keep it between runs and give it back as Win32LayerOptions::registry_text.
    std::string registry_text() const;
    struct Impl;
private:
    std::unique_ptr<Impl> impl_;
};

}  // namespace nfsu2raw
