"""The shifted layout: room for code compiled bigger than the original. Stdlib only.

layout.txt `shift <bytes> <end>` moves everything from the start of `keep` up to <end> (the kept block, the SDK after the game
code, and the game's BSS and heaps, which the executable does not hold but its code names) up by <bytes>. The executable grows
by that much and the code rebuilt from C gets that much more room. Nothing below the kept block moves (the boot block, the entry
stub), nothing from <end> on moves (the buffers the game loads its files to).

Every reference into the moved range has to follow, by <bytes>: the C's literals, the words of the pieces kept as words, the
SDK's objects, the names defined at fixed addresses and the entry stub. A reference is found by value, a 4-aligned word whose top
byte is 0C, 8C or AC and whose address lies in the range:
  - 8C on top: always a reference (0x8Cxx is no SH-4 instruction, so two instructions never read as one);
  - 0C or AC on top: a reference when it is a literal pool word of listed code; not one inside listed code (two instructions,
    0x0Cxx is a mov.b, 0xACxx a bra); not one when it and a neighbour are byte tables (every byte under 0x40, Virtua Tennis:
    07 07 08 08 | 0b 0b 0c 0c); a reference otherwise. Each one taken is listed by the build (ambiguous()).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import boundaries as B

import layout  # noqa: E402

D, E = layout.region('shift') or (0, 0)
S = (layout.region('keep') or (0, 0))[0]
TOPS = (0x0C, 0x8C, 0xAC)
_code = None
_taken = {}


def active():
    return D > 0


def moved(a):
    """True for a 0C-mirror address in the moved range."""
    return D > 0 and S <= a < E


def _listed():
    """(starts, ends, pool word addresses) of the listed code, 0C mirror."""
    global _code
    if _code is None:
        F = layout.functions()
        pools = set()
        for a, s, n in F:
            for k in range(0, s, 2):
                if a + k + 2 > B.BASE + len(B.BIN):
                    break
                w = B.word(a + k)
                if w >> 12 == 0xD or w >> 8 == 0xC7:             # mov.l @(disp,pc),Rn / mova @(disp,pc),r0
                    pools.add(((a + k + 4) & ~3) + 4 * (w & 0xFF))
        _code = ([a for a, s, n in F], [a + s for a, s, n in F], pools)
    return _code


def _byte_like(x):
    if not (B.BASE <= x <= B.BASE + len(B.BIN) - 4):
        return False, 0
    w = struct.unpack_from('<I', B.BIN, x - B.BASE)[0]
    return all(((w >> s) & 0xFF) < 0x40 for s in (0, 8, 16, 24)), w


def word(v, at):
    """The value the word v at address `at` (0C mirror) must hold in the shifted layout, or None when it is no reference into
    the moved range."""
    if not D or (v >> 24) not in TOPS:
        return None
    a = (v & 0x1FFFFFFF) | 0x0C000000
    if not (S <= a < E):
        return None
    if (v >> 24) != 0x8C:
        starts, ends, pools = _listed()
        if at not in pools:
            i = bisect.bisect_right(starts, at) - 1
            if i >= 0 and at < ends[i]:
                return None                                     # two instructions of listed code
            bl, _ = _byte_like(at)
            lb, lw = _byte_like(at - 4)
            rb, rw = _byte_like(at + 4)
            if bl and ((lb and lw) or (rb and rw)):
                return None                                     # a byte table
        _taken[at] = v
    return (v + D) & 0xFFFFFFFF


def literal(v):
    """A C literal's value in the shifted layout, or None. The C names addresses by value, never as two instructions."""
    if not D or (v >> 24) not in TOPS:
        return None
    a = (v & 0x1FFFFFFF) | 0x0C000000
    return (v + D) & 0xFFFFFFFF if S <= a < E else None


def ambiguous():
    """The 0C/AC-topped words taken as references so far: {address: value}."""
    return dict(_taken)
