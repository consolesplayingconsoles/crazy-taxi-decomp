#!/usr/bin/env python3
"""Function starts the analysis never reached, as seeds for ghidra/SeedFuncs.java. Stdlib only.

    seed_funcs.py <executable> <base hex> <report.txt> > seeds.txt

Looks only in stretches no analysed function covers (missed_funcs.py covers the small gaps after
functions). A seed is an address right after something that ends a function (rts + its delay slot,
nop / 0xEEEE padding, or the previous function's literal pool: the words its pc-relative loads
fetch) whose first instruction starts a function: saving pr or r8-r14, or making stack room. Prints one hex address per line, with the region and the reason as a comment.
"""
import struct
import sys

if len(sys.argv) != 4:
    sys.exit(__doc__)
exe = open(sys.argv[1], 'rb').read()
base = int(sys.argv[2], 16)
funcs = sorted((int(l.split()[1], 16), int(l.split()[2])) for l in open(sys.argv[3]) if l.startswith('F '))
covered = bytearray(len(exe))
for a, s in funcs:
    covered[max(0, a - base):max(0, a - base + s)] = b'\1' * max(0, min(s, len(exe) - (a - base)))


def hw(o):
    return struct.unpack_from('<H', exe, o)[0]


PUSH = {0x4f22} | {0x2f06 | (r << 4) for r in range(8, 15)}

# Literal pools: every word a mov.l @(disp,pc) / mov.w @(disp,pc) in the executable loads. A function
# can start right after another's pool, with no rts or padding just before it.
pool = bytearray(len(exe))
for o in range(0, len(exe) - 1, 2):
    if not covered[o]:                                           # only loads inside analysed code count
        continue
    w = hw(o)
    if w >> 12 == 0xd:                                           # mov.l @(disp,pc),Rn
        t = ((o + 4) & ~3) + (w & 0xff) * 4
        if t + 4 <= len(exe):
            pool[t:t + 4] = b'\1' * 4
    elif w >> 12 == 0x9:                                         # mov.w @(disp,pc),Rn
        t = o + 4 + (w & 0xff) * 2
        if t + 2 <= len(exe):
            pool[t:t + 2] = b'\1' * 2

n = 0
for o in range(4, len(exe) - 2, 2):
    if covered[o] or pool[o]:
        continue
    w = hw(o)
    starts = w in PUSH or (w >> 8 == 0x7f and w & 0x80)
    if not starts or (w in PUSH and hw(o - 2) in PUSH):
        continue
    if hw(o - 4) == 0x000b:
        why = 'after rts'
    elif hw(o - 2) in (0x0009, 0xeeee):
        why = 'after padding'
    elif pool[o - 2]:
        why = 'after a literal pool'
    else:
        continue
    print('%08x  # %s' % (base + o, why))
    n += 1
print('%d seeds' % n, file=sys.stderr)
