#!/usr/bin/env python3
"""units.py <objects.txt>: the link order with C units in place of the asm files they replace.

A C unit is src/<name>.c whose first line is
    /* @unit <start>-<end> [@data <dstart>-<dend>] [shc options] */
(addresses in hex). Every asm file starting inside [start, end) is dropped from the link order and
build/obj/c_<name>.obj takes the place of the first. With @data, the unit's constant data (its C
section: initialised tables, string literals) is its own piece, build/obj/c_<name>_data.obj, in
place of the asm files in [dstart, dend); both ranges must start and end on asm file boundaries
(add them to functions.txt: "F <addr> 0 FUN_<addr>" for a function start, "D <addr> 0
data_<addr>" for a data boundary). Prints one object path per line (build-relative,
backslashes for the Windows linker), then nothing else. With --units, prints instead:
    <name> <start> <end> <dstart|-> <dend|-> <options...>
"""
import glob, os, re, sys

HEAD = re.compile(r'\s*/\*\s*@unit\s+([0-9A-Fa-f]{8})-([0-9A-Fa-f]{8})'
                  r'(?:\s+@data\s+([0-9A-Fa-f]{8})-([0-9A-Fa-f]{8}))?\s*(.*?)\s*\*/')


def units():
    out = []
    for c in sorted(glob.glob('src/*.c')):
        m = HEAD.match(open(c, errors='replace').readline())
        if m:
            data = (int(m.group(3), 16), int(m.group(4), 16)) if m.group(3) else None
            out.append((os.path.basename(c)[:-2], int(m.group(1), 16), int(m.group(2), 16), data,
                        m.group(5).split()))
    return out


us = units()
if '--units' in sys.argv:
    for n, s, e, d, opts in us:
        print(n, '%08X' % s, '%08X' % e, *(('%08X' % d[0], '%08X' % d[1]) if d else ('-', '-')), *opts)
    sys.exit()
files = open(sys.argv[1]).read().split()
starts = {int(f[:8], 16) for f in files}
ranges = []                                  # (start, end, object, unit name, what)
for n, s, e, d, _ in us:
    ranges.append((s, e, 'c_%s' % n, n, 'code'))
    if d:
        ranges.append((d[0], d[1], 'c_%s_data' % n, n, 'data'))
for s, e, _, n, what in ranges:
    if s not in starts or e not in starts:
        sys.exit('[ERROR] C unit %s: %s %08X-%08X must start and end on asm file boundaries (add the '
                 'missing address to functions.txt: F for a function start, D for a data boundary)'
                 % (n, what, s, e))
for i, a in enumerate(ranges):
    for b in ranges[i + 1:]:
        if a[0] < b[1] and b[0] < a[1]:
            sys.exit('[ERROR] C units overlap: %s %s and %s %s' % (a[3], a[4], b[3], b[4]))
placed = set()
for f in files:
    a = int(f[:8], 16)
    r = next((r for r in ranges if r[0] <= a < r[1]), None)
    if r is None:
        print('build\\obj\\%s.obj' % f[:-4])
    elif r[2] not in placed:
        placed.add(r[2])
        print('build\\obj\\%s.obj' % r[2])
missing = [r[2] for r in ranges if r[2] not in placed]
if missing:
    sys.exit('[ERROR] C unit pieces with no asm file in their range: %s' % ' '.join(missing))
