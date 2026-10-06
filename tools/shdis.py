#!/usr/bin/env python3
"""SH-4 disassembly of part of the executable, FPU included, with names. Stdlib only.

    python3 tools/shdis.py <start hex> <end hex>        (run in the repo)

Reads 1ST_READ.BIN and BASE, and names from functions.txt, symbols.txt and globals.txt (when they
exist). Prints one instruction per line; pc-relative loads show the pool value (as a name when it
is one, else as a number and, for a 32-bit value, as a float), branches and calls their target.
FPU moves are decoded as single precision (the games are built with -fpu=single).
"""
import os
import struct
import sys


def load_names():
    names = {}
    for path, col in (('functions.txt', 3), ('symbols.txt', 1), ('globals.txt', 1)):
        if not os.path.exists(path):
            continue
        for line in open(path, errors='replace'):
            p = line.split()
            if line.startswith('#') or len(p) <= col:
                continue
            try:
                a = int(p[1] if path == 'functions.txt' else p[0], 16)
            except ValueError:
                continue
            names.setdefault(a, p[col])
    return names


def s8(x):
    return x - 256 if x & 0x80 else x


def s12(x):
    return x - 4096 if x & 0x800 else x


R = 'r%d'
OP0 = {0x0009: 'nop', 0x000b: 'rts', 0x002b: 'rte', 0x0008: 'clrt', 0x0018: 'sett', 0x0028: 'clrmac',
       0x0048: 'clrs', 0x0058: 'sets', 0x0019: 'div0u', 0x001b: 'sleep', 0x0038: 'ldtlb', 0xf3fd: 'fschg',
       0xfbfd: 'frchg'}
N_ONLY_0 = {0x02: 'stc sr,%s', 0x12: 'stc gbr,%s', 0x22: 'stc vbr,%s', 0x32: 'stc ssr,%s', 0x42: 'stc spc,%s',
            0xfa: 'stc dbr,%s', 0x3a: 'stc sgr,%s', 0x0a: 'sts mach,%s', 0x1a: 'sts macl,%s', 0x2a: 'sts pr,%s',
            0x5a: 'sts fpul,%s', 0x6a: 'sts fpscr,%s', 0x03: 'bsrf %s', 0x23: 'braf %s', 0x83: 'pref @%s',
            0x93: 'ocbi @%s', 0xa3: 'ocbp @%s', 0xb3: 'ocbwb @%s', 0xc3: 'movca.l r0,@%s', 0x29: 'movt %s'}
N_ONLY_4 = {0x00: 'shll %s', 0x01: 'shlr %s', 0x02: 'sts.l mach,@-%s', 0x03: 'stc.l sr,@-%s', 0x04: 'rotl %s',
            0x05: 'rotr %s', 0x06: 'lds.l @%s+,mach', 0x07: 'ldc.l @%s+,sr', 0x08: 'shll2 %s', 0x09: 'shlr2 %s',
            0x0a: 'lds %s,mach', 0x0b: 'jsr @%s', 0x0e: 'ldc %s,sr', 0x10: 'dt %s', 0x11: 'cmp/pz %s',
            0x12: 'sts.l macl,@-%s', 0x13: 'stc.l gbr,@-%s', 0x15: 'cmp/pl %s', 0x16: 'lds.l @%s+,macl',
            0x17: 'ldc.l @%s+,gbr', 0x18: 'shll8 %s', 0x19: 'shlr8 %s', 0x1a: 'lds %s,macl', 0x1b: 'tas.b @%s',
            0x1e: 'ldc %s,gbr', 0x20: 'shal %s', 0x21: 'shar %s', 0x22: 'sts.l pr,@-%s', 0x23: 'stc.l vbr,@-%s',
            0x24: 'rotcl %s', 0x25: 'rotcr %s', 0x26: 'lds.l @%s+,pr', 0x27: 'ldc.l @%s+,vbr', 0x28: 'shll16 %s',
            0x29: 'shlr16 %s', 0x2a: 'lds %s,pr', 0x2b: 'jmp @%s', 0x2e: 'ldc %s,vbr', 0x32: 'stc.l sgr,@-%s',
            0x33: 'stc.l ssr,@-%s', 0x37: 'ldc.l @%s+,ssr', 0x3e: 'ldc %s,ssr', 0x43: 'stc.l spc,@-%s',
            0x47: 'ldc.l @%s+,spc', 0x4e: 'ldc %s,spc', 0x52: 'sts.l fpul,@-%s', 0x56: 'lds.l @%s+,fpul',
            0x5a: 'lds %s,fpul', 0x62: 'sts.l fpscr,@-%s', 0x66: 'lds.l @%s+,fpscr', 0x6a: 'lds %s,fpscr',
            0xf2: 'stc.l dbr,@-%s', 0xf6: 'ldc.l @%s+,dbr', 0xfa: 'ldc %s,dbr'}
NM_2 = ['mov.b %s,@%s', 'mov.w %s,@%s', 'mov.l %s,@%s', None, 'mov.b %s,@-%s', 'mov.w %s,@-%s',
        'mov.l %s,@-%s', 'div0s %s,%s', 'tst %s,%s', 'and %s,%s', 'xor %s,%s', 'or %s,%s', 'cmp/str %s,%s',
        'xtrct %s,%s', 'mulu.w %s,%s', 'muls.w %s,%s']
NM_3 = ['cmp/eq %s,%s', None, 'cmp/hs %s,%s', 'cmp/ge %s,%s', 'div1 %s,%s', 'dmulu.l %s,%s', 'cmp/hi %s,%s',
        'cmp/gt %s,%s', 'sub %s,%s', None, 'subc %s,%s', 'subv %s,%s', 'add %s,%s', 'dmuls.l %s,%s',
        'addc %s,%s', 'addv %s,%s']
NM_6 = ['mov.b @%s,%s', 'mov.w @%s,%s', 'mov.l @%s,%s', 'mov %s,%s', 'mov.b @%s+,%s', 'mov.w @%s+,%s',
        'mov.l @%s+,%s', 'not %s,%s', 'swap.b %s,%s', 'swap.w %s,%s', 'negc %s,%s', 'neg %s,%s', 'extu.b %s,%s',
        'extu.w %s,%s', 'exts.b %s,%s', 'exts.w %s,%s']
FPU = {0: 'fadd fr%d,fr%d', 1: 'fsub fr%d,fr%d', 2: 'fmul fr%d,fr%d', 3: 'fdiv fr%d,fr%d', 4: 'fcmp/eq fr%d,fr%d',
       5: 'fcmp/gt fr%d,fr%d', 6: 'fmov.s @(r0,r%d),fr%d', 7: 'fmov.s fr%d,@(r0,r%d)', 8: 'fmov.s @r%d,fr%d',
       9: 'fmov.s @r%d+,fr%d', 0xa: 'fmov.s fr%d,@r%d', 0xb: 'fmov.s fr%d,@-r%d', 0xc: 'fmov fr%d,fr%d',
       0xe: 'fmac fr0,fr%d,fr%d'}
FPU_D = {0: 'fsts fpul,fr%d', 1: 'flds fr%d,fpul', 2: 'float fpul,fr%d', 3: 'ftrc fr%d,fpul', 4: 'fneg fr%d',
         5: 'fabs fr%d', 6: 'fsqrt fr%d', 8: 'fldi0 fr%d', 9: 'fldi1 fr%d', 0xa: 'fcnvsd fpul,dr%d',
         0xb: 'fcnvds dr%d,fpul'}


def decode(w, pc):
    """(text, pool address or None, pool size, branch target or None)"""
    t, n, m, lo = w >> 12, (w >> 8) & 15, (w >> 4) & 15, w & 15
    if w in OP0:
        return OP0[w], None, 0, None
    if t == 0:
        if (w & 0xff) in N_ONLY_0:
            return N_ONLY_0[w & 0xff] % (R % n), None, 0, None
        if lo == 2 and m & 8:
            return 'stc r%d_bank,r%d' % (m & 7, n), None, 0, None
        if lo in (4, 5, 6):
            return 'mov.%s r%d,@(r0,r%d)' % ('bwl'[lo - 4], m, n), None, 0, None
        if lo == 7:
            return 'mul.l r%d,r%d' % (m, n), None, 0, None
        if lo in (0xc, 0xd, 0xe):
            return 'mov.%s @(r0,r%d),r%d' % ('bwl'[lo - 0xc], m, n), None, 0, None
        if lo == 0xf:
            return 'mac.l @r%d+,@r%d+' % (m, n), None, 0, None
    elif t == 1:
        return 'mov.l r%d,@(%d,r%d)' % (m, lo * 4, n), None, 0, None
    elif t == 2 and NM_2[lo]:
        return NM_2[lo] % (R % m, R % n), None, 0, None
    elif t == 3 and NM_3[lo]:
        return NM_3[lo] % (R % m, R % n), None, 0, None
    elif t == 4:
        if (w & 0xff) in N_ONLY_4:
            return N_ONLY_4[w & 0xff] % (R % n), None, 0, None
        if m & 8 and lo in (3, 7, 0xe):
            return ({3: 'stc.l r%d_bank,@-r%d', 7: 'ldc.l @r%d+,r%d_bank', 0xe: 'ldc r%d,r%d_bank'}[lo]
                    % ((m & 7, n) if lo == 3 else (n, m & 7))), None, 0, None
        if lo == 0xc:
            return 'shad r%d,r%d' % (m, n), None, 0, None
        if lo == 0xd:
            return 'shld r%d,r%d' % (m, n), None, 0, None
        if lo == 0xf:
            return 'mac.w @r%d+,@r%d+' % (m, n), None, 0, None
    elif t == 5:
        return 'mov.l @(%d,r%d),r%d' % (lo * 4, m, n), None, 0, None
    elif t == 6:
        return NM_6[lo] % (R % m, R % n), None, 0, None
    elif t == 7:
        return 'add #%d,r%d' % (s8(w & 0xff), n), None, 0, None
    elif t == 8:
        d = w & 0xff
        if n == 0:
            return 'mov.b r0,@(%d,r%d)' % (lo, m), None, 0, None
        if n == 1:
            return 'mov.w r0,@(%d,r%d)' % (lo * 2, m), None, 0, None
        if n == 4:
            return 'mov.b @(%d,r%d),r0' % (lo, m), None, 0, None
        if n == 5:
            return 'mov.w @(%d,r%d),r0' % (lo * 2, m), None, 0, None
        if n == 8:
            return 'cmp/eq #%d,r0' % s8(d), None, 0, None
        if n in (9, 0xb, 0xd, 0xf):
            return ({9: 'bt', 0xb: 'bf', 0xd: 'bt/s', 0xf: 'bf/s'}[n]), None, 0, pc + 4 + s8(d) * 2
    elif t == 9:
        a = pc + 4 + (w & 0xff) * 2
        return 'mov.w @(0x%x,pc),r%d' % (a, n), a, 2, None
    elif t in (0xa, 0xb):
        return ('bra' if t == 0xa else 'bsr'), None, 0, pc + 4 + s12(w & 0xfff) * 2
    elif t == 0xc:
        d = w & 0xff
        k = n
        if k <= 2:
            return 'mov.%s r0,@(%d,gbr)' % ('bwl'[k], d << k), None, 0, None
        if k == 3:
            return 'trapa #%d' % d, None, 0, None
        if 4 <= k <= 6:
            return 'mov.%s @(%d,gbr),r0' % ('bwl'[k - 4], d << (k - 4)), None, 0, None
        if k == 7:
            a = (pc & ~3) + 4 + d * 4
            return 'mova @(0x%x,pc),r0' % a, None, 0, a
        return ['tst #%d,r0', 'and #%d,r0', 'xor #%d,r0', 'or #%d,r0', 'tst.b #%d,@(r0,gbr)',
                'and.b #%d,@(r0,gbr)', 'xor.b #%d,@(r0,gbr)', 'or.b #%d,@(r0,gbr)'][k - 8] % d, None, 0, None
    elif t == 0xd:
        a = (pc & ~3) + 4 + (w & 0xff) * 4
        return 'mov.l @(0x%x,pc),r%d' % (a, n), a, 4, None
    elif t == 0xe:
        return 'mov #%d,r%d' % (s8(w & 0xff), n), None, 0, None
    elif t == 0xf:
        if lo in FPU:
            return FPU[lo] % (m, n), None, 0, None
        if lo == 0xd:
            if m in FPU_D:
                return FPU_D[m] % n, None, 0, None
            if m == 0xe:
                return 'fipr fv%d,fv%d' % ((n & 3) * 4, (n >> 2) * 4), None, 0, None
            if m == 0xf and n & 3 == 1:
                return 'ftrv xmtrx,fv%d' % ((n >> 2) * 4), None, 0, None
    return '.word 0x%04x' % w, None, 0, None


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    names = load_names()
    start, end = int(sys.argv[1], 16), int(sys.argv[2], 16)

    def name(v):
        return names.get(v) or names.get((v & 0x1fffffff) | (base & 0xe0000000))

    # Pool words the range loads are shown as data. Data decoded as instructions can look like
    # loads too, so a load that itself sits inside a pool word does not count; repeat until stable.
    loads = {}
    for pc in range(start & ~1, end, 2):
        _, pool, size, _ = decode(struct.unpack_from('<H', exe, pc - base)[0], pc)
        if pool is not None:
            loads[pc] = (pool, size)
    pools = {}
    while True:
        covered = {p + k for p, z in pools.items() for k in range(0, z, 2)}
        new = {}
        for pc, (pool, size) in loads.items():
            if pc not in covered:
                new[pool] = max(size, new.get(pool, 0))
        if new == pools:
            break
        pools = new
    skip = 0
    for pc in range(start & ~1, end, 2):
        if skip:
            skip -= 1
            continue
        if pc in pools and base <= pc < base + len(exe) - pools[pc] + 1:
            if pools[pc] == 4:
                v = struct.unpack_from('<I', exe, pc - base)[0]
                print('%08x %08x  .long 0x%08x%s' % (pc, v, v, ('  ; ' + name(v)) if name(v) else ''))
                skip = 1
            else:
                v = struct.unpack_from('<h', exe, pc - base)[0]
                print('%08x %04x  .word %d' % (pc, v & 0xffff, v))
            continue
        if pc in names:
            print('\n%s:' % names[pc])
        w = struct.unpack_from('<H', exe, pc - base)[0]
        text, pool, size, target = decode(w, pc)
        note = ''
        if pool is not None and base <= pool < base + len(exe) - size + 1:
            if size == 2:
                note = '  ; =%d' % struct.unpack_from('<h', exe, pool - base)[0]
            else:
                v = struct.unpack_from('<I', exe, pool - base)[0]
                f = struct.unpack_from('<f', exe, pool - base)[0]
                note = '  ; =%08x %s' % (v, name(v) or ('(%g)' % f if 1e-6 < abs(f) < 1e7 else ''))
        elif target is not None:
            text += ' 0x%08x' % target if not text.startswith('mova') else ''
            if name(target):
                note = '  ; %s' % name(target)
        print('%08x %04x  %s%s' % (pc, w, text, note.rstrip()))


if __name__ == '__main__':
    main()
