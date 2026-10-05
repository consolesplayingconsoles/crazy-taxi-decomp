#!/usr/bin/env bash
# Decode every standard (PVR) texture on your disc into a contact sheet, to find text drawn into
# images: open text-map/textures/index.html and tick the ones with text. Seconds to a minute.
#   bash textures.sh <path to your .gdi>
set -euo pipefail
cd "$(dirname "$0")"
GDI="${1:?usage: bash textures.sh <your disc .gdi>}"
echo "Decoding textures (seconds to a minute; progress every 50 files)"
"${PYTHON:-python3}" tools/textures.py "$GDI" text-map/textures
echo "Open: $PWD/text-map/textures/index.html"
