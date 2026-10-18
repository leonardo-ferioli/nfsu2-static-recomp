// Direct3D 9 call recorder for the native bridge (docs/PLATFORM_API.md, section 6, step 2a).
//
// While the game still talks to the real Direct3D 9, every call of its main thread goes through NativePlatform::dispatch; the recorder reads the
// call from the guest stack (arguments by Direct3D 9's published layouts) and writes it to a trace (platform/d3d9_trace.hpp) with the data
// it carried. Resource traffic (creation, locks and their data, destruction) is recorded from the start of the run; state and draw calls only
// inside a recording window, which opens when F9 is pressed (or at a given frame) and lasts a number of frames. At the start of a window the
// device's whole state is read back and written as set_* records, so a window replays on its own. Reference images of the real device's back
// buffer are saved every few frames of a window (trace op_reference_image and frame_NNNNNN.bmp next to the trace).
#pragma once
#include "platform/d3d9_trace.hpp"
#include <cstdint>
#include <filesystem>
#include <memory>
#include <string>
#include <unordered_map>

namespace nfsu2raw {

struct RecorderOptions {
    std::filesystem::path directory;
    uint64_t max_blob_mb = 3072;      // cap of blobs.bin; later data is not stored (the trace says so)
    unsigned window_frames = 120;     // frames per recording window
    unsigned capture_every = 30;      // a reference image every N frames of a window (0 = none)
    unsigned start_frame = 0;         // open the first window at this frame of the run (0 = only with F9)
    bool hotkey = true;               // F9 opens a window
};

class D3d9Recorder {
public:
    explicit D3d9Recorder(const RecorderOptions& options);
    ~D3d9Recorder();
    bool ok() const { return ok_; }
    const std::string& error() const { return error_; }
    // Direct3DCreate9 returned this IDirect3D9 object.
    void created_d3d9(uint32_t object);
    // A native call of the game's main thread: `target` is the native function, `sp` the guest stack pointer at the call (return address,
    // then the stdcall arguments). `before` runs ahead of the call (data that the call invalidates), `after` once it returned.
    void before(uint32_t target, uint32_t sp);
    void after(uint32_t target, uint32_t sp, uint32_t eax, uint64_t main_thread_instructions);
    void finish();
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
    bool ok_ = false;
    std::string error_;
};

}  // namespace nfsu2raw
