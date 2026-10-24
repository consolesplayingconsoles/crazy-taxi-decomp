#!/usr/bin/env python3
"""A build of the game from the proven C: the game code region is the compiled C, everything else is the original. Run in the repo.

The steps, in the order `make c` runs them:
    prep       copies of the C (build/cbuild/src/), each function only in the file that proves it; pieces for what has no C
    compile    compile the copies, assemble the pieces (one container, two at a time)
    prelim     link the game block alone to measure every object
    unity      merge generated files into units (shared literal pools, short calls), compile them
    layout     place the objects in the fill block and the old game code (and say what does not fit)
    link       compile each part into its section, link the whole executable at its base (build/cbuild/game.bin)
    fit        layout and link, then read from the linked map whether every part lies in its place (what `make c` runs)

With OPTIMIZE set, the C is compiled with -goptimize and linked with Hitachi's inter-module optimizer (optlnksh, SDK r10.1)
instead of lnk: prelim links both ways to measure what it saves, layout fills each part by that ratio, and fit checks the result.

src/ is not changed: the build works on copies in build/cbuild/. Layout (CT): the boot code stays where it is; the fill block
The fill block and the game code (layout.txt: fill, game) hold the game block (compiled C, the pieces that have no C, tables and tails
the C names by address); the entry stub at 0C020000, the NAOMI library, the data and the SDK stay at their addresses.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import json
import os
import re
import shutil
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), 'gen_equiv'))
import boundaries as B
import consistency
import fit as fitmod
import shdis

import layout  # noqa: E402

G0, G1 = layout.region('game', True)                     # the game's own code (layout.txt)
FILL0, FILL1 = layout.region('fill') or (G0, G0)          # spare room in the file before it (none: the game code alone)
_SPARE = layout.region('spare')
P3 = _SPARE[0] if _SPARE else None                         # unused RAM for what does not fit, test builds only


def boot_split():
    """(start, name) of the asm file that runs into the fill block: its head stays, its fill part is given up; None when
    the fill block starts on a file boundary (or there is none)."""
    files = sorted((int(l[:8], 16), l.strip()[9:-4]) for l in open('objects.txt') if l.strip())
    for (a, n), nxt in zip(files, files[1:] + [(1 << 32, None)]):
        if a < FILL0 < nxt[0]:
            return a, n
    return None
OUT = 'build/cbuild'
# optlnksh -optimize=<items> for the links ('' links with lnk.exe). Not symbol_delete: functions reached only by address would go.
# Not register: it drops a function's saves of r8-r14 when it believes it sees every caller, but the original's pointer tables
# (task callbacks, interrupt hooks) are rewritten after the link (relocasm.py), so those callers keep their registers in r8-r14
# and lose them (Crazy Taxi vmuExit: the compiler saves r14, the optimized link did not; 609 functions, the game froze).
OPTIMIZE = 'branch,same_code,string_unify'
MARGINS = (0.998, 0.995, 0.99, 0.985, 0.98)          # fit: how much of the prelim ratio a part is filled by, while nothing is measured
MEASURED_MARGIN = 0.999                              # once a link measured each part's own ratio
FIT_TRIES = 6
DEF = re.compile(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\n?\{', re.M)


def functions():
    return sorted((int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open('functions.txt') if l.startswith('F '))


def game_set():
    """{function: file stem} for the proven game-region functions that have C: the stem is the one whose cases prove it."""
    import relocasm
    eq = set(open('tests/equivalent.txt').read().split()) - relocasm.asm_only()
    out = {}
    for a, s, n in functions():
        if G0 <= a < G1 and n in eq:
            for d in glob.glob('tests/*/%s.json' % n):
                out[n] = d.split('/')[1]
                break
    return out


LIT = re.compile(r'(?<![\w.])0[xX]([0-9A-Fa-f]{7,8})\b(?![.\w])')
CODE_TOP = (0x0C, 0x8C, 0xAC)
# Build copies only: the frame array `int stk[N] = {0};` stands for the function's own stack slots; the zero start is a convenience of the
# simulator and costs a copy from a constant (code and data), so the build does not initialise it.
ZERO = re.compile(r'^(    int stk\[\d+\]) = \{0\};', re.M)


def is_comment(l):
    """A comment line: `/*` opens one, ` * ` continues it, `*/` closes it. A line starting with `*(` is code, a store through a pointer."""
    return l.lstrip().startswith(('/*', '*/', '* '))


def in_code_numbers(srcdir):
    """{address: [(file, line)]} for the numbers in the C that point inside the game code region but are not a function's entry."""
    ent = {a for a, s, n in functions()}
    out = {}
    for f in sorted(glob.glob(srcdir + '/*.c')):
        for i, l in enumerate(open(f, errors='replace').read().split('\n'), 1):
            if is_comment(l):
                continue
            for m in LIT.finditer(l):
                v = int(m.group(1), 16)
                a = v & 0x1FFFFFFF | 0x0C000000
                if (v >> 24) in CODE_TOP and G0 <= a < G1 and a not in ent:
                    out.setdefault(a, []).append((f, i))
    return out


def holder_info(a):
    """(function entry, name, end, code bytes, loaded pool addresses) of the function whose range holds address a."""
    F = functions()
    k = max(i for i, x in enumerate(F) if x[0] <= a)
    h, s, n = F[k]
    nxt = F[k + 1][0] if k + 1 < len(F) else G1
    import relocasm
    seen, flags, outs = relocasm.reach_in(h, h, nxt)
    loads = set()
    for x in seen:
        text, pool, psz, target = shdis.decode(B.word(x), x)
        if pool is not None and text.split()[0] in ('mov.l', 'mov.w'):
            loads.add(pool)
    return h, n, nxt, seen, loads


def tables(srcdir):
    """(clusters, labels): the tables the C names by number, each as (start, end, holder name, [addresses]); and the numbers that
    land in the middle of code (not tables): {address: holder name}."""
    nums = in_code_numbers(srcdir)
    clusters = {}
    labels = {}
    for a in sorted(nums):
        h, n, nxt, seen, loads = holder_info(a)
        if a in seen or a - 1 in seen:
            labels[a] = n
            continue
        end = min([x for x in loads if x > a] + [nxt])
        clusters.setdefault((n, end), []).append(a)
    out = [(min(v), end, n, sorted(v)) for (n, end), v in sorted(clusters.items(), key=lambda kv: min(kv[1]))]
    return out, labels


def words_piece(name, lo, hi, entry, export=True, section='P', align=4):
    """Asm text for the original bytes [lo, hi) as words; a 4-aligned word that is the entry of a game function is `.DATA.L _name`."""
    imps, body = set(), []
    x = lo
    while x < hi:
        v = struct.unpack_from('<I', B.BIN, x - B.BASE)[0] if x % 4 == 0 and x + 4 <= hi else None
        c = None if v is None else (v & 0x1FFFFFFF) | 0x0C000000
        if v is not None and (v >> 24) in CODE_TOP and c in entry:
            top = v - c
            imps.add(entry[c])
            body.append("          .DATA.L    _%s%s" % (entry[c], ("+H'%X" % top) if top else ''))
            x += 4
        else:
            body.append("          .DATA.W    H'%04X" % B.word(x))
            x += 2
    text = ['; %08x-%08x %s (%d bytes)' % (lo, hi, name, hi - lo), '          .SECTION    %s, CODE, ALIGN=%d' % (section, align)]
    if export:
        text.append('          .EXPORT     _%s' % name)
    text += ['          .IMPORT     _%s' % n for n in sorted(imps - {name})]
    if lo % 4 == 2 and align == 4:
        text.append("          .DATA.W    H'0009")
    text += ['_%s:' % name] + body + ['          .END']
    return '\n'.join(text) + '\n'


def pieces():
    """Everything besides the C that the game block holds, as asm under build/cbuild/asm/, and the C literals that name them."""
    import relocasm
    asm = OUT + '/asm'
    os.makedirs(asm, exist_ok=True)
    for f in glob.glob(asm + '/*.src'):
        os.remove(f)
    F = functions()
    entry = {a: n for a, s, n in F if G0 <= a < G1}
    cl, labels = tables(OUT + '/src')
    rep = {}                                  # address -> replacement expression
    decl = {}                                 # symbol -> True
    for s, e, n, addrs in cl:
        sym_ = 'tab_%08x' % s
        open('%s/%s.src' % (asm, sym_), 'w').write(words_piece(sym_, s, e, entry))
        for a in addrs:
            rep[a] = '((int)%s%s)' % (sym_, (' + %d' % (a - s)) if a != s else '')
    moved = relocasm.moved_names()
    start_of = {n: a for a, s, n in F}
    for a, n in list(labels.items()):                   # a number inside a piece that has no C: its own symbol plus the offset
        if n in moved:
            del labels[a]
            rep[a] = '((int)%s%s)' % (n, (' + %d' % (a - start_of[n])) if a != start_of[n] else '')
    if labels:
        # A call or jump into the middle of a function cannot be right: the original's frame is pushed there (Crazy Taxi Exec_LCD into
        # Exec_LCDLogoDemo+140: six pops that were never pushed, the game froze at the memory card window). The address is either a
        # function functions.txt does not list yet (list it; the C then names it) or a function cut short (fix its size, rewrite its C).
        nums = in_code_numbers(OUT + '/src')
        lines = ['[ERROR] the C calls into the middle of a function (%d addresses):' % len(labels)]
        for a, n in sorted(labels.items()):
            where = ', '.join('%s:%d' % (os.path.basename(f), i) for f, i in nums.get(a, [])[:4])
            lines.append('  %08X = %s+%d  (%s)' % (a, n, a - start_of[n], where))
        lines.append('list it in functions.txt as its own function, or fix the caller\'s size in functions.txt and its C')
        sys.exit('\n'.join(lines))
    alt = {}
    for a, n in labels.items():
        alt.setdefault(n, []).append(a)
        rep[a] = '((int)ent_%08x)' % a
    ent_all = {a: n for a, s, n in F}
    for n, addrs in alt.items():
        i = [k for k, x in enumerate(F) if x[2] == n][0]
        txt, why = relocasm.piece(i, F, ent_all, n + '_alt', sorted(addrs))
        if txt is None:
            sys.exit('[ERROR] %s: no second copy (%s)' % (n, why))
        open('%s/%08x_%s_alt.src' % (asm, F[i][0], n), 'w').write(txt)
    for i, (a, s, n) in enumerate(F):
        if n in moved:
            txt, why = relocasm.piece(i, F, ent_all)
            if txt is None:
                sys.exit('[ERROR] %s: %s' % (n, why))
            open('%s/%08x_%s.src' % (asm, a, n), 'w').write(txt)
    b = boot_split()
    if b:                         # the head of the file that runs into the fill block, as words, where it was
        open(asm + '/boot_tail.src', 'w').write(words_piece(b[1], b[0], FILL0, entry, section='P', align=2))
    if FILL1 < G0:                # between the fill block and the game code (an entry stub): as words, where it was
        open(asm + '/boot_stub.src', 'w').write(words_piece('fillEndStub', FILL1, G0, entry, section='PS'))
    nrep = 0
    for f in glob.glob(OUT + '/src/*.c'):
        t = open(f, errors='replace').read()
        used, funcs = [], set()

        def sub(m):
            v = int(m.group(1), 16)
            a = v & 0x1FFFFFFF | 0x0C000000
            if (v >> 24) not in CODE_TOP:
                return m.group(0)
            if a in rep:                                   # inside a function: a table or an entry in the middle
                used.append(rep[a])
                return rep[a]
            if a in entry and v == a:                      # a game function's own address: its name, so that it follows the function
                funcs.add(entry[a])
                return '((int)%s)' % entry[a]
            return m.group(0)
        out = []
        for l in t.split('\n'):
            out.append(l if is_comment(l) else LIT.sub(sub, l))
        if used or funcs:
            names = sorted({m.group(1) for u in used for m in re.finditer(r'\(int\)(\w+)', u)})
            head = ''.join('extern char %s[];\n' % n for n in names)
            head += ''.join('int %s();\n' % n for n in sorted(funcs) if not re.search(r'\b%s\s*\(' % re.escape(n), t))
            nrep += len(used) + len(funcs)
            open(f, 'w').write(head + '\n'.join(out))
    print('%d table pieces, %d second copies, %d literals rewritten' % (len(cl), len(alt), nrep))


def prep_sources():
    if os.path.exists(OUT + '/units.json'):
        os.remove(OUT + '/units.json')
    gs = game_set()
    os.makedirs(OUT + '/src', exist_ok=True)
    for f in glob.glob(OUT + '/src/*.c'):
        os.remove(f)
    stems = sorted(set(gs.values()))
    allfn = {n for _, _, n in functions()}
    stripped = kept = 0
    for stem in stems:
        p = 'src/%s.c' % stem
        if not os.path.exists(p):
            continue
        t = open(p, errors='replace').read()
        for m in reversed(list(DEF.finditer(re.sub(r'/\*.*?\*/', lambda m_: ' ' * len(m_.group(0)), t, flags=re.S)))):
            n = m.group(1)
            if n in allfn and gs.get(n) != stem:
                b = consistency.block(t, n)
                if b:
                    t = t[:b[0]] + t[b[1]:]
                    stripped += 1
            elif n in gs:
                kept += 1
        open('%s/src/%s.c' % (OUT, stem), 'w').write(t)
    print('%d files; %d game functions kept, %d other definitions stripped' % (len(stems), kept, stripped))
    return gs


def docker(script):
    import equiv
    import subprocess
    sdk, rel = equiv.sdk_env()
    tw = 'Z:' + ('/sdk/' + rel).replace('/', '\\')
    return subprocess.run(['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':/app', '-w', '/app',
                           '-e', 'TW=' + tw, '-e', 'REL=' + rel, os.environ.get('DC_TOOLS_IMAGE', 'dc-tools'), 'bash', '-c', script],
                          stdin=subprocess.DEVNULL, capture_output=True, text=True)


COMPILE = r'''set -e
mkdir -p build/cbuild/$OBJD build/cbuild/log build/tmp
one() {
  s=$1; me=cb.$s
  mkdir -p build/tmp/$me
  if grep -q '#pragma inline_asm' build/cbuild/src/$s.c; then
    if SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\$me" wibo "/sdk/$REL/shc.exe" "build\\cbuild\\src\\$s.c" -code=asm -object="build\\cbuild\\$OBJD\\$s.s" ${FLAGS_PLAIN:-$FLAGS} > build/cbuild/log/$s.log 2>&1 && wibo "/sdk/$REL/asmsh.exe" "build\\cbuild\\$OBJD\\$s.s" -object="build\\cbuild\\$OBJD\\$s.obj" -cpu=sh4 -endian=little >> build/cbuild/log/$s.log 2>&1; then rm -f build/cbuild/log/$s.log; else echo "FAIL $s"; fi
    rm -rf build/tmp/$me; return
  fi
  if SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\$me" wibo "/sdk/$REL/shc.exe" "build\\cbuild\\src\\$s.c" -object="build\\cbuild\\$OBJD\\$s.obj" $FLAGS > build/cbuild/log/$s.log 2>&1; then rm -f build/cbuild/log/$s.log
  elif [ -n "$FLAGS_PLAIN" ] && SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\$me" wibo "/sdk/$REL/shc.exe" "build\\cbuild\\src\\$s.c" -object="build\\cbuild\\$OBJD\\$s.obj" $FLAGS_PLAIN > build/cbuild/log/$s.log 2>&1; then rm -f build/cbuild/log/$s.log; echo "PLAIN $s"
  else echo "FAIL $s"; fi
  rm -rf build/tmp/$me
}
export -f one
asm1() {   # $1 = source file, $2 = object
  wibo "/sdk/$REL/asmsh.exe" "$(echo "$1" | tr / '\\')" -object="$(echo "$2" | tr / '\\')" -cpu=sh4 -endian=little > build/cbuild/log/asm.$$.log 2>&1 || { echo "FAIL $1"; cat build/cbuild/log/asm.$$.log; }
  rm -f build/cbuild/log/asm.$$.log
}
if [ "$PIECES" = 1 ]; then
  for f in build/cbuild/asm/*.src; do asm1 $f build/cbuild/obj/$(basename ${f%.src}).obj; done
  for f in build/cbuild/ptr/*.src; do asm1 $f build/cbuild/obj/p_$(basename ${f%.src}).obj; done
fi
cat $LIST | xargs -P 2 -I{} bash -c 'one {}'
'''


def compile_all(stems=None, objd='obj', flags_edit=None):
    """Compile build/cbuild/src/<stem>.c (all by default) into build/cbuild/<objd>/. The first compile also assembles the pieces."""
    import equiv
    import subprocess
    flags = equiv.FLAGS.replace('-include=src', '-include=build\\\\cbuild\\\\src,src')
    flags = flags.replace('c=C,', 'c=P,')        # constants beside the code: they are counted and placed with it
    if flags_edit:
        flags = flags.replace(*flags_edit)
    plain = ''
    if OPTIMIZE:                                 # the optimizer's information (shciop/*.iop beside the objects); the code does not change.
        plain, flags = flags, flags + ' -goptimize'      # a file that does not compile with it is compiled without (then not optimized)
    all_ = stems is None
    if all_:
        stems = sorted(os.path.basename(f)[:-2] for f in glob.glob(OUT + '/src/*.c'))
        shutil.rmtree(OUT + '/ptr', ignore_errors=True)
        subprocess.run([sys.executable, 'tools/8-build/relocptr.py', OUT + '/ptr'], check=True)
    shutil.rmtree('%s/%s' % (OUT, objd), ignore_errors=True)
    os.makedirs('%s/%s' % (OUT, objd))
    open(OUT + '/list.txt', 'w').write('\n'.join(stems) + '\n')
    r = docker("export FLAGS='%s' FLAGS_PLAIN='%s' OBJD=%s PIECES=%d LIST=build/cbuild/list.txt; " % (flags, plain, objd, 1 if all_ else 0) + COMPILE)
    print(r.stdout[-3000:], r.stderr[-1500:])
    print('%d objects of %d' % (len(glob.glob('%s/%s/*.obj' % (OUT, objd))), len(stems)))


def provided():
    """Names the game block's objects define: every game-region function."""
    return {n for a, s, n in functions() if G0 <= a < G1}


def game_objects():
    """Object files (build/cbuild/obj) of the game block: the C and the pieces that go with it."""
    return [o for o in sorted(glob.glob(OUT + '/obj/*.obj')) if not os.path.basename(o).startswith(('p_', 'boot_', 'pad'))]


def lnk(sub_name, start, objs, optimize=''):
    """A link of the game objects alone (sizes only): every name outside the game block is defined at its original address."""
    import equiv
    have = provided()
    d = {'_' + k: a for k, a in equiv.names().items() if k not in have and not (G0 <= a < G1)}
    sub = ['elf', 'start %s' % start, 'output build\\cbuild\\%s.elf' % sub_name, 'print build\\cbuild\\%s.map' % sub_name]
    sub += ['input %s' % o.replace('/', '\\') for o in objs]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(d.items())] + ['exit']
    run_link(sub_name, sub, optimize)


def run_link(name, sub, optimize=''):
    """Write build/cbuild/<name>.sub (paths from the repo root) and link it: with lnk.exe, or with optlnksh -optimize=<optimize>.
    optlnksh starts OPTSH.EXE and lnk.exe itself and finds them only in the current folder (not on PATH, Unix or Windows), so it
    runs inside build/cbuild with copies of the three, and its paths are made relative to that folder."""
    if not optimize:
        open('%s/%s.sub' % (OUT, name), 'w').write('\n'.join(sub) + '\n')
        return docker('wibo "/sdk/$REL/lnk.exe" -subcommand="build\\cbuild\\%s.sub" > build/cbuild/%s.lnk.log 2>&1 || true' % (name, name))

    def rel(p):
        for a, b in (('build\\cbuild\\', ''), ('build\\', '..\\')):
            if p.startswith(a):
                return b + p[len(a):]
        return '..\\..\\' + p
    out = []
    for line in sub:
        k, _, v = line.partition(' ')
        out.append(k + ' ' + rel(v) if k in ('input', 'output', 'print') else line)
    open('%s/%s.sub' % (OUT, name), 'w').write('\n'.join(out) + '\n')
    return docker('cd build/cbuild && cp /sdk/$REL/OPTLNKSH.EXE /sdk/$REL/OPTSH.EXE /sdk/$REL/lnk.exe . && '
                  'PATH="$PWD:$PATH" wibo ./OPTLNKSH.EXE -optimize=%s -subcommand=%s.sub > %s.lnk.log 2>&1 || true' % (optimize, name, name))


def prelim():
    """The game block alone at one address, to measure every object; with OPTIMIZE also through the optimizer, whose saving
    (build/cbuild/opt.json: plain and optimized totals) layout uses to fill the parts."""
    start = 'P(%08X),C(0E000000),D(0E100000),B(0E200000)' % G0
    objs = game_objects()
    lnk('prelim', start, objs)
    if os.path.exists(OUT + '/opt.json'):
        os.remove(OUT + '/opt.json')
    if OPTIMIZE:
        lnk('prelim_opt', start, objs, OPTIMIZE)
        plain = sum(module_sizes(OUT + '/prelim.map').values())
        opt = sum(module_sizes(OUT + '/prelim_opt.map').values()) if os.path.exists(OUT + '/prelim_opt.map') else 0
        if opt:
            json.dump({'plain': plain, 'opt': opt}, open(OUT + '/opt.json', 'w'))
        print('prelim: %d bytes; through the optimizer (-optimize=%s): %s' % (plain, OPTIMIZE, opt or 'did not link (see build/cbuild/prelim_opt.lnk.log)'))


# Units: generated files whose declarations agree are compiled together, in address order, up to UNIT bytes: one literal pool per
# unit instead of per file, and calls inside a unit can be bsr. No function changes; only what is compiled together.
UNIT = 12000
OPEN = 1
U_PROTO = re.compile(r'^(?:extern\s+)?([A-Za-z_][\w \*]*?)\s*\b(\w+)\s*\(([^;{]*)\)\s*;', re.M)
U_DEFN = re.compile(r'^([A-Za-z_][\w \*]*?)\s*\b(\w+)\s*\(([^;{]*)\)\s*\n\{', re.M)
U_EXT = re.compile(r'^extern\s+(.*?)\s*\b(\w+)\s*(\[\])?;', re.M)


def u_sigs(t):
    d = {}
    for m in list(U_PROTO.finditer(t)) + list(U_DEFN.finditer(t)):
        d.setdefault(m.group(2), set()).add(re.sub(r'\s+', ' ', m.group(1).strip() + '(' + re.sub(r'\b[a-z]\d+\b', '', m.group(3)) + ')'))
    for m in U_EXT.finditer(t):
        d.setdefault(m.group(2), set()).add('ext ' + m.group(1))
    return d


def unity():
    """Replace build/cbuild/src/ by units (members kept in src_files/), compile them; a unit that does not compile goes back to its files."""
    gs = game_set()
    F = {n: a for a, s, n in functions()}
    sizes = module_sizes(OUT + '/prelim.map')
    first = {}
    for n, s in gs.items():
        first[s] = min(first.get(s, 1 << 40), F[n])
    shutil.rmtree(OUT + '/src_files', ignore_errors=True)
    shutil.copytree(OUT + '/src', OUT + '/src_files')
    stems = sorted([os.path.basename(f)[:-2] for f in glob.glob(OUT + '/src_files/*.c')], key=lambda s: first.get(s, 0))
    near = set()                                       # files a piece reaches with bsr/bra (4 KB): kept on their own, next to the piece
    for f in glob.glob(OUT + '/asm/*.src'):
        for tgt in re.findall(r'\b(?:BSR|BRA)\s+_(\w+)', open(f).read()):
            if tgt in gs:
                near.add(gs[tgt])
    units, open_units = {}, []
    for s in stems:
        t = open('%s/src_files/%s.c' % (OUT, s), errors='replace').read()
        sg = u_sigs(t)
        if s in near or not s.startswith('gen_') or re.search(r'^\s*#\s*(define|pragma)|^typedef|^static|^struct', t, re.M) or any(len(v) > 1 for v in sg.values()):
            units[s] = [s]
            continue
        # the newest of the open units that has room and agrees with the file's declarations takes it; a unit that falls
        # more than OPEN units behind is closed (units stay close to the code around them)
        for g in reversed(open_units):
            if g[2] + sizes.get(s, 0) <= UNIT and not any(x in g[1] and g[1][x] != v for x, v in sg.items()):
                break
        else:
            g = [[], {}, 0]
            open_units.append(g)
            if len(open_units) > OPEN:
                units['u%03d' % len(units)] = open_units.pop(0)[0]
        g[0].append(s)
        g[2] += sizes.get(s, 0)
        for x, v in sg.items():
            g[1][x] = g[1].get(x, set()) | v
    for g in open_units:
        units['u%03d' % len(units)] = g[0]
    for f in glob.glob(OUT + '/src/*.c'):
        os.remove(f)
    for n, m in units.items():
        texts = [open('%s/src_files/%s.c' % (OUT, s), errors='replace').read() for s in m]
        open('%s/src/%s.c' % (OUT, n), 'w').write('\n'.join(texts))
    compile_all()
    failed = [n for n in units if len(units[n]) > 1 and not os.path.exists('%s/obj/%s.obj' % (OUT, n))]
    for n in failed:
        os.remove('%s/src/%s.c' % (OUT, n))
        for s in units.pop(n):
            shutil.copy('%s/src_files/%s.c' % (OUT, s), '%s/src/%s.c' % (OUT, s))
            units[s] = [s]
    if failed:
        compile_all([s for s in units if len(units[s]) == 1 and not os.path.exists('%s/obj/%s.obj' % (OUT, s))], 'obj_f')
        for f in glob.glob(OUT + '/obj_f/*.obj'):
            shutil.copy(f, OUT + '/obj/')
    json.dump(units, open(OUT + '/units.json', 'w'))
    print('%d files in %d units (%d merged, %d did not compile and stay apart)' % (len(stems), len(units), sum(1 for m in units.values() if len(m) > 1), len(failed)))


CAP1 = FILL1 - FILL0                 # the fill block: boot code ends at FILL0, the entry stub starts at FILL1
CAP2 = G1 - G0                       # the old game code


def module_sizes(mapfile):
    """{module: bytes of its P section} from a linker map."""
    t = open(mapfile, errors='replace').read()
    cur, out = None, {}
    for m in re.finditer(r"^(?:(\w+)|)\s+H'([0-9A-F]{8})\s+-\s+H'([0-9A-F]{8})\s+H'([0-9A-F]{8})[^\n]*\n\s+(\S+)\s+(\S+)", t, re.M):
        cur = m.group(1) or cur
        if cur in ('P', 'P3'):
            out[m.group(6)] = out.get(m.group(6), 0) + int(m.group(4), 16)
    return out


def r4(n):
    return (n + 3) & ~3


def layout(margin=1.0, soft=False, ratios=None):
    """Which object goes where: part 1 = the fill block, part 2 = the old game code, part 3 = P3 (stems only). Writes layout.json.
    With the optimizer's saving measured (opt.json), a part takes its room times that ratio (times margin) of plain-linked bytes, and
    no pad objects are added (the optimized size of a part is only known after the link). ratios: ([plain bytes], [linked bytes])
    of each part as the last link measured them, used instead of the prelim ratio. soft: return False instead of stopping."""
    sizes = module_sizes(OUT + '/prelim.map')
    gs = game_set()
    if os.path.exists(OUT + '/units.json'):            # after the unit step a file's functions are in its unit
        unit_of_file = {s: u for u, m in json.load(open(OUT + '/units.json')).items() for s in m}
        gs = {n: unit_of_file.get(s, s) for n, s in gs.items()}
    pieces_ = {os.path.basename(f)[:-4] for f in glob.glob(OUT + '/asm/*.src')} - {'boot_tail', 'boot_stub', 'pad1', 'pad2'}
    stems = {os.path.basename(f)[:-2] for f in glob.glob(OUT + '/src/*.c')}
    unit_of = {o: [o] for o in pieces_ | stems}
    # a piece that branches (bsr, bra: 4 KB reach) to a function sits next to the file that holds the function
    for pc in sorted(pieces_):
        txt = open('%s/asm/%s.src' % (OUT, pc)).read()
        for tgt in set(re.findall(r'\b(?:BSR|BRA)\s+_(\w+)', txt)):
            other = gs.get(tgt) or next((q for q in pieces_ if q.endswith('_' + tgt)), None)
            if other and other != pc:
                u = unit_of[pc] + [x for x in unit_of[other] if x not in unit_of[pc]]
                for x in u:
                    unit_of[x] = u
    units, seen = [], set()
    for o in sorted(unit_of):
        if o not in seen:
            u = unit_of[o]
            seen.update(u)
            units.append(u)
    usize = lambda u: sum(r4(sizes[x]) for x in u)
    with_piece = [u for u in units if any(x in pieces_ for x in u)]
    only_stems = sorted([u for u in units if not any(x in pieces_ for x in u)], key=lambda u: -usize(u))
    parts = [[], [], []]
    room = [CAP1, CAP2]
    opt = json.load(open(OUT + '/opt.json')) if OPTIMIZE and os.path.exists(OUT + '/opt.json') else None
    if opt and ratios:
        room = fitmod.room(room, ratios[0], ratios[1], margin)
    elif opt:
        room = fitmod.room(room, opt['plain'], opt['opt'], margin)
    for u in with_piece + only_stems:
        n = usize(u)
        for k in (0, 1):
            if n <= room[k]:
                parts[k] += u
                room[k] -= n
                break
        else:
            if any(x in pieces_ for x in u):
                sys.exit('[ERROR] a piece did not fit in place: %s' % u)
            parts[2] += u
    json.dump({'parts': parts, 'pad': [0, 0] if opt else room}, open(OUT + '/layout.json', 'w'))
    print('%spart 1: %d objects, %d bytes spare; part 2: %d objects, %d bytes spare; part 3: %d objects, %d bytes at %08X' % (
        ('plain-linked sizes, filled to %.4f of the optimizer ratio: ' % margin) if opt else '',
        len(parts[0]), room[0], len(parts[1]), room[1], len(parts[2]), sum(r4(sizes[x]) for x in parts[2]), P3 or 0))
    if parts[2]:
        msg = '[ERROR] the game block does not fit the original space: %d bytes over' % sum(r4(sizes[x]) for x in parts[2])
        if soft:
            print(msg)
            return False
        sys.exit(msg)
    return True


def pad_object(name, nbytes):
    open('%s/asm/%s.src' % (OUT, name), 'w').write('          .SECTION    P, CODE, ALIGN=4\n' + "          .DATA.W    H'FFFD\n" * (nbytes // 2) + '          .END\n')


def named_addresses():
    """{name: address} of globals.txt and symbols.txt: names the C uses that no object defines."""
    out = {}
    for f in ('globals.txt', 'symbols.txt'):
        for l in open(f):
            p = l.split()
            if p and not l.startswith('#') and len(p) >= 2:
                try:
                    out.setdefault(p[1], int(p[0], 16))
                except ValueError:
                    pass
    return out


def renamed(src, dst, sect):
    """A copy of an asm piece with its section renamed (the linker lays each section out on its own)."""
    txt = open(src).read()
    txt = re.sub(r'(\.SECTION\s+)P(\s*,)', lambda m: m.group(1) + sect + m.group(2), txt)
    open(dst, 'w').write(txt)


def assemble(pairs):
    """Assemble [(source, object)] in the container; those whose object is newer than the source are skipped."""
    lines = []
    for s, o in pairs:
        if os.path.exists(o) and os.path.getmtime(o) >= os.path.getmtime(s):
            continue
        lines.append('asm1 %s %s' % (s, o))
    if not lines:
        return
    script = ('asm1() { wibo "/sdk/$REL/asmsh.exe" "$(echo "$1" | tr / \'\\\\\')" -object="$(echo "$2" | tr / \'\\\\\')" -cpu=sh4 -endian=little '
              '> build/cbuild/log/a.$$.log 2>&1 || { echo "FAIL $1"; cat build/cbuild/log/a.$$.log; }; rm -f build/cbuild/log/a.$$.log; }\n'
              'mkdir -p build/cbuild/log\n' + '\n'.join(lines))
    open(OUT + '/assemble.sh', 'w').write(script + '\n')
    r = docker('bash build/cbuild/assemble.sh')
    print(r.stdout[-2000:], r.stderr[-500:])


def link():
    """Compile every part into its own section, put the image in order and link at the executable's base."""
    lay = json.load(open(OUT + '/layout.json'))
    parts, pad = lay['parts'], lay['pad']
    sect = ['PB1', 'PB2', 'P3']
    pieces_ = {os.path.basename(f)[:-4] for f in glob.glob(OUT + '/asm/*.src')}
    for k in range(3):
        stems = [x for x in parts[k] if x not in pieces_]
        compile_all(stems, 'obj%d' % (k + 1), ('p=P,c=P,d=D,b=B', 'p=%s,c=%s,d=D,b=B' % (sect[k], sect[k])))
    for k, n in ((0, 'pad1'), (1, 'pad2')):
        if pad[k]:
            pad_object(n, pad[k])
    jobs = []
    for k in range(2):
        os.makedirs('%s/asm_%d' % (OUT, k + 1), exist_ok=True)
        for x in parts[k] + (['pad%d' % (k + 1)] if pad[k] else []):
            s = '%s/asm/%s.src' % (OUT, x)
            if os.path.exists(s):
                renamed(s, '%s/asm_%d/%s.src' % (OUT, k + 1, x), sect[k])
                jobs.append(('%s/asm_%d/%s.src' % (OUT, k + 1, x), '%s/obj%d/%s.obj' % (OUT, k + 1, x)))
    os.makedirs(OUT + '/obj_t', exist_ok=True)
    os.makedirs(OUT + '/asm_t', exist_ok=True)
    order = [l.strip() for l in open('objects.txt') if l.strip()]
    ptr = {os.path.basename(f) for f in glob.glob(OUT + '/ptr/*.src')}
    for f in order:
        if int(f[:8], 16) >= G1:
            src = '%s/ptr/%s' % (OUT, f) if f in ptr else 'asm/%s' % f
            dst = '%s/asm_t/%s' % (OUT, f)
            if not os.path.exists(dst) or open(dst).read() != re.sub(r'(\.SECTION\s+)P(\s*,)', lambda m: m.group(1) + 'PT' + m.group(2), open(src).read()):
                renamed(src, dst, 'PT')
            jobs.append((dst, '%s/obj_t/%s.obj' % (OUT, f[:-4])))
    b = boot_split()
    for n in ('boot_tail', 'boot_stub'):
        if os.path.exists('%s/asm/%s.src' % (OUT, n)):
            jobs.append(('%s/asm/%s.src' % (OUT, n), '%s/obj/%s.obj' % (OUT, n)))
    assemble(jobs)
    lo = b[0] if b else FILL0
    ins = ['build/obj/%s.obj' % f[:-4] for f in order if int(f[:8], 16) < lo]
    if b:
        ins.append(OUT + '/obj/boot_tail.obj')
    ins += ['%s/obj1/%s.obj' % (OUT, x) for x in parts[0]] + (['%s/obj1/pad1.obj' % OUT] if pad[0] else [])
    if FILL1 < G0:
        ins.append(OUT + '/obj/boot_stub.obj')
    ins += ['%s/obj2/%s.obj' % (OUT, x) for x in parts[1]] + (['%s/obj2/pad2.obj' % OUT] if pad[1] else [])
    ins += ['%s/obj_t/%s.obj' % (OUT, f[:-4]) for f in order if int(f[:8], 16) >= G1]
    ins += ['%s/obj3/%s.obj' % (OUT, x) for x in parts[2]]
    used = set()
    for f in glob.glob(OUT + '/src/*.c') + glob.glob(OUT + '/asm/*.src') + glob.glob(OUT + '/ptr/*.src'):
        used.update(re.findall(r'[A-Za-z_]\w*', open(f, errors='replace').read()))
    exported = set()
    for f in glob.glob('asm/*.src'):
        for l in open(f):
            m = re.match(r'\s+\.EXPORT\s+_(\w+)', l)
            if m:
                exported.add(m.group(1))
    d = {'_' + n: a for n, a in named_addresses().items() if n in used and n not in exported}
    base = open('BASE').read().strip()
    start = ['P(%s)' % base] + (['PB1(%08X)' % FILL0] if FILL1 > FILL0 else []) + (['PS(%08X)' % FILL1] if FILL1 < G0 else [])
    start += ['PB2(%08X)' % G0, 'PT(%08X)' % G1] + (['P3(%08X)' % P3] if P3 is not None and parts[2] else [])
    sub = ['elf', 'start ' + ','.join(start),
           'output build\\cbuild\\game.elf', 'print build\\cbuild\\game.map']
    sub += ['input %s' % o.replace('/', '\\') for o in ins]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(d.items())] + ['exit']
    for f in ('game.elf', 'game.bin', 'game.map'):
        if os.path.exists('%s/%s' % (OUT, f)):
            os.remove('%s/%s' % (OUT, f))
    run_link('game', sub, OPTIMIZE)
    docker('wibo "/sdk/$REL/elf2bin.exe" -s %s "build\\cbuild\\game.elf" "build\\cbuild\\game.bin" > build/cbuild/game.e2b.log 2>&1 || true' % base)
    log = open(OUT + '/game.lnk.log', errors='replace').read().replace('\r', '')
    bad = [l for l in log.split('\n') if l.startswith('**') and 'CANNOT FIND SECTION' not in l]
    print('\n'.join(bad[:40]), '\n%d linker messages' % len(bad))
    print(open(OUT + '/game.e2b.log', errors='replace').read()[-300:])


def fit_build():
    """layout, link, and read the fit from the linked map: every part inside its place, nothing left for P3, and no short branch the
    linker could not reach. With the optimizer each part shrinks by its own ratio, so a part that comes out over is filled less."""
    optimized = OPTIMIZE and os.path.exists(OUT + '/opt.json')
    ratios, guess = None, list(MARGINS if optimized else (1.0,))
    margin = guess.pop(0)
    for attempt in range(FIT_TRIES if optimized else 1):
        if attempt:
            if ratios:
                margin = MEASURED_MARGIN                 # each part's own ratio, as measured: only a small margin
            elif guess:
                margin = guess.pop(0)                    # nothing measured (the link failed): a smaller margin changes the input
            else:
                break
        if not layout(margin, soft=True, ratios=ratios):
            break
        link()
        log = ''.join(open(OUT + f, errors='replace').read() for f in ('/game.lnk.log', '/game.e2b.log') if os.path.exists(OUT + f))
        bad = fitmod.fatal(log)
        if bad or not os.path.exists(OUT + '/game.map'):
            print('margin %.3f: the link failed: %s' % (margin, '; '.join(bad[:3]) or 'no map'))
            if not any('address space duplicate' in b.lower() for b in bad):
                continue                                 # nothing to measure: the next margin changes the input
        secs = fitmod.sections(open(OUT + '/game.map', errors='replace').read())
        ok, lines = fitmod.check(secs, {'PB1': (FILL0, FILL1), 'PB2': (G0, G1)}, ('P3',))
        miss = fitmod.unreached(log)
        print('margin %.3f: %s%s' % (margin, '; '.join(lines), ('; short branches that do not reach: ' + ', '.join(miss)) if miss else ''))
        ov = fitmod.overlaps(open(OUT + '/game.elf', 'rb').read()) if os.path.exists(OUT + '/game.elf') else [('no ELF', '')]
        if ov:
            print('  overlapping segments in the linked file: %s' % ov[:3])
        if ok and not miss and not bad and not ov and os.path.exists(OUT + '/game.bin'):
            print('fits: the game block lies in the original space')
            return
        if 'PB1' in secs and 'PB2' in secs:           # each part's own ratio, from what this link made of it, for the next layout
            sizes = module_sizes(OUT + '/prelim.map')
            parts = json.load(open(OUT + '/layout.json'))['parts']
            plain = [sum(r4(sizes.get(x, 0)) for x in parts[k]) for k in (0, 1)]
            ratios = (plain, [secs['PB1'][2], secs['PB2'][2]])
            print('  measured: part 1 %d plain -> %d, part 2 %d plain -> %d' % (plain[0], ratios[1][0], plain[1], ratios[1][1]))
    sys.exit('[ERROR] the game block does not fit the original space')


def main(argv):
    if len(argv) < 2 or argv[1] not in ('prep', 'tables', 'prelim', 'unity', 'layout', 'compile', 'link', 'fit'):
        sys.exit(__doc__)
    if argv[1] == 'prep':
        prep_sources()
        pieces()
    elif argv[1] == 'tables':
        cl, lab = tables(OUT + '/src')
        for s, e, n, v in cl:
            print('%08X-%08X %4d bytes %s %s' % (s, e, e - s, n, ' '.join('%X' % x for x in v)))
        print('%d clusters, %d bytes; labels in code: %s' % (len(cl), sum(e - s for s, e, _, _ in cl), ' '.join('%X:%s' % kv for kv in sorted(lab.items()))))
    elif argv[1] == 'prelim':
        prelim()
    elif argv[1] == 'fit':
        fit_build()
    elif argv[1] == 'unity':
        unity()
    elif argv[1] == 'link':
        link()
    elif argv[1] == 'layout':
        layout()
    elif argv[1] == 'compile':
        compile_all()


if __name__ == '__main__':
    main(sys.argv)
