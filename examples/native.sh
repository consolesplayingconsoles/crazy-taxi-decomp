#!/usr/bin/env bash
# native.sh <example>: an example built as the native program (x86-64 Linux, the decomp's port/), from the same tree and disc as
# its Dreamcast build. It runs the example's own build.sh (the layers applied in examples/build/<example>/tree, the example's
# disc written in examples/build/), then, in that tree, the port build (tools/10-port/native_build.py, in the port image) and
# the example's disc's files into the folder the program reads (tools/10-port/extract_disc.py).
#
#   bash examples/native.sh pac-man
#
# Needs what build.sh needs, and Docker. The port image (port/Dockerfile) is built the first time and reused after. The program:
# examples/build/<example>/tree/build/native/<your disc image's name> (GDI in the decomp's .env), its files in
# .../build/native/data.
set -euo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
source "$HERE/common.sh"
EX="${1:?usage: bash examples/native.sh <example>}"
[ -f "$HERE/$EX/build.sh" ] || { echo "[ERROR] no examples/$EX/build.sh"; exit 1; }
PORT_IMAGE=crazy-taxi-port

echo "##STEP:dreamcast"
# The example's own build: its tree, its data files and its disc
LOG="$WORK_DIR/$EX/native-dreamcast.log"
mkdir -p "$WORK_DIR/$EX"
bash "$HERE/$EX/build.sh" | tee "$LOG"
GDI="$(sed -n 's/^##OUTPUT://p' "$LOG" | tail -1)"
[ -f "$GDI" ] || { echo "[ERROR] $EX/build.sh named no disc"; exit 1; }
TREE="$WORK_DIR/$EX/tree"

echo "##STEP:objects"
# The decomp's own native objects (its last build, build/native/obj) for every file the layers left as it is, the first time:
# a fresh tree would compile all 1,588 files again. --keep-objects reuses an object newer than its source, so the objects are
# copied with the time of now, and the object of each file the layers changed, or that includes a header they changed, is
# dropped and compiled. After that the tree's own objects carry on: a file the layers or the decomp change again is newer.
#   The port compiles copies of the C (build/native/src_fixed, which native_build.py rewrites only where the text changed):
#   those come from the decomp too, before the objects, or every copy would be newer than its object.
if [ ! -d "$TREE/build/native/obj" ] && [ -d "$DECOMP/build/native/obj" ]; then
    mkdir -p "$TREE/build/native"
    rm -rf "$TREE/build/native/src_fixed"
    [ -d "$DECOMP/build/native/src_fixed" ] && cp -R "$DECOMP/build/native/src_fixed" "$TREE/build/native/src_fixed"
    cp -R "$DECOMP/build/native/obj" "$TREE/build/native/obj"
    sleep 1
    find "$TREE/build/native/obj" -type f -exec touch {} +
    python3 - "$DECOMP" "$TREE" <<'EOF'
import filecmp, os, re, sys
decomp, tree = sys.argv[1:]
files = [os.path.relpath(os.path.join(d, f), tree) for top in ('src', 'sdk') for d, _, fs in os.walk(os.path.join(tree, top))
         for f in fs if f.endswith(('.c', '.h'))]
changed = {f for f in files if not os.path.exists(os.path.join(decomp, f)) or not filecmp.cmp(os.path.join(decomp, f), os.path.join(tree, f), shallow=False)}
headers = {os.path.basename(f) for f in changed if f.endswith('.h')}
for f in files:
    if f.endswith('.c') and headers and f not in changed:
        inc = set(re.findall(r'#\s*include\s*"([^"]+)"', open(os.path.join(tree, f), errors='replace').read()))
        if {os.path.basename(i) for i in inc} & headers:
            changed.add(f)
for f in files:              # and every file whose object in the decomp is older than its source there (not rebuilt since)
    if f.endswith('.c') and f not in changed:
        o = os.path.join(decomp, 'build', 'native', 'obj', os.path.splitext(os.path.basename(f))[0] + '.o')
        if not os.path.exists(o) or os.path.getmtime(o) <= os.path.getmtime(os.path.join(decomp, f)):
            changed.add(f)
dropped = 0
for f in changed:
    if f.endswith('.c'):
        o = os.path.join(tree, 'build', 'native', 'obj', os.path.splitext(os.path.basename(f))[0] + '.o')
        if os.path.exists(o):
            os.remove(o)
            dropped += 1
print('objects: the decomp\'s, %d dropped for %d files the layers changed' % (dropped, len(changed)))
EOF
fi

echo "##STEP:native"
docker build -q -t "$PORT_IMAGE" "$DECOMP/port"      # the first time builds it; after that Docker's cache answers at once
docker run --rm -v "$TREE":/work -w /work "$PORT_IMAGE" python3 tools/10-port/native_build.py --keep-objects

echo "##STEP:data"
rm -rf "$TREE/build/native/data"
python3 "$TREE/tools/10-port/extract_disc.py" "$GDI" "$TREE/build/native/data"
# but the executable from your original disc: the native game is the C compiled for the host, and it loads 1ST_READ.BIN for
# its data at the original addresses (its start code reads its tables there). The mod's disc holds the executable built from
# the C for the console, laid out otherwise: with it the start code read garbage and the game faulted at once.
ORIGINAL_GDI_DIR="$(sed -n 's/^ORIGINAL_GDI_DIR=//p' "$HERE/$EX/.env" | tr -d '"' | tail -1)"
ORIG="$(ls "$ORIGINAL_GDI_DIR"/*.gdi | head -1)"
python3 "$DECOMP/tools/1-2-baseline/gdi_read.py" "$ORIG" 1ST_READ.BIN "$TREE/build/native/data/1ST_READ.BIN"
# the program is named after the disc image (native_build.py, from GDI in the tree's .env, the decomp's)
EXE="$(sed -n 's/^[[:space:]]*GDI[[:space:]]*=[[:space:]]*//p' "$TREE/.env" | tail -1 | tr -d "\"'")"
EXE="$(basename "$EXE")"
EXE="${EXE%.[gG][dD][iI]}"
echo "Built: $TREE/build/native/$EXE"
echo "Run: \"$TREE/build/native/$EXE\" --data \"$TREE/build/native/data\""
echo "##OUTPUT:$TREE/build/native/$EXE"
