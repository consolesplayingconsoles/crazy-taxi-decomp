#!/usr/bin/env python3
"""protocheck.py: a call that passes fewer arguments than its callee takes. Run in the repo. Stdlib only.

    python3 tools/8-build/protocheck.py          every file's direct calls against the callee's definition in src/*.c, the stack words
                                                 and the argument registers; exit 1 when one is short
    python3 tools/8-build/protocheck.py --lost   the calls among those that leave out an integer register the original sets before
                                                 the same call (reads 1ST_READ.BIN); exit 1 when there is one
    python3 tools/8-build/protocheck.py --reads  every definition against the registers the original reads (gen_core.entry_reads); exit 1 when it declares fewer

The SH-4 passes the first four integer arguments in r4-r7, the first eight float arguments in fr4-fr11, a structure by value always on the
stack, and the rest as one stack word each. A file that prototypes a callee with fewer of those than its definition takes and calls it
directly leaves the callee reading whatever the stack holds: Virtua Tennis drew every panel at an unset position (selPanelDraw called
without its position vector; the HUD, the score and the ball shadow did the same). The proof does not see it when the callee's definition
declares the words and the caller's prototype does not: the call is compared only up to the caller's own prototype, and the cases hold
zeros in the words.

The registers are compared the same way: a file that prototypes `int f(void);` for the definition `int f(int a4)` and calls `f()`
leaves the callee reading a leftover r4. The prototype was right when the file was generated and the callee's arity was found out
later (a read in a delay slot, a pass-through whose target became known); the callee and the new callers were written with the
argument, the old callers kept theirs, and their proofs still passed: a call is compared on the arguments the caller's own prototype
names (Virtua Tennis uniformPreviewFree called nlObjPutFreeTextureOnce() with no model and Exhibition went black on the console after
the court was picked; charaTexReloadAll and strmBgmFadeOut the same; Zombie Revenge drew every item marker with no size). A callee with
no definition in src/ (it stays the original's code) is compared against the file that prototypes the most: files that disagree on it
cannot all be right. A prototype with empty parentheses says nothing and is left alone.

The register list is long and most of it is harmless: a definition names every register it hands on, so a callee that passes r4-r7
to a function of unknown arity declares four, and a caller that never had them to give is right to pass none. --lost keeps the calls
where the original gives the answer: in the caller's own code, the register is written between the call before and this one, at every
call of that callee, and the callee's C uses the parameter. Those are the calls that lost an argument (the three of Virtua Tennis
above among them). Integer registers only: the float registers are the compiler's working registers too, written before a call for
other reasons. tools/consistency.py lists the calling functions as `short call` and --fix drops the generated ones, so the generator
writes them again.

--reads is the other half: a definition that declares fewer registers than the original reads before writing them. The generator names
a register as a parameter only when the function uses it, so one that is only passed on to a callee (cpuDblThinkAll hands r6 and r7 to
cpuDblThink, which reads them) is left out, and the proof then compares the pass-through against a leftover (Virtua Tennis cpuDblThinkAll,
cpuDblPoachCheck, matchExec, playerStartReactions: DIFFERS on cases that gave r4-r7 and fr4-fr7 to a function declared without them). The
check lists the definition, the registers the original reads that its parameters do not cover, and the parameters it declares. Calls through a cast (`((int (*)(Stk3))(f))(...)`) and `extern f();` declarations are not looked at. A variadic
definition (`...`) is left alone.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import collections
import glob
import re
import sys

TYPE = r'(?:unsigned\s+)?(?:int|float|void|short|char|double|Stk\d+)'
DEFN = re.compile(r'^(?:extern\s+)?%s\s*\**\s*(\w+)\s*\(([^;{]*)\)\s*\n\{' % TYPE, re.M)
PROTO = re.compile(r'^(?:extern\s+)?%s\s*\**\s*(\w+)\s*\(([^;{()]*)\)\s*;' % TYPE, re.M)


def words(plist):
    """The stack words a parameter list takes, or None when it is variadic or unknown"""
    if '...' in plist:
        return None
    ni = nf = st = 0
    for p in [x.strip() for x in plist.split(',') if x.strip() and x.strip() != 'void']:
        m = re.match(r'(?:const\s+)?Stk(\d+)\b', p)
        if m:
            st += int(m.group(1))
        elif re.match(r'(?:const\s+)?(?:float|double)\b', p) and '*' not in p:
            nf += 1
        else:
            ni += 1
    return max(0, ni - 4) + max(0, nf - 8) + st


def scan(srcdir='src'):
    """[(function, file, direct calls, words the file's prototype passes, words the definition takes)]"""
    defs, protos, texts = {}, collections.defaultdict(dict), {}
    for f in sorted(glob.glob(srcdir + '/*.c')):
        t = open(f, errors='replace').read()
        texts[f] = t
        for m in DEFN.finditer(t):
            defs[m.group(1)] = (f, m.group(2))
        for m in PROTO.finditer(t):
            protos[m.group(1)][f] = m.group(2)
    out = []
    for n, (df, dp) in defs.items():
        dw = words(dp)
        if not dw:
            continue
        for f, p in protos.get(n, {}).items():
            pw = words(p)
            if f == df or pw is None or pw >= dw:
                continue
            calls = 0
            for m in re.finditer(r'(?<![\w.])%s\(' % re.escape(n), texts[f]):
                line = texts[f][texts[f].rfind('\n', 0, m.start()) + 1:m.end()]
                if not re.match(r'^\s*(extern\s+)?%s\s*\**\s*%s\(' % (TYPE, re.escape(n)), line):
                    calls += 1
            if calls:
                out.append((n, f, calls, pw, dw))
    return out


def registers(plist):
    """(integer registers, float registers) a parameter list takes, at most 4 and 8: a structure by value and the words past them are on the stack"""
    ni = nf = 0
    for p in [x.strip() for x in plist.split(',') if x.strip() and x.strip() != 'void']:
        if re.match(r'(?:const\s+)?Stk\d+\b', p) or p == '...':
            continue
        if re.match(r'(?:const\s+)?(?:float|double)\b', p) and '*' not in p:
            nf += 1
        else:
            ni += 1
    return min(ni, 4), min(nf, 8)


def scan_regs(srcdir='src'):
    """[(function, file, direct calls, (int, float) registers the file's prototype passes, (int, float) the callee takes, where the
    callee's count is from: its definition's file, or the file that prototypes the most when src/ has no definition)]. Scratch files
    (gen_tmp*, zz_*) are left out."""
    defs, protos, texts = {}, collections.defaultdict(dict), {}
    for f in sorted(glob.glob(srcdir + '/*.c')):
        if f.split('/')[-1].startswith(('gen_tmp', 'zz_')):
            continue
        t = open(f, errors='replace').read()
        texts[f] = t
        for m in DEFN.finditer(t):
            defs[m.group(1)] = (f, m.group(2))
        for m in PROTO.finditer(t):
            if m.group(2).strip():                      # `f();` declares no parameter list
                protos[m.group(1)][f] = m.group(2)
    out = []
    for n, by in protos.items():
        if n in defs:
            rf, rp = defs[n]
        else:
            rf, rp = max(sorted(by.items()), key=lambda x: sum(registers(x[1])))
        if '...' in rp:
            continue
        ri, rfl = registers(rp)
        for f, p in by.items():
            if f == rf or '...' in p:
                continue
            pi, pf = registers(p)
            if pi >= ri and pf >= rfl:
                continue
            calls = 0
            for m in re.finditer(r'(?<![\w.])%s\(' % re.escape(n), texts[f]):
                line = texts[f][texts[f].rfind('\n', 0, m.start()) + 1:m.end()]
                if not re.match(r'^\s*(extern\s+)?%s\s*\**\s*%s\(' % (TYPE, re.escape(n)), line):
                    calls += 1
            if calls:
                out.append((n, f, calls, (pi, pf), (ri, rfl), rf))
    return out


def _functions():
    """{name: (address, size)} from functions.txt"""
    out = {}
    for l in open('functions.txt'):
        p = l.split()
        if len(p) > 3 and p[0] == 'F':
            out[p[3]] = (int(p[1], 16), int(p[2]))
    return out


_NOT_A_WRITE = ('jsr', 'jmp', 'bsr', 'bra', 'bt', 'bf', 'rts', 'cmp', 'tst', 'mov.l r', 'mov.w r', 'mov.b r', 'fmov.s fr', 'sts.l', '.word', 'nop')
_WRITES = ('mov ', 'mov.l @', 'mov.w @', 'mov.b @', 'add', 'sub', 'mova', 'sts ', 'movt', 'ext', 'neg', 'not', 'shl', 'sha', 'rot', 'and ',
           'or ', 'xor ', 'swap', 'xtrct', 'dt ')
_SITES = {}


def sites(caller):
    """[(callee, the integer registers written since the call before)] for the direct calls in the original code of caller, in address
    order: bsr and bra to a function of functions.txt, jsr and jmp through a register loaded from the pool (that register is not counted:
    it holds the address). A call's delay slot counts.
    None when the code cannot be read."""
    if caller in _SITES:
        return _SITES[caller]
    import struct
    import shdis
    res = None
    try:
        if 'bin' not in _SITES:
            _SITES['bin'] = (open('1ST_READ.BIN', 'rb').read(), int(open('BASE').read().strip(), 16) & 0x1FFFFFFF, _functions())
        B, base, F = _SITES['bin']
        addr = {a & 0x1FFFFFFF: n for n, (a, s) in F.items()}
        a0, size = F[caller]
        a0 &= 0x1FFFFFFF
        # the instructions control can reach from the entry: a constant between two pieces of code (float constants loaded through
        # a register: Zombie Revenge FUN_0c02585c, 3D23D70A read as `mov.l @(..,pc),r7`) is data, not a write. A function that
        # jumps through a register inside itself (a table) is read straight through instead: its targets are not known here
        reach, todo, table = set(), [a0], False
        while todo:
            x = todo.pop()
            while a0 <= x < a0 + size and x not in reach:
                reach.add(x)
                dd = shdis.decode(struct.unpack_from('<H', B, x - base)[0], x)
                mn = dd[0].split()[0] if dd[0] else ''
                tg = (dd[3] & 0x1FFFFFFF) if dd[3] is not None else None
                if mn in ('bt', 'bf', 'bt/s', 'bf/s'):
                    if tg is not None:
                        todo.append(tg)
                elif mn in ('bra', 'rts', 'rte', 'jmp', 'braf'):
                    reach.add(x + 2)
                    if mn == 'bra' and tg is not None:
                        todo.append(tg)
                    if mn in ('jmp', 'braf') and x + 4 < a0 + size:
                        table = True
                    break
                x += 2
        if table:
            reach = None
        out, wr, regval, a = [], set(), {}, a0
        pool = set()                # pool words the code so far loads from: data, not instructions (Virtua Tennis evSkidMarkSpawn:
                                    # a pool word that decodes as `mov.l @(32,r13),r6` counted as a write of r6 before set_event)

        def note(w, text):
            # the register written is the last operand when it is a plain register (`mova @(..,pc),r0` writes r0 whatever its bits
            # say; a store's last operand is memory)
            m = re.search(r'(?:^\S+\s+|,)(r\d+)\s*$', text.split(';')[0].strip())
            if m and text.startswith(_WRITES):
                wr.add(m.group(1))
        while a < a0 + size:
            if a in pool or (reach is not None and a not in reach):
                a += 2
                continue
            w = struct.unpack_from('<H', B, a - base)[0]
            d = shdis.decode(w, a)
            if d[1] is not None and ',pc)' in d[0]:
                pa = d[1] & 0x1FFFFFFF
                pool.update((pa, pa + 2) if d[0].startswith(('mov.l', 'mova')) else (pa,))
            text, n, tgt, call = d[0], (w >> 8) & 15, None, False
            if text.startswith(('bsr', 'bra')):
                call = text.startswith('bsr') or (d[3] is not None and (d[3] & 0x1FFFFFFF) in addr and not a0 <= (d[3] & 0x1FFFFFFF) < a0 + size)
                if d[3] is not None and (d[3] & 0x1FFFFFFF) != a0:
                    tgt = addr.get(d[3] & 0x1FFFFFFF)
            elif text.startswith(('jsr', 'jmp')):
                call = True
                v = regval.get(n)
                tgt = addr.get(v & 0x1FFFFFFF) if v is not None else None
            if text.startswith('mov.l @(') and ',pc)' in text and d[1] is not None and 0 <= (d[1] & 0x1FFFFFFF) - base <= len(B) - 4:
                regval[n] = struct.unpack_from('<I', B, (d[1] & 0x1FFFFFFF) - base)[0]
            elif not text.startswith(_NOT_A_WRITE):
                regval.pop(n, None)
            if call:
                w2 = struct.unpack_from('<H', B, a + 2 - base)[0]
                note(w2, shdis.decode(w2, a + 2)[0])
                if text.startswith(('jsr', 'jmp')):
                    wr.discard('r%d' % n)                 # the register the call goes through holds the callee's address, not an argument
                if tgt:
                    out.append((tgt, frozenset(wr)))
                wr.clear()
                a += 4
                continue
            note(w, text)
            a += 2
        res = out
    except Exception:
        res = None
    _SITES[caller] = res
    return res


def _entry_reads(name):
    """The argument registers the original code of name reads at its entry (the generator's gen_core.entry_reads), None when not known."""
    try:
        import os
        g = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '5-generated', 'gen_equiv')
        if g not in sys.path:
            sys.path.insert(0, g)
        import gen_core
        return gen_core.entry_reads_sure(name)      # what the code certainly reads: a call through a pointer inside it proves nothing
    except Exception:
        return None


def scan_lost(srcdir='src', sites_of=None, reads_of=None):
    """[(caller, file, callee, the integer registers lost)]: a function whose file prototypes a callee with fewer integer registers
    than it takes (scan_regs), which calls it directly, where the original writes the register before every call of that callee in the
    caller and the callee's C uses the parameter. sites_of(caller) is `sites` (given by the test, which has no game data). [] when the
    repo has no executable to read.
    A callee with no C in src/ (library code kept as the original: Zombie Revenge FUN_0c0161aa called syRtcDateToCount() where the
    original passes two stack addresses, and froze on the console) has no definition to count: there the registers are the ones its
    original code reads at its entry, reads_of(callee) (gen_core.entry_reads; given by the test), and a prototype that leaves one out
    which the original writes before every call is reported the same way."""
    if reads_of is None and sites_of is None:
        reads_of = _entry_reads
    if sites_of is None:
        import os
        if not (os.path.exists('1ST_READ.BIN') and os.path.exists('BASE') and os.path.exists('functions.txt')):
            return []
        sites_of = sites
    out, texts, spans, bodies = [], {}, {}, {}

    def load(f):
        if f not in texts:
            texts[f] = re.sub(r'/\*.*?\*/', lambda m: ' ' * len(m.group(0)), open(f, errors='replace').read(), flags=re.S)
            ms = list(DEFN.finditer(texts[f]))
            spans[f] = [(m.group(1), m.group(2), m.end(), ms[i + 1].start() if i + 1 < len(ms) else len(texts[f])) for i, m in enumerate(ms)]
            for n, plist, b, e in spans[f]:
                bodies[n] = (plist, texts[f][b:e])
    for callee, f, calls, (pi, pf), (ri, rfl), rf in sorted(scan_regs(srcdir)):
        if pi >= ri:
            continue
        load(f)
        load(rf)
        used = range(pi, ri)
        if callee in bodies:                             # the parameters the callee's C uses, by position among the integer ones
            names = [x.strip().split()[-1].lstrip('*') for x in bodies[callee][0].split(',')
                     if x.strip() and x.strip() != 'void' and not re.match(r'(?:const\s+)?(?:Stk\d+\b|(?:float|double)\b(?!\s*\*))', x.strip())]
            used = [i for i in used if i < len(names) and re.search(r'(?<![\w.])%s\b' % re.escape(names[i]), bodies[callee][1])]
            if reads_of is not None:                     # and that the original reads: a definition can declare more than the code
                rd = reads_of(callee)                    # takes (Crazy Taxi SetTotalRecords: four parameters, its code loads r4 itself)
                if rd is not None:
                    used = [i for i in used if 'r%d' % (4 + i) in rd]
        elif reads_of is not None:                       # no C for the callee: only what its original reads at its entry (Virtua Tennis
            rd = reads_of(callee)                        # set_event: one file prototyped it with three, its code reads two)
            if rd is not None:
                used = [i for i in used if 'r%d' % (4 + i) in rd]
        if not used:
            continue
        call = re.compile(r'(?<![\w.])%s\(' % re.escape(callee))
        for caller, plist, b, e in spans[f]:
            if caller == callee or not call.search(texts[f][b:e]):
                continue
            st = sites_of(caller)
            wrs = [w for c, w in (st or []) if c == callee]
            lost = ['r%d' % (4 + i) for i in used if wrs and all('r%d' % (4 + i) in w for w in wrs)]
            if lost:
                out.append((caller, f, callee, lost))
    if reads_of is not None:
        files = [f for f in sorted(glob.glob(srcdir + '/*.c')) if not f.split('/')[-1].startswith(('gen_tmp', 'zz_'))]
        for f in files:
            load(f)
        seen = set((c, f, n) for c, f, n, _ in out)
        rds = {}
        for f in files:
            for m in PROTO.finditer(texts[f]):
                callee, plist = m.group(1), m.group(2)
                if callee in bodies or '...' in plist or not plist.strip():
                    continue
                pi = registers(plist)[0]
                if pi >= 4:
                    continue
                call = re.compile(r'(?<![\w.])%s\(' % re.escape(callee))
                for caller, _pl, b, e in spans[f]:
                    if (caller, f, callee) in seen or not call.search(texts[f][b:e]):
                        continue
                    wrs = [w for c, w in (sites_of(caller) or []) if c == callee]
                    cand = [i for i in range(pi, 4) if wrs and all('r%d' % (4 + i) in w for w in wrs)]
                    if not cand:
                        continue
                    if callee not in rds:                # the callee's code is read only now: most prototypes never get here
                        rds[callee] = reads_of(callee)
                    lost = ['r%d' % (4 + i) for i in cand if rds[callee] and 'r%d' % (4 + i) in rds[callee]]
                    if lost:
                        out.append((caller, f, callee, lost))

    return out


def uncovered(plist, reads):
    """The registers of `reads` ('r4'-'r7', 'fr4'-'fr11') that a parameter list does not take: r(4+k) is the k-th integer parameter, fr(4+k) the k-th float"""
    ni, nf = registers(plist)
    float_ = sorted((r for r in reads if r.startswith('fr') and int(r[2:]) >= 4 + nf), key=lambda r: int(r[2:]))
    int_ = sorted((r for r in reads if not r.startswith('fr') and int(r[1:]) >= 4 + ni), key=lambda r: int(r[1:]))
    return int_ + float_


def scan_reads(srcdir='src', reads_of=None):
    """[(function, file, registers the original reads that the definition does not take, its parameter list)]; reads_of(name) is the set
    gen_core.entry_reads gives (None: not known, the function is left alone)"""
    if reads_of is None:
        import gen_core
        reads_of = gen_core.entry_reads
    out = []
    for f in sorted(glob.glob(srcdir + '/*.c')):
        for m in DEFN.finditer(open(f, errors='replace').read()):
            if '...' in m.group(2):
                continue
            reads = reads_of(m.group(1))
            if reads is None:
                continue
            miss = uncovered(m.group(2), reads)
            if miss:
                out.append((m.group(1), f, miss, m.group(2).strip()))
    return out


def main(argv):
    if '--reads' in argv:
        gaps = scan_reads()
        for n, f, miss, plist in sorted(gaps):
            print('%s: %s declares (%s), the original also reads %s' % (n, f, plist or 'void', ', '.join(miss)))
        print('protocheck: %d definition(s) declare fewer registers than the original reads' % len(gaps))
        if gaps:
            sys.exit(1)
        return
    if '--lost' in argv:
        lost = scan_lost()
        for caller, f, callee, regs in sorted(lost):
            print('%s: %s calls %s without %s, which the original sets before the call' % (caller, f, callee, ', '.join(regs)))
        print('protocheck: %d call(s) leave out an argument the original sets' % len(lost))
        if lost:
            sys.exit(1)
        return
    short = scan()
    for n, f, calls, pw, dw in sorted(short):
        print('%s: %s passes %d stack word(s) in %d call(s), the definition takes %d' % (n, f, pw, calls, dw))
    print('protocheck: %d (file, function) pair(s) call with fewer stack words than the definition takes' % len(short))
    regs = scan_regs()
    for n, f, calls, (pi, pf), (ri, rfl), rf in sorted(regs):
        print('%s: %s passes %d integer and %d float register(s) in %d call(s), %s takes %d and %d' % (n, f, pi, pf, calls, rf, ri, rfl))
    print('protocheck: %d (file, function) pair(s) call with fewer argument registers than the callee takes' % len(regs))
    if short or regs:
        sys.exit(1)


if __name__ == '__main__':
    main(sys.argv)
