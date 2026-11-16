#!/usr/bin/env python3
"""Arcade's collision file (COLDC1.BIN) with the city replaced by a glTF Pac-Man maze (Sketchfab "Pac-Man Level (Namco) (NES)" by Alfking49, CC BY
4.0): a flat floor, the maze's blocks as walls and as boxes (sides and tops), a round wall round the maze, and the places a customer may wait.

    pacman_coldc.py <original COLDC1.BIN> <1ST_READ.BIN> <scene.gltf> <menu name> <out COLDC1.BIN> <out osm.h> <customers> <least trip in metres>
                    <corridor width in metres> <wall height in metres> <pacman_ghost.glb>

Everything comes from the file: the walls are its blocks' outlines (pacman_gltf.py), the colours the middle colour of its own textures (the
walls' tops, the floor), the cab starts on a pellet in the corridor below its ghost house, the customers wait where its food lies. The model is scaled so that the
corridors are the given width (the file has no unit: the corridor width is measured as the typical gap between blocks). The file layout, the
grids and the header are osm_coldc.py's (osm.h keeps the OSM_ names so the layer is the osm layer's)."""
import math
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
OSM_TOOLS = HERE
sys.path.insert(0, HERE)
sys.path.insert(1, OSM_TOOLS)
sys.path.insert(2, os.path.join(HERE, "..", "..", "tools"))
import osm_coldc as oc                                  # noqa: E402  the file's grids, ring_walls, constants
import osm_data                                         # noqa: E402  triangulate, wall_cost, UNITS
import osm_model                                        # noqa: E402  build, flat, TILE
import pacman_gltf as pg                                # noqa: E402
import course_kit as kit                                 # noqa: E402
import PIL.Image                                        # noqa: E402

UNITS = osm_data.UNITS
FLOOR_Y = 0.5                                           # the floor over the collision ground like the OSM roads
FOOT_Y = -1.0                                           # the walls go below the floor
MARGIN_CORRIDORS = 2.0                                  # the round wall this many corridors beyond the maze's farthest corner
GHOST_SCALE = 8.0                                       # a ghost's size: game units to the file's one (its body is 1.7 high: 13 units, a person's height)
TORSO_H = 10.6                                          # the torso bone's height over the ground in a standing person (docs/engine.md: pelvis at 10.58)
GHOST_DROP = 5.0                                        # how far below the torso bone a ghost's bottom is: a seated passenger's torso is near the seat, so 10.6 (a
                                                        # standing person's, the ground) sank the ghost into it; 5 floats a standing ghost half a metre up
GHOST_BODIES = (("red_Material.002", 700), ("pink_Material.004", 700), ("blue_Material.003", 700), ("yellow_Material.001", 700))
FAR_TRIS = 120                                          # a far ghost (the flat model beyond PsgPeraDistance): the body alone, no eyes (they show only from very close)
GHOST_EYES = (("red_Material.005", 500, "w"), ("red_Material.006", 192, "p"))        # the red ghost's, for every ghost: they are the same in the four
MAN_LIFT_OF = 0.3                                       # he floats this fraction of his size higher up the torso's spine than the bone
MAN_SCALE = 5.0                                         # Pac-Man's size: his sphere is 1 file unit in radius, this many game units (1 was a football on the seat)
SIDE_LIT, SIDE_DARK = 0.80, 0.62                        # a side of a block is its top's colour times this, by which way it faces


def seg_dist(p, a, b):
    dx, dz = b[0] - a[0], b[1] - a[1]
    ln2 = dx * dx + dz * dz
    t = 0.0 if ln2 < 1e-12 else max(0.0, min(1.0, ((p[0] - a[0]) * dx + (p[1] - a[1]) * dz) / ln2))
    return math.hypot(p[0] - (a[0] + t * dx), p[1] - (a[1] + t * dz))


def clear_run(p, sign, rs):
    """How far a cab at p can go along x (sign +1 or -1) before a wall block's outline: the nearest crossing of any block's edge, in the file's units."""
    best = float("inf")
    for r in rs:
        for a, b in zip(r, r[1:] + r[:1]):
            if (a[1] - p[1]) * (b[1] - p[1]) > 0 or a[1] == b[1]:
                continue
            x = a[0] + (b[0] - a[0]) * (p[1] - a[1]) / (b[1] - a[1])
            d = (x - p[0]) * sign
            if d > 1e-9 and d < best:
                best = d
    return best


def corridor_width(rs):
    """The typical gap between blocks, in the file's units: for each block the nearest another block's outline is to any of its corners, the
    middle one of those."""
    best = []
    for n, r in enumerate(rs):
        d = min(seg_dist(p, a, b) for o, q in enumerate(rs) if o != n for a, b in zip(q, q[1:] + q[:1]) for p in r)
        best.append(d)
    best.sort()
    return best[len(best) // 2]


def middle_colour(path):
    """The middle (median) colour of a picture, each channel on its own, as (r, g, b)."""
    im = PIL.Image.open(path).convert("RGB")
    px = list(im.getdata())
    return tuple(sorted(c[k] for c in px)[len(px) // 2] for k in range(3))


def clusters(points, step):
    """Centres of the groups of points that lie within `step` of a neighbour (the food: a pellet is a cluster of vertices)."""
    cell = {}
    for p in points:
        cell.setdefault((int(p[0] // step), int(p[2] // step)), []).append(p)
    seen, out = set(), []
    for c in cell:
        if c in seen:
            continue
        stack, grp = [c], []
        seen.add(c)
        while stack:
            k = stack.pop()
            grp += cell[k]
            for dx in (-1, 0, 1):
                for dz in (-1, 0, 1):
                    n = (k[0] + dx, k[1] + dz)
                    if n in cell and n not in seen:
                        seen.add(n)
                        stack.append(n)
        out.append((sum(p[0] for p in grp) / len(grp), sum(p[2] for p in grp) / len(grp)))
    return out


def main(orig, exe, gltf, name, out, header, fares, min_trip_m, corridor_m, wall_m, man_glb):
    fares, min_trip_m, corridor_m, wall_m = int(fares), float(min_trip_m), float(corridor_m), float(wall_m)
    if not name or len(name) > 31 or any(not 32 <= ord(ch) < 127 for ch in name):
        raise SystemExit("[ERROR] the menu name must be 1 to 31 printable ASCII characters (the menu's text field is 32 bytes): %r" % name)
    words = struct.unpack("<8I", name.encode("ascii").ljust(32, b"\0"))
    b = bytearray(open(orig, "rb").read())
    x = open(exe, "rb").read()
    g = struct.unpack("<4i3if", x[oc.GROUND_HDR - oc.EXE:oc.GROUND_HDR - oc.EXE + 32])
    w = struct.unpack("<4i3if", x[oc.WALL_HDR - oc.EXE:oc.WALL_HDR - oc.EXE + 32])
    gx, gz, cols, rows, count, size = g[0], g[1], g[4], g[5], g[6], g[7]
    assert count == cols * rows
    ga, wa = oc.GROUND_ARRAY - oc.LOAD, oc.WALL_ARRAY - oc.LOAD
    origin = ((gx + cols / 2.0) * size, (gz + rows / 2.0) * size)

    pos, idx = pg.maze_mesh(gltf, "maze")
    rs = pg.rings(pos, idx)
    if not rs:
        raise SystemExit("[ERROR] no wall outlines found in %s" % gltf)
    gap = corridor_width(rs)
    k = corridor_m * UNITS / gap                        # game units a unit of the file
    allpts = [p for r in rs for p in r]
    cx = (min(p[0] for p in allpts) + max(p[0] for p in allpts)) / 2.0
    cz = (min(p[1] for p in allpts) + max(p[1] for p in allpts)) / 2.0
    to_game = lambda p: (origin[0] + (p[0] - cx) * k, origin[1] + (p[1] - cz) * k)
    blocks = [[to_game(p) for p in r] for r in rs]
    far = max(math.hypot(p[0] - origin[0], p[1] - origin[1]) for r in blocks for p in r)
    R = far + MARGIN_CORRIDORS * corridor_m * UNITS
    if R > min(cols, rows) * size / 2.0 - 2 * size:
        raise SystemExit("[ERROR] a %g m corridor makes the maze %g m from its middle to its corner and the ground grid holds %g m"
                         % (corridor_m, R / UNITS, (min(cols, rows) * size / 2.0 - 2 * size) / UNITS))
    # the side tunnel: the outer frame is the two biggest blocks, one above the other, the gap between them the tunnel. A cab that leaves it by a
    # side comes in by the other (osm.h's OSM_WRAP_*: the layer moves it by the maze's width): the edges are half a corridor past the outermost walls
    frame = sorted(range(len(rs)), key=lambda n: -pg.area(rs[n]))[:2]
    lo, hi = sorted(frame, key=lambda n: sum(p[1] for p in rs[n]) / len(rs[n]))
    tz = (max(p[1] for p in rs[lo]) + min(p[1] for p in rs[hi])) / 2.0
    wrap_half = (min(p[1] for p in rs[hi]) - max(p[1] for p in rs[lo])) / 2.0 * k
    wrap_z = to_game((cx, tz))[1]
    wrap_x0 = min(p[0] for r in blocks for p in r) - corridor_m * UNITS / 2.0
    wrap_x1 = max(p[0] for r in blocks for p in r) + corridor_m * UNITS / 2.0
    top = wall_m * UNITS

    here = os.path.dirname(os.path.abspath(gltf))
    cap = middle_colour(os.path.join(here, "textures", "zeimport_poly5_XSIPOLYCLS.maze_baseColor.png"))
    floor = middle_colour(os.path.join(here, "textures", "zeimport_poly_XSIPOLYCLS.board_baseColor.png"))
    osm_model.FLAT.update({"pc_cap": cap, "pc_floor": floor,
                           "pc_lit": tuple(int(c * SIDE_LIT) for c in cap), "pc_dark": tuple(int(c * SIDE_DARK) for c in cap)})

    out_f = {}
    for ring in blocks:
        n = len(ring)
        for i in range(n):
            p, q = ring[i], ring[(i + 1) % n]
            dx, dz = q[0] - p[0], q[1] - p[1]
            ln = math.hypot(dx, dz)
            if ln < 1e-6:
                continue
            nx, nz = dz / ln, -dx / ln
            key = "pc_lit" if nx * -0.6 + nz * 0.8 > 0 else "pc_dark"
            a = (p[0], top, p[1], nx, 0.0, nz, 0.0, 0.0)
            bb = (q[0], top, q[1], nx, 0.0, nz, 1.0, 0.0)
            c = (q[0], FOOT_Y, q[1], nx, 0.0, nz, 1.0, 1.0)
            e = (p[0], FOOT_Y, p[1], nx, 0.0, nz, 0.0, 1.0)
            out_f.setdefault(key, []).extend([(a, c, bb), (a, e, c)])
        for i, j, kk in osm_data.triangulate(ring):
            out_f.setdefault("pc_cap", []).append(tuple(osm_model.flat(ring[m][0], top, ring[m][1], 1.0, "pc_cap") for m in (i, kk, j)))
    x0, x1, z0, z1 = origin[0] - R, origin[0] + R, origin[1] - R, origin[1] + R
    T = osm_model.TILE
    for ti in range(int(math.floor(x0 / T)), int(math.floor(x1 / T)) + 1):
        for tj in range(int(math.floor(z0 / T)), int(math.floor(z1 / T)) + 1):
            c = [(ti * T, tj * T), ((ti + 1) * T, tj * T), ((ti + 1) * T, (tj + 1) * T), (ti * T, (tj + 1) * T)]
            v = [osm_model.flat(px, FLOOR_Y, pz, 1.0, "pc_floor") for px, pz in c]
            out_f.setdefault("pc_floor", []).extend([(v[0], v[2], v[1]), (v[0], v[3], v[2])])
    # Pac-Man (the driver's part, for the layer: a tile of its own that the map never draws): the file's sphere and eyes, centred on the sphere and put
    # in the torso bone's axes (docs/engine.md: torso +x up, +y toward the back, +z the person's right). In the file the mouth is +x, up +y and
    # the right +z, so (x, y, z) -> (y, -x, z): the mouth along the chest's front (-y), his top up the spine (+x). MAN_SCALE game units to the
    # file's one, and lifted along the spine by MAN_LIFT_OF of his size
    for part, skip, key in (("Sphere", 0, "pc_man"), ("Material.008", 0, "pc_eye"), ("Material.008", 1, "pc_eye")):
        wp, wn, idx, col, org, _ = pg.glb_mesh(man_glb, part, skip)
        osm_model.FLAT[key] = col if key == "pc_man" else (0, 0, 0)
        if part == "Sphere":
            centre = org
        lift = MAN_LIFT_OF * 2.0 * MAN_SCALE
        vs = [((p[1] - centre[1]) * MAN_SCALE + lift, -(p[0] - centre[0]) * MAN_SCALE, (p[2] - centre[2]) * MAN_SCALE, n[1], -n[0], n[2], 0.0, 0.0)
              for p, n in zip(wp, wn)]
        out_f.setdefault(key, []).extend((vs[idx[i]], vs[idx[i + 1]], vs[idx[i + 2]]) for i in range(0, len(idx), 3))
    # the ghosts (the passengers' parts, four colours: one tile each, like Pac-Man's): the body cut to about 700 triangles by pg.decimate (a
    # ghost is 8,704 in the file), the eyes' balls and pupils those of the red one, in the torso bone's axes as Pac-Man (the file's ghost faces +z, its
    # top is +y, its right -x: (x, y, z) -> (y, -z, -x)), centred on its body and hung GHOST_DROP below the torso bone
    groups = [("pc_man", "pc_eye")]
    red = None
    eyes = []
    for part, target, tag in GHOST_EYES:
        wp, wn, idx, col, _, _ = pg.glb_mesh(man_glb, part)
        eyes.append((tag, col) + pg.decimate(wp, wn, idx, target))
    for gi, (part, target) in enumerate(GHOST_BODIES):
        wp, wn, idx, col, _, _ = pg.glb_mesh(man_glb, part)
        bp, bn, bi = pg.decimate(wp, wn, idx, target)
        c = ((min(p[0] for p in bp) + max(p[0] for p in bp)) / 2.0, (min(p[2] for p in bp) + max(p[2] for p in bp)) / 2.0, min(p[1] for p in bp))
        if red is None:
            red = c
        gv = lambda p, n, c: ((p[1] - c[2]) * GHOST_SCALE - GHOST_DROP, -(p[2] - c[1]) * GHOST_SCALE, -(p[0] - c[0]) * GHOST_SCALE, n[1], -n[2], -n[0], 0.0, 0.0)
        keys = ["pc_g%d" % gi]
        osm_model.FLAT[keys[0]] = col
        out_f[keys[0]] = [tuple(gv(bp[bi[i + j]], bn[bi[i + j]], c) for j in range(3)) for i in range(0, len(bi), 3)]
        for tag, ecol, ep, en, ei in eyes:
            key = "pc_%s%d" % (tag, gi)
            osm_model.FLAT[key] = ecol
            out_f[key] = [tuple(gv(ep[ei[i + j]], en[ei[i + j]], red) for j in range(3)) for i in range(0, len(ei), 3)]
            keys.append(key)
        groups.append(tuple(keys))
    # the far ghosts (groups 5 to 8, one a colour): psgFrameState0 draws a customer beyond PsgPeraDistance with the model of the table at 0x0C13F410 (character
    # - 23), a flat person, put at the customer's feet and turned toward the camera: here the body alone, upright (x right, y up, z front, as the file),
    # centred, its bottom where the near ghost's is (TORSO_H over the ground, minus GHOST_DROP)
    for gi, (part, _) in enumerate(GHOST_BODIES):
        wp, wn, idx, col, _, _ = pg.glb_mesh(man_glb, part)
        bp, bn, bi = pg.decimate(wp, wn, idx, FAR_TRIS)
        c = ((min(p[0] for p in bp) + max(p[0] for p in bp)) / 2.0, (min(p[2] for p in bp) + max(p[2] for p in bp)) / 2.0, min(p[1] for p in bp))
        key = "pc_f%d" % gi
        osm_model.FLAT[key] = col
        fv = lambda p, n: ((p[0] - c[0]) * GHOST_SCALE, (p[1] - c[2]) * GHOST_SCALE + TORSO_H - GHOST_DROP, (p[2] - c[1]) * GHOST_SCALE, n[0], n[1], n[2], 0.0, 0.0)
        out_f[key] = [tuple(fv(bp[bi[i + j]], bn[bi[i + j]]) for j in range(3)) for i in range(0, len(bi), 3)]
        groups.append((key,))
    fcs = [(kk, ts) for kk, ts in out_f.items() if ts]

    # the customers wait where the food lies (a pellet is in a corridor by construction); the cab starts on the pellet nearest the middle of the corridor
    # just below the ghost house (the file's ghosts stand in it: the lowest point of their meshes), facing -x (the file's characters look along their own -x)
    food, _ = pg.maze_mesh(gltf, "food")
    # the food mesh has items that are no pellet in a corridor (two lie inside wall blocks, in the middle column): only what is clear of every block
    # by a third of a corridor is a place for a customer or the start
    free = [c for c in clusters(food, 1.2)
            if not any(pg.inside(c, r) for r in rs) and min(seg_dist(c, a, b) for r in rs for a, b in zip(r, r[1:] + r[:1])) > gap / 3.0]
    pel = [to_game(c) for c in free]
    # the start: in one of the widest places, a junction's middle (the pellets with the most room to the nearest wall: a corridor's own pellets have
    # half the corridor, a crossing's the diagonal), with at least three corridors of free run along x on one side, the one nearest the corridor
    # below the ghost house (the file's ghosts stand in it: the lowest point of their meshes); the cab faces the longer side
    house = max(v[2] for part in ("ghost1", "ghost2") for v in pg.maze_mesh(gltf, part)[0])
    aim = (cx, house + 2.0 * gap)
    room = {c: min(seg_dist(c, a, b) for r in rs for a, b in zip(r, r[1:] + r[:1])) for c in free}
    wide = [c for c in free if room[c] >= 0.9 * max(room.values())]
    runs = {c: (clear_run(c, -1, rs), clear_run(c, 1, rs)) for c in wide}
    ok = [c for c in wide if max(runs[c]) >= 3.0 * gap]
    best = min(ok or wide, key=lambda c: math.hypot(c[0] - aim[0], c[1] - aim[1]))
    print("start: %.1f m to the nearest wall (the corridors' middle is %.1f m), runs %.1f m and %.1f m along x" % (
        room[best] * k / UNITS, gap / 2.0 * k / UNITS, runs[best][0] * k / UNITS, runs[best][1] * k / UNITS))
    start = to_game(best)
    yaw = 0xC000 if runs[best][0] >= runs[best][1] else 0x4000   # -x or +x (the cab moves along (sin yaw, cos yaw))
    spots = [(px, 0.0, pz) for px, pz in pel if math.hypot(px - start[0], pz - start[1]) > oc.START_CLEAR]
    if len(spots) > oc.MAX_SPOTS:
        spots = [spots[(i * len(spots)) // oc.MAX_SPOTS] for i in range(oc.MAX_SPOTS)]

    sq = [(x0, 0.0, z0), (x1, 0.0, z0), (x1, 0.0, z1), (x0, 0.0, z1)]
    tris = [(sq[0], sq[2], sq[1]), (sq[0], sq[3], sq[2])]
    cells = {}
    for t in range(len(tris)):
        for cz_ in range(int(math.floor(z0 / size)), int(math.floor(z1 / size)) + 1):
            for cx_ in range(int(math.floor(x0 / size)), int(math.floor(x1 / size)) + 1):
                cells.setdefault((cx_, cz_), []).append(t)
    need = len(tris) * 76 + sum(12 + 4 * len(m) for m in cells.values())
    al = lambda n: (n + oc.ALIGN - 1) & ~(oc.ALIGN - 1)
    model_at = al(0x100 + need)
    blob, keys, mtris, nrec, ntiles, geom = osm_model.build(fcs, oc.LOAD + model_at, spots=spots, solo=groups)
    zeros_at = oc.LOAD + model_at + len(blob)           # 16 zero words after the model: character 0's grips (the layer points the grip table's entry 0 here: the
    blob += bytes(64)                                   # game's own array is shared with the pedestrians, and puts its hands in parts 2 and 5 while driving)
    camwalls_at = oc.LOAD + model_at + len(blob)         # the maze's wall segments for the camera (osmCamClip): a count, then x0 z0 x1 z1 each
    segs = [(p[0], p[1], q[0], q[1]) for ring in blocks for p, q in zip(ring, ring[1:] + ring[:1])]
    blob += struct.pack("<I", len(segs)) + b"".join(struct.pack("<4f", *sg) for sg in segs)
    blob += bytes(-len(blob) % 32)
    walls = []
    for ring in blocks:
        for p, q in zip(ring, ring[1:] + ring[:1]):
            dx, dz = q[0] - p[0], q[1] - p[1]
            ln = math.hypot(dx, dz)
            if ln < 1e-6:
                continue
            a_, b_ = dz / ln, -dx / ln
            walls.append(((a_, b_, p[0], p[1], -(a_ * p[0] + b_ * p[1]), top, -10.0, ln), (p[0], p[1], q[0], q[1])))
    nblock = len(walls)
    walls += oc.ring_walls(origin, R)
    wcost, wcells = osm_data.wall_cost(walls, w[7])
    walls_at = al(model_at + len(blob))
    if walls_at + wcost + 4096 > ga:
        raise SystemExit("[ERROR] needs %d bytes and the free part of COLDC1.BIN holds %d" % (walls_at + wcost, ga))
    for i in range(0, ga + 4 * count, 4):
        b[i:i + 4] = b"\0\0\0\0"
    for i in range(w[6]):
        struct.pack_into("<I", b, wa + 4 * i, 0)
    at = 0x100
    where = []
    for tri in tris:
        b[at:at + 76] = kit.surface(tri)
        where.append(oc.LOAD + at)
        at += 76
    for (cx_, cz_), m in sorted(cells.items()):
        struct.pack_into("<2f2H", b, at, cx_ * size, cz_ * size, len(m), len(m))
        for kk, t in enumerate(m):
            struct.pack_into("<I", b, at + 12 + 4 * kk, where[t])
        struct.pack_into("<I", b, ga + 4 * ((cz_ - gz) * cols + (cx_ - gx)), oc.LOAD + at)
        at += 12 + 4 * len(m)
    assert at <= model_at, "the surfaces run into the model"
    b[model_at:model_at + len(blob)] = blob
    used = kit.put_walls(b, w, walls, wa, walls_at)
    assert walls_at + used <= ga, "the walls run into the cell array"
    open(out, "wb").write(b)
    min_trip = min(min_trip_m * UNITS, 0.3 * 2 * R)
    open(header, "w").write("/* written by tools/pacman_coldc.py */\n#define OSM_MODEL 0x%08X\n#define OSM_START_X %.1ff\n#define OSM_START_Y 0.0f\n#define OSM_START_Z %.1ff\n"
                            "#define OSM_START_YAW 0x%04X\n#define OSM_PLAY_X0 %.1ff\n#define OSM_PLAY_X1 %.1ff\n#define OSM_PLAY_Z0 %.1ff\n#define OSM_PLAY_Z1 %.1ff\n"
                            "#define OSM_FARES %d\n#define OSM_MIN_TRIP %.1ff\n#define OSM_STOP_R %.1ff\n"
                            "#define OSM_ZEROS 0x%08X\n#define OSM_CAMWALLS 0x%08X\n#define OSM_WALL_TOP %.1ff\n"
                            "#define OSM_WRAP_X0 %.1ff\n#define OSM_WRAP_X1 %.1ff\n#define OSM_WRAP_Z %.1ff\n#define OSM_WRAP_HALF %.1ff\n"
                            % (oc.LOAD + model_at, start[0], start[1], yaw, x0, x1, z0, z1, max(1, min(246, fares)), min_trip, oc.STOP_R,
                               zeros_at, camwalls_at, top, wrap_x0, wrap_x1, wrap_z, wrap_half)
                            + "".join("#define OSM_NAME_%d 0x%08X\n" % (i, v) for i, v in enumerate(words)))
    print("file corridor %.2f units -> %g m: one unit is %.1f game units; maze %.0f x %.0f m, round wall at %.0f m" % (
        gap, corridor_m, k, (max(p[0] for p in allpts) - min(p[0] for p in allpts)) * k / UNITS,
        (max(p[1] for p in allpts) - min(p[1] for p in allpts)) * k / UNITS, R / UNITS))
    print("colours: tops %s, floor %s" % (cap, floor))
    print("COLDC1.BIN: %d blocks, %d walls and the round wall (%d bytes in %d cells), %d long" % (len(blocks), nblock, used, wcells, len(b)))
    print("model at 0x%08X: %d triangles, %d records in %d tiles, %d textures, %d bytes" % (oc.LOAD + model_at, mtris, nrec, ntiles, len(keys), len(blob)))
    print("free part: %d of %d bytes used" % (walls_at + used, ga))
    print("tunnel: z %.0f +- %.0f, a cab past x %.0f comes in at %.0f and the other way" % (wrap_z, wrap_half, wrap_x0, wrap_x1))
    print("start (%.0f, 0, %.0f) heading 0x%04X; %d places for customers" % (start[0], start[1], yaw, len(spots)))


if __name__ == "__main__":
    main(*sys.argv[1:12])
