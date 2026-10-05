#!/usr/bin/env python3
"""progress.py: the decomp's state, in several measures. Run from the repo root after setup.sh.

  matching C   bytes, functions and units rebuilt from src/*.c (tbg-decomp's progress bar measure)
  named        functions with a real name (functions.txt), globals with a name (globals.txt)
  documented   functions that a docs/*.md file mentions by name
Game code and SDK code (sdk.txt: Katana libraries, compiler runtime, boot block) are reported apart:
the SDK is Sega's library, named by signature and never decompiled here.
"""
import os, re, subprocess, sys

here = os.path.dirname(os.path.abspath(__file__))
units = [l.split() for l in subprocess.run([sys.executable, os.path.join(here, 'units.py'), '--units'],
                                           capture_output=True, text=True).stdout.splitlines() if l.strip()]
funcs = [(int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open('functions.txt')]
total = os.path.getsize('1ST_READ.BIN')
nf = len(funcs)

ranges, sdk_funcs = [], set()
if os.path.exists('sdk.txt'):
    for l in open('sdk.txt'):
        p = l.split()
        if p and p[0] == 'range': ranges.append((int(p[1], 16), int(p[2], 16)))
        if p and p[0] == 'func': sdk_funcs.add(int(p[1], 16))
def is_sdk(a):
    return a in sdk_funcs or any(s <= a < e for s, e in ranges)

def in_c(a):
    return any(int(s, 16) <= a < int(e, 16) for _, s, e, *o in units)

def stats(sel):
    fs = [x for x in funcs if sel(x[0])]
    code = sum(sz for a, sz, n in fs)
    cb = sum(sz for a, sz, n in fs if in_c(a))
    cf = sum(1 for a, sz, n in fs if in_c(a))
    nm = [x for x in fs if not x[2].startswith('FUN_')]
    nb = sum(sz for a, sz, n in nm)
    dc = sum(1 for a, sz, n in nm if n in words)
    return len(fs), code, cb, cf, len(nm), nb, dc

globals_named = sum(1 for l in open('globals.txt') if l.strip() and not l.startswith('#')) if os.path.exists('globals.txt') else 0
import glob
doc = ''.join(open(p, errors='replace').read() for p in glob.glob('docs/*.md'))
words = set(re.findall(r'[A-Za-z_][A-Za-z0-9_]*', doc))

def pct(a, b):
    return '%5.1f%%' % (100.0 * a / b) if b else '  -  '

g = stats(lambda a: not is_sdk(a))
k = stats(is_sdk)
rows = [
    ('GAME CODE', '', '%d functions, %d bytes of code' % (g[0], g[1])),
    ('  matching C, bytes', pct(g[2], g[1]), '%d bytes, %d units' % (g[2], len(units))),
    ('  matching C, functions', pct(g[3], g[0]), '%d of %d' % (g[3], g[0])),
    ('  named functions', pct(g[4], g[0]), '%d of %d' % (g[4], g[0])),
    ('  named code, bytes', pct(g[5], g[1]), 'code in named functions'),
    ('  documented functions', pct(g[6], g[0]), '%d in docs/*.md' % g[6]),
    ('  named globals', '', '%d' % globals_named),
    ('SDK (Sega libraries)', '', '%d functions, %d bytes of code' % (k[0], k[1])),
    ('  named functions', pct(k[4], k[0]), '%d of %d (signatures)' % (k[4], k[0])),
]
w = max(len(r[0]) for r in rows)
for name, p, detail in rows:
    print('%-*s  %7s  %s' % (w, name, p, detail))
