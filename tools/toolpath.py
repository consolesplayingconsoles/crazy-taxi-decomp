"""Puts every tools folder on the import path, so that a tool imports another by name wherever it lives. Stdlib only.

The tools are grouped by the decomp step they serve (tools/<n>-<step>/); the ones several steps use stay in tools/.
"""
import os
import sys

ROOT = os.path.dirname(os.path.abspath(__file__))
_dirs = [ROOT] + sorted(os.path.join(ROOT, d) for d in os.listdir(ROOT) if d[:1].isdigit() and os.path.isdir(os.path.join(ROOT, d)))
_dirs.append(os.path.join(ROOT, '5-generated', 'gen_equiv'))
for _d in _dirs:
    if _d not in sys.path:
        sys.path.append(_d)
