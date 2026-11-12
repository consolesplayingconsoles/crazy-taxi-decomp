#!/usr/bin/env python3
"""Function list of an absolutely linked SH-4 image, by reachability. Stdlib only.

    python3 tools/overlay/analyze.py <image> <base hex> [--main] > functions.txt

Strong roots: prologues (`sts.l pr,@-r15` with the pushes before it) and the image's first word. Their bsr targets and the
code they reach by literal pool follow. Weak roots (any word pointing into the image, and the place right after a
function's pool) count only within GAP bytes of code already accepted, so data that happens to decode stays out. A root
counts only if its control flow meets valid instructions, no branch in a delay slot, and ends in returns or tail jumps. Bra to
another root ends a function. `braf` tables are read back to their `mova`. Size: to the end of the last instruction reached.
Accepts 0x0C and 0x8C forms of pointers.
"""
import struct, sys
args = [a for a in sys.argv[1:] if not a.startswith('--')]
data = open(args[0], 'rb').read()
base = int(args[1], 16)
N = len(data)
W = struct.unpack_from('<%dH' % (N // 2), data, 0)
canon = lambda v: v & 0x1FFFFFFF
B = canon(base)


def valid(w):
    """Instructions SHC emits for SH-4 with -fpu=single."""
    a, n, m, d = w >> 12, (w >> 8) & 15, (w >> 4) & 15, w & 15
    if a == 0:
        if w in (0x0008, 0x0009, 0x000B, 0x0018, 0x0019, 0x0028, 0x0038, 0x0048, 0x0058):
            return True
        if d in (4, 5, 6, 7, 12, 13, 14, 15):
            return True
        if d == 2 and m in (0, 1, 2, 3, 4, 5, 8, 9, 10, 11, 12, 13, 14, 15):
            return True
        if d == 3 and m in (0, 2, 8, 9, 10, 11, 12):
            return True
        if d == 9 and m == 2:
            return True
        if d == 10 and m in (0, 1, 2, 5, 6):
            return True
        return False
    if a in (1, 5, 7, 9, 10, 11, 13, 14):
        return True
    if a == 2:
        return d not in (3,)
    if a == 3:
        return d not in (1, 9)
    if a == 4:
        if d in (0, 1, 2, 3, 4, 5, 6, 7) and m in (0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15):
            return True
        if d in (8, 9) and m in (0, 1, 2):
            return True
        if d == 10 and m in (0, 1, 2, 5, 6):
            return True
        if d == 11 and m in (0, 1, 2):
            return True
        if d in (12, 13):
            return True
        if d == 14:
            return m in (0, 1, 2, 3, 4, 8, 9, 10, 11, 12, 13, 14, 15)
        return d == 15
    if a == 6:
        return True
    if a == 8:
        return n in (0, 1, 4, 5, 8, 9, 11, 13, 15)
    if a == 12:
        return True
    if a == 15:
        if d <= 12:
            return True
        if d == 13:                 # fsts, flds ... fsrra, fsca, fipr (FmnED), ftrv, frchg, fschg
            return True
        if d == 14:
            return True
        return False
    return False


DELAY = {'rts', 'bra', 'bsr', 'jmp', 'jsr', 'braf', 'bsrf', 'bts', 'bfs'}


def op(w):
    a = w >> 12
    if w == 0x000B:
        return 'rts'
    if a == 0xA:
        return 'bra'
    if a == 0xB:
        return 'bsr'
    if a == 4 and w & 0xFF == 0x2B:
        return 'jmp'
    if a == 4 and w & 0xFF == 0x0B:
        return 'jsr'
    if a == 0 and w & 0xFF == 0x23:
        return 'braf'
    if a == 0 and w & 0xFF == 0x03:
        return 'bsrf'
    if w >> 8 == 0x89:
        return 'bt'
    if w >> 8 == 0x8B:
        return 'bf'
    if w >> 8 == 0x8D:
        return 'bts'
    if w >> 8 == 0x8F:
        return 'bfs'
    return ''


def disp12(pc, w):
    d = w & 0xFFF
    return pc + 4 + 2 * (d - 0x1000 if d & 0x800 else d)


def disp8(pc, w):
    d = w & 0xFF
    return pc + 4 + 2 * (d - 0x100 if d & 0x80 else d)


def walk(entry, roots):
    """(ok, set of reached offsets, end, calls, data refs)"""
    seen, todo, calls, pool, end = set(), [entry], set(), set(), entry
    steps = 0
    while todo:
        pc = todo.pop()
        while True:
            if pc < 0 or pc + 2 > N or pc & 1:
                return None
            if pc in seen:
                break
            if pc != entry and pc in roots:
                break
            w = W[pc // 2]
            steps += 1
            if steps > 40000 or not valid(w):
                return None
            seen.add(pc)
            a = w >> 12
            if a == 0xD:
                t = (pc & ~3) + 4 + (w & 0xFF) * 4
                if t + 4 <= N:
                    pool.update((t, t + 2))
            elif a == 0x9:
                t = pc + 4 + (w & 0xFF) * 2
                if t + 2 <= N:
                    pool.add(t)
            k = op(w)
            if k in ('rts', 'jmp', 'bra', 'braf', 'bsr', 'jsr', 'bsrf', 'bts', 'bfs'):
                if pc + 4 > N or not valid(W[(pc + 2) // 2]) or op(W[(pc + 2) // 2]):
                    return None
            if k in ('rts', 'jmp', 'bra', 'braf'):
                seen.add(pc + 2)
                if k == 'bra':
                    t = disp12(pc, w)
                    if t in roots and t != entry:
                        calls.add(t)
                    else:
                        todo.append(t)
                elif k == 'braf':
                    targets = jump_table(pc, seen)
                    if targets is None:
                        return None
                    todo.extend(targets[0])
                    pool.update(targets[1])
                break
            if k in ('bt', 'bf'):
                todo.append(disp8(pc, w))
            elif k in ('bts', 'bfs'):
                todo.append(disp8(pc, w))
                seen.add(pc + 2)
                pc += 2
            elif k == 'bsr':
                calls.add(disp12(pc, w))
                seen.add(pc + 2)
                pc += 2
            elif k in ('jsr', 'bsrf'):
                seen.add(pc + 2)
                pc += 2
            pc += 2
    code = seen - pool
    if not code:
        return None
    end = max(code) + 2
    return seen, end, calls, pool


def jump_table(pc, seen):
    """SHC: mova table,r0 ... mov.w @(r0,Rn),Rm ... braf Rm; a signed word per case, relative to braf + 4."""
    for back in range(2, 40, 2):
        q = pc - back
        if q < 0:
            return None
        w = W[q // 2]
        if w >> 8 == 0xC7:
            t = (q & ~3) + 4 + (w & 0xFF) * 4
            rel = pc + 4
            out, pool, k, limit = [], set(), t, 1 << 30
            while k + 2 <= N and k < limit and len(out) < 512:
                v = struct.unpack('<h', data[k:k + 2])[0]
                x = rel + v
                if x & 1 or not 0 <= x < N:
                    break
                out.append(x)
                pool.add(k)
                if x > t:
                    limit = min(limit, x)
                k += 2
            return out, pool
    return [], set()



GAP = 2048
ptr = set()
for o in range(0, N - 3, 4):
    v = struct.unpack_from('<I', data, o)[0]
    c = canon(v)
    if v >> 24 in (0x0c, 0x8c, 0xac) and B <= c < B + N and not (c - B) & 1:
        ptr.add(c - B)
prologue = {i * 2 for i, x in enumerate(W) if x == 0x4f22}
functions = {}


def plain(w):
    """An instruction that can precede the prologue in the same function: no control flow, not padding."""
    return valid(w) and not op(w) and w != 0x0009


def starts_of(o):
    """The compiler schedules pushes and loads before `sts.l pr`, so the start is further back: the nearest word
    someone points at, else the word after the previous function's return or padding."""
    k, best = o, None
    for _ in range(40):
        if k in targets:
            best = k
        if k < 2 or not plain(W[(k - 2) // 2]):
            break
        k -= 2
    return best if best is not None else k


# bsr targets anywhere that decode as code, plus pointer words: what callers say is a start
targets = set(ptr)
for i, x in enumerate(W):
    if x >> 12 == 0xB:
        t = disp12(i * 2, x)
        if 0 <= t < N:
            targets.add(t)
strong = {starts_of(o) for o in prologue}
if '--main' not in sys.argv:
    strong.add(0)


def accept(cands):
    new = set()
    for r in sorted(cands):
        if r in functions:
            continue
        res = walk(r, functions.keys() | cands)
        if res is None:
            continue
        functions[r] = res
        seen, end, calls, pool = res
        for t in calls:
            if 0 <= t < N and t not in functions:
                new.add(t)
        for t in pool:                      # code loaded from this function's pool
            if t & 3 == 0 and t + 4 <= N:
                v = struct.unpack_from('<I', data, t)[0]
                c = canon(v)
                if v >> 24 in (0x0c, 0x8c, 0xac) and B <= c < B + N and not (c - B) & 1 and (c - B) not in functions:
                    new.add(c - B)
    return new


def closure(cands):
    while cands:
        cands = accept(cands)


closure(strong)
# a body must have enough real work: a strong seed that only decodes by luck is dropped from the code map
code_starts = sorted(functions)
near = set()
for r in code_starts:
    near.update(range((r - GAP) >> 11, ((functions[r][1] + GAP) >> 11) + 1))
weak = {p for p in ptr if p >> 11 in near}
closure(weak)
# the sweep: right after a function's pool, a function with no prologue may begin
def spans():
    return sorted((r, res[1]) for r, res in functions.items())


import bisect


def inside(sp, o):
    i = bisect.bisect_right(sp, (o, 1 << 60)) - 1
    while i >= 0 and i >= bisect.bisect_right(sp, (o, 1 << 60)) - 6:
        if sp[i][0] < o < sp[i][1]:
            return True
        i -= 1
    return False


for _ in range(6):
    sp = spans()
    add = set()
    for r, (seen, end, calls, pool) in functions.items():
        after = [p for p in pool if end <= p < end + 2048]
        if not after:
            continue                                 # no pool behind it: no evidence of a boundary
        k = max(p + (2 if p & 2 else 4) for p in after)
        k = (k + 1) & ~1
        while k + 2 <= N and W[k // 2] == 0x0009:
            k += 2
        if k not in functions and k + 2 <= N and k >> 11 in near and not inside(sp, k):
            add.add(k)
    if not add:
        break
    closure(add)
# walk everything again knowing all the starts: a tail branch to a later-found function no longer swallows it
everything = set(functions)
functions = {r: x for r, x in ((r, walk(r, everything)) for r in sorted(everything)) if x is not None}
# a start another function's body already runs through is not a start
final, owned = {}, set()
for r in sorted(functions, key=lambda r: (r not in strong, r)):
    seen, end, calls, pool = functions[r]
    if r in owned:
        continue
    final[r] = end
    owned |= seen
for r in sorted(final):
    a = base + r
    print('F %08x %d FUN_%08x' % (a, final[r] - r, a))
