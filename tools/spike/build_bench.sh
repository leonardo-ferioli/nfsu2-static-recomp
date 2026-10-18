#!/bin/sh
# usage: build_bench.sh <x86|x64> <generated_fast dir (no spaces)> <output exe (no spaces)> [extra clang flags...]
# Builds the JDLZ console benchmark against one generated page set (no launcher, no platform layer).
set -e
arch=$1; gen=$2; out=$3; shift 3
cd "$(dirname "$0")/../.."
case $arch in x86) a="-m32 -msse2";; x64) a="";; *) exit 2;; esac
flags="$a -O2 -g0 -std=c++20 -fno-fast-math -fno-strict-aliasing -mfpmath=sse -Wno-unused-label -I. -DNFSU2_FAST_BACKEND=1 -DNFSU2_NATIVE32=1 $*"
tmp="$out.obj"; mkdir -p "$tmp"
pids=""
for f in "$gen"/*.cpp runtime.cpp userops.cpp tools/spike/jdlz_bench.cpp; do
  o="$tmp/$(basename "$f" .cpp).o"
  clang++ $flags -c "$f" -o "$o" &
  pids="$pids $!"
done
for p in $pids; do wait $p; done
clang++ $a -fuse-ld=lld "$tmp"/*.o -o "$out" -lbcrypt -luser32 -lwinmm
