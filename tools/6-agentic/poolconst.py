#!/usr/bin/env python3
"""Turn the C's reads of the original code's literal pools into constants. Run in the repo.

    python3 tools/6-agentic/poolconst.py            report what would change (nothing written)
    python3 tools/6-agentic/poolconst.py --apply    rewrite src/*.c

The generated C reads some constants where the original keeps them: `*(float *)0xC053E44` is a word of a function's literal
pool, and the small tables past a function's rts are read the same way. Never rewritten: a store, an address any C
stores to (a variable), and the sdk.txt ranges of the SDK libraries and the boot block (linked from the libraries, or
patched at run time). That works while the original executable is in memory (the simulator, the byte-identical build) and breaks in a build
from the C, where other code sits at that address. Every read of a 1-, 2- or 4-byte value at an address inside a function's
span (functions.txt), or between two functions less than GAP apart, becomes the value itself, from 1ST_READ.BIN: a float literal (exact: the same bits), an integer, or the
name of the function whose entry the word holds (a function moves in a build from the C; its name follows it). Reads are
not compared by tools/equiv.py, so a rewritten function stays Equivalent; re-check its file anyway.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import glob
import os
import re
import struct
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), 'gen_equiv'))

GAP = 0x1000          # a longer stretch between two functions is data, not a function's pools
# `*(T *)0xADDR` or `*(T *)(0xADDR)`: the address alone. Not `*(T *)(0xADDR + i)` (a table read: the address is a base), and
# a closing parenthesis is taken only with its own opening one.
READ = re.compile(r'\*\(\s*(volatile\s+)?((?:unsigned\s+|signed\s+)?(?:int|short|char)|float)\s*\*\s*\)\s*'
                  r'(?:(0x[0-9A-Fa-f]{6,8})\b(?!\s*[\[.])|\(\s*(0x[0-9A-Fa-f]{6,8})\s*\))')


def main(argv):
    apply = '--apply' in argv
    base = int(open('BASE').read().strip(), 16)
    exe = open('1ST_READ.BIN', 'rb').read()
    spans, entry = [], {}
    for l in open('functions.txt'):
        p = l.split()
        if len(p) >= 4 and p[0] == 'F':
            a, n = int(p[1], 16), int(p[2])
            spans.append((a, a + n))
            entry.setdefault(a, p[3])
    spans.sort()
    starts = [s for s, _ in spans]

    def canon(a):
        return (base & 0xE0000000) | (a & 0x1FFFFFFF)

    written = set()      # an address any C stores to is a variable, wherever it sits
    skip_ranges = []     # sdk.txt ranges linked from the SDK's libraries or patched at run time: the build does not use their C
    if os.path.exists('sdk.txt'):
        for l in open('sdk.txt'):
            p = l.split()
            if p and p[0] == 'range' and ('SDK librar' in l or 'boot block' in l):
                skip_ranges.append((int(p[1], 16), int(p[2], 16)))
    STORE = re.compile(r'\*\(\s*(?:volatile\s+)?(?:unsigned\s+|signed\s+)?(?:int|short|char|float)\s*\*\s*\)\s*\(?\s*(0x[0-9A-Fa-f]{6,8})\s*\)?\s*(?:[-+*/&|^]?=)(?!=)')
    for f in glob.glob('src/*.c'):
        for m in STORE.finditer(open(f, errors='replace').read()):
            written.add(canon(int(m.group(1), 16)))

    def in_code(a):
        if a in written or any(s <= a < e for s, e in skip_ranges):
            return False
        """Inside a function's span, or in the gap between two functions (the pools and constant tables a function keeps past
        its rts). The library's data after its last function is not code: it moves with the library and holds variables."""
        i = bisect.bisect_right(starts, a) - 1
        if i < 0:
            return False
        if spans[i][0] <= a < spans[i][1]:
            return True
        return i + 1 < len(spans) and a < spans[i + 1][0] and spans[i + 1][0] - spans[i][1] <= GAP

    def ffmt(bits):
        f = struct.unpack('<f', struct.pack('<I', bits))[0]
        if f != f or f in (float('inf'), float('-inf')):
            return None
        for p in range(6, 18):
            t = '%.*g' % (p, f)
            if struct.unpack('<I', struct.pack('<f', float(t)))[0] == bits:
                return (t if any(ch in t for ch in '.en') else t + '.0') + 'f'
        return None

    counts = {'float': 0, 'int': 0, 'function': 0, 'kept (volatile or not a float)': 0}
    changed = {}
    for f in sorted(glob.glob('src/*.c')):
        if os.path.basename(f).startswith('zz_'):
            continue
        s = open(f, errors='replace').read()

        def sub(m):
            vol, ty, h = m.group(1), m.group(2), m.group(3) or m.group(4)
            if re.match(r'\s*(?:[-+*/&|^]?=)(?!=)', s[m.end():m.end() + 4]):      # a store: never a constant
                return m.group(0)
            a = canon(int(h, 16))
            if not in_code(a):
                return m.group(0)
            if vol:
                counts['kept (volatile or not a float)'] += 1
                return m.group(0)
            off = a - base
            sz = 4 if ty in ('int', 'unsigned int', 'signed int', 'float') else 2 if 'short' in ty else 1
            if off < 0 or off + sz > len(exe):
                return m.group(0)
            if ty == 'float':
                t = ffmt(struct.unpack_from('<I', exe, off)[0])
                if t is None:
                    counts['kept (volatile or not a float)'] += 1
                    return m.group(0)
                counts['float'] += 1
                return t
            fmt = {'int': '<i', 'signed int': '<i', 'unsigned int': '<I', 'short': '<h', 'signed short': '<h',
                   'unsigned short': '<H', 'char': '<b', 'signed char': '<b', 'unsigned char': '<B'}[re.sub(r'\s+', ' ', ty)]
            v = struct.unpack_from(fmt, exe, off)[0]
            if sz == 4 and canon(v & 0xFFFFFFFF) in entry:
                counts['function'] += 1
                return '((%s)%s)' % (ty, entry[canon(v & 0xFFFFFFFF)])
            counts['int'] += 1
            return '((%s)0x%X)' % (ty, v & {1: 0xFF, 2: 0xFFFF, 4: 0xFFFFFFFF}[sz]) if v >= 0 else '((%s)%d)' % (ty, v)

        t = READ.sub(sub, s)
        if t != s:
            changed[f] = t
    print('reads of the original code: %s; files: %d' % (', '.join('%s %d' % kv for kv in counts.items()), len(changed)))
    if apply:
        for f, t in changed.items():
            open(f, 'w').write(t)
        print('applied: re-check the changed files (tools/equiv.py) and declare the functions the C now names')


if __name__ == '__main__':
    main(sys.argv)
