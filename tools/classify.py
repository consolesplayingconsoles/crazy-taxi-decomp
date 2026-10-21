#!/usr/bin/env python3
"""classify.py: which functions can have Equivalent C written for them (tools/equiv.py), and which not. Run in the repo.

    python3 tools/classify.py [name ...]     (no names: every function of at most 128 bytes, as a table)

Reads each function's disassembly and says "ok" or "blocked: <why>" before anyone writes C:
  FPU register banks, matrix and vector instructions (frchg, fschg, ftrv, fipr, XMTRX), prefetch, trapa, sleep, tas: SHC's own intrinsics
  (umachine.h / smachine.h in the SDK: ftrv, fipr, mtrx4mul, ld_ext, st_ext, add4, sub4, get_fpscr, set_fpscr, prefetch, tas, trapa, sleep): not blocked
  fsrra, fsca: the simulator has no such instruction
  system registers and cache (ldc, stc, ocbi, pref, movca, trapa, sleep, GBR/VBR moves): not C; moving SR to or
  from a register is fine (SHC's get_imask/set_imask, get_cr/set_cr; the simulator keeps SR)
  fipr, fmac: ok, but the cases use values that are exact in float (fipr sums with one rounding)
No C form: a control register this compiler has no intrinsic for (a banked register, DBR, SSR, SPC, SGR: not in smachine.h or
umachine.h, which hold the intrinsics for SR, VBR, GBR, sleep, trapa, tas and prefetch). no_c_form() names the instruction, and
only instructions control flow reaches are read (data inside a function, such as a jump table, decodes as instructions otherwise). progress.py counts these functions as done: no C form.
No C form, by register convention: a function that reads r0-r3 or r8-r14 it never writes, or whose first use of the T flag is a read
(bt, bf, movt, rotcl, rotcr, addc, subc, negc, div1 before anything sets it), takes that register or flag from its caller or from a helper
it calls. Assembly routines did this; SHC reaches them from C through #pragma inline_asm and #pragma regsave/noregsave (see the messages in
shc/bin/shcerr.msg), and C itself has no way to take a flag as an argument or return one.
A function that takes a variable argument list, or passes the address of its own stack area on, cannot
be told from the disassembly: the first case that differs shows it.
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import shdis

BLOCK = (('ldtlb', 'MMU'),)           # everything else has an intrinsic or an inline assembly wrapper (gen_equiv)
NOTE = (('fipr', 'fipr: exact-in-float values'), ('fmac', 'fmac: exact-in-float values'))


NO_C_FORM = ('bank', 'dbr', 'ssr', 'spc', 'sgr')      # GBR and VBR have intrinsics (get_gbr, set_vbr...) when smachine.h / umachine.h are included


def reachable(exe, base, a, sz):
    """The addresses of the instructions control flow reaches from the entry, delay slots included, following branches inside the
    function. Data inside a function (a jump table, constants after a branch) decodes as instructions if it is read in a straight
    line, so a decoder must only look at these. Code reached only through a jump table is not included."""
    word = lambda pc: struct.unpack_from('<H', exe, pc - base)[0]
    seen, work, end = set(), [a], a + sz
    while work:
        pc = work.pop()
        while a <= pc < end and pc not in seen:
            seen.add(pc)
            t, _, _, tgt = shdis.decode(word(pc), pc)
            op = t.split()[0]
            delay = op in ('bra', 'bsr', 'bt/s', 'bf/s', 'jsr', 'jmp', 'rts', 'rte', 'braf', 'bsrf')
            if delay and pc + 2 < end:
                seen.add(pc + 2)
            if op in ('bt', 'bf', 'bt/s', 'bf/s', 'bra', 'bsr') and tgt is not None and a <= tgt < end:
                work.append(tgt)
            if op in ('rts', 'rte', 'jmp', 'braf', 'bra'):
                break
            pc += 4 if delay else 2
    return seen


def register_inputs(exe, base, a, sz):
    """Registers r0-r3 and r8-r14 that the function reads and never writes anywhere (stack saves and restores aside): their value
    is whatever the caller left there, an input of a custom calling convention. C has no way to say it, so the function has no C
    form. Only the instructions control flow reaches are looked at, so data decoded as code does not count."""
    import re
    defs, uses = set(), set()
    pure = ('mov', 'mov.b', 'mov.w', 'mov.l', 'mova', 'movt', 'sts', 'stc', 'neg', 'not', 'extu.b', 'extu.w', 'exts.b', 'exts.w', 'swap.b', 'swap.w', 'float')
    for pc in sorted(reachable(exe, base, a, sz)):
        t = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)[0]
        mn, _, ops = t.partition(' ')
        ops = ops.split(';')[0].strip()
        if mn in ('bsr', 'jsr', 'bsrf'):
            defs.add(0)                                          # the callee leaves its return value in r0
        if not ops or '@-r15' in ops or '@r15+' in ops:
            continue
        parts = [x.strip() for x in re.split(r',(?![^(]*\))', ops)]
        last = parts[-1]
        dest = last if re.fullmatch(r'r\d+', last) and not mn.startswith(('cmp', 'tst', 'lds', 'ldc', 'jmp', 'jsr', 'bsr', 'bra')) else None
        if dest:
            defs.add(int(dest[1:]))
        for x in parts:
            if len(parts) == 2 and x == parts[0] and re.fullmatch(r'r\d+', x) and re.search(r'@\(?[^,]*r15', parts[1]) and mn.startswith('mov'):
                continue                                         # a store to the stack frame: a spill, not a use
            for r in re.findall(r'\br(\d+)\b', x):
                if dest and x == dest and mn in pure:
                    continue
                uses.add(int(r))
    return sorted(r for r in uses if r not in defs and (r <= 3 or 8 <= r <= 14))


T_READERS = ('bt', 'bf', 'bt/s', 'bf/s', 'movt', 'rotcl', 'rotcr', 'addc', 'subc', 'negc', 'div1')
T_WRITERS = ('cmp/eq', 'cmp/ge', 'cmp/gt', 'cmp/hi', 'cmp/hs', 'cmp/pl', 'cmp/pz', 'cmp/str', 'tst', 'dt', 'shll', 'shlr', 'shal', 'shar',
             'rotl', 'rotr', 'sett', 'clrt', 'div0s', 'div0u', 'addv', 'subv', 'tas.b', 'fcmp/eq', 'fcmp/gt')


def t_input(exe, base, a, sz):
    """True when the first instruction from the entry that touches the T flag reads it (a flag the caller or a helper it calls left)."""
    pc = a
    while pc < a + sz:
        t = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)[0]
        op = t.split()[0]
        if op in T_READERS:
            return True
        if op in T_WRITERS:
            return False
        if op in ('rts', 'rte', 'jmp', 'bra', 'braf'):
            return False                                     # control left before any use of T
        pc += 2
    return False


def entry_input(exe, base, a, sz):
    """True when, going from the entry to the first branch, an instruction reads r0-r3 before anything has written it: the register
    holds a value the caller put there (a custom convention; r4-r7 are the arguments)."""
    import re
    defs = set()
    fdefs = set()
    fstop = False
    fpure = ('fmov', 'fmov.s', 'fldi0', 'fldi1', 'float', 'fsca', 'fsts')
    pc = a
    stop_after = None
    pure = ('mov', 'mov.b', 'mov.w', 'mov.l', 'mova', 'movt', 'sts', 'stc', 'neg', 'not', 'extu.b', 'extu.w', 'exts.b', 'exts.w', 'swap.b', 'swap.w', 'float')
    while pc < a + sz:
        t = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)[0]
        mn, _, ops = t.partition(' ')
        ops = ops.split(';')[0].strip()
        if mn in ('frchg', 'fschg'):
            fstop = True                                             # the float register names change meaning from here on: stop looking at them
        if mn in ('bsr', 'jsr', 'bsrf'):
            defs.add(0)
        if ops and '@-r15' not in ops and '@r15+' not in ops:
            parts = [x.strip() for x in re.split(r',(?![^(]*\))', ops)]
            last = parts[-1]
            dest = last if re.fullmatch(r'r\d+', last) and not mn.startswith(('cmp', 'tst', 'lds', 'ldc', 'jmp', 'jsr', 'bsr', 'bra')) else None
            for x in parts:
                if len(parts) == 2 and x == parts[0] and re.fullmatch(r'r\d+', x) and re.search(r'@\(?[^,]*r15', parts[1]) and mn.startswith('mov'):
                    continue                                         # a store to the stack frame: a spill
                for r in re.findall(r'\br(\d+)\b', x):
                    if dest and x == dest and mn in pure:
                        continue
                    if int(r) <= 3 and int(r) not in defs:
                        return True
            if re.fullmatch(r'dr\d+', last) and mn in fpure:        # a pair written at once (fsca fpul,drN; fmov in pair mode)
                fdefs.update((int(last[2:]), int(last[2:]) + 1))
            fdest = last if re.fullmatch(r'fr\d+', last) and mn.startswith(('f', 'float')) and mn not in ('fcmp/eq', 'fcmp/gt', 'flds') else None
            for x in ([] if fstop else parts):
                for r in re.findall(r'\bfr(\d+)\b', x):
                    if fdest and x == fdest and mn in fpure:
                        continue
                    if int(r) <= 3 and int(r) not in fdefs:
                        return True
            if fdest:
                fdefs.add(int(fdest[2:]))
            if dest:
                defs.add(int(dest[1:]))
        op = mn
        if stop_after is not None:
            return False
        if op in ('bt', 'bf', 'bra', 'bsr', 'jsr', 'jmp', 'rts', 'rte', 'braf', 'bsrf'):
            return False                                             # control leaves before any such read
        if op in ('bt/s', 'bf/s'):
            stop_after = pc + 2
        pc += 2
    return False


def address_table(exe, base, a, sz):
    """True when the function starts with two 32-bit words that are addresses inside the executable: a table of pointers (a jump table, a
    list of handlers) the function list took for code."""
    if sz < 8:
        return False
    w0, w1 = struct.unpack_from('<II', exe, a - base)
    inside = lambda w: base <= w < base + len(exe)
    return inside(w0) and inside(w1)


def _uses_defs(mn, ops):
    """(registers r0-r15 the instruction reads, the register it writes or None) for one decoded instruction."""
    import re
    ops = ops.split(';')[0].strip()
    if not ops:
        return set(), None
    parts = [x.strip() for x in re.split(r',(?![^(]*\))', ops)]
    last = parts[-1]
    if last.endswith('@-r15') or '@-r15' in last:                   # a push: the value saved is not a use that matters here
        return set(), None
    pure = ('mov', 'mov.b', 'mov.w', 'mov.l', 'mova', 'movt', 'sts', 'stc', 'neg', 'not', 'extu.b', 'extu.w', 'exts.b', 'exts.w', 'swap.b', 'swap.w', 'float')
    dest = last if re.fullmatch(r'r\d+', last) and not mn.startswith(('cmp', 'tst', 'lds', 'ldc', 'jmp', 'jsr', 'bsr', 'bra')) else None
    uses = set()
    for x in parts:
        for r in re.findall(r'\br(\d+)\b', x):
            if dest and x == dest and mn in pure:
                continue
            uses.add(int(r))
    return uses, (int(dest[1:]) if dest else None)


_NAMES = None
def _name_at(addr):
    global _NAMES
    if _NAMES is None:
        _NAMES = {}
        if os.path.exists('functions.txt'):
            for l in open('functions.txt'):
                p = l.split()
                if len(p) >= 4 and p[0] == 'F':
                    _NAMES[int(p[1], 16)] = p[3]
    return _NAMES.get(addr) or _NAMES.get((addr & 0x1FFFFFFF) | (min(_NAMES) & 0xE0000000) if _NAMES else addr)


def _call_target(exe, base, a, pc, mn, ops, tgt):
    """The address a call at pc goes to, when the code says it (bsr, or jsr/bsrf through a register loaded from the pool just before)."""
    import re
    if mn == 'bsr':
        return tgt
    m = re.match(r'@?r(\d+)', ops.strip())
    if not m:
        return None
    rn = m.group(1)
    for k in range(pc - 2, max(a, pc - 128) - 2, -2):
        t = shdis.decode(struct.unpack_from('<H', exe, k - base)[0], k)
        mm = re.match(r'mov\.l\s+@\(0x[0-9a-f]+,pc\),r%s\b' % rn, t[0])
        if mm and t[1] is not None:
            v = struct.unpack_from('<I', exe, t[1] - base)[0]
            return v if mn == 'jsr' else (pc + 4 + v) & 0xFFFFFFFF
        if re.search(r',r%s\b' % rn, t[0].split(';')[0]):
            return None
    return None


_SPANS = None
def _custom_callee(exe, base, addr):
    """True for a callee that takes registers or the T flag on entry (an assembly routine with its own convention)."""
    global _SPANS
    if _SPANS is None:
        _SPANS = {}
        if os.path.exists('functions.txt'):
            for l in open('functions.txt'):
                p = l.split()
                if len(p) >= 4 and p[0] == 'F':
                    _SPANS[int(p[1], 16)] = int(p[2])
    sz = _SPANS.get(addr) or (_SPANS.get((addr & 0x1FFFFFFF) | (min(_SPANS) & 0xE0000000)) if _SPANS else None)
    if sz and addr not in _SPANS:
        addr = (addr & 0x1FFFFFFF) | (min(_SPANS) & 0xE0000000)
    if not sz:
        return False
    return bool(register_inputs(exe, base, addr, sz) or entry_input(exe, base, addr, sz) or t_input(exe, base, addr, sz))


def callee_keeps(exe, base, a, sz):
    """A register r1-r7 the function reads after a call to an assembly routine with its own convention, on some path, without having
    written it since: it relies on that routine keeping a register the calling convention lets a callee change. None when there is none.
    A call to an ordinary function does not count: SHC can be told which registers a library routine keeps (#pragma regsave), so
    compiled C may rely on it."""
    word = lambda pc: struct.unpack_from('<H', exe, pc - base)[0]
    end = a + sz
    seen = {}
    reach = reachable(exe, base, a, sz)
    work = [(a, frozenset())]
    while work:
        pc, clob = work.pop()
        while a <= pc < end and pc in reach:
            if pc in seen and clob <= seen[pc]:
                break
            seen[pc] = clob | seen.get(pc, frozenset())
            t, _, _, tgt = shdis.decode(word(pc), pc)
            mn, _, ops = t.partition(' ')
            delay = mn in ('bra', 'bsr', 'bt/s', 'bf/s', 'jsr', 'jmp', 'rts', 'rte', 'braf', 'bsrf')
            steps = [(mn, ops)]
            if delay and pc + 2 < end:
                t2 = shdis.decode(word(pc + 2), pc + 2)[0]; m2, _, o2 = t2.partition(' ')
                steps = [(m2, o2), (mn, ops)]                       # the delay slot runs before the branch takes effect
            for m_, o_ in steps:
                u, d = _uses_defs(m_, o_)
                hit = sorted(r for r in u if r in clob)
                if hit:
                    return hit[0]
                if d is not None:
                    clob = clob - {d}
                if '@r15+' in o_:                                   # a pop restores the register it names
                    import re
                    mm = re.search(r'@r15\+,r(\d+)', o_)
                    if mm: clob = clob - {int(mm.group(1))}
            if mn in ('bsr', 'jsr', 'bsrf'):
                ta = _call_target(exe, base, a, pc, mn, ops, tgt) or 0
                nm = _name_at(ta) or ''
                # only an assembly routine with its own convention counts (the compiler's runtime helpers keep r2-r7 by theirs)
                if not nm.startswith('_') and _custom_callee(exe, base, ta):
                    clob = clob | frozenset(range(1, 8))
                else:
                    clob = frozenset()
            if mn in ('bt', 'bf', 'bt/s', 'bf/s') and tgt is not None and a <= tgt < end:
                work.append((tgt, clob))
            if mn in ('bra',) and tgt is not None:
                if a <= tgt < end: work.append((tgt, clob))
                break
            if mn in ('rts', 'rte', 'jmp', 'braf'):
                break
            pc += 4 if delay else 2
    return None


def double_precision(exe, base, a, sz, depth=0):
    """True when the function runs double-precision code: it uses fcnvsd / fcnvds, ORs FPSCR.PR (0x00080000) into FPSCR, or calls a
    routine that does (it then passes and takes doubles). This project compiles C with -fpu=single (build.sh, equiv.py), where double is
    single precision: such code has no C form here."""
    import re
    pr = set()
    for pc in sorted(reachable(exe, base, a, sz)):
        t, pool, ps, _ = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)
        mn, _, ops = t.partition(' ')
        ops = ops.split(';')[0].strip()
        if mn in ('fcnvsd', 'fcnvds'):
            return True
        m = re.match(r'@\(0x[0-9a-f]+,pc\),r(\d+)$', ops)
        if mn == 'mov.l' and m and pool is not None and struct.unpack_from('<I', exe, pool - base)[0] & 0x00080000 and \
                not struct.unpack_from('<I', exe, pool - base)[0] & 0xFFF00000:
            pr.add(int(m.group(1))); continue
        m = re.match(r'r(\d+),r(\d+)$', ops)
        if mn == 'or' and m and int(m.group(1)) in pr:
            pr.add(int(m.group(2))); continue
        m = re.match(r'r(\d+),fpscr$', ops)
        if mn == 'lds' and m and int(m.group(1)) in pr:
            return True
        if mn in ('bsr', 'jsr', 'bsrf') and depth == 0:
            ta = _call_target(exe, base, a, pc, mn, ops, _)
            if ta:
                _custom_callee(exe, base, ta)                       # loads the function sizes
                sp = _SPANS.get(ta) or _SPANS.get((ta & 0x1FFFFFFF) | (min(_SPANS) & 0xE0000000) if _SPANS else 0)
                if sp and double_precision(exe, base, ta if ta in _SPANS else (ta & 0x1FFFFFFF) | (min(_SPANS) & 0xE0000000), sp, 1):
                    return True
    return False


def runs_off(exe, base, a, sz):
    """True when control flow from the entry runs to the end of the range without a return, jump or branch away: padding and address
    constants the function list took for code (real code ends in rts, rte, jmp or bra)."""
    seen = reachable(exe, base, a, sz)
    if not seen or max(seen) < a + sz - 4:
        return False
    for pc in seen:
        if shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)[0].split()[0] in ('rts', 'rte', 'jmp', 'braf', 'bra'):
            return False
    return True


def no_c_form(exe, base, a, sz):
    """The instructions of one function that have no C form with this compiler (see above): ['ldc r3,r0_bank', ...], pools skipped."""
    out = []
    for pc in sorted(reachable(exe, base, a, sz)):
        t = shdis.decode(struct.unpack_from('<H', exe, pc - base)[0], pc)[0]
        if t.startswith(('stc', 'ldc')) and any(k in t for k in NO_C_FORM) and t not in out:
            out.append(t)
    if double_precision(exe, base, a, sz):
        out.append('runs double-precision code (FPSCR.PR = 1); this project compiles C with -fpu=single')
    if address_table(exe, base, a, sz):
        out.append('is data: a table of addresses inside the executable, not code')
    ck = callee_keeps(exe, base, a, sz)
    if ck is not None:
        out.append('reads r%d after a call without writing it: it relies on the callee keeping it (a custom convention)' % ck)
    if entry_input(exe, base, a, sz):
        out.append('reads r0-r3 on entry before anything writes it: a value its caller left (a custom convention)')
    if t_input(exe, base, a, sz):
        out.append('reads the T flag before anything sets it: a flag its caller or a helper it calls left (a custom convention)')
    ri = register_inputs(exe, base, a, sz)
    if ri and not out:
        out.append('reads r%s, which it never writes (a custom register convention)' % ', r'.join(str(r) for r in ri))
    return out


def main():
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    funcs = []
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            funcs.append((int(p[1], 16), int(p[2]), p[3]))
    only = set(sys.argv[1:])
    for a, sz, n in funcs:
        if (only and n not in only) or (not only and sz > 128):
            continue
        text = []
        for pc in sorted(reachable(exe, base, a, sz)):       # data inside the function (jump tables...) is not code
            w = struct.unpack_from('<H', exe, pc - base)[0]
            t, _, _, _ = shdis.decode(w, pc)
            if w == 0xFBFD: t = 'frchg'                      # the decoder may print these as .word
            elif w == 0xF3FD: t = 'fschg'
            elif w & 0xF0FF == 0xF07D: t = 'fsrra'
            elif w & 0xF1FF == 0xF0FD: t = 'fsca'
            elif w & 0xF0FF == 0xF0ED: t = 'fipr'
            elif w & 0xF3FF == 0xF1FD: t = 'ftrv'
            text.append(t)
        sr = lambda t: t.startswith('stc sr,') or (t.startswith('ldc r') and t.endswith(',sr'))   # SR moves: simulated
        why = sorted({r for t in text for k, r in BLOCK if t.startswith(k) and not sr(t)})
        note = sorted({r for t in text for k, r in NOTE if t.startswith(k)})
        print('%08x %4d %-32s %s%s' % (a, sz, n, ('blocked: ' + ', '.join(why)) if why else 'ok',
                                       ('  (' + ', '.join(note) + ')') if note else ''))


if __name__ == '__main__':
    main()
