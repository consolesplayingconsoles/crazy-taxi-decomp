#!/usr/bin/env python3
"""Which words of the executable are addresses: the classification a movable (shiftable) build is written from. Run in the repo.
Stdlib only.

    python3 tools/1-2-baseline/pointers.py            write build/pointers.txt and print the count of each rule

A build that can move anything writes every address as a name (_function+off, _data+off) and lets the linker place it; an address
left as a number points at the old place once something before it grows. So every 4-aligned word that is not an instruction is
classified once, here, from the bytes, functions.txt and layout.txt, and the decisions are written down instead of being guessed
again at each build. A word is a candidate when its top byte is 0C, 8C or AC (the RAM mirrors) and it is not two instructions of
listed code. Each candidate gets one decision, P (an address: becomes a name) or N (a number: stays), and the rule that gave it:

    pool     P  a literal-pool word of listed code (a mov.l @(disp,pc) or mova reads it)
    8c       P  8C on top outside code: never two instructions (0x8Cxx is no SH-4 opcode)
    0c       P  0C or AC on top outside code, not a byte table
    bytes    N  an odd value whose bytes are all under 0x40 next to a word of the same kind (a table of small bytes:
                Virtua Tennis 07070808 | 0b0b0c0c), unless a neighbour is an address into the image
    fixed    N  an address at or above layout.txt's `fixed` line: a load buffer, hardware, a file that holds its own load address;
                it stays where it is, so it stays a number
    outside  N  an address in RAM below the image (the system area, the boot copy): nothing there moves
    words    P/N  a decision from words.txt, which overrides every rule above

words.txt (committed, optional): `P <addr>` or `N <addr>` per line, `#` comments: a person's decision about one word, kept as data.
layout.txt must give `fixed <addr>`: the first address the build may not move (Virtua Tennis 0C500000, its first file buffer).
build/pointers.txt: `<word address> <value> <P|N> <rule>`, 0C mirror for the address, the value as it is in the executable.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import os
import struct
import sys

import boundaries as B
import layout
import shift

TOPS = (0x0C, 0x8C, 0xAC)


def overrides(path='words.txt'):
    """{address (0C mirror): 'P' or 'N'} from words.txt."""
    out = {}
    if os.path.exists(path):
        for n, line in enumerate(open(path), 1):
            p = line.split('#', 1)[0].split()
            if not p:
                continue
            if len(p) != 2 or p[0] not in ('P', 'N'):
                sys.exit('[ERROR] words.txt line %d: want "P <addr>" or "N <addr>", got %r' % (n, line.strip()))
            out[layout.mirror(int(p[1], 16))] = p[0]
    return out


def classify():
    """[(word address, value, decision, rule)] for every candidate word, in address order."""
    fx = layout.region('fixed', True)[0]
    top = B.BASE + len(B.BIN)
    starts, ends, pools = shift._listed()
    force = overrides()

    def is_addr(v):
        return (v >> 24) in TOPS and B.BASE <= layout.mirror(v) < fx

    out = []
    for at in range(B.BASE, top - 3, 4):
        v = struct.unpack_from('<I', B.BIN, at - B.BASE)[0]
        if (v >> 24) not in TOPS:
            continue
        a = layout.mirror(v)
        if at in force:
            out.append((at, v, force[at], 'words'))
            continue
        pool = at in pools
        if not pool:
            i = bisect.bisect_right(starts, at) - 1
            if i >= 0 and at < ends[i] and v >> 24 != 0x8C:
                continue                                        # two instructions of listed code
        if a < B.BASE:
            out.append((at, v, 'N', 'outside'))
        elif a >= fx:
            out.append((at, v, 'N', 'fixed'))
        elif pool:
            out.append((at, v, 'P', 'pool'))
        elif v >> 24 == 0x8C:
            out.append((at, v, 'P', '8c'))
        else:
            bl, _ = shift._byte_like(at)
            lb, lw = shift._byte_like(at - 4)
            rb, rw = shift._byte_like(at + 4)
            if bl and v & 1 and not (is_addr(lw) or is_addr(rw)) and ((lb and lw) or (rb and rw)):
                out.append((at, v, 'N', 'bytes'))
            else:
                out.append((at, v, 'P', '0c'))
    return out


def main():
    rows = classify()
    os.makedirs('build', exist_ok=True)
    with open('build/pointers.txt', 'w') as f:
        for at, v, d, rule in rows:
            f.write('%08x %08x %s %s\n' % (at, v, d, rule))
    count = {}
    for _, _, d, rule in rows:
        count[(d, rule)] = count.get((d, rule), 0) + 1
    for (d, rule), n in sorted(count.items()):
        print('%s %-8s %7d' % (d, rule, n))
    print('%d words classified: %d addresses, %d numbers -> build/pointers.txt' % (
        len(rows), sum(1 for r in rows if r[2] == 'P'), sum(1 for r in rows if r[2] == 'N')))


if __name__ == '__main__':
    main()
