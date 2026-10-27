// Litmus tests for the memory-ordering policy of translated code on weakly ordered hosts (arm64).
//
// The guest is an x86 program: x86-TSO allows exactly one reordering, a load overtaking an EARLIER STORE to a different address
// (store buffering). Everything else - load->load, load->store, store->store, and a single global order of stores seen alike by
// all observers - must hold. An arm64 host reorders all of them unless told otherwise. This program runs the classic two- and
// four-thread tests under several emission policies for the guest's plain memory accesses and counts the outcomes x86-TSO forbids.
//
//   plain    relaxed atomics: what generated code does today (plain loads and stores, the compiler may not tear them, hardware may
//            reorder them). On x86 hosts nothing forbidden appears (TSO hardware); on arm64 MP, LB and IRIW are expected to show.
//   relacq   every load is an acquire and every store a release (ldapr/ldar + stlr on arm64): the TSO-exact emission.
//   fenced   plain accesses plus a full fence (dmb ish) after every store: the cheap stand-in for TSO when stores are rarer than loads.
//   lockrmw  the LOCK-prefixed read-modify-write of the guest as one sequentially consistent atomic exchange (xchg, lock xadd...):
//            must forbid store-buffering when used for the store, as the real instruction is a full barrier.
//
// usage: tso_litmus [iterations]  (default 2000000 per test and policy). A "FORBIDDEN" count above zero for a policy means that
// policy does not preserve x86 ordering on this machine. Run it on the target device: it has no meaning when only built.
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <thread>
#include <vector>

enum Policy { PLAIN, RELACQ, FENCED, LOCKRMW, POLICIES };
static const char* policy_name[] = {"plain", "relacq", "fenced", "lockrmw"};

template<Policy P> inline int load(std::atomic<int>& a) {
    return a.load(P == RELACQ ? std::memory_order_acquire : std::memory_order_relaxed);
}
template<Policy P> inline void store(std::atomic<int>& a, int v) {
    if constexpr (P == RELACQ) a.store(v, std::memory_order_release);
    else if constexpr (P == FENCED) { a.store(v, std::memory_order_relaxed); std::atomic_thread_fence(std::memory_order_seq_cst); }
    else if constexpr (P == LOCKRMW) a.exchange(v, std::memory_order_seq_cst);
    else a.store(v, std::memory_order_relaxed);
}

struct Barrier {   // spin barrier so that the threads start each round together
    std::atomic<int> count{0}, generation{0};
    int n;
    explicit Barrier(int n) : n(n) {}
    void wait() {
        const int g = generation.load(std::memory_order_acquire);
        if (count.fetch_add(1, std::memory_order_acq_rel) + 1 == n) { count.store(0, std::memory_order_relaxed); generation.fetch_add(1, std::memory_order_release); }
        else while (generation.load(std::memory_order_acquire) == g) {}
    }
};

struct Result { long forbidden = 0, allowed_weak = 0; };

// Each test: two or four threads, variables x,y (and a,b for IRIW), per-round reset. Returns outcome counts.
template<Policy P> Result test_sb(long n) {      // SB: T0: x=1; r0=y   T1: y=1; r1=x   -> (0,0) is ALLOWED by x86-TSO (store buffering)
    std::atomic<int> x{0}, y{0}; int r0 = 0, r1 = 0; Barrier b(3); Result res;
    std::thread t0([&] { for (long i = 0; i < n; ++i) { b.wait(); store<P>(x, 1); r0 = load<P>(y); b.wait(); } });
    std::thread t1([&] { for (long i = 0; i < n; ++i) { b.wait(); store<P>(y, 1); r1 = load<P>(x); b.wait(); } });
    for (long i = 0; i < n; ++i) { x = 0; y = 0; b.wait(); b.wait(); if (r0 == 0 && r1 == 0) ++res.allowed_weak; }
    t0.join(); t1.join(); return res;
}
template<Policy P> Result test_mp(long n) {      // MP: T0: x=1; y=1   T1: r0=y; r1=x   -> (1,0) FORBIDDEN on x86
    std::atomic<int> x{0}, y{0}; int r0 = 0, r1 = 0; Barrier b(3); Result res;
    std::thread t0([&] { for (long i = 0; i < n; ++i) { b.wait(); store<P>(x, 1); store<P>(y, 1); b.wait(); } });
    std::thread t1([&] { for (long i = 0; i < n; ++i) { b.wait(); r0 = load<P>(y); r1 = load<P>(x); b.wait(); } });
    for (long i = 0; i < n; ++i) { x = 0; y = 0; b.wait(); b.wait(); if (r0 == 1 && r1 == 0) ++res.forbidden; }
    t0.join(); t1.join(); return res;
}
template<Policy P> Result test_lb(long n) {      // LB: T0: r0=x; y=1   T1: r1=y; x=1   -> (1,1) FORBIDDEN on x86
    std::atomic<int> x{0}, y{0}; int r0 = 0, r1 = 0; Barrier b(3); Result res;
    std::thread t0([&] { for (long i = 0; i < n; ++i) { b.wait(); r0 = load<P>(x); store<P>(y, 1); b.wait(); } });
    std::thread t1([&] { for (long i = 0; i < n; ++i) { b.wait(); r1 = load<P>(y); store<P>(x, 1); b.wait(); } });
    for (long i = 0; i < n; ++i) { x = 0; y = 0; b.wait(); b.wait(); if (r0 == 1 && r1 == 1) ++res.forbidden; }
    t0.join(); t1.join(); return res;
}
template<Policy P> Result test_iriw(long n) {   // IRIW: two writers, two readers that must agree on the order of the writes
    std::atomic<int> x{0}, y{0}; int r0 = 0, r1 = 0, r2 = 0, r3 = 0; Barrier b(5); Result res;
    std::thread w0([&] { for (long i = 0; i < n; ++i) { b.wait(); store<P>(x, 1); b.wait(); } });
    std::thread w1([&] { for (long i = 0; i < n; ++i) { b.wait(); store<P>(y, 1); b.wait(); } });
    std::thread o0([&] { for (long i = 0; i < n; ++i) { b.wait(); r0 = load<P>(x); r1 = load<P>(y); b.wait(); } });
    std::thread o1([&] { for (long i = 0; i < n; ++i) { b.wait(); r2 = load<P>(y); r3 = load<P>(x); b.wait(); } });
    for (long i = 0; i < n; ++i) { x = 0; y = 0; b.wait(); b.wait(); if (r0 == 1 && r1 == 0 && r2 == 1 && r3 == 0) ++res.forbidden; }
    w0.join(); w1.join(); o0.join(); o1.join(); return res;
}
template<Policy P> Result test_sb_with_lock(long n) {   // SB where the stores are LOCKed exchanges (an x86 XCHG): (0,0) becomes FORBIDDEN
    std::atomic<int> x{0}, y{0}; int r0 = 0, r1 = 0; Barrier b(3); Result res;
    std::thread t0([&] { for (long i = 0; i < n; ++i) { b.wait(); x.exchange(1, std::memory_order_seq_cst); r0 = load<P>(y); b.wait(); } });
    std::thread t1([&] { for (long i = 0; i < n; ++i) { b.wait(); y.exchange(1, std::memory_order_seq_cst); r1 = load<P>(x); b.wait(); } });
    for (long i = 0; i < n; ++i) { x = 0; y = 0; b.wait(); b.wait(); if (r0 == 0 && r1 == 0) ++res.forbidden; }
    t0.join(); t1.join(); return res;
}

template<Policy P> void run_policy(long n, long& total_forbidden) {
    const Result sb = test_sb<P>(n), mp = test_mp<P>(n), lb = test_lb<P>(n), iriw = test_iriw<P>(n), sbl = test_sb_with_lock<P>(n);
    std::printf("%-8s  SB(0,0) weak-but-allowed %-9ld  MP FORBIDDEN %-8ld LB FORBIDDEN %-8ld IRIW FORBIDDEN %-8ld SB+LOCK FORBIDDEN %-8ld\n",
                policy_name[P], sb.allowed_weak, mp.forbidden, lb.forbidden, iriw.forbidden, sbl.forbidden);
    total_forbidden += mp.forbidden + lb.forbidden + iriw.forbidden + sbl.forbidden;
}
int main(int argc, char** argv) {
    const long n = argc > 1 ? std::atol(argv[1]) : 2000000;
    long forbidden[POLICIES] = {};
    std::printf("hardware threads: %u, %ld iterations per test\n", std::thread::hardware_concurrency(), n);
    run_policy<PLAIN>(n, forbidden[PLAIN]); run_policy<RELACQ>(n, forbidden[RELACQ]);
    run_policy<FENCED>(n, forbidden[FENCED]); run_policy<LOCKRMW>(n, forbidden[LOCKRMW]);
    for (int p = 0; p < POLICIES; ++p) std::printf("policy %-8s preserves x86 ordering on this machine: %s\n", policy_name[p], forbidden[p] ? "NO" : "yes (no forbidden outcome seen)");
    return 0;
}
