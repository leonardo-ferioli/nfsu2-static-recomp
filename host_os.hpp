#pragma once
// The few things the 64-bit core asks of the host operating system itself (plan H3: the core builds without windows.h). Everything else a guest needs
// comes from the Win32 layer, the platform services or NUE.
#include <cstdint>
#include <cstdlib>
#include <string>

#if defined(_WIN32)
extern "C" __declspec(dllimport) unsigned long __stdcall GetEnvironmentVariableA(const char*, char*, unsigned long);
extern "C" __declspec(dllimport) unsigned long __stdcall GetCurrentProcessId(void);
#else
#include <unistd.h>
#endif

namespace nfsu2raw::host_os {

// The value of an environment variable of this process, empty when it is not set. On Windows the process' own block (what SetEnvironmentVariableA
// changed), as the 32-bit host always read it; elsewhere the C library's.
inline std::string environment(const char* name) {
#if defined(_WIN32)
    char text[1024];
    const unsigned long n = GetEnvironmentVariableA(name, text, sizeof(text));
    return n && n < sizeof(text) ? std::string(text, n) : std::string();
#else
    const char* value = std::getenv(name);
    return value ? std::string(value) : std::string();
#endif
}
inline bool environment_set(const char* name) {
#if defined(_WIN32)
    char text[2];
    return GetEnvironmentVariableA(name, text, sizeof(text)) != 0;
#else
    return std::getenv(name) != nullptr;
#endif
}

inline uint32_t process_id() {
#if defined(_WIN32)
    return uint32_t(GetCurrentProcessId());
#else
    return uint32_t(getpid());
#endif
}

}  // namespace nfsu2raw::host_os
