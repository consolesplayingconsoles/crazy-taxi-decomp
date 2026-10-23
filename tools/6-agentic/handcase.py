#!/usr/bin/env python3
"""Prove a function on cases written by hand, with the C the generator writes. Run in the repo.

    python3 tools/6-agentic/handcase.py <function> <cases.json>

For a function whose random draw never finishes (a loop over a linked list finds a cycle in the random memory: a list freed node by
node, a search that waits for a flag), a few hand-made cases show it: memory words set with "poke", registers with "regs", answers of
calls with "calls". <cases.json>: {"dev": [case, ...], "holdout": [case, ...]} or a plain list (all development), each case
{"about": "...", "poke": {"0C26EBCC": "<hex bytes, little endian>"}, "regs": {"r4": "<hex>"}}. The generator writes the function's C for
each return variant in turn; the first variant tools/equiv.py calls Equivalent stays: the C goes to a new src/gen_*.c and the cases
to tests/gen_*/<function>.json, with the usual evidence. Nothing is kept when none passes.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import itertools
import json
import os
import shutil
import string
import subprocess
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), 'gen_equiv'))
import gen_drv
import gen_pipe


def free_name():
    for k in range(1, 4):
        for t in itertools.product(string.ascii_lowercase, repeat=k):
            n = 'gen_' + ''.join(t)
            if not os.path.exists('src/%s.c' % n) and not os.path.exists('tests/%s' % n):
                return n


def main(argv):
    if len(argv) < 3:
        sys.exit(__doc__)
    fn = argv[1]
    cases = json.load(open(argv[2]))
    if isinstance(cases, list):
        cases = {'dev': cases}
    for variant in gen_pipe.variants(fn, False):
        try:
            src, c = gen_drv.build(fn, variant, False)
        except Exception as e:
            print('%s: cannot be written as %s: %s %s' % (fn, variant, type(e).__name__, str(e)[:80]))
            continue
        stem = free_name()
        open('src/%s.c' % stem, 'w').write('/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */\n\n' +
                                           gen_drv.head_protos([(fn, src, None, c.protos)]) + '\n\n' + src)
        os.makedirs('tests/%s' % stem)
        json.dump(cases, open('tests/%s/%s.json' % (stem, fn), 'w'), indent=1)
        r = subprocess.run(['python3', 'tools/equiv.py', 'src/%s.c' % stem, fn], capture_output=True, text=True)
        line = (r.stdout + r.stderr).strip().splitlines()[-1] if (r.stdout + r.stderr).strip() else ''
        print('%s as %s: %s' % (fn, variant, line[:200]))
        if ' EQUIVALENT' in line:
            print('kept in src/%s.c' % stem)
            return
        os.remove('src/%s.c' % stem)
        shutil.rmtree('tests/%s' % stem)
    print('%s: no variant passed; nothing kept' % fn)


if __name__ == '__main__':
    main(sys.argv)
