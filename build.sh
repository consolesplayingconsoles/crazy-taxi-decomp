#!/usr/bin/env bash
# Rebuild 1ST_READ.BIN from asm/ (and later src/) and check it against the original.
# Runs the SDK's Hitachi tools (asmsh, lnk, elf2bin) under wibo in a Linux container.
#   SDK_PATH=<katana sdk dir> ./build.sh
set -euo pipefail
cd "$(dirname "$0")"
: "${SDK_PATH:?set SDK_PATH to the Katana SDK dir (bin/, shc/, shinobi/)}"
IMAGE="${DC_TOOLS_IMAGE:-lhsazevedo/tbg-decomp}"   # any image with wibo on PATH
BASE="$(cat BASE)"
mkdir -p build/obj
{
  printf '%s\n' elf "start P($BASE)" "output build\\out.elf"
  while read -r f; do printf 'input build\\obj\\%s\n' "${f%.src}.obj"; done < objects.txt
  printf '%s\n' exit
} > build/link.sub
docker run --rm -v "$SDK_PATH":/sdk -v "$PWD":/app -w /app "$IMAGE" sh -c '
  set -e
  n=0
  while read -r f; do
    o="build/obj/${f%.src}.obj"
    if [ ! -f "$o" ] || [ "asm/$f" -nt "$o" ]; then
      wibo /sdk/bin/asmsh.exe "asm\\$f" -object="build\\obj\\${f%.src}.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
        || { cat build/asm.log; exit 1; }
      n=$((n+1))
    fi
  done < objects.txt
  echo "assembled $n files"
  wibo /sdk/bin/lnk.exe -subcommand=build\\link.sub > build/link.log 2>&1 || { tr -d "\r" < build/link.log | grep -v "^: input" | tail -20; exit 1; }
  wibo /sdk/bin/elf2bin.exe -s '"$BASE"' build\\out.elf > build/elf2bin.log 2>&1 || { cat build/elf2bin.log; exit 1; }
' </dev/null
if cmp -s build/out.bin 1ST_READ.BIN; then
  echo "MATCH: build/out.bin is byte-identical to 1ST_READ.BIN"
else
  echo "DIFFERS: build/out.bin vs 1ST_READ.BIN"; cmp build/out.bin 1ST_READ.BIN | head -3 || true; exit 1
fi
