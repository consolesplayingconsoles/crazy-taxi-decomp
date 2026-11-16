#!/usr/bin/env python3
"""Arcade's collision file (COLDC1.BIN) with the city replaced by a place from OpenStreetMap: a flat ground, the buildings' footprints as
walls, a round wall at the radius, the map's model (osm_model.py) and the places a customer may wait (the drivable roads the cab can reach).

    osm_coldc.py <original COLDC1.BIN> <1ST_READ.BIN> <overpass.json> <lat> <lon> <radius m> <menu name> <out COLDC1.BIN> <out osm.h> <customers> <least trip in metres>
                 <footprints simplified to within m (0: as mapped)> <painted | textured>

The file's layout and the grids are coldc.py's (Tux Racer): the surfaces from 0x100, the model, then the walls, each on a page, the ground
grid's cell array ending the free part. The map's centre is put on the middle of the ground grid. osm.h tells the layer where the model is, where
the cab starts (on the road nearest the centre, facing along it), the play square and how many customers wait."""
import math
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(1, os.path.join(HERE, "..", "..", "tools"))
import osm_data                                         # noqa: E402
import osm_model                                        # noqa: E402
import course_kit as kit                                 # noqa: E402  surface(), put_walls()

LOAD = kit.LOAD
EXE = 0x0C010000
GROUND_ARRAY, WALL_ARRAY = 0x0CD5A3D8, 0x0CDF6150
GROUND_HDR, WALL_HDR = 0x0C08F6C8, 0x0C08F6E8
ALIGN = 0x1000
RING_SIDES = 64                                         # the round wall at the radius
SPOT_STEP = 60.0                                        # units between customers' places along a road
START_CLEAR = 300.0                                     # no customer this close to the start
STOP_R = 70.0
MAX_SPOTS = 400                                         # what the model's table keeps (doom_coldc.reachable_spots's want)
NO_CUSTOMERS = ("pedestrian", "service", "living_street")


def ring_walls(origin, radius):
    """The play area's limit: a polygon of RING_SIDES walls round the origin point, walked clockwise so each wall's normal (positive inside) points in."""
    out = []
    pts = [(origin[0] + radius * math.cos(-2 * math.pi * i / RING_SIDES), origin[1] + radius * math.sin(-2 * math.pi * i / RING_SIDES)) for i in range(RING_SIDES)]
    for p, q in zip(pts, pts[1:] + pts[:1]):
        dx, dz = q[0] - p[0], q[1] - p[1]
        ln = math.hypot(dx, dz)
        a, b = dz / ln, -dx / ln
        out.append(((a, b, p[0], p[1], -(a * p[0] + b * p[1]), 1e6, -1e6, ln), (p[0], p[1], q[0], q[1])))
    return out


def road_graph(roads):
    """Connected pieces of the drivable roads: {point: piece id}, found by union-find over the segments (a point is a corner shared by name)."""
    parent = {}

    def find(a):
        while parent.setdefault(a, a) != a:
            parent[a] = parent[parent[a]]
            a = parent[a]
        return a

    key = lambda p: (round(p[0], 1), round(p[1], 1))
    for pts, _, _, _ in roads:
        for p, q in zip(pts, pts[1:]):
            parent[find(key(p))] = find(key(q))
    return {k: find(k) for k in list(parent)}, key


def road_spots(roads, origin):
    """(start x, z, yaw, [(x, 0, z) ...]): the start on the drivable road nearest the origin, in the biggest connected piece, facing along it, and
    the places along that piece's roads, every SPOT_STEP, away from the start, spread to at most MAX_SPOTS."""
    piece, key = road_graph(roads)
    size = {}
    for k, r in piece.items():
        size[r] = size.get(r, 0) + 1
    main = max(size, key=lambda r: size[r])
    segs = [(p, q, kind) for pts, _, kind, _ in roads for p, q in zip(pts, pts[1:]) if piece[key(p)] == main]
    best = min(segs, key=lambda s: math.hypot((s[0][0] + s[1][0]) / 2 - origin[0], (s[0][1] + s[1][1]) / 2 - origin[1]))
    p, q = best[0], best[1]
    start = ((p[0] + q[0]) / 2.0, (p[1] + q[1]) / 2.0)
    yaw = int(round(math.atan2(q[0] - p[0], q[1] - p[1]) / (2 * math.pi) * 65536)) & 0xFFFF
    spots = []
    for p, q, kind in segs:
        if kind in NO_CUSTOMERS:
            continue
        ln = math.hypot(q[0] - p[0], q[1] - p[1])
        for k in range(max(1, int(ln // SPOT_STEP))):
            t = (k + 0.5) / max(1, int(ln // SPOT_STEP))
            x, z = p[0] + (q[0] - p[0]) * t, p[1] + (q[1] - p[1]) * t
            if math.hypot(x - start[0], z - start[1]) > START_CLEAR:
                spots.append((x, 0.0, z))
    if len(spots) > MAX_SPOTS:
        spots = [spots[(k * len(spots)) // MAX_SPOTS] for k in range(MAX_SPOTS)]
    return start, yaw, spots


def main(orig, exe, data, lat, lon, radius_m, name, out, header, fares, min_trip_m, simplify_m, look):
    lat, lon, radius_m, fares, min_trip_m, simplify_m = float(lat), float(lon), float(radius_m), int(fares), float(min_trip_m), float(simplify_m)
    if look not in ("painted", "textured"):
        raise SystemExit("[ERROR] OSM_LOOK must be painted or textured: %r" % look)
    if not name or len(name) > 31 or any(not 32 <= ord(ch) < 127 for ch in name):
        raise SystemExit("[ERROR] OSM_NAME must be 1 to 31 printable ASCII characters (the menu's text field is 32 bytes): %r" % name)
    words = struct.unpack("<8I", name.encode("ascii").ljust(32, b"\0"))
    b = bytearray(open(orig, "rb").read())
    x = open(exe, "rb").read()
    g = struct.unpack("<4i3if", x[GROUND_HDR - EXE:GROUND_HDR - EXE + 32])
    w = struct.unpack("<4i3if", x[WALL_HDR - EXE:WALL_HDR - EXE + 32])
    gx, gz, cols, rows, count, size = g[0], g[1], g[4], g[5], g[6], g[7]
    assert count == cols * rows
    ga, wa = GROUND_ARRAY - LOAD, WALL_ARRAY - LOAD
    R = radius_m * osm_data.UNITS
    origin = ((gx + cols / 2.0) * size, (gz + rows / 2.0) * size)
    if R > min(cols, rows) * size / 2.0 - 2 * size:
        raise SystemExit("[ERROR] OSM_RADIUS_M=%g does not fit the ground grid (%d x %d cells of %g): %g m at most"
                         % (radius_m, cols, rows, size, (min(cols, rows) * size / 2.0 - 2 * size) / osm_data.UNITS))
    d = osm_data.load(data, lat, lon, origin, R, simplify_m * osm_data.UNITS)
    if not d["roads"]:
        raise SystemExit("[ERROR] no drivable road within %g m of %g, %g in %s" % (radius_m, lat, lon, data))
    # the ground: one square of two triangles under the play square, in every cell it touches
    x0, x1, z0, z1 = origin[0] - R, origin[0] + R, origin[1] - R, origin[1] + R
    sq = [(x0, 0.0, z0), (x1, 0.0, z0), (x1, 0.0, z1), (x0, 0.0, z1)]
    tris = [(sq[0], sq[2], sq[1]), (sq[0], sq[3], sq[2])]
    cells = {}
    for t in range(len(tris)):
        for cz in range(int(math.floor(z0 / size)), int(math.floor(z1 / size)) + 1):
            for cx in range(int(math.floor(x0 / size)), int(math.floor(x1 / size)) + 1):
                cells.setdefault((cx, cz), []).append(t)
    need = len(tris) * 76 + sum(12 + 4 * len(m) for m in cells.values())
    al = lambda n: (n + ALIGN - 1) & ~(ALIGN - 1)
    model_at = al(0x100 + need)
    start, yaw, spots = road_spots(d["roads"], origin)
    fcs = osm_model.faces(d, (x0, x1, z0, z1), look == "painted")
    blob, keys, mtris, nrec, ntiles, geom = osm_model.build(fcs, LOAD + model_at, spots=spots)
    walls = osm_data.building_walls(d) + ring_walls(origin, R)
    wcost, wcells = osm_data.wall_cost(walls, w[7])
    walls_at = al(model_at + len(blob))
    if walls_at + wcost + 4096 > ga:
        raise SystemExit("[ERROR] %g m needs %d bytes (surfaces %d, model %d, walls about %d) and the free part of COLDC1.BIN holds %d"
                         % (radius_m, walls_at + wcost, need, len(blob), wcost, ga))
    for i in range(0, ga + 4 * count, 4):               # nothing of the city is left to point at
        b[i:i + 4] = b"\0\0\0\0"
    for i in range(w[6]):
        struct.pack_into("<I", b, wa + 4 * i, 0)
    at = 0x100
    where = []
    for tri in tris:
        b[at:at + 76] = kit.surface(tri)
        where.append(LOAD + at)
        at += 76
    for (cx, cz), m in sorted(cells.items()):
        struct.pack_into("<2f2H", b, at, cx * size, cz * size, len(m), len(m))
        for k, t in enumerate(m):
            struct.pack_into("<I", b, at + 12 + 4 * k, where[t])
        struct.pack_into("<I", b, ga + 4 * ((cz - gz) * cols + (cx - gx)), LOAD + at)
        at += 12 + 4 * len(m)
    assert at <= model_at, "the surfaces run into the model"
    b[model_at:model_at + len(blob)] = blob
    used = kit.put_walls(b, w, walls, wa, walls_at)
    assert walls_at + used <= ga, "the walls run into the cell array"
    open(out, "wb").write(b)
    min_trip = min(min_trip_m * osm_data.UNITS, 0.3 * 2 * R)
    open(header, "w").write("/* written by tools/osm_coldc.py */\n#define OSM_MODEL 0x%08X\n#define OSM_START_X %.1ff\n#define OSM_START_Y 0.0f\n#define OSM_START_Z %.1ff\n"
                            "#define OSM_START_YAW 0x%04X\n#define OSM_PLAY_X0 %.1ff\n#define OSM_PLAY_X1 %.1ff\n#define OSM_PLAY_Z0 %.1ff\n#define OSM_PLAY_Z1 %.1ff\n"
                            "#define OSM_FARES %d\n#define OSM_MIN_TRIP %.1ff\n#define OSM_STOP_R %.1ff\n"
                            % (LOAD + model_at, start[0], start[1], yaw, x0, x1, z0, z1, max(1, min(246, fares)), min_trip, STOP_R)
                            + "".join("#define OSM_NAME_%d 0x%08X\n" % (i, v) for i, v in enumerate(words)))
    print("COLDC1.BIN: %d ground triangles in %d cells of %g, %d building walls and the round wall (%d bytes in %d cells), %d long"
          % (len(tris), len(cells), size, len(walls) - RING_SIDES, used, wcells, len(b)))
    print("model at 0x%08X: %d triangles, %d records in %d tiles, %d textures, %d bytes" % (LOAD + model_at, mtris, nrec, ntiles, len(keys), len(blob)))
    print("free part: %d of %d bytes used (surfaces %d, model %d, walls %d)" % (walls_at + used, ga, at, len(blob), used))
    print("start (%.0f, 0, %.0f) heading 0x%04X; %d places for customers" % (start[0], start[1], yaw, len(spots)))


if __name__ == "__main__":
    main(*sys.argv[1:14])
