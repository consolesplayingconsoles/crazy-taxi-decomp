#!/usr/bin/env python3
"""Build a playable disc image: a copy of the original GDI with some files replaced. Stdlib only.

    disc_patch.py <original.gdi> <out dir> <path on disc>=<local file> [...]

Files are written in place, sector by sector, with each sector's error correction (EDC, P/Q
parity) recomputed: emulators ignore stale ECC, real hardware and GDEMU may not. No file moves, so
nothing that locates files by disc position breaks. A smaller replacement is padded with zeros. A
bigger one moves into free sectors (no file or directory uses them: GD-ROMs often carry a whole
filler track) and its ISO9660 directory entry is repointed; only that entry and the new sectors change.
"""
import os
import shutil
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gdi_read  # noqa: E402

# EDC (CRC-32, CD polynomial) and P/Q parity (Reed-Solomon over GF(256)), per ECMA-130.
_EDC_T = []
for _i in range(256):
    _e = _i
    for _ in range(8):
        _e = (_e >> 1) ^ (0xD8018001 if _e & 1 else 0)
    _EDC_T.append(_e)
_F, _B = [0] * 256, [0] * 256
for _i in range(256):
    _j = ((_i << 1) ^ (0x11D if _i & 0x80 else 0)) & 0xFF
    _F[_i] = _j
    _B[_i ^ _j] = _i


def _edc(data):
    c = 0
    for x in data:
        c = (c >> 8) ^ _EDC_T[(c ^ x) & 0xFF]
    return c


def _parity(buf, major_count, minor_count, major_mult, minor_inc, out):
    size = major_count * minor_count
    for major in range(major_count):
        idx = (major >> 1) * major_mult + (major & 1)
        a = b = 0
        for _ in range(minor_count):
            t = buf[idx]
            idx += minor_inc
            if idx >= size:
                idx -= size
            a ^= t
            b ^= t
            a = _F[a]
        a = _B[_F[a] ^ b]
        out[major] = a
        out[major + major_count] = a ^ b


def fix_sector(s):
    """Refresh EDC + P/Q of a 2352-byte Mode-1 sector after its user data changed."""
    s = bytearray(s)
    struct.pack_into("<I", s, 2064, _edc(bytes(s[0:2064])))
    s[2068:2076] = bytes(8)
    buf = bytes(s[12:2076])
    p = bytearray(172)
    _parity(buf, 86, 24, 2, 86, p)
    q = bytearray(104)
    _parity(buf + bytes(p), 52, 43, 86, 88, q)
    s[2076:2248] = p
    s[2248:2352] = q
    return bytes(s)


def grow(gdi, path, data):
    """Move a file that no longer fits into free sectors and repoint its directory record."""
    need = (len(data) + 2047) // 2048
    disc = gdi_read.Disc(gdi)
    def track_of(lba):
        for t in disc.tracks:
            if t["lba"] <= lba < t["lba"] + t["count"]:
                return t
        raise SystemExit("lba %d in no data track" % lba)


    def write_sector(lba, user):
        t = track_of(lba)
        with open(t["path"], "r+b") as f:
            pos = (lba - t["lba"]) * 2352
            f.seek(pos)
            s = bytearray(f.read(2352))
            s[16:2064] = user.ljust(2048, b"\0")
            f.seek(pos)
            f.write(fix_sector(s))


    # used sectors: every file and every directory extent
    used = []
    pvd = disc.sector(45016)
    root = pvd[156:190]
    dirs = [(struct.unpack_from("<I", root, 2)[0], struct.unpack_from("<I", root, 10)[0])]
    target = None
    i = 0
    while i < len(dirs):
        dlba, dsize = dirs[i]
        i += 1
        used.append((dlba, (dsize + 2047) // 2048))
        raw = disc.read(dlba, dsize)
        o = 0
        while o < len(raw):
            n = raw[o]
            if n == 0:
                o = (o // 2048 + 1) * 2048
                continue
            rec = raw[o:o + n]
            name = rec[33:33 + rec[32]]
            elba, esize = struct.unpack_from("<I", rec, 2)[0], struct.unpack_from("<I", rec, 10)[0]
            if name not in (b"\0", b"\1"):
                if rec[25] & 2:
                    dirs.append((elba, esize))
                else:
                    used.append((elba, (esize + 2047) // 2048))
                    if name.split(b";")[0].decode("latin-1").upper() == path.strip("/").split("/")[-1].upper():
                        target = (dlba + o // 2048, o % 2048, elba, esize)
            o += n
    if target is None:
        raise SystemExit("%s not found" % path)
    rec_lba, rec_off, old_lba, old_size = target

    # lowest free run of `need` sectors in a data track, past the volume descriptors
    want = None
    spans = sorted(used)
    start = None
    for t in disc.tracks:
        lo = max(t["lba"], 45100)
        cand = lo
        for ul, un in spans:
            if ul + un <= cand or ul >= cand + need:
                continue
            cand = max(cand, ul + un)
        if cand + need <= t["lba"] + t["count"] and (want is None or cand <= want):
            start = want if want is not None else cand
            break
    if start is None:
        raise SystemExit("no free run of %d sectors" % need)

    for k in range(need):
        write_sector(start + k, data[k * 2048:(k + 1) * 2048])
    sec = bytearray(disc.sector(rec_lba))
    struct.pack_into("<I", sec, rec_off + 2, start)
    struct.pack_into(">I", sec, rec_off + 6, start)
    struct.pack_into("<I", sec, rec_off + 10, len(data))
    struct.pack_into(">I", sec, rec_off + 14, len(data))
    write_sector(rec_lba, bytes(sec))

    disc = gdi_read.Disc(gdi)
    hit = [f for f in disc.files() if f[2].upper() == "/" + path.strip("/").upper()]
    if not (hit and hit[0][0] == start and hit[0][1] == len(data) and disc.read(start, len(data)) == data):
        raise SystemExit("[ERROR] %s: read-back after the move differs" % path)
    print("  moved %s: %d -> %d bytes, lba %d -> %d (free space in the track at lba %d), "
          "directory entry updated, read back identical" % (path, old_size, len(data), old_lba, start,
                                                            track_of(start)["lba"]))


def main():
    if len(sys.argv) < 4:
        raise SystemExit(__doc__)
    gdi, out = sys.argv[1], sys.argv[2]
    src = os.path.dirname(os.path.abspath(gdi))
    os.makedirs(out, exist_ok=True)
    lines = open(gdi).read().splitlines()
    for line in lines[1:]:
        p = line.split()
        if len(p) >= 6:
            name = " ".join(p[4:-1]).strip('"')
            print("  copying %s" % name)
            shutil.copyfile(os.path.join(src, name), os.path.join(out, name))
    out_gdi = os.path.join(out, os.path.basename(gdi))
    shutil.copyfile(gdi, out_gdi)
    disc = gdi_read.Disc(out_gdi)
    files = {path.upper(): (lba, size) for lba, size, path in disc.files()}
    for arg in sys.argv[3:]:
        path, local = arg.split("=", 1)
        key = "/" + path.strip("/").upper()
        if key not in files:
            raise SystemExit("[ERROR] %s is not on the disc" % path)
        lba, size = files[key]
        data = open(local, "rb").read()
        if len(data) > size:
            grow(out_gdi, path, data)             # bigger: move it into free space
            disc = gdi_read.Disc(out_gdi)
            files = {p.upper(): (l, z) for l, z, p in disc.files()}
            continue
        data += bytes(size - len(data))
        for t in disc.tracks:
            if t["lba"] <= lba < t["lba"] + t["count"]:
                track = t
                break
        if track["sector"] != 2352:
            raise SystemExit("[ERROR] %s: track is not raw 2352-byte sectors" % path)
        with open(track["path"], "r+b") as f:
            for i in range(0, size, 2048):
                pos = (lba - track["lba"] + i // 2048) * 2352
                f.seek(pos)
                sec = bytearray(f.read(2352))
                chunk = data[i:i + 2048]
                sec[16:16 + len(chunk)] = chunk
                f.seek(pos)
                f.write(fix_sector(sec))
        disc = gdi_read.Disc(out_gdi)                    # re-open: verify from the image itself
        if disc.read(lba, size) != data:
            raise SystemExit("[ERROR] %s: read-back differs" % path)
        print("  replaced %s (%d bytes, %s), read back identical" % (path, len(data),
                                                                    "padded" if len(open(local, 'rb').read()) < size else "same size"))
    print("Disc image: %s" % out_gdi)


if __name__ == "__main__":
    main()
