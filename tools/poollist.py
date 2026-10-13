#!/usr/bin/env python3
"""poollist.py: what a function's literal pool holds, and which of it still has no name. Run in the repo.

    python3 tools/poollist.py <name or address> [...]

Every pc-relative load in the function: the value, and what it is: a function (by name, or "no F line" for
code functions.txt does not list), a RAM address (its name in globals.txt / symbols.txt, or MISSING: add a
line `<ADDR> <name>` to symbols.txt before the C uses it), or a plain number (shown as an int and a float).
A load whose value is a RAM address is usually the address of a global, not its value.
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis


def main():
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    names = shdis.load_names()
    funcs = {}
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            funcs[p[3].lower()] = (int(p[1], 16), int(p[2]))
            funcs[p[1].lower().lstrip('0x')] = (int(p[1], 16), int(p[2]))
    fstarts = sorted(v[0] for v in funcs.values())
    for want in sys.argv[1:]:
        key = want.lower().lstrip('0x') if want.lower().startswith('0x') else want.lower()
        if key not in funcs and want.lower() not in funcs:
            print('%s: not in functions.txt' % want)
            continue
        a, sz = funcs.get(want.lower()) or funcs[key]
        print('%s (%08x, %d bytes)' % (want, a, sz))
        seen = set()
        for pc in range(a, a + sz, 2):
            _, pool, size, _ = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)
            if pool is None or size != 4 or pool in seen or not base <= pool < base + len(exe):
                continue
            seen.add(pool)
            v = struct.unpack_from('<I', exe, pool - base)[0]
            f = struct.unpack_from('<f', exe, pool - base)[0]
            nm = names.get(v)
            if base <= v < base + len(exe):
                kind = ('function ' + nm) if v in funcs.values() or (nm and v in fstarts) else \
                       ('code: no F line' if nm is None and v in fstarts else 'code ' + (nm or ''))
                if v not in fstarts:
                    kind = 'inside code (a label)' if not nm else 'code ' + nm
            elif 0x0C000000 <= v < 0x0D000000 or 0x8C000000 <= v < 0x8D000000:
                kind = 'RAM ' + (nm if nm else 'MISSING')
            else:
                kind = 'value %d / %g' % (struct.unpack_from('<i', exe, pool - base)[0], f)
            print('  %08x  %08x  %s' % (pc, v, kind))


if __name__ == '__main__':
    main()
