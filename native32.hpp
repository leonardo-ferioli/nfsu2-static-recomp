#pragma once
#include "runtime.hpp"
#include "guest_platform.hpp"
#include "dynamic_code.hpp"
#include "d3d9_recorder.hpp"
#include <filesystem>
#include <fstream>
#include <map>
#include <mutex>
#include <atomic>
#include <thread>
#include <functional>
#include <memory>
#include <vector>

namespace nfsu2raw {
// A block of the guest image held as data inside the program (see tools/embed_image.py).
struct EmbeddedImageBlock{uint32_t base,size;const uint8_t* data;};
class NativePlatform : public GuestPlatform {
public:
    // Tests and diagnostics: guest data blocks come from exported memory files.
    NativePlatform(Cpu&,const std::filesystem::path& exports,const std::filesystem::path& assets);
    // Product launcher: the guest image is mapped, as data only, from SPEED2.EXE in the user's game directory after its
    // SHA-256 and every mapped block have been checked. No original game bytes are shipped with the program.
    struct FromExecutable{};
    NativePlatform(Cpu&,const std::filesystem::path& game_directory,FromExecutable);
    // The guest image comes from data held in the program itself: SPEED2.EXE is not read. Every block is still checked against its SHA-256.
    struct FromEmbedded{const EmbeddedImageBlock* blocks;unsigned count;};
    NativePlatform(Cpu&,const std::filesystem::path& game_directory,FromEmbedded);
    ~NativePlatform() override;
    bool dispatch(Cpu&);
    // Speed layer: g_native_hook (speed.hpp), installed while a platform exists and the native_calls switch is on.
    static bool translated_native_call(Cpu&);
    // Runs translated code on `c` from its pc until it reaches `stop` (the dispatch loop; benchmarks use it directly).
    uint32_t execute(Cpu&,uint32_t stop,uint64_t budget);
    void run(uint64_t budget,const std::filesystem::path& trace);
    using NativeHook=GuestPlatform::NativeHook;
    uint32_t callback(uint32_t address,std::initializer_list<uint32_t> arguments) override;
    // The platform running in this process (null before one is built); mods use it to call back into translated code.
    static NativePlatform* current();
    // Names the mod-originated call this thread is inside (nullptr: none); a crash report says so.
    static void note_mod_call(const char* name);
    // Calls a function of the translated program from native code, on a pooled processor with its own guest stack: ECX and EDX are
    // set (this-call / fast-call), `arguments` are pushed as stack words (the callee pops its own or the caller ignores them, as the
    // function's convention says; the pooled stack is rebuilt for every call). Returns EAX.
    uint32_t call_guest(uint32_t address,uint32_t ecx,uint32_t edx,std::initializer_list<uint32_t> arguments);
    // Replaces an imported Windows function by a native one (mods). The handler reads its stdcall arguments from the guest stack
    // and returns EAX; it runs on the calling thread instead of the real function. Install before run().
    void override_import(const char* name,unsigned argument_count,NativeHook hook) override;
    bool has_import(const char* name) const override{return imports_function(name);}
    // True when the game imports `name` (the Win32 facade installs only what exists), the token of its import slot (0 when absent), and the removal of an override.
    static bool imports_function(const char* name);
    static uint32_t import_token(const char* name);
    void remove_import_override(const char* name);
    // Raises a Fault when the platform is shutting down (a long guest wait or sleep calls it between slices, as the bridge's own waits do).
    void throw_if_stopping(const char* what) const override;
    // Method tokens: the vtable slots of guest-visible objects served by the shim instead of by Windows (docs/PLATFORM_API.md, section 4).
    // A guest `call [vtable+slot]` reaches the token; the handler reads its stdcall arguments (`this` first) and returns EAX, and
    // `argument_count` words (this included) are removed from the guest stack. Returns the token to store in the vtable.
    static constexpr uint32_t method_token_base=0xf1000000u;
    static constexpr unsigned method_token_slots=8192;
    uint32_t add_method_token(unsigned argument_count,NativeHook hook) override;
    // Threads the game creates (and the one that runs the game) are restricted to this affinity mask (0 = unrestricted).
    void set_game_thread_affinity(uintptr_t mask){thread_affinity=mask;}
    const std::filesystem::path& game_directory() const{return assets;}
    uint32_t thread_entry(uint32_t address,uint32_t argument);
    void timer_entry(uintptr_t state,uint32_t id,uint32_t message,uint32_t one,uint32_t two);
    uint32_t input_semantic_callback(uint32_t address,uint32_t reference,uint32_t item,uint32_t device,uint32_t flags,uint32_t remaining);
    // Native window procedure trampolines: slot i enters the guest WNDPROC registered for it by RegisterClassExA.
    static constexpr unsigned window_proc_slots=8;
    uint32_t window_callback(unsigned slot,std::initializer_list<uint32_t> arguments);
    unsigned callback_cpus_created() const{return callbacks_created;}
    // Test seam: a native function standing in for a guest address (stdcall, `argument_count` words).
    // Never used by the game; lets console tests exercise the SEH dispatcher without hand-written x86.
    void add_native_hook(uint32_t address,unsigned argument_count,NativeHook hook);
    // Runtime-generated code (see dynamic_code.hpp): regions made executable with VirtualProtect/VirtualAlloc outside the
    // translated image are interpreted. The specification defaults to NFSU2_SLEIGH_SPEC or <program folder>/sleigh/x86.sla.
    void set_dynamic_code_specification(const std::filesystem::path& file){dynamic_specification=file;}
    // Frame-rate cap in frames per second (0 = none), applied after each IDirect3DDevice9::Present of the game's device.
    void set_frame_limit(unsigned frames_per_second){frame_limit=frames_per_second;}
    // Skip IDirect3DDevice9::SetRenderState/SetSamplerState/SetTextureStageState calls that would set the value the device
    // already has (about half of all Direct3D calls of a frame). Off for state blocks, which change state out of sight.
    void set_state_cache(bool on){state_cache_on=on;}
    // Present with the display's vertical sync (IDirect3D9::CreateDevice/Reset presentation parameters whose interval is
    // IMMEDIATE are changed to ONE): no tearing, at the price of whole-refresh frame times when a frame is late.
    void set_vsync(bool on){vsync_on=on;}
    // Logs the frame rate and frame-time percentiles every 5 s to the trace log (one QueryPerformanceCounter per frame; no sampling).
    void set_fps_log(bool on){fps_log_on=on;}
    // Records the game's Direct3D 9 calls and data (d3d9_recorder.hpp). Turns the state cache off (the trace should hold every call). Returns an error text, empty on success.
    std::string set_d3d9_recorder(const RecorderOptions& options);
    void finish_d3d9_recorder(){if(auto* r=d3d9_recorder_ptr.load())r->finish();}
    void register_dynamic_region(uint32_t base,uint32_t size);
    uint64_t dynamic_instructions_decoded() const{auto* d=dynamic.load();return d?d->decoded_count():0;}
private:
    using BlockSource=std::function<std::vector<uint8_t>(uint32_t base,uint32_t size,const char* file)>;
    NativePlatform(Cpu&,const std::filesystem::path& game,const BlockSource&);
    struct ExceptionState{
        enum Kind{Raise,Unwind,Filter} kind;
        uint32_t record,context,pointers,frame,target_frame,target_ip,return_value,guest_return,resume_sp,call_base;
        bool import_return;  // Filter: return the filter's value to the guest caller of UnhandledExceptionFilter
        uint32_t saved[4];  // EBX, EBP, ESI, EDI preserved across an unwind
    };
    Cpu& main_cpu;
    std::filesystem::path assets;
    std::string command_line;
    std::ofstream trace;
    std::mutex log_mutex;
    std::map<std::pair<uint32_t,uint32_t>,unsigned> traced_calls;
    size_t trace_bytes=0;
    bool trace_limited=false;
    std::mutex state_mutex;
    std::atomic<bool> stopping=false;
    std::thread profile_sampler;
    std::vector<uintptr_t> threads;
    std::map<uint32_t,uintptr_t> timers;
    std::map<uint32_t,uintptr_t> targets;
    std::map<uint32_t,std::string> dynamic_names;
    std::map<uint32_t,unsigned> input_objects;
    std::atomic<unsigned> frame_limit{0};
    std::atomic<bool> state_cache_on{false},vsync_on{false},fps_log_on{false};
    std::atomic<uint32_t> input_bloom{0};  // one bit per (address>>4)&31 of every DirectInput object ever created: a clear bit means 'not one'
    uint32_t window_procs[window_proc_slots]={};unsigned window_proc_count=0;
    uint32_t exception_filter=0;
    std::filesystem::path dynamic_specification;
    std::atomic<DynamicCode*> dynamic{nullptr};
    std::atomic<uint64_t> dynamic_executed{0},dynamic_report_at{1};  // interpreted instructions, next log threshold
    std::unique_ptr<DynamicCode> dynamic_owner;
    std::atomic<unsigned> callbacks_created=0;
    std::map<Cpu*,std::vector<ExceptionState>> exceptions;
    std::map<uint32_t,std::pair<unsigned,NativeHook>> native_hooks;
    struct ImportOverride{unsigned argument_count;NativeHook handler;};
    static constexpr unsigned import_override_slots=512;
    std::unique_ptr<ImportOverride> import_overrides[import_override_slots];   // by import token: (token-0xf0000000)>>4
    std::unique_ptr<D3d9Recorder> d3d9_recorder;
    std::atomic<D3d9Recorder*> d3d9_recorder_ptr{nullptr};
    std::atomic<ImportOverride*> method_tokens[method_token_slots]={};   // by (token-method_token_base)>>4; entries live until the platform is destroyed
    std::atomic<unsigned> method_token_count{0};
    std::atomic<uintptr_t> thread_affinity{0};
    std::string callback_fault;
    std::atomic<bool> callback_fault_set{false};
    std::atomic<size_t> dynamic_name_count{0};
    uintptr_t resolve_uncached(uint32_t token);
    void profile_native_call(Cpu& c,uint32_t target,const char* import_name,uint64_t ticks);
    void limit_frame_rate(unsigned frames_per_second);
    void fps_frame();
    void* exception_guard=nullptr;
    void prepare(Cpu&);
    void initialize_cpu(Cpu&,uint32_t stack,uint32_t teb);
    bool exception_import(Cpu&,const std::string& name,uint32_t guest_return);
    bool exception_return(Cpu&);
    void continue_raise(Cpu&);
    void continue_unwind(Cpu&);
    void call_exception_handler(Cpu&,ExceptionState&,uint32_t handler,uint32_t frame,uint32_t token);
    void build_exception_context(Cpu&,uint32_t context,uint32_t eip,uint32_t esp);
    void finish_with_context(Cpu&,uint32_t context);
    void purge_dead_exceptions(Cpu&);
    uintptr_t resolve(uint32_t token);
    void record(const std::string&);
    bool first_native_call(uint32_t target,uint32_t guest_return,bool result);
    // Speed layer: the call of a target without special treatment (see dispatch); false leaves it to the general path.
    bool plain_call(Cpu&,uint32_t target,const char* dll,const char* resolved_name,uint32_t profile_id);
    void record_plain_call(Cpu&,uint32_t target,const char* dll,const char* resolved_name,uint32_t guest_return,bool result,uint32_t eax,uint32_t popped);
    void raise_callback_fault();
    bool dispatch_route(Cpu&);
    bool cached_call(Cpu&,uint32_t target,const char* dll,const char* resolved_name,uint32_t profile_id,uint8_t state_kind,uint8_t bind_kind);
    void report_dynamic_code(uint64_t total,uint64_t decoded,uint32_t pc);
};
}
