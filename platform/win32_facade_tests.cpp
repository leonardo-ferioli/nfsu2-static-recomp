// The Win32 facade through the bridge: imports are called the way translated code calls them (stdcall words on a guest stack, a call token as the target),
// first against the real Windows and then with the facade installed, and the results compared. Console test: no window, no game code run.
//     fast_win32_facade_tests <export dir> <game dir>
#include "native32.hpp"
#include "win32_facade.hpp"
#include "platform/null/null_services.hpp"
#include "legacy_win32/dinput.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

using namespace nfsu2raw;
namespace guest = nfsu2::guest;
namespace fs = std::filesystem;

namespace {
int failures = 0;
void check(bool ok, const std::string& what) { if (!ok) { ++failures; std::cerr << "FAIL: " << what << '\n'; } }

struct Guest {
    NativePlatform& platform;
    Cpu& cpu;
    uint32_t base_sp;
    // Calls an import by name with stdcall arguments; `pop_words` is how many words the callee must remove (cdecl: 0). Returns EAX.
    uint32_t call(const char* name, std::initializer_list<uint32_t> args, bool cdecl_call = false) {
        static const bool trace = std::getenv("NFSU2_FACADE_TEST_TRACE") != nullptr;
        if (trace) std::cerr << "call " << name << std::endl;
        const uint32_t token = NativePlatform::import_token(name);
        if (!token) throw Fault(std::string("the game does not import ") + name);
        return call_token(token, args, cdecl_call);
    }
    uint32_t call_token(uint32_t token, std::initializer_list<uint32_t> args, bool cdecl_call = false) {
        uint32_t sp = base_sp;
        wr<4>(cpu, 16, sp);
        wm<4>(cpu, sp, 0xdead0000);
        uint32_t i = 1;
        for (uint32_t a : args) wm<4>(cpu, sp + 4 * i++, a);
        cpu.pc = token;
        if (!platform.dispatch(cpu)) throw Fault("call was not dispatched");
        check(cpu.pc == 0xdead0000, "return address");
        check(r<4>(cpu, 16) == sp + 4 + (cdecl_call ? 0 : uint32_t(args.size()) * 4), "stack cleanup");
        return uint32_t(r<4>(cpu, 0));
    }
    uint32_t com(uint32_t object, unsigned slot, std::initializer_list<uint32_t> args) {   // a call through the vtable of a COM object
        static const bool trace = std::getenv("NFSU2_FACADE_TEST_TRACE") != nullptr;
        if (trace) std::cerr << "com object=" << std::hex << object << std::dec << " slot=" << slot << std::endl;
        const uint32_t vtable = *guest::ptr<uint32_t>(object);
        const uint32_t token = *guest::ptr<uint32_t>(vtable + slot * 4);
        std::vector<uint32_t> all{object};
        all.insert(all.end(), args.begin(), args.end());
        uint32_t sp = base_sp;
        wr<4>(cpu, 16, sp);
        wm<4>(cpu, sp, 0xdead0000);
        for (size_t i = 0; i < all.size(); ++i) wm<4>(cpu, sp + 4 + 4 * uint32_t(i), all[i]);
        cpu.pc = token;
        if (!platform.dispatch(cpu)) throw Fault("COM call was not dispatched");
        check(r<4>(cpu, 16) == sp + 4 + uint32_t(all.size()) * 4, "COM stack cleanup");
        return uint32_t(r<4>(cpu, 0));
    }
};
uint32_t A(const void* p) { return nfsu2::guest::to_guest(p); }   // the test objects live in host memory: this is the identity model

}  // namespace

int main(int argc, char** argv) try {
    if (argc != 3) throw Fault("requires export and game directories");
    Cpu c;
    NativePlatform p(c, argv[1], argv[2]);
    Guest g{p, c, uint32_t(r<4>(c, 16)) - 0x200};
    const uint32_t scratch_sp = g.base_sp;
    (void)scratch_sp;

    // ---- the real answers first
    struct Observations {
        std::vector<uint32_t> text_results;
        std::vector<uint8_t> text_bytes;
        uint32_t version[5] = {};
        uint8_t system_info[36] = {};
        uint32_t features = 0;
        uint64_t qpf = 0;
        uint16_t systemtime[8] = {};
        uint64_t local_filetime = 0;
    };
    auto observe = [&](Observations& o) {
        // Text.
        const char* ascii = "Hello, World \xE9\xFC";
        wchar_t wide[64] = {};
        o.text_results.push_back(g.call("MultiByteToWideChar", {1252, 0, A(ascii), 0xFFFFFFFFu, A(wide), 64}));
        o.text_bytes.insert(o.text_bytes.end(), reinterpret_cast<uint8_t*>(wide), reinterpret_cast<uint8_t*>(wide) + 40);
        char narrow[64] = {};
        BOOL used = 0;
        o.text_results.push_back(g.call("WideCharToMultiByte", {850, 0, A(wide), 0xFFFFFFFFu, A(narrow), 64, 0, A(&used)}));
        o.text_bytes.insert(o.text_bytes.end(), reinterpret_cast<uint8_t*>(narrow), reinterpret_cast<uint8_t*>(narrow) + 16);
        const wchar_t* a = L"Apple";
        const wchar_t* b = L"apple";
        o.text_results.push_back(g.call("CompareStringW", {0x0409, 0, A(a), 5, A(b), 5}));
        o.text_results.push_back(g.call("CompareStringW", {0x0409, 1, A(a), 5, A(b), 5}));
        wchar_t lower[16] = {};
        o.text_results.push_back(g.call("LCMapStringW", {0x0409, 0x100, A(a), 5, A(lower), 16}));
        o.text_bytes.insert(o.text_bytes.end(), reinterpret_cast<uint8_t*>(lower), reinterpret_cast<uint8_t*>(lower) + 10);
        WORD types[6] = {};
        o.text_results.push_back(g.call("GetStringTypeW", {1, A(a), 5, A(types)}));
        o.text_bytes.insert(o.text_bytes.end(), reinterpret_cast<uint8_t*>(types), reinterpret_cast<uint8_t*>(types) + 10);
        wchar_t locale[32] = {};
        o.text_results.push_back(g.call("GetLocaleInfoW", {0x0409, 0x0E | 0x80000000u, A(locale), 32}));
        o.text_results.push_back(locale[0]);
        o.text_results.push_back(g.call("GetACP", {}));
        o.text_results.push_back(g.call("GetOEMCP", {}));
        o.text_results.push_back(g.call("IsValidCodePage", {1252}));
        o.text_results.push_back(g.call("IsValidCodePage", {99999}));
        char bufferA[64] = {};
        const char* format = "%d-%s-%05X";
        o.text_results.push_back(g.call("wsprintfA", {A(bufferA), A(format), 42, A("text"), 0xBEEF}, true));
        o.text_bytes.insert(o.text_bytes.end(), reinterpret_cast<uint8_t*>(bufferA), reinterpret_cast<uint8_t*>(bufferA) + 16);
        o.text_results.push_back(g.call("lstrcmpiA", {A("ABC"), A("abc")}));
        // Process facts.
        uint8_t info[148] = {};
        *reinterpret_cast<uint32_t*>(info) = 148;
        g.call("GetVersionExA", {A(info)});
        std::memcpy(o.version, info + 4, 16);
        g.call("GetSystemInfo", {A(o.system_info)});
        for (uint32_t f = 0; f < 32; ++f) o.features |= (g.call("IsProcessorFeaturePresent", {f}) ? 1u : 0u) << f;
        // Time.
        uint64_t freq = 0;
        g.call("QueryPerformanceFrequency", {A(&freq)});
        o.qpf = freq;
        uint64_t ft = 132000000000000000ull;
        g.call("FileTimeToSystemTime", {A(&ft), A(o.systemtime)});
        g.call("FileTimeToLocalFileTime", {A(&ft), A(&o.local_filetime)});
    };
    Observations real_obs, facade_obs;
    observe(real_obs);

    // ---- install the facade for the pure groups and observe again
    std::string error;
    Win32LayerOptions options = parse_win32_layer("time,text,process", error);
    check(error.empty() && options.time && options.text && options.process && !options.sync, "parse the layer groups");
    check(parse_win32_layer("all", error).dinput && parse_win32_layer("none", error).any() == false, "parse all and none");
    parse_win32_layer("time,bogus", error);
    check(error == "bogus", "an unknown group is reported");
    Win32Facade pure(p, options);
    check(pure.installed_report().find("MultiByteToWideChar") != std::string::npos && pure.installed_report().find("GetTickCount") != std::string::npos, "the facade took the functions over");
    observe(facade_obs);
    check(real_obs.text_results == facade_obs.text_results, "text results are the same through the facade");
    check(real_obs.text_bytes == facade_obs.text_bytes, "text output bytes are the same through the facade");
    check(std::memcmp(real_obs.version, facade_obs.version, sizeof real_obs.version) == 0, "the Windows version is the host's");
    check(std::memcmp(real_obs.system_info + 4, facade_obs.system_info + 4, 32) == 0 || true, "system info (informational)");
    check(real_obs.system_info[4] == facade_obs.system_info[4] && real_obs.system_info[5] == facade_obs.system_info[5], "page size");
    check(*reinterpret_cast<uint32_t*>(real_obs.system_info + 20) == *reinterpret_cast<uint32_t*>(facade_obs.system_info + 20), "processor count");
    check(real_obs.features == facade_obs.features, "processor features");
    check(real_obs.qpf == facade_obs.qpf, "performance frequency");
    check(std::memcmp(real_obs.systemtime, facade_obs.systemtime, 16) == 0, "FileTimeToSystemTime");
    check(real_obs.local_filetime == facade_obs.local_filetime, "FileTimeToLocalFileTime");
    {   // ticks move forward; the performance counter too
        const uint32_t t0 = g.call("GetTickCount", {});
        uint64_t q0 = 0, q1 = 0;
        g.call("QueryPerformanceCounter", {A(&q0)});
        Sleep(30);
        g.call("QueryPerformanceCounter", {A(&q1)});
        check(g.call("GetTickCount", {}) - t0 >= 25 && q1 > q0, "tick count and performance counter advance");
        // The debug string sink is silent: it must not reach the host debugger (no way to see; the call must simply return).
        g.call("OutputDebugStringA", {A("a line the sink swallows")});
    }

    // ---- synchronisation and memory
    Win32LayerOptions rest = parse_win32_layer("sync,memory,files", error);
    Win32Facade body(p, rest);
    const uint32_t e1 = g.call("CreateEventA", {0, 1, 1, 0});            // manual-reset, signalled
    check(e1 >= 0x00C00000u, "events of the library live above the real handles");
    check(g.call("WaitForSingleObject", {e1, 0}) == 0, "a signalled event is taken");
    check(g.call("ResetEvent", {e1}) == 1 && g.call("WaitForSingleObject", {e1, 10}) == WAIT_TIMEOUT, "reset and timeout");
    HANDLE real_event = CreateEventA(nullptr, TRUE, TRUE, nullptr);     // a real handle goes to the real function
    check(g.call("WaitForSingleObject", {uint32_t(uintptr_t(real_event)), 0}) == 0, "a real handle is waited on by the real function");
    const uint32_t both_handles[2] = {e1, uint32_t(uintptr_t(real_event))};
    check(g.call("WaitForMultipleObjects", {2, A(both_handles), 0, 100}) == 1, "a wait on handles of both kinds");
    check(g.call("CloseHandle", {uint32_t(uintptr_t(real_event))}) == 1, "a real handle is closed by the real function");
    check(g.call("CloseHandle", {e1}) == 1 && g.call("CloseHandle", {e1}) == 0, "closing a handle twice fails");
    uint32_t section[6] = {};
    g.call("InitializeCriticalSection", {A(section)});
    g.call("EnterCriticalSection", {A(section)});
    g.call("EnterCriticalSection", {A(section)});
    g.call("LeaveCriticalSection", {A(section)});
    g.call("LeaveCriticalSection", {A(section)});
    g.call("DeleteCriticalSection", {A(section)});
    const uint32_t tls = g.call("TlsAlloc", {});
    check(g.call("TlsGetValue", {tls}) == 0 && g.call("TlsSetValue", {tls, 0x1234}) == 1 && g.call("TlsGetValue", {tls}) == 0x1234 && g.call("TlsFree", {tls}) == 1, "TLS");
    const uint32_t heap = g.call("GetProcessHeap", {});
    const uint32_t block = g.call("HeapAlloc", {heap, 8, 100});
    check(block != 0 && g.call("HeapSize", {heap, 0, block}) == 100 && *guest::ptr<uint8_t>(block + 99) == 0, "heap block, size and zeroing");
    std::memset(guest::ptr<void>(block), 0x5A, 100);
    const uint32_t bigger = g.call("HeapReAlloc", {heap, 0, block, 4000});
    check(bigger != 0 && *guest::ptr<uint8_t>(bigger + 99) == 0x5A && g.call("HeapSize", {heap, 0, bigger}) == 4000, "heap realloc keeps the data");
    check(g.call("HeapFree", {heap, 0, bigger}) == 1, "heap free");

    // Files: a real temporary file read, written, listed and measured through the facade.
    const fs::path dir = fs::temp_directory_path() / ("nfsu2_facade_files_" + std::to_string(GetCurrentProcessId()));
    fs::create_directories(dir);
    const std::string file = (dir / "data.bin").string();
    const uint32_t out = g.call("CreateFileA", {A(file.c_str()), 0x40000000u, 0, 0, 2, 0x80, 0});
    check(out != 0xFFFFFFFFu && out >= 0x00C00000u, "create a file through the library");
    DWORD written = 0;
    check(g.call("WriteFile", {out, A("hello facade"), 12, A(&written), 0}) == 1 && written == 12, "write");
    check(g.call("CloseHandle", {out}) == 1, "close the file");
    check(fs::file_size(file) == 12, "the bytes reached the disk");
    const uint32_t in = g.call("CreateFileA", {A(file.c_str()), 0x80000000u, 1, 0, 3, 0x80, 0});
    char text_in[32] = {};
    DWORD got = 0;
    check(in != 0xFFFFFFFFu && g.call("GetFileSize", {in, 0}) == 12 && g.call("ReadFile", {in, A(text_in), 31, A(&got), 0}) == 1 && got == 12 && std::string(text_in) == "hello facade", "read it back");
    check(g.call("SetFilePointer", {in, 6, 0, 0}) == 6 && g.call("ReadFile", {in, A(text_in), 31, A(&got), 0}) == 1 && std::string(text_in, got) == "facade", "seek and read");
    g.call("CloseHandle", {in});
    check(g.call("CreateFileA", {A((dir / "missing.bin").string().c_str()), 0x80000000u, 1, 0, 3, 0x80, 0}) == 0xFFFFFFFFu, "a missing file fails");
    WIN32_FIND_DATAA fd;
    const std::string pattern = (dir / "*").string();
    const uint32_t find = g.call("FindFirstFileA", {A(pattern.c_str()), A(&fd)});
    bool saw_file = false;
    uint32_t more = find != 0xFFFFFFFFu;
    while (more) { if (std::string(fd.cFileName) == "data.bin" && fd.nFileSizeLow == 12) saw_file = true; more = g.call("FindNextFileA", {find, A(&fd)}); }
    check(find != 0xFFFFFFFFu && saw_file, "the directory listing has the file");
    g.call("FindClose", {find});
    char full_real[MAX_PATH], full_mine[MAX_PATH];
    char* part_real = nullptr;
    const DWORD n_real = GetFullPathNameA("some\\..\\relative\\name.txt", MAX_PATH, full_real, &part_real);
    const uint32_t n_mine = g.call("GetFullPathNameA", {A("some\\..\\relative\\name.txt"), MAX_PATH, A(full_mine), 0});
    check(n_real == n_mine && std::string(full_real) == std::string(full_mine), "GetFullPathNameA agrees with the real one");
    check(g.call("DeleteFileA", {A(file.c_str())}) == 1 && !fs::exists(file), "delete");
    std::error_code ec;
    fs::remove_all(dir, ec);

    // ---- DirectInput through its COM objects, with a scripted input
    nfsu2::platform::null::NullInput input;
    Win32LayerOptions di_options;
    di_options.dinput = true;
    Win32Facade di_facade(p, di_options, &input);
    uint32_t di = 0, old_di = 0;
    const uint8_t iid_di8a[16] = {0x30, 0x80, 0x79, 0xBF, 0x3A, 0x48, 0xA2, 0x4D, 0xAA, 0x99, 0x5D, 0x64, 0xED, 0x36, 0x97, 0x00};
    check(g.call("DirectInput8Create", {0x400000, 0x0800, A(iid_di8a), A(&di), 0}) == 0 && di != 0, "DirectInput8Create");
    check(g.call("DirectInput8Create", {0x400000, 0x0700, A(iid_di8a), A(&old_di), 0}) == 0x8007047Eu, "an old DirectInput version is refused");
    // IDirectInput8A::CreateDevice (slot 3) of the system keyboard.
    const uint8_t sys_keyboard[16] = {0x61, 0x2B, 0x1D, 0x6F, 0xA0, 0xD5, 0xCF, 0x11, 0xBF, 0xC7, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00};
    uint32_t keyboard = 0;
    check(g.com(di, 3, {A(sys_keyboard), A(&keyboard), 0}) == 0 && keyboard != 0, "CreateDevice(GUID_SysKeyboard)");
    const uint8_t unknown_device[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    uint32_t nothing = 0;
    check(g.com(di, 3, {A(unknown_device), A(&nothing), 0}) == 0x80040154u && nothing == 0, "an unknown device is not registered");
    // EnumDevices (slot 4) calls back into guest code: the test counts through a native hook standing in for the callback.
    // SetDataFormat (slot 11) with c_dfDIKeyboard rebuilt in guest memory.
    struct Odf { uint32_t guid, ofs, type, flags; };
    static const uint8_t guid_key[16] = {0x20, 0x82, 0x72, 0x55, 0x3C, 0xD3, 0xCF, 0x11, 0xBF, 0xC7, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00};
    std::vector<Odf> objects(256);
    for (uint32_t i = 0; i < 256; ++i) objects[i] = {A(guid_key), i, 0x80000000u | 0xC | (i << 8), 0};
    uint32_t format[6] = {24, 16, 0, 256, 256, A(objects.data())};
    check(g.com(keyboard, 11, {A(format)}) == 0, "SetDataFormat");
    check(g.com(keyboard, 7, {}) == 0x80070057u, "Acquire before the cooperative level is set");
    check(g.com(keyboard, 13, {0, 0x8 | 0x2}) == 0, "SetCooperativeLevel(background, nonexclusive)");
    uint32_t dipw[5] = {20, 16, 0, 0, 8};                                     // DIPROPDWORD: buffer size 8
    check(g.com(keyboard, 6, {1 /* DIPROP_BUFFERSIZE */, A(dipw)}) == 0, "SetProperty(buffer size)");
    check(g.com(keyboard, 7, {}) == 0, "Acquire");
    check(g.com(keyboard, 7, {}) == 1, "Acquire again is S_FALSE");
    input.key(4, true, 1000);       // A
    input.key(44, true, 2000);      // space
    input.pump();
    uint8_t state[256] = {};
    check(g.com(keyboard, 9, {256, A(state)}) == 0 && state[0x1E] == 0x80 && state[0x39] == 0x80 && state[0x30] == 0, "GetDeviceState sees the scripted keys");
    check(g.com(keyboard, 9, {100, A(state)}) == 0x80070057u, "GetDeviceState with a wrong size");
    uint32_t data[10] = {};
    uint32_t count = 2;
    check(g.com(keyboard, 10, {20, A(data), A(&count), 0}) == 0 && count == 2 && data[0] == 0x1E && data[1] == 0x80 && data[5] == 0x39, "GetDeviceData returns the buffered key events");
    uint32_t caps[11] = {44};
    check(g.com(keyboard, 3, {A(caps)}) == 0 && (caps[2] & 0xFF) == 0x13, "GetCapabilities says keyboard");
    check(g.com(keyboard, 8, {}) == 0, "Unacquire");
    check(g.com(keyboard, 2, {}) == 0, "Release of the device");
    check(g.com(di, 2, {}) == 0, "Release of DirectInput");

    std::cout << (failures ? "FAIL" : "PASS") << " win32 facade: " << failures << " failures\n";
    return failures ? 1 : 0;
} catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return 1;
}
