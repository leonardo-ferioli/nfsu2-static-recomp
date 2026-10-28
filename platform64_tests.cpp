// Platform64 and the facade's loader group, driven the way translated code calls imports (stdcall words on a guest stack, a token as the target), with the
// guest in the arena. Needs the exported image (guest code runs: a guest thread executes the game's name-hash routine).
//     platform64_tests <export dir> <game dir>
#include "platform64.hpp"
#include "win32_facade.hpp"
#include <cstring>
#include <iostream>
#include <string>

using namespace nfsu2raw;
namespace {
int failures = 0;
void check(bool ok, const std::string& what) { if (!ok) { ++failures; std::cerr << "FAIL: " << what << '\n'; } }

struct Guest {
    Platform64& platform;
    Cpu& cpu;
    uint32_t base_sp;
    uint32_t call_token(uint32_t token, std::initializer_list<uint32_t> args) {
        uint32_t sp = base_sp;
        wr<4>(cpu, 16, sp);
        wm<4>(cpu, sp, Platform64::return_sentinel);
        unsigned i = 0;
        for (uint32_t a : args) wm<4>(cpu, sp + 4 + 4 * i++, a);
        cpu.pc = token;
        if (!platform.dispatch(cpu)) throw Fault("not a token");
        if (cpu.pc != Platform64::return_sentinel) throw Fault("did not return to the caller");
        return uint32_t(r<4>(cpu, 0));
    }
    uint32_t call(const char* name, std::initializer_list<uint32_t> args) {
        const uint32_t token = platform.import_token(name);
        if (!token) throw Fault(std::string("the game does not import ") + name);
        return call_token(token, args);
    }
    uint32_t last_error() { return call("GetLastError", {}); }
    uint32_t text(const char* s) {                     // a string in guest memory
        const uint32_t n = uint32_t(std::strlen(s)) + 1;
        const uint32_t heap = call("GetProcessHeap", {});
        const uint32_t a = call("HeapAlloc", {heap, 8, n});
        std::memcpy(cpu.pointer(a, n), s, n);
        return a;
    }
};
}  // namespace

int main(int argc, char** argv) {
    try {
        if (argc < 3) throw Fault("platform64_tests <export dir> <game dir>");
        const char* error = nullptr;
        auto arena = nfsu2::guest::create_arena({}, &error);
        if (!arena) throw Fault(std::string("arena: ") + (error ? error : "?"));
        Cpu c;
        Platform64 p(c, argv[1], argv[2]);
        std::string bad;
        auto options = parse_win32_layer("all", bad);
        Win32Facade facade(p, options);
        Guest g{p, c, uint32_t(r<4>(c, 16))};

        check(m<2>(c, 0x400000) == 0x5a4d && c.pointer(0x400000, 4) == nfsu2::guest::arena_base() + 0x400000, "the image is in the arena");
        check(p.has_import("GetProcAddress") && p.import_token("NoSuchImport") == 0, "import lookup");

        // last error lives in the guest's thread block
        g.call("SetLastError", {1234});
        check(g.last_error() == 1234 && m<4>(c, uint32_t(r<4>(c, 0x110)) + 0x34) == 1234, "GetLastError reads the cell of the thread block");

        // VirtualAlloc: the memory is in the arena and the guest processor reaches it
        const uint32_t block = g.call("VirtualAlloc", {0, 0x10000, 0x3000 /* commit|reserve */, 4 /* PAGE_READWRITE */});
        check(block && nfsu2::guest::is_guest(nfsu2::guest::ptr<void>(block)) && (block & 0xffff) == 0, "VirtualAlloc returns an aligned guest address");
        wm<4>(c, block + 0x1234, 0xCAFEF00D);
        check(m<4>(c, block + 0x1234) == 0xCAFEF00D && *nfsu2::guest::ptr<uint32_t>(block + 0x1234) == 0xCAFEF00D, "the block is guest memory");
        const uint32_t info = g.call("HeapAlloc", {g.call("GetProcessHeap", {}), 8, 32});
        check(g.call("VirtualQuery", {block, info, 28}) == 28 && m<4>(c, info + 16) == 0x1000 /* MEM_COMMIT */ && m<4>(c, info + 20) == 4, "VirtualQuery describes the block");
        check(g.call("IsBadWritePtr", {block, 0x10000}) == 0 && g.call("IsBadWritePtr", {0x40000000, 4}) == 1, "IsBadWritePtr");
        check(g.call("VirtualFree", {block, 0, 0x8000}) == 1 && g.call("IsBadReadPtr", {block, 4}) == 1, "VirtualFree releases it");

        // modules: a served function has a token, an unserved one is not found
        const uint32_t kernel = g.call("GetModuleHandleA", {g.text("kernel32.dll")});
        check(kernel != 0 && g.call("GetModuleHandleA", {0}) == 0x400000, "module handles");
        check(g.call("GetProcAddress", {kernel, g.text("CreateThread")}) == p.import_token("CreateThread"), "GetProcAddress of a served import is its token");
        const uint32_t dynamic = g.call("GetProcAddress", {kernel, g.text("InitializeCriticalSection")});
        check(dynamic != 0, "GetProcAddress finds a served function");
        check(g.call("GetProcAddress", {kernel, g.text("NoSuchFunction")}) == 0 && g.last_error() == 127, "GetProcAddress of an unknown function fails with ERROR_PROC_NOT_FOUND");

        // a guest thread: CreateThread runs the game's name-hash routine on its own processor; the exit code is its result
        const uint32_t name = g.text("frontend/lobby");
        const uint32_t id_cell = g.call("HeapAlloc", {g.call("GetProcessHeap", {}), 8, 4});
        const uint32_t thread = g.call("CreateThread", {0, 0, 0x00575330, name, 0, id_cell});
        check(thread != 0 && m<4>(c, id_cell) != 0, "CreateThread");
        check(g.call("WaitForSingleObject", {thread, 10000}) == 0, "the guest thread ends");
        const uint32_t code_cell = g.call("HeapAlloc", {g.call("GetProcessHeap", {}), 8, 4});
        check(g.call("GetExitCodeThread", {thread, code_cell}) == 1 && m<4>(c, code_cell) == 0xbdc1d1f3u, "the thread's exit code is the routine's result");
        check(g.call("CloseHandle", {thread}) == 1, "CloseHandle");

        // a handle nobody owns: the call fails, it does not reach the real system
        check(g.call("WaitForSingleObject", {0x1234, 0}) == 0xFFFFFFFFu && g.last_error() == 6, "an unknown handle is invalid");
        check(g.call("GetFileType", {0}) == 0, "GetFileType of nothing");
        check(g.call("GetStdHandle", {0xfffffff5}) == 0, "GetStdHandle");

        // a callback from native code into the guest, on a processor of its own, from inside a handler (nesting)
        check(p.callback(0x00575330, {name}) == 0xbdc1d1f3u, "callback runs guest code and returns EAX");

        // structured exceptions: a guest handler (a method token standing in for guest code) on the guest's exception chain
        {
            const uint32_t heap = g.call("GetProcessHeap", {}), teb = uint32_t(r<4>(c, 0x110));
            auto frame_with = [&](uint32_t handler, uint32_t next) { const uint32_t f = g.call("HeapAlloc", {heap, 8, 16}); wm<4>(c, f, next); wm<4>(c, f + 4, handler); return f; };
            auto frame_call = [&](const char* name, std::initializer_list<uint32_t> args) {     // run a call of an import on the main processor until it returns to the sentinel
                const uint32_t sp = g.base_sp - 0x2000;
                wr<4>(c, 16, sp); wm<4>(c, sp, Platform64::return_sentinel);
                unsigned i = 0; for (uint32_t a : args) wm<4>(c, sp + 4 + 4 * i++, a);
                c.pc = p.import_token(name);
                p.execute(c, Platform64::return_sentinel, 1000000);
                return sp;
            };
            uint32_t seen_code = 0, seen_flags = 0; int calls = 0;
            const uint32_t t_continue = p.add_method_token(4, [&](Cpu& cc) { const uint32_t record = uint32_t(m<4>(cc, r<4>(cc, 16) + 4)); seen_code = uint32_t(m<4>(cc, record)); seen_flags = uint32_t(m<4>(cc, record + 4)); ++calls; return 0u; });
            const uint32_t t_search = p.add_method_token(4, [&](Cpu& cc) { const uint32_t record = uint32_t(m<4>(cc, r<4>(cc, 16) + 4)); seen_flags = uint32_t(m<4>(cc, record + 4)); ++calls; return 1u; });
            const uint32_t previous = uint32_t(m<4>(c, teb));

            wm<4>(c, teb, frame_with(t_continue, 0xffffffff));                                   // ExceptionContinueExecution of a continuable exception
            uint32_t sp = frame_call("RaiseException", {0xE0001234, 0, 0, 0});
            check(calls == 1 && seen_code == 0xE0001234 && c.pc == Platform64::return_sentinel && uint32_t(r<4>(c, 16)) == sp + 20, "RaiseException: the handler runs and execution continues after the call");

            calls = 0;                                                                           // ContinueSearch to the end of the chain: no filter, so fatal
            wm<4>(c, teb, frame_with(t_search, 0xffffffff));
            bool fatal = false;
            try { frame_call("RaiseException", {0xE0005678, 0, 0, 0}); } catch (const Fault& e) { fatal = std::string(e.what()).find("unhandled guest exception code=0xe0005678") != std::string::npos; }
            check(fatal && calls == 1, "RaiseException: an exception nobody handles is fatal");

            calls = 0;                                                                           // RtlUnwind to the outer frame: the inner handler is told, the value comes back in EAX
            const uint32_t outer = frame_with(t_search, 0xffffffff), inner = frame_with(t_search, outer);
            wm<4>(c, teb, inner);
            sp = frame_call("RtlUnwind", {outer, 0, 0, 7});
            check(calls == 1 && (seen_flags & 2) && uint32_t(r<4>(c, 0)) == 7 && uint32_t(m<4>(c, teb)) == outer && uint32_t(r<4>(c, 16)) == sp + 20 && c.pc == Platform64::return_sentinel, "RtlUnwind: unwinding handler called, frame unlinked, EAX = return value");

            wm<4>(c, teb, previous);
            check(g.call("SetUnhandledExceptionFilter", {0x1000}) == 0 && g.call("SetUnhandledExceptionFilter", {0}) == 0x1000, "SetUnhandledExceptionFilter returns the previous filter");
            check(g.call("UnhandledExceptionFilter", {0}) == 1, "UnhandledExceptionFilter without a filter: EXCEPTION_EXECUTE_HANDLER");
        }

        if (failures) { std::cerr << failures << " check(s) failed\n"; return 1; }
        std::cout << "PASS platform64 and the loader group\n";
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
