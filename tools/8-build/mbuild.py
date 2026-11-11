#!/usr/bin/env python3
"""The game built from the proven C on the movable split: every address a name, one link. Run in the repo. Stdlib and Docker.

    python3 tools/8-build/mbuild.py            writes build/mbuild/game.bin (and its map); exit 1 when it does not build

Needs the split with names (tools/1-2-baseline/symbolize.py build/sym, checked by movecheck.py) and build.sh's build/obj.
The steps, each logged with the time in build/mbuild/mbuild.log:
  prep       copies of the C (tools/8-build/cbuild.py prep_sources: each function only in the file that proves it)
  literals   every number in the copies that is an address of the image or its BSS (layout.txt `fixed`) becomes a symbol,
             0x8C2FC69C -> ((int)A_8C2FC69C), declared extern: the compiler emits a relocation instead of the number
  compile    the copies (cbuild.py compile_all, cached)
  pieces     the split's pieces in their order; a piece whose function has C is left out and the C file's object takes the place
             of the first of its functions; the pieces inside layout.txt's `fill` block (filler in the file) are left out too
             of the first of its functions. A pointer into the middle of such a function (a second entry the listing merged, or
             code a table jumps into) needs the original bytes: that function's group of pieces goes in as a second copy, its
             labels renamed _name__2, and the pieces that point there are written to point at the copy
  link 1     every A_ symbol and every named global (globals.txt, symbols.txt) defined at its old address: defines add no bytes,
             so this link already has the final layout; its map says where every piece, C function and the BSS block landed
  link 2     the same, with each symbol defined where what it pointed at now is (a piece's label + offset, a C function, _bss +
             offset; the mirror kept): build/mbuild/game.bin
  check      no undefined name, no branch out of reach, and the image with its BSS ends below `fixed`

layout.txt `trimdata 1` (off without it): a data copy (bytes the C reads out of a replaced function, __d) holds only the data runs that contain a read,
  from the code/data split of the original (data_runs, data_copy_runs): Zombie Revenge 98 KB of data copies, 23 KB as runs.

layout.txt `mixed 1` (off without it: the behaviour of Crazy Taxi and Virtua Tennis, byte for byte, tests/mbuild and their game.bin):
  - a pointer into the middle of a function that is now C whose group also holds pieces without C is a running copy of the group,
    tied by pools and conditional branches only (a bsr out of it goes through a veneer), one block after the group's own pieces;
  - a kept piece's conditional branch into a replaced piece goes to that piece's hole; its bsr/bra goes there too when the hole holds
    a trampoline to the C function (mov.l pool,r0 / jmp @r0 / nop over its first 12 bytes) or is too short for one and runs its own
    bytes (proven equal to the C): a bsr reaches 4 KB, the C lands elsewhere, and a long group cannot take a veneer in the middle;
  - the veneers of a branch near the start of a long unit go before the unit.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import glob
import os
import re
import struct
import subprocess
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '1-2-baseline'))
import layout  # noqa: E402

OUT = 'build/mbuild'
SYM = 'build/sym'
LIT = re.compile(r'(?<![\w.])0[xX]([0-9A-Fa-f]{7,8})([uUlL]*)(?![\w.])')       # an integer suffix (0x0C0DB008u) is part of the number
TOPS = (0x0C, 0x8C, 0xAC)
LOG = OUT + '/mbuild.log'


def say(msg):
    line = '%s  %s' % (msg, time.strftime('%H:%M:%S'))
    print(line, flush=True)
    open(LOG, 'a').write(line + '\n')


def is_addr(v, lo, hi):
    return (v >> 24) in TOPS and lo <= ((v & 0x1FFFFFFF) | 0x0C000000) < hi


def rewrite_literals(text, lo, hi, macro_consts=False):
    """(text, {values}): every hex number of 7-8 digits in [lo, hi) (any RAM mirror) as ((int)A_<VALUE>), with its extern
    declaration at the top; comment lines are left alone (a line that starts with `*` is code: a dereference)."""
    used = set()

    def sub(m):
        v = int(m.group(1), 16)
        if not is_addr(v, lo, hi):
            return m.group(0)
        used.add(v)
        before = m.string[:m.start()]
        if macro_consts and m.string.lstrip().startswith('#define') and re.search(r'\*\s*\)\s*$', before):
            return 'A_%08X' % v                   # a mod's macro with a pointer cast of an address: the symbol itself is an address constant, so
                                                  # the macro also works as a file-scope initializer (`unsigned char *p = TAXI;`), where a cast to int does not
        return '((%s)A_%08X)' % ('unsigned int' if 'u' in m.group(2).lower() else 'int', v)
    out, inc = [], False
    for l in text.split('\n'):
        s = l.strip()
        if inc:                                   # inside a block comment: a line of it may start with anything
            out.append(l)
            inc = '*/' not in s
            continue
        if s.startswith('//') or (s.startswith('/*') and '*/' not in s):
            out.append(l)
            inc = s.startswith('/*')
            continue
        if s.startswith(('#if', '#elif')):          # a preprocessor condition needs a constant, not an address
            out.append(l)
            continue
        out.append(LIT.sub(sub, l) if not s.startswith('/*') else l)      # a one-line comment; `*(int *)0x...` is code
    head = ''.join('extern char A_%08X[];\n' % v for v in sorted(used))
    return head + '\n'.join(out), used


def mapper(pieces, dropped, second, syms, cfun, end, bss_end, link_top, keep=None, druns=None):
    """new(v) for an address value v (any mirror) of the original: where the built image has it, or None when nothing there.
    pieces: [(start, label)] in address order; dropped: their indexes replaced by C; second: {index: label suffix} of the
    pieces with a copy (__2 code that runs, __d bytes that are read); syms: {symbol: address} of the link; cfun: {entry
    address: C function name}; keep: a range whose addresses do not change (the fill block, left out of the link); druns: {index:
    [(lo, hi), ...]} for a data copy that holds only those address ranges, run k labelled <label>__d<k> (data_copy_runs)."""
    starts = [s for s, _ in pieces]

    def new(v):
        a = (v & 0x1FFFFFFF) | 0x0C000000
        top = v & 0xE0000000
        if keep and keep[0] <= a < keep[1]:
            return v                                   # the fill block: left out of the link, its addresses stay what they were
        if end <= a < bss_end:
            b = syms.get('_bss')
            return None if b is None else (((b & 0x1FFFFFFF) + (a - end)) | top)
        i = bisect.bisect_right(starts, a) - 1
        if i < 0 or a >= end:
            return v
        s, label = pieces[i]
        if i in dropped:
            if a in cfun:
                b = syms.get('_' + cfun[a])
                return None if b is None else ((b & 0x1FFFFFFF) | top)
            if i in second:
                if druns and i in druns:
                    for k, (lo, hi) in enumerate(druns[i]):
                        if lo <= a < hi:
                            b = syms.get(label + second[i] + str(k))
                            return None if b is None else (((b & 0x1FFFFFFF) + (a - lo)) | top)
                    return None                        # a byte of the piece the copy does not hold
                b = syms.get(label + second[i])
                return None if b is None else (((b & 0x1FFFFFFF) + (a - s)) | top)
            return None
        b = syms.get(label)
        return None if b is None else (((b & 0x1FFFFFFF) + (a - s)) | top)
    return new


def data_copy(text, label, start, word):
    """A named piece as bytes to read, never to run: its label <label>__d, every instruction line back to the raw word it was
    (a branch written with a name could be out of reach where the copy lands; nothing executes it)."""
    out, off = [], 0
    own = re.compile(r'(?<![\w])%s(?![\w])' % re.escape(label))
    for l in text.split('\n'):
        l = own.sub(label + '__d', l)          # its label and its words that point into itself
        s = l.strip()
        if s.startswith('.DATA.W'):
            off += 2
        elif s.startswith('.DATA.L'):
            off += 4
        elif s.startswith('.DATA.B'):
            off += 1
        elif s and not s.startswith(('.', ';')) and not s.endswith(':'):
            out.append("          .DATA.W     H'%04X" % word(start + off))
            off += 2
            continue
        out.append(l)
    return '\n'.join(out)


def data_runs(code, reads, start, size):
    """[(lo, hi)] address ranges of one replaced piece that a data copy must hold, sorted and merged, 4-aligned and inside the piece:
    for each address the C reads, the run of bytes around it that are no instruction (the pool or table it lies in); an address inside
    code gets its own word. code: the set of byte addresses instructions cover (shdis.reachable); None (no code map) keeps the whole
    piece. Zombie Revenge: 205 pieces, 98 KB whole, 23 KB as runs."""
    end = start + size
    if code is None:
        return [(start, end)]
    out = []
    for v in reads:
        a = v & ~1
        if a in code:
            lo, hi = a & ~3, (a & ~3) + 4
        else:
            lo = a
            while lo - 2 >= start and (lo - 2) not in code:
                lo -= 2
            hi = a + 2
            while hi < end and hi not in code:
                hi += 2
            lo, hi = lo & ~3, (hi + 3) & ~3
        out.append((max(lo, start), min(hi, end)))
    out.sort()
    merged = []
    for lo, hi in out:
        if merged and lo <= merged[-1][1]:
            merged[-1] = (merged[-1][0], max(merged[-1][1], hi))
        else:
            merged.append((lo, hi))
    return merged


def data_copy_runs(text, label, start, word, runs):
    """data_copy for a piece, holding only the address ranges `runs` (data_runs): <label>__d0 is the first run, <label>__d1 the next,
    each in the order of the original, the section ALIGN=4 (a run starts and ends on a word). None when a word kept in the runs
    names a label of the piece itself (a pointer into the part left out): the caller then keeps the whole copy."""
    full = data_copy(text, label, start, word).split('\n')
    own = set(m.group(1) for m in (re.match(r'^([\w$.]+):\s*$', l) for l in text.split('\n')) if m) | {label + '__d'}
    head, body, off = [], [], 0
    for l in full:
        s_ = l.strip()
        size = 2 if s_.startswith('.DATA.W') else 4 if s_.startswith('.DATA.L') else 1 if s_.startswith('.DATA.B') else 0
        if size:
            body.append((off, size, l))
            off += size
        elif not body and not re.match(r'^[\w$.]+:\s*$', l):
            head.append(l)
    out = []
    for l in head:
        if l.strip().startswith('.EXPORT') and label + '__d' in l:
            out += ['          .EXPORT     %s__d%d' % (label, k) for k in range(len(runs))]
        else:
            out.append(l.replace('ALIGN=2', 'ALIGN=4'))
    for k, (lo, hi) in enumerate(runs):
        out.append('%s__d%d:' % (label, k))
        for o, size, l in body:
            if lo - start <= o < hi - start:
                parts = l.split(None, 1)
                ops = parts[1] if len(parts) > 1 else ''
                if any(re.search(r'(?<![\w$.])%s(?![\w$.])' % re.escape(x), ops) for x in own):
                    return None
                out.append(l)
    out.append('          .END')
    return '\n'.join(out)


def hole_text(text, label, start, word):
    """The bytes of a piece the C replaces, kept so the pieces around it keep their distance: its own words, not zeros. A kept
    piece reads literal-pool words that the original compiler put inside a neighbour (fadeScreenStart's constants sit inside the
    next function), so the hole holds what was there: instructions as raw words, pool words as the symbols they were written
    with (they follow their targets). The label is _name__h, which no other copy of the piece uses."""
    return data_copy(text, label, start, word).replace(label + '__d', label + '__h')


def hole_pieces(gstart, npieces, dropped, fill_pieces, donors=()):
    """The pieces the C replaces that must stay as bytes: in a group (pieces that move together), every replaced piece between the first
    and the last kept one (not the filler). A kept piece reads literal-pool words only forward (pc-relative loads have no negative
    distance) and the original compiler put them anywhere after the code, often inside the next function: kept code on both sides of a
    replaced piece reads across it. Pieces before the first kept one need no hole, nor do those after the last unless a kept piece reads a
    pool word in one (donors: Zombie Revenge's FUN_0c0c932c took its frame size from the next piece, gone, and returned 8 KB down the
    stack); a group with no kept piece has none."""
    out = set()
    for g_, st_ in enumerate(gstart):
        last = (gstart[g_ + 1] if g_ + 1 < len(gstart) else npieces) - 1
        kept = [k for k in range(st_, last + 1) if k not in dropped]
        tail = [d for d in donors if st_ <= d <= last] if kept else []
        for k in range(min(kept, default=0), max(kept + tail, default=-1) + 1):
            if k in dropped and k not in fill_pieces:
                out.add(k)
    return out


def veneers(text, own, tag, only=None, start=0):
    """A running copy whose bsr/bra leave its group: each goes to a veneer after the piece that jumps to the target through r0,
    so it reaches wherever the link puts the target (a bsr reaches 4 KB: a copy lands far from the C functions it calls). pr is
    untouched (the callee returns to the caller) and the delay slot has run; r0 is no argument in the C calling convention, and
    the targets are C functions. own: the labels of the copy's group; with `only`, the byte offsets (from the section start) of the
    branches to route, whatever their target (the ones a link reported out of reach). A bt/bf cannot be written this way."""
    out, ven, n, off = [], [], start, 0
    for l in text.split('\n'):
        st = l.strip()
        here = off
        if st.startswith('.DATA.W'):
            off += 2
        elif st.startswith('.DATA.L'):
            off += 4
        elif st.startswith('.DATA.B'):
            off += 1
        elif st and not st.startswith(('.', ';')) and not st.endswith(':'):
            off += 2
        m = re.match(r'(\s+)(BSR|BRA)(\s+)(_\w+)((?:\+H\'[0-9A-F]+)*)\s*$', l)
        if m and (m.group(4) not in own if only is None else here in only):
            n += 1
            v = '%s__v%d' % (tag, n)
            ven += ['          .EXPORT     %s' % v, '%s:' % v, '          MOV.L       L%s,R0' % v[1:], '          JMP         @R0',
                    '          NOP', "          .DATA.W     H'0009", 'L%s:' % v[1:], '          .DATA.L     %s%s' % (m.group(4), m.group(5))]
            out.append('%s%s%s%s' % (m.group(1), m.group(2), m.group(3), v))
            continue
        if only is None and re.match(r'\s+(BT|BF|BT/S|BF/S)\s+(_\w+)', l) and re.match(r'\s+\S+\s+(_\w+)', l).group(1) not in own:
            raise ValueError('a conditional branch out of a copied group: %s' % l.strip())
        if only is not None and here in only and re.match(r'\s+(BT|BF|BT/S|BF/S)\s+', l):
            raise ValueError('a conditional branch out of reach (no veneer keeps every register): %s' % l.strip())
        out.append(l)
    imports = sorted({re.search(r'\.DATA\.L\s+(_\w+)', x).group(1) for x in ven if '.DATA.L' in x})
    vsrc = None
    if ven:                                   # their own file, ALIGN=4: each 12 bytes, its pool word at +8 (aligned)
        vsrc = '\n'.join(['          .SECTION    P, CODE, ALIGN=4'] + ['          .IMPORT     %s' % x for x in imports]
                         + ven + ['          .END', ''])
        for x in ven:
            if x.strip().startswith('.EXPORT'):
                out.insert(next(i for i, l in enumerate(out) if '.EXPORT' in l), '          .IMPORT     %s' % x.split()[-1])
    return '\n'.join(out), vsrc


def lnk_hex(v):
    """A value for the linker's `define`: a number that starts with a letter (AC210C5A) is read as a symbol, so it gets a leading 0.
    Unchanged for every address that starts with a digit (0C.., 8C..)."""
    return ('0' if (v >> 28) > 9 else '') + '%08X' % v


def split_routes(offsets, before_ok):
    """(early, late): the byte offsets of a unit's out-of-reach branches, the ones near its start (under 2000) apart when before_ok. Their
    veneers go before the unit, where a backward bsr reaches them, not after a unit longer than a bsr reaches. Without before_ok, all late."""
    early = sorted(o for o in offsets if before_ok and o < 2000)
    late = sorted(o for o in offsets if not (before_ok and o < 2000))
    return early, late


def cond_ties(code, word, pools, end, lo, group_of):
    """{(group, group)}: the pairs of groups a conditional branch (bt, bf, bt/s, bf/s: 8-bit reach, no veneer can hold it) joins. code:
    [(start, size)] of the listed functions; pools: pool word addresses; group_of(a): the group of an address."""
    ties = set()
    for fa, fs_ in code:
        for x in range(fa, min(fa + fs_, end), 2):
            if x in pools or x - 2 in pools:
                continue
            w = word(x)
            if w >> 8 in (0x89, 0x8B, 0x8D, 0x8F):
                d = (w & 0xFF) - (0x100 if w & 0x80 else 0)
                t = x + 4 + 2 * d
                if lo <= t < end:
                    ga, gb = group_of(x), group_of(t)
                    if ga != gb:
                        ties.add((min(ga, gb), max(ga, gb)))
    return ties


def copy_extent(g, ties):
    """(lo, hi): the groups a running copy of group g takes in: a conditional branch out of the copy takes the group it lands in, and the
    groups between, so they stay beside each other (it reaches 256 bytes). Without ties, just g."""
    lo = hi = g
    grew = True
    while grew:
        grew = False
        for ga, gb in ties:
            if (lo <= ga <= hi or lo <= gb <= hi) and (ga < lo or gb > hi):
                lo, hi = min(lo, ga), max(hi, gb)
                grew = True
    return lo, hi


def tramp_text(text, label, start, size, pools, halves=()):
    """(text, done): the hole of a replaced function with a trampoline over its first instructions (12 bytes, 14 when it starts 2 mod 4 so
    the pool word is aligned): mov.l pool,r0 / jmp @r0 / nop, to the C function. A kept piece's bsr reaches the hole, which sits where the
    function was, and the trampoline goes on to the C wherever it landed; nothing moves. Not written (text unchanged, False) when the
    function is shorter or its first words are pool words a neighbour reads (pools: mov.l and mova; halves: the words a mov.w reads,
    Zombie Revenge's scheduler read its frame size out of the next hole and got the trampoline's nop). (r0 is no argument in the C calling convention: the same
    as the veneers.)"""
    n = 12 if start % 4 == 0 else 14
    if size < n or any(x in pools or x - 2 in pools or x in halves for x in range(start, start + n, 2)):
        return text, False
    lines = text.split('\n')
    k = next((j for j, l in enumerate(lines) if l.strip() == label + '__h:'), None)
    if k is None:
        return text, False
    body = lines[k + 1:k + 1 + n // 2]
    if len(body) < n // 2 or any(not b.strip().startswith('.DATA.W') for b in body):
        return text, False
    tr = ['          MOV.L       LT%s,R0' % label[1:], '          JMP         @R0', '          NOP'] \
        + ["          .DATA.W     H'0009"] * (1 if n == 12 else 2) + ['LT%s:' % label[1:], '          .DATA.L     %s' % label]
    lines[k + 1:k + 1 + n // 2] = tr
    e = next(j for j, l in enumerate(lines) if '.EXPORT' in l)
    lines.insert(e, '          .IMPORT     %s' % label)
    return '\n'.join(lines), True


CALLB = re.compile(r"(\s+)(BSR|BRA)(\s+)(_\w+)\s*$")
CONDB = re.compile(r"(\s+)(BT|BF|BT/S|BF/S)(\s+)(_\w+)((?:\+H'[0-9A-F]+)*)\s*$")


def retarget_branches(lines, hole_labels, call_labels):
    """(lines, hit): a kept piece's branches into pieces the C replaced, aimed at the piece's hole (where it was) instead of the C function
    (which lands elsewhere): a conditional branch (8-bit reach, no veneer can hold it) into any hole, a bsr/bra into a hole whose label is
    in call_labels (it holds a trampoline to the C, or is too short for one and runs its own proven bytes). hit: the hole labels now used."""
    lines = list(lines)
    hit = set()
    for n_, l in enumerate(lines):
        m = CONDB.match(l)
        if m and m.group(4) in hole_labels:
            lines[n_] = '%s%s%s%s__h%s' % (m.group(1), m.group(2), m.group(3), m.group(4), m.group(5))
            hit.add(m.group(4) + '__h')
            continue
        m = CALLB.match(l)
        if m and m.group(4) in call_labels:
            lines[n_] = '%s%s%s%s__h' % (m.group(1), m.group(2), m.group(3), m.group(4))
            hit.add(m.group(4) + '__h')
    return lines, hit


def bss_pad(end, start):
    """Bytes to put in front of the BSS block so that `_bss` lands at the original image end modulo 32. Every object keeps its offset
    from `_bss`, so the whole block then keeps its alignment: the DMA buffers (Maple, TA, AICA, the file system's work area) were 32-byte
    aligned in the original and a block that moved by 28 mod 32 broke them (Virtua Tennis: the Maple driver's buffer at 8C472080 was
    8C4DE8DC, the console reset each time the controllers were scanned)."""
    return (end - start) % 32


def bss_text(end, bss_end, pad):
    """The BSS block's source (what symbolize.py writes as bss.src) with `pad` bytes of its own before `_bss`."""
    out = ['; %08x-%08x the game\'s BSS, heaps and buffers that move with the image, as one block: _bss+offset' % (end, bss_end),
           '          .SECTION    B, DATA, ALIGN=4']
    if pad:
        out.append("          .RES.B      H'%X" % pad)          # in front of the label: only the label's place is aligned
    out += ['          .EXPORT     _bss', '_bss:', "          .RES.B      H'%X" % (bss_end - end), '          .END', '']
    return '\n'.join(out)


def unit_source(paths, pad):
    """One object of pieces that follow each other in the original: their bodies in order, ALIGN=4 (the C compiler's: a section
    of another alignment is laid out apart from the others by the linker, whatever the input order), pad zero bytes in front,
    the imports of what the unit does not define itself."""
    imports, defined, body = set(), set(), []
    for path in paths:
        for l in open(path).read().split('\n'):
            s = l.strip()
            if s.startswith('.SECTION') or s == '.END' or s.startswith(';') or not s:
                continue
            if s.startswith('.IMPORT'):
                imports.add(s.split()[-1])
                continue
            m = re.match(r'^(_\w+):$', s)
            if m:
                defined.add(m.group(1))
            body.append(l)
    return '\n'.join(['          .SECTION    P, CODE, ALIGN=4'] + ['          .IMPORT     %s' % x for x in sorted(imports - defined)]
                     + ["          .DATA.W     H'0000"] * (pad // 2) + body + ['          .END', ''])


def map_modules(path):
    """{module: (start, end + 1)} of the P sections in a lnk map (the range line comes first, the module's name after it)."""
    out, rng = {}, None
    for l in open(path, errors='replace').read().replace('\r', '').split('\n'):
        m = re.search(r"H'([0-9A-F]{8})\s+-\s+H'([0-9A-F]{8})\s+H'[0-9A-F]{8}", l)
        if m:
            rng = (int(m.group(1), 16) & 0x1FFFFFFF | 0x0C000000, (int(m.group(2), 16) & 0x1FFFFFFF | 0x0C000000) + 1)
            continue
        if rng and l.strip():
            out.setdefault(l.split()[0], rng)
            rng = None
    return out


def wrong_distance_targets(items, bsym, read32):
    """The distance branches of the built image that do not reach what they reached in the original. items: (name, branch address,
    pool word address, target address) in the original; bsym(a): where the original address a is in the build, or None; read32(a):
    the signed word at a built address. A bsrf or braf takes its target from the branch's own address and a pool distance, so it is
    right only while the branch, the pool and the target keep their distances (Crazy Taxi, 2026-11-01: 44 of 96 were off by
    multiples of 32, the alignment pads, and vsprintf jumped to address 1)."""
    out = []
    for name, x, p, t in items:
        bx, bp, bt = bsym(x), bsym(p), bsym(t)
        if None in (bx, bp, bt):
            continue
        tb = bx + 4 + read32(bp)
        if tb != bt:
            out.append((name, x, tb, bt))
    return out


def distance_items(B, F, piece, end):
    """(name, branch, pool word, target) of every bsrf and braf whose register comes from a pool word, in the listed code."""
    import shift
    items = []
    for k, (a, s, n) in enumerate(F):
        nxt = F[k + 1][0] if k + 1 < len(F) else end
        try:
            run = sorted(x for x in B.reach(a, stop_at=nxt)[1] if a <= x < min(a + s, end))
        except Exception:
            continue
        for x in run:
            w = B.word(x)
            if w & 0xF0FF not in (0x0003, 0x0023):
                continue
            rn = (w >> 8) & 0xF
            for y in range(x - 2, max(a - 2, x - 26), -2):
                v = B.word(y)
                if v >> 12 == 0xD and (v >> 8) & 0xF == rn:
                    p = ((y + 4) & ~3) + 4 * (v & 0xFF)
                    items.append((n, x, p, x + 4 + struct.unpack_from('<i', B.BIN, p - B.BASE)[0]))
                    break
                if (v >> 8) & 0xF == rn and v >> 12 in (0x6, 0x7, 0xE, 0x4):
                    break
    return items


def pool_items(B, F, end):
    """(name, reading instruction, pool address) of every pc-relative load (mov.l, mov.w, mova) in the listed code."""
    items = []
    for k, (a, s, n) in enumerate(F):
        nxt = F[k + 1][0] if k + 1 < len(F) else end
        try:
            run = sorted(x for x in B.reach(a, stop_at=nxt)[1] if a <= x < min(a + s, end))
        except Exception:
            continue
        for x in run:
            w = B.word(x)
            if w >> 12 == 0xD or w >> 8 == 0xC7:
                items.append((n, x, ((x + 4) & ~3) + 4 * (w & 0xFF)))
            elif w >> 12 == 0x9:
                items.append((n, x, x + 4 + 2 * (w & 0xFF)))
    return items


def map_symbols(path):
    out = {}
    for m in re.finditer(r'(_\w+)\s*\n?\s*H\'([0-9A-Fa-f]{8})', open(path, errors='replace').read()):
        out.setdefault(m.group(1), int(m.group(2), 16))
    return out


def winpath(p):
    return p.replace('/', '\\')


def main():
    import boundaries as B
    import cbuild
    import movecheck
    import shift
    os.makedirs(OUT, exist_ok=True)
    open(LOG, 'w').close()
    if not os.path.isdir(SYM + '/asm') or not os.path.exists(SYM + '/obj/bss.obj'):
        sys.exit('[ERROR] no %s/asm with its objects: run symbolize.py %s and movecheck.py first' % (SYM, SYM))
    base_txt = open('BASE').read().strip()
    link_top = int(base_txt, 16) & 0xE0000000
    end = B.BASE + len(B.BIN)
    bend = layout.bss_start(end)                         # the BSS block starts word aligned (an image that ends mid-word)
    MIXED = layout.flag('mixed')                         # layout.txt `mixed 1`: groups with pieces the C does not replace may be copied and called through holes
    fixed = layout.region('fixed', True)[0]
    bss_end = (layout.region('bss') or (fixed,))[0]
    P = [(s, '_' + re.match(r'[0-9a-f]{8}_(.+)\.src$', f).group(1), f) for s, f in movecheck.piece_starts()]
    starts = [s for s, _, _ in P]
    piece = lambda a: bisect.bisect_right(starts, a) - 1

    # prep and literals
    gs = cbuild.prep_sources()                          # {function: C stem}
    F = layout.functions()
    cfun = {a: n for a, s, n in F if n in gs}
    dropped = {piece(a) for a in cfun if starts[piece(a)] == a}
    fill = layout.region('fill')                        # spare room in the file (0xFFFD filler the boot copy does not cover): not linked
    nfill = 0
    if fill:
        for i, (s_, _, f_) in enumerate(P):
            e_ = starts[i + 1] if i + 1 < len(P) else end
            if s_ < fill[1] and e_ > fill[0]:
                if s_ < fill[0] or e_ > fill[1]:
                    say('[ERROR] piece %s (%08X-%08X) crosses the fill block %08X-%08X: give functions.txt a D entry at each edge of the '
                        'block, so that the filler is a piece of its own that the build can leave out' % (f_, s_, e_, fill[0], fill[1]))
                    sys.exit(1)
                dropped.add(i)
                nfill += e_ - s_
        say('fill block %08X-%08X: %d bytes of filler left out of the link' % (fill[0], fill[1], nfill))
    fill_pieces = {i for i in dropped if fill and fill[0] <= starts[i] < fill[1]}
    import codeconsts                                    # a float read from a pool of code the C replaces: the constant itself
    gone = [(starts[i] & 0x1FFFFFFF, (starts[i + 1] if i + 1 < len(P) else end) & 0x1FFFFFFF) for i in sorted(dropped)]
    allv, nconst = set(), 0
    calls = set()                                         # addresses the C calls through a cast: code that runs, not bytes that are read
    game_stems = set(gs.values())                         # the decomp's own files; the others are a mod's (mod-sources.txt)
    for f in glob.glob(cbuild.OUT + '/src/*.c') + glob.glob(cbuild.OUT + '/src/**/*.h', recursive=True):     # headers too: a mod's game.h holds function addresses
        t = open(f, errors='replace').read()
        calls |= {int(m.group(1), 16) for m in re.finditer(r'\(\*\)\([^()]*\)\)\((?:0x|\(\(int\)A_)([0-9A-Fa-f]{8})\)', t)}   # as written, or as cbuild left it
        hits = [h for h in codeconsts.scan(t, B.BIN, int(base_txt, 16), gone) if h[3]]
        for s, e, a, lit in reversed(hits):
            t = t[:s] + lit + t[e:]
        nconst += len(hits)
        t, used = rewrite_literals(t, B.BASE, bss_end, macro_consts=f.endswith('.h') or os.path.basename(f)[:-2] not in game_stems)
        open(f, 'w').write(t)
        allv |= used
    say('prep: %d C functions in %d files replace %d pieces; %d float reads of their pools written as constants; %d address '
        'literals' % (len(gs), len(set(gs.values())), len(dropped), nconst, len(allv)))

    # copies of what something points into the middle of, in a function that is now C
    words = {}
    for l in open('build/pointers.txt'):
        p = l.split()
        if p[2] == 'P':
            words[int(p[0], 16)] = int(p[1], 16)
    infill = lambda a: bool(fill) and fill[0] <= a < fill[1]
    mid = lambda v: (end > layout.mirror(v) >= B.BASE and piece(layout.mirror(v)) in dropped
                     and layout.mirror(v) not in cfun and not infill(layout.mirror(v)))
    run_need = ({piece(layout.mirror(v)) for at, v in words.items() if piece(at) not in dropped and mid(v) and not v & 1}  # code that runs: asm points into it
                | {piece(layout.mirror(v)) for v in calls if mid(v)})                                        # or the C calls into it
                                                 # (an odd word is no code address: a byte table taken for pointers, Zombie Revenge 0C0E0C0D
                                                 # in 0C11581C's bytes 0B F7 0B F8 .., made a 1.3 MB running copy of FUN_0c0e07b4's group)
    read_need = {piece(layout.mirror(v)) for v in allv if mid(v)} - run_need                               # bytes that are read
    listed = {a for a, s, n in F}
    _, _, pools = shift._listed()
    game = layout.region('game')
    G = movecheck.groups(starts, listed, [(a, s) for a, s, n in F], B.word, pools, end, stay=game[0] if game else None,
                         pool32=lambda a: struct.unpack_from('<i', B.BIN, a - B.BASE)[0])
    if layout.region('keep'):
        escapes = keep_escapes(distance_items(B, F, piece, end), layout.region('keep'), layout.mirror)
        if escapes:
            say('[ERROR] a fixed-distance call leaves the keep block, so the target belongs in it (layout.txt): %s' % ', '.join('%s %08X -> %08X' % e for e in escapes[:8]))
            sys.exit(1)
    for _n, x_, p_, t_ in distance_items(B, F, piece, end):      # a distance branch keeps its pool and its target in its group, also one
        lo_, hi_ = sorted((piece(x_), piece(t_)))                 # movecheck.groups skipped as a pool word (Zombie Revenge _slow_strcpy at
        lo_, hi_ = min(lo_, piece(p_)), max(hi_, piece(p_))       # 0C0E62CA -> quick_strcpy1: groups split, the braf landed 0x1DC0 short)
        if end > t_ >= B.BASE:
            G = [g_ for g_ in G if not lo_ < g_ <= hi_]
    gstart = sorted(G)
    if MIXED:          # a copy may hold pieces without C: it is tied by pools only (a bsr out of it goes through a veneer), plus the conditional branches
        gstart_c = sorted(movecheck.groups(starts, listed, [(a, s) for a, s, n in F], B.word, pools, end, stay=game[0] if game else None,
                                           pool32=lambda a: struct.unpack_from('<i', B.BIN, a - B.BASE)[0], bsr_ties=False))
        gix_c = lambda i: bisect.bisect_right(gstart_c, i) - 1
        ties = cond_ties([(a, s) for a, s, n in F], B.word, pools, end, starts[0], lambda a: gix_c(piece(a)))
    else:
        gstart_c, ties = gstart, set()
    gset_c = set(gstart_c)
    copy_join = set()                      # group starts that are not a unit boundary inside a copy
    second = {}
    for j in run_need:                     # a copy that runs: its whole group, branches as names, labels _name__2
        lo_g, hi_g = copy_extent(bisect.bisect_right(gstart_c, j) - 1, ties)
        copy_join |= {gstart_c[g_] for g_ in range(lo_g + 1, hi_g + 1)}
        run = range(gstart_c[lo_g], gstart_c[hi_g + 1] if hi_g + 1 < len(gstart_c) else len(P))
        if not MIXED and any(k not in dropped for k in run):
            say('[ERROR] a pointer into %s needs a running copy of its group, which also holds pieces without C' % P[j][2])
            sys.exit(1)
        for k in run:
            second[k] = '__2'
    for j in read_need:                    # bytes the C reads (pool words, mova tables, the data after the code): that piece
        second.setdefault(j, '__d')        # alone, never run, its branches back as raw words (so none can be out of reach)
    druns = {}
    if layout.flag('trimdata'):            # layout.txt `trimdata 1`: of that piece only the data runs the C reads (data_runs)
        import shdis
        reads_by = {}
        for v in allv:
            if mid(v):
                reads_by.setdefault(piece(layout.mirror(v)), []).append(layout.mirror(v))
        base0 = (B.BASE & 0x1FFFFFFF) | 0x0C000000
        for j in sorted(read_need):
            if second.get(j) != '__d':
                continue
            s_, e_ = starts[j], (starts[j + 1] if j + 1 < len(P) else end)
            try:
                code = set()
                for pc in shdis.reachable(B.BIN, base0, s_, e_):
                    if s_ <= pc < e_:
                        code.update((pc, pc + 1))
            except Exception:
                code = None                # no code map: the whole piece, as before
            druns[j] = data_runs(code, reads_by.get(j, []), s_, e_ - s_)
    os.makedirs(OUT + '/asm', exist_ok=True)
    os.makedirs(OUT + '/obj', exist_ok=True)
    labels2 = {P[k][1] for k, x in second.items() if x == '__2'}
    tok = re.compile(r'(?<![\w])(%s)(?![\w])' % '|'.join(re.escape(x) for x in sorted(labels2, key=len, reverse=True))) if labels2 else None
    copies, vfiles = {}, {}
    for k in sorted(second):
        t = open('%s/asm/%s' % (SYM, P[k][2])).read()
        if second[k] == '__2':
            t = tok.sub(lambda m: m.group(1) + '__2', t)
            try:
                t, vsrc = veneers(t, {x + '__2' for x in labels2}, P[k][1] + '__2')
            except ValueError as e:
                say('[ERROR] %s: %s' % (P[k][2], e))
                sys.exit(1)
            if vsrc:
                open('%s/asm/v_%s' % (OUT, P[k][2]), 'w').write(vsrc)
                vfiles[k] = 'v_' + P[k][2]
        else:
            t0 = t
            t = data_copy_runs(t0, P[k][1], starts[k], B.word, druns[k]) if k in druns else None
            if t is None:                  # a kept word points into the part left out, or no trimming: the whole copy
                druns.pop(k, None)
                t = data_copy(t0, P[k][1], starts[k], B.word)
        open('%s/asm/c%s_%s' % (OUT, second[k][2:], P[k][2]), 'w').write(t)
        copies[k] = 'c%s_%s' % (second[k][2:], P[k][2])
    if druns:
        say('data copies: %d pieces cut to their data runs (%d bytes kept of %d)' % (len(druns), sum(h - l for r in druns.values() for l, h in r),
            sum((starts[k + 1] if k + 1 < len(P) else end) - starts[k] for k in druns)))
    # pieces that point into the middle of a C function: their words point at the copy
    repoint = {}
    for at, v in words.items():
        i = piece(at)
        if i not in dropped and mid(v) and not v & 1:      # an odd word points at no code: it has no copy to point at
            repoint.setdefault(i, set()).add(P[piece(layout.mirror(v))][1])
    for i, labs in repoint.items():
        t = open('%s/asm/%s' % (SYM, P[i][2])).read()
        for lab in labs:
            t = re.sub(r'(%s)(\+H\'[0-9A-F]+)' % re.escape(lab), lambda m: m.group(1) + '__2' + m.group(2), t)
            t = t.replace('.IMPORT     %s\n' % lab, '.IMPORT     %s\n          .IMPORT     %s__2\n' % (lab, lab))
        open('%s/asm/r_%s' % (OUT, P[i][2]), 'w').write(t)
    say('copies: %d pieces that run (for %d pointed-into functions), %d pieces only read; %d pieces repointed' % (
        sum(1 for x in second.values() if x == '__2'), len(run_need), sum(1 for x in second.values() if x == '__d'), len(repoint)))

    # compile the C
    stems_all = sorted({os.path.basename(f)[:-2] for f in glob.glob(cbuild.OUT + '/src/*.c')})     # the game's files and a mod's own (mod-sources.txt)
    say('compiling %d C files (cached ones are restored; the compiler\'s own lines go to stdout)' % len(stems_all))
    cbuild.compile_all(stems=stems_all, flags_edit=('c=P,', 'c=C,'))      # constants in C, placed after P: a file of
    # constants alone would make its P a DATA section, which the linker does not merge with the code's
    missing = [s for s in stems_all if not os.path.exists('%s/obj/%s.obj' % (cbuild.OUT, s))]
    if missing:
        say('[ERROR] %d C files did not compile: %s (build/cbuild/log/<file>.log)' % (len(missing), ' '.join(missing[:8])))
        sys.exit(1)
    say('compiled %d C files' % len(stems_all))

    # the link order: the C objects where their first function was
    first = {}
    for a, n in sorted(cfun.items()):
        first.setdefault(gs[n], piece(a))
    group_end = {}                            # a running copy is one block: what would land inside it goes after its last piece
    g = 0
    while g < len(gstart_c):
        h = g
        while h + 1 < len(gstart_c) and gstart_c[h + 1] in copy_join:         # groups a conditional branch joined in a copy are one block
            h += 1
        run = range(gstart_c[g], gstart_c[h + 1] if h + 1 < len(gstart_c) else len(P))
        if any(second.get(k) == '__2' for k in run):
            for k in run:
                group_end[k] = run[-1]
        g = h + 1
    if MIXED:          # a C object never goes inside a group: its pieces (kept ones and holes) keep their distances (bsrf/braf, pools)
        for g_, gs_ in enumerate(gstart):
            ge_ = (gstart[g_ + 1] if g_ + 1 < len(gstart) else len(P)) - 1
            for k in range(gs_, ge_ + 1):
                group_end.setdefault(k, ge_)
    at_piece = {}
    for stem, i in first.items():
        at_piece.setdefault(group_end.get(i, i), []).append(stem)
    after = {}                                # veneer files of a running copy, after its last piece
    for k, vf in vfiles.items():
        after.setdefault(group_end.get(k, k), []).append(vf)
    # link items in order: ['c', C stem] | ['v', veneer source] | ['a', [(piece, source)], original start, kind]: an asm unit is
    # one object of pieces that follow each other in the original (a group: nothing inside it moves), ALIGN=4 like the C,
    # padded in front so that it lands at its original address modulo 32 (pool loads read (pc + 4) & ~3; data may need its alignment)
    gset = set(gstart)
    donors = {piece(p_) for _n, x_, p_ in pool_items(B, F, end) if B.BASE <= p_ < end and piece(x_) not in dropped and piece(p_) in dropped}   # replaced pieces a kept piece reads a pool word from
    hole = {k: (starts[k + 1] if k + 1 < len(P) else end) - starts[k] for k in hole_pieces(gstart, len(P), dropped, fill_pieces, donors)}   # replaced pieces inside a group between kept ones: their size
    items = []

    def asm(i, path, kind):
        last = items[-1] if items else None
        bound = gset_c if kind == '2' else gset
        if kind != 'd' and last and last[0] == 'a' and last[3] == kind and last[1][-1][0] == i - 1 and (i not in bound or i in copy_join):
            last[1].append((i, path))
        else:
            items.append(['a', [(i, path)], starts[i], kind])
    if not MIXED:
        for i, (s, label, f) in enumerate(P):
            if i not in group_end:
                items += [['c', stem] for stem in at_piece.get(i, [])]
            if i in copies:
                asm(i, '%s/asm/%s' % (OUT, copies[i]), '2' if second[i] == '__2' else 'd')
            if i in group_end and group_end[i] == i:             # the end of a running copy: its veneers, then the C that waited
                items += [['v', '%s/asm/%s' % (OUT, vf)] for vf in after.get(i, [])]
                items += [['c', stem] for stem in at_piece.get(i, [])]
            if i in dropped:
                if i in hole:                                     # C replaces it, but kept code on both sides reads pools across it
                    hp = '%s/asm/hole_%s' % (OUT, P[i][2])
                    src_ = '%s/asm/%s' % (SYM, f)
                    open(hp, 'w').write(hole_text(open(src_ if os.path.exists(src_) else 'asm/' + f).read(), label, s, B.word))
                    asm(i, hp, 'k')
                continue
            if i in repoint:
                asm(i, '%s/asm/r_%s' % (OUT, f), 'k')
            elif open('%s/asm/%s' % (SYM, f)).read() != open('asm/' + f).read():
                asm(i, '%s/asm/%s' % (SYM, f), 'k')
            else:
                asm(i, 'asm/' + f, 'k')
    else:
        hole_labels = {P[k][1] for k in hole}
        halves = {p_ for _n, x_, p_ in pool_items(B, F, end) if B.word(x_) >> 12 == 0x9}
        hole_files, call_labels = {}, set()           # holes, and the ones a bsr/bra may be aimed at (a trampoline to the C, or too short for one)
        for k in sorted(hole):
            hp = '%s/asm/hole_%s' % (OUT, P[k][2])
            src_ = '%s/asm/%s' % (SYM, P[k][2])
            txt = hole_text(open(src_ if os.path.exists(src_) else 'asm/' + P[k][2]).read(), P[k][1], P[k][0], B.word)
            if layout.mirror(P[k][0]) in cfun:
                size_ = (starts[k + 1] if k + 1 < len(P) else end) - starts[k]
                txt, ok = tramp_text(txt, P[k][1], P[k][0], size_, pools, halves)
                if ok or size_ < 12:                      # too short for a trampoline: a call runs the hole's own bytes (proven equal to the C)
                    call_labels.add(P[k][1])
            open(hp, 'w').write(txt)
            hole_files[k] = hp
        say('holes: %d, %d of them can be called (a trampoline to the C, or too short for one)' % (len(hole_files), len(call_labels)))

        def to_hole(path, name):
            lines, hit = retarget_branches(open(path).read().split('\n'), hole_labels, call_labels)
            if not hit:
                return path
            out_ = '%s/asm/bt_%s' % (OUT, name)
            lines[1:1] = ['          .IMPORT     %s' % x for x in sorted(hit)]
            open(out_, 'w').write('\n'.join(lines))
            return out_
        pending_d = []
        pending = []                                  # a running copy waits for its group's last piece: the copy is one block after the group's own pieces
        for i, (s, label, f) in enumerate(P):
            if i not in group_end:
                items += [['c', stem] for stem in at_piece.get(i, [])]
            if i in copies:
                if second[i] == '__2':
                    pending.append((i, '%s/asm/%s' % (OUT, copies[i])))
                elif i in group_end:                      # bytes only read: after the group too, so its pieces keep their distances
                    pending_d.append((i, '%s/asm/%s' % (OUT, copies[i])))
                else:
                    asm(i, '%s/asm/%s' % (OUT, copies[i]), 'd')
            if i in dropped:
                if i in hole:                             # C replaces it, but kept code on both sides reads pools across it
                    asm(i, hole_files[i], 'k')
            elif i in repoint:
                asm(i, to_hole('%s/asm/r_%s' % (OUT, f), f), 'k')
            elif open('%s/asm/%s' % (SYM, f)).read() != open('asm/' + f).read():
                asm(i, to_hole('%s/asm/%s' % (SYM, f), f), 'k')
            else:
                asm(i, 'asm/' + f, 'k')
            if i in group_end and group_end[i] == i:         # the end of a running copy: the copy, its veneers, then the C that waited
                for j, pth in pending:
                    asm(j, pth, '2')
                pending = []
                for j, pth in pending_d:
                    asm(j, pth, 'd')
                pending_d = []
                items += [['v', '%s/asm/%s' % (OUT, vf)] for vf in after.get(i, [])]
                items += [['c', stem] for stem in at_piece.get(i, [])]
    extra = sorted(set(stems_all) - set(first))     # C that no piece of the original stands for (a mod's own files): linked after the game
    items += [['c', stem] for stem in extra]
    if extra:
        say('%d C files without a piece of the original (a mod\'s own) linked after the game' % len(extra))
    units = [it for it in items if it[0] == 'a']
    say('link order: %d C objects, %d asm units (from %d pieces), %d veneer files' % (
        sum(1 for it in items if it[0] == 'c'), len(units), sum(len(u[1]) for u in units), sum(1 for it in items if it[0] == 'v')))
    q = lambda p: "'%s'" % winpath(p)

    unit_routes = {}                           # unit index -> body offsets of the branches a link found out of reach: veneered
    unit_veneer = {}                           # unit index -> its veneer source (the object follows the unit in the link)
    unit_veneer_pre = {}                       # unit index -> the veneers for the branches near its start (`mixed`: the object comes before the unit)

    bss_obj = '%s/obj/bsspad.obj' % OUT            # the BSS block with its own front pad (bss_pad): written and assembled here

    def write_bss(pad):
        src_ = '%s/asm/bsspad.src' % OUT
        open(src_, 'w').write(bss_text(bend, bss_end, pad))
        assemble([(src_, bss_obj)])

    def write_units(pads):
        """Write each asm unit's source with its front pad, its out-of-reach branches through veneers (a file of their own, after
        the unit); the (source, object) pairs whose text changed."""
        jobs = []
        for k, u in enumerate(units):
            path = '%s/asm/u%05d.src' % (OUT, k)
            t = unit_source([p for _, p in u[1]], pads[k])
            outs = [(path, t)]
            if unit_routes.get(k):
                front = (u[2] & 0x1FFFFFFF) >= ((game[0] if game else B.BASE) & 0x1FFFFFFF)       # never ahead of the boot block: it stays where it is
                early, late = split_routes(unit_routes[k], MIXED and front)
                try:
                    vsrc_e = vsrc_l = None
                    if early:
                        t, vsrc_e = veneers(t, set(), '_u%05dp' % k, only={pads[k] + off for off in early})
                    if late:
                        t, vsrc_l = veneers(t, set(), '_u%05d' % k, only={pads[k] + off for off in late})
                except ValueError as e:
                    say('[ERROR] unit u%05d: %s' % (k, e))
                    sys.exit(1)
                outs = [(path, t)]
                unit_veneer.pop(k, None)
                unit_veneer_pre.pop(k, None)
                if vsrc_e:
                    vpath = '%s/asm/vp_u%05d.src' % (OUT, k)
                    outs.append((vpath, vsrc_e))
                    unit_veneer_pre[k] = vpath
                if vsrc_l:
                    vpath = '%s/asm/v_u%05d.src' % (OUT, k)
                    outs.append((vpath, vsrc_l))
                    unit_veneer[k] = vpath
            for path_, t_ in outs:
                o = path_.replace('/asm/', '/obj/')[:-4] + '.obj'
                if not os.path.exists(path_) or open(path_).read() != t_ or not os.path.exists(o) or os.path.getsize(o) == 0:
                    open(path_, 'w').write(t_)
                    jobs.append((path_, o))
        return jobs

    def assemble(jobs):
        lines = ['set -e', 'A="$(find "$T" -maxdepth 1 -iname asmsh.exe -print -quit)"', 'mkdir -p /work/obj']
        for s_, o in jobs:                         # objects on the container's own disk, copied out once (tools/1-2-baseline/movecheck.py)
            w = 'Z:\\work\\obj\\' + os.path.basename(o)
            lines.append('( wibo "$A" %s -object=%s -cpu=sh4 -endian=little > /work/asm.log 2>&1 ) || { cat /work/asm.log; echo FAILED %s; exit 1; }'
                         % (q(s_), q(w), s_))
            lines.append('if grep -q "(E)" /work/asm.log; then cat /work/asm.log; echo FAILED %s; exit 1; fi' % s_)
        lines.append('cp /work/obj/* %s/obj/ 2>/dev/null || true; echo assembled' % OUT)
        sh = movecheck.script(OUT, 'assemble', '\n'.join(lines) + '\n')
        rc, out = movecheck.docker('bash %s' % sh)
        if 'assembled' not in out:
            say('[ERROR] assembling stopped:\n' + out[-1500:])
            sys.exit(1)

    def objects():
        """[(item, object)] in link order; a unit with veneers is followed by their object, the BSS block ends the list."""
        out, k = [], 0
        for it in items:
            if it[0] == 'c':
                out.append((it, '%s/obj/%s.obj' % (cbuild.OUT, it[1])))
            elif it[0] == 'v':
                out.append((it, it[1].replace('/asm/', '/obj/')[:-4] + '.obj'))
            else:
                if k in unit_veneer_pre:
                    out.append((['v', unit_veneer_pre[k]], unit_veneer_pre[k].replace('/asm/', '/obj/')[:-4] + '.obj'))
                out.append((it, '%s/obj/u%05d.obj' % (OUT, k)))
                if k in unit_veneer:
                    out.append((['v', unit_veneer[k]], unit_veneer[k].replace('/asm/', '/obj/')[:-4] + '.obj'))
                k += 1
        return out + [(['b'], bss_obj)]

    # names: every A_ value, and the named globals no object defines
    exported = {label for _, label, _ in P} | {'_' + n for n in gs} | {P[k][1] + x for k, x in second.items()}
    names = {'_A_%08X' % v: v for v in allv}
    for n, a in cbuild.named_addresses().items():
        if '_' + n not in exported:
            names['_' + n] = a
    for i in fill_pieces:                      # a word that names the filler (the boot copy's end, 0C014000): the address it had,
        names[P[i][1]] = (starts[i] & 0x1FFFFFFF) | link_top       # nothing before the game code moves

    def link(tag, defs, soft=False):
        sub = ['elf', 'start P,C,D,B(%s)' % base_txt, 'output %s' % winpath('%s/%s.elf' % (OUT, tag)), 'print %s' % winpath('%s/%s.map' % (OUT, tag))]
        sub += ['input %s' % winpath(o) for _, o in objects()]
        sub += ['define %s(%s)' % (n, lnk_hex(v)) for n, v in sorted(defs.items())] + ['exit']
        open('%s/%s.sub' % (OUT, tag), 'w').write('\n'.join(sub) + '\n')
        for x in ('.elf', '.map', '.bin'):
            if os.path.exists('%s/%s%s' % (OUT, tag, x)):
                os.remove('%s/%s%s' % (OUT, tag, x))
        rc, out = movecheck.docker('L="$(find "$T" -maxdepth 1 -iname lnk.exe -print -quit)"; E="$(find "$T" -maxdepth 1 -iname elf2bin.exe -print -quit)"; '
                                   '( wibo "$L" -subcommand=%s > %s/%s.lnk.log 2>&1 ); ( wibo "$E" -s %s %s %s > %s/%s.e2b.log 2>&1 ); echo done'
                                   % (q('%s/%s.sub' % (OUT, tag)), OUT, tag, base_txt, q('%s/%s.elf' % (OUT, tag)), q('%s/%s.bin' % (OUT, tag)), OUT, tag))
        log = open('%s/%s.lnk.log' % (OUT, tag), errors='replace').read().replace('\r', '')
        bad = [l for l in log.split('\n') if re.search(r'OVERFLOW|UNDEFINED|DUPLICATE|CANNOT FIND|ABORT|ATTRIBUTE MISMATCH', l)
               and 'CANNOT FIND SECTION' not in l]     # the start line names D for C's initialised data: none is no error
        if soft and bad and all('RELOCATION SIZE OVERFLOW' in l for l in bad) and os.path.exists('%s/%s.map' % (OUT, tag)):
            return bad
        if bad or not os.path.exists('%s/%s.map' % (OUT, tag)):
            say('[ERROR] link %s: %d messages: %s' % (tag, len(bad), '; '.join(bad[:6])))
            sys.exit(1)
        return []

    # pass 1: each unit with the pad that keeps its start right modulo 4, linked for the sizes
    pad1 = [u[2] % 4 for u in units]
    jobs = write_units(pad1) + [(it[1], it[1].replace('/asm/', '/obj/')[:-4] + '.obj') for it in items if it[0] == 'v']
    assemble(jobs)
    write_bss(0)
    say('assembled %d sources' % len(jobs))
    def settle(tag, defs, pads):
        """Link until no branch is out of reach: each one the linker reports goes through a veneer, the unit is written again."""
        for round_ in range(6):
            over = link(tag, defs, soft=True)
            if not over:
                return
            n = 0
            for l in over:
                m_ = re.search(r"OVERFLOW\((u\d{5})\.P - H'([0-9A-F]+)\)", l)
                if not m_:
                    say('[ERROR] out of reach in something that is not a unit: %s' % l.strip())
                    sys.exit(1)
                k = int(m_.group(1)[1:])
                unit_routes.setdefault(k, set()).add(int(m_.group(2), 16) - pads[k])
                n += 1
            jobs = write_units(pads)
            assemble(jobs)
            say('link %s: %d branches out of reach go through a veneer (round %d, %d units)' % (tag, n, round_ + 1, len(unit_routes)))
        say('[ERROR] branches still out of reach after 6 rounds of veneers')
        sys.exit(1)

    settle('layout', names, pad1)
    mods = map_modules(OUT + '/layout.map')
    # the pads that put every unit at its original address modulo 32, from the sizes (they do not change with the place)
    pads, cur, k = [], B.BASE, 0
    for it, o in objects():
        if it[0] == 'b':
            break
        name = os.path.basename(o)[:-4]
        if name not in mods:
            say('[ERROR] the layout map has no %s' % name)
            sys.exit(1)
        size = mods[name][1] - mods[name][0]
        st = (cur + 3) & ~3
        if it[0] == 'a':
            size -= pad1[k]
            pad = (it[2] - st) % 32
            pads.append(pad)
            st += pad
            k += 1
        cur = st + size
    jobs = write_units(pads)
    assemble(jobs)
    say('pads: %d units moved to their original address modulo 32 (%d bytes of pads); %d reassembled' % (
        sum(1 for p in pads if p), sum(pads), len(jobs)))
    settle('link1', names, pads)
    syms = map_symbols(OUT + '/link1.map')
    pad_b = bss_pad(bend, syms['_bss']) if '_bss' in syms else 0
    if pad_b:                                   # the BSS block starts where the linker left off: move _bss to the original end modulo 32
        write_bss(pad_b)
        settle('link1', names, pads)
        syms = map_symbols(OUT + '/link1.map')
    if '_bss' in syms and (syms['_bss'] - bend) % 32:
        say('[ERROR] _bss is at %08X, not at the original image end %08X modulo 32' % (syms['_bss'], bend))
        sys.exit(1)
    say('bss: _bss at %08X, %d bytes of pad in front: the BSS keeps its original alignment modulo 32' % (syms.get('_bss', 0), pad_b))
    off = [u[2] for u in units if ((syms.get(P[u[1][0][0]][1] + (second[u[1][0][0]] if u[3] != 'k' else ('__h' if u[1][0][0] in dropped else '')), u[2]) - u[2]) % 32)]
    if off:
        say('[ERROR] %d units are not at their original address modulo 32, e.g. %s' % (len(off), ' '.join('%08X' % x for x in off[:5])))
        sys.exit(1)
    new = mapper([(s, label) for s, label, _ in P], dropped, second, syms, cfun, bend, bss_end, link_top, keep=fill, druns=druns)
    defs, lost = {}, []
    for n, v in names.items():
        w = new(v)
        if w is None:
            lost.append('%s (%08X)' % (n, v))
        else:
            defs[n] = w
    if lost:
        say('[ERROR] %d names point at nothing in the build (inside a C function, no copy): %s' % (len(lost), ', '.join(lost[:8])))
        sys.exit(1)
    say('link 1: %d names placed' % len(defs))
    link('game', defs)
    # everything before the game code (the boot block, the entry stub) must be the original bytes at the original place: the boot
    # block holds addresses into its own copy below the image, which no name follows (Crazy Taxi: bootRunPacket pushed 32 bytes)
    g0 = (game[0] if game else B.BASE) & 0x1FFFFFFF
    lo = B.BASE & 0x1FFFFFFF
    img = open(OUT + '/game.bin', 'rb').read()
    named = set()                                  # the words the names rewrote (the entry stub's address): the only bytes that may differ
    for l in open('build/pointers.txt'):
        p_ = l.split()
        if p_[2] == 'P':
            named.update(range(int(p_[0], 16) & 0x1FFFFFFF, (int(p_[0], 16) & 0x1FFFFFFF) + 4))
    for a in range(lo, g0):
        if fill and fill[0] <= a < fill[1]:
            break
        if img[a - lo] != B.BIN[a - lo] and a not in named:
            say('[ERROR] the bytes before the game code differ from the original at %08X: the boot block must be byte-exact' % a)
            sys.exit(1)
    s2 = map_symbols(OUT + '/game.map')
    # every distance branch must reach in the build what it reached in the original: a rule gap or a stale tool shows here, not on a disc
    def bsym(a):
        i = piece(a)
        if i in dropped or i >= len(P) or a >= end:
            return None
        b = s2.get(P[i][1])
        return None if b is None else ((b & 0x1FFFFFFF) | 0x0C000000) + (a - starts[i])
    img2 = open(OUT + '/game.bin', 'rb').read()
    lo0 = (B.BASE & 0x1FFFFFFF) | 0x0C000000
    wrong = wrong_distance_targets(distance_items(B, F, piece, end), bsym, lambda a: struct.unpack_from('<i', img2, a - lo0)[0])
    if wrong:
        say('[ERROR] %d distance branches (bsrf/braf) reach another place than in the original, e.g. %s' % (
            len(wrong), '; '.join('%s at %08X reaches %08X, wanted %08X' % w for w in wrong[:4])))
        sys.exit(1)
    say('distance branches: all reach what they reached in the original')
    far = [(n, x, p) for n, x, p in pool_items(B, F, end) if piece(x) != piece(p) and None not in (bsym(x), bsym(p))
           and bsym(p) - bsym(x) != p - x]
    if far:                                    # a pool read across pieces whose distance changed reads another word (psgSetState, 2026-11-01)
        say('[ERROR] %d pool reads across pieces read another place than in the original, e.g. %s' % (
            len(far), '; '.join('%s at %08X, pool %08X' % f for f in far[:4])))
        sys.exit(1)
    say('pool reads: every one across pieces keeps its distance')
    hi = (((s2['_bss'] & 0x1FFFFFFF) | 0x0C000000) + (bss_end - bend)) if '_bss' in s2 else fixed   # the BSS block is linked last
    say('game.bin: %d bytes (the original %d); image and BSS end at %08X, fixed at %08X: %s' % (
        os.path.getsize(OUT + '/game.bin'), len(B.BIN), hi, fixed, fit_text(hi, fixed)))
    if hi >= fixed:
        sys.exit(1)


def keep_escapes(items, keep, mirror=lambda a: a):
    """[(name, branch, target)] of the distance branches (distance_items) from inside the keep block to outside it. The block moves as one, so such a
    fixed distance lands somewhere else: the function it reaches belongs in the block (Zombie Revenge: keep began one function late, and the call fell into another)."""
    return [(n, x, t) for n, x, p, t in items if keep[0] <= mirror(x) < keep[1] and not keep[0] <= mirror(t) < keep[1]]


def fit_text(hi, fixed):
    """The build's verdict with the gap in it: how far past `fixed` the image and BSS end, or how much room is left below it."""
    spare = fixed - hi
    if spare > 0:
        return 'fits, {:,} bytes spare below fixed'.format(spare)
    if spare == 0:
        return 'DOES NOT FIT: 0 bytes spare, the image must end below fixed'
    return 'DOES NOT FIT: {:,} bytes ({:.1f} KB) over fixed'.format(-spare, -spare / 1024.0)


if __name__ == '__main__':
    main()
