"""Byte patterns over the original SPEED2.EXE .text, in the notation of the widescreen fix (hex bytes, `?` or `??` wildcards).

Used by tools/mods/*.py to locate the instructions a mod changes. The patterns come from the open-source WidescreenFixesPack
(MIT license, ThirteenAG and contributors); here they are only data that is resolved against the exported .text.
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TEXT_BASE = 0x401000
_text = None


def text():
    global _text
    if _text is None:
        _text = (ROOT / "export/memory_401000.bin").read_bytes()
    return _text


def compile_pattern(pattern):
    parts = pattern.split()
    out = b""
    for part in parts:
        out += b"." if part.strip("?") == "" else re.escape(bytes([int(part, 16)]))
    return re.compile(out, re.S)


def find_all(pattern):
    """Addresses (VA) of every occurrence, overlapping ones included."""
    regex = compile_pattern(pattern)
    data = text()
    found, start = [], 0
    while True:
        m = regex.search(data, start)
        if not m:
            return found
        found.append(TEXT_BASE + m.start())
        start = m.start() + 1


def get(pattern, count=None, index=0):
    """VA of occurrence `index`; if `count` is given the number of occurrences must match (as hook::pattern(...).count(n))."""
    found = find_all(pattern)
    if count is not None and len(found) != count:
        raise ValueError(f"pattern {pattern!r} matches {len(found)} times, expected {count}")
    if index >= len(found):
        raise ValueError(f"pattern {pattern!r}: occurrence {index} requested, {len(found)} found")
    return found[index]
