#pragma once
// The Win32 numbers the mods speak with the guest (window styles, messages, keys, shell folders, results), for a host without windows.h (plan H3).
// On Windows they come from windows.h itself; the values below are the documented Win32 ones, which the guest relies on whatever the host is.
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <shlobj.h>
#else
#include <cstdint>

// Window styles and SetWindowLong indices.
constexpr uint32_t WS_POPUP = 0x80000000u, WS_CAPTION = 0x00C00000u, WS_SYSMENU = 0x00080000u, WS_THICKFRAME = 0x00040000u,
                   WS_MINIMIZEBOX = 0x00020000u, WS_MAXIMIZEBOX = 0x00010000u;
constexpr int GWL_STYLE = -16;
// Messages and keys.
constexpr uint32_t WM_SIZE = 0x0005, WM_SYSKEYDOWN = 0x0104;
constexpr uint32_t VK_MENU = 0x12;
inline constexpr uint32_t LOWORD(uint32_t v) { return v & 0xffffu; }
inline constexpr uint32_t HIWORD(uint32_t v) { return (v >> 16) & 0xffffu; }
// Shell folders and results.
constexpr int CSIDL_LOCAL_APPDATA = 0x001c, CSIDL_FLAG_CREATE = 0x8000;
constexpr uint32_t S_OK = 0, E_FAIL = 0x80004005u;
#endif
