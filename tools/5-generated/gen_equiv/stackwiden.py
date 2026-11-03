#!/usr/bin/env python3
"""stackwiden.py: a generated function that takes fewer stack words than its original reads. Run in the repo.

    python3 tools/5-generated/gen_equiv/stackwiden.py src/<file>.c <function> [K ...]

The generator declares the stack words a function takes from the loads it sees. A function that holds the address of its first stack word
and reads a vector through it (Virtua Tennis shadowBallDraw: x, y, z at `R14 + 0, 4, 8`, one word declared, `stk[62] = s.w[0];`) takes its
other words from its own frame, uninitialised: the C draws with garbage, passes every case (they hold zeros there) and the game shows it.
STACKFUZZ=1 equiv.py finds these; this gives the function one structure parameter `StkK p` with every spill `stk[N + i] = p.w[i];` placed
before the first statement, and keeps the smallest K of 3 4 5 6 7 8 9 12 (or the ones named) that STACKFUZZ and the plain run both pass.
The old stack parameters (a8 and up, or the structure) are replaced; the other parameters stay. Callers that pass fewer words than K are
found by tools/8-build/protocheck.py. Restores the file when no K passes.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import os
import re
import subprocess
import sys

DEFAULT_K = (3, 4, 5, 6, 7, 8, 9, 12)
DECL = re.compile(r'^\s*(register\s+)?(int|float|unsigned int|short|char)\s+[A-Za-z_0-9\[\]]+;\s*$')


def rewrite(text, name, k):
    """(new text, new parameter list), or (None, why)"""
    m = re.search(r'(?m)^(int|void|float|Stk\d+) %s\(([^;{]*)\)\n\{' % re.escape(name), text)
    if not m:
        return None, 'no definition'
    ret, params = m.group(1), [p.strip() for p in m.group(2).split(',')]
    i = m.start()
    j = text.index('\n}\n', i) + 3
    body = text[m.end():j]
    keep, stkname = [], None
    for p in params:
        mm = re.match(r'int a(\d+)$', p)
        if mm and int(mm.group(1)) >= 8:
            continue                                        # a stack word taken as an int
        ms = re.match(r'Stk(\d+) (\w+)$', p)
        if ms:
            stkname = ms.group(2)
            keep.append('@STK')
            continue
        keep.append(p)
    if '@STK' not in keep:                                  # the structure goes after the last integer register parameter
        keep.insert(max([n for n, p in enumerate(keep) if re.match(r'int a\d+$', p)] + [-1]) + 1, '@STK')
    sig = ', '.join(('Stk%d p' % k) if p == '@STK' else p for p in keep)
    spill = re.compile(r'(?m)^    (?:\(\*\(int \*\)\(\(int\)stk \+ \d+\)\)|stk\[(\d+)\]) = (a(\d+)|%s\.w\[(\d+)\]);\n' % (re.escape(stkname) if stkname else 'ZZZ'))
    spills = [mt for mt in spill.finditer(body) if (mt.group(3) and int(mt.group(3)) >= 8) or mt.group(4) is not None]
    if not spills:
        return None, 'no spill line of a stack word'
    idx = [int(mt.group(1)) for mt in spills if mt.group(1)]
    if not idx:
        return None, 'the spills are not in the stk[N] form'
    n0 = min(idx)
    for mt in reversed(spills):
        body = body[:mt.start()] + body[mt.end():]
    lines = body.split('\n')
    pos = 0
    for ix, l in enumerate(lines):
        if ix == 0 or DECL.match(l) or not l.strip():
            continue
        pos = ix
        break
    lines.insert(pos, ''.join('    stk[%d] = p.w[%d];\n' % (n0 + q, q) for q in range(k)).rstrip('\n'))
    out = text[:i] + '%s %s(%s)\n{' % (ret, name, sig) + '\n'.join(lines) + text[j:]
    out = re.sub(r'(?m)^(%s) %s\([^;{]*\);' % (ret, re.escape(name)), '%s %s(%s);' % (ret, name, sig), out)
    if 'typedef struct { int w[%d]; } Stk%d;' % (k, k) not in out:
        out = 'typedef struct { int w[%d]; } Stk%d;\n' % (k, k) + out
    return out, sig


def last_line(argv, env=None):
    r = subprocess.run(argv, env=dict(os.environ, **(env or {})), stdout=subprocess.PIPE, universal_newlines=True)
    return r.stdout.strip().split('\n')[-1]


def main(argv):
    if len(argv) < 3:
        sys.exit(__doc__)
    path, name = argv[1], argv[2]
    ks = [int(x) for x in argv[3:]] or list(DEFAULT_K)
    orig = open(path).read()
    for k in ks:
        new, info = rewrite(orig, name, k)
        if new is None:
            print('%s: skipped: %s' % (name, info))
            return 1
        open(path, 'w').write(new)
        fuzz = last_line([sys.executable, 'tools/equiv.py', path, name], {'STACKFUZZ': '1'})
        plain = last_line([sys.executable, 'tools/equiv.py', path, name])
        print('K=%d (%s): fuzz %s | plain %s' % (k, info, fuzz[:90], plain[:90]), flush=True)
        if 'EQUIVALENT' in fuzz and 'EQUIVALENT' in plain:
            return 0
    open(path, 'w').write(orig)
    print('no K passed; file restored')
    return 2


if __name__ == '__main__':
    sys.exit(main(sys.argv))
