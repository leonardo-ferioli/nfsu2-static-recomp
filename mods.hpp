#pragma once
// Run-time side of the mod patch points that tools/generate_fast.py puts into the generated code (see tools/mods/).
// The game is unchanged until a mod writes variables and installs hooks: every patched immediate/operand starts with its
// original value and every hook table entry starts empty.
#include "runtime.hpp"

namespace nfsu2raw {
extern uint32_t g_mod_vars[];                       // immediates, operand pointers and flags the generated code reads
extern const char* const mod_var_names[];
extern const unsigned mod_var_count;
extern void (*mod_hook_table[])(Cpu&);              // handlers that replace an instruction range (null: original code runs)
extern const char* const mod_hook_names[];
extern const unsigned mod_hook_count;
struct ModDataAddress{const char* name;uint32_t address;};
extern const ModDataAddress mod_data_addresses[];   // game globals a mod writes to (plain memory)
extern const unsigned mod_data_count;

// Set by a function-hook handler right before it calls the original function: the next entry of that function on this thread
// runs the original code instead of the handler.
extern thread_local uint8_t g_mod_bypass[];
inline bool mod_bypass_take(unsigned id){const bool b=g_mod_bypass[id]!=0;g_mod_bypass[id]=0;return b;}

#define MODV (reinterpret_cast<uint8_t*>(g_mod_vars))

// Lookup by name; -1 / 0 when the loaded specification has no such entry.
int mod_var_index(const char* name);
int mod_hook_index(const char* name);
uint32_t mod_data_address(const char* name);
}
