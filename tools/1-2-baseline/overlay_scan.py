#!/usr/bin/env python3
"""Classify every file on the disc and prove whether it holds SH-4 code.

    python3 tools/1-2-baseline/overlay_scan.py <extracted-dir> [--md]

The Dreamcast main CPU (SH-4) code lives in 1ST_READ.BIN only.  This scan looks
for the SH-4 function prologue/epilogue pair that any compiled function has:

    mov.l r14,@-r15 / sts.l pr,@-r15    e6 2f 22 4f
    lds.l @r15+,pr / rts / nop          26 4f 0b 00 09 00

A file with no prologue and no epilogue has no SH-4 functions.  The second
executable on the disc is AICADRV.BIN, which is ARM code for the AICA sound
CPU (ARM7TDMI), identified by its ARM branch vector table and AICA strings.
Everything else is data: DTPK sound banks, ADX streams, textures, whatever the name says.
"""
import glob
import os
import struct
import sys

SH4_PRO = b'\xe6\x2f\x22\x4f'
SH4_EPI = b'\x26\x4f\x0b\x00\x09\x00'


def is_arm_code(d):
    if len(d) < 0x40:
        return False
    if all(d[i * 4 + 3] == 0xEA for i in range(8)):
        return True
    words = struct.unpack_from('<%dI' % (min(len(d), 0x10000) // 4), d)
    calls = sum(1 for w in words if w == 0xE92D8000)
    return calls > 32


def classify(name, d):
    if d[:4] == b'DTPK':
        return 'DTPK sound bank'
    if d[:4] == b'GBIX':
        return 'PVR texture'
    if name.upper().endswith('.ADX'):
        return 'CRI ADX audio'
    if is_arm_code(d):
        return 'ARM code (AICA)'
    pro = d.count(SH4_PRO)
    epi = d.count(SH4_EPI)
    if pro and epi and pro * 8 >= epi:
        return 'SH-4 code'
    return 'data'


def main():
    root = sys.argv[1] if len(sys.argv) > 1 else '.'
    md = '--md' in sys.argv
    rows = []
    for path in sorted(glob.glob(os.path.join(root, '*'))):
        if not os.path.isfile(path):
            continue
        name = os.path.basename(path)
        d = open(path, 'rb').read()
        kind = classify(name, d)
        rows.append((kind, name, len(d), d.count(SH4_PRO), d.count(SH4_EPI)))
    order = {'SH-4 code': 0, 'ARM code (AICA)': 1}
    rows.sort(key=lambda r: (order.get(r[0], 9), -r[2], r[1]))
    counts = {}
    for kind, name, size, pro, epi in rows:
        counts[kind] = counts.get(kind, 0) + 1
    if md:
        print('| file | size | type | SH-4 prologues | SH-4 epilogues |')
        print('|---|---:|---|---:|---:|')
        for kind, name, size, pro, epi in rows:
            print('| `%s` | %d | %s | %d | %d |' % (name, size, kind, pro, epi))
    else:
        for kind, name, size, pro, epi in rows:
            print('%-20s %-22s %8d  pro=%d epi=%d' % (name, kind, size, pro, epi))
        print()
        for kind, n in sorted(counts.items(), key=lambda kv: -kv[1]):
            print('%-22s %d' % (kind, n))


if __name__ == '__main__':
    main()
