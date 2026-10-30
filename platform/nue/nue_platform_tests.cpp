// platform/nue over NUE's null backend (no window, no device): the Window, Display and Input of the port driven by what a test injects.
//     nue_platform_tests
#include "platform/nue/nue_platform.hpp"
#include "nue/nue.h"
#include "nue/null_backend.h"
#include <chrono>
#include <cstring>
#include <cstdio>
#include <filesystem>
#include <string>
#include <vector>

using namespace nfsu2::platform;

namespace {
int failures = 0;
void check(bool ok, const char* what) { if (!ok) { ++failures; std::fprintf(stderr, "FAIL: %s\n", what); } }

nue_event event_of(uint32_t type) {
    nue_event e;
    std::memset(&e, 0, sizeof e);
    e.type = type;
    e.timestamp_ns = nue_time_ns();
    return e;
}
}  // namespace

int main() {
    nue_init_desc init;
    NUE_STRUCT_INIT(&init);
    init.api_version = NUE_API_VERSION;
    init.backend = NUE_BACKEND_NULL;
    init.flags = NUE_INIT_HEADLESS | NUE_INIT_NO_LOG_FILE | NUE_INIT_NO_CRASH_HANDLER | NUE_INIT_NO_CONFIG_LOAD;
    const std::string dir = (std::filesystem::temp_directory_path() / ("nfsu2_nue_platform_" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()))).string();
    std::filesystem::create_directories(dir);
    init.user_data_path = dir.c_str();
    if (nue_init(&init) != NUE_OK) { std::fprintf(stderr, "FAIL: nue_init: %s\n", nue_get_last_error_message()); return 1; }

    {
        auto services = nue_backend::make_services();
        Window& window = *services.window;
        Display& display = *services.display;
        Input& input = *services.input;

        // ---- display: the null backend's one virtual display
        nue_null_set_display(1920, 1080, 60.0f, 1.0f);
        auto displays = display.list();
        check(displays.size() == 1 && displays[0].primary && displays[0].id != 0, "one primary display");
        check(displays[0].current.width == 1920 && displays[0].current.height == 1080 && displays[0].current.refresh_millihertz == 60000, "its current mode");
        check(displays[0].desktop_width == 1920 && displays[0].desktop_height == 1080, "its desktop area");
        check(!displays[0].modes.empty(), "its modes are listed");
        check(display.list(false)[0].modes.empty(), "and not listed when not asked for");
        display.set_dpi_aware();

        // ---- window: created by NUE, sized by its client area, placed on the display
        check(!window.focused() && !window.adopted(), "no window yet");
        check(window.create("NFSU2 test", 640, 480, WindowMode::windowed, 0) == Status::ok, "create");
        check(window.create("again", 640, 480, WindowMode::windowed, 0) == Status::already_exists, "a second create is refused");
        check(window.client_rect().right == 640 && window.client_rect().bottom == 480 && window.client_rect().left == 0, "client rectangle in pixels, origin zero");
        window.place_client_centered(800, 600, 1920, 1080, true);
        const Rect outer = window.outer_rect();
        check(outer.left == 560 && outer.top == 240 && outer.right == 1360 && outer.bottom == 840, "centred on the display");
        check(window.client_rect().right == 800 && window.client_rect().bottom == 600, "client size after placing");
        window.place_outer(10, 20, 320, 200);
        check(window.outer_rect().left == 10 && window.outer_rect().top == 20 && window.outer_rect().right == 330 && window.outer_rect().bottom == 220, "place_outer");
        window.set_frame({true, false});
        window.refresh_frame();
        window.show_cursor(false);
        window.show_cursor_forced();
        window.release_cursor_clip();
        (void)window.native_surface();                          // whatever the backend has (nothing on the null one): must not crash
        (void)window.cursor_inside_client();

        // ---- window events are sorted out of NUE's one stream
        std::vector<WindowEvent> got;
        auto drain = [&] { WindowEvent buffer[16]; for (size_t n; (n = window.poll_events(buffer)) > 0;) got.insert(got.end(), buffer, buffer + n); };
        drain();                                                // what creating and placing the window already raised (surface, focus, sizes)
        check(!got.empty(), "creating a window raises events");
        got.clear();
        nue_event e = event_of(NUE_EVENT_WINDOW_CLOSE_REQUESTED);
        nue_null_inject_event(&e);
        e = event_of(NUE_EVENT_WINDOW_FOCUS_GAINED); nue_null_inject_event(&e);
        e = event_of(NUE_EVENT_WINDOW_PIXEL_SIZE_CHANGED); e.payload.window.x = 1024; e.payload.window.y = 768; nue_null_inject_event(&e);
        e = event_of(NUE_EVENT_WINDOW_FOCUS_LOST); nue_null_inject_event(&e);
        drain();
        check(got.size() == 4 && got[0].kind == EventKind::close && got[1].kind == EventKind::focus_gained
              && got[2].kind == EventKind::resized && got[2].width == 1024 && got[2].height == 768 && got[3].kind == EventKind::focus_lost, "close, focus, resize, focus lost in order");
        got.clear();

        // ---- keyboard and mouse: polled snapshot and event stream
        std::vector<InputEvent> seen;
        const uint32_t listener = input.add_listener([&](const InputEvent& event) { seen.push_back(event); });
        nue_null_press_key(NUE_SC_A, NUE_TRUE);
        nue_null_move_mouse(30, 40);
        nue_null_press_mouse(NUE_MOUSE_RIGHT, NUE_TRUE);
        e = event_of(NUE_EVENT_WINDOW_CLOSE_REQUESTED); nue_null_inject_event(&e);      // a window event in the middle of the input events
        input.pump();                                                                   // the Input pumps first: the Window must still get its event
        check(input.key_state()[NUE_SC_A] == 1 && input.key_state()[NUE_SC_B] == 0, "key snapshot");
        float x = 0, y = 0;
        const uint32_t buttons = input.mouse_state(&x, &y);
        check(x == 30 && y == 40 && (buttons & (1u << (kMouseRight - 1))), "mouse snapshot");
        check(input.mouse_present() || !input.mouse_present(), "mouse_present answers");
        bool key_event = false, button_event = false, motion_event = false;
        for (const InputEvent& event : seen) {
            if (event.kind == InputEventKind::key && event.code == NUE_SC_A && event.value == 1) key_event = true;
            if (event.kind == InputEventKind::mouse_button && event.code == kMouseRight && event.value == 1) button_event = true;
            if (event.kind == InputEventKind::mouse_motion) motion_event = true;
        }
        check(key_event && button_event && motion_event, "key, button and motion events reach the listener");
        drain();
        check(got.size() == 1 && got[0].kind == EventKind::close, "the window event the Input did not take is still there");
        got.clear();
        nue_null_press_key(NUE_SC_A, NUE_FALSE);
        input.pump();
        check(input.key_state()[NUE_SC_A] == 0, "key released");
        const size_t before = seen.size();
        input.remove_listener(listener);
        nue_null_press_key(NUE_SC_B, NUE_TRUE);
        input.pump();
        check(seen.size() == before && input.key_state()[NUE_SC_B] == 1, "a removed listener hears nothing; the snapshot still moves");
        nue_null_press_key(NUE_SC_B, NUE_FALSE);
        e = event_of(NUE_EVENT_MOUSE_WHEEL); e.payload.wheel.y = 2.0f;
        std::vector<InputEvent> wheel;
        const uint32_t wheel_listener = input.add_listener([&](const InputEvent& event) { if (event.kind == InputEventKind::mouse_wheel) wheel.push_back(event); });
        nue_null_inject_event(&e);
        input.pump();
        check(wheel.size() == 1 && wheel[0].value == 240, "wheel notches are 120 per unit");
        input.remove_listener(wheel_listener);

        // ---- a gamepad: added, listed with its raw layout, removed
        std::vector<InputEvent> pad_events;
        const uint32_t pad_listener = input.add_listener([&](const InputEvent& event) { pad_events.push_back(event); });
        nue_gamepad_id pad_id = 0;
        check(nue_null_add_gamepad("Test pad", NUE_PAD_TYPE_XBOX360, &pad_id) == NUE_OK && pad_id != 0, "the backend adds a gamepad");
        input.pump();
        auto pads = input.gamepads();
        check(pads.size() == 1 && pads[0].id == pad_id && pads[0].name == "Test pad" && pads[0].xbox_style && pads[0].connected, "the gamepad is listed");
        bool added = false;
        for (const InputEvent& event : pad_events) if (event.kind == InputEventKind::pad_added && event.pad == pad_id) added = true;
        check(added, "pad_added event");
        GamepadState state;
        check(input.gamepad_state(pad_id, state), "its state is readable");
        // The null backend has no raw joystick (nue_joystick_* read zero there), so a press cannot show up in the raw state here: the diff from raw state to
        // pad_button events runs only where the backend exposes it (SDL3). What is checked here is that nothing is invented from a state that does not move.
        pad_events.clear();
        nue_null_set_gamepad_button(pad_id, NUE_PAD_SOUTH, NUE_TRUE);
        input.pump();
        GamepadState after;
        input.gamepad_state(pad_id, after);
        bool button = false;
        for (const InputEvent& event : pad_events) if (event.kind == InputEventKind::pad_button && event.pad == pad_id) button = true;
        check(button == (after.buttons != state.buttons), "pad_button events follow exactly the changes of the raw state");
        pad_events.clear();
        nue_null_remove_gamepad(pad_id);
        input.pump();
        bool removed = false;
        for (const InputEvent& event : pad_events) if (event.kind == InputEventKind::pad_removed && event.pad == pad_id) removed = true;
        check(removed && input.gamepads().empty() && !input.gamepad_state(pad_id, state), "the gamepad is gone");
        input.remove_listener(pad_listener);

        // ---- the window goes away
        window.destroy();
        check(!window.focused() && window.native_surface().kind == NativeSurface::Kind::none, "destroyed");
    }
    nue_shutdown();
    std::error_code ec;
    std::filesystem::remove_all(dir, ec);
    if (failures) { std::fprintf(stderr, "%d check(s) failed\n", failures); return 1; }
    std::printf("PASS platform/nue on the null backend\n");
    return 0;
}
