// Look-around camera (mouse / right stick), gamepad texts and dead zones, front-end button mapping, and the input states they need
// (the mod's Camera and Controller modules).
#include "mods_internal.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <string>
#include <vector>

namespace nfsu2raw::mods {
namespace {
// ---- shared input state ------------------------------------------------------------------------------------------------------------------------------
struct MouseData { int delta_x = 0, delta_y = 0, wheel = 0; } g_mouse;
struct StickData { int raw_x = 0, raw_y = 0; float x = 0.0f, y = 0.0f; } g_right_stick;
bool g_hide_cursor_for_mouse_look = false;
bool g_last_input_was_pad = false;
WidescreenSettings g_settings;

using SteadyClock = std::chrono::steady_clock;
SteadyClock::time_point g_last_camera_input;
constexpr auto kHideCursorDuration = std::chrono::milliseconds(100);

// ---- camera ------------------------------------------------------------------------------------------------------------------------------------------------
struct Vector3 { float x, y, z; };
float g_yaw_offset = 0.0f, g_pitch_offset = 0.0f;
float g_idle_timer = 0.0f;
Vector3 g_previous_target{};
bool g_previous_target_valid = false;
float g_car_speed_2d = 0.0f;
constexpr float kCarMoveThreshold = 0.5f;
constexpr float kDegToRad = 0.0174533f, kRadToDeg = 57.2957795f;
uint8_t g_look_behind = 0;
uint32_t g_camera_mode = 0;
float g_mouse_sensitivity = 0.15f;   // the mod scales the configured mouse sensitivity by 0.15

float lerp_angle_deg(float from, float to, float t) {
    float diff = to - from;
    while (diff > 180.0f) diff -= 360.0f;
    while (diff < -180.0f) diff += 360.0f;
    return from + diff * t;
}

void camera_data(Cpu& c) {
    const uint32_t esi = reg(c, ESI);
    g_look_behind = u8_at(esi + 0x51);
    g_camera_mode = u32_at(esi + 0x48);
}

// Runs instead of the call that builds the camera's look-at matrix: out, from, to, up are on the stack (the caller cleans them).
void camera_look_at(Cpu& c) {
    const uint32_t esp = reg(c, ESP);
    const uint32_t out = u32_at(esp), from_address = u32_at(esp + 4), to_address = u32_at(esp + 8), up = u32_at(esp + 12);
    auto* from = reinterpret_cast<Vector3*>(uintptr_t(from_address));
    auto* to = reinterpret_cast<Vector3*>(uintptr_t(to_address));
    auto original = [&] { set_reg(c, EAX, call_function("fn_camera_look_at", 0, 0, {out, from_address, to_address, up})); };

    if (!game_paused()) {
        g_hide_cursor_for_mouse_look = true;
        g_last_camera_input = SteadyClock::now();
    }
    if (g_look_behind || (g_camera_mode != 0 && g_camera_mode != 1 && g_camera_mode != 5)) {
        g_yaw_offset = g_pitch_offset = g_idle_timer = 0.0f;
        g_previous_target_valid = false;
        return original();
    }
    const float dt = actual_delta_time;
    if (g_previous_target_valid && dt > 0.0f) {
        const float dx = to->x - g_previous_target.x, dy = to->y - g_previous_target.y;
        g_car_speed_2d = std::sqrt(dx * dx + dy * dy) / dt;
    }
    g_previous_target = *to;
    g_previous_target_valid = true;

    const float mouse_x = float(g_mouse.delta_x), mouse_y = float(g_mouse.delta_y);
    g_mouse.delta_x = g_mouse.delta_y = 0;   // consumed
    const float stick_x = -g_right_stick.x;
    const float stick_y = g_settings.only_horizontal_stick ? 0.0f : g_right_stick.y;
    const float delta_x = stick_x + (-mouse_x * g_mouse_sensitivity);
    const float delta_y = stick_y + (mouse_y * g_mouse_sensitivity);
    const bool has_input = std::fabs(delta_x) > 0.01f || std::fabs(delta_y) > 0.01f;
    const bool car_moving = g_car_speed_2d > kCarMoveThreshold;

    if (!game_paused() && has_input) {
        g_yaw_offset += delta_x * g_settings.stick_look_sensitivity;
        g_pitch_offset += delta_y * g_settings.stick_look_sensitivity * (g_settings.invert_look ? -1.0f : 1.0f);
        g_idle_timer = 0.0f;
    } else {
        g_idle_timer += dt;
        if (g_idle_timer >= g_settings.camera_return_timeout && car_moving) {
            const float blend = 1.0f - std::exp(-g_settings.camera_return_speed * dt);
            g_yaw_offset = lerp_angle_deg(g_yaw_offset, 0.0f, blend);
            g_pitch_offset = g_pitch_offset + (0.0f - g_pitch_offset) * blend;
            if (std::fabs(g_yaw_offset) < 0.3f && std::fabs(g_pitch_offset) < 0.3f) g_yaw_offset = g_pitch_offset = 0.0f;
        }
    }
    if (g_yaw_offset == 0.0f && g_pitch_offset == 0.0f) return original();

    g_pitch_offset = std::clamp(g_pitch_offset, -20.0f, 60.0f);
    const float dx = from->x - to->x, dy = from->y - to->y, dz = from->z - to->z;
    const float distance = std::sqrt(dx * dx + dy * dy + dz * dz);
    const float distance_2d = std::sqrt(dx * dx + dy * dy);
    const float yaw = std::atan2(dy, dx) + g_yaw_offset * kDegToRad;
    const float pitch = std::clamp(std::atan2(dz, distance_2d) + g_pitch_offset * kDegToRad, -1.39626f, 1.39626f);   // about 80 degrees
    from->x = to->x + distance * std::cos(pitch) * std::cos(yaw);
    from->y = to->y + distance * std::cos(pitch) * std::sin(yaw);
    from->z = to->z + distance * std::sin(pitch);
    original();
}

void update_cursor_hiding() { g_hide_cursor_for_mouse_look = (SteadyClock::now() - g_last_camera_input) < kHideCursorDuration; }

// The cursor-handling routine does nothing while the mouse looks around.
void cursor_function(Cpu& c) {
    if (!g_hide_cursor_for_mouse_look) set_reg(c, EAX, call_original("cursor_function", 0, 0, {argument(c, 0), argument(c, 1)}));
}

// ---- input states ---------------------------------------------------------------------------------------------------------------------------------------------
float g_left_deadzone = 10.0f, g_right_deadzone = 10.0f;

struct JoyState {   // DIJOYSTATE
    LONG lX, lY, lZ, lRx, lRy, lRz, rglSlider[2];
    DWORD rgdwPOV[4];
    BYTE rgbButtons[32];
};

void joy_state(Cpu& c) {
    auto* state = reinterpret_cast<JoyState*>(uintptr_t(address_of("joy_state_base") + reg(c, EBP) * 4));
    const int32_t left = int32_t(g_left_deadzone * 100.0f), right = int32_t(g_right_deadzone * 100.0f);   // values are in [-10000, 10000]
    state->lX = std::abs(state->lX) <= left ? 0 : state->lX;
    state->lY = std::abs(state->lY) <= left ? 0 : state->lY;
    state->lRx = std::abs(state->lRx) <= right ? 0 : state->lRx;
    state->lRy = std::abs(state->lRy) <= right ? 0 : state->lRy;
    g_right_stick.raw_x = state->lRx;
    g_right_stick.raw_y = state->lRy;
    g_right_stick.x = float(double(state->lRx) / 10000.0);
    g_right_stick.y = float(double(state->lRy) / 10000.0);
    bool input = false;
    for (int i = 0; i < 32 && !input; ++i) input = (state->rgbButtons[i] & 0x80) != 0;
    if (!input)
        input = std::abs(state->lX) > left || std::abs(state->lY) > left || std::abs(state->lRx) > right || std::abs(state->lRy) > right || state->lZ != 0 || state->lRz != 0;
    if (input) g_last_input_was_pad = true;
}

void mouse_state(Cpu& c) {
    if (reinterpret_cast<HWND>(uintptr_t(u32_at(address_of("hwnd")))) != GetForegroundWindow()) return;
    const uint32_t state = reg(c, ESP) + 8;
    g_mouse.delta_x = i32_at(state);
    g_mouse.delta_y = i32_at(state + 4);
    g_mouse.wheel = i32_at(state + 8);
    if (g_mouse.delta_x != 0 || g_mouse.delta_y != 0 || g_mouse.wheel != 0) g_last_input_was_pad = false;
}

void keyboard_state(Cpu& c) {
    const uint32_t esi = reg(c, ESI);
    if (i32_at(esi + 8) != -1 || i32_at(esi + 12) != -1) g_last_input_was_pad = false;
}

// ---- gamepad support ------------------------------------------------------------------------------------------------------------------------------------------
struct PadState {
    int32_t ls_axis_1, ls_axis_2, lt_rt, rs_axis_1, rs_axis_2;
    uint8_t unknown[28];
    int8_t a, b, x, y, lb, rb, select, start, ls_click, rs_click;
};

bool g_quit_pressed = false;
// The button state is copied to the game: both stick clicks together press Q (quit) in the front end.
void catch_pad(Cpu& c) {
    set_reg(c, ECX, 0x88);   // the instruction this replaces: MOV ECX,88h
    const auto* pad = reinterpret_cast<const PadState*>(uintptr_t(reg(c, EDI)));
    if (pad != nullptr && pad != reinterpret_cast<const PadState*>(1) && i32_at(address_of("game_state")) == 3) {
        if (pad->ls_click && pad->rs_click) {
            if (!g_quit_pressed) {
                keybd_event(BYTE(VkKeyScanA('Q')), 0, KEYEVENTF_EXTENDEDKEY, 0);
                keybd_event(BYTE(VkKeyScanA('Q')), 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
            }
            g_quit_pressed = true;
        } else {
            g_quit_pressed = false;
        }
    }
}

const char* const kMenuTexts[] = {"Quit Game", "Continue", "Back", "Reset Keys To Default", "Activate GPS", "Deactivate GPS", "Install Package", "Install Part", "Install Paint", "Install Decal", "Reset To Default", "Delete Tuned Car", "Logoff", "Cancel Changes", "Customize", "Host LAN Server", "Read Message", "Delete", "Test N2O Purge", "Accept", "Reset to default", "Select", "Open/Close Doors", "Open/Close Hood"};
const char* const kMenuTextsPc[] = {"[Q] Quit Game", "[Enter] Continue", "[Esc] Back", "[P] Reset Keys To Default", "[C] Activate GPS", "[C] Deactivate GPS", "[Enter] Install Package", "[Enter] Install Part", "[Enter] Install Paint", "[Enter] Install Decal", "[C] Reset To Default", "[C] Delete Tuned Car", "[Esc] Logoff", "[C] Cancel Changes", "[C] Customize", "[C] Host LAN Server", "[Enter] Read Message", "[C] Delete", "[C] Test N2O Purge", "[Enter] Accept", "[C] Reset to default", "[Enter] Select", "[C] Open/Close Doors", "[C] Open/Close Hood"};
const char* const kMenuTextsXbox[] = {"(LS+RS) Quit Game", "(A) Continue", "(B) Back", "(Y) Reset Keys To Default", "(X) Activate GPS", "(X) Deactivate GPS", "(A) Install Package", "(A) Install Part", "(A) Install Paint", "(A) Install Decal", "(X) Reset To Default", "(X) Delete Tuned Car", "(B) Logoff", "(X) Cancel Changes", "(X) Customize", "(X) Host LAN Server", "(A) Read Message", "(X) Delete", "(X) Test N2O Purge", "(A) Accept", "(X) Reset to default", "(A) Select", "(X) Open/Close Doors", "(X) Open/Close Hood"};
const char* const kMenuTextsPlayStation[] = {"(L3+R3) Quit Game", "(Cross) Continue", "(Circle) Back", "(Triangle) Reset Keys To Default", "(Square) Activate GPS", "(Square) Deactivate GPS", "(Cross) Install Package", "(Cross) Install Part", "(Cross) Install Paint", "(Cross) Install Decal", "(Square) Reset To Default", "(Square) Delete Tuned Car", "(Circle) Logoff", "(Square) Cancel Changes", "(Square) Customize", "(Square) Host LAN Server", "(Cross) Read Message", "(Square) Delete", "(Square) Test N2O Purge", "(Cross) Accept", "(Square) Reset to default", "(Cross) Select", "(Square) Open/Close Doors", "(Square) Open/Close Hood"};

const wchar_t* const kControlTexts[] = {L" 2", L" 3", L" 4", L" 5", L" 6", L" 7", L" 8", L" 9", L" 10", L" 1", L" Up", L" Down", L" Left", L" Right", L"X Rotation", L"Y Rotation", L"X Axis", L"Y Axis", L"Z Axis", L"Hat Switch"};
const wchar_t* const kControlTextsXbox[] = {L"B", L"X", L"Y", L"LB", L"RB", L"View (Select)", L"Menu (Start)", L"Left stick", L"Right stick", L"A", L"D-pad Up", L"D-pad Down", L"D-pad Left", L"D-pad Right", L"Right stick Left/Right", L"Right stick Up/Down", L"Left stick Left/Right", L"Left stick Up/Down", L"LT / RT", L"D-pad"};
const wchar_t* const kControlTextsPlayStation[] = {L"Circle", L"Square", L"Triangle", L"L1", L"R1", L"Select", L"Start", L"L3", L"R3", L"Cross", L"D-pad Up", L"D-pad Down", L"D-pad Left", L"D-pad Right", L"Right stick Left/Right", L"Right stick Up/Down", L"Left stick Left/Right", L"Left stick Up/Down", L"L2 / R2", L"D-pad"};

// The button texts of the menus follow the last device used. Replaces MOV ECX,[menu object] and may swap the text in EAX.
void menu_text(Cpu& c) {
    set_reg(c, ECX, u32_at(address_of("menu_text_global")));
    const char* text = reinterpret_cast<const char*>(uintptr_t(reg(c, EAX)));
    if (!text) return;
    for (size_t i = 0; i < std::size(kMenuTexts); ++i) {
        if (std::strcmp(text, kMenuTexts[i]) != 0) continue;
        const char* replacement = nullptr;
        if (g_last_input_was_pad) replacement = g_settings.improve_gamepad != 2 ? kMenuTextsXbox[i] : kMenuTextsPlayStation[i];
        else if (g_settings.improve_gamepad == 3) replacement = kMenuTextsPc[i];
        if (replacement) set_reg(c, EAX, uint32_t(uintptr_t(replacement)));
        break;
    }
}

// Maps gamepad buttons to front-end actions through the game's own tables: Y = P, Start = comma, LB/RB = brackets.
void fe_remap(Cpu& c) {
    const uint32_t esi = reg(c, ESI), ecx = reg(c, ECX), eax = reg(c, EAX);
    u32_at(esi + 0x08) = ecx;   // the two stores this replaces
    u32_at(esi + 0x0C) = ecx;
    u32_at(eax + 0x5064) = 0x2E;
    u32_at(eax + 0x5074) = 0x24;
    u32_at(eax + 0x5068) = 0x26;
    u32_at(eax + 0x506C) = 0x27;
}

// A controller button caption of the controls menu: "Button 2" becomes "B" (Xbox) or "Circle" (PlayStation). Replaces
// CMP WORD [ESP+8],0; POP EDI; JZ skip.
void controller_buttons(Cpu& c) {
    uint32_t esp = reg(c, ESP);
    set_reg(c, EDI, u32_at(esp));   // POP EDI
    esp += 4;
    set_reg(c, ESP, esp);
    auto* text = reinterpret_cast<wchar_t*>(uintptr_t(esp + 4));
    if (std::wcslen(text) == 0) {
        c.pc = address_of("buttons_empty");
        return;
    }
    if (!g_settings.improve_gamepad) return;
    for (size_t i = 0; i < std::size(kControlTexts); ++i) {
        if (std::wstring(text).find(kControlTexts[i]) == std::wstring::npos) continue;
        const wchar_t* replacement = g_settings.improve_gamepad != 2 ? kControlTextsXbox[i] : kControlTextsPlayStation[i];
        wcscpy_s(text, std::wcslen(replacement) + 1, replacement);
        break;
    }
}
}  // namespace

void install_input(const WidescreenSettings& settings) {
    g_settings = settings;
    g_left_deadzone = std::clamp(settings.left_stick_deadzone, 0.0f, 100.0f);
    g_right_deadzone = std::clamp(settings.right_stick_deadzone, 0.0f, 100.0f);
    g_mouse_sensitivity = settings.mouse_look_sensitivity * 0.15f;

    install_hook("joy_state", joy_state);
    install_hook("mouse_state", mouse_state);
    install_hook("keyboard_state", keyboard_state);
    install_hook("cursor_function", cursor_function);
    if (settings.improve_gamepad) {
        install_hook("catch_pad", catch_pad);
        install_hook("fe_remap", fe_remap);
        install_hook("buttons", controller_buttons);
        if (settings.improve_gamepad < 4) install_hook("menu_text", menu_text);
    }
    if (settings.camera) {
        install_hook("camera_data", camera_data);
        install_hook("camera_look_at", camera_look_at);
        events().process.push_back(update_cursor_hiding);
    }
}
}  // namespace nfsu2raw::mods
