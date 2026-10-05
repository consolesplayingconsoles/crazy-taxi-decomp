#!/usr/bin/env bash
# Prepare the decomp from YOUR OWN disc: extract 1ST_READ.BIN, check it is the supported version,
# generate asm/ (one file per function) and text-map/. Nothing from the game is stored in git.
#   ./setup.sh <path to your Crazy Taxi (Europe) .gdi> [quick|standard|deep]
set -euo pipefail
cd "$(dirname "$0")"
GDI="${1:?usage: ./setup.sh <disc.gdi> [quick|standard|deep]}"
TIER="${2:-standard}"
PY="${PYTHON:-python3}"
SHA1=2756d6c828b5a3848189cd84cac62bc9cb0a94b7

"$PY" tools/gdi_read.py "$GDI" 1ST_READ.BIN 1ST_READ.BIN
got="$( (sha1sum 1ST_READ.BIN 2>/dev/null || shasum -a 1 1ST_READ.BIN) | cut -d' ' -f1)"
[ "$got" = "$SHA1" ] || { echo "[ERROR] 1ST_READ.BIN sha1 $got, expected $SHA1: not the supported release (see README)"; exit 1; }
"$PY" tools/split_asm.py 1ST_READ.BIN "$(cat BASE)" functions.txt .
"$PY" tools/text_map.py 1ST_READ.BIN "$(cat BASE)" functions.txt text-map "$GDI" "$TIER"
echo "Ready. Build with: SDK_PATH=<your Katana SDK> ./build.sh"
