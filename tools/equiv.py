#!/usr/bin/env python3
"""Behaviour check: does a C file's code do what the original does? Run in the repo.

    python3 tools/equiv.py src/<file>.c [function ...]

Compiles the file with the SDK's shc (same flags as build.sh), links it on its own at a scratch
address with every outside name it uses defined at the game's address (functions.txt,
globals.txt, symbols.txt), and runs each of its functions in tools/sh4sim.py twice per case:
the original bytes at the original address, then the compiled C. The two runs must agree on
every call out (target and arguments, in order), the memory they leave behind (the final value at
every address either one wrote) and the return register. The cases
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
file declares for it (an int or pointer takes the next of r4-r7, a float the next of fr4-fr11): registers a
call merely leaves over are not arguments. A callee with no prototype in the file is compared on all of
r4-r7 and fr4-fr11, as before. An argument that points into the simulator's stack is compared as "the
stack": a local's address depends on the frame layout, which is the compiler's business.
A call in a case's "calls" list may also carry "poke_arg": {"r7": "<hex bytes>"}: those bytes are written at
the address the register holds when the call is made, as if the callee had filled that output slot (a loop
that reads it can then run more than once).
    python3 tools/equiv.py -q src/<file>.c    prints only what is not EQUIVALENT, and a count.

Needs Docker and the dc-tools image, as build.sh does (SDK_PATH from .env).
"""
import json
import os
import re
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
    sub = ['elf', 'start P(%08X)' % SCRATCH, 'output build\\equiv\\%s.elf' % stem,
           'print build\\equiv\\%s.map' % stem, 'input build\\equiv\\%s.obj' % stem]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(defines.items())] + ['exit']
    open('build/equiv/%s.sub' % stem, 'w').write('\n'.join(sub) + '\n')
    steps = ('set -e; mkdir -p build/tmp; '
             'SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp" wibo "/sdk/%s/shc.exe" "src\\%s.c" '
             '-object="build\\equiv\\%s.obj" %s > build/equiv/shc.log 2>&1 || { cat build/equiv/shc.log; exit 1; }; '
             'wibo "/sdk/%s/lnk.exe" -subcommand="build\\equiv\\%s.sub" > build/equiv/lnk.log 2>&1 || true; '
             'wibo "/sdk/%s/elf2bin.exe" -s %08X "build\\equiv\\%s.elf" "build\\equiv\\%s.bin" > build/equiv/elf2bin.log 2>&1 || true'
             % (rel, stem, stem, FLAGS, rel, stem, rel, SCRATCH, stem, stem))
    r = subprocess.run(['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':/app', '-w', '/app',
                        '-e', 'TW=' + tw, os.environ.get('DC_TOOLS_IMAGE', 'dc-tools'), 'bash', '-c', steps],
                       stdin=subprocess.DEVNULL, capture_output=True, text=True)
    if r.returncode:
        sys.exit('[ERROR] compile failed:\n' + r.stdout + r.stderr)
    log = open('build/equiv/lnk.log', errors='replace').read()
    undefined = re.findall(r'UNDEFINED.*?SYMBOL.*?"?([_A-Za-z]\w*)', log) or \
        re.findall(r'\(E\) UNDEFINED EXTERNAL SYMBOL\s*"?(\w+)', log)
    if undefined or not os.path.exists('build/equiv/%s.bin' % stem):
        return None, undefined or ['(link failed: see build/equiv/lnk.log)']
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


def prototypes(cfile):
    """The argument registers each function this file declares or defines takes, from its prototype:
    {name: (ints and pointers, floats)}; a name starting with an underscore is a runtime helper: (0, 0)."""
    text = re.sub(r'/\*.*?\*/|//[^\n]*', ' ', open(cfile, errors='replace').read(), flags=re.S)
    out = {}
    for m in re.finditer(r'^(?:extern\s+|static\s+)?[A-Za-z_][\w \t\*]*?\b(\w+)\s*\(([^;{)]*)\)\s*[;{]', text, flags=re.M):
        name, params = m.group(1), m.group(2).strip()
        ni = nf = 0
        if params not in ('', 'void'):
            for p in params.split(','):
                if re.search(r'\b(float|double)\b', p) and '*' not in p:
                    nf += 1
                else:
                    ni += 1
        out[name] = (min(ni, 4), min(nf, 8))
    return out


def final(writes):
    """Memory after the writes, byte by byte: {address: byte}."""
    mem = {}
    for addr, size, value in writes:
        a, v = int(addr, 16), int(value, 16)
        for i in range(size):
            mem['%08X' % (a + i)] = '%02X' % ((v >> (8 * i)) & 0xFF)
    return mem


def stackish(v):
    return 'STACK' if 0x0DFF0000 <= int(v, 16) < 0x0E000000 else v


def callview(to, r, f, arity):
    """What a call must agree on: its target and the registers its callee takes (arity: {address: (ints,
    floats)}; none known: all of them), a stack address as "STACK"."""
    a = arity.get(int(to, 16))
    if a is not None:
        r, f = r[:a[0]], f[:a[1]]
    return (to, [stackish(v) for v in r], f)


def same(a, b, outs, back, arity=None):
    """The parts of two runs that must agree, and the first difference. back maps an address in
    the compiled C (one of its own functions or data) to the game's address of the same name."""
    arity = arity or {}
    fix = lambda h: '%08X' % back.get(int(h, 16), int(h, 16))
    for k in ('error', 'out', 'calls', 'writes', 'devices'):
        x, y = a[k], b[k]
        if k == 'out':
            x, y = [x[r] for r in outs], [y[r] for r in outs]
        if k == 'calls':
            x = [callview(c['to'], c['r4-r7'], c['fr4-fr11'], arity) for c in x]
            y = [callview(fix(c['to']), [fix(v) for v in c['r4-r7']], c['fr4-fr11'], arity) for c in y]
        if k == 'writes':                 # the final value at each address: the order of plain stores
            x = final(x)                 # is the compiler's business (devices keep their order)
            y = final([[fix(w[0])] + w[1:] for w in y])
        if x != y:
            return False, '%s: original %s / C %s' % (k, json.dumps(x)[:200], json.dumps(y)[:200])
    return True, ''


def main(argv):
    quiet = '-q' in argv
    argv = [a for a in argv if a != '-q']
    if len(argv) < 2:
        sys.exit(__doc__)
    cfile = argv[1]
    stem = os.path.splitext(os.path.basename(cfile))[0]
    table, funcs = names(), functions()
    defines, defined = outside_names(cfile, table)
    code, syms = compile_link(cfile, defines)
    if code is None:
        sys.exit('[ERROR] link: undefined %s (name them in functions.txt / globals.txt / symbols.txt)' % ', '.join(syms))
    want = argv[2:] or sorted(n for n in defined if n in funcs)
    base = int(open('BASE').read().strip(), 16)
    rets = returns(cfile)
    back = {a: table[n[1:]] for n, a in syms.items() if n[1:] in table}    # the file's own names
    # a call into the compiled C that is not one of its game-named functions is the C's own helper
    # (a static the original inlined, not in the map): part of the C version, so it runs
    runtime_addrs = {a for n, a in table.items() if n.startswith('_')}
    helpers = lambda t: (SCRATCH <= t < SCRATCH + len(code) and t not in back) or t in runtime_addrs
    arity = {table[n]: a for n, a in prototypes(cfile).items() if n in table}
    runtime = {a for n, a in table.items() if n.startswith('_')}        # the compiler's own helpers (_divls,
    arity.update({a: (0, 0) for a in runtime})                           # _quick_odd_mvn...): run, not compared
    helpers_orig = lambda t: t in runtime
    results, evidence = {}, {}
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
        sets = json.load(open(case_path))
        if isinstance(sets, list):                   # a plain list: all development cases
            sets = {'dev': sets}
        counts = {k: len(v) for k, v in sets.items()}
        for case in [c for k in ('dev', 'holdout') for c in sets.get(k, [])]:
            case = dict(case, exe='1ST_READ.BIN', base='%08X' % base, entry='%08X' % start, end='%08X' % (start + size))
            orig = sh4sim.run(case, '.', deep=helpers_orig)
            mine = sh4sim.run(case, '.', code=(SCRATCH, code), entry=c_at, end=c_end, deep=helpers)
            n += 1
            good, diff = same(orig, mine, rets.get(fn, ['r0', 'fr0']), back, arity)
            if orig['error']:
                good, diff = False, 'the original stopped: ' + orig['error']
            if not good:
                ok, why = False, 'case %d: %s' % (n, diff)
                break
        results[fn] = (ok, why or '%d cases (%s)' % (n, ', '.join('%d %s' % (v, k) for k, v in counts.items())))
        if ok:
            evidence[fn] = (start, size, cfile, counts,
                            [c.get('about', '') for k in ('dev', 'holdout') for c in sets.get(k, [])])
    for fn, (ok, why) in results.items():
        if not quiet or ok is not True:
            print('%-28s %-11s %s' % (fn, {True: 'EQUIVALENT', False: 'DIFFERS', None: '-'}[ok], why))
    if quiet:
        print('%d EQUIVALENT, %d DIFFERS, %d without cases or not compiled' % (
            sum(1 for ok, _ in results.values() if ok is True), sum(1 for ok, _ in results.values() if ok is False),
            sum(1 for ok, _ in results.values() if ok is None)))
    path = os.path.join('tests', 'equivalent.txt')
    have = set(open(path).read().split()) if os.path.exists(path) else set()
    have |= {fn for fn, (ok, _) in results.items() if ok}
    have -= {fn for fn, (ok, _) in results.items() if ok is False}
    os.makedirs('tests', exist_ok=True)
    open(path, 'w').write(''.join(f + '\n' for f in sorted(have)))
    write_evidence(evidence, {fn for fn, (ok, _) in results.items() if ok is False})


def write_evidence(new, failed):
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
            'your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.\n')
    open(path, 'w').write(head + ''.join('\n' + entries[k] for k in sorted(entries)))


if __name__ == '__main__':
    main(sys.argv)
