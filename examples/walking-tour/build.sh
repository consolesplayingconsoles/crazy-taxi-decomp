#!/usr/bin/env bash
# Build Crazy Taxi Walking Tour on the decomp's C build (the same build as the other examples): the decomp plus the shared layers
# config.json lists and this one (layer.patch: the mod's own C in src/, listed in mod-sources.txt, and the game's C changed where the
# mod hooks in), built by the decomp's own `make c`, into a copy of the original GDI with 1ST_READ.BIN rewritten. Nothing is read from
# another game's disc.
set -euo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
source "$HERE/../common.sh"
[ -f "$HERE/.env" ] || { echo "[ERROR] missing $HERE/.env (this machine's paths: ORIGINAL_GDI_DIR, SDK_PATH, PYTHON, QUICK_START)"; exit 1; }
# shellcheck disable=SC1091
source "$HERE/.env"
missing=""
for v in ORIGINAL_GDI_DIR PYTHON SDK_PATH QUICK_START; do [ -n "${!v:-}" ] || missing="$missing $v"; done
[ -z "$missing" ] || { echo "[ERROR] .env is missing:$missing"; exit 1; }
case "$QUICK_START" in 0|1) ;; *) echo "[ERROR] .env: QUICK_START must be 0 or 1, not '$QUICK_START'"; exit 1;; esac
export SDK_PATH

# The output is named after the example: Crazy Taxi [<name> by cpc]
OUT_NAME="Crazy Taxi [$(python3 -c 'import json, sys; print(json.load(open(sys.argv[1]))["name"])' "$HERE/config.json") by cpc]"
TREE="$WORK_DIR/walking-tour/tree"              # the decomp with its layers applied; keeps its build/ for incremental builds
B="$WORK_DIR/walking-tour"
OUT="$WORK_DIR/$OUT_NAME"
GDI="$(ls "$ORIGINAL_GDI_DIR"/*.gdi | head -1)"

echo "##STEP:tree"
mkdir -p "$B"
# shellcheck disable=SC2046
prepare_tree "$TREE" $(mod_layers walking-tour) walking-tour

echo "##STEP:headers"
# QUICK_START for the mod's C (the decomp's compile takes no -define).
echo "#define DEBUG_QUICK_START $QUICK_START" > "$TREE/src/quick.h"

echo "##STEP:base"
# The decomp's own order (its README): `make` first, the byte-for-byte build from the asm. It leaves build/obj/ (the boot code and every
# piece that stays), which `make c` links with the C. A fresh tree has no build/: the first run assembles every file, later runs only
# what changed. It must end with MATCH: the layer does not touch what the match build compiles.
( cd "$TREE" && make )

echo "##STEP:game"
# Then `make c`: retcheck, and the executable from the C (build/mbuild/game.bin) in the tree, the mod's files in its game block.
( cd "$TREE" && make c )

echo "##STEP:disc"
rm -rf "$OUT"
python3 "$TREE/tools/8-build/disc_patch.py" "$GDI" "$OUT" "1ST_READ.BIN=$TREE/build/mbuild/game.bin"
for g in "$OUT"/*.gdi; do [ "$g" = "$OUT/$OUT_NAME.gdi" ] || mv "$g" "$OUT/$OUT_NAME.gdi"; done
echo "Built: $OUT"
echo "##OUTPUT:$OUT/$OUT_NAME.gdi"
