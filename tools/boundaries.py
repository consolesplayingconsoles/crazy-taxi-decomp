#!/usr/bin/env python3
"""Function boundaries from reachability: which code addresses are functions of their own. Run in the repo. Stdlib only.

    python3 tools/boundaries.py candidates.txt            report the plan
    python3 tools/boundaries.py candidates.txt --apply    write functions.txt (a copy is kept in build/functions.before-boundaries)

candidates.txt: one address per line (hex), optionally followed by a name; # starts a comment. For each address the tool checks
that it begins a function, by what the code can do rather than by how it looks:

  - the function that holds it (the entry whose listed range, or whose gap up to the next entry, contains the address) cannot
    reach it by its own branches: an address that function branches to is a label inside it, not a function;
  - the code from the address reaches a return (rts and its delay slot) without running into another entry or off the end
    of the executable; its size is the end of the last instruction it reaches (a literal pool in the middle does not end it);
  - a function that jumps through a table (jmp, braf) or calls through a register to an unknown place is reported: its true
    extent needs the table, so the size is only the straight-line part.

The function that holds a new one is cut to what it reaches itself. New entries are named FUN_<address> unless the line
gives a name. The size of an entry is the byte count the C proof runs to (tools/equiv.py), so a changed size is a changed
proof range: re-prove the files of the entries that were cut.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '.')))
import toolpath  # noqa: E402,F401
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis

def mirror(a):
    """The address in the 0C mirror of the same RAM (layout.mirror): the build tools work in 0C, a game linked at 8C lists 8c."""
    return (a & 0x1FFFFFFF) | 0x0C000000


BASE = mirror(int(open('BASE').read().strip(), 16))
BIN = open('1ST_READ.BIN', 'rb').read()


def word(a):
    return struct.unpack_from('<H', BIN, mirror(a) - BASE)[0]


def entries():
    out = []
    for l in open('functions.txt'):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            out.append([mirror(int(p[1], 16)), int(p[2]), p[3]])
    return sorted(out)


def reach(start, stop_at=None, tails=()):
    """(end, flags): the end of the code reachable from start by its own branches (calls are not followed), the set of reached
    addresses, and what was seen: 'table' (a jump through a register), 'off' (ran past stop_at or the executable).
    tails: entry addresses a `bra` to is a tail jump into that function, not more of this one (Zombie Revenge 0C04179C ends with
    `bra FUN_0c041f2a`, a function after it: followed, it ran into that entry and seven functions the C calls stayed unlisted)."""
    seen, todo, flags, end = set(), [start], set(), start
    top = BASE + len(BIN)
    while todo:
        a = todo.pop()
        while True:
            if a in seen:
                break
            if a >= top or (stop_at is not None and a >= stop_at):
                flags.add('off')
                break
            seen.add(a)
            w = word(a)
            text, pool, psize, target = shdis.decode(w, a)
            m = text.split()[0] if text else ''
            end = max(end, a + 2)
            if m in ('bt', 'bf'):
                if target is not None:
                    if target < start:                 # a conditional branch out of the start backwards: no function does that
                        flags.add('back')              # (Crazy Taxi FUN_0c089f4c, a table of words whose first word decodes as bt)
                    else:
                        todo.append(target)
                a += 2
                continue
            if m in ('bt/s', 'bf/s'):
                seen.add(a + 2)
                end = max(end, a + 4)
                if target is not None:
                    if target < start:
                        flags.add('back')
                    else:
                        todo.append(target)
                a += 4
                continue
            if m == 'bra':
                seen.add(a + 2)
                end = max(end, a + 4)
                if target is not None and target >= start and target not in tails:      # a bra before the start, or to another
                    todo.append(target)                                                  # entry, is a tail jump into that function
                break
            if m in ('rts', 'rte'):
                seen.add(a + 2)
                end = max(end, a + 4)
                break
            if m in ('jmp', 'braf'):
                seen.add(a + 2)
                end = max(end, a + 4)
                flags.add('table')
                break
            if m in ('jsr', 'bsr', 'bsrf'):
                seen.add(a + 2)
                end = max(end, a + 4)
                a += 4
                continue
            a += 2
    return end, seen, flags


def not_an_entry(a, size):
    """Why code at a, reached by its own branches up to size bytes, is a piece of a function that starts earlier, or None (the three
    wrong Virtua Tennis entries of 2026-10-31): an undecodable word before its first branch (8c0886cc, the low half of a pointer word
    read as add #-12,r15), a register popped it never pushed (8c0b5cca pops the pr its fileLoad wrapper pushed), a register read before
    anything writes it, outside the arguments (8c0d2b02 reads r2, set by the mov.l just before it). The last two are classify.py's rules."""
    import classify
    x = a
    while x < a + size:
        text = shdis.decode(word(x), x)[0]
        if not text or text.startswith('.'):
            return 'no instruction at %08x: data' % x
        if text.split()[0] in ('bt', 'bf', 'bt/s', 'bf/s', 'bra', 'braf', 'jmp', 'jsr', 'bsr', 'bsrf', 'rts', 'rte'):
            break
        x += 2
    if 16 in classify.pops_unsaved(BIN, BASE, a, size):     # pr only: r8-r14 popped unpushed was also seen in proven functions
        return 'pops pr, which it never pushed'             # (Virtua Tennis FUN_8c07f038, Crazy Taxi bootSelectDevice)
    if classify.entry_input(BIN, BASE, a, size):
        return 'reads a register before anything writes it (not an argument)'
    return None


def name_given(n):
    """A name the candidates file gave (not the FUN_<address> placeholder, which follows the mirror functions.txt uses)."""
    return not n.startswith('FUN_')


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    apply = '--apply' in argv
    cands = []
    for l in open(argv[1]):
        l = l.split('#')[0].strip()
        if l:
            p = l.split()
            cands.append((mirror(int(p[0], 16)), p[1] if len(p) > 1 else None))
    ents = entries()
    starts = [e[0] for e in ents]
    known = {e[0] for e in ents}
    plan, cuts, rows = [], {}, []
    for a, name in sorted(set(cands)):
        if a in known:
            rows.append((a, 'already an entry', '', ''))
            continue
        holder = None
        for e in ents:
            nxt = next((s for s in starts if s > e[0]), BASE + len(BIN))
            if e[0] < a < nxt:
                holder = e
                break
        why = []
        if holder:
            hend, hseen, hflags = reach(holder[0], stop_at=None)
            if a in hseen:
                rows.append((a, 'label inside %s' % holder[2], '', 'reached by its own branches'))
                continue
        nxt_entry = next((s for s in starts if s > a), BASE + len(BIN))
        end, seen, flags = reach(a, stop_at=nxt_entry, tails=set(starts) - {a})
        size = end - a
        if 'off' in flags:
            rows.append((a, 'not a function', holder[2] if holder else '-', 'runs into the next entry'))
            continue
        if 'back' in flags:
            rows.append((a, 'not a function', holder[2] if holder else '-', 'a conditional branch leaves it backwards'))
            continue
        if size < 4:
            rows.append((a, 'too small', '', ''))
            continue
        why = None if name else not_an_entry(a, size)     # a candidate given a name keeps it: hand-written asm has its own conventions
        if why:
            rows.append((a, 'not a function', holder[2] if holder else '-', why + ': the function starts earlier'))
            continue
        note = 'jump table: size is the straight-line part' if 'table' in flags else ''
        plan.append((a, size, name or 'FUN_%08x' % a))
        rows.append((a, 'function', holder[2] if holder else '(gap)', 'size %d %s' % (size, note)))
        if holder and a < holder[0] + holder[1]:      # only a start inside its listed size cuts it: one in the gap after it leaves the
            hend, hseen, hflags = reach(holder[0])    # size alone (Virtua Tennis cpuSglAimTable, 18,398 bytes of jump-table code,
            cuts[holder[0]] = hend - holder[0]        # would have been cut to the 8,762 its own branches reach)
    kept, inner = [], set()            # a new start inside another new function's reach is a label of it, not a function (Virtua Tennis:
    for a, s, n in sorted(plan):       # state handlers behind one jump table that branch into each other)
        if kept and a < kept[-1][0] + kept[-1][1]:
            inner.add(a)
            continue
        kept.append((a, s, n))
    plan = kept
    rows = [(a, 'label inside a new function', '', '') if a in inner else r for r in rows for a in [r[0]]]
    for a, kind, holder, note in rows:
        print('%08x  %-24s %-24s %s' % (a, kind, holder, note))
    print('%d new functions, %d entries cut' % (len(plan), len(cuts)))
    if not apply:
        return
    os.makedirs('build', exist_ok=True)
    src = open('functions.txt').read().split('\n')
    open('build/functions.before-boundaries', 'w').write('\n'.join(src))
    out = []
    # functions.txt keeps the game's own mirror (8c for a game linked at 8C010000); the analysis above works in 0C
    top = next((int(l.split()[1], 16) & 0xE0000000 for l in src if l.startswith('F ')), 0x0C000000)
    own = lambda a: (a & 0x1FFFFFFF) | top
    newl = {a: 'F %08x %d %s' % (own(a), s, n if name_given(n) else 'FUN_%08x' % own(a)) for a, s, n in plan}
    for l in src:
        p = l.split()
        if len(p) >= 4 and p[0] == 'F' and mirror(int(p[1], 16)) in cuts:
            e = next(e for e in ents if e[0] == mirror(int(p[1], 16)))
            if cuts[e[0]] < e[1]:
                l = 'F %s %d %s' % (p[1], cuts[e[0]], p[3])
        out.append(l)
    allf = [(mirror(int(l.split()[1], 16)), 0 if l.startswith('D ') else 1, l) for l in out if l.startswith(('F ', 'D '))]
    allf += [(a, 1, l) for a, l in newl.items()]
    other = [l for l in out if l.strip() and not l.startswith(('F ', 'D '))]      # comments and anything else stay at the top
    open('functions.txt', 'w').write(''.join(l + '\n' for l in other) + ''.join(l + '\n' for _, _, l in sorted(allf)))
    print('functions.txt written')


if __name__ == '__main__':
    main(sys.argv)
