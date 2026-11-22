#!/usr/bin/env python3
"""Carry names over from a sibling decomp: games by the same team often link the same in-house
library (an engine, a maths or model layer) that no SDK table knows. Stdlib only.

    sibling_names.py <named repo> <your repo> [--apply]

Both repos are decomp repos as this skill makes them (BASE, 1ST_READ.BIN, functions.txt). Each of
the sibling's named functions of 32 bytes or more is compared, with addresses and pool words
masked (sdk_masked.py's mask), against your code from each of your function starts, over the
sibling's length (the two analyses can end the same function at different bytes). A name is proposed only when the
match is exact and unique both ways: one sibling function matches exactly one of yours. Two or more
on either side (twins: the same code linked twice, or a family of copies) are listed, not named:
decide those by reading the callers.

Without --apply it prints the proposals; with it, it renames them in your functions.txt (review
the diff, then re-run split_asm.py and build.sh: still MATCH). Near matches are not proposed: a
changed constant can be a different function.
"""
import collections, os, sys

sys.path.insert(0, os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401  (every tools folder on the import path)
import sdk_masked as M

MIN = 32


def load(repo):
    base = int(open(os.path.join(repo, 'BASE')).read().strip(), 16)
    exe = open(os.path.join(repo, '1ST_READ.BIN'), 'rb').read()
    funcs, inside, _ = M.load_repo(repo)
    return base, exe, funcs, inside


def body(exe, base, a, size):
    return M.mask(M.words(exe, a - base, size // 2))


def main(argv):
    if len(argv) < 3 or len(argv) > 4 or (len(argv) == 4 and argv[3] != '--apply'):
        sys.exit(__doc__)
    sb, sx, sf, _ = load(argv[1])
    db, dx, df, _ = load(argv[2])
    head = collections.defaultdict(list)                # yours, by their first 8 masked words
    for a, size, name in df:
        if size >= MIN and a - db + 16 <= len(dx):
            head[tuple(body(dx, db, a, 16))].append((a, name))
    names = {n for a, s, n in df if not M.unnamed(n)}
    # The sibling's whole body against your code from each start (the analyses can end the same
    # function at different bytes). Library ranges count too: a shared library is what this is for.
    found = collections.defaultdict(list)               # yours -> the sibling names matching it
    for a, size, name in sf:
        if size < MIN or M.unnamed(name):
            continue
        want = body(sx, sb, a, size)
        mine = [b for b, n in head.get(tuple(want[:8]), ())
                if b - db + size <= len(dx) and body(dx, db, b, size) == want]
        for b in mine:
            found[b].append((name, len(mine)))
    rename, twins = {}, []
    own = dict((a, n) for a, s, n in df)
    for b in sorted(found):
        if not M.unnamed(own[b]):
            continue
        tn = found[b]
        if len(tn) == 1 and tn[0][1] == 1 and tn[0][0] not in names:
            rename[b] = (own[b], tn[0][0])
        else:
            twins.append(('/'.join(sorted({t for t, c in tn})), b))
    for a in sorted(rename):
        print('%08x %-16s -> %s' % (a, rename[a][0], rename[a][1]))
    for tn, b in twins:
        print('twin: %08x ~ %s' % (b, tn))
    print('%d names, %d twin groups left unnamed' % (len(rename), len(twins)), file=sys.stderr)
    if len(argv) == 4 and rename:
        path = os.path.join(argv[2], 'functions.txt')
        out = []
        for line in open(path):
            p = line.split()
            if len(p) >= 4 and p[0] == 'F' and int(p[1], 16) in rename:
                line = line.replace(p[3], rename[int(p[1], 16)][1], 1)
            out.append(line)
        open(path, 'w').write(''.join(out))
        print('renamed %d in %s' % (len(rename), path), file=sys.stderr)


if __name__ == '__main__':
    main(sys.argv)
