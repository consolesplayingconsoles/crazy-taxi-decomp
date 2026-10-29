"""The executable's layout, for the tools that need it: layout.txt in the repo, one region per line. Stdlib only.

    <name> <start hex> [<end hex>]     # a comment

    game    the game's own code: what the build from C replaces (step 8). Required by tools/8-build/.
    fill    spare room in the file before the game code that the build may also fill (optional). The part of the file
            between its end and the start of game (an entry stub) stays as it is.
    code    code the test cases may not write to: the console runs it from ROM-like RAM nobody writes (optional;
            without it the cases may poke anywhere)
    spare   unused RAM for code that does not fit, for test builds only (optional; the build stops without it)

Crazy Taxi's, for example:
    game    0C020080 0C0739C0
    fill    0C014000 0C020000
    code    0C020000 0C089F26
    spare   0C5D0000
"""
import os
import sys

PATH = 'layout.txt'


def regions():
    """{name: (start, end or None)} from layout.txt; {} when there is no file."""
    out = {}
    if os.path.exists(PATH):
        for line in open(PATH):
            p = line.split('#', 1)[0].split()
            if len(p) >= 2:
                out[p[0]] = (int(p[1], 16), int(p[2], 16) if len(p) > 2 else None)
    return out


def region(name, required=False):
    """(start, end) of one region; None when it is not given (an [ERROR] exit when required)."""
    r = regions().get(name)
    if r is None and required:
        sys.exit('[ERROR] layout.txt has no "%s" line: <name> <start hex> <end hex> (see tools/layout.py)' % name)
    return r


def mirror(a):
    """The address in the 0C mirror of the same RAM: layout.txt and the build tools work in 0C, a game linked at 8C (the cached mirror)
    lists its functions as 8c in functions.txt."""
    return (a & 0x1FFFFFFF) | 0x0C000000


def functions():
    """[(address in the 0C mirror, size, name)] from functions.txt, sorted by address."""
    return sorted((mirror(int(l.split()[1], 16)), int(l.split()[2]), l.split()[3])
                  for l in open('functions.txt') if l.startswith('F '))
