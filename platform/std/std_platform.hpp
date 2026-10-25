// Portable implementations of the platform interfaces over the C++ standard library only (std::chrono, std::thread, std::filesystem, stdio).
// They are the default on every host; the few OS-specific refinements (thread priority, memory totals, time zone) are guarded and optional.
// NUE replaces them with its own modules; nothing above these classes knows which is in use.
#pragma once
#include "platform/clock.hpp"
#include "platform/config.hpp"
#include "platform/storage.hpp"
#include "platform/system.hpp"
#include "platform/threads.hpp"
#include <memory>

namespace nfsu2::platform::stdlib {

std::unique_ptr<Clock> make_clock();
std::unique_ptr<Threads> make_threads();
std::unique_ptr<System> make_system();
std::unique_ptr<Storage> make_storage();           // a file system with named roots and case-insensitive lookup
std::unique_ptr<Config> make_config(Storage* storage_for_load_and_save);   // in memory; `load`/`save` go through the storage

}  // namespace nfsu2::platform::stdlib
