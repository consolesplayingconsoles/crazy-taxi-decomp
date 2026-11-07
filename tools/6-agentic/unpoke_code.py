#!/usr/bin/env python3
"""Take the code out of what a test case may change. Run in the repo.

    python3 tools/6-agentic/unpoke_code.py                            report
    python3 tools/6-agentic/unpoke_code.py --apply                    rewrite tests/*/*.json
    python3 tools/6-agentic/unpoke_code.py --apply tests/a/F.json ... only those case files
    python3 tools/6-agentic/unpoke_code.py --same-fault tests/a/F.json ...   mark every case of those files same_fault
    python3 tools/6-agentic/unpoke_code.py --drop-faulting tests/a/F.json ...  take out the cases the original faults on

The cases give some memory words made-up values, and a read of the original's own literal pools was one of those places: the
original then compared against, or computed with, a value the console never holds. On the console the code is read-only, and a
build from the C reads none of it (tools/6-agentic/poolconst.py turns those reads into constants), so a case that changes a pool word
tests something that cannot happen. This removes every poke into the game and library code (sdk.txt's game code and NAOMI
ranges: where the repo's C has no stores), from the "poke" entries of the cases, and gives every poked image word that holds a
code address (a jump table's entry) the image's value back (code_pointers). Functions are checked again afterwards; one that
only passed because of a made-up pool value fails then, which is the point. A case file changed this way changes the function's
proof key: name the files to limit the re-checks to them.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import json
import os
import sys

import layout  # noqa: E402

LO, HI = layout.region('code') or (0, 0)            # the code the cases may not write to (layout.txt; none: nothing taken out)


def code_pointers(poke, image, base, spans):
    """The pokes with every whole word that lies in the image and holds a code address there (a function's start or any
    address inside it, in any mirror) set back to the image's value. A jump table's entries are such words: a case that
    draws them makes the original jump to garbage and fault (Zombie Revenge FUN_0c0b4f84, its table at 0C203FBC filled by the
    case drawing's "table indexed by a loaded value"), which tests nothing the console can do. Data words are left as drawn.
    spans: [(start, size)] of the listed functions."""
    import bisect
    import struct
    starts = sorted(spans)
    keys = [s for s, _ in starts]

    def is_code(v):
        if (v & 0x1FFFFFFF) >> 24 != 0x0C:           # main RAM through any mirror (0C, 8C, AC) or nothing
            return False
        a = (v & 0x1FFFFFFF) | 0x0C000000
        i = bisect.bisect_right(keys, a) - 1
        return i >= 0 and a < starts[i][0] + starts[i][1]
    out = {}
    for k, h in poke.items():
        a = (int(k, 16) & 0x1FFFFFFF) | 0x0C000000
        b = bytearray.fromhex(h)
        for w in range((a + 3) & ~3, a + len(b) - 3, 4):
            o = w - base
            if 0 <= o <= len(image) - 4 and is_code(struct.unpack_from('<I', image, o)[0]):
                b[w - a:w - a + 4] = image[o:o + 4]
        out[k] = b.hex()
    return out


def mark_same_fault(path):
    """Every case of one case file marked same_fault: where the original faults, the C passes only by faulting the same way
    (equiv.py), and every other case is compared as before. For a function whose drawn state indexes past the end of its
    jump table (Zombie Revenge FUN_0c0b5344: a state number past the last entry jumps into the data after the table), an
    input the game never makes; both sides read the same word and stop the same way."""
    d = json.load(open(path))
    for v in (d.values() if isinstance(d, dict) else [d]):
        for c in v:
            c['same_fault'] = True
    json.dump(d, open(path, 'w'), indent=1)


def drop_faulting(path, entry, end, run):
    """The cases of one case file on which the ORIGINAL stops (a fault, not a step limit) taken out; returns how many. Such a
    case decides nothing: equiv.py throws the same cases away when it draws its own (fuzz). Zombie Revenge FUN_0c0a89e6 and
    FUN_0c0b5344: a drawn state number past the end of a jump table sends the original's jmp to a data word (00000009,
    0C204007), and the simulator stops at the fetch while checking for a shared epilogue; the C calls through the same word
    with jsr, which the simulator records as a call, so not even same_fault holds. run: sh4sim.run."""
    d = json.load(open(path))
    sets = d if isinstance(d, dict) else {'dev': d}
    gone = 0
    for k in list(sets):
        keep = []
        for c in sets[k]:
            r = run(dict(c, exe='1ST_READ.BIN', base=open('BASE').read().strip() if os.path.exists('BASE') else '0C010000',
                         entry='%08X' % entry, end='%08X' % end), '.')
            if r['error'] and not str(r['error']).startswith('more than'):
                gone += 1
                continue
            keep.append(c)
        sets[k] = keep
    json.dump(sets if isinstance(d, dict) else sets['dev'], open(path, 'w'), indent=1)
    return gone


def main(argv):
    apply = '--apply' in argv
    named = [a for a in argv[1:] if a.endswith('.json')]
    if '--drop-faulting' in argv:
        import sh4sim
        funcs = {p[3]: (int(p[1], 16), int(p[2])) for p in (l.split() for l in open('functions.txt')) if len(p) >= 4 and p[0] == 'F'}
        for f in named:
            s_, z_ = funcs[os.path.splitext(os.path.basename(f))[0]]
            print('%s: %d cases the original faults on taken out' % (f, drop_faulting(f, s_, s_ + z_, sh4sim.run)))
        return
    if '--same-fault' in argv:
        for f in named:
            mark_same_fault(f)
        print('%d case files marked same_fault' % len(named))
        return
    image = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    spans = [(int(p[1], 16), int(p[2])) for p in (l.split() for l in open('functions.txt')) if len(p) >= 4 and p[0] == 'F']
    files = changed = removed = 0
    for f in named or sorted(glob.glob('tests/*/*.json')):
        d = json.load(open(f))
        sets = d if isinstance(d, dict) else {'dev': d}
        hit = 0
        for v in sets.values():
            for c in v:
                p = c.get('poke')
                if not p:
                    continue
                for k in [k for k in p if LO <= (0x0C000000 | (int(k, 16) & 0x1FFFFFFF)) < HI]:
                    # a poke starts at its key and runs for its length: any overlap with the code range counts
                    del p[k]
                    hit += 1
                q = code_pointers(p, image, base, spans)
                hit += sum(1 for k in p if q[k] != p[k])
                p.update(q)
                if not p:
                    del c['poke']
        files += 1
        if hit:
            changed += 1
            removed += hit
            if apply:
                json.dump(d, open(f, 'w'), indent=1)
    print('%d case files, %d with pokes into code or over code addresses, %d pokes %s' % (files, changed, removed, 'fixed' if apply else 'would change'))


if __name__ == '__main__':
    main(sys.argv)
