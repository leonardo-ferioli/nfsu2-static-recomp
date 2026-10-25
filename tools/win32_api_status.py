"""Which Level A module answers each Win32 / DirectInput function of SPEED2.EXE, with what status, and the behaviour notes.

This file is data: tools/win32_inventory.py prints it next to the measured call counts and writes docs/legacy/win32.tbl and dinput8.tbl from it.
Status vocabulary (docs/ABI.md 2.6 of NUE): implemented (Level A has it, tested), partial (documented deviation), stub (accepted, returns a fixed
answer), trap (explicit failure with a log line, never a silent no-op), pending (not written yet; this file must have none when the hand-over is final).
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

# Per-function status (default: pending) and notes. Filled in as each module lands.
STATUS = {}
NOTES = {
    "QueryPerformanceCounter": "hot: about 63,000 calls per frame in one traced menu; must stay a few nanoseconds",
    "OutputDebugStringA": "hot in traced menus (tens of ms per frame on a real debugger-less system); a no-op sink by default",
    "SetThreadPriority": "TIME_CRITICAL is capped to ABOVE_NORMAL by platform policy (2026-10-16 incident)",
    "WaitForSingleObject": "an INFINITE wait is sliced into 100 ms waits so a worker fault can interrupt it",
    "WaitForMultipleObjects": "an INFINITE wait is sliced into 100 ms waits",
    "Sleep": "sliced into 100 ms sleeps for the same reason",
    "CreateFileA": "game data is read-only relative paths; case-insensitive names",
    "RegisterClassExA": "a guest WNDPROC is replaced by one of 8 native trampolines",
    "CreateWindowExA": "overridden by the window-fit mod (borderless, scaled, windowed modes)",
    "SetWindowLongA": "overridden by the window-fit mod",
    "AdjustWindowRect": "overridden by the window-fit mod",
    "RegQueryValueExA": "the game's own keys live in a settings file (RegistryWrapper) or the user registry (RegistryFallback)",
    "DirectInput8Create": "the real dinput8 object is returned today; Level A replaces it",
}


def lookup(dll, name):
    module = BY_NAME.get(name, "unclassified")
    return {"module": module, "status": STATUS.get(name, "pending"), "note": NOTES.get(name, "")}


DINPUT_METHODS = [
    # (interface, method, status, note)
    ("DirectInput8Create", "DirectInput8Create", "pending", "entry point; returns IDirectInput8A"),
    ("IDirectInput8A", "AddRef/Release", "pending", "COM rules on the facade side"),
    ("IDirectInput8A", "CreateDevice", "pending", "keyboard, mouse and one game controller per GUID"),
    ("IDirectInput8A", "EnumDevices", "pending", "callback runs a guest function (facade)"),
    ("IDirectInput8A", "EnumDevicesBySemantics", "pending", "action-map enumeration (genre); callback runs a guest function"),
    ("IDirectInput8A", "ConfigureDevices", "trap", "needs a UI; the bridge raises a fault today"),
    ("IDirectInputDevice8A", "AddRef/Release", "pending", ""),
    ("IDirectInputDevice8A", "Acquire/Unacquire", "pending", ""),
    ("IDirectInputDevice8A", "GetDeviceState", "pending", "keyboard 256 bytes, mouse DIMOUSESTATE2, joystick DIJOYSTATE2 (the mod's joy_state hook reads it)"),
    ("IDirectInputDevice8A", "GetDeviceData", "pending", "buffered events; overflow reporting"),
    ("IDirectInputDevice8A", "SetDataFormat", "pending", ""),
    ("IDirectInputDevice8A", "SetCooperativeLevel", "pending", ""),
    ("IDirectInputDevice8A", "SetProperty/GetProperty", "pending", "buffer size, axis range, dead zone"),
    ("IDirectInputDevice8A", "Poll", "pending", ""),
    ("IDirectInputDevice8A", "GetCapabilities/EnumObjects", "pending", ""),
    ("IDirectInputDevice8A", "BuildActionMap/SetActionMap", "pending", "the game uses action mapping, not only raw state"),
    ("IDirectInputDevice8A", "SetEventNotification", "pending", "seen only in the bridge's diagnostics"),
]


def dinput_rows():
    for iface, method, status, note in DINPUT_METHODS:
        yield "%-22s %-34s since 1  status %-9s %s" % (iface, method, status, note)
