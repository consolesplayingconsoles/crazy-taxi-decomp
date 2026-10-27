"""keep.py: the work of every function that reached the check and did not pass, kept locally so a fix does not start over.

    python3 tools/5-generated/gen_equiv --recheck [--rebuild] [name ...]      (no names: every kept function)

A function that reaches the check either passes (its C goes to src/ and its cases to tests/) or it does not: it differs from the
original, or the C does not compile. Those used to be thrown away, so each fix to the tools meant reading, drawing and checking them
again, and the draw is the slow part. Now state/kept/<function>.json (local, git-ignored) holds the C, the cases, the outcome with
its first difference, and the versions of the tools that made them.

  --recheck            compile and check the stored C on the stored cases (seconds): after a fix to the check, the compiler flags
                       or a prototype
  --recheck --rebuild  write the C again with the current generator and check it on the stored cases (a fix to the C writer)

The cases are reused only while the draw is the version that made them; a function whose cases came from an older draw is listed
as needing a redraw (the draw had bugs that poisoned its cases before: pool words poked, call answers). A function that passes now
is written to a new src/gen_*.c like any generated one and leaves state/kept/.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob
import hashlib
import json
import os
import subprocess

HERE = os.path.dirname(os.path.abspath(__file__))
KEPT = 'state/kept'


def tool_versions():
    """A short hash of the source of the parts that make a result: the reader/writer (gen_core), the draw (gen_drv) and the check."""
    out = {}
    for key, rel in (('core', 'gen_core.py'), ('draw', 'gen_drv.py'), ('check', '../../equiv.py'), ('sim', '../../sh4sim.py')):
        out[key] = hashlib.sha1(open(os.path.join(HERE, rel), 'rb').read()).hexdigest()[:10]
    return out


def save(item, outcome, detail, run, variant=0, passthru=False):
    """item: (name, C, cases, protos, stats) as the pipeline holds it after the draw."""
    name, src, cases, protos, stats = (list(item) + [None])[:5]
    os.makedirs(KEPT, exist_ok=True)
    rec = {'function': name, 'c': src, 'cases': cases, 'protos': {k: list(v) for k, v in protos.items()}, 'stats': stats,
           'outcome': outcome, 'detail': detail, 'run': run, 'variant': variant, 'passthru': passthru, 'tools': tool_versions()}
    json.dump(rec, open('%s/%s.json' % (KEPT, name), 'w'))


def drop(name):
    p = '%s/%s.json' % (KEPT, name)
    if os.path.exists(p):
        os.remove(p)


def load(name):
    rec = json.load(open('%s/%s.json' % (KEPT, name)))
    rec['protos'] = {k: tuple(v) for k, v in rec['protos'].items()}
    return rec


def names():
    return sorted(os.path.basename(p)[:-5] for p in glob.glob(KEPT + '/*.json'))


def recheck(wanted, rebuild, run, write_batch, note, ledger, lock, unlock, restore_evidence):
    import gen_core
    import gen_drv
    import gen_pipe
    have = tool_versions()
    import consistency
    manual = consistency.manual_names()          # written by hand: never written again by a tool
    for n in sorted(set(names()) & set(manual)):
        note('  manual, left alone: %s (%s)' % (n, manual[n]))
    todo = [n for n in names() if (not wanted or n in wanted) and n not in manual]
    items, stale, kept_rec = [], [], {}
    for n in todo:
        if not os.path.exists('%s/%s.json' % (KEPT, n)):
            continue                                         # proved by another run since the list was made
        rec = load(n)
        if rec['tools']['draw'] != have['draw']:
            stale.append(n)                                  # its cases came from an older draw
            continue
        src, protos = rec['c'], rec['protos']
        if rebuild:
            try:
                vs = gen_pipe.variants(n, rec.get('passthru', False))
                src, c = gen_drv.build(n, vs[rec.get('variant', 0)], rec.get('passthru', False))
                protos = c.protos
            except Exception as e:
                note('%s: cannot be written again: %s %s' % (n, type(e).__name__, str(e)))
                continue
        items.append((n, src, rec['cases'], protos, rec.get('stats')))
        kept_rec[n] = rec
    note('%d kept functions: %d to check, %d need a redraw (cases from an older draw)' % (len(todo), len(items), len(stale)))
    for n in stale:
        note('  redraw needed: %s' % n)
    if not items:
        return
    lock()
    try:
        getattr(restore_evidence, 'snapshot', lambda: None)()      # the evidence files as they are now, to put back after the check
        proved = set(open('tests/equivalent.txt').read().split()) if os.path.exists('tests/equivalent.txt') else set()
        for it in [i for i in items if i[0] in proved]:          # another run proved it since the list was made
            items.remove(it)
            drop(it[0])
        if not items:
            return
        passed, failed, deferred, dropped, err = gen_pipe.run_file_robust('gen_tmpK', items)
    finally:
        restore_evidence()
        for f in glob.glob('src/gen_tmp*.c'):
            os.remove(f)
        subprocess.run(['rm', '-rf'] + glob.glob('tests/gen_tmp*'))
        unlock()
    keep = [it for it in items if it[0] in passed]
    for it in keep:
        ledger.record(run, it[0], 'EQUIVALENT', 'rechecked from state/kept')
        drop(it[0])
    out = gen_pipe.LAST.get('out', '')
    for it in items:
        n = it[0]
        if n in failed:
            line = next((l for l in out.splitlines() if l.split()[:1] == [n]), '')
            detail = ' '.join(line.split()[2:])
            ledger.record(run, n, 'DIFFERS', detail)
            save(it, 'DIFFERS', detail, run, kept_rec[n].get('variant', 0), kept_rec[n].get('passthru', False))
        elif n in dropped:
            detail = gen_pipe.LAST.get('why', {}).get(n, '')
            ledger.record(run, n, 'did not compile', detail)
            save(it, 'did not compile', detail, run, kept_rec[n].get('variant', 0), kept_rec[n].get('passthru', False))
    if keep:
        lock()
        try:
            write_batch(keep)
        finally:
            unlock()
    note('rechecked %d: %d pass, %d differ, %d do not compile' % (len(items), len(passed), len(failed), len(dropped)))
