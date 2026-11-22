#!/usr/bin/env python3
"""Mark which code is Sega's SDK (not the game) for the repo's progress report. Stdlib only.

    sdk_txt.py <functions.txt> <base hex> <1ST_READ.BIN> <match file>... > sdk.txt

<match file>: ApplySigs output (lines "MATCH <addr> <name>"), SDK tables only (not a reference
decomp's). Writes:
  range <start> <end> <what>   a whole block of SDK code
  func  <addr> <name>          one SDK-matched function outside those blocks
Katana executables put the game first and the SDK libraries last, after the game's data: the
biggest gap between two functions separates them, and the block after it is SDK when at least
30% of its functions matched an SDK signature. The first 16 KB are the boot block when the entry
point copies them (the SDK's start-up code does).
"""
import re, struct, sys

if len(sys.argv) < 5:
    sys.exit(__doc__)
funcs = sorted((int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open(sys.argv[1]) if l.startswith('F '))
base = int(sys.argv[2], 16)
exe = open(sys.argv[3], 'rb').read()
sdk = {}
for path in sys.argv[4:]:
    for l in open(path):
        m = re.match(r'MATCH\s+(?:0x)?([0-9A-Fa-f]{8})\s+(\S+)', l)
        if m:
            sdk[int(m.group(1), 16)] = m.group(2)

out = []
covered = []
# boot block: the entry point's first three instructions load source, end and destination for a copy
w = [struct.unpack_from('<H', exe, i)[0] for i in range(0, 6, 2)]
if [x >> 8 for x in w] == [0xd0, 0xd1, 0xd2]:
    out.append('range %08x %08x boot block (copied by the entry point)' % (base, base + 0x4000))
    covered.append((base, base + 0x4000))

# the SDK library block: after the biggest gap between consecutive functions
gaps = [(funcs[i + 1][0] - (funcs[i][0] + funcs[i][1]), i + 1) for i in range(len(funcs) - 1)]
if gaps:
    gap, i = max(gaps)
    tail = funcs[i:]
    hits = sum(1 for a, s, n in tail if a in sdk)
    if tail and hits >= 0.3 * len(tail):
        end = base + len(exe)
        out.append('range %08x %08x SDK libraries (%d of %d functions matched SDK signatures)'
                   % (tail[0][0], end, hits, len(tail)))
        covered.append((tail[0][0], end))

for a, name in sorted(sdk.items()):
    if not any(s <= a < e for s, e in covered):
        out.append('func %08x %s' % (a, name))

print("# Katana SDK / compiler runtime code (not the game's); the repo's tools/progress.py reports it apart.")
print('# range <start> <end>: whole blocks; func <addr>: single SDK functions matched by signature.')
print('\n'.join(out))
