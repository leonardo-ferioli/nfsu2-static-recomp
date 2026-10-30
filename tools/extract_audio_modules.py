#!/usr/bin/env python3
"""Extract the x86 code the game loads from its audio banks (SOUND/**/*.abk, "ABKC") into export/modules/.

The game's loader at 0x7212e5 makes parts of each bank executable and runs them (docs/AUDIO_MODULES.md). Everything it uses is
in the file: the sections, the calls into the executable (fixups), the absolute addresses (relocations) and the symbols. This
tool writes one manifest with all of it, the code bytes stored once per distinct code range, so the generator can translate
the banks ahead of time and the runtime can bind the translated code by the hash of the bytes it loads.

    python tools/extract_audio_modules.py <game folder> [export/modules/audio_modules.json]
"""
import hashlib
import json
import os
import struct
import sys

LOADER = 0x7212E5           # the game's bank loader
EXE_FUNCTION_TABLE = 0x817FE0  # fixups hold an index into this table of the executable's functions


def u32(b, o):
    return struct.unpack_from('<I', b, o)[0]


def parse_bank(b):
    if b[:4] != b'ABKC':
        raise ValueError('not an ABKC bank')
    header = list(struct.unpack_from('<16I', b, 0))
    section_count = struct.unpack_from('<H', b, 0xA)[0]
    sections = []
    o = header[7]                                   # +0x1c: section table
    for _ in range(section_count):
        words_a, words_b = b[o + 0x24], b[o + 0x27]
        size = 0x3C + 4 * (words_a + words_b)
        entry = b[o:o + size]
        sections.append({
            'offset': o,
            'start': u32(entry, 0x28),              # the loader adds the image base to both and makes [start, end) executable
            'end': u32(entry, 0x2C),
            'fields_30_38': [u32(entry, 0x30), u32(entry, 0x34), u32(entry, 0x38)],
            'words': [u32(entry, 0x3C + 4 * i) for i in range(words_a + words_b)],
            'raw': entry.hex(),
        })
        o += size
    fix = header[12]                                # +0x30: fixups (count, offsets); [image+offset] holds an exe function index
    fixups = [[off, u32(b, off)] for off in struct.unpack_from(f'<{u32(b, fix)}I', b, fix + 4)]
    rel = header[13]                                # +0x34: relocations (count, offsets); [image+offset] += image base
    relocations = [[off, u32(b, off)] for off in struct.unpack_from(f'<{u32(b, rel)}I', b, rel + 4)]
    sym = header[14]                                # +0x38: symbols, 12 bytes each
    symbols = [b[sym + 4 + 12 * i: sym + 16 + 12 * i].hex() for i in range(u32(b, sym))]
    lo = min(s['start'] for s in sections)
    hi = max(s['end'] for s in sections)
    return header, sections, fixups, relocations, symbols, lo, hi


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        return 2
    game = sys.argv[1]
    out = sys.argv[2] if len(sys.argv) > 2 else os.path.join('export', 'modules', 'audio_modules.json')
    sound = os.path.join(game, 'SOUND')
    banks, code = [], {}
    for root, _, files in os.walk(sound):
        for name in sorted(files):
            if not name.lower().endswith('.abk'):
                continue
            path = os.path.join(root, name)
            b = open(path, 'rb').read()
            header, sections, fixups, relocations, symbols, lo, hi = parse_bank(b)
            code_bytes = b[lo:hi]
            code_hash = hashlib.sha256(code_bytes).hexdigest()
            code.setdefault(code_hash, {'size': len(code_bytes), 'bytes': code_bytes.hex()})
            banks.append({
                'path': os.path.relpath(path, game).replace(os.sep, '/'),
                'size': len(b),
                'sha256': hashlib.sha256(b).hexdigest(),
                'header': header,
                'code_begin': lo,
                'code_end': hi,
                'code_sha256': code_hash,
                'sections': sections,
                'fixups': fixups,
                'relocations': relocations,
                'symbols': symbols,
            })
    banks.sort(key=lambda bank: bank['path'].lower())
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(out, 'w', encoding='utf-8', newline='\n') as f:
        json.dump({'format': 1, 'loader': LOADER, 'exe_function_table': EXE_FUNCTION_TABLE,
                   'banks': banks, 'code': dict(sorted(code.items()))}, f, indent=1)
        f.write('\n')
    print(f'{len(banks)} banks, {len(code)} distinct code ranges, '
          f'{sum(c["size"] for c in code.values())} bytes of code -> {out}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
