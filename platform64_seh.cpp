// Structured exception handling of the translated program on a 64-bit host: the same state machine as NativePlatform's (native32.cpp), over the guest's own
// memory only (the exception chain is the linked list whose head is the first word of the thread block). See the comment in platform64.hpp.
#include "platform64.hpp"
#include <algorithm>
#include <sstream>

namespace nfsu2raw {
namespace {
constexpr uint32_t context_size = 0x2cc, exception_record_size = 0x50;
uint32_t argument(Cpu& c, unsigned i) { return uint32_t(m<4>(c, r<4>(c, 16) + 4 + i * 4)); }
}  // namespace

void Platform64::install_exception_imports() {
    for (const char* name : {"RaiseException", "RtlUnwind", "UnhandledExceptionFilter"})
        add_raw(name, [this, name](Cpu& c) -> uint32_t {
            exception_import(c, name, uint32_t(m<4>(c, r<4>(c, 16))));
            return 0;
        });
    override_import("SetUnhandledExceptionFilter", 1, [this](Cpu& c) { return exception_filter_.exchange(argument(c, 0)); });
}

void Platform64::purge_dead_exceptions(Cpu& c) {
    std::lock_guard lock(mutex_);
    auto found = exceptions_.find(&c);
    if (found == exceptions_.end()) return;
    const uint32_t esp = uint32_t(r<4>(c, 16));
    auto& states = found->second;
    while (!states.empty() && states.back().call_base < esp) states.pop_back();
    if (states.empty()) exceptions_.erase(found);
}

void Platform64::build_exception_context(Cpu& c, uint32_t context, uint32_t eip, uint32_t esp) {
    std::memset(c.pointer(context, context_size), 0, context_size);
    wm<4>(c, context, 0x10007);  // CONTEXT_i386 | CONTROL | INTEGER | SEGMENTS
    static const unsigned registers[][2] = {{0x9c, 28}, {0xa0, 24}, {0xa4, 12}, {0xa8, 8}, {0xac, 4}, {0xb0, 0}, {0xb4, 20}};  // EDI ESI EBX EDX ECX EAX EBP
    for (const auto& pair : registers) wm<4>(c, context + pair[0], uint32_t(r<4>(c, pair[1])));
    uint32_t flags = 0x202;  // IF set, reserved bit 1 set
    flags |= uint32_t(r<1>(c, 0x200) & 1) << 0; flags |= uint32_t(r<1>(c, 0x202) & 1) << 2; flags |= uint32_t(r<1>(c, 0x204) & 1) << 4;
    flags |= uint32_t(r<1>(c, 0x206) & 1) << 6; flags |= uint32_t(r<1>(c, 0x207) & 1) << 7; flags |= uint32_t(r<1>(c, 0x20a) & 1) << 10;
    flags |= uint32_t(r<1>(c, 0x20b) & 1) << 11;
    wm<4>(c, context + 0xb8, eip); wm<4>(c, context + 0xc0, flags); wm<4>(c, context + 0xc4, esp);
    wm<4>(c, context + 0xbc, 0x1b); wm<4>(c, context + 0xc8, 0x23); wm<4>(c, context + 0x98, 0x23); wm<4>(c, context + 0x94, 0x23); wm<4>(c, context + 0x90, 0x3b);
}

void Platform64::finish_with_context(Cpu& c, uint32_t context) {
    static const unsigned registers[][2] = {{0x9c, 28}, {0xa0, 24}, {0xa4, 12}, {0xa8, 8}, {0xac, 4}, {0xb0, 0}, {0xb4, 20}};
    for (const auto& pair : registers) wr<4>(c, pair[1], uint32_t(m<4>(c, context + pair[0])));
    const uint32_t flags = uint32_t(m<4>(c, context + 0xc0));
    wr<1>(c, 0x200, (flags >> 0) & 1); wr<1>(c, 0x202, (flags >> 2) & 1); wr<1>(c, 0x204, (flags >> 4) & 1); wr<1>(c, 0x206, (flags >> 6) & 1);
    wr<1>(c, 0x207, (flags >> 7) & 1); wr<1>(c, 0x20a, (flags >> 10) & 1); wr<1>(c, 0x20b, (flags >> 11) & 1);
    wr<4>(c, 16, uint32_t(m<4>(c, context + 0xc4))); c.pc = uint32_t(m<4>(c, context + 0xb8)); wr<4>(c, 644, c.pc);
}

void Platform64::call_exception_handler(Cpu& c, ExceptionState& s, uint32_t handler, uint32_t frame, uint32_t token) {
    // stdcall: EXCEPTION_DISPOSITION handler(EXCEPTION_RECORD*, void* frame, CONTEXT*, void* dispatcher_context)
    const uint32_t sp = s.call_base;
    wm<4>(c, sp, token); wm<4>(c, sp + 4, s.record); wm<4>(c, sp + 8, frame); wm<4>(c, sp + 12, s.context); wm<4>(c, sp + 16, sp + 24); wm<4>(c, sp + 24, 0);
    wr<4>(c, 16, sp); c.pc = handler; wr<4>(c, 644, c.pc);
}

void Platform64::exception_import(Cpu& c, const std::string& name, uint32_t guest_return) {
    purge_dead_exceptions(c);
    const uint32_t esp = uint32_t(r<4>(c, 16)), teb = uint32_t(r<4>(c, 0x110));
    if (name == "UnhandledExceptionFilter") {
        const uint32_t pointers = argument(c, 0);
        const uint32_t filter = exception_filter_;
        if (!filter) {
            note("UnhandledExceptionFilter with no registered guest filter: EXCEPTION_EXECUTE_HANDLER");
            wr<4>(c, 0, 1); wr<4>(c, 16, esp + 8); c.pc = guest_return; wr<4>(c, 644, c.pc);
            return;
        }
        ExceptionState s{}; s.kind = ExceptionState::Filter; s.import_return = true; s.pointers = pointers; s.guest_return = guest_return; s.resume_sp = esp + 8;
        s.call_base = (esp - 0x80) & ~15u;
        { std::lock_guard lock(mutex_); exceptions_[&c].push_back(s); }
        wm<4>(c, s.call_base, exception_filter_token); wm<4>(c, s.call_base + 4, pointers);
        wr<4>(c, 16, s.call_base); c.pc = filter; wr<4>(c, 644, c.pc);
        return;
    }
    ExceptionState s{}; s.guest_return = guest_return; s.resume_sp = esp + 4 + 16;
    const uint32_t context = ((esp - 0x40 - context_size) & ~15u), record = ((context - exception_record_size) & ~15u);
    s.context = context; s.record = record; s.pointers = record - 8; s.call_base = (s.pointers - 0x80) & ~15u;
    if (name == "RaiseException") {
        const uint32_t code = argument(c, 0), flags = argument(c, 1), count = std::min(argument(c, 2), 15u), arguments = argument(c, 3);
        std::memset(c.pointer(record, exception_record_size), 0, exception_record_size);
        wm<4>(c, record, code); wm<4>(c, record + 4, flags & 1); wm<4>(c, record + 12, guest_return); wm<4>(c, record + 16, count);
        for (uint32_t i = 0; i < count; ++i) wm<4>(c, record + 20 + 4 * i, uint32_t(m<4>(c, arguments + 4 * i)));
        build_exception_context(c, context, guest_return, s.resume_sp);
        wm<4>(c, s.pointers, record); wm<4>(c, s.pointers + 4, context);
        s.kind = ExceptionState::Raise; s.frame = uint32_t(m<4>(c, teb));
        { std::lock_guard lock(mutex_); exceptions_[&c].push_back(s); }
        std::ostringstream message; message << "RaiseException code=0x" << std::hex << code << " flags=0x" << flags << " from guest 0x" << guest_return;
        note(message.str());
        continue_raise(c);
        return;
    }
    // RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue)
    const uint32_t target_frame = argument(c, 0), target_ip = argument(c, 1), given = argument(c, 2), value = argument(c, 3);
    std::memset(c.pointer(record, exception_record_size), 0, exception_record_size);
    if (given) std::memcpy(c.pointer(record, exception_record_size), c.pointer(given, exception_record_size), exception_record_size);
    else wm<4>(c, record, 0xc0000027);  // STATUS_UNWIND
    wm<4>(c, record + 4, uint32_t(m<4>(c, record + 4)) | 2 | (target_frame ? 0u : 4u));  // EXCEPTION_UNWINDING (| EXCEPTION_EXIT_UNWIND)
    build_exception_context(c, context, guest_return, s.resume_sp);
    wm<4>(c, s.pointers, record); wm<4>(c, s.pointers + 4, context);
    s.kind = ExceptionState::Unwind; s.target_frame = target_frame; s.target_ip = target_ip; s.return_value = value;
    s.saved[0] = uint32_t(r<4>(c, 12)); s.saved[1] = uint32_t(r<4>(c, 20)); s.saved[2] = uint32_t(r<4>(c, 24)); s.saved[3] = uint32_t(r<4>(c, 28));
    { std::lock_guard lock(mutex_); exceptions_[&c].push_back(s); }
    continue_unwind(c);
}

void Platform64::continue_raise(Cpu& c) {
    ExceptionState* s; { std::lock_guard lock(mutex_); s = &exceptions_[&c].back(); }
    if (s->frame != 0xffffffff && s->frame != 0) {
        const uint32_t handler = uint32_t(m<4>(c, s->frame + 4));
        call_exception_handler(c, *s, handler, s->frame, exception_handler_token);
        return;
    }
    // End of the chain: the registered top-level filter decides, otherwise the exception is fatal.
    const uint32_t code = uint32_t(m<4>(c, s->record)), filter = exception_filter_;
    if (filter) {
        s->kind = ExceptionState::Filter; s->import_return = false;
        wm<4>(c, s->call_base, exception_filter_token); wm<4>(c, s->call_base + 4, s->pointers);
        wr<4>(c, 16, s->call_base); c.pc = filter; wr<4>(c, 644, c.pc);
        return;
    }
    std::ostringstream message; message << "unhandled guest exception code=0x" << std::hex << code << " at guest 0x" << uint32_t(m<4>(c, s->record + 12));
    throw Fault(message.str());
}

void Platform64::continue_unwind(Cpu& c) {
    ExceptionState* s; { std::lock_guard lock(mutex_); s = &exceptions_[&c].back(); }
    const uint32_t teb = uint32_t(r<4>(c, 0x110)), frame = uint32_t(m<4>(c, teb));
    if (frame != s->target_frame && frame != 0xffffffff && frame != 0) {
        s->frame = frame;
        call_exception_handler(c, *s, uint32_t(m<4>(c, frame + 4)), frame, exception_unwind_token);
        return;
    }
    // Unwinding is complete: continue at TargetIp (or return to the caller) with the callee-saved registers intact.
    wr<4>(c, 12, s->saved[0]); wr<4>(c, 20, s->saved[1]); wr<4>(c, 24, s->saved[2]); wr<4>(c, 28, s->saved[3]);
    wr<4>(c, 0, s->return_value); wr<4>(c, 16, s->resume_sp);
    c.pc = s->target_ip ? s->target_ip : s->guest_return; wr<4>(c, 644, c.pc);
    purge_dead_exceptions(c);
}

bool Platform64::exception_return(Cpu& c) {
    ExceptionState* s;
    {
        std::lock_guard lock(mutex_);
        auto found = exceptions_.find(&c);
        if (found == exceptions_.end() || found->second.empty()) throw Fault("guest exception token reached without a pending exception");
        s = &found->second.back();
    }
    const uint32_t token = c.pc, value = uint32_t(r<4>(c, 0)), esp = uint32_t(r<4>(c, 16));
    const uint32_t expected = s->call_base + (token == exception_filter_token ? 8 : 20);
    if (esp != expected) throw Fault("guest exception handler returned with an unbalanced stack");
    if (token == exception_handler_token) {
        if (value == 1) {  // ExceptionContinueSearch
            s->frame = uint32_t(m<4>(c, s->frame)); continue_raise(c); return true;
        }
        if (value == 0) {  // ExceptionContinueExecution
            if (uint32_t(m<4>(c, s->record + 4)) & 1) throw Fault("guest handler continued a non-continuable exception");
            const uint32_t context = s->context; finish_with_context(c, context); purge_dead_exceptions(c); return true;
        }
        throw Fault("guest exception handler returned an unsupported disposition");
    }
    if (token == exception_unwind_token) {
        // The handler has run its termination code; the frame is unlinked before the next one is visited.
        wm<4>(c, r<4>(c, 0x110), uint32_t(m<4>(c, s->frame)));
        continue_unwind(c); return true;
    }
    // Top-level filter: -1 resumes, anything else ends the process in the original; here that is an explicit stop.
    if (s->import_return) {
        const uint32_t resume = s->resume_sp, back = s->guest_return;
        wr<4>(c, 0, value); wr<4>(c, 16, resume); c.pc = back; wr<4>(c, 644, c.pc); purge_dead_exceptions(c); return true;
    }
    if (int32_t(value) == -1) { const uint32_t context = s->context; finish_with_context(c, context); purge_dead_exceptions(c); return true; }
    std::ostringstream message; message << "unhandled guest exception code=0x" << std::hex << uint32_t(m<4>(c, s->record)) << " (top-level filter returned " << int32_t(value) << ")";
    throw Fault(message.str());
}

}  // namespace nfsu2raw
