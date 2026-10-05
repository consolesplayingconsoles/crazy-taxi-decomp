#!/usr/bin/env bash
# Rebuild 1ST_READ.BIN from asm/ and the matching C units in src/, and check it against the original.
# Runs the SDK's Hitachi tools (asmsh, lnk, elf2bin) under wibo, in a Linux container by default.
#   bash build.sh            (SDK_PATH from .env, written by the kick-off; or set it in the environment)
# SDK_PATH can be any SDK layout: the tools are found by name (asmsh.exe) anywhere under it.
# Docker is the default (any OS). DC_LOCAL=1 is opt-in for Linux x86_64 without Docker: it runs
# wibo from your PATH (wibo does not run on macOS or Windows).
set -euo pipefail
cd "$(dirname "$0")"
# shellcheck disable=SC1091
[ -z "${SDK_PATH:-}" ] && [ -f .env ] && . ./.env
[ -n "${SDK_PATH:-}" ] || { echo "[ERROR] no SDK_PATH: put SDK_PATH=\"/path/to/your Katana SDK\" in $PWD/.env (or export it)"; exit 1; }
SDK_PATH="$(cd "$SDK_PATH" && pwd)"
ASMSH="$(find "$SDK_PATH" -iname asmsh.exe -print -quit)"
[ -n "$ASMSH" ] || { echo "[ERROR] no asmsh.exe under $SDK_PATH: not a Katana SDK with the Hitachi tools"; exit 1; }
TOOLS_REL="${ASMSH#"$SDK_PATH"/}"; TOOLS_REL="${TOOLS_REL%/*}"
for t in lnk elf2bin shc; do
  [ -n "$(find "$SDK_PATH/$TOOLS_REL" -maxdepth 1 -iname "$t.exe" -print -quit)" ] || { echo "[ERROR] $t.exe missing next to asmsh.exe in $SDK_PATH/$TOOLS_REL"; exit 1; }
done
BASE="$(cat BASE)"
mkdir -p build/obj
# C units (src/*.c starting with /* @unit <start>-<end> [shc options] */) replace the asm files in
# their range; symbols.txt gives the linker the addresses of globals they use that no file defines.
{
  printf '%s\n' elf "start P($BASE)" "output build\\out.elf"
  python3 tools/units.py objects.txt | while read -r o; do printf 'input %s\n' "$o"; done
  if ls src/*.c >/dev/null 2>&1; then
    grep -hoE '[A-Za-z_][A-Za-z0-9_]*' $(grep -l '@unit' src/*.c 2>/dev/null) /dev/null | sort -u > build/c_idents.txt
    [ -f symbols.txt ] && awk 'NR==FNR{u[$1]=1; next} !/^#/ && NF==2 && ($2 in u) {printf "define _%s(%s)\n", $2, $1}' build/c_idents.txt symbols.txt
  fi
  printf '%s\n' exit
} > build/link.sub
python3 tools/units.py --units > build/units.txt

# The steps, run with $T = the tools folder and the repo as the working directory.
STEPS='
  set -e
  tool() { find "$T" -maxdepth 1 -iname "$1.exe" -print -quit; }
  n=0; i=0; total=$(wc -l < objects.txt | tr -d " ")
  echo "Assembling $total files (first build: a few minutes; later builds: only changed files)"
  while read -r f; do
    i=$((i+1)); [ $((i % 200)) -eq 0 ] && echo "  checked $i/$total, assembled $n"
    o="build/obj/${f%.src}.obj"
    if [ ! -f "$o" ] || [ "asm/$f" -nt "$o" ]; then
      wibo "$(tool asmsh)" "asm\\$f" -object="build\\obj\\${f%.src}.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
        || { cat build/asm.log; exit 1; }
      n=$((n+1))
    fi
  done < objects.txt
  echo "assembled $n files"
  # C units: shc -> asm, gaps filled with 0xEE and padded to the unit size (tools/fill.py), asmsh
  mkdir -p build/tmp
  while read -r name start end opts; do
    [ -n "$name" ] || continue
    o="build/obj/c_$name.obj"
    if [ ! -f "$o" ] || [ "src/$name.c" -nt "$o" ] || [ src -nt "$o" ]; then
      SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp" wibo "$(tool shc)" "src\\$name.c" -code=asm -object="build\\obj\\c_$name.s" \
        -cpu=sh4 -endian=little -fpu=single -division=cpu -round=nearest -pic=0 -macsave=0 -optimize=1 -size \
        -string=const -section=p=P,c=C,d=D,b=B -include=src $opts > build/shc.log 2>&1 || { cat build/shc.log; exit 1; }
      python3 tools/fill.py "build/obj/c_$name.s" "build/obj/c_${name}_f.s" "$start" "$end" || exit 1
      wibo "$(tool asmsh)" "build\\obj\\c_${name}_f.s" -object="build\\obj\\c_$name.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
        || { cat build/asm.log; exit 1; }
      echo "  compiled C unit $name"
    fi
  done < build/units.txt
  echo "linking"
  wibo "$(tool lnk)" -subcommand=build\\link.sub > build/link.log 2>&1 || { tr -d "\r" < build/link.log | grep -v "^: input" | tail -20; exit 1; }
  wibo "$(tool elf2bin)" -s "$B" build\\out.elf > build/elf2bin.log 2>&1 || { cat build/elf2bin.log; exit 1; }
'
if [ "${DC_LOCAL:-0}" = 1 ]; then
  command -v wibo >/dev/null || { echo "[ERROR] DC_LOCAL=1 needs wibo on PATH (github.com/decompals/wibo, Linux x86_64)"; exit 1; }
  TW="Z:$(printf '%s' "$SDK_PATH/$TOOLS_REL" | tr / '\\')"     # wibo maps Z:\ to /
  T="$SDK_PATH/$TOOLS_REL" TW="$TW" B="$BASE" bash -c "$STEPS" </dev/null
else
  . tools/docker_check.sh
  docker_ready tools/tools-image || exit 1      # builds the dc-tools image (wibo) on first use
  IMAGE="${DC_TOOLS_IMAGE:-dc-tools}"
  TW="Z:$(printf '%s' "/sdk/$TOOLS_REL" | tr / '\\')"
  docker run --rm -v "$SDK_PATH":/sdk:ro -v "$PWD":/app -w /app -e T="/sdk/$TOOLS_REL" -e TW="$TW" -e B="$BASE" "$IMAGE" bash -c "$STEPS" </dev/null
fi
if cmp -s build/out.bin 1ST_READ.BIN; then
  echo "MATCH: build/out.bin is byte-identical to 1ST_READ.BIN"
else
  echo "DIFFERS: build/out.bin vs 1ST_READ.BIN (expected if you changed the game; a failure if you did not)"
  cmp build/out.bin 1ST_READ.BIN | head -1 || true
  [ "${DC_EXPECT_CHANGES:-0}" = 1 ] || exit 1
fi
