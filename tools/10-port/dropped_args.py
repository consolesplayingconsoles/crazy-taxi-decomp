"""dropped_args.py: functions whose C takes fewer arguments than its callers pass.

On the SH-4 the arguments travel in r4-r7 and fr4-fr11, and a function that does not touch a register leaves the caller's
value in it for the next call it makes: generated C that dropped such an argument still passed its proofs (the original
bytes forward the register). On the host the value is lost, or arrives by luck. For each function defined in src/, the
declarations in the other files say how many int and float arguments their callers pass; a definition that takes fewer
of either is listed with the counts. Stdlib only; run in the repo."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
SRC = os.environ.get('PORT_SRC') or os.path.join(ROOT, 'src')   # native_build.py: src/ with port/src_fixes.patch
DECL = re.compile(r'^(?:extern\s+)?([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*;', re.M)
DEF = re.compile(r'^([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*\{', re.M)


def counts(params):
    p = params.strip()
    if p in ('', 'void'):
        return 0, 0, False
    if p == '...':
        return 0, 0, True
    ints = floats = 0
    var = False
    for a in p.split(','):
        a = a.strip()
        if a == '...':
            var = True
        elif re.match(r'^(float|double)\b', a) and '*' not in a:
            floats += 1
        elif re.match(r'^Stk\d', a):
            pass                      # a structure passed on the stack
        else:
            ints += 1
    return ints, floats, var


def main():
    defs, decls = {}, {}
    for f in sorted(os.listdir(SRC)):
        if not f.endswith('.c'):
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        for m in DEF.finditer(t):
            if m.group(2) in ('if', 'for', 'while', 'switch'):
                continue
            defs.setdefault(m.group(2), (f, counts(m.group(3))))
        for m in DECL.finditer(t):
            if '(' in m.group(1):
                continue
            c = counts(m.group(3))
            if c[2] and c[0] == 0:
                continue              # K&R: says nothing
            decls.setdefault(m.group(2), []).append((f, c))
    found = 0
    for name, (f, (di, df, dv)) in sorted(defs.items()):
        if dv:
            continue
        callers = [(g, c) for g, c in decls.get(name, []) if g != f]
        if not callers:
            continue
        mi = max(c[0] for g, c in callers)
        mf = max(c[1] for g, c in callers)
        if mi > di or mf > df:
            found += 1
            who = [g for g, c in callers if c[0] > di or c[1] > df]
            print('%-36s %-14s takes %d int %d float, callers pass up to %d int %d float (%s)'
                  % (name, f, di, df, mi, mf, ' '.join(sorted(set(who))[:4])))
    print('%d functions take fewer arguments than their callers pass' % found, file=sys.stderr)


if __name__ == '__main__' and '--forwards' not in sys.argv:
    main()


def forwards():
    """the dropped arguments that matter: function D takes fewer than its callers pass, and calls G with fewer than G
    takes, where the missing ones are positions D received (on the SH-4 they go on to G in their registers). Prints D, G,
    the positions. Returns [(D, file, G, (di, df), (mi, mf), (gi, gf), (ci, cf))]"""
    defs, decls, bodies = {}, {}, {}
    for f in sorted(os.listdir(SRC)):
        if not f.endswith('.c'):
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        for m in DEF.finditer(t):
            if m.group(2) in ('if', 'for', 'while', 'switch'):
                continue
            if m.group(2) not in defs:
                defs[m.group(2)] = (f, counts(m.group(3)))
                end = t.find('\n}', m.end())
                bodies[m.group(2)] = t[m.end():end]
        for m in DECL.finditer(t):
            if '(' in m.group(1):
                continue
            c = counts(m.group(3))
            if c[2] and c[0] == 0:
                continue
            decls.setdefault(m.group(2), []).append((f, c))
    out = []
    for name, (f, (di, df, dv)) in sorted(defs.items()):
        callers = [c for g, c in decls.get(name, []) if g != f]
        if dv or not callers:
            continue
        mi, mf = max(c[0] for c in callers), max(c[1] for c in callers)
        if mi <= di and mf <= df:
            continue
        body = bodies[name]
        for m in re.finditer(r'\b(\w+)\s*\(', body):
            g = m.group(1)
            if g not in defs or g == name:
                continue
            gi, gf, gv = defs[g][1]
            # the call's own arguments
            depth, i, args = 1, m.end(), ''
            while i < len(body) and depth:
                ch = body[i]
                depth += ch == '('
                depth -= ch == ')'
                if depth:
                    args += ch
                i += 1
            parts = [a for a in re.split(r',(?![^()]*\))', args) if a.strip()]
            ci = cf = 0
            for a in parts:
                a = a.strip()
                if re.match(r'^-?[0-9.]+f$|^u\d|^f\d|^\(float\)|^U|^F', a) or re.search(r'\*\(float \*\)', a[:16]):
                    cf += 1
                else:
                    ci += 1
            if (gi > ci and mi > ci and mi > di) or (gf > cf and mf > cf and mf > df):
                out.append((name, f, g, (di, df), (mi, mf), (gi, gf), (ci, cf)))
    return out


if __name__ == '__main__' and '--forwards' in sys.argv:
    for r in forwards():
        print('%-30s %-12s -> %-30s takes %s, callers pass %s, %s takes %s, passed %s' % (r[0], r[1], r[2], r[3], r[4], r[2], r[5], r[6]))
