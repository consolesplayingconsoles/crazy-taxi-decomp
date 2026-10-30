#!/usr/bin/env python3
"""Assembly pieces that can move: real instructions, labels for branches, symbols for the functions they call. Stdlib only.

    python3 tools/8-build/relocasm.py <out dir> [name ...]       write <out dir>/<same file name>.src for the named functions
                                                          (default: every function in the game code region with no C)
    python3 tools/8-build/relocasm.py --moved                     print the names a build from C moves (no C, game code region)

asm/ holds every function as raw words (.DATA.W): it reproduces the executable byte for byte, and it cannot move: a bsr or
bra has its distance baked in, and a literal pool holds the old address of every function the code calls. A piece written
here keeps the same bytes where it is and follows its targets where it goes:

  - bytes the function reaches are instructions (shdis's text); everything else in its range stays words;
  - a branch inside the function is a label, a branch to another function is that function's symbol (_name);
  - a pc-relative load takes its own copy of the word (aligned 4, after the code that uses it), so a pool another function
    held is no longer needed; a word equal to a function's entry is that function's symbol, so a pointer follows the
    function; mova names its table inside the function;
  - what cannot be written this way (a branch into the middle of another function, a pool word that needs to be shared) is
    reported and the piece is not written.

The check is a build: this file replaces the piece in a layout where nothing moves, and the image must still match.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import boundaries as B
import shdis

import layout  # noqa: E402

G0, G1 = layout.region('game', True)                  # the game's own code (layout.txt)
CHECK = False


def functions():
    return layout.functions()


def asm_only():
    """Functions the build takes from the original asm although their C is proven: asm-functions.txt in the repo, one name per
    line (# starts a comment). None when there is no such file."""
    if not os.path.exists('asm-functions.txt'):
        return set()
    return {l.split('#')[0].strip() for l in open('asm-functions.txt') if l.split('#')[0].strip()}


def moved_names():
    eq = set(open('tests/equivalent.txt').read().split()) - asm_only()
    F = functions()
    out = []
    for i, (a, s, n) in enumerate(F):
        if G0 <= a < G1 and n not in eq:
            out.append(n)
    return out


def sym(a, entry):
    """The symbol for a code address that is a function entry, or None."""
    return entry.get(a)


def reach_in(start, lo, hi):
    """(seen, flags, outs): the code reachable from start by branches inside [lo, hi). A branch that leaves the range is a
    jump to another function and goes in outs; the code is not followed."""
    seen, todo, flags, outs = set(), [start], set(), set()
    while todo:
        a = todo.pop()
        while True:
            if a in seen:
                break
            if not (lo <= a < hi):
                flags.add('off')
                break
            seen.add(a)
            text, pool, psize, target = shdis.decode(B.word(a), a)
            m = text.split()[0] if text else ''
            if m in ('bt', 'bf', 'bt/s', 'bf/s', 'bra', 'bsr'):
                delay = m.endswith('/s') or m in ('bra', 'bsr')
                if delay:
                    seen.add(a + 2)
                if target is not None:
                    if lo <= target < hi:
                        todo.append(target)
                    else:
                        outs.add(target)
                if m == 'bra':
                    break
                a += 4 if delay else 2
                continue
            if m in ('rts', 'rte', 'jmp', 'braf'):
                seen.add(a + 2)
                if m in ('jmp', 'braf'):
                    flags.add('table')
                break
            if m in ('jsr', 'bsrf'):
                seen.add(a + 2)
                a += 4
                continue
            a += 2
    return seen, flags, outs


def _pointer_table(a, size):
    """Whether the entry at a is a table of code pointers: aligned, two words at least, the first two both pointing into the game code.
    Its first word can decode as an instruction by luck (0x8C0F7FF0 starts with 7FF0, add #-16,r15), so the first word alone is not enough."""
    if a % 4 or size < 8:
        return False
    F = functions()
    lo, hi = F[0][0], F[-1][0] + F[-1][1]            # the executable's code, not the game region alone: a table may point at the
    for k in range(2):                                 # libraries that stay outside it (Virtua Tennis FUN_8c0f8220: 8C0F7FF0, 8C1E2FC0)
        v = struct.unpack_from('<I', B.BIN, a + 4 * k - B.BASE)[0]
        if (v >> 24) not in (0x0C, 0x8C, 0xAC) or not lo <= ((v & 0x1FFFFFFF) | 0x0C000000) < hi:
            return False
    return True


def _r0_loaded_once(x, nxt):
    """Whether the mova at x is followed, in straight-line code that does not touch r0, by a 4-byte load through it (`fmov.s @r0,fr` or
    `mov.l @r0,r`): the word is read once and r0 is not used as an address for anything else. A branch, a call, a label-less end of the
    function, or any other use of r0 before that load says no."""
    for k in range(1, 48):
        y = x + 2 * k
        if y >= nxt:
            return False
        text = shdis.decode(B.word(y), y)[0] or ''
        m = text.split()[0] if text else ''
        if re.match(r'^(fmov\.s|mov\.l) @r0,', text):
            return True
        if m in ('bt', 'bf', 'bra', 'bsr', 'jmp', 'jsr', 'rts', 'bt/s', 'bf/s', 'braf', 'bsrf', 'rte', 'trapa') or m.startswith('.word'):
            if m in ('bra', 'bsr', 'jmp', 'jsr', 'rts', 'bt/s', 'bf/s', 'braf', 'bsrf', 'rte') and y + 2 < nxt:
                slot = shdis.decode(B.word(y + 2), y + 2)[0] or ''      # a delay slot runs before the branch: `jsr @r3 / fmov.s @r0,fr4` loads through r0
                return bool(re.match(r'^(fmov\.s|mov\.l) @r0,', slot))
            return False
        if re.search(r'\br0\b|\(r0,|@\(r0', text):
            return False
    return False


def piece(i, F, entry, rename=None, extra=()):
    """rename: export the piece under another name (a second copy of a function that has C); extra: addresses inside it that also
    get an exported label _ent_<address> (a place other code jumps to, in the middle)."""
    a, size, name = F[i]
    ename = rename or name
    nxt = F[i + 1][0] if i + 1 < len(F) else G1
    first = B.word(a)
    if first == 0xEEEE or shdis.decode(first, a)[0].startswith('.word') or _pointer_table(a, size):
        seen, flags, outs = set(), set(), set()          # padding or a table: the whole range is data
    else:
        seen, flags, outs = reach_in(a, a, nxt)
        if 'off' in flags:
            return None, 'runs into the next entry'
    problems = []
    labels = {}          # address -> label inside this piece
    pools = {}           # key (kind, value) -> label of the copy at the end
    poolsize = {}        # address of a pool word inside the piece -> 4 or 2
    redirected = set()   # instructions whose bytes differ from the original on purpose
    lines = {}           # address -> list of asm lines
    # pass 1: instructions
    for x in sorted(seen):
        w = B.word(x)
        text, pool, psz, target = shdis.decode(w, x)
        m = text.split()[0] if text else ''
        if not text or text.startswith('.word') or text.startswith('?'):
            return None, 'cannot decode %08x' % x
        if m in ('bt', 'bf', 'bt/s', 'bf/s', 'bra', 'bsr'):
            if target is None:
                return None, 'branch without a target at %08x' % x
            if a <= target < nxt and target in seen:
                labels[target] = 'L_%08x' % target
                op = labels[target]
            elif target in entry:
                op = '_' + entry[target]
            else:
                return None, 'branch at %08x into the middle of another function (%08x)' % (x, target)
            lines[x] = ['          %-10s %s' % (m.upper(), op)]
        elif pool is not None and m.startswith(('mov.l', 'mov.w')):
            size_ = 4 if m.startswith('mov.l') else 2
            rn = text.rsplit(',', 1)[1]
            if a <= pool and pool + size_ <= nxt and pool not in seen and pool + 1 not in seen:
                labels[pool] = 'P_%08x' % pool                      # its own pool word: stays where it is
                poolsize[pool] = size_
                lines[x] = ['          %-10s %s,%s' % (m.upper(), labels[pool], rn.upper())]
            else:                                                   # a word in another function's pool: a copy of its own
                val = struct.unpack_from('<I', B.BIN, pool - B.BASE)[0] if size_ == 4 else struct.unpack_from('<h', B.BIN, pool - B.BASE)[0]
                key = (size_, val)
                pools.setdefault(key, 'P_%d_%08x' % (size_, val & 0xFFFFFFFF))
                lines[x] = ['          %-10s %s,%s' % (m.upper(), pools[key], rn.upper())]
                redirected.add(x)
        elif m == 'mova':
            mm = re.search(r'0x([0-9a-f]+)', text)
            tab = int(mm.group(1), 16) if mm else None
            if tab is not None and a <= tab < nxt:
                labels[tab] = 'L_%08x' % tab
                lines[x] = ['          MOVA       %s,R0' % labels[tab]]
            else:
                # a word in another function's pool, read through r0 (@r0): this piece keeps its own copy
                single = _r0_loaded_once(x, nxt)
                if tab is None or not single:
                    return None, 'mova at %08x names data outside the function (%s)' % (x, hex(tab) if tab else '?')
                val = struct.unpack_from('<I', B.BIN, tab - B.BASE)[0]
                key = (4, val)
                pools.setdefault(key, 'P_4_%08x' % val)
                lines[x] = ['          MOVA       %s,R0' % pools[key]]
                redirected.add(x)
        else:
            lines[x] = ['          ' + re.sub(r'^(\S+)\s+', lambda mm: '%-10s ' % mm.group(1).upper(), text).upper().replace('0X', 'H\'') if False else '          ' + _upper(text)]
    for x in extra:
        if x not in seen:
            return None, 'no instruction at %08x' % x
        labels.setdefault(x, 'L_%08x' % x)
    # pass 2: bytes the code does not reach, as words (a pointer to a function becomes its symbol)
    covered = set()
    for x in seen:
        covered.add(x)
    x = a
    out = []
    while x < nxt:
        if x in covered:
            if x in labels:
                out.append(labels[x] + ':')
            if x in extra:
                out.append('_ent_%08x:' % x)
            out += lines[x]
            x += 2
            continue
        if x in labels:
            out.append(labels[x] + ':')
        v = struct.unpack_from('<I', B.BIN, x - B.BASE)[0] if x + 4 <= nxt and x % 4 == 0 else None
        isptr = v is not None and ((v & 0x1FFFFFFF) | 0x0C000000) in entry and (v >> 24) in (0x0C, 0x8C, 0xAC)
        if (poolsize.get(x) == 4 or isptr) and v is not None and x + 2 not in covered and x + 2 not in labels:
            tgt = (v & 0x1FFFFFFF) | 0x0C000000
            if isptr:
                top = v - tgt
                out.append('          .DATA.L    _%s%s' % (entry[tgt], ('+H\'%X' % top) if top else ''))
            else:
                out.append('          .DATA.L    H\'%08X' % v)
            x += 4
            continue
        out.append('          .DATA.W    H\'%04X' % B.word(x))
        x += 2
    # the pool copies after the code, at an address divisible by 4 in the piece's own placement (a 2-byte pad when it ends 2 mod 4)
    tail = []
    if pools:
        if nxt % 4:
            tail.append('          .DATA.W    H\'0009')
        for (size_, val), lab in sorted(pools.items(), key=lambda kv: (-kv[0][0], kv[1])):
            if size_ == 4:
                tgt = (val & 0x1FFFFFFF) | 0x0C000000
                top = (val & 0xFFFFFFFF) - tgt
                if tgt in entry and (val >> 24) in (0x0C, 0x8C, 0xAC):
                    tail.append('%s:  .DATA.L    _%s%s' % (lab, entry[tgt], ('+H\'%X' % top) if top else ''))
                else:
                    tail.append('%s:  .DATA.L    H\'%08X' % (lab, val & 0xFFFFFFFF))
            else:
                tail.append('%s:  .DATA.W    H\'%04X' % (lab, val & 0xFFFF))
    # a piece that falls through into the next function must keep its tail: flagged by reach (no rts) -> 'off'
    body = [l for l in out if l != ''] + tail
    text = ['; %08x-%08x %s (%d bytes), instructions and symbols so that it can move' % (a, nxt, name, nxt - a),
            '          .SECTION    P, CODE, ALIGN=4',
            '          .EXPORT     _%s' % ename] + ['          .EXPORT     _ent_%08x' % x for x in extra] + (['          .DATA.W    H\'0009'] if a % 4 == 2 else []) + [
            '_%s:' % ename] + body + ['          .END']
    # imports: every other function it names
    imps = sorted({m_ for l in text for m_ in re.findall(r'\b_([A-Za-z_]\w*)', l)} - {ename} - {'ent_%08x' % x for x in extra})
    text[3:3] = ['          .IMPORT     _%s' % n for n in imps]
    return ('\n'.join(text) + '\n', None) if not CHECK else ('\n'.join(text) + '\n', redirected)


def _upper(t):
    """shdis's text in the assembler's habit: mnemonic and registers upper case, numbers as H'hex."""
    return t.upper().replace('@(0X', '@(H\'').replace(' #-', ' #-') if False else _fix(t)


def _fix(t):
    m = re.match(r'^(\S+)\s*(.*)$', t)
    mn, ops = m.group(1), m.group(2)
    ops = re.sub(r'#(-?\d+)', lambda mm: '#%d' % int(mm.group(1)), ops)
    return '%-10s %s' % (mn.upper(), ops.upper())


def check(out, names):
    """Each piece linked alone at its original address (every function it names defined at its own original address) must
    give the original bytes, except the instructions redirected to a pool copy. Needs Docker and the SDK, like build.sh."""
    import subprocess
    import equiv
    global CHECK
    CHECK = True
    F = functions()
    entry = {a: n for a, s, n in F}
    sdk, rel = equiv.sdk_env()
    work = os.path.join('build', 'reloc_check')
    os.makedirs(work, exist_ok=True)
    info = {}
    script = ['set -e', 'cd /app']
    for i, (a, size, name) in enumerate(F):
        if name not in names:
            continue
        txt, red = piece(i, F, entry)
        if txt is None:
            print('SKIP', name, red)
            continue
        nxt = F[i + 1][0] if i + 1 < len(F) else G1
        stem = '%08x_%s' % (a, name)
        open(os.path.join(work, stem + '.src'), 'w').write(txt)
        imps = sorted(set(re.findall(r'\.IMPORT\s+_(\w+)', txt)))
        byname = {n: aa for aa, ss, n in F}
        base_ = a - 2 if a % 4 == 2 else a             # the piece's section is 4-aligned: its pad comes first
        sub = ['elf', 'start P(%08X)' % base_, 'output build\\reloc_check\\%s.elf' % stem, 'input build\\reloc_check\\%s.obj' % stem]
        sub += ['define _%s(%08X)' % (n, byname[n]) for n in imps] + ['exit']
        open(os.path.join(work, stem + '.sub'), 'w').write('\n'.join(sub) + '\n')
        script.append('wibo "/sdk/%s/asmsh.exe" "build\\reloc_check\\%s.src" -object="build\\reloc_check\\%s.obj" -cpu=sh4 -endian=little > build/reloc_check/%s.asm.log 2>&1 || echo "ASM FAIL %s"' % (rel, stem, stem, stem, stem))
        script.append('wibo "/sdk/%s/lnk.exe" -subcommand="build\\reloc_check\\%s.sub" > build/reloc_check/%s.lnk.log 2>&1 || true' % (rel, stem, stem))
        script.append('wibo "/sdk/%s/elf2bin.exe" -s %08X "build\\reloc_check\\%s.elf" "build\\reloc_check\\%s.bin" > /dev/null 2>&1 || true' % (rel, base_, stem, stem))
        info[stem] = (a, nxt, red)
    tw = 'Z:' + ('/sdk/' + rel).replace('/', '\\')
    r = subprocess.run(['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':/app', '-w', '/app', '-e', 'TW=' + tw,
                        os.environ.get('DC_TOOLS_IMAGE', 'dc-tools'), 'bash', '-c', '\n'.join(script)],
                       stdin=subprocess.DEVNULL, capture_output=True, text=True)
    if r.stdout.strip():
        print(r.stdout.strip())
    ok = bad = 0
    for stem, (a, nxt, red) in info.items():
        f = os.path.join(work, stem + '.bin')
        if not os.path.exists(f):
            print('NO BINARY', stem, open(os.path.join(work, stem + '.lnk.log'), errors='replace').read()[-200:].replace('\n', ' '))
            bad += 1
            continue
        got = open(f, 'rb').read()
        if a % 4 == 2:
            got = got[2:]                                   # the pad in front of the entry label
        orig = B.BIN[a - B.BASE:nxt - B.BASE]
        diffs = [k for k in range(0, len(orig), 2) if (a + k) not in red and (a + k - 2) not in red and got[k:k + 2] != orig[k:k + 2]]
        if len(got) < len(orig) or diffs:
            bad += 1
            print('DIFFERS', stem, 'size', len(got), 'vs', len(orig), 'first at', hex(a + diffs[0]) if diffs else '-')
        else:
            ok += 1
    print('%d pieces reproduce the original bytes, %d do not' % (ok, bad))


def main(argv):
    if '--check' in argv:
        check(None, set(a for a in argv[2:]) or set(moved_names()))
        return
    if '--moved' in argv:
        print('\n'.join(moved_names()))
        return
    if len(argv) < 2:
        sys.exit(__doc__)
    out = argv[1]
    os.makedirs(out, exist_ok=True)
    F = functions()
    entry = {a: n for a, s, n in F}
    want = set(argv[2:]) or set(moved_names())
    done, bad = 0, []
    for i, (a, s, n) in enumerate(F):
        if n not in want:
            continue
        txt, why = piece(i, F, entry)
        if txt is None:
            bad.append((n, why))
            continue
        open(os.path.join(out, '%08x_%s.src' % (a & 0x1FFFFFFF, n) if False else '%08x_%s.src' % (a, n)), 'w').write(txt)
        done += 1
    print('%d pieces written, %d not' % (done, len(bad)))
    for n, why in bad:
        print('  NOT WRITTEN %s: %s' % (n, why))


if __name__ == '__main__':
    main(sys.argv)
