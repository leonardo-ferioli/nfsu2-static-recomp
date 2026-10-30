// The user32 group of the Win32 facade: windows, classes and messages over legacy_win32's WindowSystem, on a host that has no Win32 window system (the 32-bit
// Windows host keeps the real one).
//
// An HWND is a token of the library's handle table, never a system value. The window procedures are the guest's: WindowSystem runs one through the invoker below,
// which makes GuestPlatform::callback call the translated procedure on a guest processor (so GetMessage / DispatchMessage / CreateWindowEx reach the game's own
// WndProc, exactly as on Windows). The platform window and input feed the message queue (WindowSystem::attach_platform); a headless host gets fixtures that report a
// 1280x720 display and produce no events.
#include "win32_facade_internal.hpp"
#include "host_os.hpp"
#include "platform/null/null_platform.hpp"
#include "platform/null/null_services.hpp"
#include <chrono>
#include <thread>

namespace nfsu2raw {
namespace {

// WNDCLASSEXA is 48 bytes: cbSize, style, lpfnWndProc, cbClsExtra, cbWndExtra, hInstance, hIcon, hCursor, hbrBackground, lpszMenuName, lpszClassName, hIconSm.
lw::WndClass read_class(uint32_t at) {
    const uint32_t* w = ptr<const uint32_t>(at);
    lw::WndClass c;
    c.style = w[1]; c.proc = w[2]; c.class_extra = int32_t(w[3]); c.window_extra = int32_t(w[4]); c.instance = w[5]; c.icon = w[6]; c.cursor = w[7]; c.background = w[8];
    if (w[9] >= 0x10000) c.menu_name = cstr(w[9]);
    if (w[10] >= 0x10000) c.name = cstr(w[10]);
    return c;
}
lw::Msg read_msg(uint32_t at) {
    const uint32_t* w = ptr<const uint32_t>(at);          // MSG: hwnd, message, wParam, lParam, time, pt.x, pt.y
    lw::Msg m;
    m.hwnd = w[0]; m.message = w[1]; m.wparam = w[2]; m.lparam = int32_t(w[3]); m.time = w[4]; m.pt_x = int32_t(w[5]); m.pt_y = int32_t(w[6]);
    return m;
}
void write_msg(uint32_t at, const lw::Msg& m) {
    uint32_t* w = ptr<uint32_t>(at);
    w[0] = m.hwnd; w[1] = m.message; w[2] = m.wparam; w[3] = uint32_t(m.lparam); w[4] = m.time; w[5] = uint32_t(m.pt_x); w[6] = uint32_t(m.pt_y);
}
void write_rect(uint32_t at, const lw::Rect32& r) {
    int32_t* w = ptr<int32_t>(at);
    w[0] = r.left; w[1] = r.top; w[2] = r.right; w[3] = r.bottom;
}
lw::Rect32 read_rect(uint32_t at) {
    const int32_t* w = ptr<const int32_t>(at);
    return {w[0], w[1], w[2], w[3]};
}
// A class or resource name argument: a string, or MAKEINTRESOURCE (below 64 KiB) rendered as "#id".
std::string name_or_id(uint32_t value) { return value < 0x10000 ? "#" + std::to_string(value) : cstr(value); }

}  // namespace

void Win32Facade::Impl::install_user32() {
    // The platform side: what the host gave, or fixtures that report a display and never produce an event.
    if (options.window) window = options.window;
    else { window_owned = std::make_unique<plat::null::NullWindow>(); window = window_owned.get(); }
    if (options.display) display = options.display;
    else { display_owned = std::make_unique<plat::null::NullDisplay>(); display = display_owned.get(); }
    plat::Input* input = input_override;
    if (!input) { if (!input_owned) input_owned = std::make_unique<plat::null::NullInput>(); input = input_owned.get(); }

    windows = std::make_unique<lw::WindowSystem>(*clock, *threads, handles, [this] { return sync.current_thread_id(); });
    GuestPlatform* p = &platform;
    windows->set_wndproc_invoker([p](uint32_t proc, lw::Handle hwnd, uint32_t message, uint32_t wparam, int32_t lparam) -> int32_t {
        return int32_t(p->callback(proc, {hwnd, message, wparam, uint32_t(lparam)}));
    });
    windows->attach_platform(window, input, display);

    auto fail_with = [](Cpu& c, uint32_t error) { set_error(c, error); return 0u; };
    if (host_os::environment_set("NFSU2_NUE_WINDOW_TRACE")) {
        for (const auto& d : display->list(false)) {
            char text[200];
            std::snprintf(text, sizeof text, "display %u%s: current %ux%u, desktop %ux%u, scale %.2f", d.id, d.primary ? " (primary)" : "", d.current.width, d.current.height, d.desktop_width, d.desktop_height, double(d.content_scale));
            platform.log_line(std::string("user32: ") + text);
        }
        platform.log_line("user32: screen metrics " + std::to_string(windows->get_system_metrics(0)) + "x" + std::to_string(windows->get_system_metrics(1)));
    }
    // NFSU2_NUE_WINDOW_TRACE=1: the game's calls that decide the platform window (create, show, style, position) with their arguments.
    static const bool trace = host_os::environment_set("NFSU2_NUE_WINDOW_TRACE");
    auto note = [this](const char* format, uint32_t a = 0, uint32_t b = 0, uint32_t c2 = 0, uint32_t d = 0, uint32_t e = 0, uint32_t f = 0) {
        char text[200];
        std::snprintf(text, sizeof text, format, a, b, c2, d, e, f);
        platform.log_line(std::string("user32: ") + text);
    };

    // ---- classes and windows
    on("RegisterClassExA", 1, [this](Cpu& c) -> uint32_t {
        auto r = windows->register_class(read_class(arg(c, 0)));
        if (!r) { set_error(c, r.error); return 0u; }
        return r.value;
    });
    on("UnregisterClassA", 2, [this](Cpu& c) -> uint32_t {
        auto r = windows->unregister_class(name_or_id(arg(c, 0)));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("CreateWindowExA", 12, [this, note](Cpu& c) -> uint32_t {
        lw::CreateParams cp;
        cp.ex_style = arg(c, 0);
        cp.class_name = name_or_id(arg(c, 1));
        if (arg(c, 2)) cp.title = cstr(arg(c, 2));
        cp.style = arg(c, 3);
        cp.x = int32_t(arg(c, 4)); cp.y = int32_t(arg(c, 5)); cp.width = int32_t(arg(c, 6)); cp.height = int32_t(arg(c, 7));
        cp.parent = arg(c, 8); cp.menu = arg(c, 9); cp.instance = arg(c, 10); cp.param = arg(c, 11);
        auto r = windows->create_window(cp);
        if (trace) note("CreateWindowExA style 0x%x ex 0x%x at %d,%d size %dx%d", cp.style, cp.ex_style, uint32_t(cp.x), uint32_t(cp.y), uint32_t(cp.width), uint32_t(cp.height));
        if (trace) note("  parent %x (the desktop window is %x)", cp.parent, windows->get_desktop_window());
        if (!r) { set_error(c, r.error); return 0u; }
        return r.value;
    });
    on("DestroyWindow", 1, [this](Cpu& c) -> uint32_t { auto r = windows->destroy_window(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("ShowWindow", 2, [this, note](Cpu& c) -> uint32_t {
        auto r = windows->show_window(arg(c, 0), arg(c, 1));
        if (trace) { auto rect = windows->get_window_rect(arg(c, 0)); auto style = windows->get_window_long(arg(c, 0), -16); note("ShowWindow %x command %u: style 0x%x rect left %d top %d right %d", arg(c, 0), arg(c, 1), uint32_t(style.value), uint32_t(rect.value.left), uint32_t(rect.value.top), uint32_t(rect.value.right)); }
        if (!r) { set_error(c, r.error); return 0u; }
        return r.value ? 1u : 0u;
    });
    on("UpdateWindow", 1, [this](Cpu& c) -> uint32_t { auto r = windows->update_window(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("IsIconic", 1, [this](Cpu& c) -> uint32_t { auto r = windows->is_iconic(arg(c, 0)); return r && r.value ? 1u : 0u; });
    on("GetWindowRect", 2, [this](Cpu& c) -> uint32_t { auto r = windows->get_window_rect(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } write_rect(arg(c, 1), r.value); return 1u; });
    on("GetClientRect", 2, [this](Cpu& c) -> uint32_t { auto r = windows->get_client_rect(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } write_rect(arg(c, 1), r.value); return 1u; });
    on("AdjustWindowRect", 3, [](Cpu& c) -> uint32_t {
        write_rect(arg(c, 0), lw::WindowSystem::adjust_window_rect(read_rect(arg(c, 0)), arg(c, 1), arg(c, 2) != 0, 0));
        return 1u;
    });
    on("SetRect", 5, [](Cpu& c) -> uint32_t { write_rect(arg(c, 0), {int32_t(arg(c, 1)), int32_t(arg(c, 2)), int32_t(arg(c, 3)), int32_t(arg(c, 4))}); return 1u; });
    on("SetWindowLongA", 3, [this, note](Cpu& c) -> uint32_t {
        auto r = windows->set_window_long(arg(c, 0), int32_t(arg(c, 1)), int32_t(arg(c, 2)));
        if (trace) note("SetWindowLongA %x index %d value 0x%x", arg(c, 0), arg(c, 1), arg(c, 2));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("GetSystemMetrics", 1, [this](Cpu& c) -> uint32_t { return uint32_t(windows->get_system_metrics(int32_t(arg(c, 0)))); });
    on("GetDesktopWindow", 0, [this](Cpu&) -> uint32_t { return windows->get_desktop_window(); });

    // ---- focus and activation
    on("SetFocus", 1, [this](Cpu& c) -> uint32_t { return windows->set_focus(arg(c, 0)); });
    on("SetActiveWindow", 1, [this](Cpu& c) -> uint32_t { return windows->set_active_window(arg(c, 0)); });
    on("SetForegroundWindow", 1, [this](Cpu& c) -> uint32_t { auto r = windows->set_foreground_window(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("GetForegroundWindow", 0, [this](Cpu&) -> uint32_t { return windows->get_foreground_window(); });

    // ---- the message loop. GetMessage waits in slices so that a stopping platform ends it, as every other wait of the facade.
    on("GetMessageA", 4, [this](Cpu& c) -> uint32_t {
        lw::Msg m;
        for (;;) {
            auto r = windows->peek_message(m, arg(c, 1), arg(c, 2), arg(c, 3), lw::pm::remove);
            if (!r) { set_error(c, r.error); return 0xFFFFFFFFu; }
            if (r.value) break;
            platform.throw_if_stopping("GetMessage");
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
        write_msg(arg(c, 0), m);
        return m.message == lw::wm::quit ? 0u : 1u;
    });
    on("PeekMessageA", 5, [this](Cpu& c) -> uint32_t {
        lw::Msg m;
        auto r = windows->peek_message(m, arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4));
        if (!r) { set_error(c, r.error); return 0u; }
        if (!r.value) return 0u;
        write_msg(arg(c, 0), m);
        return 1u;
    });
    on("TranslateMessage", 1, [this](Cpu& c) -> uint32_t { return windows->translate_message(read_msg(arg(c, 0))) ? 1u : 0u; });
    on("DispatchMessageA", 1, [this](Cpu& c) -> uint32_t { return uint32_t(windows->dispatch_message(read_msg(arg(c, 0)))); });
    on("DefWindowProcA", 4, [this](Cpu& c) -> uint32_t { return uint32_t(windows->def_window_proc(arg(c, 0), arg(c, 1), arg(c, 2), int32_t(arg(c, 3)))); });
    on("PostMessageA", 4, [this](Cpu& c) -> uint32_t { auto r = windows->post_message(arg(c, 0), arg(c, 1), arg(c, 2), int32_t(arg(c, 3))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("PostThreadMessageA", 4, [this](Cpu& c) -> uint32_t { auto r = windows->post_thread_message(arg(c, 0), arg(c, 1), arg(c, 2), int32_t(arg(c, 3))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("PostQuitMessage", 1, [this](Cpu& c) -> uint32_t { windows->post_quit_message(int32_t(arg(c, 0))); return 0u; });

    // ---- painting: nothing is drawn through GDI on this host; the paint structure says the whole client area is to be painted and the device context is a token
    on("BeginPaint", 2, [this](Cpu& c) -> uint32_t {
        auto r = windows->get_client_rect(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        uint32_t* ps = ptr<uint32_t>(arg(c, 1));                             // PAINTSTRUCT: hdc, fErase, rcPaint, fRestore, fIncUpdate, rgbReserved[32]
        std::memset(ps, 0, 64);
        ps[0] = 0xD0000000u | (arg(c, 0) & 0x00FFFFFFu);
        write_rect(arg(c, 1) + 8, r.value);
        return ps[0];
    });
    on("EndPaint", 2, [this](Cpu& c) -> uint32_t { return windows->is_window(arg(c, 0)) ? 1u : 0u; });

    // ---- the cursor and the mouse
    on("GetCursorPos", 1, [this](Cpu& c) -> uint32_t {
        int32_t x = 0, y = 0;
        if (!windows->get_cursor_pos(x, y)) return 0u;
        ptr<int32_t>(arg(c, 0))[0] = x; ptr<int32_t>(arg(c, 0))[1] = y;
        return 1u;
    });
    on("SetCursor", 1, [this](Cpu& c) -> uint32_t { return windows->set_cursor(arg(c, 0)); });
    on("ShowCursor", 1, [this](Cpu& c) -> uint32_t { return uint32_t(windows->show_cursor(arg(c, 0) != 0)); });
    on("SetCapture", 1, [this](Cpu& c) -> uint32_t { return windows->set_capture(arg(c, 0)); });
    on("ReleaseCapture", 0, [this](Cpu&) -> uint32_t { return windows->release_capture() ? 1u : 0u; });
    on("LoadCursorA", 2, [this](Cpu& c) -> uint32_t { return windows->load_cursor(arg(c, 0), name_or_id(arg(c, 1))); });
    on("LoadIconA", 2, [this](Cpu& c) -> uint32_t { return windows->load_icon(arg(c, 0), name_or_id(arg(c, 1))); });

    // ---- MessageBox: there is nobody to answer. The text goes to the log and the dialog is answered with its default button.
    on("MessageBoxA", 4, [this](Cpu& c) -> uint32_t {
        const uint32_t type = arg(c, 3);
        platform.log_line("MessageBoxA(\"" + (arg(c, 2) ? cstr(arg(c, 2)) : std::string()) + "\"): " + (arg(c, 1) ? cstr(arg(c, 1)) : std::string()));
        static const uint32_t default_button[] = {1 /* OK */, 1 /* OK */, 3 /* ABORT */, 6 /* YES */, 6 /* YES */, 4 /* RETRY */, 2 /* CANCEL */};
        return default_button[std::min<uint32_t>(type & 0xF, 6)];
    });
    (void)fail_with;
}

}  // namespace nfsu2raw
