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


def reach(start, stop_at=None):
    """(end, flags): the end of the code reachable from start by its own branches (calls are not followed), the set of reached
    addresses, and what was seen: 'table' (a jump through a register), 'off' (ran past stop_at or the executable)."""
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
                    todo.append(target)
                a += 2
                continue
            if m in ('bt/s', 'bf/s'):
                seen.add(a + 2)
                end = max(end, a + 4)
                if target is not None:
                    todo.append(target)
                a += 4
                continue
            if m == 'bra':
                seen.add(a + 2)
                end = max(end, a + 4)
                if target is not None:
                    todo.append(target)
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


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    apply = '--apply' in argv
    cands = []
    for l in open(argv[1]):
        l = l.split('#')[0].strip()
        if l:
            p = l.split()
            cands.append((int(p[0], 16), p[1] if len(p) > 1 else None))
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
        end, seen, flags = reach(a, stop_at=nxt_entry)
        size = end - a
        if 'off' in flags:
            rows.append((a, 'not a function', holder[2] if holder else '-', 'runs into the next entry'))
            continue
        if size < 4:
            rows.append((a, 'too small', '', ''))
            continue
        note = 'jump table: size is the straight-line part' if 'table' in flags else ''
        plan.append((a, size, name or 'FUN_%08x' % a))
        rows.append((a, 'function', holder[2] if holder else '(gap)', 'size %d %s' % (size, note)))
        if holder:
            hend, hseen, hflags = reach(holder[0])
            cuts[holder[0]] = hend - holder[0]
    for a, kind, holder, note in rows:
        print('%08x  %-24s %-24s %s' % (a, kind, holder, note))
    print('%d new functions, %d entries cut' % (len(plan), len(cuts)))
    if not apply:
        return
    os.makedirs('build', exist_ok=True)
    src = open('functions.txt').read().split('\n')
    open('build/functions.before-boundaries', 'w').write('\n'.join(src))
    out = []
    newl = {a: 'F %08x %d %s' % (a, s, n) for a, s, n in plan}
    for l in src:
        p = l.split()
        if len(p) >= 4 and p[0] == 'F' and int(p[1], 16) in cuts:
            e = next(e for e in ents if e[0] == int(p[1], 16))
            if cuts[e[0]] < e[1]:
                l = 'F %s %d %s' % (p[1], cuts[e[0]], p[3])
        out.append(l)
    allf = [(int(l.split()[1], 16), 0 if l.startswith('D ') else 1, l) for l in out if l.startswith(('F ', 'D '))]
    allf += [(a, 1, l) for a, l in newl.items()]
    other = [l for l in out if l.strip() and not l.startswith(('F ', 'D '))]      # comments and anything else stay at the top
    open('functions.txt', 'w').write(''.join(l + '\n' for l in other) + ''.join(l + '\n' for _, _, l in sorted(allf)))
    print('functions.txt written')


if __name__ == '__main__':
    main(sys.argv)
