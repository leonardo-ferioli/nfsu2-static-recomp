// Method-token registry (NativePlatform::add_method_token): a guest `call [vtable+slot]` into a facade object reaches a native handler
// with its stdcall arguments, and the callee's argument words are removed from the guest stack. Console test; no window, no game code run.
#include "native32.hpp"
#include <iostream>
using namespace nfsu2raw;

int main(int argc, char** argv) try {
    if (argc != 3) throw Fault("requires export and game directories");
    Cpu c;
    NativePlatform p(c, argv[1], argv[2]);
    const uint32_t sp = uint32_t(r<4>(c, 16));

    uint32_t seen_this = 0, seen_a = 0, seen_b = 0;
    const uint32_t first = p.add_method_token(3, [&](Cpu& cpu) {
        const uint32_t stack = uint32_t(r<4>(cpu, 16));
        seen_this = uint32_t(m<4>(cpu, stack + 4));
        seen_a = uint32_t(m<4>(cpu, stack + 8));
        seen_b = uint32_t(m<4>(cpu, stack + 12));
        return seen_a + seen_b;
    });
    const uint32_t second = p.add_method_token(1, [&](Cpu&) { return 0x600dbeefu; });
    if (first < NativePlatform::method_token_base || (first & 15) != 0 || second != first + 16)
        throw Fault("method tokens must be consecutive 16-byte slots from the reserved base");

    // A call with `this` and two arguments: the handler sees them, EAX is its value, and the three words are popped.
    wr<4>(c, 16, sp); wm<4>(c, sp, 0xdead0000); wm<4>(c, sp + 4, 0x1000); wm<4>(c, sp + 8, 5); wm<4>(c, sp + 12, 7);
    c.pc = first;
    if (!p.dispatch(c)) throw Fault("method token was not dispatched");
    if (seen_this != 0x1000 || seen_a != 5 || seen_b != 7) throw Fault("method token handler saw wrong arguments");
    if (r<4>(c, 0) != 12 || r<4>(c, 16) != sp + 4 + 3 * 4 || c.pc != 0xdead0000)
        throw Fault("method token result, stdcall stack cleanup or return address");

    // The second token has its own handler and cleans only its own argument.
    wr<4>(c, 16, sp); wm<4>(c, sp, 0xdead0000); wm<4>(c, sp + 4, 0x2000);
    c.pc = second;
    if (!p.dispatch(c) || r<4>(c, 0) != 0x600dbeef || r<4>(c, 16) != sp + 8) throw Fault("second method token");

    // A token in the reserved range that nobody registered is not served (and is not mistaken for a Windows function).
    wr<4>(c, 16, sp); wm<4>(c, sp, 0xdead0000);
    c.pc = NativePlatform::method_token_base + (500u << 4);
    if (p.dispatch(c)) throw Fault("an unregistered method token must not be dispatched");

    std::cout << "PASS method-token facade registry\n";
    return 0;
} catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return 1;
}
