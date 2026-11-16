#!/usr/bin/env python3
"""What the Crazy Taxi mods' course tools share, whatever the course (Tux Racer's terrain, Doom's map, Snake Way): the game's records for a
course's model and collision, as the layers' C reads them (layers/course-kit/src/course_kit.h is its C side).

    the model: PCW, TSP, TREE_PCW, TREE_TSP, FIRST_TEX; vertex(), stripify(), twiddle(), vq_image()
    the collision: surface(), inside(), put_walls()

The record layout is the decomp's (docs/engine.md, "A record is the SDK's NL_PF_GloblParamType2"; "The ground and the swept move")."""
import math
import struct

import numpy as np
import PIL.Image

LOAD = 0x0CB40000                                       # where the game reads COLDCn.BIN: its pointers are absolute
PCW = 0x800000AC                                        # polygon list 0 (opaque), as the game's own opaque models
TSP = 0x2008245B                                        # blend one / zero
TREE_PCW = 0x820000AC                                   # polygon list 2 (translucent), as the game's own billboards (PCW 0x82......)
TREE_TSP = 0x9401A440                                   # blend source alpha, inverse source alpha (what their 415 records have; u and v clamped)
FIRST_TEX = 1975                                        # the game's texture slots are free from 1938 to 1999 (the mod renumbers to a free run)
CHUNK = 1024                                            # vq_image's distances are taken in chunks of this many blocks


# ---------------------------------------------------------------- the model

def vertex(x, y, z, nx, ny, nz, u, v):
    """A full 32-byte vertex: bit 0 set on its first word (x) and its last (v), as in every full vertex of the game's own models: the clipping
    routines tell a 32-byte vertex from a 2-word reference by them, forwards by the first and backwards by the last (nl_objasm_*_sidx)."""
    return struct.pack("<I6fI", struct.unpack("<I", struct.pack("<f", x))[0] | 1, y, z, nx, ny, nz, u, struct.unpack("<I", struct.pack("<f", v))[0] | 1)


def stripify(tris):
    """Greedy triangle strips (snake-way/tools/cab_parts.py): a strip grows by a triangle sharing its last two vertices; no culling, so winding does not matter."""
    edge = {}
    for n, t in enumerate(tris):
        for e in ((t[0], t[1]), (t[1], t[2]), (t[2], t[0])):
            edge.setdefault((min(e), max(e)), []).append(n)
    done = [False] * len(tris)
    out = []
    for n in range(len(tris)):
        if done[n]:
            continue
        best = None
        for r in range(3):
            t = tris[n]
            st = [t[r], t[(r + 1) % 3], t[(r + 2) % 3]]
            seen = {n}
            while True:
                nxt = None
                for m in edge.get((min(st[-2], st[-1]), max(st[-2], st[-1])), []):
                    if m not in seen and not done[m]:
                        nxt = m
                        break
                if nxt is None:
                    break
                seen.add(nxt)
                st.append([v for v in tris[nxt] if v != st[-2] and v != st[-1]][0])
            if best is None or len(st) > len(best[0]):
                best = (st, seen)
        st, seen = best
        for m in seen:
            done[m] = True
        out.append(st)
    return out


def twiddle(x, y, bits):
    """The PowerVR's twiddled order: x's and y's bits interleaved."""
    i = 0
    for k in range(bits):
        i |= ((x >> k) & 1) << (2 * k + 1)
        i |= ((y >> k) & 1) << (2 * k)
    return i


def _nearest(points, cents):
    out = np.empty(len(points), dtype=np.int64)
    c2 = (cents ** 2).sum(axis=1)
    for i in range(0, len(points), CHUNK):
        p = points[i:i + CHUNK].astype(np.float64)
        out[i:i + CHUNK] = (c2[None, :] - 2.0 * p @ cents.T).argmin(axis=1)         # |p|^2 is the same for every entry
    return out


def _with_alpha(img, size):
    """The picture's own alpha as the texels' (4 bits), its colour under the see-through parts taken from the opaque ones (so the edges
    do not darken when they are filtered)."""
    rgba = img.convert("RGBA")
    al = rgba.getchannel("A")
    rgb = rgba.convert("RGB")
    px = np.asarray(rgb, dtype=np.float64).reshape(-1, 3)
    wt = np.asarray(al, dtype=np.float64).reshape(-1) / 255.0
    mean = (px * wt[:, None]).sum(axis=0) / max(wt.sum(), 1.0)
    fill = PIL.Image.new("RGB", rgb.size, tuple(int(round(t)) for t in mean))
    rgb = PIL.Image.composite(rgb, fill, al)
    return np.asarray(rgb.resize((size, size), PIL.Image.LANCZOS), dtype=np.uint8) >> 4, np.asarray(al.resize((size, size), PIL.Image.LANCZOS), dtype=np.uint8) >> 4


def vq_image(img, size, alpha=False):
    """A picture as the Dreamcast's VQ ARGB4444 (a codebook of 256 entries of 2 x 2 texels, then one byte a 2 x 2 block in twiddled block
    order), size x size: exact when the picture has 256 distinct blocks or fewer, else a weighted k-means (8 rounds) over the distinct blocks,
    the distances taken in chunks so the peak memory stays small. With alpha, the picture's own (else opaque)."""
    if alpha:
        a, al = _with_alpha(img, size)
    else:
        a, al = np.asarray(img.convert("RGB").resize((size, size), PIL.Image.LANCZOS), dtype=np.uint8) >> 4, np.full((size, size), 15, dtype=np.uint8)
    half = size // 2
    texel = np.concatenate([al[:, :, None], a], axis=2)                                                    # (a, r, g, b)
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
            best = _nearest(uniq, cents)
            for k in range(256):
                sel = best == k
                if sel.any():
                    cents[k] = (uniq[sel] * w[sel, None]).sum(axis=0) / w[sel].sum()
        book = cents
    book = np.clip(np.rint(book), 0, 15).astype(np.int32)
    code = bytearray(256 * 8)
    for k in range(len(book)):
        for t in range(4):
            v = (int(book[k, 4 * t]) << 12) | (int(book[k, 4 * t + 1]) << 8) | (int(book[k, 4 * t + 2]) << 4) | int(book[k, 4 * t + 3])
            struct.pack_into("<H", code, k * 8 + 2 * t, v)
    nearest = _nearest(uniq, book.astype(np.float64))
    idx = bytearray(half * half)
    bits = half.bit_length() - 1
    for n in range(half * half):
        idx[twiddle(n % half, n // half, bits)] = int(nearest[inverse[n]])
    return bytes(code) + bytes(idx)


def vq_image_mip(img, size, alpha=False):
    """vq_image's picture with its mipmaps, as the Dreamcast's mipmapped VQ (table type 4): the codebook, then one byte for the 1 x 1 level,
    then each level from 2 x 2 up as bytes of 2 x 2 blocks in twiddled block order (size / 2 of them last, then the picture's own as
    vq_image has it), each level the picture averaged down and every block given the nearest entry of the picture's own codebook. Drawn
    far away or at a shallow angle a picture without them breaks into stray texels (the farm fields seen across the water, Namek)."""
    data = vq_image(img, size, alpha)
    code, top = data[:2048], data[2048:]
    book = np.array([[(struct.unpack_from("<H", code, k * 8 + 2 * t)[0] >> sh) & 15 for t in range(4) for sh in (12, 8, 4, 0)]
                     for k in range(256)], dtype=np.float64)
    if alpha:
        a, al = _with_alpha(img, size)
    else:
        a, al = np.asarray(img.convert("RGB").resize((size, size), PIL.Image.LANCZOS), dtype=np.uint8) >> 4, np.full((size, size), 15, dtype=np.uint8)
    texel = np.concatenate([al[:, :, None], a], axis=2).astype(np.float64)                              # (a, r, g, b)
    out = bytearray()
    s = 1
    while s < size:
        f = size // s
        level = texel.reshape(s, f, s, f, 4).mean(axis=(1, 3))                                          # the picture at s x s
        if s == 1:
            out.append(int(_nearest(np.tile(level.reshape(1, 4), (1, 4)), book)[0]))
        else:
            half = s // 2
            blocks = np.zeros((half, half, 16))
            for k, (dy, dx) in enumerate(((0, 0), (1, 0), (0, 1), (1, 1))):
                blocks[:, :, 4 * k:4 * k + 4] = level[dy::2, dx::2]
            near = _nearest(blocks.reshape(-1, 16), book)
            idx = bytearray(half * half)
            bits = half.bit_length() - 1
            for n in range(half * half):
                idx[twiddle(n % half, n // half, bits)] = int(near[n])
            out += idx
        s *= 2
    return code + bytes(out) + top


# ---------------------------------------------------------------- the collision

def surface(tri, kind=0):
    """tri: three (x, y, z); the 76-byte surface record, wound so GetCollision2DHeight's edge tests pass inside the triangle: the plane
    (a, b, c, d: y = -(a x + c z + d) / b), a radius the first corner must be within, four corners (a triangle is a quad whose last two are the
    same), a kind and a shape. Kind 0 is plain ground; 14 is water (Original's sea fog starts when the camera is under -30 with a wheel on it:
    Exec_SeaFog)."""
    a, b, c = tri
    u = [b[i] - a[i] for i in range(3)]
    v = [c[i] - a[i] for i in range(3)]
    n = [u[1] * v[2] - u[2] * v[1], u[2] * v[0] - u[0] * v[2], u[0] * v[1] - u[1] * v[0]]
    if n[1] < 0:                                        # up
        n = [-t for t in n]
    length = math.sqrt(sum(t * t for t in n))
    n = [t / length for t in n]
    d = -(n[0] * a[0] + n[1] * a[1] + n[2] * a[2])
    for corners in ((a, b, c, c), (a, c, b, b)):
        radius = max(math.hypot(p[0] - a[0], p[2] - a[2]) for p in corners) + 1.0
        s = struct.pack("<5f12f2i", n[0], n[1], n[2], d, radius, *[t for p in corners for t in p], kind, 4)
        if inside(s, (a[0] + b[0] + c[0]) / 3, (a[2] + b[2] + c[2]) / 3):
            return s
    raise SystemExit("[ERROR] a triangle fails the game's own ground test: %r" % (tri,))


def inside(s, x, z):
    """GetCollision2DHeight's tests (shape 4), for choosing the winding."""
    e = struct.unpack("<19f", s[:76])
    dx = [e[5] - x, e[8] - x, e[11] - x, e[14] - x]
    dz = [e[7] - z, e[10] - z, e[13] - z, e[16] - z]
    return (dx[0] * dz[1] - dz[0] * dx[1] >= 0 and dx[1] * dz[2] - dz[1] * dx[2] >= 0
            and dz[3] * dx[2] - dx[3] * dz[2] >= 0 and dz[0] * dx[3] - dx[0] * dz[3] >= 0)


def put_walls(b, w, walls, wa, at0, poles=()):
    """Writes the walls and the poles from at0, then their cells (a halfword count of walls, one of poles, then the walls' pointers, then the
    poles'), every wall in each cell within a cell of its line and every pole in the cells around it, and points the wall grid (its header w,
    its cell array at wa) at them. A wall is CheckColliWallSegment's eight floats (src/collide.c: a, b the normal, positive inside, the end
    point x, z, d, the top, the bottom, the length; it runs from its end point along (-b, a)): walls is [(floats, (x0, z0, x1, z1))]. A pole
    is 32 bytes (two words, then x, z at +8, +12, the radius at +16, the top at +20, the bottom at +24: CheckColliWallPole); poles are
    (x, z, radius, top, bottom). Returns the bytes used."""
    wx, wz, wcols, wrows, size = w[0], w[1], w[4], w[5], w[7]
    at = at0
    ptr = []
    for floats, _ in walls:
        struct.pack_into("<8f", b, at, *floats)
        ptr.append(LOAD + at)
        at += 32
    pptr = []
    for x, z, r, top, bottom in poles:
        struct.pack_into("<2I5fI", b, at, 0, 0, x, z, r, top, bottom, 0)
        pptr.append(LOAD + at)
        at += 32
    cells = {}
    for k, (_, (ax, az, bx, bz)) in enumerate(walls):
        for cz in range(int(math.floor(min(az, bz) / size)) - 1, int(math.floor(max(az, bz) / size)) + 2):
            for cx in range(int(math.floor(min(ax, bx) / size)) - 1, int(math.floor(max(ax, bx) / size)) + 2):
                if wx <= cx < wx + wcols and wz <= cz < wz + wrows:
                    cells.setdefault((cx, cz), ([], []))[0].append(k)
    for k, (x, z, r, top, bottom) in enumerate(poles):
        for cz in range(int(math.floor((z - r) / size)), int(math.floor((z + r) / size)) + 1):
            for cx in range(int(math.floor((x - r) / size)), int(math.floor((x + r) / size)) + 1):
                if wx <= cx < wx + wcols and wz <= cz < wz + wrows:
                    cells.setdefault((cx, cz), ([], []))[1].append(k)
    for (cx, cz), (ks, ps) in sorted(cells.items()):
        struct.pack_into("<2H", b, at, len(ks), len(ps))
        for n, k in enumerate(ks):
            struct.pack_into("<I", b, at + 4 + 4 * n, ptr[k])
        for n, k in enumerate(ps):
            struct.pack_into("<I", b, at + 4 + 4 * (len(ks) + n), pptr[k])
        struct.pack_into("<I", b, wa + 4 * ((cz - wz) * wcols + (cx - wx)), LOAD + at)
        at += 4 + 4 * (len(ks) + len(ps))
    return at - at0
