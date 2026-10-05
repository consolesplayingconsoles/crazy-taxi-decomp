#!/usr/bin/env bash
# Prepare the decomp from YOUR OWN disc: extract the executable, check it is the supported release,
# generate asm/ (one file per function) and text-map/. Nothing from the game is stored in git.
#   bash setup.sh <path to your .gdi> [quick|standard|deep]
set -euo pipefail
cd "$(dirname "$0")"
GDI="${1:?usage: bash setup.sh <your disc .gdi> [quick|standard|deep]}"
TIER="${2:-standard}"
PY="${PYTHON:-python3}"
BOOT="1ST_READ.BIN"                                    # boot file named in IP.BIN
SHA1="2756d6c828b5a3848189cd84cac62bc9cb0a94b7"                                    # of the supported release's boot file

"$PY" tools/gdi_read.py "$GDI" "$BOOT" 1ST_READ.BIN
got="$( (sha1sum 1ST_READ.BIN 2>/dev/null || shasum -a 1 1ST_READ.BIN) | cut -d' ' -f1)"
[ "$got" = "$SHA1" ] || { echo "[ERROR] $BOOT has SHA-1 $got, expected $SHA1: not the supported release (see README)"; exit 1; }
"$PY" tools/split_asm.py 1ST_READ.BIN "$(cat BASE)" functions.txt .
echo "Text map: strings, file text density, image candidates ($TIER tier)"
"$PY" tools/text_map.py 1ST_READ.BIN "$(cat BASE)" functions.txt text-map "$GDI" "$TIER"
echo "File tables: which disc files the executable locates by internal offsets (seconds)"
"$PY" tools/file_tables.py 1ST_READ.BIN "$(cat BASE)" "$GDI" text-map/file_tables.tsv
chmod +x build.sh setup.sh 2>/dev/null || true
echo "Textures (optional, to find text drawn into images): bash \"$PWD/textures.sh\" \"$GDI\""
if grep -q '^SDK_PATH=' .env 2>/dev/null; then
  echo "Ready. Build with: bash \"$PWD/build.sh\""
else
  echo "Ready. Tell it where your Katana SDK is, then build:"
  echo "  echo 'SDK_PATH=\"/path/to/katana-sdk\"' > \"$PWD/.env\""
  echo "  bash \"$PWD/build.sh\""
fi
