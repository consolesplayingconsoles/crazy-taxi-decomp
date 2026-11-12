#!/usr/bin/env python3
"""Compare this repo's C with the game, function by function, instruction by instruction. Run in the repo.

    python3 tools/fcmp.py src/<file>.c [function ...] [-v]

Compiles the file with the build's flags (shc under wibo, SDK_PATH from .env; options from its @unit header), and for each function it defines
that functions.txt names: MATCH when its instructions equal the game's with addresses masked (tools/1-2-baseline/sdk_masked.py), else the first instruction that differs
and, with -v, both listings side by side. Literal pools are not compared here: the build does that, on the whole unit.
"""
import os, re, shutil, struct, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import toolpath  # noqa: E402,F401  (the shared tools: sdk_masked, shdis, fill)
_a, sys.argv = sys.argv, ['x']
try:
    import sdk_masked as M
except SystemExit:
    pass
sys.argv = _a
import shdis
args = [a for a in sys.argv[1:] if a not in ('-v', '--pairs', '--loads', '--score')]
verbose = '-v' in sys.argv
want_pairs = '--pairs' in sys.argv
want_loads = '--loads' in sys.argv
want_score = '--score' in sys.argv       # also print SCORE <function> <n>: instructions not in common with the original (0: a match), for the permuter       # also print LOADS <function> C <symbols in load order> and LOADS <function> O <addresses in load order>       # also print PAIR <function> <symbol> <address>: each name the C loads beside what the original loads there
cfile, want = args[0], set(args[1:])
sdk = next(re.match(r'\s*SDK_PATH="?([^"\n]+)"?', l).group(1) for l in open('.env') if re.match(r'\s*SDK_PATH=', l))
T = os.path.join(sdk, 'bin')
TW = 'Z:' + T.replace('/', '\\')
tool = lambda n: next(os.path.join(T, x) for x in os.listdir(T) if x.lower() == n)
W = os.environ.get('FCMP_DIR', 'build/fc')         # several at once (the permuter): a folder each
WB = W.replace('/', '\\')
shutil.rmtree(W, ignore_errors=True)
os.makedirs(W + '/tmp')
head = open(cfile, errors='replace').readline()
m = re.match(r'\s*/\*\s*@unit\s+\S+(?:\s+@data\s+\S+)?\s*(.*?)\s*\*/', head)
opts = m.group(1).split() if m else []
shutil.copy(cfile, W + '/u.c')
env = dict(os.environ, SHC_LIB=TW, SHC_INC=TW, SHC_TMP=WB + '\\tmp')
opts = re.sub(r'@[db]data\s+\S+', '', ' '.join(opts)).split()      # the unit's D/B pieces are build.sh's
fset = next((o[1:-5] for o in opts if re.match(r'\+\w+flags$', o)), None)      # +egflags ...: another set of flags, as build.sh does
FLAGS = open(os.path.join(toolpath.ROOT, '1-2-baseline', 'shc_flags%s.txt' % ('.' + fset if fset else ''))).read().split()      # the build's flags (build.sh reads the same file)
FL = [f for f in FLAGS if not ('-speed' in opts and f == '-size') and not f.startswith('-include=')]      # a unit built for speed: not for size
FL.append('-include=' + ','.join(['src'] + [d.replace('/', '\\') for d in ('src', 'modules', 'events', 'sdk/include', 'sdk') if os.path.isdir(d)]))
if '+r04' in opts:                       # the older compiler (SDK_R04_PATH), as build.sh does
    r04 = os.environ.get('SDK_R04_PATH') or next((re.match(r'\s*SDK_R04_PATH="?([^"\n]+)"?', l).group(1) for l in open('.env') if re.match(r'\s*SDK_R04_PATH=', l)), None)
    if not r04:
        sys.exit('[ERROR] this unit asks for SHC 5.1r04 (+r04): set SDK_R04_PATH')
    T = r04; TW = 'Z:' + T.replace('/', '\\')
    env['SHC_LIB'] = env['SHC_INC'] = TW
r = subprocess.run(['wibo', next(os.path.join(T, x) for x in os.listdir(T) if x.lower() == 'shc.exe'), WB + '\\u.c', '-code=asm', '-object=' + WB + '\\u.s', *FL, *[o for o in opts if not o.startswith('+')]], env=env, capture_output=True, text=True, errors='replace')
if not os.path.exists(W + '/u.s'):
    sys.exit(r.stdout + r.stderr)
if '+synth16' in opts:                   # the unit asks for the game compiler's constants (tools/1-2-baseline/fill.py, synth16): compare what the build assembles
    import fill
    lines = fill.synth16(open(W + '/u.s', encoding='latin-1').readlines(), align=True)
    open(W + '/u.s', 'w', encoding='latin-1').writelines(lines)
text = open(W + '/u.s', errors='replace').read()
ra = subprocess.run(['wibo', tool('asmsh.exe'), WB + '\\u.s', '-object=' + WB + '\\u.obj', '-cpu=sh4', '-endian=little'], env=env, capture_output=True, text=True, errors='replace')
if not os.path.exists(W + '/u.obj'):
    sys.exit('[ERROR] assembler: ' + ' '.join(l for l in (ra.stdout + ra.stderr).splitlines() if '(E)' in l or 'ERROR' in l.upper())[:600])
imports = re.findall(r'\.IMPORT\s+(\w+)', text)
open(W + '/u.sub', 'w').write('\n'.join(['elf', 'start P(0E100000)', 'output ' + WB + '\\u.elf', 'print ' + WB + '\\u.map', 'input ' + WB + '\\u.obj'] +
                                         ['define %s(0DEAD000)' % n for n in imports] + ['exit']) + '\n')
subprocess.run(['wibo', tool('lnk.exe'), '-subcommand=' + WB + '\\u.sub'], env=env, capture_output=True)
subprocess.run(['wibo', tool('elf2bin.exe'), '-s', '0E100000', WB + '\\u.elf', WB + '\\u.bin'], env=env, capture_output=True)
if not os.path.exists(W + '/u.bin'):
    sys.exit('[ERROR] link: no output (build/fc/u.map)')
code = open(W + '/u.bin', 'rb').read()
syms = {m_[0]: int(m_[1], 16) for m_ in re.findall(r'(_\w+)\s*\n?\s*H\'([0-9A-Fa-f]{8})', open(W + '/u.map', errors='replace').read())}
# each function's instructions: from its label to its last instruction before the pool (the .s says which lines are code)
funcs, cur = [], None
for line in text.splitlines():
    mm = re.match(r'^(_\w+):\s*; function: (\w+)', line)
    if mm:
        cur = [mm.group(2), mm.group(1), 0, 0]
        funcs.append(cur)
        continue
    if cur is None:
        continue
    d = line.strip()
    if d.startswith('.SECTION') and not re.search(r'\.SECTION\s+P\b', d):
        cur = None
        continue
    if d.startswith('.DATA.L'):
        cur.append(('L', cur[2], [x.strip() for x in d.split(None, 1)[1].split(',')]))
    if d.startswith(('.DATA.L', '.RES.L')):
        cur[2] += 4 * (len(d.split(None, 1)[1].split(',')) if d.startswith('.DATA') else int(d.split()[1]))
    elif d.startswith(('.DATA.W', '.RES.W')):
        cur[2] += 2 * (len(d.split(None, 1)[1].split(',')) if d.startswith('.DATA') else int(d.split()[1]))
    elif re.match(r'^\s+[A-Z][A-Z0-9/.]*\b', line) and not d.startswith('.'):
        cur[2] += 2
        cur[3] = cur[2]
exe = open('1ST_READ.BIN', 'rb').read()
base = int(open('BASE').read().strip(), 16)
F = {l.split()[3]: (int(l.split()[1], 16), int(l.split()[2])) for l in open('functions.txt') if l.startswith('F ')}
dis = lambda w, pc: shdis.decode(w, pc)[0]
import difflib
for item in funcs:
    name, sym, _, last = item[:4]
    datas = item[4:]
    if want and name not in want or name not in F or sym not in syms:
        continue
    a, size = F[name]
    o = syms[sym] - 0x0E100000
    mine = list(struct.unpack_from('<%dH' % (last // 2), code, o))
    n = min(size // 2, len(mine)) if size // 2 >= len(mine) else len(mine)
    orig = list(struct.unpack_from('<%dH' % (min(len(mine), size // 2)), exe, a - base))
    same = len(mine) <= size // 2 and M.mask(tuple(mine)) == M.mask(tuple(orig)) if mine else False
    if want_score:
        ow_s = struct.unpack_from('<%dH' % (size // 2), exe, a - base)
        # the original's instructions only: up to its first pool load target
        lim_s, k_s = a + size, 0
        for j, w2 in enumerate(ow_s):
            pc = a + 2 * j
            if pc >= lim_s:
                break
            if w2 >> 12 == 0xD:
                t2 = (pc & ~3) + 4 + (w2 & 0xFF) * 4
                if a < t2 < lim_s:
                    lim_s = t2
            k_s = j + 1
        om_s = M.mask(tuple(ow_s[:k_s]))
        mm_s = M.mask(tuple(mine))
        same_n = sum(b_[2] for b_ in difflib.SequenceMatcher(None, mm_s, om_s, autojunk=False).get_matching_blocks())
        print('SCORE %s %d' % (name, (len(mm_s) - same_n) + (len(om_s) - same_n)))
    if want_loads:
        poolsym = {}
        for kind, off, items in datas:
            for j, s_ in enumerate(items):
                poolsym[o + off + 4 * j] = s_
        cs, os_ = [], []
        for i, w1 in enumerate(mine):
            if w1 >> 12 == 0xD:
                t1 = ((0x0E100000 + o + 2 * i) & ~3) + 4 + (w1 & 0xFF) * 4 - 0x0E100000
                s_ = poolsym.get(t1) or poolsym.get(t1 - 2) or '?'
                cs.append(s_[1:] if s_.startswith('_') else s_)
        ow_ = struct.unpack_from('<%dH' % (size // 2), exe, a - base)
        lim = a + size
        for j, w2 in enumerate(ow_):
            pc = a + 2 * j
            if pc >= lim:
                break
            if w2 >> 12 == 0xD:
                t2 = (pc & ~3) + 4 + (w2 & 0xFF) * 4
                if a < t2 < lim:
                    lim = t2
                if t2 + 4 - base <= len(exe):
                    os_.append('%08X' % struct.unpack_from('<I', exe, t2 - base)[0])
            elif w2 >> 12 in (0xA, 0xB):            # a call to a function of the same file (bsr), or a tail call (bra out of the function)
                dd = w2 & 0xFFF
                dd = dd - 0x1000 if dd & 0x800 else dd
                t2 = pc + 4 + 2 * dd
                if w2 >> 12 == 0xB or not (a <= t2 < a + size):
                    os_.append('%08X' % t2)
        print('LOADS %s C %s' % (name, ' '.join(cs)))
        print('LOADS %s I %s' % (name, ' '.join(sorted(set(x[1:] for x in imports if x.startswith('_'))))))
        print('LOADS %s O %s' % (name, ' '.join(os_)))
    if want_pairs:
        # the C's pool: each .DATA.L of this function at its offset; an instruction that loads one, aligned with the original's
        poolsym = {}
        for kind, off, items in datas:
            for j, s_ in enumerate(items):
                poolsym[o + off + 4 * j] = s_
        ow_ = struct.unpack_from('<%dH' % (size // 2), exe, a - base)
        mm, om = M.mask(tuple(mine)), M.mask(tuple(ow_))
        for tag, i1, i2, j1, j2 in difflib.SequenceMatcher(None, mm, om, autojunk=False).get_opcodes():
            if tag != 'equal':
                continue
            for i, j in zip(range(i1, i2), range(j1, j2)):
                w1, w2 = mine[i], ow_[j]
                if w1 >> 12 == 0xD and w2 >> 12 == 0xD:
                    t1 = ((0x0E100000 + o + 2 * i) & ~3) + 4 + (w1 & 0xFF) * 4 - 0x0E100000
                    t2 = ((a + 2 * j) & ~3) + 4 + (w2 & 0xFF) * 4
                    s_ = poolsym.get(t1) or poolsym.get(t1 - 2)      # an .ALIGN before the pool is not counted
                    if s_ and re.match(r'^_\w+$', s_) and t2 + 4 - base <= len(exe):
                        print('PAIR %s %s %08X' % (name, s_[1:], struct.unpack_from('<I', exe, t2 - base)[0]))
    if same:
        print('%-28s MATCH      %d bytes of code' % (name, 2 * len(mine)))
        continue
    mo = M.mask(tuple(mine)); oo = M.mask(tuple(struct.unpack_from('<%dH' % (size // 2), exe, a - base)))
    k = next((i for i in range(min(len(mo), len(oo))) if mo[i] != oo[i]), min(len(mo), len(oo)))
    print('%-28s differs    C %d bytes of code, original %d (with its pool); first difference at +%d' % (name, 2 * len(mine), size, 2 * k))
    if verbose:
        ow = struct.unpack_from('<%dH' % (size // 2), exe, a - base)
        for i in range(max(len(mine), len(ow))):
            x = '%04x %-26s' % (mine[i], dis(mine[i], 0x0E100000 + o + 2 * i)) if i < len(mine) else ' ' * 31
            y = '%04x %s' % (ow[i], dis(ow[i], a + 2 * i)) if i < len(ow) else ''
            print('  %s%3d  %s | %s' % ('>' if i == k else ' ', 2 * i, x[:31], y[:40]))
