#!/usr/bin/env python3
"""rawcalls.py [--update] [--allow] [--list]: C that calls into code no function in functions.txt starts at.

Generated C sometimes reaches original code by a raw address: `((int (*)(int))(0xC0D40CC))(a4)`. equiv.py passes such a
function, since its simulator runs the original bytes at that address; but no C exists there, so a build from C has nothing to
call. The target is code functions.txt does not list (a missed function, or the rest of a function whose recorded size is
short) or the middle of a listed function (a shared tail). The 0C and the 8C form of an address are the same address.

The check is a ratchet: tests/rawcalls_allowed.txt lists the calls known when it was introduced (target, calling
function, file). A raw call to an unlisted address that is not on the list fails (exit 1): new C must not add any.
  --update   drop the entries that no longer occur (a fix removed them); never adds
  --allow    rewrite the list from what occurs now (adds too: only for a deliberate exception)
  --list     print every raw call into unlisted code, allowed or not

Run in the repo. Every .c file under src/ is read, flat or in a tree. Files whose first line is `/* @unit` (byte-matching units)
are not read: their calls are the original's. Stdlib only.
"""
import bisect
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
ALLOWED = os.path.join(ROOT, 'tests', 'rawcalls_allowed.txt')
CALL = re.compile(r'\)\s*\(\s*(0x[0-9a-fA-F]{7,8})\s*\)\s*\)\s*\(')
DEF = re.compile(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{', re.M)
RAM = (0x0C000000, 0x0D000000)          # main RAM, in either mirror (0C and 8C): the cache bits are not part of the address


def physical(a):
    return a & 0x1FFFFFFF


def listed():
    starts = set()
    for line in open(os.path.join(ROOT, 'functions.txt')):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            starts.add(physical(int(p[1], 16)))
    return starts


def scan():
    """(target, caller, file) for each raw call to an address no listed function starts at"""
    starts = listed()
    found = set()
    for d, _, fs in os.walk(os.path.join(ROOT, 'src')):
        for f in fs:
            if not f.endswith('.c'):
                continue
            path = os.path.join(d, f)
            text = open(path, errors='replace').read()
            if text.startswith('/* @unit'):
                continue
            defs = [(m.start(), m.group(1)) for m in DEF.finditer(text)]
            offsets = [o for o, _ in defs]
            for m in CALL.finditer(text):
                a = physical(int(m.group(1), 16))
                if not RAM[0] <= a < RAM[1] or a in starts:
                    continue
                i = bisect.bisect_right(offsets, m.start()) - 1
                found.add(('%08x' % a, defs[i][1] if i >= 0 else '?', os.path.relpath(path, ROOT)))
    return found


def read_allowed():
    if not os.path.exists(ALLOWED):
        return set()
    return {tuple(l.split()) for l in open(ALLOWED) if l.strip() and not l.startswith('#')}


def write_allowed(entries):
    with open(ALLOWED, 'w') as f:
        f.write('# raw calls into code no function in functions.txt starts at, known when tools/5-generated/rawcalls.py was\n'
                '# introduced: target, calling function, file. Each one is C still to write; the list only shrinks.\n')
        for e in sorted(entries):
            f.write('%s %s %s\n' % e)


def main():
    now = scan()
    allowed = read_allowed()
    if '--allow' in sys.argv:
        write_allowed(now)
        print('rawcalls: %d allowed' % len(now))
        return 0
    if '--list' in sys.argv:
        for e in sorted(now):
            print('%s %s %s%s' % (e + ('' if e in allowed else '  NEW',)))
    new = sorted(now - allowed)
    gone = allowed - now
    if '--update' in sys.argv and gone:
        write_allowed(allowed & now)
    for e in new:
        print('rawcalls: %s calls 0x%s by address, and no function in functions.txt starts there (%s)' % (e[1], e[0], e[2]),
              file=sys.stderr)
    print('rawcalls: %d raw calls into unlisted code (%d known, %d new, %d fixed since the list%s)'
          % (len(now), len(now & allowed), len(new), len(gone), ', list updated' if '--update' in sys.argv and gone else ''))
    if new:
        print('[ERROR] C that calls original code by address passes equiv.py (its simulator runs the original bytes) but has '
              'no C behind it: give the target an entry in functions.txt and C, or extend the calling function to cover it',
              file=sys.stderr)
        return 1
    return 0


if __name__ == '__main__':
    sys.exit(main())
