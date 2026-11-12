#!/usr/bin/env python3
"""Write an overlay's C units from the one copy of each: python3 tools/overlay/place_units.py <overlay> [...]   (run in the repo; build.sh --overlay runs it)

A unit's C is stored once: a source of the original tree (modules/<dir>/<file>.c, events/<dir>/<file>.c, beside its headers) or
overlays/src/<unit>.c. overlays/units.tsv says which overlays have it, at what range (the same code sits at a different address in each)
and with which header options (a row's fifth column on: they can differ by overlay, as a function kept as the original's bytes can).
For each row of the overlay this writes overlays/<overlay>/src/<name>.c: the stored file with that row's @unit line. <name> is the stored
file's name for overlays/src/, else its path below modules/ or events/ with _ for / (modules/stg01/beach.c: stg01_beach.c). Those folders
are generated (.gitignore): a file is rewritten only when its text changes, so a build recompiles only what changed, and a generated unit
with no row any more is removed.
"""
import os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
HEAD = re.compile(r'^\s*/\*\s*@unit\s+[0-9A-Fa-f]{8}-[0-9A-Fa-f]{8}\s*(.*?)\s*\*/')


def rows():
    """[(overlay, stored path from the repo root, start, end, options or None)]; a bare unit name means overlays/src/<name>.c."""
    out = []
    if not os.path.exists(os.path.join(ROOT, 'overlays', 'units.tsv')):      # no overlay unit yet
        return out
    for l in open(os.path.join(ROOT, 'overlays', 'units.tsv')):
        q = l.rstrip('\n').split('\t')
        if q and q[0] and not l.startswith('#'):
            path = q[1] if q[1].endswith('.c') else 'overlays/src/%s.c' % q[1]
            out.append((q[0], path, q[2], q[3], q[4] if len(q) > 4 else None))
    return out


def gen_name(path):
    p = path.replace(os.sep, '/')
    if p.startswith('overlays/src/'):
        return os.path.basename(p)
    return p.split('/', 1)[1].replace('/', '_')


def place(ov):
    d = os.path.join(ROOT, 'overlays', ov, 'src')
    want = {}
    for o, path, start, end, opts in rows():
        if o != ov:
            continue
        text = open(os.path.join(ROOT, path), encoding='latin1').read()
        first, _, rest = text.partition('\n')
        m = HEAD.match(first)
        if opts is None:
            opts = m.group(1) if m else ''
        line = '/* @unit %s-%s%s */' % (start, end, ' ' + opts if opts else '')
        want[gen_name(path)] = line + '\n' + (rest if m else text)
    if want:
        os.makedirs(d, exist_ok=True)
    for f in os.listdir(d) if os.path.isdir(d) else []:
        if f.endswith('.c') and f not in want:
            os.remove(os.path.join(d, f))
    for f, text in want.items():
        p = os.path.join(d, f)
        if not os.path.exists(p) or open(p, encoding='latin1').read() != text:
            open(p, 'w', encoding='latin1').write(text)


if __name__ == '__main__':
    for ov in sys.argv[1:]:
        place(ov)
