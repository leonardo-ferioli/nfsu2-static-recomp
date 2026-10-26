#include "mods.hpp"
#include "speed.hpp"
#include <cstdint>
#include <cstring>

namespace nfsu2raw {
namespace {
// Speed layer (speed.hpp, "lookups"): the mods look names up on hot paths (several per HUD quad). A small per-thread cache keyed
// by the name's address remembers the index of the last match; the entry is still confirmed by comparing the name, so a reused
// buffer with another name simply misses.
struct NameHit { const char* key; unsigned index; };
template <class Name>
int cached_index(NameHit (&cache)[64], const char* name, unsigned count, Name name_of) {
    if (g_speed_lookups) {
        NameHit& hit = cache[(uintptr_t(name) >> 2) & 63];
        if (hit.key == name && hit.index < count && std::strcmp(name_of(hit.index), name) == 0) return int(hit.index);
        for (unsigned i = 0; i < count; ++i)
            if (std::strcmp(name_of(i), name) == 0) { hit = {name, i}; return int(i); }
        return -1;
    }
    for (unsigned i = 0; i < count; ++i)
        if (std::strcmp(name_of(i), name) == 0) return int(i);
    return -1;
}
thread_local NameHit var_cache[64], hook_cache[64], data_cache[64];
}
int mod_var_index(const char* name) {
    return cached_index(var_cache, name, mod_var_count, [](unsigned i) { return mod_var_names[i]; });
}
int mod_hook_index(const char* name) {
    return cached_index(hook_cache, name, mod_hook_count, [](unsigned i) { return mod_hook_names[i]; });
}
uint32_t mod_data_address(const char* name) {
    const int i = cached_index(data_cache, name, mod_data_count, [](unsigned i) { return mod_data_addresses[i].name; });
    return i < 0 ? 0 : mod_data_addresses[i].address;
}
}
