#!/usr/bin/env bash
# Rebuild 1ST_READ.BIN from asm/ (and later src/) and check it against the original.
# Runs the SDK's Hitachi tools (asmsh, lnk, elf2bin) under wibo, in a Linux container by default.
#   SDK_PATH=<katana sdk dir> ./build.sh
# SDK_PATH can be any SDK layout: the tools are found by name (asmsh.exe) anywhere under it.
# Docker is the default (any OS). DC_LOCAL=1 is opt-in for Linux x86_64 without Docker: it runs
# wibo from your PATH (wibo does not run on macOS or Windows).
set -euo pipefail
cd "$(dirname "$0")"
: "${SDK_PATH:?set SDK_PATH to your Katana SDK folder}"
SDK_PATH="$(cd "$SDK_PATH" && pwd)"
ASMSH="$(find "$SDK_PATH" -iname asmsh.exe -print -quit)"
[ -n "$ASMSH" ] || { echo "[ERROR] no asmsh.exe under $SDK_PATH: not a Katana SDK with the Hitachi tools"; exit 1; }
TOOLS_REL="${ASMSH#"$SDK_PATH"/}"; TOOLS_REL="${TOOLS_REL%/*}"
for t in lnk elf2bin; do
  [ -n "$(find "$SDK_PATH/$TOOLS_REL" -maxdepth 1 -iname "$t.exe" -print -quit)" ] || { echo "[ERROR] $t.exe missing next to asmsh.exe in $SDK_PATH/$TOOLS_REL"; exit 1; }
done
BASE="$(cat BASE)"
mkdir -p build/obj
{
  printf '%s\n' elf "start P($BASE)" "output build\\out.elf"
  while read -r f; do printf 'input build\\obj\\%s\n' "${f%.src}.obj"; done < objects.txt
  printf '%s\n' exit
} > build/link.sub

# The steps, run with $T = the tools folder and the repo as the working directory.
STEPS='
  set -e
  tool() { find "$T" -maxdepth 1 -iname "$1.exe" -print -quit; }
  n=0
  while read -r f; do
    o="build/obj/${f%.src}.obj"
    if [ ! -f "$o" ] || [ "asm/$f" -nt "$o" ]; then
      wibo "$(tool asmsh)" "asm\\$f" -object="build\\obj\\${f%.src}.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
        || { cat build/asm.log; exit 1; }
      n=$((n+1))
    fi
  done < objects.txt
  echo "assembled $n files"
  wibo "$(tool lnk)" -subcommand=build\\link.sub > build/link.log 2>&1 || { tr -d "\r" < build/link.log | grep -v "^: input" | tail -20; exit 1; }
  wibo "$(tool elf2bin)" -s "$B" build\\out.elf > build/elf2bin.log 2>&1 || { cat build/elf2bin.log; exit 1; }
'
if [ "${DC_LOCAL:-0}" = 1 ]; then
  command -v wibo >/dev/null || { echo "[ERROR] DC_LOCAL=1 needs wibo on PATH (github.com/decompals/wibo, Linux x86_64)"; exit 1; }
  T="$SDK_PATH/$TOOLS_REL" B="$BASE" bash -c "$STEPS" </dev/null
else
  command -v docker >/dev/null || { echo "[ERROR] Docker not found: install it, or use DC_LOCAL=1 with wibo on Linux"; exit 1; }
  IMAGE="${DC_TOOLS_IMAGE:-lhsazevedo/tbg-decomp}"   # any image with wibo on PATH
  docker run --rm -v "$SDK_PATH":/sdk:ro -v "$PWD":/app -w /app -e T="/sdk/$TOOLS_REL" -e B="$BASE" "$IMAGE" bash -c "$STEPS" </dev/null
fi
if cmp -s build/out.bin 1ST_READ.BIN; then
  echo "MATCH: build/out.bin is byte-identical to 1ST_READ.BIN"
else
  echo "DIFFERS: build/out.bin vs 1ST_READ.BIN"; cmp build/out.bin 1ST_READ.BIN | head -3 || true; exit 1
fi
