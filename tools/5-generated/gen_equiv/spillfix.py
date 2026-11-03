#!/usr/bin/env python3
"""spillfix.py: a generated function that spills its stack parameters into the frame (`stk[118] = a8;`) and then reads the words after them,
which nothing ever stored (menuTextMsgPut, Virtua Tennis: a position copied from the incoming words by one block move, the frame had only the
first). Run in the repo.

    python3 tools/5-generated/gen_equiv/spillfix.py                   report: function, the stack words it declares and the ones it reads
    python3 tools/5-generated/gen_equiv/spillfix.py --fix [name ...]  one structure parameter (`StkN s`) for the declared stack ints and the words read after them

The generator reads which stack words a function takes from the loads it sees; a block copy of the arguments (one `_quick_mvn` of 12 bytes
from the entry SP) takes all of them in one instruction, and only the first was registered as a parameter. equiv.py compared its cases with
zeros in the other words; the compiled C read uninitialised frame there.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob
import re
import sys

sys.path.insert(0, _tp_os.path.dirname(_tp_os.path.abspath(__file__)))
import frame  # noqa: E402

FN = re.compile(r'(?m)^(int|void|float|Stk\d+)\s+(\w+)\s*\(([^;{]*)\)\s*\n\{')
DEREFOF = re.compile(r'\*\([^()]*\*\)\(?$')       # the end of a dereference's cast: what stands in front of the address it dereferences
MVC = re.compile(r'\{ struct mv(b?)(\d+) \{ (?:int w|char b)\[\d+\]; \}; \*\(struct mvb?\d+ \*\)\((.*?)\) = \*\(struct mvb?\d+ \*\)\((.*?)\); \}')


def off(expr):
    outer = frame._outer(expr) if '*(' in expr else expr
    if '(int)stk' not in outer:
        return None
    e = outer.replace('(int)stk', '0')
    if not re.fullmatch(r'[\s()0-9xXa-fA-F+\-]*', e):
        return None
    try:
        return eval(e)
    except Exception:
        return None


def analyse(text):
    """{name: (start, end, spill lines {word: (stk index, a number)}, words read after the last spill)}"""
    res = {}
    for m in FN.finditer(text):
        e = text.find('\n}\n', m.end())
        body = text[m.start():e + 3]
        k = re.search(r'\bint stk\[(\d+)\]', body)
        if not k:
            continue
        kb = 4 * int(k.group(1))
        spills = {int(s.group(2)): int(s.group(1)) for s in re.finditer(r'^    stk\[(\d+)\] = a(\d+);$', body, re.M)}
        if not spills:
            continue
        ks = sorted(spills)
        if ks != list(range(ks[0], ks[0] + len(ks))) or ks[0] != 8:
            continue
        idx = [spills[x] for x in ks]
        if idx != list(range(idx[0], idx[0] + len(idx))):
            continue
        entry = 4 * idx[0]
        reads, writes = set(), set()
        for d in frame.DEREF.finditer(body):
            q = d.end() - 1
            r = frame._match(body, q)
            if r < 0:
                continue
            o = off(body[q:r + 1])
            if o is None:
                continue
            sz = frame._size(d.group(1).strip())
            wr = bool(re.match(r'\)?\s*=[^=]', body[r + 1:r + 6]))
            for w in range(o, o + sz, 4):
                (writes if wr else reads).add(w)
        for c in MVC.finditer(body):
            n_ = int(c.group(2)) * (1 if c.group(1) else 4)
            od, os_ = off(c.group(3)), off(c.group(4))
            if od is not None:
                writes.update(range(od, od + n_, 4))
            if os_ is not None:
                reads.update(range(os_, os_ + n_, 4))
        for a in re.finditer(r'\(\(int\)stk \+ (\d+)\)(?: \+ (0x[0-9A-Fa-f]+|\d+))?', body):
            if DEREFOF.search(body[max(0, a.start() - 40):a.start()]):      # `*(int *)((int)stk + N)` or `*(int *)(((int)stk + N))`: a frame access, counted above
                continue
            o = int(a.group(1)) + (int(a.group(2), 0) if a.group(2) else 0)
            writes.update(range(o, o + 16, 4))
        writes.update(4 * i for i in idx)
        top = entry + 4 * len(idx)
        miss = sorted((w - entry) // 4 for w in reads if top <= w < kb and w not in writes and (w - entry) // 4 < 8)
        if miss:
            res[m.group(2)] = (m.start(), e + 3, idx, miss, len(idx))
    return res


def convert(body, name, idx, miss, ndecl):
    n = max(miss) + 1
    m = FN.match(body)
    params = [p.strip() for p in m.group(3).split(',') if p.strip()]
    keep = [p for p in params if not re.match(r'^int a(\d+)$', p) or int(p.split('a')[-1]) < 8]
    ints = [p for p in keep if p.startswith('int a')]
    flts = [p for p in keep if p.startswith('float ')]
    head = '%s %s(%s)' % (m.group(1), name, ', '.join(ints + ['Stk%d s' % n] + flts))
    body = re.sub(r'^(?:int|void|float|Stk\d+)\s+%s\s*\([^;{]*\)' % re.escape(name), head, body, count=1, flags=re.M)
    first = True
    out = []
    for l in body.split('\n'):
        if re.match(r'^    stk\[\d+\] = a(\d+);$', l) and int(re.search(r'a(\d+)', l).group(1)) >= 8:
            if first:
                out.extend('    stk[%d] = s.w[%d];' % (idx[0] + j, j) for j in range(n))
                first = False
            continue
        out.append(l)
    return '\n'.join(out), head, n


def main(argv):
    fix = '--fix' in argv
    only = [a for a in argv if not a.startswith('--')]
    for f in sorted(glob.glob('src/*.c')):
        text = open(f, errors='replace').read()
        res = analyse(text)
        if only:
            res = {n: v for n, v in res.items() if n in only}
        if not res:
            continue
        heads, last = {}, None
        for name, (s, e, idx, miss, nd) in sorted(res.items(), key=lambda kv: -kv[1][0]):
            print('%s: %s: declares %d stack word(s), reads word(s) %s' % (f, name, nd, miss))
            if fix:
                new, head, n = convert(text[s:e], name, idx, miss, nd)
                text = text[:s] + new + text[e:]
                heads[name] = (head, n)
        for name, (head, n) in heads.items():
            text = re.sub(r'(?m)^(?:extern )?(?:int|void|float)\s+%s\s*\([^;{]*\);$' % re.escape(name), head + ';', text)
            td = 'typedef struct { int w[%d]; } Stk%d;\n' % (n, n)
            if td not in text:
                m_ = re.search(r'(?m)^typedef struct \{ int w\[\d+\]; \} Stk\d+;\n', text)
                text = (text[:m_.end()] + td + text[m_.end():]) if m_ else td + text
        if fix:
            open(f, 'w').write(text)


if __name__ == '__main__':
    main(sys.argv[1:])
