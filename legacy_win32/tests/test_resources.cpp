// The resource directory of a PE image: lookup by id and by name, languages, a malformed directory, the HRSRC round trip.
#include "legacy_win32/resources.hpp"
#include "test_support.hpp"
#include <cstring>
#include <vector>

using namespace nfsu2::legacy::win32;

namespace {

// A mapped image of 0x3000 bytes with a resource section at RVA 0x2000:
//   type 10 (RCDATA)  -> name 7        -> languages 0x0409 (data "english") and 0x0407 (data "deutsch")
//                     -> name "Config" -> language 0 (data "neutral")
//   type "Custom"     -> name 1        -> language 0x0409 (data "typed")
struct Image {
    std::vector<std::byte> bytes = std::vector<std::byte>(0x3000);
    uint32_t section = 0x2000, cursor = 0;
    void put32(uint32_t at, uint32_t v) { std::memcpy(bytes.data() + at, &v, 4); }
    void put16(uint32_t at, uint16_t v) { std::memcpy(bytes.data() + at, &v, 2); }
    // A directory with `named` named and `ids` id entries at section offset `at`; entries are filled by set_entry.
    void directory(uint32_t at, uint16_t named, uint16_t ids) { put16(section + at + 12, named); put16(section + at + 14, ids); }
    void entry(uint32_t at, uint32_t index, uint32_t name_or_id, uint32_t target) { put32(section + at + 16 + index * 8, name_or_id); put32(section + at + 16 + index * 8 + 4, target); }
    uint32_t data(const char* text, uint32_t entry_at) {                          // a data entry at section offset entry_at; the bytes at 0x2800 + running offset
        const uint32_t size = uint32_t(std::strlen(text)), rva = 0x2800 + cursor;
        std::memcpy(bytes.data() + rva, text, size);
        cursor += (size + 3) & ~3u;
        put32(section + entry_at, rva); put32(section + entry_at + 4, size); put32(section + entry_at + 8, 1252);
        return section + entry_at;
    }
    void name_string(uint32_t at, const char* text) {
        put16(section + at, uint16_t(std::strlen(text)));
        for (size_t i = 0; text[i]; ++i) put16(section + at + 2 + uint32_t(i) * 2, uint16_t(text[i]));
    }
    Image() {
        put16(0, 0x5A4D); put32(0x3C, 0x80);
        put32(0x80, 0x4550); put16(0x80 + 0x18, 0x10B);
        put32(0x80 + 0x18 + 0x60 + 2 * 8, section); put32(0x80 + 0x18 + 0x60 + 2 * 8 + 4, 0x800);
        // root: one named entry ("Custom") and one id entry (10)
        directory(0, 1, 1);
        name_string(0x700, "Custom");
        entry(0, 0, 0x80000000u | 0x700, 0x80000000u | 0x100);        // named entries come first
        entry(0, 1, 10, 0x80000000u | 0x200);
        // type "Custom": name 1
        directory(0x100, 0, 1); entry(0x100, 0, 1, 0x80000000u | 0x180);
        directory(0x180, 0, 1); entry(0x180, 0, 0x0409, 0x400);
        data("typed", 0x400);
        // type 10: name "Config" (named) and 7 (id)
        directory(0x200, 1, 1);
        name_string(0x720, "Config");
        entry(0x200, 0, 0x80000000u | 0x720, 0x80000000u | 0x300);
        entry(0x200, 1, 7, 0x80000000u | 0x340);
        directory(0x300, 0, 1); entry(0x300, 0, 0, 0x410);
        data("neutral", 0x410);
        directory(0x340, 0, 2); entry(0x340, 0, 0x0407, 0x420); entry(0x340, 1, 0x0409, 0x430);
        data("deutsch", 0x420);
        data("english", 0x430);
    }
    Bytes view() const { return Bytes(bytes.data(), bytes.size()); }
};

std::string text_of(const Image& image, const ResourceHit& hit) {
    return std::string(reinterpret_cast<const char*>(image.bytes.data()) + hit.data_rva, hit.size);
}

}  // namespace

static void test_resources() {
    Image image;
    PeResources resources(image.view());
    CHECK(resources.has_resources());

    auto by_id = resources.find(ResourceId::id(10), ResourceId::id(7));
    CHECK(by_id);
    CHECK(text_of(image, by_id.value) == "english");                  // no language asked: the US English one beats the first in the directory
    auto german = resources.find(ResourceId::id(10), ResourceId::id(7), 0x0407);
    CHECK(german && text_of(image, german.value) == "deutsch");
    auto other = resources.find(ResourceId::id(10), ResourceId::id(7), 0x040C);      // a language that is not there: the fallback again
    CHECK(other && text_of(image, other.value) == "english");

    auto by_name = resources.find(ResourceId::id(10), ResourceId::name("CONFIG"));  // names compare without regard to case
    CHECK(by_name && text_of(image, by_name.value) == "neutral" && by_name.value.code_page == 1252);
    auto typed = resources.find(ResourceId::name("custom"), ResourceId::id(1));
    CHECK(typed && text_of(image, typed.value) == "typed");

    CHECK_EQ(resources.find(ResourceId::id(99), ResourceId::id(7)).error, uint32_t(err::resource_type_not_found));
    CHECK_EQ(resources.find(ResourceId::id(10), ResourceId::id(8)).error, uint32_t(err::resource_name_not_found));
    CHECK_EQ(resources.find(ResourceId::id(10), ResourceId::name("Nothing")).error, uint32_t(err::resource_name_not_found));
    CHECK_EQ(resources.find(ResourceId::name("Config"), ResourceId::id(7)).error, uint32_t(err::resource_type_not_found));   // a name is not an id

    // the HRSRC round trip: the entry's offset gives the same hit
    auto again = resources.entry(by_id.value.entry_rva);
    CHECK(again && again.value.data_rva == by_id.value.data_rva && again.value.size == 7);
    CHECK_EQ(resources.entry(0x10).error, uint32_t(err::invalid_parameter));         // not inside the directory
    CHECK_EQ(resources.entry(0x2FFE).error, uint32_t(err::invalid_parameter));       // reads past the image

    // a truncated directory is an error, not an out-of-range read
    Image broken;
    broken.put16(broken.section + 14, 0xFFFF);                                       // the root claims 65535 id entries
    PeResources bad(broken.view());
    CHECK_EQ(bad.find(ResourceId::id(10), ResourceId::id(7)).error, uint32_t(err::resource_data_not_found));
    std::vector<std::byte> small(64);
    PeResources none(Bytes(small.data(), small.size()));                             // not a PE image at all
    CHECK(!none.has_resources());
    CHECK_EQ(none.find(ResourceId::id(10), ResourceId::id(7)).error, uint32_t(err::resource_data_not_found));
    Image without;
    without.put32(0x80 + 0x18 + 0x60 + 2 * 8, 0);                                    // no resource directory
    CHECK(!PeResources(without.view()).has_resources());
}
REGISTER_TEST("resources", test_resources);
