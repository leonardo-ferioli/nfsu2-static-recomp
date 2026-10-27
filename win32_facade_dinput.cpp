// The DirectInput 8 part of the Win32 facade: IDirectInput8A and IDirectInputDevice8A as COM objects in guest memory whose methods reach the Level A device
// model of legacy_win32 (legacy_win32/include/legacy_win32/dinput.hpp). A COM object is {vtable pointer, id}; the vtable is an array of call tokens
// (NativePlatform::add_method_token), so a guest `call [vtable + slot]` lands in a handler below that decodes the stdcall arguments and the guest structures.
#include "win32_facade_internal.hpp"
#include "host/windows_input.hpp"
#include <atomic>
#include <map>

namespace nfsu2raw {
namespace {

constexpr uint32_t E_NOINTERFACE_ = 0x80004002u, E_POINTER_ = 0x80004003u;

// IIDs the objects answer to (the A interfaces; the Unicode ones are refused with E_NOINTERFACE, like a library that does not offer them).
const ldi::Guid kIidUnknown = ldi::make_guid(0x00000000, 0x0000, 0x0000, {0xC0, 0, 0, 0, 0, 0, 0, 0x46});
const ldi::Guid kIidDirectInput8A = ldi::make_guid(0xBF798030, 0x483A, 0x4DA2, {0xAA, 0x99, 0x5D, 0x64, 0xED, 0x36, 0x97, 0x00});
const ldi::Guid kIidDevice8A = ldi::make_guid(0x54D41080, 0xDC15, 0x4833, {0xA4, 0x1B, 0x74, 0x8F, 0x73, 0xA3, 0x81, 0x79});

ldi::Guid read_guid(uint32_t address) { ldi::Guid g; if (address) std::memcpy(g.bytes.data(), ptr<const void>(address), 16); return g; }
void write_guid(uint32_t address, const ldi::Guid& g) { std::memcpy(ptr<void>(address), g.bytes.data(), 16); }

}  // namespace

namespace {
// A guest-visible block of bytes with a lifetime (the DIDEVICEINSTANCE a callback receives, an action table...).
struct Temp {
    Temp(Win32Facade::Impl& i, uint32_t bytes) : impl(i) { address = impl.heaps.heap_alloc(impl.heaps.get_process_heap(), lw::heap_flag::zero_memory, bytes).value; }
    ~Temp() { impl.heaps.heap_free(impl.heaps.get_process_heap(), 0, address); }
    Win32Facade::Impl& impl;
    uint32_t address = 0;
};

void fill_device_instance(uint32_t address, const ldi::DeviceInstance& d) {
    uint8_t* out = ptr<uint8_t>(address);
    std::memset(out, 0, 580);
    const uint32_t size = 580;
    std::memcpy(out, &size, 4);
    write_guid(address + 4, d.instance);
    write_guid(address + 20, d.product);
    std::memcpy(out + 36, &d.device_type, 4);
    std::memcpy(out + 40, d.instance_name.c_str(), std::min<size_t>(d.instance_name.size(), 259));
    std::memcpy(out + 300, d.product_name.c_str(), std::min<size_t>(d.product_name.size(), 259));
}

void fill_object_instance(uint32_t address, uint32_t size, const ldi::DeviceObject& o) {
    uint8_t* out = ptr<uint8_t>(address);
    std::memset(out, 0, std::min<uint32_t>(size, 316));
    std::memcpy(out, &size, 4);
    write_guid(address + 4, o.guid);
    std::memcpy(out + 20, &o.offset, 4);
    std::memcpy(out + 24, &o.type, 4);
    std::memcpy(out + 28, &o.flags, 4);
    std::memcpy(out + 32, o.name.c_str(), std::min<size_t>(o.name.size(), 259));
}

ldi::DataFormat read_data_format(uint32_t address) {
    ldi::DataFormat f;
    const uint32_t* h = ptr<const uint32_t>(address);        // dwSize, dwObjSize, dwFlags, dwDataSize, dwNumObjs, rgodf
    f.flags = h[2]; f.data_size = h[3];
    const uint32_t count = h[4], table = h[5];
    for (uint32_t i = 0; i < count && table; ++i) {
        const uint32_t* o = ptr<const uint32_t>(table + i * h[1]);   // pguid, dwOfs, dwType, dwFlags
        ldi::DataFormatObject obj;
        obj.has_guid = o[0] != 0;
        if (obj.has_guid) obj.guid = read_guid(o[0]);
        obj.offset = o[1]; obj.type = o[2]; obj.flags = o[3];
        f.objects.push_back(obj);
    }
    return f;
}

ldi::ActionFormat read_action_format(uint32_t address) {
    ldi::ActionFormat f;
    const uint8_t* b = ptr<const uint8_t>(address);
    uint32_t action_size, count, actions;
    std::memcpy(&action_size, b + 4, 4); std::memcpy(&f.data_size, b + 8, 4); std::memcpy(&count, b + 12, 4); std::memcpy(&actions, b + 16, 4);
    f.action_map_guid = read_guid(address + 20);
    std::memcpy(&f.genre, b + 36, 4); std::memcpy(&f.buffer_size, b + 40, 4); std::memcpy(&f.axis_min, b + 44, 4); std::memcpy(&f.axis_max, b + 48, 4);
    for (uint32_t i = 0; i < count && actions; ++i) {
        const uint8_t* a = ptr<const uint8_t>(actions + i * action_size);   // uAppData, dwSemantic, dwFlags, lptszActionName, guidInstance, dwObjID, dwHow
        ldi::Action act;
        std::memcpy(&act.app_data, a, 4); std::memcpy(&act.semantic, a + 4, 4); std::memcpy(&act.flags, a + 8, 4);
        act.guid_instance = read_guid(actions + i * action_size + 16);
        std::memcpy(&act.object_id, a + 32, 4); std::memcpy(&act.how, a + 36, 4);
        f.actions.push_back(act);
    }
    return f;
}

void write_action_results(uint32_t address, const ldi::ActionFormat& f) {
    const uint8_t* b = ptr<const uint8_t>(address);
    uint32_t action_size, actions;
    std::memcpy(&action_size, b + 4, 4); std::memcpy(&actions, b + 16, 4);
    for (size_t i = 0; i < f.actions.size() && actions; ++i) {
        uint8_t* a = ptr<uint8_t>(actions + uint32_t(i) * action_size);
        write_guid(actions + uint32_t(i) * action_size + 16, f.actions[i].guid_instance);
        std::memcpy(a + 32, &f.actions[i].object_id, 4);
        std::memcpy(a + 36, &f.actions[i].how, 4);
    }
}
}  // namespace

void Win32Facade::Impl::install_dinput() {
    dinput = std::make_unique<DInputState>();
    plat::Input* input = input_override;
    if (!input) { input_owned = lw::host::make_windows_input(); input = input_owned.get(); }
    di = std::make_unique<ldi::DirectInput>(*input, *clock, [](uint32_t hwnd) { return hwnd == 0 || nfsu2::guest::guest_handle(GetForegroundWindow()) == hwnd; });
    DInputState* state = dinput.get();
    Impl* self = this;

    // ---- object registry
    auto make_object = [self, state](bool is_device, std::shared_ptr<ldi::Device> device) -> uint32_t {
        auto o = std::make_shared<DInputState::Object>();
        o->is_device = is_device;
        o->device = std::move(device);
        const uint32_t address = self->heaps.heap_alloc(self->heaps.get_process_heap(), lw::heap_flag::zero_memory, 8).value;
        *ptr<uint32_t>(address) = is_device ? state->device_vtable : state->di_vtable;
        std::lock_guard lock(state->m);
        state->objects[address] = o;
        return address;
    };
    auto find = [state](uint32_t address) -> std::shared_ptr<DInputState::Object> {
        std::lock_guard lock(state->m);
        auto it = state->objects.find(address);
        return it == state->objects.end() ? nullptr : it->second;
    };
    auto device_of = [find](uint32_t address) -> std::shared_ptr<ldi::Device> { auto o = find(address); return o && o->is_device ? o->device : nullptr; };

    // ---- the vtables: one token per slot, in the order of the SDK headers
    auto token = [self](unsigned argc, NativePlatform::NativeHook hook) { return self->platform.add_method_token(argc, std::move(hook)); };
    auto unimplemented = [] (Cpu&) -> uint32_t { return ldi::hr::unsupported; };
    auto add_ref = [find](Cpu& c) -> uint32_t { auto o = find(arg(c, 0)); return o ? uint32_t(++o->refs) : 0u; };
    auto release = [self, state, find](Cpu& c) -> uint32_t {
        auto o = find(arg(c, 0));
        if (!o) return 0;
        const int left = --o->refs;
        if (left == 0) {
            { std::lock_guard lock(state->m); state->objects.erase(arg(c, 0)); }
            self->heaps.heap_free(self->heaps.get_process_heap(), 0, arg(c, 0));
        }
        return uint32_t(left);
    };
    auto query_interface = [find](Cpu& c) -> uint32_t {
        auto o = find(arg(c, 0));
        const uint32_t out = arg(c, 2);
        if (!out) return E_POINTER_;
        *ptr<uint32_t>(out) = 0;
        if (!o) return E_NOINTERFACE_;
        const ldi::Guid iid = read_guid(arg(c, 1));
        if (iid == kIidUnknown || (!o->is_device && iid == kIidDirectInput8A) || (o->is_device && iid == kIidDevice8A)) { *ptr<uint32_t>(out) = arg(c, 0); ++o->refs; return ldi::hr::ok; }
        return E_NOINTERFACE_;
    };

    // IDirectInput8A
    auto& dt = state->di_tokens;
    dt.push_back(token(3, query_interface));
    dt.push_back(token(1, add_ref));
    dt.push_back(token(1, release));
    dt.push_back(token(4, [self, make_object, state](Cpu& c) -> uint32_t {                                     // CreateDevice(this, rguid, ppDevice, pUnkOuter)
        self->di->pump();
        std::shared_ptr<ldi::Device> device;
        const uint32_t out = arg(c, 2);
        if (!out) return E_POINTER_;
        const ldi::Hresult r = self->di->create_device(read_guid(arg(c, 1)), device);
        *ptr<uint32_t>(out) = 0;
        if (r != ldi::hr::ok) return r;
        *ptr<uint32_t>(out) = make_object(true, device);
        return ldi::hr::ok;
    }));
    dt.push_back(token(5, [self](Cpu& c) -> uint32_t {                                                         // EnumDevices(this, devType, callback, ref, flags)
        self->di->pump();
        const uint32_t callback = arg(c, 2), reference = arg(c, 3);
        for (const auto& d : self->di->enum_devices(arg(c, 1), arg(c, 4))) {
            Temp info(*self, 580);
            fill_device_instance(info.address, d);
            if (self->platform.callback(callback, {info.address, reference}) == 0) break;                      // DIENUM_STOP
        }
        return ldi::hr::ok;
    }));
    dt.push_back(token(2, [self](Cpu& c) -> uint32_t { return self->di->get_device_status(read_guid(arg(c, 1))); }));     // GetDeviceStatus(this, rguid)
    dt.push_back(token(3, unimplemented));                                                                     // RunControlPanel
    dt.push_back(token(3, [](Cpu&) -> uint32_t { return ldi::hr::ok; }));                                      // Initialize(this, hinst, version)
    dt.push_back(token(4, unimplemented));                                                                     // FindDevice
    dt.push_back(token(6, [self, make_object](Cpu& c) -> uint32_t {                                           // EnumDevicesBySemantics(this, user, format, callback, ref, flags)
        self->di->pump();
        const uint32_t callback = arg(c, 3), reference = arg(c, 4);
        const ldi::ActionFormat format = read_action_format(arg(c, 2));
        const auto devices = self->di->enum_devices_by_semantics(format, arg(c, 5));
        uint32_t remaining = uint32_t(devices.size());
        for (const auto& d : devices) {
            std::shared_ptr<ldi::Device> device;
            if (self->di->create_device(d.instance, device) != ldi::hr::ok) continue;
            Temp info(*self, 580);
            fill_device_instance(info.address, d);
            const uint32_t object = make_object(true, device);
            --remaining;
            const uint32_t result = self->platform.callback(callback, {info.address, object, 0, remaining, reference});
            if (result == 0) break;
        }
        return ldi::hr::ok;
    }));
    dt.push_back(token(5, unimplemented));                                                                     // ConfigureDevices
    state->di_vtable = self->heaps.heap_alloc(self->heaps.get_process_heap(), 0, uint32_t(dt.size() * 4)).value;
    for (size_t i = 0; i < dt.size(); ++i) ptr<uint32_t>(state->di_vtable)[i] = dt[i];

    // IDirectInputDevice8A
    auto& vt = state->device_tokens;
    vt.push_back(token(3, query_interface));
    vt.push_back(token(1, add_ref));
    vt.push_back(token(1, release));
    vt.push_back(token(2, [device_of](Cpu& c) -> uint32_t {                                                    // GetCapabilities(this, DIDEVCAPS*)
        auto d = device_of(arg(c, 0));
        if (!d) return ldi::hr::invalid_param;
        if (*ptr<uint32_t>(arg(c, 1)) != 44 && *ptr<uint32_t>(arg(c, 1)) != 24) return ldi::hr::invalid_param;
        ldi::DeviceCaps caps;
        const ldi::Hresult r = d->get_capabilities(caps);
        if (r != ldi::hr::ok) return r;
        const uint32_t size = *ptr<uint32_t>(arg(c, 1));
        const uint32_t words[11] = {size, caps.flags, caps.device_type, caps.axes, caps.buttons, caps.povs, caps.ff_sample_period, caps.ff_min_time_resolution, caps.firmware_revision, caps.hardware_revision, caps.ff_driver_version};
        std::memcpy(ptr<void>(arg(c, 1)), words, size);
        return ldi::hr::ok;
    }));
    vt.push_back(token(4, [self, device_of](Cpu& c) -> uint32_t {                                              // EnumObjects(this, callback, ref, flags)
        auto d = device_of(arg(c, 0));
        if (!d) return ldi::hr::invalid_param;
        const uint32_t callback = arg(c, 1), reference = arg(c, 2), flags = arg(c, 3);
        for (const auto& o : d->objects()) {
            if (flags && flags != 0 && !((flags & 0xFF) == 0 || (flags & o.type & 0xFF))) continue;           // DIDFT_* filter (DIDFT_ALL = 0 takes everything)
            Temp info(*self, 316);
            fill_object_instance(info.address, 316, o);
            if (self->platform.callback(callback, {info.address, reference}) == 0) break;
        }
        return ldi::hr::ok;
    }));
    vt.push_back(token(3, [device_of](Cpu& c) -> uint32_t {                                                    // GetProperty(this, rguidProp, pdiph)
        auto d = device_of(arg(c, 0));
        if (!d) return ldi::hr::invalid_param;
        const uint32_t property = arg(c, 1), header = arg(c, 2);
        if (!header || property > 0xFFFF) return ldi::hr::invalid_param;
        const uint32_t* h = ptr<const uint32_t>(header);                                                      // dwSize, dwHeaderSize, dwObj, dwHow
        if (h[1] != 16) return ldi::hr::invalid_param;
        if (property == ldi::prop::range || property == ldi::prop::physicalrange || property == ldi::prop::logicalrange) {
            if (h[0] != 24) return ldi::hr::invalid_param;
            int32_t lo = 0, hi = 0;
            const ldi::Hresult r = d->get_property_range(property, h[3], h[2], lo, hi);
            if (r == ldi::hr::ok) { ptr<int32_t>(header)[4] = lo; ptr<int32_t>(header)[5] = hi; }
            return r;
        }
        if (h[0] != 20) return ldi::hr::invalid_param;
        uint32_t value = 0;
        const ldi::Hresult r = d->get_property_dword(property, h[3], h[2], value);
        if (r == ldi::hr::ok) ptr<uint32_t>(header)[4] = value;
        return r;
    }));
    vt.push_back(token(3, [device_of](Cpu& c) -> uint32_t {                                                    // SetProperty(this, rguidProp, pdiph)
        auto d = device_of(arg(c, 0));
        if (!d) return ldi::hr::invalid_param;
        const uint32_t property = arg(c, 1), header = arg(c, 2);
        if (!header || property > 0xFFFF) return ldi::hr::invalid_param;
        const uint32_t* h = ptr<const uint32_t>(header);
        if (h[1] != 16) return ldi::hr::invalid_param;
        if (property == ldi::prop::range) {
            if (h[0] != 24) return ldi::hr::invalid_param;
            return d->set_property_range(property, h[3], h[2], ptr<const int32_t>(header)[4], ptr<const int32_t>(header)[5]);
        }
        if (h[0] != 20) return ldi::hr::invalid_param;
        return d->set_property_dword(property, h[3], h[2], ptr<const uint32_t>(header)[4]);
    }));
    vt.push_back(token(1, [self, device_of](Cpu& c) -> uint32_t { self->di->pump(); auto d = device_of(arg(c, 0)); return d ? d->acquire() : ldi::hr::invalid_param; }));      // Acquire
    vt.push_back(token(1, [device_of](Cpu& c) -> uint32_t { auto d = device_of(arg(c, 0)); return d ? d->unacquire() : ldi::hr::invalid_param; }));                       // Unacquire
    vt.push_back(token(3, [self, device_of](Cpu& c) -> uint32_t {                                              // GetDeviceState(this, cb, data)
        self->di->pump();
        auto d = device_of(arg(c, 0));
        if (!d) return ldi::hr::invalid_param;
        return d->get_device_state(lw::MutableBytes(ptr<std::byte>(arg(c, 2)), arg(c, 1)));
    }));
    vt.push_back(token(5, [self, device_of](Cpu& c) -> uint32_t {                                              // GetDeviceData(this, cbObjectData, rgdod, pdwInOut, dwFlags)
        self->di->pump();
        auto d = device_of(arg(c, 0));
        if (!d) return ldi::hr::invalid_param;
        const uint32_t object_size = arg(c, 1), data = arg(c, 2), in_out = arg(c, 3);
        if (!in_out || (object_size != 16 && object_size != 20)) return ldi::hr::invalid_param;
        uint32_t count = *ptr<uint32_t>(in_out);
        std::vector<ldi::DeviceEvent> events;
        const ldi::Hresult r = d->get_device_data(data ? &events : nullptr, count, arg(c, 4));
        if (r == ldi::hr::ok || r == ldi::hr::false_) {
            for (uint32_t i = 0; data && i < count && i < events.size(); ++i) {
                uint32_t* out = ptr<uint32_t>(data + i * object_size);
                out[0] = events[i].offset; out[1] = events[i].data; out[2] = events[i].timestamp; out[3] = events[i].sequence;
                if (object_size == 20) out[4] = events[i].app_data;
            }
            *ptr<uint32_t>(in_out) = count;
        }
        return r;
    }));
    vt.push_back(token(2, [device_of](Cpu& c) -> uint32_t {                                                    // SetDataFormat(this, DIDATAFORMAT*)
        auto d = device_of(arg(c, 0));
        if (!d || !arg(c, 1)) return ldi::hr::invalid_param;
        return d->set_data_format(read_data_format(arg(c, 1)));
    }));
    vt.push_back(token(2, [](Cpu&) -> uint32_t { return ldi::hr::ok; }));                                      // SetEventNotification: accepted; the game polls
    vt.push_back(token(3, [device_of](Cpu& c) -> uint32_t { auto d = device_of(arg(c, 0)); return d ? d->set_cooperative_level(arg(c, 1), arg(c, 2)) : ldi::hr::invalid_param; }));   // SetCooperativeLevel
    vt.push_back(token(4, [device_of](Cpu& c) -> uint32_t {                                                    // GetObjectInfo(this, pdidoi, dwObj, dwHow)
        auto d = device_of(arg(c, 0));
        if (!d || !arg(c, 1)) return ldi::hr::invalid_param;
        const uint32_t size = *ptr<uint32_t>(arg(c, 1));
        if (size != 316 && size != 288) return ldi::hr::invalid_param;
        ldi::DeviceObject o;
        const ldi::Hresult r = d->get_object_info(arg(c, 2), arg(c, 3), o);
        if (r == ldi::hr::ok) fill_object_instance(arg(c, 1), size, o);
        return r;
    }));
    vt.push_back(token(2, [device_of](Cpu& c) -> uint32_t {                                                    // GetDeviceInfo(this, DIDEVICEINSTANCE*)
        auto d = device_of(arg(c, 0));
        if (!d || !arg(c, 1)) return ldi::hr::invalid_param;
        fill_device_instance(arg(c, 1), d->instance());
        return ldi::hr::ok;
    }));
    vt.push_back(token(3, unimplemented));          // RunControlPanel
    vt.push_back(token(4, [](Cpu&) -> uint32_t { return ldi::hr::ok; }));   // Initialize
    vt.push_back(token(5, unimplemented));          // CreateEffect
    vt.push_back(token(4, unimplemented));          // EnumEffects
    vt.push_back(token(3, unimplemented));          // GetEffectInfo
    vt.push_back(token(2, unimplemented));          // GetForceFeedbackState
    vt.push_back(token(2, unimplemented));          // SendForceFeedbackCommand
    vt.push_back(token(4, unimplemented));          // EnumCreatedEffectObjects
    vt.push_back(token(2, unimplemented));          // Escape
    vt.push_back(token(1, [self, device_of](Cpu& c) -> uint32_t { self->di->pump(); auto d = device_of(arg(c, 0)); return d ? d->poll() : ldi::hr::invalid_param; }));   // Poll
    vt.push_back(token(5, unimplemented));          // SendDeviceData
    vt.push_back(token(5, unimplemented));          // EnumEffectsInFile
    vt.push_back(token(5, unimplemented));          // WriteEffectToFile
    vt.push_back(token(4, [device_of](Cpu& c) -> uint32_t {                                                    // BuildActionMap(this, DIACTIONFORMATA*, user, flags)
        auto d = device_of(arg(c, 0));
        if (!d || !arg(c, 1)) return ldi::hr::invalid_param;
        ldi::ActionFormat f = read_action_format(arg(c, 1));
        const ldi::Hresult r = d->build_action_map(f, cstr(arg(c, 2)), arg(c, 3));
        if (r == ldi::hr::ok) write_action_results(arg(c, 1), f);
        return r;
    }));
    vt.push_back(token(4, [device_of](Cpu& c) -> uint32_t {                                                    // SetActionMap(this, DIACTIONFORMATA*, user, flags)
        auto d = device_of(arg(c, 0));
        if (!d || !arg(c, 1)) return ldi::hr::invalid_param;
        return d->set_action_map(read_action_format(arg(c, 1)), cstr(arg(c, 2)), arg(c, 3));
    }));
    vt.push_back(token(2, unimplemented));          // GetImageInfo
    state->device_vtable = self->heaps.heap_alloc(self->heaps.get_process_heap(), 0, uint32_t(vt.size() * 4)).value;
    for (size_t i = 0; i < vt.size(); ++i) ptr<uint32_t>(state->device_vtable)[i] = vt[i];

    // DirectInput8Create(hinst, version, riid, ppvOut, punkOuter): the entry point of the API
    on("DirectInput8Create", 5, [self, make_object](Cpu& c) -> uint32_t {
        const uint32_t out = arg(c, 3);
        if (!out) return E_POINTER_;
        *ptr<uint32_t>(out) = 0;
        if (arg(c, 4)) return ldi::hr::no_aggregation;
        if (arg(c, 1) < 0x0800) return ldi::hr::old_version;
        const ldi::Guid iid = read_guid(arg(c, 2));
        if (!(iid == kIidDirectInput8A || iid == kIidUnknown)) return E_NOINTERFACE_;
        *ptr<uint32_t>(out) = make_object(false, nullptr);
        return ldi::hr::ok;
    });
}

}  // namespace nfsu2raw
