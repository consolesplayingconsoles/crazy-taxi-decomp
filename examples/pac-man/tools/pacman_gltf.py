#!/usr/bin/env python3
"""The maze of a glTF Pac-Man level (Sketchfab "Pac-Man Level (Namco) (NES)" by Alfking49, CC BY 4.0) as what the course tools take: the footprint
of every wall block as a closed ring, in the model's own units, and which rings lie inside which.

    pacman_gltf.py <scene.gltf> [material name part, default "maze"]

The walls are vertical sheets with no top: a ring is the chain of the sheets' bottom edges (the edges at the lowest height that only one
triangle uses). Every ring is returned counter-clockwise in (x, z). In this file all 21 rings are blocks and none lies inside another (the
outer frame is two C-shaped blocks, the gap between them the side tunnel), so each can be capped as a simple polygon. Nothing is drawn or
moved here: this only reads the file."""
import json
import math
import os
import struct
import sys


def accessor(g, buf, i):
    a = g["accessors"][i]
    bv = g["bufferViews"][a["bufferView"]]
    off = bv.get("byteOffset", 0) + a.get("byteOffset", 0)
    k = {"SCALAR": 1, "VEC2": 2, "VEC3": 3}[a["type"]]
    fmt = {5126: "f", 5123: "H", 5125: "I"}[a["componentType"]]
    st = bv.get("byteStride") or k * struct.calcsize(fmt)
    return [struct.unpack_from("<%d%s" % (k, fmt), buf, off + j * st) for j in range(a["count"])]


def maze_mesh(path, part="maze"):
    """(positions, triangle indices) of the mesh whose name has `part` in it."""
    g = json.load(open(path))
    buf = open(os.path.join(os.path.dirname(path), g["buffers"][0]["uri"]), "rb").read()
    for m in g["meshes"]:
        if part in m.get("name", ""):
            p = m["primitives"][0]
            return accessor(g, buf, p["attributes"]["POSITION"]), [x[0] for x in accessor(g, buf, p["indices"])]
    raise SystemExit("[ERROR] no mesh named like %r in %s" % (part, path))


def load_glb(path):
    """(json, binary chunk) of a .glb."""
    d = open(path, "rb").read()
    jl = struct.unpack_from("<I", d, 12)[0]
    g = json.loads(d[20:20 + jl])
    bl = struct.unpack_from("<I", d, 20 + jl)[0]
    return g, d[28 + jl:28 + jl + bl]


def mat_mul(a, b):
    """glTF 4 x 4 matrices (column-major lists of 16): a * b."""
    return [sum(a[k * 4 + r] * b[c * 4 + k] for k in range(4)) for c in range(4) for r in range(4)]


def node_world(g, i, parents):
    """The matrix of node i in the scene: its own matrix (or translation, rotation, scale) after its parents'."""
    n = g["nodes"][i]
    if "matrix" in n:
        m = list(n["matrix"])
    else:
        t, q, sc = n.get("translation", [0, 0, 0]), n.get("rotation", [0, 0, 0, 1]), n.get("scale", [1, 1, 1])
        x, y, z, w = q
        r = [1 - 2 * (y * y + z * z), 2 * (x * y + z * w), 2 * (x * z - y * w), 0, 2 * (x * y - z * w), 1 - 2 * (x * x + z * z), 2 * (y * z + x * w), 0,
             2 * (x * z + y * w), 2 * (y * z - x * w), 1 - 2 * (x * x + y * y), 0, 0, 0, 0, 1]
        m = [r[0] * sc[0], r[1] * sc[0], r[2] * sc[0], 0, r[4] * sc[1], r[5] * sc[1], r[6] * sc[1], 0, r[8] * sc[2], r[9] * sc[2], r[10] * sc[2], 0, t[0], t[1], t[2], 1]
    return mat_mul(node_world(g, parents[i], parents), m) if i in parents else m


def glb_mesh(path, part, skip=0):
    """(positions, normals, triangle indices, base colour, local-origin position, local +x direction) of the mesh whose name has `part` in it (the
    skip-th such mesh, from 0),
    in the scene (every node matrix applied: the file's Pac-Man is a unit sphere under a scale of 100 and a parent of 0.01). The origin and the
    +x direction are where the mesh's own centre and its +x axis end up. The colour is the material's factor as 8-bit sRGB."""
    g, b = load_glb(path)
    parents = {c: i for i, n in enumerate(g["nodes"]) for c in n.get("children", [])}
    for i, n in enumerate(g["nodes"]):
        if "mesh" in n and part in g["meshes"][n["mesh"]].get("name", "") and skip > 0:
            skip -= 1
            continue
        if "mesh" in n and part in g["meshes"][n["mesh"]].get("name", ""):
            m = node_world(g, i, parents)
            p = g["meshes"][n["mesh"]]["primitives"][0]
            pos = accessor(g, b, p["attributes"]["POSITION"])
            nor = accessor(g, b, p["attributes"]["NORMAL"])
            idx = [x[0] for x in accessor(g, b, p["indices"])]
            wp = [tuple(sum(m[k * 4 + r] * (v[k] if k < 3 else 1.0) for k in range(4)) for r in range(3)) for v in pos]
            # normals by the inverse transpose of the matrix's 3 x 3
            a = [[m[c * 4 + r] for c in range(3)] for r in range(3)]
            det = (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]))
            inv = [[(a[(c + 1) % 3][(r + 1) % 3] * a[(c + 2) % 3][(r + 2) % 3] - a[(c + 1) % 3][(r + 2) % 3] * a[(c + 2) % 3][(r + 1) % 3]) / det for c in range(3)] for r in range(3)]
            wn = []
            for v in nor:
                q = [sum(inv[k][r] * v[k] for k in range(3)) for r in range(3)]   # (inverse transposed) * v
                ln = math.sqrt(sum(c * c for c in q)) or 1.0
                wn.append(tuple(c / ln for c in q))
            f = g["materials"][p["material"]]["pbrMetallicRoughness"]["baseColorFactor"][:3]
            srgb = tuple(int(round(255 * (12.92 * c if c <= 0.0031308 else 1.055 * c ** (1 / 2.4) - 0.055))) for c in f)
            return wp, wn, idx, srgb, (m[12], m[13], m[14]), (m[0], m[1], m[2])
    raise SystemExit("[ERROR] no mesh named like %r in %s" % (part, path))


def decimate(pos, nor, idx, target):
    """The mesh with its vertices clustered on a grid, the cell as small as keeps it at `target` triangles or fewer: the vertices of a cell become one
    (their mean position and mean normal), the triangles that collapse or repeat go. Returns (positions, normals, triangle index list)."""
    def cluster(cell):
        cells, rep = {}, {}
        for i, p in enumerate(pos):
            cells.setdefault((int(p[0] // cell), int(p[1] // cell), int(p[2] // cell)), []).append(i)
        np_, nn = [], []
        for vs in cells.values():
            n = len(vs)
            np_.append(tuple(sum(pos[i][k] for i in vs) / n for k in range(3)))
            q = [sum(nor[i][k] for i in vs) for k in range(3)]
            ln = math.sqrt(sum(c * c for c in q)) or 1.0
            nn.append(tuple(c / ln for c in q))
            for i in vs:
                rep[i] = len(np_) - 1
        seen, tris = set(), []
        for k in range(0, len(idx), 3):
            t = (rep[idx[k]], rep[idx[k + 1]], rep[idx[k + 2]])
            if len(set(t)) < 3 or tuple(sorted(t)) in seen:
                continue
            seen.add(tuple(sorted(t)))
            tris += list(t)
        return np_, nn, tris
    if len(idx) // 3 <= target:
        return pos, nor, idx
    lo, hi = 1e-4, max(max(p[k] for p in pos) - min(p[k] for p in pos) for k in range(3))
    best = cluster(hi)
    for _ in range(24):
        mid = math.sqrt(lo * hi)
        r = cluster(mid)
        if len(r[2]) // 3 <= target:
            best, hi = r, mid
        else:
            lo = mid
    return best


def area(ring):
    return 0.5 * sum(p[0] * q[1] - q[0] * p[1] for p, q in zip(ring, ring[1:] + ring[:1]))


def rings(pos, idx, tol=0.005):
    """The wall footprints: closed chains of the bottom edges, each corner an (x, z) pair. The bottom is the lowest height of the mesh."""
    floor = min(v[1] for v in pos)
    key = lambda v: (round(v[0] / tol), round(v[2] / tol))
    uses = {}
    for k in range(0, len(idx), 3):
        t = [pos[idx[k + j]] for j in range(3)]
        for a, b in ((0, 1), (1, 2), (2, 0)):
            if abs(t[a][1] - floor) < 0.05 and abs(t[b][1] - floor) < 0.05:
                e = (key(t[a]), key(t[b]))
                uses.setdefault(frozenset(e), []).append(e)
    nxt = {}
    xz = {}
    for es in uses.values():
        if len(es) == 1:                                # an edge only one triangle uses is a boundary of the sheet
            a, b = es[0]
            nxt.setdefault(a, []).append(b)
    for v in pos:
        xz[key(v)] = (v[0], v[2])
    out, seen = [], set()
    for start in list(nxt):
        if start in seen:
            continue
        chain, cur = [start], start
        while True:
            seen.add(cur)
            n = [c for c in nxt.get(cur, []) if c not in seen or c == start]
            if not n:
                break
            cur = n[0]
            if cur == start:
                break
            chain.append(cur)
        if len(chain) >= 3 and cur == start:
            r = [xz[c] for c in chain]
            out.append(r if area(r) > 0 else r[::-1])
    return out


def inside(p, ring):
    x, z = p
    c = False
    for a, b in zip(ring, ring[1:] + ring[:1]):
        if (a[1] > z) != (b[1] > z) and x < (b[0] - a[0]) * (z - a[1]) / (b[1] - a[1]) + a[0]:
            c = not c
    return c


if __name__ == "__main__":
    pos, idx = maze_mesh(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else "maze")
    rs = rings(pos, idx)
    ys = sorted({round(v[1], 2) for v in pos})
    print("%d triangles, heights %s, %d rings, %d corners" % (len(idx) // 3, ys, len(rs), sum(len(r) for r in rs)))
    for n, r in enumerate(rs):
        depth = sum(1 for o, q in enumerate(rs) if o != n and inside(r[0], q))
        xs, zs = [p[0] for p in r], [p[1] for p in r]
        print("ring %2d: %4d corners, area %9.2f, %s, inside %d, x %.1f..%.1f z %.1f..%.1f" % (
            n, len(r), area(r), "ccw" if area(r) > 0 else "cw ", depth, min(xs), max(xs), min(zs), max(zs)))
