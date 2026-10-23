#!/usr/bin/env python3
"""Dump the disc files a decomp lists as text, as they are. Stdlib only.

    text_dump.py <disc.gdi> <models.txt> <out dir>

A `text <disc path>` line in models.txt names one disc file (the path as `files.tsv` writes it, for example
`/AMAZON/ME_TMES.MEB`; `#` starts a comment). Each file is copied byte for byte to <out dir>/<path>. Nothing is detected or
decoded: the decomp says which files are text. A path the disc does not hold stops the run. The out dir (named text-dump) is
emptied first, so it always matches the list.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))


def main():
    if len(sys.argv) != 4:
        raise SystemExit(__doc__)
    gdi, rules, out = sys.argv[1:]
    want = []
    if os.path.isfile(rules):
        for line in open(rules):
            t = line.split("#", 1)[0].split(None, 1)
            if len(t) == 2 and t[0] == "text":
                want.append(t[1].strip())
    if os.path.basename(os.path.normpath(out)) == "text-dump" and os.path.isdir(out):
        shutil.rmtree(out)
    if not want:
        print("0 text files listed in %s" % rules)
        return
    sys.path.insert(0, HERE)                  # gdi_read.py lives next to this script
    import gdi_read
    disc = gdi_read.Disc(gdi)
    files = {path.upper(): (lba, size, path) for lba, size, path in disc.files()}
    for w in want:
        key = ("/" + w.lstrip("/")).upper()
        if key not in files:
            raise SystemExit("[ERROR] %s: the disc has no file %s" % (rules, w))
        lba, size, path = files[key]
        dest = os.path.join(out, path.lstrip("/"))
        os.makedirs(os.path.dirname(dest), exist_ok=True)
        with open(dest, "wb") as f:
            f.write(disc.read(lba, size))
    print("%d text files dumped to %s" % (len(want), out))


if __name__ == "__main__":
    main()
