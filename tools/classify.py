#!/usr/bin/env python3
"""classify.py: which functions can have Equivalent C written for them (tools/equiv.py), and which not. Run in the repo.

    python3 tools/classify.py [name ...]     (no names: every function of at most 128 bytes, as a table)

Reads each function's disassembly and says "ok" or "blocked: <why>" before anyone writes C:
  FPU register banks (frchg, fschg, ftrv, XMTRX): the C cannot name the second bank
  fsrra, fsca: the simulator has no such instruction
  system registers and cache (ldc, stc, ocbi, pref, movca, trapa, sleep, GBR/VBR moves): not C; moving SR to or
  from a register is fine (SHC's get_imask/set_imask, get_cr/set_cr; the simulator keeps SR)
  fipr, fmac: ok, but the cases use values that are exact in float (fipr sums with one rounding)
A function that takes a variable argument list, or passes the address of its own stack area on, cannot
be told from the disassembly: the first case that differs shows it.
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis

BLOCK = (('frchg', 'FPU register bank'), ('fschg', 'FPU size mode'), ('ftrv', 'matrix register (XMTRX)'),
         ('fsrra', 'fsrra (not in the simulator)'), ('fsca', 'fsca (not in the simulator)'),
         ('ldc', 'control register'), ('stc', 'control register'), ('ocbi', 'cache'), ('pref', 'cache'),
         ('movca', 'cache'), ('trapa', 'trap'), ('sleep', 'sleep'))
NOTE = (('fipr', 'fipr: exact-in-float values'), ('fmac', 'fmac: exact-in-float values'))


def main():
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    funcs = []
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            funcs.append((int(p[1], 16), int(p[2]), p[3]))
    only = set(sys.argv[1:])
    for a, sz, n in funcs:
        if (only and n not in only) or (not only and sz > 128):
            continue
        text = []
        for pc in range(a, a + sz, 2):
            w = struct.unpack_from('<H', exe, pc - base)[0]
            t, _, _, _ = shdis.decode(w, pc)
            if w == 0xFBFD: t = 'frchg'                      # the decoder may print these as .word
            elif w == 0xF3FD: t = 'fschg'
            elif w & 0xF0FF == 0xF07D: t = 'fsrra'
            elif w & 0xF1FF == 0xF0FD: t = 'fsca'
            elif w & 0xF0FF == 0xF0ED: t = 'fipr'
            elif w & 0xF3FF == 0xF1FD: t = 'ftrv'
            text.append(t)
        sr = lambda t: t.startswith('stc sr,') or (t.startswith('ldc r') and t.endswith(',sr'))   # SR moves: simulated
        why = sorted({r for t in text for k, r in BLOCK if t.startswith(k) and not sr(t)})
        note = sorted({r for t in text for k, r in NOTE if t.startswith(k)})
        print('%08x %4d %-32s %s%s' % (a, sz, n, ('blocked: ' + ', '.join(why)) if why else 'ok',
                                       ('  (' + ', '.join(note) + ')') if note else ''))


if __name__ == '__main__':
    main()
