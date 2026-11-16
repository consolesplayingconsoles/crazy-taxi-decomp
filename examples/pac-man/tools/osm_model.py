#!/usr/bin/env python3
"""OpenStreetMap data as Crazy Taxi models, in the blob format tuxmodel.py and doom_model.py write: the buildings' walls and roofs, the
roads, the ground, the water and the parks.

    osm_model.py <overpass.json> <centre lat> <centre lon> <address the blob will have> <out blob>

The blob is doom_model's layout ('TUXR', the tile list, a model a 1024-unit tile, the texture table, the textures); a tile holds a record
for every texture of the faces in it (polygon list 0, ISP 0x83000000, TSP 0x2008245B, specular -1). The textures are one flat colour a kind
of face until open-licensed pictures are chosen (a flat colour is a 64 x 64 VQ picture too, 3 KB), so the byte counts include them at their
real size."""
import math
import os
import struct
import sys

import PIL.Image

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(1, os.path.join(HERE, "..", "..", "tools"))
import osm_data                                         # noqa: E402
import osm_textures                                     # noqa: E402
import osm_vq                                           # noqa: E402
import course_kit as kit                                 # noqa: E402  vertex, stripify, vq_image, the record's constants

TILE = 1024.0                                           # Crazy Taxi units a tile
TEXTURES = os.path.join(HERE, "..", "maps", "textures")        # osm_textures.py's pictures
# Heights of the flat surfaces, each at least 1.5 units from the next: where two overlap (a pedestrian way across a road: 4,240 m2 in the London
# data) the upper one wins whole instead of the two flickering over the depth buffer. The road is on the collision ground (0.5 over it, the cab's
# wheels would sink into more); the rest lie below it, as a pavement does.
HEIGHT = {"asphalt": 0.5, "paving": -1.0, "grass": -0.5, "water": -0.5}
GROUND_Y = -2.5                                         # the ground tile under all of them
WALL_FOOT = -3.0                                        # the walls go down to below it (no slit under them)
# The painted look (OSM_LOOK=painted): no pictures, one flat colour a kind of surface, as osmbuildings.org draws it. The colours are the medians
# of that site's own screenshots (park, water, major road, ground; the building and the minor street are the pale clusters of the same shots).
# Five surfaces a metre apart (the one above wins whole): the ground, then the parks, the water, the minor streets, the major roads (0.5 over the
# collision ground like the road before). A building's walls go down to below the ground.
# Not yet seen in the game: the spacing and the colours under the game's own lighting are the first thing to look at.
PAINT = {"pa_ground": (243, 233, 223), "pa_park": (208, 220, 172), "pa_water": (147, 203, 206), "pa_street": (251, 250, 245),
         "pa_major": (210, 150, 146), "pa_building": (255, 255, 255),   # white: at 4 bits (n * 17) the old (246, 242, 234) came out (238, 238, 238), one level from the ground's (238, 238, 221)
         "pa_wall_lit": (221, 214, 204), "pa_wall_dark": (187, 179, 170)}      # the roof is the lightest; a wall is a step darker, the side away from the light darkest, so a building reads as a volume
HEIGHT_P = {"pa_ground": -6.5, "pa_park": -5.5, "pa_water": -4.5, "pa_street": -3.5, "pa_major": 0.5}   # the major road 4 units (40 cm) over the streets: at 1 unit the two fought over the depth buffer
WALL_FOOT_P = -7.5
MAJOR = ("motorway", "trunk", "primary", "secondary")    # drawn in the major road's colour
FLAT = dict({"water": (62, 102, 160)}, **PAINT)         # what has no picture: a flat colour
MIP = tuple(osm_textures.MATERIALS)                     # every picture gets its mipmaps: a plain one repeated over a far wall or road shows moire rings and stray texels


def world(key):
    return osm_textures.MATERIALS[key][1] if key in osm_textures.MATERIALS else 100.0


def size(key):
    return osm_textures.MATERIALS[key][2] if key in osm_textures.MATERIALS else 64


def flat(x, y, z, ny, key):
    return (x, y, z, 0.0, ny, 0.0, x / world(key), -z / world(key))


def faces(d, extent=None, painted=False):
    """[(texture key, [triangle ...])]: a triangle is three vertex tuples (x, y, z, nx, ny, nz, u, v). painted: the keys are PAINT's."""
    out = {}
    foot = WALL_FOOT_P if painted else WALL_FOOT
    for ring, h, wall, roof in d["buildings"]:
        if painted:
            wall = roof = "pa_building"
        n = len(ring)
        for i in range(n):
            p, q = ring[i], ring[(i + 1) % n]
            dx, dz = q[0] - p[0], q[1] - p[1]
            ln = math.hypot(dx, dz)
            if ln < 1e-6:
                continue
            nx, nz = dz / ln, -dx / ln
            if painted:
                wall = "pa_wall_lit" if nx * -0.6 + nz * 0.8 > 0 else "pa_wall_dark"
            u1, v1 = ln / world(wall), (h - foot) / world(wall)
            a = (p[0], h, p[1], nx, 0.0, nz, 0.0, 0.0)
            b = (q[0], h, q[1], nx, 0.0, nz, u1, 0.0)
            c = (q[0], foot, q[1], nx, 0.0, nz, u1, v1)
            e = (p[0], foot, p[1], nx, 0.0, nz, 0.0, v1)
            out.setdefault(wall, []).extend([(a, c, b), (a, e, c)])
        for i, j, k in osm_data.triangulate(ring):
            out.setdefault(roof, []).append(tuple(flat(ring[m][0], h, ring[m][1], 1.0, roof) for m in (i, k, j)))
    if painted:
        areas = (("pa_water", d["water"], HEIGHT_P["pa_water"]), ("pa_park", d["parks"], HEIGHT_P["pa_park"]))
    else:
        areas = (("water", d["water"], HEIGHT["water"]), ("grass", d["parks"], HEIGHT["grass"]))
    for key, rings, y in areas:
        for ring in rings:
            for i, j, k in osm_data.triangulate(ring):
                out.setdefault(key, []).append(tuple(flat(ring[m][0], y, ring[m][1], 1.0, key if key != "water" else "paving") for m in (i, k, j)))
    for pts, width, highway, kind in d["roads"]:
        if painted:
            kind = "pa_major" if highway in MAJOR else "pa_street"
        for n, (p, q) in enumerate(zip(pts, pts[1:])):
            dx, dz = q[0] - p[0], q[1] - p[1]
            ln = math.hypot(dx, dz)
            if ln < 1e-6:
                continue
            hx, hz = -dz / ln * width / 2.0, dx / ln * width / 2.0
            c = [(p[0] + hx, p[1] + hz), (q[0] + hx, q[1] + hz), (q[0] - hx, q[1] - hz), (p[0] - hx, p[1] - hz)]
            v = [flat(x, (HEIGHT_P if painted else HEIGHT)[kind], z, 1.0, kind) for x, z in c]
            out.setdefault(kind, []).extend([(v[0], v[2], v[1]), (v[0], v[3], v[2])])
        # at a bend the two quads' end edges leave a wedge open on the outside of the turn (1,313 of the 1,612 joints in the London data bend by more
        # than half a degree): a triangle fills exactly that wedge (no overshoot past the road's edge, which gave the outside of a curve teeth)
        for a, q, b in zip(pts, pts[1:], pts[2:]):
            ax, az, bx, bz = q[0] - a[0], q[1] - a[1], b[0] - q[0], b[1] - q[1]
            la, lb = math.hypot(ax, az), math.hypot(bx, bz)
            if la < 1e-6 or lb < 1e-6:
                continue
            ax, az, bx, bz = ax / la, az / la, bx / lb, bz / lb
            turn = ax * bz - az * bx
            if abs(turn) < 1e-3:
                continue
            side = -1.0 if turn > 0 else 1.0                    # the outside of the turn
            c = [q, (q[0] + side * -az * width / 2.0, q[1] + side * ax * width / 2.0), (q[0] + side * -bz * width / 2.0, q[1] + side * bx * width / 2.0)]
            if (c[1][0] - c[0][0]) * (c[2][1] - c[0][1]) - (c[1][1] - c[0][1]) * (c[2][0] - c[0][0]) < 0:
                c[1], c[2] = c[2], c[1]
            y = (HEIGHT_P if painted else HEIGHT)[kind]
            v = [flat(x, y, z, 1.0, kind) for x, z in c]
            out.setdefault(kind, []).append((v[0], v[1], v[2]))
    xs = [v[0] for _, ts in out.items() for t in ts for v in t]
    zs = [v[2] for _, ts in out.items() for t in ts for v in t]
    x0, x1 = (extent[0], extent[1]) if extent else (min(xs), max(xs))
    z0, z1 = (extent[2], extent[3]) if extent else (min(zs), max(zs))
    for ti in range(int(math.floor(x0 / TILE)), int(math.floor(x1 / TILE)) + 1):          # the ground: a square a tile
        for tj in range(int(math.floor(z0 / TILE)), int(math.floor(z1 / TILE)) + 1):
            c = [(ti * TILE, tj * TILE), ((ti + 1) * TILE, tj * TILE), ((ti + 1) * TILE, (tj + 1) * TILE), (ti * TILE, (tj + 1) * TILE)]
            ground = "pa_ground" if painted else "paving"
            v = [flat(x, HEIGHT_P[ground] if painted else GROUND_Y, z, 1.0, ground) for x, z in c]
            out.setdefault(ground, []).extend([(v[0], v[2], v[1]), (v[0], v[3], v[2])])
    return [(k, ts) for k, ts in out.items() if ts]


def bounds(pts):
    lo = [min(p[k] for p in pts) for k in range(3)]
    hi = [max(p[k] for p in pts) for k in range(3)]
    c = [(lo[k] + hi[k]) / 2 for k in range(3)]
    return c, max(math.sqrt(sum((p[k] - c[k]) ** 2 for k in range(3))) for p in pts) * 1.02


SOLO = 10 ** 6                                          # the tiles of the faces build() is given as `solo` (one a group: tile (SOLO, SOLO + group))
SOLO_AT = 1.0e7                                         # and where the tile list says they are, SOLO_AT + the group's number: no camera is near, osmDraw never puts them


def build(fcs, base, first_tex=kit.FIRST_TEX, spots=(), solo=()):
    """The blob for these faces, written to be read at `base`; returns (blob, keys, triangles, records, tiles, bytes of geometry). `solo` is a list
    of groups of keys (a key alone is a group): the faces of a group are one tile of their own, listed at SOLO_AT + the group's number: a model a layer
    takes by that (a character's part) and the map never draws."""
    groups = [(g,) if isinstance(g, str) else tuple(g) for g in solo]
    group_of = {k: gi for gi, g in enumerate(groups) for k in g}
    keys = sorted(k for k, _ in fcs)
    index = {k: i for i, k in enumerate(keys)}
    tiles = {}
    for key, tris in fcs:
        for t in tris:
            cx = sum(v[0] for v in t) / 3.0
            cz = sum(v[2] for v in t) / 3.0
            tiles.setdefault((SOLO, SOLO + group_of[key]) if key in group_of else (int(math.floor(cx / TILE)), int(math.floor(cz / TILE))), {}).setdefault(key, []).append(t)
    models = []
    nrec = 0
    for (ti, tj), recs in sorted(tiles.items()):
        body_all = b""
        pts_all = []
        for key, tris in sorted(recs.items()):
            body = b""
            pts = []
            for st in kit.stripify([tuple(t) for t in tris]):
                body += struct.pack("<2I", 0x50, len(st))
                for v in st:
                    body += kit.vertex(*v)
                    pts.append(v[:3])
            c, r = bounds(pts)
            rec = struct.pack("<4I4fii", 0x800000AC, 0x83000000, 0x2008245B, 0x4C000000, c[0], c[1], c[2], r, first_tex + index[key], -1)
            rec += struct.pack("<f4f4f", 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0) + struct.pack("<I", len(body))
            body_all += rec + body
            pts_all += pts
            nrec += 1
        c, r = bounds(pts_all)
        models.append((struct.pack("<2I4f", 1, 1, c[0], c[1], c[2], r) + body_all + b"\0\0\0\0",
                       SOLO_AT + (tj - SOLO) if ti == SOLO else c[0], SOLO_AT + (tj - SOLO) if ti == SOLO else c[2], len(recs)))
    al = lambda n: (n + 31) & ~31
    tiles_at = 64
    at = al(tiles_at + 16 * len(models))
    offs = []
    for model, _, _, _ in models:
        offs.append(at)
        at = al(at + len(model))
    table_at = at
    spots_at = al(table_at + 16 * len(keys))
    tex_at = al(spots_at + 12 * len(spots))
    geometry = tex_at
    out = bytearray(tex_at)
    for n, (sx, sy, sz) in enumerate(spots):                            # the places a customer or a stop may be (osm_coldc.road_spots)
        struct.pack_into("<3f", out, spots_at + 12 * n, sx, sy, sz)
    for i, ((model, cx, cz, n), o) in enumerate(zip(models, offs)):
        out[o:o + len(model)] = model
        struct.pack_into("<I2fI", out, tiles_at + 16 * i, o, cx, cz, n)
    for i, key in enumerate(keys):
        sz = size(key)
        if key in osm_textures.MATERIALS:
            img = PIL.Image.open(osm_textures.path(TEXTURES, key))
            data = osm_vq.vq(img, sz, key in MIP)
        else:
            data = osm_vq.solid(FLAT[key], sz)
        struct.pack_into("<4I", out, table_at + 16 * i, (sz << 16) | sz, ((4 if key in MIP else 3) << 8) | 2, base + len(out), 0)
        out += data
        out += bytes(al(len(out)) - len(out))
    struct.pack_into("<4sIIIIIIII", out, 0, b"TUXR", len(keys), tiles_at, table_at, first_tex, len(models), spots_at, len(spots), len(models))
    return bytes(out), keys, sum(len(t) for _, t in fcs), nrec, len(models), geometry


if __name__ == "__main__":
    d = osm_data.load(sys.argv[1], float(sys.argv[2]), float(sys.argv[3]))
    fcs = faces(d)
    blob, keys, tris, nrec, ntiles, geom = build(fcs, int(sys.argv[4], 0))
    open(sys.argv[5], "wb").write(blob)
    print("%d triangles, %d records in %d tiles, %d textures: %d bytes (%d geometry, %d textures)" % (
        tris, nrec, ntiles, len(keys), len(blob), geom, len(blob) - geom))
    only = [f for f in fcs if f[0] in ("brick", "plaster", "concrete", "tiles")]       # the buildings' (the roads and the ground use asphalt and paving)
    b2 = build(only, 0)
    n = len(d["buildings"])
    print("buildings alone: %d triangles, %d bytes of geometry: %.0f bytes a building, %.0f a triangle" % (
        b2[2], b2[5], (b2[5] - 64) / float(n), (b2[5] - 64) / float(b2[2])))
