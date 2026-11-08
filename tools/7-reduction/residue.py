#!/usr/bin/env python3
"""What the bloated functions share. Run in the repo. Stdlib only. Reads text only: no compiler, safe while a run is going.

    python3 tools/7-reduction/residue.py                  the 30 C line shapes most over-represented in the bloated functions
    python3 tools/7-reduction/residue.py --bloat 1.3 --fine 1.05 --min 20 --top 50
    python3 tools/7-reduction/residue.py --stk            also the stack-array statistics (see below)

A function is bloated when its C is at least --bloat times the original (build/sizes.json, as shrink.py keeps it), fine when it is at
most --fine times. Every C line is normalised (numbers, temporaries, argument names and callee names become one placeholder each, the
structure stays), and for each shape the tool prints how many bloated and how many fine functions have it, and the excess of the
bloated ones that do. A shape the bloated functions have and the fine ones do not is a candidate cause: look at two functions that
have it against the original's code, then write the rewrite as a pass in rewrites.py with a test (first found this way in Zombie
Revenge: a stack array based one word low, a `sqrt` computed once per comparison). Hand-written functions (build/manual/*.c, the
`/* manual: */` marker) are left out: their sizes.json rows are not kept current.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import collections
import glob
import json
import os
import re
import sys

_DEF = re.compile(r'^[a-zA-Z][^\n;]*?\b(\w+)\([^;\n]*\)\n\{\n(.*?)\n\}$', re.S | re.M)
_DECL = re.compile(r'^\s*(?:register )?(?:unsigned )?(?:int|float|short|char) [\w\[\]]+;$')


def normalize(line):
    """One C line with its details taken out: what is left is the shape."""
    s = line.strip()
    s = re.sub(r'struct o[0-9A-F]+_\w+', 'struct oN_T', s)
    s = re.sub(r'\b0x[0-9A-Fa-f]+\b|\b\d+(?:\.\d+)?f?\b', 'N', s)
    s = re.sub(r'\b[tuvw]\d+(?:_\d+)?\b', 'T', s)
    s = re.sub(r'\ba[4-7]\b', 'A', s)
    return re.sub(r'\b(?:FUN_[0-9a-f]+)\b', 'F', s)


def functions(text):
    """{name: shapes} of the definitions in one file's text: the set of normalised lines of each body, declarations left out."""
    return {m.group(1): set(normalize(l) for l in m.group(2).split('\n') if l.strip() and not _DECL.match(l)) for m in _DEF.finditer(text)}


def select(funcs, sizes, bloat, fine, hand=()):
    """(bloated, fine) as {name: shapes}: C/original at least `bloat`, and at most `fine`; functions in neither band or in `hand` are out."""
    b, f = {}, {}
    for n, sh in funcs.items():
        if n in hand or n not in sizes or sizes[n][0] < 40:
            continue
        r = sizes[n][1] / float(sizes[n][0])
        if r >= bloat:
            b[n] = sh
        elif r <= fine:
            f[n] = sh
    return b, f


def contrast(bloated, fine, sizes, min_support=12, min_len=8):
    """[(ratio, in bloated, in fine, excess of the bloated that have it, shape)], the largest ratio first."""
    db = collections.Counter(t for sh in bloated.values() for t in sh)
    dq = collections.Counter(t for sh in fine.values() for t in sh)
    rows = []
    for t, c in db.items():
        if c < min_support or len(t) < min_len:
            continue
        ratio = (c / float(len(bloated))) / ((dq[t] + 1) / float(len(fine) + 1))
        ex = sum(sizes[n][1] - sizes[n][0] for n, sh in bloated.items() if t in sh)
        rows.append((ratio, c, dq[t], ex, t))
    rows.sort(key=lambda r: (-r[0], -r[3]))
    return rows


def hand_written():
    out = set()
    if os.path.isdir('build/manual'):
        out |= set(f[:-2] for f in os.listdir('build/manual') if f.endswith('.c'))
    try:
        import consistency
        out |= set(consistency.manual_names())
    except Exception:
        pass
    return out


def main(argv):
    def opt(name, default):
        return type(default)(argv[argv.index(name) + 1]) if name in argv else default
    bloat, fine, top, mins = opt('--bloat', 1.2), opt('--fine', 1.1), opt('--top', 30), opt('--min', 12)
    sizes = {n: (o, c) for n, o, c in json.load(open('build/sizes.json')) if c}
    funcs = {}
    for f in glob.glob('src/gen_*.c'):
        if not os.path.basename(f).startswith(('gen_tmp', 'zz_')):
            funcs.update(functions(open(f, errors='replace').read()))
    b, q = select(funcs, sizes, bloat, fine, hand_written())
    print('%d bloated functions (>= %.2fx, excess %d KB), %d fine (<= %.2fx)' % (
        len(b), bloat, sum(sizes[n][1] - sizes[n][0] for n in b) // 1024, len(q), fine))
    print('%6s  %5s / %-4s  %8s  %s' % ('ratio', 'bloat', 'fine', 'excess B', 'shape'))
    for r, c, qn, ex, t in contrast(b, q, sizes, mins)[:top]:
        print('%5.1fx  %5d / %-4d  %8d  %s' % (r, c, qn, ex, t[:140]))
    if '--stk' in argv:
        _stk(argv)


def _stk(argv):
    """The stack-array statistics: how many functions use `int stk[N]`, the lowest offset they use, and the span left unused."""
    n = lows = wide = 0
    for f in glob.glob('src/gen_*.c'):
        if os.path.basename(f).startswith(('gen_tmp', 'zz_')):
            continue
        for m in _DEF.finditer(open(f, errors='replace').read()):
            d = re.search(r'int stk\[(\d+)\];', m.group(2))
            if not d:
                continue
            n += 1
            offs = [int(x) for x in re.findall(r'\(int\)stk \+ (\d+)', m.group(2))]
            if offs and min(offs) >= 4:
                lows += 1
                if int(d.group(1)) * 4 - (max(offs) + 4) >= 8:
                    wide += 1
    print('\nstack arrays: %d functions; lowest used offset >= 4: %d; array larger than its used span by 2+ words: %d' % (n, lows, wide))


if __name__ == '__main__':
    main(sys.argv[1:])
