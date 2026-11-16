#!/usr/bin/env python3
"""Arcade's collision file (COLDC1.BIN) with the city replaced by an Extreme Tux Racer course: the ground is the course's surface,
the only walls are the original's limits of the player's area (edge_walls).

    coldc.py <original COLDC1.BIN> <1ST_READ.BIN> <course folder> <out COLDC1.BIN> <out tux.h> <copies> <customers a km> <least trip in metres>

tux.h tells the mod where the terrain model is and where the cab starts (the course's own start, facing down the slope).

The file is read at 0x0CB40000 and holds absolute pointers (decomp docs/engine.md, "The ground and the swept move"; InitCollision in
src/game_p.c): Arcade (CourseMode 0) uses the ground grid whose cell-pointer array is at 0x0CD5A3D8 and the wall grid's at 0x0CDF6150,
their headers in the executable (0x0C08F6C8 ground, 0x0C08F6E8 walls), so the grids keep their size and the file keeps its length (it
is written over the old one in place). A cell is x, z (floats), the number of surfaces twice (halfwords at +8 and +10, the second is the
ground ones GetCollision2D reads), then the surface pointers from +12. A surface is the plane (a, b, c, d: y = -(a x + c z + d) / b),
a radius that the first corner must be within, four corners and a kind and a shape: here a triangle is a quad whose last two
corners are the same, and GetCollision2DHeight's edge tests (src/collide.c) pass for points inside it."""
import math
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(1, os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", "tools"))
import terrain
import course_kit as kit                                 # noqa: E402  surface(), put_walls(): the game's ground and wall records
import tuxmodel
import trees

LOAD = kit.LOAD
EXE = 0x0C010000
GROUND_ARRAY, WALL_ARRAY = 0x0CD5A3D8, 0x0CDF6150
GROUND_HDR, WALL_HDR = 0x0C08F6C8, 0x0C08F6E8
ALIGN = 0x1000                                          # the file's free part holds, in turn, the surfaces (from 0x100), the terrain model (tuxmodel.py)
                                                        # and the edge walls, each on a page; the cell array at GROUND_ARRAY ends it
STEP = 4                                                # course pixels a triangle's side (4 m); tuxmodel.py draws the same ones


def edge_walls(course):
    """The player's limits as the original's (etr physics.cpp SetTuxPosition): x kept within (width - play_width) / 2 of each edge, no
    going up past the start line, and the run ends at play_length, where a wall stops the cab. The walls are inward-facing, as
    CheckColliWallSegment reads them (src/collide.c): floats a, b (the normal, so a*x + b*z + d is the distance, positive inside), the
    end point x, z, d, the top, the bottom and the length. The wall runs from its end point along (-b, a), so for a wall from p to q the
    normal is (dz, -dx) / length and the end point p. Returns [(floats, (x0, z0, x1, z1))]. course.limits() gives the left and the right
    edge as polylines down the slope (a chain's edges may slant where one part's play width differs from the next)."""
    left, right, z_end = course.limits()
    top, bottom = 1e6, -1e6
    out = []

    def wall(p, q):
        dx, dz = q[0] - p[0], q[1] - p[1]
        ln = math.hypot(dx, dz)
        a, b = dz / ln, -dx / ln
        out.append(((a, b, p[0], p[1], -(a * p[0] + b * p[1]), top, bottom, ln), (p[0], p[1], q[0], q[1])))
    for k in range(len(left) - 1):
        wall(left[k], left[k + 1])
    for k in range(len(right) - 1, 0, -1):
        wall(right[k], right[k - 1])
    wall((right[0][0], left[0][1]), (left[0][0], left[0][1]))               # the start line
    wall((left[-1][0], z_end), (right[-1][0], z_end))                       # the finish
    return out


def put_walls(b, w, course, wa, walls_at, poles=()):
    """The course's edge walls and the trees' poles (x, z, radius, top, bottom) written from walls_at with their cells (course_kit.put_walls).
    Returns the bytes used."""
    return kit.put_walls(b, w, edge_walls(course), wa, walls_at, poles)


def main(orig, exe, folder, out, header, copies, per_km, min_trip_m):
    copies, per_km, min_trip_m = int(copies), float(per_km), float(min_trip_m)
    if copies < 1 or per_km < 0:
        raise SystemExit("[ERROR] TUX_COPIES must be 1 or more and TUX_FARES_PER_KM 0 or more (got %s, %s)" % (copies, per_km))
    b = bytearray(open(orig, "rb").read())
    x = open(exe, "rb").read()
    g = struct.unpack("<4i3if", x[GROUND_HDR - EXE:GROUND_HDR - EXE + 32])
    w = struct.unpack("<4i3if", x[WALL_HDR - EXE:WALL_HDR - EXE + 32])
    gx, gz, cols, rows, count, size = g[0], g[1], g[4], g[5], g[6], g[7]
    assert count == cols * rows
    ga, wa = GROUND_ARRAY - LOAD, WALL_ARRAY - LOAD
    folder = folder.rstrip("/")
    course = terrain.Chain([folder], copies)
    data_dir = os.path.dirname(os.path.dirname(os.path.dirname(folder)))
    tris = course.triangles(STEP)
    members = {}
    for t, tri in enumerate(tris):
        xs, zs = [p[0] for p in tri], [p[2] for p in tri]
        for cz in range(int(math.floor(min(zs) / size)), int(math.floor(max(zs) / size)) + 1):
            for cx in range(int(math.floor(min(xs) / size)), int(math.floor(max(xs) / size)) + 1):
                if not (gx <= cx < gx + cols and gz <= cz < gz + rows):
                    raise SystemExit("[ERROR] the course leaves the ground grid at cell %d,%d" % (cx, cz))
                members.setdefault((cx, cz), []).append(t)
    need = len(tris) * 76 + sum(12 + 4 * len(m) for m in members.values())
    al = lambda n: (n + ALIGN - 1) & ~(ALIGN - 1)
    model_at = al(0x100 + need)
    tl = trees.instances(course, folder)
    tp = trees.kind_textures(data_dir)
    blob, names, _, records = tuxmodel.build(course, data_dir, LOAD + model_at, tl, tp)
    # a trunk stops a cab (a shrub does not): a pole a third of the crown's radius (and at least 6 units; the game adds the cab's), from under
    # the ground to the treetop
    poles = [(x, z, max(6.0, 0.3 * rad), y + h, y - 30.0) for (x, y, z, rad, h, kind) in tl if trees.KINDS[kind] in trees.POLE_KINDS]
    walls_at = al(model_at + len(blob))
    walls_need = 32 * (len(course.limits()[0]) + len(course.limits()[1]) + 2) + 4096 * 8 + 64 * len(poles)
    if walls_at + walls_need > ga:
        raise SystemExit("[ERROR] TUX_COPIES=%d needs %d bytes (surfaces %d, terrain model %d) and the free part of COLDC1.BIN holds %d: "
                         "about %d copies at most" % (copies, walls_at, need, len(blob), ga, int(copies * (ga - walls_need) / float(walls_at))))
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
    for (cx, cz), m in sorted(members.items()):
        struct.pack_into("<2f2H", b, at, cx * size, cz * size, len(m), len(m))
        for k, t in enumerate(m):
            struct.pack_into("<I", b, at + 12 + 4 * k, where[t])
        struct.pack_into("<I", b, ga + 4 * ((cz - gz) * cols + (cx - gx)), LOAD + at)
        at += 12 + 4 * len(m)
    assert at <= model_at, "the surfaces run into the terrain model"
    b[model_at:model_at + len(blob)] = blob
    used = put_walls(b, w, course, wa, walls_at, poles)
    assert walls_at + used <= ga, "the walls run into the cell array"
    open(out, "wb").write(b)
    u = terrain.UNITS
    sx, sz = course.start_x * u, course.oz + course.start_z * u                       # the course's own start (course.dim startx, starty)
    row = course.z(1) - course.z(0)
    sy = course.y(min(int(round(sx / course.x(1))), course.cols - 1), min(int(round((sz - course.oz) / row)), course.rows - 1))
    r0 = min(max(int(round((sz - course.oz) / row)), 2), course.rows - 3)
    c0 = min(int(round(sx / course.x(1))), course.cols - 1)
    slope = math.atan2(-(course.y(c0, r0 + 2) - course.y(c0, r0 - 2)), course.z(r0 + 2) - course.z(r0 - 2))        # nose down is positive (the settled cab's pitch)
    pitch = int(round(slope / (2 * math.pi) * 65536)) & 0xFFFF
    left, right, z_end = course.limits()
    px0 = min(p[0] for p in left)                                                   # the player's area (edge_walls): where the stops may stand
    px1 = max(p[0] for p in right)
    km = (z_end - course.oz) / u / 1000.0
    fares = max(1, min(246, int(round(per_km * km))))                                # the request table holds 246
    open(header, "w").write("/* written by tools/coldc.py */\n#define TUX_MODEL 0x%08X\n#define TUX_START_X %.1ff\n#define TUX_START_Y %.1ff\n#define TUX_START_Z %.1ff\n"
                            "#define TUX_PLAY_X0 %.1ff\n#define TUX_PLAY_X1 %.1ff\n#define TUX_PLAY_Z0 %.1ff\n#define TUX_PLAY_Z1 %.1ff\n#define TUX_FARES %d\n#define TUX_START_PITCH 0x%04X\n#define TUX_MIN_TRIP %.1ff\n"
                            % (LOAD + model_at, sx, sy, sz, px0, px1, course.oz, z_end, fares, pitch, min(min_trip_m * u, 0.4 * (z_end - course.oz))))
    print("course: %d copies, %.2f km from z %.0f to %.0f; %d customers (%g a km); start pitch 0x%04X (%.1f degrees)" % (copies, km, course.oz, z_end, fares, per_km, pitch, math.degrees(slope)))
    print("edge walls and %d tree poles at 0x%08X: %d bytes (%d trees drawn)" % (len(poles), LOAD + walls_at, used, len(tl)))
    print("terrain model at 0x%08X: %d records, %d bytes, textures %s" % (LOAD + model_at, records, len(blob), ", ".join(names)))
    print("COLDC1.BIN: %d triangles in %d cells of %g, edge walls only, %d of %d bytes used, %d long" % (len(tris), len(members), size, walls_at + used, ga, len(b)))


if __name__ == "__main__":
    main(*sys.argv[1:9])
