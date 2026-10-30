# The code in the game's audio banks

SPEED2.EXE runs x86 code that is not in the executable: every audio bank (`SOUND/**/*.abk`, 176 files, magic `ABKC`) carries a few
hundred bytes to a few KiB of code, which the game's loader at `0x7212e5` relocates, makes executable (`VirtualProtect(..., 0x40)`)
and calls. Until now the port ran that code through SLEIGH (`dynamic_code.cpp`); ahead-of-time translation (plan H2) needs it
translated with the rest of the game. This file describes the format; `tools/extract_audio_modules.py` reads it from the game's
files into `export/modules/audio_modules.json`.

## What was checked

- `NFSU2_DUMP_MODULES=<folder>` (platform64.cpp) writes each bank the loader is given. A boot to the main loop loads three:
  `GLOBAL/FE_COMMON_MB.abk`, `NOS/Nitrous_00_MB.abk`, `FE/FE_MB.abk`. Each is the file loaded whole (same size); only the header
  words at `+0x3c`, `+0x40` and the tables at the end were changed by the game before the loader runs. The code bytes are the
  file's, which the extractor's manifest confirms for the three.
- All 176 banks parse; 87 distinct code ranges, 183,408 bytes of code in all (many banks of one kind share their code: 16 gear
  shift banks, 14 turbo banks, the engine banks in groups of 1 to 11).
- Every call the code makes into the executable goes through the function table at `0x817fe0` (entries `0x71feef`..`0x72101f`,
  all in the executable's translated code).

## Format (offsets from the start of the bank; the image base is where the game loaded it)

| Header word | Meaning |
|---|---|
| `+0x00` | `ABKC` |
| `+0x0a` (u16) | number of sections |
| `+0x14` | size of the bank |
| `+0x1c` | offset of the section table |
| `+0x30` | fixup table: count, then offsets |
| `+0x34` | relocation table: count, then offsets |
| `+0x38` | symbol table: count, then 12-byte entries |

The loader (`0x7212e5`, arguments: the image, the fixup table):

1. **Fixups**: for each offset, the dword at `image + offset` holds an index `i` into the table at `0x817fe0`; the loader writes
   there `table[i] - (image + offset) - 4`, the `rel32` of a `call`/`jmp` to that executable function. The translator knows each
   target statically.
2. **Relocations**: for each offset, `[image + offset] += image`. They are absolute addresses inside the bank (data tables and
   pointers); translated code computes them from the image base.
3. **Symbols**: 12-byte entries passed to `0x735410` / `0x7353f0` / `0x7353d0` by their type byte (registration with the
   executable's sound system).
4. **Sections**: entries of `0x3c + 4 * (byte[+0x24] + byte[+0x27])` bytes; `+0x28` start and `+0x2c` end (the loader adds the
   image base), `[start, end)` is made executable; `+0x14` is set to `0x721096` and `+0x18` to the section, then `0x7355d0` is
   called; the dwords after `+0x3c` are offsets the loader stores the image base into. Section ranges can overlap.

## The manifest (`export/modules/audio_modules.json`)

`banks[]`: path, size, sha256 of the file, header words, `code_begin`/`code_end` (the union of the section ranges),
`code_sha256` (sha256 of those bytes as they are in the file, before fixups and relocations), sections, fixups
(`[offset, function index]`), relocations (`[offset, value in the file]`), symbols. `code{}`: the bytes of each distinct code
range by its sha256, stored once.

## How the translation is meant to be bound

The translated code of a range is position independent: constants that are relocations become `image + value`, fixups become
direct calls to the executable's translated functions, branches inside the bank stay relative. At run time the platform
computes the sha256 of `[code_begin, code_end)` when the loader starts (the bytes are still the file's) and attaches the
translated code to that image base; a bank with no translation is an error in the product (no interpreter), and SLEIGH only
runs in the tests that compare it with the translation.
