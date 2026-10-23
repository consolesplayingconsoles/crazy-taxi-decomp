#!/usr/bin/env python3
"""Hold a value the C recomputes again and again in a local, as the original held it in a register. Run in the repo.

    python3 tools/7-reduction/hoist.py [--apply] <name> ...

The generated C writes a register's value out in full at every use, including a load from memory inside an address
(`*(short *)(a4 + 0x154)` in the middle of a destination address). The compiler cannot keep such a value: any store in
between may change it, so it loads and computes it again for each use. The original loaded it once. For each name this
finds the longest expression with a dereference that repeats four times or more inside a stretch with no branch, call
or assignment to anything the expression reads, holds it in a local from its first use, and reports the compiled size
before and after. With --apply a smaller version is checked on the function's cases in a scratch file and, when equivalent,
replaces the old C (tools/equiv.py records the proof).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import os
import re
import shutil
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), 'gen_equiv'))
import consistency  # noqa: E402
import gen_drv      # noqa: E402
import gen_pipe     # noqa: E402
import sizes        # noqa: E402

MINLEN, MINREP = 45, 4
LOOSE = '--loose' in sys.argv
CALL = re.compile(r'\b(?!if\b|for\b|while\b|switch\b|sizeof\b|return\b)[A-Za-z_]\w*\s*\(')
CTRL = re.compile(r'\b(if|for|while|switch|return|goto|break|continue|else|case)\b|[{}]|^\s*\w+:')


def groups(line):
    """Balanced parenthesised substrings of a line."""
    out, stack = [], []
    for i, ch in enumerate(line):
        if ch == '(':
            stack.append(i)
        elif ch == ')' and stack:
            j = stack.pop()
            out.append(line[j:i + 1])
    return out


def candidate(body):
    """(expression, first line, last line) of the best expression to hold, or None."""
    lines = body.split('\n')
    seen = {}
    for k, l in enumerate(lines):
        if l.lstrip().startswith(('/*', '//')):
            continue
        for e in set(groups(l)):
            if len(e) >= MINLEN and '*(' in e:
                seen.setdefault(e, []).append(k)
    best = None
    for e, ks in seen.items():
        occ = sum(lines[k].count(e) for k in ks)
        if occ < MINREP:
            continue
        a, b = ks[0], ks[-1]
        span = lines[a:b + 1]
        names = set(re.findall(r'\b[A-Za-z_]\w*\b', e)) - {'int', 'short', 'char', 'unsigned', 'signed', 'float'}
        ok = True
        for x, l in enumerate(span):
            rest = l.replace(e, 'X')
            if x and (CTRL.search(rest) or CALL.search(re.sub(r'\([a-z ]+\s*\**\)', '', rest))):
                ok = False
                break
            if any(re.search(r'\b%s\s*(=[^=]|\+\+|--)' % re.escape(n), rest) for n in names):
                ok = False
                break
        if ok and (best is None or occ * len(e) > best[3]):
            best = (e, a, b, occ * len(e))
    return best[:3] if best else None


def candidate_loose(body):
    """The expression that repeats most (6+ times, 40+ characters, a dereference) anywhere in the function, held from its first use.
    Refused when the function assigns a name the expression reads, or stores to an address written the same way."""
    lines = body.split('\n')
    count, first = {}, {}
    for k, l in enumerate(lines):
        if l.lstrip().startswith(('/*', '//')):
            continue
        for e in set(groups(l)):
            if len(e) >= 40 and '*(' in e:
                count[e] = count.get(e, 0) + l.count(e)
                first.setdefault(e, k)
    for e, n in sorted(count.items(), key=lambda kv: -kv[1] * len(kv[0])):
        if n < 6:
            break
        a = first[e]
        names = set(re.findall(r'\b[A-Za-z_]\w*\b', e)) - {'int', 'short', 'char', 'unsigned', 'signed', 'float'}
        bad = False
        inner = [g for g in groups(e) if len(g) >= 8]
        for l in lines[a:]:
            rest = l.replace(e, 'X')
            if any(re.search(r'\b%s\s*(=[^=]|\+\+|--|\+=|-=)' % re.escape(nm), rest) for nm in names):
                bad = True
                break
            m = re.match(r'\s*(\*\(.*?\)\s*)=[^=]', rest)
            if m and any(g in m.group(1) for g in inner):
                bad = True
                break
        if not bad:
            return e, a, n
    return None


def hold(body, e, a, tag):
    lines = body.split('\n')
    lines = lines[:a] + ['    %s = %s;' % (tag, e)] + [l.replace(e, tag) for l in lines[a:]]
    txt = '\n'.join(lines)
    i = txt.index('{\n') + 2
    return txt[:i] + '    int %s;\n' % tag + txt[i:]


def hoisted(old):
    """The function text with repeated values held, and how many were held."""
    txt, n = old, 0
    for _ in range(4):
        c = candidate(txt) or (candidate_loose(txt) if LOOSE else None)
        if not c:
            break
        txt = hold(txt, c[0], c[1], 'h%d' % n)
        n += 1
    return txt, n


def where(fn):
    for f in glob.glob('src/*.c'):
        if os.path.basename(f).startswith('zz_'):
            continue
        t = open(f, errors='replace').read()
        b = consistency.block(t, fn)
        if b and os.path.exists('tests/%s/%s.json' % (os.path.basename(f)[:-2], fn)):
            return os.path.basename(f)[:-2], t, b
    return None, None, None


def main():
    args = sys.argv[1:]
    apply = '--apply' in args
    names = [a for a in args if not a.startswith('--')]
    if '--file' in args:
        names = [l.split()[0] for l in open(names.pop(0)) if l.strip()]
    manual = consistency.manual_names()          # written by hand: never rewritten by a tool
    names = [n for n in names if n not in manual or print('%s skip (manual: %s)' % (n, manual[n]))]
    for fn in names:
        stem, t, b = where(fn)
        if not stem:
            print('%-24s not found' % fn)
            continue
        old = t[b[0]:b[1]]
        new, n = hoisted(old)
        if not n:
            print('%-24s nothing to hold' % fn)
            continue
        head = old.split('(')[0]
        var = 'void' if head.startswith('void') else ('fr0' if head.startswith('float') else 'r0')
        vs = gen_pipe.variants(fn, False)
        var = var if var in vs else vs[-1]
        _, c = gen_drv.build(fn, var, False)
        a, z = sizes.c_size(fn, old, c.protos), sizes.c_size(fn, new, c.protos)
        print('%-24s held %d value(s): %s -> %s' % (fn, n, a, z), end='')
        if not (apply and a and z and z < a):
            print()
            continue
        os.makedirs('tests/zz_hoist', exist_ok=True)
        shutil.copy('tests/%s/%s.json' % (stem, fn), 'tests/zz_hoist/%s.json' % fn)
        open('src/zz_hoist.c', 'w').write('/* scratch */\n' + gen_drv.head_protos([(fn, new, None, c.protos)]) + '\n\n' + new + '\n')
        r = subprocess.run(['python3', 'tools/equiv.py', '--fresh', 'src/zz_hoist.c', fn], capture_output=True, text=True)
        shutil.rmtree('tests/zz_hoist', ignore_errors=True)
        os.remove('src/zz_hoist.c')
        if 'EQUIVALENT' not in r.stdout:
            print('  | not equivalent, left as it was')
            continue
        t2 = open('src/%s.c' % stem).read()
        b2 = consistency.block(t2, fn)
        open('src/%s.c' % stem, 'w').write(t2[:b2[0]] + new + t2[b2[1]:])
        subprocess.run(['python3', 'tools/equiv.py', 'src/%s.c' % stem, fn], capture_output=True, text=True)
        print('  | installed')


if __name__ == '__main__':
    main()
