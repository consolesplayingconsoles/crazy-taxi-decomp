#!/usr/bin/env python3
"""dupnames.py: names functions.txt gives to more than one function. Run in the repo. Stdlib only.

    python3 tools/1-2-baseline/dupnames.py [--apply]

One name for two functions makes a call to either compile as the other, and every tool that maps a name to an address keeps only
one of them. For each name used more than once:
  a stub (8 bytes or less whose code jumps on: mov.l @(pool),rN / jmp @rN, or a bra) becomes thunk_<name>, the function it jumps to keeps
  the name;
  first, a name that is not a C identifier (a C++ signature: atcomResetBlackList(void)) becomes the name up to its bracket, any other
  character as _, with its address appended when that name is taken (no C can define or call the signature);
  any further body with the same name (a library function linked twice) gets its address as a suffix: <name>_<address>;
  two entries at the same address: the ones running into the next function are dropped when another ends before it (Virtua Tennis
  sprSet266Free: 54 and 74 bytes, the next function 54 bytes on); when more than one ends before it, they are only reported.
With --apply, src/ follows: a call to the name (or through a cast of it) in a C function goes to the copy that function's original
calls, when it calls one of them only. A definition keeps the name: the first copy (the one a name lookup found) is renamed only when
it is a stub, and a stub runs into the body the C was written for (Virtua Tennis mwRnaErrEntryFunc).
Without --apply it prints what it would change. Exits 1 when a duplicate is left (two entries at one address).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import collections
import glob
import os
import re
import struct
import sys

import shdis


def is_stub(exe, base, a, s):
    if s > 8:
        return False
    ops = [(shdis.decode(struct.unpack_from('<H', exe, x - base)[0], x)[0] or '').split(' ')[0] for x in range(a, a + min(s, 6), 2)]
    return 'jmp' in ops or 'bra' in ops


HEAD = re.compile(r'^(?:static\s+)?[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(([^;{)]*)\)\s*\{', re.M)
MASK = 0x1FFFFFFF


def call_targets(exe, base, a, s):
    """The addresses a function's code loads from its literal pool (mov.l @(disp,pc),rN: a jsr's target) or reaches by bsr."""
    out = set()
    for x in range(a, a + s, 2):
        if x - base + 2 > len(exe):
            break
        w = struct.unpack_from('<H', exe, x - base)[0]
        if w >> 12 == 0xD:
            lit = (x & ~3) + 4 + 4 * (w & 0xFF)
            if 0 <= lit - base <= len(exe) - 4:
                out.add(struct.unpack_from('<I', exe, lit - base)[0] & MASK)
        elif w >> 12 == 0xB:
            d = w & 0xFFF
            out.add((x + 4 + 2 * (d - 0x1000 if d & 0x800 else d)) & MASK)
    return out


def follow_sources(dups, first_addr, exe, base):
    """dups: {name: [(address, final name)] in functions.txt order}. Rewrites src/ as the module notes say; returns the changes."""
    done = []
    for path in sorted(glob.glob(os.path.join('src', '*.c'))):
        text = open(path, errors='replace').read(); orig = text
        need = {}
        pos = 0; out = []
        for m in HEAD.finditer(text):
            if m.start() < pos:
                continue
            end = re.compile(r'^\}', re.M).search(text, m.end())
            end = end.end() if end else len(text)
            fn, chunk = m.group(1), text[m.start():end]
            if fn not in dups:
                for n, ents in dups.items():
                    if not re.search(r'\b%s\b' % re.escape(n), chunk[chunk.index('{'):]) or fn not in first_addr:      # a call, or one through a cast
                        continue
                    tg = call_targets(exe, base, *first_addr[fn])
                    hit = [f for a, f in ents if a & MASK in tg]
                    if len(hit) == 1 and hit[0] != n:
                        head_end = chunk.index('{')
                        chunk = chunk[:head_end] + re.sub(r'\b%s\b' % re.escape(n), hit[0], chunk[head_end:])
                        need[hit[0]] = n
                        done.append('%s: %s calls %s' % (path, fn, hit[0]))
                    elif len(hit) > 1:
                        done.append('%s: %s calls more than one %s: left as is' % (path, fn, n))
            out.append(text[pos:m.start()] + chunk); pos = end
        text = ''.join(out) + text[pos:]
        for new, n in need.items():                     # a prototype for the new name, next to the old one's
            pm = re.search(r'^(?![ \t])([^\n{}(]*?\b)%s(\([^\n]*\);)$' % re.escape(n), text, re.M)        # a top-level line
            if pm and not re.search(r'^(?![ \t])[^\n{}(]*\b%s\([^\n]*\);$' % re.escape(new), text, re.M):
                text = text[:pm.end()] + '\n' + pm.group(1) + new + pm.group(2) + text[pm.end():]
        if text != orig:
            open(path, 'w').write(text)
    return done


def main():
    apply = '--apply' in sys.argv
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    lines = open('functions.txt').read().split('\n')
    taken = {l.split()[3] for l in lines if l.startswith('F ') and len(l.split()) >= 4}
    for i, l in enumerate(lines):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F' and not re.fullmatch(r'[A-Za-z_]\w*', p[3]):
            c = re.sub(r'\W', '_', p[3].split('(')[0]) or 'fn'
            if c[0].isdigit():
                c = '_' + c
            c = c if c not in taken else '%s_%s' % (c, p[1].lower())
            print('%-28s %s %s -> %s' % (p[3], p[1], p[2], c))
            taken.add(c); p[3] = c; lines[i] = ' '.join(p)
    by = collections.defaultdict(list)
    for i, l in enumerate(lines):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            by[p[3]].append((i, int(p[1], 16), int(p[2])))
    names = {p.split()[3] for p in lines if p.startswith('F ') and len(p.split()) >= 4}
    first_addr = {}
    for l in lines:
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            first_addr.setdefault(p[3], (int(p[1], 16), int(p[2])))
    starts = sorted({e[1] for es in by.values() for e in es})
    dups = {}
    left = 0
    for n, ents in sorted(by.items()):
        if len(ents) < 2:
            continue
        addrs = collections.Counter(a for _, a, _ in ents)
        for a0 in [a for a, k in addrs.items() if k > 1]:
            nxt = min([s for s in starts if s > a0] or [a0 + 0x100000])
            same = [e for e in ents if e[1] == a0]
            fit = [e for e in same if e[1] + e[2] <= nxt]
            if len(fit) == 1:
                for e in same:
                    if e is not fit[0]:
                        print('%-28s %08x %d runs into the next function (%08x): dropped, %d kept' % (n, a0, e[2], nxt, fit[0][2]))
                        lines[e[0]] = None
                ents = [e for e in ents if e[1] != a0 or e is fit[0]]
        addrs = collections.Counter(a for _, a, _ in ents)
        if len(ents) < 2:
            continue
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
        if new:
            dups[n] = [(a, new.get(i, n)) for i, a, s in ents]
    lines = [l for l in lines if l is not None]
    if apply:
        open('functions.txt', 'w').write('\n'.join(lines))
        print('functions.txt written')
        for d in follow_sources(dups, first_addr, exe, base):
            print(d)
    sys.exit(1 if left else 0)


if __name__ == '__main__':
    main()
