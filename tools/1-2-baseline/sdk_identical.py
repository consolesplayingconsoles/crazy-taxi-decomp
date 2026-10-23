#!/usr/bin/env python3
"""sdk_identical.py: open functions whose bytes are verbatim in the SDK's own compiled library code. Run in the repo. Stdlib only.

    python3 tools/1-2-baseline/sdk_identical.py <SDK dir> [<SDK dir> ...]

Scans every library and object file (*.lib, *.a, *.obj, *.o, *.elf) under the directories you give and looks for each function of
16 bytes or more that is not done yet (padding nops at its end ignored). A function whose bytes appear in a library are the library's
own code: nothing to decompile, a decomp links the library. Writes sdk-identical.txt (name, size, file, offset in the file); progress.py
counts the names as done, in a row of their own (they are not C). Hand-written assembly the SDK ships only as object code (a maths
library, startup code) is the usual case. Compiled game code never matches: its literal pools hold addresses of the game.
A second pass takes what is still open and allows the linker's own changes: a call it relaxed (jsr @rN in the library, bsrf rN in the
game), a pool load whose displacement moved, and literal-pool words (addresses the linker filled in). Those lines end in "relaxed".
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
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
found = {}
def find(b):
    at = buf.find(b)
    while at >= 0 and at % 2:
        at = buf.find(b, at + 1)
    if at < 0:
        return None
    i = bisect.bisect_right(offs, at) - 1
    return os.path.basename(starts[i][1]), at - starts[i][0]
def trimmed(a, s):
    b = exe[a - base:a - base + s]
    while len(b) >= 2 and b[-2:] == b'\x09\x00':
        b = b[:-2]
    return b
for n, a, s in todo:
    b = trimmed(a, s)
    if len(b) < 24:
        continue
    hit = find(b)
    if hit:
        found[n] = (s,) + hit
# a routine the function list cut in two (or more): consecutive functions where one runs on into the next (it does not end in a
# return or a jump). Windows of up to 4 of them are searched as one piece, and every member of a matching window is the library's code.
def ends_in_flow_stop(a, s):
    w = [int.from_bytes(exe[a - base + s - 2 * k - 2:a - base + s - 2 * k], 'little') for k in range(3)]       # the last three words
    stops = lambda x: x in (0x000B, 0x002B) or (x & 0xF0FF) == 0x402B or (x & 0xF0FF) == 0x0023 or (x & 0xF000) == 0xA000
    return any(stops(x) for x in w)
allf = sorted(funcs, key=lambda f: f[1])
todo_names = set(n for n, a, s in todo)
i = 0
while i < len(allf):
    j = i
    while j + 1 < len(allf) and allf[j][1] + allf[j][2] == allf[j + 1][1] and not ends_in_flow_stop(allf[j][1], allf[j][2]):
        j += 1
    chain = allf[i:j + 1]
    if len(chain) > 1:
        for x in range(len(chain)):
            for y in range(x + 1, min(len(chain), x + 4)):
                members = chain[x:y + 1]
                if not any(m[0] in todo_names and m[0] not in found for m in members):
                    continue
                b = trimmed(members[0][1], sum(m[2] for m in members))
                if len(b) >= 24:
                    hit = find(b)
                    if hit:
                        for m in members:
                            if m[0] in todo_names and m[0] not in found:
                                found[m[0]] = (m[2],) + hit
    i = j + 1
# the linker's relaxation: the library's jsr @rN became bsrf rN, pool loads moved, pool words hold the linked addresses
import struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis
def relaxed_same(a, b, lib):
    """b: the game's bytes at a; lib: the library's bytes of the same length. True when every difference is one the linker makes."""
    pools = set()
    for pc in range(a, a + len(b), 2):
        _, pool, ps, _ = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)
        if pool is not None and a <= pool < a + len(b):
            pools.update(range(pool, pool + ps, 2))
    relaxed = False
    for k in range(0, len(b), 2):
        x = struct.unpack_from('<H', b, k)[0]; y = struct.unpack_from('<H', lib, k)[0]
        if x == y:
            continue
        if (a + k) in pools:
            continue
        if (x & 0xF0FF) == 0x0003 and (y & 0xF0FF) == 0x400B and (x >> 8) & 15 == (y >> 8) & 15:
            relaxed = True; continue
        if (x & 0xF000) == 0xD000 and (y & 0xF000) == 0xD000 and (x & 0x0F00) == (y & 0x0F00):
            continue
        return False
    return relaxed
relaxed_found = {}
for n, a, s in todo:
    if n in found:
        continue
    b = trimmed(a, s)
    if len(b) < 24:
        continue
    at = buf.find(b[:8]); tries = 0
    while at >= 0 and tries < 400:
        tries += 1
        if at % 2 == 0 and relaxed_same(a, b, buf[at:at + len(b)]):
            i = bisect.bisect_right(offs, at) - 1
            relaxed_found[n] = (s, os.path.basename(starts[i][1]), at - starts[i][0])
            break
        at = buf.find(b[:8], at + 1)
for n, (s, f, o) in found.items():
    out.append((n, s, f, o))
open('sdk-identical.txt', 'w').write('# functions whose bytes are verbatim in the SDK\'s compiled library code (tools/1-2-baseline/sdk_identical.py): name size file offset\n'
                                     + ''.join('%s %d %s %d\n' % o for o in out)
                                     + ''.join('%s %d %s %d relaxed\n' % ((n,) + v) for n, v in sorted(relaxed_found.items())))
print('%d of %d open functions (24 bytes or more) are the SDK library\'s own code: %d bytes (sdk-identical.txt); %d more after the linker\'s relaxation (%d bytes)'
      % (len(out), len(todo), sum(o[1] for o in out), len(relaxed_found), sum(v[0] for v in relaxed_found.values())))
