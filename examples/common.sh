# Shared by the examples: mods that are layers over this decomp's C build.
# A mod is the decomp plus a stack of layers: the shared ones its config.json lists ("layers": ["layers/fares", ...], applied in that
# order; each is layers/<name>/layer.patch) and its own <mod>/layer.patch, its source changes on top of them, applied to a copy of the
# decomp tree (this repo, set up with `make setup`), which the decomp's own `make c` then builds (the game's executable from the C); the
# example adds disc files after that.
set -euo pipefail

CT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"      # this examples/ folder
DECOMP="$(cd "$CT_DIR/.." && pwd)"           # the decomp this folder is in: never edited or built by an example
WORK_DIR="${WORK_DIR:-$CT_DIR/build}"        # gitignored, shared by the examples

# rsync excludes: never carry git metadata or build outputs into a tree (the tree keeps its own build/ for incremental builds)
RSYNC_EXCLUDES=(--exclude=.git --exclude=/build --exclude=/examples --exclude=__pycache__)

# The shared layers a mod is built on, in order: its config.json's "layers" (none for a shared layer itself, which has no config.json).
mod_layers() {
  local cfg="$CT_DIR/$1/config.json"
  [ -f "$cfg" ] || return 0
  python3 -c 'import json, sys; print(" ".join(json.load(open(sys.argv[1])).get("layers", [])))' "$cfg"
}

# Copy the pristine decomp into $1 and apply the given layers' patches in order. A patch that does not apply fails the build.
prepare_tree() {
  local dest="$1"; shift
  mkdir -p "$dest"
  # No -t: a file rsync rewrites gets a fresh mtime, so it is built again. --delete: a removed change leaves no stale file.
  rsync -rlpD --checksum --delete "${RSYNC_EXCLUDES[@]}" "$DECOMP/" "$dest/"
  local layer
  for layer in "$@"; do
    local patch="$CT_DIR/$layer/layer.patch"
    if [ -s "$patch" ]; then
      echo "applying layer: $layer"
      # The ceiling stops git finding a repo above the tree: inside one, git apply skips every path and still exits 0.
      ( cd "$dest" && GIT_CEILING_DIRECTORIES="$(dirname "$dest")" git apply --whitespace=nowarn "$patch" ) \
        || { echo "[ERROR] layer '$layer' does not apply cleanly"; exit 1; }
    fi
  done
}
