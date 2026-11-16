#!/usr/bin/env python3
"""A Doom map (doom1.wad, E1M1) as geometry for Crazy Taxi's Original mode: the floors, the ceilings and the walls, in Crazy Taxi's units.

    doom_wad.py <doom1.wad> <map, e.g. E1M1> [out.png]     prints what the map holds, draws a plan (floor height in grey) to out.png

The map's lumps are Doom's own (the WAD format: VERTEXES, LINEDEFS, SIDEDEFS, SECTORS, SEGS, SSECTORS, NODES, THINGS). A floor is a sector's
convex pieces: a subsector (a leaf of the BSP) is the cell its ancestors' partition lines leave, cut by the lines of its own segs (each
keeps the side it faces), which is how Doom's editors rebuild them. SCALE turns Doom's units into Crazy Taxi's (10 to the metre; a cab is
about 45 long and the doors are 64 wide, so the map is doubled); the map's y (north) becomes -z, so the plan keeps its orientation."""
import math
import struct
import sys

SCALE_Y = 0.5                                           # and a height unit: a cab is 60 long, 28 across and 11 high, so at one scale for all three the rooms were 9 cabs high, where Doom's player stands in rooms 2 high
SCALE = 0.6                                             # Crazy Taxi units a Doom unit
PLAYER_HEIGHT = 56                                      # Doom's own: a player fits an opening this high (doom_model.py's door test, _upper_kind)
PLAYER_STEP = 24                                        # Doom's own: a player climbs a step of up to 24 units; a rise up to this is made a ramp for the cab
RAMP_RUN = 3.0                                          # a ramp is up to 3 units long for every unit it rises (1 in 3, about 18 degrees)
DRIVE_STEP = 8                                          # a rise up to this (Doom's stair treads) is no wall and no ramp: the cab drives over it, being bigger than a step this low
RAMP_MIN = 1.5                                          # and not steeper than 1 in 1.5 (34 degrees): a riser with less room stays a wall


def _inside(poly, x, y):
    """Is the point inside the convex polygon (any winding)?"""
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


class Wad:
    def __init__(self, path):
        self.d = open(path, "rb").read()
        n, off = struct.unpack_from("<II", self.d, 4)
        self.dir = [(struct.unpack_from("<II", self.d, off + 16 * i), self.d[off + 16 * i + 8:off + 16 * i + 16].rstrip(b"\0").decode("latin-1"))
                    for i in range(n)]

    def lump(self, name, after=None):
        start = 0
        if after:
            start = [k for _, k in self.dir].index(after) + 1
        for (o, s), k in self.dir[start:]:
            if k == name:
                return self.d[o:o + s]
        raise KeyError(name)


def name8(b):
    return b.rstrip(b"\0").decode("latin-1")


class Map:
    def __init__(self, wad, name):
        L = lambda k: wad.lump(k, name)
        self.vertex = [struct.unpack_from("<hh", L("VERTEXES"), 4 * i) for i in range(len(L("VERTEXES")) // 4)]
        self.line = [struct.unpack_from("<7h", L("LINEDEFS"), 14 * i) for i in range(len(L("LINEDEFS")) // 14)]
        sd = L("SIDEDEFS")
        self.side = [(struct.unpack_from("<hh", sd, 30 * i) + tuple(name8(sd[30 * i + 4 + 8 * k:30 * i + 12 + 8 * k]) for k in range(3))
                      + (struct.unpack_from("<H", sd, 30 * i + 28)[0],)) for i in range(len(sd) // 30)]    # (xoff, yoff, upper, lower, middle, sector)
        sc = L("SECTORS")
        self.sector = [(struct.unpack_from("<hh", sc, 26 * i) + (name8(sc[26 * i + 4:26 * i + 12]), name8(sc[26 * i + 12:26 * i + 20]))
                        + struct.unpack_from("<hhh", sc, 26 * i + 20)) for i in range(len(sc) // 26)]      # (floor, ceiling, floor flat, ceiling flat, light, special, tag)
        sg = L("SEGS")
        self.seg = [struct.unpack_from("<6h", sg, 12 * i) for i in range(len(sg) // 12)]                  # (v1, v2, angle, linedef, side, offset)
        ss = L("SSECTORS")
        self.subsector = [struct.unpack_from("<hh", ss, 4 * i) for i in range(len(ss) // 4)]              # (seg count, first seg)
        nd = L("NODES")
        self.node = [struct.unpack_from("<4h8hHH", nd, 28 * i) for i in range(len(nd) // 28)]            # x, y, dx, dy, right bbox, left bbox, right child, left child
        th = L("THINGS")
        self.thing = [struct.unpack_from("<5h", th, 10 * i) for i in range(len(th) // 10)]                # (x, y, angle, type, flags)
        # The doors stand open, as Doom opens them (its ceiling up to 4 under the lowest ceiling round it): the cab drives through a door, and
        # shut, its sector has no height: the opening above it showed nothing (gaps in the walls) and its ceiling was not drawn
        near = {}
        for v1, v2, flags, special, tag, rs, ls in self.line:
            if rs >= 0 and ls >= 0:
                a, b = self.side[rs][5], self.side[ls][5]
                near.setdefault(a, set()).add(b)
                near.setdefault(b, set()).add(a)
        for v1, v2, flags, special, tag, rs, ls in self.line:
            if special == 0 or rs < 0 or ls < 0:
                continue
            k = self.side[ls][5]
            sec = self.sector[k]
            if sec[1] - sec[0] < PLAYER_HEIGHT and near.get(k):
                top = min(self.sector[n][1] for n in near[k]) - 4
                if top - sec[0] >= PLAYER_HEIGHT:
                    self.sector[k] = (sec[0], top) + sec[2:]

    def seg_sector(self, k):
        v1, v2, ang, ld, sd, off = self.seg[k]
        line = self.line[ld]
        return self.side[line[5 + sd]][5]

    def floor_pieces(self):
        """[(sector, [(x, y) ...])] in Doom's units: a convex polygon for every subsector."""
        xs = [v[0] for v in self.vertex]
        ys = [v[1] for v in self.vertex]
        big = [(min(xs) - 64, min(ys) - 64), (max(xs) + 64, min(ys) - 64), (max(xs) + 64, max(ys) + 64), (min(xs) - 64, max(ys) + 64)]
        out = []

        def clip(poly, px, py, dx, dy, keep_right):
            """The part of poly on the right (keep_right) or the left of the directed line; Doom's right is the side of a line's right
            normal (dy, -dx)."""
            def side(p):
                s = (p[0] - px) * dy - (p[1] - py) * dx            # positive: right of the line
                return s if keep_right else -s
            res = []
            for i in range(len(poly)):
                a, b = poly[i], poly[(i + 1) % len(poly)]
                sa, sb = side(a), side(b)
                if sa >= 0:
                    res.append(a)
                if (sa > 0 and sb < 0) or (sa < 0 and sb > 0):
                    t = sa / (sa - sb)
                    res.append((a[0] + t * (b[0] - a[0]), a[1] + t * (b[1] - a[1])))
            return res

        def walk(n, poly):
            if n & 0x8000:
                k = n & 0x7FFF
                cnt, first = self.subsector[k]
                for g in range(first, first + cnt):
                    v1, v2 = self.vertex[self.seg[g][0]], self.vertex[self.seg[g][1]]
                    poly = clip(poly, v1[0], v1[1], v2[0] - v1[0], v2[1] - v1[1], True)
                    if len(poly) < 3:
                        return
                out.append((self.seg_sector(first), poly))
                return
            nd = self.node[n]
            x, y, dx, dy = nd[0:4]
            walk(nd[12], clip(poly, x, y, dx, dy, True))
            walk(nd[13], clip(poly, x, y, dx, dy, False))

        walk(len(self.node) - 1, big)
        return out

    def _riser_kind(self, p, q, lo, hi):
        """'solid' (blocks the cab: a rise over PLAYER_STEP, or one with no room for a ramp) or 'ramp' (a ramp is made for it: it only draws)."""
        if hi - lo <= DRIVE_STEP and (p, q, lo, hi) not in self._ramp_key_set():
            return "step"
        if hi - lo > PLAYER_STEP:
            return "solid"
        if not hasattr(self, "_ramp_keys"):
            self._ramp_keys = set((r[0], r[1], r[2], r[3]) for r in self.ramps())
        return "ramp" if (p, q, lo, hi) in self._ramp_keys else "solid"

    def _ramp_key_set(self):
        if not hasattr(self, "_ramp_keys"):
            self._ramp_keys = set((r[0], r[1], r[2], r[3]) for r in self.ramps())
        return self._ramp_keys

    def _risers(self):
        """[(p, q, floor below, floor above, sector below)]: every wall between two floors a rise of up to PLAYER_STEP apart, seen from the lower
        side, p -> q having the lower sector on its right."""
        out = []
        for v1, v2, flags, special, tag, rs, ls in self.line:
            a, b = self.vertex[v1], self.vertex[v2]
            for sd, other in ((rs, ls), (ls, rs)):
                if sd < 0 or other < 0:
                    continue
                s = self.side[sd]
                sec = self.sector[s[5]]
                o = self.sector[self.side[other][5]]
                if 0 < o[0] - sec[0] <= PLAYER_STEP:
                    p, q = (a, b) if sd == rs else (b, a)
                    out.append((p, q, sec[0], o[0], s[5], self.side[other][5]))
        return out

    def ramps(self):
        """[(p, q, floor below, floor above, sector below, run, (nx, ny))]: a ramp from each such riser down into the lower sector, as long as
        the sector is deep (at three samples along the riser), at most RAMP_RUN times the rise, and not steeper than RAMP_MIN: the rise's top
        edge p-q is at the upper floor, the edge `run` along the normal (nx, ny) into the lower sector at the lower one."""
        if hasattr(self, "_ramps"):
            return self._ramps
        pieces = {}
        for sec, poly in self.floor_pieces():
            pieces.setdefault(sec, []).append(poly)
        near = {}                                                # sector -> the sectors across its two-sided lines
        for v1, v2, flags, special, tag, rs, ls in self.line:
            if rs >= 0 and ls >= 0:
                a, b = self.side[rs][5], self.side[ls][5]
                near.setdefault(a, set()).add(b)
                near.setdefault(b, set()).add(a)
        risers = self._risers()
        up_from, down_to = set(), set()                          # sectors a step up leaves from / arrives at: a stair is a run of them
        for p, q, lo, hi, sec, up in risers:
            up_from.add(sec)
            down_to.add(up)
        best = {}                                                # (upper sector, lower sector) -> the ramp over its longest riser
        spare = {}                                               # the same for the risers that are not stairs (a pedestal, a lone step)
        for p, q, lo, hi, sec, up in risers:
            island = len(near.get(up, ())) < 2
            # a step of DRIVE_STEP or less gets its ramp too, unless it is a pedestal's: its 4 units in the game stopped the cab like a wall
            # (each wheel is a ball of radius 4, gen_adc.c carWheelCollision), an invisible one, the face being that low
            stairs = not (island or (sec not in down_to and up not in up_from)) or (hi - lo <= DRIVE_STEP and not island)
            dx, dy = q[0] - p[0], q[1] - p[1]
            ln = math.hypot(dx, dy)
            if ln < 1e-6:
                continue
            nx, ny = dy / ln, -dx / ln
            r = hi - lo
            depth = RAMP_RUN * r
            for f in (0.15, 0.5, 0.85):
                mx, my = p[0] + dx * f, p[1] + dy * f
                d = 0.0
                while d < RAMP_RUN * r and any(_inside(poly, mx + nx * (d + 0.5), my + ny * (d + 0.5)) for poly in pieces.get(sec, ())):
                    d += 1.0
                depth = min(depth, d)
            into = best if stairs else spare                     # a pedestal or a lone step is no stairs: a wall, unless the cab needs it to get out (below)
            key = (up, sec) if hi - lo > DRIVE_STEP or island else (up, sec, p, q)     # a small step: a ramp on each of its lines
            if depth >= RAMP_MIN * r and ln > into.get(key, (0,))[0]:
                into[key] = (ln, (p, q, lo, hi, sec, depth, (nx, ny)))
        # A place Doom lets a player walk to (a step up of PLAYER_STEP or less, with room over it) the cab must reach too: the sectors the cab
        # can pass between (level, a step it drives over, a ramp) are joined, and where two that Doom joins are not, the ramp of a step between them
        # is added (E1M1's nukage pits: the way out was a step the stairs rule left a wall).
        root = {}

        def find(a):
            root.setdefault(a, a)
            while root[a] != a:
                root[a] = root[root[a]]
                a = root[a]
            return a
        doom_edges = []
        for v1, v2, flags, special, tag, rs, ls in self.line:
            if rs < 0 or ls < 0 or flags & 1:
                continue
            a, b = self.side[rs][5], self.side[ls][5]
            fa, ca, fb, cb = self.sector[a][0], self.sector[a][1], self.sector[b][0], self.sector[b][1]
            door = ca - fa < PLAYER_HEIGHT or cb - fb < PLAYER_HEIGHT
            if abs(fa - fb) > PLAYER_STEP or not (door or min(ca, cb) - max(fa, fb) >= PLAYER_HEIGHT):
                continue
            doom_edges.append((a, b))
            if abs(fa - fb) <= DRIVE_STEP:
                root[find(a)] = find(b)
        for up, sec, *_ in best:
            root[find(up)] = find(sec)
        for (a, b) in doom_edges:
            if find(a) == find(b):
                continue
            k = (a, b) if (a, b) in spare else (b, a)
            c = spare.get(k)
            if c and len(near.get(k[0], ())) >= 2:               # never up on to a pedestal: it leads nowhere, so the cab needs no way up
                best[k] = c
                root[find(a)] = find(b)
        res = [v[1] for v in best.values()]                      # one ramp up on to each raised piece: a pillar or a block gets one, not one a side
        self.ramp_upper = {(v[1][0], v[1][1]): k[0] for k, v in best.items()}    # a ramp's (p, q) -> the sector it climbs to
        self._ramps = res
        return res

    def _upper_kind(self, sec, o, sky=False):
        """An upper wall's kind: 'door' over a closed door (the other sector's own opening under PLAYER_HEIGHT: the cab drives through it,
        so it is not drawn either); 'solid' over an opening lower than PLAYER_HEIGHT above this side's floor that is no door (a ledge's
        ceiling level with this floor: drawn, and a wall; left open, the cab dropped into the space under the ledge); else 'upper'."""
        if o[1] - o[0] < PLAYER_HEIGHT:
            return "door"
        if o[1] - sec[0] < PLAYER_HEIGHT:
            return "solid"
        return "sky" if sky else "upper"                   # between two sky ceilings Doom draws the sky, not the wall

    def walls(self):
        """Every wall face: (x1, y1, x2, y2, bottom, top, texture, side-sector, kind) in Doom's units, a face looking to the right of
        its direction (Doom's front: a linedef's right side). kind 'solid' blocks a car (a one-sided line, or a step or an opening the cab
        cannot use); 'step' only draws."""
        out = []
        for li, (v1, v2, flags, special, tag, rs, ls) in enumerate(self.line):
            a, b = self.vertex[v1], self.vertex[v2]
            for sd, other in ((rs, ls), (ls, rs)):
                if sd < 0:
                    continue
                s = self.side[sd]
                sec = self.sector[s[5]]
                p, q = (a, b) if sd == rs else (b, a)         # the face looks to the right of p -> q
                if other < 0:
                    out.append((p[0], p[1], q[0], q[1], sec[0], sec[1], s[4], s[5], "solid"))
                else:
                    o = self.sector[self.side[other][5]]
                    if o[0] > sec[0]:                         # a rise on the other side: this side's lower wall
                        out.append((p[0], p[1], q[0], q[1], sec[0], o[0], s[3], s[5], self._riser_kind(p, q, sec[0], o[0])))
                    if o[1] < sec[1]:                         # a lower ceiling on the other side: this side's upper wall
                        out.append((p[0], p[1], q[0], q[1], o[1], sec[1], s[2], s[5], self._upper_kind(sec, o, 'F_SKY1' == sec[3].upper() == o[3].upper())))
                    if flags & 1:                             # a window or a rail the line blocks (Doom's impassable flag): a wall that is not drawn
                        out.append((p[0], p[1], q[0], q[1], sec[0], sec[1], "-", s[5], "solid"))
        return out


def _faces(self):
    """walls() with the side's texture offsets: (x1, y1, x2, y2, bottom, top, texture, sector, kind, xoff, yoff)."""
    out = []
    for li, (v1, v2, flags, special, tag, rs, ls) in enumerate(self.line):
        a, b = self.vertex[v1], self.vertex[v2]
        for sd, other in ((rs, ls), (ls, rs)):
            if sd < 0:
                continue
            s = self.side[sd]
            sec = self.sector[s[5]]
            p, q = (a, b) if sd == rs else (b, a)
            if other < 0:
                out.append((p[0], p[1], q[0], q[1], sec[0], sec[1], s[4], s[5], "solid", s[0], s[1]))
            else:
                o = self.sector[self.side[other][5]]
                if o[0] > sec[0]:
                    out.append((p[0], p[1], q[0], q[1], sec[0], o[0], s[3], s[5], self._riser_kind(p, q, sec[0], o[0]), s[0], s[1]))
                if o[1] < sec[1]:
                    out.append((p[0], p[1], q[0], q[1], o[1], sec[1], s[2], s[5], self._upper_kind(sec, o, 'F_SKY1' == sec[3].upper() == o[3].upper()), s[0], s[1]))
                if flags & 1:                             # a window or a rail the line blocks (Doom's impassable flag): a wall that is not drawn
                    out.append((p[0], p[1], q[0], q[1], sec[0], sec[1], "-", s[5], "solid", s[0], s[1]))
    return out


Map.faces = _faces


def plan(m, pieces, path, size=1400):
    import PIL.Image
    import PIL.ImageDraw
    xs = [v[0] for v in m.vertex]
    ys = [v[1] for v in m.vertex]
    x0, x1, y0, y1 = min(xs), max(xs), min(ys), max(ys)
    k = size / max(x1 - x0, y1 - y0)
    img = PIL.Image.new("RGB", (int((x1 - x0) * k) + 8, int((y1 - y0) * k) + 8), (0, 0, 0))
    dr = PIL.ImageDraw.Draw(img)
    fl = [s[0] for s in m.sector]
    lo, hi = min(fl), max(fl)
    for sec, poly in pieces:
        g = 60 + int(180 * (m.sector[sec][0] - lo) / max(hi - lo, 1))
        dr.polygon([((x - x0) * k + 4, (y1 - y) * k + 4) for x, y in poly], fill=(g, g, g))
    for _, _, _, _, _, _, _, _, kind in []:
        pass
    for w in m.walls():
        col = {"solid": (255, 80, 60), "step": (80, 200, 90), "upper": (70, 120, 255), "door": (200, 120, 255), "ramp": (255, 220, 60)}[w[8]]
        dr.line([((w[0] - x0) * k + 4, (y1 - w[1]) * k + 4), ((w[2] - x0) * k + 4, (y1 - w[3]) * k + 4)], fill=col, width=1)
    img.save(path)


def area(poly):
    return abs(sum(poly[i][0] * poly[(i + 1) % len(poly)][1] - poly[(i + 1) % len(poly)][0] * poly[i][1] for i in range(len(poly)))) / 2


if __name__ == "__main__":
    wad = Wad(sys.argv[1])
    m = Map(wad, sys.argv[2])
    pieces = m.floor_pieces()
    walls = m.walls()
    tot = sum(area(p) for _, p in pieces)
    xs = [v[0] for v in m.vertex]
    ys = [v[1] for v in m.vertex]
    print("%s: %d vertices, %d linedefs, %d sectors, %d subsectors -> %d floor pieces, %.0f square units of floor"
          % (sys.argv[2], len(m.vertex), len(m.line), len(m.sector), len(m.subsector), len(pieces), tot))
    print("extent x %d..%d y %d..%d (Crazy Taxi: %.0f x %.0f units)" % (min(xs), max(xs), min(ys), max(ys), (max(xs) - min(xs)) * SCALE, (max(ys) - min(ys)) * SCALE))
    kinds = {}
    for w in walls:
        kinds[w[8]] = kinds.get(w[8], 0) + 1
    print("wall faces:", kinds)
    print("player 1 start:", [t for t in m.thing if t[3] == 1])
    if len(sys.argv) > 3:
        plan(m, pieces, sys.argv[3])
