// Minimal stand-in for zlib used only so Ghidra's SLEIGH reader builds without the zlib library.
// The runtime reads a specification whose payload tools/prepare_sleigh_spec.py has already inflated,
// so "inflate" is a pass-through copy; deflate is not needed at run time and reports an error.
#pragma once
#include <cstring>
#define Z_NULL 0
#define Z_OK 0
#define Z_STREAM_END 1
#define Z_NEED_DICT 2
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR (-3)
#define Z_MEM_ERROR (-4)
#define Z_NO_FLUSH 0
#define Z_FINISH 4
typedef unsigned char Bytef;
typedef void* (*alloc_func)(void*, unsigned, unsigned);
typedef void (*free_func)(void*, void*);
typedef struct z_stream_s {
    const Bytef* next_in; unsigned avail_in; unsigned long total_in;
    Bytef* next_out; unsigned avail_out; unsigned long total_out;
    alloc_func zalloc; free_func zfree; void* opaque;
} z_stream;
inline int inflateInit(z_stream*) { return Z_OK; }
inline int inflateEnd(z_stream*) { return Z_OK; }
inline int inflate(z_stream* s, int) {
    unsigned n = s->avail_in < s->avail_out ? s->avail_in : s->avail_out;
    std::memcpy(s->next_out, s->next_in, n);
    s->next_in += n; s->avail_in -= n; s->next_out += n; s->avail_out -= n;
    s->total_in += n; s->total_out += n;
    return Z_OK;
}
inline int deflateInit(z_stream*, int) { return Z_STREAM_ERROR; }
inline int deflateEnd(z_stream*) { return Z_OK; }
inline int deflate(z_stream*, int) { return Z_STREAM_ERROR; }
