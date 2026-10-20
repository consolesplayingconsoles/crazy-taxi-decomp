"""ledger.py: nothing the tools learn about a function is thrown away. Stdlib only; everything goes under state/ (git-ignored).

    record(run, fn, outcome, detail)   one line in state/results.jsonl for every outcome of every run (append only)
    archive_cases(fn, cases, why)      the case set of a function that is about to be replaced or removed, kept once per distinct content
                                       in state/cases-history/<function>/<time>-<why>.json
    rotate(path, label)                a report the next run would overwrite, kept in state/reports/<time>-<label>-<name>
    keep_text(name, text)              text that would be dropped (evidence of a function that fails again), appended to state/<name>
"""
import hashlib
import json
import os
import shutil
import time


def _now():
    return time.strftime('%Y%m%d-%H%M%S')


def record(run, fn, outcome, detail=''):
    try:
        os.makedirs('state', exist_ok=True)
        with open('state/results.jsonl', 'a') as fh:
            fh.write(json.dumps({'t': time.strftime('%Y-%m-%dT%H:%M:%S'), 'run': run, 'fn': fn, 'outcome': outcome, 'detail': str(detail)[:400]}) + '\n')
    except OSError:
        pass


def archive_cases(fn, cases, why):
    """cases: a path to a case file, or its data. Kept when this exact content is not already archived for the function."""
    try:
        if isinstance(cases, str):
            if not os.path.exists(cases):
                return
            data = open(cases).read()
        else:
            data = json.dumps(cases, indent=1)
        d = os.path.join('state', 'cases-history', fn)
        os.makedirs(d, exist_ok=True)
        h = hashlib.sha1(data.encode()).hexdigest()[:10]
        if any(f.endswith('-' + h + '.json') for f in os.listdir(d)):
            return
        open(os.path.join(d, '%s-%s-%s.json' % (_now(), why, h)), 'w').write(data)
    except OSError:
        pass


def rotate(path, label):
    try:
        if os.path.exists(path) and os.path.getsize(path):
            os.makedirs('state/reports', exist_ok=True)
            shutil.copy2(path, os.path.join('state', 'reports', '%s-%s-%s' % (time.strftime('%Y%m%d-%H%M%S', time.localtime(os.path.getmtime(path))), label, os.path.basename(path))))
    except OSError:
        pass


def keep_text(name, text):
    try:
        os.makedirs('state', exist_ok=True)
        with open(os.path.join('state', name), 'a') as fh:
            fh.write(text if text.endswith('\n') else text + '\n')
    except OSError:
        pass
