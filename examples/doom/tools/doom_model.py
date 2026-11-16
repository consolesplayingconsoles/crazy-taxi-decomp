#!/usr/bin/env python3
"""A Doom map as Crazy Taxi models, in the blob format tuxmodel.py writes for the Tux course: the floors, the ceilings and the walls.

    doom_model.py <doom1.wad> <map> <address the blob will have> <out blob>

The blob (tuxmodel.py's layout: 'TUXR', texture count, the tile list's offset, the texture table's offset, the first texture number, the tile
count; the tile list, a model a tile, the texture table, the textures): a tile is a 1024-unit square of the map, its model the 24-byte header,
one record for every (texture, light) pair of the faces in it, a 0 word. The records are the game's own (docs/engine.md, "A record is the
SDK's NL_PF_GloblParamType2"), what the Tux course uses: polygon list 0, ISP 0x83000000, TSP 0x2008245B. The light is the
sector's: specular -1 (no lighting) and the face colour the light level, so a record is lit the way Doom lit its sector.
Every full vertex has bit 0 set on its first word (x) and its last (v): the clipping routines tell a 32-byte vertex from a 2-word
reference by them, forwards by the first and backwards by the last (nl_objasm_*_sidx; course_kit.vertex).

Textures are Doom's, decoded from the WAD (PLAYPAL, PNAMES, TEXTURE1/2, the patches, the flats) and made 64 x 64 VQ ARGB4444 (3 KB each; the
free texture memory is small): a wall texture's UV run over its own size in Doom units, a flat's over 64, so a coarser picture covers the
same area. The sky flat (F_SKY1) ceilings are not drawn."""
import math
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(1, os.path.join(HERE, "..", "..", "tools"))
import doom_wad                                         # noqa: E402
import course_kit as kit                                 # noqa: E402  vertex, stripify, twiddle, the record's constants

import PIL.Image                                        # noqa: E402

S = doom_wad.SCALE
SY = doom_wad.SCALE_Y
TILE = 1024.0                                           # Crazy Taxi units a tile
TEX_SIZE = 64                                           # a flat's texture (Doom's flats are 64 x 64)
WALL_SIZE = 128                                         # a wall's (its patches are up to 128 high: 64 x 64 was soft)
DOOR_GAP = doom_wad.PLAYER_HEIGHT                       # Doom's player height: a sector lower than this is a closed door (its ceiling is not drawn)


# ---------------------------------------------------------------- the WAD's pictures

class Pictures:
    def __init__(self, wad):
        self.wad = wad
        pal = wad.lump("PLAYPAL")[:768]
        self.pal = [(pal[3 * i], pal[3 * i + 1], pal[3 * i + 2]) for i in range(256)]
        pn = wad.lump("PNAMES")
        n = struct.unpack_from("<i", pn, 0)[0]
        self.pnames = [pn[4 + 8 * i:12 + 8 * i].rstrip(b"\0").decode("latin-1").upper() for i in range(n)]
        self.defs = {}
        for lump in ("TEXTURE1", "TEXTURE2"):
            try:
                t = wad.lump(lump)
            except KeyError:
                continue
            cnt = struct.unpack_from("<i", t, 0)[0]
            for i in range(cnt):
                o = struct.unpack_from("<i", t, 4 + 4 * i)[0]
                name = t[o:o + 8].rstrip(b"\0").decode("latin-1").upper()
                w, h = struct.unpack_from("<hh", t, o + 12)
                pc = struct.unpack_from("<h", t, o + 20)[0]
                patches = [struct.unpack_from("<hhhhh", t, o + 22 + 10 * k) for k in range(pc)]
                self.defs[name] = (w, h, patches)
        self.dir = {k: (o, s) for (o, s), k in wad.dir}
        self.flat_range = None
        names = [k for _, k in wad.dir]
        a, b = names.index("F_START"), names.index("F_END")
        self.flats = {k: wad.d[o:o + s] for (o, s), k in wad.dir[a + 1:b] if s == 4096}

    def patch(self, name):
        o, s = self.dir[name]
        d = self.wad.d[o:o + s]
        w, h, lo, to = struct.unpack_from("<hhhh", d, 0)
        cols = [struct.unpack_from("<i", d, 8 + 4 * x)[0] for x in range(w)]
        px = [[None] * h for _ in range(w)]
        for x in range(w):
            p = cols[x]
            while d[p] != 0xFF:
                top, ln = d[p], d[p + 1]
                for k in range(ln):
                    if top + k < h:
                        px[x][top + k] = d[p + 3 + k]
                p += ln + 4
        return w, h, px

    def wall(self, name):
        """The wall texture composed of its patches: (width, height, RGB image)."""
        w, h, patches = self.defs[name.upper()]
        img = PIL.Image.new("RGB", (w, h), (0, 0, 0))
        px = img.load()
        for ox, oy, pi, _, _ in patches:
            pw, ph, pp = self.patch(self.pnames[pi])
            for x in range(pw):
                for y in range(ph):
                    v = pp[x][y]
                    if v is not None and 0 <= ox + x < w and 0 <= oy + y < h:
                        px[ox + x, oy + y] = self.pal[v]
        return w, h, img

    def flat(self, name):
        d = self.flats[name.upper()]
        img = PIL.Image.new("RGB", (64, 64))
        px = img.load()
        for y in range(64):
            for x in range(64):
                px[x, y] = self.pal[d[64 * y + x]]
        return 64, 64, img


# ---------------------------------------------------------------- the faces

def ct(x, y):
    return (S * x, -S * y)


def build_faces(m, pics):
    """[(texture key, light, [triangle ...])]; a triangle is three vertex tuples (x, y, z, nx, ny, nz, u, v); a key is 'F:name' or 'W:name'."""
    faces = []
    for sec, poly in m.floor_pieces():
        sector = m.sector[sec]
        light = sector[4]
        pts = [ct(px, py) for px, py in poly]
        for ceil in (False, True):
            flat = sector[3] if ceil else sector[2]
            if ceil and flat.upper() == "F_SKY1":
                continue
            if ceil and sector[1] - sector[0] < DOOR_GAP:      # a closed door's ceiling, down on its floor
                continue
            if flat.upper() not in pics.flats:
                continue
            h = SY * (sector[1] if ceil else sector[0])
            ny = -1.0 if ceil else 1.0
            vs = [(x, h, z, 0.0, ny, 0.0, x / (S * 64.0), -z / (S * 64.0)) for x, z in pts]
            tris = [(vs[0], vs[k], vs[k + 1]) for k in range(1, len(vs) - 1)]
            faces.append(("F:" + flat.upper(), light, tris))
    for p, q, lo, hi, sec, run, (nx, ny) in m.ramps():            # the ramps over the risers (doom_wad.Map.ramps), textured as the floor they climb to
        sector = m.sector[m.ramp_upper[(p, q)]]                   # (the lower one put the nukage on the way out of its pit)
        if sector[2].upper() not in pics.flats:
            continue
        a = ct(p[0], p[1])
        b = ct(q[0], q[1])
        c2 = ct(q[0] + nx * run, q[1] + ny * run)
        d2 = ct(p[0] + nx * run, p[1] + ny * run)
        P = [(a[0], SY * hi, a[1]), (b[0], SY * hi, b[1]), (c2[0], SY * lo, c2[1]), (d2[0], SY * lo, d2[1])]
        e1 = [P[1][k] - P[0][k] for k in range(3)]
        e2 = [P[3][k] - P[0][k] for k in range(3)]
        n = [e1[1] * e2[2] - e1[2] * e2[1], e1[2] * e2[0] - e1[0] * e2[2], e1[0] * e2[1] - e1[1] * e2[0]]
        ln = math.sqrt(sum(t * t for t in n)) or 1.0
        n = [t / ln for t in n]
        if n[1] < 0:
            n = [-t for t in n]
        vs = [(x, y, z, n[0], n[1], n[2], x / (S * 64.0), -z / (S * 64.0)) for x, y, z in P]
        faces.append(("F:" + sector[2].upper(), sector[4], [(vs[0], vs[1], vs[2]), (vs[0], vs[2], vs[3])]))
    own = {}                                                    # a sector's first wall texture
    for f in m.faces():
        if f[6] not in ("-", "") and f[6].upper() in pics.defs:
            own.setdefault(f[7], f[6])
    for (x1, y1, x2, y2, bottom, top, tex, sec, kind, xoff, yoff) in m.faces():
        if kind == "sky" and tex in ("-", "") and sec in own:     # the side of a sky alcove taller than the next (E1M1's courtyard, sectors 22 and
            kind, tex = "upper", own[sec]                         # 20/47): Doom shows sky there, which left a see-through gap in the courtyard's corner
        # A closed door (a sector whose ceiling is down near its floor) shows as an upper wall from the floor up: the cab drives through
        # it (doom_coldc.py makes no wall of it), so it is not drawn either: an opening the cab can use looks open (doom_wad.Map._upper_kind;
        # the test was this side's floor, which also dropped walls over a ledge's ceiling level with it: a hole to the space under the ledge)
        if kind in ("door", "sky"):                       # "sky": an upper wall between two sky ceilings, which Doom leaves to the sky
            continue
        if tex in ("-", "") or tex.upper() not in pics.defs or top <= bottom:
            continue
        tw, th, _ = pics.defs[tex.upper()]
        ln = math.hypot(x2 - x1, y2 - y1)
        if ln < 1e-6:
            continue
        light = m.sector[sec][4]
        nx, nz = (y2 - y1) / ln, (x2 - x1) / ln               # the face looks to the right of its direction: Doom (dy, -dx) -> (dy, dx) in x, z
        px, pz = ct(x1, y1)
        qx, qz = ct(x2, y2)
        u0, u1 = xoff / float(tw), (xoff + ln) / float(tw)
        v0, v1 = yoff / float(th), (yoff + (top - bottom)) / float(th)        # v runs down from the top
        yb, yt = SY * bottom, SY * top
        a = (px, yt, pz, nx, 0.0, nz, u0, v0)
        b = (qx, yt, qz, nx, 0.0, nz, u1, v0)
        c = (qx, yb, qz, nx, 0.0, nz, u1, v1)
        d = (px, yb, pz, nx, 0.0, nz, u0, v1)
        faces.append(("W:" + tex.upper(), light, [(a, b, c), (a, c, d)]))
    return faces


SKY = "SKY1"                                            # Doom's sky texture (256 x 128, four times round the horizon)
SKY_R = 3500.0                                          # the sky's cylinder around the camera: inside the game's own dome, as ETR's box in tuxmodel.py
SKY_BELOW, SKY_ABOVE = -300.0, 1100.0                  # its bottom and top, from the camera's height: Doom's sky is a picture on the view, not a dome
SKY_SIDES = 16
SKY_SKIRT = -3500.0                                      # the skirt's bottom (45 degrees down)
SKY_REPEAT = 8.0                                         # times the picture goes round: 4 was too zoomed to make anything out (a texel is about square at 8: 2750 round per 256, 1400 up per 128)


def sky_model(slot):
    """Doom's sky as one model at the origin (the layer's doomSky moves it to the camera): a cylinder of SKY_SIDES sides with SKY1 four times
    round it, and a lid at its top coloured by the picture's top row."""
    body = struct.pack("<2I", 0x50, 2 * (SKY_SIDES + 1))
    pts = []
    for i in range(SKY_SIDES + 1):
        a = 2 * math.pi * i / SKY_SIDES
        x, z, u = SKY_R * math.cos(a), SKY_R * math.sin(a), SKY_REPEAT * i / SKY_SIDES
        for y, v in ((SKY_BELOW, 0.999), (SKY_ABOVE, 0.001)):
            body += kit.vertex(x, y, z, 0.0, 1.0, 0.0, u, v)
            pts.append((x, y, z))
    body += struct.pack("<2I", 0x50, 2 * (SKY_SIDES + 1))          # a skirt below it in the picture's bottom row: Doom draws the sky wherever it is
    for i in range(SKY_SIDES + 1):                                 # seen, below the horizon too (an opening low in a wall showed black)
        a = 2 * math.pi * i / SKY_SIDES
        x, z, u = SKY_R * math.cos(a), SKY_R * math.sin(a), SKY_REPEAT * i / SKY_SIDES
        for y in (SKY_SKIRT, SKY_BELOW):
            body += kit.vertex(x, y, z, 0.0, 1.0, 0.0, u, 0.999)
            pts.append((x, y, z))
    body += struct.pack("<2I", 0x50, 2 * (SKY_SIDES + 1))
    for i in range(SKY_SIDES + 1):
        a = 2 * math.pi * i / SKY_SIDES
        for x, z in ((SKY_R * math.cos(a), SKY_R * math.sin(a)), (0.0, 0.0)):
            body += kit.vertex(x, SKY_ABOVE, z, 0.0, 1.0, 0.0, SKY_REPEAT * i / SKY_SIDES, 0.001)
            pts.append((x, SKY_ABOVE, z))
    lo = [min(p[k] for p in pts) for k in range(3)]
    hi = [max(p[k] for p in pts) for k in range(3)]
    c = [(lo[k] + hi[k]) / 2 for k in range(3)]
    r = max(math.sqrt(sum((p[k] - c[k]) ** 2 for k in range(3))) for p in pts) * 1.02
    rec = struct.pack("<4I4fii", 0x800000AC, 0x83000000, 0x2008245B, 0x4C000000, c[0], c[1], c[2], r, kit.FIRST_TEX + slot, -1)    # the walls' record
    rec += struct.pack("<f4f4f", 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0) + struct.pack("<I", len(body))
    return struct.pack("<2I4f", 1, 1, c[0], c[1], c[2], r) + rec + body + b"\0\0\0\0"


def vq_image(img, size=TEX_SIZE):
    """course_kit.vq_image's format and codebook rule, kept as written for Doom's map (the shared one breaks ties between equally near
    codebook entries otherwise: the textures would come out a little different), with numpy (the pure-Python k-means takes about half a
    minute a texture and the map has 54): 256 entries of 2 x 2 texels (top-left, bottom-left, top-right, bottom-right) as ARGB4444, then
    one byte a 2 x 2 block in twiddled block order; exact when the picture has 256 distinct blocks or fewer, else a weighted k-means."""
    import numpy as np
    a = np.asarray(img.convert("RGB").resize((size, size), PIL.Image.LANCZOS), dtype=np.uint8) >> 4        # 4-bit channels, rows of (r, g, b)
    half = size // 2
    texel = np.concatenate([np.full((size, size, 1), 15, dtype=np.uint8), a], axis=2)                      # (a, r, g, b)
    blocks = np.zeros((half, half, 16), dtype=np.int32)
    for k, (dy, dx) in enumerate(((0, 0), (1, 0), (0, 1), (1, 1))):                                        # tl, bl, tr, br
        blocks[:, :, 4 * k:4 * k + 4] = texel[dy::2, dx::2]
    flat = blocks.reshape(-1, 16)
    uniq, inverse, counts = np.unique(flat, axis=0, return_inverse=True, return_counts=True)
    inverse = inverse.reshape(-1)
    if len(uniq) <= 256:
        book = uniq.astype(np.float64)
    else:
        order = np.argsort(-counts, kind="stable")
        cents = uniq[order[(np.arange(256) * len(order)) // 256]].astype(np.float64)
        w = counts.astype(np.float64)
        for _ in range(8):
            d = ((uniq[:, None, :] - cents[None, :, :]) ** 2).sum(axis=2)
            best = d.argmin(axis=1)
            for k in range(256):
                sel = best == k
                if sel.any():
                    cents[k] = (uniq[sel] * w[sel, None]).sum(axis=0) / w[sel].sum()
        book = np.clip(np.rint(cents), 0, 15)
    book = np.clip(np.rint(book), 0, 15).astype(np.int32)
    code = bytearray(256 * 8)
    for k in range(len(book)):
        for t in range(4):
            v = (int(book[k, 4 * t]) << 12) | (int(book[k, 4 * t + 1]) << 8) | (int(book[k, 4 * t + 2]) << 4) | int(book[k, 4 * t + 3])
            struct.pack_into("<H", code, k * 8 + 2 * t, v)
    d = ((uniq[:, None, :] - book[None, :len(book), :]) ** 2).sum(axis=2)
    nearest = d.argmin(axis=1)
    idx = bytearray(half * half)
    bits = half.bit_length() - 1
    for n in range(half * half):
        bx, by = n % half, n // half
        idx[kit.twiddle(bx, by, bits)] = int(nearest[inverse[n]])
    return bytes(code) + bytes(idx)


def build(wad_path, map_name, base, first_tex=kit.FIRST_TEX, spots=None):
    wad = doom_wad.Wad(wad_path)
    m = doom_wad.Map(wad, map_name)
    pics = Pictures(wad)
    faces = build_faces(m, pics)
    keys = sorted(set(k for k, _, _ in faces))
    sky_slot = len(keys)
    keys.append("S:" + SKY)                                   # the sky's picture after the map's: a wall texture to the decoder
    index = {k: i for i, k in enumerate(keys)}
    sky = sky_model(sky_slot)
    tiles = {}
    for key, light, tris in faces:
        for t in tris:
            cx = sum(v[0] for v in t) / 3.0
            cz = sum(v[2] for v in t) / 3.0
            lvl = min(15, max(0, int(light) // 16))
            tiles.setdefault((int(math.floor(cx / TILE)), int(math.floor(cz / TILE))), {}).setdefault((key, lvl), []).append(t)
    models = []
    nrec = 0
    for (ti, tj), recs in sorted(tiles.items()):
        body_all = b""
        pts_all = []
        for (key, lvl), tris in sorted(recs.items()):
            order = kit.stripify([tuple(t) for t in tris])
            body = b""
            pts = []
            for st in order:
                body += struct.pack("<2I", 0x50, len(st))
                for v in st:
                    body += kit.vertex(*v)
                    pts.append(v[:3])
            lo = [min(p[k] for p in pts) for k in range(3)]
            hi = [max(p[k] for p in pts) for k in range(3)]
            c = [(lo[k] + hi[k]) / 2 for k in range(3)]
            r = max(math.sqrt(sum((p[k] - c[k]) ** 2 for k in range(3))) for p in pts) * 1.02
            lum = min(1.0, 0.4 + 0.6 * ((lvl * 16 + 8) / 255.0) ** 0.7)       # the sector's light, lifted (it read dark in the cab's light)
            rec = struct.pack("<4I4fii", 0x800000AC, 0x83000000, 0x2008245B, 0x4C000000, c[0], c[1], c[2], r, first_tex + index[key], -1)
            rec += struct.pack("<f4f4f", 1.0, 1.0, lum, lum, lum, 0.0, 0.0, 0.0, 0.0) + struct.pack("<I", len(body))
            body_all += rec + body
            pts_all += pts
            nrec += 1
        lo = [min(p[k] for p in pts_all) for k in range(3)]
        hi = [max(p[k] for p in pts_all) for k in range(3)]
        c = [(lo[k] + hi[k]) / 2 for k in range(3)]
        r = max(math.sqrt(sum((p[k] - c[k]) ** 2 for k in range(3))) for p in pts_all) * 1.02
        models.append((struct.pack("<2I4f", 1, 1, c[0], c[1], c[2], r) + body_all + b"\0\0\0\0", c[0], c[2], len(recs)))
    nmap = len(models)
    models.append((sky, 0.0, 0.0, 1))                                  # the sky is the last tile: the loader (ctLoadTiles) gives only a tile its textures; the layer draws the map's tiles, then the sky's at the camera
    al = lambda n: (n + 31) & ~31
    tiles_at = 64                                                       # the header: 9 words, the number of the map's tiles the last (the sky's tile follows them); 9-15 are the layer's (doomKeepIn)
    at = al(tiles_at + 16 * len(models))
    offs = []
    for model, _, _, _ in models:
        offs.append(at)
        at = al(at + len(model))
    table_at = at
    spots_at = al(table_at + 16 * len(keys))
    tex_at = al(spots_at + 12 * len(spots or ()))
    out = bytearray(tex_at)
    for n, (sx, sy, sz) in enumerate(spots or ()):                      # the places a customer or a stop may be (doom_coldc.reachable_spots)
        struct.pack_into("<3f", out, spots_at + 12 * n, sx, sy, sz)
    for i, ((model, cx, cz, n), o) in enumerate(zip(models, offs)):
        out[o:o + len(model)] = model
        struct.pack_into("<I2fI", out, tiles_at + 16 * i, o, cx, cz, n)
    for i, key in enumerate(keys):
        kind, name = key.split(":", 1)
        _, _, img = pics.flat(name) if kind == "F" else pics.wall(name)
        size = TEX_SIZE if kind == "F" else WALL_SIZE
        data = vq_image(img, size)
        struct.pack_into("<4I", out, table_at + 16 * i, (size << 16) | size, (3 << 8) | 2, base + len(out), 0)
        out += data
        out += bytes(al(len(out)) - len(out))
    struct.pack_into("<4sIIIIIIII", out, 0, b"TUXR", len(keys), tiles_at, table_at, first_tex, len(models), spots_at, len(spots or ()), nmap)
    tris = sum(len(t) for _, _, t in faces)
    return bytes(out), keys, tris, nrec, len(models)


if __name__ == "__main__":
    blob, keys, tris, nrec, ntiles = build(sys.argv[1], sys.argv[2], int(sys.argv[3], 0))
    open(sys.argv[4], "wb").write(blob)
    print("%s: %d triangles, %d records in %d tiles, %d textures (%d walls, %d flats), %d bytes"
          % (sys.argv[2], tris, nrec, ntiles, len(keys), sum(1 for k in keys if k[0] == "W"), sum(1 for k in keys if k[0] == "F"), len(blob)))
