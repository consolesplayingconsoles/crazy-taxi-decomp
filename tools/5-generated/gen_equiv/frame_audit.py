#!/usr/bin/env python3
"""frame_audit.py: generated functions whose frame locals (R<1000+offset>, frame.py) the current rule would not make. Run in the repo. Stdlib only.

    python3 tools/5-generated/gen_equiv/frame_audit.py           report: function, file, the slots
    python3 tools/5-generated/gen_equiv/frame_audit.py --fix     write those slots back as frame accesses (the generator's own form before
                                                                 scalarize), drop the local's declaration and its first load; prove with equiv.py after

A local made from a frame slot is only right while nothing reaches the slot through memory. frame.py's rule for that was tightened
(a frame address passed on reaches 64 bytes); functions written before kept locals inside a buffer the function hands to a callee
(Virtua Tennis sprTexLoad: the three -1 words ending a texture list on the stack were locals, never stored, and the list had no end).
For each function with such locals the audit puts the slots back as memory in a copy of the text, runs frame.scalarize as it is
now, and reports every local the rule would not pick again."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob
import re
import sys

sys.path.insert(0, _tp_os.path.dirname(_tp_os.path.abspath(__file__)))
import frame  # noqa: E402

FN = re.compile(r'(?m)^(?:int|void|float|Stk\d+)\s+(\w+)\s*\([^;{]*\)\s*\n\{')
INIT = re.compile(r'^    R(\d{4,}) = \*\((int|float|unsigned int) \*\)\(\(int\)stk \+ (\d+)\);$', re.M)
DECL = re.compile(r'^    (?:register )?(?:int|float) R(\d{4,});$', re.M)


def functions(text):
    for m in FN.finditer(text):
        e = text.find('\n}\n', m.end())
        if e < 0:
            continue
        yield m.group(1), m.start(), e + 3


def unscalarize(body, slots):
    """the body with the locals of `slots` (offset -> type) written as frame accesses again, their declarations and first loads gone"""
    out = []
    for l in body.split('\n'):
        m = INIT.match(l) or DECL.match(l)
        if m and int(m.group(1)) - 1000 in slots:
            continue
        for n, t in slots.items():
            l = re.sub(r'\bR%d\b' % (1000 + n), '(*(%s *)((int)stk + %d))' % (t, n), l)
        out.append(l)
    return '\n'.join(out)


def audit(path, text):
    """[(name, {offset: type} that the current rule would not pick)]"""
    out = []
    for name, s, e in functions(text):
        body = text[s:e]
        slots = {int(m.group(1)) - 1000: m.group(2) for m in INIT.finditer(body)}
        if not slots:
            continue
        plain = unscalarize(body, slots)
        new = frame.scalarize(plain)
        kept = {int(m.group(1)) - 1000 for m in INIT.finditer(new)}
        lost = {n: t for n, t in slots.items() if n not in kept}
        if lost:
            out.append((name, lost))
    return out


def main(argv):
    fix = '--fix' in argv
    total, files = 0, 0
    for f in sorted(glob.glob('src/*.c')):
        text = open(f, errors='replace').read()
        found = audit(f, text)
        if not found:
            continue
        files += 1
        for name, lost in found:
            total += 1
            print('%s: %s: slots %s' % (f, name, ', '.join('%d (%s)' % (n, t) for n, t in sorted(lost.items()))))
        if fix:
            for name, lost in found:
                for n_, s, e in functions(text):
                    if n_ == name:
                        text = text[:s] + unscalarize(text[s:e], lost) + text[e:]
                        break
            open(f, 'w').write(text)
    print('frame_audit: %d function(s) in %d file(s) keep a frame local the current rule would not make%s' % (total, files, '; written back as memory, prove them with equiv.py' if fix and total else ''))


if __name__ == '__main__':
    main(sys.argv[1:])
