"""Directed cases: aim new cases at the branches the existing cases never flip.

    python3 tools/gen_equiv --direct NAME [NAME ...]        (run in the repo)

For each function (it has C in src/ and a case file in tests/): run the cases on the original with an instruction trace, find every
conditional branch that only ever went one way, work out where the compared value came from (a memory word the function loaded, an
argument register, with an offset from adds), and write a copy of a case that makes the compare come out the other way. A new case is
kept when it runs instructions no case ran yet. The new cases are checked by tools/equiv.py on the C: a function that now differs is
the finding (the C was wrong on a path the old cases never took), it keeps its old cases and the difference goes in the ledger.
Whatever the old case file held is archived (state/cases-history/).
"""
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


def provenance(trace, k, reg, is_float=False):
    """Where register `reg` got its value before trace[k]: ('mem', addr, size, offset) / ('arg', reg, offset) / ('fmem', addr) / None."""
    off = 0
    j = k - 1
    while j >= 0:
        pc, op, r, fr = trace[j]
        d = definition(op, r)
        after = trace[j + 1][2] if j + 1 < len(trace) else None
        afterf = trace[j + 1][3] if j + 1 < len(trace) else None
        if d and ((d[0] in ('fcopy', 'floadf')) == is_float) and d[1] == reg:
            if d[0] == 'load': return ('mem', d[2], d[3], off, j)
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
        if hi in (0x89, 0x8b, 0x8d, 0x8f) and i + 1 < len(trace):
            delay = hi in (0x8d, 0x8f)
            nxt = trace[i + 2][0] if delay and i + 2 < len(trace) else trace[i + 1][0]
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
    if prov[0] == 'arg':
        c.setdefault('regs', {})['r%d' % prov[1]] = '%08X' % ((want - prov[2]) & M)
        return c
    if prov[0] == 'farg':
        c.setdefault('regs', {})['fr%d' % prov[1]] = '%08X' % fb(want)
        return c
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
        for pc, seen in sorted(sides.items()):
            if len(seen) > 1: continue
            taken = next(iter(seen)); ci, i = where[(pc, taken)]
            tr = runs[ci]['trace']; comp = compare_at(tr, i)
            if not comp: continue
            kind, ar, br, imm, k = comp
            isf = kind in ('feq', 'fgt')
            a, b = values(tr, comp)
            for which in ('a', 'b'):
                reg = ar if which == 'a' else br
                if reg is None: continue
                prov = provenance(tr, k, reg, isf)
                if not prov: continue
                x, y = (a, b) if which == 'a' else (b, a)
                kd = kind if which == 'a' else {'hs': 'hs', 'hi': 'hi', 'ge': 'ge', 'gt': 'gt'}.get(kind, kind)
                for cand in (candidates(kind, x, y) if which == 'a' else candidates_b(kind, x, y)):
                    key = (pc, which, prov[0], prov[1], cand if not isf else round(cand, 3))
                    if key in tried: continue
                    tried.add(key)
                    nc = apply(cases[ci], prov, cand)
                    if not nc: continue
                    r2 = run_case(nc, name, start, size, base, deep, True)
                    if r2['error']: continue
                    gain = set(r2.get('covered', [])) - covered
                    if gain and len(new) < MAX_NEW:
                        nc['about'] = 'directed: flips %08X (%s)' % (pc, 'taken' if taken else 'not taken')
                        new.append(nc); cases.append(nc); runs.append(r2); covered |= gain; gained = True
                        break
        if not gained: break
    return new, before, len(covered)


def candidates_b(kind, a, b):
    """Values for the second operand (b, a stays) that flip the compare."""
    if kind in ('feq', 'fgt'):
        now = (a == b) if kind == 'feq' else (a > b)
        return [c for c in (a, a + 1.0, a - 1.0, 0.0, 1.0) if ((a == c) if kind == 'feq' else (a > c)) != now]
    cur = result(kind, a, b)
    return sorted({c & M for c in (a, a + 1, a - 1, 0, 1, 0xFFFFFFFF, 0x7FFFFFFF, 0x80000000) if result(kind, a, c & M) != cur})


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
            try:
                new, b, a = extend(n, sets, start, size, base, deep)
            except Exception as e:
                new, b, a = [], 0, 0; ledger.record('direct', n, 'error', '%s %s' % (type(e).__name__, str(e)[:80]))
            done += 1
            print('[%4ds] directed: %d of %d functions | %s: %d new cases, instructions run %d -> %d' % (time.time() - t0, done, total_fn, n, len(new), b, a), flush=True)
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
    for _ in range(4):
        nxt = []
        for case in frontier:
            r = go(case)
            if not r['error']:
                found.append(case); continue
            tr = r.get('trace') or []
            sides = {}
            where = {}
            for i, pc, taken in branches(tr):
                sides.setdefault(pc, set()).add(taken); where.setdefault((pc, taken), i)
            for pc, seen in sorted(sides.items()):
                if len(seen) > 1: continue
                taken = next(iter(seen)); i = where[(pc, taken)]
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
                        nc = copy.deepcopy(case); nc['about'] = 'rescue: %08X changes between reads' % pa[1]
                        nc.setdefault('seq_reads', {})['%08X' % pa[1]] = ['%08X' % v1] + ['%08X' % (alt & M)] * 60
                        nxt.append(nc)
                    continue
                for which, prov, x, y in (('a', pa, a, b), ('b', pb, b, a)):
                    if not prov or prov[0] == 'seq': continue
                    for cand in (candidates(kind, x, y) if which == 'a' else candidates_b(kind, y, x)):
                        key = (pc, which, prov[0], prov[1], cand if not isf else round(cand, 3))
                        if key in tried: continue
                        tried.add(key)
                        nc = apply(case, prov, cand)
                        if nc:
                            nc['about'] = 'rescue: flips %08X' % pc; nxt.append(nc)
        if found and len(found) >= 6: break
        frontier = nxt[:24]
        if not frontier: break
    return found[:6]
