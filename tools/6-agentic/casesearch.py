#!/usr/bin/env python3
"""casesearch.py: hand cases for a function the random draw cannot cover. Run in the repo.

    python3 tools/6-agentic/casesearch.py <function> [candidates (default 600)] [keep (default 40)]

The drawn cases (gen_equiv --draw) fill memory with random words, and a function that walks a list or waits for a flag never finishes on
them, or finishes on one path only (Virtua Tennis shadowBallDraw 19%, hudMatchDraw 14%, matchExec 15%: the game mode and the player and
ball tables sit in globals the draw leaves zero or random). This finds the RAM words the ORIGINAL reads (the simulator logs them), gives
every one of them a small value of the kind games keep there (0, 1, 2, a count, a float like 1.0 or 100.0), runs the original on each
candidate and keeps, greedily, the ones that finish and run instructions no kept case ran. Registers r4-r7 take small values or the
address of one of three filled blocks (0C800000, 0C810000, 0C820000); the answers of the calls are small values too.
The kept cases go to cases-hand/<function>.json, the pool gen_equiv and `gen_equiv --draw` pick from by coverage (gen_drv.hand_cases).
It prints the instructions the kept cases run, of the function's.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import json
import os
import random
import struct
import sys
import zlib

import re
import equiv
import layout
import sh4sim
import shdis
import boundaries as B

RAM_LO, RAM_HI = 0x0C000000, 0x0D000000
CODE = [0, 0]                      # the function's own bytes: its literal pool is read as data and must not be changed by a case
CODEREG = layout.region('code') or (0, 0)      # layout.txt's code region, the cases may not write there (data inside code too: a library helper's jump table)
BLOCKS = (0x0C800000, 0x0C810000, 0x0C820000)
INTS = (0, 0, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 20, 32, 64, 100, 255, 256)
FLOATS = (0.0, 0.0, 0.5, 1.0, 1.0, 2.0, 3.0, 10.0, 30.0, 100.0, 320.0, 480.0, -1.0, 0.01, 0.1)


def fbits(f):
    return struct.unpack('<I', struct.pack('<f', f))[0]


def consts(start, size):
    """the small integers the function's own code compares against or loads (cmp/eq #6,r0; mov #20,r1; cmp/gt, add #n): the values a game keeps in the words it tests"""
    out = set()
    for a in range(start, start + size, 2):
        t = shdis.decode(B.word(a), a)[0] or ''
        for m in re.finditer(r'(?:cmp/eq|mov|add|and|tst|cmp/\w+) #(-?\d+)', t):
            v = int(m.group(1))
            out.update({v & 0xFFFFFFFF, (v + 1) & 0xFFFFFFFF, (v - 1) & 0xFFFFFFFF})
    return sorted(out)


CONSTS = []


def word(rng):
    if CONSTS and rng.random() < 0.45:
        return rng.choice(CONSTS)
    return fbits(rng.choice(FLOATS)) if rng.random() < 0.4 else rng.choice(INTS)


def phys(a):
    return 0x0C000000 | (a & 0x1FFFFFFF)


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    name = argv[1]
    ncand = int(argv[2]) if len(argv) > 2 else 600
    keep = int(argv[3]) if len(argv) > 3 else 40
    table, funcs = equiv.names(), equiv.functions()
    if name not in funcs:
        sys.exit('no function %s in functions.txt' % name)
    start, size = funcs[name]
    CODE[:] = [phys(start), phys(start + size + 512)]            # the function's own bytes and the pool after them: a case must not change them
    CONSTS[:] = consts(start, size)
    base = int(open('BASE').read().strip(), 16)
    runtime = {a for n, a in table.items() if n.startswith('_')}
    helpers = lambda t: t in runtime
    reads = set()
    Base = sh4sim.Memory

    class LogMem(Base):
        def read(self, addr, size_, fetch=False):
            if not fetch:
                p = phys(addr)
                if RAM_LO <= p < RAM_HI and not (0x0C800000 <= p < 0x0C830000) and not (0x0DFF0000 <= p < 0x0E000000) and not (CODE[0] <= p < CODE[1]) and not (CODEREG[0] <= p < CODEREG[1]):
                    reads.add(p & ~3)
            return Base.read(self, addr, size_, fetch)

    rng = random.Random(zlib.crc32(name.encode()))
    def candidate(known):
        poke = {}
        dens = rng.choice((0.04, 0.1, 0.2, 0.4))                     # most words stay 0: a pointer read from a word that is random faults, a flag that is zero is a path
        for a in known:
            if rng.random() < dens:
                poke['%08X' % a] = struct.pack('<I', word(rng)).hex()
        for b in BLOCKS:
            poke['%08X' % b] = b''.join(struct.pack('<I', word(rng)) for _ in range(64)).hex()
        regs = {}
        for i in range(4):
            regs['r%d' % (4 + i)] = '%08X' % (rng.choice(BLOCKS) if rng.random() < 0.35 else word(rng) if rng.random() < 0.5 else rng.choice(INTS))
        for i in range(4):
            regs['fr%d' % (4 + i)] = '%08X' % fbits(rng.choice(FLOATS))
        calls = [{'r0': '%08X' % (rng.choice(BLOCKS) if rng.random() < 0.2 else rng.choice(INTS)), 'fr0': '%08X' % fbits(rng.choice(FLOATS))} for _ in range(64)]
        return {'regs': regs, 'poke': poke, 'calls': calls, 'about': 'hand: search'}

    def run(case):
        c = dict(case, exe='1ST_READ.BIN', base='%08X' % base, entry='%08X' % start, end='%08X' % (start + size), steps=300000)
        sh4sim.Memory = LogMem
        try:
            return sh4sim.run(c, '.', deep=helpers)
        finally:
            sh4sim.Memory = Base

    valid = {phys(a) for a in table.values()}
    known, kept, extra, seen, finished = set(), [], [], set(), 0
    for n in range(ncand):
        reads.clear()
        case = candidate(sorted(known))
        r = run(case)
        known |= reads
        if r['error']:
            continue
        if any(phys(int(c['to'], 16)) not in valid for c in r.get('calls', []) if c.get('kind') == 'call'):
            continue                                                  # the original called an address that is no function: random data in a table of pointers, a state the game never has
        finished += 1
        cov = set(r.get('covered', []))
        if cov - seen:
            seen |= cov
            kept.append((1, case))
        else:
            extra.append(case)                                       # finishes, adds nothing: still a case with other values
    chosen = [c for _, c in kept]
    rng.shuffle(extra)
    chosen += extra[:max(0, keep - len(chosen))]
    chosen = chosen[:max(keep, len(kept))]
    total = len([a for a in equiv.code_addresses(open('1ST_READ.BIN', 'rb').read(), base, start, size)])
    os.makedirs('cases-hand', exist_ok=True)
    json.dump(chosen, open(os.path.join('cases-hand', name + '.json'), 'w'), indent=1)
    print('%s: %d of %d candidates finished, %d kept, they run %d of %d instructions; %d RAM words read; cases-hand/%s.json' % (
        name, finished, ncand, len(chosen), len(seen), total, len(known), name))


if __name__ == '__main__':
    main(sys.argv)
