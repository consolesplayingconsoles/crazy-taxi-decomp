#!/usr/bin/env python3
"""Compiled size of every proven function's C against the original's size. Run in the repo.

    python3 tools/sizes.py              compiles every src/*.c unit, writes build/sizes.json ([name, original bytes, C bytes])
    python3 tools/sizes.py --report     the totals from build/sizes.json: game code, library, the worst functions

A function's C size is the distance from its symbol to the next one in its compiled file, so a file's helpers count
toward the function before them. Each file is compiled with an empty marker function after its last one (MARK), so the
last function ends where the code ends, not where the linker's constant and data sections do. Library functions are the ones sdk.txt marks (its ranges and funcs), as in progress.py.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '.')))
import toolpath  # noqa: E402,F401
import glob
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
OUT = os.path.join('build', 'sizes.json')
MARK = '\n\nvoid zz_size_end(void)\n{\n}\n'


def unit_head(text):
    """The declarations at the top of a unit: everything before its first function definition. The C in the unit was proven
    against them, so it compiles under them."""
    blank = re.sub(r'/\*.*?\*/', lambda m: ' ' * len(m.group()), text, flags=re.S)
    m = re.search(r'^[A-Za-z_][\w \t\*]*?\b\w+\s*\([^;{]*\)\s*\{', blank, re.M)
    return text[:m.start()].rstrip('\n') if m else text


def c_size(name, src, protos, head=None):
    """Compiled size of one function's C text (written to a scratch file under src/, removed after); None when it does not compile.
    head: the declarations to put above it (a unit's own, see unit_head); without it, the ones protos give."""
    import equiv
    import gen_drv
    f = 'src/zz_size%d.c' % os.getpid()
    open(f, 'w').write('/* scratch */\n' + (head if head is not None else gen_drv.head_protos([(name, src, None, protos)])) + '\n\n' + src + MARK)
    try:
        table = equiv.names()
        defines, defined = equiv.outside_names(f, table)
        defines.update({'_' + k: a for k, a in table.items() if k.startswith('_') and k not in defined})
        try:
            code, syms = equiv.compile_link(f, defines)
        except BaseException:
            return None
        if code is None or '_' + name not in syms:
            return None
        # the whole of the file's code and constant sections (the literal pools and constants count, as they do in the
        # build), less the 4 bytes of the marker function
        stem = os.path.splitext(os.path.basename(f))[0]
        m = open('build/equiv/%s.map' % stem, errors='replace').read()
        total = sum(int(x.group(2), 16) for x in re.finditer(r"^(P|C)\s+H'[0-9A-F]{8}\s+-\s+H'[0-9A-F]{8}\s+H'([0-9A-F]{8})", m, re.M))
        return total - 4 if total else None
    finally:
        if os.path.exists(f):
            os.remove(f)


def c_size_any(name, src, protos_list, head=None):
    """c_size of src measured the way it compiles: under head (the declarations of its own unit) first, then against each set of
    prototypes in turn, the first that compiles. The size does not depend on which declarations compiled it, and a set written
    for other code can make this src fail (an int where the set says float, a callee returning float where src tests it with !)."""
    if head is not None:
        n = c_size(name, src, None, head)
        if n is not None:
            return n
    for protos in protos_list:
        n = c_size(name, src, protos)
        if n is not None:
            return n
    return None


def measure():
    import equiv
    table, funcs = equiv.names(), equiv.functions()
    out = []
    for f in sorted(glob.glob('src/*.c')):
        if os.path.basename(f).startswith(('gen_tmp', 'zz_')) or '@unit' in open(f, errors='replace').read(300):
            continue
        defines, defined = equiv.outside_names(f, table)
        defines.update({'_' + n: a for n, a in table.items() if n.startswith('_') and n not in defined})
        tmp = 'src/zz_sizes%d.c' % os.getpid()
        open(tmp, 'w').write(open(f, errors='replace').read() + MARK)
        try:
            code, syms = equiv.compile_link(tmp, defines)
        except SystemExit as e:
            print('ERR', f, str(e)[:80], flush=True)
            continue
        finally:
            os.remove(tmp)
        if code is None:
            print('LINK', f, flush=True)
            continue
        addrs = sorted(set(syms.values()) | {equiv.SCRATCH + len(code)})
        for n, a in syms.items():
            fn = n[1:]
            if fn in funcs and fn in defined:
                out.append((fn, funcs[fn][1], min(x for x in addrs if x > a) - a))
        print(f, len(out), flush=True)
    os.makedirs('build', exist_ok=True)
    json.dump(out, open(OUT, 'w'))


def library():
    """Is an address library code: inside an sdk.txt range or one of its funcs."""
    ranges, single = [], set()
    if os.path.exists('sdk.txt'):
        for l in open('sdk.txt'):
            p = l.split()
            if p and p[0] == 'range':
                ranges.append((int(p[1], 16), int(p[2], 16)))
            if p and p[0] == 'func':
                single.add(int(p[1], 16))
    return lambda a: a in single or any(s <= a < e for s, e in ranges)


def report():
    import equiv
    funcs = equiv.functions()
    lib = library()
    d = json.load(open(OUT))
    game = [r for r in d if r[0] in funcs and not lib(funcs[r[0]][0])]
    rest = [r for r in d if r not in game]
    for label, rows in (('game code', game), ('library', rest)):
        o = sum(r[1] for r in rows)
        c = sum(r[2] for r in rows)
        print('%-10s %5d functions  original %7d  C %7d  ratio %.2f' % (label, len(rows), o, c, c / o if o else 0))
    print('worst game functions (C - original):')
    for n, o, c in sorted(game, key=lambda r: r[1] - r[2])[:15]:
        print('  %-28s %6d -> %6d  %.1fx' % (n, o, c, c / o if o else 0))


if __name__ == '__main__':
    report() if '--report' in sys.argv else measure()
