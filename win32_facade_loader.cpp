// The part of kernel32 that the 32-bit host leaves to its own bridge (native32.cpp: modules, threads, timers, VirtualAlloc, exit) and a 64-bit host must serve
// itself: it is installed only when the guest lives in the arena (Platform64). Everything is answered from the Level A library; a guest thread or a timer
// callback runs on its own guest processor through GuestPlatform::callback.
#include "win32_facade_internal.hpp"

namespace nfsu2raw {

namespace {
struct ThreadExit : std::exception {
    uint32_t value;
    explicit ThreadExit(uint32_t v) : value(v) {}
    const char* what() const noexcept override { return "guest requested ExitThread"; }
};
}  // namespace

#ifdef NFSU2_GUEST_IDENTITY
void Win32Facade::Impl::install_loader() {}
#else
void Win32Facade::Impl::install_loader() {
    // ---- last error: the guest's own cell in its thread block
    on("GetLastError", 0, [](Cpu& c) { return *ptr<uint32_t>(uint32_t(r<4>(c, 0x110)) + 0x34); });
    on("SetLastError", 1, [](Cpu& c) { set_error(c, arg(c, 0)); return 0u; });

    // ---- modules: the main image and the system libraries the layers stand in for. A function pointer of a system library is the token of the handler
    // that serves it; a function nobody serves is not found (the game looks up optional entry points and takes the answer).
    uint32_t module_index = 0;
    for (const char* dll : {"kernel32.dll", "user32.dll", "gdi32.dll", "advapi32.dll", "winmm.dll", "ws2_32.dll", "shell32.dll", "shfolder.dll", "netapi32.dll", "tapi32.dll",
                            "ntdll.dll", "ole32.dll", "d3d9.dll", "dsound.dll", "ddraw.dll", "dinput8.dll"})
        process.register_module(dll, 0x7c000000u + 0x10000u * module_index++);
    on("GetModuleHandleA", 1, [this](Cpu& c) {
        auto r = process.get_module_handle(arg(c, 0) ? cstr(arg(c, 0)) : std::string());
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("LoadLibraryA", 1, [this](Cpu& c) {
        auto r = process.load_library(cstr(arg(c, 0)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("FreeLibrary", 1, [this](Cpu& c) { auto r = process.free_library(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("GetProcAddress", 2, [this](Cpu& c) {
        if (arg(c, 1) < 0x10000) { set_error(c, lw::err::proc_not_found); return 0u; }                // by ordinal: nothing is exported that way
        const std::string name = cstr(arg(c, 1));
        if (!process.get_module_file_name(arg(c, 0)))   { set_error(c, lw::err::invalid_handle); return 0u; }
        if (!served.count(name)) { set_error(c, lw::err::proc_not_found); return 0u; }
        return platform.token_for(name.c_str());
    });
    on("GetModuleFileNameA", 3, [this](Cpu& c) {
        auto r = process.get_module_file_name(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        const uint32_t size = arg(c, 2), length = std::min<uint32_t>(uint32_t(r.value.size()), size ? size - 1 : 0);
        if (size) { std::memcpy(ptr<char>(arg(c, 1)), r.value.data(), length); ptr<char>(arg(c, 1))[length] = 0; }
        return length;
    });
    on("GetCommandLineA", 0, [this](Cpu&) {
        if (!command_line_address) {
            const std::string& text = process.command_line();
            auto r = heaps.heap_alloc(heaps.get_process_heap(), lw::heap_flag::zero_memory, uint32_t(text.size()) + 1);
            std::memcpy(ptr<char>(r.value), text.c_str(), text.size() + 1);
            command_line_address = r.value;
        }
        return command_line_address;
    });

    // ---- memory the guest asks the system for directly
    on("VirtualAlloc", 4, [this](Cpu& c) {
        uint32_t result = 0;
        if (const uint32_t e = space->virtual_alloc(arg(c, 0), arg(c, 1), arg(c, 2), arg(c, 3), result)) { set_error(c, e); return 0u; }
        if (result && (arg(c, 3) & 0xf0)) platform.register_dynamic_region(result, arg(c, 1));   // executable memory: code generated at run time
        return result;
    });
    on("VirtualFree", 3, [this](Cpu& c) { if (const uint32_t e = space->virtual_free(arg(c, 0), arg(c, 1), arg(c, 2))) { set_error(c, e); return 0u; } return 1u; });
    on("VirtualProtect", 4, [this](Cpu& c) {
        uint32_t old = 0;
        if (const uint32_t e = space->virtual_protect(arg(c, 0), arg(c, 1), arg(c, 2), old)) { set_error(c, e); return 0u; }
        if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = old;
        if (arg(c, 2) & 0xf0) platform.register_dynamic_region(arg(c, 0), arg(c, 1));            // made executable: code generated at run time
        return 1u;
    });
    on("VirtualQuery", 3, [this](Cpu& c) {
        lw::RegionInfo info;
        if (arg(c, 2) < 28) { set_error(c, lw::err::invalid_parameter); return 0u; }
        if (const uint32_t e = space->virtual_query(arg(c, 0), info)) { set_error(c, e); return 0u; }
        const uint32_t fields[7] = {info.base_address, info.allocation_base, info.allocation_protect, info.region_size, info.state, info.protect, info.type};
        std::memcpy(ptr<uint32_t>(arg(c, 1)), fields, 28);
        return 28u;
    });
    on("IsBadReadPtr", 2, [this](Cpu& c) { return lw::is_bad_read_ptr(*space, arg(c, 0), arg(c, 1)) ? 1u : 0u; });
    on("IsBadWritePtr", 2, [this](Cpu& c) { return lw::is_bad_write_ptr(*space, arg(c, 0), arg(c, 1)) ? 1u : 0u; });
    on("IsBadCodePtr", 1, [this](Cpu& c) { return lw::is_bad_code_ptr(*space, arg(c, 0)) ? 1u : 0u; });

    // ---- atomics (the game imports them as functions)
    on("InterlockedExchange", 2, [](Cpu& c) { return std::atomic_ref<uint32_t>(*ptr<uint32_t>(arg(c, 0))).exchange(arg(c, 1)); });
    on("InterlockedCompareExchange", 3, [](Cpu& c) {
        uint32_t expected = arg(c, 2);
        std::atomic_ref<uint32_t>(*ptr<uint32_t>(arg(c, 0))).compare_exchange_strong(expected, arg(c, 1));
        return expected;                                                                          // the value that was there
    });

    // ---- threads
    on("GetCurrentThreadId", 0, [this](Cpu&) { return sync.current_thread_id(); });
    on("GetCurrentThread", 0, [](Cpu&) { return lw::kCurrentThreadPseudoHandle; });
    on("GetCurrentProcess", 0, [](Cpu&) { return lw::kCurrentProcessPseudoHandle; });
    on("CreateThread", 6, [this](Cpu& c) {
        const uint32_t start = arg(c, 2), parameter = arg(c, 3);
        uint32_t id = 0;
        GuestPlatform* p = &platform;
        auto r = sync.create_thread([p, start, parameter]() -> uint32_t {
            try { return p->callback(start, {parameter}); }
            catch (const ThreadExit& e) { return e.value; }
            catch (const std::exception& e) { p->guest_fault(std::string("THREAD FAULT ") + e.what() + " entry=" + std::to_string(start)); return 1; }
        }, (arg(c, 4) & 4) != 0 /* CREATE_SUSPENDED */, &id);
        if (!r) { set_error(c, r.error); return 0u; }
        if (arg(c, 5)) *ptr<uint32_t>(arg(c, 5)) = id;
        return uint32_t(r.value);
    });
    on("ExitThread", 1, [](Cpu& c) -> uint32_t { throw ThreadExit(arg(c, 0)); });
    on("ResumeThread", 1, [this](Cpu& c) { auto r = sync.resume_thread(arg(c, 0)); if (r.error) { set_error(c, r.error); return 0xFFFFFFFFu; } return r.value; });
    on("SuspendThread", 1, [this](Cpu& c) { auto r = sync.suspend_thread(arg(c, 0)); if (r.error) { set_error(c, r.error); return 0xFFFFFFFFu; } return r.value; });
    on("TerminateThread", 2, [this](Cpu& c) { auto r = sync.terminate_thread(arg(c, 0), arg(c, 1)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("GetExitCodeThread", 2, [this](Cpu& c) {
        auto r = sync.get_exit_code_thread(arg(c, 0));
        if (r.error) { set_error(c, r.error); return 0u; }
        *ptr<uint32_t>(arg(c, 1)) = r.value;
        return 1u;
    });
    on("SetThreadPriority", 2, [this](Cpu& c) { auto r = sync.set_thread_priority(arg(c, 0), int32_t(arg(c, 1))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("GetThreadPriority", 1, [this](Cpu& c) { auto r = sync.get_thread_priority(arg(c, 0)); if (r.error) { set_error(c, r.error); return 0x7FFFFFFFu; } return uint32_t(r.value); });
    on("GetPriorityClass", 1, [this](Cpu&) { return process.get_priority_class(); });
    on("SetPriorityClass", 2, [this](Cpu& c) { return process.set_priority_class(arg(c, 1)) ? 1u : 0u; });
    on("GetProcessAffinityMask", 3, [this](Cpu& c) {
        uint64_t mine = 0, system = 0;
        auto r = process.get_process_affinity_mask(mine, system);
        if (!r) { set_error(c, r.error); return 0u; }
        *ptr<uint32_t>(arg(c, 1)) = uint32_t(mine);
        *ptr<uint32_t>(arg(c, 2)) = uint32_t(system);
        return 1u;
    });
    on("SetProcessAffinityMask", 2, [this](Cpu& c) { auto r = process.set_process_affinity_mask(arg(c, 1)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    auto sleep_sliced = [this](uint32_t milliseconds) {
        while (milliseconds) {                                                                   // in slices, so that a stopping platform interrupts it
            const uint32_t part = std::min<uint32_t>(milliseconds, 20);
            time.sleep(part);
            milliseconds -= part;
            platform.throw_if_stopping("guest sleep");
        }
    };
    on("Sleep", 1, [this, sleep_sliced](Cpu& c) {
        if (arg(c, 0) == 0) time.sleep(0);
        else if (arg(c, 0) == lw::kInfinite) for (;;) sleep_sliced(100);
        else sleep_sliced(arg(c, 0));
        return 0u;
    });
    on("SleepEx", 2, [this, sleep_sliced](Cpu& c) {
        if (arg(c, 0) == 0) time.sleep(0);
        else if (arg(c, 0) == lw::kInfinite) for (;;) sleep_sliced(100);
        else sleep_sliced(arg(c, 0));
        return 0u;
    });

    // ---- multimedia timers: the callback runs on a timer thread of the library, on a guest processor of its own
    on("timeSetEvent", 5, [this](Cpu& c) {
        const uint32_t delay = arg(c, 0), address = arg(c, 2), user = arg(c, 3), flags = arg(c, 4);
        GuestPlatform* p = &platform;
        return sync.time_set_event(delay, (flags & 1) != 0 /* TIME_PERIODIC */, [p, address, user](uint32_t id) {
            try { p->callback(address, {id, 0, user, 0, 0}); }
            catch (const std::exception& e) { p->guest_fault(std::string("TIMER FAULT ") + e.what()); }
        });
    });
    on("timeKillEvent", 1, [this](Cpu& c) { return sync.time_kill_event(arg(c, 0)); });

    // ---- the standard handles and the C runtime's handle count: nothing is inherited by a guest on a 64-bit host
    on("GetStdHandle", 1, [](Cpu&) { return 0u; });
    on("SetStdHandle", 2, [](Cpu&) { return 1u; });
    on("SetHandleCount", 1, [](Cpu& c) { return arg(c, 0); });

    // ---- ending the process
    on("ExitProcess", 1, [](Cpu& c) -> uint32_t { throw Fault("translated process requested ExitProcess(" + std::to_string(arg(c, 0)) + ")"); });
    on("TerminateProcess", 2, [](Cpu& c) -> uint32_t { throw Fault("translated process requested TerminateProcess(" + std::to_string(arg(c, 1)) + ")"); });
    on("DebugBreak", 0, [](Cpu&) -> uint32_t { throw Fault("translated process executed DebugBreak"); });
    // SetUnhandledExceptionFilter, RaiseException, RtlUnwind and UnhandledExceptionFilter belong to the platform (they change the processor's control flow).
}
#endif

}  // namespace nfsu2raw
