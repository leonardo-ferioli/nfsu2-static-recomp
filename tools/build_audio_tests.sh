#!/bin/sh
# Build audio_module_tests.cpp (the translated audio-bank code against the SLEIGH interpreter) against a 32-bit CMake build directory.
#   usage: tools/build_audio_tests.sh <32-bit build dir> <directory with audio_*.cpp (default generated_audio)> <work dir> [coverage]
# The audio units are compiled with the flags of nfsu2_fast; the test is linked with the libraries of the build dir (nfsu2_fast.lib has the runtime).
# With `coverage` the units get a per-instruction hit recorder (a copy of each file with NFSU2_TR redefined) and the test reports how much of the
# translation its trials executed.
set -e
build=$1; audio=${2:-generated_audio}; work=$3
src="$(cd "$(dirname "$0")/.." && (pwd -W 2>/dev/null || pwd))"
flags="-DNFSU2_FAST_BACKEND=1 -DNFSU2_NATIVE32=1 -Inue_d3d9/include -I. -Ilegacy_win32 -Ilegacy_win32/include -m32 -msse2 -O2 -g0 -fno-fast-math -fno-strict-aliasing -mfpmath=sse -Wno-unused-label -ffunction-sections -std=gnu++20 -D_DLL -D_MT"
mkdir -p "$work"
work="$(cd "$work" && (pwd -W 2>/dev/null || pwd))"
case "$audio" in /*|?:*) dir=$audio;; *) dir=$src/$audio;; esac
if [ "$4" = coverage ]; then
  mkdir -p "$work/cov"
  python - "$dir" "$work/cov" <<'PY'
import sys
from pathlib import Path
src, dst = Path(sys.argv[1]), Path(sys.argv[2])
for f in sorted(src.glob("audio_*.cpp")):
    text = f.read_text()
    if f.stem != "audio_modules":
        hook = "namespace nfsu2raw {\nvoid audio_cov(const char*,uint32_t);\n#undef NFSU2_TR\n#define NFSU2_TR(a) audio_cov(\"%s\",u32(a)-code)\n" % f.stem[len("audio_"):]
        text = text.replace("namespace nfsu2raw {\n", hook, 1)
    (dst / f.name).write_text(text)
PY
  dir="$work/cov"
  rm -f "$work"/audio_*.o
fi
cd "$src"   # the include paths above are relative: the checkout path may contain spaces
ls "$dir"/audio_*.cpp | xargs -P 8 -I{} sh -c "o='$work'/\$(basename {} .cpp).o; [ \$o -nt {} ] || clang++ $flags -c {} -o \$o"
clang++ $flags -c audio_module_tests.cpp -o "$work/test_main.o"
cd "$work"
ls audio_*.o > objs.txt
echo test_main.o >> objs.txt
clang++ -nostartfiles -nostdlib -m32 -msse2 -O2 -D_DLL -D_MT -Xclang --dependent-lib=msvcrt -Xlinker /subsystem:console -fuse-ld=lld \
  -Wl,/BASE:0x00400000 -Wl,/DYNAMICBASE:NO -Wl,/LARGEADDRESSAWARE:NO -Wl,/SAFESEH:NO "-Wl,/sectionlayout:@$src/native32_sections.txt" \
  @objs.txt -o audio_module_tests.exe -Xlinker /MANIFEST:EMBED \
  "$build/nfsu2_fast.lib" "$build/legacy_win32/legacy_win32_host.lib" "$build/legacy_win32/legacy_win32.lib" "$build/legacy_win32/nfsu2_platform_std.lib" \
  -lbcrypt.lib -luser32.lib -lwinmm.lib -lshell32.lib -ladvapi32.lib "$build/nfsu2_audio.lib" -lole32.lib -lavrt.lib "$build/sleigh_runtime.lib" \
  -lkernel32 -luser32 -lgdi32 -lwinspool -lshell32 -lole32 -loleaut32 -luuid -lcomdlg32 -ladvapi32 -loldnames
echo built "$work/audio_module_tests.exe"
