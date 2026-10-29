// The parts of kernel32, shfolder, shell32 and netapi32 that a host without a real Windows answers from the library (the 32-bit Windows host leaves them to the real
// system):
//
//   resources  FindResourceA/W, LoadResource, LockResource, SizeofResource over the PE resource directory of the guest image. The data stays in the image: an HRSRC is
//              the guest address of the IMAGE_RESOURCE_DATA_ENTRY, the HGLOBAL of LoadResource the guest address of the bytes.
//   system     CreateFileW, file mappings (CreateFileMappingA / MapViewOfFile / UnmapViewOfFile: a view is a block of the guest's VirtualAlloc space that is copied back
//              when it is unmapped), the toolhelp process list, the drive queries, and the shell services of a machine that has none (SHGetFolderPathA fails, ShellExecuteA
//              reports "file not found").
#include "win32_facade_internal.hpp"
#include "legacy_win32/resources.hpp"
#include <map>
#include <optional>

namespace nfsu2raw {
namespace {

constexpr uint32_t kMainImage = 0x400000;
constexpr uint32_t kErrorResourceDataNotFound = 1812;
constexpr uint32_t kEFail = 0x80004005u;

// MAKEINTRESOURCE: a value below 64 KiB is an id, anything else the address of a string.
lw::ResourceId resource_id(uint32_t value, bool wide) {
    if (value < 0x10000) return lw::ResourceId::id(value);
    if (wide) {
        const char16_t* w = ptr<const char16_t>(value);
        std::string narrow;
        for (; *w; ++w) narrow.push_back(*w < 128 ? char(*w) : '?');
        return lw::ResourceId::name(narrow);
    }
    return lw::ResourceId::name(cstr(value));
}

struct ResourceState {
    std::mutex m;
    std::unique_ptr<lw::PeResources> resources;
    uint32_t base = 0;
    lw::PeResources* get() {
        std::lock_guard lock(m);
        if (!resources) {
            uint32_t pe = 0, size = 0;
            std::memcpy(&pe, ptr<const char>(kMainImage + 0x3C), 4);
            std::memcpy(&size, ptr<const char>(kMainImage + pe + 0x18 + 0x38), 4);       // SizeOfImage
            base = kMainImage;
            resources = std::make_unique<lw::PeResources>(lw::Bytes(ptr<const std::byte>(kMainImage), size));
        }
        return resources.get();
    }
};

struct View { lw::MutableBytes bytes; uint32_t size = 0; bool write = false; };

}  // namespace

void Win32Facade::Impl::install_resources() {
    auto state = std::make_shared<ResourceState>();
    // The module is the main image (0 or its base). A system library the layers stand in for holds no resources.
    auto main_image = [this](uint32_t module) { return module == 0 || module == kMainImage || module == process.get_module_handle("").value; };
    auto find = [this, state, main_image](Cpu& c, bool wide) -> uint32_t {
        if (!main_image(arg(c, 0))) { set_error(c, kErrorResourceDataNotFound); return 0; }
        // FindResource(module, name, type): the order of the two ids is the reverse of the directory's.
        auto hit = state->get()->find(resource_id(arg(c, 2), wide), resource_id(arg(c, 1), wide), uint16_t(system->info().user_lcid & 0xFFFF));
        if (!hit) { set_error(c, hit.error); return 0; }
        return state->base + hit.value.entry_rva;
    };
    on("FindResourceA", 3, [find](Cpu& c) { return find(c, false); });
    on("FindResourceW", 3, [find](Cpu& c) { return find(c, true); });
    auto entry = [state, main_image](Cpu& c, uint32_t module, uint32_t handle) -> std::optional<lw::ResourceHit> {
        if (!main_image(module) || handle < kMainImage) { set_error(c, lw::err::invalid_parameter); return std::nullopt; }
        auto hit = state->get()->entry(handle - state->base);
        if (!hit) { set_error(c, hit.error); return std::nullopt; }
        return hit.value;
    };
    on("LoadResource", 2, [state, entry](Cpu& c) -> uint32_t {
        auto hit = entry(c, arg(c, 0), arg(c, 1));
        return hit ? state->base + hit->data_rva : 0u;
    });
    on("LockResource", 1, [](Cpu& c) { return arg(c, 0); });                           // the HGLOBAL already is the address of the bytes
    on("SizeofResource", 2, [entry](Cpu& c) -> uint32_t {
        auto hit = entry(c, arg(c, 0), arg(c, 1));
        return hit ? hit->size : 0u;
    });
}

void Win32Facade::Impl::install_system() {
    // ---- CreateFileW: the same file system, the name converted from UTF-16 with the ANSI code page
    on("CreateFileW", 7, [this](Cpu& c) {
        const char16_t* wide = ptr<const char16_t>(arg(c, 0));
        const std::string name = text.to_multi_byte(system->info().ansi_code_page, wide);
        auto r = files.create_file(name, arg(c, 1), arg(c, 2), arg(c, 4), arg(c, 5));
        set_error(c, r.error);
        return r.value;
    });

    // ---- file mappings
    on("CreateFileMappingA", 6, [this](Cpu& c) -> uint32_t {
        auto r = files.create_file_mapping(arg(c, 0), arg(c, 2), (uint64_t(arg(c, 3)) << 32) | arg(c, 4));
        set_error(c, r.error);
        return r.value;
    });
    auto views = std::make_shared<std::map<uint32_t, View>>();
    auto views_mutex = std::make_shared<std::mutex>();
    on("MapViewOfFile", 5, [this, views, views_mutex](Cpu& c) -> uint32_t {
        const bool write = (arg(c, 1) & 2 /* FILE_MAP_WRITE */) != 0;
        auto r = files.map_view_of_file(arg(c, 0), write, (uint64_t(arg(c, 2)) << 32) | arg(c, 3), arg(c, 4));
        if (!r) { set_error(c, r.error); return 0u; }
        uint32_t address = 0;
        if (const uint32_t e = space->virtual_alloc(0, uint32_t(r.value.size()), 0x3000 /* MEM_COMMIT | MEM_RESERVE */, 4 /* PAGE_READWRITE */, address)) {
            files.unmap_view_of_file(r.value.data());
            set_error(c, e);
            return 0u;
        }
        std::memcpy(ptr<void>(address), r.value.data(), r.value.size());
        std::lock_guard lock(*views_mutex);
        (*views)[address] = View{r.value, uint32_t(r.value.size()), write};
        return address;
    });
    on("UnmapViewOfFile", 1, [this, views, views_mutex](Cpu& c) -> uint32_t {
        View view;
        {
            std::lock_guard lock(*views_mutex);
            auto it = views->find(arg(c, 0));
            if (it == views->end()) { set_error(c, lw::err::invalid_parameter); return 0u; }
            view = it->second;
            views->erase(it);
        }
        if (view.write) std::memcpy(view.bytes.data(), ptr<const void>(arg(c, 0)), view.size);         // the library writes the bytes through to the file
        files.unmap_view_of_file(view.bytes.data());
        space->virtual_free(arg(c, 0), 0, 0x8000 /* MEM_RELEASE */);
        return 1u;
    });

    // ---- toolhelp: the process list is the game itself
    on("CreateToolhelp32Snapshot", 2, [this](Cpu& c) -> uint32_t {
        auto r = process.create_toolhelp_snapshot(arg(c, 0));
        if (!r) { set_error(c, r.error); return lw::kInvalidHandle; }
        return r.value;
    });
    auto process_entry = [this](Cpu& c, bool first) -> uint32_t {
        lw::ProcessEntry e;
        auto r = first ? process.process32_first(arg(c, 0), e) : process.process32_next(arg(c, 0), e);
        if (!r) { set_error(c, r.error); return 0u; }
        uint8_t* out = ptr<uint8_t>(arg(c, 1));                                          // PROCESSENTRY32 (296 bytes)
        const uint32_t usage = 0, heap = 0, module = 0, flags = 0;
        std::memcpy(out + 4, &usage, 4);
        std::memcpy(out + 8, &e.process_id, 4);
        std::memcpy(out + 12, &heap, 4);
        std::memcpy(out + 16, &module, 4);
        std::memcpy(out + 20, &e.threads, 4);
        std::memcpy(out + 24, &e.parent_process_id, 4);
        std::memcpy(out + 28, &e.base_priority, 4);
        std::memcpy(out + 32, &flags, 4);
        const size_t n = std::min<size_t>(e.exe_file.size(), 259);
        std::memcpy(out + 36, e.exe_file.data(), n);
        out[36 + n] = 0;
        return 1u;
    };
    on("Process32First", 2, [process_entry](Cpu& c) { return process_entry(c, true); });
    on("Process32Next", 2, [process_entry](Cpu& c) { return process_entry(c, false); });

    // ---- drives
    on("GetLogicalDrives", 0, [this](Cpu&) { return files.get_logical_drives(); });
    on("GetDriveTypeA", 1, [this](Cpu& c) { return files.get_drive_type(arg(c, 0) ? cstr(arg(c, 0)) : std::string()); });
    on("GetDiskFreeSpaceA", 5, [this](Cpu& c) -> uint32_t {
        auto r = files.get_disk_free_space(arg(c, 0) ? cstr(arg(c, 0)) : std::string());
        if (!r) { set_error(c, r.error); return 0u; }
        const auto& d = r.value;
        auto clusters = [&](uint64_t bytes) { return uint32_t(std::min<uint64_t>(bytes / (uint64_t(d.sectors_per_cluster) * d.bytes_per_sector), 0xFFFFFFFFu)); };
        if (arg(c, 1)) *ptr<uint32_t>(arg(c, 1)) = d.sectors_per_cluster;
        if (arg(c, 2)) *ptr<uint32_t>(arg(c, 2)) = d.bytes_per_sector;
        if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = clusters(d.total_free);
        if (arg(c, 4)) *ptr<uint32_t>(arg(c, 4)) = clusters(d.total);
        return 1u;
    });
    on("GetDiskFreeSpaceExA", 4, [this](Cpu& c) -> uint32_t {
        auto r = files.get_disk_free_space(arg(c, 0) ? cstr(arg(c, 0)) : std::string());
        if (!r) { set_error(c, r.error); return 0u; }
        if (arg(c, 1)) std::memcpy(ptr<void>(arg(c, 1)), &r.value.free_to_caller, 8);
        if (arg(c, 2)) std::memcpy(ptr<void>(arg(c, 2)), &r.value.total, 8);
        if (arg(c, 3)) std::memcpy(ptr<void>(arg(c, 3)), &r.value.total_free, 8);
        return 1u;
    });

    // ---- the shell of a machine that has none
    on("SHGetFolderPathA", 5, [this](Cpu& c) -> uint32_t {
        if (arg(c, 4)) *ptr<char>(arg(c, 4)) = 0;                                        // no folder: an empty path and E_FAIL, the caller falls back
        platform.log_line("SHGetFolderPathA(csidl=" + std::to_string(arg(c, 1)) + "): no shell folders on this host, answered E_FAIL");
        return kEFail;
    });
    on("ShellExecuteA", 6, [this](Cpu& c) -> uint32_t {
        platform.log_line("ShellExecuteA(" + (arg(c, 2) ? cstr(arg(c, 2)) : std::string()) + "): nothing to open it with on this host");
        return 2;                                                                       // SE_ERR_FNF: any value up to 32 is an error
    });
}

}  // namespace nfsu2raw
