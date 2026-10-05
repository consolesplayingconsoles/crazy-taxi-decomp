#!/usr/bin/env python3
"""List or extract files from a Dreamcast GDI, across every data track. Stdlib only.

    gdi_read.py <disc.gdi>                       # list: lba size path
    gdi_read.py <disc.gdi> IP.BIN <out>          # bootstrap: first 16 sectors of the HD area
    gdi_read.py <disc.gdi> <name-or-path> <out>  # one file, matched by full path or bare name

The ISO9660 volume starts at LBA 45000 (high-density area), but file extents can sit in any later
data track (Dreamkey 3.1 keeps every file in track 5). Readers that only open the track at 45000
return empty files for those without any error, so each extent is resolved to its own track here.
"""
import os
import struct
import sys

HD_START = 45000


def tracks(gdi):
    base = os.path.dirname(os.path.abspath(gdi))
    out = []
    for line in open(gdi).read().splitlines()[1:]:
        p = line.split()
        if len(p) < 6:
            continue
        name = " ".join(p[4:-1]).strip('"')
        out.append({"lba": int(p[1]), "mode": int(p[2]), "sector": int(p[3]),
                    "path": os.path.join(base, name)})
    return [t for t in out if t["mode"] == 4]           # data tracks only


class Disc:
    def __init__(self, gdi):
        self.tracks = sorted(tracks(gdi), key=lambda t: t["lba"])
        for t in self.tracks:
            t["count"] = os.path.getsize(t["path"]) // t["sector"]
            t["fh"] = open(t["path"], "rb")

    def sector(self, lba):
        for t in self.tracks:
            if t["lba"] <= lba < t["lba"] + t["count"]:
                skip = 16 if t["sector"] == 2352 else 0    # raw mode-1: 12 sync + 4 header
                t["fh"].seek((lba - t["lba"]) * t["sector"] + skip)
                return t["fh"].read(2048)
        raise ValueError("LBA %d is in no data track" % lba)

    def read(self, lba, size):
        data = b"".join(self.sector(lba + i) for i in range((size + 2047) // 2048))
        return data[:size]

    def files(self):
        pvd = self.sector(HD_START + 16)
        if pvd[1:6] != b"CD001":
            raise SystemExit("no ISO9660 volume descriptor at LBA %d" % (HD_START + 16))
        root = pvd[156:190]
        out = []
        self._walk(struct.unpack_from("<I", root, 2)[0], struct.unpack_from("<I", root, 10)[0], "", out)
        return out

    def _walk(self, lba, size, prefix, out):
        data = self.read(lba, size)
        i = 0
        while i < len(data):
            n = data[i]
            if n == 0:                                     # padding to the next sector
                i = (i // 2048 + 1) * 2048
                continue
            rec = data[i:i + n]
            name = rec[33:33 + rec[32]]
            if name not in (b"\x00", b"\x01"):
                elba, esize = struct.unpack_from("<I", rec, 2)[0], struct.unpack_from("<I", rec, 10)[0]
                path = prefix + "/" + name.decode("ascii", "replace").split(";")[0]
                if rec[25] & 2:
                    self._walk(elba, esize, path, out)
                else:
                    out.append((elba, esize, path))
            i += n


def main():
    if len(sys.argv) not in (2, 4):
        raise SystemExit(__doc__)
    disc = Disc(sys.argv[1])
    if len(sys.argv) == 2:
        for lba, size, path in sorted(disc.files(), key=lambda f: f[2]):
            print("%7d %10d %s" % (lba, size, path))
        return
    want, out = sys.argv[2], sys.argv[3]
    if want.upper() == "IP.BIN":
        data = disc.read(HD_START, 0x8000)
    else:
        hits = [f for f in disc.files() if f[2] == want or f[2].rsplit("/", 1)[-1] == want]
        if len(hits) != 1:
            raise SystemExit("%d matches for %s" % (len(hits), want))
        data = disc.read(hits[0][0], hits[0][1])
    open(out, "wb").write(data)
    print("%s: %d bytes" % (out, len(data)))


if __name__ == "__main__":
    main()
