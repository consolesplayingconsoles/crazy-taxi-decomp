#!/usr/bin/env python3
"""protocheck.py: a call that passes fewer stack words than its callee takes. Run in the repo. Stdlib only.

    python3 tools/8-build/protocheck.py          every file's direct calls against the callee's definition in src/*.c; exit 1 when one is short
    python3 tools/8-build/protocheck.py --reads  every definition against the registers the original reads (gen_core.entry_reads); exit 1 when it declares fewer

The SH-4 passes the first four integer arguments in r4-r7, the first eight float arguments in fr4-fr11, a structure by value always on the
stack, and the rest as one stack word each. A file that prototypes a callee with fewer of those than its definition takes and calls it
directly leaves the callee reading whatever the stack holds: Virtua Tennis drew every panel at an unset position (selPanelDraw called
without its position vector; the HUD, the score and the ball shadow did the same). The proof does not see it when the callee's definition
declares the words and the caller's prototype does not: the call is compared only up to the caller's own prototype, and the cases hold
zeros in the words.

--reads is the other half: a definition that declares fewer registers than the original reads before writing them. The generator names
a register as a parameter only when the function uses it, so one that is only passed on to a callee (cpuDblThinkAll hands r6 and r7 to
cpuDblThink, which reads them) is left out, and the proof then compares the pass-through against a leftover (Virtua Tennis cpuDblThinkAll,
cpuDblPoachCheck, matchExec, playerStartReactions: DIFFERS on cases that gave r4-r7 and fr4-fr7 to a function declared without them). The
check lists the definition, the registers the original reads that its parameters do not cover, and the parameters it declares. Calls through a cast (`((int (*)(Stk3))(f))(...)`) and `extern f();` declarations are not looked at. A variadic
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


def registers(plist):
    """(integer registers, float registers) a parameter list takes, at most 4 and 8: a structure by value and the words past them are on the stack"""
    ni = nf = 0
    for p in [x.strip() for x in plist.split(',') if x.strip() and x.strip() != 'void']:
        if re.match(r'(?:const\s+)?Stk\d+\b', p) or p == '...':
            continue
        if re.match(r'(?:const\s+)?(?:float|double)\b', p) and '*' not in p:
            nf += 1
        else:
            ni += 1
    return min(ni, 4), min(nf, 8)


def uncovered(plist, reads):
    """The registers of `reads` ('r4'-'r7', 'fr4'-'fr11') that a parameter list does not take: r(4+k) is the k-th integer parameter, fr(4+k) the k-th float"""
    ni, nf = registers(plist)
    float_ = sorted((r for r in reads if r.startswith('fr') and int(r[2:]) >= 4 + nf), key=lambda r: int(r[2:]))
    int_ = sorted((r for r in reads if not r.startswith('fr') and int(r[1:]) >= 4 + ni), key=lambda r: int(r[1:]))
    return int_ + float_


def scan_reads(srcdir='src', reads_of=None):
    """[(function, file, registers the original reads that the definition does not take, its parameter list)]; reads_of(name) is the set
    gen_core.entry_reads gives (None: not known, the function is left alone)"""
    if reads_of is None:
        import gen_core
        reads_of = gen_core.entry_reads
    out = []
    for f in sorted(glob.glob(srcdir + '/*.c')):
        for m in DEFN.finditer(open(f, errors='replace').read()):
            if '...' in m.group(2):
                continue
            reads = reads_of(m.group(1))
            if reads is None:
                continue
            miss = uncovered(m.group(2), reads)
            if miss:
                out.append((m.group(1), f, miss, m.group(2).strip()))
    return out


def main(argv):
    if '--reads' in argv:
        gaps = scan_reads()
        for n, f, miss, plist in sorted(gaps):
            print('%s: %s declares (%s), the original also reads %s' % (n, f, plist or 'void', ', '.join(miss)))
        print('protocheck: %d definition(s) declare fewer registers than the original reads' % len(gaps))
        if gaps:
            sys.exit(1)
        return
    short = scan()
    for n, f, calls, pw, dw in sorted(short):
        print('%s: %s passes %d stack word(s) in %d call(s), the definition takes %d' % (n, f, pw, calls, dw))
    print('protocheck: %d (file, function) pair(s) call with fewer stack words than the definition takes' % len(short))
    if short:
        sys.exit(1)


if __name__ == '__main__':
    main(sys.argv)
