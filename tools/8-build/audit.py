#!/usr/bin/env python3
"""After a build from C: every reference into the game code must follow the code that moved. Run in the repo. Stdlib only.

    python3 tools/8-build/audit.py            report and exit 1 when anything is stale

The build replaces the game code (layout.txt `game`, up to `keep` when there is one) with code compiled from C at new addresses,
so an address of the old game code that is still in the image points at whatever the new code put there. Each such reference is a
crash waiting for the path that uses it; a boot finds one per run, this lists all of them from the files the build leaves
(build/cbuild/src/*.c, build/cbuild/asm/*.src, build/cbuild/game.bin, 1ST_READ.BIN):

  1. C literals: a number in the built C that lies in the old game code (a function or a table the C names by address and the
     build did not turn into a symbol);
  2. words copied one to one (the entry stub, the kept block, the SDK, shifted when the layout shifts): a word that pointed into
     the old game code in the original and still holds the same value in the image;
  3. table pieces (data the build copies as words): a word that points into the old game code and did not become a symbol;
  4. table pieces that hold code: a function prologue (sts.l pr,@-r15) with literal-pool loads outside the piece. Copied as data,
     its pool loads read whatever lies beside it at the new address (Virtua Tennis: the white screen, a jsr to 0009420B).

A value is a reference by its top byte (0C, 8C, AC) and its address in the old game code. An 8C-topped word is never two SH-4
instructions (0x8Cxx is no opcode); a 0C- or AC-topped word inside listed code is two instructions and is not counted.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import glob
import os
import re
import struct
import sys

import layout  # noqa: E402

OUT = 'build/cbuild'
TOPS = (0x0C, 0x8C, 0xAC)
LIT = re.compile(r'(?<![\w.])0[xX]([0-9A-Fa-f]{7,8})\b(?![.\w])')


def main():
    for p in ('1ST_READ.BIN', OUT + '/game.bin'):
        if not os.path.exists(p):
            sys.exit('[ERROR] %s missing: run the build from C first' % p)
    G0, G1 = layout.region('game', True)
    K0, K1 = layout.region('keep') or (G1, G1)
    D = (layout.region('shift') or (0, 0))[0]
    old0, old1 = G0, K0                                   # the game code the build replaces: every address in it moved
    base = layout.mirror(int(open('BASE').read().strip(), 16))
    orig = open('1ST_READ.BIN', 'rb').read()
    new = open(OUT + '/game.bin', 'rb').read()
    F = layout.functions()
    starts = [a for a, s, n in F]
    ends = [a + s for a, s, n in F]

    def in_old(v):
        return (v >> 24) in TOPS and old0 <= ((v & 0x1FFFFFFF) | 0x0C000000) < old1

    def in_code(x):
        i = bisect.bisect_right(starts, x) - 1
        return i >= 0 and x < ends[i]

    def byte_like(x):
        if not (base <= x <= base + len(orig) - 4):
            return False
        w_ = struct.unpack_from('<I', orig, x - base)[0]
        return all(((w_ >> s) & 0xFF) < 0x40 for s in (0, 8, 16, 24))

    def ref(v, x):
        """True when the word v at original address x is a reference into the old game code. Not one: an odd value (code
        addresses are even; Crazy Taxi 0C0502FF between ASCII words), the uncached AC mirror (game code is never run or read
        through it; Crazy Taxi AC060110 between floats), a 0C word inside listed code (two instructions) or among byte-table words
        (Virtua Tennis 0C0C0B0B)."""
        if not in_old(v) or v & 1 or (v >> 24) == 0xAC:
            return False
        if (v >> 24) == 0x8C:
            return True
        return not in_code(x) and not (byte_like(x) and (byte_like(x - 4) or byte_like(x + 4)))

    found = {}

    # 1. C literals
    c = []
    for f in sorted(glob.glob(OUT + '/src/*.c')):
        for i, line in enumerate(open(f, errors='replace'), 1):
            if line.lstrip().startswith(('/*', '*', '//')):
                continue
            for m in LIT.finditer(line):
                if in_old(int(m.group(1), 16)):
                    c.append('%s:%d 0x%s' % (os.path.basename(f), i, m.group(1).upper()))
    found['C literals into the old game code'] = c

    # 2. words copied one to one: [base, G0) where it was, the kept block and everything after the game code D higher
    w = []
    for lo, hi, d in ((base, G0, 0), (K0, K1, D), (G1, base + len(orig), D)):
        for x in range(lo + (-lo % 4), hi - 3, 4):
            o = x - base
            n = o + d
            if n + 4 > len(new):
                break
            v = struct.unpack_from('<I', orig, o)[0]
            if ref(v, x) and struct.unpack_from('<I', new, n)[0] == v:
                w.append('%08X (now %08X) = %08X' % (x, x + d, v))
    found['copied words still pointing into the old game code'] = w

    # 3 and 4. table pieces
    t, code = [], []
    for f in sorted(glob.glob(OUT + '/asm/tab_*.src')):
        txt = open(f).read()
        m = re.match(r';\s*([0-9a-f]{8})-([0-9a-f]{8})', txt)
        if not m:
            continue
        lo, hi = layout.mirror(int(m.group(1), 16)), layout.mirror(int(m.group(2), 16))
        words = [int(x, 16) for x in re.findall(r"\.DATA\.W\s+H'([0-9A-F]{4})", txt)]
        stale = 0
        for k in range(len(words) - 1):
            v = words[k + 1] << 16 | words[k]
            if (v >> 24) == 0x8C and in_old(v):
                stale += 1
        if stale:
            t.append('%s: %d words' % (os.path.basename(f), stale))
        prologue = outside = False
        for x in range(lo, hi - 1, 2):
            h = struct.unpack_from('<H', orig, x - base)[0]
            if h == 0x4F22:
                prologue = True
            if h >> 12 == 0xD and not (lo <= ((x + 4) & ~3) + 4 * (h & 0xFF) < hi):
                outside = True
        if prologue and outside:
            code.append('%s (%d bytes)' % (os.path.basename(f), hi - lo))
    found['table-piece words pointing into the old game code'] = t
    found['table pieces that hold code (function prologue, pool loads outside the piece)'] = code

    bad = 0
    for what, items in found.items():
        print('%-80s %d' % (what, len(items)))
        for it in items[:12]:
            print('    ' + it)
        if len(items) > 12:
            print('    ...')
        bad += len(items)
    if bad:
        sys.exit('[ERROR] %d references still point into the old game code' % bad)
    print('audit: no reference into the old game code')


if __name__ == '__main__':
    main()
