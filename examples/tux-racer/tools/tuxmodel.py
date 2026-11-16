#!/usr/bin/env python3
"""An Extreme Tux Racer course as Crazy Taxi models, one a tile: the terrain, drawn.

    tuxmodel.py <course folder> <address the blob will have> <out blob>     (coldc.py calls build() with its chain of copies)

The blob is what coldc.py puts into the free part of COLDC1.BIN (the collision data takes a tenth of the file), so the disc gains no
file. It reads like the drivers' files (snake-way/tools/cab_parts.py write_parts; the record layout is docs/engine.md, "A record is the
SDK's NL_PF_GloblParamType2"):

    +0 'TUXR', +24 the number of terrain tiles (the sky box's faces follow them, then the tree models: +28 the first), +32 the trees' list
    (24 bytes each: x, y, z, radius, height, kind), +36 how many, +4 texture count, +8 the tile list's offset, +12 the texture table's offset, +16 the first texture number, +20
    the tile count; every full vertex has bit 0 set on its first word (x) and its last (v): the clipping routines tell a 32-byte vertex
    from a 2-word reference by it, forwards by the first and backwards by the last (nl_objasm_*_sidx); the tile list (16 bytes a tile: its model's offset, its centre x and z, its texture slot), a model a tile (24-byte
    header, the one record, a 0 word), the table (16 bytes a texture, type 0x302 VQ ARGB4444: height
    << 16 | width, data type << 8 | pixel format, data address, 0) and the textures (64 x 64 VQ ARGB4444, 3 KB each).

The data addresses in the table are absolute (the blob's address is an argument), as nlObjPutLoadTexture wants them. The terrain
under each triangle is the one the course's terrain.png names (ETR's own rule, src/course.cpp GetTerrain: the first terrain in
terrains.lst whose colour is within 30 on every channel), drawn with that terrain's texture from ETR's data/terrains."""
import math
import os
import re
import struct
import sys

import PIL.Image

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(1, os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", "tools"))
import terrain
import course_kit as kit                                 # noqa: E402  the records, strips, twiddling and VQ the mods share

TEX_SIZE = 64
TILE = 80.0                                             # a texture repeats every 8 m
STEP = 4                                                # the same triangles as the collision (coldc.py)
TILE_SQUARES = 4                                        # a record covers this many squares a side: the game tests each record's sphere against the
                                                        # view and drops the ones outside (a record of the whole course would send every triangle,
                                                        # all frames, into the video buffer)


SKY_HALF = 3500.0                                       # the sky box's half size, in units: inside the game's own dome (radius 3285 x 2), which it replaces
SKY_ENV = ("env", "etr", "sunny")                       # ETR's skybox with the mountains (environment.lst: location etr, sunny): front, left, right
# ETR's own faces (src/env.cpp DrawSkybox, corners as drawn there; ETR looks down -z, the course here goes down +z, so z is flipped), each with
# the texture corners (0, 1), (1, 1), (1, 0), (0, 0) in that order; the face's texture (an index into sky_pictures) and whether its u runs
# backwards: the back is the front mirrored (ETR never turns round), the same texture
SKY_FACES = (("front", ((-1, -1, -1), (1, -1, -1), (1, 1, -1), (-1, 1, -1)), 0, False),
             ("left", ((-1, -1, 1), (-1, -1, -1), (-1, 1, -1), (-1, 1, 1)), 1, False),
             ("right", ((1, -1, -1), (1, -1, 1), (1, 1, 1), (1, 1, -1)), 2, False),
             ("back", ((1, -1, 1), (-1, -1, 1), (-1, 1, 1), (1, 1, 1)), 0, True),
             ("top", ((-1, 1, -1), (1, 1, -1), (1, 1, 1), (-1, 1, 1)), 3, False))


def sky_pictures(data_dir):
    """[(size, picture)] the textures of SKY_FACES, from ETR's high-resolution pictures (1024, brought down here): the front 512, the sides
    256, and the top the front's top row's colour."""
    d = os.path.join(data_dir, *SKY_ENV)
    pics = [PIL.Image.open(os.path.join(d, n + "H.png")).convert("RGB") for n in ("front", "left", "right")]
    top = pics[0].crop((0, 0, pics[0].size[0], 8)).resize((1, 1), PIL.Image.BOX).resize((32, 32))
    return [(512, pics[0]), (256, pics[1]), (256, pics[2]), (32, top)]


def _model(body, pts, slot, pcw=None, tsp=None):
    """One tile's model bytes: the 24-byte header, the one record (sphere over pts, texture `slot` + FIRST_TEX), the strips, a 0 word."""
    lo = [min(p[k] for p in pts) for k in range(3)]
    hi = [max(p[k] for p in pts) for k in range(3)]
    c = [(lo[k] + hi[k]) / 2 for k in range(3)]
    r = max(math.sqrt(sum((p[k] - c[k]) ** 2 for k in range(3))) for p in pts) * 1.02
    rec = struct.pack("<4I4fii", pcw or kit.PCW, 0x83000000, tsp or kit.TSP, 0x4C000000, c[0], c[1], c[2], r, kit.FIRST_TEX + slot, 0)
    rec += struct.pack("<f4f4f", 0.75, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0) + struct.pack("<I", len(body))
    return struct.pack("<2I4f", 1, 1, c[0], c[1], c[2], r) + rec + body + b"\0\0\0\0", c


def sky_model(corners, slot, mirror=False):
    """A face of the box as one strip (the fan's corners 0, 1, 3, 2), at +-SKY_HALF around the origin (the camera), z flipped."""
    tex = ((0.005, 0.995), (0.995, 0.995), (0.995, 0.005), (0.005, 0.005))
    if mirror:
        tex = tuple((1.0 - u, w) for u, w in tex)
    v = [(c[0] * SKY_HALF, c[1] * SKY_HALF, -c[2] * SKY_HALF, tex[i][0], tex[i][1]) for i, c in enumerate(corners)]
    st = [v[0], v[1], v[3], v[2]]
    body = struct.pack("<2I", 0x50, 4) + b"".join(kit.vertex(x, y, z, 0.0, 1.0, 0.0, u, w) for x, y, z, u, w in st)
    return _model(body, [(p[0], p[1], p[2]) for p in v], slot)


TREE_SIZE = 128


def tree_model(slot):
    """A tree of one kind at unit size: two quads crossing, 1 wide each way from the foot (the layer scales it by the tree's radius and height
    and puts it at its place), the texture over each, as ETR draws them."""
    quads = [((-1, 0, 0), (1, 0, 0), (-1, 1, 0), (1, 1, 0)), ((0, 0, -1), (0, 0, 1), (0, 1, -1), (0, 1, 1))]
    uv = ((0.0, 1.0), (1.0, 1.0), (0.0, 0.0), (1.0, 0.0))
    body = b""
    pts = []
    for q in quads:
        body += struct.pack("<2I", 0x50, 4)
        for (x, y, z), (u, v) in zip(q, uv):
            body += kit.vertex(float(x), float(y), float(z), 0.0, 1.0, 0.0, u, v)
            pts.append((float(x), float(y), float(z)))
    return _model(body, pts, slot, kit.TREE_PCW, kit.TREE_TSP)


def terrain_types(data_dir):
    """ETR's terrains.lst: [(name, texture file, (r, g, b))] in file order."""
    text = open(os.path.join(data_dir, "terrains", "terrains.lst"), encoding="latin-1").read()
    out = []
    for m in re.finditer(r"\*\[name\]\s*(\S+)\s*\[texture\]\s*(\S+).*?\[col\]\s*(\d+)\s+(\d+)\s+(\d+)", text, re.S):
        out.append((m.group(1), m.group(2), (int(m.group(3)), int(m.group(4)), int(m.group(5)))))
    return out


def terrain_of(types, px):
    for i, (_, _, c) in enumerate(types):
        if all(abs(px[k] - c[k]) < 30 for k in range(3)):
            return i
    return 0


def vq(path, size):
    """The picture as a Dreamcast VQ ARGB4444 image of size x size (snake-way/tools/dc_tex.py to_dc_vq): a codebook of
    256 entries of 2 x 2 texels (top-left, bottom-left, top-right, bottom-right: 8 bytes), then one byte a 2 x 2 block in twiddled
    block order; 2 KB + size * size / 4 bytes (3 KB at 64 x 64, against 8 KB twiddled: the free texture memory is small, and an
    8 KB twiddled texture the game's allocator refuses is drawn with the dummy texture, dark red stripes). The codebook is exact
    when the picture has 256 distinct blocks or fewer, else a k-means over the distinct blocks."""
    img = PIL.Image.open(path).convert("RGB").resize((size, size), PIL.Image.LANCZOS)
    px = img.load()
    t = [[0xF000 | ((px[x, y][0] >> 4) << 8) | ((px[x, y][1] >> 4) << 4) | (px[x, y][2] >> 4) for x in range(size)] for y in range(size)]
    half = size // 2
    blocks = {}
    for by in range(half):
        for bx in range(half):
            blocks[(bx, by)] = (t[2 * by][2 * bx], t[2 * by + 1][2 * bx], t[2 * by][2 * bx + 1], t[2 * by + 1][2 * bx + 1])
    count = {}
    for b in blocks.values():
        count[b] = count.get(b, 0) + 1
    vecs = list(count)
    chans = lambda b: [c for v in b for c in ((v >> 12) & 15, (v >> 8) & 15, (v >> 4) & 15, v & 15)]
    if len(vecs) <= 256:
        book = vecs
    else:
        pts = [(chans(v), count[v]) for v in vecs]
        order = sorted(range(len(pts)), key=lambda i: -pts[i][1])
        cents = [pts[order[i * len(order) // 256]][0][:] for i in range(256)]
        for _ in range(8):
            sums = [[0.0] * 16 for _ in range(256)]
            wts = [0] * 256
            for v, c in pts:
                best, bd = 0, 1e18
                for k, ce in enumerate(cents):
                    d = sum((a - b) * (a - b) for a, b in zip(v, ce))
                    if d < bd:
                        best, bd = k, d
                wts[best] += c
                for j in range(16):
                    sums[best][j] += v[j] * c
            cents = [[x / wts[k] for x in sums[k]] if wts[k] else cents[k] for k in range(256)]
        book = []
        for ce in cents:
            q = [min(15, max(0, int(round(x)))) for x in ce]
            book.append(tuple((q[4 * k] << 12) | (q[4 * k + 1] << 8) | (q[4 * k + 2] << 4) | q[4 * k + 3] for k in range(4)))

    def nearest(b):
        v = chans(b)
        best, bd = 0, 1e18
        for k, e in enumerate(book):
            d = sum((a - c) * (a - c) for a, c in zip(v, chans(e)))
            if d < bd:
                best, bd = k, d
                if d == 0:
                    break
        return best
    code = bytearray(256 * 8)
    for k, e in enumerate(book):
        for j in range(4):
            struct.pack_into("<H", code, k * 8 + 2 * j, e[j])
    idx = bytearray(half * half)
    bits = half.bit_length() - 1
    cache = {}
    for (bx, by), b in blocks.items():
        if b not in cache:
            cache[b] = nearest(b)
        idx[kit.twiddle(bx, by, bits)] = cache[b]
    return bytes(code) + bytes(idx)


def build(course, data_dir, base, trees=None, tree_pics=None):
    """course: a terrain.Course or terrain.Chain; data_dir: ETR's data folder (terrains/); base: the address the blob will have."""
    types = terrain_types(data_dir)
    cs, rs = course.grid(STEP)
    index = {}
    verts = []
    for j, r in enumerate(rs):
        for i, c in enumerate(cs):
            index[(i, j)] = len(verts)
            c0, c1 = max(c - 1, 0), min(c + 1, course.cols - 1)
            r0, r1 = max(r - 1, 0), min(r + 1, course.rows - 1)
            sx = (course.y(c1, r) - course.y(c0, r)) / (course.x(c1) - course.x(c0))
            sz = (course.y(c, r1) - course.y(c, r0)) / (course.z(r1) - course.z(r0))
            n = (-sx, 1.0, -sz)
            ln = math.sqrt(sum(t * t for t in n))
            verts.append((course.x(c), course.y(c, r), course.z(r), n[0] / ln, n[1] / ln, n[2] / ln))
    by_type = {}
    mids = {}

    def mid(p, q):
        """The vertex halfway along the edge p-q (shared by the cells on both sides): the same height the edge has, as the collision's triangles do."""
        key = (min(p, q), max(p, q))
        if key not in mids:
            u, v = verts[p], verts[q]
            n = [(u[k] + v[k]) / 2 for k in range(3, 6)]
            ln = math.sqrt(sum(t * t for t in n))
            mids[key] = len(verts)
            verts.append(tuple((u[k] + v[k]) / 2 for k in range(3)) + (n[0] / ln, n[1] / ln, n[2] / ln))
        return mids[key]

    def ground(c, r):
        return terrain_of(types, course.terrain_px(min(c, course.cols - 1), min(r, course.rows - 1)))

    # A cell (the collision's two triangles, a b c and b c d, c below a) whose pixels name more than one ground type is cut into 8 triangles by the
    # midpoints of its edges and of the diagonal b c (all in the same two planes, so the surface does not change), each with the type under its
    # own centre: the patches' edges follow the picture twice as finely. A cell of one type stays two triangles. ETR blends the types with a
    # per-vertex alpha, which this model format (no vertex colour) cannot do.
    for j in range(len(rs) - 1):
        for i in range(len(cs) - 1):
            a, b, c, d = index[(i, j)], index[(i + 1, j)], index[(i, j + 1)], index[(i + 1, j + 1)]
            dc, dr = cs[i + 1] - cs[i], rs[j + 1] - rs[j]
            kinds = set(ground(cc, rr) for rr in range(rs[j], rs[j + 1] + 1) for cc in range(cs[i], cs[i + 1] + 1))
            if len(kinds) == 1:
                tris = [((a, c, b), (1 / 3.0, 1 / 3.0)), ((b, c, d), (2 / 3.0, 2 / 3.0))]
            else:
                mab, mac, mbc, mbd, mcd = mid(a, b), mid(a, c), mid(b, c), mid(b, d), mid(c, d)
                tris = [((a, mac, mab), (1 / 6.0, 1 / 6.0)), ((mab, mbc, b), (0.5, 1 / 6.0)), ((mac, c, mbc), (1 / 6.0, 0.5)), ((mab, mac, mbc), (1 / 3.0, 1 / 3.0)),
                        ((b, mbc, mbd), (5 / 6.0, 1 / 3.0)), ((mbd, mcd, d), (5 / 6.0, 5 / 6.0)), ((mbc, c, mcd), (1 / 3.0, 5 / 6.0)), ((mbd, mbc, mcd), (2 / 3.0, 2 / 3.0))]
            for tri, (fx, fy) in tris:
                t = ground(cs[i] + int(round(dc * fx)), rs[j] + int(round(dr * fy))) if len(kinds) > 1 else next(iter(kinds))
                by_type.setdefault((j // TILE_SQUARES, i // TILE_SQUARES, t), []).append(tri)
    used = sorted(set(k[2] for k in by_type))
    tiles = []                                          # (model bytes, centre x, centre z, texture slot): one model a record, so the game can draw the near ones only
    for key in sorted(by_type):
        slot = used.index(key[2])
        body = b""
        pts = []
        for st in kit.stripify(by_type[key]):
            body += struct.pack("<2I", 0x50, len(st))
            for k in st:
                x, y, z, nx, ny, nz = verts[k]
                pts.append((x, y, z))
                body += struct.pack("<I6fI", struct.unpack("<I", struct.pack("<f", x))[0] | 1, y, z, nx, ny, nz, x / TILE,
                                    struct.unpack("<I", struct.pack("<f", z / TILE))[0] | 1)
        model, c = _model(body, pts, slot)
        tiles.append((model, c[0], c[2], slot))
    sky_first = len(tiles)                              # the box's faces follow the terrain's tiles: drawn by the layer's tuxSky, at the camera
    pics = sky_pictures(data_dir)
    for name, corners, tex, mirror in SKY_FACES:
        model, c = sky_model(corners, len(used) + tex, mirror)
        tiles.append((model, 0.0, 0.0, len(used) + tex))
    tree_first = len(tiles)                             # then a model for each kind of tree (the layer draws the list of trees with them)
    for kind in range(len(tree_pics or ())):
        model, c = tree_model(len(used) + len(pics) + kind)
        tiles.append((model, 0.0, 0.0, len(used) + len(pics) + kind))
    al = lambda n: (n + 31) & ~31
    tiles_at = 48
    at = al(tiles_at + 16 * len(tiles))
    offs = []
    for model, _, _, _ in tiles:
        offs.append(at)
        at = al(at + len(model))
    table_at = at
    trees_at = al(table_at + 16 * (len(used) + len(pics) + len(tree_pics or ())))
    tex_at = al(trees_at + 24 * len(trees or ()))
    out = bytearray(tex_at)
    for (model, cx, cz, slot), o in zip(tiles, offs):
        out[o:o + len(model)] = model
        struct.pack_into("<I2fI", out, tiles_at + 16 * offs.index(o), o, cx, cz, slot)
    textures = [(TEX_SIZE, vq(os.path.join(data_dir, "terrains", types[t][1]), TEX_SIZE)) for t in used] + \
               [(size, kit.vq_image(img, size)) for size, img in pics] + \
               [(TREE_SIZE, kit.vq_image(PIL.Image.open(path), TREE_SIZE, alpha=True)) for path in (tree_pics or ())]
    for n, (x, y, z, rad, height, kind) in enumerate(trees or ()):       # the trees: x, y, z, radius, height (floats), kind (an index of the models after the sky)
        struct.pack_into("<5fI", out, trees_at + 24 * n, x, y, z, rad, height, kind)
    for slot, (size, data) in enumerate(textures):
        struct.pack_into("<4I", out, table_at + 16 * slot, (size << 16) | size, (3 << 8) | 2, base + len(out), 0)
        out += data
        out += bytes(al(len(out)) - len(out))
    struct.pack_into("<4sIIIIIIIII", out, 0, b"TUXR", len(textures), tiles_at, table_at, kit.FIRST_TEX, len(tiles), sky_first, tree_first, trees_at, len(trees or ()))
    return bytes(out), [types[t][0] for t in used], sum(len(v) for v in by_type.values()), len(by_type)


if __name__ == "__main__":
    folder = sys.argv[1].rstrip("/")
    blob, names, tris, records = build(terrain.Course(folder), os.path.dirname(os.path.dirname(os.path.dirname(folder))), int(sys.argv[2], 0))
    open(sys.argv[3], "wb").write(blob)
    print("terrain model: %d triangles in %d records, textures %s, %d bytes" % (tris, records, ", ".join(names), len(blob)))
