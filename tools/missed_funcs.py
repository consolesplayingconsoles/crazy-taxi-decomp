#!/usr/bin/env python3
"""List code the analysis did not make into functions. Stdlib only.

    missed_funcs.py <1ST_READ.BIN> <base hex> <functions.txt>

Every function in functions.txt owns its bytes up to the next entry, but its analysed size (column
3) usually ends earlier: the rest is its literal pool and padding. Sometimes it is another function
the analysis never reached (a callback only reached through a table, a getter only called through a
literal pool). Those break C units, which must start and end on function boundaries. Candidates, in
the gap after a function's analysed end:
  - an address some pointer-sized word in the executable points at (callbacks, tables, pools),
    unless that word sits in the same function's own bytes (its switch jump table);
  - a typical function start (saving r8-r14 or pr, or making stack room);
  - a tiny leaf: a literal-pool load straight followed by rts (getters, setters);
  - an address a word elsewhere points at INSIDE a function's analysed body, where code starts
    right after an rts or looks like a function start: two functions the analysis merged into one
    (typical for entries of a function-pointer table in the data area, reached only through data).
Only small gaps count (pools and padding, under 2 KB): a big gap is data, not code.
Review each before adding it to functions.txt as "F <addr> <size> FUN_<addr>"; then re-run
split_asm.py and build.sh (still MATCH).
"""
import struct, sys

if len(sys.argv) != 4:
    sys.exit(__doc__)
exe = open(sys.argv[1], 'rb').read()
base = int(sys.argv[2], 16)
funcs = sorted((int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open(sys.argv[3]))
end = base + len(exe)
gaps = []
for i, (a, size, name) in enumerate(funcs):
    nxt = funcs[i + 1][0] if i + 1 < len(funcs) else end
    if a + size < nxt and nxt - (a + size) < 0x800:
        gaps.append((a + size, nxt, name))

def in_gap(x):
    lo, hi = 0, len(gaps)
    while lo < hi:
        mid = (lo + hi) // 2
        if gaps[mid][1] <= x: lo = mid + 1
        else: hi = mid
    return gaps[lo] if lo < len(gaps) and gaps[lo][0] <= x < gaps[lo][1] else None

starts = [a for a, s, n in funcs]
import bisect
def owner(x):
    i = bisect.bisect_right(starts, x) - 1
    return starts[i] if i >= 0 else None

def hw(x):
    return struct.unpack_from('<H', exe, x - base)[0]

PUSH = {0x4f22} | {0x2f06 | (r << 4) for r in range(8, 15)}   # sts.l pr,@-r15 / mov.l rN,@-r15
found = {}
# 1. pointers into gaps (any 4-byte-aligned word, with the cached/uncached mirrors folded)
for o in range(0, len(exe) - 3, 4):
    v = struct.unpack_from('<I', exe, o)[0]
    t = (v & 0x1fffffff) | (base & 0xe0000000)
    if base <= t < end and not t & 1:
        g = in_gap(t)
        if g and hw(t) not in (0x0009, 0xeeee, 0x0000) and owner(base + o) != owner(t):
            found.setdefault(t, set()).add('pointed to from %08x' % (base + o))
# 2. a function start or a tiny leaf, right after something that ends a function: an rts and its
#    delay slot, nop/0xEEEE padding, or a literal-pool word holding an address
def after_end(x):
    if x >= base + 4 and hw(x - 4) == 0x000b:
        return True
    if hw(x - 2) in (0x0009, 0xeeee):
        return True
    if not x & 3:
        w = struct.unpack_from('<I', exe, x - 4 - base)[0]
        return base <= ((w & 0x1fffffff) | (base & 0xe0000000)) < base + 0x1000000
    return False
for lo, hi, name in gaps:
    for x in range(lo, hi - 2, 2):
        if not after_end(x):
            continue
        if hw(x) in PUSH or (hw(x) >> 8 == 0x7f and hw(x) & 0x80):     # add #-n,r15
            found.setdefault(x, set()).add('function start')
        elif hw(x) >> 12 == 0xd and hw(x + 2) == 0x000b:
            found.setdefault(x, set()).add('leaf: pool load + rts')
# 3. pointers into an analysed body (not its start): a merged function, if it looks like an entry
sizes = {a: s_ for a, s_, n in funcs}
names = {a: n for a, s_, n in funcs}
for o in range(0, len(exe) - 3, 4):
    v = struct.unpack_from('<I', exe, o)[0]
    t = (v & 0x1fffffff) | (base & 0xe0000000)
    if not (base <= t < end) or t & 1 or t in sizes:
        continue
    f = owner(t)
    if f is None or not (f < t < f + sizes[f]) or owner(base + o) == f:
        continue
    if (t >= base + 4 and hw(t - 4) == 0x000b) or hw(t) in PUSH or (hw(t) >> 8 == 0x7f and hw(t) & 0x80):
        found.setdefault(t, set()).add('pointed to from %08x, inside %s (merged?)' % (base + o, names[f]))
for x in sorted(found, key=lambda x: (not any(r.startswith('pointed') for r in found[x]), x)):
    g = in_gap(x)
    print('%08x  after %-24s %s' % (x, g[2] if g else names.get(owner(x), '?'), '; '.join(sorted(found[x]))[:100]))
print('%d candidates' % len(found), file=sys.stderr)
