#!/usr/bin/env bash
# Build Crazy Taxi Pac-Man on the decomp's C build (the same build as the OSM mod): Arcade's city replaced by the maze of assets/maze (the Pac-Man
# level of Sketchfab's "Pac-Man Level (Namco) (NES)" by Alfking49, CC BY 4.0), with fares, on the menu's first item named PACMAN_NAME (COLDC1.BIN,
# tools/pacman_coldc.py); Original and Crazy Box are gone from the menu. The decomp plus the shared layers config.json lists and this one
# (layer.patch, the osm layer's: the camera views and the single-mode menu), built by the decomp's own `make c`, into a copy of the original GDI
# with that one file rewritten.
set -euo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
source "$HERE/../common.sh"
[ -f "$HERE/.env" ] || { echo "[ERROR] missing $HERE/.env (ORIGINAL_GDI_DIR, PYTHON, SDK_PATH, PACMAN_NAME, PACMAN_FARES, PACMAN_MIN_TRIP_M, PACMAN_CORRIDOR_M, PACMAN_WALL_M)"; exit 1; }
# shellcheck disable=SC1091
source "$HERE/.env"
missing=""
for v in ORIGINAL_GDI_DIR PYTHON SDK_PATH PACMAN_NAME PACMAN_FARES PACMAN_MIN_TRIP_M PACMAN_CORRIDOR_M PACMAN_WALL_M; do [ -n "${!v:-}" ] || missing="$missing $v"; done
[ -z "$missing" ] || { echo "[ERROR] .env is missing:$missing"; exit 1; }
export SDK_PATH

# The output is named after the example: Crazy Taxi [<name> by cpc]
OUT_NAME="Crazy Taxi [$(python3 -c 'import json, sys; print(json.load(open(sys.argv[1]))["name"])' "$HERE/config.json") by cpc]"
TREE="$WORK_DIR/pac-man/tree"                       # the decomp with its layers applied; keeps its build/ for incremental builds
B="$WORK_DIR/pac-man"
OUT="$WORK_DIR/$OUT_NAME"
GDI="$(ls "$ORIGINAL_GDI_DIR"/*.gdi | head -1)"
MAZE="$HERE/assets/maze/scene.gltf"

echo "##STEP:tree"
mkdir -p "$B"
# shellcheck disable=SC2046
prepare_tree "$TREE" $(mod_layers pac-man) pac-man

echo "##STEP:course"
# Arcade's COLDC1.BIN from your disc, then the maze's floor, walls and model written into it, and src/osm.h (where the model is, where the cab
# starts, the menu's name) for the layer's C.
python3 "$DECOMP/tools/1-2-baseline/gdi_read.py" "$GDI" COLDC1.BIN "$B/COLDC1.orig"
"$PYTHON" "$HERE/tools/pacman_coldc.py" "$B/COLDC1.orig" "$TREE/1ST_READ.BIN" "$MAZE" "$PACMAN_NAME" "$B/COLDC1.BIN" "$TREE/src/osm.h" "$PACMAN_FARES" "$PACMAN_MIN_TRIP_M" "$PACMAN_CORRIDOR_M" "$PACMAN_WALL_M" "$HERE/assets/characters/pacman_ghost.glb"

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
python3 "$TREE/tools/8-build/disc_patch.py" "$GDI" "$OUT" "1ST_READ.BIN=$TREE/build/mbuild/game.bin" "COLDC1.BIN=$B/COLDC1.BIN"
for g in "$OUT"/*.gdi; do [ "$g" = "$OUT/$OUT_NAME.gdi" ] || mv "$g" "$OUT/$OUT_NAME.gdi"; done
echo "Built: $OUT"
echo "##OUTPUT:$OUT/$OUT_NAME.gdi"
