#pragma once
// What the code that serves the guest's imports (the Win32 facade, the DirectInput part, the mods) needs from the platform that runs the translated
// program, as an interface. Two implementations: NativePlatform (native32.hpp, the 32-bit Windows host: the guest shares the process' address space)
// and Platform64 (platform64.hpp, any 64-bit host: the guest lives in the arena, docs/MEMORY_MODEL_64.md).
//
// A handler is called with the processor of the guest thread that made the call; it reads its stdcall arguments from the guest stack (guest::ptr),
// and returns EAX. The stdcall words are removed by the platform (`argument_count` at registration).
#include "runtime.hpp"
#include <filesystem>
#include <atomic>
#include <stdexcept>
#include <functional>
#include <initializer_list>
#include <iostream>

namespace nfsu2raw {

class GuestPlatform {
public:
    using NativeHook = std::function<uint32_t(Cpu&)>;
    virtual ~GuestPlatform() = default;

    // The platform running in this process (null before one is built): the mods use it to call back into translated code. Each platform sets and clears it.
    static GuestPlatform* active() { return active_slot().load(); }
    static void set_active(GuestPlatform* platform) { active_slot().store(platform); }
    // Calls a function of the translated program from native code on a processor of its own: ECX and EDX are set (this-call / fast-call) and `arguments`
    // are pushed as stack words (the callee pops its own or the caller ignores them, as the function's convention says). Returns EAX.
    virtual uint32_t call_guest(uint32_t address, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments) = 0;
    // The same with the stack words as an array (for callers that build the argument list, like a COM call with `this` first). Hosts that do not need it may refuse it.
    virtual uint32_t call_guest_words(uint32_t address, uint32_t ecx, uint32_t edx, const uint32_t* words, size_t count) {
        (void)address; (void)ecx; (void)edx; (void)words; (void)count;
        throw std::runtime_error("this platform does not call guest code with a word array");
    }
    // The handler that serves an import now (empty when none): a mod that changes a call's arguments or result wraps it and calls it ("chaining").
    virtual NativeHook import_override(const char* name) const { (void)name; return {}; }
    // Names the mod-originated call this thread is inside (nullptr: none); a crash report says so.
    virtual void mod_call_note(const char* name) { (void)name; }

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
    // A guest thread or timer callback failed: the platform records `what`, stops, and the main run reports it.
    virtual void guest_fault(const std::string& what) { (void)what; }
    // The folder of the game's files (the registry group's InstallDir comes from it). Empty when the platform has none.
    virtual const std::filesystem::path& game_directory() const { static const std::filesystem::path none; return none; }
    // One line for the run's log (NativePlatform: logs/native_trace.log). Platforms without a log write it to stderr.
    virtual void log_line(const std::string& text) { std::cerr << text << "\n"; }
    // Memory the guest made executable outside the translated image holds code generated at run time (the audio engine's relocatable modules): control that
    // reaches it is interpreted. Default: not supported.
    virtual void register_dynamic_region(uint32_t base, uint32_t size) { (void)base; (void)size; }
    // The layer above is shutting down: guest threads and waits must come back (throw_if_stopping raises from now on). Default: nothing to do.
    virtual void stop_guest() {}
    // Raises a Fault when the platform is shutting down (a long guest wait calls it between slices).
    virtual void throw_if_stopping(const char* what) const = 0;
private:
    static std::atomic<GuestPlatform*>& active_slot() { static std::atomic<GuestPlatform*> slot{nullptr}; return slot; }
};

}  // namespace nfsu2raw
