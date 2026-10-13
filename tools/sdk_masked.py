#!/usr/bin/env python3
"""Name more SDK functions after the signature tables: compare instructions, not hashes.

    python3 sdk_masked.py <repo> <executable> <table dir>... [--listings <dir>]... [--apply]

<table dir>: an `sdk_sigs.sh` output folder (its `link/*.map` + `link/*.elf`), any number; a folder
of sample programs works too (`link/<name>.map` with `<name>.elf` or a `<name>.mot` S-record image).
--listings: a folder searched for SHC object listings (`*.lst`, e.g. a library source dump).
Three passes per round, over the functions inside the repo's `sdk.txt`:

1. Masked match. Every unnamed function of 16 bytes or more is compared, word by word, with
   every exported library function, with the fields that depend on where code sits masked:
   pc-relative load displacements, `mova`, branch displacements and the literal-pool words
   those loads reach (exact, or a 0.85 difflib ratio). Where both sides name a pool word (the
   repo's functions.txt, globals.txt, symbols.txt; the library map's symbols) the names must
   agree. Kept if it is the one best candidate and sits in its library's link order between
   the nearest named neighbours (16 bytes or more); byte-identical twins that tie are settled
   by that order when exactly one fits.
2. Position. Between two named neighbours whose distance in the game equals their distance in
   a library, every function the library
   exports between them, by offset: tiny ones included,
   and starts the split missed (a function is split there, or a gap gets an entry).
3. Listings. A source file's listing whose masked code matches the game (98%) at one of its
   functions the game names gives every function of that file by offset, statics included.

Each proposal carries a score (its masked match). Sources that disagree, on the name at an
address or the address of a name, are settled by the best score when it leads by 0.05; else the
name waits. A stretch below 0.6 proposes nothing (a span that matches by chance). An existing
name the layout contradicts is replaced only on a function under 16 bytes (where signature
names collide), and reported as suspect otherwise. Rounds repeat until nothing new.

Prints `<addr> <name> <how> <source>`. With --apply, writes functions.txt (renames, splits,
new entries) and deletes the stale asm/ files; then re-run split_asm.py and build.sh (MATCH).
Stdlib only."""
import bisect, glob, os, re, struct, sys
from difflib import SequenceMatcher

MIN_SIZE = 16
MIN_RATIO = 0.85
MIN_STRETCH = 0.6     # position: masked match of the code between the two neighbours
MARGIN = 0.05         # a disagreement is settled only by a clearly better score


def segments(f):
    if f[:4] != b'\x7fELF' or f[5] != 1:          # little-endian SH-4 only
        return []
    phoff, = struct.unpack_from('<I', f, 28)
    phes, phn = struct.unpack_from('<HH', f, 42)
    out = []
    for i in range(phn):
        _, off, va, _, fs, _, _, _ = struct.unpack_from('<8I', f, phoff + i * phes)
        if fs:
            out.append((va, off, fs))
    return out


def srecords(path):
    """A Motorola S-record image (*.mot, how SDK sample programs often ship): one buffer and its
    segments as (address, offset, size), contiguous records merged."""
    chunks = []
    for line in open(path, errors='replace'):
        line = line.strip()
        if len(line) < 4 or line[0] != 'S' or line[1] not in '123':
            continue
        alen = {'1': 2, '2': 3, '3': 4}[line[1]]
        raw = bytes.fromhex(line[4:])
        addr = int.from_bytes(raw[:alen], 'big')
        chunks.append((addr, raw[alen:-1]))
    chunks.sort()
    buf, segs = bytearray(), []
    for addr, data in chunks:
        if segs and segs[-1][0] + segs[-1][2] == addr:
            segs[-1] = (segs[-1][0], segs[-1][1], segs[-1][2] + len(data))
        else:
            segs.append((addr, len(buf), len(data)))
        buf += data
    return bytes(buf), segs


def words(buf, off, n):
    n = min(n, (len(buf) - off) // 2)
    return list(struct.unpack_from('<%dH' % n, buf, off)) if n > 0 else []


def mask(ws):
    """Layout-dependent fields zeroed; literal-pool words reached by loads become None."""
    out = list(ws)
    pool = set()
    for i, w in enumerate(ws):
        hi = w >> 12
        if hi == 0xD:                               # mov.l @(disp,pc),Rn
            t = ((2 * i + 4) & ~3) // 2 + 2 * (w & 0xFF)
            pool.update((t, t + 1))
            out[i] = w & 0xFF00
        elif hi == 0x9:                             # mov.w @(disp,pc),Rn
            pool.add(i + 2 + (w & 0xFF))
            out[i] = w & 0xFF00
        elif w >> 8 == 0xC7:                        # mova @(disp,pc),r0
            out[i] = 0xC700
        elif hi in (0xA, 0xB):                      # bra, bsr
            out[i] = hi << 12
        elif w >> 8 in (0x89, 0x8B, 0x8D, 0x8F):    # bt, bf, bt/s, bf/s
            out[i] = w & 0xFF00
    for p in pool:
        if p < len(out):
            out[p] = None
    return tuple(out)


def pool_longs(buf, off, n):
    out = {}
    for i, w in enumerate(words(buf, off, n)):
        if w >> 12 == 0xD:
            t = ((2 * i + 4) & ~3) + 4 * (w & 0xFF)
            if off + t + 4 <= len(buf):
                out[i] = struct.unpack_from('<I', buf, off + t)[0]
    return out


def unnamed(name):
    """FUN_ entries and the thunks Ghidra named after them carry no real name."""
    return name.startswith('FUN_') or name.startswith('thunk_FUN_')


def bare(name):
    return name[1:] if name.startswith('_') else name


def load_tables(dirs):
    libs, order = [], {}
    for d in dirs:
        table = os.path.basename(os.path.normpath(d))
        for mp in sorted(glob.glob(os.path.join(d, 'link', '*.map'))):
            elf, mot = mp[:-4] + '.elf', mp[:-4] + '.mot'
            if os.path.exists(elf):
                f = open(elf, 'rb').read()
                segs = segments(f)
            elif os.path.exists(mot):
                f, segs = srecords(mot)
            else:
                continue
            if not segs:
                continue
            lib = os.path.basename(mp)[:-4]
            ents, allsyms = [], {}
            for line in open(mp, errors='replace'):
                m = re.match(r"(\S+)\s+H'([0-9A-Fa-f]+)\s+(ENT|DAT)", line)
                if m:
                    a = int(m.group(2), 16)
                    allsyms[a] = bare(m.group(1))
                    if m.group(3) == 'ENT':
                        ents.append((a, bare(m.group(1))))
            ents.sort()
            order[(table, lib)] = {n: a for a, n in ents}
            for k, (a, name) in enumerate(ents):
                for va, off, fs in segs:
                    if va <= a < va + fs:
                        nxt = ents[k + 1][0] if k + 1 < len(ents) else va + fs
                        libs.append((table, lib, name, f, off + a - va, min(nxt, va + fs) - a, allsyms))
                        break
    return libs, order


def load_repo(repo):
    funcs = []
    for line in open(os.path.join(repo, 'functions.txt')):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            funcs.append([int(p[1], 16), int(p[2]), p[3]])
    funcs.sort()
    ranges, singles = [], set()
    for line in open(os.path.join(repo, 'sdk.txt')):
        p = line.split()
        if p[:1] == ['range']:
            ranges.append((int(p[1], 16), int(p[2], 16)))
        elif p[:1] == ['func']:
            singles.add(int(p[1], 16))
    extra = {}
    for fn in ('globals.txt', 'symbols.txt'):
        path = os.path.join(repo, fn)
        if os.path.exists(path):
            for line in open(path):
                p = line.split()
                if len(p) >= 2 and not line.startswith('#'):
                    try:
                        extra.setdefault(int(p[0], 16), p[1])
                    except ValueError:
                        pass
    inside = lambda a: a in singles or any(s <= a < e for s, e in ranges)
    return funcs, inside, extra


def one_round(exe, base, funcs, inside, extra, libs, index, order):
    gnames = dict(extra)
    gnames.update({a: n for a, _, n in funcs if not unnamed(n)})
    used = {n for _, _, n in funcs}
    anchors = [(a, n) for a, sz, n in funcs if not unnamed(n) and sz >= MIN_SIZE]

    def fits(a, name, key, both):
        """Link order against the nearest named neighbours: both needed to settle twins,
        one enough for a single best match."""
        d = order[key]
        prev = next((n for fa, n in reversed(anchors) if fa < a and n in d), None)
        nxt = next((n for fa, n in anchors if fa > a and n in d), None)
        if (both and not (prev and nxt)) or not (prev or nxt):
            return False
        return (not prev or d[prev] < d[name]) and (not nxt or d[name] < d[nxt])

    found = []
    for a, sz, name in funcs:
        if not unnamed(name) or sz < MIN_SIZE or not inside(a):
            continue
        n = sz // 2
        g = mask(words(exe, a - base, n))
        gp = pool_longs(exe, a - base, n)
        cands = {}
        for i in index.get(g[:4], ()):
            t, l, lname, buf, off, avail, lsyms = libs[i]
            if avail < sz * 0.8:
                continue
            m = min(n, avail // 2)
            lw = mask(words(buf, off, m))
            r = 1.0 if lw == g and m == n else SequenceMatcher(None, g, lw, autojunk=False).ratio()
            if r < MIN_RATIO:
                continue
            lp = pool_longs(buf, off, m)
            agree = clash = 0
            for k in set(gp) & set(lp):
                gn, ln = gnames.get(gp[k]), lsyms.get(lp[k])
                if gn and ln:
                    if bare(gn) == bare(ln):
                        agree += 1
                    else:
                        clash += 1
            if clash:
                continue
            score = (r, agree)
            if lname not in cands or cands[lname][0] < score:
                cands[lname] = (score, (t, l))
        if not cands:
            continue
        best = sorted(cands.items(), key=lambda kv: kv[1][0], reverse=True)
        top = best[0][1][0]
        tied = [b for b in best if b[1][0] == top]
        if len(tied) == 1:
            nm, (_, key) = tied[0]
            if nm not in used and fits(a, nm, key, False):
                found.append((a, nm, 'match', key, top[0]))
        else:
            ok = [(nm, key) for nm, (_, key) in tied if nm not in used and fits(a, nm, key, True)]
            if len(ok) == 1 and len({nm for nm, _ in tied}) > 1:
                found.append((a, ok[0][0], 'twin, link order', ok[0][1], top[0]))
    return found


CODE_LINE = re.compile(r'^\s{4}([0-9A-F]{8}) ([0-9A-F]{4}|[0-9A-F]{8})\s')
FUNC_LINE = re.compile(r'^(?:[A-Z]SG |\s{4})\s*([0-9A-F]{8})\s+_?\w+:\s+; function: (\w+)')
SECT_LINE = re.compile(r'^([A-Z]SG) ')


def load_listings(dirs):
    """SHC object listings (*.lst): per source file, every function (statics too) by offset,
    and the code words of its P section."""
    mods = []
    for d in dirs:
        for root, _, files in os.walk(d):
            for fn in sorted(files):
                if not fn.lower().endswith('.lst'):
                    continue
                code, fns, sect = {}, [], None
                for line in open(os.path.join(root, fn), 'rb').read().decode('latin-1').splitlines():
                    m = SECT_LINE.match(line)
                    if m:
                        sect = m.group(1)
                    if sect != 'PSG':
                        continue
                    m = FUNC_LINE.match(line)
                    if m:
                        fns.append((int(m.group(1), 16), m.group(2)))
                        continue
                    m = CODE_LINE.match(line)
                    if m:
                        off, v = int(m.group(1), 16), int(m.group(2), 16)
                        if len(m.group(2)) == 4:
                            code[off] = v
                        else:
                            code[off], code[off + 2] = v & 0xFFFF, v >> 16
                if code and fns:
                    ws = [code.get(o, 0) for o in range(0, max(code) + 2, 2)]
                    mods.append((fn, fns, mask(ws)))
    return mods


def by_listing(exe, base, funcs, mods):
    """A listing's module whose masked code matches the game (98% of its words) at one of its
    functions the game names: every function of the module, statics included, by offset."""
    names = {}
    for a, (sz, n) in funcs.items():
        if not unnamed(n) and sz >= MIN_SIZE:
            names.setdefault(bare(n), []).append(a)
    found = {}
    for fn, fns, lw in mods:
        for off, name in fns:
            for ga in names.get(bare(name), ()):
                g0 = ga - off
                if g0 < base or g0 - base + 2 * len(lw) > len(exe):
                    continue
                gw = mask(words(exe, g0 - base, len(lw)))
                same = sum(1 for x, y in zip(lw, gw) if x == y or x is None or y is None)
                if same >= 0.98 * len(lw):
                    for o2, n2 in fns:
                        found.setdefault(g0 + o2, set()).add((n2, 'listing', fn, same / float(len(lw))))
    return found


def by_position(exe, base, funcs, inside, order, where):
    """Between two named neighbours whose distance in the game equals their distance in a
    library, and whose code between them matches (masked, 98% of the words): every exported
    function the library has between them, by offset. The content check matters: another
    release can have the same span with everything inside shifted."""
    anchors = sorted((a, n) for a, (sz, n) in funcs.items()
                     if not unnamed(n) and sz >= MIN_SIZE and inside(a))
    found = {}
    for (a1, n1), (a2, n2) in zip(anchors, anchors[1:]):
        n1, n2 = bare(n1), bare(n2)
        for key, d in order.items():
            if n1 in d and n2 in d and d[n1] < d[n2] and d[n2] - d[n1] == a2 - a1:
                if key + (n1,) not in where:
                    continue
                buf, off = where[key + (n1,)]
                n = (a2 - a1) // 2
                lw, gw = mask(words(buf, off, n)), mask(words(exe, a1 - base, n))
                if len(lw) < n:
                    continue
                score = sum(1 for x, y in zip(lw, gw) if x == y or x is None or y is None) / float(n)
                if score < MIN_STRETCH:
                    continue
                for nm, la in d.items():
                    if d[n1] < la < d[n2]:
                        found.setdefault(a1 + la - d[n1], set()).add((nm, 'position', '%s/%s' % key, score))
    return found


def place(funcs, a, nm, stale):
    """Name the function at a; a start inside a function splits it; a start in a gap gets the
    gap up to the next function. Names never change bytes: the build stays MATCH."""
    if a in funcs:
        stale.add((a, funcs[a][1]))
        funcs[a][1] = nm
        return 'named'
    starts = sorted(funcs)
    k = bisect.bisect_right(starts, a) - 1
    if k >= 0 and starts[k] < a < starts[k] + funcs[starts[k]][0]:
        c = starts[k]
        end = c + funcs[c][0]
        stale.add((c, funcs[c][1]))
        funcs[c][0] = a - c
        funcs[a] = [end - a, nm]
        return 'split'
    if k + 1 < len(starts):
        funcs[a] = [starts[k + 1] - a, nm]
        return 'gap'
    return None


def main(argv):
    apply = '--apply' in argv
    argv = [x for x in argv if x != '--apply']
    listing_dirs = []
    while '--listings' in argv:
        k = argv.index('--listings')
        listing_dirs.append(argv[k + 1])
        del argv[k:k + 2]
    if len(argv) < 4:
        sys.exit(__doc__)
    repo, exe_path, tables = argv[1], argv[2], argv[3:]
    base = int(open(os.path.join(repo, 'BASE')).read().strip(), 16)
    exe = open(exe_path, 'rb').read()
    libs, order = load_tables(tables)
    if not libs:
        sys.exit('[ERROR] no linked libraries in %s (sdk_sigs.sh output folders: link/*.map + link/*.elf)' % ' '.join(tables))
    index = {}
    for i, lib in enumerate(libs):
        if lib[5] >= 8:
            index.setdefault(mask(words(lib[3], lib[4], 4)), []).append(i)
    where = {(t, l, nm): (buf, off) for t, l, nm, buf, off, _, _ in libs}
    mods = load_listings(listing_dirs)
    flist, inside, extra = load_repo(repo)
    funcs = {a: [sz, n] for a, sz, n in flist}
    print('# %d library functions from %d tables, %d listings' % (len(libs), len(tables), len(mods)), file=sys.stderr)
    stale, done, suspect = set(), 0, {}
    rnd = 0
    while True:
        rnd += 1
        flist = sorted([a, sz, n] for a, (sz, n) in funcs.items())
        props = {}
        for a, nm, how, (t, l), sc in one_round(exe, base, flist, inside, extra, libs, index, order):
            props.setdefault(a, set()).add((nm, how, '%s/%s' % (t, l), sc))
        for src in (by_position(exe, base, funcs, inside, order, where), by_listing(exe, base, funcs, mods)):
            for a, s_ in src.items():
                props.setdefault(a, set()).update(s_)
        used = {n for _, n in funcs.values()}

        def pick(scores):
            """The best key when it beats every other by MARGIN, else None."""
            ranked = sorted(scores.items(), key=lambda kv: -kv[1])
            if len(ranked) > 1 and ranked[0][1] - ranked[1][1] < MARGIN:
                return None
            return ranked[0][0]
        best_at = {}
        for a, s_ in props.items():
            sc = {}
            for x in s_:
                sc[x[0]] = max(sc.get(x[0], 0), x[3])
            nm = pick(sc)
            if nm:
                best_at[a] = (nm, sc[nm])
        by_name = {}
        for a, (nm, sc) in best_at.items():
            by_name.setdefault(nm, {})[a] = sc
        chosen = {}
        for nm, addrs in by_name.items():
            a = pick(addrs)
            if a is not None:
                chosen[a] = nm
        n_round = 0
        for a in sorted(chosen):
            nm = chosen[a]
            cur = funcs[a][1] if a in funcs else None
            if cur and bare(cur) == bare(nm):
                continue
            if cur and not unnamed(cur):
                # an existing name the layout contradicts: replaced only on a tiny function
                # (where signature names collide), reported otherwise
                if funcs[a][0] >= MIN_SIZE or nm in used:
                    suspect[a] = (cur, nm)
                    continue
            elif nm in used:
                continue
            how = max((x for x in props[a] if x[0] == nm), key=lambda x: x[3])
            r = place(funcs, a, nm, stale)
            if r:
                used.add(nm)
                n_round += 1
                print('%08x %s %s %s%s' % (a, nm, how[1].replace(' ', '_'), how[2],
                                           '' if r == 'named' else ' (new start: %s)' % r)
                      + ('' if not cur or unnamed(cur) else ' (was %s)' % cur))
        done += n_round
        print('# round %d: %d names' % (rnd, n_round), file=sys.stderr)
        if not n_round:
            break
    for a, (cur, nm) in sorted(suspect.items()):
        if a in funcs and funcs[a][1] == cur:
            print('# suspect: %08x is %s, the library layout says %s' % (a, cur, nm), file=sys.stderr)
    print('# %d names in all' % done, file=sys.stderr)
    if apply and done:
        path = os.path.join(repo, 'functions.txt')
        keep = [l for l in open(path).read().split('\n') if l and not l.startswith('F ')]
        dlines = [l for l in keep if l.startswith('D ')]
        head = [l for l in keep if not l.startswith('D ')]
        rows = ['F %08x %d %s' % (a, sz, n) for a, (sz, n) in funcs.items()] + dlines
        rows.sort(key=lambda l: (int(l.split()[1], 16), l[0] == 'F'))
        open(path, 'w').write('\n'.join(head + rows) + '\n')
        for a, n in stale:
            f = os.path.join(repo, 'asm', '%08x_%s.src' % (a, n))
            if os.path.exists(f):
                os.remove(f)
        print('# functions.txt updated: re-run split_asm.py, then build.sh (MATCH)', file=sys.stderr)


if __name__ == '__main__':
    main(sys.argv)
