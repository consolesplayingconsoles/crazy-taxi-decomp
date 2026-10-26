"""gen_equiv --regen <name> ...: step 5 writes functions again whose generated C already exists, for when the generator was fixed.

Step 5 only looks at functions no C covers, so the named functions' generated C is taken out first (with its cases and its
tests/equivalent.txt line, kept in state/regen/ until the run ends), and the run picks them like any function with no C. A function
the run proves gets the new C in a new src/gen_<letter>.c; any other gets its old C, cases and line back, also when the run is stopped.
Hand-written C, and C marked manual, is never taken out."""
import json
import os
import re
import shutil

import consistency

BACKUP = 'state/regen'


def _eq():
    return open('tests/equivalent.txt').read().split() if os.path.exists('tests/equivalent.txt') else []


def _write_eq(names):
    open('tests/equivalent.txt', 'w').write(''.join(n + '\n' for n in names))


def take_out(names):
    """([record, ...], {name: why skipped}); a record holds what put_back needs"""
    manual = consistency.manual_names()
    files = sorted(f for f in os.listdir('src') if f.endswith('.c')) if os.path.isdir('src') else []
    texts = {f: open(os.path.join('src', f), errors='replace').read() for f in files}
    recs, skipped = [], {}
    eq = _eq()
    os.makedirs(BACKUP, exist_ok=True)
    for fn in names:
        stem = next((f[:-2] for f in files if consistency.block(texts[f], fn)), None)
        if stem is None:
            skipped[fn] = 'no C'; continue
        if not stem.startswith('gen_') or stem.startswith('gen_tmp'):
            skipped[fn] = 'hand-written C (src/%s.c)' % stem; continue
        if fn in manual:
            skipped[fn] = 'manual: %s' % manual[fn]; continue
        code = consistency.remove_def(stem, fn)
        texts[stem + '.c'] = open('src/%s.c' % stem, errors='replace').read()
        tp = 'tests/%s/%s.json' % (stem, fn)
        cases = json.load(open(tp)) if os.path.exists(tp) else None
        rec = {'fn': fn, 'stem': stem, 'code': code, 'cases': cases, 'eq': fn in eq}
        json.dump(rec, open(os.path.join(BACKUP, fn + '.json'), 'w'))
        if cases is not None:
            os.remove(tp)
        recs.append(rec)
    _write_eq([n for n in eq if n not in {r['fn'] for r in recs}])
    return recs, skipped


def put_back(recs, proved):
    """the old C, cases and equivalent.txt line of every function not proved; an old file left with no function goes"""
    eq = _eq()
    for r in recs:
        bk = os.path.join(BACKUP, r['fn'] + '.json')
        if not os.path.exists(bk):
            continue                        # already handled (the run's end, then its exit)
        path = 'src/%s.c' % r['stem']
        tdir = 'tests/%s' % r['stem']
        if r['fn'] in proved:
            if os.path.exists(path) and not re.search(r'^\{', open(path, errors='replace').read(), flags=re.M) and \
                    not (os.path.isdir(tdir) and os.listdir(tdir)):
                os.remove(path)
                if os.path.isdir(tdir):
                    shutil.rmtree(tdir)
        else:
            t = open(path).read() if os.path.exists(path) else ''
            if not consistency.block(t, r['fn']):
                open(path, 'w').write(t.rstrip('\n') + '\n\n' + r['code'] + '\n')
            if r['cases'] is not None:
                os.makedirs(tdir, exist_ok=True)
                json.dump(r['cases'], open('%s/%s.json' % (tdir, r['fn']), 'w'), indent=1)
            if r['eq'] and r['fn'] not in eq:
                eq.append(r['fn'])
        os.remove(bk)
    _write_eq(eq)
