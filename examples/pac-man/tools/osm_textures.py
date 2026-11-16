#!/usr/bin/env python3
"""The pictures the map's surfaces are drawn with: seven CC0 materials from ambientCG (https://ambientcg.com, licence CC0 1.0), their colour
map only, kept in osm/maps/textures/<id>/<id>_1K-JPG_Color.jpg.

    osm_textures.py <osm/maps/textures dir>

A picture already there is kept. The zips are opened with zipfile and only the colour map is written (the member's name checked, nothing
else extracted)."""
import io
import os
import sys
import urllib.request
import zipfile

# texture key (osm_model) -> (ambientCG asset id, units of the game a picture covers, picture size)
MATERIALS = {
    "brick": ("Bricks105", 100.0, 128),
    "plaster": ("Plaster001", 100.0, 128),
    "concrete": ("Concrete034", 100.0, 128),
    "tiles": ("RoofingTiles013A", 60.0, 64),
    "asphalt": ("Asphalt033", 100.0, 64),
    "paving": ("PavingStones150", 50.0, 64),
    "grass": ("Grass004", 80.0, 64),
}


def path(folder, key):
    asset = MATERIALS[key][0]
    return os.path.join(folder, asset, "%s_1K-JPG_Color.jpg" % asset)


def main(folder):
    for key, (asset, _, _) in sorted(MATERIALS.items()):
        out = path(folder, key)
        if os.path.exists(out):
            continue
        url = "https://ambientcg.com/get?file=%s_1K-JPG.zip" % asset
        req = urllib.request.Request(url, headers={"User-Agent": "cpc-osm-mod/0.1 (personal hobby project)"})
        data = urllib.request.urlopen(req, timeout=300).read()
        member = "%s_1K-JPG_Color.jpg" % asset
        with zipfile.ZipFile(io.BytesIO(data)) as z:
            os.makedirs(os.path.dirname(out), exist_ok=True)
            open(out, "wb").write(z.read(member))
        print("fetched %s (%d bytes of zip)" % (asset, len(data)))


if __name__ == "__main__":
    main(sys.argv[1])
