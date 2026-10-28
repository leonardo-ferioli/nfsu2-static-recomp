#!/bin/sh
# Build a console tool (x87_diff_main.cpp, x87_bench.cpp ...) against a CMake build directory, with the x87 mode of its generated pages.
# The tools need the same NFSU2_X87_VIRTUAL / NFSU2_X87_SOFT80 definitions as the pages, which CMake does not know about, so the object
# is compiled and linked by hand with the flags ninja uses for fast_x87_diff.
#   usage: tools/build_x87_tool.sh <build dir> host|double|soft80 <source.cpp> <output exe name> [check]   (check: the pages were generated with --x87-check)
set -e
build=$1; mode=$2; source=$3; output=$4
src="$(cd "$(dirname "$0")/.." && (pwd -W 2>/dev/null || pwd))"
defs=""
[ "$mode" = double ] && defs="-DNFSU2_X87_VIRTUAL=1"
[ "$mode" = soft80 ] && defs="-DNFSU2_X87_VIRTUAL=1 -DNFSU2_X87_SOFT80=1"
[ "$5" = check ] && defs="$defs -DNFSU2_X87_CHECK_STACK=1"
cd "$build"
clang++ -DNFSU2_FAST_BACKEND=1 -DNFSU2_NATIVE32=1 $defs -I"$src/nue_d3d9/include" -I"$src" -I"$src/legacy_win32" -I"$src/legacy_win32/include" -m32 -msse2 -O3 -DNDEBUG -std=gnu++20 -D_DLL -D_MT -Xclang --dependent-lib=msvcrt \
  -c "$src/$source" -o "tool_$output.obj"
clang++ -nostartfiles -nostdlib -m32 -msse2 -O3 -DNDEBUG -D_DLL -D_MT -Xclang --dependent-lib=msvcrt -Xlinker /subsystem:console -fuse-ld=lld \
  -Wl,/BASE:0x00400000 -Wl,/DYNAMICBASE:NO -Wl,/LARGEADDRESSAWARE:NO -Wl,/SAFESEH:NO "-Wl,/sectionlayout:@$src/native32_sections.txt" \
  "tool_$output.obj" -o "$output.exe" -Xlinker /MANIFEST:EMBED \
  nfsu2_fast.lib legacy_win32/legacy_win32_host.lib legacy_win32/legacy_win32.lib legacy_win32/nfsu2_platform_std.lib \
  -lbcrypt.lib -luser32.lib -lwinmm.lib -lshell32.lib -ladvapi32.lib nfsu2_audio.lib -lole32.lib -lavrt.lib sleigh_runtime.lib \
  -lkernel32 -luser32 -lgdi32 -lwinspool -lshell32 -lole32 -loleaut32 -luuid -lcomdlg32 -ladvapi32 -loldnames
