#pragma once
// What the code that serves the guest's imports (the Win32 facade, the DirectInput part, the mods) needs from the platform that runs the translated
// program, as an interface. Two implementations: NativePlatform (native32.hpp, the 32-bit Windows host: the guest shares the process' address space)
// and Platform64 (platform64.hpp, any 64-bit host: the guest lives in the arena, docs/MEMORY_MODEL_64.md).
//
// A handler is called with the processor of the guest thread that made the call; it reads its stdcall arguments from the guest stack (guest::ptr),
// and returns EAX. The stdcall words are removed by the platform (`argument_count` at registration).
#include "runtime.hpp"
#include <functional>
#include <initializer_list>

namespace nfsu2raw {

class GuestPlatform {
public:
    using NativeHook = std::function<uint32_t(Cpu&)>;
    virtual ~GuestPlatform() = default;

    // True when the game imports `name` (the facade installs only what exists).
    virtual bool has_import(const char* name) const = 0;
    // Replaces an imported function by a native one; install before the guest runs.
    virtual void override_import(const char* name, unsigned argument_count, NativeHook hook) = 0;
    // Method tokens: vtable slots of guest-visible objects served natively. `argument_count` words (this included) are removed from the guest stack.
    virtual uint32_t add_method_token(unsigned argument_count, NativeHook hook) = 0;
    // Calls a function of the translated program from native code and returns EAX (the callback's stdcall arguments are pushed).
    virtual uint32_t callback(uint32_t address, std::initializer_list<uint32_t> arguments) = 0;
    // The token a guest function pointer for `name` has (what GetProcAddress returns for a function that is served natively): the import slot
    // token when the game imports it, otherwise a token of its own. A call of a token nobody serves fails explicitly. 0 when this platform has none.
    virtual uint32_t token_for(const char* name) { (void)name; return 0; }
    // Raises a Fault when the platform is shutting down (a long guest wait calls it between slices).
    virtual void throw_if_stopping(const char* what) const = 0;
};

}  // namespace nfsu2raw
