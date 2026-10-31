// Platform64 and the facade's loader group, driven the way translated code calls imports (stdcall words on a guest stack, a token as the target), with the
// guest in the arena. Needs the exported image (guest code runs: a guest thread executes the game's name-hash routine).
//     platform64_tests <export dir> <game dir>
#include "platform64.hpp"
#include "win32_facade.hpp"
#include <atomic>
#include <chrono>
#include "legacy_win32/resources.hpp"
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <thread>

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
    uint32_t alloc(uint32_t n) { return call("HeapAlloc", {call("GetProcessHeap", {}), 8, n}); }     // zeroed guest memory
    uint32_t wide(const std::string& s) {                                                              // an ASCII string as UTF-16 in guest memory
        const uint32_t a = alloc(uint32_t(s.size() + 1) * 2);
        for (size_t i = 0; i < s.size(); ++i) wm<2>(cpu, a + uint32_t(i) * 2, uint16_t(s[i]));
        return a;
    }
    std::string string_at(uint32_t a) { return std::string(reinterpret_cast<const char*>(cpu.pointer(a, 1))); }
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
        auto arena = nfsu2::guest::create_arena(nfsu2::guest::arena_config_from_environment(), &error);
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
        // Memory outside the library's window is the arena's: the image's data ("(badptr)" of the game's printf at 0x786d4c), the stack; nothing above what is committed.
        check(g.call("IsBadReadPtr", {0x786d4c, 9}) == 0 && g.call("IsBadWritePtr", {0x786d4c, 9}) == 0 && g.call("IsBadCodePtr", {0x401000}) == 0,
              "a string in the image is a good pointer");
        const uint32_t esp = uint32_t(r<4>(c, 16));
        check(g.call("IsBadReadPtr", {esp - 64, 64}) == 0, "the stack is a good pointer");
        check(g.call("IsBadReadPtr", {0x7F800000, 4}) == 1 && g.call("IsBadReadPtr", {0x10000, 4}) == 1, "uncommitted memory is a bad pointer");
        check(g.call("VirtualQuery", {0x400000, info, 28}) == 28 && m<4>(c, info) == 0x400000 && m<4>(c, info + 16) == 0x1000 /* MEM_COMMIT */ && m<4>(c, info + 12) >= 0x1000,
              "VirtualQuery describes the image");

        // The cost of one call through dispatch (what the speed layer's hook does for every import and Direct3D method of the game): informational, not checked.
        {
            const uint32_t slot = g.call("TlsAlloc", {}), token = p.import_token("TlsGetValue");
            constexpr int kCalls = 1000000;
            const auto start = std::chrono::steady_clock::now();
            // The calls are set up as the translated code does: the stack written straight into the arena (wm<4> would add Cpu::pointer's region search).
            auto* stack = nfsu2::guest::ptr<uint32_t>(g.base_sp);
            for (int i = 0; i < kCalls; ++i) {
                wr<4>(c, 16, g.base_sp); stack[0] = Platform64::return_sentinel; stack[1] = slot; c.pc = token;
                p.dispatch(c);
            }
            const double ns = std::chrono::duration<double, std::nano>(std::chrono::steady_clock::now() - start).count() / kCalls;
            std::printf("dispatch: %.1f ns per import call (TlsGetValue, %d calls)\n", ns, kCalls);
            const uint32_t last_error = p.import_token("GetLastError");
            const auto again = std::chrono::steady_clock::now();
            for (int i = 0; i < kCalls; ++i) { wr<4>(c, 16, g.base_sp); stack[0] = Platform64::return_sentinel; c.pc = last_error; p.dispatch(c); }
            std::printf("dispatch: %.1f ns per import call (GetLastError: one guest memory read, %d calls)\n",
                        std::chrono::duration<double, std::nano>(std::chrono::steady_clock::now() - again).count() / kCalls, kCalls);
            g.call("TlsFree", {slot});
        }

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

        // a multimedia timer: its callback (a method token standing in for guest code) runs on a guest processor of its own with the guest's arguments
        {
            std::atomic<uint32_t> user_seen{0}, id_seen{0};
            const uint32_t callback = p.add_method_token(5, [&](Cpu& cc) { id_seen = uint32_t(m<4>(cc, r<4>(cc, 16) + 4)); user_seen = uint32_t(m<4>(cc, r<4>(cc, 16) + 12)); return 0u; });
            const uint32_t id = g.call("timeSetEvent", {10, 0, callback, 0x1234, 0});
            check(id != 0, "timeSetEvent");
            for (int i = 0; i < 200 && !user_seen; ++i) std::this_thread::sleep_for(std::chrono::milliseconds(10));
            check(user_seen == 0x1234 && id_seen == id, "the timer callback ran with the user value");
            g.call("timeKillEvent", {id});
        }

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

        // ---- registry: the game's own keys exist with their defaults; writes are seen by the next read; a handle that was closed is invalid
        {
            const uint32_t cell = g.alloc(4), type = g.alloc(4), size = g.alloc(4), buffer = g.alloc(64);
            const uint32_t local_machine = 0x80000002u;
            check(g.call("RegOpenKeyA", {local_machine, g.text("Software\\EA Games\\Need for Speed Underground 2"), cell}) == 0 && m<4>(c, cell) != 0, "RegOpenKeyA opens the game's key");
            const uint32_t key = m<4>(c, cell);
            wm<4>(c, size, 64);
            check(g.call("RegQueryValueExA", {key, g.text("Language"), 0, type, buffer, size}) == 0 && m<4>(c, type) == 1 && g.string_at(buffer) == "English US" && m<4>(c, size) == 11, "a string value");
            wm<4>(c, size, 4);
            check(g.call("RegQueryValueExA", {key, g.text("CacheSize"), 0, type, buffer, size}) == 0 && m<4>(c, type) == 4 && m<4>(c, buffer) == 1879040000u, "a DWORD value");
            wm<4>(c, size, 64);
            check(g.call("RegQueryValueExA", {key, g.text("NoSuchValue"), 0, type, buffer, size}) == 2, "a missing value is ERROR_FILE_NOT_FOUND");
            wm<4>(c, buffer, 77);
            check(g.call("RegSetValueExA", {key, g.text("TestValue"), 0, 4, buffer, 4}) == 0, "RegSetValueExA");
            wm<4>(c, buffer, 0);
            wm<4>(c, size, 4);
            check(g.call("RegQueryValueExA", {key, g.text("TestValue"), 0, type, buffer, size}) == 0 && m<4>(c, buffer) == 77, "the value written is read back");
            check(g.call("RegOpenKeyA", {local_machine, g.text("Software\\NoSuchVendor"), cell}) == 2, "a missing key is ERROR_FILE_NOT_FOUND");
            check(g.call("RegCreateKeyA", {0x80000001u, g.text("Software\\Nue Test"), cell}) == 0 && g.call("RegCloseKey", {uint32_t(m<4>(c, cell))}) == 0, "RegCreateKeyA and RegCloseKey");
            check(g.call("RegCloseKey", {key}) == 0 && g.call("RegCloseKey", {key}) != 0, "a closed key is invalid");
        }

        // ---- resources of the guest image: the library's lookup over the image and the facade agree, the bytes stay in the image
        {
            const uint32_t image_size = 0x532000;
            nfsu2::legacy::win32::PeResources resources(nfsu2::legacy::win32::Bytes(reinterpret_cast<const std::byte*>(c.pointer(0x400000, image_size)), image_size));
            auto expected = resources.find(nfsu2::legacy::win32::ResourceId::id(3) /* RT_ICON */, nfsu2::legacy::win32::ResourceId::id(1));
            check(bool(expected) && expected.value.size == 0x34A8, "the image has the icon the test expects");
            const uint32_t module = g.call("GetModuleHandleA", {0});
            const uint32_t found = g.call("FindResourceA", {module, 1 /* MAKEINTRESOURCE(1) */, 3 /* RT_ICON */});
            check(found == 0x400000 + expected.value.entry_rva, "FindResourceA returns the address of the data entry");
            const uint32_t loaded = g.call("LoadResource", {module, found});
            check(loaded == 0x400000 + expected.value.data_rva && g.call("LockResource", {loaded}) == loaded, "LoadResource / LockResource point into the image");
            check(g.call("SizeofResource", {module, found}) == 0x34A8 && m<4>(c, loaded) == 0x28, "SizeofResource, and the bytes are the icon's");
            check(g.call("FindResourceA", {module, 2, 3}) == 0 && g.last_error() == 1814, "a missing name is ERROR_RESOURCE_NAME_NOT_FOUND");
            check(g.call("FindResourceA", {module, 1, 24}) == 0 && g.last_error() == 1813, "a missing type is ERROR_RESOURCE_TYPE_NOT_FOUND");
            check(g.call("FindResourceA", {g.call("GetModuleHandleA", {g.text("kernel32.dll")}), 1, 3}) == 0, "a system library holds no resources");
            check(g.call("SizeofResource", {module, 0x12345}) == 0, "an HRSRC that is not one");
        }

        // ---- user32: a window, its messages, and the guest's window procedure called back (the game's own tiny routine that returns 1 stands in for it)
        {
            const uint32_t proc = 0x005bfe59;                                      // mov eax, 1 ; ret 16
            const uint32_t cls = g.alloc(48), msg = g.alloc(28), rect = g.alloc(16);
            wm<4>(c, cls, 48); wm<4>(c, cls + 8, proc); wm<4>(c, cls + 40, g.text("NueTestClass"));
            const uint32_t atom = g.call("RegisterClassExA", {cls});
            check(atom != 0 && g.call("RegisterClassExA", {cls}) == 0 && g.last_error() == 1410, "RegisterClassExA, and a second registration is ERROR_CLASS_ALREADY_EXISTS");
            const uint32_t window = g.call("CreateWindowExA", {0, g.text("NueTestClass"), g.text("Test"), 0x10CF0000 /* WS_VISIBLE | WS_OVERLAPPEDWINDOW */, 10, 20, 640, 480, 0, 0, 0x400000, 0});
            check(window >= 0x00C00000u && window < 0xFFFF0000u, "CreateWindowExA returns a token of the library (and called the guest's procedure for WM_NCCREATE)");
            check(g.call("GetWindowRect", {window, rect}) == 1 && m<4>(c, rect) == 10 && m<4>(c, rect + 4) == 20 && m<4>(c, rect + 8) == 650, "GetWindowRect");
            check(g.call("GetClientRect", {window, rect}) == 1 && m<4>(c, rect) == 0 && m<4>(c, rect + 8) > 0, "GetClientRect");
            check(g.call("IsIconic", {window}) == 0 && g.call("SetForegroundWindow", {window}) == 1 && g.call("GetForegroundWindow", {}) == window, "foreground window");
            check(g.call("GetSystemMetrics", {0}) == 1280 && g.call("GetSystemMetrics", {1}) == 720, "the display of the headless fixture");
            check(g.call("PostMessageA", {window, 0x400, 5, 6}) == 1, "PostMessageA");
            check(g.call("PeekMessageA", {msg, window, 0, 0, 1}) == 1 && m<4>(c, msg) == window && m<4>(c, msg + 4) == 0x400 && m<4>(c, msg + 8) == 5 && m<4>(c, msg + 12) == 6, "PeekMessageA removes the message");
            check(g.call("PeekMessageA", {msg, window, 0, 0, 1}) == 0, "the queue is empty");
            g.call("PostMessageA", {window, 0x401, 0, 0});
            check(g.call("GetMessageA", {msg, 0, 0, 0}) == 1 && m<4>(c, msg + 4) == 0x401 && g.call("DispatchMessageA", {msg}) == 1, "DispatchMessageA runs the guest's window procedure and returns its result");
            check(g.call("DefWindowProcA", {window, 0x400, 0, 0}) == 0, "DefWindowProcA");
            g.call("PostQuitMessage", {3});
            check(g.call("GetMessageA", {msg, 0, 0, 0}) == 0 && m<4>(c, msg + 4) == 0x12 && m<4>(c, msg + 8) == 3, "GetMessageA returns 0 for WM_QUIT with its exit code");
            check(g.call("SetFocus", {window}) == window && g.call("ShowCursor", {0}) == uint32_t(-1) && g.call("SetCapture", {window}) == 0 && g.call("ReleaseCapture", {}) == 1, "focus, cursor, capture");
            check(g.call("DestroyWindow", {window}) == 1 && g.call("DestroyWindow", {window}) == 0 && g.last_error() == 1400, "DestroyWindow, and a destroyed window is ERROR_INVALID_WINDOW_HANDLE");
            check(g.call("UnregisterClassA", {g.text("NueTestClass"), 0x400000}) == 1, "UnregisterClassA");
            check(g.call("MessageBoxA", {0, g.text("text"), g.text("caption"), 4 /* MB_YESNO */}) == 6, "MessageBoxA answers its default button");
        }

        // ---- files, mappings, toolhelp, drives and the shell of a machine that has none
        {
            const std::string name = "nfsu2_platform64_mapping.bin";                                   // relative: the guest's current directory is the game folder (drive C:)
            const std::string path = (std::filesystem::path(argv[2]) / name).string();
            std::remove(path.c_str());
            const uint32_t data = g.text("0123456789abcdef"), written = g.alloc(4);
            const uint32_t file = g.call("CreateFileA", {g.text(name.c_str()), 0xC0000000u, 3, 0, 2 /* CREATE_ALWAYS */, 0x80, 0});
            check(file != 0 && file != 0xFFFFFFFFu && g.call("WriteFile", {file, data, 16, written, 0}) == 1 && g.call("CloseHandle", {file}) == 1, "a file to map");
            const uint32_t wide_file = g.call("CreateFileW", {g.wide(name), 0xC0000000u, 3, 0, 3 /* OPEN_EXISTING */, 0x80, 0});
            check(wide_file != 0 && wide_file != 0xFFFFFFFFu, "CreateFileW opens it by its UTF-16 name");
            const uint32_t mapping = g.call("CreateFileMappingA", {wide_file, 0, 4 /* PAGE_READWRITE */, 0, 0, 0});
            check(mapping != 0, "CreateFileMappingA");
            const uint32_t view = g.call("MapViewOfFile", {mapping, 2 /* FILE_MAP_WRITE */, 0, 0, 0});
            check(view != 0 && nfsu2::guest::is_guest(nfsu2::guest::ptr<void>(view)) && g.string_at(view).substr(0, 16) == "0123456789abcdef", "MapViewOfFile gives a block of guest memory with the file's bytes");
            wm<1>(c, view, 'X');
            check(g.call("UnmapViewOfFile", {view}) == 1 && g.call("IsBadReadPtr", {view, 1}) == 1, "UnmapViewOfFile releases the block");
            check(g.call("UnmapViewOfFile", {view}) == 0, "a view is unmapped once");
            g.call("CloseHandle", {mapping});
            g.call("CloseHandle", {wide_file});
            std::ifstream in(path, std::ios::binary);
            std::string back((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
            in.close();
            check(back == "X123456789abcdef", "what was written through the view reached the file");
            std::remove(path.c_str());

            const uint32_t snapshot = g.call("CreateToolhelp32Snapshot", {2 /* TH32CS_SNAPPROCESS */, 0});
            const uint32_t entry = g.alloc(296);
            wm<4>(c, entry, 296);
            check(snapshot != 0xFFFFFFFFu && g.call("Process32First", {snapshot, entry}) == 1 && m<4>(c, entry + 8) != 0 && !g.string_at(entry + 36).empty(), "toolhelp lists the game itself");
            check(g.call("Process32Next", {snapshot, entry}) == 0 && g.last_error() == 18, "and nothing else (ERROR_NO_MORE_FILES)");
            check(g.call("CloseHandle", {snapshot}) == 1, "the snapshot is closed like any handle");

            check((g.call("GetLogicalDrives", {}) & 4) != 0 && g.call("GetDriveTypeA", {g.text("C:\\")}) == 3 && g.call("GetDriveTypeA", {g.text("Q:\\")}) == 1, "drive queries");
            const uint32_t space = g.alloc(24);
            check(g.call("GetDiskFreeSpaceExA", {g.text("C:\\"), space, space + 8, space + 16}) == 1 && m<4>(c, space + 4) == 0x40 && m<4>(c, space + 12) == 0x80, "GetDiskFreeSpaceExA");
            check(g.call("SHGetFolderPathA", {0, 0x1a, 0, 0, entry}) == 0x80004005u && m<1>(c, entry) == 0, "SHGetFolderPathA fails like a machine without a shell");
            check(g.call("ShellExecuteA", {0, 0, g.text("http://example.invalid"), 0, 0, 1}) <= 32, "ShellExecuteA reports an error");
        }

        if (failures) { std::cerr << failures << " check(s) failed\n"; return 1; }
        std::cout << "PASS platform64 and the loader group\n";
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
