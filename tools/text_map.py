#!/usr/bin/env python3
"""Map where a Dreamcast game keeps its text: a starting point for translation. Stdlib only.

    text_map.py <1ST_READ.BIN> <base hex> <out dir> [<disc.gdi> [quick|standard|deep]]

Tiers: quick = executable only; standard (default) = plus the first 2 MiB of every disc file;
deep = whole files (slow on big discs).

Writes to <out dir>:
  exe_strings.tsv  every ASCII / Shift-JIS string in the executable: address, file offset,
                   encoding, length and the text.
  files.tsv        with a GDI: every disc file and its text density (ASCII / Shift-JIS bytes in
                   string runs).
  images.tsv       with a GDI: every disc file that holds images (standard PVR textures found in it, or
                   an image file extension). No guess about which ones have text: that is for a person
                   to see, on the contact sheet textures.sh makes.
"""
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ASCII_RUN = re.compile(rb"[\x20-\x7e\t\n\r]{4,}\x00")
SJIS_RUN = re.compile(rb"(?:[\x81-\x9f\xe0-\xef][\x40-\x7e\x80-\xfc]|[\x20-\x7e]){3,}\x00")
SJIS_PAIR = re.compile(rb"[\x81-\x9f\xe0-\xef][\x40-\x7e\x80-\xfc]")
# Density patterns have no terminator: with one, long binary stretches make the regex quadratic.
ASCII_SPAN = re.compile(rb"[\x20-\x7e\t\n\r]{4,}")
SJIS_SPAN = re.compile(rb"(?:[\x81-\x9f\xe0-\xef][\x40-\x7e\x80-\xfc]|[\x20-\x7e]){3,}")
TIERS = {"quick": 0, "standard": 2 << 20, "deep": None}   # bytes read per disc file
IMAGE_EXT = (".PVR", ".PVM", ".PVP", ".PNG", ".TGA", ".BMP", ".JPG", ".GIF", ".TIM")


def strings(data):
    """(offset, encoding, text bytes) for NUL-terminated ASCII and Shift-JIS runs."""
    seen = {}
    for m in SJIS_RUN.finditer(data):
        b = m.group()[:-1]
        if len(SJIS_PAIR.findall(b)) >= 2:
            seen[m.start()] = ("sjis", b)
    for m in ASCII_RUN.finditer(data):
        b = m.group()[:-1]
        if m.start() not in seen and re.search(rb"[A-Za-z]{3}", b):
            seen[m.start()] = ("ascii", b)
    return sorted((o, e, b) for o, (e, b) in seen.items())


def density(blob):
    a = sum(len(m.group()) for m in ASCII_SPAN.finditer(blob) if re.search(rb"[A-Za-z]{3}", m.group()))
    s = sum(len(m.group()) for m in SJIS_SPAN.finditer(blob) if len(SJIS_PAIR.findall(m.group())) >= 2)
    return a, s


def main():
    if len(sys.argv) not in (4, 5, 6):
        raise SystemExit(__doc__)
    data = open(sys.argv[1], "rb").read()
    base = int(sys.argv[2], 16)
    out = sys.argv[3]
    os.makedirs(out, exist_ok=True)

    rows = []
    for off, enc, b in strings(data):
        text = b.decode("shift_jis" if enc == "sjis" else "latin-1", "replace")
        rows.append((base + off, off, enc, len(b), text))
    with open(os.path.join(out, "exe_strings.tsv"), "w", encoding="utf-8") as f:
        f.write("addr\toffset\tenc\tbytes\ttext\n")
        for addr, off, enc, n, text in rows:
            f.write("%08x\t%06x\t%s\t%d\t%s\n" % (addr, off, enc, n, text.replace("\t", "\\t").replace("\n", "\\n")))

    nfiles = 0
    tier = sys.argv[5] if len(sys.argv) == 6 else "standard"
    if tier not in TIERS:
        raise SystemExit("tier must be one of: " + ", ".join(TIERS))
    if len(sys.argv) >= 5 and tier != "quick":
        sys.path.insert(0, HERE)              # gdi_read.py lives next to this script
        import gdi_read
        disc = gdi_read.Disc(sys.argv[4])
        with open(os.path.join(out, "files.tsv"), "w") as f:
            f.write("path\tbytes\tascii_text\tsjis_text\n")
            for lba, size, path in sorted(disc.files(), key=lambda x: x[2]):
                blob = disc.read(lba, size if TIERS[tier] is None else min(size, TIERS[tier]))
                a, s = density(blob)
                f.write("%s\t%d\t%d\t%d\n" % (path, size, a, s))
                nfiles += 1
        with open(os.path.join(out, "images.tsv"), "w") as f:
            f.write("path\tbytes\tpvr_textures\tkind\n")
            for lba, size, path in sorted(disc.files(), key=lambda x: x[2]):
                blob = disc.read(lba, size if TIERS[tier] is None else min(size, TIERS[tier]))
                n = blob.count(b"PVRT")
                ext = path.upper().endswith(IMAGE_EXT)
                if n or ext:
                    f.write("%s\t%d\t%d\t%s\n" % (path, size, n, "image file" if ext and not n else "holds PVR textures" if not ext else "image file with PVR textures"))
    print("%d strings (%d Shift-JIS), %d files" % (len(rows), sum(1 for r in rows if r[2] == "sjis"), nfiles))


if __name__ == "__main__":
    main()
