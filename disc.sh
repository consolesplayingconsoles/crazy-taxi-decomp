#!/usr/bin/env bash
# Build a playable disc image of your version of the game: a copy of your original disc with the
# rebuilt executable (build/out.bin) and every file you put under disc/ (same path as on the disc,
# e.g. disc/STORY.PAC) written in place. Nothing in disc/ or the image is committed.
#   bash disc.sh <path to your original .gdi> [out dir]      (default out dir: build/disc)
set -euo pipefail
cd "$(dirname "$0")"
GDI="${1:?usage: bash disc.sh <your original .gdi> [out dir]}"
OUT="${2:-$PWD/build/disc}"
PY="${PYTHON:-python3}"
BOOT="1ST_READ.BIN"
[ -f build/out.bin ] || { echo "[ERROR] no build/out.bin: run bash build.sh first"; exit 1; }
args=("$BOOT=build/out.bin")
if [ -d disc ]; then
  while IFS= read -r -d '' f; do args+=("${f#disc/}=$f"); done < <(find disc -type f ! -name '.*' -print0)
fi
echo "Writing ${#args[@]} file(s) into a copy of your disc (about a minute: the image is copied first)"
"$PY" tools/disc_patch.py "$GDI" "$OUT" "${args[@]}"
echo "Play it: $OUT/$(basename "$GDI")"
