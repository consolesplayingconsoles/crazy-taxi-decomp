#!/usr/bin/env python3
"""The overlays' state (their units from overlays/units.tsv, the one list of them), printed after tools/progress.py's report. Run in the repo. A separate total: the main metric stays 1ST_READ.BIN's."""
import csv, os
import place_units      # noqa: E402  (tools/overlay: overlays/units.tsv, the overlays' units and their ranges)
RANGES = {}
for o_, unit_, start_, end_, opts_ in place_units.rows():
    RANGES.setdefault(o_, []).append((int(start_, 16), int(end_, 16)))
rows = list(csv.DictReader(open('overlays.tsv'), delimiter='\t'))
ok = [r for r in rows if r['status'] == 'ok']
fn = by = named = mt = mt_b = mt_u = 0
for r in ok:
    o = 'overlays/' + r['name']
    p = o + '/functions.txt'
    if not os.path.exists(p):
        continue
    unit_ranges = RANGES.get(r['name'], [])
    mt_u += len(unit_ranges)
    for l in open(p):
        q = l.split()
        if q and q[0] == 'F':
            s = int(q[2]); fn += 1; by += s
            for a_, b_ in unit_ranges:
                if a_ <= int(q[1], 16) < b_:
                    mt += 1; mt_b += min(s, b_ - int(q[1], 16))      # only what the unit covers (a listed size can run past it)
                    break
            named += not q[3].startswith('FUN_')
print('OVERLAYS                          %d of %d disc files with code, %d functions, %d bytes of code (separate total)' % (len(ok), len(rows), fn, by))
print('  matching C               %5.1f%%  %d functions, %d bytes, %d units: rebuilt byte for byte (build_overlays.sh)'
      % (100 * mt_b / max(by, 1), mt, mt_b, mt_u))
print('  named                    %5.1f%%  %d functions' % (100 * named / max(fn, 1), named))
print('  not in scope                     %d files (overlays.tsv says why)' % (len(rows) - len(ok)))
