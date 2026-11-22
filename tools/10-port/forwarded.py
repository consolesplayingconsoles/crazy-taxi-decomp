"""forwarded.py: arguments the SH-4 passes on in registers the C leaves out.

A function D that calls G without touching r4-r7 / fr4-fr11 first hands G its own arguments in them: motionRootBoneRaw
(r4 = the bone data) calls motionRootRaw with no arguments in its C, and motionRootRaw reads r4. On the host the value
is lost. For each call in D's C to a function G whose definition reads a register the call does not set, the original
code decides: when every call from D to G comes before any other call in D, no instruction from D's entry to the call
writes the register, and no branch after the call goes back before it, G receives D's own argument there.

fixes() -> {D: {G: {location: D's parameter name}}}, cached in build/native/forwarded.json. sh4abi.forward_text applies
them. Run alone, it prints them."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import json
import os
import re
import subprocess
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sh4abi  # noqa: E402

CACHE = os.path.join(ROOT, 'build', 'native', 'forwarded.json')
LINE = re.compile(r'^([0-9a-f]{8}) ([0-9a-f]{4})  (\S+)\s*([^;]*?)\s*(?:;\s*(.*))?$')


def functions():
    out = {}
    for line in open(os.path.join(ROOT, 'functions.txt')):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            out[p[3]] = (int(p[1], 16), int(p[2]))
    return out


def disasm(start, size):
    """[(address, mnemonic, operands, annotation)] of the function's code"""
    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools', 'sim', 'shdis.py'), '%x' % start, '%x' % (start + size)],
                       cwd=ROOT, capture_output=True, text=True)
    out = []
    for line in r.stdout.split('\n'):
        m = LINE.match(line.strip())
        if m:
            out.append((int(m.group(1), 16), m.group(3), m.group(4).strip(), (m.group(5) or '').strip()))
    return out


def regs_of(op):
    """the general and float registers an operand names: rN, frN, drN (two), fvN (four), xdN"""
    op = op.strip()
    m = re.fullmatch(r'r(\d+)', op)
    if m:
        return {'r%s' % m.group(1)}
    m = re.fullmatch(r'fr(\d+)', op)
    if m:
        return {'fr%s' % m.group(1)}
    m = re.fullmatch(r'dr(\d+)', op)
    if m:
        n = int(m.group(1))
        return {'fr%d' % n, 'fr%d' % (n + 1)}
    m = re.fullmatch(r'fv(\d+)', op)
    if m:
        n = int(m.group(1))
        return {'fr%d' % (n + k) for k in range(4)}
    return set()


def written(mn, ops):
    """the registers an instruction writes (generously: in pair mode, fmov frN names a pair)"""
    parts = [p.strip() for p in ops.split(',')] if ops else []
    w = set()
    if mn in ('bsr', 'jsr', 'bsrf', 'rts', 'bra', 'braf', 'jmp', 'bt', 'bf', 'bt/s', 'bf/s'):
        return w
    if parts:
        dst = parts[-1]
        if not dst.startswith('@'):
            w |= regs_of(dst)
            m = re.fullmatch(r'fr(\d+)', dst)
            if m and mn.startswith('fmov'):                  # pair mode: fmov drN / xdN
                n = int(m.group(1)) & ~1
                w |= {'fr%d' % n, 'fr%d' % (n + 1)}
        if mn == 'fipr' and len(parts) == 2:
            n = int(re.sub(r'\D', '', parts[1]))
            w.add('fr%d' % (n + 3))
        if mn == 'ftrv':
            w |= regs_of(parts[-1])
    for p in parts:                                           # post-increment / pre-decrement change the register
        m = re.fullmatch(r'@-?(r\d+)\+?', p)
        if m and (p.endswith('+') or p.startswith('@-')):
            w.add(m.group(1))
    if mn in ('dt',):
        w |= regs_of(parts[0])
    if mn in ('fschg', 'frchg'):
        w.add('*')                                            # the register bank / pair mode changes: give up
    return w


CALLS = ('bsr', 'jsr', 'bsrf')


def call_targets(code, fns_by_addr, name_of_const):
    """[(index, callee name)] of the function's calls: bsr/jsr annotated with a name, and tail calls (bra to a function's
    entry)"""
    out = []
    for i, (a, mn, ops, ann) in enumerate(code):
        if mn in CALLS or (mn in ('bra', 'jmp') and ann):
            name = ann.split()[0] if ann else None
            if mn == 'jsr' and not name:
                name = name_of_const.get(i)
            out.append((i, name))
    return out


def analyse():
    fns = functions()
    by_addr = {a: n for n, (a, s) in fns.items()}
    defs = sh4abi.definitions()
    texts = {f: open(os.path.join(sh4abi.SRC, f), errors='replace').read()
             for f in sorted(os.listdir(sh4abi.SRC)) if f.endswith('.c')}
    # D -> (file, its definition's slots with names, the calls in its body by name)
    proto = re.compile(r'(?m)^([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{}]*)\)\s*\n\{')
    fixes = {}
    for f, t in texts.items():
        decls = sh4abi.declarations(t)
        for m in proto.finditer(t):
            D = m.group(2)
            if defs.get(D, (None,))[0] != f or D not in fns:
                continue
            body = t[m.end():t.find('\n}', m.end())]
            dslots = sh4abi.slots(defs[D][1], defs[D][2])
            if dslots is None:
                continue
            names = []
            for p in m.group(3).split(','):
                mm = re.search(r'(\w+)\s*$', p.strip())
                names.append(mm.group(1) if mm else '')
            if len(names) != len(dslots):
                continue
            dparam = {loc: n for (loc, k), n in zip(dslots, names) if isinstance(loc, str)}
            # the callees in D's C whose definitions read a register the call does not set
            wanted = {}
            for G in set(re.findall(r'(?<![\w.])(\w+)\s*\(', body)):
                if G not in defs or G not in decls or decls[G][1] is None or G == D:
                    continue
                cs = sh4abi.slots(*decls[G])
                gs = sh4abi.slots(defs[G][1], defs[G][2])
                if cs is None or gs is None:
                    continue
                have = {loc for loc, k in cs}
                miss = [loc for loc, k in gs if isinstance(loc, str) and loc not in have and loc in dparam]
                if miss:
                    wanted[G] = miss
            if not wanted:
                continue
            a, s = fns[D]
            code = disasm(a, s)
            if not code:
                continue
            calls = call_targets(code, by_addr, {})
            for G, miss in wanted.items():
                idx = [i for i, n in calls if n == G]
                if not idx:
                    continue
                first_call = calls[0][0] if calls else None
                ok = set(miss)
                for ci in idx:
                    # any call before this one clobbers r4-r7 / fr4-fr11
                    if any(i < ci for i, n in calls):
                        ok = set()
                        break
                    w = set()
                    for i in range(0, ci + 2 if ci + 1 < len(code) else ci + 1):   # the delay slot runs first
                        if i == ci:
                            continue
                        w |= written(code[i][1], code[i][2])
                    if '*' in w:
                        ok = set()
                        break
                    ok -= w
                    # a branch after the call back to before it
                    for a2, mn, ops, ann in code[ci + 1:]:
                        if mn in ('bra', 'bt', 'bf', 'bt/s', 'bf/s'):
                            mm = re.search(r'0x([0-9a-f]+)', ops)
                            if mm and a <= int(mm.group(1), 16) <= code[ci][0]:   # inside D (a tail call leaves)
                                ok = set()
                del first_call
                if ok:
                    fixes.setdefault(D, {})[G] = {loc: dparam[loc] for loc in sorted(ok)}
    return fixes


def fixes():
    if os.path.exists(CACHE):
        src_mtime = max(os.path.getmtime(os.path.join(sh4abi.SRC, f)) for f in os.listdir(sh4abi.SRC))
        if os.path.getmtime(CACHE) >= max(src_mtime, os.path.getmtime(__file__)):
            return json.load(open(CACHE))
    out = analyse()
    os.makedirs(os.path.dirname(CACHE), exist_ok=True)
    json.dump(out, open(CACHE, 'w'), indent=1, sort_keys=True)
    return out


if __name__ == '__main__':
    for D, gs in sorted(fixes().items()):
        for G, locs in sorted(gs.items()):
            print('%-32s -> %-32s %s' % (D, G, ', '.join('%s=%s' % kv for kv in sorted(locs.items()))))
