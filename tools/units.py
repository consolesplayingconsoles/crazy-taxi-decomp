#!/usr/bin/env python3
"""units.py <objects.txt>: the link order with C units in place of the asm files they replace.

A C unit is src/<name>.c whose first line is
    /* @unit <start>-<end> [shc options] */
(addresses in hex). Every asm file starting inside [start, end) is dropped from the link order and
build/obj/<name>.obj takes the place of the first. Prints one object path per line (build-relative,
backslashes for the Windows linker), then nothing else. With --units, prints instead:
    <name> <start> <end> <options...>
"""
import glob, os, re, sys

def units():
    out = []
    for c in sorted(glob.glob('src/*.c')):
        first = open(c, errors='replace').readline()
        m = re.match(r'\s*/\*\s*@unit\s+([0-9A-Fa-f]{8})-([0-9A-Fa-f]{8})\s*(.*?)\s*\*/', first)
        if m:
            out.append((os.path.basename(c)[:-2], int(m.group(1), 16), int(m.group(2), 16), m.group(3).split()))
    return out

us = units()
if '--units' in sys.argv:
    for n, s, e, opts in us:
        print(n, '%08X' % s, '%08X' % e, *opts)
    sys.exit()
files = open(sys.argv[1]).read().split()
starts = {int(f[:8], 16) for f in files}
for n, s_, e_, o_ in us:
    if s_ not in starts or e_ not in starts:
        sys.exit('[ERROR] C unit %s: %08X-%08X must start and end on asm file boundaries (add the '
                 'missing function to functions.txt)' % (n, s_, e_))
placed = set()
for f in files:
    a = int(f[:8], 16)
    u = next((u for u in us if u[1] <= a < u[2]), None)
    if u is None:
        print('build\\obj\\%s.obj' % f[:-4])
    elif u[0] not in placed:
        placed.add(u[0])
        print('build\\obj\\c_%s.obj' % u[0])
missing = [u[0] for u in us if u[0] not in placed]
if missing:
    sys.exit('[ERROR] C units with no asm file in their range: %s' % ' '.join(missing))
