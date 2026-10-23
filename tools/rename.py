#!/usr/bin/env python3
"""Rename functions (and globals) everywhere in the repo at once. Run in the repo.

    python3 tools/rename.py <map> [--apply]

<map>: one rename per line, `<function address>\t<new name>`, or `name:<old>\t<new>` for a global or symbol by name.
Lines starting with # are skipped. Without --apply it checks the map and prints what would change.

Checks: every address is a function in functions.txt; the names it gives are unique and are C identifiers; no new name
is already a global or symbol. Then every whole-word use in the repo's tracked and untracked text files changes in one
pass (chains and swaps such as a->b, b->a come out right), and tests/<file>/<old>.json and state/kept/<old>.json move
to the new name. Afterwards the asm pieces carry old labels: run setup.sh's split (tools/1-2-baseline/split_asm.py) and build.sh.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '.')))
import toolpath  # noqa: E402,F401
import os
import re
import subprocess
import sys
from collections import Counter


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    apply = '--apply' in argv
    byaddr = {}
    for l in open('functions.txt'):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            byaddr[p[1].lower()] = p[3]
    want, extra = {}, {}
    for l in open(argv[1]):
        l = l.strip()
        if not l or l.startswith('#'):
            continue
        if l.startswith('name:'):
            o, n = l[5:].split('\t')
            extra[o] = n
            continue
        a, n = l.split('\t')[:2]
        a = a.lower()
        if want.get(a, n) != n:
            sys.exit('two names for %s: %s %s' % (a, want[a], n))
        want[a] = n
    bad = [a for a in want if a not in byaddr]
    if bad:
        sys.exit('not in functions.txt: %s' % bad)
    ren = {byaddr[a]: n for a, n in want.items() if byaddr[a] != n}
    final = dict(byaddr)
    final.update(want)
    dup = [n for n, k in Counter(final.values()).items() if k > 1 and n in set(want.values())]     # names this map adds
    if dup:
        sys.exit('duplicate final names: %s' % dup[:20])
    other = set()
    for f in ('globals.txt', 'symbols.txt'):
        if os.path.exists(f):
            for l in open(f):
                p = l.split()
                if len(p) >= 2 and not l.startswith('#'):
                    other.add(p[1])
    clash = sorted(set(ren.values()) & other - set(ren))
    clash += sorted(n for n in extra.values() if n in other or n in final.values())
    if clash:
        sys.exit('new names already used as globals/symbols/functions: %s' % clash)
    ren.update(extra)
    badc = [n for n in ren.values() if not re.match(r'^[A-Za-z_]\w*$', n)]
    if badc:
        sys.exit('not C identifiers: %s' % badc)
    print('renames: %d' % len(ren))
    rx = re.compile(r'(?<![\w$])([A-Za-z_]\w*)')
    files = subprocess.check_output(['git', 'ls-files']).decode().split('\n')
    files += subprocess.check_output(['git', 'ls-files', '--others', '--exclude-standard']).decode().split('\n')
    hits = {}
    for f in files:
        if not f or f in ('.recomp.json', 'BASE', 'KICKOFF') or not os.path.isfile(f):
            continue
        try:
            s = open(f, encoding='utf-8').read()
        except (UnicodeDecodeError, IsADirectoryError):
            continue
        k = sum(1 for m in rx.finditer(s) if m.group(1) in ren)
        if k:
            hits[f] = k
            if apply:
                open(f, 'w', encoding='utf-8').write(rx.sub(lambda m: ren.get(m.group(1), m.group(1)), s))
    moves = []
    dirs = ['tests/' + x for x in os.listdir('tests') if os.path.isdir('tests/' + x)] if os.path.isdir('tests') else []
    for d in dirs + (['state/kept'] if os.path.isdir('state/kept') else []):
        for fn in os.listdir(d):
            stem, ext = os.path.splitext(fn)
            if stem in ren:
                moves.append((os.path.join(d, fn), os.path.join(d, ren[stem] + ext)))
    srcs = {s for s, _ in moves}
    blocked = [d for s, d in moves if os.path.exists(d) and d not in srcs]
    if blocked:
        sys.exit('move targets exist: %s' % blocked)
    print('files changed: %d (%d uses), case files moved: %d' % (len(hits), sum(hits.values()), len(moves)))
    if apply:
        for s, _ in moves:
            os.rename(s, s + '.renaming')
        for s, d in moves:
            os.rename(s + '.renaming', d)
        print('applied')


if __name__ == '__main__':
    main(sys.argv)
