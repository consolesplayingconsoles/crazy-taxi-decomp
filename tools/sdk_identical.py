#!/usr/bin/env python3
"""sdk_identical.py: open functions whose bytes are verbatim in the SDK's own compiled library code. Run in the repo. Stdlib only.

    python3 tools/sdk_identical.py <SDK dir> [<SDK dir> ...]

Scans every library and object file (*.lib, *.a, *.obj, *.o, *.elf) under the directories you give and looks for each function of
16 bytes or more that is not done yet (padding nops at its end ignored). A function whose bytes appear in a library are the library's
own code: nothing to decompile, a decomp links the library. Writes sdk-identical.txt (name, size, file, offset in the file); progress.py
counts the names as done, in a row of their own (they are not C). Hand-written assembly the SDK ships only as object code (a maths
library, startup code) is the usual case. Compiled game code never matches: its literal pools hold addresses of the game.
"""
import os
import sys

if len(sys.argv) < 2:
    sys.exit(__doc__)
exe = open('1ST_READ.BIN', 'rb').read()
base = int(open('BASE').read().strip(), 16)
equivalent = set(open('tests/equivalent.txt').read().split()) if os.path.exists('tests/equivalent.txt') else set()
verified = set(l.strip() for l in open('sdk-verified.txt') if l.strip() and not l.startswith('#')) if os.path.exists('sdk-verified.txt') else set()
funcs = [(l.split()[3], int(l.split()[1], 16), int(l.split()[2])) for l in open('functions.txt') if l.startswith('F ')]
todo = [(n, a, s) for n, a, s in funcs if n not in equivalent and n not in verified]
files = []
for root in sys.argv[1:]:
    for dp, _, fs in os.walk(os.path.expanduser(root)):
        for f in fs:
            if f.lower().endswith(('.lib', '.a', '.obj', '.o', '.elf')):
                p = os.path.join(dp, f)
                if os.path.getsize(p) < 150_000_000:
                    files.append(p)
buf = bytearray(); starts = []
for p in files:
    starts.append((len(buf), p)); buf += open(p, 'rb').read() + b'\xff' * 16
buf = bytes(buf)
import bisect
offs = [s for s, _ in starts]
out = []
for n, a, s in todo:
    b = exe[a - base:a - base + s]
    while len(b) >= 2 and b[-2:] == b'\x09\x00':
        b = b[:-2]
    if len(b) < 24:
        continue
    at = buf.find(b)
    while at >= 0 and at % 2:
        at = buf.find(b, at + 1)
    if at >= 0:
        i = bisect.bisect_right(offs, at) - 1
        out.append((n, s, os.path.basename(starts[i][1]), at - starts[i][0]))
open('sdk-identical.txt', 'w').write('# functions whose bytes are verbatim in the SDK\'s compiled library code (tools/sdk_identical.py): name size file offset\n'
                                     + ''.join('%s %d %s %d\n' % o for o in out))
print('%d of %d open functions (24 bytes or more) are the SDK library\'s own code: %d bytes (sdk-identical.txt)' % (len(out), len(todo), sum(o[1] for o in out)))
