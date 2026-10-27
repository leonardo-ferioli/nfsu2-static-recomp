#pragma once
// Virtual x87 FPU for generated code (generate_fast.py --x87 double | soft80): the guest's FPU stack lives in Cpu::regs instead
// of on the host FPU, so translated code runs on hosts without an x87 (arm64) and the arithmetic is the same on every host.
//
//   * the eight physical registers are the 16-byte slots at 0x1100 (the SLEIGH ST0..ST7 / MM0..MM7 registers), TOP is bits 11-13
//     of the status word at 0x10a2, C0..C3 are the bytes at 0x1090..0x1093, the control word is at 0x10a0 (0 reads as 0x27f, the
//     Win32 default: a freshly cleared processor needs no initialisation);
//   * double: a slot holds a double; arithmetic is done in double and, when the precision control says 24 bits, rounded to float
//     (double rounding is innocuous for + - * / sqrt at 24 bits), so it is bit-exact for the Win32 precision settings (24 and 53
//     bits) except for values that need the extended exponent or the 64-bit significand, rounding control is honoured only by
//     FRNDINT and FIST/FISTP, and the transcendental functions are libm's;
//   * soft80: a slot holds the 80-bit extended value and the arithmetic is x87_soft.hpp's (exact, all rounding and precision
//     modes); transcendental functions are computed in double and rounded (the real FPU's own are not correctly rounded either).
// Exception flags and the tag word are not modelled (masked exceptions, well-formed code), stack faults do not occur.
// insn<opcode, modrm>(R, operand) executes one instruction; the operand pointer is the effective address of a memory form.
#include "fast.hpp"
#include "x87_soft.hpp"
#include <cmath>

namespace nfsu2raw::x87v {
using x87soft::Ctl;
enum : u32 { O_C0 = 0x1090, O_CW = 0x10a0, O_SW = 0x10a2, O_TW = 0x10a4, O_ST = 0x1100 };

inline u16 control_word(const u8* R) { const u16 c = r2(R + O_CW); return c ? c : u16(0x27f); }
inline unsigned top(const u8* R) { return (r2(R + O_SW) >> 11) & 7; }
inline void set_top(u8* R, unsigned t) { w2(R + O_SW, u16((r2(R + O_SW) & ~0x3800) | ((t & 7) << 11))); }
inline u8* slot(u8* R, unsigned i) { return R + O_ST + 16 * ((top(R) + i) & 7); }
inline u16 status_word(const u8* R) {
    return u16((r2(R + O_SW) & ~0x4700) | (R[O_C0] << 8) | (R[O_C0 + 1] << 9) | (R[O_C0 + 2] << 10) | (R[O_C0 + 3] << 14));
}
inline void set_status_word(u8* R, u16 sw) {
    w2(R + O_SW, sw); R[O_C0] = (sw >> 8) & 1; R[O_C0 + 1] = (sw >> 9) & 1; R[O_C0 + 2] = (sw >> 10) & 1; R[O_C0 + 3] = (sw >> 14) & 1;
}
inline void set_cc(u8* R, unsigned c0, unsigned c1, unsigned c2, unsigned c3) { R[O_C0] = u8(c0); R[O_C0 + 1] = u8(c1); R[O_C0 + 2] = u8(c2); R[O_C0 + 3] = u8(c3); }

// ---- the two arithmetic back ends -----------------------------------------------------------------------------------------
struct SoftP {
    using T = x87soft::Ext;
    static T rd(const u8* p) { return x87soft::load(p); }
    static void wr(u8* p, T v) { x87soft::store(p, v); }
    static T add(T a, T b, const Ctl& c) { return x87soft::add(a, b, c); }
    static T sub(T a, T b, const Ctl& c) { return x87soft::add(a, b, c, true); }
    static T mul(T a, T b, const Ctl& c) { return x87soft::mul(a, b, c); }
    static T div(T a, T b, const Ctl& c) { return x87soft::div(a, b, c); }
    static T sqrt(T a, const Ctl& c) { return x87soft::sqrt(a, c); }
    static T rnd(T a, const Ctl& c) { return x87soft::rndint(a, c); }
    static T neg(T a) { return x87soft::negate(a); }
    static T abs(T a) { return x87soft::absolute(a); }
    static T from32(u32 b) { return x87soft::from_f32(b); }
    static T from64(u64 b) { return x87soft::from_f64(b); }
    static T fromi(s64 v) { return x87soft::from_int(v); }
    static T from80(const u8* p) { return x87soft::load(p); }
    static void to80(u8* p, T v) { x87soft::store(p, v); }
    static u32 to32(T v, const Ctl& c) { return x87soft::to_f32(v, c); }
    static u64 to64(T v, const Ctl& c) { return x87soft::to_f64(v, c); }
    static x87soft::IntResult toint(T v, unsigned rc, unsigned bits) { return x87soft::to_int(v, rc, bits); }
    static unsigned cmp(T a, T b) { return unsigned(x87soft::compare(a, b)); }   // 0 less, 1 equal, 2 greater, 3 unordered
    static double dbl(T v) { return std::bit_cast<double>(x87soft::to_f64(v, x87soft::Ctl{0, 53})); }
    static T fromd(double d) { return x87soft::from_f64(std::bit_cast<u64>(d)); }
    static T zero() { return x87soft::make_zero(false); }
    static T one() { return {0x8000000000000000ull, 0x3fff}; }
    // The constants are rounded as the rounding control says: nearest and up use the upper neighbour, down and zero the lower.
    static T pi(unsigned rc) { return {0xC90FDAA22168C234ull + (rc == 0 || rc == 2), 0x4000}; }
    static T ln2(unsigned rc) { return {0xB17217F7D1CF79ABull + (rc == 0 || rc == 2), 0x3ffe}; }
    static T l2t(unsigned rc) { return {0xD49A784BCD1B8AFEull + (rc == 2), 0x4000}; }
    static T l2e(unsigned rc) { return {0xB8AA3B295C17F0BBull + (rc == 0 || rc == 2), 0x3fff}; }
    static T lg2(unsigned rc) { return {0x9A209A84FBCFF798ull + (rc == 0 || rc == 2), 0x3ffd}; }
    // FPREM / FPREM1 completely reduced: remainder of a by b, q receives the low three bits of the quotient.
    static T fprem(T a, T b, bool nearest, unsigned& q) {
        using namespace x87soft;
        q = 0;
        const Un x = unpack(a), y = unpack(b);
        if (x.k == NAN_ || y.k == NAN_) return nan_of(a, b);
        if (x.k == INF || y.k == ZERO) return indefinite;
        if (y.k == INF || x.k == ZERO) return a;
        const int d = x.e - y.e;
        if (d < -1) return a;                        // |x| < |y| / 2: quotient 0 either way
        u128 r = x.sig, Y = y.sig;
        int unit = y.e;                              // r and Y are in units of 2^(unit - 63)
        unsigned qq = 0;
        if (d >= 0) {
            for (int i = 0; i <= d; ++i) {
                qq <<= 1;
                if (r >= Y) { r -= Y; qq |= 1; }
                if (i != d) r <<= 1;
            }
        } else { Y <<= 1; unit = y.e - 1; }          // d == -1: |x| < |y|, quotient 0 before rounding
        bool neg = x.neg;
        if (nearest) {
            const u128 twice = r << 1;
            if (twice > Y || (twice == Y && (qq & 1))) { r = Y - r; ++qq; neg = !neg; }
        }
        q = qq & 7;
        if (r == 0) return make_zero(neg);
        const int sh = clz128(r) - 64;
        return finish(neg, unit - sh, u64(r) << sh, 0, Ctl{0, 64});
    }
    static T scale(T a, T n, const Ctl& c) {   // a * 2^trunc(n)
        const x87soft::Un u = x87soft::unpack(a), k = x87soft::unpack(n);
        if (u.k == x87soft::NAN_ || k.k == x87soft::NAN_) return x87soft::nan_of(a, n);
        if (k.k == x87soft::INF) return k.neg ? (u.k == x87soft::INF ? x87soft::indefinite : x87soft::make_zero(u.neg)) : (u.k == x87soft::ZERO ? x87soft::indefinite : x87soft::make_inf(u.neg));
        if (u.k != x87soft::NORMAL) return a;
        const x87soft::IntResult r = x87soft::to_int(n, 3, 64);
        long long s = r.ok ? r.value : (k.neg ? -100000 : 100000);
        if (s > 100000) s = 100000; if (s < -100000) s = -100000;
        return x87soft::finish(u.neg, u.e + int(s), u.sig, 0, x87soft::Ctl{c.rc, 64});   // FSCALE is exact: no precision rounding
    }
    // 0 normal, 1 zero, 2 infinity, 3 NaN, 4 denormal; sign
    static unsigned klass(T v, bool& neg) {
        const x87soft::Un u = x87soft::unpack(v); neg = u.neg;
        if (u.k == x87soft::NAN_) return 3; if (u.k == x87soft::INF) return 2; if (u.k == x87soft::ZERO) return 1;
        return (v.se & 0x7fff) == 0 ? 4 : 0;
    }
};
struct DblP {
    using T = double;
    static T rd(const u8* p) { return std::bit_cast<double>(r8(p)); }
    static void wr(u8* p, T v) { w8(p, std::bit_cast<u64>(v)); }
    // Precision control 24: round to a 24-bit significand, nearest-even, keeping the (extended) exponent range of the x87
    // (a conversion to float would overflow at 3.4e38 and denormalise at 1e-38, which the real FPU does not).
    static T round24(T r) {
        u64 u = std::bit_cast<u64>(r);
        if (((u >> 52) & 0x7ff) == 0x7ff) return r;                       // infinity, NaN
        u += 0x0fffffffull + ((u >> 29) & 1);                                // add half an ulp (ties to even), carry into the exponent is right
        return std::bit_cast<T>(u & ~0x1fffffffull);
    }
    static T pcr(T r, const Ctl& c) { return c.pcb == 24 ? round24(r) : r; }
    static T add(T a, T b, const Ctl& c) { return pcr(a + b, c); }
    static T sub(T a, T b, const Ctl& c) { return pcr(a - b, c); }
    static T mul(T a, T b, const Ctl& c) { return pcr(a * b, c); }
    static T div(T a, T b, const Ctl& c) { return pcr(a / b, c); }
    static T sqrt(T a, const Ctl& c) { return pcr(std::sqrt(a), c); }
    static T rnd(T a, const Ctl& c) {
        switch (c.rc) { case 0: return std::nearbyint(a); case 1: return std::floor(a); case 2: return std::ceil(a); default: return std::trunc(a); }
    }
    static T neg(T a) { return -a; }
    static T abs(T a) { return std::fabs(a); }
    static T from32(u32 b) { return double(std::bit_cast<float>(b)); }
    static T from64(u64 b) { return std::bit_cast<double>(b); }
    static T fromi(s64 v) { return double(v); }
    static T from80(const u8* p) { return std::bit_cast<double>(x87soft::to_f64(x87soft::load(p), x87soft::Ctl{0, 53})); }
    static void to80(u8* p, T v) { x87soft::store(p, x87soft::from_f64(std::bit_cast<u64>(v))); }
    static u32 to32(T v, const Ctl&) { return std::bit_cast<u32>(float(v)); }
    static u64 to64(T v, const Ctl&) { return std::bit_cast<u64>(v); }
    static x87soft::IntResult toint(T v, unsigned rc, unsigned bits) {
        if (std::isnan(v) || std::isinf(v)) return {false, 0};
        const T r = rnd(v, x87soft::Ctl{rc, 64});
        const double limit = std::ldexp(1.0, int(bits - 1));
        if (r >= limit || r < -limit) return {false, 0};
        return {true, s64(r)};
    }
    static unsigned cmp(T a, T b) { return std::isunordered(a, b) ? 3 : (a < b ? 0 : (a == b ? 1 : 2)); }
    static double dbl(T v) { return v; }
    static T fromd(double d) { return d; }
    static T zero() { return 0.0; }
    static T one() { return 1.0; }
    static T pi(unsigned) { return 3.14159265358979323846; }
    static T ln2(unsigned) { return 0.69314718055994530942; }
    static T l2t(unsigned) { return 3.32192809488736234787; }
    static T l2e(unsigned) { return 1.44269504088896340736; }
    static T lg2(unsigned) { return 0.30102999566398119521; }
    static T fprem(T a, T b, bool nearest, unsigned& q) {
        q = 0;
        if (std::isnan(a) || std::isnan(b) || std::isinf(a) || b == 0) return std::nan("");
        const double d = nearest ? std::nearbyint(a / b) : std::trunc(a / b);
        q = unsigned((unsigned long long)std::fabs(d) & 7);
        return nearest ? std::remainder(a, b) : std::fmod(a, b);
    }
    static T scale(T a, T n, const Ctl&) { return std::ldexp(a, int(std::trunc(std::fmax(-100000.0, std::fmin(100000.0, n))))); }
    static unsigned klass(T v, bool& neg) {
        neg = std::signbit(v);
        switch (std::fpclassify(v)) { case FP_NAN: return 3; case FP_INFINITE: return 2; case FP_ZERO: return 1; case FP_SUBNORMAL: return 4; default: return 0; }
    }
};
#if defined(NFSU2_X87_SOFT80)
using Policy = SoftP;
#else
using Policy = DblP;
#endif

// ---- instruction semantics ------------------------------------------------------------------------------------------------
template<class P> struct Fpu {
    using T = typename P::T;
    static T get(u8* R, unsigned i) { return P::rd(slot(R, i)); }
    static void put(u8* R, unsigned i, T v) { P::wr(slot(R, i), v); }
    static void push(u8* R, T v) { set_top(R, top(R) - 1); put(R, 0, v); }
    static void pop(u8* R) { set_top(R, top(R) + 1); }
    static Ctl ctl(const u8* R) { return x87soft::control(control_word(R)); }
    // kind: 0 a+b, 1 a*b, 4 a-b, 5 b-a, 6 a/b, 7 b/a
    static T arith(unsigned kind, T a, T b, const Ctl& c) {
        switch (kind) {
            case 0: return P::add(a, b, c);
            case 1: return P::mul(a, b, c);
            case 4: return P::sub(a, b, c);
            case 5: return P::sub(b, a, c);
            case 6: return P::div(a, b, c);
            default: return P::div(b, a, c);
        }
    }
    static void compare(u8* R, T a, T b) {
        switch (P::cmp(a, b)) { case 0: set_cc(R, 1, 0, 0, 0); break; case 1: set_cc(R, 0, 0, 0, 1); break; case 2: set_cc(R, 0, 0, 0, 0); break; default: set_cc(R, 1, 0, 1, 1); break; }
    }
    static void store_int(void* ea, T v, unsigned bits, const u8* R) {
        const x87soft::IntResult r = P::toint(v, ctl(R).rc, bits);
        if (bits == 16) w2(ea, r.ok ? u16(r.value) : u16(0x8000));
        else if (bits == 32) w4(ea, r.ok ? u32(r.value) : 0x80000000u);
        else w8(ea, r.ok ? u64(r.value) : 0x8000000000000000ull);
    }
    static T load_int(const void* ea, unsigned bits) {
        if (bits == 16) return P::fromi(s16(r2(ea)));
        if (bits == 32) return P::fromi(s32(r4(ea)));
        return P::fromi(s64(r8(ea)));
    }
    static void env_store(u8* R, u8* m) {   // 32-bit protected-mode FNSTENV image (28 bytes)
        std::memset(m, 0, 28);
        w2(m, control_word(R)); w2(m + 4, status_word(R)); w2(m + 8, r2(R + O_TW));
    }
    static void env_load(u8* R, const u8* m) { w2(R + O_CW, r2(m)); set_status_word(R, r2(m + 4)); w2(R + O_TW, r2(m + 8)); }
    template<u32 CODE> static void transcend(u8* R) {
        if constexpr (CODE == 0xf0) put(R, 0, P::fromd(std::expm1(P::dbl(get(R, 0)) * 0.69314718055994530942)));   // F2XM1: 2^x - 1
        else if constexpr (CODE == 0xf1) { const double r = P::dbl(get(R, 1)) * std::log2(P::dbl(get(R, 0))); pop(R); put(R, 0, P::fromd(r)); }       // FYL2X
        else if constexpr (CODE == 0xf9) { const double r = P::dbl(get(R, 1)) * std::log2(P::dbl(get(R, 0)) + 1.0); pop(R); put(R, 0, P::fromd(r)); }   // FYL2XP1
        else if constexpr (CODE == 0xf2) { const double v = std::tan(P::dbl(get(R, 0))); put(R, 0, P::fromd(v)); push(R, P::one()); R[O_C0 + 2] = 0; }   // FPTAN
        else if constexpr (CODE == 0xf3) { const double r = std::atan2(P::dbl(get(R, 1)), P::dbl(get(R, 0))); pop(R); put(R, 0, P::fromd(r)); }         // FPATAN
        else if constexpr (CODE == 0xfe) { put(R, 0, P::fromd(std::sin(P::dbl(get(R, 0))))); R[O_C0 + 2] = 0; }
        else if constexpr (CODE == 0xff) { put(R, 0, P::fromd(std::cos(P::dbl(get(R, 0))))); R[O_C0 + 2] = 0; }
        else if constexpr (CODE == 0xfb) { const double v = P::dbl(get(R, 0)); put(R, 0, P::fromd(std::sin(v))); push(R, P::fromd(std::cos(v))); R[O_C0 + 2] = 0; }
        else static_assert(CODE == 0, "unsupported D9 register form");
    }
    static void prem(u8* R, bool ieee) {   // FPREM (truncating quotient) / FPREM1 (nearest): complete reduction, C2 = 0
        unsigned q;
        const T r = P::fprem(get(R, 0), get(R, 1), ieee, q);
        put(R, 0, r);
        set_cc(R, (q >> 2) & 1, q & 1, 0, (q >> 1) & 1);
    }
    // returns AX for FNSTSW AX, 0 otherwise
    template<u32 OP, u32 MODRM> static u32 run(u8* R, void* ea) {
        constexpr u32 reg = (MODRM >> 3) & 7, rm = MODRM & 7;
        constexpr bool mem = (MODRM >> 6) != 3;
        const Ctl c = ctl(R);
        if constexpr (OP == 0xd8 || OP == 0xdc || OP == 0xda || OP == 0xde) {
            // arithmetic: ST0 op operand (D8 m32 / DC m64 / DA m32int / DE m16int, D8 ST(i)); DC and DE register forms write ST(i)
            if constexpr (mem) {
                T b;
                if constexpr (OP == 0xd8) b = P::from32(r4(ea));
                else if constexpr (OP == 0xdc) b = P::from64(r8(ea));
                else if constexpr (OP == 0xda) b = load_int(ea, 32);
                else b = load_int(ea, 16);
                const T a = get(R, 0);
                if constexpr (reg == 2 || reg == 3) { compare(R, a, b); if constexpr (reg == 3) pop(R); }
                else put(R, 0, arith(reg, a, b, c));
            } else if constexpr (OP == 0xd8) {
                const T a = get(R, 0), b = get(R, rm);
                if constexpr (reg == 2 || reg == 3) { compare(R, a, b); if constexpr (reg == 3) pop(R); }
                else put(R, 0, arith(reg, a, b, c));
            } else if constexpr (OP == 0xdc) {
                static_assert(reg != 2 && reg != 3, "FCOM2/FCOMP3 aliases are not used");
                put(R, rm, arith(reg >= 4 ? reg ^ 1 : reg, get(R, rm), get(R, 0), c));
            } else if constexpr (OP == 0xde) {
                if constexpr (reg == 3) { static_assert(MODRM == 0xd9, "FCOMPP"); compare(R, get(R, 0), get(R, 1)); pop(R); pop(R); }
                else { put(R, rm, arith(reg >= 4 ? reg ^ 1 : reg, get(R, rm), get(R, 0), c)); pop(R); }
            } else {   // DA register forms: FUCOMPP (FCMOVcc are not used by the game)
                static_assert(MODRM == 0xe9, "unsupported DA register form");
                compare(R, get(R, 0), get(R, 1)); pop(R); pop(R);
            }
        } else if constexpr (OP == 0xd9) {
            if constexpr (mem) {
                if constexpr (reg == 0) push(R, P::from32(r4(ea)));
                else if constexpr (reg == 2 || reg == 3) { w4(ea, P::to32(get(R, 0), c)); if constexpr (reg == 3) pop(R); }
                else if constexpr (reg == 4) env_load(R, static_cast<const u8*>(ea));
                else if constexpr (reg == 5) w2(R + O_CW, r2(ea));
                else if constexpr (reg == 6) env_store(R, static_cast<u8*>(ea));
                else w2(ea, control_word(R));
            } else if constexpr (MODRM < 0xc8) push(R, get(R, rm));                              // FLD ST(i)
            else if constexpr (MODRM < 0xd0) { const T a = get(R, 0), b = get(R, rm); put(R, 0, b); put(R, rm, a); }   // FXCH
            else if constexpr (MODRM == 0xd0) {}                                                 // FNOP
            else if constexpr (MODRM == 0xe0) put(R, 0, P::neg(get(R, 0)));
            else if constexpr (MODRM == 0xe1) put(R, 0, P::abs(get(R, 0)));
            else if constexpr (MODRM == 0xe4) compare(R, get(R, 0), P::zero());                  // FTST
            else if constexpr (MODRM == 0xe5) {                                                  // FXAM
                bool neg; const unsigned k = P::klass(get(R, 0), neg);
                const unsigned code[5][3] = {{0, 1, 0}, {1, 0, 0}, {0, 1, 1}, {0, 0, 1}, {1, 1, 0}};   // C3 C2 C0: normal, zero, infinity, NaN, denormal
                set_cc(R, code[k][2], neg, code[k][1], code[k][0]);
            }
            else if constexpr (MODRM == 0xe8) push(R, P::one());
            else if constexpr (MODRM == 0xe9) push(R, P::l2t(c.rc));
            else if constexpr (MODRM == 0xea) push(R, P::l2e(c.rc));
            else if constexpr (MODRM == 0xeb) push(R, P::pi(c.rc));
            else if constexpr (MODRM == 0xec) push(R, P::lg2(c.rc));
            else if constexpr (MODRM == 0xed) push(R, P::ln2(c.rc));
            else if constexpr (MODRM == 0xee) push(R, P::zero());
            else if constexpr (MODRM == 0xf6) set_top(R, top(R) - 1);                            // FDECSTP
            else if constexpr (MODRM == 0xf7) set_top(R, top(R) + 1);                            // FINCSTP
            else if constexpr (MODRM == 0xf8) prem(R, false);
            else if constexpr (MODRM == 0xf5) prem(R, true);
            else if constexpr (MODRM == 0xfa) put(R, 0, P::sqrt(get(R, 0), c));
            else if constexpr (MODRM == 0xfc) put(R, 0, P::rnd(get(R, 0), c));
            else if constexpr (MODRM == 0xfd) put(R, 0, P::scale(get(R, 0), get(R, 1), c));      // FSCALE
            else transcend<MODRM>(R);
        } else if constexpr (OP == 0xdb) {
            if constexpr (mem) {
                if constexpr (reg == 0) push(R, load_int(ea, 32));
                else if constexpr (reg == 1 || reg == 2 || reg == 3) { store_int(ea, get(R, 0), 32, R); if constexpr (reg != 2) pop(R); }
                else if constexpr (reg == 5) push(R, P::from80(static_cast<const u8*>(ea)));
                else { static_assert(reg == 7, "unsupported DB form"); P::to80(static_cast<u8*>(ea), get(R, 0)); pop(R); }
            } else if constexpr (MODRM == 0xe2) {}                                               // FNCLEX
            else { static_assert(MODRM == 0xe3, "unsupported DB register form");                 // FNINIT
                w2(R + O_CW, 0x37f); set_status_word(R, 0); w2(R + O_TW, 0xffff); }
        } else if constexpr (OP == 0xdd) {
            if constexpr (mem) {
                if constexpr (reg == 0) push(R, P::from64(r8(ea)));
                else if constexpr (reg == 1 || reg == 2 || reg == 3) { if constexpr (reg == 1) store_int(ea, get(R, 0), 64, R); else w8(ea, P::to64(get(R, 0), c)); if constexpr (reg != 2) pop(R); }
                else if constexpr (reg == 4) {   // FRSTOR
                    const u8* m = static_cast<const u8*>(ea); env_load(R, m);
                    for (unsigned i = 0; i < 8; ++i) P::wr(slot(R, i), P::from80(m + 28 + 10 * i));
                } else if constexpr (reg == 6) {   // FNSAVE
                    u8* m = static_cast<u8*>(ea); env_store(R, m);
                    for (unsigned i = 0; i < 8; ++i) P::to80(m + 28 + 10 * i, get(R, i));
                    w2(R + O_CW, 0x37f); set_status_word(R, 0); w2(R + O_TW, 0xffff);
                } else { static_assert(reg == 7, "unsupported DD form"); w2(ea, status_word(R)); }   // FNSTSW m16
            } else if constexpr (MODRM < 0xd0) {}                                                // FFREE: tags are not modelled
            else if constexpr (MODRM < 0xe0) { put(R, rm, get(R, 0)); if constexpr (MODRM >= 0xd8) pop(R); }   // FST / FSTP ST(i)
            else { compare(R, get(R, 0), get(R, rm)); if constexpr (MODRM >= 0xe8) pop(R); }    // FUCOM / FUCOMP
        } else {
            static_assert(OP == 0xdf, "not an x87 opcode");
            if constexpr (mem) {
                if constexpr (reg == 0) push(R, load_int(ea, 16));
                else if constexpr (reg == 1 || reg == 2 || reg == 3) { store_int(ea, get(R, 0), 16, R); if constexpr (reg != 2) pop(R); }
                else if constexpr (reg == 5) push(R, load_int(ea, 64));
                else { static_assert(reg == 7, "unsupported DF form"); store_int(ea, get(R, 0), 64, R); pop(R); }
            } else { static_assert(MODRM == 0xe0, "unsupported DF register form"); return status_word(R); }   // FNSTSW AX
        }
        return 0;
    }
};
template<u32 OP, u32 MODRM> inline u32 insn(u8* R, void* ea) { return Fpu<Policy>::run<OP, MODRM>(R, ea); }
}
