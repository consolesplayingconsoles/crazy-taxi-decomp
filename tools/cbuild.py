#!/usr/bin/env python3
"""A build of the game from the proven C: the game code region is the compiled C, everything else is the original. Run in the repo.

    python3 tools/cbuild.py prep       build copies of the C, the extra pieces, the relocatable assembly (build/cbuild/)
    python3 tools/cbuild.py compile    compile the build copies (parallel, one container)
    python3 tools/cbuild.py link       assemble, lay out the game block, link, check the result

src/ is not changed: the build works on copies in build/cbuild/src/. Layout (CT): the boot code stays where it is; the fill block
0C011C28-0C020000 and the game code 0C020080-0C0739C0 hold the game block (compiled C, the pieces that have no C, tables and tails
the C names by address); the entry stub at 0C020000, the NAOMI library, the data and the SDK stay at their addresses.
"""
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
import shdis

G0, G1 = 0x0C020080, 0x0C0739C0
FILL0, FILL1 = 0x0C011C28, 0x0C020000
OUT = 'build/cbuild'
DEF = re.compile(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\n?\{', re.M)


def functions():
    return sorted((int(l.split()[1], 16), int(l.split()[2]), l.split()[3]) for l in open('functions.txt') if l.startswith('F '))


def game_set():
    """{function: file stem} for the proven game-region functions that have C: the stem is the one whose cases prove it."""
    eq = set(open('tests/equivalent.txt').read().split())
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


def in_code_numbers(srcdir):
    """{address: [(file, line)]} for the numbers in the C that point inside the game code region but are not a function's entry."""
    ent = {a for a, s, n in functions()}
    out = {}
    for f in sorted(glob.glob(srcdir + '/*.c')):
        for i, l in enumerate(open(f, errors='replace').read().split('\n'), 1):
            if l.lstrip().startswith(('/*', '*')):
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
    open(asm + '/boot_tail.src', 'w').write(words_piece('bootSerialGetByte', 0x0C011AFE, FILL0, entry, section='P', align=2))
    open(asm + '/boot_stub.src', 'w').write(words_piece('bootEntryStub', FILL1, G0, entry, section='PS'))
    for f in glob.glob(OUT + '/src/*.c'):
        t = open(f, errors='replace').read()
        used = []

        def sub(m):
            v = int(m.group(1), 16)
            a = v & 0x1FFFFFFF | 0x0C000000
            if (v >> 24) in CODE_TOP and a in rep:
                used.append(rep[a])
                return rep[a]
            return m.group(0)
        out = []
        for l in t.split('\n'):
            out.append(l if l.lstrip().startswith(('/*', '*')) else LIT.sub(sub, l))
        if used:
            names = sorted({m.group(1) for u in used for m in re.finditer(r'\(int\)(\w+)', u)})
            head = ''.join('extern char %s[];\n' % n for n in names)
            open(f, 'w').write(head + '\n'.join(out))
    print('%d table pieces, %d second copies, %d literals rewritten' % (len(cl), len(alt), len(rep)))


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
    if SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\$me" wibo "/sdk/$REL/shc.exe" "build\\cbuild\\src\\$s.c" -code=asm -object="build\\cbuild\\$OBJD\\$s.s" $FLAGS > build/cbuild/log/$s.log 2>&1 && wibo "/sdk/$REL/asmsh.exe" "build\\cbuild\\$OBJD\\$s.s" -object="build\\cbuild\\$OBJD\\$s.obj" -cpu=sh4 -endian=little >> build/cbuild/log/$s.log 2>&1; then rm -f build/cbuild/log/$s.log; else echo "FAIL $s"; fi
    rm -rf build/tmp/$me; return
  fi
  if SHC_LIB="$TW" SHC_INC="$TW" SHC_TMP="Z:\\app\\build\\tmp\\$me" wibo "/sdk/$REL/shc.exe" "build\\cbuild\\src\\$s.c" -object="build\\cbuild\\$OBJD\\$s.obj" $FLAGS > build/cbuild/log/$s.log 2>&1; then rm -f build/cbuild/log/$s.log; else echo "FAIL $s"; fi
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
    all_ = stems is None
    if all_:
        stems = sorted(os.path.basename(f)[:-2] for f in glob.glob(OUT + '/src/*.c'))
        shutil.rmtree(OUT + '/ptr', ignore_errors=True)
        subprocess.run([sys.executable, 'tools/relocptr.py', OUT + '/ptr'], check=True)
    shutil.rmtree('%s/%s' % (OUT, objd), ignore_errors=True)
    os.makedirs('%s/%s' % (OUT, objd))
    open(OUT + '/list.txt', 'w').write('\n'.join(stems) + '\n')
    r = docker("export FLAGS='%s' OBJD=%s PIECES=%d LIST=build/cbuild/list.txt; " % (flags, objd, 1 if all_ else 0) + COMPILE)
    print(r.stdout[-3000:], r.stderr[-1500:])
    print('%d objects of %d' % (len(glob.glob('%s/%s/*.obj' % (OUT, objd))), len(stems)))


def provided():
    """Names the game block's objects define: every game-region function."""
    return {n for a, s, n in functions() if G0 <= a < G1}


def game_objects():
    """Object files (build/cbuild/obj) of the game block: the C and the pieces that go with it."""
    return [o for o in sorted(glob.glob(OUT + '/obj/*.obj')) if not os.path.basename(o).startswith(('p_', 'boot_', 'pad'))]


def lnk(sub_name, start, objs):
    """A link of the game objects alone (sizes only): every name outside the game block is defined at its original address."""
    import equiv
    have = provided()
    d = {'_' + k: a for k, a in equiv.names().items() if k not in have and not (G0 <= a < G1)}
    sub = ['elf', 'start %s' % start, 'output build\\cbuild\\%s.elf' % sub_name, 'print build\\cbuild\\%s.map' % sub_name]
    sub += ['input %s' % o.replace('/', '\\') for o in objs]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(d.items())] + ['exit']
    open('%s/%s.sub' % (OUT, sub_name), 'w').write('\n'.join(sub) + '\n')
    docker('wibo "/sdk/$REL/lnk.exe" -subcommand="build\\cbuild\\%s.sub" > build/cbuild/%s.lnk.log 2>&1 || true' % (sub_name, sub_name))


# Units: generated files whose declarations agree (or differ only in int parameters and an int or void return, which
# one old-style declaration covers) are compiled together, in address order, up to UNIT bytes: one literal pool per
# unit instead of per file, and calls inside a unit can be bsr. No function changes; only what is compiled together.
UNIT = 12000
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


def u_loose(vs):
    if any(s.startswith('ext ') for s in vs):
        return False
    return {s.split('(')[0] for s in vs} <= {'int', 'void'} and not any('float' in s or 'double' in s for s in vs)


def u_text(texts):
    al, defined = {}, {}
    for tx in texts:
        for k, v in u_sigs(tx).items():
            al.setdefault(k, set()).update(v)
        for m in U_DEFN.finditer(tx):
            defined[m.group(2)] = re.sub(r'\s+', ' ', m.group(1).strip())
    loose = [k for k, v in al.items() if len(v) > 1]
    head = ['%s %s();' % (defined.get(k, 'int'), k) for k in loose]
    if loose:
        pat = re.compile(r'^(?:extern\s+)?[A-Za-z_][\w \*]*?\s*\b(%s)\s*\([^;{]*\)\s*;\s*$' % '|'.join(map(re.escape, loose)), re.M)
        texts = [pat.sub('', tx) for tx in texts]
    return '\n'.join(head) + '\n' + '\n'.join(texts)


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
    units, cur, curs, tot = {}, [], {}, 0
    for s in stems:
        t = open('%s/src_files/%s.c' % (OUT, s), errors='replace').read()
        sg = u_sigs(t)
        if s in near or not s.startswith('gen_') or re.search(r'^\s*#\s*(define|pragma)|^typedef|^static|^struct', t, re.M) or any(len(v) > 1 for v in sg.values()):
            units[s] = [s]
            continue
        if cur and (tot + sizes.get(s, 0) > UNIT or any(x in curs and curs[x] != v and not u_loose(curs[x] | v) for x, v in sg.items())):
            units['u%03d' % len(units)] = cur
            cur, curs, tot = [], {}, 0
        cur.append(s)
        tot += sizes.get(s, 0)
        for x, v in sg.items():
            curs[x] = curs.get(x, set()) | v
    if cur:
        units['u%03d' % len(units)] = cur
    for f in glob.glob(OUT + '/src/*.c'):
        os.remove(f)
    for n, m in units.items():
        texts = [open('%s/src_files/%s.c' % (OUT, s), errors='replace').read() for s in m]
        open('%s/src/%s.c' % (OUT, n), 'w').write(texts[0] if len(m) == 1 else u_text(texts))
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
P3 = 0x0C5D0000                      # unused RAM (docs/engine.md, RAM map): the code that does not fit in place


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


def layout():
    """Which object goes where: part 1 = the fill block, part 2 = the old game code, part 3 = P3 (stems only). Writes layout.json."""
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
    json.dump({'parts': parts, 'pad': room}, open(OUT + '/layout.json', 'w'))
    print('part 1: %d objects, %d bytes spare; part 2: %d objects, %d bytes spare; part 3: %d objects, %d bytes at %08X' % (
        len(parts[0]), room[0], len(parts[1]), room[1], len(parts[2]), sum(r4(sizes[x]) for x in parts[2]), P3))


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
    jobs.append((OUT + '/asm/boot_tail.src', OUT + '/obj/boot_tail.obj'))
    jobs.append((OUT + '/asm/boot_stub.src', OUT + '/obj/boot_stub.obj'))
    assemble(jobs)
    lo = 0x0C011AFE
    ins = ['build/obj/%s.obj' % f[:-4] for f in order if int(f[:8], 16) < lo]
    ins.append(OUT + '/obj/boot_tail.obj')
    ins += ['%s/obj1/%s.obj' % (OUT, x) for x in parts[0]] + (['%s/obj1/pad1.obj' % OUT] if pad[0] else [])
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
    sub = ['elf', 'start P(%s),PB1(%08X),PS(%08X),PB2(%08X),PT(%08X),P3(%08X)' % (base, FILL0, FILL1, G0, G1, P3),
           'output build\\cbuild\\game.elf', 'print build\\cbuild\\game.map']
    sub += ['input %s' % o.replace('/', '\\') for o in ins]
    sub += ['define %s(%08X)' % (n, a) for n, a in sorted(d.items())] + ['exit']
    open(OUT + '/game.sub', 'w').write('\n'.join(sub) + '\n')
    for f in ('game.elf', 'game.bin', 'game.map'):
        if os.path.exists('%s/%s' % (OUT, f)):
            os.remove('%s/%s' % (OUT, f))
    docker('wibo "/sdk/$REL/lnk.exe" -subcommand="build\\cbuild\\game.sub" > build/cbuild/game.lnk.log 2>&1 || true; '
           'wibo "/sdk/$REL/elf2bin.exe" -s %s "build\\cbuild\\game.elf" "build\\cbuild\\game.bin" > build/cbuild/game.e2b.log 2>&1 || true' % base)
    log = open(OUT + '/game.lnk.log', errors='replace').read().replace('\r', '')
    bad = [l for l in log.split('\n') if l.startswith('**') and 'CANNOT FIND SECTION' not in l]
    print('\n'.join(bad[:40]), '\n%d linker messages' % len(bad))
    print(open(OUT + '/game.e2b.log', errors='replace').read()[-300:])


def main(argv):
    if len(argv) < 2 or argv[1] not in ('prep', 'tables', 'prelim', 'unity', 'layout', 'compile', 'link'):
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
        lnk('prelim', 'P(0C020080),C(0E000000),D(0E100000),B(0E200000)', game_objects())
        print(open(OUT + '/prelim.lnk.log', errors='replace').read()[-1500:])
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
