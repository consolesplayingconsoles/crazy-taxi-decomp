#!/usr/bin/env python3
"""Map where a Dreamcast game keeps its text: a starting point for translation. Stdlib only.

    text_map.py <1ST_READ.BIN> <base hex> <report.txt> <out dir> [<disc.gdi> [quick|standard|deep]]

Tiers: quick = executable only; standard (default) = plus the first 2 MiB of every disc file;
deep = whole files (slow on big discs).

Writes to <out dir>:
  exe_strings.tsv  every ASCII / Shift-JIS string in the executable: address, file offset,
                   encoding, length, the functions that use it (from the report), and every
                   pointer to it (file offsets of 32-bit words holding its address). The pointers
                   are what let a translation move a string somewhere bigger and repoint it,
                   instead of fitting the original bytes.
  files.tsv        with a GDI: every disc file, its text density (ASCII / Shift-JIS bytes in
                   string runs), and the executable strings that name it with their functions
                   (the code that opens it, i.e. where its offsets are parsed).
  font.tsv         callers of the BIOS ROM font vector (0x8C0000B4), and font-looking files.
  image_candidates.tsv
                   with a GDI: files that probably hold text drawn as images, with the reason.
                   Candidates only: the user decides. Today's signal is language variants (the
                   same name with ENG/JAP/GER/... in it, or a language-named folder).
<report.txt> is DcReport output (F and S lines).
"""
import bisect
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ASCII_RUN = re.compile(rb"[\x20-\x7e\t\n\r]{4,}\x00")
SJIS_RUN = re.compile(rb"(?:[\x81-\x9f\xe0-\xef][\x40-\x7e\x80-\xfc]|[\x20-\x7e]){3,}\x00")
SJIS_PAIR = re.compile(rb"[\x81-\x9f\xe0-\xef][\x40-\x7e\x80-\xfc]")
# Density patterns have no terminator: with one, long binary stretches make the regex quadratic.
ASCII_SPAN = re.compile(rb"[\x20-\x7e\t\n\r]{4,}")
SJIS_SPAN = re.compile(rb"(?:[\x81-\x9f\xe0-\xef][\x40-\x7e\x80-\xfc]|[\x20-\x7e]){3,}")
TIERS = {"quick": 0, "standard": 2 << 20, "deep": None}   # bytes read per disc file
ROMFONT = (0x8C0000B4, 0x0C0000B4, 0xAC0000B4)
LANG_TOKENS = ("ENG", "JAP", "JPN", "GER", "DEU", "FRE", "FRA", "SPA", "ESP", "ITA", "USA", "EUR")
LANG_DIRS = ("ENGLISH", "JAPANESE", "GERMAN", "FRENCH", "SPANISH", "ITALIAN")


def language_families(paths):
    """{path: reason} for files whose name differs from a sibling only by a language token, or
    that sit in a language-named folder."""
    groups, out = {}, {}
    tok = re.compile("(%s)" % "|".join(LANG_TOKENS))
    for p in paths:
        d, name = p.rsplit("/", 1)
        for m in tok.finditer(name.upper()):
            key = (d, name.upper()[:m.start()] + "*" + name.upper()[m.end():])
            groups.setdefault(key, []).append((p, m.group()))
        if any(part.upper() in LANG_DIRS for part in d.split("/")):
            out[p] = "in a language folder (%s)" % d
    for (d, key), members in groups.items():
        if len({lang for _, lang in members}) >= 2:
            for p, lang in members:
                out[p] = "language variant %s of %s" % (lang, key)
    return out


def load_report(path):
    funcs, callers = [], {}
    for line in open(path, errors="replace"):
        if line.startswith("F "):
            p = line.split()
            funcs.append((int(p[1], 16), p[3]))
        elif line.startswith("S "):
            m = re.match(r"S ([0-9a-f]+) \[([^\]]*)\]", line)
            if m:
                callers[int(m.group(1), 16)] = sorted({c for c in m.group(2).split(",") if c})
    funcs.sort()
    return funcs, callers


def containing(funcs, starts, addr):
    i = bisect.bisect_right(starts, addr) - 1
    return funcs[i][1] if i >= 0 else "-"


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
    if len(sys.argv) not in (5, 6, 7):
        raise SystemExit(__doc__)
    data = open(sys.argv[1], "rb").read()
    base = int(sys.argv[2], 16)
    funcs, callers = load_report(sys.argv[3])
    starts = [a for a, _ in funcs]
    out = sys.argv[4]
    os.makedirs(out, exist_ok=True)

    words = {}
    for o in range(0, len(data) - 3, 4):
        words.setdefault(struct.unpack_from("<I", data, o)[0], []).append(o)

    rows = []
    for off, enc, b in strings(data):
        addr = base + off
        ptrs = words.get(addr, []) + words.get(addr ^ 0x80000000, [])
        users = callers.get(addr) or sorted({containing(funcs, starts, base + p) for p in ptrs})
        text = b.decode("shift_jis" if enc == "sjis" else "latin-1", "replace")
        rows.append((addr, off, enc, len(b), users, ptrs, text))
    with open(os.path.join(out, "exe_strings.tsv"), "w", encoding="utf-8") as f:
        f.write("addr\toffset\tenc\tbytes\tfunctions\tpointer_offsets\ttext\n")
        for addr, off, enc, n, users, ptrs, text in rows:
            f.write("%08x\t%06x\t%s\t%d\t%s\t%s\t%s\n" % (addr, off, enc, n, ",".join(users),
                    ",".join("%06x" % p for p in ptrs), text.replace("\t", "\\t").replace("\n", "\\n")))

    with open(os.path.join(out, "font.tsv"), "w") as f:
        f.write("kind\twhere\tfunction\n")
        if not any(words.get(v) for v in ROMFONT):
            f.write("-\tno BIOS ROM-font use found: the game draws text with its own font or as images\t-\n")
        for v in ROMFONT:
            for p in words.get(v, []):
                f.write("romfont-vector\t%06x\t%s\n" % (p, containing(funcs, starts, base + p)))

    nfiles = 0
    tier = sys.argv[6] if len(sys.argv) == 7 else "standard"
    if tier not in TIERS:
        raise SystemExit("tier must be one of: " + ", ".join(TIERS))
    if len(sys.argv) >= 6 and tier != "quick":
        sys.path.insert(0, HERE)              # gdi_read.py lives next to this script
        import gdi_read
        disc = gdi_read.Disc(sys.argv[5])
        by_name = {}
        for addr, off, enc, n, users, ptrs, text in rows:
            for w in re.findall(r"[A-Za-z0-9_]+\.[A-Za-z0-9]{2,4}", text):
                by_name.setdefault(w.upper(), []).append("%08x:%s" % (addr, "|".join(users) or "-"))
        with open(os.path.join(out, "files.tsv"), "w") as f, open(os.path.join(out, "font.tsv"), "a") as ff:
            f.write("path\tbytes\tascii_text\tsjis_text\tnamed_by\n")
            for lba, size, path in sorted(disc.files(), key=lambda x: x[2]):
                blob = disc.read(lba, size if TIERS[tier] is None else min(size, TIERS[tier]))
                a, s = density(blob)
                name = path.rsplit("/", 1)[-1].upper()
                f.write("%s\t%d\t%d\t%d\t%s\n" % (path, size, a, s, " ".join(by_name.get(name, []))))
                if re.search(r"FONT|\.FON$|KANJI", name):
                    ff.write("font-file\t%s\t-\n" % path)
                nfiles += 1
        cands = language_families([path for _, _, path in disc.files()])
        with open(os.path.join(out, "image_candidates.tsv"), "w") as f:
            f.write("path\treason\n")
            for p in sorted(cands):
                f.write("%s\t%s\n" % (p, cands[p]))
            if not cands:
                f.write("-\tno automatic signal for this game (no per-language files): this does NOT mean no "
                        "text in images. Check textures/index.html by eye.\n")
    print("%d strings (%d Shift-JIS, %d with pointers), %d files" % (
        len(rows), sum(1 for r in rows if r[2] == "sjis"), sum(1 for r in rows if r[5]), nfiles))


if __name__ == "__main__":
    main()
