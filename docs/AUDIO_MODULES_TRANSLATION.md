# The audio banks' code, translated ahead of time (H2)

The 176 audio banks (`SOUND/**/*.abk`) carry x86 code that the executable's loader (`0x7212e5`) relocates and calls (docs/AUDIO_MODULES.md). Until now
the port ran it through SLEIGH at run time (`dynamic_code.cpp`). This stage translates it with the rest of the game: **87 distinct code ranges,
183,408 bytes, 47,788 instructions** become 87 C++ functions plus a table, for the 32-bit and the 64-bit build alike. SLEIGH is used only while
generating (and in the test that compares with it); the product needs none of it for these banks.

## What the platform gets

`audio_modules.hpp` (hand written) and `generated_audio/` (generated, tracked; the same files serve `nfsu2_fast` and `nfsu2_fast64`, nothing in them
depends on the host):

```cpp
struct AudioModule { const char* sha256; uint32_t size, instructions; uint32_t (*run)(Cpu&, uint32_t code_base); const uint32_t* entries; uint32_t entry_count; };
const AudioModule* find_audio_module(const char* sha256_hex);   // audio_modules[] is sorted by sha256
```

* **Key**: the sha256 (64 lower-case hex digits) of the bytes `[code_begin, code_end)` of the bank file, where `code_begin`/`code_end` are the lowest section
  `start` and the highest section `end` of the bank's section table (`tools/extract_audio_modules.py` and `audio_module_tests.cpp` compute it the same way).
  Take it when the loader starts, while the bytes are still the file's: fixups and relocations change them afterwards. Banks of one kind share a key.
* **Binding** (at `0x7212e5`, after the loader has run its fixups, relocations and section loop, or before registering the section): `code_base = image + code_begin`;
  remember `(code_base, size, unit)`. A bank whose key is not in the table is an error of the product (there is no interpreter), not something to fall back from.
* **Running**: when control reaches an address in `[code_base, code_base + size)` the platform calls `unit->run(c, code_base)` with `c.pc` at that address and ESP/registers
  as the guest has them. It runs the translated code until control leaves the range and **returns the new pc** (the caller does `c.pc = ...`, as `step()` does for pages).
  A call or jump to the executable (the fixups: `0x71feef..0x72101f`), a `ret` to the executable, anything: the function returns with the guest state complete, return
  address pushed for a call. The platform then dispatches like for any other address; when the executable returns into the range it calls `run` again.
  The instruction counter (`c.instructions`) is maintained like the pages do.
* **Entries**: any address that starts an instruction the translation knows is a valid entry (`run` switches on `c.pc - code_base`); an address that does not is a fault
  (`missing_instruction`). `entries[]` lists the function starts the generator found (offsets from `code_base`, always including 0); it is documentation and test input.

The code reads and writes the bank's data (the object tables after the code, the words the loader fills) in guest memory, so it must see the bank as the loader
leaves it. Nothing else is needed: the translation contains no addresses of the bank, only offsets from `code_base`.

## How it is made

`tools/gen_audio_modules.py --decoder <decode_modules.exe>` (build the decoder with `tools/build_decode_modules.sh <dir> [sleigh_runtime.lib]`;
`generate_fast.py --audio-modules <decode_modules.exe>` runs it into `generated_audio/`).

1. **Decoding with SLEIGH, at two bases.** `tools/decode_modules.cpp` follows the flow of each range from its entries and prints P-code in the format of
   `export/instructions.jsonl.gz`. The range is decoded twice, with the code placed at `0x20000000` and at `0x30000000`, with the loader's fixups applied
   (`rel32 = table[i] - (position + 4)`, so a call becomes a direct call to the executable's function) and the relocations applied (`value + base`).
2. **Position independence without guessing.** Every constant (and every branch target) of the two decodes is compared: equal means absolute (a function of the
   executable, a number), different by exactly the distance of the bases means "an address in the bank": it becomes `code + K`. This covers relocated immediates,
   the return addresses the P-code pushes for a call, and branches inside the range, and it needs no list of which immediates are addresses. Anything else (a constant
   that changes by another amount, an absolute constant that lies near the canonical base) stops the generator.
3. **Lowering** is the generator's ordinary one (`generate_fast.py`'s `Emitter`, the one-function-per-page shape with the registers in `Cpu::regs`, flags computed
   in full, x87 through the P-code model, which these banks do not use). A range is one function; its entries are a `switch` on `c.pc - code_base`.
4. **Entries.** The bank names only its first byte as code (the section fields at `+0x30`/`+0x34` and the relocated words that point into the range are data and
   land inside instructions). Other functions are found as code that follows a `ret`/`jmp` and decodes cleanly to the next one (capstone checks the bytes before
   SLEIGH decodes them). The result: of the 183,408 bytes, 156,581 are instructions, 27,000 are zeros and data tables; no unreached non-zero chunk starts with code.
   The residual risk is a function that the executable reaches through a pointer and that follows a call that does not return or a conditional flow; it would show
   as `missing_instruction` at that address, the first time the game takes it, and the test below compares on every found entry and on all flows reachable from it.

## The test against SLEIGH

`audio_module_tests.cpp` (ctest `audio_modules`, 32-bit; `tools/build_audio_tests.sh` builds it by hand):

* parses all 176 banks from the game folder, computes the key and requires a translation for each (176 of 176);
* imitates the loader on a copy of each distinct range's bank (fixups into the executable's table, relocations, the section table, the words that receive the image base);
* from each entry runs random states (registers and arguments mostly pointers into scratch buffers, memory a mix of pointers and numbers) on the SLEIGH interpreter (generic
  mode 0, the specification) and on the translation, answering each call into the executable with a deterministic value, and compares: the exits (pc, registers, the
  stack the callee would see), the final registers, the instruction count, all memory, and whether it faulted (a wild pointer is an access violation in both).
  The three banks a boot loads (`FE_COMMON_MB`, `Nitrous_00_MB`, `FE_MB`) get more trials than the rest; `NFSU2_AUDIO_SELFCHECK=1` proves the harness notices a difference.

## Results

| Check | Result |
|---|---|
| all 176 banks find a translation by the sha256 of their code range | 176 of 176 |
| 87 units compiled for the 32-bit product and for x86-64 (clang, `-O2`) | 87 of 87 each, 4.5 and 5.0 MB of objects |
| differential test against SLEIGH, 3 seeds (100 trials per entry, 600 for the three boot banks) | 48,000 trials, 13.6 million instructions interpreted, 2.27 million exits compared, 0 mismatches (about 10% of the trials fault the same way in both engines) |
| translated instructions executed at least once by the trials (coverage build) | 47,783 of 47,788 |
| sabotage (`NFSU2_AUDIO_SELFCHECK=1`) | noticed |
| `python tools/diff_generated.py <fresh default tree> generated_fast` | identical: 901 files (the generator change is a refactoring) |

An early run with fully random 32-bit values showed one difference in a boot bank that did not repeat in an isolated run: a wild pointer into the test's own process.
The test now draws pointers into its buffers and small numbers, and repeats any difference twice before counting it (a repeat is counted as a failure; a one-off is reported as such).
Not done: running the translation on the 64-bit arena (it compiles; the code is host independent, memory goes through `gp()`), and a real boot with the translation bound
(the integration session's job: it will show any entry the generator missed as `missing_instruction`).
