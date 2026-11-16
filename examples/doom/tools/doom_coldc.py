#!/usr/bin/env python3
"""Original's collision file (COLDC2.BIN) with the city replaced by a Doom map: the floors are the ground, the solid lines and the steps
a cab cannot climb are the walls.

    doom_coldc.py <original COLDC2.BIN> <1ST_READ.BIN> <doom1.wad> <map> <out COLDC2.BIN> <out doom.h> <customers> <least trip in metres>

doom.h tells the mod where the cab starts (Doom's player 1 start, facing as it does). The file keeps its length and its structure as
coldc.py's (Arcade's) does, with Original's constants: InitCollision (src/game_p.c) takes the ground grid's header from the executable at
0x0C08F9B0 and its cell-pointer array at 0x0CDC1EC8, InitColliWall(1) the wall grid's header at 0x0C08F9D0 and its array at 0x0CE36B90.
Doom's x stays x (times SCALE), its y (north) becomes -z, its heights become y: the map lies inside the ground grid (x -8700 to 12450, z
-7950 to 11100) where it is, with no offset. A floor is a sector's convex piece (doom_wad.py) cut into triangles from its first corner;
a triangle's surface is course_kit.surface's (a quad whose last two corners are one, the winding the game's own edge tests accept). The map's model (doom_model.py) goes at MODEL_AT
and doom.h says where it is."""
import math
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(1, os.path.join(HERE, "..", "..", "tools"))
import course_kit as kit                                 # noqa: E402  surface(), put_walls(): the game's ground and wall records
import doom_wad                                         # noqa: E402
import doom_model                                       # noqa: E402

LOAD = kit.LOAD
EXE = 0x0C010000
GROUND_ARRAY, WALL_ARRAY = 0x0CDC1EC8, 0x0CE36B90
GROUND_HDR, WALL_HDR = 0x0C08F9B0, 0x0C08F9D0
MODEL_AT = 0x100000                                     # the map's model (later), in the file's free part before the ground array
WALLS_AT = 0x2A0000                                     # the walls: free from the end of the ground array (0x293694) to the wall array (0x2F6B90)
S = doom_wad.SCALE
SY = doom_wad.SCALE_Y
STEP = doom_wad.PLAYER_STEP
CAMERA_ROOM = 75.0                                      # clear floor behind the start for the chase camera (60 behind, its sweep's radius 5, a margin)
START_CLEAR = 200.0                                     # and no customer waits within this of the start (as Snake Way's: one there was picked up as the run began)


def ct(x, y):
    return (S * x, -S * y)


def floor_triangles(pieces, sectors):
    """[((x, y, z) x 3)] in Crazy Taxi's units: every convex piece as a fan from its first corner."""
    out = []
    for sec, poly in pieces:
        h = SY * sectors[sec][0]
        pts = [(ct(px, py)[0], h, ct(px, py)[1]) for px, py in poly]
        for k in range(1, len(pts) - 1):
            a, b, c = pts[0], pts[k], pts[k + 1]
            area = abs((b[0] - a[0]) * (c[2] - a[2]) - (c[0] - a[0]) * (b[2] - a[2])) / 2
            if area > 0.5:
                out.append((a, b, c))
    return out


def ramp_triangles(m):
    """[((x, y, z) x 3)]: each ramp (doom_wad.Map.ramps) as two triangles, the top edge on the riser at the upper floor, the bottom edge `run`
    into the lower sector at the lower one. They lie over the lower floor, the ground check takes the highest surface."""
    out = []
    for p, q, lo, hi, sec, run, (nx, ny) in m.ramps():
        a = (ct(p[0], p[1])[0], SY * hi, ct(p[0], p[1])[1])
        b = (ct(q[0], q[1])[0], SY * hi, ct(q[0], q[1])[1])
        c2 = ct(q[0] + nx * run, q[1] + ny * run)
        d2 = ct(p[0] + nx * run, p[1] + ny * run)
        cc, dd = (c2[0], SY * lo, c2[1]), (d2[0], SY * lo, d2[1])
        for tri in ((a, b, cc), (a, cc, dd)):
            area = abs((tri[1][0] - tri[0][0]) * (tri[2][2] - tri[0][2]) - (tri[2][0] - tri[0][0]) * (tri[1][2] - tri[0][2])) / 2
            if area > 0.5:
                out.append(tri)
    return out


def reachable_spots(m, start, step=20.0, clearance=14.0, spot_clearance=85.0, climb=20.0, want=400):
    """[(x, y, z)] in Crazy Taxi's units: places on the floor the cab can reach from `start` (x, z) and a customer or a stop can sit on. A
    grid of `step` units over the map; a cell is open when it is on a floor and at least `clearance` from every solid wall (a stop is 70
    across and the cab adds its own size); open cells are joined by steps of at most `climb` in height (the ramps are 1 in 1.8 at the
    steepest), so a wall, a pit or a sealed room cuts a place off; the cells joined to the start (where the cab can pass: `clearance` from
    the walls, E1M1's corridors are 128 across) and at least `spot_clearance` from them (a stop is 70 across) are the answer, thinned to
    about `want` evenly. Doom's floors under a point are the convex pieces of doom_wad.floor_pieces."""
    import numpy as np
    pieces = [(sec, [ct(px, py) for px, py in poly]) for sec, poly in m.floor_pieces()]
    boxes = [(min(p[0] for p in poly), max(p[0] for p in poly), min(p[1] for p in poly), max(p[1] for p in poly)) for _, poly in pieces]
    heights = [SY * m.sector[sec][0] for sec, _ in pieces]
    xs = [ct(v[0], v[1])[0] for v in m.vertex]
    zs = [ct(v[0], v[1])[1] for v in m.vertex]
    x0, x1, z0, z1 = min(xs), max(xs), min(zs), max(zs)
    nx, nz = int((x1 - x0) // step) + 1, int((z1 - z0) // step) + 1
    segs = np.array([[ct(w[0], w[1])[0], ct(w[0], w[1])[1], ct(w[2], w[3])[0], ct(w[2], w[3])[1]] for w in m.walls() if w[8] == "solid"], dtype=np.float64)
    h = np.full((nx, nz), np.nan)
    for i in range(nx):
        for j in range(nz):
            x, z = x0 + i * step, z0 + j * step
            best = None
            for (bx0, bx1, bz0, bz1), (sec, poly), hh in zip(boxes, pieces, heights):
                if bx0 <= x <= bx1 and bz0 <= z <= bz1 and coldc_inside(poly, x, z):
                    best = hh if best is None else max(best, hh)
            if best is not None:
                h[i, j] = best
    gx = x0 + np.arange(nx) * step
    gz = z0 + np.arange(nz) * step
    px, pz = np.meshgrid(gx, gz, indexing="ij")
    dist = np.full((nx, nz), 1e18)
    ax, az, bx_, bz_ = segs[:, 0], segs[:, 1], segs[:, 2], segs[:, 3]
    dx, dz = bx_ - ax, bz_ - az
    ln2 = np.maximum(dx * dx + dz * dz, 1e-9)
    for k in range(len(segs)):
        t = np.clip(((px - ax[k]) * dx[k] + (pz - az[k]) * dz[k]) / ln2[k], 0.0, 1.0)
        d = np.hypot(px - (ax[k] + t * dx[k]), pz - (az[k] + t * dz[k]))
        dist = np.minimum(dist, d)
    open_ = ~np.isnan(h) & (dist >= clearance)
    si, sj = int(round((start[0] - x0) / step)), int(round((start[1] - z0) / step))
    cand = [(abs(i - si) + abs(j - sj), i, j) for i in range(max(0, si - 6), min(nx, si + 7)) for j in range(max(0, sj - 6), min(nz, sj + 7)) if open_[i, j]]
    if not cand:
        raise SystemExit("[ERROR] no open floor near Doom's start")
    _, si, sj = min(cand)
    seen = {(si, sj)}
    todo = [(si, sj)]
    while todo:
        i, j = todo.pop()
        for ni, nj in ((i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)):
            if 0 <= ni < nx and 0 <= nj < nz and (ni, nj) not in seen and open_[ni, nj] and abs(h[ni, nj] - h[i, j]) <= climb:
                seen.add((ni, nj))
                todo.append((ni, nj))
    cells = sorted(c for c in seen if dist[c] >= spot_clearance)
    stride = max(1, len(cells) // want)
    return [(float(gx[i]), float(h[i, j]), float(gz[j])) for i, j in cells[::stride]], len(seen), len(cells)


def wall_surfaces(m):
    """[(76-byte record, (x0, z0, x1, z1))]: every solid wall as the city's own walls are in the surface grid (kind 6, shape 4: corners top
    and bottom at one end, bottom and top at the other, a horizontal normal, the radius from the first corner), facing both ways. The cab's
    body meets the wall grid (solid_walls), but the camera's and the wheels' sweeps (GetCollision, FindCollisionHit) only test the surface
    grid's cells, where the city's buildings are faces like these past the ground (a cell's +8 count, the ground's at +10): with none, the
    camera went through every wall."""
    risers = set()                                       # a step's face (a floor up to the next): its top is a floor the cab drives off, and
    for v1, v2, flags, special, tag, rs, ls in m.line:   # a wheel going over that edge met this face and was thrown up (bounce 1 on kind 6)
        if rs < 0 or ls < 0:
            continue
        a, b = m.vertex[v1], m.vertex[v2]
        for sd, other in ((rs, ls), (ls, rs)):
            sec, o = m.sector[m.side[sd][5]], m.sector[m.side[other][5]]
            p, q = (a, b) if sd == rs else (b, a)
            if o[0] > sec[0]:
                risers.add((p[0], p[1], q[0], q[1], sec[0], o[0]))
    out = []
    for (x1, y1, x2, y2, bottom, top, tex, sec, kind) in m.walls():
        if kind != "solid" or top <= bottom or (x1, y1, x2, y2, bottom, top) in risers:
            continue
        px, pz = ct(x1, y1)
        qx, qz = ct(x2, y2)
        ln = math.hypot(qx - px, qz - pz)
        if ln < 1e-6:
            continue
        yb, yt = SY * bottom, SY * top
        corners = ((px, yt, pz), (px, yb, pz), (qx, yb, qz), (qx, yt, qz))
        radius = max(math.sqrt(sum((c[k] - corners[0][k]) ** 2 for k in range(3))) for c in corners) + 1.0
        for sgn in (1.0, -1.0):
            nx, nz = sgn * (qz - pz) / ln, -sgn * (qx - px) / ln
            d = -(nx * px + nz * pz)
            rec = struct.pack("<5f12f2i", nx, 0.0, nz, d, radius, *[t for c in corners for t in c], 6, 4)
            out.append((rec, (min(px, qx), min(pz, qz), max(px, qx), max(pz, qz))))
    return out


def solid_walls(m):
    """[(floats, (x0, z0, x1, z1))] as coldc.py's edge_walls returns them: the one-sided lines and the steps over Doom's 24 units, each facing
    the side a cab can be on (the right of the line's direction, doom_wad.walls()). In Crazy Taxi's coordinates the right normal of (dx, dy)
    is (dy, dx) / len, and the wall runs from its end point along (-b, a): from the line's second point to its first."""
    out = []
    for (x1, y1, x2, y2, bottom, top, tex, sec, kind) in m.walls():
        if kind != "solid":
            continue
        dx, dy = x2 - x1, y2 - y1
        ln = math.hypot(dx, dy)
        if ln < 1e-6:
            continue
        a, b = dy / ln, dx / ln
        px, pz = ct(x1, y1)
        qx, qz = ct(x2, y2)
        d = -(a * qx + b * qz)
        out.append(((a, b, qx, qz, d, SY * top, SY * bottom - 5.0, ln * S), (px, pz, qx, qz)))
    return out


def main(orig, exe, wad_path, map_name, out, header, fares, min_trip_m):
    fares, min_trip_m = int(fares), float(min_trip_m)
    b = bytearray(open(orig, "rb").read())
    x = open(exe, "rb").read()
    g = struct.unpack("<4i3if", x[GROUND_HDR - EXE:GROUND_HDR - EXE + 32])
    w = struct.unpack("<4i3if", x[WALL_HDR - EXE:WALL_HDR - EXE + 32])
    gx, gz, cols, rows, count, size = g[0], g[1], g[4], g[5], g[6], g[7]
    assert count == cols * rows
    ga, wa = GROUND_ARRAY - LOAD, WALL_ARRAY - LOAD
    m = doom_wad.Map(doom_wad.Wad(wad_path), map_name)
    tris = floor_triangles(m.floor_pieces(), m.sector) + ramp_triangles(m)
    members = {}
    for t, tri in enumerate(tris):
        xs, zs = [p[0] for p in tri], [p[2] for p in tri]
        for cz in range(int(math.floor(min(zs) / size)), int(math.floor(max(zs) / size)) + 1):
            for cx in range(int(math.floor(min(xs) / size)), int(math.floor(max(xs) / size)) + 1):
                if not (gx <= cx < gx + cols and gz <= cz < gz + rows):
                    raise SystemExit("[ERROR] the map leaves the ground grid at cell %d,%d" % (cx, cz))
                members.setdefault((cx, cz), []).append(t)
    walled = {}                                          # the cells' wall faces (wall_surfaces), after their ground
    wsurf = wall_surfaces(m)
    for t, (rec, (x0, z0, x1, z1)) in enumerate(wsurf):
        for cz in range(max(gz, int(math.floor(z0 / size))), min(gz + rows - 1, int(math.floor(z1 / size))) + 1):
            for cx in range(max(gx, int(math.floor(x0 / size))), min(gx + cols - 1, int(math.floor(x1 / size))) + 1):
                walled.setdefault((cx, cz), []).append(t)
    cells = set(members) | set(walled)
    need = (len(tris) + len(wsurf)) * 76 + sum(12 + 4 * (len(members.get(c, ())) + len(walled.get(c, ()))) for c in cells)
    assert 0x100 + need <= MODEL_AT, "the surfaces need %d bytes before the model, %d are free" % (need, MODEL_AT - 0x100)
    for i in range(0, ga + 4 * count, 4):                # nothing of the city is left to point at
        b[i:i + 4] = b"\0\0\0\0"
    for i in range(w[6]):
        struct.pack_into("<I", b, wa + 4 * i, 0)
    at = 0x100
    where = []
    for tri in tris:
        b[at:at + 76] = kit.surface(tri)
        where.append(LOAD + at)
        at += 76
    wwhere = []
    for rec, _ in wsurf:
        b[at:at + 76] = rec
        wwhere.append(LOAD + at)
        at += 76
    for (cx, cz) in sorted(cells):
        v = [where[t] for t in members.get((cx, cz), ())]
        wv = [wwhere[t] for t in walled.get((cx, cz), ())]
        struct.pack_into("<2f2H", b, at, cx * size, cz * size, len(v) + len(wv), len(v))     # +8 every face (the sweeps), +10 the ground (GetCollision2D)
        for k, ptr in enumerate(v + wv):
            struct.pack_into("<I", b, at + 12 + 4 * k, ptr)
        struct.pack_into("<I", b, ga + 4 * ((cz - gz) * cols + (cx - gx)), LOAD + at)
        at += 12 + 4 * (len(v) + len(wv))
    assert at <= MODEL_AT, "the surfaces run into the model"
    p1 = [t for t in m.thing if t[3] == 1][0]
    st = ct(*start_room(m, p1))
    spots, joined, opened = reachable_spots(m, st)
    spots = [q for q in spots if (q[0] - st[0]) ** 2 + (q[2] - st[1]) ** 2 > START_CLEAR ** 2]      # no customer within START_CLEAR of the start
    blob, keys, mtris, nrec, ntiles = doom_model.build(wad_path, map_name, LOAD + MODEL_AT, spots=spots)
    assert MODEL_AT + len(blob) <= WALLS_AT, "the model (%d bytes) runs into the walls" % len(blob)
    b[MODEL_AT:MODEL_AT + len(blob)] = blob
    walls = solid_walls(m)
    used = kit.put_walls(b, w, walls, wa, WALLS_AT)
    assert WALLS_AT + used <= 0x2F0000, "the walls run into the wall array"
    open(out, "wb").write(b)
    p1 = [t for t in m.thing if t[3] == 1][0]
    fx, fy = start_room(m, p1)
    sx, sz = ct(fx, fy)
    sy = SY * next(m.sector[sec][0] for sec, poly in m.floor_pieces() if coldc_inside(poly, fx, fy))
    # the car moves along (sin yaw, cos yaw); Doom's east is +x, its north -z, so a Doom angle t (east 0, north 90) is the yaw 90 degrees + t
    heading = (0x4000 + int(round((p1[2] % 360) * 65536 / 360.0))) & 0xFFFF
    vx = [ct(v[0], v[1])[0] for v in m.vertex]
    vz = [ct(v[0], v[1])[1] for v in m.vertex]
    x0, x1, z0, z1 = min(vx), max(vx), min(vz), max(vz)
    min_trip = min(min_trip_m * 10.0, 0.3 * max(x1 - x0, z1 - z0))
    open(header, "w").write("/* written by tools/doom_coldc.py */\n#define DOOM_MODEL 0x%08X\n#define DOOM_START_X %.1ff\n#define DOOM_START_Y %.1ff\n#define DOOM_START_Z %.1ff\n#define DOOM_START_YAW 0x%04X\n"
                            "#define DOOM_PLAY_X0 %.1ff\n#define DOOM_PLAY_X1 %.1ff\n#define DOOM_PLAY_Z0 %.1ff\n#define DOOM_PLAY_Z1 %.1ff\n#define DOOM_FARES %d\n#define DOOM_MIN_TRIP %.1ff\n#define DOOM_STOP_R 70.0f\n#define DOOM_FLOOR_MIN %.1ff\n"
                            % (LOAD + MODEL_AT, sx, sy, sz, heading, x0, x1, z0, z1, max(1, min(246, fares)), min_trip, SY * min(s[0] for s in m.sector)))
    print("COLDC2.BIN: %d triangles in %d cells of %g, %d walls (%d bytes), %d of %d bytes used before the model, %d long"
          % (len(tris), len(members), size, len(walls), used, at, MODEL_AT, len(b)))
    print("model at 0x%08X: %d triangles, %d records in %d tiles, %d textures, %d bytes" % (LOAD + MODEL_AT, mtris, nrec, ntiles, len(keys), len(blob)))
    print("the cab can reach %d cells from the start, %d of them far enough from the walls for a stop; %d places kept" % (joined, opened, len(spots)))
    print("start: (%.0f, %.0f, %.0f) heading 0x%04X (Doom angle %d)" % (sx, sy, sz, heading, p1[2]))


def start_room(m, p1):
    """Doom's player 1 start, moved forward (its own heading) until CAMERA_ROOM behind it is clear of every solid wall: the chase camera sits
    60 behind the cab and 15 up, and E1M1's start is 32 Doom units from the wall behind it: the run began with the camera in that wall."""
    a = math.radians(p1[2])
    dx, dy = math.cos(a), math.sin(a)
    back = CAMERA_ROOM / S
    segs = [(w[0], w[1], w[2], w[3]) for w in m.walls() if w[8] == "solid"]
    for step in range(0, 400, 4):
        x, y = p1[0] + dx * step, p1[1] + dy * step
        bx, by = x - dx * back, y - dy * back
        if not any(_crosses((x, y), (bx, by), (s[0], s[1]), (s[2], s[3])) for s in segs):
            return x, y
    return p1[0], p1[1]


def _crosses(p, q, a, b):
    def side(o, u, v):
        return (u[0] - o[0]) * (v[1] - o[1]) - (u[1] - o[1]) * (v[0] - o[0])
    return side(p, q, a) * side(p, q, b) < 0 and side(a, b, p) * side(a, b, q) < 0


def coldc_inside(poly, x, y):
    """Is the point inside a convex piece (any winding)?"""
    sgn = 0
    for i in range(len(poly)):
        a, c = poly[i], poly[(i + 1) % len(poly)]
        cr = (c[0] - a[0]) * (y - a[1]) - (c[1] - a[1]) * (x - a[0])
        if abs(cr) < 1e-9:
            continue
        if sgn == 0:
            sgn = 1 if cr > 0 else -1
        elif (cr > 0) != (sgn > 0):
            return False
    return True


if __name__ == "__main__":
    main(*sys.argv[1:9])
