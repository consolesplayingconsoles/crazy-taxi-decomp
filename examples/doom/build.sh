#!/usr/bin/env bash
# Build Crazy Taxi Doom on the decomp's C build (TBG's scripts/build-target.sh is the template): Doom's E1M1 in place of the city, with fares,
# as the menu's one item (DOOM, Original's slot: COLDC2.BIN, tools/doom_coldc.py; the first item starts it); Arcade, Original and Crazy Box are gone from the menu. The decomp plus the shared
# layers config.json lists and this one (layer.patch), built by the decomp's own `make c`, into a copy of the original GDI with that one file rewritten.
set -euo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
source "$HERE/../common.sh"
[ -f "$HERE/.env" ] || { echo "[ERROR] missing $HERE/.env (ORIGINAL_GDI_DIR, PYTHON, SDK_PATH, DOOM_FARES, DOOM_MIN_TRIP_M)"; exit 1; }
# shellcheck disable=SC1091
source "$HERE/.env"
missing=""
for v in ORIGINAL_GDI_DIR PYTHON SDK_PATH DOOM_FARES DOOM_MIN_TRIP_M; do [ -n "${!v:-}" ] || missing="$missing $v"; done
[ -z "$missing" ] || { echo "[ERROR] .env is missing:$missing"; exit 1; }
DOOM_WAD="$HERE/assets/doom1.wad"                                 # the shareware WAD is in assets/
DOOM_MAP=E1M1
export SDK_PATH

# The output is named after the example: Crazy Taxi [<name> by cpc]
OUT_NAME="Crazy Taxi [$(python3 -c 'import json, sys; print(json.load(open(sys.argv[1]))["name"])' "$HERE/config.json") by cpc]"
TREE="$WORK_DIR/doom/tree"                 # the decomp with its layers applied; keeps its build/ for incremental builds
B="$WORK_DIR/doom"
OUT="$WORK_DIR/$OUT_NAME"
GDI="$(ls "$ORIGINAL_GDI_DIR"/*.gdi | head -1)"

echo "##STEP:tree"
mkdir -p "$B"
# shellcheck disable=SC2046
prepare_tree "$TREE" $(mod_layers doom) doom

echo "##STEP:course"
# Original's COLDC2.BIN from your disc, then Doom's map (the ground, the walls and the model) written into it, and src/doom.h for the layer's C.
python3 "$DECOMP/tools/gdi_read.py" "$GDI" COLDC2.BIN "$B/COLDC2.orig"
"$PYTHON" "$HERE/tools/doom_coldc.py" "$B/COLDC2.orig" "$TREE/1ST_READ.BIN" "$DOOM_WAD" "$DOOM_MAP" "$B/COLDC2.BIN" "$TREE/src/doom.h" "$DOOM_FARES" "$DOOM_MIN_TRIP_M"

echo "##STEP:base"
# The decomp's own order (its README): `make` first, the byte-for-byte build from the asm. It leaves build/obj/ (the boot code and every
# piece that stays), which `make c` links with the C. A fresh tree has no build/: the first run assembles every file, later runs only
# what changed. It must end with MATCH: the layer does not touch what the match build compiles.
( cd "$TREE" && make )

echo "##STEP:game"
# Then `make c`: retcheck, and the executable from the C (build/mbuild/game.bin) in the tree.
( cd "$TREE" && make c )

echo "##STEP:disc"
rm -rf "$OUT"
python3 "$TREE/tools/8-build/disc_patch.py" "$GDI" "$OUT" "1ST_READ.BIN=$TREE/build/mbuild/game.bin" "COLDC2.BIN=$B/COLDC2.BIN"
for g in "$OUT"/*.gdi; do [ "$g" = "$OUT/$OUT_NAME.gdi" ] || mv "$g" "$OUT/$OUT_NAME.gdi"; done
echo "Built: $OUT"
echo "##OUTPUT:$OUT/$OUT_NAME.gdi"
