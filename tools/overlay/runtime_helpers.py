#!/usr/bin/env python3
"""build/runtime_helpers.json: the bytes of the compiler's runtime helpers (names starting with _) in 1ST_READ.BIN. Run in the repo.

Overlay code calls them; the check runs them instead of comparing the call, so they must be in the simulator's memory (SH4SIM_ALSO)."""
import json, os
exe = open('1ST_READ.BIN', 'rb').read()
base = int(open('BASE').read().strip(), 16)
out = {}
for l in open('functions.txt'):
    p = l.split()
    if len(p) >= 4 and p[0] == 'F' and p[3].startswith('_'):
        a, s = int(p[1], 16), int(p[2])
        out[p[1]] = exe[a - base:a - base + s].hex()
os.makedirs('build', exist_ok=True)
json.dump(out, open('build/runtime_helpers.json', 'w'))
print(len(out), 'helpers')
