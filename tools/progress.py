#!/usr/bin/env python3
"""progress.py: the decomp's state, in several measures. Run from the repo root after setup.sh.

  Buckets, each game function in one: done (equivalent C: behaves like the original, by
  tools/equiv.py into tests/equivalent.txt; matching C, rebuilt byte for byte, is part of it),
  named only (a label, not done work), unnamed. A name never counts as done.
  named        functions with a real name (functions.txt), globals with a name (globals.txt)
  documented   functions that a docs/*.md file mentions by name
  with partial C   done plus the functions with C in partial/*.c that is not proven equivalent yet: its own row, done stays apart
A last section, GAME ASSETS (EXTRA), counts what the model map (model-map/game.dcgs) identifies: models, characters,
sounds and tables with a name. It is separate from the decomp measures and never feeds them: a name is identification,
not done work. A row with nothing named is left out, and so is the section while all its rows are.
Everything on the disc that is code is part of the game, the bundled library included (the Katana libraries,
the compiler runtime, the boot block): one total, fixed from the start, and a function is in the same bucket
whether it is done or not. sdk.txt only marks which functions are library, to show their share of the total.

The project's main metric ("done: equivalent C") is the FIRST row of the first section, and its label
stays as is: Pluto's Homebrew tab finds it by that label (pluto/src/components/homebrew/decompMetric.ts,
MAIN_METRICS) and prints and formats this report. Renaming or reordering it means updating Pluto too.

It also writes badges/progress.svg (the main metric as a bar and a number) for the top of the README; the pre-commit
hook stages it with the Progress block. The badge also lists the statuses in status.txt, ticked, crossed or unknown, from the first
day: a game that does not build from C yet shows BUILDS FROM C crossed.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '.')))
import toolpath  # noqa: E402,F401
import os, re, subprocess, sys

here = os.path.dirname(os.path.abspath(__file__))
units = [l.split() for l in subprocess.run([sys.executable, os.path.join(here, '1-2-baseline', 'units.py'), '--units'],
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
# functions whose bytes the SDK's own source reproduces (tools/5-generated/sdk_source.py, from the source the user supplied)
verified = set(l.strip() for l in open('sdk-verified.txt') if l.strip() and not l.startswith('#')) if os.path.exists('sdk-verified.txt') else set()
# functions whose bytes are verbatim in the SDK's compiled library code (tools/1-2-baseline/sdk_identical.py): the library's own code, not C
identical = set(l.split()[0] for l in open('sdk-identical.txt') if l.strip() and not l.startswith('#')) if os.path.exists('sdk-identical.txt') else set()
verified_src = set(verified)
verified |= identical
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
    vs = [x for x in fs if x[2] in verified_src and not (in_c(x[0]) or x[2] in equivalent)]
    vi = [x for x in fs if x[2] in identical and x[2] not in verified_src and not (in_c(x[0]) or x[2] in equivalent)]
    return len(fs), code, cb, cf, len(nm), nb, dc, len(eq), sum(sz for a, sz, n in eq), len(vs), sum(sz for a, sz, n in vs), len(vi), sum(sz for a, sz, n in vi)

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
# partial C: functions with C written in partial/*.c that is not proven equivalent yet. Its own row (the total with them),
# done stays apart; the row exists only when partial/ holds some C
partial = set()
for pf in glob.glob('partial/*.c'):
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(pf, errors='replace').read(), flags=re.S)
    partial |= set(re.findall(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{', text, flags=re.M))
partial = set(x[2] for x in funcs if x[2] in partial and not is_done(x))
# no C form: functions with an instruction this compiler has no C for (tools/5-generated/classify.py); done by the proof that the instruction
# exists, not by C. Its own row; the main number stays equivalent C
sys.path.insert(0, here)
import classify
_exe = open('1ST_READ.BIN', 'rb').read()
_base = int(open('BASE').read().strip(), 16)
nocform = set(x[2] for x in funcs if not (in_c(x[0]) or x[2] in equivalent or x[2] in verified)
              and classify.no_c_form(_exe, _base, x[0], x[1]))
named_only = sum(1 for x in funcs if not is_done(x) and x[2] not in nocform and not x[2].startswith('FUN_'))   # each function in one bucket
unnamed = sum(1 for x in funcs if not is_done(x) and x[2] not in nocform and x[2].startswith('FUN_'))
doable = g[0] - len(nocform)                       # what can be C: the functions with no C form are not part of the equivalent C measure
doable_bytes = g[1] - sum(x[1] for x in funcs if x[2] in nocform)
def med(v):
    v = sorted(v)
    return v[len(v) // 2] if v else 0


def coverage_all(proven, unproven_sizes):
    """TOTAL TEST COVERAGE in percent: the instructions the cases ran, of all instructions, over every function that can be C. proven is
    [(instructions run, instructions in all), ...] for the functions that reached the check; unproven_sizes the byte sizes of the others,
    which ran nothing and count with half their bytes as instructions. What has not been done counts as 0."""
    run = sum(r for r, a in proven)
    total = sum(a for r, a in proven) + sum(sz // 2 for sz in unproven_sizes)
    return 100.0 * run / total if total else 0.0


# the quality figure: the instructions the cases ran, of all the instructions, over every function that can be C (what has no cases counts as 0)
_run = _all = _nfn = 0
_proven = []
if os.path.exists('docs/equivalent.md'):
    for _b in open('docs/equivalent.md').read().split('\n### ')[1:]:
        _fn = _b.split(' ', 1)[0]
        _m = re.search(r'the cases run (\d+) of (\d+) instructions', _b)
        if _fn in equivalent and _m and int(_m.group(2)):
            _run += int(_m.group(1)); _all += int(_m.group(2)); _nfn += 1; _proven.append((int(_m.group(1)), int(_m.group(2))))
_unproven = [x[1] for x in funcs if not is_done(x) and x[2] not in nocform]
wavg = coverage_all(_proven, _unproven)
state_rows = []                                   # where the functions that are not done stand, from tools/5-generated/remaining.py --table (it reads nothing)
try:
    _t = subprocess.run([sys.executable, os.path.join(here, '5-generated', 'remaining.py'), '--table'], capture_output=True, text=True, timeout=600).stdout.splitlines()
    for _l in _t:
        _m = re.match(r'^(\S.*?)\s+(\d+)\s+(\d+)$', _l)
        if _m and _m.group(1) != 'State':
            state_rows.append(('  ' + _m.group(1), _m.group(2), '%s bytes' % _m.group(3)))
except Exception:
    state_rows = []
unnamed_all = sum(1 for x in funcs if x[2].startswith('FUN_'))              # every function still called FUN_..., done or not
rows = [
    ('TOTAL TEST COVERAGE', '%.1f%%' % wavg, 'the instructions the cases ran, of all instructions, over the %d functions that can be C; the %d functions that reached the check are measured, the others count 0' % (doable, _nfn)),
    ('COUNTDOWN', '', 'what is left, counting down to zero; the percentages below say the same the other way round'),
    ('  functions left', '%d' % (doable - g[7]), 'of the %d functions that can be C (%d with no C form are counted apart)' % (doable, len(nocform))),
    ('  bytes left', '%d' % (doable_bytes - g[8]), 'of %d bytes of code that can be C' % doable_bytes),
    ('  unnamed', '%d' % unnamed_all, 'functions still called FUN_... (%d of %d)' % (unnamed_all, g[0])),
    ] + state_rows + [
    ('THE GAME', '', '%d functions, %d bytes of code; each function in one bucket' % (g[0], g[1])),
    ('  done: equivalent C', pct(g[7], doable), '%d of %d functions, %d bytes (%s): C that behaves like the original%s'
     % (g[7], doable, g[8], pct(g[8], doable_bytes).strip(), (' (the %d with no C form are counted apart)' % len(nocform)) if nocform else '')),
    ('    of which matching C', pct(g[3], doable), '%d functions, %d bytes, %d units: rebuilt byte for byte'
     % (g[3], g[2], len(units))),
    ('    of which SDK source', pct(g[9], doable), '%d functions, %d bytes: the SDK\'s own source reproduces them (sdk-source/, local)'
     % (g[9], g[10])),
    ('    of which SDK object code', pct(g[11], doable), '%d functions, %d bytes: byte-identical to the SDK library\'s own compiled code (sdk-identical.txt)'
     % (g[11], g[12])),
    ] + ([('  done: no C form', pct(len(nocform), g[0]), '%d functions of the %d: an instruction or a register convention with no C form (tools/5-generated/classify.py names it); the rows above are of the %d that can be C' % (len(nocform), g[0], doable))] if nocform else []) + [
    ('  size of what is done', '', 'median %d bytes; what is left: median %d bytes, %d functions of 1000 bytes or more holding %d bytes (%s of all code)'
     % (med([x[1] for x in funcs if is_done(x)]), med([x[1] for x in funcs if not is_done(x)]),
        sum(1 for x in funcs if not is_done(x) and x[1] >= 1000), sum(x[1] for x in funcs if not is_done(x) and x[1] >= 1000),
        pct(sum(x[1] for x in funcs if not is_done(x) and x[1] >= 1000), g[1]).strip())),
    ('  named only', pct(named_only, doable), '%d functions: a name, no C yet (not done work)' % named_only),
    ('  unnamed', pct(unnamed, doable), '%d functions (FUN_...), no C yet' % unnamed),
    ] + ([('  with partial C', pct(g[7] + len(partial), doable), '%d functions: %d done + %d partial (C written in partial/, not yet proven equivalent)'
           % (g[7] + len(partial), g[7], len(partial)))] if partial else []) + [
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
        rows += [('GAME ASSETS (EXTRA)', '', 'reverse engineering: what the model map identifies; it does not affect the measures above and is not done work')]
        rows += [row for n, row in re_rows]
def write_badge(rows, label, path='badges/progress.svg', extra=()):
    """badge.svg beside the README, two rows in Pluto's colours: functions (a bar filled to the main metric, "done: ...", and its
    percentage) and bytes (the game's code laid out by bytes, data left out, one column per slice, dark where most of the slice is
    done, light where it is not, and the share of code bytes done). The same two colours mean done and not yet in both rows, and
    the numbers are always printed."""
    done = float(pct(g[7], doable).strip().rstrip('%')) if doable else 0.0      # the same number the 'done: equivalent C' row used to carry, straight from the counts
    bar = 100
    wd = int(round(bar * min(done, 100.0) / 100.0))
    if done > 0 and wd < 2:
        wd = 2
    code_total = sum(sz for _, sz, n in funcs if n not in nocform) or 1
    dark = [0] * bar
    pos = done_bytes = 0
    for fa, fsz, fn in sorted(x for x in funcs if x[2] not in nocform):
        if in_c(fa) or fn in equivalent or fn in verified:
            done_bytes += fsz
            for b in range(pos, pos + fsz):
                dark[min(bar - 1, b * bar // code_total)] += 1
        pos += fsz
    X = 150                                        # the bars start here; the label column is wide enough for "Min. accuracy"
    per = float(code_total) / bar
    runs, c = [], 0
    while c < bar:
        on = dark[c] * 2 > per
        e = c
        while e < bar and (dark[e] * 2 > per) == on:
            e += 1
        if on:
            runs.append('<rect x="%d" y="46" width="%d" height="8" fill="#c87053"/>' % (X + c, e - c))
        c = e
    strip = '<rect x="%d" y="46" width="%d" height="8" fill="#ecc9b9"/>%s' % (X, bar, ''.join(runs))
    ftext = '%.1f%%' % done
    btext = '%.1f%%' % (100.0 * done_bytes / code_total)
    gtext = '%.1f%%' % wavg
    title = '%s: %s of functions, %s of code bytes done; the total test coverage over all of them is %s' % (label, ftext, btext, gtext)
    H = 60 + 20 * len(extra)
    lines = ''.join('<text x="71" y="%d">%s</text><text x="278" y="%d">%s</text>' % (74 + 20 * k, t, 74 + 20 * k, v)
                    for k, (t, v) in enumerate(extra))
    svg = ('<svg xmlns="http://www.w3.org/2000/svg" width="304" height="%d" role="img" aria-label="%%s">' % H +
           '<title>%%s</title><clipPath id="r"><rect width="304" height="%d" rx="3"/></clipPath>' % H +
           '<g clip-path="url(#r)"><rect width="304" height="%d" fill="#1a2233"/>' % H +
           '<rect x="%d" y="26" width="%d" height="8" rx="2" fill="#ecc9b9"/>'
           '<rect x="%d" y="26" width="%d" height="8" rx="2" fill="#c87053"/>%s'
           '</g>'
           '<g fill="#fff" font-family="Verdana,DejaVu Sans,sans-serif" font-size="11" text-anchor="middle">'
           '<text x="71" y="34">COVERED FUNCTIONS</text><text x="71" y="54">COVERED BYTES</text>'
           '<text x="278" y="34">%s</text><text x="278" y="54">%s</text><text x="152" y="14">TOTAL TEST COVERAGE: %s</text>' + lines + '</g></svg>\n'
           ) % (title, title, X, bar, X, wd, strip, ftext, btext, gtext)
    import os as _os
    _os.makedirs(_os.path.dirname(path) or '.', exist_ok=True)
    try:
        open(path, 'w').write(svg)
    except OSError:
        pass
    # the README's badge link carries both numbers (badge.svg?p=71.9&b=34.0): a new number is a new address, so GitHub's image cache
    # never shows an old badge
    try:
        readme = open('README.md').read()
        # the README's badge (an older name too: badge.svg, badges/regular, buildable or playable) becomes this one, with its numbers
        fresh = re.sub(r'\((badges/(?:regular|buildable|playable|progress)|badge)\.svg(\?[^)\s]*)?\)',
                       lambda m: '(badges/progress.svg?p=%.1f&b=%s&a=%d&s=%d)' % (done, btext.rstrip('%'), int(round(wavg)), len(reached)),
                       readme, count=1)
        if fresh != readme:
            open('README.md', 'w').write(fresh)
    except (IOError, OSError):
        pass


def statuses(path='status.txt'):
    """[(status, state)] from status.txt, in its order: one status a line, "[x] NAME" reached (state True), "[ ] NAME" not reached
    (False), "[?] NAME" unknown, not tested yet (None); # starts a comment. Each status needs the ones above it, so a ticked line
    under an unticked or unknown one stops the report. No file: no statuses."""
    if not os.path.exists(path):
        return []
    out = []
    for i, l in enumerate(open(path), 1):
        l = l.split('#')[0].strip()
        if not l:
            continue
        m = re.match(r'^\[([ xX?])\]\s+(\S.*)$', l)
        if not m:
            sys.exit('[ERROR] %s line %d: expected "[x] NAME", "[ ] NAME" or "[?] NAME", found: %s' % (path, i, l))
        out.append((m.group(2).strip(), None if m.group(1) == '?' else m.group(1) != ' '))
    for k, (n, on) in enumerate(out):
        if on and not all(o for _, o in out[:k]):
            sys.exit('[ERROR] %s: "%s" is ticked but %s above it is not' % (path, n, ', '.join('"%s"' % x for x, o in out[:k] if not o)))
    return out


status = statuses()
reached = [n for n, on in status if on]
# the statuses show whenever status.txt has any: BUILDS FROM C crossed while the build fails
write_badge(rows, 'decomp', extra=[(n, '\u2753' if on is None else '\u2705' if on else '\u274c') for n, on in status] if status else ())
# what the status shows (the badge above was written from every row): the layout the README uses, one group per kind of measure
_drop = ('THE GAME', 'done: equivalent C', 'of which matching C', 'of which SDK source', 'of which SDK object code', 'size of what is done',
         'named only', 'with partial C', 'named globals', 'of which library', 'done', 'named')
_shown = []
_top = []
for _r in rows:
    _n = _r[0].strip()
    if _n in _drop or (_n == 'unnamed' and not _r[2].startswith('functions still called')):
        continue
    if _n in ('functions left', 'bytes left'):               # the two countdown numbers sit under the threshold, each with its share complete
        _share = pct(g[7], doable).strip() if _n == 'functions left' else pct(g[8], doable_bytes).strip()
        _top.append((_n.upper(), _r[1], _r[2], '(%s complete)' % _share))
        continue
    if _n == 'COUNTDOWN':
        _r = ('FUNCTIONS', '', '')
    elif _n == 'done: no C form':
        _r = ('  No C form', _r[1], re.sub(r'; the rows above are of the \d+ that can be C', '', re.sub(r'^\d+ functions of the \d+: ', '', _r[2])))
    if _n == 'GAME ASSETS (EXTRA)':
        _r = (_r[0], _r[1], '')                                  # the title already says it is outside the measures
    _shown.append(_r)
rows = _shown[:1] + _top + _shown[1:]
w = max(len(r[0]) for r in rows)
w = max([w] + [len(r[0]) + 2 + len(r[3] + ' ' + r[1]) - 9 for r in rows if len(r) > 3])      # room for "(92.8% complete) 230" between a name and its description
for row in rows:
    name, p, detail = row[:3]
    if len(row) > 3:                                           # "(86.4% complete) 435": the share and the number end where the numbers of the other rows end
        cell = row[3] + ' ' + p
        print('%s%s  %s' % (name, cell.rjust(w + 2 + 7 - len(name)), detail))
    else:
        print('%-*s  %7s  %s' % (w, name, p, detail))
