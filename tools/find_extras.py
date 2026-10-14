#!/usr/bin/env python3
"""find_extras.py: the `extra` rules of a character draw function, found by running its branches per character.
Stdlib only (Python 3.6). Run in the repo.

    python3 tools/find_extras.py <start hex> <end hex> --group <chars group> [--char r8] [--parts r11] [--put r14]

A draw function that puts a character's parts often draws one more model on some slots for some characters only,
picked by the character number (a cmp/eq chain, a braf jump table). For each character of the `chars` rule named
--group in models.txt (0 .. count-1), the code from <start> to <end> is run symbolically: --char holds the character
number, --parts the address of its parts array, and every call through --put is a draw with r4 as the model. A draw of
@(parts + 4*k) sets the current slot to k; a draw of a literal model after it is an extra on that slot. <start> is
where those registers already hold that (after the function's setup), <end> the end of the range to run.

Prints one `extra <group> <id> <slot> <model> <label>` line per extra (label: the slot's label + `_extra`), ready for
models.txt. A branch on something the run cannot know (a global flag, a value loaded from memory) is followed both
ways; a draw reached only through such a branch is printed as a `# gated` comment, not as a rule: whether the game
draws it depends on state, and a person decides. A call other than --put clobbers r0-r7 and T.
"""
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from shdis import decode  # noqa: E402

UNKNOWN = None


def A(a):
    return a & 0x1FFFFFFF if (a >> 24) in (0x0C, 0x8C, 0xAC) else a


def chars_rule(group):
    """(count, {slot: label}) of the `chars` rule for group in models.txt."""
    for line in open('models.txt'):
        p = line.split('#', 1)[0].split()
        if len(p) >= 5 and p[0] == 'chars' and p[3].replace('_', ' ') == group.replace('_', ' '):
            labels = dict((int(k, 0), v) for k, v in (x.split(':', 1) for x in p[4].split(',')))
            return int(p[2], 0), labels
    sys.exit('[ERROR] models.txt has no chars rule for the group %s' % group)


def main():
    args = sys.argv[1:]
    opts = {'--char': 'r8', '--parts': 'r11', '--put': 'r14', '--group': None}
    pos = []
    while args:
        a = args.pop(0)
        if a in opts:
            opts[a] = args.pop(0)
        else:
            pos.append(a)
    if len(pos) != 2 or not opts['--group']:
        sys.exit(__doc__)
    start, end = A(int(pos[0], 16)), A(int(pos[1], 16))
    exe = open('1ST_READ.BIN', 'rb').read()
    base = A(int(open('BASE').read().strip(), 16))
    count, labels = chars_rule(opts['--group'])
    char_r, parts_r, put_r = (int(opts[k][1:]) for k in ('--char', '--parts', '--put'))

    def word(a, size):
        o = A(a) - base
        if not 0 <= o <= len(exe) - size:
            return UNKNOWN
        return struct.unpack_from('<H' if size == 2 else '<I', exe, o)[0]

    def s16(v):
        return v - 0x10000 if v & 0x8000 else v

    def known(v):
        return isinstance(v, int)

    def run(c):
        """[(slot, model, gate)] drawn for character c: gate is False for a draw every path reaches, else the address
        of the last unknown branch before it. Each unknown branch is followed both ways; paths that join again count
        as one, so a branch around code that draws nothing gates nothing."""
        paths = []
        regs = [UNKNOWN] * 16
        regs[char_r], regs[parts_r] = c, ('parts', 0)
        todo = [(start, tuple(regs), UNKNOWN, None, False, ())]
        seen = set()
        while todo:
            pc, regs, t, slot, gated, drawn = todo.pop()
            regs = list(regs)
            steps = 0
            while True:
                if not (start <= pc < end and steps < 20000):
                    paths.append(drawn)
                    break
                key = (pc, tuple(regs), t, slot, gated, drawn)
                if key in seen:
                    break
                seen.add(key)
                steps += 1
                text, pool, size, target = decode(word(pc, 2), pc)
                op = text.split(' ', 1)[0]

                def execute(pc):
                    """Runs one non-branch instruction; returns 'put' for a draw call."""
                    nonlocal t, slot
                    text, pool, size, target = decode(word(pc, 2), pc)
                    op = text.split(' ', 1)[0]
                    r = [int(x) for x in re.findall(r'r(\d+)', text)]
                    m = re.match(r'mov #(-?\d+),r(\d+)$', text)
                    if m:
                        regs[int(m.group(2))] = int(m.group(1)) & 0xFFFFFFFF
                    elif re.match(r'mov r\d+,r\d+$', text):
                        regs[r[1]] = regs[r[0]]
                    elif pool is not None and text.startswith('mov.'):
                        v = word(pool, size)
                        regs[r[-1]] = (s16(v) & 0xFFFFFFFF) if size == 2 and known(v) else v
                    elif text.startswith('mova'):
                        regs[0] = target
                    elif re.match(r'add #(-?\d+),r\d+$', text):
                        k, v = int(text.split('#')[1].split(',')[0]), regs[r[0]]
                        regs[r[0]] = ((v + k) & 0xFFFFFFFF if known(v) else ('parts', v[1] + k)
                                      if isinstance(v, tuple) and v[0] == 'parts' else UNKNOWN)
                    elif re.match(r'add r\d+,r\d+$', text):
                        a, b = regs[r[0]], regs[r[1]]
                        regs[r[1]] = (a + b) & 0xFFFFFFFF if known(a) and known(b) else UNKNOWN
                    elif re.match(r'(shll|shll2|shll8|shll16) r\d+$', text):
                        v = regs[r[0]]
                        n = {'shll': 1, 'shll2': 2, 'shll8': 8, 'shll16': 16}[op]
                        regs[r[0]] = (v << n) & 0xFFFFFFFF if known(v) else UNKNOWN
                    elif re.match(r'mov\.l @r\d+,r\d+$', text):
                        v = regs[r[0]]
                        regs[r[1]] = ('slot', v[1]) if isinstance(v, tuple) and v[0] == 'parts' else UNKNOWN
                    elif re.match(r'mov\.l @\((\d+),r\d+\),r\d+$', text):
                        v, d = regs[r[0]], int(text.split('(')[1].split(',')[0])
                        regs[r[1]] = ('slot', v[1] + d) if isinstance(v, tuple) and v[0] == 'parts' else UNKNOWN
                    elif re.match(r'mov\.w @\(r0,r\d+\),r\d+$', text):
                        a, b = regs[0], regs[r[1]]
                        v = word(a + b, 2) if known(a) and known(b) else UNKNOWN
                        regs[r[2]] = s16(v) & 0xFFFFFFFF if known(v) else UNKNOWN
                    elif re.match(r'cmp/eq #(-?\d+),r0$', text):
                        k = int(text.split('#')[1].split(',')[0]) & 0xFFFFFFFF
                        t = (regs[0] == k) if known(regs[0]) else UNKNOWN
                    elif re.match(r'(cmp/eq|cmp/hs|cmp/hi|cmp/ge|cmp/gt) r\d+,r\d+$', text):
                        a, b = regs[r[0]], regs[r[1]]
                        if known(a) and known(b):
                            sa, sb = (a - (1 << 32) if a >> 31 else a), (b - (1 << 32) if b >> 31 else b)
                            t = {'cmp/eq': b == a, 'cmp/hs': b >= a, 'cmp/hi': b > a, 'cmp/ge': sb >= sa,
                                 'cmp/gt': sb > sa}[op]
                        else:
                            t = UNKNOWN
                    elif re.match(r'tst r\d+,r\d+$', text):
                        a, b = regs[r[0]], regs[r[1]]
                        if known(a) and known(b):
                            t = (a & b) == 0
                        elif isinstance(a, tuple) and a[0] == 'slot' and r[0] == r[1]:
                            t = False                  # a part pointer: the character has that part
                        else:
                            t = UNKNOWN
                    elif op in ('jsr', 'bsr', 'bsrf', 'jmp') and not (op == 'jsr' and r[0] == put_r):
                        for i in range(8):
                            regs[i] = UNKNOWN
                        t = UNKNOWN
                    elif op == 'jsr':
                        return 'put'
                    elif r:                            # anything else that writes a register: its value is unknown
                        dst = r[-1]
                        if not text.startswith(('mov.l r', 'mov.w r', 'mov.b r', 'fmov', 'cmp/', 'tst', 'lds',
                                                'ldc', 'sts.l', 'stc.l', 'pref')):
                            regs[dst] = UNKNOWN
                    return None

                if op == 'rts':
                    paths.append(drawn)
                    break
                if op in ('bt', 'bf', 'bt/s', 'bf/s'):
                    if op.endswith('/s'):
                        execute(pc + 2)
                    fall = pc + (4 if op.endswith('/s') else 2)
                    if t is UNKNOWN:                   # a branch on state the run cannot know: both ways, gated
                        todo.append((target, tuple(regs), t, slot, pc, drawn))
                        pc, gated = fall, pc
                    else:
                        pc = target if (t if op.startswith('bt') else not t) else fall
                    continue
                if op == 'bra':
                    execute(pc + 2)
                    pc = target
                    continue
                if op == 'braf':
                    rn = int(text.split('r')[-1])
                    off = regs[rn]
                    execute(pc + 2)
                    if not known(off):
                        paths.append(drawn)
                        break
                    pc = (pc + 4 + off) & 0xFFFFFFFF
                    continue
                if execute(pc) == 'put':
                    execute(pc + 2)                    # the delay slot sets r4
                    v = regs[4]
                    if isinstance(v, tuple) and v[0] == 'slot':
                        slot = v[1] // 4
                    elif known(v) and slot is not None:
                        drawn += ((slot, A(v), gated),)
                    for i in range(8):
                        if i != 4:
                            regs[i] = UNKNOWN
                    pc += 4
                    continue
                pc += 2
        every = set.intersection(*[set((d[0], d[1]) for d in p) for p in paths]) if paths else set()
        found = {}
        for p in paths:
            for slot, model, gate in p:
                found.setdefault((slot, model), False if (slot, model) in every else gate)
        return [(slot, model, gate) for (slot, model), gate in found.items()]

    rows, gated_rows = set(), {}
    for c in range(count):
        for slot, model, gated in run(c):
            if gated:
                gated_rows.setdefault((slot, c, model), gated)
            else:
                rows.add((slot, c, model))
    for slot, c, model in sorted(rows):
        print('extra %s 0x%02X %d %08X %s_extra' % (opts['--group'], c, slot, model, labels.get(slot, 'part_%d' % slot)))
    for (slot, c, model), at in sorted(gated_rows.items()):
        if (slot, c, model) not in rows:
            print('# gated (branch at %08X): extra %s 0x%02X %d %08X %s_extra'
                  % (at, opts['--group'], c, slot, model, labels.get(slot, 'part_%d' % slot)))
    gated_rows = [k for k in gated_rows if k not in rows]
    print('# %d extras, %d gated (behind a branch on state the run cannot know)' % (len(rows), len(gated_rows)),
          file=sys.stderr)


if __name__ == '__main__':
    main()
