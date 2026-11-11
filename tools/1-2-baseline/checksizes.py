#!/usr/bin/env python3
"""checksizes.py: functions whose size in functions.txt looks wrong. Run in the repo.

    python3 tools/1-2-baseline/checksizes.py [name ...]     (no names: every function)
    python3 tools/1-2-baseline/checksizes.py --hidden [name ...]    functions listed longer than their code
    python3 tools/1-2-baseline/checksizes.py --merge [--write] [name ...]    entries that are pieces of one function

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

--extend [--write] looks at entries whose own control flow (branches, jump tables, constant jumps) runs past their listed end into code
no entry owns: the size is extended to the last instruction it reaches, never past the next entry. With --write, functions.txt is
rewritten (git keeps the old one); then run split_asm.py and build.sh (MATCH), and the generator or equiv.py again for any extended
function that had C (its original now runs on instead of jumping out).

--merge looks at entries that are pieces of one function: an entry whose code runs off its end into the next one (no rts
before the listed end) is the first half of a function listed twice. The entry is extended over the next one(s) until the
flow ends with an rts, a jump or a tail `bra`. A merge swallows the names of the later entries: the report names every one that
was counted proven, since the merged function must be proven again. With --write, functions.txt is rewritten (git keeps the old one); then run split_asm.py and build.sh (MATCH), and equiv.py on the files of the merged functions.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis
import classify


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
        for pc in sorted(classify.reachable(exe, base, a, sz)):     # only the code control flow reaches: data in a function is not a branch
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
    # entries that are the same address twice, or ranges that run into the next entry
    seen = {}
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            seen.setdefault(int(p[1], 16), []).append((int(p[2]), p[3]))
    for a_, v in sorted(seen.items()):
        if len(v) > 1:
            print('duplicate address %08x: %s' % (a_, ', '.join('%s (%d)' % (n_, z_) for z_, n_ in v)))
            bad += 1
    ordered = sorted((a_, max(z_ for z_, _ in v), v[0][1]) for a_, v in seen.items())
    for (a_, z_, n_), (b_, y_, m_) in zip(ordered, ordered[1:]):
        if b_ < a_ + z_:
            print('overlap: %s %08x (%d bytes) runs into %s at %08x' % (n_, a_, z_, m_, b_))
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


def frame_piece(word, a):
    """True when the code at a stores into or closes a stack frame before it opens one: `mov.l rm,@(d,r15)`, a pop, `lds.l @r15+,pr` or
    `add #+n,r15` before any push or `add #-n,r15`. Such code is the rest of another function (entered by a branch, in its frame), never a
    function of its own: a function reads its stack arguments but does not write its caller's frame before saving anything. The same test
    is in tools/5-generated/gen_equiv/gen_core.py (frame_piece)."""
    pc = a
    for _ in range(16):
        op = word(pc)
        if (op & 0xFF0F) == 0x2F06 or op in (0x4F22, 0x4F12, 0x4F02) or (op & 0xFF0F) == 0xFF0B or ((op & 0xFF00) == 0x7F00 and op & 0x80):
            return False                                  # opens a frame first: a function
        if ((op & 0xFF00) == 0x1F00 or (op & 0xF0FF) == 0x60F6 or op in (0x4F26, 0x4F16, 0x4F06) or (op & 0xF0FF) == 0xF0F9
                or ((op & 0xFF00) == 0x7F00 and 0 < op & 0xFF < 0x80)):
            return True                                   # writes or closes a frame it never opened
        if op in (0x000B, 0x002B) or (op & 0xF0FF) in (0x400B, 0x402B, 0x0003, 0x0023) or (op & 0xF000) == 0xB000:
            return False                                  # returns, calls or jumps away first
        if (op & 0xF000) == 0xA000:                       # bra: its delay slot, then the target
            d = op & 0xFFF
            nxt = pc + 4 + 2 * (d - 0x1000 if d & 0x800 else d)
            s = word(pc + 2)
            if (s & 0xFF00) == 0x1F00 or (s & 0xF0FF) == 0x60F6 or s in (0x4F26,) or ((s & 0xFF00) == 0x7F00 and 0 < s & 0xFF < 0x80):
                return True
            pc = nxt
            continue
        pc += 2
    return False


def merge(only, write):
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    lines = open('functions.txt').read().split('\n')
    entries = []                                  # (line index, address, size, name)
    for i, line in enumerate(lines):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            entries.append((i, int(p[1], 16), int(p[2]), p[3]))
    entries.sort(key=lambda e: e[1])
    done = set()
    for f in ('tests/equivalent.txt', 'sdk-verified.txt'):
        if os.path.exists(f):
            for line in open(f):
                if not line.startswith('#'):
                    done.update(line.split())

    def word(pc):
        return struct.unpack_from('<H', exe, pc - base)[0]

    def runs_off(start, end):
        """True when the flow from start runs past end without an exit; None for a jump table"""
        seen, stack, fall = set(), [start], False
        while stack:
            pc = stack.pop()
            while pc not in seen:
                if not start <= pc < end:
                    if pc >= end:
                        fall = True
                    break
                seen.add(pc)
                text, _, _, target = shdis.decode(word(pc), pc)
                op = text.split()[0]
                if op in ('rts', 'rte'):
                    seen.add(pc + 2)
                    break
                if op == 'bra':
                    seen.add(pc + 2)
                    if target is not None and start <= target < end:
                        stack.append(target)
                    break
                if op in ('jmp', 'braf'):
                    return None
                if op in ('bt/s', 'bf/s', 'bt', 'bf'):
                    if target is not None and start <= target < end:
                        stack.append(target)
                    if op.endswith('/s'):
                        seen.add(pc + 2)
                        pc += 4
                    else:
                        pc += 2
                    continue
                if op in ('bsr', 'jsr', 'bsrf'):
                    seen.add(pc + 2)
                    pc += 4
                    continue
                pc += 2
        return fall

    def branches_to(start, end, target):
        """True when a bra, bt or bf in [start, end) goes to target (a call does not count)"""
        for pc in range(start, end, 2):
            text, _, _, t = shdis.decode(word(pc), pc)
            if t == target and text.split()[0] in ('bra', 'bt', 'bf', 'bt/s', 'bf/s'):
                return True
        return False

    absorbed, plan = set(), []
    for k, (li, a, sz, name) in enumerate(entries):
        if k in absorbed or (only and name not in only) or a + sz - base > len(exe):
            continue
        end, j, gap, pieces = a + sz, k, 0, 0
        # an entry the previous one branches into, that stores to or closes a stack frame it never opened, is the rest of that function:
        # it runs in the caller's frame (Zombie Revenge FUN_0c0b954e, the end of FUN_0c0b8bcc after `bra`: written as a call from C,
        # it closed the 28-byte frame of the original inside the 120-byte frame of the C, popped a local into pr and ran the heap)
        while (j + 1 < len(entries) and j - k < 8 and entries[j + 1][1] == end and end - base + entries[j + 1][2] <= len(exe)
               and frame_piece(word, entries[j + 1][1]) and branches_to(a, end, entries[j + 1][1])):
            j += 1
            end += entries[j][2]
            pieces += 1
        while runs_off(a, end) and j + 1 < len(entries) and j - k < 8:
            nxt_start = entries[j + 1][1]
            if nxt_start > end:                         # the code goes on into the gap before the next entry
                gap += nxt_start - end
                end = nxt_start
                if runs_off(a, end) is False:
                    break
            if runs_off(a, end):                        # still running: the next entry is the rest of the function
                j += 1
                end += entries[j][2]
        if (j > k or gap) and (runs_off(a, end) is False or (pieces and runs_off(a, end) is not True)):    # a piece may end in a tail jmp
            plan.append((k, j, a, end - a, gap))
            absorbed.update(range(k + 1, j + 1))
    lost = 0
    for k, j, a, size, gap in plan:
        names = [entries[m][3] for m in range(k, j + 1)]
        proven = [n for n in names if n in done]
        print('F %08x -> %4d %-28s absorbs %s%s%s' % (a, size, names[0], ', '.join(names[1:]) or 'no entry', '  +%d bytes of gap' % gap if gap else '',
              '   PROVEN: ' + ', '.join(proven) if proven else ''))
        lost += len(proven) if names[0] not in done else len(proven)
    print('%d merge(s) removing %d entries; %d proven entries would need proving again'
          % (len(plan), sum(j - k for k, j, _, _, _ in plan), lost))
    held = [p for p in plan if any(entries[m][3] in done for m in range(p[0] + 1, p[1] + 1))]
    if write and held:
        print('%d merge(s) swallow a proven entry and are NOT written: read them first' % len(held))
        plan = [p for p in plan if p not in held]
    if write and plan:
        drop = set()
        for k, j, a, size, gap in plan:
            li = entries[k][0]
            p = lines[li].split()
            lines[li] = 'F %s %d %s' % (p[1], size, p[3])
            for m in range(k + 1, j + 1):
                drop.add(entries[m][0])
        open('functions.txt', 'w').write('\n'.join(l for i, l in enumerate(lines) if i not in drop))
        print('functions.txt rewritten; run split_asm.py and build.sh')


def extend(only, write):
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    lines = open('functions.txt').read().split('\n')
    ent = []
    for i, l in enumerate(lines):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            ent.append((int(p[1], 16), int(p[2]), p[3], i))
    ent.sort()
    changed = []
    for k, (a, sz, name, li) in enumerate(ent):
        if only and name not in only:
            continue
        nxt = ent[k + 1][0] if k + 1 < len(ent) else a + sz
        if nxt <= a + sz:
            continue
        reach = shdis.reachable(exe, base, a, nxt)
        past = [pc for pc in reach if pc >= a + sz]
        if not past:
            continue
        new = max(reach) + 2 - a
        if new <= sz or a + new > nxt:
            continue
        changed.append((name, a, sz, new))
        p = lines[li].split()
        p[2] = str(new)
        lines[li] = ' '.join(p)
    for name, a, sz, new in changed:
        print('F %08x %5d -> %5d %s' % (a, sz, new, name))
    print('%d entr%s %s' % (len(changed), 'y' if len(changed) == 1 else 'ies', 'extended (functions.txt written)' if write else 'to extend (--write rewrites functions.txt)'))
    if write and changed:
        open('functions.txt', 'w').write('\n'.join(lines))


def inner(only):
    """Functions inside a listed entry that other entries reach: a bra, bt, bf or bsr from another entry, or a call through a pool constant,
    lands past the start of an entry, on code that opens a frame of its own. functions.txt lists one entry where there are two (Zombie
    Revenge FUN_0c017aca: a 4-byte stub at 0C017ACA, a small function at 0C017AD0 and the real one at 0C017AE2, which FUN_0c018142 reaches
    by `bra`). Report only: split the entry in functions.txt, run split_asm.py and build.sh (MATCH), then generate the new entries and every
    caller that wrote a call to the address."""
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    ent = sorted((int(p[1], 16), int(p[2]), p[3]) for p in (l.split() for l in open('functions.txt')) if len(p) >= 4 and p[0] == 'F')
    starts = [e[0] for e in ent]

    def word(pc):
        return struct.unpack_from('<H', exe, pc - base)[0] if 0 <= pc - base < len(exe) - 1 else 0x0009

    def host(t):
        import bisect
        i = bisect.bisect_right(starts, t) - 1
        return ent[i] if i >= 0 and ent[i][0] < t < ent[i][0] + ent[i][1] else None

    def opens(t):
        """The code at t opens a frame: a push, sts.l pr or add #-n, as its first instruction or after one or two pool loads
        (Zombie Revenge 0C0B301E: `mov.w @(disp,pc),r0` then `mov.l r14,@-r15`)"""
        for k in range(3):
            op = word(t + 2 * k)
            if (op & 0xFF0F) == 0x2F06 or op == 0x4F22 or ((op & 0xFF00) == 0x7F00 and op & 0x80) or (op & 0xFF0F) == 0xFF0B:
                return True
            if not ((op & 0xF000) in (0x9000, 0xD000) or (op & 0xFF00) == 0xC700):
                return False
        return False

    found = {}
    for a, sz, name in ent:
        if a + sz - base > len(exe):
            continue
        for pc in range(a, a + sz, 2):
            op = word(pc)
            text, _, _, t = shdis.decode(op, pc)
            kind = text.split()[0] if text else ''
            if kind in ('bra', 'bsr', 'bt', 'bf', 'bt/s', 'bf/s') and t is not None:
                pass
            elif (op & 0xF000) == 0xD000:                 # mov.l @(disp,pc),rn: the constant, called (jsr, jmp) or kept as a value
                p = (pc & ~3) + 4 + (op & 0xFF) * 4
                t = struct.unpack_from('<I', exe, p - base)[0] if 0 <= p - base < len(exe) - 3 else None
                if t is None:
                    continue
                nxt = [word(pc + 2 * k) for k in range(1, 6)]
                # a value: a callback the function stores or passes (Zombie Revenge FUN_0c0b2fb0 keeps 0C0B301E and 0C0B30F4, two
                # functions inside itself; a C function's address constant into another C function becomes a cut-down data copy)
                kind = 'call' if any((x & 0xF0FF) in (0x400B, 0x402B) and (x >> 8) & 15 == (op >> 8) & 15 for x in nxt) else 'value'
                t = (t & 0x1FFFFFFF) | (base & 0xE0000000)
            else:
                continue
            h = host(t)
            if h and (h[2] != name or kind == 'value') and opens(t) and (only == set() or h[2] in only or name in only):
                found.setdefault((h, t), []).append('%s %s' % (name, kind))
    for (h, t), by in sorted(found.items(), key=lambda x: x[0][1]):
        print('%08x inside %s (%08x, %d bytes): reached from %s' % (t, h[2], h[0], h[1], ', '.join(sorted(set(by)))))
    print('%d function start(s) inside listed entries' % len(found))


if __name__ == '__main__':
    if sys.argv[1:2] == ['--inner']:
        inner(set(sys.argv[2:]))
        sys.exit(0)
    if sys.argv[1:2] == ['--extend']:
        rest = sys.argv[2:]
        extend(set(x for x in rest if x != '--write'), '--write' in rest)
        sys.exit(0)
    if sys.argv[1:2] == ['--hidden']:
        hidden(set(sys.argv[2:]))
    elif sys.argv[1:2] == ['--merge']:
        rest = sys.argv[2:]
        merge(set(a for a in rest if a != '--write'), '--write' in rest)
    else:
        main()
