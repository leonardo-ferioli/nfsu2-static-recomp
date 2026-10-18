// Shadow of what the game's Direct3D 9 device holds (bindings and shader constants), so that a call which would set what the device
// already has is answered without going to Windows (the game makes thousands of such calls per frame).
//
// Device methods by vtable slot: 65 SetTexture, 87 SetVertexDeclaration, 89 SetFVF, 92 SetVertexShader, 94 SetVertexShaderConstantF,
// 100 SetStreamSource, 104 SetIndices, 107 SetPixelShader, 109 SetPixelShaderConstantF; 83/84 DrawPrimitiveUP/DrawIndexedPrimitiveUP,
// which leave stream 0 (and the indices) unset. The caller empties the shadow whenever the device may change out of sight
// (Reset, Release of the device, applying a state block) and does not use it while a state block is being recorded.
//
// An object is only ever held by the device while it is bound, so a bound pointer cannot be freed and reused behind the shadow's back.
#pragma once
#include <cstdint>
#include <cstring>

namespace nfsu2raw {
enum BindKind : uint8_t {
    BindNone = 0, BindTexture, BindVertexShader, BindPixelShader, BindDeclaration, BindIndices, BindStream,
    BindVertexConstants, BindPixelConstants, BindFvf, BindDrawUp, BindDrawIndexedUp
};
constexpr unsigned bind_slot_numbers[] = {65, 92, 107, 87, 104, 100, 94, 109, 89, 83, 84};
constexpr BindKind bind_slot_kinds[] = {BindTexture, BindVertexShader, BindPixelShader, BindDeclaration, BindIndices, BindStream,
                                        BindVertexConstants, BindPixelConstants, BindFvf, BindDrawUp, BindDrawIndexedUp};
constexpr unsigned bind_slot_count = sizeof(bind_slot_numbers) / sizeof(bind_slot_numbers[0]);

// How many arguments after `this` the shadow needs for a call (the array handed to redundant/remember).
inline unsigned bind_argument_count(uint8_t kind) {
    return kind == BindStream ? 4 : kind == BindVertexConstants || kind == BindPixelConstants ? 3 : kind == BindTexture ? 2
         : kind == BindFvf || kind == BindDrawUp || kind == BindDrawIndexedUp ? 0 : 1;
}

class DeviceShadow {
public:
    void clear() { *this = DeviceShadow(); }

    // The number of arguments (this included) of a call that would set what the device already holds, else 0.
    unsigned redundant(uint8_t kind, const uint32_t* args) const {
        switch (kind) {
        case BindTexture: return args[0] < 16 && texture_[args[0]] == known(args[1]) ? 3 : 0;
        case BindVertexShader: return single_[0] == known(args[0]) ? 2 : 0;
        case BindPixelShader: return single_[1] == known(args[0]) ? 2 : 0;
        case BindDeclaration: return single_[2] == known(args[0]) ? 2 : 0;
        case BindIndices: return single_[3] == known(args[0]) ? 2 : 0;
        case BindStream:
            return args[0] < 16 && stream_[args[0]].buffer == known(args[1]) && stream_[args[0]].offset == args[2] && stream_[args[0]].stride == args[3] ? 5 : 0;
        case BindVertexConstants: case BindPixelConstants: {
            const unsigned set = kind == BindPixelConstants ? 1 : 0;
            const uint32_t start = args[0], count = args[2];
            if (!count || start >= 256 || count > 256 - start || !args[1]) return 0;
            for (uint32_t i = 0; i < count; ++i) if (!constant_known_[set][start + i]) return 0;
            return std::memcmp(constants_[set] + start * 4, reinterpret_cast<const void*>(uintptr_t(args[1])), size_t(count) * 16) == 0 ? 4 : 0;
        }
        default: return 0;
        }
    }

    // After a call that did go to Windows: remember what the device holds now (the arguments as they were before the call).
    void remember(uint8_t kind, const uint32_t* args, uint32_t result) {
        const bool ok = result == 0;
        switch (kind) {
        case BindTexture: if (args[0] < 16) texture_[args[0]] = ok ? known(args[1]) : 0; break;
        case BindVertexShader: single_[0] = ok ? known(args[0]) : 0; break;
        case BindPixelShader: single_[1] = ok ? known(args[0]) : 0; break;
        case BindDeclaration: single_[2] = ok ? known(args[0]) : 0; break;
        case BindIndices: single_[3] = ok ? known(args[0]) : 0; break;
        case BindStream: if (args[0] < 16) stream_[args[0]] = ok ? Stream{known(args[1]), args[2], args[3]} : Stream{0, 0, 0}; break;
        case BindVertexConstants: case BindPixelConstants: {
            const unsigned set = kind == BindPixelConstants ? 1 : 0;
            const uint32_t start = args[0], count = args[2];
            if (start >= 256 || count > 256 - start) break;
            const bool keep = ok && args[1] != 0;
            if (keep) std::memcpy(constants_[set] + start * 4, reinterpret_cast<const void*>(uintptr_t(args[1])), size_t(count) * 16);
            std::memset(constant_known_[set] + start, keep ? 1 : 0, count);
            break;
        }
        case BindFvf: single_[2] = 0; break;                      // the declaration now follows the FVF
        case BindDrawUp: stream_[0] = {0, 0, 0}; break;
        case BindDrawIndexedUp: stream_[0] = {0, 0, 0}; single_[3] = 0; break;
        default: break;
        }
    }

private:
    struct Stream { uint64_t buffer; uint32_t offset, stride; };
    static uint64_t known(uint32_t value) { return 0x100000000ull | value; }
    uint64_t texture_[16] = {};
    uint64_t single_[4] = {};          // vertex shader, pixel shader, declaration, indices
    Stream stream_[16] = {};
    float constants_[2][256 * 4] = {};
    uint8_t constant_known_[2][256] = {};
};
}  // namespace nfsu2raw
