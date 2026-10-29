// x87_soft.hpp against the host FPU: random and edge operands, every rounding mode and precision control, bit for bit.
// x86 hosts only (the oracle is the real FPU). Usage: x87_soft_tests [iterations per case]
#include "x87_soft.hpp"
#include <cstdio>
#include <cstdlib>
#include <random>
#include <string>

using namespace nfsu2raw::x87soft;
static uint16_t cw_of(unsigned pc, unsigned rc) { return uint16_t(0x007f | (pc << 8) | (rc << 10)); }
struct Fpu {
    uint16_t saved = 0;
    explicit Fpu(uint16_t cw) { asm volatile("fnstcw %0" : "=m"(saved)); asm volatile("fldcw %0" ::"m"(cw)); }
    ~Fpu() { asm volatile("fldcw %0" ::"m"(saved)); }
};
static Ext hw_op(char op, Ext a, Ext b, uint16_t cw) {
    uint8_t ta[10], tb[10], tr[10]; store(ta, a); store(tb, b);
    Fpu f(cw);
    switch (op) {
        case '+': asm volatile("fldt %1; fldt %2; faddp; fstpt %0" : "=m"(tr) : "m"(ta), "m"(tb) : "st"); break;
        case '-': asm volatile("fldt %2; fldt %1; fsubp; fstpt %0" : "=m"(tr) : "m"(ta), "m"(tb) : "st"); break;
        case '*': asm volatile("fldt %1; fldt %2; fmulp; fstpt %0" : "=m"(tr) : "m"(ta), "m"(tb) : "st"); break;
        case '/': asm volatile("fldt %2; fldt %1; fdivp; fstpt %0" : "=m"(tr) : "m"(ta), "m"(tb) : "st"); break;
        case 'q': asm volatile("fldt %1; fsqrt; fstpt %0" : "=m"(tr) : "m"(ta) : "st"); break;
        case 'r': asm volatile("fldt %1; frndint; fstpt %0" : "=m"(tr) : "m"(ta) : "st"); break;
        default: std::abort();
    }
    return load(tr);
}
static bool same(Ext x, Ext y) { return x.sig == y.sig && x.se == y.se; }
static std::string show(Ext x) { char t[40]; std::snprintf(t, sizeof t, "%04x:%016llx", x.se, (unsigned long long)x.sig); return t; }

static std::mt19937_64 rng(12345);
static Ext random_value() {
    switch (rng() % 12) {
        case 0: return make_zero(rng() & 1);
        case 1: return make_inf(rng() & 1);
        case 2: return {0xC000000000000000ull | (rng() >> 8), uint16_t(0x7fff | ((rng() & 1) << 15))};   // QNaN
        case 3: return {(1ull << 63) | (rng() >> 20), uint16_t(((rng() & 1) << 15) | 0x7fff)};            // SNaN-ish (quiet bit may be clear)
        case 4: { uint64_t m = rng() >> (rng() % 64); return {m, uint16_t((rng() & 1) << 15)}; }          // denormal (exponent field 0)
        case 5: return from_f64(rng());                                                                   // arbitrary double
        case 6: return from_f32(uint32_t(rng()));
        case 7: return from_int(int64_t(rng()) >> (rng() % 64));
        case 8: { Ext x = from_f64(rng()); x.sig |= rng() & 0x7ff; return x; }                           // double plus extra bits
        default: {
            uint64_t sig = (1ull << 63) | (rng() >> 1);
            if (rng() % 4 == 0) sig &= ~0ull << (rng() % 60);                                           // few set bits: ties and exact results
            int e = int(rng() % 40) - 20; if (rng() % 8 == 0) e = int(rng() % 32000) - 16000;            // mostly modest exponents
            if (rng() % 16 == 0) e = (rng() & 1) ? 16380 + int(rng() % 4) : -16384 + int(rng() % 4);   // edges of the range
            int biased = e + 16383; if (biased < 0) biased = 0; if (biased > 0x7ffe) biased = 0x7ffe;
            return {sig, uint16_t(biased | ((rng() & 1) << 15))};
        }
    }
}
static bool is_nan(Ext x) { return unpack(x).k == NAN_; }
int main(int argc, char** argv) {
    const long iterations = argc > 1 ? std::atol(argv[1]) : 20000;
    long checked = 0, failed = 0;
    for (unsigned pc : {0u, 2u, 3u}) for (unsigned rc = 0; rc < 4; ++rc) {
        const uint16_t cw = cw_of(pc, rc);
        const Ctl c = control(cw);
        for (long i = 0; i < iterations; ++i) {
            const Ext a = random_value(), b = random_value();
            for (char op : {'+', '-', '*', '/', 'q', 'r'}) {
                Ext want = hw_op(op, a, b, cw), got{};
                switch (op) {
                    case '+': got = add(a, b, c); break;
                    case '-': got = add(a, b, c, true); break;
                    case '*': got = mul(a, b, c); break;
                    case '/': got = div(a, b, c); break;
                    case 'q': got = sqrt(a, c); break;
                    case 'r': got = rndint(a, c); break;
                }
                ++checked;
                if (!same(got, want) && !(is_nan(got) && is_nan(want) && got.sig == want.sig)) {
                    if (++failed <= 25) std::printf("FAIL %c pc=%u rc=%u a=%s b=%s want=%s got=%s\n", op, pc, rc, show(a).c_str(), show(b).c_str(), show(want).c_str(), show(got).c_str());
                }
            }
            // conversions to narrow formats and integers
            {
                Fpu f(cw); uint32_t f32w; uint64_t f64w; uint8_t ta[10]; store(ta, a);
                asm volatile("fldt %1; fstps %0" : "=m"(f32w) : "m"(ta) : "st");
                asm volatile("fldt %1; fstpl %0" : "=m"(f64w) : "m"(ta) : "st");
                ++checked; ++checked;
                const uint32_t g32 = to_f32(a, c); const uint64_t g64 = to_f64(a, c);
                if (g32 != f32w && !(is_nan(a))) { if (++failed <= 25) std::printf("FAIL to_f32 rc=%u a=%s want=%08x got=%08x\n", rc, show(a).c_str(), f32w, g32); }
                if (g64 != f64w && !(is_nan(a))) { if (++failed <= 25) std::printf("FAIL to_f64 rc=%u a=%s want=%016llx got=%016llx\n", rc, show(a).c_str(), (unsigned long long)f64w, (unsigned long long)g64); }
                if (is_nan(a)) {   // NaN payloads: the narrow results must be NaNs with the same top payload bits
                    if ((g32 & 0x7fc00000u) != (f32w & 0x7fc00000u) || (g64 >> 51) != (f64w >> 51)) { if (++failed <= 25) std::printf("FAIL nan convert a=%s\n", show(a).c_str()); }
                }
                int16_t i16; int32_t i32; int64_t i64;
                asm volatile("fldt %1; fistps %0" : "=m"(i16) : "m"(ta) : "st");
                asm volatile("fldt %1; fistpl %0" : "=m"(i32) : "m"(ta) : "st");
                asm volatile("fldt %1; fistpq %0" : "=m"(i64) : "m"(ta) : "st");
                const IntResult r16 = to_int(a, rc, 16), r32 = to_int(a, rc, 32), r64 = to_int(a, rc, 64);
                const int16_t g16 = r16.ok ? int16_t(r16.value) : int16_t(0x8000);
                const int32_t g32i = r32.ok ? int32_t(r32.value) : int32_t(0x80000000u);
                const int64_t g64i = r64.ok ? r64.value : int64_t(0x8000000000000000ull);
                checked += 3;
                if (g16 != i16 || g32i != i32 || g64i != i64) { if (++failed <= 25) std::printf("FAIL fist rc=%u a=%s want %d/%d/%lld got %d/%d/%lld\n", rc, show(a).c_str(), i16, i32, (long long)i64, g16, g32i, (long long)g64i); }
            }
            {   // compare
                uint8_t ta[10], tb[10]; store(ta, a); store(tb, b); unsigned char eq, lt, un;
                asm volatile("fldt %3; fldt %4; fucomip %%st(1), %%st; fstp %%st(0); sete %0; setb %1; setp %2" : "=qm"(eq), "=qm"(lt), "=qm"(un) : "m"(tb), "m"(ta) : "st", "cc");
                const Order o = compare(a, b);
                const bool ok = un ? o == UNORDERED : (eq ? o == EQUAL : (lt ? o == LESS : o == GREATER));
                ++checked;
                if (!ok && ++failed <= 25) std::printf("FAIL compare a=%s b=%s\n", show(a).c_str(), show(b).c_str());
            }
        }
    }
    // exact conversions in
    for (long i = 0; i < iterations; ++i) {
        const uint32_t b32 = uint32_t(rng()); const uint64_t b64 = rng(); const int64_t iv = int64_t(rng()) >> (rng() % 64);
        uint8_t t[10]; Ext w;
        asm volatile("flds %1; fstpt %0" : "=m"(t) : "m"(b32) : "st"); w = load(t); ++checked;
        if (!same(from_f32(b32), w) && !(is_nan(w) && from_f32(b32).sig == w.sig)) { if (++failed <= 25) std::printf("FAIL from_f32 %08x\n", b32); }
        asm volatile("fldl %1; fstpt %0" : "=m"(t) : "m"(b64) : "st"); w = load(t); ++checked;
        if (!same(from_f64(b64), w) && !(is_nan(w) && from_f64(b64).sig == w.sig)) { if (++failed <= 25) std::printf("FAIL from_f64 %016llx\n", (unsigned long long)b64); }
        asm volatile("fildq %1; fstpt %0" : "=m"(t) : "m"(iv) : "st"); w = load(t); ++checked;
        if (!same(from_int(iv), w)) { if (++failed <= 25) std::printf("FAIL from_int %lld\n", (long long)iv); }
    }
    std::printf("%s: %ld checks, %ld failures\n", failed ? "FAILED" : "PASS", checked, failed);
    return failed ? 1 : 0;
}
