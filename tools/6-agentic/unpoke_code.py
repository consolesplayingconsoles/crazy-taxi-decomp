#!/usr/bin/env python3
"""Take the code out of what a test case may change. Run in the repo.

    python3 tools/6-agentic/unpoke_code.py            report
    python3 tools/6-agentic/unpoke_code.py --apply    rewrite tests/*/*.json

The cases give some memory words made-up values, and a read of the original's own literal pools was one of those places: the
original then compared against, or computed with, a value the console never holds. On the console the code is read-only, and a
build from the C reads none of it (tools/6-agentic/poolconst.py turns those reads into constants), so a case that changes a pool word
tests something that cannot happen. This removes every poke into the game and library code (sdk.txt's game code and NAOMI
ranges: where the repo's C has no stores), from the "poke" entries of the cases. Functions are checked again afterwards; one that
only passed because of a made-up pool value fails then, which is the point.
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


def main(argv):
    apply = '--apply' in argv
    files = changed = removed = 0
    for f in sorted(glob.glob('tests/*/*.json')):
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
                if not p:
                    del c['poke']
        files += 1
        if hit:
            changed += 1
            removed += hit
            if apply:
                json.dump(d, open(f, 'w'), indent=1)
    print('%d case files, %d with pokes into code, %d pokes %s' % (files, changed, removed, 'removed' if apply else 'would go'))


if __name__ == '__main__':
    main(sys.argv)
