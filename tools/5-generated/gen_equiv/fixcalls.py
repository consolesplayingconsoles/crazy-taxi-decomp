#!/usr/bin/env python3
"""fixcalls.py: the call sites of a function that takes a structure by value (stackparams.py gave it the parameter): add the argument. Run in the repo.

    python3 tools/5-generated/gen_equiv/fixcalls.py [--fix] name:K:I [name:K:I ...]     K words of structure, inserted as the argument after the I-th (0-based)
    python3 tools/5-generated/gen_equiv/fixcalls.py [--fix] name:K:I:i                  the callee takes the K words as ints (a8, a9, ...): K int arguments instead of one structure
    python3 tools/5-generated/gen_equiv/fixcalls.py --prev [--fix] ...                  also: a call with no setup of its own takes the structure the call just before it was given
    python3 tools/5-generated/gen_equiv/fixcalls.py --protos name [name ...]           give every file's prototype of those functions the definition's parameter types

The generator's callers set up the callee's stack words in their own frame (a pushed word at `stk + N`, the structure the callee reads right
above it, written there by vecMake or copied by a block move), and call without them: the C compiler pushes nothing for them. This finds,
for each call, how the original's words were set up and passes them as the argument:
  - a block copy of K words just before the call:     { struct mvK { int w[K]; }; *(struct mvK *)(DST) = *(struct mvK *)(SRC); }   -> *(StkK *)(SRC)
  - a store of the call's pointer argument at stk + N (within 12 lines before it)                                             -> *(StkK *)((int)stk + N + 4)
A call that matches neither is listed and left alone.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob
import re
import sys


def match(t, q):
    d = 0
    for i in range(q, len(t)):
        if t[i] == '(':
            d += 1
        elif t[i] == ')':
            d -= 1
            if d == 0:
                return i
    return -1


def split_args(s):
    out, d, cur = [], 0, ''
    for ch in s:
        if ch == '(':
            d += 1
        if ch == ')':
            d -= 1
        if ch == ',' and d == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def strip_parens(x):
    x = x.strip()
    while x.startswith('(') and x.endswith(')') and match(x, 0) == len(x) - 1:
        x = x[1:-1].strip()
    return x


def sites(text, name):
    """[(call start, call end incl ';', args)] of every call statement of name (not a definition or a prototype)"""
    out = []
    for m in re.finditer(r'(?m)^(\s*)(?:[\w\*\(\)\[\]\. ]+ = |return \(?)?(?<![\w])%s\(' % re.escape(name), text):
        q = m.end() - 1
        r = match(text, q)
        end_ = r + 1
        while text[end_:end_ + 1] == ')':                   # `return (f(...));`
            end_ += 1
        if r < 0 or text[end_:end_ + 1] != ';':
            continue
        line = text[text.rfind('\n', 0, m.start() + len(m.group(1))) + 1:m.end()]
        if re.match(r'^\s*(extern\s+)?(int|void|float)\s+%s\(' % re.escape(name), line):
            continue
        out.append((m.start() + len(m.group(1)), end_ + 1, split_args(text[q + 1:r]), m.start(), q))
    for m in re.finditer(r'(?m)^(\s*)(?:[\w\*\(\)\[\]\. ]+ = )?\(?\(int \(\*\)\(([^()]*)\)\)\(%s\)\)\(' % re.escape(name), text):
        q = m.end() - 1
        r = match(text, q)
        if r < 0:
            continue
        end = r + 1
        while text[end:end + 1] == ')':                     # a call wrapped in parentheses: `t = (((int (*)(..))(f))(...));`
            end += 1
        if text[end:end + 1] != ';':
            continue
        out.append((m.start() + len(m.group(1)), end + 1, split_args(text[q + 1:r]), m.start(), ('cast', m.group(2), q, r)))
    return out


MV = re.compile(r'^\s*\{ struct mv(\d+) \{ int w\[\1\]; \}; \*\(struct mv\1 \*\)\((.*)\) = \*\(struct mv\1 \*\)\((.*)\); \}\s*$')
STORE = re.compile(r'^\s*\(?\*\(int \*\)\(\(int\)stk \+ (\d+)\)\)? = (.*);\s*$')
STOREL = re.compile(r'^\s*R(10\d\d) = (.*);\s*$')
VECMAKEP = re.compile(r'^\s*vecMake\([^;]*?, \(\(int\)stk \+ (\d+)\), [^;]*\);\s*$')
VECMAKE = re.compile(r'^\s*\*\(Stk(\d+) \*\)\(\(*\(int\)stk \+ (\d+)\)\)? = vecMake\(')


def find_setup(text, call_start, args, k, ptr_i):
    """How the callee's stack words were set up before the call: ('copy', source, line), ('store', frame offset of the pointer word, line),
    ('built', frame offset of the structure, line)"""
    lines = text[:call_start].split('\n')
    prev = lines[:-1]
    for back in range(1, 7):
        if back > len(prev):
            break
        l = prev[-back]
        m = MV.match(l)
        if m:
            if int(m.group(1)) == k:
                return ('copy', m.group(3), len(prev) - back)
            continue
        s = STORE.match(l)
        if s and ptr_i < len(args) and strip_parens(s.group(2)) == strip_parens(args[ptr_i]):
            return ('store', int(s.group(1)), len(prev) - back)
        s = STOREL.match(l)
        if s and ptr_i < len(args) and strip_parens(s.group(2)) == strip_parens(args[ptr_i]):
            return ('store', int(s.group(1)) - 1000, len(prev) - back)
        v = VECMAKE.match(l)
        if v and int(v.group(1)) == k:
            return ('built', int(v.group(2)), len(prev) - back)
        v = VECMAKEP.match(l)
        if v and k == 3:
            return ('built', int(v.group(1)), len(prev) - back)
        if re.match(r'^\s*(L_\w+:;|\}|\{|if |for |return |break|goto |\w+\()', l) and not re.match(r'^\s*\w+ = ', l):
            break
    return None


def protos(names, only=None):
    """Every prototype (not a definition, not an old-style `()` one) of these functions takes the definition's parameter types."""
    texts = {f: open(f, errors='replace').read() for f in glob.glob('src/*.c')}
    defs = {}
    for f, tx in texts.items():
        for m in re.finditer(r'(?m)^(?:int|void|float|Stk\d+)\s+(\**)(\w+)\s*\(([^;{]*)\)\s*\n\{', tx):
            if m.group(2) in names:
                defs[m.group(2)] = [re.sub(r'\s*\b\w+$', '', p.strip()) if re.search(r'\w\s+\**\w+$', p.strip()) and not re.match(r'^(?:unsigned )?\w+$', p.strip()) else p.strip() for p in m.group(3).split(',')]
    changed = 0
    for f, tx in texts.items():
        orig = tx
        for n, tl in defs.items():
            if only and f not in only.get(n, []):
                continue
            new = ', '.join(tl)
            tx = re.sub(r'(?m)^((?:extern\s+)?(?:int|void|float|Stk\d+)\s+\**%s\s*\()([^;{()]+)(\)\s*;)' % re.escape(n), lambda m: m.group(1) + new + m.group(3), tx)
        if tx != orig:
            open(f, 'w').write(tx)
            changed += 1
    print('protos: %d file(s) changed, %d definition(s) found of %d' % (changed, len(defs), len(names)))


def find_prev(text, call_start, k):
    """The words at SP stay where the last push left them until the next one: a call that pushes nothing of its own sees the structure the
    call (or statement) just before it was given. The expression of that structure, from the nearest of the two lines above."""
    lines = text[:call_start].split('\n')[:-1]
    for back in (1, 2):
        if back > len(lines):
            break
        l = lines[-back]
        i = l.find('*(Stk%d *)(' % k)
        if i >= 0:
            q = l.find('(', i + len('*(Stk%d *)' % k) - 1)
            r = match(l, q)
            if r > 0:
                return l[q:r + 1]
    return None


def patch_proto(text, name, i, typ):
    """the file's prototype of name takes the new parameter type(s) after the i-th"""
    m = re.search(r'(?m)^((?:extern\s+)?(?:int|void|float|Stk\d+)\s+\**%s\s*\()([^;{()]*)(\)\s*;)' % re.escape(name), text)
    if not m:
        return text
    ps = [x.strip() for x in m.group(2).split(',') if x.strip()]
    if ps[i + 1:i + 1 + len(typ)] == typ:
        return text                                         # already there (a second run)
    ps = ps[:i + 1] + typ + ps[i + 1:]
    return text[:m.start()] + m.group(1) + ', '.join(ps) + m.group(3) + text[m.end():]


def main(argv):
    fix = '--fix' in argv
    if '--protos' in argv:
        import json
        only = {}
        for a in argv:
            if a.startswith('@'):
                only = json.load(open(a[1:]))
        return protos([a for a in argv if not a.startswith('--') and not a.startswith('@')], only)
    specs = [a.split(':') for a in argv if not a.startswith('--') and not a.startswith('@')]
    only = {}                                           # @file.json: {function: [files]}, the files whose prototype of it passes too few words
    for a in argv:
        if a.startswith('@'):
            import json
            only = json.load(open(a[1:]))
    done = bad = 0
    changed_names = set()
    for f in sorted(glob.glob('src/*.c')):
        text = open(f, errors='replace').read()
        orig = text
        for spec in specs:
            name, k, i = spec[:3]
            if only and f not in only.get(name, []):
                continue
            ints = len(spec) > 3 and spec[3] == 'i'
            k, i = int(k), int(i)
            # last call first: the text before it stays as it is
            for start, end, args, ms, q in sorted(sites(text, name), reverse=True):
                if len(args) > i + 1 and any(a.startswith('*(Stk%d *)' % k) for a in args):
                    continue                                    # already passes it
                if ints and len(args) >= i + 1 + k:
                    continue                                    # already passes its ints
                if len(args) <= i:
                    bad += 1
                    print('%s:%d %s: only %d argument(s), the structure goes after argument %d: left alone' % (f, text.count('\n', 0, start) + 1, name, len(args), i + 1))
                    continue
                su = find_setup(text, start, args, k, i)
                if not su and '--prev' in argv:
                    pv = find_prev(text, start, k)
                    if pv:
                        su = ('prev', pv)
                fn = text.rfind('\n}\n', 0, start)
                fname = re.search(r'(?m)^(?:int|void|float|Stk\d+)\s+(\w+)\s*\(', text[fn + 1:])
                if not su:
                    bad += 1
                    print('%s:%d %s in %s: no setup found, left alone' % (f, text.count('\n', 0, start) + 1, name, fname.group(1) if fname else '?'))
                    continue
                if su[0] == 'copy':
                    arg = '*(Stk%d *)(%s)' % (k, su[1])
                    base = '(%s)' % su[1]
                elif su[0] == 'prev':
                    arg = '*(Stk%d *)%s' % (k, su[1])
                    base = su[1]
                elif su[0] == 'built':
                    arg = '*(Stk%d *)((int)stk + %d)' % (k, su[1])
                    base = '((int)stk + %d)' % su[1]
                else:
                    arg = '*(Stk%d *)((int)stk + %d)' % (k, su[1] + 4)
                    base = '((int)stk + %d)' % (su[1] + 4)
                new = ['*(int *)(%s + %d)' % (base, 4 * j) for j in range(k)] if ints else [arg]
                newargs = args[:i + 1] + new + args[i + 1:]
                if isinstance(q, tuple):
                    _, types, q0, r0 = q
                    tl = split_args(types)
                    tl = tl[:i + 1] + (['int'] * k if ints else ['Stk%d' % k]) + tl[i + 1:]
                    head = text[start:text.find('(int (*)(', start) + len('(int (*)(')]
                    mid = text[text.find('(int (*)(', start) + len('(int (*)(') + len(types):q0 + 1]
                    tail_ = text[r0:end]
                    text = text[:start] + head + ', '.join(tl) + mid + ', '.join(newargs) + tail_ + text[end:]
                else:
                    qpos = text.find(name + '(', start) + len(name)
                    head = text[start:qpos]
                    tail = text[match(text, qpos) + 1:end]            # `);`, or `));` for a return (...)
                    newcall = head + '(' + ', '.join(newargs) + ')' + tail
                    text = text[:start] + newcall + text[end:]
                if su[0] == 'copy':                              # the block copy was this call's stack word: gone
                    lines = text.split('\n')
                    ln = su[2]
                    del lines[ln]
                    text = '\n'.join(lines)
                done += 1
                changed_names.add((name, i, ints, k))
        for nm, ii, ints_, kk in changed_names:
            text = patch_proto(text, nm, ii, ['int'] * kk if ints_ else ['Stk%d' % kk])
            if not ints_ and 'typedef struct { int w[%d]; } Stk%d;' % (kk, kk) not in text:
                text = 'typedef struct { int w[%d]; } Stk%d;\n' % (kk, kk) + text
        changed_names.clear()
        if fix and text != orig:
            open(f, 'w').write(text)
    print('fixcalls: %d call(s) %s, %d left alone' % (done, 'changed' if fix else 'would change', bad))


if __name__ == '__main__':
    main(sys.argv[1:])
