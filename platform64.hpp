#pragma once
// The platform that runs the translated game on a 64-bit host (docs/MEMORY_MODEL_64.md, stage 4): the guest image, stacks and thread blocks live in
// the guest arena (guest_arena.hpp, create_arena must have been called), every import is served by a handler registered with override_import (the
// Win32 facade over the Level A library legacy_win32 and the DirectSound/Direct3D layers), and nothing here holds a host pointer that the guest can see.
//
// It runs the reference backend (one translated instruction per step); the fast backend plugs into execute() when its 64-bit pages are built.
// A guest thread, a timer callback and a window procedure each run on their own guest processor (stack and thread block in the arena); callback()
// takes one from a per-host-thread pool, so a handler may call back into the guest while the guest is waiting inside it.
#include "guest_platform.hpp"
#include "guest_arena.hpp"
#include "dynamic_code.hpp"
#include <atomic>
#include <filesystem>
#include <fstream>
#include <map>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

namespace nfsu2raw {

class Platform64 : public GuestPlatform {
public:
    // The guest image comes from the exported memory files in `exports`, every block checked against its SHA-256. `game` is the game's folder.
    Platform64(Cpu& main, const std::filesystem::path& exports, const std::filesystem::path& game);
    ~Platform64() override;
    static Platform64* current();

    // GuestPlatform
    bool has_import(const char* name) const override;
    void override_import(const char* name, unsigned argument_count, NativeHook hook) override;
    uint32_t add_method_token(unsigned argument_count, NativeHook hook) override;
    uint32_t callback(uint32_t address, std::initializer_list<uint32_t> arguments) override;
    uint32_t token_for(const char* name) override;
    void throw_if_stopping(const char* what) const override;
    // Code generated at run time (the audio engine's modules) is interpreted by SLEIGH (dynamic_code.hpp) over the guest arena. The specification is
    // NFSU2_SLEIGH_SPEC, else <program folder>/sleigh/x86.sla, else third_party/sleigh_spec/x86.sla beside the export folder.
    void register_dynamic_region(uint32_t base, uint32_t size) override;
    void set_dynamic_code_specification(const std::filesystem::path& file) { dynamic_specification_ = file; }
    uint64_t dynamic_instructions() const { return dynamic_executed_; }

    static constexpr uint32_t method_token_base = 0xf1000000u;
    static constexpr unsigned method_token_slots = 8192;
    static constexpr uint32_t return_sentinel = 0xdead0000u;     // a guest function returns here: the end of execute()

    // The token of an imported function's slot, 0 when the game does not import it.
    uint32_t import_token(const char* name) const;
    // True (and the call is done: result in EAX, arguments removed, pc at the return address) when pc is a token; false for translated code.
    bool dispatch(Cpu& c);
    // Runs `c` from its pc until pc == stop; returns EAX. `budget` bounds the loop iterations (translated instructions and token calls).
    uint32_t execute(Cpu& c, uint32_t stop, uint64_t budget);
    // Runs the main processor from the PE entry point; `trace` receives the imports called (once each) and the reason it stopped.
    void run(uint64_t budget, const std::filesystem::path& trace);
    void stop() { stopping_ = true; }
    void stop_guest() override { stopping_ = true; }
    bool stopping() const { return stopping_; }
    Cpu& main_cpu() { return main_; }
    const std::filesystem::path& game_directory() const { return game_; }
    uint32_t process_id() const { return process_id_; }
    uint32_t thread_id();                                        // the guest thread id of the calling host thread
    uint32_t last_error_slot(Cpu& c) const { return uint32_t(r<4>(c, 0x110)) + 0x34; }   // the guest address of GetLastError's cell

private:
    struct Handler { unsigned argc; NativeHook fn; bool raw = false; uint64_t calls = 0; };   // raw: the handler sets the registers and pc itself (the structured exception machinery)
    struct Context;                                              // a guest processor with its stack and thread block
    std::unique_ptr<Context> make_context();
    void initialize(Cpu& c, uint32_t stack, uint32_t teb);
    Handler* find_handler(uint32_t token, std::string& label);
    void note_import(const std::string& label, Cpu& c);

    Cpu& main_;
    std::filesystem::path game_;
    std::ofstream trace_;
    std::mutex mutex_;
    std::atomic<bool> stopping_{false};
    uint32_t process_id_ = 0, peb_ = 0;
    std::atomic<uint32_t> next_thread_id_{0x1000};
    std::unique_ptr<Context> main_context_;
    std::vector<std::unique_ptr<Context>> pool_;                 // processors not in use by a callback
    std::vector<std::unique_ptr<Handler>> slots_;                // by import index
    std::unordered_map<std::string, std::unique_ptr<Handler>> by_name_;   // every override, imported or not
    std::vector<std::string> dynamic_names_;                     // token_for(): tokens 0xf0010000 + 16 * index
    std::vector<std::unique_ptr<Handler>> methods_;
    std::map<std::string, bool> traced_;
    std::filesystem::path exports_, dynamic_specification_;
    std::unique_ptr<DynamicCode> dynamic_owner_;
    std::atomic<DynamicCode*> dynamic_{nullptr};
    std::atomic<uint64_t> dynamic_executed_{0};
    uint32_t last_pc_ = 0;                                       // NFSU2_WATCH

    // Structured exceptions (platform64_seh.cpp): RaiseException, RtlUnwind and UnhandledExceptionFilter run as a state machine on the dispatch loop, not as nested
    // C++ calls: each guest handler is entered with a return address in a reserved token range and its return lands in exception_return(). A handler that
    // never returns (an __except block unwinding the stack) leaves a state behind, which purge_dead_exceptions() removes once the guest stack has moved past it.
    struct ExceptionState {
        enum Kind { Raise, Unwind, Filter } kind;
        uint32_t record, context, pointers, frame, target_frame, target_ip, return_value, guest_return, resume_sp, call_base;
        bool import_return;   // Filter: return the filter's value to the guest caller of UnhandledExceptionFilter
        uint32_t saved[4];    // EBX, EBP, ESI, EDI preserved across an unwind
    };
    static constexpr uint32_t exception_handler_token = 0xf0ffff00u, exception_unwind_token = 0xf0ffff10u, exception_filter_token = 0xf0ffff20u;
    std::map<Cpu*, std::vector<ExceptionState>> exceptions_;
    std::atomic<uint32_t> exception_filter_{0};
    void install_exception_imports();
    void add_raw(const char* name, NativeHook hook);
    void note(const std::string& text);
    void purge_dead_exceptions(Cpu& c);
    void build_exception_context(Cpu& c, uint32_t context, uint32_t eip, uint32_t esp);
    void finish_with_context(Cpu& c, uint32_t context);
    void call_exception_handler(Cpu& c, ExceptionState& s, uint32_t handler, uint32_t frame, uint32_t token);
    void exception_import(Cpu& c, const std::string& name, uint32_t guest_return);
    bool exception_return(Cpu& c);
    void continue_raise(Cpu& c);
    void continue_unwind(Cpu& c);
};

}  // namespace nfsu2raw
