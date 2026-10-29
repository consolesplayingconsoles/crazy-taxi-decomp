#!/usr/bin/env python3
"""Pointers to game functions, in the pieces that stay where they are, follow the functions. Stdlib only.

    python3 tools/8-build/relocptr.py <out dir>      write copies of the asm pieces that hold such a pointer, with `.DATA.L _name`

The game code is recompiled and moves; the boot block, the library, the data and the SDK stay at their addresses and are kept as
words in asm/. A word there that equals the entry of a game function is a pointer to it (a table of state handlers, a callback
in the SDK, a pool word of the library): it must read `.DATA.L _name` so that the linker puts the function's new address in. The
words are found by value: a 4-aligned word whose top byte is 0C, 8C or AC and whose low 29 bits are the entry of a function in
the game code region. The same pass reports branches (bsr, bra) in the library and the SDK that go into the game code region:
a relative branch cannot follow a function to a far address.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import boundaries as B
import shdis

import layout  # noqa: E402

G0, G1 = layout.region('game', True)                  # the game's own code (layout.txt)


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    out = argv[1]
    os.makedirs(out, exist_ok=True)
    F = layout.functions()
    entry = {a: n for a, s, n in F if G0 <= a < G1}
    files = {}
    for fn in os.listdir('asm'):
        m = re.match(r'^([0-9a-f]{8})_(.+)\.src$', fn)
        if m:
            files[int(m.group(1), 16)] = fn
    starts = sorted(files)
    changed = {}
    n = 0
    for off in range(0, len(B.BIN) - 3, 4):
        at = B.BASE + off
        if G0 <= at < G1:
            continue
        v = struct.unpack_from('<I', B.BIN, off)[0]
        c = (v & 0x1FFFFFFF) | 0x0C000000
        if (v >> 24) not in (0x0C, 0x8C, 0xAC) or c not in entry:
            continue
        # the piece that holds this word
        i = max(k for k in range(len(starts)) if starts[k] <= at) if False else None
        lo, hi = 0, len(starts) - 1
        while lo < hi:
            mid = (lo + hi + 1) // 2
            if starts[mid] <= at:
                lo = mid
            else:
                hi = mid - 1
        s = starts[lo]
        changed.setdefault(s, []).append((at, c, v - c))
        n += 1
    bad = 0
    for s, items in sorted(changed.items()):
        fn = files[s]
        lines = open(os.path.join('asm', fn)).read().split('\n')
        first = next(k for k, l in enumerate(lines) if l.lstrip().startswith('.DATA.W'))
        drop = set()
        repl = {}
        for at, c, top in items:
            k = first + (at - s) // 2
            if not (lines[k].lstrip().startswith('.DATA.W') and lines[k + 1].lstrip().startswith('.DATA.W')):
                bad += 1
                print('NOT WORDS', fn, hex(at))
                continue
            repl[k] = '          .DATA.L    _%s%s' % (entry[c], ('+H\'%X' % top) if top else '')
            drop.add(k + 1)
        new = [repl.get(k, l) for k, l in enumerate(lines) if k not in drop]
        # the symbol must be imported
        names = sorted({entry[c] for _, c, _ in items})
        idx = next(k for k, l in enumerate(new) if l.lstrip().startswith('.EXPORT'))
        new[idx + 1:idx + 1] = ['          .IMPORT     _%s' % nm for nm in names]
        open(os.path.join(out, fn), 'w').write('\n'.join(new))
    print('%d pointer words in %d pieces rewritten (%d not words)' % (n, len(changed), bad))
    # relative branches from outside the game code into it
    jumps = []
    for a, size, name in F:
        if G0 <= a < G1 or a < 0x0C010000:
            continue
        nxt = next((x for x, _, _ in F if x > a), a + size)
        first = B.word(a)
        if shdis.decode(first, a)[0].startswith('.word'):
            continue
        seen = set()
        todo = [a]
        while todo:
            x = todo.pop()
            while x not in seen and a <= x < nxt:
                seen.add(x)
                t, pool, psz, target = shdis.decode(B.word(x), x)
                mn = t.split()[0] if t else ''
                if mn in ('bt', 'bf', 'bt/s', 'bf/s', 'bra', 'bsr') and target is not None:
                    if G0 <= target < G1:
                        jumps.append((name, hex(x), hex(target)))
                    elif a <= target < nxt:
                        todo.append(target)
                if mn in ('bra', 'rts', 'rte', 'jmp', 'braf'):
                    seen.add(x + 2)
                    break
                x += 4 if mn in ('bt/s', 'bf/s', 'bsr', 'jsr') else 2
    print('relative branches from the library or the SDK into the game code: %d' % len(jumps))
    for j in jumps[:10]:
        print('  ', j)


if __name__ == '__main__':
    main(sys.argv)
