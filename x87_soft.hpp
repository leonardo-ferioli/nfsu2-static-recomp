#pragma once
// Exact 80-bit x87 arithmetic in software (IEEE 754 extended precision, the x87 data format), for hosts without an x87 FPU
// (arm64) and as the oracle of the faster modes. Header only, no x86 intrinsics, no floating point in the arithmetic itself.
//
// Covered: add, sub, mul, div, sqrt, round to integer, conversions to and from binary32/binary64/integers, compare,
// with the x87 control word's rounding control (RC) and precision control (PC: results are rounded to 24, 53 or 64 bits of
// significand, the exponent range stays that of the extended format). Exceptions are masked: invalid operations give the
// default QNaN, x/0 gives an infinity, overflow and underflow follow the rounding mode. Status-word exception flags are not
// modelled. Transcendental functions are not here (x87v.hpp computes them in double).
#include <cstdint>
#include <cstring>

namespace nfsu2raw::x87soft {
using u8 = uint8_t; using u16 = uint16_t; using u32 = uint32_t; using u64 = uint64_t; using s64 = int64_t;
#if defined(__SIZEOF_INT128__)
using u128 = unsigned __int128;
#else
using u128 = unsigned _BitInt(128);
#endif

struct Ext { u64 sig; u16 se; };                       // significand with explicit integer bit; sign (bit 15) and biased exponent
inline Ext load(const void* p) { Ext x; std::memcpy(&x.sig, p, 8); std::memcpy(&x.se, static_cast<const u8*>(p) + 8, 2); return x; }
inline void store(void* p, Ext x) { std::memcpy(p, &x.sig, 8); std::memcpy(static_cast<u8*>(p) + 8, &x.se, 2); }
constexpr Ext indefinite{0xC000000000000000ull, 0xFFFF};   // the default QNaN of an invalid operation

// Control word fields: rc 0 nearest-even, 1 down, 2 up, 3 toward zero; pcb = significand bits of results.
struct Ctl { unsigned rc; unsigned pcb; };
inline Ctl control(u16 cw) { static const unsigned bits[4] = {24, 64, 53, 64}; return {unsigned(cw >> 10) & 3, bits[(cw >> 8) & 3]}; }

enum Kind : u8 { ZERO, NORMAL, INF, NAN_ };
struct Un { bool neg; Kind k; int32_t e; u64 sig; };   // value = (sig / 2^63) * 2^e with sig's top bit set (NORMAL)
inline int clz64(u64 x) { return x ? __builtin_clzll(x) : 64; }
inline int clz128(u128 x) { const u64 hi = u64(x >> 64); return hi ? clz64(hi) : 64 + clz64(u64(x)); }

inline Un unpack(Ext x) {
    Un u{bool(x.se >> 15), NORMAL, 0, x.sig};
    const int ex = x.se & 0x7fff;
    if (ex == 0x7fff) { u.k = (x.sig << 1) == 0 ? INF : NAN_; return u; }
    if (ex == 0) {
        if (x.sig == 0) { u.k = ZERO; return u; }
        const int s = clz64(x.sig); u.sig = x.sig << s; u.e = -16382 - s; return u;   // denormal: normalise
    }
    if (!(x.sig >> 63)) { u.k = NAN_; u.sig = indefinite.sig; return u; }                // unnormal: invalid operand
    u.e = ex - 16383; return u;
}
inline Ext make_zero(bool neg) { return {0, u16(neg ? 0x8000 : 0)}; }
inline Ext make_inf(bool neg) { return {0x8000000000000000ull, u16(0x7fff | (neg ? 0x8000 : 0))}; }
inline Ext quiet(Ext x) { x.sig |= 0x4000000000000000ull; return x; }
inline Ext nan_of(Ext a, Ext b) {                      // the NaN an operation with NaN operand(s) returns
    const bool na = unpack(a).k == NAN_, nb = unpack(b).k == NAN_;
    if (na && nb) {   // a QNaN beats a signalling NaN; otherwise the larger significand wins
        const bool sa = !(a.sig & 0x4000000000000000ull), sb = !(b.sig & 0x4000000000000000ull);
        if (sa != sb) return sa ? b : a;
        const Ext qa = quiet(a), qb = quiet(b); return qb.sig > qa.sig ? qb : qa;
    }
    return na ? quiet(a) : quiet(b);
}

struct Rounded { u64 hi; int32_t e; };
// Round the 128-bit significand (hi:lo, hi's top bit set) at `pcb` bits; values below 2^emin are first shifted right (denormal).
inline Rounded round_core(bool neg, int32_t e, u64 hi, u64 lo, unsigned rc, unsigned pcb, int32_t emin) {
    if (e < emin) {
        const unsigned d = unsigned(emin - e);
        if (d >= 128) { lo = (hi | lo) != 0; hi = 0; }
        else if (d >= 64) {
            const unsigned s = d - 64;
            u64 sticky = lo != 0, moved = hi;
            if (s) { sticky |= (hi << (64 - s)) != 0; moved = hi >> s; }
            lo = moved | sticky; hi = 0;
        } else {
            const u64 sticky = (lo << (64 - d)) != 0;
            lo = (lo >> d) | (hi << (64 - d)) | sticky; hi >>= d;
        }
        e = emin;
    }
    const unsigned drop = 64 - pcb;
    u64 round_bit, sticky, lsb;
    if (drop) { round_bit = (hi >> (drop - 1)) & 1; sticky = ((hi & ((1ull << (drop - 1)) - 1)) | lo) != 0; lsb = (hi >> drop) & 1; }
    else { round_bit = lo >> 63; sticky = (lo & 0x7fffffffffffffffull) != 0; lsb = hi & 1; }
    bool inc = false;
    switch (rc) {
        case 0: inc = round_bit && (sticky || lsb); break;
        case 1: inc = neg && (round_bit || sticky); break;
        case 2: inc = !neg && (round_bit || sticky); break;
        default: break;
    }
    u64 kept = drop ? (hi >> drop) << drop : hi;
    if (inc) {
        const u64 t = kept + (drop ? 1ull << drop : 1ull);
        if (t < kept) { kept = 1ull << 63; ++e; } else kept = t;
    }
    return {kept, e};
}
inline Ext overflow_result(bool neg, unsigned rc, unsigned pcb) {
    const bool to_inf = rc == 0 || (rc == 1 && neg) || (rc == 2 && !neg);
    if (to_inf) return make_inf(neg);
    return {~0ull << (64 - pcb), u16(0x7ffe | (neg ? 0x8000 : 0))};
}
inline Ext finish(bool neg, int32_t e, u64 hi, u64 lo, Ctl c) {
    const Rounded r = round_core(neg, e, hi, lo, c.rc, c.pcb, -16382);
    if (r.hi == 0) return make_zero(neg);
    if (r.e > 16383) return overflow_result(neg, c.rc, c.pcb);
    return {r.hi, u16((r.hi >> 63 ? r.e + 16383 : 0) | (neg ? 0x8000 : 0))};
}
inline u128 shr_jam(u128 x, unsigned d) {
    if (d == 0) return x;
    if (d >= 128) return x != 0;
    const bool sticky = (x & ((u128(1) << d) - 1)) != 0;
    return (x >> d) | u128(sticky);
}

inline Ext add(Ext xa, Ext xb, Ctl c, bool subtract = false) {
    Un a = unpack(xa), b = unpack(xb);
    if (a.k == NAN_ || b.k == NAN_) return nan_of(xa, xb);
    if (subtract) b.neg = !b.neg;
    if (a.k == INF || b.k == INF) {
        if (a.k == INF && b.k == INF) return a.neg == b.neg ? make_inf(a.neg) : indefinite;
        return a.k == INF ? make_inf(a.neg) : make_inf(b.neg);
    }
    if (a.k == ZERO && b.k == ZERO) return make_zero(a.neg == b.neg ? a.neg : c.rc == 1);
    if (a.k == ZERO) return finish(b.neg, b.e, b.sig, 0, c);
    if (b.k == ZERO) return finish(a.neg, a.e, a.sig, 0, c);
    if (a.e < b.e || (a.e == b.e && a.sig < b.sig)) { const Un t = a; a = b; b = t; }
    const u128 A = u128(a.sig) << 64, B = shr_jam(u128(b.sig) << 64, unsigned(a.e - b.e));
    int32_t e = a.e;
    if (a.neg == b.neg) {
        u128 S = A + B;
        if (S < A) { S = (S >> 1) | (u128(1) << 127) | (S & 1); ++e; }
        return finish(a.neg, e, u64(S >> 64), u64(S), c);
    }
    u128 D = A - B;
    if (D == 0) return make_zero(c.rc == 1);
    const int lz = clz128(D);
    D <<= lz; e -= lz;
    return finish(a.neg, e, u64(D >> 64), u64(D), c);
}
inline Ext mul(Ext xa, Ext xb, Ctl c) {
    const Un a = unpack(xa), b = unpack(xb);
    if (a.k == NAN_ || b.k == NAN_) return nan_of(xa, xb);
    const bool neg = a.neg != b.neg;
    if (a.k == INF || b.k == INF) return (a.k == ZERO || b.k == ZERO) ? indefinite : make_inf(neg);
    if (a.k == ZERO || b.k == ZERO) return make_zero(neg);
    u128 P = u128(a.sig) * u128(b.sig);
    int32_t e = a.e + b.e;
    if (P >> 127) ++e; else P <<= 1;
    return finish(neg, e, u64(P >> 64), u64(P), c);
}
// floor(n / d) and n % d for a 128-bit numerator below d * 2^64 (so the quotient has at most 64 bits): Knuth's algorithm D with
// 32-bit digits (Hacker's Delight divlu); no 128-bit division, which compiler-rt-less toolchains do not provide.
inline void divmod(u128 n, u64 d, u64& q, u64& r) {
    const u64 u1 = u64(n >> 64), u0 = u64(n), b = 1ull << 32;
    const int s = clz64(d);
    d <<= s;
    const u64 vn1 = d >> 32, vn0 = d & 0xffffffffull;
    const u64 un32 = s ? (u1 << s) | (u0 >> (64 - s)) : u1, un10 = u0 << s;
    const u64 un1 = un10 >> 32, un0 = un10 & 0xffffffffull;
    u64 q1 = un32 / vn1, rhat = un32 - q1 * vn1;
    while (q1 >= b || q1 * vn0 > b * rhat + un1) { --q1; rhat += vn1; if (rhat >= b) break; }
    const u64 un21 = un32 * b + un1 - q1 * d;
    u64 q0 = un21 / vn1; rhat = un21 - q0 * vn1;
    while (q0 >= b || q0 * vn0 > b * rhat + un0) { --q0; rhat += vn1; if (rhat >= b) break; }
    q = q1 * b + q0;
    r = (un21 * b + un0 - q0 * d) >> s;
}
inline Ext div(Ext xa, Ext xb, Ctl c) {
    const Un a = unpack(xa), b = unpack(xb);
    if (a.k == NAN_ || b.k == NAN_) return nan_of(xa, xb);
    const bool neg = a.neg != b.neg;
    if (a.k == INF) return b.k == INF ? indefinite : make_inf(neg);
    if (b.k == INF) return make_zero(neg);
    if (b.k == ZERO) return a.k == ZERO ? indefinite : make_inf(neg);
    if (a.k == ZERO) return make_zero(neg);
    int32_t e = a.e - b.e;
    unsigned shift = 63;
    if (a.sig < b.sig) { shift = 64; --e; }
    u64 q, r, q2, r2;
    divmod(u128(a.sig) << shift, b.sig, q, r);
    divmod(u128(r) << 64, b.sig, q2, r2);
    return finish(neg, e, q, q2 | u64(r2 != 0), c);
}
inline Ext sqrt(Ext x, Ctl c) {
    const Un a = unpack(x);
    if (a.k == NAN_) return quiet(x);
    if (a.k == ZERO) return x;
    if (a.neg) return indefinite;
    if (a.k == INF) return x;
    u128 n = (u128(a.sig) << (a.e & 1)) << 63, root = 0, bit = u128(1) << 126;
    while (bit > n) bit >>= 2;
    while (bit) {
        if (n >= root + bit) { n -= root + bit; root = (root >> 1) + bit; } else root >>= 1;
        bit >>= 2;
    }
    const u64 R = u64(root);
    const u64 lo = n == 0 ? 0 : ((n > root) ? 0x8000000000000001ull : 1ull);   // above / below half an ulp, never exactly half
    return finish(false, (a.e - (a.e & 1)) / 2, R, lo, c);
}

// Integer part with rounding: magnitude, whether the value is exactly an integer is not needed.
struct IntRound { u64 mag; bool big; };   // big: |x| >= 2^63 (the magnitude is meaningless)
inline IntRound round_to_integer(const Un& u, unsigned rc) {
    if (u.e >= 63) return {0, true};
    u64 ip, round_bit, sticky;
    if (u.e < -1) { ip = 0; round_bit = 0; sticky = 1; }
    else if (u.e == -1) { ip = 0; round_bit = 1; sticky = (u.sig << 1) != 0; }
    else { const unsigned s = unsigned(63 - u.e); ip = u.sig >> s; const u64 rem = u.sig << (64 - s); round_bit = rem >> 63; sticky = (rem << 1) != 0; }
    bool inc = false;
    switch (rc) {
        case 0: inc = round_bit && (sticky || (ip & 1)); break;
        case 1: inc = u.neg && (round_bit || sticky); break;
        case 2: inc = !u.neg && (round_bit || sticky); break;
        default: break;
    }
    return {ip + inc, false};
}
inline Ext rndint(Ext x, Ctl c) {
    const Un u = unpack(x);
    if (u.k == NAN_) return quiet(x);
    if (u.k != NORMAL || u.e >= 63) return x;
    const IntRound r = round_to_integer(u, c.rc);
    if (r.mag == 0) return make_zero(u.neg);
    const int s = clz64(r.mag);
    return {r.mag << s, u16((63 - s + 16383) | (u.neg ? 0x8000 : 0))};
}
struct IntResult { bool ok; s64 value; };
// FIST/FISTP: `bits` is 16, 32 or 64; out of range, NaN and infinity give ok=false (the caller stores the integer indefinite).
inline IntResult to_int(Ext x, unsigned rc, unsigned bits) {
    const Un u = unpack(x);
    if (u.k == NAN_ || u.k == INF) return {false, 0};
    if (u.k == ZERO) return {true, 0};
    const IntRound r = round_to_integer(u, rc);
    if (r.big) return {u.neg && u.e == 63 && u.sig == (1ull << 63) && bits == 64, s64(0x8000000000000000ull)};
    const u64 limit = 1ull << (bits - 1);
    if (u.neg ? r.mag > limit : r.mag >= limit) return {false, 0};
    return {true, u.neg ? s64(0 - r.mag) : s64(r.mag)};
}
inline Ext from_int(s64 v) {
    if (v == 0) return make_zero(false);
    const bool neg = v < 0; const u64 mag = neg ? 0 - u64(v) : u64(v);
    const int s = clz64(mag);
    return {mag << s, u16((63 - s + 16383) | (neg ? 0x8000 : 0))};
}
inline Ext from_f32(u32 b) {
    const bool neg = b >> 31; const u32 ex = (b >> 23) & 0xff, m = b & 0x7fffff;
    const u16 sg = neg ? 0x8000 : 0;
    if (ex == 0xff) return m ? Ext{0xC000000000000000ull | (u64(m) << 40), u16(0x7fff | sg)} : make_inf(neg);
    if (ex == 0) {
        if (m == 0) return make_zero(neg);
        const int s = clz64(u64(m));   // denormal m * 2^-149, normalised: exponent 63 - s - 149
        return {u64(m) << s, u16((63 - s - 149 + 16383) | sg)};
    }
    return {(1ull << 63) | (u64(m) << 40), u16((ex - 127 + 16383) | sg)};
}
inline Ext from_f64(u64 b) {
    const bool neg = b >> 63; const u64 ex = (b >> 52) & 0x7ff, m = b & 0xfffffffffffffull;
    const u16 sg = neg ? 0x8000 : 0;
    if (ex == 0x7ff) return m ? Ext{0xC000000000000000ull | (m << 11), u16(0x7fff | sg)} : make_inf(neg);
    if (ex == 0) {
        if (m == 0) return make_zero(neg);
        const int s = clz64(m);        // denormal m * 2^-1074, normalised: exponent 63 - s - 1074
        return {m << s, u16((63 - s - 1074 + 16383) | sg)};
    }
    return {(1ull << 63) | (m << 11), u16((int(ex) - 1023 + 16383) | sg)};
}
// Binary32/binary64 results (FST/FSTP m32/m64): rounding as the control word says, denormals and overflow of the narrow format.
inline u64 to_binary(Ext x, Ctl c, unsigned mant_bits, int emin, int emax) {
    const unsigned exp_bits = mant_bits == 23 ? 8 : 11;
    const u64 exp_all = (1ull << exp_bits) - 1;
    const Un u = unpack(x);
    const u64 sign = u64(u.neg) << (mant_bits + exp_bits);
    if (u.k == NAN_) return sign | (exp_all << mant_bits) | (1ull << (mant_bits - 1)) | ((u.sig >> (63 - mant_bits)) & ((1ull << mant_bits) - 1));
    if (u.k == INF) return sign | (exp_all << mant_bits);
    if (u.k == ZERO) return sign;
    const Rounded r = round_core(u.neg, u.e, u.sig, 0, c.rc, mant_bits + 1, emin);
    if (r.hi == 0) return sign;
    if (r.e > emax) {
        const bool to_inf = c.rc == 0 || (c.rc == 1 && u.neg) || (c.rc == 2 && !u.neg);
        return sign | (to_inf ? exp_all << mant_bits : ((exp_all - 1) << mant_bits) | ((1ull << mant_bits) - 1));
    }
    const u64 mant = (r.hi >> (63 - mant_bits)) & ((1ull << mant_bits) - 1);
    const u64 biased = (r.hi >> 63) ? u64(r.e - emin + 1) : 0;
    return sign | (biased << mant_bits) | mant;
}
inline u32 to_f32(Ext x, Ctl c) { return u32(to_binary(x, c, 23, -126, 127)); }
inline u64 to_f64(Ext x, Ctl c) { return to_binary(x, c, 52, -1022, 1023); }

enum Order { LESS, EQUAL, GREATER, UNORDERED };
inline Order compare(Ext xa, Ext xb) {
    const Un a = unpack(xa), b = unpack(xb);
    if (a.k == NAN_ || b.k == NAN_) return UNORDERED;
    if (a.k == ZERO && b.k == ZERO) return EQUAL;
    auto magnitude = [](const Un& u, const Un& v) {   // |u| <=> |v|
        if (u.k == INF || v.k == INF) return u.k == v.k ? 0 : (u.k == INF ? 1 : -1);
        if (u.k == ZERO || v.k == ZERO) return u.k == v.k ? 0 : (u.k == ZERO ? -1 : 1);
        if (u.e != v.e) return u.e > v.e ? 1 : -1;
        return u.sig == v.sig ? 0 : (u.sig > v.sig ? 1 : -1);
    };
    if (a.neg != b.neg) return a.neg ? LESS : GREATER;
    const int m = magnitude(a, b);
    if (m == 0) return EQUAL;
    return (m > 0) != a.neg ? GREATER : LESS;
}
inline Ext negate(Ext x) { x.se ^= 0x8000; return x; }
inline Ext absolute(Ext x) { x.se &= 0x7fff; return x; }
}
