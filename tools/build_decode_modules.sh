#!/bin/sh
# Build tools/decode_modules.cpp (generation-time SLEIGH decoder for the audio banks' code) into <out dir>/decode_modules.exe.
#   usage: tools/build_decode_modules.sh <out dir> [sleigh_runtime.lib]
# Without a library, third_party/sleigh is compiled here (about a minute) with the flags of the CMake target sleigh_runtime.
set -e
out=$1; lib=$2
src="$(cd "$(dirname "$0")/.." && (pwd -W 2>/dev/null || pwd))"
mkdir -p "$out"
cd "$out"
if [ -z "$lib" ]; then
  mkdir -p sleigh_obj
  ls "$src"/third_party/sleigh/*.cc | xargs -P 8 -I{} sh -c 'o=sleigh_obj/$(basename {} .cc).o; [ -f $o ] || clang++ -std=c++17 -O1 -w -Wno-c++11-narrowing -D_WINDOWS -D_DLL -D_MT -I"'"$src"'/third_party/zlib_shim" -I"'"$src"'/third_party/sleigh" -c {} -o $o'
  llvm-ar rcs sleigh_runtime_local.lib sleigh_obj/*.o
  lib=sleigh_runtime_local.lib
fi
clang++ -std=c++17 -O1 -w -Wno-c++11-narrowing -D_WINDOWS -D_DLL -D_MT -Xclang --dependent-lib=msvcrt -I"$src/third_party/zlib_shim" -I"$src/third_party/sleigh" \
  "$src/tools/decode_modules.cpp" "$lib" -o decode_modules.exe
echo built "$out/decode_modules.exe"
