#!/usr/bin/env python3
"""progress.py: the decomp's state, in several measures. Run from the repo root after setup.sh.

  Buckets, each game function in one: done (equivalent C: behaves like the original, by
  tools/equiv.py into tests/equivalent.txt; matching C, rebuilt byte for byte, is part of it),
  named only (a label, not done work), unnamed. A name never counts as done.
  named        functions with a real name (functions.txt), globals with a name (globals.txt)
  documented   functions that a docs/*.md file mentions by name
Game code and SDK code (sdk.txt: Katana libraries, compiler runtime, boot block) are reported apart:
the SDK is Sega's library, named by signature and never decompiled here.
"""
import os, re, subprocess, sys

here = os.path.dirname(os.path.abspath(__file__))
units = [l.split() for l in subprocess.run([sys.executable, os.path.join(here, 'units.py'), '--units'],
                                           capture_output=True, text=True).stdout.splitlines() if l.strip()]
funcs = [(int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open('functions.txt') if l.startswith('F ')]
total = os.path.getsize('1ST_READ.BIN')
nf = len(funcs)

ranges, sdk_funcs = [], set()
if os.path.exists('sdk.txt'):
    for l in open('sdk.txt'):
        p = l.split()
        if p and p[0] == 'range': ranges.append((int(p[1], 16), int(p[2], 16)))
        if p and p[0] == 'func': sdk_funcs.add(int(p[1], 16))
def in_c(a):
    return any(int(s, 16) <= a < int(e, 16) for _, s, e, *o in units)

equivalent = set(open('tests/equivalent.txt').read().split()) if os.path.exists('tests/equivalent.txt') else set()
name_at = {a: n for a, sz, n in funcs}

def is_sdk(a):
    # a function we have done counts as game code wherever it sits, library ranges included
    if in_c(a) or name_at.get(a) in equivalent:
        return False
    return a in sdk_funcs or any(s <= a < e for s, e in ranges)

def stats(sel):
    fs = [x for x in funcs if sel(x[0])]
    code = sum(sz for a, sz, n in fs)
    cb = sum(sz for a, sz, n in fs if in_c(a))
    cf = sum(1 for a, sz, n in fs if in_c(a))
    nm = [x for x in fs if not x[2].startswith('FUN_')]
    nb = sum(sz for a, sz, n in nm)
    dc = sum(1 for a, sz, n in nm if n in words)
    eq = [x for x in fs if in_c(x[0]) or x[2] in equivalent]
    return len(fs), code, cb, cf, len(nm), nb, dc, len(eq), sum(sz for a, sz, n in eq)

globals_named = sum(1 for l in open('globals.txt') if l.strip() and not l.startswith('#')) if os.path.exists('globals.txt') else 0
import glob
doc = ''.join(open(p, errors='replace').read() for p in glob.glob('docs/*.md'))
words = set(re.findall(r'[A-Za-z_][A-Za-z0-9_]*', doc))

def pct(a, b):
    return '%5.1f%%' % (100.0 * a / b) if b else '  -  '

g = stats(lambda a: not is_sdk(a))
k = stats(is_sdk)
game = [x for x in funcs if not is_sdk(x[0])]
is_done = lambda x: in_c(x[0]) or x[2] in equivalent
named_only = sum(1 for x in game if not is_done(x) and not x[2].startswith('FUN_'))
unnamed = sum(1 for x in game if not is_done(x) and x[2].startswith('FUN_'))
rows = [
    ('GAME CODE', '', '%d functions, %d bytes of code; each function in one bucket' % (g[0], g[1])),
    ('  done: equivalent C', pct(g[7], g[0]), '%d of %d functions, %d bytes (%s): C that behaves like the original'
     % (g[7], g[0], g[8], pct(g[8], g[1]).strip())),
    ('    of which matching C', pct(g[3], g[0]), '%d functions, %d bytes, %d units: rebuilt byte for byte'
     % (g[3], g[2], len(units))),
    ('  named only', pct(named_only, g[0]), '%d functions: a name, no C yet (not done work)' % named_only),
    ('  unnamed', pct(unnamed, g[0]), '%d functions (FUN_...), no C yet' % unnamed),
    ('  documented', pct(g[6], g[0]), '%d named functions in docs/*.md' % g[6]),
    ('  named globals', '', '%d' % globals_named),
    ('SDK (Sega libraries)', '', '%d functions, %d bytes of code; never decompiled here' % (k[0], k[1])),
    ('  named by signature', pct(k[4], k[0]), '%d of %d (SDK tables: the library\'s own names)' % (k[4], k[0])),
]
w = max(len(r[0]) for r in rows)
for name, p, detail in rows:
    print('%-*s  %7s  %s' % (w, name, p, detail))
