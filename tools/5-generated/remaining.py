#!/usr/bin/env python3
"""remaining.py: every function that is not done yet, by its current state and the cause it shares with others. Run in the repo.

    python3 tools/5-generated/remaining.py [--fresh] [--jobs N] [--batch N] [--limit S]

  --batch N   read N functions at a time and save the cache after each batch: a function that holds a worker costs its batch, not the pass
  --limit S   no function is read for more than S seconds (the default is max(120, size/3): two hours for a 21 KB function)

For each function that has no Equivalent C and is not SDK-verified, the first of these that applies:
  blocked     classify.py names an instruction no tool handles yet
  cannot read the generator (tools/5-generated/gen_equiv) stops reading it, with the reason it gives
  translated  the generator wrote C and the last run's report (build/gen_failed.txt) says what happened to it
  readable    the generator reads it and no report mentions it (not run yet, or run before the report existed)
The causes are grouped by what they have in common, with counts and bytes. The per-function listing goes to
state/remaining.md (not committed). What the generator says about a function is cached in state/remaining.cache.json, keyed by
the function's bytes and by the source of the tools that produce it, so any change to those tools reads everything again;
--fresh ignores the cache. The report says how much came from the cache. Proof is never cached: done is tests/equivalent.txt.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import collections
import hashlib
import json
import multiprocessing
import os
import re
import signal
import struct
import subprocess
import sys

here = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, here)
sys.path.insert(0, os.path.join(here, 'gen_equiv'))
import classify

try:
    import gen_core
except Exception:                      # a decomp without the generator: only the classifier part is available
    gen_core = None

FAMILIES = (
    ('Data inside functions, jump tables', ('.word', 'branch out', 'runs off')),
    ('Stack as locals, addresses of locals', ('stack', 'read r15', 'fpush', 'addr', 'caller frame', 'ex (')),
    ('Control flow the structurer cannot express', ('tail unknown', 'loop exits', 'flow', 'arg gap', 'too long')),
    ('Registers unreadable or unset after a merge', ('dirty', 'read r', 'no T', 'read fr')),
    ('Prototype conflicts between call sites', ('proto conflict',)),
    ('FPU matrix state', ('xf bank', 'xmtrx', 'ftrv', 'fipr')),
    ('Instructions the generator lacks', ('mac', 'xor.b', 'stc', 'ldc', 'sts', 'fcnvsd', 'clrmac', 'cmp/str', 'rotc')),
)


def tool_hash():
    """The source of the tools that produce a function's state: any change invalidates the cache."""
    h = hashlib.sha1()
    paths = [os.path.join(here, f) for f in ('classify.py', '../shdis.py', 'remaining.py')]
    gdir = os.path.join(here, 'gen_equiv')
    if os.path.isdir(gdir):
        paths += [os.path.join(gdir, f) for f in sorted(os.listdir(gdir)) if f.endswith('.py')]
    for p in paths:
        if os.path.exists(p):
            h.update(open(p, 'rb').read())
    return h.hexdigest()


LIMIT = None            # --limit S: no function is read for more than S seconds (default: max(120, size/3), two hours for a 21 KB function)


def alarm_seconds(size):
    """How long one function may be read: max(120, size/3) seconds, and no more than --limit when given."""
    t = max(120, size // 3)
    return min(LIMIT, t) if LIMIT else t


def read_batches(todo, jobs, batch, reader, on_batch):
    """Reads `todo` ([(name, size)]) `batch` functions at a time with up to `jobs` workers. `on_batch({name: state})` gets each batch's results
    before the next one starts (the caller saves them), so a function that holds a worker costs its batch, not the whole pass."""
    ctx = multiprocessing.get_context('fork')
    for i in range(0, len(todo), batch):
        chunk = todo[i:i + batch]
        with ctx.Pool(min(jobs, len(chunk))) as pool:
            done = dict(pool.imap_unordered(reader, chunk, chunksize=1))
        on_batch(done)


def read_one(task):
    name, size = task
    if gen_core is None:
        return name, 'readable'
    def stop(*_):
        raise TimeoutError()
    signal.signal(signal.SIGALRM, stop)
    signal.alarm(alarm_seconds(size))
    try:
        gen_core.run(name)
        return name, 'readable'
    except gen_core.Skip as e:
        return name, 'cannot read: ' + re.sub(r'\[.*', '', re.sub(r'[0-9a-f]{4,}', '', str(e))).strip()[:46]
    except TimeoutError:
        return name, 'cannot read: timeout'
    except Exception as e:
        return name, 'cannot read: error ' + type(e).__name__
    finally:
        signal.alarm(0)


STAGES = ('Not written C', 'Written C with errors', 'Not drawn', 'Drawn with errors', 'Checked with errors')


def stage(cause):
    """The first step a function has not passed, from its cause. A reason the generator gives for not reading it (its own words:
    "cannot read: arg gap", a classify block) is "Not written C": no C exists. Only C the generator wrote and could not finish
    ("readable, no result" has none yet either) is past that step. The fall-through used to be "Written C with errors", so every
    reader failure was counted there (Virtua Tennis 2026-10-24: 172 functions, none with C)."""
    if cause.startswith('translated, differs') or cause.endswith('does not compile'):
        return 'Checked with errors'
    if cause.startswith('translated, no cases'):
        return 'Drawn with errors'
    if cause.startswith('readable'):
        return 'Not drawn'
    if cause.startswith('translated'):
        return 'Written C with errors'
    return 'Not written C'


def main():
    fresh = '--fresh' in sys.argv
    table_only = '--table' in sys.argv            # print only the by-state table (for the README): reads nothing, writes nothing
    noread = '--no-read' in sys.argv or table_only            # report from what the steps already recorded: nothing is read here (a function with no read result is 'Not read')
    jobs = max(1, (os.cpu_count() or 2) - 2)
    batch = int(sys.argv[sys.argv.index('--batch') + 1]) if '--batch' in sys.argv else 0       # read this many functions at a time, saving after each batch
    if '--limit' in sys.argv:
        global LIMIT
        LIMIT = int(sys.argv[sys.argv.index('--limit') + 1])
    if '--jobs' in sys.argv:
        jobs = max(1, int(sys.argv[sys.argv.index('--jobs') + 1]))
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    equivalent = set(open('tests/equivalent.txt').read().split()) if os.path.exists('tests/equivalent.txt') else set()
    verified = set(l.strip() for l in open('sdk-verified.txt') if l.strip() and not l.startswith('#')) if os.path.exists('sdk-verified.txt') else set()
    verified |= set(l.split()[0] for l in open('sdk-identical.txt') if l.strip() and not l.startswith('#')) if os.path.exists('sdk-identical.txt') else set()
    units = [l.split() for l in subprocess.run([sys.executable, os.path.join(here, '..', '1-2-baseline', 'units.py'), '--units'],
                                               capture_output=True, text=True).stdout.splitlines() if l.strip()]
    in_c = lambda a: any(int(s, 16) <= a < int(e, 16) for _, s, e, *o in units)
    funcs = [(int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open('functions.txt') if l.startswith('F ')]
    undone = [(a, sz, n) for a, sz, n in funcs if not (in_c(a) or n in equivalent or n in verified)]
    sys.path.insert(0, here)
    import classify                                    # a function with no C form is done apart (progress.py counts it so): it is not part of what is left
    undone = [(a, sz, n) for a, sz, n in undone if not classify.no_c_form(exe, base, a, sz)]
    out = subprocess.run([sys.executable, os.path.join(here, 'classify.py')] + [n for _, _, n in undone],
                         capture_output=True, text=True).stdout.splitlines()
    cls = {}
    for l in out:
        p = l.split(None, 3)
        if len(p) >= 4:
            cls[p[2]] = p[3].strip()
    failed = {}
    for rep in sorted(__import__('glob').glob('build/gen_failed*.txt')):            # the reports of the last runs
        for l in open(rep):
            p = l.split(None, 1)
            if len(p) == 2:
                failed[p[0]] = p[1].strip()
    if os.path.exists('state/results.jsonl'):                                         # the ledger: the latest outcome of every function, kept across runs
        last = {}
        for l in open('state/results.jsonl'):
            try:
                r = json.loads(l)
            except ValueError:
                continue
            last[r['fn']] = r
        for n, r in last.items():
            if r['outcome'] not in ('EQUIVALENT', 'cannot read'):
                failed[n] = '%s %s' % (r['outcome'], r['detail'])
    # the generator's reading, cached by the function's bytes and the tools' source
    os.makedirs('state', exist_ok=True)
    cache_file = 'state/remaining.cache.json'
    th = tool_hash()
    cache = {}
    if not fresh and os.path.exists(cache_file):
        try:
            data = json.load(open(cache_file))
            if data.get('tools') == th:
                cache = data.get('read', {})
            else:                       # the tools changed: what was readable is kept (a change nearly always widens what reads; --fresh re-reads all), what was not is read again
                cache = {n: v for n, v in data.get('read', {}).items() if v[1] == 'readable' or noread}      # no-read mode shows the last known result even when it is from older tools
        except (ValueError, IOError):
            cache = {}
    key = lambda a, sz: hashlib.sha1(exe[a - base:a - base + sz]).hexdigest()
    todo = [(n, sz) for a, sz, n in undone if not cls.get(n, '').startswith('blocked')
            and cache.get(n, [None])[0] != key(a, sz)]
    if noread: todo = []
    if todo:
        import time
        t0 = time.time()
        os.makedirs('build', exist_ok=True)
        log = open('build/remaining.log', 'w')                 # progress of the reading, to follow with tail -f
        def note(msg):
            line = '[%5ds] %s' % (time.time() - t0, msg)
            log.write(line + '\n'); log.flush(); sys.stderr.write(line + '\n')
        note('reading %d functions with %d workers' % (len(todo), jobs))
        if batch:
            sizes = {x[2]: (x[0], x[1]) for x in undone}
            doneN = [0]
            def keep(done):                       # the batch's results go into the cache file before the next batch starts
                for name, state in done.items():
                    a, sz = sizes[name]
                    cache[name] = [key(a, sz), state]
                doneN[0] += len(done)
                json.dump({'tools': th, 'read': cache}, open(cache_file, 'w'))
                note('read %d of %d functions (%d with errors so far; saved)' % (doneN[0], len(todo), sum(1 for v in cache.values() if v[1] != 'readable')))
            read_batches(todo, jobs, batch, read_one, keep)
        else:
            ctx = multiprocessing.get_context('fork')
            with ctx.Pool(jobs) as pool:
                for k, (name, state) in enumerate(pool.imap_unordered(read_one, todo, chunksize=4), 1):
                    a, sz = [(x[0], x[1]) for x in undone if x[2] == name][0]
                    cache[name] = [key(a, sz), state]
                    if k % 10 == 0 or k == len(todo):
                        note('read %d of %d functions (%d with errors so far)' % (k, len(todo), sum(1 for v in cache.values() if v[1] != 'readable')))
        note('done')
        json.dump({'tools': th, 'read': cache}, open(cache_file, 'w'))
    rows = []
    for a, sz, n in undone:
        if cls.get(n, '').startswith('blocked'):
            cause = 'blocked: ' + cls[n][9:].split('(')[0].strip()
        else:
            state = cache.get(n, [None, 'not read' if noread else 'readable'])[1]
            if state != 'readable':
                cause = state
            else:
                f = failed.get(n, '')
                if 'DIFFERS' in f:
                    m = re.search(r'(\w+): original', f)
                    cause = 'translated, differs from the original (%s)' % (m.group(1) if m else '?')
                elif 'not drawn' in f:
                    cause = 'translated, no cases: ' + re.sub(r'^.*not drawn: ', '', f)[:46]
                elif 'did not compile' in f:
                    cause = 'translated, does not compile'
                else:
                    cause = 'readable, no result in the last report'
        rows.append((cause, n, sz))
    fam = collections.OrderedDict((name, collections.defaultdict(list)) for name, _ in FAMILIES)
    fam['Blocked by classify.py'] = collections.defaultdict(list)
    fam['Runtime helpers and tables'] = collections.defaultdict(list)
    fam['Translated: the check differs or gives no cases'] = collections.defaultdict(list)
    fam['Readable: no result recorded yet'] = collections.defaultdict(list)
    fam['Other'] = collections.defaultdict(list)
    for cause, n, sz in rows:
        if cause.startswith('runtime helper'):
            target = 'Runtime helpers and tables'
        elif cause.startswith('blocked'):
            target = 'Blocked by classify.py'
        elif cause.startswith('translated'):
            target = 'Translated: the check differs or gives no cases'
        elif cause.startswith('readable'):
            target = 'Readable: no result recorded yet'
        else:
            target = 'Other'
            for name, words in FAMILIES:
                if any(w in cause for w in words):
                    target = name
                    break
        fam[target][cause].append((n, sz))
    fromcache = sum(1 for n in cache if any(n == r[1] for r in rows))
    lines = ['# Remaining functions by state and shared cause', '', '%d functions are not done.' % len(rows), '']
    if not table_only:
        print('%d functions are not done (generator reading: %d kept from state/, %d read now; tools %s)'
              % (len(rows), fromcache - len(todo), len(todo), th[:8]))
    stages = collections.OrderedDict((k, [0, 0]) for k in STAGES)
    for cause, n, sz in rows:
        st = stage(cause)
        stages[st][0] += 1; stages[st][1] += sz
    print('Where the functions that are not done stand: %d functions, the first step each has not passed' % len(rows))
    print('%-52s %5s %9s' % ('State', 'Funcs', 'Bytes'))
    for st, (k, by) in stages.items():
        print('%-52s %5d %9d' % (st, k, by))
    if table_only:
        return
    print('')
    print('%-52s %5s %9s' % ('Family', 'Funcs', 'Bytes'))
    for name, causes in fam.items():
        k = sum(len(v) for v in causes.values())
        if not k:
            continue
        by = sum(sz for v in causes.values() for _, sz in v)
        print('%-52s %5d %9d' % (name, k, by))
        lines += ['## %s: %d functions, %d bytes' % (name, k, by), '']
        for cause, v in sorted(causes.items(), key=lambda kv: -len(kv[1])):
            lines.append('- %s (%d): %s' % (cause, len(v), ', '.join('%s %d' % (n, sz) for n, sz in sorted(v, key=lambda x: -x[1]))))
        lines.append('')
    open('state/remaining.md', 'w').write('\n'.join(lines))
    print('every function is listed in state/remaining.md')


if __name__ == '__main__':
    main()
