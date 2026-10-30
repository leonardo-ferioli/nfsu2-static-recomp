#include "platform/nue/nue_platform.hpp"
#include "nue/nue.h"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <map>
#include <span>
#include <mutex>
#include <string>
#include <utility>
#include <vector>

namespace nfsu2::platform::nue_backend {
namespace {

Status status_from(nue_result r) {
    if (r >= 0) return Status::ok;
    switch (r) {
    case NUE_ERR_INVALID_ARGUMENT: case NUE_ERR_INVALID_HANDLE: case NUE_ERR_BAD_STATE: case NUE_ERR_WRONG_THREAD: return Status::invalid_argument;
    case NUE_ERR_NOT_FOUND: return Status::not_found;
    case NUE_ERR_ALREADY_EXISTS: return Status::already_exists;
    case NUE_ERR_UNSUPPORTED: return Status::unsupported;
    case NUE_ERR_OUT_OF_MEMORY: return Status::out_of_memory;
    case NUE_ERR_TIMEOUT: return Status::timed_out;
    case NUE_ERR_WOULD_BLOCK: case NUE_ERR_BUSY: return Status::would_block;
    case NUE_ERR_DEVICE_LOST: return Status::device_lost;
    default: return Status::io_error;
    }
}

// NFSU2_NUE_INPUT_TRACE=1: every key event NUE delivers is written to stderr, to see whether a key press reaches the layer at all.
bool trace_input() {
    static const bool on = std::getenv("NFSU2_NUE_INPUT_TRACE") != nullptr;
    return on;
}

// NFSU2_NUE_WINDOW_TRACE=1: what the Win32 layer asks of the NUE window (mode, frame, size) and what NUE answers, one line each.
bool trace_window() {
    static const bool on = std::getenv("NFSU2_NUE_WINDOW_TRACE") != nullptr;
    return on;
}

// ------------------------------------------------------------------------------------------------------------------------------------ event hub
class Hub {
public:
    // Pulls NUE's stream once and sorts it. nue_pump_events is only legal on the event thread; elsewhere this only sorts what was already queued... by nobody:
    // events reach the hub only from the event thread's pumps, so a worker thread sees them at its next call after one.
    void pump() {
        if (!nue_is_event_thread()) return;
        nue_pump_events();
        nue_event e;
        while (nue_poll_event(&e)) sort(e);
    }
    bool pop_window(WindowEvent& out) {
        std::lock_guard lock(m_);
        if (window_.empty()) return false;
        out = window_.front();
        window_.pop_front();
        return true;
    }
    std::vector<InputEvent> take_input() {
        std::lock_guard lock(m_);
        std::vector<InputEvent> out;
        out.swap(input_);
        return out;
    }

private:
    void window_event(EventKind kind, uint32_t w = 0, uint32_t h = 0) {
        WindowEvent e;
        e.kind = kind; e.width = w; e.height = h;
        std::lock_guard lock(m_);
        window_.push_back(e);
        if (window_.size() > 1024) window_.pop_front();
    }
    void input_event(InputEventKind kind, int64_t time_ns, uint32_t code, int32_t value, int32_t value2 = 0) {
        InputEvent e;
        e.kind = kind; e.time_ns = time_ns; e.code = code; e.value = value; e.value2 = value2;
        std::lock_guard lock(m_);
        input_.push_back(e);
        if (input_.size() > 65536) input_.erase(input_.begin(), input_.begin() + 32768);
    }
    void sort(const nue_event& e) {
        switch (e.type) {
        case NUE_EVENT_WINDOW_CLOSE_REQUESTED: window_event(EventKind::close); break;
        case NUE_EVENT_WINDOW_FOCUS_GAINED: window_event(EventKind::focus_gained); break;
        case NUE_EVENT_WINDOW_FOCUS_LOST: window_event(EventKind::focus_lost); break;
        case NUE_EVENT_WINDOW_PIXEL_SIZE_CHANGED: window_event(EventKind::resized, uint32_t(e.payload.window.x), uint32_t(e.payload.window.y)); break;
        case NUE_EVENT_WINDOW_DISPLAY_CHANGED: case NUE_EVENT_DISPLAY_CHANGED: window_event(EventKind::display_changed); break;
        case NUE_EVENT_APP_PAUSED: case NUE_EVENT_SYSTEM_SUSPENDING: window_event(EventKind::suspended); break;
        case NUE_EVENT_APP_RESUMED: case NUE_EVENT_SYSTEM_RESUMED: window_event(EventKind::resumed); break;
        case NUE_EVENT_SURFACE_LOST: window_event(EventKind::surface_lost); break;
        case NUE_EVENT_SURFACE_CREATED: window_event(EventKind::surface_ready); break;
        case NUE_EVENT_QUIT: case NUE_EVENT_APP_TERMINATING: window_event(EventKind::terminating); break;
        case NUE_EVENT_KEY_DOWN: case NUE_EVENT_KEY_UP:
            if (trace_input()) std::fprintf(stderr, "nue input: key %s scancode %u repeat %u (window %u)", e.type == NUE_EVENT_KEY_DOWN ? "down" : "up", e.payload.key.scancode, unsigned(e.payload.key.repeat), e.window_id);
            if (trace_input()) std::fputc(10, stderr);
            if (e.payload.key.repeat || e.payload.key.scancode >= kScancodeCount) break;               // a held key repeats on the keyboard, not in DirectInput
            input_event(InputEventKind::key, e.timestamp_ns, e.payload.key.scancode, e.type == NUE_EVENT_KEY_DOWN ? 1 : 0);
            break;
        case NUE_EVENT_MOUSE_MOTION:
            input_event(InputEventKind::mouse_motion, e.timestamp_ns, 0, int32_t(std::lround(e.payload.motion.dx)), int32_t(std::lround(e.payload.motion.dy)));
            break;
        case NUE_EVENT_MOUSE_BUTTON_DOWN: case NUE_EVENT_MOUSE_BUTTON_UP:
            input_event(InputEventKind::mouse_button, e.timestamp_ns, e.payload.button.button, e.type == NUE_EVENT_MOUSE_BUTTON_DOWN ? 1 : 0);
            break;
        case NUE_EVENT_MOUSE_WHEEL:
            input_event(InputEventKind::mouse_wheel, e.timestamp_ns, 0, int32_t(std::lround(e.payload.wheel.y * 120.0f)), int32_t(std::lround(e.payload.wheel.x * 120.0f)));
            break;
        default: break;
        }
    }

    std::mutex m_;
    std::deque<WindowEvent> window_;
    std::vector<InputEvent> input_;
};

// ------------------------------------------------------------------------------------------------------------------------------------ display
class NueDisplay final : public Display {
public:
    std::vector<DisplayInfo> list(bool include_modes) override {
        std::vector<DisplayInfo> out;
        nue_display_id ids[32];
        uint32_t count = 0;
        if (nue_display_list(ids, 32, &count) < 0) return out;
        const nue_display_id primary = nue_display_primary();
        for (uint32_t i = 0; i < count && i < 32; ++i) {
            nue_display_info info;
            NUE_STRUCT_INIT(&info);
            if (nue_display_get_info(ids[i], &info) < 0) continue;
            DisplayInfo d;
            d.id = info.id;
            d.name = info.name;
            d.primary = info.id == primary || info.is_primary;
            d.current = mode_of(info.current_mode);
            d.desktop_width = uint32_t(std::max(info.bounds.w, 0));
            d.desktop_height = uint32_t(std::max(info.bounds.h, 0));
            d.content_scale = info.content_scale;
            d.safe_area_px.left = info.usable_bounds.x - info.bounds.x;
            d.safe_area_px.top = info.usable_bounds.y - info.bounds.y;
            d.safe_area_px.right = (info.bounds.x + info.bounds.w) - (info.usable_bounds.x + info.usable_bounds.w);
            d.safe_area_px.bottom = (info.bounds.y + info.bounds.h) - (info.usable_bounds.y + info.usable_bounds.h);
            if (include_modes) {
                nue_display_mode modes[512];
                uint32_t n = 0;
                if (nue_display_list_modes(info.id, modes, 512, &n) >= 0)
                    for (uint32_t k = 0; k < n && k < 512; ++k) d.modes.push_back(mode_of(modes[k]));
            }
            out.push_back(std::move(d));
        }
        return out;
    }
    void set_dpi_aware() override {}      // NUE windows report pixel sizes (NUE_WINDOW_HIGH_DPI); there is no OS bitmap scaling to switch off

private:
    static DisplayMode mode_of(const nue_display_mode& m) {
        DisplayMode d;
        d.width = uint32_t(std::max(m.width, 0)); d.height = uint32_t(std::max(m.height, 0));
        d.refresh_millihertz = m.refresh_rate_hz > 0 ? uint32_t(std::lround(m.refresh_rate_hz * 1000.0f)) : 0;
        return d;
    }
};

// ------------------------------------------------------------------------------------------------------------------------------------ window
class NueWindow final : public Window {
public:
    explicit NueWindow(std::shared_ptr<Hub> hub) : hub_(std::move(hub)) {}
    ~NueWindow() override { destroy(); }

    Status create(std::string_view title, uint32_t width, uint32_t height, WindowMode mode, uint32_t display_id) override {
        if (window_) return Status::already_exists;
        nue_window_desc d;
        NUE_STRUCT_INIT(&d);
        const std::string text(title);
        d.title = text.c_str();
        d.x = NUE_WINDOW_POS_CENTERED; d.y = NUE_WINDOW_POS_CENTERED;
        d.width = int32_t(width); d.height = int32_t(height);
        d.display = display_id;
        d.flags = NUE_WINDOW_GFX_NONE;
        switch (mode) {
        case WindowMode::windowed: d.mode = NUE_WINDOW_MODE_WINDOWED; break;
        case WindowMode::borderless: d.mode = NUE_WINDOW_MODE_BORDERLESS; d.flags |= NUE_WINDOW_BORDERLESS; break;
        case WindowMode::fullscreen: d.mode = NUE_WINDOW_MODE_EXCLUSIVE; break;
        }
        const nue_result r = nue_window_create(&d, &window_);
        if (r < 0) { window_ = nullptr; return status_from(r); }
        adopted_ = false;
        return Status::ok;
    }
    Status adopt(NativeSurface surface) override {
        if (window_) return Status::already_exists;
        nue_native_window native;
        NUE_STRUCT_INIT(&native);
        switch (surface.kind) {
        case NativeSurface::Kind::win32_hwnd: native.kind = NUE_NATIVE_WIN32_HWND; break;
        case NativeSurface::Kind::xlib_window: native.kind = NUE_NATIVE_X11_WINDOW; break;
        case NativeSurface::Kind::wayland_surface: native.kind = NUE_NATIVE_WAYLAND_SURFACE; break;
        case NativeSurface::Kind::android_native_window: native.kind = NUE_NATIVE_ANDROID_WINDOW; break;
        case NativeSurface::Kind::cametal_layer: native.kind = NUE_NATIVE_COCOA_WINDOW; break;
        default: return Status::invalid_argument;
        }
        native.window = uint64_t(reinterpret_cast<uintptr_t>(surface.a));
        native.display = uint64_t(reinterpret_cast<uintptr_t>(surface.b));
        nue_window_desc d;
        NUE_STRUCT_INIT(&d);
        d.attach = &native;
        const nue_result r = nue_window_create(&d, &window_);
        if (r < 0) { window_ = nullptr; return status_from(r); }
        adopted_ = true;
        return Status::ok;
    }
    bool adopted() override { return window_ && adopted_; }
    Status set_mode(WindowMode mode) override {
        if (!window_) return Status::invalid_argument;
        const nue_window_mode wanted = mode == WindowMode::windowed ? NUE_WINDOW_MODE_WINDOWED : mode == WindowMode::borderless ? NUE_WINDOW_MODE_BORDERLESS : NUE_WINDOW_MODE_EXCLUSIVE;
        if (nue_window_get_mode(window_) == wanted) return Status::ok;
        const nue_result r = nue_window_set_mode(window_, wanted, nullptr);
        if (trace_window()) std::fprintf(stderr, "nue window: set_mode %s -> %d", mode == WindowMode::windowed ? "windowed" : mode == WindowMode::borderless ? "borderless" : "fullscreen", int(r));
        if (trace_window()) std::fputc(10, stderr);
        return status_from(r);        // NUE_OK_PENDING: the size change is reported by NUE_EVENT_WINDOW_PIXEL_SIZE_CHANGED
    }
    nue_window handle() const { return window_; }
    void destroy() override {
        if (!window_) return;
        nue_window_destroy(window_);                                         // an attached window is only detached
        window_ = nullptr;
        adopted_ = false;
    }
    NativeSurface native_surface() override {
        NativeSurface s;
        if (!window_) return s;
        nue_native_window n;
        NUE_STRUCT_INIT(&n);
        if (nue_window_get_native(window_, &n) < 0) return s;
        auto pointer = [](uint64_t v) { return reinterpret_cast<void*>(static_cast<uintptr_t>(v)); };
        switch (n.kind) {
        case NUE_NATIVE_WIN32_HWND: s.kind = NativeSurface::Kind::win32_hwnd; s.a = pointer(n.window); break;
        case NUE_NATIVE_X11_WINDOW: s.kind = NativeSurface::Kind::xlib_window; s.a = pointer(n.window); s.b = pointer(n.display); break;
        case NUE_NATIVE_WAYLAND_SURFACE: s.kind = NativeSurface::Kind::wayland_surface; s.a = pointer(n.window); s.b = pointer(n.display); break;
        case NUE_NATIVE_ANDROID_WINDOW: s.kind = NativeSurface::Kind::android_native_window; s.a = pointer(n.window); break;
        case NUE_NATIVE_UIKIT_WINDOW: case NUE_NATIVE_COCOA_WINDOW: s.kind = NativeSurface::Kind::cametal_layer; s.a = pointer(n.extra); s.b = pointer(n.window); break;
        default: break;
        }
        return s;
    }

    void set_frame(FrameStyle frame) override {
        if (!window_) return;
        if (trace_window()) std::fprintf(stderr, "nue window: frame %s%s", frame.borderless ? "borderless" : "framed", frame.resizable ? " resizable" : "");
        if (trace_window()) std::fputc(10, stderr);
        nue_window_set_bordered(window_, frame.borderless ? NUE_FALSE : NUE_TRUE);
        nue_window_set_resizable(window_, !frame.borderless && frame.resizable ? NUE_TRUE : NUE_FALSE);
    }
    void refresh_frame() override {}                                         // NUE applies a decoration change at once
    // NUE sizes a window by its client area; the frame is the window system's business. The "outer" rectangle of this interface is therefore the client
    // rectangle placed on the desktop (exact for borderless windows, which is what the game's window modes use).
    void place_outer(int32_t x, int32_t y, int32_t width, int32_t height) override {
        if (!window_) return;
        if (trace_window()) std::fprintf(stderr, "nue window: place %d,%d %dx%d", x, y, width, height);
        if (trace_window()) std::fputc(10, stderr);
        nue_window_set_size(window_, width, height);
        nue_window_set_position(window_, x, y);
    }
    void place_client_centered(int32_t client_width, int32_t client_height, int32_t display_width, int32_t display_height, bool show) override {
        if (!window_) return;
        nue_display_info info;
        NUE_STRUCT_INIT(&info);
        int32_t origin_x = 0, origin_y = 0;
        if (nue_display_get_info(nue_window_get_display(window_), &info) >= 0) { origin_x = info.bounds.x; origin_y = info.bounds.y; }
        nue_window_set_size(window_, client_width, client_height);
        nue_window_set_position(window_, origin_x + (display_width - client_width) / 2, origin_y + (display_height - client_height) / 2);
        if (show) { nue_window_set_always_on_top(window_, NUE_FALSE); nue_window_show(window_); }
    }
    Rect outer_rect() override {
        Rect r;
        if (!window_) return r;
        int32_t x = 0, y = 0, w = 0, h = 0;
        nue_window_get_position(window_, &x, &y);
        nue_window_get_size(window_, &w, &h);
        r.left = x; r.top = y; r.right = x + w; r.bottom = y + h;
        return r;
    }
    Rect client_rect() override {                                            // pixels: what a renderer sizes its back buffer to
        Rect r;
        if (!window_) return r;
        int32_t w = 0, h = 0;
        nue_window_get_pixel_size(window_, &w, &h);
        r.right = w; r.bottom = h;
        return r;
    }

    bool cursor_inside_client() override { return window_ && nue_mouse_get_focus() == window_; }
    void show_cursor(bool show) override { nue_cursor_set_visible(show ? NUE_TRUE : NUE_FALSE); }
    void show_cursor_forced() override { nue_cursor_set_visible(NUE_TRUE); }
    void release_cursor_clip() override { if (window_) nue_window_set_cursor_clip(window_, nullptr, NUE_FALSE); }
    bool focused() override { return window_ && nue_window_has_focus(window_) != NUE_FALSE; }

    size_t poll_events(std::span<WindowEvent> out) override {
        hub_->pump();
        size_t n = 0;
        while (n < out.size() && hub_->pop_window(out[n])) ++n;
        return n;
    }

private:
    std::shared_ptr<Hub> hub_;
    nue_window window_ = nullptr;
    bool adopted_ = false;
};

// ------------------------------------------------------------------------------------------------------------------------------------ input
class NueInput final : public Input {
public:
    explicit NueInput(std::shared_ptr<Hub> hub) : hub_(std::move(hub)) {}

    void pump() override {
        hub_->pump();
        std::vector<InputEvent> events = hub_->take_input();
        pad_changes(events);
        std::vector<std::pair<uint32_t, Listener>> listeners;
        {
            std::lock_guard lock(m_);
            listeners = listeners_;
        }
        for (const InputEvent& e : events)
            for (auto& l : listeners) l.second(e);
    }
    const uint8_t* key_state() override { return nue_key_get_state_array(); }
    uint32_t mouse_state(float* x, float* y) override { return nue_mouse_get_state(x, y); }
    uint32_t mouse_relative(float* dx, float* dy) override { return nue_mouse_get_relative_state(dx, dy); }
    bool mouse_present() override { return nue_mouse_is_present() != NUE_FALSE; }

    std::vector<GamepadInfo> gamepads() override {
        std::vector<GamepadInfo> out;
        for (nue_gamepad_id id : pad_ids()) {
            nue_gamepad_info info;
            NUE_STRUCT_INIT(&info);
            if (nue_gamepad_get_info(id, &info) < 0) continue;
            GamepadInfo g;
            g.id = info.id; g.name = info.name; g.vendor_id = info.vendor_id; g.product_id = info.product_id;
            g.axes = info.joystick_axes; g.buttons = info.joystick_buttons; g.hats = info.joystick_hats;
            g.xbox_style = info.type == NUE_PAD_TYPE_XBOX360 || info.type == NUE_PAD_TYPE_XBOXONE;
            g.connected = info.connected != NUE_FALSE;
            out.push_back(std::move(g));
        }
        return out;
    }
    bool gamepad_state(GamepadId id, GamepadState& out) override {
        nue_gamepad_info info;
        NUE_STRUCT_INIT(&info);
        if (nue_gamepad_get_info(id, &info) < 0 || !info.connected) return false;
        out = GamepadState{};
        for (uint32_t i = 0; i < 8 && i < info.joystick_axes; ++i) out.axes[i] = nue_joystick_get_axis(id, i);
        for (uint32_t i = 0; i < 32 && i < info.joystick_buttons; ++i) if (nue_joystick_get_button(id, i)) out.buttons |= 1u << i;
        for (uint32_t i = 0; i < 4 && i < info.joystick_hats; ++i) out.hats[i] = nue_joystick_get_hat(id, i);
        return true;
    }
    uint32_t add_listener(Listener l) override {
        std::lock_guard lock(m_);
        const uint32_t id = next_listener_++;
        listeners_.emplace_back(id, std::move(l));
        return id;
    }
    void remove_listener(uint32_t id) override {
        std::lock_guard lock(m_);
        listeners_.erase(std::remove_if(listeners_.begin(), listeners_.end(), [id](const auto& p) { return p.first == id; }), listeners_.end());
    }

private:
    static std::vector<nue_gamepad_id> pad_ids() {
        nue_gamepad_id ids[16];
        uint32_t count = 0;
        std::vector<nue_gamepad_id> out;
        if (nue_gamepad_list(ids, 16, &count) < 0) return out;
        for (uint32_t i = 0; i < count && i < 16; ++i) out.push_back(ids[i]);
        return out;
    }
    // Gamepad events are the changes of the raw joystick state since the last pump: what a DirectInput device reports (NUE's own gamepad events use the
    // mapped layout of the SDL database).
    void pad_changes(std::vector<InputEvent>& events) {
        const int64_t now = nue_time_ns();
        auto add = [&](InputEventKind kind, uint32_t code, int32_t value, GamepadId pad) {
            InputEvent e;
            e.kind = kind; e.time_ns = now; e.code = code; e.value = value; e.pad = pad;
            events.push_back(e);
        };
        const std::vector<nue_gamepad_id> ids = pad_ids();
        for (auto it = pads_.begin(); it != pads_.end();) {                  // gone
            if (std::find(ids.begin(), ids.end(), it->first) == ids.end()) { add(InputEventKind::pad_removed, 0, 0, it->first); it = pads_.erase(it); }
            else ++it;
        }
        for (nue_gamepad_id id : ids) {
            GamepadState now_state;
            if (!gamepad_state(id, now_state)) continue;
            auto found = pads_.find(id);
            if (found == pads_.end()) { add(InputEventKind::pad_added, 0, 0, id); found = pads_.emplace(id, GamepadState{}).first; }
            const GamepadState& before = found->second;
            for (uint32_t i = 0; i < 8; ++i) if (now_state.axes[i] != before.axes[i]) add(InputEventKind::pad_axis, i, now_state.axes[i], id);
            for (uint32_t i = 0; i < 32; ++i) {
                const bool a = (now_state.buttons >> i) & 1, b = (before.buttons >> i) & 1;
                if (a != b) add(InputEventKind::pad_button, i, a ? 1 : 0, id);
            }
            for (uint32_t i = 0; i < 4; ++i) if (now_state.hats[i] != before.hats[i]) add(InputEventKind::pad_hat, i, now_state.hats[i], id);
            found->second = now_state;
        }
    }

    std::shared_ptr<Hub> hub_;
    std::mutex m_;
    std::vector<std::pair<uint32_t, Listener>> listeners_;
    uint32_t next_listener_ = 1;
    std::map<GamepadId, GamepadState> pads_;                                 // the state seen at the last pump (pump runs on one thread at a time)
};

}  // namespace

nue_window nue_window_of(Window& window) {
    auto* own = dynamic_cast<NueWindow*>(&window);
    return own ? own->handle() : nullptr;
}

Services make_services() {
    auto hub = std::make_shared<Hub>();
    Services s;
    s.window = std::make_unique<NueWindow>(hub);
    s.display = std::make_unique<NueDisplay>();
    s.input = std::make_unique<NueInput>(hub);
    return s;
}

}  // namespace nfsu2::platform::nue_backend
