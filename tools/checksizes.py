#!/usr/bin/env python3
"""checksizes.py: functions whose size in functions.txt looks wrong. Run in the repo.

    python3 tools/checksizes.py [name ...]     (no names: every function)

A function with a literal pool in the middle of its body ends at its last rts and delay slot, not where
the pool begins; a sweep that stops at the pool leaves the code after it outside the listed size. Seen
many times (the C then "stops" or jumps to an address just past the function). For each function this
reports a branch (bra, bt, bf) that lands outside [start, start + size), or a body with no rts, and the
size that would cover the code after the pool (up to the next function). Pool words are skipped when
decoding. Only a hint: read the disassembly (tools/shdis.py --func <name>) before changing a size.
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis


def main():
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    funcs = []
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            funcs.append((int(p[1], 16), int(p[2]), p[3]))
    funcs.sort()
    starts = {f[0] for f in funcs}
    nxt = {f[0]: (funcs[i + 1][0] if i + 1 < len(funcs) else base + len(exe)) for i, f in enumerate(funcs)}
    only = set(sys.argv[1:])
    bad = 0

    def word(pc):
        return struct.unpack_from('<H', exe, pc - base)[0]

    for a, sz, n in funcs:
        if only and n not in only:
            continue
        end = a + sz
        pools = set()
        for pc in range(a, end, 2):
            _, pool, size, _ = shdis.decode(word(pc), pc)
            if pool is not None:
                pools.update(range(pool, pool + size, 2))
        out, has_rts = [], False
        for pc in range(a, end, 2):
            if pc in pools:
                continue
            text, _, _, target = shdis.decode(word(pc), pc)
            if text.startswith(('rts', 'rte', 'jmp', 'bra')):       # an exit (a tail jump or branch ends it too)
                has_rts = True
            # a branch that lands past the listed end but before the next function starts is the rest of this
            # function (a literal pool in the middle ended the listed size early); one into another function
            # or backwards is a tail call or shared code
            if target is not None and text.split()[0] in ('bra', 'bt', 'bf', 'bt/s', 'bf/s') \
                    and end <= target < nxt[a] and target not in starts:
                out.append(target)
        if not out and has_rts:
            continue
        # the real end: the first rts (and its delay slot) at or after the farthest target, before the next function
        far = max(out) if out and max(out) > a else end
        stop = nxt[a]
        pc, new = far, None
        while pc < stop:
            if word(pc) == 0x000b and pc not in pools:
                new = pc + 4
                break
            pc += 2
        reason = 'branch to %s outside' % ', '.join('%08x' % t for t in sorted(set(out))) if out else 'no rts in the body'
        print('F %08x %4d %-30s %s%s' % (a, sz, n, reason, '  -> size %d' % (new - a) if new and new <= stop else ''))
        bad += 1
    print('%d function(s) to look at' % bad)


if __name__ == '__main__':
    main()
