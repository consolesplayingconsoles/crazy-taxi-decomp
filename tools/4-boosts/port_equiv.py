#!/usr/bin/env python3
"""port_equiv.py: Equivalent C from one decomp into another that shares library code. Stdlib only.

    python3 port_equiv.py <source repo> <destination repo> [--dry] [--tag NAME] [src/file.c ...]

Both repos are decomps made by this skill (functions.txt, 1ST_READ.BIN, BASE, tests/equivalent.txt,
src/*.c with tests/<file>/<function>.json). For every function the source has as Equivalent:

1. Find it in the destination: the function's code with the fields that depend on where it sits masked
   (sdk_masked.mask), compared with the destination's functions; exact masked equality, or at least 0.9 of
   it (another compiler schedule). Several equal candidates: skipped (ambiguous).
   A function under 32 bytes is claimed only when it is library code (sdk.txt) in both repos: a tiny game
   function with the same code in another game is a coincidence as often as not.
2. Map what it uses: the literal-pool words of the pair, position by position, give the destination's
   address for every global and every callee the source's code names. A word that maps two ways drops the
   function. Each mapped RAM address or callee is added to the destination's symbols.txt under the SOURCE's
   name (several names may share an address), and a destination function with no real name (FUN_...) takes
   the source's.
3. Port the C: the matched functions with the file's declarations, to src/<tag>_<file>.c, and each function's
   cases to tests/<tag>_<file>/<function>.json with their addresses translated (mapped addresses, and the
   other 0C... RAM addresses of the source moved to the destination's 8C... base).
4. Run the destination's own `tools/equiv.py -q` on the ported file; a function whose body names something
   still unmapped (a link error) is dropped and the run repeated. Only what equiv.py prints EQUIVALENT stays: the
   file keeps those (and what an earlier port put in it), the cases of the rest are removed. Only that counts:
   the destination's tests/equivalent.txt and docs/equivalent.md are its own tool's output.
--dry: stop after the matches and the plan. Run the destination's `build.sh` afterwards (names changed: MATCH).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import struct
import subprocess
import sys
from difflib import SequenceMatcher

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sdk_masked as M


def repo(path):
    r = {'path': path}
    r['base'] = int(open(os.path.join(path, 'BASE')).read().strip(), 16)
    r['exe'] = open(os.path.join(path, '1ST_READ.BIN'), 'rb').read()
    r['funcs'] = {}
    r['byaddr'] = {}
    for line in open(os.path.join(path, 'functions.txt')):
        p = line.split()
        if len(p) >= 4 and p[0] == 'F':
            a, sz, n = int(p[1], 16), int(p[2]), p[3]
            r['byaddr'][a] = (sz, n)
            r['funcs'].setdefault(n, (a, sz))
    r['names'] = {}
    for fn in ('globals.txt', 'symbols.txt'):
        f = os.path.join(path, fn)
        if os.path.exists(f):
            for line in open(f):
                p = line.split()
                if len(p) >= 2 and not line.startswith('#'):
                    try:
                        r['names'].setdefault(int(p[0], 16), p[1])
                    except ValueError:
                        pass
    eq = os.path.join(path, 'tests', 'equivalent.txt')
    r['equiv'] = set(open(eq).read().split()) if os.path.exists(eq) else set()
    return r


def code(r, a, sz):
    return M.words(r['exe'], a - r['base'], sz // 2)


def strip_comments(t):
    return re.sub(r'/\*.*?\*/|//[^\n]*', ' ', t, flags=re.S)


def split_c(text):
    """(preamble, [(name, whole text of the definition)]) of a C file: top-level definitions by brace depth."""
    out, pre, i, n = [], [], 0, len(text)
    depth = 0
    seg_start = 0
    while i < n:
        c = text[i]
        if text.startswith('/*', i):
            j = text.index('*/', i) + 2
            i = j
            continue
        if c == '{':
            if depth == 0:
                head = text[seg_start:i]
            depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0:
                body = text[seg_start:i + 1]
                m = re.search(r'(\w+)\s*\([^;{]*\)\s*$', strip_comments(head))
                if m and not re.match(r'\s*(typedef|struct|union|enum)\b', strip_comments(head)):
                    out.append((m.group(1), body))
                else:
                    pre.append(body)
                seg_start = i + 1
        elif c == ';' and depth == 0:
            pre.append(text[seg_start:i + 1])
            seg_start = i + 1
        i += 1
    pre.append(text[seg_start:])
    return pre, out


def main(argv):
    dry = '--dry' in argv
    tag = 'libs'
    args = []
    it = iter(argv[1:])
    for a in it:
        if a == '--dry':
            continue
        if a == '--tag':
            tag = next(it)
        else:
            args.append(a)
    src, dst = repo(args[0]), repo(args[1])
    src_lib, dst_lib = M.load_repo(args[0])[1], M.load_repo(args[1])[1]     # in the library ranges of sdk.txt
    only = set(args[2:])
    # candidates: Equivalent functions by source file
    files = {}
    for f in sorted(os.listdir(os.path.join(src['path'], 'src'))):
        if not f.endswith('.c') or (only and 'src/' + f not in only and f not in only):
            continue
        text = open(os.path.join(src['path'], 'src', f), errors='replace').read()
        if text.startswith('/* @unit'):
            continue
        _, defs = split_c(text)
        names = [n for n, _ in defs if n in src['equiv'] and n in src['funcs']
                 and os.path.exists(os.path.join(src['path'], 'tests', f[:-2], n + '.json'))]
        if names:
            files[f] = (text, names)
    # index the destination by masked code
    didx = {}
    for a, (sz, n) in dst['byaddr'].items():
        if sz >= 4:
            didx.setdefault(M.mask(code(dst, a, sz)), []).append(a)
    pairs, report = {}, []          # source function name -> (src addr, dst addr, how)
    for f, (text, names) in files.items():
        for n in names:
            a, sz = src['funcs'][n]
            m = M.mask(code(src, a, sz))
            if n in dst['equiv']:
                report.append((n, 'already Equivalent in the destination'))
                continue
            cands = didx.get(m, [])
            how = 'exact'
            if not cands:
                best = None
                for da, (dsz, dn) in dst['byaddr'].items():
                    if abs(dsz - sz) > sz * 0.25 or dsz < 8:
                        continue
                    dm = M.mask(code(dst, da, dsz))
                    if len(dm) > 0 and len(m) > 0 and dm[:2] != m[:2]:
                        continue
                    r = SequenceMatcher(None, m, dm, autojunk=False).ratio()
                    if r >= 0.9 and (not best or r > best[0]):
                        best = (r, da)
                cands, how = ([best[1]] if best else []), 'close %.2f' % (best[0] if best else 0)
            if not cands:
                report.append((n, 'not found in the destination'))
            elif len(cands) > 1:
                report.append((n, 'ambiguous: %d identical candidates' % len(cands)))
            elif not (src_lib(a) and dst_lib(cands[0]) or sz >= 32):
                report.append((n, 'a small game function: identical code is not a claim they are the same'))
            else:
                pairs[n] = (a, cands[0], how)
    # map the literal pools of every pair
    amap, conflict = {}, set()
    for n, (a, b, how) in pairs.items():
        sa, sb = src['funcs'][n][1], dst['byaddr'][b][0]
        pa = M.pool_longs(src['exe'], a - src['base'], sa)
        pb = M.pool_longs(dst['exe'], b - dst['base'], sb)
        for i, sv in pa.items():
            dv = pb.get(i)
            if dv is None:
                continue
            ram = 0x0C000000 <= sv < 0x0D000000 or 0x8C000000 <= sv < 0x8D000000
            code_ = src['base'] <= sv < src['base'] + len(src['exe'])
            if not (ram or code_):
                continue
            if amap.setdefault(sv, dv) != dv:
                conflict.add(sv)
    for sv in conflict:
        amap.pop(sv, None)
    drop = {n for n, (a, b, how) in pairs.items()
            if any(sv in conflict for sv in M.pool_longs(src['exe'], a - src['base'], src['funcs'][n][1]).values())}
    for n in drop:
        pairs.pop(n)
        report.append((n, 'pool words map two ways'))
    print('%d function(s) matched, %d dropped before the port' % (len(pairs), len(report)))
    if dry:
        for n, (a, b, how) in sorted(pairs.items()):
            print('  %-30s %08x -> %08x  %s' % (n, a, b, how))
        for n, why in report:
            print('  %-30s %s' % (n, why))
        return
    # names in the destination: the matched functions take the source's names; mapped RAM and callees are
    # aliased in symbols.txt
    fpath = os.path.join(dst['path'], 'functions.txt')
    ftext = open(fpath).read()
    renamed = []
    for n, (a, b, how) in sorted(pairs.items()):
        dsz, dn = dst['byaddr'][b]
        if dn == n:
            continue
        if dn.startswith('FUN_') or dn.startswith('thunk_'):
            if n in dst['funcs']:
                report.append((n, 'the destination already has a function of that name elsewhere'))
                pairs.pop(n)
                continue
            ftext = re.sub(r'^(F %08x %d )%s$' % (b, dsz, re.escape(dn)), r'\g<1>%s' % n, ftext, flags=re.M | re.I)
            renamed.append((n, b))
        else:
            report.append((n, 'the destination names it %s' % dn))
            pairs.pop(n)
    open(fpath, 'w').write(ftext)
    spath = os.path.join(dst['path'], 'symbols.txt')
    have = set(open(spath).read().split('\n')) if os.path.exists(spath) else set()
    add = []
    for sv, dv in sorted(amap.items()):
        is_code = src['base'] <= sv < src['base'] + len(src['exe'])
        nm = src['names'].get(sv) or (src['byaddr'].get(sv) or (0, None))[1]
        if not nm and not is_code:
            nm = 'g_%08x' % sv
        if not nm:
            continue                                   # a label inside code: nothing to name
        line = '%08X %s' % (dv, nm)
        if line not in have and nm not in dst['funcs'] and dst['names'].get(dv) != nm:
            add.append(line)
    if add:
        with open(spath, 'a') as fh:
            fh.write('\n'.join(add) + '\n')
    # port the C and the cases
    low = dst['base'] >= 0x80000000

    def tr(v):
        x = int(v, 16)
        if x in amap:
            return '%08X' % amap[x]
        if low and 0x0C000000 <= x < 0x0D000000:
            return '%08X' % (x | 0x80000000)
        return '%08X' % x if len(v) == 8 else v
    results = {}
    for f, (text, names) in files.items():
        mine = [n for n in names if n in pairs]
        if not mine:
            continue
        pre, defs = split_c(text)
        stem = '%s_%s' % (tag, f[:-2])
        out_c = os.path.join(dst['path'], 'src', stem + '.c')
        keep = []                      # what an earlier port already put in this file stays in it
        if os.path.exists(out_c):
            _, old = split_c(open(out_c, errors='replace').read())
            keep = [n for n, _ in old if n not in mine and n in dict(defs)]
        tried = list(mine)
        for attempt in range(6):
            body = ''.join(pre) + '\n'.join(t for n, t in defs if n in mine or n in keep or t.lstrip().startswith('static')) + '\n'
            open(out_c, 'w').write(
                '/* Library code: C that behaves like this game\'s own bytes. */\n' + body)
            tdir = os.path.join(dst['path'], 'tests', stem)
            os.makedirs(tdir, exist_ok=True)
            import json
            for n in mine:
                sets = json.load(open(os.path.join(src['path'], 'tests', f[:-2], n + '.json')))
                sets = sets if isinstance(sets, dict) else {'dev': sets}

                def conv(o, key=None):
                    if isinstance(o, dict):
                        return {(tr(k) if re.fullmatch(r'[0-9A-Fa-f]{8}', k) and key == 'poke' else k): conv(v, k)
                                for k, v in o.items()}
                    if isinstance(o, list):
                        return [conv(x, key) for x in o]
                    if isinstance(o, str) and re.fullmatch(r'[0-9A-Fa-f]{8}', o) and key in ('regs', 'calls', None):
                        return tr(o)
                    return o
                json.dump(conv(sets), open(os.path.join(tdir, n + '.json'), 'w'), indent=1)
            r = subprocess.run([sys.executable, 'tools/equiv.py', 'src/%s.c' % stem] + mine,
                               cwd=dst['path'], capture_output=True, text=True)
            out = r.stdout + r.stderr
            und = re.search(r'link: undefined ([^(\n]+?) \(', out)
            if und:
                bad = {x.strip().lstrip('_') for x in und.group(1).split(',')}
                dropped = [n for n, t in defs if n in mine and any(re.search(r'\b%s\b' % re.escape(b), t) for b in bad)]
                if not dropped:
                    results.update({n: 'link error: ' + und.group(1).strip() for n in mine})
                    break
                for n in dropped:
                    mine.remove(n)
                    results[n] = 'uses an unmapped name (%s)' % und.group(1).strip()
                if not mine:
                    break
                continue
            if '[ERROR]' in out:
                results.update({n: out.strip().splitlines()[-1][:110] for n in mine})
                break
            for n in mine:
                line = next((l for l in out.splitlines() if l.startswith(n + ' ')), '')
                col = line.split()
                results[n] = 'EQUIVALENT' if len(col) > 1 and col[1] == 'EQUIVALENT' else (line[29:140] or 'no result')
            break
        # only what passed stays: the file keeps the functions that are Equivalent here (and what it already held), and
        # the cases of the others go
        passed = [n for n in tried if results.get(n) == 'EQUIVALENT']
        for n in tried:
            if n not in passed:
                case = os.path.join(dst['path'], 'tests', stem, n + '.json')
                if os.path.exists(case):
                    os.remove(case)
        tdir = os.path.join(dst['path'], 'tests', stem)
        if not passed and not keep:
            if os.path.exists(out_c):
                os.remove(out_c)
            if os.path.isdir(tdir) and not os.listdir(tdir):
                os.rmdir(tdir)
        elif passed != tried:
            body = ''.join(pre) + '\n'.join(t for n, t in defs if n in passed or n in keep or t.lstrip().startswith('static')) + '\n'
            open(out_c, 'w').write(
                '/* Library code: C that behaves like this game\'s own bytes. */\n' + body)
    for n, why in report:
        results.setdefault(n, why)
    ok = sorted(n for n, v in results.items() if v == 'EQUIVALENT')
    print('EQUIVALENT in the destination: %d' % len(ok))
    for n, v in sorted(results.items()):
        print('  %-30s %s' % (n, v))
    print('renamed in functions.txt: %d, symbols added: %d (run the destination\'s split_asm.py and build.sh)' % (len(renamed), len(add)))


if __name__ == '__main__':
    main(sys.argv)
