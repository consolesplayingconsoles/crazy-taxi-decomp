#!/usr/bin/env python3
"""The linker `define` lines an overlay's C units need: python3 tools/overlay/link_defs.py <overlay> <identifiers file>   (run in overlays/<name>/)

Every name the units use (the identifiers file, from build.sh) that the overlay's own asm does not define gets the game's address: from the
overlay's functions.txt, globals.txt and symbols.local.txt first, then 1ST_READ.BIN's functions.txt, globals.txt and symbols.txt. The compiler's
runtime helpers (_divls, _quick_mvn ...) are called by code whose text never names them; they live in 1ST_READ.BIN, so they are defined too.
The overlay-less build (build.sh) does this with symbols.txt alone.
"""
import os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def table(path, a_col, n_col, fn=False):
    out = {}
    if os.path.exists(path):
        for l in open(path, errors='replace'):
            q = l.split()
            if l.startswith('#') or len(q) <= n_col or (fn and q[0] != 'F'):
                continue
            try:
                out.setdefault(q[n_col], int(q[a_col], 16))
            except ValueError:
                pass
    return out


main = {}
for f, a, n, fn in (('functions.txt', 1, 3, True), ('globals.txt', 0, 1, False), ('symbols.txt', 0, 1, False)):
    for k, v in table(os.path.join(ROOT, f), a, n, fn).items():
        main.setdefault(k, v)
names = {}
for f, a, n, fn in (('functions.txt', 1, 3, True), ('globals.txt', 0, 1, False), ('symbols.local.txt', 0, 1, False)):
    for k, v in table(f, a, n, fn).items():
        names.setdefault(k, v)
for k, v in main.items():
    names.setdefault(k, v)
idents = set(open(sys.argv[2], errors='replace').read().split())
exported = {f.split('_', 1)[1][:-4] if '_' in f else '' for f in os.listdir('asm')}
helpers = {k for k in main if re.match(r'_(quick|slow|div|mod)\w*$', k)}
for k in sorted(idents | helpers):
    if k in names and k not in exported:
        print('define _%s(%08X)' % (k, names[k]))
