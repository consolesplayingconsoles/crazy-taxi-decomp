#!/usr/bin/env python3
"""Find where the executable keeps the positions of records inside disc files. Stdlib only.

    file_tables.py <1ST_READ.BIN> <base hex> <disc.gdi> <out.tsv>

A translation that grows a record inside a container file (a scene, a script, a text bank) only
works if everything that locates the records is updated. This finds, for every disc file:
  1. its records: a 4-byte tag repeating at aligned positions (0x800, 0x100 or 0x20), e.g. `SCP\\0`
     every sector;
  2. tables in the executable that hold those records' positions: runs of 32-bit entries at a fixed
     stride, in bytes or in 0x800-byte sectors, optionally each followed by the record's size.
A hit means the file can grow: repack the records, then rewrite that table. No hit is not proof there is none:
the positions may live in the file itself, or be computed.
"""
import collections
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gdi_read  # noqa: E402

ALIGNS = (0x800, 0x100, 0x20)
MAX_READ = 32 << 20               # records are found in the first 32 MiB of a file
MIN_RECORDS = 3


def records(blob):
    """(align, tag, [offsets]) for the most frequent aligned 4-byte tag, or None."""
    for align in ALIGNS:
        tags = collections.Counter()
        for o in range(0, len(blob) - 3, align):
            t = blob[o:o + 4]
            if sum(32 < c < 127 for c in t) >= 3 and len(set(t)) >= 3:   # 'dddd' is pixel data
                tags[t] += 1
        if not tags:
            continue
        tag, n = tags.most_common(1)[0]
        if n >= MIN_RECORDS and blob[0:4] == tag:          # the file starts with a record
            return align, tag, [o for o in range(0, len(blob) - 3, align) if blob[o:o + 4] == tag]
    return None


def find_table(exe, words, offs, size):
    """Best run of table entries in the executable for these record offsets."""
    best = None
    for unit, uname in ((0x800, "sectors"), (1, "bytes")):
        if any(o % unit for o in offs):
            continue
        vals = [o // unit for o in offs]
        lens = [((offs[i + 1] if i + 1 < len(offs) else size) - offs[i]) // unit for i in range(len(offs))]
        idx = {v: i for i, v in enumerate(vals)}
        for stride in (4, 8, 12, 16, 24, 32):
            for p in words.get(vals[0], []) + words.get(vals[1], []):
                i0 = idx[struct.unpack_from("<I", exe, p)[0]]
                n = 0
                while i0 + n < len(vals) and p + stride * n + 4 <= len(exe) and \
                        struct.unpack_from("<I", exe, p + stride * n)[0] == vals[i0 + n]:
                    n += 1
                if n < MIN_RECORDS:
                    continue
                with_len = stride >= 8 and all(
                    struct.unpack_from("<I", exe, p + stride * k + 4)[0] == lens[i0 + k] for k in range(n))
                # Evenly spaced records give 0,1,2,... which any counter matches: need sizes too.
                if len(set(lens[i0:i0 + n])) == 1 and not with_len:
                    continue
                score = (n, with_len)
                if best is None or score > best[0]:
                    best = (score, p - stride * i0, stride, uname, with_len, n)
    return best


def main():
    if len(sys.argv) != 5:
        raise SystemExit(__doc__)
    exe = open(sys.argv[1], "rb").read()
    base = int(sys.argv[2], 16)
    disc = gdi_read.Disc(sys.argv[3])
    words = {}
    for i in range(0, len(exe) - 3, 4):
        words.setdefault(struct.unpack_from("<I", exe, i)[0], []).append(i)
    files = sorted(disc.files(), key=lambda f: f[2])
    rows, found = [], 0
    for k, (lba, size, path) in enumerate(files, 1):
        if k % 50 == 0 or k == len(files):
            print("  scanned %d/%d files" % (k, len(files)), file=sys.stderr)
        rec = records(disc.read(lba, min(size, MAX_READ)))
        if not rec:
            continue
        align, tag, offs = rec
        hit = find_table(exe, words, offs, size)
        if hit:
            (_, _), at, stride, unit, with_len, n = hit
            found += 1
            rows.append((path, len(offs), tag, align, "0x%08X" % (base + at), "%06x" % at, stride, unit,
                         "yes" if with_len else "no", "%d/%d" % (n, len(offs))))
        else:
            rows.append((path, len(offs), tag, align, "-", "-", "-", "-", "-", "0/%d" % len(offs)))
    with open(sys.argv[4], "w") as f:
        f.write("file\trecords\ttag\talign\ttable_addr\ttable_offset\tstride\tunit\twith_sizes\tmatched\n")
        for r in rows:
            f.write("%s\t%d\t%s\t0x%x\t%s\t%s\t%s\t%s\t%s\t%s\n" % (
                r[0], r[1], r[2].decode("latin-1").replace("\0", "\\0"), r[3], r[4], r[5], r[6], r[7], r[8], r[9]))
    print("%d files with repeating records, %d with a table in the executable" % (len(rows), found))


if __name__ == "__main__":
    main()
