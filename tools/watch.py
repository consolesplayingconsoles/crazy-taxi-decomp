#!/usr/bin/env python3
"""watch.py: one line of progress with an estimate per running generator run, every few minutes, and a result line when all are done.

    python3 tools/watch.py [--every SECONDS] [--once] run1 run2 ...      (run names as given to gen_equiv --run; none = the plain run)

Meant to run under a monitor, so whoever started the jobs is woken at every line. The estimate is rough: the drawing phase from its
own rate so far, the checking phase from a fixed cost per function (CHECK_S). A line starting DONE ends the watch.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '.')))
import toolpath  # noqa: E402,F401
import json
import os
import re
import sys
import time

CHECK_S = 6          # seconds per function for the compile-and-check phase (measured on the larger groups of this project)


def snapshot(run):
    log = 'build/gen_run%s.log' % ('' if run == 'run' else '-' + run)
    if not os.path.exists(log):
        return {'run': run, 'state': 'no log yet'}
    lines = [l.rstrip() for l in open(log, errors='replace') if l.strip()]
    text = '\n'.join(lines)
    if re.search(r'^total \d+', text, flags=re.M):
        return {'run': run, 'state': 'done', 'last': lines[-1]}
    last_t = 0
    for l in lines:
        m = re.match(r'\[\s*(\d+)s\]', l)
        if m:
            last_t = int(m.group(1))
    age = time.time() - os.path.getmtime(log)
    n_read = re.findall(r'reading (\d+) functions', text)
    draw = re.findall(r'round \d+: drawing cases for (\d+) functions', text)
    drawn = re.findall(r'cases drawn for (\d+) of (\d+)', text)
    dirs = re.findall(r'directed: (\d+) of (\d+) functions', text)
    if dirs:
        k, n = int(dirs[-1][0]), int(dirs[-1][1])
        if k == 0:
            return {'run': run, 'state': 'directed cases: starting, %d functions' % n, 'eta': None}
        return {'run': run, 'state': 'directed cases %d of %d functions' % (k, n), 'eta': max(30, (last_t / k) * (n - k) + (time.time() - os.path.getmtime(log)) * 0)}
    check = re.findall(r'compiling and checking (\d+) functions', text)
    if check:
        m = int(check[-1])
        t_check = None
        for l in lines:
            if 'compiling and checking' in l:
                t_check = int(re.match(r'\[\s*(\d+)s\]', l).group(1))
        used = max(0, last_t - (t_check or last_t)) + age
        left = max(30, m * CHECK_S - used)
        return {'run': run, 'state': 'checking %s functions' % m, 'eta': left}
    if draw:
        n = int(draw[-1])
        t_draw = 0
        for l in lines:
            if 'drawing cases for' in l:
                t_draw = int(re.match(r'\[\s*(\d+)s\]', l).group(1))
        if drawn:
            k = int(drawn[-1][0])
            el = max(1, last_t - t_draw)
            left = el * (n - k) / max(1, k) + 0.8 * n * CHECK_S
            return {'run': run, 'state': 'drawing cases %d of %d' % (k, n), 'eta': left}
        return {'run': run, 'state': 'drawing cases for %s functions (no count yet)' % n, 'eta': None}
    if n_read:
        return {'run': run, 'state': 'reading %s functions' % n_read[-1], 'eta': None}
    return {'run': run, 'state': 'starting', 'eta': None}


def fmt(s):
    eta = s.get('eta')
    return '%s: %s%s' % (s['run'], s['state'], '' if eta is None else ', about %d min left' % max(1, round(eta / 60)))


def result(runs):
    rows = []
    if os.path.exists('state/results.jsonl'):
        for l in open('state/results.jsonl'):
            try:
                r = json.loads(l)
            except ValueError:
                continue
            if r['run'] in runs:
                rows.append(r)
    c = {}
    for r in rows:
        c[r['outcome']] = c.get(r['outcome'], 0) + 1
    return ', '.join('%d %s' % (v, k) for k, v in sorted(c.items(), key=lambda kv: -kv[1])) or 'no outcomes recorded'


def main():
    args = sys.argv[1:]
    every = 300
    once = '--once' in args
    if '--every' in args:
        every = int(args[args.index('--every') + 1])
    runs = [a for i, a in enumerate(args) if not a.startswith('--') and not (i and args[i - 1] == '--every')] or ['run']
    while True:
        snaps = [snapshot(r) for r in runs]
        if all(s['state'] == 'done' for s in snaps):
            print('DONE %s | %s' % (time.strftime('%H:%M'), result(set(runs))), flush=True)
            return
        eta = [s['eta'] for s in snaps if s.get('eta') is not None]
        print('%s | %s%s' % (time.strftime('%H:%M'), '; '.join(fmt(s) for s in snaps if s['state'] != 'done'),
                             (' | all done about %s' % time.strftime('%H:%M', time.localtime(time.time() + max(eta)))) if eta else ''), flush=True)
        if once:
            return
        time.sleep(every)


if __name__ == '__main__':
    main()
