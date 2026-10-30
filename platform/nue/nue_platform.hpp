// Platform API over NUE's C API (include/nue/window.h, input.h, app.h): the game's window, displays and input on the 64-bit host, from the engine instead of
// from the OS. 64-bit hosts only; links nue::nue. Nothing here makes a window of the operating system: nue_window_create does (SDL3 behind it), and on NUE's
// null backend the window is bookkeeping (the tests).
//
// One event queue, three users. NUE delivers window events and input events in one stream (nue_poll_event); the Window and the Input of the port would
// each take events meant for the other. The services made here therefore share an event hub: whoever pumps (Window::poll_events or Input::pump), the hub
// pulls the whole NUE stream once and sorts it, window events for the Window, keyboard / mouse / gamepad events for the Input. Pumping NUE itself
// (nue_pump_events) is only legal on its event thread; a call from another thread only drains what the event thread's pumps collected.
//
// Polled state is NUE's snapshot (updated by its pumps): the 512 byte key table, the mouse position and buttons, the raw joystick state of every gamepad (axes,
// buttons, hats, the layout DirectInput expects). The event stream of Input is built from the same sources: key, mouse and wheel events from NUE's events,
// gamepad events from the changes of the raw joystick state between two pumps (NUE's own gamepad events carry the *mapped* layout).
#pragma once
#include "platform/display.hpp"
#include "platform/input.hpp"
#include "platform/window.hpp"
#include <memory>

namespace nfsu2::platform::nue_backend {

struct Services {
    std::unique_ptr<Window> window;
    std::unique_ptr<Display> display;
    std::unique_ptr<Input> input;       // shares the event hub with `window`
};

// NUE must be initialised (nue_init) by the caller, on the thread that will pump events (the guest's main thread): that thread is the event thread.
Services make_services();

}  // namespace nfsu2::platform::nue_backend
