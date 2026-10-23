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
                 (a Ninja model: file is its disc path, offset its NJCM chunk, records its object count; an object tree
                 stored as the game's memory image: offset its root object, records its objects, bytes 0x34 times that.
                 In a `.PRS` file (Sega's compression) every offset is into the decompressed data)
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
  [motions]      one row per Ninja motion file (an NMDM chunk, `.NJM`): file, model (the Ninja model file of the same
                 name it animates, empty when none), frames, nodes (one entry of keys per object of the model), moving
                 (nodes with more than one key), keys (position, angle, scale: the kinds it carries, joined by +)
  [images]       one row per picture found: file, offset, kind (pvr, gif, jpg or png), width, height, type and format (PowerVR
                 data type and pixel format, 0 for the others), bytes, name. A PowerVR texture is a PVRT chunk anywhere
                 in a file (alone, in a PVM archive, packed in a game's own archive; offset is the chunk's start); GIF,
                 JPEG and PNG are whole files (offset 0). A PVM archive gives its textures' names; an `image` rule names one.
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
  textures <model file> <texture file> index    texture n of the model file is the n-th texture of the texture file, a PVM archive
                                                (`.PRS` files read decompressed): for a model file that keeps its texture lists
                                                inside its own data and has no table in the executable
  textures <model file> <texture file> <texture base hex> <table addr hex>
                                                a list of 16-byte entries (height << 16 | width, data type << 8 | pixel
                                                format, data address, x) in the
                                                executable, indexed by the texture number in the model file's records;
                                                written to the [textures] section (number -> offset in the texture file)
  motions <model file> <motion file>            the motions in <motion file> (NMDM chunks or a motion bank, see
                                                find_motion_images) animate the object trees and Ninja models of <model
                                                file> that have as many objects as they have nodes: for a model file and a
                                                motion file of different names (read by the viewer)
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
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import io
import zipfile
import zlib
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


def prs_decompress(src):
    """Sega's PRS compression (a Lempel-Ziv variant: a control byte of 8 flags, then literals and short or long copies
    from earlier output) to the original bytes. Raises ValueError when the data is not valid PRS."""
    return prs_stream(src)[0]


def prs_stream(src):
    """(the original bytes, the number of bytes of `src` the PRS stream took, end marker included)."""
    dst, pos, ctrl, bits = bytearray(), 0, 0, 0

    def flag():
        nonlocal ctrl, pos, bits
        if bits == 0:
            ctrl, pos, bits = src[pos], pos + 1, 8
        f, ctrl, bits = ctrl & 1, ctrl >> 1, bits - 1
        return f

    try:
        while True:
            if flag():                                     # a literal byte
                dst.append(src[pos])
                pos += 1
                continue
            if flag():                                     # a long copy: a 16-bit word gives the offset and the size
                word = src[pos] | src[pos + 1] << 8
                pos += 2
                if word == 0:
                    return bytes(dst), pos                 # the end marker
                size, off = word & 7, (word >> 3) - 0x2000
                if size == 0:
                    size, pos = src[pos] + 1, pos + 1
                else:
                    size += 2
            else:                                          # a short copy: two flags give the size, a byte the offset
                high = flag()
                size, off, pos = (high << 1 | flag()) + 2, src[pos] - 0x100, pos + 1
            if len(dst) + off < 0:
                raise ValueError("copy before the start")
            for _ in range(size):
                dst.append(dst[len(dst) + off])
    except IndexError:
        raise ValueError("PRS data ends early")


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


CHUNK_POLY = frozenset(list(range(0, 6)) + [8, 9] + list(range(16, 32)) + [56, 57, 58] + list(range(64, 76)))


def chunk_model_ok(data, m, base):
    """Is the 0x18-byte chunk model at file offset m (vertex list, polygon list, centre, radius; pointers are memory
    addresses, `base` the address of the file's first byte) one whose two chunk lists walk to their end marker?"""
    if m < 0 or m + 0x18 > len(data):
        return False
    vl, pl = struct.unpack_from("<2I", data, m)
    r = struct.unpack_from("<f", data, m + 20)[0]
    if not vl and not pl or r != r or not 0 <= r < 1e6:
        return False
    for ptr, kind in ((vl, "v"), (pl, "p")):
        if not ptr:
            continue
        p = ptr - base
        if p < 0 or p & 1 or p >= len(data):
            return False
        for _ in range(65536):
            if p + 2 > len(data):
                return False
            t = data[p]
            if t == 0xFF:
                break
            if kind == "v":
                if not 32 <= t <= 50 or p + 4 > len(data):
                    return False
                p += 4 + struct.unpack_from("<H", data, p + 2)[0] * 4
            elif t not in CHUNK_POLY:
                return False
            elif t <= 5:
                p += 2
            elif t in (8, 9):
                p += 4
            else:
                if p + 4 > len(data):
                    return False
                p += 4 + struct.unpack_from("<H", data, p + 2)[0] * 2
        else:
            return False
    return True


def basic_model_ok(data, m, base):
    """Radius of the 0x28-byte basic model at file offset m (points, normals, point count, meshsets, materials, meshset
    and material counts, centre, radius; pointers are memory addresses) when its arrays lie inside the file, else None."""
    if m < 0 or m + 0x28 > len(data):
        return None
    pts, nor, nb, ms, mat, nms, nmat = struct.unpack_from("<IIiIIHH", data, m)
    r = struct.unpack_from("<f", data, m + 36)[0]
    if not (0 < nb < 65536 and 0 < nms < 512 and r == r and 0 <= r < 1e6) or not pts or not ms:
        return None

    def inside(ptr, size):
        o = ptr - base
        return o >= 0 and o & 3 == 0 and o + size <= len(data)

    if not (inside(pts, 12 * nb) and inside(ms, 0x18 * nms) and (nor == 0 or inside(nor, 12 * nb)) and (mat == 0 or inside(mat, 20 * nmat))):
        return None
    return r


def model_radius(data, m, base):
    """The radius of the model at file offset m when it is a chunk model or a basic model, else None."""
    if chunk_model_ok(data, m, base):
        return struct.unpack_from("<f", data, m + 20)[0]
    return basic_model_ok(data, m, base)


def find_object_trees(data):
    """[(offset of the root object, objects, radius)] and the address the file loads at, for every tree of Ninja objects
    stored as the game's memory image: objects (eval flags, model, position, angles, scale, child, sibling: 0x34 bytes)
    linked by memory addresses, each model a chunk model whose lists walk to their end or a basic model whose arrays lie
    inside the file. An empty object (no model, child or sibling: a bone end) is kept only as another object's child or
    sibling. The load address is found by
    voting: the child and sibling addresses of the plausible objects must land on other plausible objects; of the five
    best-voted addresses the one under which most models are valid wins (a chain of same-sized objects votes equally for
    an address shifted by one object)."""
    n = len(data) // 4
    if n < 16:
        return [], 0
    w = struct.unpack("<%dI" % n, data[:n * 4])

    def addr(v):
        return v == 0 or v >> 24 in (0x8C, 0x8D, 0x0C, 0x0D)

    def num(v, lo, hi):
        return lo <= v <= hi

    cand, empty = [], []
    for i in range(n - 12):
        if w[i] > 0x3FF or not (addr(w[i + 1]) and addr(w[i + 11]) and addr(w[i + 12])):
            continue
        if not (num(w[i + 8], 0x3A800000, 0x447A0000) and num(w[i + 9], 0x3A800000, 0x447A0000) and num(w[i + 10], 0x3A800000, 0x447A0000)):
            continue
        if any(w[i + k] & 0x7F800000 == 0x7F800000 for k in (2, 3, 4)):
            continue
        if w[i + 1] or w[i + 11] or w[i + 12]:
            cand.append(i * 4)
        else:
            empty.append(i * 4)
    if len(cand) < 2:
        return [], 0
    at = set(cand)
    votes = collections.Counter()
    step = max(1, len(cand) // 200)
    for o in cand[::step]:
        for ptr in (w[o // 4 + 11], w[o // 4 + 12]):
            if ptr:
                for o2 in cand[::max(1, len(cand) // 2000)]:
                    b = ptr - o2
                    if b & 3 == 0:
                        votes[b] += 1
    ranked = [(b, c) for b, c in sorted(votes.items(), key=lambda kv: -kv[1]) if c >= 3 and b >> 24 in (0x8C, 0x8D, 0x0C, 0x0D)][:5]
    if not ranked:
        return [], 0

    def models_under(b):                                   # objects whose model is valid if the file loads at b
        return sum(1 for o in cand if w[o // 4 + 1] and model_radius(data, w[o // 4 + 1] - b, b) is not None)
    base = max(ranked, key=lambda bc: models_under(bc[0]))[0]   # equal counts: the one with the most votes
    good = {}
    for o in cand:
        m = w[o // 4 + 1]
        if m == 0 or model_radius(data, m - base, base) is not None:
            good[o] = (w[o // 4 + 1], w[o // 4 + 11], w[o // 4 + 12])
    for o in empty:                                        # a tree of its own only with a model, so an unreferenced one is dropped
        good[o] = (0, 0, 0)
    changed = True
    while changed:                                         # a child or sibling must be an object that is good itself
        changed = False
        for o, (m, ch, sb) in list(good.items()):
            if (ch and ch - base not in good) or (sb and sb - base not in good):
                del good[o]
                changed = True
    referenced = set()
    for o, (m, ch, sb) in good.items():
        for ptr in (ch, sb):
            if ptr:
                referenced.add(ptr - base)
    out = []
    for o in sorted(good):
        if o in referenced:
            continue
        nodes, todo, seen, radius, models = 0, [o], set(), 0.0, 0
        while todo:
            x = todo.pop()
            if x in seen:
                continue
            seen.add(x)
            m, ch, sb = good[x]
            nodes += 1
            if m:
                models += 1
                radius = max(radius, model_radius(data, m - base, base))
            for ptr in (ch, sb):
                if ptr:
                    todo.append(ptr - base)
        if models:
            out.append((o, nodes, radius))
    return out, base


PRESSED = b"PRESSED"


def pressed_blocks(data):
    """[(offset of the tag, name, decompressed bytes, offset past the block)] of every PRS stream tagged `PRESSED` plus a
    kind (`PRESSEDPOLFORMAT`, `PRESSEDPVRFORMAT`: 16 bytes) in data. Two layouts: the tag, a 4-byte big-endian size, a 12-byte
    name, the stream (the size must equal what the stream decompresses to); or the tag and the stream. A candidate that does
    not decompress, or whose size does not match, is passed over."""
    out, mv, p = [], memoryview(data), data.find(PRESSED)
    while p >= 0:
        block = None
        if p + 32 <= len(data):
            size = struct.unpack_from(">I", data, p + 16)[0]
            try:
                dec, used = prs_stream(mv[p + 32:])
                if dec and len(dec) == size:
                    block = (p, data[p + 20:p + 32].split(b"\x00")[0].decode("ascii", "replace"), dec, p + 32 + used)
            except ValueError:
                pass
        if block is None and p + 16 < len(data):
            try:
                dec, used = prs_stream(mv[p + 16:])
                if dec:
                    block = (p, "", dec, p + 16 + used)
            except ValueError:
                pass
        if block:
            out.append(block)
            p = data.find(PRESSED, block[3])
        else:
            p = data.find(PRESSED, p + len(PRESSED))
    return out


def file_data(disc, lba, size, path):
    """A disc file's bytes; a `.PRS` file (Sega's compression) is decompressed, so offsets into it are offsets into the
    decompressed data. A `.PRS` file that does not decompress is returned as it is."""
    data = disc.read(lba, size)
    if path.upper().endswith(".PRS"):
        try:
            return prs_decompress(data)
        except ValueError:
            pass
    return data


STRETCH = MAX_FILE              # a big file is scanned in stretches of this size
OVERLAP = 4 << 20               # each stretch repeats the end of the one before it: a thing that straddles a cut is whole in the next


def stretch_starts(size):
    """Byte offsets of the stretches a file of `size` bytes is scanned in: one when it fits, else one every STRETCH - OVERLAP
    bytes until a stretch reaches the end."""
    starts, step = [0], STRETCH - OVERLAP
    while starts[-1] + STRETCH < size:
        starts.append(starts[-1] + step)
    return starts


def stretches(disc, lba, size, path):
    """(start, data, whole) of each stretch of a disc file, whole being true when it is the file's one stretch. A `.PRS` file
    (Sega's compression) is decompressed first, so offsets into it are offsets into the decompressed data. Whatever the
    size, every byte is looked at: a thing found in the overlap of two stretches is found twice, at the same offset."""
    if path.upper().endswith(".PRS"):
        data = file_data(disc, lba, size, path)
        starts = stretch_starts(len(data))
        for start in starts:
            yield start, data[start:start + STRETCH], len(starts) == 1
        return
    starts = stretch_starts(size)
    for start in starts:
        yield start, disc.read(lba + start // 2048, min(STRETCH, size - start)), len(starts) == 1


def zip_members(data):
    """[(offset of the member's local header, name, bytes)] of every member of a ZIP archive that data holds whole (stored
    or deflated), read through the central directory at its end; [] when data is not one."""
    if data[:4] != b"PK\x03\x04" or len(data) < 22:
        return []
    try:
        z = zipfile.ZipFile(io.BytesIO(bytes(data)))
        out = []
        for info in z.infolist():
            if info.filename.endswith("/") or info.file_size > MAX_FILE:
                continue
            out.append((info.header_offset, info.filename, z.read(info)))
        return out
    except (zipfile.BadZipFile, zlib.error, NotImplementedError, struct.error, EOFError):
        return []


def find_md3(data):
    """[(offset, bytes, surfaces, triangles, vertices, radius)] of every Quake 3 model (MD3: `IDP3`, version 15) in data: the
    header and every surface must lie inside it, each triangle's vertices inside its surface; the radius is the first
    frame's."""
    out, p = [], data.find(b"IDP3")
    while p >= 0:
        nxt = p + 4
        if p % 4 == 0 and p + 108 <= len(data) and struct.unpack_from("<I", data, p + 4)[0] == 15:
            flags, nframes, ntags, nsurf, nskins, ofsf, ofst, ofss, ofse = struct.unpack_from("<9I", data, p + 72)
            ok = 0 < nframes <= 4096 and 0 < nsurf <= 64 and ntags <= 64 and 108 <= ofss < ofse <= len(data) - p and ofsf + 56 * nframes <= ofse
            tris = verts = 0
            s = p + ofss
            for _ in range(nsurf if ok else 0):
                if s + 108 > len(data) or data[s:s + 4] != b"IDP3":
                    ok = False
                    break
                sf, snf, nsh, nv, nt, otri, osh, ost, oxyz, oend = struct.unpack_from("<10I", data, s + 68)
                if not (0 < nv <= 65535 and 0 < nt <= 65535 and snf == nframes and 108 <= otri and oend >= 108 and s + oend <= p + ofse
                        and otri + 12 * nt <= oend and ost + 8 * nv <= oend and oxyz + 8 * nv * nframes <= oend):
                    ok = False
                    break
                tris, verts, s = tris + nt, verts + nv, s + oend
            if ok:
                out.append((p, ofse, nsurf, tris, verts, struct.unpack_from("<f", data, p + ofsf + 36)[0]))
                nxt = p + ofse
        p = data.find(b"IDP3", nxt)
    return out


def is_tag(t):
    """A body tag: four ASCII letters."""
    return re.fullmatch(rb"[A-Za-z]{4}", t) is not None





def tagged_faces(data, s2, end, ofs48, o52, nv):
    """The triangles of a mesh group from its display list at body offset ofs48 (8-byte commands up to 0xDF): [(a, b, c)] with
    vertex numbers in the group's vertex array, or None when there is no list or it does not read. Commands: 0x01 loads n
    vertices (n at bits 12..19 of the first word, the end slot in bits 1..11, an address in the second) into slots; 0x05
    is a triangle, 0x06 two triangles, 0x07 a quad as two (three vertex numbers doubled in each word); anything else is
    skipped. A slot is the vertex of the same number until a load changes it."""
    if not ofs48 or ofs48 + 8 > end - s2:
        return None
    slots, out, p = list(range(nv)), [], s2 + ofs48
    for _ in range(4096):
        if p + 8 > end:
            return None
        w0, w1 = struct.unpack_from(">II", data, p)
        cmd = w0 >> 24
        if cmd == 0xDF:
            return out
        if cmd == 0x01:
            n, vend = (w0 >> 12) & 0xFF, (w0 & 0xFFF) >> 1
            first = (w1 - o52) // 16 if w1 >= o52 and (w1 - o52) % 16 == 0 else None
            if first is not None and vend >= n:
                for k in range(n):
                    if vend - n + k < len(slots) and first + k < nv:
                        slots[vend - n + k] = first + k
        elif cmd in (0x05, 0x06, 0x07):
            tris = [((w0 >> 16) & 0xFF, (w0 >> 8) & 0xFF, w0 & 0xFF)]
            if cmd in (0x06, 0x07):
                tris.append(((w1 >> 16) & 0xFF, (w1 >> 8) & 0xFF, w1 & 0xFF))
            for t in tris:
                a, b, c = (x // 2 for x in t)
                if max(a, b, c) >= len(slots):
                    return None
                out.append((slots[a], slots[b], slots[c]))
        p += 8
    return None


def tagged_groups(data, s2, end):
    """The mesh groups of one tagged model whose body is data[s2:end] (pointers count from s2): [(offset of the group's record,
    vertex count, triangle count, type mode)]. The body starts with a 4-byte tag and a list of node pointers ended by
    0xFFFFFFFF; a node is 28 bytes (flags, child count at +20, child list at +24); a node whose flags have 0x4000 lists nodes,
    one of type 0x3064 lists mesh groups. A group is 0x40 bytes: vertex count at +58, type mode at +34 (3 triangles, 4
    quads, else strips), the number of vertex runs at +32 and their list at +36 (each run's size, +2 per 32 for a strip over
    32), the display list of its triangles at +48 (`tagged_faces`; groups without one use the type mode), the 16-byte
    vertices at +52."""
    out, seen = [], set()
    u32 = lambda o: struct.unpack_from(">I", data, o)[0]

    def node(ptr):
        if ptr == 0 or ptr in seen or s2 + ptr + 28 > end:
            return
        seen.add(ptr)
        o = s2 + ptr
        flags, nch, och = u32(o), u32(o + 20), u32(o + 24)
        if nch > 4096 or s2 + och + 4 * nch > end:
            return
        if flags & 0x4000:
            for i in range(nch):
                node(u32(s2 + och + 4 * i))
        elif flags & 0xFFFF == 0x3064:
            for i in range(nch):
                g = u32(s2 + och + 4 * i)
                if s2 + g + 0x40 <= end:
                    out.append(g)
    q = s2 + 4
    while q + 4 <= end and u32(q) != 0xFFFFFFFF and len(seen) < 100000:
        node(u32(q))
        q += 4
    rows = []
    for g in out:
        o = s2 + g
        nruns, mode = struct.unpack_from(">HH", data, o + 32)
        oruns, o52, nv = u32(o + 36), u32(o + 52), struct.unpack_from(">H", data, o + 58)[0]
        if not nv or o52 + 16 * nv > end - s2:
            continue
        runs = []
        if oruns:
            if s2 + oruns + 4 * nruns > end:
                continue
            for k in range(nruns):
                v = u32(s2 + oruns + 4 * k)
                runs.append(v + 2 * (v // 32) if mode not in (3, 4) and v > 32 else v)
            if sum(runs) < nv:
                runs[-1] += nv - sum(runs)
        else:
            step = mode if mode in (3, 4) else 1
            runs = [nv // nruns] * nruns if nruns >= 1 and nv % nruns == 0 and (nv // nruns) % step == 0 else [nv]
        if sum(runs) != nv:
            continue
        faces = tagged_faces(data, s2, end, u32(o + 48), o52, nv)
        tris = len(faces) if faces is not None else sum(r // 3 if mode == 3 else 2 * (r // 4) if mode == 4 else max(0, r - 2) for r in runs)
        rows.append((g, nv, tris, mode))
    return rows


def find_prm(data):
    """[(0, bytes, "PRM", 1, vertices, triangles, radius)] when data is one whole PRM mesh file, else []: two 16-bit counts (polygons,
    vertices), then 60-byte polygons (a type, a texture, four 16-bit vertex numbers, four colours, four texture coordinate pairs) and 24-byte
    vertices (a position and a normal, floats), the file being exactly that long. Type bit 0 makes a polygon a quad. The first polygons
    must name vertices that exist and the first vertices must be sane numbers."""
    n = len(data)
    if n < 4 + 60 + 24:
        return []
    npoly, nvert = struct.unpack_from("<HH", data, 0)
    if not (npoly and nvert and 4 + 60 * npoly + 24 * nvert == n):
        return []
    tris = 0
    for i in range(npoly):
        o = 4 + 60 * i
        typ, tex, a, b, c, d = struct.unpack_from("<6H", data, o)
        quad = typ & 1
        if typ > 0x3FFF or max(a, b, c, d if quad else 0) >= nvert:
            return []
        tris += 2 if quad else 1
    radius = 0.0
    for i in range(nvert):
        x, y, z = struct.unpack_from("<3f", data, 4 + 60 * npoly + 24 * i)
        if not (abs(x) < 1e7 and abs(y) < 1e7 and abs(z) < 1e7):
            return []
        radius = max(radius, (x * x + y * y + z * z) ** 0.5)
    return [(0, n, "PRM", 1, nvert, tris, radius)]


def tr4_level(data):
    """The level bytes of a TR4 level file (`TR4\\0`, three 16-bit texture page counts, then four zlib blocks each led by an unpacked
    and a packed size: textures of 32 and of 16 bits, miscellaneous textures, the level), or None when it is not one."""
    if data[:4] != b"TR4\0" or len(data) < 40:
        return None
    p = 10
    try:
        for i in range(4):
            usz, csz = struct.unpack_from("<II", data, p)
            if csz > len(data) - p - 8 or usz > MAX_FILE:
                return None
            if i == 3:
                out = zlib.decompress(data[p + 8:p + 8 + csz])
                return out if len(out) == usz else None
            p += 8 + csz
    except (zlib.error, struct.error):
        return None


def tr4_meshes(lv):
    """[(pointer, vertices, triangles, radius, rows)] of the distinct meshes of a TR4 level, by pointer, `rows` being (vertices, triangle
    vertex numbers). The level holds the rooms, the floor data, then the mesh words and their pointer table; a mesh is a centre, a radius,
    its vertices (three 16-bit coordinates), its normals or lights, its textured rectangles (four vertex numbers, a texture, effects) and
    its textured triangles (three, a texture, effects)."""
    n = len(lv)
    try:
        u16 = lambda o: struct.unpack_from("<H", lv, o)[0]
        i16 = lambda o: struct.unpack_from("<h", lv, o)[0]
        u32 = lambda o: struct.unpack_from("<I", lv, o)[0]
        if u32(0) != 0:
            return []
        q, nrooms = 6, u16(4)
        for _ in range(nrooms):
            q += 16 + 4 + 2 * u32(q + 16)
            q += 2 + 32 * u16(q)
            q += 4 + 8 * u16(q) * u16(q + 2)
            q += 4
            q += 2 + 46 * u16(q)
            q += 2 + 20 * u16(q)
            q += 7
        q += 4 + 2 * u32(q)
        nwords = u32(q)
        base = q + 4
        q = base + 2 * nwords
        nptr = u32(q)
        q += 4
        if not 0 < nptr < 100000 or q + 4 * nptr > n:
            return []
        ptrs = sorted(set(struct.unpack_from("<%dI" % nptr, lv, q)))
        out = []
        for ptr in ptrs:
            o = base + ptr
            nv = i16(o + 10)
            if ptr >= 2 * nwords or not 0 < nv < 4096:
                continue
            verts = [struct.unpack_from("<3h", lv, o + 12 + 6 * i) for i in range(nv)]
            r = o + 12 + 6 * nv
            nn = i16(r)
            r += 2 + (6 * nn if nn > 0 else -2 * nn)
            tris, ok = [], True
            nrect = i16(r)
            r += 2
            for i in range(max(nrect, 0)):
                a, b, c, d = struct.unpack_from("<4H", lv, r + 12 * i)
                ok = ok and max(a, b, c, d) < nv
                tris += [a, b, c, a, c, d]
            r += 12 * max(nrect, 0)
            ntri = i16(r)
            r += 2
            for i in range(max(ntri, 0)):
                a, b, c = struct.unpack_from("<3H", lv, r + 10 * i)
                ok = ok and max(a, b, c) < nv
                tris += [a, b, c]
            if ok and tris:
                radius = max((x * x + y * y + z * z) ** 0.5 for x, y, z in verts)
                out.append((ptr, nv, len(tris) // 3, radius, (verts, tris)))
        return out
    except struct.error:
        return []


def find_tr4(data):
    """[(index, bytes, "TR4", 1, vertices, triangles, radius)] for each mesh of a TR4 level file; the index counts the meshes."""
    lv = tr4_level(data)
    if lv is None:
        return []
    return [(i, 6 * nv + 10 * nt, "TR4", 1, nv, nt, radius) for i, (_, nv, nt, radius, _) in enumerate(tr4_meshes(lv))]


def find_tagged(data):
    """[(offset of the body, bytes, tag, mesh groups, vertices, triangles, radius)] of every model of a model block held at the
    start of data: a big-endian count, then count + 1 rising offsets that alternate between a pointer-flag section and a
    body, each body starting with a tag of four letters."""
    if len(data) < 24:
        return []
    n = struct.unpack_from(">I", data, 0)[0]
    if not 2 <= n <= 4096 or 4 + 4 * (n + 1) > len(data):
        return []
    offs = struct.unpack_from(">%dI" % (n + 1), data, 4)
    if any(offs[i] > offs[i + 1] for i in range(n)) or offs[-1] > len(data) or offs[0] < 4 + 4 * (n + 1):
        return []
    pairs = [(offs[2 * i + 1], offs[2 * i + 2]) for i in range(n // 2) if 2 * i + 2 <= n]
    if sum(1 for a, e in pairs if is_tag(data[a:a + 4])) * 2 < len(pairs):
        return []
    out = []
    for a, e in pairs:
        if not is_tag(data[a:a + 4]) or e - a < 8:
            continue
        groups = tagged_groups(data, a, e)
        if not groups:
            continue
        radius = 0.0
        for g, nv, tris, mode in groups:
            lo = struct.unpack_from(">3f", data, a + g + 8)
            hi = struct.unpack_from(">3f", data, a + g + 20)
            radius = max([radius] + [abs(x) for x in lo + hi if x == x and abs(x) < 1e9])
        out.append((a, e - a, data[a:a + 4].decode("ascii"), len(groups), sum(g[1] for g in groups), sum(g[2] for g in groups), radius))
    return out


class ModelScan(object):
    """The models found in the stretches of one file, by offset in the file: a thing in the overlap of two stretches is
    found twice and kept once. A tree's address is that of the file's first byte (its stretch's address minus where the
    stretch starts), so one address serves the whole file."""

    def __init__(self):
        self.flat, self.trees, self.ninja, self.blocks, self.motions, self.md3, self.tagged = {}, {}, {}, {}, {}, {}, {}

    def add(self, start, data):
        for at, name, dec, _ in pressed_blocks(data):
            self.blocks.setdefault(start + at, (name, dec))
        if start == 0:                                     # the members of a ZIP archive are streams of their own too
            for at, name, dec in zip_members(data):
                self.blocks.setdefault(at, (name, dec))
        for x in find_md3(data):
            self.md3.setdefault(start + x[0], (start + x[0],) + tuple(x[1:]))
        if start == 0:
            for x in find_tagged(data) + find_prm(data) + find_tr4(data):
                self.tagged.setdefault(x[0], x)
        for x in find_models(data):
            self.flat.setdefault(start + x[0], (start + x[0],) + tuple(x[1:]))
        trees, base = find_object_trees(data)
        for off, objs, radius in trees:
            self.trees.setdefault(start + off, (start + off, objs, radius, base - start))
        for off, nbytes, objs, radius, names in find_ninja(data):
            self.ninja.setdefault(start + off, (start + off, nbytes, objs, radius, names))
        for x in find_motions(data):
            self.motions.setdefault(start + x[0], (start + x[0],) + tuple(x[1:]))

    def tagged_result(self):
        """The models of a model block, sorted by offset: (offset, bytes, tag, groups, vertices, triangles, radius)."""
        return [self.tagged[k] for k in sorted(self.tagged)]

    def md3_result(self):
        """The Quake 3 models (MD3), sorted by offset: (offset, bytes, surfaces, triangles, vertices, radius)."""
        return [self.md3[k] for k in sorted(self.md3)]

    def result(self):
        """(flat models, trees, Ninja chunk models), each sorted by offset: flat (offset, records, strip bytes, radius,
        highest texture number), trees (offset, objects, radius, address of the file's first byte), Ninja (offset, bytes,
        objects, radius, texture names)."""
        return ([self.flat[k] for k in sorted(self.flat)], [self.trees[k] for k in sorted(self.trees)],
                [self.ninja[k] for k in sorted(self.ninja)])


def scan_models(data):
    """The ModelScan of a whole file held in memory, scanned in stretches as a disc file is."""
    scan = ModelScan()
    for start in stretch_starts(len(data)):
        scan.add(start, data[start:start + STRETCH])
    return scan


def scan_buffer(data):
    """ModelScan.result() of a whole file held in memory, scanned in stretches as a disc file is."""
    return scan_models(data).result()


def block_path(path, at):
    """The name of the stream tagged at offset `at` of a file: it is scanned as a file of its own."""
    return "%s@%x" % (path.lstrip("/"), at)


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


def pvm_names(data):
    """The texture names of a PVM archive's header, in archive order ([] when it is not one or names none)."""
    names = []
    if data[:4] == b"PVMH" and len(data) >= 12:
        flags, n = struct.unpack_from("<2H", data, 8)
        q = 12
        for _ in range(n):
            if q + 2 > len(data):
                break
            q += 2
            name = ""
            if flags & 8:
                name = data[q:q + 28].split(b"\0")[0].decode("ascii", "replace")
                q += 28
            q += (2 if flags & 4 else 0) + (2 if flags & 2 else 0) + (4 if flags & 1 else 0)
            names.append(name)
    return names


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
    names = pvm_names(data)
    return [(names[i] if i < len(names) else "",) + t for i, t in enumerate(pvrts)]


def njm_read(data, nodes=None):
    """(frames, kinds, nodes, moving) of a Ninja motion (an NMDM chunk: frame count, the kinds of keys, then per object
    one pointer and one count per kind; a key is a frame number and three values: a quaternion's is a frame number and four),
    or None when it is not one or carries kinds other than position, angle (or quaternion) and scale. The kinds come in this
    order: position, rotation, scale. `nodes` is the object count of the model it animates, when known (else the entries
    are counted as far as their pointers and counts are plausible)."""
    if len(data) < 24 or data[:4] != b"NMDM":
        return None
    size = struct.unpack_from("<I", data, 4)[0]
    mdata, frames, typ, _ = struct.unpack_from("<IIHH", data, 8)
    if typ & ~0x2007 or not typ or typ & 2 and typ & 0x2000 or size + 8 > len(data) or mdata & 3:
        return None
    slots = [(n, bit) for n, bit in (("position", 1), ("angle", 2), ("quaternion", 0x2000), ("scale", 4)) if typ & bit]
    kinds = [n for n, _ in slots]
    key = [20 if n == "quaternion" else 16 for n in kinds]
    t = len(kinds)
    count = 0
    while mdata + 8 * t * (count + 1) <= size and (nodes is None or count < nodes):
        o = 8 + mdata + 8 * t * count
        ps = struct.unpack_from("<%dI" % t, data, o)
        ns = struct.unpack_from("<%dI" % t, data, o + 4 * t)
        if not all((q == 0 and n == 0) or (0 < q and q + k * n <= size and 0 < n <= frames + 1) for q, n, k in zip(ps, ns, key)):
            break
        count += 1
    if not count or (nodes is not None and count != nodes):
        return None
    moving = 0
    for i in range(count):
        o = 8 + mdata + 8 * t * i
        ps = struct.unpack_from("<%dI" % t, data, o)
        ns = struct.unpack_from("<%dI" % t, data, o + 4 * t)
        for q, n, k in zip(ps, ns, key):
            fr = [struct.unpack_from("<I", data, 8 + q + k * j)[0] for j in range(n)]
            if fr != sorted(fr) or (fr and fr[-1] > frames):
                return None
        if any(n > 1 for n in ns):
            moving += 1
    return frames, kinds, count, moving


def find_motions(data):
    """[(offset, bytes, frames, kinds, nodes, moving)] of every Ninja motion (an NMDM chunk, see njm_read) in data, wherever it
    sits: a motion is kept inside the model file it animates as often as it is a file of its own. The model it animates is
    one of the same file with as many objects as the motion has nodes."""
    out, p = [], data.find(b"NMDM")
    while p >= 0:
        if p % 4 == 0 and p + 24 <= len(data):
            size = struct.unpack_from("<I", data, p + 4)[0]
            if size + 8 <= len(data) - p:
                r = njm_read(data[p:p + 8 + size])
                if r:
                    out.append((p, 8 + size, r[0], "+".join(r[1]), r[2], r[3]))
        p = data.find(b"NMDM", p + 4)
    return out


MOTION_KINDS = (("position", 1), ("angle", 2), ("quaternion", 0x2000), ("scale", 4))


def find_motion_images(data):
    """[(offset, frames, kinds, nodes, moving, load address)] of every Ninja motion stored as the game's memory image (a
    motion bank): the motion (pointer to its key table, frame count, kinds, a 16-bit word whose low 4 bits count the kinds)
    and its key table as in an NMDM chunk (see njm_read), every pointer a memory address. The file loads at the address of
    its lowest pointer (its first bytes are keys). A table has no length of its own: it ends at the next motion or table,
    the end of the file, or the first entry whose pointers and counts are not plausible; a motion pairs with a tree of as
    many objects."""
    n = len(data) // 4
    if n < 8:
        return []
    w = struct.unpack("<%dI" % n, data[:n * 4])
    ptrs = [x for x in w if x >> 24 in (0x8C, 0x8D, 0x0C, 0x0D)]
    if not ptrs:
        return []
    base, size = min(ptrs), len(data)
    heads = []
    for i in range(n - 2):
        md, frames, typ = w[i], w[i + 1], w[i + 2]
        t, inp = typ & 0xFFFF, typ >> 16
        if not (base <= md < base + size) or md & 3 or not 0 < frames < 0x10000:
            continue
        if not t or t & ~0x2007 or t & 2 and t & 0x2000:
            continue
        kinds = [k for k, bit in MOTION_KINDS if t & bit]
        if inp & 0xF != len(kinds):
            continue
        heads.append((i * 4, md - base, frames, kinds))
    starts = sorted(set(h[0] for h in heads) | set(h[1] for h in heads) | {size})
    out = []
    for at, md, frames, kinds in heads:
        t = len(kinds)
        key = [20 if k == "quaternion" else 16 for k in kinds]
        end = starts[bisect.bisect_right(starts, md)]
        entries = []
        while md + 8 * t * (len(entries) + 1) <= end:
            o = md + 8 * t * len(entries)
            ps = struct.unpack_from("<%dI" % t, data, o)
            ns = struct.unpack_from("<%dI" % t, data, o + 4 * t)
            if not all((q == 0 and c == 0) or (0 < c <= frames + 1 and base <= q and q - base + k * c <= size)
                       for q, c, k in zip(ps, ns, key)):
                break
            entries.append((ps, ns))
        if not entries:
            continue
        ok, moving = True, 0
        for ps, ns in entries:
            for q, c, k in zip(ps, ns, key):
                fr = [struct.unpack_from("<I", data, q - base + k * j)[0] for j in range(c)]
                if fr != sorted(fr) or (fr and fr[-1] > frames):
                    ok = False
            if any(c > 1 for c in ns):
                moving += 1
        if ok and moving:
            out.append((at, frames, "+".join(kinds), len(entries), moving, base))
    return out


def ninja_motion_rows(disc, objects):
    """Rows for [motions]: every `.NJM` of the disc that reads as a Ninja motion, with the Ninja model file of the same
    name (`objects`: model file -> its object count) when there is one."""
    rows = []
    for lba, size, path in disc.files():
        f = path.lstrip("/")
        if not f.upper().endswith(".NJM") or size > MAX_FILE:
            continue
        model = next((m for m in objects if m.upper() == f[:-1].upper()), "")
        r = njm_read(disc.read(lba, size), objects.get(model))
        if r is None:
            print("motions %s: not a Ninja motion this reader reads" % f)
            continue
        rows.append([f, model, str(r[0]), str(r[2]), str(r[3]), "+".join(r[1])])
    return sorted(rows)


PVRT_TYPES = (1, 2, 3, 4, 5, 6, 7, 8, 9, 0x0D, 0x10, 0x11, 0x12)


def pvrt_at(data, p):
    """(width, height, pixel format, data type, bytes) of a plausible PVRT chunk at p (its fields in range), or None."""
    if data[p:p + 4] != b"PVRT" or p + 16 > len(data):
        return None
    ln = struct.unpack_from("<I", data, p + 4)[0]
    pf, dt = data[p + 8], data[p + 9]
    w, h = struct.unpack_from("<2H", data, p + 12)
    if dt not in PVRT_TYPES or pf > 6 or data[p + 10] or data[p + 11] or not (8 <= w <= 1024 and 8 <= h <= 1024):
        return None
    if dt != 9 and (w & (w - 1) or h & (h - 1)):
        return None
    if ln < 8 or ln > 0x1000000:
        return None
    return w, h, pf, dt, ln + 8


def tr4_pages(data):
    """[(offset, "tr4", 256, 256, page, block, bytes, "")] for each texture page of a TR4 level file: its zlib blocks of 32-bit pages
    (blocks 0 and 2, four bytes a pixel) and of 16-bit pages (block 1, two bytes a pixel), 256 x 256 each; `offset` is where the page's
    block starts in the file plus the page's number (so each page has an offset of its own), `page` its number in it, `block` 0, 1 or 2."""
    if data[:4] != b"TR4\0" or len(data) < 40:
        return []
    out, p = [], 10
    for blk in range(3):
        if p + 10 > len(data):
            break
        usz, csz = struct.unpack_from("<II", data, p)
        bpp = 2 if blk == 1 else 4
        if csz > len(data) - p - 8 or data[p + 8] != 0x78 or usz % (256 * 256 * bpp):
            break
        out += [(p + k, "tr4", 256, 256, k, blk, 256 * 256 * bpp, "") for k in range(usz // (256 * 256 * bpp))]
        p += 8 + csz
    return out


def find_pictures(data, base=0, whole=True):
    """[(offset, kind, width, height, type, format, bytes, name)] of every picture in data: a whole GIF, JPEG or PNG file,
    or PVRT chunks anywhere (named by a PVM archive's header when data starts with one). With whole false, data is a
    stretch of a bigger file starting at byte `base` and only textures are looked for."""
    if whole and len(data) > 10:
        if data[:4] == b"GIF8":
            w, h = struct.unpack_from("<2H", data, 6)
            return [(0, "gif", w, h, 0, 0, len(data), "")]
        if data[:4] == b"\x89PNG" and len(data) > 24:
            w, h = struct.unpack_from(">2I", data, 16)
            return [(0, "png", w, h, 0, 0, len(data), "")]
        if data[:3] == b"\xff\xd8\xff":
            p = 2
            while p + 9 < len(data) and data[p] == 0xFF:
                m, ln = data[p + 1], data[p + 2] << 8 | data[p + 3]
                if 0xC0 <= m <= 0xCF and m not in (0xC4, 0xC8, 0xCC):
                    return [(0, "jpg", data[p + 7] << 8 | data[p + 8], data[p + 5] << 8 | data[p + 6], 0, 0, len(data), "")]
                p += 2 + ln
    if whole and data[:4] == b"TR4\0":
        return tr4_pages(data)
    names = pvm_names(data) if whole else []
    out, p = [], data.find(b"PVRT")
    while 0 <= p:
        t = pvrt_at(data, p)
        if t:
            out.append((base + p, "pvr", t[0], t[1], t[3], t[2], t[4], names[len(out)] if len(out) < len(names) else ""))
            p = data.find(b"PVRT", p + max(4, min(t[4], len(data) - p)))
        else:
            p = data.find(b"PVRT", p + 1)
    return out


def image_rows(disc, rules):
    """Rows for [images]: every picture of every disc file that is not audio or video (big files a stretch at a time, for
    textures only), named by its PVM archive or an `image <file> <offset hex> <text...>` rule."""
    given = {}
    for r in rules:
        if r[0] == "image" and len(r) >= 4:
            given[(r[1].upper(), int(r[2], 16))] = tidy(" ".join(r[3:]))
    rows = []

    def add(f, found):
        for off, kind, w, h, dt, pf, nbytes, name in found:
            rows.append([f, "%x" % off, kind, str(w), str(h), "%x" % dt, str(pf), str(nbytes),
                         given.get((f.upper(), off)) or (tidy(name) if name else "")])
    for lba, size, path in disc.files():
        if path.split("/")[-1].upper().endswith(SKIP):
            continue
        at, blocks = {}, {}
        for start, data, whole in stretches(disc, lba, size, path):
            for x in find_pictures(data, start, whole):
                at.setdefault(x[0], x)
            for off, _, dec, _ in pressed_blocks(data):
                blocks.setdefault(start + off, dec)
            if start == 0:
                for off, _, dec in zip_members(data):
                    blocks.setdefault(off, dec)
        add(path.lstrip("/"), [at[k] for k in sorted(at)])
        for off in sorted(blocks):                         # the pictures inside each `PRESSED` stream
            add(block_path(path, off), find_pictures(blocks[off], 0, True))
    seen = set((r[0].upper(), int(r[1], 16)) for r in rows)
    for key in given:
        if key not in seen:
            print("image: no picture %s:%x" % (key[0], key[1]))
    return rows


def own_textures(data, model_offsets):
    """For a file that holds Ninja models together with their PVR textures (each model's `NJTL` name list, then the `PVRT`
    chunks of all of them at the end): ([(list number, texture number, pixel offset, bytes, width, height, type, format)],
    {model offset: list number}), or None when the names of all the lists, joined in file order, do not count the file's
    PVRT chunks exactly. List numbers start at 1; a model takes the last list before it; texture n of list k is the chunk
    after those of the lists before it."""
    lists, p = [], 0
    while True:
        p = data.find(b"NJ", p)
        if p < 0 or p + 8 > len(data):
            break
        if p % 4:
            p += 1
            continue
        size = struct.unpack_from("<I", data, p + 4)[0]
        if data[p + 2:p + 4] == b"TL" and p + 8 + size <= len(data):
            names = ninja_names(data, p + 8, size)
            if names:
                lists.append((p, names))
        p += 4
    chunks = pvm_entries(data)
    if not lists or len(chunks) != sum(len(n) for _, n in lists):
        return None
    rows, base, first = [], 0, {}
    for k, (pos, names) in enumerate(lists, 1):
        first[k] = pos
        for n in range(len(names)):
            e = chunks[base + n]
            rows.append((k, n, e[1], e[2], e[3], e[4], e[5], e[6]))
        base += len(names)
    sets = {}
    for o in model_offsets:
        before = [k for k in first if first[k] < o]
        if before:
            sets[o] = max(before)
    return rows, sets


def own_texture_rows(disc, ninja_models):
    """([texture rows with their set column], the set of model files they cover) for Ninja models whose file also holds their
    textures (`own_textures`); each such model's texset is marked with its list number."""
    files = dict((path.lstrip("/").upper(), (lba, size, path)) for lba, size, path in disc.files())
    by_file = collections.defaultdict(list)
    for m in ninja_models:
        if m["file"].upper() in files:
            by_file[m["file"].upper()].append(m)
    rows, handled = [], set()
    for f in sorted(by_file):
        lba, size, path = files[f]
        if size > MAX_FILE and not path.upper().endswith(".PRS"):
            continue
        got = own_textures(file_data(disc, lba, size, path), [m["offset"] for m in by_file[f]])
        if not got:
            continue
        trows, sets = got
        handled.add(f)
        for m in by_file[f]:
            if m["offset"] in sets:
                m["texset"] = str(sets[m["offset"]])
        rows += [[f, str(n), f, "%x" % off, str(nb), str(w), str(h), "%x" % dt, str(pf), str(k)] for k, n, off, nb, w, h, dt, pf in trows]
    if handled:
        print("textures: %d model files carry their own textures, %d rows" % (len(handled), len(rows)))
    return rows, handled


def ninja_texture_rows(disc, ninja, skip=()):
    """Rows for [textures] for Ninja models: texture n of a model file is the texture its NJTL names, found in the PVM
    named after the model file, else a PVR file of that name (beside it first), else any PVM texture of that name.
    A model with no NJTL takes the textures of the PVM named after its file in order (texture n = its n-th), else the
    PVR named after its file as texture 0. Files in `skip` (those whose models carry their own textures) are left out."""
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
        if mfile in skip:
            continue
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
            if radius == radius and 1e-4 <= abs(radius) < 1e9:      # a model of no size (a radius of 0 or 1e-30) is stray data, found inside audio files
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


def index_texture_rows(disc, mfile, tfile):
    """Rows for a `textures <model file> <texture file> index` rule: texture n of the model file is the n-th texture of the
    PVM archive `tfile`. Both are disc paths as [models] writes them (a `.PRS` file is read decompressed)."""
    files = dict((path.lstrip("/").upper(), (lba, size, path)) for lba, size, path in disc.files())
    if tfile.lstrip("/").upper() not in files:
        print("textures: no disc file %s" % tfile)
        return []
    lba, size, path = files[tfile.lstrip("/").upper()]
    return [[mfile.lstrip("/"), str(n), tfile.lstrip("/"), "%x" % e[1], str(e[2]), str(e[3]), str(e[4]), "%x" % e[5], str(e[6])]
            for n, e in enumerate(pvm_entries(file_data(disc, lba, size, path)))]


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
        if len(r) == 4 and r[3].lower() == "index":
            got = index_texture_rows(disc, r[1], r[2])
            rows += got
            print("textures %s: %d entries by index for %s" % (r[2], len(got), r[1]))
            continue
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


def wav_info(b):
    """("WAV", channels, rate, samples) of a RIFF WAVE file whose header is at the start of b (the fmt chunk first, any format
    tag: the tag and bits per sample are not checked, a viewer decides what it can play), or None."""
    if len(b) < 44 or b[:4] != b"RIFF" or b[8:12] != b"WAVE" or b[12:16] != b"fmt ":
        return None
    ch, rate = struct.unpack_from("<HI", b, 22)
    bits = struct.unpack_from("<H", b, 34)[0]
    at = b.find(b"data", 36, 64)          # not at the fmt chunk's declared end: some files carry two stray bytes before it
    if not 1 <= ch <= 8 or not 4000 <= rate <= 192000 or at < 0 or at + 8 > len(b):
        return None
    data = struct.unpack_from("<I", b, at + 4)[0]
    return "WAV", ch, rate, data * 8 // (bits * ch) if bits else 0


def str_info(b):
    """("STR", None, rate, None) of a sample stream file whose header is a version of 1, the sample rate and a 4 (the next
    word, 0x2000 in the files seen, is the block size), or None. Listed, not decoded."""
    if len(b) < 16:
        return None
    version, rate, four = struct.unpack_from("<3I", b, 0)
    if version != 1 or four != 4 or not 4000 <= rate <= 192000:
        return None
    return "STR", None, rate, None


def rat_entries(size, head, read):
    """[(index, name, type, tag, bytes, offset)] of a RAT archive of `size` bytes (`RAT\\0`, a version, an entry count, then 32 byte
    entries from byte 32: an 8 byte name, a 4 byte type, a 4 byte tag, the size, two dates, the offset), up to the first entry
    that is not one: a type of 3 or 4 capitals and a name and a body that lie inside the file; [] when it is not one."""
    if head[:4] != b"RAT\0" or len(head) < 12:
        return []
    n = struct.unpack_from("<I", head, 8)[0]
    if not 0 < n < 100000 or 32 + 32 * n > size:
        return []
    table, out = read(0, 32 + 32 * n), []
    for i in range(n):
        o = 32 + 32 * i
        name, typ, tag = (table[o + a:o + b].split(b"\0")[0] for a, b in ((0, 8), (8, 12), (12, 16)))
        sz, off = struct.unpack_from("<I", table, o + 16)[0], struct.unpack_from("<I", table, o + 28)[0]
        if not (name and 3 <= len(typ) <= 4 and typ.isalpha() and typ.isupper()) or off + sz > size:
            break
        out.append((i, name.decode("latin1"), typ.decode("ascii"), tag.decode("latin1"), sz, off))
    return out


def rat_sounds(size, head, read):
    """The sound effects of a RAT archive: its entries of type SDFX, listed, not decoded."""
    return [(i, off, sz, "RAT sound (" + tag + ")", None, None, None) for i, _, typ, tag, sz, off in rat_entries(size, head, read) if typ == "SDFX"]


DTPK_RATE = 22050                                 # a DTPK pack records no rate (a program's pitch sets it): its samples' rows carry this one


def dtpk_sounds(entry, base, size, read):
    """The samples of a DTPK sound pack (the AM2 sound driver's) at `base` of a file, `size` bytes long, as audio rows. The sample table is at the offset
    in the pack's word at +0x3C: a count (the last index), then 16-byte entries {format << 24 | data offset (from the pack's start), loop start, loop end,
    0, data size}; format 0 is PCM16, 1 PCM8, 3 the sound chip's 4-bit ADPCM. A row's index is the entry's number * 10000 + the sample's."""
    head = read(base, 0x40)
    if len(head) < 0x40:
        return []
    t = struct.unpack_from("<I", head, 0x3C)[0]
    if t + 8 > size:
        return []
    count = struct.unpack("<I", read(base + t, 4))[0] + 1
    if not 0 < count < 10000 or t + 4 + 16 * count > size:
        return []
    table, rows = read(base + t + 4, 16 * count), []
    for k in range(count):
        w, _, _, nbytes = struct.unpack_from("<IIII", table, 16 * k)
        fmt, at = w >> 24, w & 0xFFFFFF
        if not nbytes or at + nbytes > size:
            continue
        name, samples = {3: ("DTPK ADPCM", nbytes * 2), 0: ("DTPK PCM16", nbytes >> 1), 1: ("DTPK PCM8", nbytes)}.get(fmt, ("DTPK format %d" % fmt, None))
        rows.append((entry * 10000 + k, base + at, nbytes, name, 1, DTPK_RATE, samples))
    return rows


def audio_file_rows(size, head, read):
    """[(index, offset, bytes, format, channels, rate, samples)] (the last three None where unknown) of the sounds in one file of `size` bytes, `head` being its first
    bytes and read(offset, n) any n bytes of it: every ADX / AHX stream of an AFS archive (an archive with none holds
    something else and has no rows; a DTPK sound pack in it gives a row per sample), a file that is one ADX / AHX stream, a RIFF WAVE file, a sample stream file (STR), the sound effects of a RAT archive (listed), or a DTPK or Sega SMLT / SMPB sound bank (listed, not opened)."""
    if head[:4] == b"AFS\0":
        n = struct.unpack("<I", head[4:8])[0]
        if not 0 < n < 100000:
            return []
        table, rows = read(0, 8 + 8 * n), []
        for i in range(n):
            off, sz = struct.unpack_from("<II", table, 8 + 8 * i)
            if not sz or off + 16 > size:
                continue
            first = read(off, 16)
            if first[:4] == b"DTPK":                    # a sound pack inside the archive: its samples
                rows.extend(dtpk_sounds(i, off, sz, read))
                continue
            info = adx_info(first)
            rows.append((i, off, sz) + (info if info else ("unknown", None, None, None)))
        return rows if any(r[3] in ("ADX", "AHX") or r[3].startswith("DTPK ") for r in rows) else []
    if head[:4] == b"RAT\0":
        return rat_sounds(size, head, read)
    info = adx_info(head)
    if info:
        return [(0, 0, size) + info]
    wav = wav_info(head)
    if wav:
        return [(0, 0, size) + wav]
    if head[:4] == b"DTPK":
        return [(0, 0, size, "DTPK sound bank", None, None, None)]
    stream = str_info(head)
    if stream:
        return [(0, 0, size) + stream]
    if head[:4] in (b"SMLT", b"SMPB"):            # Sega's sound driver files: a multi bank (SMLT) or a program bank (SMPB), listed, not opened
        return [(0, 0, size, head[:4].decode("ascii") + " sound bank", None, None, None)]
    return []


def audio_rows(disc, rules):
    """Rows for the [audio] section: every ADX / AHX stream in an AFS archive or a file of its own, and every DTPK
    sound bank (listed, not opened)."""
    names = {}
    for r in rules:
        if r[0] == "sound" and len(r) >= 4:
            names[(r[1].upper(), int(r[2]))] = tidy(" ".join(r[3:]))
    rows = []
    for lba, size, path in disc.files():
        fn = path.split("/")[-1].upper()

        def read(off, n, lba=lba):
            return disc.read(lba + off // 2048, (off % 2048) + n)[off % 2048:off % 2048 + n]
        for idx, off, sz, fmt, ch, rate, samples in audio_file_rows(size, disc.read(lba, min(size, 4096)), read):
            secs = "%.1f" % (samples / rate) if rate and samples else ""
            rows.append([fn, str(idx), "%x" % off, str(sz), fmt] + ["" if x is None else str(x) for x in (ch, rate, samples)]
                        + [secs, names.get((fn, idx), "")])
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
    ninja_objs = {}                                   # Ninja model file -> the object count of its first model
    ninja_models = []                                 # the model dicts of every Ninja model
    cand = [v for v in where if 0x0C000000 <= v < 0x0D000000 and v % 4 == 0]
    random.seed(1)
    def take(path, name, found, trees, nj, say, md3=(), tagged=()):
        """Rows for the models found in one file (or one stream of a file: path is then its `file@offset` name)."""
        for off, nbytes, nsurf, ntris, nverts, radius in md3:
            models.append({"file": path.lstrip("/"), "offset": off, "records": nsurf, "bytes": nbytes, "radius": radius,
                           "addr": None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
        if md3 and say:
            print("%-16s %5d Quake 3 models" % (name, len(md3)))
        for off, nbytes, tag, ngroups, nverts, ntris, radius in tagged:
            models.append({"file": path.lstrip("/"), "offset": off, "records": ngroups, "bytes": nbytes, "radius": radius,
                           "addr": None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
        if tagged and say:
            print("%-16s %5d tagged models" % (name, len(tagged)))
        for off, objs, radius, _ in trees:
            models.append({"file": path.lstrip("/"), "offset": off, "records": objs, "bytes": objs * 0x34, "radius": radius,
                           "addr": None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
        if trees and say:
            print("%-16s %5d object trees" % (name, len(trees)))
        for off, nbytes, objs, radius, names in nj:
            ninja_objs.setdefault(path.lstrip("/"), objs)
            models.append({"file": path.lstrip("/"), "offset": off, "records": objs, "bytes": nbytes, "radius": radius,
                           "addr": None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
            ninja_models.append(models[-1])
            ninja.setdefault(path.lstrip("/").upper(), names)
        if nj and say:
            print("%-16s %5d Ninja models" % (name, len(nj)))
        if not found:
            return
        votes = collections.Counter()
        for off, _, _, _, _ in random.sample(found, min(15, len(found))):
            for v in cand:
                if (v - off) % 0x1000 == 0 and v - off > 0:
                    votes[v - off] += 1
        top = votes.most_common(1)
        load = top[0][0] if top and top[0][1] >= max(3, min(15, len(found)) // 2) else None
        if say:
            print("%-16s %5d models  loaded at %s" % (name, len(found), "%08X" % load if load else "?"))
        maxtex[name.upper()] = max(f[4] for f in found)
        for off, recs, nbytes, radius, _ in found:
            models.append({"file": name, "offset": off, "records": recs, "bytes": nbytes, "radius": radius,
                           "addr": load + off if load else None, "group": "", "sub": "", "sublabel": "", "name": "", "table": "",
                           "index": "", "used_by": "", "texset": ""})
    for lba, size, path in disc.files():
        name = path.split("/")[-1]
        if name.upper().endswith(SKIP):
            continue
        scan = ModelScan()
        for start, data, _ in stretches(disc, lba, size, path):
            scan.add(start, data)
        take(path, name, *scan.result(), say=True, md3=scan.md3_result(), tagged=scan.tagged_result())
        for at in sorted(scan.blocks):                     # each `PRESSED` stream, each ZIP member is scanned as a file of its own
            vname = block_path(path, at)
            sub = scan_models(scan.blocks[at][1])
            take(vname, vname, *sub.result(), say=False, md3=sub.md3_result(), tagged=sub.tagged_result())
        if scan.blocks:
            print("%-16s %5d streams inside" % (name, len(scan.blocks)))
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
    own, handled = own_texture_rows(disc, ninja_models)
    tex += own
    tex += [row + [""] for row in ninja_texture_rows(disc, ninja, handled)]
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
    njm = ninja_motion_rows(disc, ninja_objs)
    if njm:
        sections.append(("motions", "file\tmodel\tframes\tnodes\tmoving\tkeys", ["\t".join(row) for row in njm]))
    pics = image_rows(disc, rules)
    if pics:
        sections.append(("images", "file\toffset\tkind\twidth\theight\ttype\tformat\tbytes\tname", ["\t".join(row) for row in pics]))
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
