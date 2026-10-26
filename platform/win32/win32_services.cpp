// Win32 Display and Window: the Windows calls of the mods, moved here unchanged (mods_system.cpp, mods_resolution.cpp, launcher.cpp).
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include "platform/win32/win32_services.hpp"
#include <algorithm>
#include <cstring>

namespace nfsu2::platform::win32 {
namespace {

class Win32Display final : public Display {
public:
    std::vector<DisplayInfo> list(bool include_modes) override {
        std::vector<DisplayInfo> out;
        DISPLAY_DEVICEA device{};
        device.cb = sizeof(device);
        for (DWORD d = 0; EnumDisplayDevicesA(nullptr, d, &device, 0); ++d) {
            DisplayInfo info;
            info.id = d;
            info.name = device.DeviceName;
            info.primary = (device.StateFlags & DISPLAY_DEVICE_PRIMARY_DEVICE) != 0;
            // The game's resolution list takes the modes of the primary device (EnumDisplaySettingsA(nullptr, ...)) once per monitor
            // attached to the device; a device without a monitor contributes none.
            DISPLAY_DEVICEA monitor{};
            monitor.cb = sizeof(monitor);
            if (include_modes && EnumDisplayDevicesA(device.DeviceName, 0, &monitor, 0)) {
                const char* name = info.primary ? nullptr : device.DeviceName;
                DEVMODEA mode{};
                mode.dmSize = sizeof(mode);
                for (DWORD i = 0; EnumDisplaySettingsA(name, i, &mode); ++i)
                    info.modes.push_back({uint32_t(mode.dmPelsWidth), uint32_t(mode.dmPelsHeight), uint32_t(mode.dmDisplayFrequency) * 1000u});
            }
            out.push_back(std::move(info));
            device.cb = sizeof(device);
        }
        // The primary display's size and refresh rate, found the way the mods always did: the monitor of the desktop window, its current
        // mode (or, failing that, its rectangle), and the current refresh rate of the primary device.
        HMONITOR monitor = MonitorFromWindow(GetDesktopWindow(), MONITOR_DEFAULTTONEAREST);
        MONITORINFOEXA monitor_info{};
        monitor_info.cbSize = sizeof(monitor_info);
        GetMonitorInfoA(monitor, &monitor_info);
        DisplayInfo* primary = nullptr;
        for (auto& info : out) if (info.primary) { primary = &info; break; }
        if (!primary) {
            if (out.empty()) { out.emplace_back(); out.back().primary = true; }
            else out.front().primary = true;
            primary = &out.front();
        }
        DEVMODEA current{};
        current.dmSize = sizeof(current);
        if (EnumDisplaySettingsA(monitor_info.szDevice, ENUM_CURRENT_SETTINGS, &current)) {
            primary->current.width = uint32_t(current.dmPelsWidth);
            primary->current.height = uint32_t(current.dmPelsHeight);
        } else {
            primary->current.width = uint32_t(monitor_info.rcMonitor.right - monitor_info.rcMonitor.left);
            primary->current.height = uint32_t(monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top);
        }
        primary->desktop_width = uint32_t(monitor_info.rcMonitor.right - monitor_info.rcMonitor.left);
        primary->desktop_height = uint32_t(monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top);
        DEVMODEA refresh{};
        refresh.dmSize = sizeof(refresh);
        if (EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &refresh)) primary->current.refresh_millihertz = uint32_t(refresh.dmDisplayFrequency) * 1000u;
        return out;
    }
    void set_dpi_aware() override { SetProcessDPIAware(); }
};

class Win32Window final : public Window {
public:
    Status create(std::string_view, uint32_t, uint32_t, WindowMode, uint32_t) override { return Status::unsupported; }   // the guest creates its window
    Status adopt(NativeSurface existing) override {
        if (existing.kind != NativeSurface::Kind::win32_hwnd) return Status::invalid_argument;
        hwnd = static_cast<HWND>(existing.a);
        return Status::ok;
    }
    bool adopted() override { return hwnd != nullptr; }
    void destroy() override { hwnd = nullptr; }   // the guest destroys its window
    NativeSurface native_surface() override { return {NativeSurface::Kind::win32_hwnd, hwnd, nullptr}; }

    void set_frame(FrameStyle frame) override {
        LONG style = GetWindowLongA(hwnd, GWL_STYLE);
        style &= ~(WS_HSCROLL | WS_VSCROLL);
        if (frame.borderless) {
            style &= ~(WS_CAPTION | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_SYSMENU);
        } else {
            style |= (WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU);
            if (frame.resizable) style |= (WS_MAXIMIZEBOX | WS_THICKFRAME);
        }
        SetWindowLongA(hwnd, GWL_STYLE, style);
    }
    void refresh_frame() override { SetWindowPos(hwnd, nullptr, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER | SWP_FRAMECHANGED); }
    void place_outer(int32_t x, int32_t y, int32_t width, int32_t height) override {
        SetWindowPos(hwnd, nullptr, x, y, width, height, SWP_NOZORDER | SWP_FRAMECHANGED);
    }
    void place_client_centered(int32_t client_width, int32_t client_height, int32_t display_width, int32_t display_height, bool show) override {
        const LONG style = GetWindowLongA(hwnd, GWL_STYLE), ex_style = GetWindowLongA(hwnd, GWL_EXSTYLE);
        RECT rect = {0, 0, client_width, client_height};   // outer size such that the client area is the wanted size
        AdjustWindowRectEx(&rect, style, FALSE, ex_style);
        const int x = (display_width - client_width) / 2 + rect.left, y = (display_height - client_height) / 2 + rect.top;
        if (show) SetWindowPos(hwnd, HWND_NOTOPMOST, x, y, rect.right - rect.left, rect.bottom - rect.top, SWP_SHOWWINDOW);
        else SetWindowPos(hwnd, nullptr, x, y, rect.right - rect.left, rect.bottom - rect.top, SWP_NOZORDER | SWP_FRAMECHANGED);
    }
    Rect outer_rect() override {
        RECT r{};
        GetWindowRect(hwnd, &r);
        return {r.left, r.top, r.right, r.bottom};
    }
    Rect client_rect() override {
        RECT r{};
        GetClientRect(hwnd, &r);
        return {r.left, r.top, r.right, r.bottom};
    }

    bool cursor_inside_client() override {
        POINT point;
        GetCursorPos(&point);
        RECT client;
        GetClientRect(hwnd, &client);
        MapWindowPoints(hwnd, nullptr, reinterpret_cast<POINT*>(&client), 2);
        return PtInRect(&client, point) != FALSE;
    }
    void show_cursor(bool show) override { ShowCursor(show ? TRUE : FALSE); }
    void show_cursor_forced() override {
        int count;
        do { count = ShowCursor(TRUE); } while (count < 0);
    }
    void release_cursor_clip() override { ClipCursor(nullptr); }
    bool focused() override { return hwnd && GetForegroundWindow() == hwnd; }
    size_t poll_events(std::span<WindowEvent>) override { return 0; }   // the guest pumps its own messages

private:
    HWND hwnd = nullptr;
};

}  // namespace

Display& display() { static Win32Display instance; return instance; }
Window& window() { static Win32Window instance; return instance; }

}  // namespace nfsu2::platform::win32
