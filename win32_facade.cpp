#include "win32_facade_internal.hpp"
#include "guest_memory.hpp"
#include <chrono>
#include <thread>

namespace nfsu2raw {

Win32LayerOptions parse_win32_layer(const std::string& spec, std::string& error) {
    Win32LayerOptions o;
    error.clear();
    std::istringstream in(spec);
    std::string name;
    while (std::getline(in, name, ',')) {
        while (!name.empty() && name.front() == ' ') name.erase(name.begin());
        while (!name.empty() && name.back() == ' ') name.pop_back();
        if (name.empty() || name == "none") continue;
        if (name == "all") { o.time = o.text = o.process = o.sync = o.memory = o.files = o.dinput = o.loader = true; o.registry = o.traps = o.resources = o.user32 = o.system = !kRealOs; }
        else if (name == "time") o.time = true;
        else if (name == "text") o.text = true;
        else if (name == "process") o.process = true;
        else if (name == "sync") o.sync = true;
        else if (name == "memory") o.memory = true;
        else if (name == "files") o.files = true;
        else if (name == "dinput") o.dinput = true;
        else if (name == "loader") o.loader = true;
        else if (name == "registry") o.registry = true;
        else if (name == "traps") o.traps = true;
        else if (name == "resources") o.resources = true;
        else if (name == "user32") o.user32 = true;
        else if (name == "system") o.system = true;
        else if (error.empty()) error = name;
    }
    return o;
}

// ------------------------------------------------------------------------------------------------------------------------------ time
void Win32Facade::Impl::install_time() {
    on("QueryPerformanceFrequency", 1, [this](Cpu& c) { *ptr<uint64_t>(arg(c, 0)) = time.query_performance_frequency(); return 1u; });
    on("QueryPerformanceCounter", 1, [this](Cpu& c) { *ptr<uint64_t>(arg(c, 0)) = time.query_performance_counter(); return 1u; });
    on("GetTickCount", 0, [this](Cpu&) { return time.get_tick_count(); });
    on("timeGetTime", 0, [this](Cpu&) { return time.time_get_time(); });
    on("GetSystemTimeAsFileTime", 1, [this](Cpu& c) { *ptr<uint64_t>(arg(c, 0)) = time.system_time_as_file_time(); return 0u; });
    on("timeBeginPeriod", 1, [this](Cpu& c) { return time.time_begin_period(arg(c, 0)); });
    on("timeEndPeriod", 1, [this](Cpu& c) { return time.time_end_period(arg(c, 0)); });
    on("timeGetDevCaps", 2, [this](Cpu& c) {
        if (arg(c, 1) < 8) return 11u;   // MMSYSERR_INVALPARAM
        const auto caps = time.time_get_dev_caps();
        ptr<uint32_t>(arg(c, 0))[0] = caps.period_min;
        ptr<uint32_t>(arg(c, 0))[1] = caps.period_max;
        return 0u;
    });
    on("FileTimeToSystemTime", 2, [this](Cpu& c) {
        lw::SystemTime st;
        if (!lw::TimeApi::file_time_to_system_time(*ptr<uint64_t>(arg(c, 0)), st)) { set_error(c, lw::err::invalid_parameter); return 0u; }
        uint16_t* out = ptr<uint16_t>(arg(c, 1));
        out[0] = st.year; out[1] = st.month; out[2] = st.day_of_week; out[3] = st.day; out[4] = st.hour; out[5] = st.minute; out[6] = st.second; out[7] = st.milliseconds;
        return 1u;
    });
    on("FileTimeToLocalFileTime", 2, [this](Cpu& c) { *ptr<uint64_t>(arg(c, 1)) = time.file_time_to_local_file_time(*ptr<uint64_t>(arg(c, 0))); return 1u; });
    on("GetTimeZoneInformation", 1, [this](Cpu& c) {
        lw::TimeZoneInfo z;
        const uint32_t id = time.get_time_zone_information(z);
        uint8_t* out = ptr<uint8_t>(arg(c, 0));
        std::memset(out, 0, 172);
        std::memcpy(out + 0, &z.bias_minutes, 4);
        std::memcpy(out + 4, z.standard_name.data(), std::min<size_t>(z.standard_name.size(), 31) * 2);
        std::memcpy(out + 84, &z.standard_bias, 4);
        std::memcpy(out + 88, z.daylight_name.data(), std::min<size_t>(z.daylight_name.size(), 31) * 2);
        std::memcpy(out + 168, &z.daylight_bias, 4);
        return id;
    });
}

// ------------------------------------------------------------------------------------------------------------------------------ text
void Win32Facade::Impl::install_text() {
    on("GetACP", 0, [this](Cpu&) { return text.get_acp(); });
    on("GetOEMCP", 0, [this](Cpu&) { return text.get_oemcp(); });
    on("GetUserDefaultLCID", 0, [this](Cpu&) { return text.get_user_default_lcid(); });
    on("IsValidCodePage", 1, [this](Cpu& c) { return text.is_valid_code_page(arg(c, 0)) ? 1u : 0u; });
    on("IsValidLocale", 2, [this](Cpu& c) { return text.is_valid_locale(arg(c, 0), arg(c, 1)) ? 1u : 0u; });
    on("GetCPInfo", 2, [this](Cpu& c) {
        auto info = text.get_cp_info(arg(c, 0));
        if (!info) { set_error(c, info.error); return 0u; }
        uint8_t* out = ptr<uint8_t>(arg(c, 1));
        std::memset(out, 0, 20);
        std::memcpy(out, &info.value.max_char_size, 4);
        out[4] = info.value.default_char[0]; out[5] = info.value.default_char[1];
        return 1u;
    });
    on("MultiByteToWideChar", 6, [this](Cpu& c) {
        auto r = text.multi_byte_to_wide(arg(c, 0), arg(c, 1), ptr<const char>(arg(c, 2)), int32_t(arg(c, 3)), ptr<char16_t>(arg(c, 4)), int32_t(arg(c, 5)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("WideCharToMultiByte", 8, [this](Cpu& c) {
        bool used = false;
        const uint32_t used_address = arg(c, 7);
        auto r = text.wide_to_multi_byte(arg(c, 0), arg(c, 1), ptr<const char16_t>(arg(c, 2)), int32_t(arg(c, 3)), ptr<char>(arg(c, 4)), int32_t(arg(c, 5)), arg(c, 6) ? ptr<const char>(arg(c, 6)) : nullptr, used_address ? &used : nullptr);
        if (!r) { set_error(c, r.error); return 0u; }
        if (used_address) *ptr<uint32_t>(used_address) = used ? 1u : 0u;
        return uint32_t(r.value);
    });
    on("GetStringTypeW", 4, [this](Cpu& c) {
        auto r = text.get_string_type_w(arg(c, 0), ptr<const char16_t>(arg(c, 1)), int32_t(arg(c, 2)), ptr<uint16_t>(arg(c, 3)));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("GetStringTypeA", 5, [this](Cpu& c) {
        auto r = text.get_string_type_a(arg(c, 0), arg(c, 1), ptr<const char>(arg(c, 2)), int32_t(arg(c, 3)), ptr<uint16_t>(arg(c, 4)));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("CompareStringW", 6, [this](Cpu& c) {
        auto r = text.compare_string_w(arg(c, 0), arg(c, 1), ptr<const char16_t>(arg(c, 2)), int32_t(arg(c, 3)), ptr<const char16_t>(arg(c, 4)), int32_t(arg(c, 5)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("CompareStringA", 6, [this](Cpu& c) {
        auto r = text.compare_string_a(arg(c, 0), arg(c, 1), ptr<const char>(arg(c, 2)), int32_t(arg(c, 3)), ptr<const char>(arg(c, 4)), int32_t(arg(c, 5)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("LCMapStringW", 6, [this](Cpu& c) {
        auto r = text.lc_map_string_w(arg(c, 0), arg(c, 1), ptr<const char16_t>(arg(c, 2)), int32_t(arg(c, 3)), ptr<char16_t>(arg(c, 4)), int32_t(arg(c, 5)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("LCMapStringA", 6, [this](Cpu& c) {
        auto r = text.lc_map_string_a(arg(c, 0), arg(c, 1), ptr<const char>(arg(c, 2)), int32_t(arg(c, 3)), ptr<char>(arg(c, 4)), int32_t(arg(c, 5)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("GetLocaleInfoW", 4, [this](Cpu& c) {
        auto r = text.get_locale_info_w(arg(c, 0), arg(c, 1), ptr<char16_t>(arg(c, 2)), int32_t(arg(c, 3)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("GetLocaleInfoA", 4, [this](Cpu& c) {
        auto r = text.get_locale_info_a(arg(c, 0), arg(c, 1), ptr<char>(arg(c, 2)), int32_t(arg(c, 3)));
        if (!r) { set_error(c, r.error); return 0u; }
        return uint32_t(r.value);
    });
    on("EnumSystemLocalesA", 2, [this](Cpu& c) {
        const uint32_t callback = arg(c, 0);
        for (const auto& s : text.enum_system_locales(arg(c, 1))) {
            // The string has to live in guest memory for the duration of the callback.
            const uint32_t guest_text = heaps.heap_alloc(heaps.get_process_heap(), lw::heap_flag::zero_memory, uint32_t(s.size() + 1)).value;
            if (!guest_text) break;
            std::memcpy(ptr<char>(guest_text), s.c_str(), s.size() + 1);
            const uint32_t keep_going = platform.callback(callback, {guest_text});
            heaps.heap_free(heaps.get_process_heap(), 0, guest_text);
            if (keep_going == 0) break;
        }
        return 1u;
    });
    on("lstrcmpiA", 2, [this](Cpu& c) { return uint32_t(text.lstrcmpi_a(ptr<const char>(arg(c, 0)), ptr<const char>(arg(c, 1)))); });
    // wsprintfA is cdecl (the caller removes the arguments) and takes its arguments from the stack; wvsprintfA takes a pointer to them.
    auto format_into = [this](uint32_t buffer, const std::string& format, lw::FormatArgs& args) {
        std::string out = lw::wsprintf_format(text, format, args);
        std::memcpy(ptr<char>(buffer), out.c_str(), out.size() + 1);
        return uint32_t(out.size());
    };
    on("wsprintfA", 0, [format_into](Cpu& c) {
        unsigned next = 2;
        lw::FormatArgs args;
        args.next_arg = [&c, &next] { return arg(c, next++); };
        args.read_string = [](uint32_t a) { return cstr(a); };
        args.read_wide_string = [](uint32_t a) { return a ? std::u16string(ptr<const char16_t>(a)) : std::u16string(); };
        return format_into(arg(c, 0), cstr(arg(c, 1)), args);
    });
    on("wvsprintfA", 3, [format_into](Cpu& c) {
        uint32_t list = arg(c, 2);
        lw::FormatArgs args;
        args.next_arg = [&list] { const uint32_t v = *ptr<uint32_t>(list); list += 4; return v; };
        args.read_string = [](uint32_t a) { return cstr(a); };
        args.read_wide_string = [](uint32_t a) { return a ? std::u16string(ptr<const char16_t>(a)) : std::u16string(); };
        return format_into(arg(c, 0), cstr(arg(c, 1)), args);
    });
}

// ------------------------------------------------------------------------------------------------------------------------------ process
void Win32Facade::Impl::install_process() {
    on("GetVersionExA", 1, [this](Cpu& c) {
        uint8_t* out = ptr<uint8_t>(arg(c, 0));
        const uint32_t size = *ptr<uint32_t>(arg(c, 0));
        if (size != 148 && size != 156) { set_error(c, lw::err::invalid_parameter); return 0u; }       // OSVERSIONINFOA / OSVERSIONINFOEXA
        const auto v = process.get_version().value;
        const uint32_t fields[4] = {v.major, v.minor, v.build, v.platform};
        std::memcpy(out + 4, fields, 16);
        std::memset(out + 20, 0, size - 20);
        std::memcpy(out + 20, v.service_pack.c_str(), std::min<size_t>(v.service_pack.size(), 127));
        return 1u;
    });
    on("GetSystemInfo", 1, [this](Cpu& c) {
        const auto s = process.get_system_info();
        uint8_t* out = ptr<uint8_t>(arg(c, 0));
        std::memset(out, 0, 36);
        std::memcpy(out + 0, &s.processor_architecture, 2);
        std::memcpy(out + 4, &s.page_size, 4);
        std::memcpy(out + 8, &s.minimum_application_address, 4);
        std::memcpy(out + 12, &s.maximum_application_address, 4);
        std::memcpy(out + 16, &s.active_processor_mask, 4);
        std::memcpy(out + 20, &s.number_of_processors, 4);
        std::memcpy(out + 24, &s.processor_type, 4);
        std::memcpy(out + 28, &s.allocation_granularity, 4);
        std::memcpy(out + 32, &s.processor_level, 2);
        std::memcpy(out + 34, &s.processor_revision, 2);
        return 0u;
    });
    on("IsProcessorFeaturePresent", 1, [this](Cpu& c) { return process.is_processor_feature_present(arg(c, 0)) ? 1u : 0u; });
    on("GetCurrentProcessId", 0, [this](Cpu&) { return process.get_current_process_id(); });
    on("GetStartupInfoA", 1, [](Cpu& c) { uint8_t* out = ptr<uint8_t>(arg(c, 0)); std::memset(out, 0, 68); const uint32_t size = 68; std::memcpy(out, &size, 4); return 0u; });
    on("SetErrorMode", 1, [this](Cpu& c) { return process.set_error_mode(arg(c, 0)); });
    on("OutputDebugStringA", 1, [this](Cpu& c) { process.output_debug_string(cstr(arg(c, 0))); return 0u; });   // a sink that costs nothing: no debugger is listening
    on("IsDebuggerPresent", 0, [this](Cpu&) { return process.is_debugger_present() ? 1u : 0u; });
    on("SetEnvironmentVariableA", 2, [this](Cpu& c) {
        auto r = process.set_environment_variable(cstr(arg(c, 0)), cstr(arg(c, 1)), arg(c, 1) == 0);
        if (!r) { set_error(c, r.error); return 0u; }
        environment_a.clear();                               // the cached blocks are rebuilt on the next request
        environment_w.clear();
        return 1u;
    });
    // The environment block lives in the guest heap; a later change to the variables does not alter a block already handed out.
    auto block_a = [this](Cpu&) {
        if (environment_a.empty()) environment_a = process.environment_block();
        auto m = heaps.heap_alloc(heaps.get_process_heap(), 0, uint32_t(environment_a.size()));
        std::memcpy(ptr<char>(m.value), environment_a.data(), environment_a.size());
        return m.value;
    };
    on("GetEnvironmentStrings", 0, block_a);
    on("GetEnvironmentStringsA", 0, block_a);
    on("GetEnvironmentStringsW", 0, [this](Cpu&) {
        const std::string a = process.environment_block();
        std::u16string w = text.to_wide(lw::cp::ansi1252, std::string_view(a.data(), a.size()));
        auto m = heaps.heap_alloc(heaps.get_process_heap(), 0, uint32_t(w.size() * 2));
        std::memcpy(ptr<char16_t>(m.value), w.data(), w.size() * 2);
        return m.value;
    });
    on("FreeEnvironmentStringsA", 1, [this](Cpu& c) { heaps.heap_free(heaps.get_process_heap(), 0, arg(c, 0)); return 1u; });
    on("FreeEnvironmentStringsW", 1, [this](Cpu& c) { heaps.heap_free(heaps.get_process_heap(), 0, arg(c, 0)); return 1u; });
}

// ------------------------------------------------------------------------------------------------------------------------------ sync
void Win32Facade::Impl::install_sync() {
    auto section = [this](uint32_t address) {
        std::lock_guard lock(cs_mutex);
        auto it = sections.find(address);
        if (it == sections.end()) it = sections.emplace(address, sync.cs_create()).first;      // a section the game used without initialising it here
        return it->second;
    };
    on("InitializeCriticalSection", 1, [this](Cpu& c) {
        std::lock_guard lock(cs_mutex);
        auto it = sections.find(arg(c, 0));
        if (it != sections.end()) sync.cs_delete(it->second);
        sections[arg(c, 0)] = sync.cs_create();
        return 0u;
    });
    on("EnterCriticalSection", 1, [this, section](Cpu& c) { sync.cs_enter(section(arg(c, 0))); return 0u; });
    on("LeaveCriticalSection", 1, [this, section](Cpu& c) { sync.cs_leave(section(arg(c, 0))); return 0u; });
    on("DeleteCriticalSection", 1, [this](Cpu& c) {
        std::lock_guard lock(cs_mutex);
        auto it = sections.find(arg(c, 0));
        if (it != sections.end()) { sync.cs_delete(it->second); sections.erase(it); }
        return 0u;
    });
    on("TlsAlloc", 0, [this](Cpu&) { return sync.tls_alloc(); });
    on("TlsFree", 1, [this](Cpu& c) { return sync.tls_free(arg(c, 0)) ? 1u : (set_error(c, lw::err::invalid_parameter), 0u); });
    on("TlsGetValue", 1, [this](Cpu& c) { auto r = sync.tls_get_value(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } set_error(c, 0); return r.value; });
    on("TlsSetValue", 2, [this](Cpu& c) { auto r = sync.tls_set_value(arg(c, 0), arg(c, 1)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });

    on("CreateEventA", 4, [this](Cpu& c) {
        auto r = sync.create_event(arg(c, 1) != 0, arg(c, 2) != 0, cstr(arg(c, 3)));
        if (r.error) set_error(c, r.error);
        return r.value;
    });
    on("SetEvent", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "SetEvent", SetEvent(H(arg(c, 0))));
        auto r = sync.set_event(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("ResetEvent", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "ResetEvent", ResetEvent(H(arg(c, 0))));
        auto r = sync.reset_event(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("CreateMutexA", 3, [this](Cpu& c) {
        auto r = sync.create_mutex(arg(c, 1) != 0, cstr(arg(c, 2)));
        if (r.error) set_error(c, r.error);
        return r.value;
    });
    on("ReleaseMutex", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "ReleaseMutex", ReleaseMutex(H(arg(c, 0))));
        auto r = sync.release_mutex(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("CloseHandle", 1, [this](Cpu& c) {
        const uint32_t h = arg(c, 0);
        if (mine(h)) return handles.close(h) ? 1u : (set_error(c, lw::err::invalid_handle), 0u);
        return FACADE_REAL(c, "CloseHandle", CloseHandle(H(h)));
    });
    on("DuplicateHandle", 7, [this](Cpu& c) {
        const uint32_t source = arg(c, 1);
        if (!mine(source)) return FACADE_REAL(c, "DuplicateHandle", DuplicateHandle(H(arg(c, 0)), H(source), H(arg(c, 2)), ptr<HANDLE>(arg(c, 3)), arg(c, 4), arg(c, 5), arg(c, 6)));
        auto r = sync.duplicate_handle(source, (arg(c, 6) & 0x1u /* DUPLICATE_CLOSE_SOURCE */) != 0);
        if (!r) { set_error(c, r.error); return 0u; }
        if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = r.value;
        return 1u;
    });
    // Waits are done in slices so that a stopping platform interrupts them, like the bridge's own waits.
    auto wait_one = [this](Cpu& c, uint32_t handle, uint32_t ms) -> uint32_t {
        uint32_t remaining = ms;
        for (;;) {
            const uint32_t part = remaining == lw::kInfinite ? 100u : std::min(remaining, 100u);
            uint32_t value;
            if (mine(handle)) {
                auto r = sync.wait_for_single_object(handle, part);
                if (r.error) { set_error(c, r.error); return lw::kWaitFailed; }
                value = r.value;
            } else {
                value = FACADE_REAL(c, "WaitForSingleObject", WaitForSingleObject(H(handle), part));
            }
            if (value != lw::kWaitTimeout) return value;
            if (remaining != lw::kInfinite) { if (remaining <= 100) return value; remaining -= 100; }
            platform.throw_if_stopping("guest wait");
        }
    };
    on("WaitForSingleObject", 2, [wait_one](Cpu& c) { return wait_one(c, arg(c, 0), arg(c, 1)); });
    on("WaitForMultipleObjects", 4, [this](Cpu& c) -> uint32_t {
        const uint32_t count = arg(c, 0);
        const uint32_t* list = ptr<const uint32_t>(arg(c, 1));
        const bool all = arg(c, 2) != 0;
        uint32_t ms = arg(c, 3);
        size_t owned = 0;
        for (uint32_t i = 0; i < count && i < 64; ++i) owned += mine(list[i]);
        if (owned == 0) {
            for (;;) {
                const uint32_t part = ms == lw::kInfinite ? 100u : std::min(ms, 100u);
                const uint32_t v = FACADE_REAL(c, "WaitForMultipleObjects", WaitForMultipleObjects(count, reinterpret_cast<const HANDLE*>(list), all, part));
                if (v != lw::kWaitTimeout) return v;
                if (ms != lw::kInfinite) { if (ms <= 100) return v; ms -= 100; }
                platform.throw_if_stopping("guest wait");
            }
        }
        if (owned == count) {
            for (;;) {
                const uint32_t part = ms == lw::kInfinite ? 100u : std::min(ms, 100u);
                auto r = sync.wait_for_multiple_objects({list, count}, all, part);
                if (r.error) { set_error(c, r.error); return lw::kWaitFailed; }
                if (r.value != lw::kWaitTimeout) return r.value;
                if (ms != lw::kInfinite) { if (ms <= 100) return lw::kWaitTimeout; ms -= 100; }
                platform.throw_if_stopping("guest wait");
            }
        }
        // Handles of both kinds in one wait: polled (documented deviation: the signal of an auto-reset object is not taken atomically across kinds).
        for (;;) {
            for (uint32_t i = 0; i < count; ++i) {
                uint32_t value;
                if (mine(list[i])) { auto r = sync.wait_for_single_object(list[i], 0); value = r.value; }
                else value = FACADE_REAL(c, "WaitForSingleObject", WaitForSingleObject(H(list[i]), 0));
                if (!all && value != lw::kWaitTimeout) return value + i;
            }
            if (ms == 0) return lw::kWaitTimeout;
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            if (ms != lw::kInfinite) --ms;
            platform.throw_if_stopping("guest wait");
        }
    });
}

// ------------------------------------------------------------------------------------------------------------------------------ memory
void Win32Facade::Impl::install_memory() {
    on("GetProcessHeap", 0, [this](Cpu&) { return heaps.get_process_heap(); });
    on("HeapCreate", 3, [this](Cpu& c) { auto r = heaps.heap_create(arg(c, 0), arg(c, 1), arg(c, 2)); if (!r) { set_error(c, r.error); return 0u; } return r.value; });
    on("HeapDestroy", 1, [this](Cpu& c) { auto r = heaps.heap_destroy(arg(c, 0)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("HeapAlloc", 3, [this](Cpu& c) { auto r = heaps.heap_alloc(arg(c, 0), arg(c, 1), arg(c, 2)); if (!r) { set_error(c, r.error); return 0u; } return r.value; });
    on("HeapReAlloc", 4, [this](Cpu& c) { auto r = heaps.heap_realloc(arg(c, 0), arg(c, 1), arg(c, 2), arg(c, 3)); if (!r) { set_error(c, r.error); return 0u; } return r.value; });
    on("HeapFree", 3, [this](Cpu& c) { auto r = heaps.heap_free(arg(c, 0), arg(c, 1), arg(c, 2)); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("HeapSize", 3, [this](Cpu& c) { auto r = heaps.heap_size(arg(c, 0), arg(c, 1), arg(c, 2)); if (r.error) set_error(c, r.error); return r.value; });
    on("GlobalAlloc", 2, [this](Cpu& c) { auto r = heaps.global_alloc(arg(c, 0), arg(c, 1)); if (!r) { set_error(c, r.error); return 0u; } return r.value; });
    on("GlobalFree", 1, [this](Cpu& c) { auto r = heaps.global_free(arg(c, 0)); if (r.error) set_error(c, r.error); return r.value; });
    // VirtualAlloc / VirtualProtect stay in the bridge: they register run-time generated code for the interpreter, which belongs to the guest core.
}

// ------------------------------------------------------------------------------------------------------------------------------ files
void Win32Facade::Impl::install_files() {
    on("CreateFileA", 7, [this](Cpu& c) {
        const uint32_t flags = arg(c, 5);
        const std::string name = cstr(arg(c, 0));
        // With a real OS (32-bit Windows), overlapped files, devices and other special opens stay with it. Without one, an overlapped file is an ordinary file whose
        // reads and writes complete before they return (see ReadFile), which is a legal way for overlapped I/O to finish; devices ("\\.\\") do not exist.
        constexpr uint32_t kSpecial = 0x40000000u /* OVERLAPPED */ | 0x04000000u /* DELETE_ON_CLOSE */ | 0x02000000u /* BACKUP_SEMANTICS */ | 0x20000000u /* NO_BUFFERING */ | 0x00200000u /* OPEN_REPARSE_POINT */;
        const bool special = kRealOs ? ((flags & kSpecial) || name.rfind("\\\\", 0) == 0) : false;
        if (special) return FACADE_REAL(c, "CreateFileA", uintptr_t(CreateFileA(name.c_str(), arg(c, 1), arg(c, 2), nullptr, arg(c, 4), flags, nullptr)));
        auto r = files.create_file(name, arg(c, 1), arg(c, 2), arg(c, 4), flags);
        set_error(c, r.error);
        return r.value;
    });
    on("ReadFile", 5, [this](Cpu& c) {
        if (!mine(arg(c, 0)) || (kRealOs && arg(c, 4))) return FACADE_REAL(c, "ReadFile", ReadFile(H(arg(c, 0)), ptr<void>(arg(c, 1)), arg(c, 2), arg(c, 3) ? ptr<DWORD>(arg(c, 3)) : nullptr, arg(c, 4) ? ptr<OVERLAPPED>(arg(c, 4)) : nullptr));
        if (arg(c, 4)) {                                                            // OVERLAPPED {Internal, InternalHigh, Offset, OffsetHigh, hEvent}: read at that offset, complete now
            uint32_t* o = ptr<uint32_t>(arg(c, 4));
            auto at = files.set_file_pointer(arg(c, 0), int64_t(o[2]) | (int64_t(o[3]) << 32), 0);
            if (at.error) { set_error(c, at.error); return 0u; }
            auto r = files.read_file(arg(c, 0), lw::MutableBytes(ptr<std::byte>(arg(c, 1)), arg(c, 2)));
            o[0] = r.error; o[1] = r.error ? 0 : r.value;
            if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = r.error ? 0 : r.value;
            if (o[4]) sync.set_event(o[4]);
            if (r.error) { set_error(c, r.error); return 0u; }
            return 1u;
        }
        auto r = files.read_file(arg(c, 0), lw::MutableBytes(ptr<std::byte>(arg(c, 1)), arg(c, 2)));
        if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = r.error ? 0 : r.value;
        if (r.error) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("WriteFile", 5, [this](Cpu& c) {
        if (!mine(arg(c, 0)) || (kRealOs && arg(c, 4))) return FACADE_REAL(c, "WriteFile", WriteFile(H(arg(c, 0)), ptr<const void>(arg(c, 1)), arg(c, 2), arg(c, 3) ? ptr<DWORD>(arg(c, 3)) : nullptr, arg(c, 4) ? ptr<OVERLAPPED>(arg(c, 4)) : nullptr));
        if (arg(c, 4)) {
            uint32_t* o = ptr<uint32_t>(arg(c, 4));
            auto at = files.set_file_pointer(arg(c, 0), int64_t(o[2]) | (int64_t(o[3]) << 32), 0);
            if (at.error) { set_error(c, at.error); return 0u; }
            auto r = files.write_file(arg(c, 0), lw::Bytes(ptr<const std::byte>(arg(c, 1)), arg(c, 2)));
            o[0] = r.error; o[1] = r.value;
            if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = r.value;
            if (o[4]) sync.set_event(o[4]);
            if (r.error) { set_error(c, r.error); return 0u; }
            return 1u;
        }
        auto r = files.write_file(arg(c, 0), lw::Bytes(ptr<const std::byte>(arg(c, 1)), arg(c, 2)));
        if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = r.value;
        if (r.error) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    // The overlapped operations of a host without a real OS complete before they return (see ReadFile), so the result is already in the structure.
    on("GetOverlappedResult", 4, [this](Cpu& c) -> uint32_t {
        if (kRealOs && !mine(arg(c, 0))) return FACADE_REAL(c, "GetOverlappedResult", GetOverlappedResult(H(arg(c, 0)), ptr<OVERLAPPED>(arg(c, 1)), arg(c, 2) ? ptr<DWORD>(arg(c, 2)) : nullptr, arg(c, 3)));
        if (!arg(c, 1)) { set_error(c, lw::err::invalid_parameter); return 0u; }
        const uint32_t* o = ptr<const uint32_t>(arg(c, 1));
        if (arg(c, 2)) *ptr<uint32_t>(arg(c, 2)) = o[1];
        if (o[0]) { set_error(c, o[0]); return 0u; }
        return 1u;
    });
    on("SetFilePointer", 4, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "SetFilePointer", SetFilePointer(H(arg(c, 0)), LONG(arg(c, 1)), arg(c, 2) ? ptr<LONG>(arg(c, 2)) : nullptr, arg(c, 3)));
        const uint32_t high_address = arg(c, 2);
        const int64_t distance = high_address ? (int64_t(int32_t(*ptr<uint32_t>(high_address))) << 32) | arg(c, 1) : int64_t(int32_t(arg(c, 1)));
        auto r = files.set_file_pointer(arg(c, 0), distance, arg(c, 3));
        if (r.error) { set_error(c, r.error); return 0xFFFFFFFFu; }
        if (high_address) *ptr<uint32_t>(high_address) = uint32_t(r.value >> 32);
        set_error(c, 0);
        return uint32_t(r.value);
    });
    on("GetFileSize", 2, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "GetFileSize", GetFileSize(H(arg(c, 0)), arg(c, 1) ? ptr<DWORD>(arg(c, 1)) : nullptr));
        auto r = files.get_file_size(arg(c, 0));
        if (r.error) { set_error(c, r.error); return 0xFFFFFFFFu; }
        if (arg(c, 1)) *ptr<uint32_t>(arg(c, 1)) = uint32_t(r.value >> 32);
        set_error(c, 0);
        return uint32_t(r.value);
    });
    on("SetEndOfFile", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "SetEndOfFile", SetEndOfFile(H(arg(c, 0))));
        auto r = files.set_end_of_file(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("FlushFileBuffers", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "FlushFileBuffers", FlushFileBuffers(H(arg(c, 0))));
        auto r = files.flush_file_buffers(arg(c, 0));
        if (!r) { set_error(c, r.error); return 0u; }
        return 1u;
    });
    on("GetFileType", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "GetFileType", GetFileType(H(arg(c, 0))));
        return files.get_file_type(arg(c, 0));
    });
    on("DeleteFileA", 1, [this](Cpu& c) { auto r = files.delete_file(cstr(arg(c, 0))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("MoveFileA", 2, [this](Cpu& c) { auto r = files.move_file(cstr(arg(c, 0)), cstr(arg(c, 1))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("CreateDirectoryA", 2, [this](Cpu& c) { auto r = files.create_directory(cstr(arg(c, 0))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    on("RemoveDirectoryA", 1, [this](Cpu& c) { auto r = files.remove_directory(cstr(arg(c, 0))); if (!r) { set_error(c, r.error); return 0u; } return 1u; });
    auto fill_find = [](uint32_t address, const lw::FindData& d) {
        uint8_t* out = ptr<uint8_t>(address);
        std::memset(out, 0, 320);
        std::memcpy(out + 0, &d.attributes, 4);
        std::memcpy(out + 4, &d.creation_time, 8);
        std::memcpy(out + 12, &d.access_time, 8);
        std::memcpy(out + 20, &d.write_time, 8);
        const uint32_t high = uint32_t(d.size >> 32), low = uint32_t(d.size);
        std::memcpy(out + 28, &high, 4);
        std::memcpy(out + 32, &low, 4);
        std::memcpy(out + 44, d.name.c_str(), std::min<size_t>(d.name.size(), 259));
    };
    on("FindFirstFileA", 2, [this, fill_find](Cpu& c) {
        lw::FindData d;
        auto r = files.find_first_file(cstr(arg(c, 0)), d);
        if (r.error) { set_error(c, r.error); return lw::kInvalidHandle; }
        fill_find(arg(c, 1), d);
        return r.value;
    });
    on("FindNextFileA", 2, [this, fill_find](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "FindNextFileA", FindNextFileA(H(arg(c, 0)), ptr<WIN32_FIND_DATAA>(arg(c, 1))));
        lw::FindData d;
        auto r = files.find_next_file(arg(c, 0), d);
        if (!r) { set_error(c, r.error); return 0u; }
        fill_find(arg(c, 1), d);
        return 1u;
    });
    on("FindClose", 1, [this](Cpu& c) {
        if (!mine(arg(c, 0))) return FACADE_REAL(c, "FindClose", FindClose(H(arg(c, 0))));
        return files.find_close(arg(c, 0)) ? 1u : (set_error(c, lw::err::invalid_handle), 0u);
    });
    on("GetFullPathNameA", 4, [this](Cpu& c) {
        auto r = files.get_full_path_name(cstr(arg(c, 0)));
        if (!r) { set_error(c, r.error); return 0u; }
        const uint32_t needed = uint32_t(r.value.size()) + 1;
        if (arg(c, 1) < needed) return needed;                                                   // the buffer is too small: the size needed, with the terminator
        std::memcpy(ptr<char>(arg(c, 2)), r.value.c_str(), needed);
        if (arg(c, 3)) {
            const size_t slash = r.value.find_last_of('\\');
            *ptr<uint32_t>(arg(c, 3)) = arg(c, 2) + uint32_t(slash == std::string::npos ? 0 : slash + 1);
        }
        return needed - 1;
    });
    on("GetLongPathNameA", 3, [this](Cpu& c) {
        auto r = files.get_long_path_name(cstr(arg(c, 0)));
        if (!r) { set_error(c, r.error); return 0u; }
        const uint32_t needed = uint32_t(r.value.size()) + 1;
        if (arg(c, 2) < needed) return needed;
        std::memcpy(ptr<char>(arg(c, 1)), r.value.c_str(), needed);
        return needed - 1;
    });
    on("GetCurrentDirectoryA", 2, [this](Cpu& c) {
        const std::string cwd = files.get_current_directory();
        const uint32_t needed = uint32_t(cwd.size()) + 1;
        if (arg(c, 0) < needed) return needed;
        std::memcpy(ptr<char>(arg(c, 1)), cwd.c_str(), needed);
        return needed - 1;
    });
    // Drive queries, resources and file mappings stay with the real system (they describe the host, or the real image).
}

Win32Facade::Impl::~Impl() { windows.reset(); }   // before the input it listens to (a member declared later) goes

Win32Facade::Win32Facade(GuestPlatform& platform, const Win32LayerOptions& options, nfsu2::platform::Input* input) : impl_(std::make_unique<Impl>(platform, options)) {
    impl_->input_override = input;
    if (options.time) impl_->install_time();
    if (options.text) impl_->install_text();
    if (options.process) impl_->install_process();
    if (options.memory) impl_->install_memory();
    if (options.sync) impl_->install_sync();
    if (options.files) impl_->install_files();
    if (options.dinput) impl_->install_dinput();
    if (options.loader) impl_->install_loader();
    if (options.registry) impl_->install_registry();
    if (options.resources) impl_->install_resources();
    if (options.system) impl_->install_system();
    if (options.user32) impl_->install_user32();
    if (options.traps) impl_->install_traps();
}
Win32Facade::~Win32Facade() = default;
const std::string& Win32Facade::installed_report() const { return impl_->report; }
bool Win32Facade::set_event(uint32_t handle) { return impl_->sync.set_event(handle).error == 0; }
bool Win32Facade::is_window(uint32_t handle) { return impl_->windows && impl_->windows->is_window(handle); }

}  // namespace nfsu2raw
