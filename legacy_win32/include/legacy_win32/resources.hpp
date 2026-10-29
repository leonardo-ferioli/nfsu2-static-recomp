// The resources of a PE image (FindResource / LoadResource / SizeofResource): the resource directory is walked in the image as the loader mapped it, and the
// answers are offsets (RVAs) into that image. The data is never copied: a program that locks a resource gets the address of the bytes inside its own image.
#pragma once
#include "legacy_win32/common.hpp"
#include <string>
#include <string_view>

namespace nfsu2::legacy::win32 {

// A resource type or name: an integer id (MAKEINTRESOURCE) or a string, compared without regard to case.
struct ResourceId {
    uint32_t number = 0;
    std::string text;                                   // non-empty: a name
    static ResourceId id(uint32_t n) { ResourceId r; r.number = n; return r; }
    static ResourceId name(std::string_view s) { ResourceId r; r.text = s; return r; }
    bool is_name() const { return !text.empty(); }
};

struct ResourceHit {
    uint32_t entry_rva = 0;                             // the IMAGE_RESOURCE_DATA_ENTRY (the value of an HRSRC, once the image base is added)
    uint32_t data_rva = 0;                              // the bytes
    uint32_t size = 0;
    uint32_t code_page = 0;
};

class PeResources {
public:
    // `image` is the whole mapped image (SizeOfImage bytes, sections at their RVAs); it must stay valid while this object is used.
    explicit PeResources(Bytes image);
    bool has_resources() const { return root_size_ != 0; }
    // The first language that matches: `language` (0 = any), then neutral, then US English, then the first one in the directory.
    Ret<ResourceHit> find(const ResourceId& type, const ResourceId& name, uint16_t language = 0) const;
    // The data entry at `entry_rva`, when it is one of this image's (what LoadResource / SizeofResource do with an HRSRC).
    Ret<ResourceHit> entry(uint32_t entry_rva) const;
private:
    Bytes image_;
    uint32_t root_rva_ = 0, root_size_ = 0;
};

}  // namespace nfsu2::legacy::win32
