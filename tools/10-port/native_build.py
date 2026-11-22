"""native_build.py [--jobs N] [--only PATTERN] [--compile-only] [--keep-objects]: builds the native (x86-64 Linux) game from the C in src/.

Steps:
  compile  every src/game/**/*.c with the host compiler into build/native/obj/ (errors listed per file in build/native/errors.txt)
  census   what the objects define and need (nm)
  stubs    a stub for each function the game needs and no object defines (it reports itself once and returns 0);
           symbols.txt's data names become absolute symbols at their console addresses
  table    the dispatch table: console address -> host function, for calls through pointers and addresses
  link     build/native/<your disc image's name>, with port/runtime and the play math

The game's C runs unchanged. It is compiled for x32 (x86-64 instructions and register calling convention, 32-bit int, long
and pointers: the SH-4's sizes, so every record keeps its console layout), then converted to ELF64 and linked with the
x86-64 runtime. Its memory sits at the console's addresses (port/runtime/runner.c maps it) and a call to a console address
faults into the dispatch table. See port/README.md.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import argparse, concurrent.futures as cf, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))


def sdk_unit_text(source, wanted):
    """A unit the port compiles from one SDK source file: the file as it is, with its includes, types, data and static
    helpers, and of its other functions only the wanted ones ({name: its text}). The rest are left out: the repo has its
    own C for those, and a function has one C in the build."""
    from sdk_place import definitions
    out = source
    for name, start, end in sorted(definitions(source), key=lambda d: -d[1]):
        if name not in wanted and not re.match(r'\s*static\b', source[start:end]):
            out = out[:start] + out[end:]
    have = {d[0] for d in definitions(out)}
    for name, text in sorted(wanted.items()):        # a definition the reader did not find in the file: once, from its own text
        if name not in have and text.strip() not in out:
            out = out.rstrip('\n') + '\n\n' + text.rstrip('\n') + '\n'
    return re.sub(r'\n{4,}', '\n\n\n', out)


SDK_INC = {}        # unit file name -> the folders its headers are in (fixed_src fills it)
INC_NAMES = ('inc', 'include', 'fl', 'fm')          # folders of a source tree that hold shared headers (as sdk_source.py)


def _sdk_plan(root):
    """({source file path: {function: its text}}, [(function, why it gets no unit)]) for the functions whose only C is the
    SDK's own source: sdk-verified.txt lists them, sdk-source/<function>.c holds each one's text and names its source file,
    and the folders tools/5-generated/sdk_source.py was given are staged under build/sdk-source/work. Left out: a function
    with C in src/ or sdk/ (that C is the one the build uses) and a function inside a `hardware` range of sdk.txt"""
    import layout
    from sdk_place import definitions
    cwd = os.getcwd()
    os.chdir(root)
    try:
        if not os.path.exists('sdk-verified.txt'):
            return {}, []
        have = set()
        for f in layout.c_files():
            have |= {d[0] for d in definitions(open(f, errors='replace').read())}
        listed = {l.split()[3]: int(l.split()[1], 16) for l in open('functions.txt') if l.startswith('F ') and len(l.split()) > 3}
        need = sorted(n for n in (l.strip() for l in open('sdk-verified.txt')) if n and not n.startswith('#')
                      and n in listed and n not in have and not layout.is_hardware(listed[n]))
        where = {}
        work = os.path.join('build', 'sdk-source', 'work')
        for r, dirs, files in os.walk(work):
            dirs[:] = [d for d in dirs if not (r == work and (d == 'out' or d.startswith('sdkinc')))]
            for x in files:
                if x.lower().endswith('.c'):
                    where.setdefault(x, []).append(os.path.join(r, x))
        by_file, missed = {}, []
        for n in need:
            if not os.path.exists('sdk-source/%s.c' % n):
                missed.append((n, 'sdk-source/%s.c is not there' % n))
                continue
            lines = open('sdk-source/%s.c' % n, errors='replace').read().split('\n')
            m = re.match(r'/\* (\S+?),', lines[0])
            name = m.group(1) if m else '?'
            path = next((p for p in where.get(name, []) if re.search(r'\b%s\s*\(' % re.escape(n), open(p, errors='replace').read())), None)
            if path:
                by_file.setdefault(path, {})[n] = '\n'.join(lines[1:])
            else:
                missed.append((n, 'its source file %s was not found' % name))
        return by_file, missed
    finally:
        os.chdir(cwd)


def sdk_source_missed(root):
    """[(function, why)]: the functions with no C that are not hardware and that the SDK source gave no unit for. Empty
    when hardware is all the build leaves out of the SDK source"""
    return _sdk_plan(root)[1]


def sdk_source_units(root):
    """{unit file name: (text, [header folders])}: the fallback to the SDK's own source, one unit per source file. The header
    folders are the file's own, its source tree's include folders, then the SDK's, in that order (as sdk_source.py compiled it)"""
    by_file, _ = _sdk_plan(root)
    work = os.path.join('build', 'sdk-source', 'work')
    out, used = {}, set()
    for path in sorted(by_file):
        tree = os.path.join(work, os.path.relpath(path, work).split(os.sep)[0])
        dirs = [os.path.dirname(path)]
        for r, ds, _fs in os.walk(os.path.join(root, tree)):
            dirs += [os.path.relpath(os.path.join(r, d), root) for d in sorted(ds) if d.lower() in INC_NAMES]
        incs = sorted(os.path.join(work, d) for d in os.listdir(os.path.join(root, work)) if d.startswith('sdkinc'))
        dirs += incs + [os.path.join(i, 'SHC') for i in incs if os.path.isdir(os.path.join(root, i, 'SHC'))]
        dirs += [d for d in ('sdk-headers',) if os.path.isdir(os.path.join(root, d))]
        base = 'sdksrc_' + re.sub(r'\W', '_', os.path.splitext(os.path.basename(path))[0]).lower()
        name, k = base, 2
        while name in used:
            name, k = '%s_%d' % (base, k), k + 1
        used.add(name)
        out[name + '.c'] = (sdk_unit_text(open(os.path.join(root, path), errors='replace').read(), by_file[path]),
                            [os.path.join(root, d) for d in dirs])
    return out


def interpreted(stub_fns, fns, root):
    """of the functions with no C (fns: name -> address), the ones the port runs from the original code. One inside a
    `hardware` range of sdk.txt (tools/common/layout.py) is not: its code talks to hardware the host does not have, the port's
    host code stands in for that library from above, and a stub that reports itself is all it gets"""
    import layout
    cwd = os.getcwd()
    os.chdir(root)
    try:
        return [n for n in stub_fns if not layout.is_hardware(fns[n])]
    finally:
        os.chdir(cwd)


def fixed_src():
    """build/native/src_fixed: the C as the port compiles it, in one folder: src/ as the decomp has it (the port never
    changes it: a fix to the C is made in src/, for the console build too), and the SDK's C from sdk/ beside it
    (tools/common/layout.py). Files are rewritten only when their text changes"""
    root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
    src, out = os.path.join(root, 'src'), os.path.join(root, 'build', 'native', 'src_fixed')
    os.makedirs(out, exist_ok=True)
    keep = set()
    for f in os.listdir(src):
        if not os.path.isfile(os.path.join(src, f)):
            continue
        keep.add(f)
        data = open(os.path.join(src, f), 'rb').read()
        dst = os.path.join(out, f)
        if not os.path.exists(dst) or open(dst, 'rb').read() != data:
            open(dst, 'wb').write(data)
    import layout                                    # tools/common/layout.py: where the C lives
    cwd = os.getcwd()
    os.chdir(root)
    try:
        sdk = layout.sdk_files()
        layout.c_files()                             # stops on a file name two folders share: the copy below is flat
    finally:
        os.chdir(cwd)
    for p in sdk:                                    # the SDK's C (sdk/<library>/), beside the game's: a port needs it built
        f = os.path.basename(p)
        keep.add(f)
        data = open(os.path.join(root, p), 'rb').read()
        dst = os.path.join(out, f)
        if not os.path.exists(dst) or open(dst, 'rb').read() != data:
            open(dst, 'wb').write(data)
    for f, (text, dirs) in sorted(sdk_source_units(root).items()):      # the fallback: the SDK's own source, where the repo has no C
        keep.add(f)
        SDK_INC[f] = dirs
        data = text.encode('utf-8', 'replace')
        dst = os.path.join(out, f)
        if not os.path.exists(dst) or open(dst, 'rb').read() != data:
            open(dst, 'wb').write(data)
    for n, why in sdk_source_missed(root):
        print('no C and not hardware: %s (%s)' % (n, why), flush=True)
    for f in os.listdir(out):
        if f not in keep:
            os.remove(os.path.join(out, f))
    return out


os.environ['PORT_SRC'] = fixed_src()
import sh4abi  # noqa: E402

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
OUT = os.path.join(ROOT, 'build', 'native')
OBJ = os.path.join(OUT, 'obj')
CC = os.environ.get('CC', 'clang')
GAME_CC = [CC, '--target=x86_64-linux-gnux32']

GAME_FLAGS = ['-std=gnu89', '-O1', '-g', '-w', '-fno-pie', '-fno-pic', '-fwrapv', '-fno-strict-aliasing', '-fsigned-char',
              '-ffp-contract=off', '-fno-builtin', '-fcommon', '-fno-stack-protector', '-fno-omit-frame-pointer',
              '-ftrivial-auto-var-init=zero',
              '-Wno-error=incompatible-pointer-types', '-Wno-error=int-conversion', '-Wno-error=implicit-function-declaration',
              '-Wno-error=implicit-int', '-Wno-error=return-type', '-Wno-error=incompatible-function-pointer-types',
              '-I' + os.environ['PORT_SRC'], '-I' + os.path.join(ROOT, 'port', 'runtime'),
              '-include', os.path.join(ROOT, 'port', 'runtime', 'prelude.h')]
HOST_FLAGS = ['-std=gnu11', '-O2', '-g', '-Wall', '-fno-pie', '-fno-pic', '-I' + os.path.join(ROOT, 'port', 'runtime'),
              '-I' + os.path.join(ROOT, 'port', 'third_party', 'sa_numeric')]
RUNTIME = sorted('port/runtime/' + f for f in os.listdir(os.path.join(ROOT, 'port', 'runtime')) if f.endswith('.c'))
NUMERIC = ['port/third_party/sa_numeric/math.c']


def game_sources(only):
    """the C in src/ (one folder): the game's and the libraries'. A definition at an address sdk.txt gives to a library goes
    weak, so the port's host code for that function overrides it"""
    d = os.environ['PORT_SRC']
    return sorted(os.path.join(d, f) for f in os.listdir(d) if f.endswith('.c') and (not only or re.search(only, f)))


def lib_ranges():
    """sdk.txt's library ranges and single functions: [(start, end)]"""
    out = []
    for line in open(os.path.join(ROOT, 'sdk.txt')):
        p = line.split()
        if len(p) >= 3 and p[0] == 'range':
            out.append((int(p[1], 16), int(p[2], 16)))
        elif len(p) >= 2 and p[0] == 'func':
            out.append((int(p[1], 16), int(p[1], 16) + 1))
    return out


# host bodies for the game's SHC inline assembly (#pragma inline_asm), by function name. The rest of the source compiles as is.
ASM_BODIES = {
    'ia_getsr': 'return port_sr;', 'get_sr': 'return port_sr;',
    'ia_setsr': 'port_sr = v;', 'set_sr': 'port_sr = v;',
    'getfr15': 'return port_fr15;',             # the caller's leftover fr15, truncated: see port/README.md
    'mvn208': '__builtin_memcpy(d, s, 208);',
    'masksr': 'port_sr = (port_sr | 0xF0) ^ 0x10;', 'unmasksr': 'port_sr &= ~0xF0;',
    'setgbr': '(void)v;', 'iaOcbp': '(void)p;', 'iaOcbi': '(void)p;', 'iaOcbwb': '(void)p;', 'trapa48': '', 'trapa65': '',
}
ASM_PROLOGUE = 'extern int port_sr, port_fr15;\nvoid port_asm_unimplemented(const char *);\n'


# Crazy Taxi's C reaches the boot ROM vectors (0x8C0000B0) and some hardware registers by literal address: x86-64 encodes an
# absolute address above 2 GB as a sign-extended 32-bit displacement (0xFFFFFFFF8C0000B0), which faults. Each such literal inside a
# function body goes through port_k() (runtime/prelude.h), which keeps it in a register, zero-extended.
HIGH = re.compile(r'(?<![\w.])(0[xX][89a-fA-F][0-9a-fA-F]{7})(?![\w.])')


def high_literals(t):
    """an absolute address above 2 GB (0x8C..., 0xFF...) written as a literal: x86-64 encodes it as a sign-extended 32-bit
    displacement, which reaches 0xFFFFFFFF8.......  Inside a function's body each such literal goes through port_k(), which
    keeps it in a register, zero-extended. Outside one (a data table) it stays: an initializer must be a constant; a macro's
    body is wrapped, since it is used inside functions. A
    hardware register's address stays a constant too: mmio_calls() needs it in the IR. `case` labels are left alone"""
    from sdk_place import definitions
    inside = [False] * (t.count('\n') + 1)
    for name, start, end in definitions(t):
        for k in range(t.count('\n', 0, start), t.count('\n', 0, end) + 1):
            if k < len(inside):
                inside[k] = True
    out = []
    for k, line in enumerate(t.split('\n')):
        macro = re.match(r'\s*#\s*define\b', line)          # a macro's body ends up inside the functions that use it
        if macro or (inside[k] and line[:1] in (' ', '\t') and not re.match(r'\s*case\b', line) and not re.match(r'\s*#', line)):
            line = HIGH.sub(lambda m: m.group(0) if is_mmio(int(m.group(1), 16)) else 'port_k(%s)' % m.group(1), line)
        out.append(line)
    return '\n'.join(out)


def native_text(src):
    t = _native_text(src)
    if t is None:
        t = open(src, errors='replace').read()
    return high_literals(t)


def _native_text(src):
    """the source as the native build compiles it: calls rewritten to their callees' SH-4 argument locations
    (sh4abi.py), inline assembly bodies replaced by ASM_BODIES; None if unchanged"""
    t0 = open(src, errors='replace').read()
    t = sh4abi.forward_text(t0, os.path.basename(src)) or t0
    t = sh4abi.abi_text(t, os.path.basename(src)) or t
    t = sh4abi.frame_text(t, os.path.basename(src)) or t
    t = sh4abi.cast_text(t) or t
    t = sh4abi.float_ret_text(t) or t
    # the structures of words: prelude.h's, one type for every file
    t = re.sub(r'(?m)^typedef struct \{ int w\[(\d+)\]; \} Stk\1;$', '', t)
    if re.search(r'(?m)^typedef struct \{ int w; \} Stk1;$', t):   # a hand-written one-word form
        t = re.sub(r'(?m)^typedef struct \{ int w; \} Stk1;$', '', t)
        t = re.sub(r'\b(s\d+)\.w = ', r'\1.w[0] = ', t)
    if '#pragma inline_asm' not in t:
        return t if t is not t0 else None
    # inline assembly with no host body (the library's renderer kernels and hardware access, which the port replaces at the
    # API): it reports itself when reached. The function is found by its name wherever it is in the file: Crazy Taxi's generated
    # files put the pragma at the top and the definition below the structure declarations
    for name in dict.fromkeys(re.findall(r'#pragma inline_asm\((\w+)\)', t)):
        host = ASM_BODIES.get(name, 'port_asm_unimplemented("%s");' % name)
        t = re.sub(r'(?m)^((?:static\s+)?[A-Za-z_][^\n{;]*\b%s\s*\([^)]*\))\s*\{.*?\n\}' % name,
                   lambda m: '%s\n{ %s }' % (m.group(1).strip(), host), t, count=1, flags=re.S)
    return ASM_PROLOGUE + t


def is_mmio(a):
    """a console address whose register needs the port's model of the hardware (port/runtime/hw.c): the system bus block
    (interrupt status, DMA, Maple, G2) and the PowerVR's registers in any mirror, the SH-4's timers and DMA controller,
    the AICA's clock, and the sound driver's ready word in sound RAM (0x0080005C: the NAOMI library's nlsndInit reads it
    in a counted loop after it starts the sound CPU; hw.c answers once that CPU has had its time)"""
    a &= 0xFFFFFFFF
    if a >> 24 == 0xFF:
        return a >> 16 in (0xFFD8, 0xFFA0)
    if a >> 29 == 7:                                  # the store queues (0xE0000000..) and other P4 areas
        return False
    p = a & 0x1FFFFFFF
    return 0x005F6800 <= p < 0x005F9000 or 0x00710000 <= p < 0x00710010 or p == 0x0080005C


MMIO_T = {'i8': '8', 'i16': '16', 'i32': '32', 'float': 'f'}


def mmio_calls(ir):
    """the IR with each load and store at a constant hardware register address turned into a call to port_mmio_r* /
    port_mmio_w* (hw.c): those registers act (write 1 to clear, counters that run, DMA that starts on a write), plain
    memory would not"""
    used = set()

    def gep(m):                                       # ((struct oC_uint *)0xFFA00020)->v: the IR keeps it as base + offset in one constant
        addr = (int(m.group(2)) + int(m.group(1), 16)) & 0xFFFFFFFF
        if not is_mmio(addr):
            return m.group(0)
        return 'inttoptr (i32 %d to ptr)' % (addr - (1 << 32) if addr >> 31 else addr)

    ir = re.sub(r'getelementptr inbounds \(%struct\.o([0-9A-Fa-f]+)_\w+, ptr inttoptr \(i32 (-?\d+) to ptr\), i32 0, i32 1\)', gep, ir)

    def load(m):
        ty, addr = m.group(2), int(m.group(3))
        if ty not in MMIO_T or not is_mmio(addr):
            return m.group(0)
        used.add(('r', ty))
        return '%s = call %s @port_mmio_r%s(i32 %d)' % (m.group(1), ty, MMIO_T[ty], addr)

    def store(m):
        ty, val, addr = m.group(2), m.group(3), int(m.group(4))
        if ty not in MMIO_T or not is_mmio(addr):
            return m.group(0)
        used.add(('w', ty))
        return '%scall void @port_mmio_w%s(i32 %d, %s %s)' % (m.group(1), MMIO_T[ty], addr, ty, val)

    ir = re.sub(r'(%[\w.]+) = load (?:volatile )?(\w+), ptr inttoptr \(i32 (-?\d+) to ptr\)(?:, align \d+)?', load, ir)
    ir = re.sub(r'(?m)^(\s+)store (?:volatile )?(\w+) ([^,]+), ptr inttoptr \(i32 (-?\d+) to ptr\)(?:, align \d+)?', store, ir)
    for kind, ty in sorted(used):
        name = '@port_mmio_%s%s(' % (kind, MMIO_T[ty])
        if re.search(r'(?m)^declare [^\n]*' + re.escape(name), ir):     # the pass runs twice over a module (compile_one)
            continue
        if kind == 'r':
            ir += '\ndeclare %s @port_mmio_r%s(i32)\n' % (ty, MMIO_T[ty])
        else:
            ir += '\ndeclare void @port_mmio_w%s(i32, %s)\n' % (MMIO_T[ty], ty)
    return ir


def split_args(s):
    """an IR argument list split at its top-level commas"""
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{<':
            depth += 1
        elif ch in ')]}>':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def kr_float_calls(ir):
    """the IR with floats passed as floats to functions declared without parameters (K&R `extern int f();`). C promotes
    such an argument to double; SHC with -fpu=single has double = float, so on the console the callee gets the float in
    its float register, and the game's C was written for that. A real variadic function (a fixed parameter, then ...)
    keeps C's promotion."""
    kr = set(re.findall(r'(?m)^declare [^@\n]*@([\w.$]+)\(\.\.\.\)', ir))
    if not kr:
        return ir
    widened = dict(re.findall(r'(%[\w.]+) = fpext float (%[\w.]+|[-+0-9.e]+|0x[0-9A-Fa-f]+) to double', ir))
    call = re.compile(r'call (\w+) \(([^()]*)\.\.\.\) @([\w.$]+)\((.*)\)')

    def fix(m):
        ret, name, args = m.group(1), m.group(3), m.group(4)
        if name not in kr:
            return m.group(0)
        out, types = [], split_args(m.group(2))
        for i, a in enumerate(split_args(args)):
            mm = re.match(r'double (noundef )?(\S+)$', a)
            if mm:
                v = mm.group(2)
                if v in widened:
                    v = widened[v]
                elif not re.match(r'^[-+0-9.e]+$|^0x', v):
                    return m.group(0)       # a double that was no float: leave the call as it is
                a = 'float %s%s' % (mm.group(1) or '', v)
                if i < len(types):
                    types[i] = 'float'
            out.append(a)
        return 'call %s (%s...) @%s(%s)' % (ret, ''.join(x + ', ' for x in types), name, ', '.join(out))

    return '\n'.join(call.sub(fix, line) if '...) @' in line else line for line in ir.split('\n'))


def obj_of(src):
    return os.path.join(OBJ, os.path.splitext(os.path.basename(src))[0] + '.o')


KEEP_OBJECTS = False        # --keep-objects


def needs_compile(obj_time, input_times, tool_times, keep_objects):
    """whether a file is compiled again: it has no object, or its source or the prelude is newer than the object, or the
    build's own scripts are (a change to them may change what any file compiles to). --keep-objects leaves that last one
    out: for a script change that alters only a few files, whose objects you remove or build first with --only"""
    if obj_time is None:
        return True
    return obj_time <= max(list(input_times) + ([] if keep_objects else list(tool_times)))


def compile_one(src):
    o = obj_of(src)
    if not needs_compile(os.path.getmtime(o) if os.path.exists(o) else None, [os.path.getmtime(src), os.path.getmtime(PRELUDE)],
                         [os.path.getmtime(__file__), os.path.getmtime(sh4abi.__file__)], KEEP_OBJECTS):
        return src, 0, ''
    text = native_text(src)
    if text is not None:
        src = os.path.join(OUT, 'src', os.path.basename(src))
        os.makedirs(os.path.dirname(src), exist_ok=True)
        open(src, 'w').write(text)
    # through LLVM IR, so that the game's memory behaves as on the console:
    #  - every load and store left after the locals become registers is volatile: the game spins on words its interrupts
    #    change and expects each access it wrote to happen, in order (SHC does no more than that); this also keeps clang
    #    from merging stores into wide moves
    #  - every alignment the code claims above 4 is capped there: the console's data guarantees no more (a global array
    #    sits wherever the image put it), where the x86-64 ABI would give large arrays 16
    base = o[:-2]
    # an SDK source unit: its headers, and machine.h's compiler side (clang says it is GCC, which picks SH-4 assembly there)
    extra = ['-U__GNUC__'] + ['-I' + d for d in SDK_INC[os.path.basename(src)]] if os.path.basename(src) in SDK_INC else []
    r = subprocess.run(GAME_CC + GAME_FLAGS + extra + ['-O0', '-Xclang', '-disable-O0-optnone', '-S', '-emit-llvm', src, '-o', base + '.0.ll'],
                       capture_output=True, text=True)
    if r.returncode == 0:
        r = subprocess.run(['opt', '-passes=sroa,mem2reg', '-S', base + '.0.ll', '-o', base + '.1.ll'], capture_output=True, text=True)
    if r.returncode == 0:
        ir = kr_float_calls(mmio_calls(open(base + '.1.ll').read()))
        ir = re.sub(r'= load (?!volatile)', '= load volatile ', ir)
        ir = re.sub(r'(?m)^(\s+)store (?!volatile)', r'\1store volatile ', ir)
        ir = re.sub(r'(call void @llvm\.mem(?:cpy|move|set)[^\n]*), i1 false\)', r'\1, i1 true)', ir)
        ir = re.sub(r'\balign (8|16|32|64)\b', 'align 4', ir)
        open(base + '.2.ll', 'w').write(ir)
        # a register reached through a variable (`R9 = (0xA05F8060); ... *(unsigned int *)((R9 + 0x0)) = R3;`, the original's
        # register held in a register) is a constant address only once the optimizer has folded it: the accesses are looked
        # at again after it. Left as a store, x86-64 encodes the address as a sign-extended displacement and the game faults
        r = subprocess.run(['opt', '-passes=default<O1>', '-S', base + '.2.ll', '-o', base + '.3.ll'], capture_output=True, text=True)
    if r.returncode == 0:
        open(base + '.4.ll', 'w').write(mmio_calls(open(base + '.3.ll').read()))
        r = subprocess.run(GAME_CC + ['-O1', '-g', '-w', '-fno-pic', '-c', base + '.4.ll', '-o', o + '.x32'], capture_output=True, text=True)
    for ext in ('.0.ll', '.1.ll', '.2.ll', '.3.ll', '.4.ll'):
        if os.path.exists(base + ext):
            os.unlink(base + ext)
    if r.returncode == 0:
        c = subprocess.run(['objcopy', '-O', 'elf64-x86-64', o + '.x32', o], capture_output=True, text=True)
        os.unlink(o + '.x32')
        return src, c.returncode, r.stderr + c.stderr
    return src, r.returncode, r.stderr


def nm(path):
    r = subprocess.run(['nm', path], capture_output=True, text=True)
    defined, undefined = set(), set()
    for line in r.stdout.splitlines():
        parts = line.split()
        if len(parts) == 2 and parts[0] == 'U':
            undefined.add(parts[1])
        elif len(parts) == 3 and parts[1] in 'TDBCRVWtdbr' and parts[1].isupper():
            defined.add(parts[2])
    return defined, undefined


def read_functions():
    fns = {}
    for line in open(os.path.join(ROOT, 'functions.txt')):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            fns[p[3]] = int(p[1], 16)
    return fns


def read_symbols():
    """{name: console address} of the data the game's C uses by name: globals.txt's named globals and symbols.txt's
    addresses (symbols.txt wins where both name one). A name the C uses that neither has gets storage of its own"""
    syms = {}
    for f in ('globals.txt', 'symbols.txt'):
        path = os.path.join(ROOT, f)
        if not os.path.exists(path):
            continue
        for line in open(path):
            p = line.split()
            if len(p) >= 2 and re.match(r'^[0-9a-fA-F]{8}$', p[0]):
                syms[p[1]] = int(p[0], 16)
    return syms


PRELUDE = os.path.join(ROOT, 'port', 'runtime', 'prelude.h')


# functions that take an argument list: the SH-4's is a plain pointer to the values, the host's a structure, so the host's
# version cannot serve the game's calls. The game's own C for them reads the game's kind of list
ARG_LIST = {'vsprintf', 'vsnprintf', 'vprintf', 'vfprintf', 'vsscanf', 'vscanf', 'vfscanf'}


def host_names(exported):
    """of the names the host's C library exports, the ones the game's calls are sent to: all but the argument-list ones"""
    return set(exported) - ARG_LIST


def host_libc():
    """the names the host's C library and maths library export"""
    names = set()
    for lib in ('libc.so.6', 'libm.so.6'):
        path = subprocess.run([CC, '-print-file-name=' + lib], capture_output=True, text=True).stdout.strip()
        r = subprocess.run(['nm', '-D', '--defined-only', path], capture_output=True, text=True)
        names |= {l.split()[-1].split('@')[0] for l in r.stdout.splitlines() if l.strip()}
    return host_names(names)


def program_name(root):
    """(file name, title) of the native program: the name of your disc image, the GDI in the repo's .env, without its folder
    and .gdi ("Crazy Taxi (Europe) (En,Ja)"), for both. Read from the .env, which the build container sees in the repo,
    not from the repo's folder (the container mounts it at /work). The runtime gets them as PORT_NAME (its messages, its
    save folder) and PORT_TITLE (its window). No GDI: the build stops and says so"""
    gdi = None
    env = os.path.join(root, '.env')
    if os.path.exists(env):
        for line in open(env, errors='replace'):
            m = re.match(r'\s*GDI\s*=\s*(.*?)\s*$', line)
            if m:
                gdi = m.group(1).strip('"\'')
    if not gdi:
        sys.exit('native_build: GDI is not set in %s: the program is named after your disc image (GDI="/path/to/your disc.gdi")'
                 % env)
    name = re.sub(r'(?i)\.gdi$', '', os.path.basename(gdi.replace('\\', '/')))
    return name, name


PORT_SETTINGS = {
    'PORT_WIDESCREEN': ('1: a 16:9 picture, a wider view of the game with its menus kept 4:3 in the middle and its HUD at '
                        'the sides; 0: the console\'s 4:3', r'([01])'),
}


def port_settings(root):
    """{key: re match} of the port's settings in the repo's .env (PORT_SETTINGS: each key, what it is, its form). They are built
    into the runtime. A key missing, empty or in another form stops the build with every such key listed: there is no default"""
    env, vals = os.path.join(root, '.env'), {}
    if os.path.exists(env):
        for line in open(env, errors='replace'):
            m = re.match(r'\s*([A-Z_][A-Z0-9_]*)\s*=\s*(.*?)\s*$', line)
            if m and m.group(1) in PORT_SETTINGS:
                vals[m.group(1)] = m.group(2).strip('"\'')
    out, bad = {}, []
    for k, (what, form) in PORT_SETTINGS.items():
        m = re.fullmatch(form, vals.get(k, ''))
        if m:
            out[k] = m
        else:
            bad.append('  %s: %s (now: %s)' % (k, what, repr(vals[k]) if k in vals else 'missing'))
    if bad:
        sys.exit('native_build: the port\'s settings in %s are missing or wrong:\n%s' % (env, '\n'.join(bad)))
    return out


def aspect_defines(root):
    """the runtime's picture shape from PORT_WIDESCREEN: 16:9 for 1, the console's 4:3 for 0 (port.h: PORT_ASPECT_W, _H)"""
    wide = port_settings(root)['PORT_WIDESCREEN'].group(1) == '1'
    return ['-DPORT_ASPECT_W=%d' % (16 if wide else 4), '-DPORT_ASPECT_H=%d' % (9 if wide else 3)]


def host_compile(src, quiet=False):
    o = os.path.join(OUT, os.path.splitext(os.path.basename(src))[0] + '.host.o')
    name, title = program_name(ROOT)
    names = ['-DPORT_NAME="%s"' % name.replace('"', '').replace('\\', ''), '-DPORT_TITLE="%s"' % title.replace('"', '').replace('\\', '')]
    names += aspect_defines(ROOT)
    r = subprocess.run([CC] + HOST_FLAGS + names + (['-w'] if quiet else []) + ['-c', os.path.join(ROOT, src), '-o', o],
                       capture_output=True, text=True)
    if r.returncode:
        sys.exit('host compile failed: %s\n%s' % (src, r.stderr))
    return o


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--jobs', type=int, default=os.cpu_count())
    ap.add_argument('--only')
    ap.add_argument('--compile-only', action='store_true')
    ap.add_argument('--keep-objects', action='store_true',
                    help='do not recompile a file only because the build scripts changed')
    a = ap.parse_args()
    os.makedirs(OBJ, exist_ok=True)

    global KEEP_OBJECTS
    KEEP_OBJECTS = a.keep_objects
    srcs = game_sources(a.only)
    failed = []
    print('compile: %d game files' % len(srcs), flush=True)
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for i, (src, rc, err) in enumerate(ex.map(compile_one, srcs), 1):
            if rc:
                failed.append((src, err))
            if i % 100 == 0 or i == len(srcs):
                print('compile: %d of %d files done, %d failed' % (i, len(srcs), len(failed)), flush=True)
    with open(os.path.join(OUT, 'errors.txt'), 'w') as f:
        for src, err in failed:
            f.write('### %s\n%s\n' % (os.path.relpath(src, ROOT), err))
    print('compile: %d of %d game files built, %d failed (build/native/errors.txt)' % (len(srcs) - len(failed), len(srcs), len(failed)))
    if a.compile_only or a.only:
        return 1 if failed else 0

    built = [s for s in srcs if os.path.exists(obj_of(s)) and s not in {f for f, _ in failed}]
    objs = [obj_of(s) for s in built]
    defined, undefined, definers = set(), set(), {}
    for s in built:
        d, u = nm(obj_of(s))
        defined |= d
        undefined |= u
        for n in d:
            definers.setdefault(n, []).append(s)
    # a function with two definitions (a matching unit and an older Equivalent copy): the unit's wins, the others go weak
    weaken = {}
    for n, ss in definers.items():
        if len(ss) > 1:
            win = ss[0]
            for s in ss:
                if s != win:
                    weaken.setdefault(s, []).append(n)
    # the library's C: every definition weak, so that port/runtime's host code for a library function wins over it
    fns, ranges = read_functions(), lib_ranges()
    fns_all = fns
    for s in built:
        lib_defs = [n for n in nm(obj_of(s))[0] if n in fns_all and any(a <= fns_all[n] < b for a, b in ranges)]
        if lib_defs:
            weaken.setdefault(s, []).extend(n for n in lib_defs if n not in weaken.get(s, []))
    # a definition named like a host C library function (memcpy, strlen, sprintf...) stays local to its object: the
    # host's code must reach glibc's, and the game's calls go there too (glibc takes the game's 32-bit pointers)
    libc_names = host_libc()
    localize = {}
    for n, ss in definers.items():
        if n in libc_names and not n.startswith('FUN_'):
            for s in ss:
                localize.setdefault(s, []).append(n)
    for s, names in localize.items():
        subprocess.run(['objcopy'] + ['--localize-symbol=' + n for n in names] + [obj_of(s)], check=True)
        for n in names:
            defined.discard(n)
            if s in weaken and n in weaken[s]:
                weaken[s].remove(n)
    if localize:
        print('host libc: %d definitions kept local (%s)' % (sum(map(len, localize.values())),
                                                         ' '.join(sorted({n for v in localize.values() for n in v}))))
    # the game's own main (0x8C010080) is renamed game_main: the host's main is runner.c's
    if 'main' in fns:
        for s in built:
            d, u = nm(obj_of(s))
            if 'main' in d or 'main' in u:
                subprocess.run(['objcopy', '--redefine-sym', 'main=game_main', obj_of(s)], check=True)
        defined.discard('main')
        undefined.discard('main')
        defined.add('game_main')
        fns['game_main'] = fns.pop('main')
    for s, names in weaken.items():
        if names:
            subprocess.run(['objcopy'] + ['--weaken-symbol=' + n for n in names] + [obj_of(s)], check=True)
    if weaken:
        print('duplicates: %d names defined twice; the matching unit\'s or the first definition kept' % sum(map(len, weaken.values())))
    hobjs, runtime_defined = [], set()
    for src in RUNTIME + NUMERIC:
        o = host_compile(src)
        hobjs.append(o)
        runtime_defined |= nm(o)[0]
    syms, libc_names = read_symbols(), host_libc()
    need = sorted(undefined - defined - runtime_defined)
    libc = [n for n in need if n in libc_names and not n.startswith('FUN_')]
    stub_fns = [n for n in need if n in fns and n not in libc]
    interp_fns = interpreted(stub_fns, fns, ROOT)        # not the hardware drivers (sdk.txt's `hardware` lines)
    data = [n for n in need if n in syms and n not in fns and n not in libc]
    other = [n for n in need if n not in fns and n not in syms and n not in libc]

    gen = os.path.join(OUT, 'gen.c')
    with open(gen, 'w') as f:
        f.write('/* generated by tools/10-port/native_build.py: stubs for the functions no C defines yet, and the dispatch table */\n')
        f.write('#include "port.h"\n\n')
        data_like = [n for n in other if re.match(r'^(g_|REG_)|Error$', n)]
        for n in data_like:
            f.write('char %s[1024] __attribute__((aligned(4)));   /* data the library names that no file defines */\n' % n)
        for n in interp_fns:
            f.write('PORT_INTERP(%s, 0x%08XU)\n' % (n, fns[n]))          # no C: runs from the original code (sh4.c)
        for n in [n for n in stub_fns if n not in interp_fns]:
            f.write('long port_stub_%s(void) __asm__("%s");\nlong port_stub_%s(void) { port_unimplemented("%s", 0x%08XU); return 0; }\n'
                    % (n, n, n, n, fns[n]))
        for n in [n for n in other if n not in data_like]:
            f.write('long port_stub_%s(void) __asm__("%s");\nlong port_stub_%s(void) { port_unimplemented("%s", 0x%08XU); return 0; }\n'
                    % (n, n, n, n, fns.get(n, 0)))
        f.write('\n')
        have = defined | runtime_defined | set(libc)
        table = sorted((0x8C000000 | (addr & 0xFFFFFF), n) for n, addr in fns.items() if n in have or n in stub_fns)   # keyed canonically (runner.c)
        # host code for raw entry points inside library functions (a tail the C jumps into): port_entry_<address>
        listed = {a for a, _ in table}
        table = sorted(table + [(int(m.group(1), 16), n) for n in runtime_defined
                                for m in [re.match(r'port_entry_([0-9a-f]{8})$', n)] if m and int(m.group(1), 16) not in listed])
        for i, (addr, n) in enumerate(table):
            f.write('extern char port_fn_%d[] __asm__("%s");\n' % (i, n))
        f.write('\nconst struct port_entry port_table[] = {\n')
        for i, (addr, n) in enumerate(table):
            f.write('    {0x%08XU, (void *)port_fn_%d, "%s", %d},\n' % (addr, i, n, 1 if n in interp_fns else 0))
        f.write('};\nconst unsigned port_table_size = %d;\n' % len(table))
    with open(os.path.join(OUT, 'census.txt'), 'w') as f:
        f.write('stubbed console functions (%d):\n' % len(stub_fns))
        f.writelines('  %08x %s\n' % (fns[n], n) for n in stub_fns)
        f.write('\ndata from symbols.txt: %d\nhost libc (%d): %s\n' % (len(data), len(libc), ' '.join(libc)))
        f.write('\nother names, stubbed (%d):\n' % len(other))
        f.writelines('  %s\n' % n for n in other)
    print('census: %d objects; %d console functions stubbed, %d data symbols, %d from host libc, %d other names stubbed '
          '(build/native/census.txt)' % (len(objs), len(stub_fns), len(data), len(libc), len(other)))
    hobjs.append(host_compile(os.path.relpath(gen, ROOT), quiet=True))
    defsyms = ['-Wl,--defsym=%s=0x%08X' % (n, syms[n]) for n in data]
    rsp = os.path.join(OUT, 'link.rsp')
    with open(rsp, 'w') as f:
        f.write('\n'.join('"%s"' % x for x in objs + hobjs + defsyms))
    exe = os.path.join(OUT, program_name(ROOT)[0])
    # the binary at 0x60000000: the game's code reaches its globals (absolute symbols at 0x8C......) RIP-relative, which
    # needs them within 2 GB, and its records hold host function addresses in 32-bit words, which needs it below 4 GB
    # a game function the runtime wraps (it defines __wrap_<name>): the game's calls go to the wrapper, which reaches the game's
    # own definition as __real_<name> (nlPerspective: the picture's shape, PORT_WIDESCREEN)
    wraps = sorted({n[len('__wrap_'):] for o in hobjs for n in nm(o)[0] if n.startswith('__wrap_')})
    r = subprocess.run([CC, '-no-pie', '-g', '-Wl,-Ttext-segment=0x60000000'] + ['-Wl,--wrap=' + n for n in wraps] +
                       ['-o', exe, '@' + rsp, '-lSDL3', '-lGL', '-lm'],
                       capture_output=True, text=True)
    if r.returncode:
        open(os.path.join(OUT, 'link_errors.txt'), 'w').write(r.stderr)
        sys.exit('link failed (build/native/link_errors.txt):\n' + '\n'.join(r.stderr.splitlines()[:20]))
    print('link: %s' % os.path.relpath(exe, ROOT))
    return 0


if __name__ == '__main__':
    sys.exit(main())
