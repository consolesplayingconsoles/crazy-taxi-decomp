#!/usr/bin/env python3
"""checksizes.py: functions whose size in functions.txt looks wrong. Run in the repo.

    python3 tools/checksizes.py [name ...]     (no names: every function)
    python3 tools/checksizes.py --hidden [name ...]    functions listed longer than their code

A function with a literal pool in the middle of its body ends at its last rts and delay slot, not where
the pool begins; a sweep that stops at the pool leaves the code after it outside the listed size. Seen
many times (the C then "stops" or jumps to an address just past the function). For each function this
reports a branch (bra, bt, bf) that lands outside [start, start + size), or a body with no rts, and the
size that would cover the code after the pool (up to the next function). Pool words are skipped when
decoding. Only a hint: read the disassembly (tools/shdis.py --func <name>) before changing a size.

--hidden looks the other way: an entry listed longer than its code, with another function inside it. The listed
range is followed instruction by instruction (every branch); past the last reachable instruction, an address that
starts like a function (a register save, `sts.l pr,@-r15` or a stack adjust) and reaches its own rts is reported
with the size the entry would have. Such a function counts as proven when the entry is, though nothing tests it.
Entries with a jump table (jmp, braf) are skipped and counted. Report only: check the disassembly, then change
functions.txt, `split_asm.py`, build (MATCH) and run `equiv.py` on the file of every function you cut.
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


def hidden(only):
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    funcs = []
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            funcs.append((int(p[1], 16), int(p[2]), p[3]))

    def word(pc):
        return struct.unpack_from('<H', exe, pc - base)[0]

    def analyse(start, end):
        reach, pools, table, stack = set(), set(), False, [start]
        while stack:
            pc = stack.pop()
            while start <= pc < end and pc not in reach:
                reach.add(pc)
                text, pool, size, target = shdis.decode(word(pc), pc)
                if pool is not None:
                    pools.update(range(pool, pool + max(size, 2), 2))
                op = text.split()[0]
                if op in ('rts', 'rte'):
                    reach.add(pc + 2)
                    break
                if op == 'bra':
                    reach.add(pc + 2)
                    if target:
                        stack.append(target)
                    break
                if op in ('jmp', 'braf'):
                    reach.add(pc + 2)
                    table = True
                    break
                if op in ('bt/s', 'bf/s'):
                    reach.add(pc + 2)
                    if target:
                        stack.append(target)
                    pc += 4
                    continue
                if op in ('bt', 'bf'):
                    if target:
                        stack.append(target)
                    pc += 2
                    continue
                if op in ('bsr', 'jsr', 'bsrf'):
                    reach.add(pc + 2)
                    pc += 4
                    continue
                pc += 2
        return reach, pools, table

    def prologue(a, end):
        ws = [word(a + 2 * i) for i in range(2) if a + 2 * i < end]
        return bool(ws) and ((ws[0] & 0xff0f) == 0x2f06 or ws[0] == 0x4f22 or (ws[0] & 0xff00) == 0x7f00 and ws[0] & 0x80 and not ws[0] & 3
                             or len(ws) > 1 and ws[1] == 0x4f22)

    found = skipped = 0
    for a, sz, n in funcs:
        if (only and n not in only) or sz < 16 or a + sz - base > len(exe):
            continue
        end = a + sz
        reach, pools, table = analyse(a, end)
        if table:
            skipped += 1
            continue
        for pc in range(a, end, 2):
            if pc in reach or pc in pools or word(pc) == 0x0009 or not prologue(pc, end):
                continue
            r2, _, _ = analyse(pc, end)
            if any(word(x) == 0x000b for x in r2):
                print('F %08x %4d %-30s hides a function at %08x  -> size %d' % (a, sz, n, pc, pc - a))
                found += 1
                break
    print('%d function(s) listed longer than their code; %d skipped (jump table)' % (found, skipped))


if __name__ == '__main__':
    if sys.argv[1:2] == ['--hidden']:
        hidden(set(sys.argv[2:]))
    else:
        main()
