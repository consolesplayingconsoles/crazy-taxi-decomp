#!/usr/bin/env python3
"""sdk_source.py: library functions the SDK's own source reproduces. Run in the repo. Stdlib only (Python 3.6).

    python3 tools/sdk_source.py <source folder> [<source folder> ...]

A source folder is a dump of the SDK's library C (the Shinobi or Kamui library source, or another release's). For every
function of functions.txt that a .c file there defines, the file is compiled with the SDK's own shc (same flags as
build.sh), linked at a scratch address with every outside name at the game's address, and the function's bytes are
compared with the executable's. A function whose bytes are identical (a literal pool that sits a few bytes apart still
counts: the instructions are identical) is verified against the SDK source.

Headers the supplied sources lack: a header the source includes that no folder holds gets an empty stub; a reconstructed one in
the repo's sdk-headers/ (by hand: what the sources use and the game's code shows) wins over the stub. A reconstruction is
checked by the byte comparison itself: a wrong layout or value only fails to verify.

Writes:
  sdk-source/<function>.c   the exact C of each verified function, from the source you supplied. It is the SDK's own
                            code: the folder is git-ignored and stays on this machine. Putting it in the repo is your choice.
  sdk-verified.txt          the names of the verified functions (progress.py counts them in)
  build/sdk-source/         scratch: copies of the sources, compiler logs, results.tsv (why a file did not compile)

A function whose listed bytes (functions.txt) hold no return or tail jump is reported, not counted: its size is wrong.
Needs Docker and the dc-tools image, and SDK_PATH (.env or environment), as build.sh does.
"""
import glob
import os
import re
import shutil
import struct
import subprocess
import sys

SCRATCH = 0x0E100000
FLAGS = ('-cpu=sh4 -endian=little -fpu=single -division=cpu -round=nearest -pic=0 -macsave=0 '
         '-optimize=1 -size -string=const -section=p=P,c=C,d=D,b=B')
WORK = os.path.join('build', 'sdk-source')
INC_NAMES = ('inc', 'include', 'fl', 'fm')            # directories of a source tree that hold shared headers


def ends(w):
    """rts, or a tail jump (jmp @Rn, braf Rn, bra): where a function's code can end."""
    return w == 0x000B or (w & 0xF0FF) == 0x402B or (w & 0xF0FF) == 0x0023 or (w & 0xF000) == 0xA000


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
        if len(p) >= 4 and p[0] == 'F' and not p[3].startswith('FUN_'):
            out.setdefault(p[3], []).append((int(p[1], 16), int(p[2])))
    return out


def run(sdk, cmd):
    r = subprocess.run(['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':/w', '-w', '/w',
                        '-e', 'TW=Z:\\sdk\\' + RELWIN, os.environ.get('DC_TOOLS_IMAGE', 'dc-tools'), 'bash', '-c', cmd],
                       stdin=subprocess.DEVNULL, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, universal_newlines=True)
    return r.stdout


def stage(folders, sdk):
    """Copies the sources under build/sdk-source/work (paths without spaces), the SDK's headers beside them, and makes
    every #include name match the case of the file it means (the compiler runs on a case-sensitive file system)."""
    work = os.path.join(WORK, 'work')
    shutil.rmtree(work, ignore_errors=True)
    os.makedirs(work)
    trees = []
    for i, folder in enumerate(folders):
        dst = os.path.join(work, 't%d' % i)
        for root, _, files in os.walk(folder):
            for f in files:
                if f.lower().endswith(('.c', '.h')):
                    # spaces become '_' in folder names and .c names: the user's folders can be named anything, the
                    # compiler's command line cannot hold a space (headers keep their names: #include lines name them)
                    d = os.path.join(dst, os.path.relpath(root, folder).replace(' ', '_'))
                    os.makedirs(d, exist_ok=True)
                    name = f.replace(' ', '_') if f.lower().endswith('.c') else f
                    shutil.copyfile(os.path.join(root, f), os.path.join(d, name))
        trees.append(dst)
    incs = []
    for cand in glob.glob(os.path.join(sdk, '*', 'include')) + [os.path.join(sdk, 'shc', 'include')]:
        if os.path.isdir(cand):
            dst = os.path.join(work, 'sdkinc%d' % len(incs))
            shutil.copytree(cand, dst)
            incs.append(dst)
    real = {}
    for root in trees + incs:
        for r, _, fs in os.walk(root):
            for f in fs:
                real.setdefault(f.lower(), f)
    pat = re.compile(rb'(#\s*include\s*[<"])([^>"\r\n]+)([>"])')

    def fix(m):
        name = m.group(2).decode('latin1')
        base = name.replace('\\', '/').split('/')[-1]
        good = real.get(base.lower())
        if good and good != base:
            return m.group(1) + name[:len(name) - len(base)].encode('latin1') + good.encode('latin1') + m.group(3)
        return m.group(0)
    for root in trees:
        for r, _, fs in os.walk(root):
            for f in fs:
                p = os.path.join(r, f)
                b = open(p, 'rb').read()
                nb = pat.sub(fix, b)
                if nb != b:
                    open(p, 'wb').write(nb)
    # a header the source includes that no folder holds (the dump leaves some out) gets an empty stub, so a file that only
    # needs its name can compile; a file that needs what is in it still fails, and a result counts only if its bytes match
    if incs:
        for root in trees:
            for r, _, fs in os.walk(root):
                for f in fs:
                    for m in pat.finditer(open(os.path.join(r, f), 'rb').read()):
                        base = m.group(2).decode('latin1').replace('\\', '/').split('/')[-1]
                        if base.lower() not in real and base.lower().endswith('.h'):
                            open(os.path.join(incs[0], base), 'w').write('/* stub: not in the supplied sources */\n')
                            real[base.lower()] = base
    # sdk-patches.txt: one change per line, "file name <TAB> old text <TAB> new text", applied to the staged copies of the sources
    # (the build the game was made with set an option the shipped source has the other way round); '#' starts a comment
    if os.path.exists('sdk-patches.txt'):
        for line in open('sdk-patches.txt'):
            parts = line.rstrip('\n').split('\t')
            if line.startswith('#') or len(parts) != 3:
                continue
            for root in trees:
                for r, _, fs in os.walk(root):
                    for f in fs:
                        if f.lower() == parts[0].lower():
                            fp = os.path.join(r, f)
                            b = open(fp, 'rb').read()
                            if parts[1].encode('latin1') in b:
                                open(fp, 'wb').write(b.replace(parts[1].encode('latin1'), parts[2].encode('latin1')))
    # headers the supplied sources lack, reconstructed by hand in the repo's sdk-headers/ (they win over the stubs)
    if incs and os.path.isdir('sdk-headers'):
        for f in os.listdir('sdk-headers'):
            if f.lower().endswith('.h'):
                shutil.copyfile(os.path.join('sdk-headers', f), os.path.join(incs[0], f))
    return trees, incs


def include_dirs(path, tree, incs):
    dirs = [os.path.dirname(path)]
    for r, ds, _ in os.walk(tree):
        for d in ds:
            if d.lower() in INC_NAMES:
                dirs.append(os.path.join(r, d))
    rel = lambda p: os.path.relpath(p, os.path.join(WORK, 'work')).replace('/', '\\')
    return [rel(d) for d in dirs + incs] + [rel(os.path.join(i, 'SHC')) for i in incs]


def build(sdk, rel, path, tree, incs, stem, defines):
    """shc, lnk and elf2bin from inside the work folder, so every path the tools see is short."""
    inc = include_dirs(path, tree, incs)
    extra = ' -define=_STRICT_UNION_=1' if 'kamui' in path.lower() else ''
    work = os.path.join(WORK, 'work')
    os.makedirs(os.path.join(work, 'out', 'tmp'), exist_ok=True)
    sub = ['elf', 'start P(%08X)' % SCRATCH, 'output out\\%s.elf' % stem, 'print out\\%s.map' % stem, 'input out\\%s.obj' % stem]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(defines.items())] + ['exit']
    open(os.path.join(work, 'out', stem + '.sub'), 'w').write('\n'.join(sub) + '\n')
    src = os.path.relpath(path, work).replace('/', '\\')
    tmp = ('Z:\\w\\' + os.path.join(WORK, 'work', 'out', 'tmp').replace('/', '\\'))
    cmd = ('cd /w/%s; SHC_LIB="$TW" SHC_INC="Z:\\sdk\\shc\\include" SHC_TMP="%s" wibo /sdk/%s/shc.exe "%s" -object="out\\%s.obj" %s%s '
           '-include="%s" > out/%s.shc.log 2>&1; echo shc=$?; wibo /sdk/%s/lnk.exe -subcommand="out\\%s.sub" > out/%s.lnk.log 2>&1; '
           'wibo /sdk/%s/elf2bin.exe -s %08X "out\\%s.elf" "out\\%s.bin" >/dev/null 2>&1; true'
           % (work, tmp, rel, src, stem, FLAGS, extra, ','.join(inc), stem, rel, stem, stem, rel, SCRATCH, stem, stem))
    return run(sdk, cmd), os.path.join(work, 'out')


def definitions(path):
    """{function name: (start, end) of its text} for the functions a C file defines."""
    text = open(path, 'rb').read().decode('latin1')
    found = {}
    pat = re.compile(r'^[ \t]*(?:static\s+)?[A-Za-z_][\w \t\*]*?\b([A-Za-z_]\w*)\s*\([^;{)]*\)\s*\n?[ \t]*\{', re.M)
    for m in pat.finditer(text):
        n = m.group(1)
        if n in ('if', 'while', 'for', 'switch', 'return', 'sizeof'):
            continue
        depth, i = 0, m.end() - 1
        while i < len(text):
            if text[i] == '{':
                depth += 1
            elif text[i] == '}':
                depth -= 1
                if depth == 0:
                    break
            i += 1
        found.setdefault(n, text[m.start():i + 1])
    return found


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    global RELWIN
    folders = [a for a in argv[1:] if os.path.isdir(a)]
    if not folders:
        sys.exit('[ERROR] no source folder given')
    sdk, rel = sdk_env()
    RELWIN = rel.replace('/', '\\')
    table, funcs = names(), functions()
    all_starts = {int(l.split()[1], 16) for l in open('functions.txt') if l.startswith('F ')}
    exe = open('1ST_READ.BIN', 'rb').read()
    base = int(open('BASE').read().strip(), 16)
    trees, incs = stage(folders, sdk)
    verified, report, n_files = {}, [], 0
    for tree in trees:
        for path in sorted(glob.glob(os.path.join(tree, '**', '*'), recursive=True)):
            if not path.lower().endswith('.c'):
                continue
            defs = definitions(path)
            wanted = [n for n in defs if n in funcs]
            if not wanted:
                continue
            n_files += 1
            stem = 'f%04d' % n_files
            out, outdir = build(sdk, rel, path, tree, incs, stem, {})
            if 'shc=0' not in out or not os.path.exists(os.path.join(outdir, stem + '.obj')):
                log = open(os.path.join(outdir, stem + '.shc.log'), errors='replace').read().replace('\r', '\n')
                report.append((path, 'not compiled', (log.strip().splitlines() or ['?'])[0][:80], len(wanted)))
                continue
            lnk = open(os.path.join(outdir, stem + '.lnk.log'), errors='replace').read()
            und = sorted(set(re.findall(r'UNDEFINED EXTERNAL SYMBOL\((?:\w+\.)?_?([^)\s]+)\)', lnk)))
            if und:
                dummy = {'_' + n: table.get(n, 0x8C800000 + 4 * j) for j, n in enumerate(und)}
                build(sdk, rel, path, tree, incs, stem, dummy)
            binp = os.path.join(outdir, stem + '.bin')
            if not os.path.exists(binp):
                report.append((path, 'not linked', '', len(wanted)))
                continue
            code = open(binp, 'rb').read()
            mp = open(os.path.join(outdir, stem + '.map'), errors='replace').read()
            # a call to another function of the same file goes through a literal that holds that function's scratch
            # address here and its game address in the executable: put the game's address in the literal first
            where = {}
            for mm in re.finditer(r"_(\w+)\s*\n?\s*H'([0-9A-Fa-f]{8})", mp):
                if mm.group(1) in table:
                    where[int(mm.group(2), 16)] = table[mm.group(1)]
            if where:
                fixed = bytearray(code)
                for off in range(0, len(fixed) - 3, 2):
                    v = struct.unpack_from('<I', fixed, off)[0]
                    if v in where:
                        struct.pack_into('<I', fixed, off, where[v])
                code = bytes(fixed)
            # a call to a function of the file the game has no name for (FUN_...): its literal holds the scratch address here and
            # the game's address there. Learn the pairs from the functions' own bytes, but only where the game's value is the start
            # of a function in functions.txt and one scratch address never maps to two
            learned = {}
            for n in wanted:
                mm = re.search(r"_%s\s*\n?\s*H'([0-9A-Fa-f]{8})" % re.escape(n), mp)
                if not mm:
                    continue
                at = int(mm.group(1), 16)
                for start, size in funcs[n]:
                    mine_b = code[at - SCRATCH:at - SCRATCH + size]
                    orig_b = exe[start - base:start - base + size]
                    for off in range(0, min(len(mine_b), len(orig_b)) - 3, 2):
                        v1 = struct.unpack_from('<I', mine_b, off)[0]
                        v2 = struct.unpack_from('<I', orig_b, off)[0]
                        if SCRATCH <= v1 < SCRATCH + len(code) and v1 not in where and v2 in all_starts:
                            learned.setdefault(v1, set()).add(v2)
            pairs = {k: next(iter(v)) for k, v in learned.items() if len(v) == 1}
            if pairs:
                fixed = bytearray(code)
                for off in range(0, len(fixed) - 3, 2):
                    v = struct.unpack_from('<I', fixed, off)[0]
                    if v in pairs:
                        struct.pack_into('<I', fixed, off, pairs[v])
                code = bytes(fixed)
            for n in wanted:
                m = re.search(r"_%s\s*\n?\s*H'([0-9A-Fa-f]{8})" % re.escape(n), mp)
                if not m:
                    continue
                a = int(m.group(1), 16)
                for start, size in funcs[n]:
                    mine = code[a - SCRATCH:a - SCRATCH + size]
                    orig = exe[start - base:start - base + size]
                    if not any(ends(struct.unpack('<H', orig[k:k + 2])[0]) for k in range(0, len(orig) - 1, 2)):
                        report.append((path, 'no return', '%s: no rts or tail jump within its %d bytes in functions.txt' % (n, size), 1))
                        continue
                    same = mine == orig
                    if not same:
                        w1 = struct.unpack('<%dH' % (len(mine) // 2), mine[:len(mine) // 2 * 2])
                        w2 = struct.unpack('<%dH' % (len(orig) // 2), orig[:len(orig) // 2 * 2])
                        last = max([i for i, w in enumerate(w2) if ends(w)] or [0]) + 2
                        same = len(w1) == len(w2) and all(w1[i] == w2[i] for i in range(min(last, len(w1))))
                    if same:
                        verified[n] = (path, defs[n])
                        break
    os.makedirs('sdk-source', exist_ok=True)
    for f in glob.glob('sdk-source/*.c'):
        os.remove(f)
    for n, (path, text) in sorted(verified.items()):
        open('sdk-source/%s.c' % n, 'w').write('/* %s, from the SDK source you supplied: its own code */\n%s\n' % (os.path.basename(path), text))
    open('sdk-verified.txt', 'w').write('# functions whose bytes the SDK source reproduces (tools/sdk_source.py); the C is in sdk-source/, git-ignored\n'
                                        + ''.join(n + '\n' for n in sorted(verified)))
    with open(os.path.join(WORK, 'results.tsv'), 'w') as f:
        for path, why, detail, k in report:
            f.write('%s\t%s\t%s\t%d\n' % (os.path.relpath(path, WORK), why, detail, k))
    print('verified against the SDK source: %d functions (names in sdk-verified.txt)' % len(verified))
    skipped = {}
    for path, why, detail, k in report:
        skipped[why] = skipped.get(why, 0) + k
    for why, k in sorted(skipped.items()):
        print('  %-14s %d functions (see %s)' % (why, k, os.path.join(WORK, 'results.tsv')))
    print('')
    print('WARNING: sdk-source/ holds the SDK\'s own source code, copied from the folder you supplied. It is git-ignored and stays on')
    print('this machine. Whether it goes into the repo is your decision; tools/progress.py counts these functions either way.')


RELWIN = ''

if __name__ == '__main__':
    main(sys.argv)
