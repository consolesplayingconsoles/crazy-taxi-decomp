#!/usr/bin/env python3
"""Map the 3D models in a Dreamcast game's disc files and say what the executable calls them. Stdlib only.

    model_map.py <1ST_READ.BIN> <base hex> <functions.txt> <disc.gdi> <out dir> [models.txt]

Models are the NAOMI library's flat format (`nlObjPut`'s: records of PowerVR polygon words and strips), and Ninja chunk
models (the Ninja library's NJCM chunks, with the texture names of the NJTL chunk before them). Each disc file that holds flat models is
loaded at an address the executable's tables point into: that address is found by matching those
pointers to the models' starts, then every pointer to a model is followed back to the table that holds
it, and the table is named by (1) a rule in models.txt (curated: a table whose layout is known),
(2) a data symbol, (3) the functions that use the table.

Writes <out dir>/game.dcgs (tab-separated text in sections, for a model viewer or a spreadsheet): `# dcgs <version>` (the skill version
that wrote it: the repo's KICKOFF file, or the skill's VERSION file when run from the skill), `# sha1`
(of the executable), `# base`, `# sections ...`, then each section as `[name]`, a header row and its rows:
  [models]       one row per model: file offset bytes records radius group sub sublabel name table index used_by texset
                 (a Ninja model: file is its disc path, offset its NJCM chunk, records its object count)
                 (sub is the id of its table or collection, sublabel its name if it has one; name is the model's own name,
                 empty when it has none; every name is tidied: no parentheses, each word capitalised; texset is the
                 texture set it takes its textures from, empty when its file's rows apply)
  [assemblies]   one row per placed part (`assemble` and `nodes` rules): group sub part file offset, then a 3x4 matrix
                 row by row
  [rigs]         one row per skeleton: rig kind (bones or nodes) group motion_file motion_format (v, or empty) pose_offset
                 pose_record (the motion and record the assemblies were posed with; empty for a bind pose)
  [bones]        one row per bone: rig sub bone parent part x y z (sub: the character's sub-group for a node tree, empty
                 for a bone rig's one shared tree; bone: the bone's number, or a node's first index in its list; parent:
                 the parent's, empty for a root; part: the label of the part it carries, as in [assemblies] (a node
                 tree's is its index); x y z: its rest offset in the parent's axes)
  [welds]        one row per welded vertex of a node tree, in drawing order: rig sub node src_node src_vertex dst_vertex
                 (nodes by list index; the vertices are file offsets in their model file: dst takes src's posed position)
  [motionbones]  one row per motion bone of a `motionskel` rig: rig bone order x y z (order 1: Rz(-z) * Ry(y), 0:
                 Ry(y) * Rz(-z), then Rx(x); x y z: the bone's offset, applied as T(x*s, y*s, -z*s), s the scale)
  [poses]        one row per `pose` rule, in rule order: rig node parent steps (parent `-` for the character's own
                 place; a copy is parent `=` and steps the node it copies)
  [scales]       one row per character of a `scale` rule's rig: rig sub scale
  [textures]     one row per texture (`textures` rules): model file, number, texture file, offset, size, width, height,
                 PVR data type, pixel format, set (empty for a model file's own list, the set's index for a `texturesets`
                 rule's lists: a model with that texset looks its texture numbers up in those rows)
  [audio]        one row per sound found: file, entry (the index in an archive), offset, bytes, format (ADX, AHX, or a
                 DTPK sound bank), channels, sample rate, samples, seconds, name. Sounds are found by their headers: CRI
                 ADX / AHX streams inside AFS archives or on their own. A sound has no name unless a `sound` rule gives it one.
The name is a starting point for a person to check.

models.txt (curated rules, one per line, `#` comments, `_` is a space in labels):
  array <addr> <count> <group> <label>          pointers at addr + 4*i: "<label> <i>"
  chars <addr> <count> <group> <slot:label,...> a table of pointers to arrays of part pointers
  extra <group> <id> <slot> <model addr> <label>
                                                one more model a character of a `chars` group draws on a slot's matrix
                                                (e.g. picked by character number in code): filed under the character
                                                (named <label>) and placed with that slot in [assemblies] (its part
                                                column is the slot's label)
  sound <file> <entry> <text...>                names one sound (the entry is the index in its archive; 0 for a stand-alone file)
  name <model file> <offset hex> <text...>      names one model (the offset is the one in its id: FILE:offset)
  table <addr hex> <group> <label>              puts every model of the table at addr under that group and label
  note <group> <first id> <last id> <text>      adds " (<text>)" to the sub-group of characters first..last
  rig <name> <motion file> <file base hex> <motion header addr hex> <record>
                                                a skeleton posed from one record of a V-format motion
  bone <rig> <bone> <parent|-> <offset addr|->  a bone: its parent and the 3 floats at <offset addr> (bind offset)
  assemble <rig> <group>                        each character of <group> (a `chars` rule) placed on the rig, one
                                                part per slot = bone, into the [assemblies] section
  nodes <rig> <table addr> <count> <entry size> <list offset> <nodes per entry> <group>
                                                a node tree per character: count entries of entry size bytes, each with a
                                                pointer at list offset to an array of node pointers (null = no node); one
                                                character per entry under group, its index as the sub-group (addresses,
                                                sizes and offsets hex, counts decimal)
  nodelayout <rig> model=<off> pos=<off> rot=<off>:<unit>:<order> child=<off> sibling=<off> parent=<off>
                                                where a node holds its model pointer, bind position (3 floats, parent's
                                                axes), bind rotation (3 floats x y z; unit deg or rad; order as applied,
                                                zyx = Rz * Ry * Rx) and links (pointers, null = none); local = T(pos) * R,
                                                world = parent's world * local; optional weld=<src node>:<count>:<src
                                                offsets>:<dst offsets> (where a node holds the node it welds from, how
                                                many vertices, and two arrays of byte offsets into the source's and its
                                                own model: [welds])
  textures <model file> <texture file>          pairs a model file with a texture file of another name (e.g. an archive of
                                                a city with that city's textures); the list in the executable that fits the
                                                texture file's size is found by itself
  textures <model file> <texture file> <texture base hex> <table addr hex>
                                                a list of 16-byte entries (height << 16 | width, data type << 8 | pixel
                                                format, data address, x) in the
                                                executable, indexed by the texture number in the model file's records;
                                                written to the [textures] section (number -> offset in the texture file)
  motionskel <rig> <header offset hex> <motion file> <format>
                                                the rig's motions: in <motion file>, format e16 (a motion: key count,
                                                root and rotation key offsets, keys per frame, root tracks, 3 root
                                                divisors; keys of 3 s16 a track or bone, 0x10000 = a turn); the
                                                skeleton header at <header offset> in that file holds file offsets of
                                                the order flags, the bone count, and the bone offsets (+0, +4, +0x10)
  scale <rig> <table addr> <entry size hex> <offset hex>
                                                each character's scale: a float at table + i * entry size + offset
  pose <rig> <node> <parent node|-> <step>...   how the game builds a node's matrix from its parent's (- = the
                                                character's place), steps in order: root (T(x/dx, y/dy, -z/dz) from root
                                                track 0), rot:<b> (bone b's rotation), bone:<b> (its offset, then its
                                                rotation), rx: / ry: / rz:<hex angle> (signed, 0x10000 = a turn),
                                                t:<x>,<y>,<z> (times the scale), bind (the node's bind pose relative to
                                                its parent, alone on the line); `pose <rig> <node> = <node>` copies a
                                                matrix; a node without a line is not drawn (the game leaves its matrix
                                                zero); a line for a node a character lacks is skipped
  texturesets <model lists addr> <texture lists addr> <count> <file names addr> <texture base hex>
                                                three tables of count pointers: entry i of the first is a list of model
                                                pointers (ending at the next list's start, a null, or any of the three
                                                tables), of the second a texture list (16-byte entries as in `textures`,
                                                ending at a zero entry), of the third a file name (C string); the models
                                                of list i take texture list i, whose data addresses minus texture base are
                                                offsets in file i (per-character textures for models sharing one file)
  structs <addr> <stride> <count> <namestr off> <group> <off:label,...>  records with model pointers
"""
import bisect
import collections
import hashlib
import math
import os
import random
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gdi_read  # noqa: E402

CONTROL = re.compile(rb".\x00\x00[\x80-\x83]", re.S)
MAX_FILE = 16 << 20
SKIP = (".ADX", ".SFD", ".WAV", ".MP2", ".AHX", ".SFA")


def A(a):
    """An address with its RAM mirror bits dropped: 0x8C..., 0xAC... and 0x0C... name the same cached RAM."""
    return a & 0x1FFFFFFF if (a >> 24) in (0x0C, 0x8C, 0xAC) else a


def tidy(text):
    """The naming convention, applied to every name a person gives or a rule supplies: words separated by single spaces
    (underscores and camelCase become spaces), each word starting with a capital, no parentheses or brackets.
    Ids (hex offsets, table addresses, the game's own identifiers) are not names and are left as they are."""
    text = re.sub(r"[()\[\]]", "", text).replace("_", " ")
    text = re.sub(r"(?<=[a-z0-9])(?=[A-Z])", " ", text)
    return " ".join(w[:1].upper() + w[1:] for w in text.split())


def f32(w):
    return struct.unpack("<f", struct.pack("<I", w))[0]


def record_at(w, n, i):
    if i < 6 or i + 20 > n or w[i] & 0xFCFFFF00 != 0x80000000 or w[i + 1] >> 28 < 8:
        return 0
    ln = w[i + 19]
    if ln == 0 or ln & 3 or ln > 0x400000 or i + 20 + ln // 4 > n:
        return 0
    return 20 + ln // 4


def record_ok(w, i):
    """The strip data of the record at word i adds up exactly to its length (see the model viewer's reader)."""
    p, e = i + 20, i + 20 + w[i + 19] // 4
    seen = set()
    while p < e:
        if p + 2 > e or w[p] >= 0x1000 or not 0 < w[p + 1] <= 200:
            return False
        count, p, k = w[p + 1], p + 2, 0
        while k < count or (p < e and not (w[p] < 0x1000 and 0 < w[p + 1] <= 200)):
            k += 1
            if p + 2 > e:
                return False
            f = f32(w[p])
            if f != f or abs(f) > 1e9:
                off = struct.unpack("<i", struct.pack("<I", w[p + 1]))[0]
                if (p * 4 + off + 8) // 4 not in seen:
                    return False
                p += 2
            else:
                if p + 8 > e:
                    return False
                seen.add(p)
                p += 8
    return p == e


def ninja_objects(data, base, size):
    """Object offsets of the NJCM tree whose root sits at the start of the chunk data (pointers count from there), or
    None when it is not a plausible tree. Object: eval flags, model, position (3 floats), angles, scale (3 floats),
    child, sibling (0x34 bytes)."""
    out, seen, todo = [], set(), [0]
    while todo:
        o = todo.pop()
        if o & 3 or o + 0x34 > size or o in seen or len(out) > 2048:
            return None
        seen.add(o)
        out.append(o)
        p = base + o
        flags, model = struct.unpack_from("<2I", data, p)
        child, sib = struct.unpack_from("<2I", data, p + 44)
        if flags > 0x3FF or (model and (model & 3 or model + 0x18 > size)):
            return None
        for k, lim in ((8, 1e6), (12, 1e6), (16, 1e6), (32, 1e4), (36, 1e4), (40, 1e4)):
            v = struct.unpack_from("<f", data, p + k)[0]
            if v != v or abs(v) > lim:
                return None
        if sib:
            todo.append(sib)
        if child:
            todo.append(child)
    return out


def ninja_names(data, base, size):
    """The texture names of an NJTL chunk's data."""
    if size < 8:
        return []
    lst, n = struct.unpack_from("<2I", data, base)
    if n > 1024 or lst + n * 12 > size:
        return []
    out = []
    for i in range(n):
        at = struct.unpack_from("<I", data, base + lst + i * 12)[0]
        if at >= size:
            out.append("")
            continue
        end = data.find(b"\0", base + at, base + min(size, at + 64))
        out.append(data[base + at:end if end >= 0 else base + min(size, at + 64)].decode("ascii", "replace"))
    return out


def find_ninja(data):
    """[(byte offset of the NJCM chunk, bytes, objects, radius, texture names)] of every Ninja chunk model in data."""
    out, names, p = [], [], 0
    while True:
        p = data.find(b"NJ", p)
        if p < 0 or p + 8 + 0x34 > len(data):
            return out
        if p % 4:
            p += 1
            continue
        tag, size = data[p + 2:p + 4], struct.unpack_from("<I", data, p + 4)[0]
        if tag == b"TL" and p + 8 + size <= len(data):
            names = ninja_names(data, p + 8, size)
        elif tag == b"CM" and p + 8 + size <= len(data):
            objs = ninja_objects(data, p + 8, size)
            if objs:
                radius = 0.0
                for o in objs:
                    m = struct.unpack_from("<I", data, p + 8 + o + 4)[0]
                    if m:
                        radius = max(radius, struct.unpack_from("<f", data, p + 8 + m + 20)[0])
                if radius == radius and abs(radius) < 1e9:
                    out.append((p, size + 8, len(objs), radius, names))
                    names = []
                    p += size + 8
                    continue
        p += 4


def pvm_entries(data):
    """[(name, offset of the pixel data, bytes, width, height, data type, pixel format)] of a PVM archive (its PVMH
    names in order, paired with its PVRT chunks in order), or of a lone PVR file (no name)."""
    pvrts, p = [], 0
    while True:
        p = data.find(b"PVRT", p)
        if p < 0 or p + 16 > len(data):
            break
        size = struct.unpack_from("<I", data, p + 4)[0]
        pf, dt = data[p + 8], data[p + 9]
        w, h = struct.unpack_from("<2H", data, p + 12)
        if 0 < w <= 1024 and 0 < h <= 1024 and p + 8 + size <= len(data) + 16:
            pvrts.append((p + 16, size - 8, w, h, dt, pf))
            p += 8 + size
        else:
            p += 4
    names = []
    if data[:4] == b"PVMH":
        flags, n = struct.unpack_from("<2H", data, 8)
        q = 12
        for _ in range(n):
            q += 2
            name = ""
            if flags & 8:
                name = data[q:q + 28].split(b"\0")[0].decode("ascii", "replace")
                q += 28
            q += (2 if flags & 4 else 0) + (2 if flags & 2 else 0) + (4 if flags & 1 else 0)
            names.append(name)
    return [(names[i] if i < len(names) else "",) + t for i, t in enumerate(pvrts)]


def ninja_texture_rows(disc, ninja):
    """Rows for [textures] for Ninja models: texture n of a model file is the texture its NJTL names, found in the PVM
    named after the model file, else a PVR file of that name (beside it first), else any PVM texture of that name.
    A model with no NJTL takes the textures of the PVM named after its file in order (texture n = its n-th), else the
    PVR named after its file as texture 0."""
    files = dict((path.lstrip("/").upper(), (lba, size)) for lba, size, path in disc.files())
    cache = {}

    def entries(f):
        if f not in cache:
            lba, size = files[f]
            cache[f] = pvm_entries(disc.read(lba, size)) if size <= MAX_FILE else []
        return cache[f]

    pvms = sorted(f for f in files if f.endswith(".PVM"))
    rows = []
    for mfile, names in sorted(ninja.items()):
        stem, d = mfile.rsplit(".", 1)[0], (mfile.rsplit("/", 1)[0] + "/" if "/" in mfile else "")
        own = stem + ".PVM"
        if not names:
            if own in files:
                rows += [[mfile, str(n), own, "%x" % e[1], str(e[2]), str(e[3]), str(e[4]), "%x" % e[5], str(e[6])]
                         for n, e in enumerate(entries(own))]
            elif stem + ".PVR" in files and entries(stem + ".PVR"):
                e = entries(stem + ".PVR")[0]
                rows.append([mfile, "0", stem + ".PVR", "%x" % e[1], str(e[2]), str(e[3]), str(e[4]), "%x" % e[5], str(e[6])])
            continue
        for n, name in enumerate(names):
            hit, key = None, name.upper()
            if own in files:
                hit = next(((own,) + e[1:] for e in entries(own) if e[0].upper() == key), None)
            for cand in (d + key + ".PVR", key + ".PVR"):
                if not hit and cand in files and entries(cand):
                    hit = (cand,) + entries(cand)[0][1:]
            if not hit:
                for f in pvms:
                    hit = next(((f,) + e[1:] for e in entries(f) if e[0].upper() == key), None)
                    if hit:
                        break
            if not hit:
                print("textures %s: no texture named %s" % (mfile, name))
                continue
            f, off, nbytes, w, h, dt, pf = hit
            rows.append([mfile, str(n), f, "%x" % off, str(nbytes), str(w), str(h), "%x" % dt, str(pf)])
    return rows


def find_models(data):
    """[(byte offset, records, strip bytes, radius, highest texture number)] of every model in data."""
    n = len(data) // 4
    w = struct.unpack("<%dI" % n, data[:n * 4])
    nxt = {}
    for m in CONTROL.finditer(data):
        if m.start() % 4 == 0:
            i = m.start() // 4
            ln = record_at(w, n, i)
            if ln:
                nxt[i] = i + ln
    follows = set(j for j in nxt.values() if j in nxt)
    out = []
    for i in sorted(nxt):
        if i in follows:
            continue
        chain, j = [], i
        while j in nxt:
            chain.append(j)
            j = nxt[j]
        if all(record_ok(w, r) for r in chain):
            radius = f32(w[i - 1])
            if radius == radius and abs(radius) < 1e9:
                tex = max(struct.unpack("<i", struct.pack("<I", w[r + 8]))[0] for r in chain)
                out.append(((i - 6) * 4, len(chain), sum(w[r + 19] for r in chain), radius, tex))
    return out


def read_functions(path):
    fs = []
    for line in open(path):
        p = line.split()
        if len(p) >= 4 and p[0] == "F":
            fs.append((A(int(p[1], 16)), int(p[2]), p[3]))
    fs.sort()
    return fs


def read_symbols(*paths):
    out = {}
    for path in paths:
        if not os.path.isfile(path):
            continue
        for line in open(path):
            p = line.split()
            if len(p) >= 2 and not line.startswith("#"):
                try:
                    out[A(int(p[0], 16))] = p[1]
                except ValueError:
                    pass
    return out


def read_rules(path):
    rules = []
    if path and os.path.isfile(path):
        for line in open(path):
            line = line.split("#", 1)[0].strip()
            if line:
                rules.append(line.split())
    return rules


def pairs(text):
    out = {}
    for item in text.split(","):
        k, v = item.split(":", 1)
        out[int(k, 0)] = v.replace("_", " ")
    return out


def cross(a, c):
    return (a[1] * c[2] - a[2] * c[1], a[2] * c[0] - a[0] * c[2], a[0] * c[1] - a[1] * c[0])


def matmul(A, B):
    return [[sum(A[i][k] * B[k][j] for k in range(3)) for j in range(3)] for i in range(3)]


def assemble(rules, disc, ptr_at, models, by_addr, char_parts, exe, base):
    """Rows for the [assemblies] section: every `assemble` rule places the parts of a group's characters on a posed rig."""
    rigs, bones = {}, collections.defaultdict(dict)
    for r in rules:
        if r[0] == "rig":
            rigs[r[1]] = r[2:]
        elif r[0] == "bone":
            bones[r[1]][int(r[2])] = (None if r[3] == "-" else int(r[3]), None if r[4] == "-" else A(int(r[4], 16)))
    rows = []
    for r in rules:
        if r[0] != "assemble":
            continue
        rig, group = r[1], r[2].replace("_", " ")
        mfile, mbase, hdr, rec = rigs[rig]
        mbase, hdr, rec = A(int(mbase, 16)), A(int(hdr, 16)), int(rec)
        data = next((disc.read(lba, size) for lba, size, path in disc.files() if path.split("/")[-1].upper() == mfile.upper()), None)
        if data is None:
            print("assemble %s: no disc file %s" % (rig, mfile))
            continue
        frames, nb, dptr = struct.unpack_from("<iiI", data, hdr - mbase)
        o = dptr - mbase + 396 * rec
        v = [struct.unpack_from("<3f", data, o + 12 * i) for i in range(33)]
        world = {}
        for b in sorted(bones[rig], key=lambda b: depth(bones[rig], b)):
            parent, offaddr = bones[rig][b]
            a, c = v[1 + 2 * b], v[2 + 2 * b]
            d = cross(a, c)
            Rb = [[a[0], c[0], d[0]], [a[1], c[1], d[1]], [a[2], c[2], d[2]]]
            if parent is None:
                world[b] = (Rb, (0.0, v[0][1], 0.0))
                continue
            Rp, tp = world[parent]
            off = struct.unpack_from("<3f", exe, offaddr - base) if offaddr else (0.0, 0.0, 0.0)
            world[b] = (matmul(Rp, Rb), tuple(sum(Rp[i][k] * off[k] for k in range(3)) + tp[i] for i in range(3)))
        for g, sub, parts in char_parts:
            if g != group:
                continue
            for slot, ptr, label in parts:
                if slot in world:
                    Rw, t = world[slot]
                    m = by_addr[ptr]
                    vals = ["%.5f" % x for i in range(3) for x in (Rw[i][0], Rw[i][1], Rw[i][2], t[i])]
                    rows.append([g, sub, label, m["file"], "%x" % m["offset"]] + vals)
    return rows


def rotation(order, angles):
    """The 3x3 matrix of rotations about x, y, z by angles (radians), applied as order reads: zyx = Rz * Ry * Rx."""
    out = [[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]]
    for axis in order:
        a = angles["xyz".index(axis)]
        c, s = math.cos(a), math.sin(a)
        R = {"x": [[1, 0, 0], [0, c, -s], [0, s, c]],
             "y": [[c, 0, s], [0, 1, 0], [-s, 0, c]],
             "z": [[c, -s, 0], [s, c, 0], [0, 0, 1]]}[axis]
        out = matmul(out, R)
    return out


def node_trees(rules, ptr_at, exe, base, by_addr, put):
    """Rows for [assemblies], [rigs] and [bones] from the `nodes` / `nodelayout` rules: every character's node tree,
    each part placed by its node's world bind matrix."""
    layouts = {}
    for r in rules:
        if r[0] == "nodelayout":
            f = dict(item.split("=", 1) for item in r[2:])
            rot = f["rot"].split(":")
            layouts[r[1]] = {"model": int(f["model"], 16), "pos": int(f["pos"], 16), "rot": int(rot[0], 16),
                             "scale": math.pi / 180 if rot[1] == "deg" else 1.0, "order": rot[2],
                             "parent": int(f["parent"], 16), "child": int(f["child"], 16), "sibling": int(f["sibling"], 16)}
    placed, rigs, bones = [], [], []
    for r in rules:
        if r[0] != "nodes":
            continue
        rig, table, count, size, listoff, per, group = (r[1], A(int(r[2], 16)), int(r[3]), int(r[4], 16), int(r[5], 16),
                                                        int(r[6]), r[7].replace("_", " "))
        if rig not in layouts:
            print("nodes %s: no nodelayout rule" % rig)
            continue
        L = layouts[rig]
        rigs.append([rig, "nodes", group, "", "", "", ""])

        def floats(node, off):
            return struct.unpack_from("<3f", exe, node + off - base)

        def world(node, memo):
            if node not in memo:
                parent = ptr_at(node + L["parent"])
                R = rotation(L["order"], [x * L["scale"] for x in floats(node, L["rot"])])
                t = floats(node, L["pos"])
                if parent:
                    Rp, tp = world(parent, memo)
                    memo[node] = (matmul(Rp, R), tuple(sum(Rp[i][k] * t[k] for k in range(3)) + tp[i] for i in range(3)))
                else:
                    memo[node] = (R, tuple(t))
            return memo[node]
        for ch in range(count):
            arr = ptr_at(table + ch * size + listoff)
            if not arr:
                continue
            index = {}                                # node -> its first index in the list
            for i in range(per):
                node = ptr_at(arr + 4 * i)
                if node and node not in index:
                    index[node] = i
            reach, todo = set(), [n for n in index if not ptr_at(n + L["parent"])]
            while todo:                               # every node the links reach must be in the list
                n = todo.pop()
                if n in reach:
                    continue
                reach.add(n)
                todo += [x for x in (ptr_at(n + L["child"]), ptr_at(n + L["sibling"])) if x]
            missing = sorted(reach - set(index))
            if missing:
                print("nodes %s: character %d links to nodes outside its list: %s" % (rig, ch, " ".join("%08X" % n for n in missing)))
            sub, memo = "0x%02X" % ch, {}
            for node, i in sorted(index.items(), key=lambda kv: kv[1]):
                parent = ptr_at(node + L["parent"])
                model = ptr_at(node + L["model"])
                bones.append([rig, sub, str(i), str(index[parent]) if parent in index else "", str(i)]
                             + ["%.5f" % x for x in floats(node, L["pos"])])
                if model in by_addr:
                    put(model, group, sub, "node %d" % i)
                    Rw, t = world(node, memo)
                    m = by_addr[model]
                    placed.append([group, sub, str(i), m["file"], "%x" % m["offset"]]
                                  + ["%.5f" % x for i_ in range(3) for x in (Rw[i_][0], Rw[i_][1], Rw[i_][2], t[i_])])
    return placed, rigs, bones


def bone_rigs(rules, exe, base, slots_by_group):
    """Rows for [rigs] and [bones] from the `rig` / `bone` / `assemble` rules."""
    groups = dict((r[1], r[2].replace("_", " ")) for r in rules if r[0] == "assemble")
    rigs, bones = [], []
    for r in rules:
        if r[0] == "rig":
            mbase, hdr = A(int(r[3], 16)), A(int(r[4], 16))
            rigs.append([r[1], "bones", groups.get(r[1], ""), r[2], "v", "%x" % (hdr - mbase), r[5]])
    for r in rules:
        if r[0] == "bone":
            off = struct.unpack_from("<3f", exe, A(int(r[4], 16)) - base) if r[4] != "-" else (0.0, 0.0, 0.0)
            label = slots_by_group.get(groups.get(r[1]), {}).get(int(r[2]), "")
            bones.append([r[1], "", r[2], "" if r[3] == "-" else r[3], label] + ["%.5f" % x for x in off])
    return rigs, bones


def depth(tree, b):
    n = 0
    while tree[b][0] is not None:
        b, n = tree[b][0], n + 1
    return n


def texture_rows(rules, disc, exe, base, maxtex):
    """Rows for the [textures] section: the `textures` rules, then every other model file that has a texture file of
    the same name (POLYGON_x / TEXTURE_x, POLx / TEXx) and exactly one list in the executable that fits it."""
    rows = []
    files = {path.split("/")[-1].upper(): size for lba, size, path in disc.files()}
    for r in rules:
        if r[0] != "textures":
            continue
        if len(r) == 3:
            continue                                  # a pair: handled with the automatic ones below
        mfile, tfile, tbase, table = r[1].upper(), r[2].upper(), A(int(r[3], 16)), A(int(r[4], 16))
        tlen = files.get(tfile)
        if tlen is None:
            print("textures: no disc file %s" % tfile)
            continue
        entries = []
        for i in range(4096):
            o = table - base + 16 * i
            if o + 16 > len(exe):
                break
            e = struct.unpack_from("<4I", exe, o)
            if e[0] == 0 or not tbase <= A(e[2]) < tbase + tlen:
                break
            entries.append((A(e[2]) - tbase, e[0] & 0xFFFF, e[0] >> 16, e[1] >> 8, e[1] & 0xFF))
        starts = sorted(set(e[0] for e in entries)) + [tlen]
        for n, (off, w, h, dt, pf) in enumerate(entries):
            size = starts[starts.index(off) + 1] - off
            rows.append([mfile, str(n), tfile, "%x" % off, str(size), str(w), str(h), "%x" % dt, str(pf)])
        print("textures %s: %d entries from %08X" % (tfile, len(entries), table))
    done = set(r[0] for r in rows)
    lists = texture_lists(exe, base)
    pairs = dict((r[1].upper(), r[2].upper()) for r in rules if r[0] == "textures" and len(r) == 3)
    for mfile in sorted(maxtex):
        tfile = pairs.get(mfile) or (mfile.replace("POLYGON", "TEXTURE", 1) if mfile.startswith("POLYGON") else mfile.replace("POL", "TEX", 1))
        if mfile in done or tfile == mfile or tfile not in files or maxtex[mfile] < 0:
            continue
        tlen = files[tfile]
        fit = [l for l in lists if 0 <= tlen - l["end"] <= 2048 and l["count"] > maxtex[mfile]]
        if len(fit) != 1:
            print("textures %s: %s" % (mfile, "no list fits %s" % tfile if not fit else "%d lists fit %s, none chosen" % (len(fit), tfile)))
            continue
        l = fit[0]
        starts = sorted(set(e[0] for e in l["entries"])) + [tlen]
        for n, (off, w, h, dt, pf) in enumerate(l["entries"]):
            rows.append([mfile, str(n), tfile, "%x" % off, str(starts[starts.index(off) + 1] - off), str(w), str(h), "%x" % dt, str(pf)])
        print("textures %s: %d entries from %08X (found by size)" % (tfile, len(l["entries"]), l["addr"]))
    return rows


def full_vertices(data, off, records):
    """File offsets of the full vertex entries (8 floats) of the model at off, walked as record_ok walks its strips."""
    n = len(data) // 4
    w = struct.unpack_from("<%dI" % n, data)
    out, i = set(), off // 4 + 6
    for _ in range(records):
        p, e = i + 20, i + 20 + w[i + 19] // 4
        while p < e:
            count, p, k = w[p + 1], p + 2, 0
            while k < count or (p < e and not (w[p] < 0x1000 and 0 < w[p + 1] <= 200)):
                k += 1
                f = f32(w[p])
                if f != f or abs(f) > 1e9:
                    p += 2
                else:
                    out.add(p * 4)
                    p += 8
        i = e
    return out


def weld_rows(rules, ptr_at, exe, base, by_addr, disc):
    """Rows for [welds]: every node-tree node's welded vertices (`nodelayout ... weld=`), in drawing order: a node, its
    children, then its next sibling, from each root (a vertex is welded after its source node was drawn)."""
    files = dict((path.split("/")[-1].upper(), (lba, size)) for lba, size, path in disc.files())
    layouts, rows, cache = {}, [], {}
    for r in rules:
        if r[0] == "nodelayout":
            f = dict(item.split("=", 1) for item in r[2:])
            if "weld" in f:
                layouts[r[1]] = [int(x, 16) for x in f["weld"].split(":")] + [int(f["child"], 16), int(f["sibling"], 16),
                                                                              int(f["parent"], 16), int(f["model"], 16)]
    for r in rules:
        if r[0] != "nodes" or r[1] not in layouts:
            continue
        rig, table, count, size, listoff, per = r[1], A(int(r[2], 16)), int(r[3]), int(r[4], 16), int(r[5], 16), int(r[6])
        srco, cnto, srcoffs, dstoffs, childo, sibo, parento, modelo = layouts[rig]

        def vertices(m):
            key = (m["file"].upper(), m["offset"])
            if key not in cache:
                if m["file"].upper() not in cache:
                    cache[m["file"].upper()] = disc.read(*files[m["file"].upper()])
                cache[key] = full_vertices(cache[m["file"].upper()], m["offset"], m["records"])
            return cache[key]
        bad = 0
        for ch in range(count):
            arr = ptr_at(table + ch * size + listoff)
            if not arr:
                continue
            index = {}
            for i in range(per):
                node = ptr_at(arr + 4 * i)
                if node and node not in index:
                    index[node] = i
            order, todo = [], [n for n in sorted(index, key=index.get) if not ptr_at(n + parento)][::-1]
            while todo:
                n = todo.pop()
                if n in order:
                    continue
                order.append(n)
                todo += [x for x in (ptr_at(n + sibo), ptr_at(n + childo)) if x]
            for node in order:
                cnt = struct.unpack_from("<i", exe, node + cnto - base)[0]
                src = ptr_at(node + srco)
                if cnt <= 0 or not src:
                    continue
                sm, dm = by_addr.get(ptr_at(src + modelo)), by_addr.get(ptr_at(node + modelo))
                for k in range(cnt):
                    so = struct.unpack_from("<I", exe, node + srcoffs + 4 * k - base)[0]
                    do = struct.unpack_from("<I", exe, node + dstoffs + 4 * k - base)[0]
                    sv, dv = sm["offset"] + so if sm else None, dm["offset"] + do if dm else None
                    if sv is None or dv is None or sv not in vertices(sm) or dv not in vertices(dm):
                        bad += 1
                    rows.append([rig, "0x%02X" % ch, str(index.get(node, "")), str(index.get(src, "")),
                                 "%x" % sv if sv is not None else "", "%x" % dv if dv is not None else ""])
        print("welds %s: %d rows, %d not on a full vertex" % (rig, len(rows), bad))
    return rows


def pose_rows(rules, disc, exe, base, rigs):
    """Rows for [motionbones], [poses] and [scales] from the `motionskel`, `pose` and `scale` rules; fills the
    motion columns of those rigs' [rigs] rows."""
    files = dict((path.split("/")[-1].upper(), (lba, size)) for lba, size, path in disc.files())
    counts = dict((r[1], int(r[3])) for r in rules if r[0] == "nodes")
    mbones, poses, scales = [], [], []
    for r in rules:
        if r[0] == "motionskel":
            rig, hdr, mfile, fmt = r[1], int(r[2], 16), r[3].upper(), r[4]
            if mfile not in files:
                print("motionskel %s: no disc file %s" % (rig, mfile))
                continue
            data = disc.read(*files[mfile])
            flags, cnt, _, _, offs = struct.unpack_from("<5I", data, hdr)
            n = struct.unpack_from("<I", data, cnt)[0]
            for b in range(n):
                order = struct.unpack_from("<I", data, flags + 4 * b)[0]
                mbones.append([rig, str(b), "1" if order else "0"]
                              + ["%.5f" % x for x in struct.unpack_from("<3f", data, offs + 12 * b)])
            for row in rigs:
                if row[0] == rig:
                    row[3], row[4] = mfile, fmt
            print("motionskel %s: %d bones from %s:%x" % (rig, n, mfile, hdr))
        elif r[0] == "scale":
            rig, table, size, off = r[1], A(int(r[2], 16)), int(r[3], 16), int(r[4], 16)
            for i in range(counts.get(rig, 0)):
                scales.append([rig, "0x%02X" % i, "%.5f" % struct.unpack_from("<f", exe, table + i * size + off - base)[0]])
        elif r[0] == "pose":
            for st in r[4:] if r[3] != "=" else []:
                if not (st in ("root", "bind") or re.match(r"(rot|bone):\d+$", st) or re.match(r"r[xyz]:-?[0-9A-Fa-f]+$", st)
                        or re.match(r"t:[-0-9.]+,[-0-9.]+,[-0-9.]+$", st)):
                    print("pose %s %s: unknown step %s" % (r[1], r[2], st))
            poses.append([r[1], r[2], r[3], " ".join(r[4:])])
    return mbones, poses, scales


def texture_set_rows(rules, disc, exe, base, ptr_at, by_addr):
    """Rows for [textures] from the `texturesets` rules (the set column filled), each set's models marked with it."""
    files = {path.split("/")[-1].upper(): size for lba, size, path in disc.files()}
    rows = []
    for r in rules:
        if r[0] != "texturesets":
            continue
        mtab, ttab, count, ntab, tbase = A(int(r[1], 16)), A(int(r[2], 16)), int(r[3]), A(int(r[4], 16)), A(int(r[5], 16))
        starts = sorted(set(ptr_at(mtab + 4 * i) for i in range(count)) | {mtab, ttab, ntab})
        for i in range(count):
            mlist, tlist, name = ptr_at(mtab + 4 * i), ptr_at(ttab + 4 * i), ptr_at(ntab + 4 * i)
            o = name - base
            tfile = exe[o:exe.find(b"\0", o)].decode("ascii", "replace").split("/")[-1].upper()
            if tfile not in files:
                print("texturesets %d: no disc file %s" % (i, tfile))
                continue
            end, a, mfiles = min(s for s in starts + [1 << 40] if s > mlist), mlist, set()
            while a < end and ptr_at(a):
                m = by_addr.get(ptr_at(a))
                if m:
                    if m["texset"] not in ("", str(i)):
                        print("texturesets: model %s:%x in sets %s and %d" % (m["file"], m["offset"], m["texset"], i))
                    m["texset"] = str(i)
                    mfiles.add(m["file"].upper())
                a += 4
            entries = []
            for k in range(4096):
                e = struct.unpack_from("<4I", exe, tlist - base + 16 * k)
                if e[0] == 0:
                    break
                entries.append((A(e[2]) - tbase, e[0] & 0xFFFF, e[0] >> 16, e[1] >> 8, e[1] & 0xFF))
            tlen = files[tfile]
            offs = sorted(set(e[0] for e in entries)) + [tlen]
            for mfile in sorted(mfiles):
                for n, (off, w, h, dt, pf) in enumerate(entries):
                    rows.append([mfile, str(n), tfile, "%x" % off, str(offs[offs.index(off) + 1] - off), str(w), str(h),
                                 "%x" % dt, str(pf), str(i)])
            last = max(entries, key=lambda e: e[0]) if entries else None
            if last and not 0 <= tlen - (last[0] + texture_size(last[3], last[1], last[2])) < 32:
                print("texturesets %d: list ends at %x, %s is %x bytes" % (i, last[0] + texture_size(last[3], last[1], last[2]), tfile, tlen))
        print("texturesets %08X: %d sets, %d rows" % (mtab, count, len(rows)))
    return rows


def texture_size(dt, w, h):
    """Bytes of a texture of PVR data type dt (1 twiddled, 2 twiddled mipmapped, 3 VQ, 4 VQ mipmapped, 9, 0x0D) and w x h."""
    if dt in (3, 4):
        n = 2048 + w * h // 4
        if dt == 4:
            n += 1
            s = 2
            while s < w:
                n += (s // 2) ** 2
                s *= 2
        return n
    n = w * h * 2
    if dt == 2:
        n += 6
        s = 2
        while s < w:
            n += s * s * 2
            s *= 2
    return n


def texture_lists(exe, base):
    """Every run of 16-byte entries in the executable that looks like a texture list: width and height powers of two
    (halfword each in word 0), data type and pixel format in word 1, a 32-byte aligned RAM address in word 2, 0 in word 3,
    addresses rising. Each is {addr, count, entries: [(offset from the first, w, h, type, format)], end: bytes it spans}."""
    n = len(exe) // 4
    words = struct.unpack("<%dI" % n, exe[:n * 4])
    p2 = set(8 << k for k in range(8))

    def valid(i):
        e0, e1, e2, e3 = words[i:i + 4]
        return ((e0 & 0xFFFF) in p2 and (e0 >> 16) in p2 and (e1 >> 8) in (1, 2, 3, 4, 9, 0xD) and (e1 & 0xFF) <= 2
                and 0x0C000000 <= A(e2) < 0x0D000000 and e2 % 32 == 0 and e3 == 0)
    out, i = [], 0
    while i < n - 4:
        if not valid(i):
            i += 1
            continue
        j = i
        while j + 4 <= n and valid(j):
            j += 4
        addrs = [A(words[k + 2]) for k in range(i, j, 4)]
        if addrs == sorted(addrs):
            ents = [(A(words[k + 2]) - addrs[0], words[k] & 0xFFFF, words[k] >> 16, words[k + 1] >> 8, words[k + 1] & 0xFF) for k in range(i, j, 4)]
            last = ents[-1]
            out.append({"addr": base + 4 * i, "count": len(ents), "entries": ents, "end": last[0] + texture_size(last[3], last[1], last[2])})
        i = j
    return out


def adx_info(b):
    """(format, channels, rate, samples) of a CRI ADX / AHX header at the start of b, or None."""
    if len(b) < 16 or b[0] != 0x80 or b[1] != 0x00:
        return None
    enc, ch = b[4], b[7]
    rate, samples = struct.unpack(">II", b[8:16])
    if enc not in (2, 3, 4, 0x10, 0x11) or not 1 <= ch <= 8 or not 4000 <= rate <= 192000:
        return None
    return ("AHX" if enc >= 0x10 else "ADX"), ch, rate, samples


def audio_rows(disc, rules):
    """Rows for the [audio] section: every ADX / AHX stream in an AFS archive or a file of its own, and every DTPK
    sound bank (listed, not opened)."""
    names = {}
    for r in rules:
        if r[0] == "sound" and len(r) >= 4:
            names[(r[1].upper(), int(r[2]))] = tidy(" ".join(r[3:]))
    rows = []

    def row(fn, idx, off, size, fmt, ch="", rate="", samples=""):
        secs = "%.1f" % (samples / rate) if rate and samples else ""
        rows.append([fn, str(idx), "%x" % off, str(size), fmt, str(ch), str(rate), str(samples), secs,
                     names.get((fn, idx), "")])
    for lba, size, path in disc.files():
        fn = path.split("/")[-1].upper()
        head = disc.read(lba, min(size, 4096))
        if head[:4] == b"AFS\0":
            n = struct.unpack("<I", head[4:8])[0]
            if not 0 < n < 100000:
                continue
            table = disc.read(lba, 8 + 8 * n)
            mark = len(rows)
            for i in range(n):
                off, sz = struct.unpack_from("<II", table, 8 + 8 * i)
                if not sz or off + 16 > size:
                    continue
                h = disc.read(lba + off // 2048, 4096)[off % 2048:off % 2048 + 16]
                info = adx_info(h)
                if info:
                    row(fn, i, off, sz, info[0], info[1], info[2], info[3])
                else:
                    row(fn, i, off, sz, "unknown")
            if not any(r[4] in ("ADX", "AHX") for r in rows[mark:]):
                del rows[mark:]                       # an archive of something else (a city, a model set)
        elif adx_info(head):
            info = adx_info(head)
            row(fn, 0, 0, size, info[0], info[1], info[2], info[3])
        elif head[:4] == b"DTPK":
            row(fn, 0, 0, size, "DTPK sound bank")
    return rows


def skill_version():
    """The version game.dcgs states: the KICKOFF file of the repo this tool is in (tools/..), or the skill's VERSION
    file when run from the skill (scripts/..). The map format is the skill version: no separate format number."""
    for name in ("KICKOFF", "VERSION"):
        path = os.path.join(os.path.dirname(HERE), name)
        if os.path.isfile(path):
            v = open(path).read().strip()
            if v:
                return v
    sys.exit("[ERROR] no version: %s has no KICKOFF (in a repo) or VERSION (in the skill) file" % os.path.dirname(HERE))


def main():
    if len(sys.argv) < 6:
        sys.exit(__doc__)
    version = skill_version()
    exe_path, base, fn_path, gdi, out_dir = sys.argv[1], A(int(sys.argv[2], 16)), sys.argv[3], sys.argv[4], sys.argv[5]
    rules = read_rules(sys.argv[6] if len(sys.argv) > 6 else os.path.join(os.path.dirname(HERE), "models.txt"))
    exe = open(exe_path, "rb").read()
    nw = len(exe) // 4
    words = struct.unpack("<%dI" % nw, exe[:nw * 4])
    where = collections.defaultdict(list)             # value -> addresses of the words holding it
    for i, v in enumerate(words):
        where[A(v)].append(base + 4 * i)
    root = os.path.dirname(HERE)
    funcs = read_functions(fn_path)
    fstart = [f[0] for f in funcs]
    syms = read_symbols(os.path.join(root, "globals.txt"), os.path.join(root, "symbols.txt"))

    def func_at(a):
        i = bisect.bisect_right(fstart, a) - 1
        return funcs[i][2] if i >= 0 and a < funcs[i][0] + funcs[i][1] else None

    # 1. models per disc file, and the address each file is loaded at
    disc = gdi_read.Disc(gdi)
    models = []                                       # dicts
    maxtex = {}                                       # model file -> its highest texture number
    ninja = {}                                        # Ninja model file (disc path) -> its texture names
    cand = [v for v in where if 0x0C000000 <= v < 0x0D000000 and v % 4 == 0]
    random.seed(1)
    for lba, size, path in disc.files():
        name = path.split("/")[-1]
        if size > MAX_FILE or name.upper().endswith(SKIP):
            continue
        data = disc.read(lba, size)
        nj = find_ninja(data)
        for off, nbytes, objs, radius, names in nj:
            models.append({"file": path.lstrip("/"), "offset": off, "records": objs, "bytes": nbytes, "radius": radius,
                           "addr": None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
            ninja.setdefault(path.lstrip("/").upper(), names)
        if nj:
            print("%-16s %5d Ninja models" % (name, len(nj)))
        found = find_models(data)
        if not found:
            continue
        votes = collections.Counter()
        for off, _, _, _, _ in random.sample(found, min(15, len(found))):
            for v in cand:
                if (v - off) % 0x1000 == 0 and v - off > 0:
                    votes[v - off] += 1
        top = votes.most_common(1)
        load = top[0][0] if top and top[0][1] >= max(3, min(15, len(found)) // 2) else None
        print("%-16s %5d models  loaded at %s" % (name, len(found), "%08X" % load if load else "?"))
        maxtex[name.upper()] = max(f[4] for f in found)
        for off, recs, nbytes, radius, _ in found:
            models.append({"file": name, "offset": off, "records": recs, "bytes": nbytes, "radius": radius,
                           "addr": load + off if load else None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
    by_addr = {m["addr"]: m for m in models if m["addr"]}

    # 2. tables: runs of words that are model pointers (or null), found from each model's references
    def is_model_ptr(v):
        return A(v) in by_addr

    done = set()
    tables = []                                       # (start, end)
    for m in models:
        for a in where.get(m["addr"], []) if m["addr"] else []:
            if a in done:
                continue
            s = a
            while is_model_ptr(words[(s - 4 - base) // 4]) or (words[(s - 4 - base) // 4] == 0 and is_model_ptr(words[(s - 8 - base) // 4])):
                s -= 4
            e = a
            while e + 8 < base + len(exe) and (is_model_ptr(words[(e + 4 - base) // 4]) or (words[(e + 4 - base) // 4] == 0 and is_model_ptr(words[(e + 8 - base) // 4]))):
                e += 4
            for x in range(s, e + 4, 4):
                done.add(x)
            tables.append((s, e))
    tables.sort()
    ts = [t[0] for t in tables]

    def users(s, e):
        names = []
        for a in range(s, e + 4, 4):
            for loc in where.get(a, []):
                f = func_at(loc)
                if f and f not in names:
                    names.append(f)
        return names

    for s, e in tables:
        us = users(s, e)
        good = [u for u in us if not u.startswith("FUN_")]
        label = syms.get(s) or (good[0] if good else "table_%08X" % s)
        for a in range(s, e + 4, 4):
            m = by_addr.get(A(words[(a - base) // 4]))
            if m and not m["table"]:
                m["table"], m["index"] = "%08X" % s, str((a - s) // 4)
                m["used_by"] = " ".join((good or us)[:3])
                m["group"], m["sub"] = "Tables", "table_%08X" % s
                if not label.startswith("table_"):
                    m["sublabel"] = tidy(label)
                m["name"] = ""

    # 3. curated rules override
    def ptr_at(a):
        if not base <= a < base + len(exe) - 3:
            return 0
        return A(words[(a - base) // 4])

    def cstr(a):
        if not base <= a < base + len(exe):
            return ""
        o = a - base
        end = exe.find(b"\0", o, o + 40)
        return exe[o:end].decode("ascii", "replace").strip() if end > o else ""

    def put(addr, group, sub, name, sublabel=""):
        m = by_addr.get(addr)
        if m:
            m["group"], m["sub"], m["name"] = group, sub, tidy(name)
            if sublabel and tidy(sublabel) != sub:
                m["sublabel"] = tidy(sublabel)

    char_parts, slots_by_group = [], {}
    for r in rules:
        kind = r[0]
        if kind == "array":
            a, cnt, group, label = A(int(r[1], 16)), int(r[2], 0), r[3].replace("_", " "), r[4].replace("_", " ")
            for i in range(cnt):
                put(ptr_at(a + 4 * i), group, label, "", label)
        elif kind == "chars":
            a, cnt, group, slots = A(int(r[1], 16)), int(r[2], 0), r[3].replace("_", " "), pairs(r[4])
            slots_by_group[group] = slots
            for ch in range(cnt):
                arr = ptr_at(a + 4 * ch)
                parts = [ptr_at(arr + 4 * i) for i in range(16)] if arr else []
                if not any(parts) or not all(p == 0 or p in by_addr for p in parts):
                    continue
                for i, p in enumerate(parts):
                    put(p, group, "0x%02X" % ch, slots.get(i, "part %d" % i))
                char_parts.append((group, "0x%02X" % ch, [(i, p, slots.get(i, "part %d" % i)) for i, p in enumerate(parts) if p in by_addr]))
        elif kind == "structs":
            a, stride, cnt, nameoff, group, slots = A(int(r[1], 16)), int(r[2], 0), int(r[3], 0), int(r[4], 0), r[5].replace("_", " "), pairs(r[6])
            for t in range(cnt):
                e0 = a + t * stride
                nm = cstr(ptr_at(e0 + nameoff)) or "type %d" % t
                for off, label in slots.items():
                    put(ptr_at(e0 + off), group, nm, label, nm)

    for r in rules:
        if r[0] == "extra":                           # extra <group> <id> <slot> <model addr> <label>
            group, sub, slot, ptr = r[1].replace("_", " "), "0x%02X" % int(r[2], 0), int(r[3], 0), A(int(r[4], 16))
            entry = next((e for e in char_parts if e[0] == group and e[1] == sub), None)
            if ptr not in by_addr or entry is None:
                print("extra: %s" % ("no model %08X" % ptr if ptr not in by_addr else "no character %s %s" % (group, sub)))
                continue
            put(ptr, group, sub, " ".join(r[5:]))
            entry[2].append((slot, ptr, slots_by_group.get(group, {}).get(slot, "part %d" % slot)))
    by_file_off = dict(((m["file"].upper(), m["offset"]), m) for m in models)
    for r in rules:
        if r[0] == "name":                            # name <model file> <offset hex> <text...>: one model
            m = by_file_off.get((r[1].upper(), int(r[2], 16)))
            if m:
                m["name"] = tidy(" ".join(r[3:]))
            else:
                print("name: no model %s:%s" % (r[1], r[2]))
        elif r[0] == "table":                         # table <addr hex> <group> <label>: a table of models
            key = "%08X" % A(int(r[1], 16))
            for m in models:
                if m["table"] == key:
                    m["group"], m["sublabel"] = r[2].replace("_", " "), tidy(r[3].replace("_", " "))

    placed = assemble(rules, disc, ptr_at, models, by_addr, char_parts, exe, base)
    rigs, bones = bone_rigs(rules, exe, base, slots_by_group)
    nplaced, nrigs, nbones = node_trees(rules, ptr_at, exe, base, by_addr, put)
    placed, rigs, bones = placed + nplaced, rigs + nrigs, bones + nbones
    mbones, poses, scales = pose_rows(rules, disc, exe, base, rigs)
    welds = weld_rows(rules, ptr_at, exe, base, by_addr, disc)
    # notes last: they name a hex sub-group whatever rule made it (chars, nodes)
    for r in rules:
        if r[0] == "note":
            group, lo, hi, text = r[1].replace("_", " "), int(r[2], 0), int(r[3], 0), " ".join(r[4:]).replace("_", " ")
            for m in models:
                if m["group"] == group and m["sub"].startswith("0x") and lo <= int(m["sub"].split()[0], 16) <= hi:
                    m["sublabel"] = tidy(text)
    os.makedirs(out_dir, exist_ok=True)
    sha = hashlib.sha1(exe).hexdigest()
    tex = [row + [""] for row in texture_rows(rules, disc, exe, base, maxtex)]
    tex += texture_set_rows(rules, disc, exe, base, ptr_at, by_addr)
    tex += [row + [""] for row in ninja_texture_rows(disc, ninja)]
    sections = [("models", "file\toffset\tbytes\trecords\tradius\tgroup\tsub\tsublabel\tname\ttable\tindex\tused_by\ttexset", [
        "%s\t%x\t%d\t%d\t%.3f\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s" % (
            m["file"], m["offset"], m["bytes"], m["records"], m["radius"], m["group"], m["sub"], m["sublabel"], m["name"],
            m["table"], m["index"], m["used_by"], m["texset"]) for m in sorted(models, key=lambda m: (m["file"], m["offset"]))])]
    if placed:
        sections.append(("assemblies", "group\tsub\tpart\tfile\toffset\t" + "\t".join("m%d%d" % (r_, c_) for r_ in range(3) for c_ in range(4)),
                         ["\t".join(row) for row in placed]))
    if rigs:
        sections.append(("rigs", "rig\tkind\tgroup\tmotion_file\tmotion_format\tpose_offset\tpose_record",
                         ["\t".join(row) for row in rigs]))
        sections.append(("bones", "rig\tsub\tbone\tparent\tpart\tx\ty\tz", ["\t".join(row) for row in bones]))
    if welds:
        sections.append(("welds", "rig\tsub\tnode\tsrc_node\tsrc_vertex\tdst_vertex", ["\t".join(row) for row in welds]))
    if mbones:
        sections.append(("motionbones", "rig\tbone\torder\tx\ty\tz", ["\t".join(row) for row in mbones]))
    if poses:
        sections.append(("poses", "rig\tnode\tparent\tsteps", ["\t".join(row) for row in poses]))
    if scales:
        sections.append(("scales", "rig\tsub\tscale", ["\t".join(row) for row in scales]))
    sounds = audio_rows(disc, rules)
    if sounds:
        sections.append(("audio", "file\tindex\toffset\tbytes\tformat\tchannels\trate\tsamples\tseconds\tname", ["\t".join(r_) for r_ in sounds]))
    if tex:
        sections.append(("textures", "file\tnumber\ttexture_file\toffset\tsize\twidth\theight\ttype\tformat\tset", ["\t".join(row) for row in tex]))
    with open(os.path.join(out_dir, "game.dcgs"), "w") as out:
        out.write("# dcgs %s\n# sha1 %s\n# base %08X\n# sections %s\n" % (version, sha, base, " ".join(n for n, _, _ in sections)))
        for name, head, rows in sections:
            out.write("[%s]\n%s\n" % (name, head))
            for row in rows:
                out.write(row + "\n")
    print("%d models, %d assembled parts, %d textures, %d sounds" % (len(models), len(placed), len(tex), len(sounds)))
    named = sum(1 for m in models if m["group"])
    print("%d models, %d with a table or a rule (%d tables) -> %s" % (len(models), named, len(tables),
                                                                       os.path.join(out_dir, "game.dcgs")))


if __name__ == "__main__":
    main()
