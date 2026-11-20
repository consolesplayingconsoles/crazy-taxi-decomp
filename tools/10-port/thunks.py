"""thunks.py ALL.DIS: short functions that end in a tail jump (jmp @rN) to another function, passing on argument
registers they never write: the target reads them, so the thunk's C must take them and pass them on. ALL.DIS is
tools/shdis.py's listing of the whole executable. Prints: thunk, its file, target, the registers passed on that the
thunk's C does not declare. Run in the repo."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import sys

sys.path.insert(0, os.path.dirname(__file__))
from dropped_args import DEF, counts, SRC  # noqa: E402

INSN = re.compile(r'^([0-9a-f]{8}) [0-9a-f]{4}  (\S+)\s*(.*?)(?:\s*;\s*(.*))?$')


def c_defs():
    out = {}
    for f in sorted(os.listdir(SRC)):
        if f.endswith('.c'):
            t = open(os.path.join(SRC, f), errors='replace').read()
            for m in DEF.finditer(t):
                out.setdefault(m.group(2), (f, counts(m.group(3))))
    return out


def written(op, args):
    """the register an instruction writes, or None"""
    parts = [a.strip() for a in re.split(r',(?![^()]*\))', args)] if args else []
    if not parts:
        return None
    if op.startswith(('cmp', 'tst', 'fcmp', 'jmp', 'jsr', 'bra', 'bsr', 'bt', 'bf', 'rts', 'pref', 'lds', 'ldc')):
        return None
    d = parts[-1]
    if d.startswith('@'):
        return None
    return d


def main():
    defs = c_defs()
    funcs, cur = [], None
    for line in open(sys.argv[1]):
        line = line.rstrip('\n')
        m = re.match(r'^(\w+):$', line)
        if m:
            cur = [m.group(1), []]
            funcs.append(cur)
            continue
        m = INSN.match(line)
        if m and cur:
            cur[1].append((m.group(2), m.group(3), m.group(4) or ''))
    for name, ins in funcs:
        if name not in defs or not ins or len(ins) > 10:
            continue
        # the tail jump: jmp @rN with its delay slot as the last two instructions
        j = next((i for i, x in enumerate(ins) if x[0] == 'jmp'), None)
        if j is None or j + 2 != len(ins) and not (j + 2 < len(ins) and ins[j + 2][0] == 'nop'):
            continue
        reg = ins[j][1].lstrip('@')
        target = None
        for op, args, com in ins[:j]:
            if written(op, args) == reg:
                mm = re.search(r'=[0-9a-f]{8} (\w+)', com)
                target = mm.group(1) if mm else None
        if not target or target not in defs:
            continue
        w = {written(op, args) for op, args, com in ins[:j + 2]}
        ti, tf, _ = defs[target][1]
        di, df, _ = defs[name][1]
        need = ['r%d' % (4 + k) for k in range(min(ti, 4)) if 'r%d' % (4 + k) not in w and k >= di]
        need += ['fr%d' % (4 + k) for k in range(min(tf, 8)) if 'fr%d' % (4 + k) not in w and k >= df]
        if need:
            print('%-34s %-12s -> %-30s passes on %s (its C takes %d int %d float; %s takes %d int %d float)'
                  % (name, defs[name][0], target, ' '.join(need), di, df, target, ti, tf))


if __name__ == '__main__':
    main()
