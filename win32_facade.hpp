// The Win32 facade: the only code that knows how the translated game calls Windows (stdcall words on the guest stack, 32-bit guest pointers, COM objects)
// and that turns those calls into calls of the Level A library legacy_win32 (docs/NUE_HANDOVER_WIN32_DINPUT.md). It installs import overrides
// (NativePlatform::override_import) for the groups of functions that are switched on; every group that is off keeps the pass-through to the real
// Windows, which is the default, so the behaviour of a launcher that does not ask for the layer is unchanged.
//
// Groups: time, text, process, sync, memory, files, dinput, registry, traps. A group never answers a function for a handle or an object that belongs to another source:
// handles of the library live in a range of their own (HandleTable bias) and a call with a handle of the real system is passed to the real function.
#pragma once
#include "guest_memory.hpp"
#include "guest_platform.hpp"
#ifdef NFSU2_NATIVE32
#include "native32.hpp"   // tests and tools that build the facade over the 32-bit platform
#endif
#include <memory>
#include <string>

namespace nfsu2::platform { class Input; }

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
    bool any() const { return time || text || process || sync || memory || files || dinput || loader || registry || traps; }
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
    // The text of the registry's Config store ("key=value" lines) so that a host can keep it between runs and give it back as Win32LayerOptions::registry_text.
    std::string registry_text() const;
    struct Impl;
private:
    std::unique_ptr<Impl> impl_;
};

}  // namespace nfsu2raw
