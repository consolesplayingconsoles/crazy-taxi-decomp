#!/usr/bin/env python3
"""progress.py: the decomp's state, in several measures. Run from the repo root after setup.sh.

  Buckets, each game function in one: done (equivalent C: behaves like the original, by
  tools/equiv.py into tests/equivalent.txt; matching C, rebuilt byte for byte, is part of it),
  named only (a label, not done work), unnamed. A name never counts as done.
  named        functions with a real name (functions.txt), globals with a name (globals.txt)
  documented   functions that a docs/*.md file mentions by name
A last section, REVERSE ENGINEERING, counts what the model map (model-map/game.dcgs) identifies: models, characters,
sounds and tables with a name. It is separate from the decomp measures and never feeds them: a name is identification,
not done work. A row with nothing named is left out, and so is the section while all its rows are.
Everything on the disc that is code is part of the game, the bundled library included (the Katana libraries,
the compiler runtime, the boot block): one total, fixed from the start, and a function is in the same bucket
whether it is done or not. sdk.txt only marks which functions are library, to show their share of the total.

The project's main metric ("done: equivalent C") is the FIRST row of the first section, and its label
stays as is: Pluto's Homebrew tab finds it by that label (pluto/src/components/homebrew/decompMetric.ts,
MAIN_METRICS) and prints and formats this report. Renaming or reordering it means updating Pluto too.

It also writes badge.svg (the main metric as a bar and a number) for the top of the README; the pre-commit
hook stages it with the Progress block.
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
# functions whose bytes the SDK's own source reproduces (tools/sdk_source.py, from the source the user supplied)
verified = set(l.strip() for l in open('sdk-verified.txt') if l.strip() and not l.startswith('#')) if os.path.exists('sdk-verified.txt') else set()
name_at = {a: n for a, sz, n in funcs}

def is_lib(a):
    return a in sdk_funcs or any(s <= a < e for s, e in ranges)

def stats(sel):
    fs = [x for x in funcs if sel(x[0])]
    code = sum(sz for a, sz, n in fs)
    cb = sum(sz for a, sz, n in fs if in_c(a))
    cf = sum(1 for a, sz, n in fs if in_c(a))
    nm = [x for x in fs if not x[2].startswith('FUN_')]
    nb = sum(sz for a, sz, n in nm)
    dc = sum(1 for a, sz, n in nm if n in words)
    eq = [x for x in fs if in_c(x[0]) or x[2] in equivalent or x[2] in verified]
    vs = [x for x in fs if x[2] in verified and not (in_c(x[0]) or x[2] in equivalent)]
    return len(fs), code, cb, cf, len(nm), nb, dc, len(eq), sum(sz for a, sz, n in eq), len(vs), sum(sz for a, sz, n in vs)

globals_named = sum(1 for l in open('globals.txt') if l.strip() and not l.startswith('#')) if os.path.exists('globals.txt') else 0
import glob
doc = ''.join(open(p, errors='replace').read() for p in glob.glob('docs/*.md'))
words = set(re.findall(r'[A-Za-z_][A-Za-z0-9_]*', doc))

def pct(a, b):
    return '%5.1f%%' % (100.0 * a / b) if b else '  -  '

g = stats(lambda a: True)
k = stats(is_lib)
is_done = lambda x: in_c(x[0]) or x[2] in equivalent or x[2] in verified
named_only = sum(1 for x in funcs if not is_done(x) and not x[2].startswith('FUN_'))
unnamed = sum(1 for x in funcs if not is_done(x) and x[2].startswith('FUN_'))
rows = [
    ('THE GAME', '', '%d functions, %d bytes of code; each function in one bucket' % (g[0], g[1])),
    ('  done: equivalent C', pct(g[7], g[0]), '%d of %d functions, %d bytes (%s): C that behaves like the original'
     % (g[7], g[0], g[8], pct(g[8], g[1]).strip())),
    ('    of which matching C', pct(g[3], g[0]), '%d functions, %d bytes, %d units: rebuilt byte for byte'
     % (g[3], g[2], len(units))),
    ('    of which SDK source', pct(g[9], g[0]), '%d functions, %d bytes: the SDK\'s own source reproduces them (sdk-source/, local)'
     % (g[9], g[10])),
    ('  named only', pct(named_only, g[0]), '%d functions: a name, no C yet (not done work)' % named_only),
    ('  unnamed', pct(unnamed, g[0]), '%d functions (FUN_...), no C yet' % unnamed),
    ('  documented', pct(g[6], g[0]), '%d named functions in docs/*.md' % g[6]),
    ('  named globals', '', '%d' % globals_named),
    ('  of which library', '', '%d functions, %d bytes of code: the Sega SDK, the NAOMI library and the C runtime bundled in the game' % (k[0], k[1])),
    ('    done', pct(k[7], k[0]), '%d of %d library functions, %d bytes (%s)' % (k[7], k[0], k[8], pct(k[8], k[1]).strip())),
    ('    named', pct(k[4], k[0]), '%d of %d (the library\'s own names, from SDK tables)' % (k[4], k[0])),
]

def map_sections(path):
    """{section: [row dicts]} of a game.dcgs file."""
    out, sec, head = {}, None, None
    for line in open(path, errors='replace'):
        line = line.rstrip('\n')
        if line.startswith('#') or not line:
            continue
        if line.startswith('['):
            sec, head = line[1:-1], None
            out[sec] = []
        elif head is None:
            head = line.split('\t')
        else:
            out[sec].append(dict(zip(head, line.split('\t'))))
    return out

if os.path.exists('model-map/game.dcgs'):
    m = map_sections('model-map/game.dcgs')
    rules = [l.split('#', 1)[0].split() for l in open('models.txt')] if os.path.exists('models.txt') else []
    models = m.get('models', [])
    mn = sum(1 for r in models if r.get('name') or r.get('sublabel'))
    chars = set((r['group'], r['sub']) for r in models if r.get('sub', '').startswith('0x'))
    cn = set((r['group'], r['sub']) for r in models if r.get('sub', '').startswith('0x') and r.get('sublabel'))
    sounds = [r for r in m.get('audio', []) if r.get('format') != 'unknown']
    sn = sum(1 for r in sounds if r.get('name'))
    tables = set(r['table'] for r in models if r.get('table'))
    tn = tables & set('%08X' % (int(r[1], 16) & 0x1FFFFFFF) for r in rules if len(r) > 1 and r[0] == 'table')
    re_rows = [(n, row) for n, row in [
        (mn, ('  models named', pct(mn, len(models)), '%d of %d models: a name, or a named table or collection' % (mn, len(models)))),
        (len(cn), ('  characters named', pct(len(cn), len(chars)), '%d of %d characters (note rules)' % (len(cn), len(chars)))),
        (sn, ('  sounds named', pct(sn, len(sounds)), '%d of %d sounds (sound rules)' % (sn, len(sounds)))),
        (len(tn), ('  tables named', pct(len(tn), len(tables)), '%d of %d model tables (table rules)' % (len(tn), len(tables)))),
    ] if n]
    if re_rows:
        rows += [('REVERSE ENGINEERING', '', 'what the model map identifies; separate from the measures above, not done work')]
        rows += [row for n, row in re_rows]
def write_badge(rows, label, path='badge.svg'):
    """badge.svg beside the README: the label, a bar filled to the main metric ("done: ...") and its percentage, in
    Pluto's colours. One metric only; the number is always printed, so colour carries no meaning on its own."""
    done = 0.0
    for n, p, _ in rows:
        if n.strip().startswith('done:'):
            try:
                done = float(p.strip().rstrip('%'))
            except ValueError:
                done = 0.0
            break
    bar = 64
    wd = int(round(bar * min(done, 100.0) / 100.0))
    if done > 0 and wd < 2:
        wd = 2
    text = '%.1f%%' % done
    title = '%s: %s done' % (label, text)
    svg = ('<svg xmlns="http://www.w3.org/2000/svg" width="182" height="20" role="img" aria-label="%s">'
           '<title>%s</title><clipPath id="r"><rect width="182" height="20" rx="3"/></clipPath>'
           '<g clip-path="url(#r)"><rect width="52" height="20" fill="#1a2233"/><rect x="52" width="130" height="20" fill="#2a3347"/>'
           '<rect x="60" y="6" width="%d" height="8" rx="2" fill="#ecc9b9"/>'
           '<rect x="60" y="6" width="%d" height="8" rx="2" fill="#c87053"/></g>'
           '<g fill="#fff" font-family="Verdana,DejaVu Sans,sans-serif" font-size="11" text-anchor="middle">'
           '<text x="26" y="14">%s</text><text x="154" y="14">%s</text></g></svg>\n'
           % (title, title, bar, wd, label, text))
    try:
        open(path, 'w').write(svg)
    except OSError:
        pass


write_badge(rows, 'decomp')
w = max(len(r[0]) for r in rows)
for name, p, detail in rows:
    print('%-*s  %7s  %s' % (w, name, p, detail))
