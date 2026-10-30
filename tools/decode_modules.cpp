// Generation-time tool: decode the x86 code of the game's audio banks with the SLEIGH engine and print its P-code in the format of
// export/instructions.jsonl.gz (tools/gen_audio_modules.py turns that into C++). Nothing of this is in the product.
//
//   decode_modules <x86.sla> <spec.txt>
//
// spec.txt, one module at a time:
//   module <id> <base hex> <code bytes hex>        the bytes as they are in memory at <base> (fixups and relocations applied)
//   seed <offset hex>                              an entry, relative to <base>
//   end
// Output (stdout): one JSON object per decoded instruction {"m":id,"a":address,"n":length,"p":[[op,out,in...],...]}, found by following
// the flow from the seeds inside [base, base+size): a branch or call whose target is outside is an exit (the executable's functions).
// A decode failure is reported as {"m":id,"a":address,"error":text} and does not stop the others.
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include "sleigh.hh"
#include "loadimage.hh"
#include "globalcontext.hh"
#include "opcodes.hh"
using namespace ghidra;

namespace {
class Image : public LoadImage {
public:
    uint64_t base = 0;
    std::vector<uint8_t> bytes;
    Image() : LoadImage("module") {}
    void loadFill(uint1* ptr, int4 size, const Address& addr) override {
        const uint64_t at = addr.getOffset();
        for (int4 i = 0; i < size; ++i) {
            const uint64_t position = at + i;
            ptr[i] = (position >= base && position - base < bytes.size()) ? bytes[position - base] : 0;
        }
    }
    std::string getArchType() const override { return "module"; }
    void adjustVma(long) override {}
};

struct Op {
    int opcode;
    bool has_output;
    VarnodeData output;
    std::vector<VarnodeData> inputs;
};
class Collector : public PcodeEmit {
public:
    std::vector<Op> ops;
    void dump(const Address&, OpCode opc, VarnodeData* outvar, VarnodeData* vars, int4 isize) override {
        Op op;
        op.opcode = int(opc);
        op.has_output = outvar != nullptr;
        if (outvar) op.output = *outvar;
        for (int4 i = 0; i < isize; ++i) op.inputs.push_back(vars[i]);
        ops.push_back(std::move(op));
    }
};

std::string opname(int opcode) {
    static const std::map<std::string, std::string> java = {{"FLOAT_INT2FLOAT", "INT2FLOAT"}, {"FLOAT_FLOAT2FLOAT", "FLOAT2FLOAT"},
        {"FLOAT_TRUNC", "TRUNC"}, {"FLOAT_ROUND", "ROUND"}, {"FLOAT_CEIL", "CEIL"}, {"FLOAT_FLOOR", "FLOOR"}};
    const std::string name = get_opname(static_cast<OpCode>(opcode));
    auto it = java.find(name);
    return it == java.end() ? name : it->second;
}
std::string json_string(const std::string& s) {
    std::string out = "\"";
    for (char ch : s) {
        if (ch == '"' || ch == '\\') out += '\\';
        if (ch == '\n') { out += "\\n"; continue; }
        out += ch;
    }
    return out + "\"";
}
}  // namespace

int main(int argc, char** argv) {
    if (argc != 3) { std::fprintf(stderr, "usage: decode_modules <x86.sla> <spec.txt>\n"); return 2; }
    try {
        AttributeId::initialize();
        ElementId::initialize();
        Image image;
        ContextInternal context;
        Sleigh translator(&image, &context);
        {
            std::istringstream wrapper(std::string("<sleigh>") + argv[1] + "</sleigh>");
            DocumentStorage storage;
            Element* root = storage.parseDocument(wrapper)->getRoot();
            storage.registerTag(root);
            translator.initialize(storage);
        }
        context.setVariableDefault("addrsize", 1);
        context.setVariableDefault("opsize", 1);
        AddrSpace* ram = translator.getDefaultCodeSpace();
        AddrSpace* reg = translator.getSpaceByName("register");
        AddrSpace* uniq = translator.getUniqueSpace();
        AddrSpace* cst = translator.getConstantSpace();
        auto space_name = [&](AddrSpace* s) { return s == cst ? "const" : s == reg ? "register" : s == uniq ? "unique" : "ram"; };
        auto show = [&](const VarnodeData& v) {
            char text[96];
            std::snprintf(text, sizeof(text), "[\"%s\",\"%llx\",%u]", space_name(v.space), (unsigned long long)v.offset, (unsigned)v.size);
            return std::string(text);
        };
        std::ifstream spec(argv[2]);
        std::string line;
        std::string id;
        std::vector<uint64_t> seeds;
        auto process = [&]() {
            const uint64_t end = image.base + image.bytes.size();
            std::set<uint64_t> done;
            std::vector<uint64_t> work;
            for (uint64_t s : seeds) work.push_back(image.base + s);
            while (!work.empty()) {
                uint64_t a = work.back();
                work.pop_back();
                while (a >= image.base && a < end && !done.count(a)) {
                    done.insert(a);
                    Collector collector;
                    int length = 0;
                    try {
                        length = translator.oneInstruction(collector, Address(ram, a));
                    } catch (const LowlevelError& e) {
                        std::printf("{\"m\":%s,\"a\":%llu,\"error\":%s}\n", json_string(id).c_str(), (unsigned long long)a, json_string(e.explain).c_str());
                        break;
                    }
                    std::printf("{\"m\":%s,\"a\":%llu,\"n\":%d,\"p\":[", json_string(id).c_str(), (unsigned long long)a, length);
                    bool falls = true;
                    for (size_t i = 0; i < collector.ops.size(); ++i) {
                        const Op& op = collector.ops[i];
                        const OpCode code0 = static_cast<OpCode>(op.opcode);
                        std::printf("%s[%s,%s", i ? "," : "", json_string(opname(op.opcode)).c_str(), op.has_output ? show(op.output).c_str() : "null");
                        for (size_t k = 0; k < op.inputs.size(); ++k) {
                            VarnodeData in = op.inputs[k];
                            // The first input of LOAD and STORE names the address space (a pointer here): print the id of the export (0x1a1).
                            if (k == 0 && (code0 == CPUI_LOAD || code0 == CPUI_STORE)) in.offset = 0x1a1;
                            std::printf(",%s", show(in).c_str());
                        }
                        std::printf("]");
                        const bool last = i + 1 == collector.ops.size();
                        const OpCode code = static_cast<OpCode>(op.opcode);
                        const bool absolute = !op.inputs.empty() && op.inputs[0].space != cst;
                        if ((code == CPUI_BRANCH || code == CPUI_CBRANCH || code == CPUI_CALL) && absolute) {
                            const uint64_t target = op.inputs[0].offset;
                            if (target >= image.base && target < end && !done.count(target)) work.push_back(target);
                        }
                        if (last && ((code == CPUI_BRANCH && absolute) || code == CPUI_BRANCHIND || code == CPUI_RETURN)) falls = false;
                        if (code == CPUI_BRANCH && !absolute && last) falls = true;   // a relative branch inside the instruction: the end is reached by the flow
                    }
                    std::printf("]}\n");
                    if (!falls) break;
                    a += length;
                }
            }
        };
        while (std::getline(spec, line)) {
            std::istringstream words(line);
            std::string word;
            words >> word;
            if (word == "module") {
                std::string base_text, hex;
                words >> id >> base_text >> hex;
                image.base = std::stoull(base_text, nullptr, 16);
                image.bytes.clear();
                for (size_t i = 0; i + 1 < hex.size(); i += 2) image.bytes.push_back(uint8_t(std::stoi(hex.substr(i, 2), nullptr, 16)));
                seeds.clear();
            } else if (word == "seed") {
                std::string text;
                words >> text;
                seeds.push_back(std::stoull(text, nullptr, 16));
            } else if (word == "end") {
                process();
            }
        }
        return 0;
    } catch (const std::exception& e) {
        std::fprintf(stderr, "%s\n", e.what());
        return 1;
    } catch (const LowlevelError& e) {
        std::fprintf(stderr, "%s\n", e.explain.c_str());
        return 1;
    }
}
