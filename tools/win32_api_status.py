"""Which Level A module answers each Win32 / DirectInput function of SPEED2.EXE, with what status, and the behaviour notes.

This file is data: tools/win32_inventory.py prints it next to the measured call counts and writes docs/legacy/win32.tbl and dinput8.tbl from it.
Status vocabulary (docs/ABI.md 2.6 of NUE): implemented (Level A has it, tested), partial (documented deviation), stub (accepted, returns a fixed
answer), trap (explicit failure with a log line, never a silent no-op; implemented only where the table says so), unreached (not called in any traced session, no Level A
implementation; the bridge passes it to the host OS today and NUE must answer it with a trap), pending (not written yet; this file must have none when the hand-over is final).
"""

MODULES = {
    "time": "QueryPerformanceFrequency QueryPerformanceCounter GetTickCount GetSystemTimeAsFileTime timeGetTime timeBeginPeriod timeEndPeriod "
            "timeGetDevCaps FileTimeToSystemTime FileTimeToLocalFileTime GetTimeZoneInformation Sleep SleepEx",
    "timers": "timeSetEvent timeKillEvent",
    "text": "GetStringTypeW GetStringTypeA IsValidCodePage IsValidLocale EnumSystemLocalesA CompareStringA CompareStringW GetLocaleInfoA GetLocaleInfoW "
            "GetUserDefaultLCID LCMapStringA LCMapStringW GetCPInfo GetOEMCP GetACP MultiByteToWideChar WideCharToMultiByte lstrcmpiA wsprintfA wvsprintfA",
    "memory": "HeapSize HeapReAlloc HeapCreate HeapDestroy HeapAlloc HeapFree GetProcessHeap GlobalAlloc GlobalFree VirtualAlloc VirtualFree VirtualProtect "
              "VirtualQuery IsBadCodePtr IsBadReadPtr IsBadWritePtr",
    "process": "GetLastError SetLastError GetModuleHandleA GetModuleFileNameA GetProcAddress LoadLibraryA FreeLibrary GetCommandLineA GetStartupInfoA "
               "GetEnvironmentStrings GetEnvironmentStringsA GetEnvironmentStringsW FreeEnvironmentStringsA FreeEnvironmentStringsW SetEnvironmentVariableA "
               "GetVersionExA GetSystemInfo IsProcessorFeaturePresent GetCurrentProcess GetCurrentProcessId CreateToolhelp32Snapshot Process32First "
               "Process32Next SetErrorMode OutputDebugStringA IsDebuggerPresent DebugBreak ExitProcess TerminateProcess GetProcessAffinityMask "
               "SetProcessAffinityMask GetPriorityClass SetPriorityClass",
    "seh": "RaiseException RtlUnwind UnhandledExceptionFilter SetUnhandledExceptionFilter",
    "files": "CreateFileA CreateFileW ReadFile WriteFile SetFilePointer SetEndOfFile FlushFileBuffers GetFileSize GetFileType DeleteFileA MoveFileA "
             "CreateDirectoryA RemoveDirectoryA FindFirstFileA FindNextFileA FindClose GetFullPathNameA GetLongPathNameA GetCurrentDirectoryA GetDriveTypeA "
             "GetLogicalDrives GetDiskFreeSpaceA GetDiskFreeSpaceExA GetStdHandle SetStdHandle SetHandleCount CreateFileMappingA MapViewOfFile "
             "UnmapViewOfFile FindResourceA FindResourceW LoadResource LockResource SizeofResource ShellExecuteA SHGetFolderPathA GetOverlappedResult",
    "sync": "TlsAlloc TlsFree TlsGetValue TlsSetValue InitializeCriticalSection EnterCriticalSection LeaveCriticalSection DeleteCriticalSection CreateEventA "
            "SetEvent ResetEvent CreateMutexA ReleaseMutex WaitForSingleObject WaitForMultipleObjects CreateThread ExitThread TerminateThread SuspendThread "
            "ResumeThread DuplicateHandle GetCurrentThread GetCurrentThreadId GetExitCodeThread GetThreadPriority SetThreadPriority InterlockedExchange "
            "InterlockedCompareExchange CloseHandle",
    "registry": "RegCloseKey RegCreateKeyA RegOpenKeyA RegOpenKeyExA RegQueryValueExA RegSetValueExA",
    "window": "AdjustWindowRect BeginPaint CreateWindowExA DefWindowProcA DestroyWindow DispatchMessageA EndPaint GetClientRect GetCursorPos GetDesktopWindow "
              "GetForegroundWindow GetMessageA GetSystemMetrics GetWindowRect IsIconic LoadCursorA LoadIconA MessageBoxA PeekMessageA PostMessageA "
              "PostQuitMessage PostThreadMessageA RegisterClassExA ReleaseCapture SetActiveWindow SetCapture SetCursor SetFocus SetForegroundWindow SetRect "
              "SetWindowLongA ShowCursor ShowWindow TranslateMessage UnregisterClassA UpdateWindow",
    "gdi": "BitBlt CreateBitmap CreateCompatibleDC CreateFontA DeleteDC DeleteObject ExtTextOutA GetPixel SelectObject SetBkColor SetBkMode SetTextColor",
    "dinput": "DirectInput8Create",
    "net": "GetCommConfig GetCommState SetCommConfig SetCommMask SetCommState SetCommTimeouts SetupComm WaitCommEvent PurgeComm Netbios lineAnswer lineClose "
           "lineGetDevCaps lineGetID lineInitialize lineMakeCall lineNegotiateAPIVersion lineOpen lineShutdown WSACleanup WSAGetLastError WSAIoctl WSAStartup "
           "accept bind closesocket connect gethostbyname gethostname getpeername getsockname ioctlsocket listen recv recvfrom select send sendto setsockopt "
           "shutdown socket",
}

BY_NAME = {}
for _module, _names in MODULES.items():
    for _n in _names.split():
        BY_NAME[_n] = _module

# Status of a function in Level A (the library) by module, and per-function exceptions. The facade column of the inventory says separately which
# functions the bridge's facade answers when the layer is switched on.
MODULE_STATUS = {
    "time": "implemented", "timers": "implemented", "text": "implemented", "memory": "implemented", "process": "implemented", "files": "implemented",
    "sync": "implemented", "registry": "implemented", "window": "implemented", "dinput": "implemented",
    "seh": "partial",        # guest exception state machine: stays in the bridge (NUE: legacy_core)
    "gdi": "unreached",      # not reached in any traced session except DeleteObject
    "net": "unreached",      # 41 imports, none reached: NUE answers with a logged failure, never a silent success
}
STATUS = {
    "GetTimeZoneInformation": "partial",     # no daylight-saving schedule: only the offset in effect now
    "GetTickCount": "partial", "timeGetTime": "partial",   # the origin is the start of the process plus five minutes, not the machine's uptime
    "CompareStringA": "partial", "CompareStringW": "partial", "LCMapStringA": "partial", "LCMapStringW": "partial",   # Latin, Greek and Cyrillic repertoire; SORT_STRINGSORT differs in rare cases
    "GetStringTypeA": "partial", "GetStringTypeW": "partial", "GetLocaleInfoA": "partial", "GetLocaleInfoW": "partial", "EnumSystemLocalesA": "partial",   # en-US data for every locale
    "WaitForMultipleObjects": "implemented", "SuspendThread": "partial", "TerminateThread": "partial",   # the platform cannot stop a running thread from outside
    "CreateFileMappingA": "partial", "MapViewOfFile": "partial", "UnmapViewOfFile": "partial", "FindResourceA": "partial", "FindResourceW": "partial", "LoadResource": "partial", "LockResource": "partial", "SizeofResource": "partial",
    "ShellExecuteA": "stub", "GetDriveTypeA": "partial", "GetLogicalDrives": "partial", "GetDiskFreeSpaceA": "partial", "GetDiskFreeSpaceExA": "partial", "GetOverlappedResult": "unreached",
    "SetStdHandle": "partial", "GetStdHandle": "partial", "SetHandleCount": "stub",
    "DeleteObject": "stub",
    "RegCreateKeyA": "implemented", "RegOpenKeyA": "implemented",
    "Process32First": "partial", "Process32Next": "partial", "CreateToolhelp32Snapshot": "partial",   # the game's own process only
    "DebugBreak": "partial", "RtlUnwind": "partial", "RaiseException": "partial", "UnhandledExceptionFilter": "partial", "SetUnhandledExceptionFilter": "partial",
    "MessageBoxA": "partial", "IsDebuggerPresent": "implemented",
    "SHGetFolderPathA": "partial", "ExitProcess": "implemented", "TerminateProcess": "implemented",
    "DirectInput8Create": "implemented",
}
NOTES = {
    "QueryPerformanceCounter": "hot: 2,500 to 63,000 calls per frame depending on the traced scene; a clock read, nothing else",
    "OutputDebugStringA": "hot in traced menus (tens of ms per frame when something listens); a counting sink by default: the facade makes it free",
    "SetThreadPriority": "TIME_CRITICAL is capped to ABOVE_NORMAL by platform policy (2026-10-16 incident); SyncPolicy",
    "WaitForSingleObject": "an INFINITE wait is sliced into 100 ms waits so that a stopping host interrupts it",
    "WaitForMultipleObjects": "same slicing; waits on handles of two sources (library and real system) are polled by the facade",
    "Sleep": "sliced into 100 ms sleeps for the same reason; the bridge keeps it",
    "CreateFileA": "relative game paths, case-insensitive names through the Storage; overlapped and special opens stay with the real system in the facade",
    "ReadFile": "the facade passes overlapped reads and real handles to the real function",
    "RegisterClassExA": "a guest WNDPROC is replaced by one of 8 native trampolines (bridge); Level A takes the guest procedure as an opaque id",
    "CreateWindowExA": "overridden by the window-fit mod (borderless, scaled, windowed); Level A creates a table entry",
    "SetWindowLongA": "overridden by the window-fit mod",
    "AdjustWindowRect": "overridden by the window-fit mod; Level A uses classic non-client metrics",
    "RegQueryValueExA": "the game's own keys live in a settings file (RegistryWrapper, mod) or the user registry (RegistryFallback)",
    "DirectInput8Create": "Level A device model; the COM objects are the facade's. Action maps map keyboard and mouse semantics only (see hand-over)",
    "GetVersionExA": "the version is a configuration value (the facade copies the host's so that behaviour is unchanged)",
    "HeapAlloc": "size-class allocator over the address space; blocks are 8-byte aligned like the Windows heap",
    "VirtualAlloc": "Level A has the Win32 region rules; the bridge keeps its own call because it registers run-time generated code",
    "VirtualProtect": "same: the bridge registers executable regions for the interpreter",
    "CreateThread": "Level A creates threads with exit codes and suspended start; the bridge keeps it (guest CPU contexts, affinity, shutdown join)",
    "timeSetEvent": "Level A serialises callbacks like the multimedia timer thread; the bridge keeps it (guest CPU contexts)",
    "GetModuleHandleA": "Level A holds a module table with exports; the bridge answers for the main image",
    "GetProcAddress": "Level A: exports of registered modules; the bridge learns names of real functions",
    "IsProcessorFeaturePresent": "answered from platform::SystemInfo::pf_mask (the host's own PF_* bits on Windows)",
}


def lookup(dll, name):
    module = BY_NAME.get(name, "unclassified")
    return {"module": module, "status": STATUS.get(name, MODULE_STATUS.get(module, "pending")), "note": NOTES.get(name, "")}


DINPUT_METHODS = [
    # (interface, method, status, note)
    ("DirectInput8Create", "DirectInput8Create", "implemented", "entry point; returns IDirectInput8A; version below 0x0800 is refused"),
    ("IDirectInput8A", "AddRef/Release", "implemented", "reference counts of the COM objects are the facade's; a device lives while the table holds it"),
    ("IDirectInput8A", "CreateDevice", "implemented", "keyboard, mouse and one game controller per GUID"),
    ("IDirectInput8A", "EnumDevices", "implemented", "callback runs a guest function (facade)"),
    ("IDirectInput8A", "EnumDevicesBySemantics", "partial", "keyboard and mouse genres are listed; game-controller genres are not mapped (no table in the library)"),
    ("IDirectInput8A", "ConfigureDevices", "stub", "needs a UI: fails with DIERR_UNSUPPORTED (not logged); the game was not seen calling it"),
    ("IDirectInputDevice8A", "AddRef/Release", "implemented", ""),
    ("IDirectInputDevice8A", "Acquire/Unacquire", "implemented", ""),
    ("IDirectInputDevice8A", "GetDeviceState", "implemented", "keyboard 256 bytes, mouse DIMOUSESTATE2, joystick DIJOYSTATE2 (the mod's joy_state hook reads it)"),
    ("IDirectInputDevice8A", "GetDeviceData", "implemented", "buffered events; overflow reporting"),
    ("IDirectInputDevice8A", "SetDataFormat", "implemented", ""),
    ("IDirectInputDevice8A", "SetCooperativeLevel", "implemented", ""),
    ("IDirectInputDevice8A", "SetProperty/GetProperty", "implemented", "buffer size, axis range, dead zone"),
    ("IDirectInputDevice8A", "Poll", "implemented", ""),
    ("IDirectInputDevice8A", "GetCapabilities/EnumObjects", "implemented", ""),
    ("IDirectInputDevice8A", "BuildActionMap/SetActionMap", "partial", "the game uses action mapping; keyboard and mouse semantics only"),
    ("IDirectInputDevice8A", "SetEventNotification", "stub", "accepted and ignored: the game polls"),
]


def dinput_rows():
    for iface, method, status, note in DINPUT_METHODS:
        yield "%-22s %-34s since 1  status %-9s %s" % (iface, method, status, note)
