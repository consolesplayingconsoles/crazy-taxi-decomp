#!/usr/bin/env python3
"""Whether a build from C fits, read from its link: section extents from a map, the room a part may take before an optimized link,
and the linker messages of a branch that no longer reaches. Stdlib only; used by cbuild.py.

    sections(map text)               {section: (first byte, end, bytes)} over every section row of the map
    check(sections, regions, others) (fits, lines): each section in regions holds code and ends inside it; others must be empty
    room(caps, plain, opt, margin)   the bytes of plain-linked objects a part may take when the link is optimized (one ratio, or
                                     one per part: plain and opt as lists)
    unreached(log text)              the places the linker reports as RELOCATION SIZE OVERFLOW (a short branch that does not reach)
    fatal(log text)                  the lines that mean the link did not happen (a program error, a tool that could not start,
                                     elf2bin's ERROR:). Not the optimizer's ** 1170 ADDRESS SPACE DUPLICATE: it links once
                                     without optimizing first, where parts filled for the optimized sizes overlap; see overlaps()
    overlaps(elf bytes)              loadable segments of the linked file that overlap (what makes a link that did not fit)
"""
import json
import os
import re

ROW = re.compile(r"^(\w+)?[ \t]+H'([0-9A-F]{8})[ \t]+-[ \t]+H'([0-9A-F]{8})[ \t]+H'([0-9A-F]{8})", re.M)
UNREACHED = re.compile(r'\*\*\s*108\s+RELOCATION SIZE OVERFLOW\(([^)]*)\)')
FATAL = re.compile(r'^.*(?:PROGRAM ERROR|ERROR:|CANNOT EXECUTE|\(F\)).*$', re.M)


def sections(text):
    """A row with a name starts a section; the rows under it (no name) are its other modules. Empty rows are left out."""
    out, cur = {}, None
    for m in ROW.finditer(text):
        cur = m.group(1) or cur
        a, z, n = int(m.group(2), 16), int(m.group(3), 16) + 1, int(m.group(4), 16)
        if not n or cur is None:
            continue
        s = out.get(cur)
        out[cur] = (min(a, s[0]), max(z, s[1]), s[2] + n) if s else (a, z, n)
    return out


def check(secs, regions, others=()):
    """regions: {section: (start, end)} where each must lie, and hold code (an empty one means the map is not of this build);
    others: sections that must be empty (the overflow)."""
    ok, lines = True, []
    for name, (lo, hi) in sorted(regions.items()):
        s = secs.get(name)
        if s is None:
            ok = False
            lines.append('%s: no code in the map (a part of the build cannot be empty)' % name)
            continue
        if s[0] < lo or s[1] > hi:
            ok = False
            lines.append('%s: %08X-%08X does not lie in %08X-%08X (%d bytes over)' % (name, s[0], s[1], lo, hi, max(s[1] - hi, lo - s[0])))
        else:
            lines.append('%s: %d bytes, %d spare' % (name, s[1] - s[0], hi - s[1]))
    for name in others:
        if name in secs:
            ok = False
            lines.append('%s: %d bytes that did not fit' % (name, secs[name][2]))
    return ok, lines


def room(caps, plain, opt, margin=1.0):
    """A part of cap bytes holds about cap * plain / opt bytes of objects measured by a plain link, when the optimized link brings
    plain down to opt; margin (below 1) keeps some of that back, since each part shrinks by its own ratio."""
    if isinstance(plain, (list, tuple)):          # one ratio per part, as the last link measured it
        return [int(c * p / o * margin) if p and o else c for c, p, o in zip(caps, plain, opt)]
    if not plain or not opt:
        return list(caps)
    return [int(c * plain / opt * margin) for c in caps]


def unreached(text):
    return sorted(set(UNREACHED.findall(text)))


def fatal(text):
    return [m.group(0).strip() for m in FATAL.finditer(text)]


def overlaps(elf):
    """[(first, second)] of loadable ELF segments, as (start, end), that share an address (32-bit little-endian ELF)."""
    import struct
    if elf[:4] != b'\x7fELF':
        return [('not an ELF file', '')]
    phoff = struct.unpack_from('<I', elf, 0x1C)[0]
    phentsize, phnum = struct.unpack_from('<HH', elf, 0x2A)
    segs = []
    for i in range(phnum):
        typ, off, va, pa, fsz, msz = struct.unpack_from('<6I', elf, phoff + i * phentsize)
        if typ == 1 and msz:
            segs.append((va, va + msz))
    segs.sort()
    return [(a, b) for a, b in zip(segs, segs[1:]) if b[0] < a[1]]



def save_ratios(path, ratios):
    """Keep the ratios a link measured ([plain bytes a part], [linked bytes a part]) for the next build's first layout, written whole."""
    os.makedirs(os.path.dirname(path) or '.', exist_ok=True)
    tmp = '%s.tmp%d' % (path, os.getpid())
    with open(tmp, 'w') as f:
        json.dump({'plain': list(ratios[0]), 'linked': list(ratios[1])}, f)
    os.replace(tmp, path)


def load_ratios(path):
    """What save_ratios kept, as ([plain], [linked]), or None when there is nothing usable (no file, not a pair of positive numbers each)."""
    try:
        d = json.load(open(path))
        plain, linked = [float(x) for x in d['plain']], [float(x) for x in d['linked']]
    except (OSError, ValueError, KeyError, TypeError):
        return None
    if len(plain) != 2 or len(linked) != 2 or min(plain + linked) <= 0:
        return None
    return plain, linked
