#include "mods.hpp"
#include <cstring>

namespace nfsu2raw {
int mod_var_index(const char* name) {
    for (unsigned i = 0; i < mod_var_count; ++i)
        if (std::strcmp(mod_var_names[i], name) == 0) return int(i);
    return -1;
}
int mod_hook_index(const char* name) {
    for (unsigned i = 0; i < mod_hook_count; ++i)
        if (std::strcmp(mod_hook_names[i], name) == 0) return int(i);
    return -1;
}
uint32_t mod_data_address(const char* name) {
    for (unsigned i = 0; i < mod_data_count; ++i)
        if (std::strcmp(mod_data_addresses[i].name, name) == 0) return mod_data_addresses[i].address;
    return 0;
}
}
