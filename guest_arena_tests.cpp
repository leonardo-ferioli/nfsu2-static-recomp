// Guest memory model tests (docs/MEMORY_MODEL_64.md): the identity host (32-bit) and the arena (64-bit).
#include "guest_arena.hpp"
#include <atomic>
#include <cstdio>
#include <cstring>
#include <thread>
#include <vector>

using namespace nfsu2::guest;
static int g_failures = 0;
#define CHECK(cond) do { if (!(cond)) { std::printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #cond); ++g_failures; } } while (0)

#ifdef NFSU2_GUEST_IDENTITY
int main() {
    CHECK(identity);
    int local = 7;
    CHECK(to_host(to_guest(&local)) == &local);                       // the 32-bit host: a guest address is the host address
    CHECK(ptr<int>(to_guest(&local)) == &local && *ptr<int>(to_guest(&local)) == 7);
    CHECK(host_handle<void*>(guest_handle(&local)) == &local);
    CHECK(is_guest(&local));
    if (g_failures) return 1;
    std::puts("PASS guest memory (identity host)");
    return 0;
}
#else
int main() {
    CHECK(!identity);
    const char* error = nullptr;
    auto space = create_arena({}, &error);
    if (!space) { std::printf("FAIL create_arena: %s\n", error ? error : "?"); return 1; }
    uint8_t* base = arena_base();
    CHECK(base && (reinterpret_cast<uintptr_t>(base) & 0xffffffffull) == 0);              // 4 GiB aligned
    CHECK(!space->identity());
    CHECK(create_arena({}, &error) == nullptr);                                            // one arena per process

    // conversions
    CHECK(to_host(0x400000) == base + 0x400000);
    CHECK(to_guest(base + 0x1234) == 0x1234 && is_guest(base + 0x1234));
    int outside = 0;
    CHECK(!is_guest(&outside));

    // nothing is mapped until committed
    CHECK(space->host(0x400000, 4) == nullptr && space->protection(0x400000) == 0 && !space->readable(0x400000, 4));
    CHECK(space->commit(0x400000, 0x10000, kPageExecuteReadWrite));                        // the image
    uint8_t* image = space->host(0x400000, 0x10000);
    CHECK(image == base + 0x400000);
    std::memset(image, 0xAB, 0x10000);
    CHECK(space->host(0x400000, 0x10001) == nullptr);                                      // one byte past the committed range
    CHECK(space->protection(0x400000) == kPageExecuteReadWrite && space->readable(0x400000, 0x10000) && space->writable(0x400000, 0x10000));

    // allocator
    uint32_t a = space->alloc(100), b = space->alloc(1);
    CHECK(a >= 0x10000000u && a % 16 == 0 && b % 16 == 0 && b != a);
    CHECK(space->host(a, 100) == base + a && space->address_of(base + a + 5) == a + 5);
    uint8_t* pa = space->host(a, 100);
    for (int i = 0; i < 100; ++i) CHECK(pa[i] == 0);                                       // zero filled
    std::memset(pa, 0x55, 100);
    space->free(a);
    uint32_t c = space->alloc(100);
    CHECK(c == a);                                                                         // the freed block is reused
    pa = space->host(c, 100);
    for (int i = 0; i < 100; ++i) CHECK(pa[i] == 0);                                       // and zero filled again
    uint32_t aligned = space->alloc_aligned(10, 0x10000);
    CHECK(aligned && aligned % 0x10000 == 0);
    uint32_t big = space->alloc(64u << 20);
    CHECK(big && space->writable(big, 64u << 20));
    space->free(big);
    space->free(0xdeadbeef);                                                               // foreign addresses are ignored
    CHECK(space->alloc(0) != 0);                                                           // alloc(0) is a valid 16-byte block

    // a fixed commit inside the allocator's range leaves the free list (the loader's heap at 0x10000000 must never be handed out twice)
    CHECK(space->commit(0x20000000u, 0x100000, kPageReadWrite));
    for (int i = 0; i < 3000; ++i) {
        uint32_t x = space->alloc(0x1000);
        CHECK(x && (x + 0x1000 <= 0x20000000u || x >= 0x20100000u));
        if (!x) break;
    }
    CHECK(space->commit(0x20000800u, 0x100, kPageReadWrite));                            // a commit that straddles nothing new is still fine
    uint32_t spanning = space->alloc_aligned(0x200000, 0x1000);
    CHECK(spanning && (spanning + 0x200000 <= 0x20000000u || spanning >= 0x20100000u));

    // protections live in the software table
    uint32_t page = space->alloc_aligned(0x3000, 0x1000);
    CHECK(space->protection(page) == kPageReadWrite);
    CHECK(space->protect(page, 0x1000, kPageReadOnly) == kPageReadWrite);
    CHECK(space->readable(page, 0x1000) && !space->writable(page, 0x1000) && space->writable(page + 0x1000, 0x1000));
    CHECK(!space->writable(page, 0x2000));                                                 // a range is as strong as its weakest page
    CHECK(space->protect(page, 0x1000, kPageNoAccess) == kPageReadOnly && !space->readable(page, 1));
    CHECK(space->protect(page, 0x1000, kPageReadWrite | kPageGuard) == kPageNoAccess && !space->readable(page, 1));
    CHECK(space->protect(page, 0x1000, kPageNoAccess | kPageGuard) == 0);                  // invalid combination
    CHECK(space->protect(0x30000000u, 0x1000, kPageReadWrite) == 0);                        // not committed
    CHECK(space->decommit(page, 0x1000));
    CHECK(space->host(page, 1) == nullptr && space->protection(page) == 0 && space->host(page + 0x1000, 1) != nullptr);

    // guest::ptr over the arena
    *ptr<uint32_t>(c) = 0x11223344u;
    CHECK(*reinterpret_cast<uint32_t*>(base + c) == 0x11223344u);

    // threads
    std::vector<std::thread> threads;
    std::atomic<int> bad{0};
    for (int t = 0; t < 4; ++t) threads.emplace_back([&, t] {
        for (int i = 0; i < 2000; ++i) {
            uint32_t x = space->alloc(32 + (i % 7) * 100);
            if (!x) { ++bad; continue; }
            *ptr<uint32_t>(x) = uint32_t(t * 100000 + i);
            if (*ptr<uint32_t>(x) != uint32_t(t * 100000 + i)) ++bad;
            space->free(x);
        }
    });
    for (auto& th : threads) th.join();
    CHECK(bad == 0);

    space.reset();                                                                         // releases the reservation and the base
    CHECK(arena_base() == nullptr);
    // a masked arena (smaller than 4 GiB): addresses at or above the size are unmapped
    ArenaConfig small;
    small.arena_size = 0x40000000ull; small.alloc_begin = 0x1000000u; small.alloc_end = 0x30000000u;
    auto masked = create_arena(small, &error);
    CHECK(masked != nullptr);
    if (masked) {
        CHECK(masked->alloc(16) >= 0x1000000u);
        CHECK(!masked->commit(0x40000000u, 0x1000, kPageReadWrite));
        CHECK(masked->host(0x7fffff00u, 16) == nullptr);
        CHECK(is_guest(arena_base() + 0x3fffffffull) && !is_guest(arena_base() + 0x40000000ull));      // host memory beyond a smaller reservation is not the guest's
        CHECK(arena_config(0x80000000ull).alloc_end == 0x7F000000u && arena_config(0x100000000ull).alloc_end == 0xE0000000u);
    }
    if (g_failures) return 1;
    std::puts("PASS guest memory (arena)");
    return 0;
}
#endif
