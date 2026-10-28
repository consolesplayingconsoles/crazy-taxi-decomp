"""Directed cases: aim new cases at the branches the existing cases never flip.

    python3 tools/5-generated/gen_equiv --direct NAME [NAME ...]        (run in the repo)

For each function (it has C in src/ and a case file in tests/): run the cases on the original with an instruction trace, find every
conditional branch that only ever went one way, work out where the compared value came from (a memory word the function loaded, an
argument register, with an offset from adds), and write a copy of a case that makes the compare come out the other way. A new case is
kept when it runs instructions no case ran yet. The new cases are checked by tools/equiv.py on the C: a function that now differs is
the finding (the C was wrong on a path the old cases never took), it keeps its old cases and the difference goes in the ledger.
Whatever the old case file held is archived (state/cases-history/).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import copy
import glob
import json
import os
import re
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, '..'))
sys.path.insert(0, HERE)
import ledger
import sh4sim

M = 0xFFFFFFFF
MAX_NEW = 24                 # new cases kept per function
ROUNDS = 4
WHY = []                     # why a one-sided branch could not be flipped (filled by extend; main prints it when DIRECT_WHY is set)


def s32(v): return v - (1 << 32) if v & 0x80000000 else v
def sx(v, bits): v &= (1 << bits) - 1; return v - (1 << bits) if v >> (bits - 1) else v
def fl(bits): return struct.unpack('<f', struct.pack('<I', bits & M))[0]
def fb(f):
    try: return struct.unpack('<I', struct.pack('<f', f))[0]
    except (OverflowError, struct.error): return 0x7F7FFFFF


def definition(op, r):
    """What an instruction does to a register, as ('load', dst, addr, size, signed) / ('copy', dst, src) / ('const', dst) / ('add', dst, imm)
    / ('floadf', dst, addr) / ('fcopy', dst, src); None when it is not one of these (the caller then checks whether it changed the register)."""
    hi = op >> 12; n = (op >> 8) & 15; m = (op >> 4) & 15; lo = op & 15; d = op & 15
    if hi == 6:
        if lo in (0, 1, 2): return ('load', n, r[m], (1, 2, 4)[lo], True)
        if lo in (4, 5, 6): return ('load', n, r[m], (1, 2, 4)[lo - 4], True)
        if lo in (3, 0xc, 0xd, 0xe, 0xf): return ('copy', n, m)
    if hi == 5: return ('load', n, (r[m] + d * 4) & M, 4, True)
    if hi == 8 and n == 4: return ('load', 0, (r[m] + d) & M, 1, True)
    if hi == 8 and n == 5: return ('load', 0, (r[m] + d * 2) & M, 2, True)
    if hi == 0 and lo in (0xc, 0xd, 0xe): return ('load', n, (r[0] + r[m]) & M, (1, 2, 4)[lo - 0xc], True)
    if hi in (9, 0xd, 0xe) or (hi == 0xc and n == 7): return ('const', n if hi != 0xc else 0)
    if hi == 7: return ('add', n, sx(op & 255, 8))
    if hi == 0xf and lo == 8: return ('floadf', n, r[m])
    if hi == 0xf and lo == 6: return ('floadf', n, (r[0] + r[m]) & M)
    if hi == 0xf and lo == 9: return ('floadf', n, r[m])
    if hi == 0xf and lo == 0xc: return ('fcopy', n, m)
    return None


def store_of(op, r):
    """(address, size, source register) of a store instruction, or None."""
    hi = op >> 12; n = (op >> 8) & 15; m = (op >> 4) & 15; lo = op & 15
    if hi == 2 and lo in (0, 1, 2): return (r[n], (1, 2, 4)[lo], m)
    if hi == 2 and lo in (4, 5, 6): z = (1, 2, 4)[lo - 4]; return ((r[n] - z) & M, z, m)
    if hi == 1: return ((r[n] + (op & 15) * 4) & M, 4, m)
    if hi == 8 and n == 0: return ((r[m] + (op & 15)) & M, 1, 0)
    if hi == 8 and n == 1: return ((r[m] + (op & 15) * 2) & M, 2, 0)
    if hi == 0 and lo in (4, 5, 6): return ((r[n] + r[0]) & M, (1, 2, 4)[lo - 4], m)
    return None


CTX = {'range': None, 'deep': None}      # the function's address range and the inline-call test of the run being extended (set by extend)


def call_target(op, pc, r):
    """The address a call instruction at pc jumps to (r: the registers when it ran), or None when the op is not a call."""
    if op & 0xF0FF == 0x400B: return r[(op >> 8) & 15] & M                       # jsr @rn
    if op >> 12 == 0xB: return (pc + 4 + (sx(op & 0xFFF, 12) << 1)) & M          # bsr
    if op & 0xF0FF == 0x0003: return (pc + 4 + r[(op >> 8) & 15]) & M            # bsrf rn
    return None


def call_index(trace, j):
    """How many calls the case has answered before the call at trace[j]: calls made by the function itself that are not run inline."""
    lo, hi = CTX['range'] or (0, 1 << 32)
    n = 0
    for i in range(j):
        pc, op, r, fr = trace[i]
        if not lo <= pc < hi: continue
        t = call_target(op, pc, r)
        if t is not None and not (CTX['deep'] and CTX['deep'](t)): n += 1
    return n


def provenance(trace, k, reg, is_float=False):
    """Where register `reg` got its value before trace[k]: ('mem', addr, size, offset) / ('arg', reg, offset) / ('fmem', addr) / None."""
    off = 0
    j = k - 1
    while j >= 0:
        pc, op, r, fr = trace[j]
        t = call_target(op, pc, r)
        if t is not None and reg == 0 and CTX['range'] and CTX['range'][0] <= pc < CTX['range'][1]:       # r0 / fr0 right after a call: the callee's answer
            if CTX['deep'] and CTX['deep'](t): return None
            return ('call', call_index(trace, j), is_float, off)
        if reg == 0 and j >= 1 and CTX['range']:                         # j is the delay slot of a call: the answer arrives after it
            pc1, op1, r1, _ = trace[j - 1]
            t1 = call_target(op1, pc1, r1)
            if t1 is not None and CTX['range'][0] <= pc1 < CTX['range'][1]:
                if CTX['deep'] and CTX['deep'](t1): return None
                return ('call', call_index(trace, j - 1), is_float, off)
        if reg == 0 and not is_float and op >> 8 in (0xC9, 0xCA, 0xCB):      # and/xor/or #imm,r0: the source is the same register one step back
            j -= 1; continue
        d = definition(op, r)
        after = trace[j + 1][2] if j + 1 < len(trace) else None
        afterf = trace[j + 1][3] if j + 1 < len(trace) else None
        if d and ((d[0] in ('fcopy', 'floadf')) == is_float) and d[1] == reg:
            if d[0] == 'load':
                for sj in range(j - 1, -1, -1):                      # a value the function stored and read back: follow it to what was stored
                    st = store_of(trace[sj][1], trace[sj][2])
                    if st and st[0] == d[2] and st[1] == d[3]:
                        sub = provenance(trace, sj, st[2], False)
                        if sub is None: return None
                        if sub[0] in ('arg', 'mem', 'call'):
                            i = {'arg': 2, 'mem': 3, 'call': 3}[sub[0]]
                            return sub[:i] + (sub[i] + off,) + sub[i + 1:]
                        return None
                    if st and st[0] < d[2] + d[3] and d[2] < st[0] + st[1]: break      # an overlapping store of another shape: leave it
                return ('mem', d[2], d[3], off, j)
            if d[0] == 'floadf': return ('fmem', d[2], 4, 0)
            if d[0] in ('copy', 'fcopy'): reg = d[2]; j -= 1; continue
            if d[0] == 'add': off += d[2]; j -= 1; continue
            return None
        if after is not None and not is_float and after[reg] != r[reg]: return None
        if afterf is not None and is_float and afterf[reg] != fr[reg]: return None
        j -= 1
    if not is_float and 4 <= reg <= 7: return ('arg', reg, off)
    if is_float and 4 <= reg <= 11: return ('farg', reg, 0)
    return None


def compare_at(trace, i):
    """The compare feeding the conditional branch at trace[i]: (kind, a_reg, b_reg_or_None, imm, k) or None."""
    for k in range(i - 1, max(i - 12, -1), -1):
        op = trace[k][1]; n = (op >> 8) & 15; m = (op >> 4) & 15; hi = op >> 12; lo = op & 15
        if hi == 8 and n == 8: return ('eq', 0, None, sx(op & 255, 8), k)
        if hi == 3 and lo in (0, 2, 3, 6, 7): return ({0: 'eq', 2: 'hs', 3: 'ge', 6: 'hi', 7: 'gt'}[lo], n, m, None, k)
        if hi == 4 and (op & 255) == 0x15: return ('pl', n, None, 0, k)
        if hi == 4 and (op & 255) == 0x11: return ('pz', n, None, 0, k)
        if hi == 0xc and n == 8: return ('tstimm', 0, None, op & 255, k)
        if hi == 2 and lo == 8: return ('tst', n, m, None, k)
        if hi == 0xf and lo == 4: return ('feq', n, m, None, k)
        if hi == 0xf and lo == 5: return ('fgt', n, m, None, k)
    return None


def result(kind, a, b):
    if kind == 'eq': return a == b
    if kind == 'hs': return (a & M) >= (b & M)
    if kind == 'hi': return (a & M) > (b & M)
    if kind == 'ge': return s32(a & M) >= s32(b & M)
    if kind == 'gt': return s32(a & M) > s32(b & M)
    if kind == 'pl': return s32(a & M) > 0
    if kind == 'pz': return s32(a & M) >= 0
    if kind in ('tst', 'tstimm'): return (a & b) == 0
    return None


def branches(trace):
    """[(index, branch pc, taken)] of every conditional branch in the trace."""
    out = []
    for i, (pc, op, r, fr) in enumerate(trace):
        hi = op >> 8
        if hi in (0x89, 0x8b, 0x8d, 0x8f):
            delay = hi in (0x8d, 0x8f)
            if i + (2 if delay else 1) >= len(trace):         # the run ends here: the taken branch left the function (the trace stops at its end)
                if i + 1 < len(trace) or not delay: out.append((i, pc, True))
                continue
            nxt = trace[i + 2][0] if delay else trace[i + 1][0]
            out.append((i, pc, nxt != pc + (4 if delay else 2)))
    return out


def values(trace, comp):
    kind, ar, br, imm, k = comp
    r = trace[k][2]; f = trace[k][3]
    if kind in ('feq', 'fgt'): return fl(f[ar]), fl(f[br])
    b = imm & M if br is None else r[br]
    return r[ar], b


def candidates(kind, a, b):
    """Values for operand a that flip the compare (b stays)."""
    cur = result(kind, a, b) if kind not in ('feq', 'fgt') else None
    if kind in ('feq', 'fgt'):
        pool = [b, b + 1.0, b - 1.0, 0.0, 1.0, -1.0, 100.0, -100.0]
        now = (a == b) if kind == 'feq' else (a > b)
        return [c for c in pool if ((c == b) if kind == 'feq' else (c > b)) != now]
    if kind in ('tst', 'tstimm'):
        pool = [0, b, (a | b) & M, a & ~b & M, 1, 0xFFFFFFFF]
    else:
        pool = [b, b + 1, b - 1, 0, 1, 2, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0xFFFFFFFE, (b ^ 1)]
    return sorted({c & M for c in pool if result(kind, c & M, b) != cur})


def apply(case, prov, want, size_bits=None):
    """case with the provenance's source set so the compared value becomes `want`."""
    c = copy.deepcopy(case)
    if prov[0] == 'call':
        idx, isf, off = prov[1], prov[2], prov[3]
        calls = c.setdefault('calls', [])
        while len(calls) <= idx: calls.append({})
        if isf: calls[idx]['fr0'] = '%08X' % fb(want)
        else: calls[idx]['r0'] = '%08X' % ((want - off) & M)
        return c
    if prov[0] == 'arg':
        c.setdefault('regs', {})['r%d' % prov[1]] = '%08X' % ((want - prov[2]) & M)
        return c
    if prov[0] == 'farg':
        c.setdefault('regs', {})['fr%d' % prov[1]] = '%08X' % fb(want)
        return c
    if prov[0] in ('mem', 'fmem') and CTX['range'] and prov[1] < CTX['range'][1] and CTX['range'][0] < prov[1] + prov[2]:
        return None                                          # the function's own bytes (a constant in its pool): code, not an input
    if prov[0] == 'mem':
        addr, size, off = prov[1], prov[2], prov[3]
        v = (want - off) & ((1 << (8 * size)) - 1)
        if size < 4 and sx(v, 8 * size) & M != want & M and (want - off) & M != v:
            return None                                      # a short load sign-extends: that value cannot be loaded
        c.setdefault('poke', {})['%08X' % addr] = struct.pack('<I', v)[:size].hex()
        return c
    if prov[0] == 'fmem':
        c.setdefault('poke', {})['%08X' % prov[1]] = struct.pack('<I', fb(want)).hex()
        return c
    return None


def run_case(case, name, start, size, base, deep, trace=False):
    c = dict(case, exe='1ST_READ.BIN', base='%08X' % base, entry='%08X' % start, end='%08X' % (start + size), steps=max(100000, size * 60))
    if trace:
        c['trace'] = True
    return sh4sim.run(c, '.', deep=deep)


def extend(name, sets, start, size, base, deep):
    """New cases for the function: a list, and the coverage before and after (counts of covered instructions)."""
    cases = sets['dev'] + sets['holdout']
    CTX['range'] = (start, start + size); CTX['deep'] = deep
    runs = [run_case(cs, name, start, size, base, deep, True) for cs in cases]
    covered = set()
    for r in runs: covered |= set(r.get('covered', []))
    before = len(covered)
    new = []
    tried = set()
    for _ in range(ROUNDS):
        sides = {}
        where = {}
        for ci, r in enumerate(runs):
            if r['error'] or not r.get('trace'): continue
            for i, pc, taken in branches(r['trace']):
                sides.setdefault(pc, set()).add(taken)
                where.setdefault((pc, taken), (ci, i))
        gained = False
        stuck = []
        for pc, seen in sorted(sides.items()):
            if len(seen) > 1: continue
            taken = next(iter(seen)); ci, i = where[(pc, taken)]
            tr = runs[ci]['trace']; comp = compare_at(tr, i)
            if not comp:
                WHY.append((pc, 'no compare in the 12 instructions before the branch'))
                stuck.append((pc, taken, ci)); continue
            kind, ar, br, imm, k = comp
            isf = kind in ('feq', 'fgt')
            a, b = values(tr, comp)
            for which in ('a', 'b'):
                reg = ar if which == 'a' else br
                if reg is None: continue
                prov = provenance(tr, k, reg, isf)
                if not prov:
                    WHY.append((pc, 'no provenance for %s%d (%s)' % ('fr' if isf else 'r', reg, kind)))
                    stuck.append((pc, taken, ci)); continue
                x, y = (a, b) if which == 'a' else (b, a)
                kd = kind if which == 'a' else {'hs': 'hs', 'hi': 'hi', 'ge': 'ge', 'gt': 'gt'}.get(kind, kind)
                if kind == 'tst' and ar == br:                          # tst rn,rn: one value, nonzero or zero
                    if which == 'b': continue
                    cands = [c for c in (1, 0xFF, 0x7F, M, 0x80000000, 0) if ((c & M) == 0) != (x & M == 0)]
                else:
                    cands = flip_values(kind, which, a, b)
                for cand in cands:
                    key = (pc, which, prov[0], prov[1], cand if not isf else round(cand, 3))
                    if key in tried: continue
                    tried.add(key)
                    nc = apply(cases[ci], prov, cand)
                    if not nc:
                        WHY.append((pc, 'value %s cannot be set at %s' % (cand, prov[0]))); continue
                    r2 = run_case(nc, name, start, size, base, deep, True)
                    if r2['error']:
                        WHY.append((pc, 'flipped case errors: %s' % str(r2['error']))); continue
                    gain = set(r2.get('covered', [])) - covered
                    if not gain: WHY.append((pc, 'flipped (%s %s) but no new instruction ran' % (prov[0], cand)))
                    if gain and len(new) < MAX_NEW:
                        nc['about'] = 'directed: flips %08X (%s)' % (pc, 'taken' if taken else 'not taken')
                        new.append(nc); cases.append(nc); runs.append(r2); covered |= gain; gained = True
                        break
        for pc, taken, ci in stuck:                          # a branch whose compare could not be traced: change the arguments together
            for nc in bulk_variants(cases[ci]):
                key = (pc, 'bulk', json.dumps(nc.get('regs'), sort_keys=True))
                if key in tried: continue
                tried.add(key)
                r2 = run_case(nc, name, start, size, base, deep, True)
                if r2['error']: continue
                gain = set(r2.get('covered', [])) - covered
                if gain and len(new) < MAX_NEW:
                    nc['about'] = 'directed: arguments changed together for %08X' % pc
                    new.append(nc); cases.append(nc); runs.append(r2); covered |= gain; gained = True
                    break
        if not gained: break
    return new, before, len(covered)


def bulk_variants(case):
    """Copies of a case with every integer argument register changed together: a compare on several arguments combined (an or of them
    tested against a mask, a sum) has no single source to set, so try the shapes such tests usually separate: all aligned, all zero,
    all ones, all small."""
    regs = case.get('regs', {})
    names = [r for r in regs if r.startswith('r') and r[1:].isdigit()]
    if not names: return []
    names = sorted(names)
    out = []
    for mask in reversed(range(1, (1 << len(names)) - 1)):                  # some registers RAM pointers, the rest small aligned counts
        for count in (8, 24):
            c = copy.deepcopy(case)
            for k, r in enumerate(names):
                c['regs'][r] = '%08X' % (0x0C900000 + 0x400 * k if mask >> k & 1 else count)
            out.append(c)
    shapes = (lambda v, k: v & ~7 & M, lambda v, k: v & ~15 & M, lambda v, k: v & ~3 & M, lambda v, k: 0, lambda v, k: M,
              lambda v, k: v & 0xFF, lambda v, k: v & 0xF & ~1, lambda v, k: v & 0x38, lambda v, k: v & 0x78 & ~7,
              lambda v, k: 8 * (k + 1), lambda v, k: 16 * (k + 1), lambda v, k: 4 * (k + 2), lambda v, k: 1 + k)      # last four: small, distinct, aligned
    for f in shapes:
        c = copy.deepcopy(case)
        for k, r in enumerate(sorted(names)): c['regs'][r] = '%08X' % f(int(regs[r], 16), k)
        if c['regs'] != regs: out.append(c)
    return out


def candidates_b(kind, a, b):
    """Values for the second operand (b, a stays) that flip the compare."""
    if kind in ('feq', 'fgt'):
        now = (a == b) if kind == 'feq' else (a > b)
        return [c for c in (a, a + 1.0, a - 1.0, 0.0, 1.0) if ((a == c) if kind == 'feq' else (a > c)) != now]
    cur = result(kind, a, b)
    return sorted({c & M for c in (a, a + 1, a - 1, 0, 1, 0xFFFFFFFF, 0x7FFFFFFF, 0x80000000) if result(kind, a, c & M) != cur})


def access(op, r):
    """(address, base register) of the memory access an instruction makes, from its registers, or None (pushes and pops of r15 aside)."""
    hi, n, m, lo = op >> 12, (op >> 8) & 15, (op >> 4) & 15, op & 15
    if hi == 6 and lo in (0, 1, 2, 4, 5, 6): b, a = m, r[m]                      # mov.x @Rm(+),Rn
    elif hi == 2 and lo in (0, 1, 2): b, a = n, r[n]                             # mov.x Rm,@Rn
    elif hi == 2 and lo in (4, 5, 6): b, a = n, r[n] - (1 << (lo - 4))          # mov.x Rm,@-Rn
    elif hi == 5: b, a = m, r[m] + 4 * lo                                         # mov.l @(disp,Rm),Rn
    elif hi == 1: b, a = n, r[n] + 4 * lo                                         # mov.l Rm,@(disp,Rn)
    elif hi == 8 and n in (0, 1, 4, 5): b, a = m, r[m] + (op & 15) * (1 << (n & 1))    # mov.b/w R0,@(disp,Rn) / @(disp,Rm),R0
    elif hi == 0 and lo in (4, 5, 6): b, a = n, r[n] + r[0]                     # mov.x Rm,@(R0,Rn)
    elif hi == 0 and lo in (0xC, 0xD, 0xE): b, a = m, r[m] + r[0]               # mov.x @(R0,Rm),Rn
    elif hi == 0xF and lo in (8, 9): b, a = m, r[m]                               # fmov.s @Rm(+),FRn
    elif hi == 0xF and lo == 6: b, a = m, r[m] + r[0]                             # fmov.s @(R0,Rm),FRn
    elif hi == 0xF and lo == 0xA: b, a = n, r[n]                                  # fmov.s FRm,@Rn
    elif hi == 0xF and lo == 0xB: b, a = n, r[n] - 4                              # fmov.s FRm,@-Rn
    elif hi == 0xF and lo == 7: b, a = n, r[n] + r[0]                             # fmov.s FRm,@(R0,Rn)
    else: return None
    return None if b == 15 else (a & M, b)


def in_ram(a):
    a &= 0x1FFFFFFF
    return 0x0C000000 <= a < 0x0E000000                                           # main RAM and the simulator's stack above it


def unhang(c, tr):
    """A run that ends spinning on a branch to itself (bra . : the game stops on data it rejects): the case with the word the last
    test before the hang compared changed so the test goes the other way (tst / cmp/eq, register or immediate), or None."""
    if not tr or tr[-1][1] != 0xAFFE and not (len(tr) > 1 and tr[-2][1] == 0xAFFE):
        return None
    hang = tr[-1][0] if tr[-1][1] == 0xAFFE else tr[-2][0]
    k = next(i for i, x in enumerate(tr) if x[0] == hang)
    j = next((i for i in range(k - 1, -1, -1) if (tr[i][1] >> 8) in (0x89, 0x8B, 0x8D, 0x8F)), None)     # bt / bf / bt/s / bf/s
    if j is None:
        return None
    for i in range(j - 1, max(-1, j - 8), -1):
        op, r = tr[i][1], tr[i][2]
        n, m = (op >> 8) & 15, (op >> 4) & 15
        if op & 0xF00F == 0x2008: kind, pairs = 'tst', ((n, r[m]), (m, r[n]))          # tst Rm,Rn
        elif op & 0xF00F == 0x3000: kind, pairs = 'eq', ((n, r[m]), (m, r[n]))         # cmp/eq Rm,Rn
        elif op >> 8 == 0xC8: kind, pairs = 'tst', ((0, op & 0xFF),)                   # tst #imm,R0
        elif op >> 8 == 0x88: kind, pairs = 'eq', ((0, sx(op & 0xFF, 8) & M),)          # cmp/eq #imm,R0
        else: continue
        for reg, other in pairs:
            prov = provenance(tr, i, reg)
            if not prov:
                continue
            v = r[reg]
            if kind == 'tst': want = (v | other) & M if (v & other) == 0 else v & ~other & M
            else: want = (v + 1) & M if v == other else other
            nc = apply(c, prov, want)
            if nc and nc != c:
                return nc
        return None
    return None


def answered_calls(tr):
    """[(call index, pc of the call), ...]: the calls the case answers, in order (call_index's count)."""
    lo, hi = CTX['range'] or (0, 1 << 32)
    out = []
    for pc, op, r, fr in tr:
        if not lo <= pc < hi: continue
        t = call_target(op, pc, r)
        if t is not None and not (CTX['deep'] and CTX['deep'](t)): out.append((len(out), pc))
    return out


def index_source(tr, k, reg):
    """Where an address register's value came from when it went through a left shift (shll / shll2 / shll8 / shll16, after copies):
    the source of the unshifted value, an index (nlSetPaletteData, Virtua Tennis: shll2 r4, then a store at gPaletteData + r4), or None.
    Through add Rm,Rn too: a table entry plus a call's answer times 4 (emotFaceReset)."""
    for j in range(k - 1, -1, -1):
        op, r = tr[j][1], tr[j][2]
        if tr[j + 1][2][reg] == r[reg]:
            continue
        n = (op >> 8) & 15
        if op & 0xF0FF in (0x4000, 0x4008, 0x4018, 0x4028) and n == reg:
            return provenance(tr, j, reg)
        if op & 0xF00F == 0x6003 and n == reg:                       # mov Rm,Rn
            reg = (op >> 4) & 15
            continue
        if op & 0xF00F == 0x300C and n == reg:                       # add Rm,Rn: a shifted Rm is the index, else follow the base in Rn
            sub = index_source(tr, j, (op >> 4) & 15)
            if sub:
                return sub
            continue
        return None
    return None


def repair(case, run, rng, hw=False, rounds=8, block=0x0CF00000):
    """A drawn case the original does not finish on, or finishes reaching outside RAM, mended at the source of the value that went wrong:
    run(case) runs the original with a trace; a dt counter at the step cap gets 2 at its source, a pointer that reached outside RAM (or
    an unaligned word) a fresh zeroed block at its source (provenance / apply). The case that finishes cleanly, or None. Zombie Revenge
    FUN_0c05265c: a global {array, count} read as zeros wraps the count to 2^32, then reads through null entries. A run that ends on a
    branch to itself gets the word its last test compared changed instead (unhang: FUN_0c0cac3a stops on a record whose flag is clear)."""
    c = copy.deepcopy(case); nxt = block
    for _ in range(rounds):
        r = run(c)
        tr = r.get('trace') or []
        if tr:                                    # the range in the trace's own form (0C... or 8C...: a call's answer is found by its pc)
            top = tr[0][0] & 0xE0000000
            CTX['range'] = (top | (rng[0] & 0x1FFFFFFF), top | (rng[1] & 0x1FFFFFFF))
        if not r['error'] and not (r.get('devices') and not hw):
            return c
        if not tr:
            return None
        if r['error'] and 'instructions' in str(r['error']) and unhang(c, tr):   # the step cap on a deliberate hang: the test that led there
            nc = unhang(c, tr)
        elif r['error'] and 'instructions' in str(r['error']):            # the step cap: the counter of the loop it is in
            ks = [k for k, x in enumerate(tr) if (x[1] & 0xF0FF) == 0x4010]   # dt Rn
            if not ks:
                return None
            k = ks[0]; reg = (tr[k][1] >> 8) & 15
            prov = provenance(tr, k, reg)
            nc = apply(c, prov, 2) if prov else None
        else:                                                             # the first access outside RAM, or the one that stopped the run
            k = next((i for i, x in enumerate(tr) if access(x[1], x[2]) and not in_ram(access(x[1], x[2])[0])), len(tr) - 1)
            acc = access(tr[k][1], tr[k][2])
            if not acc:
                return None
            prov = provenance(tr, k, acc[1])
            if prov:
                nc = apply(c, prov, nxt)
            else:                                                         # an index scaled by a shift: 0, the table's first entry
                prov = index_source(tr, k, acc[1])
                nc = apply(c, prov, 0) if prov else None
                if nc and prov[0] == 'call':                              # a call in a loop: every answer from that call site
                    site = answered_calls(tr)
                    pc = dict(site).get(prov[1])
                    for i, p_ in site:
                        if p_ == pc and i != prov[1]:
                            nc = apply(nc, ('call', i) + prov[2:], 0) or nc
            nxt += 0x400
        if not nc or nc == c:
            return None
        c = nc
    return None


def out_only(line):
    """An equiv.py line that differs in the function's return value alone (the registers it returns in), not in calls or memory."""
    return re.search(r'\bDIFFERS\s+case \d+: out:', line) is not None


RETKIND = {'r0': 'int', 'fr0': 'float', 'void': 'void'}


def retry_returns(name, path, build, check):
    """The function written again with each other return kind (build(name, kind) -> its C), in the file at `path`, kept at the first
    that check() passes, with its prototype in the file; the file as it was, and None, when none passes. Cases that never reach a
    return with a value pass a void C, and the stronger directed cases then show the return value (cpuSglHitCheck, Virtua Tennis)."""
    text = open(path).read()
    m = re.search(r'^(void|int|float)\s+%s\s*\([^;{)]*\)\s*\{' % re.escape(name), text, re.M)
    if not m:
        return None
    end = re.compile(r'^\}', re.M).search(text, m.end())
    end = end.end() if end else len(text)
    for kind in [k for k in ('fr0', 'r0', 'void') if RETKIND[k] != m.group(1)]:
        try:
            c = build(name, kind).strip('\n')
        except Exception:
            continue
        new = text[:m.start()] + c + text[end:]
        new = re.sub(r'^(?:void|int|float)\s+%s\s*\([^\n{]*\);$' % re.escape(name), lambda _: c.split('\n')[0] + ';', new, flags=re.M)
        open(path, 'w').write(new)
        if check():
            return kind
    open(path, 'w').write(text)
    return None


def flip_values(kind, which, a, b):
    """Values for one operand of the compare `a <kind> b` (which: 'a' or 'b'; the other stays) that make it come out the other way. One
    place for both callers: the extend loop swapped a and b before asking for the second operand and solved the inverted compare
    (Virtua Tennis cpuSglHitCheck: 1.0 > Ball+48 got -1.0 for Ball+48, and the branch stayed)."""
    return candidates(kind, a, b) if which == 'a' else candidates_b(kind, a, b)


def main(names, runtime, funcs):
    import fcntl
    import time
    t0 = time.time()
    base = int(open('BASE').read().strip(), 16)
    deep = lambda t: t in runtime
    lockf = open('state/.gen.lock', 'w')
    by_stem = {}
    skipped = 0
    for n in names:
        hit = glob.glob('tests/*/%s.json' % n)
        if not hit or n not in funcs:
            skipped += 1; ledger.record('direct', n, 'no case file', ''); continue
        by_stem.setdefault(hit[0].split('/')[1], []).append(n)
    total_fn = sum(len(v) for v in by_stem.values()); done = 0
    print('[%4ds] directed: 0 of %d functions' % (time.time() - t0, total_fn), flush=True)
    counts = {}
    for stem, fns in by_stem.items():
        old = {}; changed = []
        for n in fns:
            path = 'tests/%s/%s.json' % (stem, n)
            sets = json.load(open(path)); old[n] = open(path).read()
            start, size = funcs[n]
            WHY.clear()
            try:
                new, b, a = extend(n, sets, start, size, base, deep)
            except Exception as e:
                new, b, a = [], 0, 0; ledger.record('direct', n, 'error', '%s %s' % (type(e).__name__, str(e)))
            done += 1
            print('[%4ds] directed: %d of %d functions | %s: %d new cases, instructions run %d -> %d' % (time.time() - t0, done, total_fn, n, len(new), b, a), flush=True)
            if os.environ.get('DIRECT_WHY'):                # a dry look: say why the branches stayed one-sided, change nothing
                print('WHY %s %s' % (n, json.dumps(sorted(set(w for _, w in WHY)))), flush=True); continue
            if new:
                changed.append((n, path, sets, new))
        if not changed:
            continue
        fcntl.flock(lockf, fcntl.LOCK_EX)                  # the case files, the check and the lists are shared with other runs
        try:
            cur = {n: open('tests/%s/%s.json' % (stem, n)).read() for n, *_ in changed}
            for n, path, sets, new in changed:
                ledger.archive_cases(n, path, 'directed-before')
                sets['dev'] += new[0::2]; sets['holdout'] += new[1::2]
                json.dump(sets, open(path, 'w'), indent=1)
            r = subprocess.run(['python3', 'tools/equiv.py', '-q', 'src/%s.c' % stem], capture_output=True, text=True)
            out = r.stdout + r.stderr
            for n, path, sets, new in changed:
                line = next((l for l in out.splitlines() if l.startswith(n + ' ')), '')
                word = line.split()[1] if len(line.split()) > 1 else 'EQUIVALENT'
                counts[word] = counts.get(word, 0) + 1
                ledger.record('direct', n, word, line[len(n):].strip())
                if word == 'DIFFERS' and out_only(line):       # the return value alone: written again with another return kind, on these cases
                    import gen_drv
                    src = 'src/%s.c' % stem
                    def check_(n=n):
                        r_ = subprocess.run(['python3', 'tools/equiv.py', src], capture_output=True, text=True)      # every line: -q leaves out a pass
                        return re.search(r'^%s\s+EQUIVALENT\b' % re.escape(n), r_.stdout + r_.stderr, re.M) is not None
                    kind_ = retry_returns(n, src, lambda n_, k_: gen_drv.build(n_, k_, False)[0], check_)
                    if kind_:
                        word = 'EQUIVALENT'; counts['DIFFERS'] -= 1; counts['EQUIVALENT'] = counts.get('EQUIVALENT', 0) + 1
                        ledger.record('direct', n, 'EQUIVALENT', 'written again returning %s on the directed cases' % RETKIND[kind_])
                if word == 'DIFFERS':
                    open(path, 'w').write(cur[n])               # keep the old cases; the finding is the difference
                    ledger.record('direct', n, 'DIFFERS on directed cases', line[len(n):].strip())
        finally:
            fcntl.flock(lockf, fcntl.LOCK_UN)
    print('total %d functions, %d with new cases | %s | %d without a case file' % (total_fn, sum(counts.values()), counts, skipped), flush=True)


def rescue(name, start, size, base, deep, steps=20000):
    """Cases the original finishes on, for a function whose drawn cases it never finishes on (a wait loop: it polls a word that nothing in
    the simulator changes). Runs an empty case, finds the branch that keeps it in the loop, and flips it: a poke when the compared word is
    read once, a read sequence (first read A, later reads B) when both sides of the compare are the same address read at different times."""
    def go(case):
        c = dict(case, exe='1ST_READ.BIN', base='%08X' % base, entry='%08X' % start, end='%08X' % (start + size), steps=steps, trace=True)
        return sh4sim.run(c, '.', deep=deep)
    found = []
    frontier = [{'about': 'rescue: empty case', 'regs': {}}]
    tried = set()
    for _ in range(16):                                          # a chain of waits needs one flip per link
        nxt = []
        for case in frontier:
            r = go(case)
            if not r['error']:
                case.pop('_score', None); found.append(case); continue
            tr = r.get('trace') or []
            score = len(set(r.get('covered', [])))               # how far this run got: its children are kept in that order
            sides = {}
            where = {}
            tail_from = max(0, len(tr) - 3000)                   # what keeps the run in place is in its tail: an earlier pass of the same loop may have exited
            occ = {}
            for i, pc, taken in branches(tr):
                occ.setdefault(pc, []).append((i, taken))
                if i < tail_from: continue
                sides.setdefault(pc, set()).add(taken)
            for pc, seen in list(sides.items()):
                if len(seen) > 1: continue
                T = next(iter(seen))
                last_other = max([i for i, t in occ[pc] if t != T], default=-1)
                where[(pc, T)] = min(i for i, t in occ[pc] if t == T and i > last_other)     # the first iteration of the pass that is stuck now
            todo = []
            for pc, seen in sorted(sides.items()):
                if len(seen) > 1: continue
                taken = next(iter(seen)); todo.append((pc, taken, where[(pc, taken)]))
            for pc, occs in sorted(occ.items()):                 # then the branches taken the same way every time before that tail: another way through the function may avoid the loop
                if pc in sides or len({t for _, t in occs}) > 1: continue
                todo.append((pc, occs[0][1], occs[0][0]))
            for pc, taken, i in todo:
                comp = compare_at(tr, i)
                if not comp: continue
                kind, ar, br, imm, k = comp
                isf = kind in ('feq', 'fgt')
                a, b = values(tr, comp)
                pa = provenance(tr, k, ar, isf)
                pb = provenance(tr, k, br, isf) if br is not None else None
                if pa and pb and pa[0] == 'mem' and pb[0] == 'mem' and pa[1] == pb[1] and not isf:
                    first, later = (pa, pb) if pa[4] < pb[4] else (pb, pa)
                    v1 = (a if first is pa else b) & M
                    for alt in (v1 + 1, v1 ^ 1, v1 + 2, 0 if v1 else 1):
                        key = (pc, 'seq', pa[1], alt & M)
                        if key in tried: continue
                        tried.add(key)
                        nc = copy.deepcopy(case); nc['about'] = 'rescue: %08X changes between reads' % pa[1]; nc['_score'] = score
                        nc.setdefault('seq_reads', {})['%08X' % pa[1]] = ['%08X' % v1] + ['%08X' % (alt & M)] * 60
                        nxt.append(nc)
                    continue
                for which, prov, x, y in (('a', pa, a, b), ('b', pb, b, a)):
                    if not prov or prov[0] == 'seq': continue
                    if kind == 'tst' and ar == br:                          # tst rn,rn: one value, nonzero or zero
                        if which == 'b': continue
                        cs = [c_ for c_ in (1, 2, 3, 0xFF, M, 0) if ((c_ & M) == 0) != (x & M == 0)]
                    else:
                        cs = flip_values(kind, which, x, y) if which == 'a' else flip_values(kind, which, y, x)
                    for cand in cs:
                        key = (pc, which, prov[0], prov[1], cand if not isf else round(cand, 3))
                        if key in tried: continue
                        tried.add(key)
                        nc = apply(case, prov, cand)
                        if nc:
                            nc['about'] = 'rescue: flips %08X' % pc; nc['_score'] = score; nxt.append(nc)
        if found and len(found) >= 6: break
        nxt.sort(key=lambda x: -x.get('_score', 0))
        frontier = nxt[:40]
        if not frontier: break
    for f in found: f.pop('_score', None)
    return found[:6]
