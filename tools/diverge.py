#!/usr/bin/env python3
"""diverge.py: why the generated C of one function differs from the original. Run in the repo; needs the compiler (docker) like equiv.py.

    python3 tools/diverge.py NAME [variant] [--trace] [--saved]
        variant: void, r0 or fr0 (default: each in turn until one differs on a call); --trace: the instructions before the call on both sides;
        --saved: use the cases a failing run saved in state/failed-cases/ instead of drawing fresh ones (they may predate a fix)

Writes the function's generated C and its cases to scratch files, runs the equivalence check with an instruction trace on both the
original and the compiled C, and reports the first mismatching call: its target and the argument registers that differ, and for each
the instruction that produced the value (a load from a memory word and its address, a constant, an argument) on each side. The compile
takes the generator's lock (state/.gen.lock), so it can run while generator groups are going. tests/equivalent.txt and
docs/equivalent.md are put back as they were. Nothing it writes stays in src/ or tests/.
"""
import contextlib
import fcntl
import io
import json
import os
import re
import shutil
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(HERE, 'gen_equiv'))
import sh4sim
import equiv
import gen_core
import gen_drv
import directed

KEEP = ('tests/equivalent.txt', 'docs/equivalent.md')


def call_sites(trace, table_runtime, deep_range):
    """Trace indexes of the instructions that made a recorded call (jsr, bsr, bsrf, and a jump out), in order."""
    out = []
    for i, (pc, op, r, fr) in enumerate(trace):
        t = None
        if (op & 0xF0FF) == 0x400B:
            t = r[(op >> 8) & 15]
        elif (op & 0xF000) == 0xB000:
            d = op & 0xFFF
            t = pc + 4 + 2 * (d - 0x1000 if d & 0x800 else d)
        elif (op & 0xF0FF) == 0x0003:
            t = (pc + 4 + r[(op >> 8) & 15]) & 0xFFFFFFFF
        if t is None:
            continue
        t &= 0xFFFFFFFF
        if (t & 0x1FFFFFFF) in table_runtime or any(lo <= t < hi for lo, hi in deep_range):
            continue
        out.append(i)
    return out


def where(trace, k, reg, isf=False):
    k = min(k + 2, len(trace))                  # after the delay slot: the slot of a call often sets an argument
    p = directed.provenance(trace, k, reg, isf)
    if not p:
        return 'computed (no single load or constant)'
    if p[0] == 'mem':
        j = p[4]
        return 'a %d-byte load from memory %08X at pc %08X%s' % (p[2], p[1], trace[j][0], (' (+%d)' % p[3]) if p[3] else '')
    if p[0] in ('arg', 'farg'):
        return 'the function\'s own argument register %s%d' % ('r' if p[0] == 'arg' else 'fr', p[1])
    if p[0] == 'fmem':
        return 'a float load from memory %08X' % p[1]
    return str(p)


def excerpt(label, trace, i, regs, n=12):
    """The instructions before the call at trace index i, with the values of the registers in `regs` as each one starts."""
    import shdis
    print('  %s, the %d instructions before the call and its delay slot:' % (label, n))
    for j in range(max(0, i - n), min(len(trace), i + 2)):
        pc, op, r, fr = trace[j]
        print('    %08X  %-30s %s' % (pc, shdis.decode(op, pc)[0][:30], ' '.join('r%d=%08X' % (g, r[g]) for g in regs)))


def run_variant(name, variant):
    src, c = gen_drv.build(name, variant)
    cases = None
    path = 'state/failed-cases/%s.json' % name
    if '--saved' in sys.argv and os.path.exists(path):             # the cases a failing run saved: they may be older than a fix, so fresh ones are the default
        cases = json.load(open(path))
    if cases is None:
        cases = gen_drv.tests(name, c, src)
    head = '/* scratch */\n' + gen_drv.head_protos([(name, src, cases, c.protos)]) + '\n\n'
    os.makedirs('tests/zz_div', exist_ok=True)
    open('src/zz_div.c', 'w').write(head + src + '\n')
    json.dump(cases, open('tests/zz_div/%s.json' % name, 'w'))
    cap = {}
    orig_same, orig_run = equiv.same, sh4sim.run

    def same(a, b, outs, back, arity=None, ind=None):
        ok, diff = orig_same(a, b, outs, back, arity, ind)
        if not ok and 'a' not in cap:
            cap.update(a=a, b=b, diff=diff, back=back, arity=arity, ind=ind)
        return ok, diff
    equiv.same = same
    sh4sim.run = lambda case, *a, **k: orig_run(dict(case, trace=True), *a, **k)
    buf = io.StringIO()
    try:
        with contextlib.redirect_stdout(buf):
            try:
                equiv.main(['equiv.py', 'src/zz_div.c', '--full'])
            except SystemExit:
                pass
    finally:
        equiv.same, sh4sim.run = orig_same, orig_run
    return cap, buf.getvalue(), c


def report(name, variant, cap, text):
    a, b, back, arity, ind = cap['a'], cap['b'], cap['back'], cap['arity'] or {}, cap['ind']
    diff = cap['diff']
    print('variant %s: %s' % (variant, diff[:200]))
    if not diff.startswith('calls:'):
        return
    fix = lambda h: '%08X' % back.get(int(h, 16), int(h, 16))
    x = [equiv.callview(c['to'], c['r4-r7'], c['fr4-fr11'], arity, c.get('stack'), c.get('chg'), ind, c.get('fchg')) for c in a['calls']]
    y = [equiv.callview(fix(c['to']), [fix(v) for v in c['r4-r7']], c['fr4-fr11'], arity, fix(c['stack']) if c.get('stack') else None,
                        a['calls'][i].get('chg') if i < len(a['calls']) else None, ind, a['calls'][i].get('fchg') if i < len(a['calls']) else None)
         for i, c in enumerate(b['calls'])]
    k = next((i for i, (p, q) in enumerate(zip(x, y)) if p != q), min(len(x), len(y)))
    print('calls: original %d, C %d; the first difference is call %d' % (len(x), len(y), k))
    if k >= len(x) or k >= len(y):
        print('  one side has no call %d (original %s / C %s)' % (k, x[k][0] if k < len(x) else 'none', y[k][0] if k < len(y) else 'none'))
        return
    runtime = {a_ & 0x1FFFFFFF for n, a_ in equiv.names().items() if n.startswith('_')}
    rng_c = [(equiv.SCRATCH, equiv.SCRATCH + 0x100000)]
    sa = call_sites(a['trace'], runtime, []) ; sb = call_sites(b['trace'], runtime, rng_c)
    ta, tb = a['trace'], b['trace']
    print('  target: original %s, C %s' % (x[k][0], y[k][0]))
    ia = sa[k] if k < len(sa) else None
    ib = sb[k] if k < len(sb) else None
    names_r = ['r4', 'r5', 'r6', 'r7']
    for n, (u, v) in enumerate(zip(x[k][1], y[k][1])):
        if u == v:
            continue
        print('  %s: original %s, C %s' % (names_r[n], u, v))
        if ia is not None:
            print('      original: %s' % where(ta, ia, 4 + n))
        if ib is not None:
            print('      C:        %s' % where(tb, ib, 4 + n))
    bad = [4 + n for n, (u, v) in enumerate(zip(x[k][1], y[k][1])) if u != v]
    if bad and '--trace' in sys.argv:
        if ia is not None: excerpt('original', ta, ia, bad)
        if ib is not None: excerpt('C', tb, ib, bad)
    for n, (u, v) in enumerate(zip(x[k][2], y[k][2])):
        if u != v:
            print('  fr%d: original %s, C %s' % (4 + n, u, v))
            if ia is not None:
                print('      original: %s' % where(ta, ia, 4 + n, True))
            if ib is not None:
                print('      C:        %s' % where(tb, ib, 4 + n, True))
    if x[k][0] != y[k][0] and ia is not None:
        # the target came from a register: say from where
        op = ta[ia][1]
        if (op & 0xF0FF) == 0x400B:
            print('  original target register r%d: %s' % ((op >> 8) & 15, where(ta, ia, (op >> 8) & 15)))
        op = tb[ib][1] if ib is not None else 0
        if (op & 0xF0FF) == 0x400B:
            print('  C target register r%d: %s' % ((op >> 8) & 15, where(tb, ib, (op >> 8) & 15)))


def main():
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    name = sys.argv[1]
    variants = [a for a in sys.argv[2:] if not a.startswith('--')] or ['void', 'r0', 'fr0']
    if name not in gen_core.SPANS:
        sys.exit('%s is not in functions.txt' % name)
    lock = open('state/.gen.lock', 'w')
    saved = {f: open(f).read() for f in KEEP if os.path.exists(f)}
    fcntl.flock(lock, fcntl.LOCK_EX)
    try:
        for v in variants:
            try:
                cap, text, c = run_variant(name, v)
            except gen_core.Skip as e:
                print('variant %s: not built (%s)' % (v, e)); continue
            if not cap:
                print('variant %s: no difference on the cases (%s)' % (v, (text.strip().splitlines() or [''])[-1][:120]))
                continue
            report(name, v, cap, text)
            if cap['diff'].startswith('calls:'):
                break
    finally:
        for f, t in saved.items():
            open(f, 'w').write(t)
        if os.path.exists('src/zz_div.c'):
            os.remove('src/zz_div.c')
        shutil.rmtree('tests/zz_div', ignore_errors=True)
        fcntl.flock(lock, fcntl.LOCK_UN)


if __name__ == '__main__':
    main()
