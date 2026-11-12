#!/usr/bin/env python3
"""A matching unit of one overlay into every overlay that has the same code. Run in the repo.

    python3 tools/overlay/carry_unit.py <overlay> <unit> [overlay[@address] ...]      (<unit>: overlays/src/<unit>.c, a row of <overlay> in overlays/units.tsv)

overlay@address: the copy starts there (for an overlay whose functions.txt does not have the first function's name).

The unit's range in <overlay> is compared with every other overlay at the place its first function sits there (found by name): with
position-dependent fields masked (tools/1-2-baseline/sdk_masked.py) the words must be the same. Where they are, the overlay gets the same function and data
boundaries in that range (moved), the names of the reference's globals the C uses (read from the same pool slots there), and a row in
overlays/units.tsv with the range moved (the C itself is stored once). build.sh --overlay decides; a copy that does not match is taken out
again. Prints one line per overlay.
"""
import os, re, struct, subprocess, sys
sys.path.insert(0, 'tools')
import toolpath  # noqa: E402,F401  (the shared tools: sdk_masked)
import ovtsv, place_units  # noqa: E402  (tools/overlay)
_a, sys.argv = sys.argv, ['x']
try:
    import sdk_masked as M
except SystemExit:
    pass
sys.argv = _a
ref, unit = sys.argv[1], sys.argv[2]
only = sys.argv[3:]
R = os.getcwd()


def image(o):
    d = os.path.join('overlays', o)
    return d, open(os.path.join(d, o + '.bin'), 'rb').read(), int(ovtsv.row(o)['base'], 16)


def entries(d):
    return [l.split() for l in open(os.path.join(d, 'functions.txt')) if l.startswith(('F ', 'D '))]


unit = unit if unit.endswith('.c') else 'overlays/src/%s.c' % unit      # the stored copy: a source of the original tree or overlays/src/<unit>.c
rd, rex, rbase = image(ref)
text = open(unit, encoding='latin1').read()
TSV = os.path.join('overlays', 'units.tsv')
row = next(q for q in place_units.rows() if q[0] == ref and q[1] == unit)
start, end = int(row[2], 16), int(row[3], 16)
size = end - start
rwords = struct.unpack_from('<%dH' % (size // 2), rex, start - rbase)
rmask = M.mask(rwords)
inside = [(int(p[1], 16) - start, p) for p in entries(rd) if start <= int(p[1], 16) <= end]
first = next(p[3] for off, p in inside if off == 0 and p[0] == 'F')
# globals: the reference's names for pool words in the range that point at its own data
rglob = {}
gp = os.path.join(rd, 'globals.txt')
gnames = {}
if os.path.exists(gp):
    for l in open(gp):
        q = l.split()
        if len(q) == 2 and not l.startswith('#'):
            gnames[int(q[0], 16)] = q[1]
used = set(re.findall(r'\b[A-Za-z_]\w*\b', text))
for off in range(0, size - 3, 2):
    v = struct.unpack_from('<I', rex, start - rbase + off)[0]
    if v in gnames and gnames[v] in used and off % 4 == 0:
        rglob.setdefault(gnames[v], off)
targets = only or sorted(o for o in os.listdir('overlays') if o != ref and os.path.exists(os.path.join('overlays', o, 'functions.txt')))
for o in targets:
    o, _, given = o.partition('@')
    d, ex, base = image(o)
    E = entries(d)
    at = [int(given, 16)] if given else [int(p[1], 16) for p in E if p[0] == 'F' and p[3] == first]
    if not at:
        continue
    s = at[0]
    if s - base < 0 or s - base + size > len(ex):
        continue
    tw = struct.unpack_from('<%dH' % (size // 2), ex, s - base)
    # a word agrees when it is the same, or the same once position-dependent fields are masked (the build decides either way)
    if any(x != y and a != b for x, y, a, b in zip(M.mask(tw), rmask, tw, rwords)):
        print(o, 'other code')
        continue
    if any(q[0] == o and q[1] == unit for q in place_units.rows()):
        print(o, 'has the unit already')
        continue
    L = open(os.path.join(d, 'functions.txt')).read().splitlines()
    keep = [l for l in L if not (l.split() and l.split()[0] in ('F', 'D') and s <= int(l.split()[1], 16) <= s + size)]
    old = open(os.path.join(d, 'functions.txt')).read()
    hdr = [l for l in keep if not (l.split() and l.split()[0] in ('F', 'D'))]
    body = [l for l in keep if l.split() and l.split()[0] in ('F', 'D')]
    for off, p in inside:
        a = s + off
        n = p[3] if not p[3].startswith(('FUN_', 'data_')) else ('FUN_%08x' % a if p[0] == 'F' else 'data_%08x' % a)
        body.append('%s %08x %s %s' % (p[0], a, p[2], n))
    body.sort(key=lambda l: (int(l.split()[1], 16), l.split()[0] == 'F'))
    open(os.path.join(d, 'functions.txt'), 'w').write('\n'.join(hdr + body) + '\n')
    gl = os.path.join(d, 'globals.txt')
    oldg = open(gl).read() if os.path.exists(gl) else None
    have = oldg or ''
    with open(gl, 'a') as f:
        for n, off in rglob.items():
            if (' %s\n' % n) not in have:
                f.write('%08x %s\n' % (struct.unpack_from('<I', ex, s - base + off)[0], n))
    oldt = open(TSV).read()
    open(TSV, 'a').write('%s\t%s\t%08X\t%08X\t%s\n' % (o, unit, s, s + size, row[4] or ''))
    subprocess.run(['rm', '-rf', os.path.join(d, 'asm')])
    subprocess.run([sys.executable, os.path.join(R, 'tools/1-2-baseline/split_asm.py'), o + '.bin', '%08x' % base, 'functions.txt', '.'], cwd=d, capture_output=True)
    for x in os.listdir(os.path.join(d, 'build', 'obj')) if os.path.isdir(os.path.join(d, 'build', 'obj')) else []:
        if x.startswith('c_'):
            os.remove(os.path.join(d, 'build', 'obj', x))
    r = subprocess.run(['bash', 'build.sh', '--overlay', o], capture_output=True, text=True)
    linked = os.path.exists(os.path.join(d, 'build', 'link.sub')) and ('c_' + place_units.gen_name(unit)[:-2]) in open(os.path.join(d, 'build', 'link.sub')).read()
    if 'MATCH:' in r.stdout and linked:
        print(o, 'MATCH')
        continue
    # take it out again: the overlay as it was
    open(TSV, 'w').write(oldt)
    place_units.place(o)
    open(os.path.join(d, 'functions.txt'), 'w').write(old)
    if oldg is None:
        os.remove(gl)
    else:
        open(gl, 'w').write(oldg)
    subprocess.run(['rm', '-rf', os.path.join(d, 'asm')])
    subprocess.run([sys.executable, os.path.join(R, 'tools/1-2-baseline/split_asm.py'), o + '.bin', '%08x' % base, 'functions.txt', '.'], cwd=d, capture_output=True)
    print(o, 'no:', (r.stdout + r.stderr).strip().splitlines()[-1][:120] if (r.stdout + r.stderr).strip() else '?')
