// Tests of the Direct3D device shadow (console only): which calls are redundant and when the shadow must forget.
#include "d3d_shadow.hpp"
#include <cstdio>
#include <cstdlib>

using namespace nfsu2raw;

static int failures = 0;
#define CHECK(condition) do { if (!(condition)) { std::fprintf(stderr, "FAILED line %d: %s\n", __LINE__, #condition); ++failures; } } while (0)

static uint32_t address_of(const void* pointer) { return uint32_t(uintptr_t(pointer)); }

int main() {
    DeviceShadow shadow;

    // Nothing is known at the start: no call is redundant.
    {
        const uint32_t args[] = {0, 0x1000};
        CHECK(shadow.redundant(BindTexture, args) == 0);
        const uint32_t null_texture[] = {0, 0};
        CHECK(shadow.redundant(BindTexture, null_texture) == 0);
    }

    // Textures, per stage; a failed call leaves the stage unknown.
    {
        const uint32_t set0[] = {0, 0x1000}, set1[] = {1, 0x1000}, other[] = {0, 0x2000}, clear0[] = {0, 0};
        shadow.remember(BindTexture, set0, 0);
        CHECK(shadow.redundant(BindTexture, set0) == 3);
        CHECK(shadow.redundant(BindTexture, set1) == 0);
        CHECK(shadow.redundant(BindTexture, other) == 0);
        shadow.remember(BindTexture, clear0, 0);
        CHECK(shadow.redundant(BindTexture, clear0) == 3);   // SetTexture(0, NULL) is remembered as well
        CHECK(shadow.redundant(BindTexture, set0) == 0);
        shadow.remember(BindTexture, set0, 0x88760868u);
        CHECK(shadow.redundant(BindTexture, set0) == 0);
        const uint32_t beyond[] = {16, 0x1000};
        shadow.remember(BindTexture, beyond, 0);
        CHECK(shadow.redundant(BindTexture, beyond) == 0);
    }

    // Shaders, declaration and indices are single slots.
    {
        const uint32_t vs[] = {0xA0}, ps[] = {0xB0}, decl[] = {0xC0}, ib[] = {0xD0};
        shadow.remember(BindVertexShader, vs, 0);
        shadow.remember(BindPixelShader, ps, 0);
        shadow.remember(BindDeclaration, decl, 0);
        shadow.remember(BindIndices, ib, 0);
        CHECK(shadow.redundant(BindVertexShader, vs) == 2);
        CHECK(shadow.redundant(BindPixelShader, ps) == 2);
        CHECK(shadow.redundant(BindDeclaration, decl) == 2);
        CHECK(shadow.redundant(BindIndices, ib) == 2);
        CHECK(shadow.redundant(BindVertexShader, ps) == 0);
        CHECK(shadow.redundant(BindPixelShader, vs) == 0);
        // SetFVF changes the declaration behind the shadow's back.
        shadow.remember(BindFvf, nullptr, 0);
        CHECK(shadow.redundant(BindDeclaration, decl) == 0);
        CHECK(shadow.redundant(BindVertexShader, vs) == 2);
    }

    // Streams: buffer, offset and stride must all match; the UP draws unset stream 0 (and the indices).
    {
        const uint32_t s0[] = {0, 0x3000, 0, 32}, s0_offset[] = {0, 0x3000, 64, 32}, s0_stride[] = {0, 0x3000, 0, 16}, s1[] = {1, 0x3000, 0, 32};
        shadow.remember(BindStream, s0, 0);
        CHECK(shadow.redundant(BindStream, s0) == 5);
        CHECK(shadow.redundant(BindStream, s0_offset) == 0);
        CHECK(shadow.redundant(BindStream, s0_stride) == 0);
        CHECK(shadow.redundant(BindStream, s1) == 0);
        shadow.remember(BindStream, s1, 0);
        const uint32_t ib[] = {0xD0};
        shadow.remember(BindIndices, ib, 0);
        shadow.remember(BindDrawUp, nullptr, 0);
        CHECK(shadow.redundant(BindStream, s0) == 0);
        CHECK(shadow.redundant(BindStream, s1) == 5);
        CHECK(shadow.redundant(BindIndices, ib) == 2);
        shadow.remember(BindDrawIndexedUp, nullptr, 0);
        CHECK(shadow.redundant(BindIndices, ib) == 0);
        shadow.remember(BindStream, s0, 0x88760868u);   // a failed call leaves the stream unknown
        CHECK(shadow.redundant(BindStream, s0) == 0);
    }

    // Shader constants: compared by value, per register; vertex and pixel constants are separate.
    {
        float values[12];
        for (int i = 0; i < 12; ++i) values[i] = 1.5f * float(i) + 0.25f;
        uint32_t call[] = {4, address_of(values), 3};            // registers 4..6
        CHECK(shadow.redundant(BindVertexConstants, call) == 0);
        shadow.remember(BindVertexConstants, call, 0);
        CHECK(shadow.redundant(BindVertexConstants, call) == 4);
        CHECK(shadow.redundant(BindPixelConstants, call) == 0);
        uint32_t inside[] = {5, address_of(values + 4), 1};       // register 5 alone, same value
        CHECK(shadow.redundant(BindVertexConstants, inside) == 4);
        uint32_t wider[] = {3, address_of(values), 3};            // register 3 was never set
        CHECK(shadow.redundant(BindVertexConstants, wider) == 0);
        values[5] = -7.0f;                                         // the value of register 5 (second float of the second vector) changes
        CHECK(shadow.redundant(BindVertexConstants, call) == 0);
        shadow.remember(BindVertexConstants, call, 0);
        CHECK(shadow.redundant(BindVertexConstants, call) == 4);
        shadow.remember(BindVertexConstants, call, 0x88760868u);  // failure: the range becomes unknown
        CHECK(shadow.redundant(BindVertexConstants, call) == 0);
        uint32_t last[] = {255, address_of(values), 1}, past[] = {255, address_of(values), 2}, zero[] = {4, address_of(values), 0};
        shadow.remember(BindPixelConstants, last, 0);
        CHECK(shadow.redundant(BindPixelConstants, last) == 4);
        shadow.remember(BindPixelConstants, past, 0);              // out of range: never remembered
        CHECK(shadow.redundant(BindPixelConstants, past) == 0);
        CHECK(shadow.redundant(BindPixelConstants, zero) == 0);    // an empty call is passed through
    }

    // Emptying the shadow (Reset, applying a state block) forgets everything.
    {
        const uint32_t tex[] = {2, 0x4000}, vs[] = {0xA0};
        shadow.remember(BindTexture, tex, 0);
        shadow.remember(BindVertexShader, vs, 0);
        CHECK(shadow.redundant(BindTexture, tex) == 3);
        shadow.clear();
        CHECK(shadow.redundant(BindTexture, tex) == 0);
        CHECK(shadow.redundant(BindVertexShader, vs) == 0);
    }

    // The table the platform builds: every kind has a distinct slot and the argument counts match the Direct3D signatures.
    {
        CHECK(bind_slot_count == 11);
        CHECK(bind_argument_count(BindTexture) == 2 && bind_argument_count(BindStream) == 4 && bind_argument_count(BindVertexConstants) == 3);
        CHECK(bind_argument_count(BindIndices) == 1 && bind_argument_count(BindFvf) == 0);
    }

    if (failures) { std::fprintf(stderr, "%d check(s) failed\n", failures); return 1; }
    std::puts("d3d_shadow tests passed");
    return 0;
}
