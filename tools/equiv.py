#!/usr/bin/env python3
"""Behaviour check: does a C file's code do what the original does? Run in the repo.

    python3 tools/equiv.py src/<file>.c [function ...]

Compiles the file with the SDK's shc (same flags as build.sh), links it on its own at a scratch
address with every outside name it uses defined at the game's address (functions.txt,
globals.txt, symbols.txt), and runs each of its functions in tools/sh4sim.py twice per case:
the original bytes at the original address, then the compiled C. The two runs must agree on
every call out (target and arguments), every memory write and the return registers. The cases
are tests/<file>/<function>.json: a list of sh4sim cases without exe/entry/end (filled in
here); a case may name a RAM dump ("dump": path relative to the repo). A function with cases
that all agree is Equivalent; the result goes to tests/equivalent.txt (progress.py reads it).
A function that byte-matches is Equivalent by definition and needs no cases.

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


def same(a, b, outs, back):
    """The parts of two runs that must agree, and the first difference. back maps an address in
    the compiled C (one of its own functions or data) to the game's address of the same name."""
    fix = lambda h: '%08X' % back.get(int(h, 16), int(h, 16))
    for k in ('error', 'out', 'calls', 'writes', 'devices'):
        x, y = a[k], b[k]
        if k == 'out':
            x, y = [x[r] for r in outs], [y[r] for r in outs]
        if k == 'calls':
            x = [(c['to'], c['r4-r7'], c['fr4-fr11']) for c in x]
            y = [(fix(c['to']), [fix(v) for v in c['r4-r7']], c['fr4-fr11']) for c in y]
        if k == 'writes':
            y = [[fix(w[0])] + w[1:] for w in y]
        if x != y:
            return False, '%s: original %s / C %s' % (k, json.dumps(x)[:200], json.dumps(y)[:200])
    return True, ''


def main(argv):
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
    results = {}
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
        for case in json.load(open(case_path)):
            case = dict(case, exe='1ST_READ.BIN', base='%08X' % base, entry='%08X' % start, end='%08X' % (start + size))
            orig = sh4sim.run(case, '.')
            mine = sh4sim.run(case, '.', code=(SCRATCH, code), entry=c_at, end=c_end)
            n += 1
            good, diff = same(orig, mine, rets.get(fn, ['r0', 'fr0']), back)
            if orig['error']:
                good, diff = False, 'the original stopped: ' + orig['error']
            if not good:
                ok, why = False, 'case %d: %s' % (n, diff)
                break
        results[fn] = (ok, why or '%d cases' % n)
    for fn, (ok, why) in results.items():
        print('%-28s %-11s %s' % (fn, {True: 'EQUIVALENT', False: 'DIFFERS', None: '-'}[ok], why))
    path = os.path.join('tests', 'equivalent.txt')
    have = set(open(path).read().split()) if os.path.exists(path) else set()
    have |= {fn for fn, (ok, _) in results.items() if ok}
    have -= {fn for fn, (ok, _) in results.items() if ok is False}
    os.makedirs('tests', exist_ok=True)
    open(path, 'w').write(''.join(f + '\n' for f in sorted(have)))


if __name__ == '__main__':
    main(sys.argv)
