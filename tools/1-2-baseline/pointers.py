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
    codefn   P  a word inside a listed function, not a pool word, whose value is exactly the start of a listed function (a function
                pointer table the function's code runs on into, so its words read as two instructions: Zombie Revenge 0C058ED0)
    coderun  P  a word inside a listed function, not a pool word, in a run of three at a fixed stride (4, 8, 12 or 16) whose
                4-aligned values lie within 0x100 of each other and inside the image (a table of addresses or of names:
                Zombie Revenge 0C20A6E8, the AFS names of the partition table; instructions never repeat like that)
    bytes    N  an odd value whose bytes are all under 0x40 next to a word of the same kind (a table of small bytes:
                Virtua Tennis 07070808 | 0b0b0c0c), unless a neighbour is an address into the image
    halves   N  a table of 16-bit numbers: two numbers side by side read as an address when both are near 0x0Cxx (Zombie Revenge
                0C1127D8, a model-to-slot table: 0C9C 0C9B read as 0C9C0C9B and shifted to 0C9EDC5B, a slot number nothing has). Two
                halves within 0x40 of each other, next to a word of the same shape with one among them that is not 4-aligned (a list of
                4-aligned pointers has none), the words at the ends of such a run, and a lone pair within 2
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


def code_words(starts, ends, pools, fx):
    """{word address: rule} for the words inside a listed function that are addresses although they read as two instructions."""
    top = B.BASE + len(B.BIN)
    fstart = set(starts)

    def inside(a):
        i = bisect.bisect_right(starts, a) - 1
        return i >= 0 and a < ends[i]

    def val(at):
        return struct.unpack_from('<I', B.BIN, at - B.BASE)[0]

    def shaped(at):
        if at in pools or at < B.BASE or at > top - 4 or not inside(at):
            return False
        v = val(at)
        return (v >> 24) in TOPS and v >> 24 != 0x8C and B.BASE <= layout.mirror(v) < fx

    out = {}
    cand = [at for at in range(B.BASE, top - 3, 4) if shaped(at)]
    for at in cand:
        if layout.mirror(val(at)) in fstart:
            out[at] = 'codefn'
    near = set(a for a in cand if val(a) % 4 == 0)
    for at in sorted(near):
        for stride in (4, 8, 12, 16):
            for off in range(3):
                win = [at + (off - k) * stride for k in range(3)]
                if all(w in near for w in win) and max(abs(val(w) - val(at)) for w in win) <= 0x100:
                    for w in win:
                        out.setdefault(w, 'coderun')
    return out


def _close(v, reach=0x40):
    return (v >> 24) == 0x0C and abs((v >> 16) - (v & 0xFFFF)) <= reach


def is_halves(at, word, fstart=()):
    """True when the word at `at` is two 16-bit numbers of a table, not an address. word(a) is the image word at a, None outside it."""
    v = word(at)
    if v is None or (v >> 24) != 0x0C or layout.mirror(v) in fstart:   # the start of a listed function is an address (Zombie Revenge 0C202CC0)
        return False
    run = [word(at - 4), v, word(at + 4)]
    if _close(v):
        if any(x is not None and x is not v and _close(x) for x in (run[0], run[2])):
            near = [x for x in run if x is not None and _close(x)]
            if any(x & 3 for x in near):
                return True
        hi, lo = v >> 16, v & 0xFFFF
        if abs(hi - lo) <= 2:
            return True
    nxt, prv = run[2], run[0]                                  # the end of a run: its number continues its neighbour's
    if nxt is not None and _close(nxt) and nxt & 3 and abs((v >> 16) - (nxt & 0xFFFF)) <= 0x10:
        return True
    if prv is not None and _close(prv) and prv & 3 and (prv >> 16) >> 8 == (v & 0xFFFF) >> 8 and abs((v & 0xFFFF) - (prv >> 16)) <= 0x10:
        return True
    return False


def classify():
    """[(word address, value, decision, rule)] for every candidate word, in address order."""
    fx = layout.region('fixed', True)[0]
    top = B.BASE + len(B.BIN)
    starts, ends, pools = shift._listed()
    force = overrides()
    inside_code = code_words(starts, ends, pools, fx)
    fstart = set(starts)

    def word(a):
        return struct.unpack_from('<I', B.BIN, a - B.BASE)[0] if B.BASE <= a <= top - 4 else None

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
                if at in inside_code:
                    out.append((at, v, 'P', inside_code[at]))
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
            if is_halves(at, word, fstart):
                out.append((at, v, 'N', 'halves'))
                continue
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
