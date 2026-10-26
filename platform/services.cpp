#include "platform/services.hpp"
#if defined(_WIN32)
#include "platform/win32/win32_services.hpp"
#endif

namespace nfsu2::platform {
namespace {
Services g_current;
bool g_overridden = false;
}

Services& services() {
    if (!g_overridden && !g_current.display) {
#if defined(_WIN32)
        g_current.display = &win32::display();
        g_current.window = &win32::window();
#endif
    }
    return g_current;
}

void set_services(Services replacement) {
    g_current = replacement;
    g_overridden = replacement.display != nullptr || replacement.window != nullptr;
}

const DisplayInfo* primary_display(const std::vector<DisplayInfo>& all) {
    for (const auto& info : all) if (info.primary) return &info;
    return all.empty() ? nullptr : &all.front();
}

}  // namespace nfsu2::platform
