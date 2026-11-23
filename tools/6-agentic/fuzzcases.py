#!/usr/bin/env python3
"""fuzzcases.py: grow a function's cases by coverage-guided mutation of the original's inputs. Run in the repo.

    python3 tools/6-agentic/fuzzcases.py NAME [--rounds N] [--seed S] [--rebase K] [--apply]

--rebase K: the first K argument registers that are 0 in a case point to an object in RAM instead (the case's pokes below
0x4000 move with r4's), for cases drawn with null objects.

Starts from the function's case file (tests/<file>/NAME.json) and mutates its cases: the answers of the calls it makes (r0 / fr0,
zero, small numbers, -1, a pointer to a zeroed scratch block), the words it reads from memory (the same kinds of values), and
the argument registers r4-r7 (the same, or a pointer). Only the original runs (tools/sh4sim.py, calls answered by the case); a
mutant is kept when it runs an instruction no kept case ran, ends without error, touches no hardware (unless the old cases do)
and does not depend on registers the function never set (directed.unset_dependent). The kept cases are appended to the file,
alternately to "dev" and "holdout", with "about": "fuzz"; then check the C with tools/equiv.py. Without --apply it only reports.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import copy
import glob
import json
import os
import random
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, '..'))
sys.path.insert(0, os.path.join(HERE, '..', '5-generated', 'gen_equiv'))
import sh4sim
import directed

SCRATCH = 0x0CF00000          # zeroed RAM the pointers handed out point into (the case pokes nothing there)


def value(rng, ptrs):
    k = rng.random()
    if k < 0.12:
        return 0
    if k < 0.45:
        return rng.choice([1, 2, 3, 4, 5, 7, 8, 0x10, 0x20, 0x40, 0x80, 0xFF, 0x100])
    if k < 0.55:
        return rng.choice([0xFFFFFFFF, 0xFFFFFFFE, 0x80000000, 0x7FFFFFFF])
    if k < 0.65:
        return rng.randrange(0, 64)
    if k < 0.75:
        return rng.choice([0x3F800000, 0x40000000, 0xBF800000, 0x42C80000, 0x3F000000])    # floats 1, 2, -1, 100, 0.5
    p = SCRATCH + 0x800 * rng.randrange(0, 32)
    ptrs.append(p)
    return p


CODE = []                     # (start, end) of every function: their bytes and literal pools are not inputs


def is_code(a):
    import bisect
    i = bisect.bisect_right(CODE, (a, 1 << 40)) - 1
    return i >= 0 and CODE[i][0] <= a < CODE[i][1]


def mutate(case, run0, rng):
    c = copy.deepcopy(case)
    c.pop('about', None)
    ptrs = []
    n = rng.randint(1, 4)
    calls = run0.get('calls', [])
    reads = [a for a in dict.fromkeys(run0.get('reads', [])) if 0x0C000000 <= (a & 0x1FFFFFFF) < 0x0D000000
             and not 0x0DFF0000 <= a < 0x0E000000 and not is_code(a & 0x1FFFFFFF)]
    for _ in range(n):
        k = rng.random()
        if k < 0.4 and calls:
            i = rng.randrange(len(calls))
            cl = c.setdefault('calls', [])
            while len(cl) <= i:
                cl.append({})
            v = value(rng, ptrs)
            if rng.random() < 0.2:
                cl[i]['fr0'] = '%08X' % v
            else:
                cl[i]['r0'] = '%08X' % v
        elif k < 0.55 and reads:
            a = rng.choice(reads)
            n = rng.choice([4, 8, 16, 32, 64])
            pick = rng.choice([lambda: rng.randrange(0, 4), lambda: rng.randrange(0, 256), lambda: rng.choice([0, 1, 2, 0xFF])])
            c.setdefault('poke', {})['%08X' % a] = bytes(pick() for _ in range(n)).hex()
        elif k < 0.85 and reads:
            a = rng.choice(reads) & ~3 if rng.random() < 0.7 else rng.choice(reads)
            v = value(rng, ptrs)
            if a & 3:
                c.setdefault('poke', {})['%08X' % a] = '%02x' % (v & 0xFF)
            else:
                c.setdefault('poke', {})['%08X' % a] = (v & 0xFFFFFFFF).to_bytes(4, 'little').hex()
        else:
            r = 'r%d' % rng.randint(4, 7)
            c.setdefault('regs', {})[r] = '%08X' % value(rng, ptrs)
    return c


def unset_dependent(case, first, run):
    """directed.unset_dependent, but a call is compared only on the argument registers the function set for it (chg): r5-r7 left
    over from an earlier call are not arguments of a callee that takes one."""
    def seen(r):
        cl = []
        for x in r.get('calls', []):
            cl.append((x['to'], [v for v, ch in zip(x['r4-r7'], x['chg']) if ch], [v for v, ch in zip(x['fr4-fr11'], x['fchg']) if ch]))
        return str(r.get('error')), cl, r.get('writes'), r.get('out', {}).get('r0'), r.get('out', {}).get('fr0')
    unset = {'r%d' % i: '%08X' % (0x0C9E0000 + 0x100 * i) for i in range(8, 15)}
    unset.update({'fr%d' % i: '%08X' % (0x3F800000 + 0x10000 * i) for i in range(12, 16)})
    left = {'r%d' % i: '%08X' % (0x0C9D0000 + 0x100 * i) for i in range(2, 8)}
    left.update({'fr%d' % i: '%08X' % (0x40000000 + 0x10000 * i) for i in range(2, 12)})
    other = dict(case, regs=dict(unset, **case.get('regs', {})))
    given = list(case.get('calls', []))
    given += [{}] * max(0, len(first.get('calls', [])) - len(given))
    if given:
        other['calls'] = [dict(left, **e) for e in given]
    return seen(first) != seen(run(other))


def main(argv):
    name = argv[1]
    rounds = int(argv[argv.index('--rounds') + 1]) if '--rounds' in argv else 3000
    seed = int(argv[argv.index('--seed') + 1]) if '--seed' in argv else 1
    apply_ = '--apply' in argv
    funcs = {p[3]: (int(p[1], 16), int(p[2])) for p in (l.split() for l in open('functions.txt')) if len(p) >= 4 and p[0] == 'F'}
    start, size = funcs[name]
    fs = sorted((s, s + n) for s, n in funcs.values() if n > 0)
    for k, (s, e) in enumerate(fs):              # a pool or padding after a function's last instruction is code too, up to the next one
        nxt = fs[k + 1][0] if k + 1 < len(fs) else e
        CODE.append((s, nxt if nxt - e < 0x400 else e))
    base = int(open('BASE').read().strip(), 16)
    path = glob.glob('tests/*/%s.json' % name)[0]
    d = json.load(open(path))
    if isinstance(d, list):
        d = {'dev': d, 'holdout': []}
    pool = d['dev'] + d['holdout']
    if '--rebase' in argv:                   # cases whose object pointers are 0: the object at OBJ in RAM instead, its pokes moved with it
        OBJ = 0x0CF40000
        moved = []
        for c in pool:
            c = copy.deepcopy(c)
            regs = c.setdefault('regs', {})
            for r in ('r4', 'r5', 'r6', 'r7')[:int(argv[argv.index('--rebase') + 1])]:
                if int(regs.get(r, '0'), 16) == 0:
                    regs[r] = '%08X' % (OBJ + 0x4000 * int(r[1:]))
            c['poke'] = {('%08X' % (OBJ + 0x4000 * 4 + int(a, 16)) if int(a, 16) < 0x4000 else a): v for a, v in c.get('poke', {}).items()}
            moved.append(c)
        pool = moved
    run = lambda c: directed.run_case(c, name, start, size, base, False)
    covered = set()
    hw = False
    runs = []
    for c in pool:
        r = run(c)
        covered |= set(r['covered'])
        hw = hw or bool(r.get('devices'))
        runs.append((c, r))
    before = len(covered)
    covered_e = set(covered)
    parents = runs
    rng = random.Random(seed)
    kept = []
    stale = 0
    for i in range(rounds):
        c0, r0 = rng.choice(runs)
        c = mutate(c0, r0, rng)
        try:
            r = run(c)
        except Exception:
            continue
        if r.get('devices') and not hw:
            continue
        if any(not 0x0C000000 <= (int(w[0], 16) & 0x1FFFFFFF) < 0x0E000000 for w in r.get('writes', [])):
            continue                                    # a store through a null or wild pointer: no input the game makes
        new = set(r['covered']) - covered
        if r.get('error'):
            new_e = set(r['covered']) - covered_e
            if new_e and len(parents) < 200:            # a run that hangs or stops can still lead somewhere: mutate it further
                covered_e |= new_e
                runs.append((c, r))
            continue
        if not new:
            stale += 1
            if stale > rounds // 3 and i > rounds // 2:
                break
            continue
        if unset_dependent(c, r, run):
            continue
        stale = 0
        covered |= new
        c['about'] = 'fuzz: %d new instructions' % len(new)
        kept.append(c)
        runs.append((c, r))
    code = set(directed_code(start, size, base))
    print('%s: %d new cases, instructions run %d -> %d of %d' % (name, len(kept), before, len(covered & code) if code else len(covered), len(code)))
    if apply_ and kept:
        for j, c in enumerate(kept):
            (d['dev'] if j % 2 == 0 else d['holdout']).append(c)
        json.dump(d, open(path, 'w'), indent=1)


def directed_code(start, size, base):
    try:
        import equiv
        exe = open('1ST_READ.BIN', 'rb').read()
        return equiv.code_addresses(exe, base, start, size)
    except Exception:
        return []


if __name__ == '__main__':
    main(sys.argv)
