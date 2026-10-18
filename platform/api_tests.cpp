// Platform API tests: the interfaces against the null implementations, the Win32 display/window against the real OS (no graphics,
// no game), and the service registry.
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include "platform/null/null_platform.hpp"
#include "platform/services.hpp"
#include "platform/win32/win32_services.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace nfsu2::platform;

#define CHECK(cond) do { if (!(cond)) throw std::runtime_error(std::string(__FILE__) + ":" + std::to_string(__LINE__) + " " #cond); } while (0)

namespace {

void null_display_and_window() {
    null::NullDisplay display(1920, 1080, 144);
    null::NullWindow window;
    set_services({&display, &window});
    auto all = services().display->list(true);
    CHECK(all.size() == 1 && all[0].primary && all[0].modes.size() == 2);
    CHECK(primary_display(all)->current.refresh_millihertz == 144000);
    CHECK(services().display->list(false)[0].modes.empty());
    services().display->set_dpi_aware();
    CHECK(display.dpi_aware);

    CHECK(!services().window->adopted());
    CHECK(services().window->adopt({NativeSurface::Kind::win32_hwnd, reinterpret_cast<void*>(0x1234), nullptr}) == Status::ok);
    CHECK(services().window->adopted() && services().window->native_surface().a == reinterpret_cast<void*>(0x1234));
    services().window->place_client_centered(800, 600, 1920, 1080, true);
    const Rect outer = services().window->outer_rect();
    CHECK(outer.left == 560 && outer.top == 240 && outer.right == 1360 && outer.bottom == 840 && window.shown);
    window.events.push_back({EventKind::resized, 800, 600});
    window.events.push_back({EventKind::close, 0, 0});
    WindowEvent events[4];
    CHECK(services().window->poll_events(events) == 2 && events[0].kind == EventKind::resized && events[1].kind == EventKind::close);
    set_services({});
}

void null_device_and_gpu() {
    using namespace d3d9;
    null::NullDevice device;
    auto texture = device.create_texture(64, 64, 1, 0, 21, 1);
    auto buffer = device.create_vertex_buffer(256, 0, 0, 0);
    CHECK(texture && buffer && texture.value != TextureId{} && buffer.value);
    auto locked = device.lock_buffer(buffer.value, 16, 64, lock_discard);
    CHECK(locked && locked.value.data);
    CHECK(!device.lock_buffer(buffer.value, 250, 64, 0));          // beyond the end
    CHECK(device.unlock_buffer(buffer.value) == Status::ok);
    CHECK(device.live_resources() == 2);
    device.destroy(buffer.value);
    CHECK(device.unlock_buffer(buffer.value) == Status::invalid_argument);   // stale handle
    device.draw_indexed(4, 0, 0, 3, 0, 1);
    device.draw_up(4, 1, {}, 12);
    CHECK(device.draws == 2 && device.calls[size_t(Method::draw_indexed)] == 1);
    device.lost = true;
    CHECK(device.test_cooperative_level() == Status::device_lost);
    for (size_t i = 0; i < size_t(Method::count); ++i) {
        const char* name = method_name(Method(i));
        CHECK(name && name[0] != '?');
    }

    null::NullGpu gpu;
    CHECK(gpu.caps().texture_format[size_t(gpu::Format::bc1)]);
    MutableBytes memory;
    auto transient = gpu.allocate_transient(128, memory);
    CHECK(transient && memory.size() == 128);
    gpu::DrawState state;
    gpu.begin_pass({});
    gpu.draw(state);
    gpu.end_pass();
    CHECK(gpu.present(1) == Status::ok && gpu.draws == 1 && gpu.frames == 1 && gpu.transient.empty());
}

void win32_display() {
    auto& display = win32::display();
    const auto with_modes = display.list(true);
    const auto without = display.list(false);
    CHECK(!with_modes.empty() && with_modes.size() == without.size());
    int primaries = 0;
    for (const auto& info : with_modes) primaries += info.primary ? 1 : 0;
    CHECK(primaries == 1);
    for (const auto& info : without) CHECK(info.modes.empty());
    const DisplayInfo* primary = primary_display(with_modes);
    CHECK(primary != nullptr);
    std::cout << "  primary display: " << primary->current.width << "x" << primary->current.height << " @" << primary->current.refresh_millihertz / 1000
              << " Hz, " << primary->modes.size() << " modes, desktop " << primary->desktop_width << "x" << primary->desktop_height << "\n";
}

// A hidden window of our own: the placement and frame code that moved out of the mods must give the client size that was asked for.
void win32_window() {
    HWND hwnd = CreateWindowExA(0, "STATIC", "platform api test", WS_OVERLAPPEDWINDOW, 0, 0, 200, 100, nullptr, nullptr, GetModuleHandleA(nullptr), nullptr);
    if (!hwnd) { std::cout << "  (no desktop: window test skipped)\n"; return; }
    auto& window = win32::window();
    CHECK(window.create("x", 1, 1, WindowMode::windowed, 0) == Status::unsupported);
    CHECK(window.adopt({NativeSurface::Kind::win32_hwnd, hwnd, nullptr}) == Status::ok && window.adopted());
    CHECK(window.adopt({NativeSurface::Kind::xlib_window, hwnd, nullptr}) == Status::invalid_argument);

    window.set_frame({false, true});   // caption + resizable frame
    const LONG framed = GetWindowLongA(hwnd, GWL_STYLE);
    CHECK((framed & WS_CAPTION) == WS_CAPTION && (framed & WS_THICKFRAME) && (framed & WS_MAXIMIZEBOX) && !(framed & (WS_HSCROLL | WS_VSCROLL)));
    window.place_client_centered(320, 240, 1024, 768, false);
    Rect client = window.client_rect();
    CHECK(client.right - client.left == 320 && client.bottom - client.top == 240);
    Rect outer = window.outer_rect();
    CHECK(outer.right - outer.left > 320 && outer.bottom - outer.top > 240);   // the frame is added around the client area

    window.set_frame({true, false});   // borderless: every decoration bit gone
    const LONG bare = GetWindowLongA(hwnd, GWL_STYLE);
    CHECK(!(bare & (WS_CAPTION | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_SYSMENU)));
    window.refresh_frame();
    window.place_outer(10, 20, 400, 300);
    outer = window.outer_rect();
    CHECK(outer.left == 10 && outer.top == 20 && outer.right == 410 && outer.bottom == 320);
    client = window.client_rect();
    CHECK(client.right == 400 && client.bottom == 300);   // borderless: client = outer

    CHECK(window.native_surface().kind == NativeSurface::Kind::win32_hwnd && window.native_surface().a == hwnd);
    window.destroy();
    CHECK(!window.adopted());
    DestroyWindow(hwnd);
}

}  // namespace

int main() try {
    null_display_and_window();
    null_device_and_gpu();
    win32_display();
    win32_window();
    std::cout << "PASS platform api: null display/window/device/gpu, win32 display and window\n";
    return 0;
} catch (const std::exception& e) {
    std::cerr << "FAIL " << e.what() << '\n';
    return 1;
}
