#!/usr/bin/env python3
"""dupnames.py: names functions.txt gives to more than one function. Run in the repo. Stdlib only.

    python3 tools/1-2-baseline/dupnames.py [--apply]

One name for two functions makes a call to either compile as the other, and every tool that maps a name to an address keeps only
one of them. For each name used more than once:
  a stub (8 bytes or less whose code jumps on: mov.l @(pool),rN / jmp @rN, or a bra) becomes thunk_<name>, the function it jumps to keeps
  the name;
  any further body with the same name (a library function linked twice) gets its address as a suffix: <name>_<address>;
  two entries at the same address are only reported: which size is right needs a decision.
Without --apply it prints what it would change. Exits 1 when a duplicate is left (two entries at one address).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import collections
import struct
import sys

import shdis


def is_stub(exe, base, a, s):
    if s > 8:
        return False
    ops = [(shdis.decode(struct.unpack_from('<H', exe, x - base)[0], x)[0] or '').split(' ')[0] for x in range(a, a + min(s, 6), 2)]
    return 'jmp' in ops or 'bra' in ops


def main():
    apply = '--apply' in sys.argv
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    lines = open('functions.txt').read().split('\n')
    by = collections.defaultdict(list)
    for i, l in enumerate(lines):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            by[p[3]].append((i, int(p[1], 16), int(p[2])))
    names = {p.split()[3] for p in lines if p.startswith('F ') and len(p.split()) >= 4}
    left = 0
    for n, ents in sorted(by.items()):
        if len(ents) < 2:
            continue
        addrs = collections.Counter(a for _, a, _ in ents)
        if any(k > 1 for k in addrs.values()):
            print('%-28s two entries at %s: left as is (which size is right needs a decision)'
                  % (n, ', '.join('%08x' % a for a, k in addrs.items() if k > 1)))
            left += 1
            continue
        stubs = [e for e in ents if is_stub(exe, base, e[1], e[2])]
        bodies = [e for e in ents if e not in stubs]
        new = {}
        for i, a, s in stubs:
            new[i] = 'thunk_' + n if 'thunk_' + n not in names else 'thunk_%s_%08x' % (n, a)
        for i, a, s in (bodies[1:] if bodies else stubs[1:]):
            new.setdefault(i, '%s_%08x' % (n, a))
        if not bodies and stubs:                       # only stubs: the first keeps the name
            new.pop(stubs[0][0], None)
        for i, nm in sorted(new.items()):
            p = lines[i].split()
            print('%-28s %s %s -> %s' % (n, p[1], p[2], nm))
            p[3] = nm
            lines[i] = ' '.join(p)
            names.add(nm)
    if apply:
        open('functions.txt', 'w').write('\n'.join(lines))
        print('functions.txt written')
    sys.exit(1 if left else 0)


if __name__ == '__main__':
    main()
