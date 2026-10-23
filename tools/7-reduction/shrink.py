#!/usr/bin/env python3
"""Write proven functions again with the current generator and keep the new C only when it is smaller and still proven.
Run in the repo.

    python3 tools/7-reduction/shrink.py [--keep 0.95] <name> ...

For each name: the generator writes the function again; when the new C compiles to under KEEP times the size in
build/sizes.json (tools/sizes.py), it replaces the old C and is checked on the function's existing cases
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
KEEP = 0.95
if '--keep' in args:
    k = args.index('--keep')
    KEEP = float(args[k + 1])
    del args[k:k + 2]
NAMES = args
import consistency   # noqa: E402
import gen_drv       # noqa: E402
import gen_pipe      # noqa: E402
import keep          # noqa: E402
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


def main():
    os.makedirs('build', exist_ok=True)
    log = open(LOG, 'a')
    table = {r[0]: r for r in json.load(open(sizes.OUT))} if os.path.exists(sizes.OUT) else {}
    for fn in NAMES:
        stem, old = where(fn)
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
        for form in ('', 'flat', 'structured'):
            if form:
                os.environ['GEN_FORM'] = form
            else:
                os.environ.pop('GEN_FORM', None)
            try:
                s_, c_ = gen_drv.build(fn, var, False)
            except Exception:
                continue
            if best and s_ == best[0]:
                continue
            n_ = sizes.c_size(fn, s_, c_.protos)
            if n_ is not None and (best is None or n_ < best[2]):
                best = (s_, c_, n_)
        os.environ.pop('GEN_FORM', None)
        if best is None:
            log.write('%s build failed (no form compiles)\n' % fn); log.flush(); continue
        s, c, n_new = best
        o_c = table[fn][2] if fn in table else None
        if n_new is None or (o_c and n_new > KEEP * o_c):
            why = 'not smaller' if (n_new is None or not o_c or n_new >= o_c) else 'smaller by under %d%%' % round(100 * (1 - KEEP))
            log.write('%s %s (%s -> %s)\n' % (fn, why, o_c, n_new)); log.flush(); continue
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
        rr = subprocess.run(['python3', 'tools/5-generated/gen_equiv', '--recheck', fn], capture_output=True, text=True)
        out = rr.stdout + rr.stderr
        if '1 pass' in out:
            log.write('%s SHRUNK %s -> %s\n' % (fn, o_c, n_new)); log.flush()
            t = open('src/%s.c' % stem, errors='replace').read()
            if not re.search(r'^\{', t, flags=re.M) and not glob.glob('tests/%s/*.json' % stem):      # its last function moved out: an empty shell
                os.remove('src/%s.c' % stem)
                if os.path.isdir('tests/%s' % stem):
                    os.rmdir('tests/%s' % stem)
            if fn in table:
                table[fn][2] = n_new
                json.dump(list(table.values()), open(sizes.OUT, 'w'))
            continue
        lock = locked()
        try:          # the old C and cases go back
            t = open('src/%s.c' % stem).read()
            open('src/%s.c' % stem, 'w').write(t.rstrip('\n') + '\n\n' + old + '\n')
            json.dump(cases, open(tp, 'w'), indent=1)
            keep.drop(fn)
            r = subprocess.run(['python3', 'tools/equiv.py', 'src/%s.c' % stem, fn], capture_output=True, text=True).stdout.strip()
        finally:
            fcntl.flock(lock, fcntl.LOCK_UN)
        log.write('%s new C differs, old restored: %s | recheck said: %s\n' % (fn, r[-80:], ' / '.join(out.strip().splitlines()[-3:])[-300:])); log.flush()
    log.write('done\n')


if __name__ == '__main__':
    main()
