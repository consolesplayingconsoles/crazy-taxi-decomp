#!/usr/bin/env python3
"""srcmap.py: the original source files of the executable, from the code alone. Stdlib only.

    python3 tools/5-generated/srcmap.py [--out state/srcmap.tsv]

A source file is a contiguous run of functions in the link order. Two functions belong to the same file when one reads a
literal-pool word placed inside the other (SHC shares one pool among the functions of a file), calls it with `bsr` (a
`bsr` only reaches its own file) or branches into it (`bra`/`bt`/`bf`); every function between them is then in that file
too. The runs this evidence ties together are the cells. A cell that starts at an address that is 2 mod 4 is joined to the
one before it: a file starts 4-aligned. Cells are the finest split the evidence allows: two cells next to each other may
still be one file (two functions of one file need not share anything), so a cell is a lower bound on a file, not a file.

Writes one line per cell: `<start> <end> <functions> <first function> <last function>` (end exclusive).
"""
import bisect
import os
import re
import subprocess
import sys

SHDIS = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'sim', 'shdis.py')
PAT = re.compile(r'^([0-9a-f]{8}) [0-9a-f]{4}\s+(mov\.[lw]\s+@\(0x([0-9a-f]+),pc\)|mova\s+@\(0x([0-9a-f]+),pc\)|'
                 r'(?:bsr|bra|bt|bf|bt/s|bf/s)\s+0x([0-9a-f]+))', re.M)


def build_cells(funcs, dis):
    """The cells of funcs, [(address, size, name)] sorted, from the disassembly text dis of their span: ([(first, last)] as indexes, links used)."""
    starts = [f[0] for f in funcs]

    def owner(a):
        i = bisect.bisect_right(starts, a) - 1
        if i >= 0 and a < funcs[i][0] + funcs[i][1]:
            return i
        return None

    reach = list(range(len(funcs)))     # reach[i]: the highest index tied to i by evidence; ties are runs, so a sweep suffices
    links = 0
    for m in PAT.finditer(dis):
        pc = int(m.group(1), 16)
        tgt = int(m.group(3) or m.group(4) or m.group(5), 16)
        a, b = owner(pc), owner(tgt)
        if a is None or b is None or a == b:
            continue
        i, j = min(a, b), max(a, b)
        if reach[i] < j:
            reach[i] = j
        links += 1
    cells = []
    i = 0
    n = len(funcs)
    while i < n:
        j, far = i, reach[i]
        while j < far:
            j += 1
            far = max(far, reach[j])
        cells.append([i, j])
        i = j + 1
    merged = []
    for c in cells:
        if merged and funcs[c[0]][0] % 4 == 2:
            merged[-1][1] = c[1]
        else:
            merged.append(c)
    return [tuple(c) for c in merged], links


def write_cells(funcs, merged, out):
    os.makedirs(os.path.dirname(out) or '.', exist_ok=True)
    with open(out, 'w') as fh:
        fh.write('# start\tend\tfunctions\tfirst\tlast\n')
        for i, j in merged:
            fh.write('%08x\t%08x\t%d\t%s\t%s\n' % (funcs[i][0], funcs[j][0] + funcs[j][1], j - i + 1, funcs[i][2], funcs[j][2]))


def main(argv):
    out = argv[argv.index('--out') + 1] if '--out' in argv else os.path.join('state', 'srcmap.tsv')
    funcs = []
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F' and int(p[2]) > 0:
            funcs.append((int(p[1], 16), int(p[2]), p[3]))
    funcs.sort()
    lo, hi = funcs[0][0], funcs[-1][0] + funcs[-1][1]
    dis = subprocess.run([sys.executable, SHDIS, '%08x' % lo, '%08x' % hi], capture_output=True, text=True).stdout
    merged, links = build_cells(funcs, dis)
    write_cells(funcs, merged, out)
    print('%d functions, %d crossing links, %d cells -> %s' % (len(funcs), links, len(merged), out))


if __name__ == '__main__':
    main(sys.argv)
