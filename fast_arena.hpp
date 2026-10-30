#pragma once
// Included last by the pages generated for an arena host (generate_fast.py --host x86_64 / aarch64), never by hand-written code.
// Every translated function there starts with NFSU2_ARENA_LOCAL: the arena base is read once into a local, and the guest memory
// accesses of the function use that local. Through the global (guest_memory.hpp to_host) the base is loaded again after every guest
// store, because a store through a byte pointer may alias any object, the global included. The base does not change while
// translated code runs (it is set when the arena is created and cleared when it is destroyed).
#include "fast.hpp"
#ifndef NFSU2_GUEST_IDENTITY
#define NFSU2_ARENA_LOCAL [[maybe_unused]] ::nfsu2raw::u8* const AB_ = ::nfsu2::guest::g_arena_base;
#define gp(a) static_cast<void*>(AB_ + static_cast<::nfsu2raw::u32>(a))
#define m1(a) r1(gp(a))
#define m2(a) r2(gp(a))
#define m4(a) r4(gp(a))
#define m8(a) r8(gp(a))
#define s1(a, v) w1(gp(a), v)
#define s2(a, v) w2(gp(a), v)
#define s4(a, v) w4(gp(a), v)
#define s8_(a, v) w8(gp(a), v)
#else
#define NFSU2_ARENA_LOCAL
#endif
