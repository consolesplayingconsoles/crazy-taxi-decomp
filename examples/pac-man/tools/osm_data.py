#!/usr/bin/env python3
"""OpenStreetMap data (an Overpass JSON answer made with `out geom`, osm/maps/) as what the course tools take: buildings, roads, water,
parks and trees in the game's units, centred on a point.

    osm_data.py <overpass.json> <centre lat> <centre lon>

Projection: equirectangular around the centre, x east and z north, 10 units a metre (the game's). A ring is returned without its closing point
and counter-clockwise in (x, z), so a wall from p to q has the ring's inside on its left and its outward normal is (dz, -dx) / length (the same
form coldc.edge_walls gives the game's wall records: course_kit.put_walls)."""
import json
import math
import sys

UNITS = 10.0
M_PER_DEG = 111320.0
LEVEL_M = 3.0                                           # a storey, when a building has levels and no height
DEFAULT_M = 12.0                                        # a building with neither
ROAD_WIDTH = {"motorway": 12, "trunk": 11, "primary": 10, "secondary": 9, "tertiary": 8, "unclassified": 6, "residential": 6,
              "living_street": 5, "service": 4, "pedestrian": 5}
NOT_DRAWN = ("footway", "steps", "path", "cycleway", "corridor", "bridleway", "proposed", "construction")       # too narrow for a cab, left to the ground


def area(ring):
    return 0.5 * sum(p[0] * q[1] - q[0] * p[1] for p, q in zip(ring, ring[1:] + ring[:1]))


def number(text):
    out = ""
    for ch in text.strip():
        if ch.isdigit() or ch == ".":
            out += ch
        else:
            break
    return float(out) if out else None


def height_m(tags):
    h = number(tags["height"]) if "height" in tags else None
    if h is None and "building:levels" in tags:
        n = number(tags["building:levels"])
        h = n * LEVEL_M if n else None
    return h if h else DEFAULT_M


WALL_OF = {"brick": "brick", "bricks": "brick", "plaster": "plaster", "render": "plaster", "stucco": "plaster", "painted": "plaster",
           "concrete": "concrete", "cement_block": "concrete", "stone": "concrete", "glass": "concrete", "metal": "concrete", "steel": "concrete"}
PITCHED = ("gabled", "hipped", "pyramidal", "gambrel", "mansard", "half-hipped", "skillion", "saltbox", "round", "cone", "dome")
PAVED = ("paving_stones", "sett", "cobblestone", "unhewn_cobblestone", "paved", "concrete", "concrete:plates", "paving_stones:30")


def wall_kind(tags):
    """The texture of a building's walls from its material tags; brick when it says nothing (the common London wall)."""
    for key in ("building:material", "building:facade:material", "building:facade"):
        if tags.get(key) in WALL_OF:
            return WALL_OF[tags[key]]
    return "brick"


def roof_kind(tags):
    """tiles for a pitched roof (or a tiled one), else concrete (a flat roof, the commonest kind when nothing is tagged)."""
    if tags.get("roof:material") in ("roof_tiles", "tile", "tiles", "slate"):
        return "tiles"
    return "tiles" if tags.get("roof:shape") in PITCHED else "concrete"


def road_kind(tags):
    """paving for a pedestrian street or a paved surface, else asphalt."""
    if tags.get("highway") == "pedestrian" or tags.get("surface") in PAVED:
        return "paving"
    return "asphalt"


def simplify(ring, tol):
    """The ring without the corners that lie within `tol` units of the line a simpler outline draws (Douglas-Peucker, run on the two halves
    either side of the corner farthest from the first); a ring that would be left with fewer than 3 corners is returned as it was."""
    if tol <= 0 or len(ring) <= 3:
        return ring

    def dist(p, a, b):
        dx, dz = b[0] - a[0], b[1] - a[1]
        ln = math.hypot(dx, dz)
        if ln < 1e-9:
            return math.hypot(p[0] - a[0], p[1] - a[1])
        return abs(dx * (p[1] - a[1]) - dz * (p[0] - a[0])) / ln

    def keep(pts):
        far, at = 0.0, 0
        for i in range(1, len(pts) - 1):
            d = dist(pts[i], pts[0], pts[-1])
            if d > far:
                far, at = d, i
        if far <= tol:
            return [pts[0]]
        return keep(pts[:at + 1]) + keep(pts[at:])

    n = len(ring)
    far = max(range(1, n), key=lambda i: math.hypot(ring[i][0] - ring[0][0], ring[i][1] - ring[0][1]))
    out = keep(ring[:far + 1]) + keep(ring[far:] + ring[:1])
    return out if len(out) >= 3 and area(out) > 0 else ring


def load(path, lat0, lon0, origin=(0.0, 0.0), radius=None, tol=0.0):
    """The centre point lands on `origin` (game units); with a radius (units) only what lies within it is kept (a building by its first
    corner, a road by any point, a tree); a building's footprint is simplified to within `tol` units (simplify). {'buildings': [(ring, height in units, wall texture, roof texture)], 'roads': [(points, width in units, highway, texture)], 'water': [ring], 'parks': [ring], 'trees': [(x, z)]}."""
    kx = M_PER_DEG * math.cos(math.radians(lat0)) * UNITS
    kz = M_PER_DEG * UNITS

    def proj(p):
        return ((p["lon"] - lon0) * kx + origin[0], (p["lat"] - lat0) * kz + origin[1])

    def near(p):
        return radius is None or math.hypot(p[0] - origin[0], p[1] - origin[1]) <= radius

    def ring(el):
        pts = [proj(p) for p in el["geometry"]]
        if len(pts) > 1 and pts[0] == pts[-1]:
            pts = pts[:-1]
        if len(pts) < 3:
            return None
        return pts if area(pts) > 0 else pts[::-1]

    out = {"buildings": [], "roads": [], "water": [], "parks": [], "trees": []}
    for el in json.load(open(path))["elements"]:
        t = el.get("tags", {})
        if el["type"] == "node":
            if t.get("natural") == "tree" and near(proj(el)):
                out["trees"].append(proj(el))
            continue
        if "geometry" not in el:
            continue
        if "building" in t:
            r = ring(el)
            if r and near(r[0]):
                out["buildings"].append((simplify(r, tol), height_m(t) * UNITS, wall_kind(t), roof_kind(t)))
        elif "highway" in t:
            pts = [proj(p) for p in el["geometry"]]
            if t["highway"] not in NOT_DRAWN and len(pts) > 1 and any(near(p) for p in pts):
                out["roads"].append((pts, ROAD_WIDTH.get(t["highway"], 5) * UNITS, t["highway"], road_kind(t)))
        elif t.get("natural") == "water" or t.get("waterway") == "riverbank":
            r = ring(el)
            if r and near(r[0]):
                out["water"].append(r)
        elif t.get("leisure") == "park":
            r = ring(el)
            if r and near(r[0]):
                out["parks"].append(r)
    return out


def triangulate(ring):
    """Ear clipping of a counter-clockwise simple ring: [(i, j, k)] indices; a ring that defeats it (self-touching) is fanned from its first point."""
    idx = list(range(len(ring)))
    tris = []

    def cross(a, b, c):
        return (b[0] - a[0]) * (c[1] - a[1]) - (b[1] - a[1]) * (c[0] - a[0])

    def within(p, a, b, c):
        return cross(a, b, p) >= 0 and cross(b, c, p) >= 0 and cross(c, a, p) >= 0

    guard = 0
    while len(idx) > 3 and guard < 4 * len(ring) * len(ring):
        guard += 1
        for n in range(len(idx)):
            a, b, c = idx[n - 1], idx[n], idx[(n + 1) % len(idx)]
            if cross(ring[a], ring[b], ring[c]) <= 0:
                continue
            if any(within(ring[o], ring[a], ring[b], ring[c]) for o in idx if o not in (a, b, c)):
                continue
            tris.append((a, b, c))
            del idx[n]
            break
        else:
            break
    if len(idx) == 3:
        tris.append(tuple(idx))
    elif len(idx) > 3:
        tris += [(idx[0], idx[k], idx[k + 1]) for k in range(1, len(idx) - 1)]
    return tris


def building_walls(data):
    """[(floats, (x0, z0, x1, z1))] for course_kit.put_walls: one wall a footprint edge, facing out."""
    out = []
    for r, h, _, _ in data["buildings"]:
        for p, q in zip(r, r[1:] + r[:1]):
            dx, dz = q[0] - p[0], q[1] - p[1]
            ln = math.hypot(dx, dz)
            if ln < 1e-6:
                continue
            a, b = dz / ln, -dx / ln
            out.append(((a, b, p[0], p[1], -(a * p[0] + b * p[1]), h, -10.0, ln), (p[0], p[1], q[0], q[1])))
    return out


def wall_cost(walls, cell=100.0):
    """The bytes course_kit.put_walls would use for these walls with cells of `cell` units: 32 a wall record, then for every cell a wall
    is within a cell of, a 4-byte pointer, and 4 bytes of header a cell."""
    cells = {}
    for _, (ax, az, bx, bz) in walls:
        for cz in range(int(math.floor(min(az, bz) / cell)) - 1, int(math.floor(max(az, bz) / cell)) + 2):
            for cx in range(int(math.floor(min(ax, bx) / cell)) - 1, int(math.floor(max(ax, bx) / cell)) + 2):
                cells[(cx, cz)] = cells.get((cx, cz), 0) + 1
    return 32 * len(walls) + sum(4 + 4 * n for n in cells.values()), len(cells)


if __name__ == "__main__":
    d = load(sys.argv[1], float(sys.argv[2]), float(sys.argv[3]))
    w = building_walls(d)
    cost, cells = wall_cost(w)
    print("%d buildings, %d roads (%d segments), %d water, %d parks, %d trees" % (
        len(d["buildings"]), len(d["roads"]), sum(len(r[0]) - 1 for r in d["roads"]), len(d["water"]), len(d["parks"]), len(d["trees"])))
    print("%d building walls: %d bytes in %d cells (cells of 100 assumed)" % (len(w), cost, cells))
