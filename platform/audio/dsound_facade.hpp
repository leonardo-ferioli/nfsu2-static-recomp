// DirectSound facade: the only part of the audio layer that knows the guest ABI. It turns the guest's COM calls (32-bit pointers, stdcall
// words, WAVEFORMATEX / DSBUFFERDESC / DS3DBUFFER structures in guest memory, GUIDs, event handles) into ds::Device calls and back.
// It owns the COM objects the guest sees (a vtable pointer and a cookie in guest memory), their reference counts, the QueryInterface
// graph (IDirectSound, IDirectSoundBuffer, IDirectSound3DBuffer, IDirectSound3DListener, IDirectSoundNotify) and the Lock staging memory
// (one guest-visible mirror per buffer: Lock hands out pointers into it, Unlock hands the written bytes to the Device).
//
// It does not know how method calls reach it: a host glue (dsound_install.cpp for the NFSU2 launcher) gives each (interface, slot) a call
// token, reads the stdcall words from the guest stack and calls `call()`. Tests drive it with a fake guest memory.
#pragma once
#include <cstdint>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

#include "platform/audio/ds_device.hpp"

namespace nfsu2::platform::audio {

// Guest memory as the facade needs it (the guest arena; on today's 32-bit Windows host, plain process memory at the same addresses).
class GuestMemory {
public:
    virtual ~GuestMemory() = default;
    virtual uint32_t alloc(uint32_t bytes) = 0;                 // zero-filled, 16-byte aligned; 0 on failure
    virtual void free(uint32_t address) = 0;
    virtual uint8_t* ptr(uint32_t address, uint32_t bytes) = 0; // host pointer valid for `bytes` bytes, or nullptr when not mapped
};

// Operating-system services the guest's handles refer to.
class HostServices {
public:
    virtual ~HostServices() = default;
    virtual void set_event(uint32_t guest_handle) = 0;          // SetEvent on a guest HANDLE (position notifications)
    virtual bool is_window(uint32_t guest_hwnd) = 0;            // IsWindow (SetCooperativeLevel validates its window)
};

enum class DsInterface : uint8_t { direct_sound, buffer, buffer_3d, listener_3d, notify, count };

struct MethodDesc {
    DsInterface iface;
    uint8_t slot;
    uint8_t words;          // stdcall argument words including `this`
    const char* name;
};

class DsoundFacade {
public:
    DsoundFacade(GuestMemory& memory, HostServices& host, ds::Device& device);
    ~DsoundFacade();

    // Every vtable slot of every interface, in a stable order (index = method id).
    static const std::vector<MethodDesc>& methods();
    // The call token the glue registered for method id `index` (must be set for all methods before the first DirectSoundCreate).
    void set_token(size_t index, uint32_t token);

    // DirectSoundCreate(lpcGuidDevice, ppDS, pUnkOuter): returns an HRESULT (the stdcall result in EAX).
    uint32_t direct_sound_create(uint32_t guid_address, uint32_t out_pointer, uint32_t outer);
    // One method call: `args[0]` is `this`. Returns EAX.
    uint32_t call(size_t method_index, const uint32_t* args);

    // Diagnostics for the log: calls per method, failures per method, and the first failure's arguments.
    std::string report() const;
    uint32_t live_objects() const;

private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};

}  // namespace nfsu2::platform::audio
