"""The executable's layout, for the tools that need it: layout.txt in the repo, one region per line. Stdlib only.

    <name> <start hex> [<end hex>]     # a comment

    game    the game's own code: what the build from C replaces (step 8). Required by tools/8-build/.
    fill    spare room in the file before the game code that the build may also fill (optional). The part of the file
            between its end and the start of game (an entry stub) stays as it is.
    code    code the test cases may not write to: the console runs it from ROM-like RAM nobody writes (optional;
            without it the cases may poke anywhere)
    spare   unused RAM for code that does not fit, for test builds only (optional; the build stops without it)
    mixed   `mixed 1`: the movable build (mbuild.py) may copy a group that also holds pieces without C (a pointer into the middle of a
            function that is now C), and calls a replaced function through its hole when a bsr could not reach it. Off (the old
            behaviour, including the old error) when the line is missing. Zombie Revenge sets it; Crazy Taxi and Virtua Tennis do not.

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


def moving(a):
    """True for an address of the code the build replaces: inside `game` and not inside `keep` (a kept block stays at its address
    with its functions, as the original bytes: their entries are not rewritten and their C is not compiled)."""
    g = region('game', True)
    k = region('keep')
    return g[0] <= a < g[1] and not (k and k[0] <= a < k[1])


def bss_start(end):
    """Where the BSS block starts: the image end rounded up to a word. An image that ends mid-word (Zombie Revenge, 10299711 bytes) would
    give the linker an odd start. The same value for every image that ends on a word (Crazy Taxi, Virtua Tennis)."""
    return (end + 3) & ~3


def flag(name):
    """True when layout.txt has a `<name> 1` line: a switch for a behaviour only the games that set it get (`mixed`, see mbuild.py)."""
    r = region(name)
    return bool(r and r[0])


def mirror(a):
    """The address in the 0C mirror of the same RAM: layout.txt and the build tools work in 0C, a game linked at 8C (the cached mirror)
    lists its functions as 8c in functions.txt."""
    return (a & 0x1FFFFFFF) | 0x0C000000


def functions():
    """[(address in the 0C mirror, size, name)] from functions.txt, sorted by address."""
    return sorted((mirror(int(l.split()[1], 16)), int(l.split()[2]), l.split()[3])
                  for l in open('functions.txt') if l.startswith('F '))


# --- where the C lives ---------------------------------------------------------------------------------------------------
# The game's own C is in src/. The SDK's C (the bundled libraries: sdk.txt's ranges) is in sdk/<library>/, one folder per
# library (sdk/shinobi/, sdk/kamui/, sdk/naomi/, sdk/runtime/, sdk/sofdec/), so reading the tree says which code is the
# game's. A file is named by its name without `.c` wherever it lives, and that name is unique across the folders: its
# cases stay in tests/<name>/, so moving a file between folders moves nothing else. The console build compiles
# game_files() alone and gives the same executable with sdk/ there or not; a port builds from c_files().

def game_files():
    """the game's C files, src/*.c, in name order: what the console build compiles"""
    if not os.path.isdir('src'):
        return []
    return sorted('src/' + f for f in os.listdir('src') if f.endswith('.c') and os.path.isfile(os.path.join('src', f)))


def sdk_files():
    """the SDK's C files: sdk/*.c and sdk/<library>/*.c, by folder then name; [] in a repo with no sdk/"""
    out = []
    if os.path.isdir('sdk'):
        out += sorted('sdk/' + f for f in os.listdir('sdk') if f.endswith('.c') and os.path.isfile(os.path.join('sdk', f)))
        for d in sorted(os.listdir('sdk')):
            if os.path.isdir(os.path.join('sdk', d)):
                out += sorted('sdk/%s/%s' % (d, f) for f in os.listdir(os.path.join('sdk', d))
                              if f.endswith('.c') and os.path.isfile(os.path.join('sdk', d, f)))
    return out


def c_files():
    """every C file of the repo, the game's then the SDK's. The same file name in two folders is an [ERROR] exit."""
    files = game_files() + sdk_files()
    seen = {}
    for f in files:
        s = stem(f)
        if s in seen:
            sys.exit('[ERROR] two C files are named %s: %s and %s (a file is found by its name: rename one)' % (s, seen[s], f))
        seen[s] = f
    return files


def stem(path):
    """a C file's name without its folder and `.c`: what its cases folder and the tools call it"""
    b = os.path.basename(path)
    return b[:-2] if b.endswith('.c') else b


def c_path(name):
    """the path of the C file of that name, wherever it lives; src/<name>.c for a name no folder has (a new game file)"""
    for f in c_files():
        if stem(f) == name:
            return f
    return 'src/%s.c' % name


def cases_dir(path):
    """the folder of a C file's cases: tests/<name>/, whatever folder the file is in"""
    return 'tests/' + stem(path)


def sdk_library(path):
    """the library folder of a file under sdk/ ('' for a file directly in sdk/); None for a game file"""
    p = path.replace(os.sep, '/').split('/')
    if p[0] != 'sdk':
        return None
    return p[1] if len(p) > 2 else ''


# --- hardware a host does not have ---------------------------------------------------------------------------------------
# sdk.txt marks the SDK code that drives it: `hardware <start hex> <end hex> <what>`, one line per driver (the Maple bus, the
# GD-ROM file system, the memory card's file system, flash). A port replaces those libraries at their entry points with host
# code, so nothing below them ever runs there: such a function is never built for a port and never interpreted, a stub that
# reports itself stands in for it. The console build is not concerned: it keeps the SDK as the original bytes.

def hardware():
    """[(start, end, what)] of sdk.txt's `hardware` lines, in the 0C mirror, by address; [] when there are none"""
    out = []
    if os.path.exists('sdk.txt'):
        for line in open('sdk.txt'):
            p = line.split('#', 1)[0].split()
            if len(p) >= 3 and p[0] == 'hardware':
                out.append((mirror(int(p[1], 16)), mirror(int(p[2], 16)), ' '.join(p[3:])))
    return sorted(out)


def is_hardware(a):
    """what drives the hardware at that address (a `hardware` line's text, or True when it gives none); False outside them"""
    a = mirror(a)
    for lo, hi, what in hardware():
        if lo <= a < hi:
            return what or True
    return False
