#!/usr/bin/env python3
"""Write proven functions again with the current generator and keep the new C only when it is smaller and still proven.
Run in the repo.

    python3 tools/7-reduction/shrink.py [--keep 1.0] [--regen] <name> ...
    python3 tools/7-reduction/shrink.py --passes [narrow,selfcopy,struct,frame,globase,switch,copies,rebase,hoist,deadframe] [--min-size N] [src/<unit>.c ...]

--regen keeps the new C whatever its size, as long as it is proven: for when the generator itself was fixed.

--passes rewrites the current C instead of writing it again, unit by unit (every generated unit when none is named), with the
rewrites that change no address and no type, in this order, each on what the one before kept:
  narrow    rewrites.narrow_calls: callees the unit declares wider than their own definitions declared as defined, the extra
            arguments (leftover registers, frame words) dropped at the calls; kept or put back per unit (gen_ge.c 8,120 to 7,884)
  selfcopy  rewrites.drop_self_copies: a frame slot stored back with its own value goes (FUN_0c065bb2 1,700 bytes to 1,224)
  struct    rewrites.struct_access: `*(int *)((a4 + 0x2D4))` as `((struct o2D4_int *)(a4))->v`, which SHC compiles as
            `mov.w #off,r0; mov.l @(r0,Rn)` instead of keeping far offsets in saved registers (FUN_0c031e5e 360 to 296)
  frame     frame.scalarize: frame slots read and written as one scalar become locals (it can make a function bigger,
            FUN_0c09efd4 4,784 to 10,064, which the size check then leaves out)
  globase   rewrites.global_base: nearby fixed addresses as members off the lowest, loaded once (36 bytes to 20)
  switch    rewrites.chains_to_switch: a chain of ifs on one state variable as a switch (5 instructions a level to 2)
  copies    rewrites.merge_copies: a result threaded up through nesting levels by `tA = (tB);` copies, one temporary instead
--min-size N (with --passes): only functions of at least N bytes (build/sizes.json) are rewritten, the units that hold the largest of them
first and those with none left out, so a run can be stopped where the gains run out (Crazy Taxi: under 256 bytes, 20% of the savings).
For each unit the changed functions are written in place (rewrites.splice), the unit compiled before and after
(sizes.unit_sizes), a function whose C did not get smaller goes back, and equiv.py checks the rest in the written file; one that
does not pass goes back and the file is checked again. Zombie Revenge, 80 random units: 28-38% of their excess.

For each name: the generator writes the function again; when the new C compiles smaller than the current C (both measured
by tools/sizes.py, literal pools included), and under KEEP times its size (default 1.0: any saving), it replaces the old C and is checked on the function's existing cases
(gen_equiv --recheck, through state/kept). If it fails, the old C and cases go back. One line per function goes to
build/shrink.log. The size table is updated as functions shrink.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import fcntl
import glob
import json
import os
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), 'gen_equiv'))
args = sys.argv[1:]
KEEP = 1.0
REGEN = '--regen' in args          # keep the new C at any size when it is proven (a generator fix, not a size one)
if REGEN:
    args.remove('--regen')
if '--keep' in args:
    k = args.index('--keep')
    KEEP = float(args[k + 1])
    del args[k:k + 2]
PASSES = None                       # --passes: the rewrite strategies instead of a regeneration
if '--passes' in args:
    k = args.index('--passes')
    PASSES = ['narrow', 'selfcopy', 'struct', 'frame', 'globase', 'switch', 'copies', 'rebase', 'hoist', 'deadframe']
    if k + 1 < len(args) and not args[k + 1].startswith(('src/', '-')):
        PASSES = args[k + 1].split(',')
        del args[k + 1]
    del args[k]
MIN_SIZE = 0                        # --min-size N with --passes: functions under N bytes are left alone
if '--min-size' in args:
    k = args.index('--min-size')
    MIN_SIZE = int(args[k + 1])
    del args[k:k + 2]
NAMES = args
import consistency   # noqa: E402
import gen_drv       # noqa: E402
import gen_pipe      # noqa: E402
import keep          # noqa: E402
import ledger        # noqa: E402
import stamp         # noqa: E402
import time
import sizes         # noqa: E402

LOG = os.path.join('build', 'shrink.log')


def where(fn):
    for f in glob.glob('src/*.c'):
        if os.path.basename(f).startswith('zz_'):      # another tool's scratch file: it may be gone by the time it is read
            continue
        try:
            t = open(f, errors='replace').read()
        except OSError:
            continue
        b = consistency.block(t, fn)
        if b and os.path.exists('tests/%s/%s.json' % (os.path.basename(f)[:-2], fn)):
            return os.path.basename(f)[:-2], t[b[0]:b[1]]
    return None, None


def locked():
    lock = open('state/.gen.lock', 'w')
    fcntl.flock(lock, fcntl.LOCK_EX)
    return lock


def shrink_one(fn, stem, old, s, c, n_new, o_c, var, vs, log, table):
    """Put the new C in place of the old one, check it on the function's cases; True when it passes, False when the old C and cases are back."""
    tp = 'tests/%s/%s.json' % (stem, fn)
    cases = json.load(open(tp))
    lock = locked()
    try:
        keep.save((fn, s, cases, c.protos, None), 'DIFFERS', 'shrink', 'shrink', vs.index(var), False)
        consistency.remove_def(stem, fn)
        os.remove(tp)
        eq = [l for l in open('tests/equivalent.txt') if l.strip() != fn]
        open('tests/equivalent.txt', 'w').writelines(eq)
    finally:
        fcntl.flock(lock, fcntl.LOCK_UN)
    since = time.strftime('%Y-%m-%dT%H:%M:%S')       # the recheck's own failure row is not older than this
    rr = subprocess.run(['python3', 'tools/5-generated/gen_equiv', '--recheck', fn], capture_output=True, text=True)
    out = rr.stdout + rr.stderr
    passed = '1 pass' in out
    if passed:
        # the recheck passes the function on its own; the file it was written into is checked as a whole too (a function that passed alone and
        # differs in its file is dropped by that check, and the shrink had logged it as shrunk and left it without C: sysVideoSelect, Virtua Tennis)
        ns, _ = where(fn)
        res = subprocess.run(['python3', 'tools/equiv.py', 'src/%s.c' % ns, fn], capture_output=True, text=True).stdout if ns else ''
        if not re.search(r'^%s\s+EQUIVALENT\b' % re.escape(fn), res, flags=re.M):
            lock = locked()
            try:
                if ns:
                    consistency.remove_def(ns, fn)
                    for tpn in glob.glob('tests/*/%s.json' % fn):
                        if tpn != tp:
                            os.remove(tpn)
                eq = [l for l in open('tests/equivalent.txt') if l.strip() != fn]
                open('tests/equivalent.txt', 'w').writelines(eq)
            finally:
                fcntl.flock(lock, fcntl.LOCK_UN)
            out += '\nthe written file differs: ' + ' '.join(res.split())[-200:]
            passed = False
    if passed:
        log.write('%s %s %s -> %s\n' % (fn, 'REGENERATED' if REGEN else 'SHRUNK', o_c, n_new)); log.flush()
        t = open('src/%s.c' % stem, errors='replace').read()
        if not re.search(r'^\{', t, flags=re.M) and not glob.glob('tests/%s/*.json' % stem):      # its last function moved out: an empty shell
            os.remove('src/%s.c' % stem)
            if os.path.isdir('tests/%s' % stem) and not os.listdir('tests/%s' % stem):
                os.rmdir('tests/%s' % stem)
        if fn in table:
            table[fn][2] = n_new
            json.dump(list(table.values()), open(sizes.OUT, 'w'))
        return True
    lock = locked()
    try:          # the old C and cases go back
        t = open('src/%s.c' % stem).read()
        open('src/%s.c' % stem, 'w').write(t.rstrip('\n') + '\n\n' + old + '\n')
        json.dump(cases, open(tp, 'w'), indent=1)
        keep.drop(fn)
        r = subprocess.run(['python3', 'tools/equiv.py', 'src/%s.c' % stem, fn], capture_output=True, text=True).stdout.strip()
    finally:
        fcntl.flock(lock, fcntl.LOCK_UN)
    fail = ledger.last_failure(fn, since)          # what the recheck found, from state/results.jsonl, and the new C that failed
    os.makedirs(os.path.join('build', 'shrink-failed'), exist_ok=True)
    open(os.path.join('build', 'shrink-failed', fn + '.c'), 'w').write(s)
    log.write('%s new C failed, old restored (%s): %s | new C: build/shrink-failed/%s.c | old C check: %s\n' % (
        fn, fail[0] if fail else 'no row', fail[1] if fail else ' / '.join(out.strip().splitlines()[-3:])[-300:], fn, r[-80:])); log.flush()
    return False


_DEFS = []


_SAFE = {}          # unit: the proven text to put back when a stop comes between writing new text and its proof


def _stop(sig, frame_):
    """SIGTERM or Ctrl-C: every unit holding text that is not proven yet gets its proven text back, then the run ends. Without it a
    stop between the write and the proof left unproven C in src/ that consistency.py does not flag (Zombie Revenge gen_bq.c)."""
    for f, t in _SAFE.items():
        open(f, 'w').write(t)
        print('stopped: %s put back to its proven text' % f, flush=True)
    os._exit(1)          # not sys.exit: sizes.unit_sizes catches SystemExit, so a signal that landed in a compile did not end the run


def narrow_pass(f, log):
    """--passes narrow on one unit: callees declared wider than their own definitions (rewrites.narrow_calls). A declaration is the
    whole unit's, so the unit is kept or put back as a whole: kept when it compiles smaller and every function whose text changed
    is proven."""
    import rewrites
    if not _DEFS:
        _DEFS.append(rewrites.definitions(open(p, errors='replace').read() for p in glob.glob('src/*.c')
                                          if not os.path.basename(p).startswith(('gen_tmp', 'zz_'))))
    text = open(f, errors='replace').read()
    new, names = rewrites.narrow_calls(text, _DEFS[0])
    log.write('%s narrow: %d callees\n' % (f, len(set(names)))); log.flush()
    if not names:
        return
    before, after = sizes.unit_sizes(f, text), sizes.unit_sizes(f, new)
    if isinstance(before, str) or isinstance(after, str):
        log.write('%s not measured (%s)\n' % (f, before if isinstance(before, str) else after)); log.flush()
        return
    if sum(after.values()) >= sum(before.values()):
        log.write('%s narrow not smaller (%d -> %d)\n' % (f, sum(before.values()), sum(after.values()))); log.flush()
        return
    changed = sorted(n for n in before if (lambda b0, b1: b0 and b1 and text[b0[0]:b0[1]] != new[b1[0]:b1[1]])(
        consistency.block(text, n), consistency.block(new, n)))
    lock = locked()
    try:
        _SAFE[f] = text
        open(f, 'w').write(new)
        out = subprocess.run(['python3', 'tools/equiv.py', f] + changed, capture_output=True, text=True).stdout
        ok = {n for n in changed if re.search(r'^%s\s+EQUIVALENT\b' % re.escape(n), out, re.M)}
        if ok != set(changed):
            open(f, 'w').write(text)
            subprocess.run(['python3', 'tools/equiv.py', f] + changed, capture_output=True, text=True)
    finally:
        _SAFE.pop(f, None)
        fcntl.flock(lock, fcntl.LOCK_UN)
    if ok != set(changed):
        log.write('%s narrow DIFFERS (%s), unit restored\n' % (f, ' '.join(sorted(set(changed) - ok)))); log.flush()
        return
    for n in changed:
        log.write('%s NARROW %d -> %d proven\n' % (n, before[n], after.get(n, 0))); log.flush()


_FSIZE = {}                          # --min-size: {function: compiled bytes} from build/sizes.json


def rewrite_pass(f, pas, log, manual):
    """One --passes strategy on one unit: the changed functions that compile smaller and are proven stay, the rest go back."""
    if pas == 'narrow':
        return narrow_pass(f, log)
    import frame
    import rewrites
    fn_ = {'selfcopy': rewrites.drop_self_copies, 'struct': rewrites.struct_access, 'globase': rewrites.global_base,
           'switch': rewrites.chains_to_switch, 'copies': rewrites.merge_copies, 'rebase': rewrites.frame_rebase, 'hoist': rewrites.hoist_builtins, 'deadframe': rewrites.drop_dead_frame,
           'frame': lambda c: frame.scalarize(c.rstrip('\n')) + '\n'}[pas]
    text = open(f, errors='replace').read()
    funcs = {}
    for m in re.finditer(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\n\{', text, re.M):
        b = consistency.block(text, m.group(1))
        if b and m.group(1) not in manual:
            funcs[m.group(1)] = text[b[0]:b[1]]
    if MIN_SIZE:
        funcs = {n: c for n, c in funcs.items() if _FSIZE.get(n, 0) >= MIN_SIZE}
    new = {n: fn_(c) for n, c in funcs.items()}
    new = {n: c for n, c in new.items() if c != funcs[n]}
    log.write('%s %s: %d functions changed\n' % (f, pas, len(new))); log.flush()
    if not new:
        return
    before = sizes.unit_sizes(f, text)
    after = sizes.unit_sizes(f, rewrites.splice(text, new))
    if isinstance(before, str) or isinstance(after, str):
        log.write('%s not measured (%s)\n' % (f, before if isinstance(before, str) else after)); log.flush()
        return
    keep_ = {n: c for n, c in new.items() if n in before and n in after and after[n] < before[n]}
    for n in sorted(set(new) - set(keep_)):
        log.write('%s %s not smaller (%s -> %s)\n' % (n, pas, before.get(n), after.get(n))); log.flush()
    if not keep_:
        return

    def proven(names):
        # under the lock: equiv.py rewrites tests/equivalent.txt and the proof cache by reading and writing them whole, so two
        # workers checking at once would drop each other's entries; the compiles before it run side by side
        lock = locked()
        try:
            out = subprocess.run(['python3', 'tools/equiv.py', f] + sorted(names), capture_output=True, text=True).stdout
        finally:
            fcntl.flock(lock, fcntl.LOCK_UN)
        return {n for n in names if re.search(r'^%s\s+EQUIVALENT\b' % re.escape(n), out, re.M)}

    def write(t):
        lock = locked()
        try:
            open(f, 'w').write(t)
        finally:
            fcntl.flock(lock, fcntl.LOCK_UN)
    _SAFE[f] = text
    write(rewrites.splice(text, keep_))
    ok = proven(keep_)
    if ok != set(keep_):
        back = set(keep_) - ok
        write(rewrites.splice(text, {n: keep_[n] for n in ok}))
        for n in sorted(back):
            log.write('%s %s DIFFERS, old C restored\n' % (n, pas)); log.flush()
        again = proven(set(funcs) & (ok | back))
        for n in sorted((ok | back) - again):
            log.write('%s NOT EQUIVALENT after the restore: check by hand\n' % n); log.flush()
        ok &= again
    _SAFE.pop(f, None)
    for n in sorted(ok):
        log.write('%s %s %d -> %d proven\n' % (n, pas.upper(), before[n], after[n])); log.flush()
    if ok and os.path.exists(sizes.OUT):
        lock = locked()           # the table as it is now (another worker may have written it), these sizes set in it
        try:
            rows = json.load(open(sizes.OUT))
            for r in rows:
                if r[0] in ok:
                    r[2] = after[r[0]]
            json.dump(rows, open(sizes.OUT, 'w'))
        finally:
            fcntl.flock(lock, fcntl.LOCK_UN)


def main():
    import signal
    signal.signal(signal.SIGTERM, _stop)
    signal.signal(signal.SIGINT, _stop)
    os.makedirs('build', exist_ok=True)
    log = stamp.Stamp(open(LOG, 'a'))               # each line ends with the wall-clock time
    if PASSES is not None:
        manual = consistency.manual_names()
        units = NAMES or sorted(f for f in glob.glob('src/gen_*.c') if not os.path.basename(f).startswith(('gen_tmp', 'zz_')))
        if MIN_SIZE:
            import rewrites
            _FSIZE.update((r[0], r[1]) for r in json.load(open(sizes.OUT)))
            units = rewrites.by_function_size({f: rewrites.function_names(open(f, errors='replace').read()) for f in units}, _FSIZE, MIN_SIZE)
            log.write('min-size %d: %d units\n' % (MIN_SIZE, len(units))); log.flush()
        for f in units:
            for pas in PASSES:
                rewrite_pass(f, pas, log, manual)
        log.write('done\n')
        return
    manual = consistency.manual_names()          # written by hand: never written again by a tool
    table = {r[0]: r for r in json.load(open(sizes.OUT))} if os.path.exists(sizes.OUT) else {}
    for fn in NAMES:
        stem, old = where(fn)
        if fn in manual:
            log.write('%s skip (manual: %s)\n' % (fn, manual[fn])); log.flush(); continue
        if not stem or not stem.startswith('gen_'):
            log.write('%s skip (not generated C)\n' % fn); log.flush(); continue
        head = old.split('(')[0]
        var = 'void' if head.startswith('void') else ('fr0' if head.startswith('float') else 'r0')
        try:
            vs = gen_pipe.variants(fn, False)
            if var not in vs:
                var = vs[-1]
        except Exception as e:
            log.write('%s build failed %s\n' % (fn, str(e)[:80])); log.flush(); continue
        best = None                         # the generator picks flat or structured by text length: compile each and keep the smaller
        cands = []                          # every form that compiled, smallest first: when the smallest does not pass, the next is tried
        all_protos = []                     # every form's prototypes: the current C is measured against the first that compiles it
        for form in (('',) if REGEN else ('', 'flat', 'structured')):      # a regeneration takes the generator's own choice
            if form:
                os.environ['GEN_FORM'] = form
            else:
                os.environ.pop('GEN_FORM', None)
            try:
                s_, c_ = gen_drv.build(fn, var, False)
            except Exception:
                continue
            all_protos.append(c_.protos)
            if best and s_ == best[0]:
                continue
            n_ = sizes.c_size(fn, s_, c_.protos)
            if n_ is not None:
                cands.append((n_, s_, c_))
            if n_ is not None and (best is None or n_ < best[2]):
                best = (s_, c_, n_)
        os.environ.pop('GEN_FORM', None)
        if best is None:
            log.write('%s build failed (no form compiles)\n' % fn); log.flush(); continue
        s, c, n_new = best
        o_c = sizes.c_size_any(fn, old, [c.protos] + [p for p in all_protos if p is not c.protos],
                               sizes.unit_head(open('src/%s.c' % stem, errors='replace').read()))      # the current C, measured the same way as the new
        if n_new is None or (not REGEN and (not o_c or n_new >= o_c or n_new > KEEP * o_c)):      # strictly smaller than the current C, measured the same way
            why = ('new C not measurable' if n_new is None else 'current C not measurable' if not o_c       # no size is not "not smaller"
                   else 'not smaller' if n_new >= o_c else 'smaller by under %d%%' % round(100 * (1 - KEEP)))
            log.write('%s %s (%s -> %s)\n' % (fn, why, o_c, n_new)); log.flush(); continue
        cands.sort(key=lambda x: x[0])
        tried = [x for x in cands if REGEN or (x[0] < o_c and x[0] <= KEEP * o_c)]
        for ci, (n_new, s, c) in enumerate(tried):
            if ci and any(s == t[1] for t in tried[:ci]):
                continue
            done_ = shrink_one(fn, stem, old, s, c, n_new, o_c, var, vs, log, table)
            if done_:
                break
    log.write('done\n')


if __name__ == '__main__':
    main()
