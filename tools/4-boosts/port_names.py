#!/usr/bin/env python3
"""Names from one decomp for the same functions in another. Stdlib only.

    python3 port_names.py <source repo> <destination repo> > map.tsv

For every source function with a real name (not FUN_...), its code with the position-dependent fields masked
(sdk_masked.mask) is looked up among the destination's functions. One exact match that is still FUN_... in the
destination gets the source's name, when the name is free there and the function is library code in both repos
(sdk.txt) or at least 32 bytes long (a small game function with the same code in another game is a coincidence
as often as not). Writes a tools/rename.py map to stdout; a summary and the conflicts (the destination already
names it differently) go to stderr.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import port_equiv as P
import sdk_masked as M


def main(argv):
    src, dst = P.repo(argv[1]), P.repo(argv[2])
    src_lib, dst_lib = M.load_repo(argv[1])[1], M.load_repo(argv[2])[1]
    didx = {}
    for a, (sz, n) in dst['byaddr'].items():
        if sz >= 4:
            didx.setdefault(M.mask(P.code(dst, a, sz)), []).append(a)
    taken = {n for sz, n in dst['byaddr'].values()} | set(dst['names'].values())
    out, why = {}, Counter()
    conflicts = []
    for n, (a, sz) in sorted(src['funcs'].items()):
        if n.startswith('FUN_') or sz < 4:
            continue
        cands = didx.get(M.mask(P.code(src, a, sz)), [])
        if len(cands) != 1:
            why['no match' if not cands else 'ambiguous'] += 1
            continue
        b = cands[0]
        dn = dst['byaddr'][b][1]
        if dn == n:
            why['already named the same'] += 1
            continue
        if not dn.startswith('FUN_'):
            conflicts.append((n, dn, b))
            why['named differently'] += 1
            continue
        if not (src_lib(a) and dst_lib(b) or sz >= 32):
            why['small game function'] += 1
            continue
        if n in taken or n in out.values():
            why['name taken in the destination'] += 1
            continue
        out[b] = n
    for b, n in sorted(out.items()):
        print('%08x\t%s' % (b, n))
    sys.stderr.write('%d names to port; %s\n' % (len(out), ', '.join('%s %d' % kv for kv in why.most_common())))
    for n, dn, b in conflicts:
        sys.stderr.write('  conflict %08x: source %s, destination %s\n' % (b, n, dn))


if __name__ == '__main__':
    main(sys.argv)
