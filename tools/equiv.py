#!/usr/bin/env python3
"""Behaviour check: does a C file's code do what the original does? Run in the repo.

    python3 tools/equiv.py src/<file>.c [function ...]

Compiles the file with the SDK's shc (same flags as build.sh), links it on its own at a scratch
address with every outside name it uses defined at the game's address (functions.txt,
globals.txt, symbols.txt), and runs each of its functions in tools/sh4sim.py twice per case:
the original bytes at the original address, then the compiled C. The two runs must agree on
every call out (target and arguments, in order), the memory they leave behind (the final value at
every address either one wrote), the return register and the final SR without its M, Q, S, T flags (a case may set the starting SR: "sr"). The cases
are tests/<file>/<function>.json: a list of sh4sim cases without exe/entry/end (filled in
here), or {"dev": [...], "holdout": [...]} (holdout: cases written after the C passed the dev ones,
so they were not fitted to); a case may name a RAM dump ("dump": path relative to the repo) and
say what it covers ("about"). A function with cases
that all agree is Equivalent; the result goes to tests/equivalent.txt (progress.py reads it) and
its evidence to docs/equivalent.md (one entry per function).
A function that byte-matches is Equivalent by definition and needs no cases.

The compiler's own runtime helpers (names starting with `_`: _divls, _quick_odd_mvn...) are not calls out:
they run, in the original and in the C, so a division the original does through _divls and the C inlines
agree, and a struct copy is compared by what it writes.
Calls out are compared by target and by the arguments the callee takes, read from the prototype the C
file declares for it, raised to the callee's own definition in src/ when that takes more (an int or pointer
takes the next of r4-r7, a float the next of fr4-fr11, past the fourth int the stack): registers a
call merely leaves over are not arguments. A callee with no prototype in the file is compared on all of
r4-r7 and fr4-fr11, as before. An argument that points into the simulator's stack is compared as "the
stack": a local's address depends on the frame layout, which is the compiler's business.
A call in a case's "calls" list may also carry "poke_arg": {"r7": "<hex bytes>"}: those bytes are written at
the address the register holds when the call is made, as if the callee had filled that output slot (a loop
that reads it can then run more than once).
    python3 tools/equiv.py -q src/<file>.c    prints only what is not EQUIVALENT, and a count.

Every pass is remembered in state/proof-cache.json under a key made of everything the proof depends on: the
compiled code, the function's place in it, its cases (and any RAM dump they load), the original's bytes, the
prototypes, returns and casts the comparison reads, and the source of this file and sh4sim.py. A function whose
key is already there passes without running its cases again: a rename or a comment changes no byte of the
code, so it costs one compile. --fresh runs every case anyway (and remembers the passes again).
A change to this file that cannot alter some functions' results (one that only acts on calls through a pointer) need not
void their passes: save the checker as it was in state/proof-key-equiv.py, and a function with no call through a pointer
keeps hashing that file, so its key and its pass are unchanged. Functions it can affect hash this file and run again.

Needs Docker and the dc-tools image, as build.sh does (SDK_PATH from .env).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '.')))
import toolpath  # noqa: E402,F401
import glob
import hashlib
import json
import os
import re
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sh4sim

SCRATCH = 0x0E100000        # where the compiled C is linked and run (no game code there)
FLAGS = ('-cpu=sh4 -endian=little -fpu=single -division=cpu -round=nearest -pic=0 -macsave=0 '
         '-optimize=1 -size -string=const -section=p=P,c=C,d=D,b=B -include=src')


def names():
    out = {}
    for path, a_col, n_col in (('functions.txt', 1, 3), ('globals.txt', 0, 1), ('symbols.txt', 0, 1)):
        if not os.path.exists(path):
            continue
        for line in open(path, errors='replace'):
            p = line.split()
            if line.startswith('#') or len(p) <= n_col or (path == 'functions.txt' and p[0] != 'F'):
                continue
            try:
                out.setdefault(p[n_col], int(p[a_col], 16))
            except ValueError:
                pass
    return out


def functions():
    out = {}
    for line in open('functions.txt'):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            out[p[3]] = (int(p[1], 16), int(p[2]))
    return out


def sdk_env():
    env = dict(os.environ)
    if not env.get('SDK_PATH') and os.path.exists('.env'):
        for line in open('.env'):
            m = re.match(r'\s*SDK_PATH="?([^"\n]+)"?', line)
            if m:
                env['SDK_PATH'] = m.group(1)
    sdk = env.get('SDK_PATH') or sys.exit('[ERROR] no SDK_PATH (.env or environment)')
    for root, _, files in os.walk(sdk):
        if any(f.lower() == 'shc.exe' for f in files):
            return os.path.abspath(sdk), os.path.relpath(root, sdk)
    sys.exit('[ERROR] no shc.exe under %s' % sdk)


def compile_link(cfile, defines):
    """shc + lnk + elf2bin in the dc-tools container: (bytes, {symbol: address})."""
    sdk, rel = sdk_env()
    stem = os.path.splitext(os.path.basename(cfile))[0]
    os.makedirs('build/equiv', exist_ok=True)
    tw = 'Z:' + ('/sdk/' + rel).replace('/', '\\')
    me = '%s.%d' % (stem, os.getpid())      # the compiler's temp folder and the logs are per run: compiles may run side by side
    sub = ['elf', 'start P(%08X)' % SCRATCH, 'output build\\equiv\\%s.elf' % stem,
           'print build\\equiv\\%s.map' % stem, 'input build\\equiv\\%s.obj' % stem]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(defines.items())] + ['exit']
    open('build/equiv/%s.sub' % stem, 'w').write('\n'.join(sub) + '\n')
    inline = '#pragma inline_asm' in open(cfile, errors='replace').read()      # C with assembly text: shc to assembly source, then asmsh
    first = ('SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\%s" wibo "/sdk/%s/shc.exe" "src\\%s.c" '
             '-object="build\\equiv\\%s.obj" %s > build/equiv/%s.shc.log 2>&1 || { cat build/equiv/%s.shc.log; exit 1; }; '
             % (me, rel, stem, stem, FLAGS, me, me))
    if inline:
        first = ('SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\%s" wibo "/sdk/%s/shc.exe" "src\\%s.c" -code=asm '
                 '-object="build\\equiv\\%s.s" %s > build/equiv/%s.shc.log 2>&1 || { cat build/equiv/%s.shc.log; exit 1; }; '
                 'wibo "/sdk/%s/asmsh.exe" "build\\equiv\\%s.s" -object="build\\equiv\\%s.obj" -cpu=sh4 -endian=little '
                 '> build/equiv/%s.asm.log 2>&1 || { cat build/equiv/%s.asm.log; exit 1; }; '
                 % (me, rel, stem, stem, FLAGS, me, me, rel, stem, stem, me, me))
    steps = ('set -e; mkdir -p build/tmp/%s; ' % me + first +
             'wibo "/sdk/%s/lnk.exe" -subcommand="build\\equiv\\%s.sub" > build/equiv/%s.lnk.log 2>&1 || true; '
             'wibo "/sdk/%s/elf2bin.exe" -s %08X "build\\equiv\\%s.elf" "build\\equiv\\%s.bin" > build/equiv/%s.elf2bin.log 2>&1 || true; '
             'rm -rf build/tmp/%s'
             % (rel, stem, me, rel, SCRATCH, stem, stem, me, me))
    r = subprocess.run(['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':/app', '-w', '/app',
                        '-e', 'TW=' + tw, os.environ.get('DC_TOOLS_IMAGE', 'dc-tools'), 'bash', '-c', steps],
                       stdin=subprocess.DEVNULL, capture_output=True, text=True)
    if r.returncode:
        sys.exit('[ERROR] compile failed:\n' + r.stdout + r.stderr)
    if not os.path.exists('build/equiv/%s.lnk.log' % me):      # the container stopped before the link: say what it printed
        return None, ['(no link: %s)' % (r.stdout + r.stderr).strip()[-200:]]
    log = open('build/equiv/%s.lnk.log' % me, errors='replace').read()
    for k in ('shc', 'asm', 'lnk', 'elf2bin'):
        if k != 'lnk' and os.path.exists('build/equiv/%s.%s.log' % (me, k)):
            os.remove('build/equiv/%s.%s.log' % (me, k))
    os.remove('build/equiv/%s.lnk.log' % me)
    undefined = re.findall(r'UNDEFINED EXTERNAL SYMBOL\((?:\w+\.)?_?([^)\s]+)\)', log) or \
        re.findall(r'\(E\) UNDEFINED EXTERNAL SYMBOL\s*"?(\w+)', log)
    if undefined or not os.path.exists('build/equiv/%s.bin' % stem):
        return None, undefined or ['(link failed: %s)' % log.strip()[-200:]]
    syms = {}
    for m in re.finditer(r'(_\w+)\s*\n?\s*H\'([0-9A-Fa-f]{8})', open('build/equiv/%s.map' % stem, errors='replace').read()):
        syms.setdefault(m.group(1), int(m.group(2), 16))
    return open('build/equiv/%s.bin' % stem, 'rb').read(), syms


def outside_names(cfile, table):
    """Every identifier the file uses that the game names: the linker gets it at the game's address,
    unless the file defines it (a function body or a global with a definition here)."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    defined = set(re.findall(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{', text, flags=re.M))
    defined |= set(re.findall(r'^(?!extern)[A-Za-z_][\w \t\*]*?\b(\w+)\s*(?:\[[^\]]*\])?\s*=', text, flags=re.M))
    used = set(re.findall(r'\b[A-Za-z_]\w*\b', text))
    return {'_' + n: table[n] for n in used if n in table and n not in defined}, defined


def returns(cfile):
    """The return register of each function the file defines, from its prototype: fr0 for float
    and double, nothing for void, r0 otherwise (a leftover value in the other is not a result)."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    out = {}
    for m in re.finditer(r'^((?:static\s+)?[A-Za-z_][\w \t\*]*?)\b(\w+)\s*\([^;{]*\)\s*\{', text, flags=re.M):
        t = m.group(1).replace('static', '').strip()
        out[m.group(2)] = [] if t == 'void' else ['fr0'] if t in ('float', 'double') else ['r0']
    return out


def struct_words(text):
    """{typedef name: its size in 4-byte words} for the `typedef struct { ... } Name;` in a file's text. A structure passed by value
    goes on the stack (SHC), so its words are stack arguments, not a register. Field sizes are the SH ones (char 1, short 2,
    int / float / pointer 4, double 8), each field aligned to its own size, the structure rounded up to its largest alignment
    (at most 4) and then to whole words: three shorts are 6 bytes, 2 words. A field of an earlier typedef takes that one's size."""
    prim = {'char': 1, 'short': 2, 'int': 4, 'long': 4, 'float': 4, 'double': 8, 'unsigned': 4, 'signed': 4, 'void': 4}
    out, sizes = {}, {}
    for m in re.finditer(r'typedef\s+struct\s*\w*\s*\{([^{}]*)\}\s*(\w+)\s*;', text):
        off, al = 0, 1
        for decl in m.group(1).split(';'):
            d = decl.strip()
            if not d:
                continue
            fm = re.match(r'^((?:(?:unsigned|signed|const|volatile|struct)\s+)*)([A-Za-z_]\w*)(.*)$', d, re.S)
            if not fm:
                continue
            mods, ty, rest = fm.group(1), fm.group(2), fm.group(3)
            if ty not in prim and ty not in sizes and ('unsigned' in mods or 'signed' in mods) and not rest.strip().lstrip('*').strip():
                ty, rest = 'int', fm.group(2) + rest              # `unsigned x;`: an int named x
            base, ba = sizes[ty] if ty in sizes else ((prim[ty], min(prim[ty], 4)) if ty in prim else (4, 4))    # an unknown type: a word
            for v in rest.split(','):
                if not v.strip():
                    continue
                sz, a = (4, 4) if '*' in v else (base, ba)
                k = re.search(r'\[(\d+)\]', v)
                n = int(k.group(1)) if k else 1
                off = (off + a - 1) // a * a + sz * n
                al = max(al, a)
        size = (off + al - 1) // al * al
        sizes[m.group(2)] = (size, al)
        out[m.group(2)] = (size + 3) // 4
    return out


def param_kinds(params, structs):
    """(integer and pointer arguments, float arguments, words on the stack) of a parameter list: the integers past the fourth and
    every structure passed by value go on the stack, in order."""
    ni = nf = sw = 0
    for p in params.split(','):
        p = p.strip()
        if not p or p == 'void':
            continue
        ty = p.split()[0] if p.split()[0] not in ('const', 'struct') else p.split()[1]
        if '*' not in p and ty in structs:
            sw += structs[ty]
        elif re.search(r'\b(float|double)\b', p) and '*' not in p:
            nf += 1
        else:
            ni += 1
    return ni, nf, sw + max(0, ni - 4)


def prototypes(cfile):
    """The argument registers each function this file declares or defines takes, from its prototype:
    {name: (ints and pointers, floats)}; a name starting with an underscore is a runtime helper: (0, 0)."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    structs = struct_words(text)
    out = {}
    for m in re.finditer(r'^(?:extern\s+|static\s+)?[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(([^;{)]*)\)\s*[;{]', text, flags=re.M):
        name, params = m.group(1), m.group(2).strip()
        if params == '' and not re.search(r'\bstatic\b', m.group(0)):
            continue                        # declared with (): the arguments are the call site's (a cast gives them), the arity is not known here
        if '...' in params:                # variadic: every argument goes on the stack, the registers are not arguments
            out[name] = (0, 0, True)
            continue
        ni, nf, sw = param_kinds(params, structs)
        out[name] = (min(ni, 4), min(nf, 8))
    return out



def code_addresses(exe, base, start, size):
    """The addresses of the instructions of a function: its listed bytes without the literal pools its loads point to, the
    padding nops and the data after its last return (and that return's delay slot)."""
    import shdis
    word = lambda pc: struct.unpack_from('<H', exe, pc - base)[0]
    pools = set()
    for pc in range(start, start + size, 2):
        _, pool, psize, _ = shdis.decode(word(pc), pc)
        if pool is not None:
            pools.update(range(pool, pool + psize, 2))
    addrs = [pc for pc in range(start, start + size, 2) if pc not in pools]
    last = -1
    for i, pc in enumerate(addrs):
        if shdis.decode(word(pc), pc)[0].startswith(('rts', 'jmp', 'bra', 'rte')):
            last = i
    addrs = addrs[:last + 2] if last >= 0 else addrs
    reach = shdis.reachable(exe, base, start, start + size)      # data between the code (tables after a branch) is not code
    return [a for a in addrs if a in reach]


def final(writes):
    """Memory after the writes, byte by byte: {address: byte}."""
    mem = {}
    for addr, size, value in writes:
        a, v = int(addr, 16), int(value, 16)
        for i in range(size):
            mem['%08X' % (a + i)] = '%02X' % ((v >> (8 * i)) & 0xFF)
    return mem


SHOW = 200                       # characters of each side shown for a difference; --full shows 6000


def stackish(v):
    if v == '*':
        return v
    return 'STACK' if 0x0DFF0000 <= int(v, 16) < 0x0E000000 else v


STACKN = {}      # {address: integer arguments passed on the stack (past the fourth)}, from the file's prototypes


def stack_args(cfile):
    """{name: words passed on the stack (integer arguments past the fourth, structures by value), at most 4} for the functions this
    file declares."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    structs = struct_words(text)
    out = {}
    for m in re.finditer(r'^(?:extern\s+|static\s+)?[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(([^;{)]*)\)\s*[;{]', text, flags=re.M):
        if '...' in m.group(2):
            continue
        out[m.group(1)] = min(param_kinds(m.group(2), structs)[2], 4)
    return out


def definitions():
    """{name: (integer and pointer parameters, float parameters, words on the stack)} of every function defined in src/: what the
    callee as built reads. The integer count is not capped (compared_arity caps it)."""
    out = {}
    for path in sorted(glob.glob(os.path.join('src', '*.c'))):
        text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(path, errors='replace').read(), flags=re.S)
        structs = struct_words(text)
        for m in re.finditer(r'^(?:static\s+)?[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(([^;{)]*)\)\s*\{', text, flags=re.M):
            if '...' in m.group(2) or not m.group(2).strip():
                continue
            out.setdefault(m.group(1), param_kinds(m.group(2), structs))
    return out


def compared_arity(cfile, table):
    """What each call out is compared on: ({address: (integer, float) register arguments}, {address: arguments on the stack}).
    The caller's file's prototype, raised to the callee's own definition in src/: a call that passes fewer than the callee takes
    fails, wherever the caller's file declares fewer (the build links every caller against that one definition)."""
    arity = {table[n]: a for n, a in prototypes(cfile).items() if n in table}
    stackn = {table[n]: k for n, k in stack_args(cfile).items() if n in table and k}
    for n, (ni, nf, sw) in definitions().items():
        a = arity.get(table.get(n))
        if a is None or len(a) > 2:
            continue                          # no prototype here (every register is compared) or a variadic one
        arity[table[n]] = (max(a[0], min(ni, 4)), max(a[1], min(nf, 8)))
        if sw:
            stackn[table[n]] = max(stackn.get(table[n], 0), min(sw, 4))
    return arity, stackn


def callview(to, r, f, arity, stack=None, chg=None, ind=None, fchg=None, indmap=None, stackw=None):
    """What a call must agree on: its target and the registers its callee takes (arity: {address: (ints,
    floats)}; none known: all of them), a stack address as "STACK"."""
    to = '%08X' % (0x0C000000 | (int(to, 16) & 0x1FFFFFFF)) if 0x0C000000 <= (int(to, 16) & 0x1FFFFFFF) < 0x0D000000 else to   # the cached, uncached and plain addresses of the same RAM word
    a = arity.get(int(to, 16))
    if a is None and indmap and int(to, 16) in indmap:      # a call through a literal address or a cast name: its own cast says what it passes
        r, f = r[:indmap[int(to, 16)][0]], f[:indmap[int(to, 16)][1]]
    elif a is None and ind is not None:      # a call through a pointer: the C's cast says how many integer arguments it passes, the rest are leftovers,
        n = 0                                # except the run of registers from r4 that this side set for the call: a cast that names fewer must not hide them
        while chg and n < len(chg) and chg[n]:
            n += 1
        r = r[:max(ind, n)]
    if chg:                                  # only the registers the function set (since its last call, which leaves r4-r7 undefined) are
        r = [v if ch else '*' for v, ch in zip(r, chg)]       # arguments; the rest are leftovers the compiled code never relies on
        if fchg:
            f = [v if ch else '*' for v, ch in zip(f, fchg)]
    if a is not None:
        r, f = r[:a[0]], f[:a[1]]
        if len(a) > 2:                       # variadic: the registers are leftovers, its first argument is on top of the stack
            return (to, [stackish(stack)], [])
    extra = [stackish(v) for v in (stackw or [])[:STACKN.get(int(to, 16), 0)]]     # arguments past the fourth, on the stack
    return (to, [stackish(v) for v in r] + extra, f)


def indirect_targets(cfile, fn, table=None):
    """{address: integer arguments} for the calls the C of one function makes through a cast on a literal address
    ((int (*)(int))(0xAC01193A)(x) is {0x0C01193A: 1}), or on a function's name (one declared with () because its call sites
    pass different arguments); the most when one address is called with different counts."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    m = re.search(r'\b%s\s*\([^;{)]*\)\s*\{' % re.escape(fn), text)
    if not m:
        return {}
    depth, i = 1, m.end()
    while i < len(text) and depth:
        depth += {'{': 1, '}': -1}.get(text[i], 0)
        i += 1
    out = {}
    for c in re.finditer(r'\(\s*[\w\s\*]+\(\*\)\s*\(([^)]*)\)\s*\)\s*\(\s*(?:0[xX]([0-9A-Fa-f]+)|([A-Za-z_]\w*))\s*\)', text[m.end():i]):
        ps = c.group(1).strip()
        n = 0 if ps in ('', 'void') else len([q for q in ps.split(',') if not re.search(r'\b(float|double)\b', q) or '*' in q])
        nf = 0 if ps in ('', 'void') else len(ps.split(',')) - n
        if c.group(3) is not None:
            if not table or c.group(3) not in table:
                continue                     # a pointer variable: not a known address
            a = table[c.group(3)]
        else:
            a = int(c.group(2), 16)
        a = 0x0C000000 | (a & 0x1FFFFFFF) if 0x0C000000 <= (a & 0x1FFFFFFF) < 0x0D000000 else a
        out[a] = (max(out.get(a, (0, 0))[0], n), max(out.get(a, (0, 0))[1], nf))
    return out


def indirect_arity(cfile, fn):
    """How many integer arguments the C of one function passes in calls through a pointer, from the function-pointer casts in its body
    ((int (*)(int, int))(p)(a, b) is 2): the most of them, None when it has no such call."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    m = re.search(r'\b%s\s*\([^;{)]*\)\s*\{' % re.escape(fn), text)
    if not m:
        return None
    depth, i = 1, m.end()
    while i < len(text) and depth:
        depth += {'{': 1, '}': -1}.get(text[i], 0)
        i += 1
    counts = []
    for c in re.finditer(r'\(\s*[\w\s\*]+\(\*\)\s*\(([^)]*)\)\s*\)', text[m.end():i]):
        ps = c.group(1).strip()
        counts.append(0 if ps in ('', 'void') else len([q for q in ps.split(',') if not re.search(r'\b(float|double)\b', q) or '*' in q]))
    return max(counts) if counts else None


def same(a, b, outs, back, arity=None, ind=None, indmap=None):
    """The parts of two runs that must agree, and the first difference. back maps an address in
    the compiled C (one of its own functions or data) to the game's address of the same name."""
    arity = arity or {}
    fix = lambda h: '%08X' % back.get(int(h, 16), int(h, 16))
    for k in ('error', 'out', 'calls', 'writes', 'devices', 'sr', 'seq_used', 'xf'):
        x, y = a.get(k), b.get(k)
        if k == 'sr' and x and y:          # the state SR keeps (interrupt mask...), not the M, Q, S, T flags
            x, y = '%08X' % (int(x, 16) & 0xFFFFFCFC), '%08X' % (int(y, 16) & 0xFFFFFCFC)
        if k == 'out':
            x, y = [x[r] for r in outs], [y[r] for r in outs]
        if k == 'calls':
            xs = x
            x = [callview(c['to'], c['r4-r7'], c['fr4-fr11'], arity, c.get('stack'), c.get('chg'), ind, c.get('fchg'), indmap, c.get('stackw')) for c in xs]
            y = [callview(fix(c['to']), [fix(v) for v in c['r4-r7']], c['fr4-fr11'], arity, fix(c['stack']) if c.get('stack') else None,
                          xs[i].get('chg') if i < len(xs) else None, ind, xs[i].get('fchg') if i < len(xs) else None, indmap,
                          [fix(v) for v in c.get('stackw', [])]) for i, c in enumerate(y)]
        if k == 'writes':                 # the final value at each address: the order of plain stores
            x = final(x)                 # is the compiler's business (devices keep their order)
            y = final([[fix(w[0])] + w[1:] for w in y])
        if x != y:
            return False, '%s: original %s / C %s' % (k, json.dumps(x)[:SHOW], json.dumps(y)[:SHOW])
    return True, ''


PROOF_CACHE = os.path.join('state', 'proof-cache.json')


PROOF_KEY_LEGACY = os.path.join('state', 'proof-key-equiv.py')


def proof_key(code, offset, case_path, sets, orig_bytes, compared, unaffected=False):
    """Everything a pass depends on, hashed: see the module notes. `unaffected`: a later change to this file cannot alter this
    function's result (it only acts on calls through a pointer, and the function has none), so its key keeps hashing the
    checker source saved in state/proof-key-equiv.py, when there is one, and its earlier passes still count."""
    h = hashlib.sha1()
    for f in (PROOF_KEY_LEGACY if unaffected and os.path.exists(PROOF_KEY_LEGACY) else os.path.abspath(__file__), sh4sim.__file__):
        h.update(open(f, 'rb').read())
    h.update(code)
    h.update(str(offset).encode())
    h.update(open(case_path, 'rb').read())
    for d in sorted({c['dump'] for k in ('dev', 'holdout') for c in sets.get(k, []) if c.get('dump')}):
        h.update(open(d, 'rb').read() if os.path.exists(d) else b'missing ' + d.encode())
    h.update(orig_bytes)
    h.update(repr(compared).encode())
    return h.hexdigest()


def load_cache():
    try:
        return json.load(open(PROOF_CACHE))
    except (OSError, ValueError):
        return {}


def save_cache(cache):
    os.makedirs('state', exist_ok=True)
    tmp = PROOF_CACHE + '.%d' % os.getpid()
    json.dump(cache, open(tmp, 'w'), indent=0, sort_keys=True)
    os.replace(tmp, PROOF_CACHE)


def main(argv):
    global SHOW
    quiet = '-q' in argv
    fresh = '--fresh' in argv
    if '--full' in argv: SHOW = int(os.environ.get('EQUIV_SHOW', '6000'))
    argv = [a for a in argv if a not in ('-q', '--full', '--fresh')]
    if len(argv) < 2:
        sys.exit(__doc__)
    cfile = argv[1]
    stem = os.path.splitext(os.path.basename(cfile))[0]
    table, funcs = names(), functions()
    defines, defined = outside_names(cfile, table)
    # the compiler's runtime helpers (_divls, _modls, _quick_evn_mvn...) are called by code it generates, not by name in
    # the source: every one the game names goes to the linker too
    defines.update({'_' + n: a for n, a in table.items() if n.startswith('_') and n not in defined})
    code, syms = compile_link(cfile, defines)
    if code is None:
        sys.exit('[ERROR] link: undefined %s (name them in functions.txt / globals.txt / symbols.txt)' % ', '.join(syms))
    want = argv[2:] or sorted(n for n in defined if n in funcs)
    base = int(open('BASE').read().strip(), 16)
    exe_bytes = open('1ST_READ.BIN', 'rb').read()
    rets = returns(cfile)
    back = {a: table[n[1:]] for n, a in syms.items() if n[1:] in table}    # the file's own names
    # a call into the compiled C that is not one of its game-named functions is the C's own helper
    # (a static the original inlined, not in the map): part of the C version, so it runs
    runtime_addrs = {a for n, a in table.items() if n.startswith('_')}
    helpers = lambda t: (SCRATCH <= t < SCRATCH + len(code) and t not in back) or t in runtime_addrs
    arity, stackn = compared_arity(cfile, table)
    STACKN.clear()
    STACKN.update(stackn)
    runtime = {a for n, a in table.items() if n.startswith('_')}        # the compiler's own helpers (_divls,
    arity.update({a: (0, 0) for a in runtime})                           # _quick_odd_mvn...): run, not compared
    helpers_orig = lambda t: t in runtime
    canon_ = lambda t: 0x0C000000 | (t & 0x1FFFFFFF) if 0x0C000000 <= (t & 0x1FFFFFFF) < 0x0D000000 else t
    argc = lambda t: arity[canon_(t)][0] if canon_(t) in arity else None      # output writes of a mocked call go only through its own arguments
    results, evidence = {}, {}
    cache = load_cache()
    compared_all = (sorted(arity.items()), sorted(STACKN.items()), sorted(back.items()))
    for fn in want:
        case_path = os.path.join('tests', stem, fn + '.json')
        if fn not in funcs or '_' + fn not in syms:
            results[fn] = (None, 'not in functions.txt or not compiled')
            continue
        if not os.path.exists(case_path):
            results[fn] = (None, 'no cases (%s)' % case_path)
            continue
        start, size = funcs[fn]
        c_at = syms['_' + fn]
        c_end = min([a for a in syms.values() if a > c_at] + [SCRATCH + len(code)])
        ok, why, n = True, '', 0
        seen = set()
        observed = False                              # did any case have something to compare (a write, a call, a device access, a changing SR)?
        srs = set()
        sets = json.load(open(case_path))
        if isinstance(sets, list):                   # a plain list: all development cases
            sets = {'dev': sets}
        counts = {k: len(v) for k, v in sets.items()}
        key = proof_key(code, c_at - SCRATCH, case_path, sets, exe_bytes[start - base:start + size - base],
                        (rets.get(fn), compared_all, indirect_arity(cfile, fn),
                         sorted(indirect_targets(cfile, fn, table).items())),
                        unaffected=indirect_arity(cfile, fn) is None)
        hit = None if fresh else cache.get(key)
        if hit:          # proven before on exactly this code, these cases and this checker
            results[fn] = (True, hit['why'])
            evidence[fn] = (start, size, cfile, counts,
                            [c.get('about', '') for k in ('dev', 'holdout') for c in sets.get(k, [])] + ['the cases run %s' % hit['covtext']])
            continue
        for case in [c for k in ('dev', 'holdout') for c in sets.get(k, [])]:
            case = dict(case, exe='1ST_READ.BIN', base='%08X' % base, entry='%08X' % start, end='%08X' % (start + size))
            orig = sh4sim.run(case, '.', deep=helpers_orig, argc=argc)
            seen.update(orig.get('covered', []))
            srs.add(orig.get('sr'))
            observed = observed or bool(orig.get('calls') or orig.get('writes') or orig.get('devices') or orig.get('seq_used') or orig.get('xf_changed')) or len(srs) > 1
            budget = max(case.get('steps', 2000000), 10 * orig.get('steps', 0) + 100000) if not orig['error'] else case.get('steps', 2000000)
            mine = sh4sim.run(dict(case, steps=budget), '.', code=(SCRATCH, code), entry=c_at, end=c_end, deep=helpers, argc=argc)      # compiled C may take more instructions than the original: its budget follows what the original used
            n += 1
            endless = case.get('endless') and str(orig['error']).startswith('more than') and str(mine['error']).startswith('more than')
            if endless:      # a function that never returns, cut at the step limit: the calls both sides made, in order, up to the shorter run
                k_ = min(len(orig['calls']), len(mine['calls']))
                orig = dict(orig, calls=orig['calls'][:k_], writes={}, error=None); mine = dict(mine, calls=mine['calls'][:k_], writes={}, error=None)
            good, diff = same(orig, mine, rets.get(fn, ['r0', 'fr0']), back, arity, indirect_arity(cfile, fn), indirect_targets(cfile, fn, table))
            faults = case.get('same_fault') and orig['error'] and orig['error'] == mine['error'] and not str(orig['error']).startswith('more than')
            if faults:       # code that cannot run as written (an unaligned constant address): both sides stop with the same fault, nothing else to compare
                good, diff = True, ''
            if orig['error'] and not endless and not faults:      # a case marked endless: a function that never returns by design (an error trap), both sides run to the step limit
                good, diff = False, 'the original stopped: ' + orig['error']
            if not good:
                ok, why = False, 'case %d: %s' % (n, diff)
                break
        total = code_addresses(exe_bytes, base, start, size)
        total = [a for a in total if a in seen or struct.unpack_from('<H', exe_bytes, a - base)[0] != 0x0009]       # padding nops no case runs are not code
        cov = len([a for a in total if a in seen])
        covtext = '%d of %d instructions' % (cov, len(total)) if total else ''
        results[fn] = (ok, why or '%d cases (%s), %s' % (n, ', '.join('%d %s' % (v, k) for k, v in counts.items()), covtext))
        # Nothing gates: a function that passes is Equivalent, whatever its cases covered. The coverage is evidence (docs/equivalent.md) and the
        # total over all of them is the quality figure the status and the badge show.
        if ok and total and len(total) > 6 and not observed and not rets.get(fn, ['r0']):     # a void C and an original that does nothing observable: nothing was compared
            covtext = '0 of %d instructions (nothing compared: no case showed a write, a call, a device access or a change of SR, and the C returns nothing)' % len(total)
            results[fn] = (True, '%d cases (%s), %s' % (n, ', '.join('%d %s' % (v, k) for k, v in counts.items()), covtext))
        if ok:
            evidence[fn] = (start, size, cfile, counts,
                            [c.get('about', '') for k in ('dev', 'holdout') for c in sets.get(k, [])] + ['the cases run %s' % covtext])
            cache[key] = {'fn': fn, 'why': results[fn][1], 'covtext': covtext}
    if any(ok for ok, _ in results.values()) and not stem.startswith('zz_'):
        fresh_cache = load_cache()          # another run may have added keys meanwhile
        fresh_cache.update(cache)
        save_cache(fresh_cache)
    for fn, (ok, why) in results.items():
        if not quiet or ok is not True:
            print('%-28s %-11s %s' % (fn, {True: 'EQUIVALENT', False: 'DIFFERS', None: '-'}[ok], why))
    if quiet:
        print('%d EQUIVALENT, %d DIFFERS, %d without cases or not compiled' % (
            sum(1 for ok, _ in results.values() if ok is True), sum(1 for ok, _ in results.values() if ok is False),
            sum(1 for ok, _ in results.values() if ok is None)))
    if stem.startswith('zz_'):          # a scratch file (an experiment): its results are printed, never recorded
        return
    path = os.path.join('tests', 'equivalent.txt')
    have = set(open(path).read().split()) if os.path.exists(path) else set()
    have |= {fn for fn, (ok, _) in results.items() if ok}
    have -= {fn for fn, (ok, _) in results.items() if ok is False}
    os.makedirs('tests', exist_ok=True)
    open(path, 'w').write(''.join(f + '\n' for f in sorted(have)))
    write_evidence(evidence, {fn for fn, (ok, _) in results.items() if ok is False})


def write_evidence(new, failed):
    import ledger
    """docs/equivalent.md: one entry per Equivalent function, its evidence. Kept across runs; a
    function that fails again loses its entry."""
    path = os.path.join('docs', 'equivalent.md')
    entries = {}
    if os.path.exists(path):
        for block in open(path).read().split('\n### ')[1:]:
            entries[block.split(' ', 1)[0]] = '### ' + block.rstrip('\n') + '\n'
    for fn in failed:
        entries.pop(fn, None)
    for fn, (start, size, cfile, counts, about) in new.items():
        lines = ['### %s (`%08X`, %d bytes, `%s`)' % (fn, start, size, cfile),
                 '- equivalent on %s cases, in `tests/%s/%s.json`'
                 % (' and '.join('%d %s' % (v, 'development' if k == 'dev' else k) for k, v in counts.items()),
                    os.path.splitext(os.path.basename(cfile))[0], fn)]
        lines += ['- %s' % a for a in about if a]
        entries[fn] = '\n'.join(lines) + '\n'
    os.makedirs('docs', exist_ok=True)
    head = ('# Equivalent functions\n\nFunctions whose C behaves like the original on every test case '
            '(`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; '
            'the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need '
            'your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/4-boosts/live.py`.\n')
    open(path, 'w').write(head + ''.join('\n' + entries[k] for k in sorted(entries)))


if __name__ == '__main__':
    main(sys.argv)
