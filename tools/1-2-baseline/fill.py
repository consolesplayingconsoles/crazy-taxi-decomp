#!/usr/bin/env python3
"""fill.py <in.s> <out.s> <start hex> <end hex> [<out_data.s> <dstart hex> <dend hex> <unit name>]:
shc's asm output laid out exactly like the game.

The unit is linked in place among the asm files (all ALIGN=2), so its sections are declared ALIGN=2
and every alignment is spelled out from the known start address instead:
  .ALIGN n  -> nops (0x0009) in code, the padding the original has there; zero bytes in data;
  .RES.x n  -> 0xEE bytes, what the original link filled reserved gaps with;
  and 0xEE after the end of the code, up to <end>, so the next piece starts where it did.
SH-4 instructions are all 2 bytes, so offsets are counted here, not by the assembler.

Constant data (shc's C section: initialised tables, string literals) goes to <out_data.s>, laid out
from <dstart> to <dend> (the unit's @data range): the original link put each file's C section in
the data area, far from its code. Labels one piece defines and the other uses get unit-unique names
with .EXPORT/.IMPORT, so the two pieces link as one. --pool32 (a unit's header option +pool32): the game's own code puts each literal pool at a 32-byte boundary and fills the gap before it with the word 0x0900, and
the rest up to the next file with zero bytes; no compiler option of SHC 5.0 or 5.1 lays it out so (342 of 469 source files of 1ST_READ.BIN's game code).
--pool00 (+pool00): the gap a literal pool reserves between its 16-bit and 32-bit entries is zero bytes, not 0xEE (implied by --pool32).
A unit with constant data and no @data range is refused with the reason.
Initialised variables (a D section) and zeroed ones (B) are laid out the same way into pieces of their own, from the options
--dsec=<out.s>:<start hex>:<end hex> and --bsec=<out.s>:<start hex>:<end hex> (the unit's @ddata / @bdata ranges), --name=<unit name>
for the unit-unique label names when there is no C piece; a reserved gap in them is zero bytes.
--asmfunc=f1[:end],f2,... (header +asmfunc=...): functions whose C does not rebuild the bytes (register allocation) stay the original's
instructions inside the C unit, like GLOBAL_ASM / INCLUDE_ASM: the C has a stub (tools/asmstub.py) or only a prototype, and each one's
compiled code is replaced by its bytes in 1ST_READ.BIN (from its functions.txt address to the end of its code, a pool in its middle
included; to the next function when the C puts no pool behind it). The literal pools it shares with the C are rebuilt as the original
has them: every pc-relative load of the C points where the original's instruction at its address points (its entry keeps the compiler's
operand), a word only an asm function loads is the original's word, a pool the compiler placed elsewhere moves to the original's place
and one the original has as two is split. :end gives a function's code end by hand (needed for a switch: braf). FILL_DEBUG=<file>
writes the laid-out code with the original's word beside each instruction when it stops.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os, re
import sys

SIZES = {'B': 1, 'W': 2, 'L': 4}
LABEL = re.compile(r'^([A-Za-z_$.][\w$.]*):')
IDENT = re.compile(r'[A-Za-z_$.][\w$.]*')



def table_after_pool(lines, k):
    """A label at k whose pool (labels, constants) runs on into a switch's jump table (.DATA.W Lx-Ly): the constants a switch's braf
    has in front of its table (robo_step), the compiler's own place, not aligned."""
    for l2 in lines[k + 1:k + 24]:
        c = l2.split(';', 1)[0].strip()
        if re.match(r'^\.DATA\.W\s+L\d+-L\d+', c, re.I):
            return True
        if not c or re.match(r'^L\d+:$', c) or re.match(r'^\.(DATA|RES)', c, re.I):
            continue
        return False
    return False

def sdata_len(args):
    """Bytes in a .SDATA operand list: "text" pieces (a doubled quote is one quote) and <h'xx> codes."""
    n, i = 0, 0
    while i < len(args):
        c = args[i]
        if c == '"':
            i += 1
            while i < len(args):
                if args[i] == '"':
                    if i + 1 < len(args) and args[i + 1] == '"':
                        n += 1; i += 2; continue
                    break
                n += 1; i += 1
        elif c == '<':
            n += 1; i = args.index('>', i)
        i += 1
    return n


def measure(lines):
    """[(label, comment, offset)] of a data section's lines and its size, counted from 0 as layout() does."""
    pos, labs = 0, []
    for line in lines:
        code, _, com = line.partition(';')
        code = code.strip()
        m = re.match(r'(\S+:)?\s*(.*)', code)
        if m.group(1):
            labs.append((m.group(1)[:-1], com.strip(), pos))
        rest = m.group(2).strip()
        if not rest:
            continue
        op = rest.split()[0].upper()
        args = rest[len(op):].strip()
        if op == '.ALIGN':
            pos += (-pos) % int(args, 0)
        elif re.match(r'\.RES\.[BWL]$', op):
            pos += int(args, 0) * SIZES[op[-1]]
        elif re.match(r'\.DATA\.[BWL]$', op):
            pos += SIZES[op[-1]] * len(args.split(','))
        elif re.match(r'\.DATAB\.[BWL]$', op):
            pos += SIZES[op[-1]] * int(args.split(',')[0], 0)
        elif op in ('.SDATA', '.SDATAZ'):
            pos += sdata_len(args) + (op == '.SDATAZ')
    return labs, pos


def layout(lines, start, end, data, what, addrs=None, check=True):
    pos, out = start, []
    odd_, labpos_ = [], {}              # (a unit starting 2 past a longword boundary: its pc-relative loads, see below), label -> address
    last_data = False                   # the previous item was literal-pool data
    pending_res = 0                     # under POOL32: a .RES right after a pool's label, already filled
    table_pool = False                  # under POOL32: the pool just passed holds a switch's jump table (.DATA.W): the compiler's own place, not aligned
    cur_fn_ = None                      # the function being laid out (--brafpool)
    for k, line in enumerate(lines):
        code = line.split(';', 1)[0].strip()
        m = re.match(r'(\S+:)?\s*(.*)', code)
        rest = m.group(2).strip()
        am = re.search(r';@(RAW|POOL)\s+([0-9A-Fa-f]{8})(?:\s+(\d+))?', line) if not data else None
        if am:
            # --asmfunc: an asm function's original bytes (RAW <addr> <length>), or a literal pool laid out where the original has it
            # (POOL <addr>: the original's words from here up to <addr> first, the gap before the pool)
            a_ = int(am.group(2), 16)
            if am.group(1) == 'POOL':
                if pos > a_ and check:
                    sys.exit('[ERROR] fill.py: --asmfunc: the pool at %08X starts before the code ahead of it ends (%08X)' % (a_, pos))
                out.extend('          .DATA.W     H\'%04X\n' % w for w in orig_words(pos, a_ - pos))
                pos = max(pos, a_)
                if addrs is not None: addrs[k] = pos
                if m.group(1): labpos_[m.group(1)[:-1]] = pos
                out.append(line)
                continue
            if pos < a_ and a_ - pos < 32 and all(w in (0x0900, 0x0009, 0) for w in orig_words(pos, a_ - pos)):
                out.extend('          .DATA.W     H\'%04X\n' % w for w in orig_words(pos, a_ - pos))      # the padding after a pool
                pos = a_
            if addrs is not None: addrs[k] = pos
            if os.environ.get('FILL_TRACE'): open(os.environ['FILL_TRACE'], 'a').write('TRACE %s %x %x %s\n' % (m.group(1), pos, a_, am.group(3)))
            if pos != a_ and check:
                if addrs is not None or True:
                    ad_ = {}
                    layout(lines[:k + 1], start, end, False, 'code', ad_, check=False)
                    _dump(lines[:k + 1], ad_)
                sys.exit('[ERROR] fill.py: --asmfunc: %s lands at %08X, not at its original %08X (the C ahead of it does not match)' % (m.group(1)[:-1], pos, a_))
            out.append(line)
            out.extend('          .DATA.W     H\'%04X\n' % w for w in orig_words(a_, int(am.group(3))))
            pos += int(am.group(3))
            last_data = False; table_pool = False
            continue
        if POOL32 and not data and last_data and table_pool and (m.group(1) or (rest and not rest.split()[0].upper().startswith('.'))):
            last_data = False; table_pool = False      # a jump table in the middle of a function: the code goes on right after it
        if POOL32 and not data and last_data and (m.group(1) or (rest and not rest.split()[0].upper().startswith('.'))):
            # code again after a pool in the middle of the file: it starts at the next 32-byte boundary, the gap the same 0x0900 words
            pad = (-pos) % 32
            fw_ = '0000' if m.group(1) and re.search(r'function:\s*(\w+)', line) and re.search(r'function:\s*(\w+)', line).group(1) in ALIGN0 else PADW      # --align0=f: zero bytes before f
            out.extend('          .DATA.W     H\'%s\n' % fw_ for _ in range(pad // 2))
            pos += pad
            last_data = False
        fm_ = re.search(r'function:\s*(\w+)', line)
        if fm_: cur_fn_ = fm_.group(1)
        win_ = 14 if POOL_BRAF and cur_fn_ in POOL_BRAF else 6       # --brafpool: a longer pool (more constants) still ends at the switch's table
        if POOL32 and not data and m.group(1) and not last_data and (any(re.match(r'\s*\.DATA\.W\s+L\d+-L\d+', l2, re.I) for l2 in lines[k + 1:k + win_]) or table_after_pool(lines, k)) and not any(re.match(r'\s*(MOV|ADD|BRA|BT|BF|JSR|RTS|NOP|BSR|JMP|CMP)', l2, re.I) for l2 in lines[k + 1:k + 4]):
            table_pool = True       # (the pool of a switch's jump table: constants, then 16-bit entries, right after the braf)
        elif POOL32 and not data and m.group(1) and not last_data:
            # a label the pool starts at (the compiler addresses the pool as label+gap): everything before it is padded so that the pool's data
            # lands on a 32-byte boundary, the gap included, all with the word 0x0900
            nxt = [l.split(';', 1)[0].strip() for l in lines[k + 1:k + 4]]
            ops = [re.match(r'(\S+:)?\s*(.*)', x).group(2).split()[0].upper() if re.match(r'(\S+:)?\s*(.*)', x).group(2).strip() else '' for x in nxt]
            ops = [x for x in ops if x]
            first = ops[0] if ops else ''
            if rest:
                first = rest.split()[0].upper()
            if first.startswith('.DATA') or first.startswith('.RES'):
                gap = 0
                if first.startswith('.RES'):
                    src = rest if rest else next(x for x in nxt if x and not x.endswith(':'))
                    mr_ = re.match(r'(?:\S+:)?\s*\.RES\.([BWL])\s+(\S+)', src, re.I)
                    gap = int(mr_.group(2), 0) * SIZES[mr_.group(1).upper()] if mr_ else 0
                pad = (-(pos + gap)) % 32
                out.extend('          .DATA.W     H\'%s\n' % PADW for _ in range(pad // 2))
                pos += pad
                pending_res = gap
        if addrs is not None:
            addrs[k] = pos
        if m.group(1) and not data:
            labpos_[m.group(1)[:-1]] = pos
        if not rest:
            out.append(line); continue
        op = rest.split()[0].upper()
        args = rest[len(op):].strip()
        if not op.startswith('.'):
            last_data = False
        if op == '.SECTION':
            out.append('          .SECTION    P,CODE,ALIGN=2\n'); continue
        if op == '.ALIGN':
            pad = (-pos) % int(args, 0)
            if data:
                if pad: out.append('          .DATAB.B    %d,H\'00\n' % pad)
            else:
                if pad % 2:
                    sys.exit('[ERROR] fill.py: odd alignment pad at %08X' % pos)
                out.extend('          .DATA.W     H\'%s\n' % (PADW if POOL32 else '0009') for _ in range(pad // 2))
            pos += pad; continue
        mr = re.match(r'\.RES\.([BWL])$', op)
        if mr and pending_res:
            n = int(args, 0) * SIZES[mr.group(1)]
            out.extend('          .DATA.W     H\'%s\n' % PADW for _ in range(n // 2))
            pending_res = 0
            pos += n; continue
        if mr:
            n = int(args, 0) * SIZES[mr.group(1)]
            # inside a literal pool (right after its .DATA words: the gap before the longs) the original has zero bytes, in the game and the
            # library alike (153 of 157 such gaps in 1ST_READ.BIN); other reserved gaps were filled with 0xEE
            fillb = RESFILL or ('00' if ((last_data or table_pool) and (POOL00 or POOL32)) or data in ('D', 'B') else 'EE')      # --pool00 / --pool32      # table_pool: the gap in front of a mid-function jump table's pool is zero too (animal_init)
            if n: out.append('          .DATAB.B    %d,H\'%s\n' % (n, fillb))
            pos += n; continue
        md = re.match(r'\.DATA\.([BWL])$', op)
        if md:
            last_data = True
            pos += SIZES[md.group(1)] * len(args.split(',')); out.append(line); continue
        mb = re.match(r'\.DATAB\.([BWL])$', op)
        if mb:
            pos += SIZES[mb.group(1)] * int(args.split(',')[0], 0); out.append(line); continue
        if op in ('.SDATA', '.SDATAZ'):
            pos += sdata_len(args) + (op == '.SDATAZ'); out.append(line); continue
        if op.startswith('.'):
            out.append(line); continue      # .EXPORT, .IMPORT, .LINE, ... take no space
        if data:
            sys.exit('[ERROR] fill.py: instruction in the constant data: ' + rest)
        if start % 4 == 2 and op in ('MOV.L', 'MOVA'):
            # (a unit that starts 2 bytes past a longword boundary: the assembler counts from the section's start and rounds the pc down to 4 by
            # its offset, not the address; the displacement is spelled out here, from the true addresses)
            mi_ = re.match(r'(\w+)(?:\+(\d+))?\s*,\s*R(\d+)\s*$', args, re.I)
            if mi_ and not mi_.group(1).startswith('_'):
                odd_.append((len(out), pos, op, mi_.group(1), int(mi_.group(2) or 0), int(mi_.group(3)), line))
        pos += 2                            # an SH-4 instruction
        out.append(line)
    for ix_, pc_, op_, lab_, off_, rn_, line_ in odd_:
        if lab_ not in labpos_:
            continue
        t_ = labpos_[lab_] + off_
        d_ = (t_ - ((pc_ & ~3) + 4))
        if t_ % 4 or d_ < 0 or d_ // 4 > 255:
            if check:
                sys.exit('[ERROR] fill.py: unit starts at %08X (2 past a longword): the pc-relative load at %08X cannot reach %s (target %08X)' % (start, pc_, lab_, t_))
            continue
        w_ = (0xD000 | rn_ << 8 | d_ // 4) if op_ == 'MOV.L' else (0xC700 | d_ // 4)
        if op_ == 'MOVA' and rn_ != 0:
            continue
        out[ix_] = "          .DATA.W     H'%04X       ; %s" % (w_, line_.strip().replace('\n', ''))+'\n'
    if pos > end and check:
        sys.exit('[ERROR] fill.py: unit %s is %d bytes, %d over its end %08X'
                 % (what, pos - start, pos - end, end))
    if end > pos and POOL32 and not data and (end - pos) % 2 == 0:
        if TAIL0900:
            out.extend('          .DATA.W     H\'%s\n' % PADW for _ in range((end - pos) // 2))
        else:
            out.append('          .DATAB.B    %d,H\'00\n' % (end - pos))                 # after the pool, to the next file: zero bytes
    elif end > pos:
        out.append('          .DATAB.B    %d,H\'%s\n' % (end - pos, '00' if data or RESFILL == '00' else 'EE'))
        if data:
            print('[note] fill.py: constant data is %d bytes, %d short of its @data end %08X'
                  % (pos - start, end - pos, end), file=sys.stderr)
    return out


POOL00 = False        # --pool00: zero bytes, not 0xEE, in the gap a literal pool reserves between its 16-bit and 32-bit entries
POOL32 = False        # --pool32: the game's layout of a literal pool (see the module notes)
POOL_KEEP = []        # --poolkeep=f1,f2: the compiler's own pool in the middle of these functions stays (see split_pools)
POOL_BRA = []         # --poolbra=f:n,...: a pool of its own right after the delay slot of the n-th BRA (f:rN: RTS) of function f (mid-function pool)
ALIGN0 = []           # --align0=f1,f2: these functions, starting right after a literal pool, are padded before with zero bytes, not 0x0900 (object/common.c)
POOL_BRAF = []        # --brafpool=f1,f2: keep the compiler's pool right after a BRAF (switch) in these functions (see split_pools)
POOL_AFTER = []       # --poolafter=f1,f2: a literal pool of its own right after these functions (see split_pools)
SYNTH16 = False       # --synth16: 16-bit constants built with mov #hi / shll8 [/ add #lo], as the game's own compiler does (see synth16)
HOIST = []           # --hoist=h0,h1,...: the synthesized MOVs' places (see hoist), in file order
RESFILL = None        # --resff: a reserved gap in the pool is 0xFF (the library's, not the game's); --res00: reserved gaps and the tail after the code are zero bytes (Shinobi's strt2)
PADW = '0900'         # --padnop: the pool padding words are 0x0009 (nop), as in collision/polygon.c
TAIL0900 = False      # --tail0900: after the pool the same 0x0900 words to the unit's end (code of the same file follows), not zero bytes


def split_pools(lines, names):
    """The original link has a literal pool after each of `names` and one at the end of the file; the compiler places its own elsewhere. Each group
    of functions (after the previous name, up to this one; the last group to the end) gets one pool right after it, holding what the group's code
    loads, in the compiler's own order of entries. The compiler's pools go. No instruction changes; only .DATA.L pools."""
    fn_at = []
    for i, l in enumerate(lines):
        m = re.search(r';\s*function:\s*(\w+)', l)
        if m:
            fn_at.append((i, m.group(1)))
    pools = {}
    code_end = next((i for i, l in enumerate(lines) if re.match(r'\s*\.SECTION\s', l.split(';')[0], re.I) and l.split(';')[0].split(None, 1)[1].split(',')[0].strip().upper() != 'P'), len(lines))     # a label in the C section is data, not a pool
    for i, l in enumerate(lines):
        m = re.match(r'^(L\d+):\s*$', l.split(';')[0].strip()) if i < code_end else None
        if m:
            nxt = lines[i + 1].split(';')[0].strip().upper() if i + 1 < len(lines) else ''
            if nxt.startswith('.RES.W') or nxt.startswith('.DATA.L'):
                gap = 2 if nxt.startswith('.RES.W') else 0
                ents, j = [], i + 1 + (1 if gap else 0)
                while j < len(lines) and lines[j].split(';')[0].strip().upper().startswith('.DATA.L'):
                    ents.append(lines[j].split(';')[0].strip().split(None, 1)[1].strip())
                    j += 1
                if j < len(lines) and lines[j].split(';')[0].strip().upper().startswith('.DATA.W'):
                    sys.exit('[ERROR] fill.py: --poolafter: a pool with 16-bit entries is not supported')
                owner = next((n_ for i_, n_ in reversed(fn_at) if i_ < i), None)
                if owner in POOL_BRAF:          # --brafpool=f: the compiler's pool right behind a switch's BRAF (before its jump table) stays where it is
                    p_ = i - 1
                    while p_ >= 0 and (not lines[p_].split(';')[0].strip() or re.match(r'^(L\d+:|\.ALIGN)', lines[p_].split(';')[0].strip(), re.I)):
                        p_ -= 1
                    if p_ >= 1 and re.match(r'^\s*NOP\b', lines[p_].split(';')[0], re.I) and re.match(r'^\s*BRAF\b', lines[p_ - 1].split(';')[0], re.I):
                        continue
                k_ = j                          # a pool in the middle of a function (code follows without a function label) stays the compiler's own, for a function named in --poolkeep
                while k_ < len(lines) and (not lines[k_].split(';')[0].strip() or lines[k_].split(';')[0].strip().upper().startswith('.ALIGN')):
                    k_ += 1
                if owner in POOL_KEEP and k_ < len(lines) and not re.match(r'^\S+:', lines[k_]) and not lines[k_].strip().startswith('.') and not re.match(r'^L\d+:', lines[k_]):
                    continue
                if owner in POOL_KEEP and k_ < len(lines) and re.match(r'^L\d+:', lines[k_]) and 'function:' not in lines[k_]:
                    continue
                pools[m.group(1)] = (i, j, gap, ents)
    if not pools:
        return lines
    names = [n for n in names if n != '*']
    in_pool_pre = set()
    for lab, (i, j, gap, ents) in pools.items():
        in_pool_pre.update(range(i, j))
    names_at = {n: i for i, n in fn_at}
    for n in names:
        if n not in names_at:
            sys.exit('[ERROR] fill.py: --poolafter: no function %s' % n)
    order = [n for i, n in fn_at]
    ends = []                                   # the line before which each group's pool goes
    for n in names:
        k = order.index(n)
        ends.append(fn_at[k + 1][0] if k + 1 < len(fn_at) else len(lines))
    for spec in POOL_BRA:                       # --poolbra=f:n: the pool goes after the delay slot of f's n-th BRA
        fname, nth = spec.rsplit(':', 1)
        mnem = 'RTS' if nth.startswith('r') else 'JMP' if nth.startswith('j') else 'BRA'          # f:rN counts the RTSs instead of the BRAs
        nth = nth.lstrip('rj')
        if fname not in names_at:
            sys.exit('[ERROR] fill.py: --poolbra: no function %s' % fname)
        k = order.index(fname)
        stop = fn_at[k + 1][0] if k + 1 < len(fn_at) else len(lines)
        cnt, pos = 0, None
        for i in range(names_at[fname], stop):
            if i in in_pool_pre:
                continue
            c = lines[i].split(';')[0].strip()
            if re.match(r'^%s\b' % mnem, c, re.I):
                cnt += 1
                if cnt == int(nth):
                    pos = i + 1
                    while not lines[pos].split(';')[0].strip() or re.match(r'^(L\d+:|\.)', lines[pos].split(';')[0].strip()) and not lines[pos].split(';')[0].strip().upper().startswith('.DATA'):
                        pos += 1
                    pos += 1
                    break
        if pos is None:
            sys.exit('[ERROR] fill.py: --poolbra: %s has no BRA #%s' % (fname, nth))
        ends.append(pos)
    ends.sort()
    # the end of the file's code: after the last line that is not a pool
    in_pool = set()
    for lab, (i, j, gap, ents) in pools.items():
        in_pool.update(range(i, j))
    sec_end = next((i for i, l in enumerate(lines) if re.match(r'\s*\.SECTION\s', l.split(';')[0], re.I) and l.split(';')[0].split(None, 1)[1].split(',')[0].strip().upper() != 'P'), len(lines))     # code ends where another section begins
    last_code = max((i for i in range(sec_end) if i not in in_pool and lines[i].split(';')[0].strip()
                    and not lines[i].split(';')[0].strip().upper().startswith(('.END', '.EXPORT', '.IMPORT', '.SECTION'))), default=-1)      # (no code line at all: a unit of data alone)
    bounds = ends + [last_code + 1]
    ref = re.compile(r'\b(%s)(?:\+(\d+))?\b(?!:)' % '|'.join(map(re.escape, pools)))      # a load at offset 0 names the bare label
    groups, prev = [], 0
    for b in bounds:
        groups.append((prev, b))
        prev = b
    rank = {}
    for lab, (i, j, gap, ents_) in sorted(pools.items(), key=lambda kv: kv[1][0]):
        for s_ in ents_:
            rank.setdefault(s_, len(rank))
    newlab = {}
    newents = []
    out = list(lines)
    for g, (a, b) in enumerate(groups):
        ents, key = [], {}
        ppos = {lab: k for k, (lab, v) in enumerate(sorted(pools.items(), key=lambda kv: kv[1][0]))}
        for i in range(a, b):
            if i in in_pool:
                continue
            for mm in ref.finditer(out[i]):
                lab, off = mm.group(1), int(mm.group(2) or 0)
                e = (off - pools[lab][2]) // 4
                sym = pools[lab][3][e]
                if sym not in ents:
                    ents.append(sym)
                key[sym] = min(key.get(sym, (1 << 30, 0)), (ppos[lab], e))
        ents.sort(key=lambda s_: key[s_])        # the compiler's own order, in the pools this group loads from
        newents.append(ents)
        lb = 'LPOOL%d' % g
        for i in range(a, b):
            if i in in_pool:
                continue
            out[i] = ref.sub(lambda mm: '%s+%d' % (lb, 4 * ents.index(pools[mm.group(1)][3][(int(mm.group(2) or 0) - pools[mm.group(1)][2]) // 4])), out[i])
    pool_starts = {v[0] for v in pools.values()}
    pool_ends = {v[1] for v in pools.values()}
    result = []
    for i, l in enumerate(out):
        for g, (a, b) in enumerate(groups):
            if i == b and newents[g]:
                result.append('LPOOL%d:\n' % g)
                result.extend('          .DATA.L     %s\n' % s_ for s_ in newents[g])
        if i in in_pool:
            continue
        if re.match(r'\s*\.ALIGN\s+32\s*$', l) and (i + 1 in pool_starts or i in pool_ends):
            continue                                  # the compiler's own pool alignment goes with its pool
        result.append(l)
    g = len(groups) - 1
    if groups[g][1] >= len(out) and newents[g]:
        result.append('LPOOL%d:\n' % g)
        result.extend('          .DATA.L     %s\n' % s_ for s_ in newents[g])
    return result


DELAYED = re.compile(r'^\s*(BT/S|BF/S|BRA|BSR|BRAF|BSRF|JMP|JSR|RTS|RTE)\b', re.I)


DELAYING = re.compile(r'^\s*(BRA|BSR|JMP|JSR|RTS|RTE|BT/S|BF/S|BRAF|BSRF)\b', re.I)


def hoist(lines, hs):
    """The game's compiler schedules the MOV #hi of a synthesized constant on its own, often one to three instructions before its SHLL8 or
    EXTU.B (1,277 + 175 + 104 of 3,363 in 1ST_READ.BIN, against 1,807 right before it). hs[k] moves the k-th synthesized MOV of the file that many
    instructions up, past instructions that neither read nor write its register; never past a label, a branch or a delay slot."""
    out = list(lines)
    k = -1
    i = 0
    while i < len(out):
        l = out[i]
        if '; synth16' not in l:
            i += 1; continue
        k += 1
        h = hs[k] if k < len(hs) else 0
        sink_after = 0
        add_sink = 0
        if h >= 20000:                     # 2aabb: the MOV #hi and its SHLL8 sink together past aa instructions, then the SHLL8 alone past bb more
            a_, b_ = (h // 100) % 100, h % 100
            rn = re.search(r'(R\d+)\s*;', l).group(1)
            reg = re.compile(r'(?<![\w])%s(?!\d)' % rn, re.I)
            if i + 1 < len(out) and re.match(r'\s*(SHLL8|SHLL2|EXTU\.B)\b', out[i + 1], re.I):
                def free(q):
                    t = out[q].split(';')[0]
                    return q < len(out) and t.strip() and not re.match(r'^\S+:', t) and not t.strip().startswith('.') and not DELAYING.match(t)
                q = i + 2
                n1 = 0
                while n1 < a_ and free(q) and not reg.search(out[q].split(';')[0]):
                    n1 += 1; q += 1
                out[i:q] = out[i + 2:q] + out[i:i + 2]
                sh = i + n1 + 1
                n2 = 0
                while n2 < b_ and sh + 1 < len(out) and free(sh + 1) and not reg.search(out[sh + 1].split(';')[0]):
                    out[sh], out[sh + 1] = out[sh + 1], out[sh]; sh += 1; n2 += 1
            i += 1; continue
        if h >= 10000:                     # sink only the ADD that follows the shift, past h // 10000 instructions
            add_sink = h // 10000; h %= 10000
        if h >= 100:                       # hoist the MOV by h // 100 and sink the shift by h % 100
            sink_after = -(h % 100); h = h // 100
        rn = re.search(r'(R\d+)\s*;', l).group(1)
        reg = re.compile(r'(?<![\w])%s(?!\d)' % rn, re.I)
        pos = i
        if h < 0:
            # sink: the SHLL8 / SHLL2 / EXTU.B (and the ADD that follows it) wait for |h| later instructions that do not use the register
            blk = [i + 1] + ([i + 2] if i + 2 < len(out) and re.match(r'\s*ADD\s+#-?\d+,%s\b' % rn, out[i + 2], re.I) else [])
            if i + 1 >= len(out) or not re.match(r'\s*(SHLL8|SHLL2|EXTU\.B)\b', out[i + 1], re.I):
                i += 1; continue
            after = blk[-1] + 1
            moved = 0
            while moved < -h and after < len(out):
                nxt = out[after].split(';')[0]
                if not nxt.strip() or re.match(r'^\S+:', nxt) or nxt.strip().startswith('.') or reg.search(nxt) or DELAYING.match(nxt):
                    break
                if re.match(r'\s*(BT|BF|BRA|BSR|JMP|JSR|RTS)', out[after - 0].split(';')[0], re.I): break
                moved += 1; after += 1
            if moved:
                seg = [out[q] for q in blk]
                rest = out[blk[-1] + 1:after]
                out[blk[0]:after] = rest + seg
            i += 1; continue
        while h > 0:
            q = pos - 1
            prev = out[q].split(';')[0]
            if not prev.strip() or re.match(r'^\S+:', prev) or prev.strip().startswith('.') or reg.search(prev) or DELAYING.match(prev):
                break
            pprev = next((out[r].split(';')[0] for r in range(q - 1, -1, -1) if out[r].split(';')[0].strip()), '')
            if DELAYING.match(pprev):          # q is a delay slot: the MOV cannot take its place
                break
            out[q], out[pos] = out[pos], out[q]
            pos = q; h -= 1
        if sink_after:
            j = pos + 1
            if j < len(out) and re.match(r'\s*(SHLL8|SHLL2|EXTU\.B)\b', out[j], re.I):
                blk = [j] + ([j + 1] if j + 1 < len(out) and re.match(r'\s*ADD\s+#-?\d+,%s\b' % rn, out[j + 1], re.I) else [])
                after = blk[-1] + 1
                moved = 0
                while moved < -sink_after and after < len(out):
                    nxt = out[after].split(';')[0]
                    if not nxt.strip() or re.match(r'^\S+:', nxt) or nxt.strip().startswith('.') or reg.search(nxt) or DELAYING.match(nxt): break
                    moved += 1; after += 1
                if moved:
                    seg = [out[q] for q in blk]; rest = out[blk[-1] + 1:after]
                    out[blk[0]:after] = rest + seg
        if add_sink:
            j = i + 1
            if j + 1 < len(out) and re.match(r'\s*(SHLL8|SHLL2|EXTU\.B)\b', out[j], re.I) and re.match(r'\s*ADD\s+#-?\d+,%s\b' % rn, out[j + 1], re.I):
                after = j + 2
                moved = 0
                while moved < add_sink and after < len(out):
                    nxt = out[after].split(';')[0]
                    if not nxt.strip() or re.match(r'^\S+:', nxt) or nxt.strip().startswith('.') or reg.search(nxt) or DELAYING.match(nxt): break
                    moved += 1; after += 1
                if moved:
                    out[j + 1:after] = out[j + 2:after] + [out[j + 1]]
        i += 1
    return out


def brexp(lines, T):
    """The game's compiler writes a conditional branch whose target is far as the inverse branch over a BRA (bt L -> bf Z; bra L; nop; Z:); this
    compiler leaves it short while the target is in range. Expand every BT/BF (not the delayed forms) whose target is more than T bytes away,
    counting instructions of the function (2 bytes each) between the branch and its label."""
    out = list(lines)
    n = 0
    while True:
        # byte offset of each line within its function; label positions
        pos, off, labs = {}, 0, {}
        for i, l in enumerate(out):
            c = l.split(';', 1)[0].strip()
            if re.match(r'^_\w+:', c):
                off = 0
            m = re.match(r'^(\w+):\s*$', c)
            if m: labs[m.group(1)] = off
            elif c and not c.startswith('.') and not re.match(r'^\w+:', c):
                pos[i] = off; off += 2
        done = True
        for i in sorted(pos, reverse=True):
            m = re.match(r'^(\s+)(BT|BF)(\s+)(\w+)\s*$', out[i].split(';', 1)[0].rstrip())
            if not m or m.group(4) not in labs: continue
            d = labs[m.group(4)] - (pos[i] + 4)
            if abs(d) > T:
                inv = 'BF' if m.group(2) == 'BT' else 'BT'
                z = 'LX%d' % n; n += 1
                out[i:i + 1] = ['%s%s%s%s\n' % (m.group(1), inv, m.group(3), z), '%sBRA         %s\n' % (m.group(1), m.group(4)), '%sNOP\n' % m.group(1), z + ':\n']
                done = False
                break
        if done: return out


def brfar(lines, specs):
    """--brfar=f:n: the n-th plain BT/BF of function f becomes `B<inverse> Z; BRA target; NOP; Z:` (the game's compiler did that for a target out of
    BT/BF range; our compile has no pool in the middle of f yet, so the branch is still short)."""
    out = list(lines)
    for spec in specs:
        fname, nth = spec.rsplit(':', 1)
        nth = int(nth)
        start = next((i for i, l in enumerate(out) if re.match(r'^_\w+:\s*;\s*function: %s\b' % re.escape(fname), l)), None)
        if start is None:
            sys.exit('[ERROR] fill.py: --brfar: no function %s' % fname)
        k = 0
        for i in range(start + 1, len(out)):
            if re.match(r'^_\w+:\s*;\s*function:', out[i]):
                break
            m = re.match(r'^(\s+)(BT|BF)(\s+)(\w+)\s*(;.*)?$', out[i].rstrip())
            if not m:
                continue
            k += 1
            if k == nth:
                inv = 'BF' if m.group(2) == 'BT' else 'BT'
                z = 'LBF%s_%d' % (fname.replace('.', '_'), nth)
                out[i:i + 1] = ['%s%s%s%s\n' % (m.group(1), inv, m.group(3), z), '%sBRA         %s\n' % (m.group(1), m.group(4)), '%sNOP\n' % m.group(1), z + ':\n']
                break
        else:
            sys.exit('[ERROR] fill.py: --brfar: %s has no BT/BF #%d' % (fname, nth))
    return out


def synth16(lines, align=False):
    """The compiler that built Sonic Adventure DC's game code puts a 16-bit constant such as 0x100 or ~0x100 in a register with mov #hi, shll8 and,
    when needed, add #lo (and one of 128 to 255 with mov #v-256, extu.b: 1,968 times in the game's code against 174 pool loads, the libraries 1 against 1,222), where every available SHC (5.0r10 to 5.1r13, any option) loads it from the literal pool: 1,806 such constants in
    1ST_READ.BIN's game code against 14 pool loads (the SDK's libraries: 5 against 113). This writes that form instead of each mov.w load of a constant
    that fits it, drops the constant from the pool and moves the pool's other loads to their new offsets. A load in a branch's delay slot stays.
    It changes instructions (an emulation of a compiler that is not available), so a unit asks for it by name: +synth16."""
    out = list(lines)
    blocks = []
    for i, l in enumerate(out):
        m = re.match(r'^(L\d+):\s*$', l.split(';')[0].strip())
        if not m:
            continue
        j, w = i + 1, []
        while j < len(out) and out[j].split(';')[0].strip().upper().startswith('.DATA.W'):
            w.append(out[j].split(';')[0].strip().split(None, 1)[1].strip())
            j += 1
        if not w:
            continue
        pad = 0
        if j < len(out) and out[j].split(';')[0].strip().upper().startswith('.RES.W'):
            pad = int(out[j].split(';')[0].strip().split()[1], 0) * 2
            j += 1
        k, lw = j, []
        while k < len(out) and out[k].split(';')[0].strip().upper().startswith('.DATA.L'):
            lw.append(out[k].split(';')[0].strip().split(None, 1)[1].strip())
            k += 1
        blocks.append((m.group(1), i, w, pad, lw, k))
    for lab, i, w, pad, lw, k in sorted(blocks, key=lambda b: -b[1]):
        def val(s):
            s = s.strip()
            v = int(s[2:].rstrip("'"), 16) if s.upper().startswith("H'") else int(s, 0)
            return v - 0x10000 if v & 0x8000 else v
        form = {}
        for e, s in enumerate(w):
            try:
                v = val(s)
            except ValueError:
                continue
            if -128 <= v <= 127:
                continue
            if 128 <= v <= 255:
                form[e] = ('extu', v - 256)        # mov #v-256 / extu.b: 1,968 times in the game's code, 1 in the libraries
                continue
            if v % 4 == 0 and 128 <= v <= 508 and v != 256:      # the game: never for a negative value or 256 (those take mov #hi / shll8)
                form[e] = ('shll2', v // 4)        # mov #v/4 / shll2: two instructions where the shll8 form needs three
                continue
            hi = (v + 128) >> 8
            lo = v - hi * 256
            if -128 <= hi <= 127 and -128 <= lo <= 127:
                form[e] = (hi, lo)
        ref = re.compile(r'^(\s*)MOV\.W(\s+)%s(?:\+(\d+))?\s*,\s*(R\d+)(.*)$' % re.escape(lab), re.I)
        used_pool = set()
        new = []
        for n, l in enumerate(out):
            m = ref.match(l.rstrip('\n'))
            if m:
                e = int(m.group(3) or 0) // 2
                prev = next((out[q] for q in range(n - 1, -1, -1) if out[q].split(';')[0].strip() and not re.match(r'^\S+:\s*$', out[q].split(';')[0].strip())), '')
                if e in form and not DELAYED.match(prev.split(';')[0]):
                    hi, lo = form[e]
                    ind, rn = m.group(1), m.group(4)
                    if hi == 'shll2':
                        new.append('%sMOV         #%d,%s     ; synth16\n' % (ind, lo, rn))
                        new.append('%sSHLL2       %s\n' % (ind, rn))
                        continue
                    if hi == 'extu':
                        new.append('%sMOV         #%d,%s     ; synth16\n' % (ind, lo, rn))
                        new.append('%sEXTU.B      %s,%s\n' % (ind, rn, rn))
                        continue
                    ins = ['%sMOV         #%d,%s     ; synth16\n' % (ind, hi, rn), '%sSHLL8       %s\n' % (ind, rn)]
                    if lo:
                        ins.append('%sADD         #%d,%s\n' % (ind, lo, rn))
                    nxt = next((out[q] for q in range(n + 1, len(out)) if out[q].split(';')[0].strip()), '')
                    if rn.upper() == 'R0' and re.match(r'^\s*ADD\s+R0\s*,\s*R15\s*$', nxt.split(';')[0], re.I):
                        # the stack frame of a prologue: the game's compiler puts the MOV after the first register push, SHLL8 after
                        # the second and ADD after the third (about 80 functions of the game's code; tools/fill.py notes)
                        k = len(new)
                        while k > 0 and not re.match(r'^_?\w+:', new[k - 1]):
                            k -= 1
                        push = [q for q in range(k, len(new)) if re.match(r'^\s*(MOV\.L\s+R\d+|FMOV\.S\s+FR\d+|STS\.L\s+PR)\s*,\s*@-R15\s*$', new[q].split(';')[0], re.I)]
                        for j in range(len(ins) - 1, -1, -1):
                            if j < len(push):
                                new.insert(push[j] + 1, ins[j])
                        # what found no push to follow stays here, in order
                        new.extend(ins[len(push):] if len(push) < len(ins) else [])
                        continue
                    new.extend(ins)
                    continue
                used_pool.add(e)
            new.append(l)
        out = new
        keep = [e for e in range(len(w)) if e in used_pool or e not in form]
        if len(keep) == len(w):
            continue
        # the label's place mod 4 follows from the compiler's block (its .DATA.L entries are 4-aligned); keep them so with fewer words
        at = (-(2 * len(w) + pad)) % 4
        newpad = (-(at + 2 * len(keep))) % 4
        wmap = {e: 2 * q for q, e in enumerate(keep)}
        lbase_old, lbase_new = 2 * len(w) + pad, 2 * len(keep) + newpad
        refall = re.compile(r'\b%s(?:\+(\d+))?\b(?!:)' % re.escape(lab))
        def fix(mm):
            off = int(mm.group(1) or 0)
            if off < 2 * len(w):
                no = wmap[off // 2]
            elif align:
                return '%s_L+%d' % (lab, off - lbase_old)
            else:
                no = off - lbase_old + lbase_new
            return '%s+%d' % (lab, no) if no else lab
        # the block's position moved by the inserted instructions: find it again
        bi = next(q for q, l in enumerate(out) if l.split(';')[0].strip() == lab + ':')
        bend = bi + 1 + len(w) + (1 if pad else 0) + len(lw)
        block = ['%s:\n' % lab] + ['          .DATA.W     %s\n' % w[e] for e in keep]
        if align:
            # the caller does not lay the pools out (tools/crossmatch/fcmp.py) and the inserted instructions moved the label: the longs get a
            # label of their own, aligned by the assembler
            block += ['          .ALIGN      4\n', '%s_L:\n' % lab]
        elif newpad:
            block += ['          .RES.W      1\n']
        block += ['          .DATA.L     %s\n' % s for s in lw]
        out = [refall.sub(fix, l) if not (bi <= q < bend) else l for q, l in enumerate(out)]
        out[bi:bend] = block
    return out


BR_FAR = []           # --brfar=f:n,...: the n-th BT/BF (non-delayed) of function f is written as the inverse branch over a BRA (its target is out of reach in the game's compile because of a mid-function pool)
ASMFUNC = []          # --asmfunc=f1[:end],f2,...: these functions are the original's instructions (see asmfunc)
_ORIG = []


def orig_words(a, n):
    """n bytes (n even) of 1ST_READ.BIN at address a, as 16-bit words."""
    if not _ORIG:
        _ORIG.append(open(os.environ.get('FILL_IMAGE', '1ST_READ.BIN'), 'rb').read())       # build.sh --overlay: the overlay's image
        _ORIG.append(int(os.environ.get('FILL_BASE') or open('BASE').read().strip(), 16))
    b, base = _ORIG
    return [b[a - base + i] | b[a - base + i + 1] << 8 for i in range(0, n, 2)]


def orig_long(a):
    lo, hi = orig_words(a, 4)
    return lo | hi << 16


def pc_target(a, w):
    """(target, size) of a pc-relative load at a (mov.l / mov.w @(disp,pc), mova), else None."""
    if w >> 12 == 0xD:
        return ((a & ~3) + 4 + 4 * (w & 0xFF), 4)
    if w >> 12 == 0x9:
        return (a + 4 + 2 * (w & 0xFF), 2)
    if w >> 8 == 0xC7:
        return ((a & ~3) + 4 + 4 * (w & 0xFF), 4)          # (a float constant's address: fmov.s @r0)
    return None


def decode_func(s, limit):
    """The original function at s: its code's end (the last instruction reached from s, following branches; a pool in the middle is
    jumped over) and its pc-relative loads [(address, target, size)]."""
    seen, todo, loads = set(), [s], []
    while todo:
        a = todo.pop()
        while s <= a < limit and a not in seen:
            seen.add(a)
            w = orig_words(a, 2)[0]
            t = pc_target(a, w)
            if t:
                loads.append((a, t[0], t[1]))
            hi = w >> 12
            if hi == 0xA:                                         # bra: the delay slot, then the target
                d = w & 0xFFF
                todo.append(a + 4 + 2 * (d - 0x1000 if d & 0x800 else d))
                todo.append(-(a + 2))                             # (the delay slot alone)
                break
            if w >> 8 in (0x89, 0x8B, 0x8D, 0x8F):               # bt, bf, bt/s, bf/s
                d = w & 0xFF
                todo.append(a + 4 + 2 * (d - 0x100 if d & 0x80 else d))
            elif w in (0x000B, 0x002B) or (hi == 4 and w & 0xFF == 0x2B):      # rts, rte, jmp @rn: the delay slot ends it
                todo.append(-(a + 2))
                break
            elif hi == 0 and w & 0xFF == 0x23:                    # braf: a switch's table follows; give its end by hand
                sys.exit('[ERROR] fill.py: --asmfunc: the function at %08X has a switch (braf at %08X): give its code end as name:<hex end>' % (s, a))
            a += 2
        while todo and todo[-1] < 0:                              # delay slots
            d_ = -todo.pop()
            if d_ not in seen:
                seen.add(d_)
                w = orig_words(d_, 2)[0]
                t = pc_target(d_, w)
                if t:
                    loads.append((d_, t[0], t[1]))
    return max(seen) + 2, loads


def func_table():
    ents = sorted((int(l.split()[1], 16), l.split()[3]) for l in open('functions.txt') if l[:2] in ('F ', 'D ') and len(l.split()) >= 4)
    return ents


def name_addr(ents):
    """Function addresses by name: functions.txt's names, and the other names symbols.txt (an overlay: symbols.local.txt) gives a
    function start (the name a unit's C uses for it, when it differs)."""
    addr = {n: a for a, n in ents}
    starts = {a for a, n in ents}
    for f in ('symbols.txt', 'symbols.local.txt'):
        if os.path.exists(f):
            for l in open(f, errors='replace'):
                q = l.split()
                if len(q) == 2 and not l.startswith('#'):
                    try:
                        a = int(q[0], 16)
                    except ValueError:
                        continue
                    if a in starts:
                        addr.setdefault(q[1], a)
    return addr


FN_MARK = re.compile(r'^(\w+):\s*;\s*function:\s*(\w+)')


def asmfunc_insert(lines, names):
    """A function given only as a prototype in the C (no definition): its label goes where its address puts it among the file's functions."""
    ents = func_table()
    addr = name_addr(ents)
    have = [(i, m.group(2)) for i, l in enumerate(lines) for m in [FN_MARK.match(l)] if m]
    out = list(lines)
    for spec in names:
        n = spec.split(':')[0]
        if any(h == n for _, h in have):
            continue
        if n not in addr:
            sys.exit('[ERROR] fill.py: --asmfunc: no function %s in functions.txt' % n)
        have = [(i, m.group(2)) for i, l in enumerate(out) for m in [FN_MARK.match(l)] if m]
        nxt = [i for i, h in have if addr.get(h, 0) > addr[n]]
        if nxt:
            at = min(nxt)
            while at > 0 and re.match(r'\s*\.ALIGN\b', out[at - 1], re.I):
                at -= 1
        else:                                                     # the last function: after the last instruction of the code section
            sec_end = next((i for i, l in enumerate(out) if re.match(r'\s*\.SECTION\s', l.split(';')[0], re.I) and not re.match(r'\s*\.SECTION\s+P\b', l.split(';')[0], re.I)), len(out))
            ins = [i for i in range(sec_end) if out[i].split(';')[0].strip() and not out[i].split(';')[0].strip().startswith('.') and not re.match(r'^\S+:\s*$', out[i].split(';')[0].strip())]
            at = ins[-1] + 1
        out[at:at] = ['_%s:                   ; function: %s\n' % (n, n)]
        out = [l for l in out if not re.match(r'\s*\.IMPORT\s+_%s\s*$' % re.escape(n), l.split(';')[0], re.I)]
        out.insert(0, '          .EXPORT     _%s\n' % n)
    return out


def pool_blocks(lines):
    """[(label, first line, last line + 1)] of the literal pools: a label followed by .DATA.W / .RES.W / .DATA.L entries (no jump table)."""
    res = []
    for i, l in enumerate(lines):
        m = re.match(r'^(L\w+):', l.split(';')[0].strip())
        if not m or l.split(';')[0].strip() != m.group(1) + ':':
            continue
        j = i + 1
        while j < len(lines) and re.match(r'\s*\.(DATA\.[WL]|RES\.[WL])\s', lines[j].split(';')[0], re.I):
            if re.search(r'L\w+\s*-\s*L\w+', lines[j].split(';')[0]):
                break
            j += 1
        if j > i + 1 and (j >= len(lines) or not re.search(r'L\w+\s*-\s*L\w+', lines[j].split(';')[0])):
            res.append((m.group(1), i, j))
    return res


UNIT_END = 1 << 32


def asmfunc_widen(lines, names, ents):
    """An asm function whose literal pool lies behind a LATER function (the original has: asm function, small C-sized function, padding, the
    asm function's pool, next function): the pool's words are not the C's, so the compiler's layout puts the next function at the wrong
    address ('the C before it does not match'). The function in front of such a pool word becomes an asm function too (its bytes run to
    the next function, the pool and padding with them); both are the original's bytes, the C of the others lands where it did."""
    addr = name_addr(ents)
    starts = [a for a, n in ents]
    have = {m.group(2) for l in lines for m in [FN_MARK.match(l)] if m}
    names = list(names)
    sizes = {int(l.split()[1], 16): int(l.split()[2]) for l in open('functions.txt') if l[:2] == 'F ' and len(l.split()) >= 4}
    for _ in range(8):
        add = None
        for spec in names:
            n, _, e_ = spec.partition(':')
            if n not in addr or e_.startswith('+'):
                continue
            s = addr[n]
            nxt = next((a for a in starts if a > s), None)
            if nxt is None:
                continue
            try:
                if e_:
                    loads, a = [], s
                    try:
                        e2_, l2_ = decode_func(s, int(e_.lstrip('!'), 16))
                        if e2_ == int(e_.lstrip('!'), 16) and not e_.startswith('!'): a, loads = e2_, [x_ for x_ in l2_ if x_[1] < UNIT_END]
                    except SystemExit:
                        pass
                    while a < int(e_.lstrip('!'), 16):
                        t = pc_target(a, orig_words(a, 2)[0])
                        if t and t[0] < UNIT_END: loads.append((a, t[0], t[1]))
                        a += 2
                else:
                    loads = decode_func(s, nxt)[1]
            except SystemExit:
                continue
            for _, t, z in loads:
                if t < nxt or t >= UNIT_END:
                    continue
                g = max((a for a in starts if a <= t), default=None)
                if g is None or g <= s or g not in sizes:
                    continue
                try:
                    gend = decode_func(g, next(a for a in starts if a > g))[0]
                except (SystemExit, StopIteration):
                    gend = g + sizes[g]
                if t < gend:
                    continue
                gn = ents[starts.index(g)][1]
                if gn in have and not any(x.partition(':')[0] == gn for x in names):
                    add = '%s:+%x' % (gn, next(a for a in starts if a > g))
                    break
            if add:
                break
        if not add:
            break
        names.append(add)
    return names


def asmfunc_replace(lines, names):
    """Each named function's compiled body (a stub) goes; in its place the original's bytes: from its address to the end of its code, or to
    the next function when the compiler places no pool of its own behind it (the original's pool there is then part of those bytes)."""
    ents = func_table()
    addr = name_addr(ents)
    starts = [a for a, n in ents]
    raws = []
    out = list(lines)
    names = asmfunc_widen(out, list(names), ents)
    for spec in names:
        n, _, e_ = spec.partition(':')
        if n not in addr:
            sys.exit('[ERROR] fill.py: --asmfunc: no function %s in functions.txt' % n)
        s = addr[n]
        nxt_ent = next(a for a in starts if a > s)
        if e_ and e_.startswith('+'):          # f:+<hex end>: the bytes run to <end> (its own pool included), the loads are the code's own (decoded from s)
            cend = int(e_[1:], 16)
            loads = decode_func(s, cend)[1]
        elif e_:
            use_lim_ = not e_.startswith('!')      # f:!<hex end>: do NOT stop at the first pool word a load reaches (default: stop there, the pool is no code)
            cend, loads = int(e_.lstrip('!'), 16), []
            a, lim = s, cend
            try:                       # the code's own flow (a pool in the middle is jumped over): when it ends exactly at <end>, its loads are the code's
                e2_, l2_ = decode_func(s, cend)
                if e2_ == cend and use_lim_: a, loads = cend, [x_ for x_ in l2_ if x_[1] < UNIT_END]
            except SystemExit:
                pass
            while a < lim:                                        # (up to the first pool word a load reaches: the pool is no code)
                w = orig_words(a, 2)[0]
                t = pc_target(a, w)
                if t and t[0] < UNIT_END:      # (a pool word that decodes as a load past the unit's end is no load)
                    loads.append((a, t[0], t[1]))
                    if use_lim_ and s < t[0] < lim: lim = t[0]
                a += 2
        else:
            cend, loads = decode_func(s, nxt_ent)
        fm = [(i, m.group(2)) for i, l in enumerate(out) for m in [FN_MARK.match(l)] if m]
        i0 = next(i for i, h in fm if h == n)
        i1 = next((i for i, h in fm if i > i0), None)
        sec_end = next((i for i, l in enumerate(out) if re.match(r'\s*\.SECTION\s', l.split(';')[0], re.I) and not re.match(r'\s*\.SECTION\s+P\b', l.split(';')[0], re.I)), len(out))
        stop = min(i1 if i1 is not None else len(out), sec_end)
        while stop > i0 + 1 and re.match(r'\s*(\.ALIGN|\.END)\b', out[stop - 1], re.I):
            stop -= 1
        if e_ and e_.startswith('+'): stop = min(i1 if i1 is not None else len(out), sec_end)          # (the alignment the compiler put before the next function goes too)
        pools = [(i, j) for _, i, j in pool_blocks(out) if i0 < i < stop]
        keep = set()
        for i, j in pools:
            keep.update(range(i, j))
            if re.match(r'\s*\.ALIGN\b', out[i - 1], re.I):
                keep.add(i - 1)
        # a pool of the compiler's right behind the function: the original's code ends at its last instruction; else the bytes run to the next function
        tail_pool = bool(pools) or i1 is None
        length = (cend if tail_pool else nxt_ent) - s
        body = ['%s:                   ; function: %s ;@RAW %08X %d  (asm: the original bytes)\n' % (FN_MARK.match(out[i0]).group(1), n, s, length)]
        body += [out[i] for i in range(i0 + 1, stop) if i in keep]
        if e_.startswith('+') and i1 is not None:       # f:+<end>: the original bytes already hold the padding up to the next function
            out[stop:i1] = [l_ for l_ in out[stop:i1] if not re.match(r'\s*\.ALIGN\b', l_)]
        out[i0:stop] = body
        raws.append((FN_MARK.match(out[i0]).group(1), s, s + length, [(a, t, z) for a, t, z in loads if not s <= t < s + length], nxt_ent))
    return out, raws


REFOP = re.compile(r'^(\s*(?:MOV\.L|MOV\.W|MOVA)\s+)(L\w+)(?:\+(\d+))?(\s*,\s*R\d+.*)$', re.I | re.S)


def _is_code(l):
    c = l.split(';')[0].strip()
    if ';@RAW' in l:
        return True
    c = re.sub(r'^\S+:\s*', '', c)
    return bool(c) and not c.startswith('.')


def asmfunc_pools(lines, raws, start, end):
    """The literal pools the asm functions share with the C: every pool is rebuilt as the original has it. A load of the C points where the
    original instruction at its address points (its entry keeps the compiler's operand); a word only an asm function loads is the original's
    word. A load of the C into an asm function's bytes (the original's pool there) loads from there. One pool at a time, in address order;
    a pool the compiler put elsewhere (it places them by the stub's size, not the original's) first moves to where the original has it.
    Words only an asm function loads, between the end of its code and the next function, with no pool of the C there: its bytes run on to
    the next function instead (and everything is done again)."""
    for _ in range(len(raws) + 1):
        res, left = _asmfunc_pools(list(lines), raws, start, end)
        ext = False
        for q, (n, s, e, loads, nxt) in enumerate(raws):
            if e < nxt and any(e <= t < nxt for t in left):
                raws[q] = (n, s, nxt, [x for x in loads if not s <= x[1] < nxt], nxt)
                lines = [re.sub(r';@RAW %08X \d+' % s, ';@RAW %08X %d' % (s, nxt - s), l) for l in lines]
                ext = True
        if not ext:
            break
    if left:
        sys.exit('[ERROR] fill.py: --asmfunc: pool words the asm functions load that no pool of the C holds: %s' % ' '.join('%08X' % t for t in left))
    return res


def _dump(lines, addrs):
    """FILL_DEBUG=<file>: the unit's code as laid out so far, each instruction with the original's word at its address."""
    import os
    if not os.environ.get('FILL_DEBUG'):
        return
    with open(os.environ['FILL_DEBUG'], 'w') as f:
        for k, l in enumerate(lines):
            a = addrs.get(k)
            if a is not None and _is_code(l) and ';@RAW' not in l:
                f.write('%08X %04X  %s\n' % (a, orig_words(a, 2)[0], l.rstrip()))
            else:
                f.write('%-14s %s\n' % ('%08X' % a if a is not None else '', l.rstrip()))


def _asmfunc_pools(lines, raws, start, end):
    fixed = set()
    deferred = set()
    moved = {}
    want = {}                                                     # asm targets outside the raw bytes: address -> size
    for n, s, e, loads, _ in raws:
        for a, t, z in loads:
            if not any(s_ <= t < e_ for _, s_, e_, _, _ in raws):          # (in another asm function's bytes: there already)
                want[t] = max(want.get(t, 0), z)
    done = set()
    while True:
        addrs = {}
        layout(lines, start, end, False, 'code', addrs, check=False)
        pools = sorted(pool_blocks(lines), key=lambda p: addrs.get(p[1], 0))
        todo = [p for p in pools if p[0] not in fixed and p[0] not in deferred]
        if not todo:
            if [p for p in pools if p[0] not in fixed]:
                todo = [p for p in pools if p[0] not in fixed]; deferred.clear()
            else:
                break
        lab, i0, i1 = todo[0]
        # the compiler's entries by offset
        ent, off = {}, 0
        for l in lines[i0 + 1:i1]:
            c = l.split(';')[0].strip()
            op, arg = c.split(None, 1)
            op = op.upper()
            if op.startswith('.RES'):
                off += int(arg, 0) * SIZES[op[-1]]
                continue
            for x in arg.split(','):
                ent[off] = (op[-1], x.strip()); off += SIZES[op[-1]]
        refs, bad = [], []
        for k, l in enumerate(lines):
            m = REFOP.match(l.rstrip('\n'))
            if m and m.group(2) == lab:
                x = addrs[k]
                w = orig_words(x, 2)[0]
                t = pc_target(x, w)
                kind = m.group(1).strip().upper()
                rn = int(re.search(r'R(\d+)', m.group(4), re.I).group(1))
                if (not t or (kind.startswith('MOV.L') and (w >> 12 != 0xD or (w >> 8) & 15 != rn)) or (kind.startswith('MOV.W') and (w >> 12 != 9 or (w >> 8) & 15 != rn))
                        or (kind == 'MOVA' and w >> 8 != 0xC7) or not start <= t[0] < end):
                    bad.append((k, m, x, w))      # not the original's load at this address (yet: a pool before it is not in place)
                    continue
                refs.append((k, m, t[0], ent[int(m.group(3) or 0)]))
        if bad and not refs and len(todo) > 1 and lab not in deferred:
            deferred.add(lab); continue
        if bad and not refs:
            _dump(lines, addrs)
            k, m, x, w = bad[0]
            sys.exit('[ERROR] fill.py: --asmfunc: the C load at %08X (%s) is not the original\'s instruction (%04X): the C before it does not match' % (x, lines[k].strip(), w))
        inraw = [r for r in refs if any(s <= r[2] < e for _, s, e, _, _ in raws)]
        for k, m, t, _ in inraw:
            n, s, e, _, _ = next(r for r in raws if r[1] <= t < r[2])
            lines[k] = '%s%s+%d%s\n' % (m.group(1), n, t - s, m.group(4).rstrip('\n'))
        refs = [r for r in refs if r not in inraw]
        a0 = i0 - 1 if i0 > 0 and re.match(r'\s*\.ALIGN\b', lines[i0 - 1], re.I) else i0
        if not refs:                                              # nothing of the C loads from it any more
            del lines[a0:i1]
            continue
        cmap = {}
        for k, m, t, (sz, opnd) in refs:
            if t in cmap and cmap[t] != (sz, opnd):
                sys.exit('[ERROR] fill.py: --asmfunc: the original has %s and %s at %08X' % (cmap[t], opnd, t))
            cmap[t] = (sz, opnd)
        # the original may have these entries in more than one pool (the compiler put them in one): runs of words with no gap
        runs, pts = [], sorted([(t, SIZES[sz], True) for t, (sz, _) in cmap.items()] + [(t, z, False) for t, z in want.items() if t not in done and t not in cmap])
        for t, z, c in pts:
            if runs and t <= runs[-1][1] + 2:
                runs[-1][1] = max(runs[-1][1], t + z); runs[-1][2] |= c
            else:
                runs.append([t, t + z, c])
        runs = [r for r in runs if r[2]]
        if len(runs) > 1 or bad:
            q = 0
            while any(re.match(r'^LSPLIT%d:' % q, l) for l in lines):
                q += 1
            lab2 = 'LSPLIT%d' % q
            for k, m, t in [(k, m, t) for k, m, t, _ in refs if len(runs) > 1 and t >= runs[1][0]] + [(k, m, None) for k, m, _, _ in bad]:
                lines[k] = '%s%s%s%s\n' % (m.group(1), lab2, ('+' + m.group(3)) if m.group(3) else '', m.group(4).rstrip('\n'))
            lines[i1:i1] = ['%s:\n' % lab2] + lines[i0 + 1:i1]
            continue
        r0 = min(cmap); r1 = max(t + SIZES[sz] for t, (sz, _) in cmap.items())
        mine = set()
        grow = True
        while grow:                                               # the asm functions' entries next to these (no gap but alignment)
            grow = False
            for t, z in want.items():
                if t not in done and t not in mine and t + z >= r0 - 2 and t <= r1 + 2:
                    mine.add(t); r0 = min(r0, t); r1 = max(r1, t + z); grow = True
        # where the original has it: a pool at the end of a function (only padding up to the next function) goes before that function;
        # one in the middle of a function right after the code that ends where its padding begins
        b1 = i1 + 1 if i1 < len(lines) and re.match(r'\s*\.ALIGN\b', lines[i1], re.I) else i1
        blk, rest = lines[a0:b1], lines[:a0] + lines[b1:]
        raddr = {(k if k < a0 else k - (b1 - a0)): v for k, v in addrs.items() if not a0 <= k < b1}
        nf = next((a_, n_) for a_, n_ in func_table() + [(1 << 32, '')] if a_ > r0)
        at = None
        if all(w in (0x0900, 0x0009, 0) for w in orig_words(r1, min(nf[0], end) - r1)):
            if nf[0] >= end:
                at = len(rest)
                while at > 0 and not _is_code(rest[at - 1]):
                    at -= 1
            else:
                at = next((k for k, l in enumerate(rest) for m_ in [FN_MARK.match(l)] if m_ and m_.group(2) == nf[1]), None)
                while at is not None and at > 0 and re.match(r'\s*\.ALIGN\b', rest[at - 1], re.I):
                    at -= 1
        if at is None:
            ce = r0
            while ce > start and (orig_words(ce - 2, 2)[0] == int(PADW, 16) or (RESFILL == 'FF' and orig_words(ce - 2, 2)[0] == 0xFFFF)):
                ce -= 2                                           # (the padding before the pool: 0x0900, or 0xFFFF in a +resff unit)
            ends = [(k, raddr[k] + (int(re.search(r';@RAW \S+ (\d+)', rest[k]).group(1)) if ';@RAW' in rest[k] else 2))
                    for k in range(len(rest)) if k in raddr and _is_code(rest[k])]
            tgt = next((k for k, e_ in ends if e_ >= ce), None)
            if tgt is None or dict(ends)[tgt] != ce:
                # a pool the original lays out right behind another already placed one (the compiler had them in one pool)
                adj = None
                for k_, l_ in enumerate(rest):
                    m_ = re.search(r';@POOL ([0-9A-F]{8})', l_)
                    if not m_: continue
                    e_ = int(m_.group(1), 16); j_ = k_ + 1
                    while j_ < len(rest) and re.match(r'\s+\.DATA\.[LW]\s', rest[j_]):
                        e_ += SIZES[rest[j_].split()[0][-1]]; j_ += 1
                    if e_ == r0: adj = j_
                if adj is not None:
                    tgt = adj - 1
                elif len(todo) > 1 and lab not in deferred:
                    deferred.add(lab); continue
                else:
                    _dump(lines, addrs)
                    sys.exit('[ERROR] fill.py: --asmfunc: no place for the pool at %08X: no code of the C ends at %08X' % (r0, ce))
            at = tgt + 1
            while POOL_BRAF and at < a0 and re.match(r'^L\d+:\s*(;.*)?$', rest[at]):
                at += 1           # labels (a switch's braf base) that were in front of the pool stay in front of it
        if at != a0 and moved.get(lab, 0) < 3:
            moved[lab] = moved.get(lab, 0) + 1
            lines = rest[:at] + blk + rest[at:]
            continue
        fixed.add(lab); deferred.clear()
        done.update(mine)
        done.update(cmap)
        new = ['%s:     ;@POOL %08X\n' % (lab, r0)]
        a = r0
        while a < r1:
            if a in cmap:
                sz, opnd = cmap[a]
                new.append('          .DATA.%s     %s\n' % (sz, opnd)); a += SIZES[sz]
            else:
                new.append('          .DATA.W     H\'%04X\n' % orig_words(a, 2)[0]); a += 2
        for k, m, t, _ in refs:
            lines[k] = '%s%s%s%s\n' % (m.group(1), lab, ('+%d' % (t - r0)) if t != r0 else '', m.group(4).rstrip('\n'))
        lines[a0:i1] = new
    return lines, sorted(t for t in want if t not in done)


def main():
    global UNIT_END
    global POOL32
    a = sys.argv[1:]
    global TAIL0900, PADW
    if '--padnop' in a:
        a.remove('--padnop'); PADW = '0009'
    global POOL00
    if '--pool00' in a:
        a.remove('--pool00'); POOL00 = True
    if '--pool32' in a:
        a.remove('--pool32'); POOL32 = True
    if '--tail0900' in a:
        a.remove('--tail0900'); TAIL0900 = True
    global POOL_AFTER, POOL_BRA, SYNTH16, RESFILL, HOIST
    extra = {}
    for x in list(a):
        m_ = re.match(r'--(dsec|bsec|name)=(.*)$', x)
        if m_:
            extra[m_.group(1)] = m_.group(2); a.remove(x)
    for x in list(a):
        if x.startswith('--hoist='):
            HOIST = [int(v) for v in x.split('=', 1)[1].split(',') if v]; a.remove(x)
    global ALIGN0
    for x in list(a):
        if x.startswith('--align0='):
            ALIGN0.extend(x.split('=', 1)[1].split(',')); a.remove(x)
    if '--onepool' in a:
        a.remove('--onepool'); POOL_AFTER = ['*']          # every pool of the compiler's goes to the file's end, one pool, as the game's compiler lays it out
    if '--resff' in a:
        a.remove('--resff'); RESFILL = 'FF'
    if '--res00' in a:
        a.remove('--res00'); RESFILL = '00'
    if '--synth16' in a:
        a.remove('--synth16'); SYNTH16 = True
    for x in list(a):
        if x.startswith('--poolkeep='):
            POOL_KEEP.extend(x.split('=', 1)[1].split(',')); a.remove(x)
    for x in list(a):
        if x.startswith('--poolbra='):
            POOL_BRA.extend(x.split('=', 1)[1].split(',')); a.remove(x)
    for x in list(a):
        if x.startswith('--brafpool='):
            POOL_BRAF.extend(x.split('=', 1)[1].split(',')); a.remove(x)
    for x in list(a):
        if x.startswith('--poolafter='):
            POOL_AFTER = ([] if POOL_AFTER == ['*'] else POOL_AFTER) + x.split('=', 1)[1].split(',')
            a.remove(x)
    for x in list(a):
        if x.startswith('--brfar='):
            BR_FAR.extend(v for v in x.split('=', 1)[1].split(',') if v); a.remove(x)
    for x in list(a):
        if x.startswith('--asmfunc='):
            ASMFUNC.extend(v for v in x.split('=', 1)[1].split(',') if v); a.remove(x)
    if len(a) not in (4, 8):
        sys.exit(__doc__)
    lines = open(a[0], encoding='latin-1').readlines()
    # FSRRA and FSCA, which SHC 5.1 writes and the SDK's asmsh does not know: their instruction words
    lines = [re.sub(r'^(\s*)FSRRA\s+FR(\d+)\s*(;.*)?$', lambda m: '%s.DATA.W     H\'%04X\n' % (m.group(1), 0xF07D | int(m.group(2)) << 8), l)
             if 'FSRRA' in l else
             re.sub(r'^(\s*)FSCA\s+FPUL\s*,\s*DR(\d+)\s*(;.*)?$', lambda m: '%s.DATA.W     H\'%04X\n' % (m.group(1), 0xF0FD | int(m.group(2)) << 8), l)
             if 'FSCA' in l else l for l in lines]
    _m = []          # the compiler continues a long .DATA line with a '+' in column 1: join it to the line before
    for _l in lines:
        if _l.startswith('+') and _m: _m[-1] = _m[-1].rstrip('\r\n') + _l[1:].strip() + '\n'
        else: _m.append(_l)
    _n = []
    for _l in _m:       # a joined .DATA line is too long for the assembler: several lines of at most 4 operands
        _q = re.match(r'(\s+\.DATA\.[BWL]\s+)(\S+)\s*$', _l)
        if _q and _q.group(2).count(',') > 3:
            _a = _q.group(2).split(',')
            _n.extend(_q.group(1) + ','.join(_a[_i:_i + 4]) + '\n' for _i in range(0, len(_a), 4))
        else: _n.append(_l)
    lines = _n
    if BR_FAR:
        lines = brfar(lines, BR_FAR)
    if ASMFUNC:
        lines = asmfunc_insert(lines, ASMFUNC)
    if SYNTH16:
        lines = synth16(lines)
        if HOIST: lines = hoist(lines, HOIST)
    if POOL_AFTER or POOL_BRA:
        lines = split_pools(lines, POOL_AFTER)
    raws = []
    if ASMFUNC:
        UNIT_END = int(a[3], 16)
        lines, raws = asmfunc_replace(lines, ASMFUNC)
    head, parts, cur = [], {'P': [], 'C': [], 'D': [], 'B': []}, None
    for line in lines:
        code = line.split(';', 1)[0].strip()
        op = code.split()[0].upper() if code and not LABEL.match(code) else ''
        if op == '.SECTION':
            name = code.split()[1].split(',')[0].upper()
            if name not in parts:
                sys.exit('[ERROR] fill.py: a %s section is not supported' % name)
            cur = name
        if op == '.END':
            continue
        (head if cur is None else parts[cur]).append(line)
    # the data pieces: C (the constant data: the 4th..7th arguments), D (initialised variables) and B (zeroed variables: --dsec= / --bsec=)
    pieces = {}
    if len(a) == 8:
        pieces['C'] = (a[4], int(a[5], 16), int(a[6], 16))
    for k, nm in (('D', 'dsec'), ('B', 'bsec')):
        if nm in extra:
            f_, s_, e_ = extra[nm].split(':')
            pieces[k] = (f_, int(s_, 16), int(e_, 16))
    if raws:
        parts['P'] = asmfunc_pools(parts['P'], raws, int(a[2], 16), int(a[3], 16))
    uname = a[7] if len(a) == 8 else extra.get('name', 'u')
    for k, what in (('C', 'constant data (tables, strings): give it a range with @data <dstart>-<dend> in its @unit line'),
                    ('D', 'initialised variables (a D section): give it a range with @ddata <dstart>-<dend> in its @unit line'),
                    ('B', 'zeroed variables (a B section): give it a range with @bdata <dstart>-<dend> in its @unit line')):
        if parts[k] and k not in pieces:
            sys.exit('[ERROR] fill.py: this unit has ' + what)
        if k in pieces and not parts[k]:
            sys.exit('[ERROR] fill.py: a range for the %s section is given but the unit has none' % k)
    if not pieces:
        open(a[1], 'w', encoding='latin-1').writelines(head + layout(parts['P'], int(a[2], 16), int(a[3], 16), False, 'code') + ['          .END\n'])
        return

    def defined(ls):
        return {m.group(1) for m in (LABEL.match(l) for l in ls) if m}

    def used(ls):
        return {t for l in ls for t in IDENT.findall(l.split(';', 1)[0].split(':')[-1])}

    exported = {l.split()[1] for l in head if l.strip().upper().startswith('.EXPORT')}
    secs = ['P'] + [k for k in 'CDB' if k in pieces]
    owner = {}
    for k in secs:
        for x in defined(parts[k]):
            owner[x] = k
    cross = {(x, k) for k in secs for x in used(parts[k]) if x in owner and owner[x] != k}      # (label, the section that uses it)
    rename = {x: '_U_%s_%s' % (uname, x.lstrip('_')) for x, _ in cross if x not in exported}

    def sub(ls):
        if not rename:
            return ls
        r = re.compile(r'(?<![\w$.])(%s)(?![\w$.])' % '|'.join(map(re.escape, rename)))
        return [r.sub(lambda m: rename[m.group(1)], l) for l in ls]

    moved = {x for x in exported if owner.get(x, 'P') != 'P'}      # a global variable of a data piece: that piece exports it, the code imports it
    head = [l for l in head if not (l.strip().upper().startswith('.EXPORT') and l.split()[1] in moved)]
    imports = [l for l in head if l.strip().upper().startswith('.IMPORT')]
    exp = {k: sorted({rename.get(x, x) for x in owner if owner[x] == k and any(u != k and (x, u) in cross for u in secs) and x not in exported}) for k in secs}
    imp = {k: sorted({rename.get(x, x) for x, u in cross if u == k}) for k in secs}
    code_head = sub(head) + ['          .EXPORT     %s\n' % n for n in exp['P']] + ['          .IMPORT     %s\n' % n for n in imp['P']]
    open(a[1], 'w', encoding='latin-1').writelines(
        code_head + layout(sub(parts['P']), int(a[2], 16), int(a[3], 16), False, 'code') + ['          .END\n'])
    for k in secs[1:]:
        f_, s_, e_ = pieces[k]
        dh = imports + ['          .EXPORT     %s\n' % n for n in exp[k] + sorted(x for x in moved if owner[x] == k)] + ['          .IMPORT     %s\n' % n for n in imp[k]]
        open(f_, 'w', encoding='latin-1').writelines(dh + layout(sub(parts[k]), s_, e_, k, 'data') + ['          .END\n'])


if __name__ == '__main__':
    main()
