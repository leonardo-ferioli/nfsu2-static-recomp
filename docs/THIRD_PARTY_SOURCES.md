# Third-party sources copied into this repository

One row per borrowed piece, so the licence review is quick and any piece can be removed or replaced. Rules:

- Borrowed files keep their original copyright notice and licence header unchanged; each project's LICENSE file is shipped next to its code
  (`third_party/<project>/LICENSE`).
- Borrowed code lives in `third_party/<project>/` or in a file whose first lines say it is borrowed; it is never mixed invisibly into our files.
- It stays behind our Level A / facade interfaces: a Level A header never includes a third-party header.
- Our own code that was *written after reading* a project (re-derived behaviour, no copied text) is listed in the second table, because the
  reading is part of the provenance.

## Copied code

| Source URL | Commit | Original path | Licence | Date copied | What changed | Used in |
|---|---|---|---|---|---|---|
| (none yet) | | | | | | |

## Read, then written independently (no text copied)

| Project | What was read | Where the behaviour went |
|---|---|---|
| wibo (MIT, https://github.com/decompals/wibo, commit 355e082) | `src/files.cpp` path conversion, `src/handles.h` object model | rules recorded in `NUE_RESEARCH_WIN32_DINPUT.md`; implemented in `legacy_win32/` |
