#!/usr/bin/env python3
"""Map the 3D models in a Dreamcast game's disc files and say what the executable calls them. Stdlib only.

    model_map.py <1ST_READ.BIN> <base hex> <functions.txt> <disc.gdi> <out dir> [models.txt]

Models are the NAOMI library's flat format (`nlObjPut`'s: records of PowerVR polygon words and strips). Each disc file that holds some is
loaded at an address the executable's tables point into: that address is found by matching those
pointers to the models' starts, then every pointer to a model is followed back to the table that holds
it, and the table is named by (1) a rule in models.txt (curated: a table whose layout is known),
(2) a data symbol, (3) the functions that use the table.

Writes <out dir>/game.dcgs (tab-separated text in sections, for a model viewer or a spreadsheet): `# dcgs v3`, `# sha1`
(of the executable), `# base`, `# sections ...`, then each section as `[name]`, a header row and its rows:
  [models]       one row per model: file offset bytes records radius group sub sublabel name table index used_by
                 (sub is the id of its table or collection, sublabel its name if it has one; name is the model's own name,
                 empty when it has none; every name is tidied: no parentheses, each word capitalised)
  [assemblies]   one row per placed part (`assemble` rules): group sub part file offset, then a 3x4 matrix row by row
  [textures]     one row per texture (`textures` rules): model file, number, texture file, offset, size, width, height,
                 PVR data type, pixel format
The name is a starting point for a person to check.

models.txt (curated rules, one per line, `#` comments, `_` is a space in labels):
  array <addr> <count> <group> <label>          pointers at addr + 4*i: "<label> <i>"
  chars <addr> <count> <group> <slot:label,...> a table of pointers to arrays of part pointers
  name <model file> <offset hex> <text...>      names one model (the offset is the one in its id: FILE:offset)
  table <addr hex> <group> <label>              puts every model of the table at addr under that group and label
  note <group> <first id> <last id> <text>      adds " (<text>)" to the sub-group of characters first..last
  rig <name> <motion file> <file base hex> <motion header addr hex> <record>
                                                a skeleton posed from one record of a V-format motion
  bone <rig> <bone> <parent|-> <offset addr|->  a bone: its parent and the 3 floats at <offset addr> (bind offset)
  assemble <rig> <group>                        each character of <group> (a `chars` rule) placed on the rig, one
                                                part per slot = bone, into the [assemblies] section
  textures <model file> <texture file>          pairs a model file with a texture file of another name (e.g. an archive of
                                                a city with that city's textures); the list in the executable that fits the
                                                texture file's size is found by itself
  textures <model file> <texture file> <texture base hex> <table addr hex>
                                                a list of 16-byte entries (height << 16 | width, data type << 8 | pixel
                                                format, data address, x) in the
                                                executable, indexed by the texture number in the model file's records;
                                                written to the [textures] section (number -> offset in the texture file)
  structs <addr> <stride> <count> <namestr off> <group> <off:label,...>  records with model pointers
"""
import bisect
import collections
import hashlib
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


def main():
    if len(sys.argv) < 6:
        sys.exit(__doc__)
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
    cand = [v for v in where if 0x0C000000 <= v < 0x0D000000 and v % 4 == 0]
    random.seed(1)
    for lba, size, path in disc.files():
        name = path.split("/")[-1]
        if size > MAX_FILE or name.upper().endswith(SKIP):
            continue
        found = find_models(disc.read(lba, size))
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
                           "index": "", "used_by": ""})
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

    char_parts = []
    for r in rules:
        kind = r[0]
        if kind == "array":
            a, cnt, group, label = A(int(r[1], 16)), int(r[2], 0), r[3].replace("_", " "), r[4].replace("_", " ")
            for i in range(cnt):
                put(ptr_at(a + 4 * i), group, label, "", label)
        elif kind == "chars":
            a, cnt, group, slots = A(int(r[1], 16)), int(r[2], 0), r[3].replace("_", " "), pairs(r[4])
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
    for r in rules:
        if r[0] == "note":
            group, lo, hi, text = r[1].replace("_", " "), int(r[2], 0), int(r[3], 0), " ".join(r[4:]).replace("_", " ")
            for m in models:
                if m["group"] == group and m["sub"].startswith("0x") and lo <= int(m["sub"].split()[0], 16) <= hi:
                    m["sublabel"] = tidy(text)

    placed = assemble(rules, disc, ptr_at, models, by_addr, char_parts, exe, base)
    os.makedirs(out_dir, exist_ok=True)
    sha = hashlib.sha1(exe).hexdigest()
    tex = texture_rows(rules, disc, exe, base, maxtex)
    sections = [("models", "file\toffset\tbytes\trecords\tradius\tgroup\tsub\tsublabel\tname\ttable\tindex\tused_by", [
        "%s\t%x\t%d\t%d\t%.3f\t%s\t%s\t%s\t%s\t%s\t%s\t%s" % (
            m["file"], m["offset"], m["bytes"], m["records"], m["radius"], m["group"], m["sub"], m["sublabel"], m["name"],
            m["table"], m["index"], m["used_by"]) for m in sorted(models, key=lambda m: (m["file"], m["offset"]))])]
    if placed:
        sections.append(("assemblies", "group\tsub\tpart\tfile\toffset\t" + "\t".join("m%d%d" % (r_, c_) for r_ in range(3) for c_ in range(4)),
                         ["\t".join(row) for row in placed]))
    if tex:
        sections.append(("textures", "file\tnumber\ttexture_file\toffset\tsize\twidth\theight\ttype\tformat", ["\t".join(row) for row in tex]))
    with open(os.path.join(out_dir, "game.dcgs"), "w") as out:
        out.write("# dcgs v3\n# sha1 %s\n# base %08X\n# sections %s\n" % (sha, base, " ".join(n for n, _, _ in sections)))
        for name, head, rows in sections:
            out.write("[%s]\n%s\n" % (name, head))
            for row in rows:
                out.write(row + "\n")
    print("%d models, %d assembled parts, %d textures" % (len(models), len(placed), len(tex)))
    named = sum(1 for m in models if m["group"])
    print("%d models, %d with a table or a rule (%d tables) -> %s" % (len(models), named, len(tables),
                                                                       os.path.join(out_dir, "game.dcgs")))


if __name__ == "__main__":
    main()
