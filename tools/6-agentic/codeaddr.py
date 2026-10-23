#!/usr/bin/env python3
"""Addresses of the game's own functions written as numbers in the C become the functions' names. Run in the repo.

    python3 tools/6-agentic/codeaddr.py            report
    python3 tools/6-agentic/codeaddr.py --apply    rewrite src/*.c

The generated C calls functions by name, but some call sites hand a function to another: `set_event(0x84, 0xC0385AC)` passes a
callback, `*(unsigned int *)0xC2864CC = 0xC039E58` stores a function pointer. As a number it stays where the function used to
be when the code moves, so a build from the C needs the name: `(int)Name`, with a declaration if the file has none. Only numbers
that are exactly a function's entry in the game code region are rewritten; masks and constants that merely look like addresses
(`& 0x00020000`) are not in the region and are left alone. Numbers that point inside a function (not an entry) are listed, not
rewritten: they are data in the code (tools/6-agentic/poolconst.py takes the constants) or a label that needs a function of its own.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import os
import re
import sys

import layout  # noqa: E402

G0, G1 = layout.region('game', True)                  # the game's own code (layout.txt)
LIT = re.compile(r'(?<![\w.])0[xX]([0-9A-Fa-f]{7,8})\b(?![.\w])')


def main(argv):
    apply = '--apply' in argv
    entry = {}
    for l in open('functions.txt'):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            a = int(p[1], 16)
            if G0 <= a < G1:
                entry[a] = p[3]
    declared_rx = {n: re.compile(r'\b%s\s*\(' % re.escape(n)) for n in entry.values()}
    rewritten = inside = files = 0
    left = []
    for f in sorted(glob.glob('src/*.c')):
        if os.path.basename(f).startswith('zz_') or 'gen_tmp' in f:
            continue
        text = open(f, errors='replace').read()
        used = set()

        def sub(m):
            global_ = None
            v = int(m.group(1), 16)
            if v >> 24 not in (0x0C, 0x8C, 0xAC):
                return m.group(0)
            c = 0x0C000000 | (v & 0x1FFFFFFF)
            if not (G0 <= c < G1):
                return m.group(0)
            if c in entry:
                used.add(entry[c])
                top = v - c
                return '((int)%s%s)' % (entry[c], (' + 0x%X' % top) if top else '')
            left.append((f, hex(c)))
            return m.group(0)

        out = []
        for line in text.split('\n'):
            if re.match(r'^\s*(extern\b|#)', line):
                out.append(line)            # a declaration or a directive keeps its numbers
                continue
            out.append(LIT.sub(sub, line))
        new = '\n'.join(out)
        if used:
            need = [n for n in sorted(used) if not declared_rx[n].search(text)]
            if need and apply:
                decl = ''.join('extern int %s();\n' % n for n in need)
                new = decl + new
            rewritten += len(used)
            files += 1
        if apply and new != text:
            open(f, 'w').write(new)
    print('%s: %d function names in %d files; numbers inside a function (not an entry), left as they are: %d' %
          ('applied' if apply else 'would change', rewritten, files, len(left)))


if __name__ == '__main__':
    main(sys.argv)
