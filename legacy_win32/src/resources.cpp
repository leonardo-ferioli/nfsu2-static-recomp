#include "legacy_win32/resources.hpp"
#include <cstring>

namespace nfsu2::legacy::win32 {
namespace {

struct Reader {
    Bytes image;
    bool u16(uint32_t at, uint16_t& v) const { if (uint64_t(at) + 2 > image.size()) return false; std::memcpy(&v, image.data() + at, 2); return true; }
    bool u32(uint32_t at, uint32_t& v) const { if (uint64_t(at) + 4 > image.size()) return false; std::memcpy(&v, image.data() + at, 4); return true; }
};

char fold(char16_t c) { return c < 128 ? char((c >= 'A' && c <= 'Z') ? c + 32 : c) : '?'; }
char fold(char c) { return (c >= 'A' && c <= 'Z') ? char(c + 32) : c; }

struct Entry { uint32_t name_or_id = 0, target = 0; };

}  // namespace

PeResources::PeResources(Bytes image) : image_(image) {
    Reader in{image};
    uint32_t pe = 0;
    uint16_t magic = 0, dos = 0;
    if (!in.u16(0, dos) || dos != 0x5A4D || !in.u32(0x3C, pe) || !in.u16(pe + 0x18, magic) || magic != 0x10B) return;      // PE32 only
    uint32_t signature = 0, rva = 0, size = 0;
    if (!in.u32(pe, signature) || signature != 0x4550) return;
    if (!in.u32(pe + 0x18 + 0x60 + 2 * 8, rva) || !in.u32(pe + 0x18 + 0x60 + 2 * 8 + 4, size)) return;      // data directory 2: resources
    if (rva == 0 || size == 0 || uint64_t(rva) + size > image.size()) return;
    root_rva_ = rva;
    root_size_ = size;
}

Ret<ResourceHit> PeResources::entry(uint32_t entry_rva) const {
    if (!root_size_) return fail<ResourceHit>(err::resource_data_not_found);
    Reader in{image_};
    ResourceHit hit;
    hit.entry_rva = entry_rva;
    if (!in.u32(entry_rva, hit.data_rva) || !in.u32(entry_rva + 4, hit.size) || !in.u32(entry_rva + 8, hit.code_page)) return fail<ResourceHit>(err::invalid_parameter);
    if (entry_rva < root_rva_ || entry_rva >= root_rva_ + root_size_) return fail<ResourceHit>(err::invalid_parameter);       // not an entry of the directory
    return ok(hit);
}

Ret<ResourceHit> PeResources::find(const ResourceId& type, const ResourceId& name, uint16_t language) const {
    if (!root_size_) return fail<ResourceHit>(err::resource_data_not_found);
    Reader in{image_};
    const uint32_t root = root_rva_, end = root_rva_ + root_size_;

    // The entries of the directory at `offset` (relative to the root); false when it does not fit in the resource section.
    auto entries = [&](uint32_t offset, std::vector<Entry>& out) {
        out.clear();
        uint16_t named = 0, ids = 0;
        if (uint64_t(root) + offset + 16 > end || !in.u16(root + offset + 12, named) || !in.u16(root + offset + 14, ids)) return false;
        const uint32_t count = uint32_t(named) + ids;
        if (uint64_t(root) + offset + 16 + uint64_t(count) * 8 > end) return false;
        for (uint32_t i = 0; i < count; ++i) {
            Entry e;
            in.u32(root + offset + 16 + i * 8, e.name_or_id);
            in.u32(root + offset + 16 + i * 8 + 4, e.target);
            out.push_back(e);
        }
        return true;
    };
    auto name_matches = [&](const Entry& e, const ResourceId& want) {
        if (!(e.name_or_id & 0x80000000u)) return !want.is_name() && e.name_or_id == want.number;
        if (!want.is_name()) return false;
        const uint32_t at = root + (e.name_or_id & 0x7FFFFFFFu);
        uint16_t length = 0;
        if (!in.u16(at, length) || length != want.text.size()) return false;
        for (uint32_t i = 0; i < length; ++i) {
            uint16_t c = 0;
            if (!in.u16(at + 2 + i * 2, c) || fold(char16_t(c)) != fold(want.text[i])) return false;
        }
        return true;
    };

    std::vector<Entry> level;
    uint32_t directory = 0;
    for (int depth = 0; depth < 2; ++depth) {
        if (!entries(directory, level)) return fail<ResourceHit>(err::resource_data_not_found);
        const Entry* found = nullptr;
        for (const Entry& e : level) if (name_matches(e, depth == 0 ? type : name)) { found = &e; break; }
        if (!found) return fail<ResourceHit>(depth == 0 ? err::resource_type_not_found : err::resource_name_not_found);
        if (!(found->target & 0x80000000u)) return fail<ResourceHit>(err::resource_data_not_found);                            // a data entry where a directory belongs
        directory = found->target & 0x7FFFFFFFu;
    }
    if (!entries(directory, level) || level.empty()) return fail<ResourceHit>(err::resource_lang_not_found);
    auto pick = [&](auto wanted) -> const Entry* { for (const Entry& e : level) if (!(e.name_or_id & 0x80000000u) && wanted(e.name_or_id)) return &e; return nullptr; };
    const Entry* chosen = nullptr;
    if (language) chosen = pick([&](uint32_t id) { return id == language; });
    if (!chosen) chosen = pick([](uint32_t id) { return id == 0; });
    if (!chosen) chosen = pick([](uint32_t id) { return id == 0x0409; });
    if (!chosen) chosen = &level.front();
    if (chosen->target & 0x80000000u) return fail<ResourceHit>(err::resource_data_not_found);
    return entry(root + chosen->target);
}

}  // namespace nfsu2::legacy::win32
