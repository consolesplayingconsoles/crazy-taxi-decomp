#!/usr/bin/env python3
"""protocheck.py: a call that passes fewer stack words than its callee takes. Run in the repo. Stdlib only.

    python3 tools/8-build/protocheck.py          every file's direct calls against the callee's definition in src/*.c; exit 1 when one is short

The SH-4 passes the first four integer arguments in r4-r7, the first eight float arguments in fr4-fr11, a structure by value always on the
stack, and the rest as one stack word each. A file that prototypes a callee with fewer of those than its definition takes and calls it
directly leaves the callee reading whatever the stack holds: Virtua Tennis drew every panel at an unset position (selPanelDraw called
without its position vector; the HUD, the score and the ball shadow did the same). The proof does not see it when the callee's definition
declares the words and the caller's prototype does not: the call is compared only up to the caller's own prototype, and the cases hold
zeros in the words. Calls through a cast (`((int (*)(Stk3))(f))(...)`) and `extern f();` declarations are not looked at. A variadic
definition (`...`) is left alone.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import collections
import glob
import re
import sys

TYPE = r'(?:unsigned\s+)?(?:int|float|void|short|char|double|Stk\d+)'
DEFN = re.compile(r'^(?:extern\s+)?%s\s*\**\s*(\w+)\s*\(([^;{]*)\)\s*\n\{' % TYPE, re.M)
PROTO = re.compile(r'^(?:extern\s+)?%s\s*\**\s*(\w+)\s*\(([^;{()]*)\)\s*;' % TYPE, re.M)


def words(plist):
    """The stack words a parameter list takes, or None when it is variadic or unknown"""
    if '...' in plist:
        return None
    ni = nf = st = 0
    for p in [x.strip() for x in plist.split(',') if x.strip() and x.strip() != 'void']:
        m = re.match(r'(?:const\s+)?Stk(\d+)\b', p)
        if m:
            st += int(m.group(1))
        elif re.match(r'(?:const\s+)?(?:float|double)\b', p) and '*' not in p:
            nf += 1
        else:
            ni += 1
    return max(0, ni - 4) + max(0, nf - 8) + st


def scan(srcdir='src'):
    """[(function, file, direct calls, words the file's prototype passes, words the definition takes)]"""
    defs, protos, texts = {}, collections.defaultdict(dict), {}
    for f in sorted(glob.glob(srcdir + '/*.c')):
        t = open(f, errors='replace').read()
        texts[f] = t
        for m in DEFN.finditer(t):
            defs[m.group(1)] = (f, m.group(2))
        for m in PROTO.finditer(t):
            protos[m.group(1)][f] = m.group(2)
    out = []
    for n, (df, dp) in defs.items():
        dw = words(dp)
        if not dw:
            continue
        for f, p in protos.get(n, {}).items():
            pw = words(p)
            if f == df or pw is None or pw >= dw:
                continue
            calls = 0
            for m in re.finditer(r'(?<![\w.])%s\(' % re.escape(n), texts[f]):
                line = texts[f][texts[f].rfind('\n', 0, m.start()) + 1:m.end()]
                if not re.match(r'^\s*(extern\s+)?%s\s*\**\s*%s\(' % (TYPE, re.escape(n)), line):
                    calls += 1
            if calls:
                out.append((n, f, calls, pw, dw))
    return out


def main(argv):
    short = scan()
    for n, f, calls, pw, dw in sorted(short):
        print('%s: %s passes %d stack word(s) in %d call(s), the definition takes %d' % (n, f, pw, calls, dw))
    print('protocheck: %d (file, function) pair(s) call with fewer stack words than the definition takes' % len(short))
    if short:
        sys.exit(1)


if __name__ == '__main__':
    main(sys.argv)
