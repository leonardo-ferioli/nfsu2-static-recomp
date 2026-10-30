249 imports (graphics, DirectDraw and DirectSound entry points excluded), 130 reached in the traced sessions (43 profile windows)

| Function | DLL | Call sites | Calls/frame | Today | Facade group | Level A module | Status | Behaviour notes |
|---|---|---:|---:|---|---|---|---|---|
| RegCloseKey | advapi32.dll | 6 |  | mod override (mods_registry.cpp) | registry | registry | implemented |  |
| RegCreateKeyA | advapi32.dll | 1 |  | mod override (mods_registry.cpp) | registry | registry | implemented |  |
| RegOpenKeyA | advapi32.dll | 2 |  | mod override (mods_registry.cpp) | registry | registry | implemented |  |
| RegOpenKeyExA | advapi32.dll | 6 |  | mod override (mods_registry.cpp) | registry | registry | implemented |  |
| RegQueryValueExA | advapi32.dll | 39 |  | mod override (mods_registry.cpp) | registry | registry | implemented | the game's own keys live in a settings file (RegistryWrapper, mod) or the user registry (RegistryFallback) |
| RegSetValueExA | advapi32.dll | 30 |  | mod override (mods_registry.cpp) | registry | registry | implemented |  |
| DirectInput8Create | dinput8.dll | 2 |  | bridge | dinput | dinput | implemented | Level A device model; the COM objects are the facade's. Action maps map keyboard and mouse semantics only (see hand-over) |
| BitBlt | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| CreateBitmap | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| CreateCompatibleDC | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| CreateFontA | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| DeleteDC | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| DeleteObject | gdi32.dll | 1 |  | OS pass-through | traps | gdi | stub |  |
| ExtTextOutA | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| GetPixel | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| SelectObject | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| SetBkColor | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| SetBkMode | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| SetTextColor | gdi32.dll | 0 (not reached) |  | OS pass-through | traps | gdi | trap |  |
| CreateDirectoryA | kernel32.dll | 2 |  | OS pass-through | files | files | implemented |  |
| CreateFileA | kernel32.dll | 2 |  | OS pass-through | files | files | implemented | relative game paths, case-insensitive names through the Storage; overlapped and special opens stay with the real system in the facade |
| CreateFileMappingA | kernel32.dll | 0 (not reached) |  | OS pass-through | system | files | partial |  |
| CreateFileW | kernel32.dll | 0 (not reached) |  | OS pass-through | system | files | implemented |  |
| DeleteFileA | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | implemented |  |
| FindClose | kernel32.dll | 2 |  | OS pass-through | files | files | implemented |  |
| FindFirstFileA | kernel32.dll | 2 |  | OS pass-through | files | files | implemented |  |
| FindNextFileA | kernel32.dll | 3 |  | OS pass-through | files | files | implemented |  |
| FindResourceA | kernel32.dll | 1 |  | OS pass-through | resources | resources | implemented | the PE resource directory of the guest image (legacy_win32/resources); an HRSRC is the address of the data entry, LoadResource the address of the bytes in the image |
| FindResourceW | kernel32.dll | 0 (not reached) |  | OS pass-through | resources | resources | implemented |  |
| FlushFileBuffers | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | implemented |  |
| GetCurrentDirectoryA | kernel32.dll | 1 |  | OS pass-through | files | files | implemented |  |
| GetDiskFreeSpaceA | kernel32.dll | 0 (not reached) |  | OS pass-through | system | files | partial |  |
| GetDiskFreeSpaceExA | kernel32.dll | 0 (not reached) |  | OS pass-through | system | files | partial |  |
| GetDriveTypeA | kernel32.dll | 1 |  | OS pass-through | system | files | partial |  |
| GetFileSize | kernel32.dll | 1 |  | OS pass-through | files | files | implemented |  |
| GetFileType | kernel32.dll | 2 |  | OS pass-through | files | files | implemented |  |
| GetFullPathNameA | kernel32.dll | 1 |  | OS pass-through | files | files | implemented |  |
| GetLogicalDrives | kernel32.dll | 2 |  | OS pass-through | system | files | partial |  |
| GetLongPathNameA | kernel32.dll | 2 |  | OS pass-through | files | files | implemented |  |
| GetOverlappedResult | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | partial |  |
| GetStdHandle | kernel32.dll | 1 |  | OS pass-through | loader | files | partial |  |
| LoadResource | kernel32.dll | 1 |  | OS pass-through | resources | resources | implemented |  |
| LockResource | kernel32.dll | 1 |  | OS pass-through | resources | resources | implemented |  |
| MapViewOfFile | kernel32.dll | 0 (not reached) |  | OS pass-through | system | files | partial | a view is a block of the guest's VirtualAlloc space holding a copy of the bytes; UnmapViewOfFile writes a writable view back |
| MoveFileA | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | implemented |  |
| ReadFile | kernel32.dll | 2 |  | OS pass-through | files | files | implemented | the facade passes overlapped reads and real handles to the real function |
| RemoveDirectoryA | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | implemented |  |
| SetEndOfFile | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | implemented |  |
| SetFilePointer | kernel32.dll | 2 |  | OS pass-through | files | files | implemented |  |
| SetHandleCount | kernel32.dll | 1 |  | OS pass-through | loader | files | stub |  |
| SetStdHandle | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | files | partial |  |
| SizeofResource | kernel32.dll | 1 |  | OS pass-through | resources | resources | implemented |  |
| UnmapViewOfFile | kernel32.dll | 0 (not reached) |  | OS pass-through | system | files | partial |  |
| WriteFile | kernel32.dll | 0 (not reached) |  | OS pass-through | files | files | implemented |  |
| GetProcessHeap | kernel32.dll | 0 (not reached) |  | OS pass-through | memory | memory | implemented |  |
| GlobalAlloc | kernel32.dll | 0 (not reached) |  | OS pass-through | memory | memory | implemented |  |
| GlobalFree | kernel32.dll | 0 (not reached) |  | OS pass-through | memory | memory | implemented |  |
| HeapAlloc | kernel32.dll | 2 | 160.7 | OS pass-through | memory | memory | implemented | size-class allocator over the address space; blocks are 8-byte aligned like the Windows heap |
| HeapCreate | kernel32.dll | 1 |  | OS pass-through | memory | memory | implemented |  |
| HeapDestroy | kernel32.dll | 0 (not reached) |  | OS pass-through | memory | memory | implemented |  |
| HeapFree | kernel32.dll | 1 |  | OS pass-through | memory | memory | implemented |  |
| HeapReAlloc | kernel32.dll | 1 |  | OS pass-through | memory | memory | implemented |  |
| HeapSize | kernel32.dll | 1 |  | OS pass-through | memory | memory | implemented |  |
| IsBadCodePtr | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | memory | implemented |  |
| IsBadReadPtr | kernel32.dll | 7 |  | OS pass-through | loader | memory | implemented |  |
| IsBadWritePtr | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | memory | implemented |  |
| VirtualAlloc | kernel32.dll | 0 (not reached) |  | bridge | loader | memory | implemented | Level A has the Win32 region rules; the bridge keeps its own call because it registers run-time generated code |
| VirtualFree | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | memory | implemented |  |
| VirtualProtect | kernel32.dll | 1 |  | bridge | loader | memory | implemented | same: the bridge registers executable regions for the interpreter |
| VirtualQuery | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | memory | implemented |  |
| GetCommConfig | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| GetCommState | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| PurgeComm | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| SetCommConfig | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| SetCommMask | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| SetCommState | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| SetCommTimeouts | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| SetupComm | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| WaitCommEvent | kernel32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| CreateToolhelp32Snapshot | kernel32.dll | 1 |  | OS pass-through | system | process | partial |  |
| DebugBreak | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | process | partial |  |
| ExitProcess | kernel32.dll | 1 |  | OS pass-through | loader | process | implemented |  |
| FreeEnvironmentStringsA | kernel32.dll | 0 (not reached) |  | OS pass-through | process | process | implemented |  |
| FreeEnvironmentStringsW | kernel32.dll | 1 |  | OS pass-through | process | process | implemented |  |
| FreeLibrary | kernel32.dll | 0 (not reached) |  | bridge | loader | process | implemented |  |
| GetCommandLineA | kernel32.dll | 1 |  | bridge | loader | process | implemented |  |
| GetCurrentProcess | kernel32.dll | 2 |  | OS pass-through | loader | process | implemented |  |
| GetCurrentProcessId | kernel32.dll | 1 |  | OS pass-through | process | process | implemented |  |
| GetEnvironmentStrings | kernel32.dll | 0 (not reached) |  | OS pass-through | process | process | implemented |  |
| GetEnvironmentStringsW | kernel32.dll | 1 |  | OS pass-through | process | process | implemented |  |
| GetLastError | kernel32.dll | 4 |  | bridge | loader | process | implemented |  |
| GetModuleFileNameA | kernel32.dll | 1 |  | bridge | loader | process | implemented |  |
| GetModuleHandleA | kernel32.dll | 12 |  | bridge | loader | process | implemented | Level A holds a module table with exports; the bridge answers for the main image |
| GetPriorityClass | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | process | implemented |  |
| GetProcAddress | kernel32.dll | 3 |  | bridge | loader | process | implemented | Level A: exports of registered modules; the bridge learns names of real functions |
| GetProcessAffinityMask | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | process | implemented |  |
| GetStartupInfoA | kernel32.dll | 1 |  | OS pass-through | process | process | implemented |  |
| GetSystemInfo | kernel32.dll | 1 |  | OS pass-through | process | process | implemented |  |
| GetVersionExA | kernel32.dll | 4 |  | OS pass-through | process | process | implemented | the version is a configuration value (the facade copies the host's so that behaviour is unchanged) |
| IsDebuggerPresent | kernel32.dll | 0 (not reached) |  | OS pass-through | process | process | implemented |  |
| IsProcessorFeaturePresent | kernel32.dll | 2 |  | OS pass-through | process | process | implemented | answered from platform::SystemInfo::pf_mask (the host's own PF_* bits on Windows) |
| LoadLibraryA | kernel32.dll | 1 |  | bridge | loader | process | implemented |  |
| OutputDebugStringA | kernel32.dll | 2 |  | OS pass-through | process | process | implemented | hot in traced menus (tens of ms per frame when something listens); a counting sink by default: the facade makes it free |
| Process32First | kernel32.dll | 1 |  | OS pass-through | system | process | partial |  |
| Process32Next | kernel32.dll | 1 |  | OS pass-through | system | process | partial |  |
| SetEnvironmentVariableA | kernel32.dll | 0 (not reached) |  | OS pass-through | process | process | implemented |  |
| SetErrorMode | kernel32.dll | 1 |  | OS pass-through | process | process | implemented |  |
| SetLastError | kernel32.dll | 1 |  | bridge | loader | process | implemented |  |
| SetPriorityClass | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | process | implemented |  |
| SetProcessAffinityMask | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | process | implemented |  |
| TerminateProcess | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | process | implemented |  |
| RaiseException | kernel32.dll | 0 (not reached) |  | bridge | - | seh | partial |  |
| RtlUnwind | kernel32.dll | 0 (not reached) |  | bridge | - | seh | partial |  |
| SetUnhandledExceptionFilter | kernel32.dll | 2 |  | bridge | loader | seh | partial |  |
| UnhandledExceptionFilter | kernel32.dll | 0 (not reached) |  | bridge | - | seh | partial |  |
| CloseHandle | kernel32.dll | 6 |  | OS pass-through | sync | sync | implemented |  |
| CreateEventA | kernel32.dll | 2 |  | OS pass-through | sync | sync | implemented |  |
| CreateMutexA | kernel32.dll | 2 |  | OS pass-through | sync | sync | implemented |  |
| CreateThread | kernel32.dll | 2 |  | bridge | loader | sync | implemented | Level A creates threads with exit codes and suspended start; the bridge keeps it (guest CPU contexts, affinity, shutdown join) |
| DeleteCriticalSection | kernel32.dll | 1 |  | OS pass-through | sync | sync | implemented |  |
| DuplicateHandle | kernel32.dll | 1 |  | OS pass-through | sync | sync | implemented |  |
| EnterCriticalSection | kernel32.dll | 4 | 175.6 | OS pass-through | sync | sync | implemented |  |
| ExitThread | kernel32.dll | 0 (not reached) |  | bridge | loader | sync | implemented |  |
| GetCurrentThread | kernel32.dll | 1 |  | OS pass-through | loader | sync | implemented |  |
| GetCurrentThreadId | kernel32.dll | 5 | 151.0 | OS pass-through | loader | sync | implemented |  |
| GetExitCodeThread | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | sync | implemented |  |
| GetThreadPriority | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | sync | implemented |  |
| InitializeCriticalSection | kernel32.dll | 1 |  | OS pass-through | sync | sync | implemented |  |
| InterlockedCompareExchange | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | sync | implemented |  |
| InterlockedExchange | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | sync | implemented |  |
| LeaveCriticalSection | kernel32.dll | 3 | 175.6 | OS pass-through | sync | sync | implemented |  |
| ReleaseMutex | kernel32.dll | 10 | 9.8 | OS pass-through | sync | sync | implemented |  |
| ResetEvent | kernel32.dll | 1 |  | OS pass-through | sync | sync | implemented |  |
| ResumeThread | kernel32.dll | 1 |  | OS pass-through | loader | sync | implemented |  |
| SetEvent | kernel32.dll | 3 |  | OS pass-through | sync | sync | implemented |  |
| SetThreadPriority | kernel32.dll | 2 |  | bridge | loader | sync | implemented | TIME_CRITICAL is capped to ABOVE_NORMAL by platform policy (2026-10-16 incident); SyncPolicy |
| SuspendThread | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | sync | partial |  |
| TerminateThread | kernel32.dll | 0 (not reached) |  | OS pass-through | loader | sync | partial |  |
| TlsAlloc | kernel32.dll | 1 |  | OS pass-through | sync | sync | implemented |  |
| TlsFree | kernel32.dll | 0 (not reached) |  | OS pass-through | sync | sync | implemented |  |
| TlsGetValue | kernel32.dll | 2 | 57.3 | OS pass-through | sync | sync | implemented |  |
| TlsSetValue | kernel32.dll | 2 |  | OS pass-through | sync | sync | implemented |  |
| WaitForMultipleObjects | kernel32.dll | 0 (not reached) |  | bridge | sync | sync | implemented | same slicing; waits on handles of two sources (library and real system) are polled by the facade |
| WaitForSingleObject | kernel32.dll | 12 |  | bridge | sync | sync | implemented | an INFINITE wait is sliced into 100 ms waits so that a stopping host interrupts it |
| CompareStringA | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | partial |  |
| CompareStringW | kernel32.dll | 2 |  | OS pass-through | text | text | partial |  |
| EnumSystemLocalesA | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | partial |  |
| GetACP | kernel32.dll | 1 |  | OS pass-through | text | text | implemented |  |
| GetCPInfo | kernel32.dll | 2 |  | OS pass-through | text | text | implemented |  |
| GetLocaleInfoA | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | partial |  |
| GetLocaleInfoW | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | partial |  |
| GetOEMCP | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | implemented |  |
| GetStringTypeA | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | partial |  |
| GetStringTypeW | kernel32.dll | 2 |  | OS pass-through | text | text | partial |  |
| GetUserDefaultLCID | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | implemented |  |
| IsValidCodePage | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | implemented |  |
| IsValidLocale | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | implemented |  |
| LCMapStringA | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | partial |  |
| LCMapStringW | kernel32.dll | 3 |  | OS pass-through | text | text | partial |  |
| MultiByteToWideChar | kernel32.dll | 8 |  | OS pass-through | text | text | implemented |  |
| WideCharToMultiByte | kernel32.dll | 5 |  | OS pass-through | text | text | implemented |  |
| lstrcmpiA | kernel32.dll | 0 (not reached) |  | OS pass-through | text | text | implemented |  |
| FileTimeToLocalFileTime | kernel32.dll | 1 |  | OS pass-through | time | time | implemented |  |
| FileTimeToSystemTime | kernel32.dll | 1 |  | OS pass-through | time | time | implemented |  |
| GetSystemTimeAsFileTime | kernel32.dll | 2 |  | OS pass-through | time | time | implemented |  |
| GetTickCount | kernel32.dll | 5 |  | OS pass-through | time | time | partial |  |
| GetTimeZoneInformation | kernel32.dll | 2 |  | OS pass-through | time | time | partial |  |
| QueryPerformanceCounter | kernel32.dll | 7 | 2501.0 | OS pass-through | time | time | implemented | hot: 2,500 to 63,000 calls per frame depending on the traced scene; a clock read, nothing else |
| QueryPerformanceFrequency | kernel32.dll | 3 |  | OS pass-through | time | time | implemented |  |
| Sleep | kernel32.dll | 2 |  | bridge | loader | time | implemented | sliced into 100 ms sleeps for the same reason; the bridge keeps it |
| SleepEx | kernel32.dll | 2 |  | bridge | loader | time | implemented |  |
| Netbios | netapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| ShellExecuteA | shell32.dll | 0 (not reached) |  | OS pass-through | system | files | stub | reports SE_ERR_FNF: nothing to open it with |
| SHGetFolderPathA | shfolder.dll | 1 |  | mod override (mods_registry.cpp) | system | files | stub | answers E_FAIL (a machine without shell folders): the game falls back to its own folder |
| lineAnswer | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineClose | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineGetDevCaps | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineGetID | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineInitialize | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineMakeCall | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineNegotiateAPIVersion | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineOpen | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| lineShutdown | tapi32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| wsprintfA | user32.dll | 0 (not reached) |  | OS pass-through | text | text | implemented |  |
| wvsprintfA | user32.dll | 1 |  | OS pass-through | text | text | implemented |  |
| AdjustWindowRect | user32.dll | 1 |  | mod override (mods_system.cpp) | user32 | window | implemented | overridden by the window-fit mod; Level A uses classic non-client metrics |
| BeginPaint | user32.dll | 1 |  | OS pass-through | user32 | window | implemented | nothing is drawn through GDI: the paint structure covers the client area and the device context is a token |
| CreateWindowExA | user32.dll | 1 |  | mod override (mods_system.cpp) | user32 | window | implemented | overridden by the window-fit mod (borderless, scaled, windowed); Level A creates a table entry |
| DefWindowProcA | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| DestroyWindow | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| DispatchMessageA | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| EndPaint | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| GetClientRect | user32.dll | 3 |  | OS pass-through | user32 | window | implemented |  |
| GetCursorPos | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| GetDesktopWindow | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| GetForegroundWindow | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| GetMessageA | user32.dll | 0 (not reached) |  | OS pass-through | user32 | window | implemented |  |
| GetSystemMetrics | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| GetWindowRect | user32.dll | 3 |  | OS pass-through | user32 | window | implemented |  |
| IsIconic | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| LoadCursorA | user32.dll | 2 |  | OS pass-through | user32 | window | implemented |  |
| LoadIconA | user32.dll | 2 |  | OS pass-through | user32 | window | implemented |  |
| MessageBoxA | user32.dll | 0 (not reached) |  | OS pass-through | user32 | window | partial | headless: the text is logged and the default button answers |
| PeekMessageA | user32.dll | 2 |  | OS pass-through | user32 | window | implemented |  |
| PostMessageA | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| PostQuitMessage | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| PostThreadMessageA | user32.dll | 0 (not reached) |  | OS pass-through | user32 | window | implemented |  |
| RegisterClassExA | user32.dll | 1 |  | bridge | user32 | window | implemented | a guest WNDPROC is replaced by one of 8 native trampolines (bridge); Level A takes the guest procedure as an opaque id |
| ReleaseCapture | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| SetActiveWindow | user32.dll | 0 (not reached) |  | OS pass-through | user32 | window | implemented |  |
| SetCapture | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| SetCursor | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| SetFocus | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| SetForegroundWindow | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| SetRect | user32.dll | 0 (not reached) |  | OS pass-through | user32 | window | implemented |  |
| SetWindowLongA | user32.dll | 1 |  | mod override (mods_system.cpp) | user32 | window | implemented | overridden by the window-fit mod |
| ShowCursor | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| ShowWindow | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| TranslateMessage | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| UnregisterClassA | user32.dll | 0 (not reached) |  | OS pass-through | user32 | window | implemented |  |
| UpdateWindow | user32.dll | 1 |  | OS pass-through | user32 | window | implemented |  |
| timeBeginPeriod | winmm.dll | 2 |  | OS pass-through | time | time | implemented |  |
| timeEndPeriod | winmm.dll | 1 |  | OS pass-through | time | time | implemented |  |
| timeGetDevCaps | winmm.dll | 1 |  | OS pass-through | time | time | implemented |  |
| timeGetTime | winmm.dll | 8 | 149.3 | OS pass-through | time | time | partial |  |
| timeKillEvent | winmm.dll | 0 (not reached) |  | bridge | loader | timers | implemented |  |
| timeSetEvent | winmm.dll | 1 |  | bridge | loader | timers | implemented | Level A serialises callbacks like the multimedia timer thread; the bridge keeps it (guest CPU contexts) |
| WSACleanup | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| WSAGetLastError | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| WSAIoctl | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| WSAStartup | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| accept | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| bind | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| closesocket | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| connect | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| gethostbyname | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| gethostname | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| getpeername | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| getsockname | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| ioctlsocket | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| listen | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| recv | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| recvfrom | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| select | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| send | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| sendto | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| setsockopt | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| shutdown | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
| socket | ws2_32.dll | 0 (not reached) |  | OS pass-through | traps | net | trap |  |
