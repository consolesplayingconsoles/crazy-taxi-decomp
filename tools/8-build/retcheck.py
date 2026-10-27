#!/usr/bin/env python3
"""retcheck.py: does each function's C return in the register the original returns in? Run in the repo. Stdlib only.

    python3 tools/8-build/retcheck.py              every definition in src/*.c against the original's code before its `rts`; exit 1 on a mismatch
    python3 tools/8-build/retcheck.py --callers    also list the files that declare a function with the other result type and use the value

A function that ends with `ftrc ...; sts fpul,r0` or `mov ...,r0` returns a number in r0; one that ends with `fmov fr1,fr0` (or any
write to fr0) returns a float in fr0. The generator declares the type from what it reads, and equiv.py compares only the register the
declaration names, so a function declared `float` that really returns an int in r0 passes every case and then hands its callers
whatever r0 holds (Crazy Taxi, 2026-10-24: fcvHermiteAngle, the angle-curve Hermite, declared float; every curve-driven joint angle
was garbage and the cab driver's arms twisted; CheckColliPoleEdge, 0/1/2 in r0, declared float). This check reads the original: for
each `rts` of a function, the last instruction before it (delay slot included) that writes r0 or fr0 gives the register, unless a
call comes after that write (the result is then the callee's, and nothing is said). A function whose paths disagree is left alone.

The result type of a definition: `float` and `double` mean fr0, a pointer (`float *`) and anything else mean r0, `void` is not checked. A register written and then used before the return (an index, a value stored) is consumed, not returned, and gives no vote. Callers that declare the
function with the other type and use the value are a warning (--callers), not an error: generated code often stores a leftover.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import hashlib
import json
import os
import re
import struct
import sys

import boundaries as B
import shdis

DEFN = re.compile(r'^(?:extern\s+)?(int|float|void|unsigned int|short|char|unsigned char|double)\s+(\**)(\w+)\s*\(([^;{]*)\)\s*\n\{', re.M)
PROTO = re.compile(r'^(?:extern\s+)?(int|float|void|unsigned int|short|char|unsigned char|double)\s+(\**)(\w+)\s*\(([^;{]*)\)\s*;', re.M)
INT_W = re.compile(r'^(sts fpul,r0|(?:mov(?:\.[lwb])?|exts\.\w|extu\.\w|neg|not|add|sub|and|or|xor|swap\.\w|movt) .*,r0|movt r0)$')
FLT_W = re.compile(r'^(?:fmov(?:\.s)?|fadd|fsub|fmul|fdiv|fneg|fabs|fsqrt|fsts|float|fldi0|fldi1|fmac|fcnvsd) .*fr0$')
CALLS = ('jsr', 'bsr', 'bsrf')


def cls(rtype, stars=''):
    """The register a declared result type names: a pointer (`float *`) is r0 whatever it points to."""
    return 'fr0' if rtype in ('float', 'double') and not stars else 'r0'


def functions():
    return {l.split()[3]: (int(l.split()[1], 16), int(l.split()[2])) for l in open('functions.txt') if l.startswith('F ')}


def instructions(a, size):
    out, x = [], a
    while x < a + size:
        out.append(shdis.decode(B.word(x), x)[0] or '')
        x += 2
    return out


def returns_in(a, size):
    """'r0', 'fr0', or None: the register the original writes last before each rts (delay slot included); None when no path says,
    when the paths disagree, or when a call follows the last write (the result is the callee's)."""
    ins = instructions(a, size)
    votes = set()
    for i, t in enumerate(ins):
        if not t.startswith('rts'):
            continue
        window = ins[max(0, i - 6):i] + (ins[i + 1:i + 2])
        vote = None
        for k in range(len(window) - 1, -1, -1):
            tt = window[k]
            if tt.split(' ')[0] in CALLS or (k > 0 and window[k - 1].split(' ')[0] in CALLS):
                break                                   # a call, or its delay slot (an argument): the result is whatever the callee left
            reg = 'r0' if INT_W.match(tt) else 'fr0' if FLT_W.match(tt) else None
            if reg:
                # written, then used before the return (an index in @(r0,rn), a value stored): consumed, not returned
                later = [w for w in window[k + 1:] if not w.startswith('rts')]
                if not any(re.search(r'(?<![\w])%s(?![\w])' % reg, w.split(' ', 1)[1] if ' ' in w else '') for w in later):
                    vote = reg
                break
        if vote:
            votes.add(vote)
    return votes.pop() if len(votes) == 1 else None


CACHE = 'build/retcheck.json'
STATS = {'read': 0, 'cached': 0}


def load_cache():
    """The register the original returns in, per function: it depends only on the original's code (functions.txt, BASE, the
    executable's bytes) and on how this file reads it, never on the C, so a build does not read the same 1,300 functions again. {} when
    absent, unreadable or of another original. The executable's bytes, not its size: one of the same size with other code kept the old
    answers."""
    key = hashlib.sha1(b''.join(open(f, 'rb').read() if os.path.exists(f) else b''
                                for f in ('functions.txt', 'BASE', '1ST_READ.BIN', os.path.abspath(__file__)))).hexdigest()
    try:
        d = json.load(open(CACHE))
        if d.get('key') == key and isinstance(d.get('r'), dict):
            return d
    except (OSError, ValueError):
        pass
    return {'key': key, 'r': {}}


def save_cache(d):
    try:
        os.makedirs(os.path.dirname(CACHE), exist_ok=True)
        json.dump(d, open(CACHE + '.tmp', 'w'))
        os.replace(CACHE + '.tmp', CACHE)
    except OSError:
        pass


def returns_cached(d, name, addr, size):
    k = '%s:%x:%d' % (name, addr, size)
    if k in d['r']:
        STATS['cached'] += 1
        return d['r'][k] or None
    STATS['read'] += 1
    reg = returns_in(addr, size)
    d['r'][k] = reg or ''
    return reg


def scan(srcdir='src'):
    """(definitions, callers): [(name, declared type, file, original register)] for definitions whose type names the other
    register; [(name, declared type, file, lines)] for files that declare a function with a type of the other register than its
    definition and use the value."""
    F = functions()
    cache = load_cache()
    defn, decl, text = {}, {}, {}
    for f in sorted(glob.glob(srcdir + '/*.c')):
        t = open(f, errors='replace').read()
        text[f] = t
        for m in DEFN.finditer(t):
            defn[m.group(3)] = (m.group(1) + m.group(2), f)
        for m in PROTO.finditer(t):
            decl.setdefault(m.group(3), {})[f] = m.group(1) + m.group(2)
    bad, callers = [], []
    for n, (rt, f) in sorted(defn.items()):
        if n not in F or rt == 'void':
            continue
        reg = returns_cached(cache, n, *F[n])
        if reg and reg != cls(rt.rstrip('*'), rt[len(rt.rstrip('*')):]):
            bad.append((n, rt, f, reg))
        for cf, ct in sorted(decl.get(n, {}).items()):
            if ct == 'void' or cls(ct.rstrip('*'), ct[len(ct.rstrip('*')):]) == cls(rt.rstrip('*'), rt[len(rt.rstrip('*')):]) or cf == f:
                continue
            lines = []
            for m in re.finditer(r'\b%s\s*\(' % re.escape(n), text[cf]):
                line = text[cf][text[cf].rfind('\n', 0, m.start()) + 1:m.start()]
                if line.strip():                        # not a bare statement: the value is used (assigned, compared, returned, passed)
                    lines.append(text[cf].count('\n', 0, m.start()) + 1)
            if lines:
                callers.append((n, ct, cf, lines))
    save_cache(cache)
    return bad, callers


def main(argv):
    bad, callers = scan()
    for n, rt, f, reg in bad:
        print('%s: declared %s in %s, the original returns in %s' % (n, rt, f, reg))
    if '--callers' in argv:
        for n, ct, cf, lines in callers:
            print('  caller: %s declares %s as %s and uses the value (lines %s)' % (cf, n, ct, ', '.join(str(x) for x in lines[:6])))
    print('retcheck: %d definition(s) return in the other register%s (%d function(s) of the original read, %d from %s)' % (
        len(bad), ('; %d caller file(s) declare the other type and use the value' % len(callers)) if '--callers' in argv else '',
        STATS['read'], STATS['cached'], CACHE))
    if bad:
        sys.exit('[ERROR] a function declared with the wrong result type passes equiv.py and hands its callers a leftover register: fix the declaration (and the return expression) by hand')


if __name__ == '__main__':
    main(sys.argv)
