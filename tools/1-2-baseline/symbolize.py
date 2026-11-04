#!/usr/bin/env python3
"""The split's assembly with every address as a name: the source of a movable (shiftable) build. Run in the repo. Stdlib only.

    python3 tools/1-2-baseline/symbolize.py <out dir>      write <out dir>/asm/*.src, <out dir>/objects.txt, <out dir>/bss.src

asm/ (split_asm.py) holds every piece as raw words: it rebuilds the executable byte for byte where it is, and it cannot move,
because an address in it is a number. Here each word that tools/1-2-baseline/pointers.py decided is an address (P in
build/pointers.txt, run it first) becomes `.DATA.L <name>+H'<offset>`: the piece that holds the target (its exported label) and
the distance into it. The linker fills in the value, so the word follows its target wherever the link puts it. Laid out as the
original, the image is the same bytes (asmsh takes a .DATA.L at a 2-aligned offset in place: a warning, no padding).

  - a target past the end of the image (the game's BSS, its heaps and the buffers below layout.txt's `fixed` line) is _bss+off:
    bss.src reserves that range as one block (section B), so its layout holds while the linker places its start;
  - a word read in another mirror than the one the game is linked in (0C, 8C, AC) keeps its mirror: +H'80000000 and the like;
  - a word inside a C unit (units.txt, compiled C in the byte-identical build) is not written: the compiler wrote it, from names;
  - a branch of listed code into another piece (bsr, bra, bt, bf, bt/s, bf/s) becomes that instruction with a name: the linker
    relocates them (BSR _b, BRA _b+H'4 and BT _b+H'2 reach their bytes across a pad), so a piece no longer has to stay next to
    the functions it calls. A pool load into a neighbour's pool (mov.l, mov.w, mova) stays a distance: the original compiler shared
    pools between the functions of one object file, and those pieces move together.

Words that stay numbers (N) are left as they are. The pieces keep their file names and objects.txt its order.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import os
import re
import sys

import layout

M = 0xFFFFFFFF


def pieces():
    """[(start, label, file name)] of asm/*.src in objects.txt order, start in the 0C mirror."""
    out = []
    for f in open('objects.txt').read().split():
        m = re.match(r'([0-9a-f]{8})_(.+)\.src$', f)
        if m:
            out.append((layout.mirror(int(m.group(1), 16)), '_' + m.group(2), f))
    return out


def addresses():
    """{word address: value} of the P words in build/pointers.txt."""
    if not os.path.exists('build/pointers.txt'):
        sys.exit('[ERROR] no build/pointers.txt: run python3 tools/1-2-baseline/pointers.py first')
    out = {}
    for l in open('build/pointers.txt'):
        p = l.split()
        if p[2] == 'P':
            out[int(p[0], 16)] = int(p[1], 16)
    return out


BRANCH = {0xA: 'BRA', 0xB: 'BSR', 0x89: 'BT', 0x8B: 'BF', 0x8D: 'BT/S', 0x8F: 'BF/S'}


def branches(P, starts, words, end):
    """{address: (mnemonic, target)} of the branches in listed code that land in another piece: the linker relocates BSR, BRA, BT
    and BF to a name (+offset), so they follow their target. A pool word or an address word is no instruction."""
    import boundaries as B
    import shift
    _, _, pools = shift._listed()
    taken = set()
    for a in words:
        taken.update((a, a + 2))
    piece = lambda a: bisect.bisect_right(starts, a) - 1
    out = {}
    F = layout.functions()
    fstart = [f[0] for f in F]
    mids = {}                                 # a code address a pointer word names inside a function's own piece, not at its start (a
    for v in words.values():                  # callback entry): the walk from the function's entry does not reach it (Virtua Tennis: the
        t = layout.mirror(v)                  # file system's interrupt callback, 14 bytes after FUN_8c1dd692, ended in a bra to
        k = bisect.bisect_right(fstart, t) - 1    # gdFsExecServerG that stayed the original word and landed 32 bytes early once the
        if k >= 0 and F[k][0] < t and piece(t) == piece(F[k][0]):     # pieces moved); a pointer into a data piece is no entry
            mids.setdefault(k, set()).add(t)
    is_code = lambda r: not any((B.shdis.decode(B.word(x), x)[0] or '.').startswith('.') for x in r)
    for k, (a, s, n) in enumerate(F):
        nxt = F[k + 1][0] if k + 1 < len(F) else end
        try:                                  # only the instructions the code walk from the entry reaches: a listed "function"
            run = sorted(x for x in B.reach(a, stop_at=nxt)[1] if a <= x < min(a + s, end))      # that is data (Crazy Taxi
        except Exception:                     # meshVertexIndexBlock) has words shaped like branches, which must stay words
            run = []
        if not is_code(run):
            run = []                          # the walk ran into a word that is no instruction: no code executes one, it is data
        run = set(run)
        for e in sorted(mids.get(k, ())):     # each other way in, walked on its own: kept when it meets no word that is no instruction
            try:
                lim = starts[piece(e) + 1] if piece(e) + 1 < len(starts) else end        # the end of the piece the entry is in
                r = sorted(x for x in B.reach(e, stop_at=lim)[1] if e <= x < min(lim, end))
            except Exception:
                continue
            if r and is_code(r):
                run.update(r)
        run = sorted(run)
        for x in run:
            if x in pools or x - 2 in pools or x in taken:
                continue
            w = B.word(x)
            if w >> 12 in (0xA, 0xB):
                d = w & 0xFFF
                d -= 0x1000 if d & 0x800 else 0
                mn = BRANCH[w >> 12]
            elif w >> 8 in (0x89, 0x8B, 0x8D, 0x8F):
                d = w & 0xFF
                d -= 0x100 if d & 0x80 else 0
                mn = BRANCH[w >> 8]
            else:
                continue
            t = x + 4 + 2 * d
            if mn in ('BRA', 'BSR', 'BT/S', 'BF/S'):          # the slot runs before the branch: a branch, a jump, a return or a
                slot = (B.shdis.decode(B.word(x + 2), x + 2)[0] or '.')        # pc-relative load there does not assemble
                if slot.startswith(('.', 'b', 'j', 'rt', 'trapa')) or ',pc)' in slot:
                    continue
            if piece(t) != piece(x) and P[0][0] <= t < end:
                out[x] = (mn, t)
    return out


def main():
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    dst = sys.argv[1]
    base = layout.mirror(int(open('BASE').read().strip(), 16))
    link_top = int(open('BASE').read().strip(), 16) & 0xE0000000       # the mirror the game is linked in
    end = base + os.path.getsize('1ST_READ.BIN')
    bend = layout.bss_start(end)                         # the BSS block starts word aligned (an image that ends mid-word)
    fixed = layout.region('fixed', True)[0]
    bss_end = (layout.region('bss') or (fixed,))[0]      # layout.txt `bss <end>`: where the BSS, heaps and buffers that move end;
    P = pieces()                                         # from there to `fixed` is room the image may grow into
    starts = [s for s, _, _ in P]
    words = addresses()

    def name_of(v):
        t = layout.mirror(v)
        delta = ((v & 0xE0000000) - link_top) & M
        if t >= bend:                                    # (pointers.py names only targets below `fixed`)
            sym, off = '_bss', t - bend
        else:
            i = bisect.bisect_right(starts, t) - 1
            sym, off = P[i][1], t - P[i][0]
        e = sym + ("+H'%X" % off if off else '')
        return sym, e + ("+H'%08X" % delta if delta else '')

    jumps = branches(P, starts, words, end)
    os.makedirs(os.path.join(dst, 'asm'), exist_ok=True)
    done = unit = nb = 0
    straddle = []
    for k, (s, label, f) in enumerate(P):
        nxt = P[k + 1][0] if k + 1 < len(P) else end
        src = open(os.path.join('asm', f)).read().split('\n')
        want = {a - s: v for a, v in words.items() if s <= a and a + 4 <= nxt}
        jump = {a - s: j for a, j in jumps.items() if s <= a < nxt}
        straddle += [a for a in words if s <= a < nxt < a + 4]      # half in this piece, half in the next: a boundary to move
        if not want and not jump:
            open(os.path.join(dst, 'asm', f), 'w').write('\n'.join(src))
            continue
        body = [i for i, l in enumerate(src) if l.strip().startswith(('.DATA.W', '.DATA.B'))]
        if any(not src[i].strip().startswith('.DATA.W') for i in body[:-1]) or len(body) * 2 < nxt - s - 1:
            unit += len(want)                   # not a piece of raw words (a C unit's object, or written by hand): left as it is
            open(os.path.join(dst, 'asm', f), 'w').write('\n'.join(src))
            continue
        imports = set()
        out = src[:body[0]]
        j = 0
        while j < len(body):
            off = 2 * j
            if off in want:
                sym, e = name_of(want[off])
                if sym != label:
                    imports.add(sym)
                out.append("          .DATA.L     %s" % e)
                done += 1
                j += 2
            elif off in jump:
                mn, t = jump[off]
                sym, e = name_of((t & 0x1FFFFFFF) | link_top)
                imports.add(sym)
                out.append("          %-11s %s" % (mn, e))
                nb += 1
                j += 1
            else:
                out.append(src[body[j]])
                j += 1
        out += src[body[-1] + 1:]
        head = [l for l in out if l.strip().startswith('.EXPORT')]
        at = out.index(head[0]) if head else 2
        out[at:at] = ['          .IMPORT     %s' % n for n in sorted(imports)]
        open(os.path.join(dst, 'asm', f), 'w').write('\n'.join(out))
    open(os.path.join(dst, 'objects.txt'), 'w').write('\n'.join(f for _, _, f in P) + '\n')
    open(os.path.join(dst, 'bss.src'), 'w').write('\n'.join([
        '; %08x-%08x the game\'s BSS, heaps and buffers that move with the image, as one block: _bss+offset' % (bend, bss_end),
        '          .SECTION    B, DATA, ALIGN=4',
        '          .EXPORT     _bss',
        '_bss:',
        "          .RES.B      H'%X" % (bss_end - bend),
        '          .END', '']))
    print('%d address words and %d branches into other pieces written as names in %d pieces; %d in C units left to the compiler; '
          'bss %08X-%08X' % (done, nb, len(P), unit, bend, bss_end))
    if straddle:
        print('[ERROR] %d address words cross a piece boundary (half in each file), left as numbers: %s' % (
            len(straddle), ' '.join('%08x' % a for a in sorted(straddle)[:10])))
        sys.exit(1)


if __name__ == '__main__':
    main()
