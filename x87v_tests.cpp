// The virtual x87 (x87v.hpp) against the host FPU, instruction by instruction: every encoding the game uses, random stack contents and
// operands, every control word combination the mode supports. x86 hosts only (the oracle is the real FPU).
//   x87v_tests [trials per encoding]        build with -DNFSU2_X87_SOFT80 for the exact mode (otherwise the double mode)
#include "x87v.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>
#include <vector>

using namespace nfsu2raw;
using x87soft::Ext;
static std::mt19937_64 rng(777);
enum Kind { NONE, F32, F64, I16, I32, I64, M80, CW16, SW16, ENV };
constexpr bool soft = std::is_same_v<x87v::Policy, x87v::SoftP>;

static Kind operand_kind(u32 op, u32 modrm, bool& writes) {
    const u32 reg = (modrm >> 3) & 7; const bool mem = (modrm >> 6) != 3; writes = false;
    if (!mem) return NONE;
    switch (op) {
        case 0xd8: return F32;
        case 0xdc: return F64;
        case 0xda: return I32;
        case 0xde: return I16;
        case 0xd9: if (reg == 0) return F32; if (reg == 2 || reg == 3) { writes = true; return F32; } if (reg == 5) return CW16; if (reg == 7) { writes = true; return CW16; } return ENV;
        case 0xdb: if (reg == 0) return I32; if (reg == 2 || reg == 3) { writes = true; return I32; } if (reg == 5) return M80; writes = true; return M80;
        case 0xdd: if (reg == 0) return F64; if (reg == 2 || reg == 3) { writes = true; return F64; } if (reg == 7) { writes = true; return SW16; } return ENV;
        default: if (reg == 0) return I16; if (reg == 2 || reg == 3) { writes = true; return I16; } if (reg == 5) return I64; writes = true; return I64;
    }
}
static Ext slot_ext(const u8* s) {
    if constexpr (soft) return x87soft::load(s); else return x87soft::from_f64(std::bit_cast<u64>(x87v::DblP::rd(s)));
}
static Ext ext_of_double(double d) { u8 t[10]; asm volatile("fldl %1; fstpt %0" : "=m"(t) : "m"(d) : "st"); return x87soft::load(t); }
static double random_double() {
    switch (rng() % 14) {
        case 0: return 0.0; case 1: return -0.0; case 2: return 1.0; case 3: return -1.0; case 4: return 0.5;
        case 5: return double(int64_t(rng()) >> (rng() % 64));
        case 6: return double(float(std::bit_cast<float>(uint32_t(rng()))));
        case 7: return std::ldexp(double(int(rng() % 2001) - 1000), int(rng() % 40) - 20);
        case 8: return double(std::bit_cast<float>(uint32_t(0x3f000000u + (rng() % 0x01000000u)))) * ((rng() & 1) ? 1 : -1);   // floats around 0.5..2
        case 9: return std::numeric_limits<double>::infinity() * ((rng() & 1) ? 1 : -1);
        default: { double d = std::bit_cast<double>((rng() & 0x800fffffffffffffull) | (uint64_t(1023 + int(rng() % 60) - 30) << 52)); return d; }
    }
}
static std::vector<u8> make_operand(Kind k, double v) {
    std::vector<u8> b(32, 0);
    switch (k) {
        case F32: { float f = float(v); std::memcpy(b.data(), &f, 4); break; }
        case F64: std::memcpy(b.data(), &v, 8); break;
        case I16: { int16_t i = int16_t(int64_t(rng()) >> (48 + rng() % 16)); std::memcpy(b.data(), &i, 2); break; }
        case I32: { int32_t i = int32_t(int64_t(rng()) >> (32 + rng() % 32)); std::memcpy(b.data(), &i, 4); break; }
        case I64: { int64_t i = int64_t(rng()) >> (rng() % 64); std::memcpy(b.data(), &i, 8); break; }
        case M80: x87soft::store(b.data(), ext_of_double(v)); break;
        case CW16: { uint16_t cw = uint16_t(0x7f | ((rng() % 3 == 1 ? 2 : (rng() % 3 == 0 ? 0 : 3)) << 8) | ((rng() % 4) << 10)); std::memcpy(b.data(), &cw, 2); break; }
        default: break;
    }
    return b;
}
template<u32 OP, u32 MODRM> static void host_exec(void* ea, u32& ax) {
    constexpr bool mem = (MODRM >> 6) != 3;
    if constexpr (OP == 0xdf && MODRM == 0xe0) { u32 r; asm volatile(".byte %c1,%c2" : "=a"(r) : "i"(OP), "i"(MODRM) : "memory"); ax = r & 0xffff; }
    else if constexpr (mem) asm volatile(".byte %c1,%c2" ::"a"(ea), "i"(OP), "i"(MODRM) : "memory");
    else asm volatile(".byte %c0,%c1" ::"i"(OP), "i"(MODRM) : "memory");
}
struct Counters { long trials = 0, bad = 0; double worst = 0; };
static bool approx_op(u32 op, u32 modrm) { return op == 0xd9 && (modrm == 0xf0 || modrm == 0xf1 || modrm == 0xf2 || modrm == 0xf3 || modrm == 0xf9 || modrm == 0xfb || modrm == 0xfe || modrm == 0xff); }
static double rel_error(Ext a, Ext b) {
    const double x = std::bit_cast<double>(x87soft::to_f64(a, {0, 53})), y = std::bit_cast<double>(x87soft::to_f64(b, {0, 53}));
    if (x == y || (std::isnan(x) && std::isnan(y))) return 0;
    return std::fabs(x - y) / std::fmax(std::fabs(x), 1.0);
}
template<u32 OP, u32 MODRM> static Counters test_one(long trials, const char* name) {
    Counters ct;
    bool writes; const Kind kind = operand_kind(OP, MODRM, writes);
    if (kind == ENV) {
        static std::vector<u8> Rbuf(0x4000);
        // FLDENV / FRSTOR load an image taken from a (different) host state; FNSTENV / FNSAVE store one. The state afterwards (TOP, control word,
        // the registers the image or the stack holds) and the stored control/status words and register images must agree.
        const u32 reg = (MODRM >> 3) & 7; const bool loads = reg == 4; const bool saves_regs = OP == 0xdd;
        for (long t = 0; t < trials / 4 + 1; ++t) {
            constexpr int N = 5;
            const uint16_t cw = uint16_t(0x7f | ((rng() % 3 == 1 ? 2 : (rng() % 3 == 0 ? 0 : 3)) << 8) | ((rng() % 4) << 10));
            Ext ext[N]; double vals[N]; for (int i = 0; i < N; ++i) { vals[i] = random_double(); if (std::isnan(vals[i])) vals[i] = 1.5; ext[i] = ext_of_double(vals[i]); }
            std::vector<u8> image(112, 0), image_v(112, 0);
            if (loads) {   // the image: state with k values, taken by the host
                asm volatile("fninit; fldcw %0" ::"m"(cw));
                const int k = int(rng() % (N + 1)); for (int i = k - 1; i >= 0; --i) { u8 tmp[10]; x87soft::store(tmp, ext[i]); asm volatile("fldt %0" ::"m"(tmp) : "st"); }
                asm volatile("fnsave %0" : "=m"(*reinterpret_cast<u8(*)[108]>(image.data()))::"memory");
                image_v = image;
                // FNSAVE zeroes the exception pointers of this image; the registers of the image are what matters.
            }
            // host: a different current state, then the instruction
            // all eight physical registers get known contents first (FNINIT does not clear them), so a loaded image selects well-defined data
            Ext fill[8]; for (auto& f : fill) f = ext_of_double(random_double());
            asm volatile("fninit; fldcw %0" ::"m"(cw));
            for (int p = 7; p >= 0; --p) { u8 tmp[10]; x87soft::store(tmp, fill[p]); asm volatile("fldt %0" ::"m"(tmp) : "st"); }
            asm volatile("fninit; fldcw %0" ::"m"(cw));
            const int depth_now = int(rng() % (N + 1)); for (int i = depth_now - 1; i >= 0; --i) { u8 tmp[10]; x87soft::store(tmp, ext[(i + 2) % N]); asm volatile("fldt %0" ::"m"(tmp) : "st"); }
            std::vector<u8> out_h = image, out_v = image_v;
            u32 ax_h = 0; host_exec<OP, MODRM>(loads ? image.data() : out_h.data(), ax_h);
            u8 env[108]; asm volatile("fnsave %0" : "=m"(env)::"memory"); asm volatile("fninit");
            // virtual
            u8* R = Rbuf.data(); std::memset(R, 0, 0x4000); w2(R + x87v::O_CW, cw);
            for (int p = 0; p < 8; ++p) { u8 tmp[10]; x87soft::store(tmp, fill[p]); x87v::Policy::wr(R + x87v::O_ST + 16 * p, x87v::Policy::from80(tmp)); }
            for (int i = depth_now - 1; i >= 0; --i) { u8 tmp[10]; x87soft::store(tmp, ext[(i + 2) % N]); x87v::Fpu<x87v::Policy>::push(R, x87v::Policy::from80(tmp)); }
            x87v::insn<OP, MODRM>(R, loads ? image_v.data() : out_v.data());
            uint16_t sw_h, cw_h, tw_h; std::memcpy(&sw_h, env + 4, 2); std::memcpy(&cw_h, env, 2); std::memcpy(&tw_h, env + 8, 2);
            bool ok = ((sw_h >> 11) & 7) == x87v::top(R) && (cw_h & 0x0f3f) == (x87v::control_word(R) & 0x0f3f);
            for (unsigned i = 0; i < 8 && ok; ++i) {
                if (((tw_h >> (2 * ((x87v::top(R) + i) & 7))) & 3) == 3) continue;
                if (!x87v::shadow_equal_for_tests(x87soft::load(env + 28 + 10 * i), x87v::slot(R, i))) ok = false;
            }
            if (!loads) {   // stored image: control word, status word TOP, and for FSAVE the register images
                uint16_t a, b; std::memcpy(&a, out_h.data(), 2); std::memcpy(&b, out_v.data(), 2); if ((a & 0x0f3f) != (b & 0x0f3f)) ok = false;
                std::memcpy(&a, out_h.data() + 4, 2); std::memcpy(&b, out_v.data() + 4, 2); if ((a ^ b) & 0x3800) ok = false;
                if (saves_regs) {
                    uint16_t twh; std::memcpy(&twh, out_h.data() + 8, 2);
                    for (unsigned i = 0; i < 8 && ok; ++i) {
                        if (((twh >> (2 * ((((a >> 11) & 7) + i) & 7))) & 3) == 3) continue;
                        if (!x87v::shadow_equal_for_tests(x87soft::load(out_h.data() + 28 + 10 * i), out_v.data() + 28 + 10 * i, true)) ok = false;
                    }
                }
            }
            ++ct.trials;
            if (!ok && ++ct.bad <= 2) std::printf("  MISMATCH ENV %s op=%02x/%02x depth_now=%d top_h=%u top_v=%u cw_h=%04x cw_v=%04x\n", name, OP, MODRM, depth_now, (sw_h >> 11) & 7, x87v::top(R), cw_h, x87v::control_word(R));
        }
        return ct;
    }
    using P = x87v::Policy;
    static std::vector<u8> Rbuf(0x4000);
    for (long t = 0; t < trials; ++t) {
        const unsigned pc = soft ? (rng() % 3 == 0 ? 0 : (rng() % 2 ? 2 : 3)) : (rng() % 2 ? 0 : 2);
        const bool honors_rc = OP == 0xd9 && MODRM == 0xfc || ((OP == 0xdb || OP == 0xdf || OP == 0xdd) && (MODRM >> 6) != 3 && (((MODRM >> 3) & 7) == 2 || ((MODRM >> 3) & 7) == 3 || ((MODRM >> 3) & 7) == 7));
        const unsigned rc = (soft || honors_rc) ? rng() % 4 : 0;   // the double mode computes in round-to-nearest and honours RC only where it matters
        const uint16_t cw = uint16_t(0x7f | (pc << 8) | (rc << 10));
        const bool pushes = (OP == 0xd9 && ((MODRM >= 0xc0 && MODRM < 0xc8) || (MODRM >= 0xe8 && MODRM <= 0xee) || MODRM == 0xf2 || MODRM == 0xfb)) || (((MODRM >> 6) != 3) && ((OP == 0xd9 && !(MODRM & 0x38)) || (OP == 0xdb && (((MODRM >> 3) & 7) == 0 || ((MODRM >> 3) & 7) == 5)) || (OP == 0xdd && !(MODRM & 0x38)) || (OP == 0xdf && (((MODRM >> 3) & 7) == 0 || ((MODRM >> 3) & 7) == 5))));
        const int N = (!pushes && (MODRM & 7) == 7 && (MODRM >> 6) == 3) ? 8 : 7;
        double vals[8]; Ext ext[8];
        for (int i = 0; i < N; ++i) { vals[i] = random_double(); if (approx_op(OP, MODRM)) { vals[i] = std::fmod(vals[i], 1000.0); if (OP == 0xd9 && MODRM == 0xf0) vals[i] = std::fmod(vals[i], 1.0); if (OP == 0xd9 && MODRM == 0xf1 && i == 0) vals[i] = std::fabs(vals[i]) + 0.001; if (std::isnan(vals[i])) vals[i] = 0.25; } if (pc == 0) vals[i] = double(float(vals[i])); ext[i] = ext_of_double(vals[i]); if (soft && !approx_op(OP, MODRM) && rng() % 4 == 0) { ext[i].sig |= rng() & 0x7ff; } }
        std::vector<u8> operand = make_operand(kind, random_double());
        std::vector<u8> operand_h = operand, operand_v = operand;
        // host
        u8 env[112]; u32 ax_h = 0;
        asm volatile("fninit; fldcw %0" ::"m"(cw));
        for (int i = N - 1; i >= 0; --i) { u8 tmp[10]; x87soft::store(tmp, ext[i]); asm volatile("fldt %0" ::"m"(tmp) : "st"); }
        host_exec<OP, MODRM>(operand_h.data(), ax_h);
        asm volatile("fnsave %0" : "=m"(env)::"memory");
        asm volatile("fninit");
        // virtual
        u8* R = Rbuf.data(); std::memset(R, 0, 0x4000);
        w2(R + x87v::O_CW, cw);
        const unsigned top_before = x87v::top(R) == 0 ? 0 : 0; (void)top_before;
        for (int i = N - 1; i >= 0; --i) { u8 tmp[10]; x87soft::store(tmp, ext[i]); x87v::Fpu<P>::push(R, soft ? P::from80(tmp) : P::from80(tmp)); }
        const unsigned top_in = x87v::top(R);
        const u32 ax_v = x87v::insn<OP, MODRM>(R, operand_v.data());
        uint16_t sw_h, cw_h; std::memcpy(&sw_h, env + 4, 2); std::memcpy(&cw_h, env, 2);
        bool ok = true; double err = 0;
        const bool partial = OP == 0xd9 && (MODRM == 0xf8 || MODRM == 0xf5) && ((sw_h >> 10) & 1);   // the real FPREM reduces at most 63 bits per step (C2 = 1); we reduce completely
        if (((sw_h >> 11) & 7) != x87v::top(R)) ok = false;
        if ((cw_h & 0x0f3f) != (x87v::control_word(R) & 0x0f3f)) ok = false;
        const unsigned cc_h = ((sw_h >> 8) & 1) | (((sw_h >> 9) & 1) << 1) | (((sw_h >> 10) & 1) << 2) | (((sw_h >> 14) & 1) << 3);
        const unsigned cc_v = R[x87v::O_C0] | (R[x87v::O_C0 + 1] << 1) | (R[x87v::O_C0 + 2] << 2) | (R[x87v::O_C0 + 3] << 3);
        const u32 sub = (MODRM >> 3) & 7; const bool memf = (MODRM >> 6) != 3;
        const bool compare_op = ((OP == 0xd8 || OP == 0xdc) && (sub == 2 || sub == 3)) || (OP == 0xd9 && MODRM == 0xe4) || (OP == 0xdd && !memf && MODRM >= 0xe0) || (OP == 0xda && !memf) || (OP == 0xde && MODRM == 0xd9);
        const unsigned cc_mask = compare_op ? 0xdu : ((OP == 0xd9 && (MODRM == 0xe5 || MODRM == 0xf8 || MODRM == 0xf5)) ? 0xfu : 0u);
        if ((cc_h & cc_mask) != (cc_v & cc_mask)) ok = false;
        if (OP == 0xdf && MODRM == 0xe0 && ((ax_h ^ ax_v) & 0x3800)) ok = false;
        int delta = (int(top_in) - int(x87v::top(R)) + 8) & 7; if (delta >= 4) delta -= 8;
        const unsigned depth = unsigned(N + delta);
        if (partial) { ++ct.trials; continue; }
        for (unsigned i = 0; i < depth && ok; ++i) {
            const Ext h = x87soft::load(env + 28 + 10 * i);
            const Ext v = slot_ext(x87v::slot(R, i));
            Ext hh = h;
            if constexpr (!soft) hh = x87soft::from_f64(x87soft::to_f64(h, {0, 53}));
            const bool nan_h = x87soft::unpack(h).k == x87soft::NAN_, nan_v = x87soft::unpack(v).k == x87soft::NAN_;
            const bool equal = (hh.sig == v.sig && hh.se == v.se) || (nan_h && nan_v);
            if (!equal) {
                if (approx_op(OP, MODRM)) { err = std::fmax(err, rel_error(h, v)); if (err > 1e-14) ok = false; }
                else if (!soft && rel_error(h, v) == 0) {}
                else ok = false;
            }
        }
        if (kind == SW16) { uint16_t a16, b16; std::memcpy(&a16, operand_h.data(), 2); std::memcpy(&b16, operand_v.data(), 2); if ((a16 ^ b16) & 0x3800) ok = false; }
        else if (writes && operand_h != operand_v) {
            // memory results: floats/ints compare exactly (NaN payloads aside); a stored 80-bit value only in the soft mode
            const bool nan_store = (kind == F32 && (std::bit_cast<float>(*reinterpret_cast<uint32_t*>(operand_h.data())) != std::bit_cast<float>(*reinterpret_cast<uint32_t*>(operand_h.data())))) ||
                                   (kind == F64 && (std::bit_cast<double>(*reinterpret_cast<uint64_t*>(operand_h.data())) != std::bit_cast<double>(*reinterpret_cast<uint64_t*>(operand_h.data()))));
            if (!nan_store && (soft || kind != M80)) ok = false;
        }
        ++ct.trials; ct.worst = std::fmax(ct.worst, err);
        if (!ok) {
            if (++ct.bad <= 2) {
                std::printf("  MISMATCH %s op=%02x/%02x pc=%u rc=%u in=[%.17g %.17g %.17g] top_h=%u top_v=%u cc_h=%x cc_v=%x\n", name, OP, MODRM, pc, rc, vals[0], vals[1], vals[2], (sw_h >> 11) & 7, x87v::top(R), cc_h, cc_v);
                for (unsigned i = 0; i < depth && i < 3; ++i) { Ext h = x87soft::load(env + 28 + 10 * i), v = slot_ext(x87v::slot(R, i)); std::printf("    ST%u host %04x:%016llx virtual %04x:%016llx\n", i, h.se, (unsigned long long)h.sig, v.se, (unsigned long long)v.sig); }
                if (writes) std::printf("    operand host %02x%02x%02x%02x%02x%02x%02x%02x virtual %02x%02x%02x%02x%02x%02x%02x%02x\n", operand_h[0], operand_h[1], operand_h[2], operand_h[3], operand_h[4], operand_h[5], operand_h[6], operand_h[7], operand_v[0], operand_v[1], operand_v[2], operand_v[3], operand_v[4], operand_v[5], operand_v[6], operand_v[7]);
            }
        }
    }
    return ct;
}
int main(int argc, char** argv) {
    const long trials = argc > 1 ? std::atol(argv[1]) : 2000;
    long total = 0, bad = 0; double worst = 0; int bad_encodings = 0;
#define E(op, modrm) { const Counters c = test_one<op, modrm>(trials, #op "/" #modrm); total += c.trials; bad += c.bad; worst = std::fmax(worst, c.worst); if (c.bad) { ++bad_encodings; std::printf("%s %02x/%02x: %ld of %ld trials differ\n", soft ? "soft80" : "double", op, modrm, c.bad, c.trials); } }
#include "x87v_encodings.inc"
#undef E
    std::printf("%s: mode %s, %ld trials, %ld mismatches in %d encodings, worst transcendental relative error %.3g\n", bad ? "FAILED" : "PASS", soft ? "soft80" : "double", total, bad, bad_encodings, worst);
    return bad ? 1 : 0;
}
