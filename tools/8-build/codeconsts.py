#!/usr/bin/env python3
"""codeconsts.py: C that reads a constant from the original's code, by its address. Run in the repo.

    python3 tools/8-build/codeconsts.py            list every read (exit 1 when any is found)
    python3 tools/8-build/codeconsts.py --write    replace each by the constant it reads in 1ST_READ.BIN

A float the original loads from a literal pool was written as a read of that pool word, `(*(float *)0xC057A4C)`. In the original
and in the equivalence check the word is the constant, but the build from C puts its own code over the original's (the layout's
game and fill regions), so there the read takes whatever the new code has at that address. Crazy Taxi, 2026-10-24: 399 reads in
162 files; Init_SEGA_LOGO's 500.0 read the address of nlPushUnitMatrix, and the game froze before the SEGA logo. The literal
written is exact: the shortest decimal that gives the same bits back (a NaN or an infinity has no C89 constant: it is
left as it is and reported). Only reads with a constant address inside a replaced region are touched. Stdlib only.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import math
import re
import struct
import sys

READ = re.compile(r'\(?\*\(\s*float\s*\*\s*\)\s*\(?\s*0x([0-9A-Fa-f]{7,8})\s*\)?\)?')


def regions(path='layout.txt'):
    """[(start, end)] the build from C replaces: the layout's game and fill entries"""
    out = []
    for l in open(path):
        p = l.split('#')[0].split()
        if len(p) >= 3 and p[0] in ('game', 'fill'):
            out.append((int(p[1], 16) & 0x1FFFFFFF, int(p[2], 16) & 0x1FFFFFFF))
    return out


def literal(bits):
    """the C for the float with these bits: the shortest decimal that gives them back"""
    v = struct.unpack('<f', struct.pack('<I', bits))[0]
    if math.isnan(v) or math.isinf(v):
        return None                                      # C89 has no way to write it as a constant: left as it is, and reported
    for digits in range(1, 18):
        s = '%.*g' % (digits, v)
        if struct.unpack('<f', struct.pack('<f', float(s)))[0] == v and struct.pack('<f', float(s)) == struct.pack('<I', bits):
            break
    if 'e' not in s and '.' not in s:
        s += '.0'
    return '%sf' % s if not s.startswith('-') else '(%sf)' % s


def scan(text, image, base, regs):
    """[(match start, match end, address, replacement)]"""
    out = []
    for m in READ.finditer(text):
        a = int(m.group(1), 16) & 0x1FFFFFFF
        if not any(lo <= a < hi for lo, hi in regs):
            continue
        o = a - (base & 0x1FFFFFFF)
        if a & 3 or o < 0 or o + 4 > len(image):
            continue
        s, e = m.start(), m.end()
        opened, closed = text[s:e].count('('), text[s:e].count(')')
        while closed > opened and text[e - 1] == ')':      # a closing parenthesis that belongs to the expression around it
            e -= 1; closed -= 1
        while opened > closed and text[s] == '(':          # an opening one that does
            s += 1; opened -= 1
        if re.match(r'\s*=(?!=)', text[e:]):                # a store into the code: not a constant
            continue
        out.append((s, e, a, literal(struct.unpack_from('<I', image, o)[0])))
    return out


def main():
    write = '--write' in sys.argv
    regs = regions()
    image = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    total = 0
    nfiles = 0
    for f in sorted(glob.glob('src/*.c')):
        t = open(f, errors='replace').read()
        hits = scan(t, image, base, regs)
        if not hits:
            continue
        total += len(hits); nfiles += 1
        if write:
            for s, e, a, lit in reversed(hits):
                if lit: t = t[:s] + lit + t[e:]
            open(f, 'w').write(t)
        elif total <= 20:
            for s, e, a, lit in hits[:3]:
                print('  %s: %s -> %s' % (f, t[s:e], lit))
    left = 0
    for f in sorted(glob.glob('src/*.c')) if write else []:
        left += sum(1 for h in scan(open(f, errors='replace').read(), image, base, regs) if not h[3])
    print('codeconsts: %d reads of a float in the replaced code, %d files%s' % (total, nfiles, ' (rewritten, %d NaN or infinity left)' % left if write else ''))
    sys.exit(1 if (left if write else total) else 0)


if __name__ == '__main__':
    main()
