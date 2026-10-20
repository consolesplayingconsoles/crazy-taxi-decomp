#!/usr/bin/env python3
"""status.py: what is running in this repo right now, and where to follow it. Run in the repo.

    python3 tools/status.py

Lists the long jobs the tools start (the generator, the equivalence check, the build, the remaining report), how long each has
been running, and the last line of its log. The logs are plain files: follow one with `tail -f <file>`.
"""
import os
import re
import subprocess
import sys
import time

JOBS = (
    ('generator run', r'tools/gen_equiv\b|gen_equiv/__main__', 'build/gen_run.log', 'python3 tools/gen_equiv [names]'),
    ('generator report', None, 'build/gen_failed.txt', 'why each function of the last run failed'),
    ('equivalence check', r'tools/equiv\.py', 'build/equiv/shc.log', 'python3 tools/equiv.py src/<file>.c'),
    ('build', r'build\.sh', None, 'bash build.sh (never two at once: they share build/)'),
    ('remaining report', r'tools/remaining\.py', 'state/remaining.md', 'python3 tools/remaining.py'),
    ('return-value recheck', r'fixret', 'state/fixret.log', 'one-off'),
)


def running():
    out = subprocess.run(['ps', '-eo', 'pid,etime,command'], capture_output=True, text=True).stdout.splitlines()[1:]
    return [(int(l.split(None, 2)[0]), l.split(None, 2)[1], l.split(None, 2)[2]) for l in out if len(l.split(None, 2)) == 3]


def last_line(path):
    try:
        lines = [l for l in open(path, errors='replace').read().splitlines() if l.strip()]
        return lines[-1][:110] if lines else '(empty)'
    except IOError:
        return '(no log yet)'


def age(path):
    try:
        s = int(time.time() - os.path.getmtime(path))
        return '%dm%02ds ago' % (s // 60, s % 60) if s >= 60 else '%ds ago' % s
    except OSError:
        return '-'


def runs(procs):
    """One row per generator log (build/gen_run.log and build/gen_run-<name>.log): running when a gen_equiv process has that name."""
    import glob
    out = []
    for log in sorted(glob.glob('build/gen_run*.log')):
        name = log[len('build/gen_run'):-4].lstrip('-') or 'run'
        live = [p for p in procs if re.search(r'gen_equiv', p[2]) and 'status.py' not in p[2]
                and ((('--run ' + name) in p[2]) if name != 'run' else ('--run' not in p[2]))]
        est = ''
        if live:
            try:
                import watch
                sn = watch.snapshot(name)
                est = watch.fmt(sn).split(': ', 1)[1] + '  | '
            except Exception:
                est = ''
        out.append(('generator ' + name, 'RUNNING' if live else '-', live[0][1] if live else '', est + last_line(log) + '  [' + log + ', ' + age(log) + ']'))
    return out


def main():
    procs = running()
    print('%-22s %-9s %-12s %s' % ('Job', 'State', 'Running', 'Last line of its log'))
    for r in runs(procs):
        print('%-22s %-9s %-12s %s' % r)
    for name, pattern, log, how in JOBS:
        if name == 'generator run':
            continue
        hit = [p for p in procs if pattern and re.search(pattern, p[2]) and 'status.py' not in p[2]]
        state = 'RUNNING' if hit else ('-' if pattern else 'file')
        et = hit[0][1] if hit else ''
        print('%-22s %-9s %-12s %s' % (name, state, et, (last_line(log) + '  [' + log + ', ' + age(log) + ']') if log else how))
    print('\nFollow a log with: tail -f <file>   (a named generator run, --run NAME, writes build/gen_run-NAME.log; every outcome of every run is kept in state/results.jsonl)')


if __name__ == '__main__':
    main()
