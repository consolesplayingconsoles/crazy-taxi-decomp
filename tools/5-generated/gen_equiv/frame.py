"""frame.py: frame slots that are only ever read and written as one scalar become locals. Stdlib only.

The generator keeps the original's stack frame as `int stk[N]` and writes every spill, reload and push as `*(int *)((int)stk + 32)`. SHC cannot
keep a value that lives in an array in a register: Virtua Tennis cpuSglAimTable reloaded `a4` from `stk + 32` 373 times, playerControl reads
one slot 695 times. A slot whose every access is a plain int / unsigned int (or float) load or store at one constant offset, and which no
struct access, pointer or other use overlaps, is a variable. It starts with the slot's own contents (a value the function reads before it
writes it came from the caller's frame), so the first line of the body loads it.

    scalarize(text)      the function's text with such slots replaced by locals R<1000+offset>; the text as it was when none can be
"""
import re

WHY = ['']                                       # why the last call left the text as it was (for a report)

DEREF = re.compile(r'\*\(((?:unsigned )?(?:int|short|char)|float|Stk\d+|struct mvb?\d+) ?\*\) ?\(')
DECL = re.compile(r'^    (?:register )?(?:int|float|unsigned int|short|char) [\w\[\]]+(?: = [^;]*)?;$')
SIZE = {'int': 4, 'unsigned int': 4, 'float': 4, 'short': 2, 'unsigned short': 2, 'char': 1, 'unsigned char': 1}


def _match(text, q):
    """index of the parenthesis closing the one at q"""
    d = 0
    for i in range(q, len(text)):
        if text[i] == '(':
            d += 1
        elif text[i] == ')':
            d -= 1
            if d == 0:
                return i
    return -1


def _size(t):
    if t in SIZE:
        return SIZE[t]
    m = re.match(r'Stk(\d+)$', t)
    if m:
        return 4 * int(m.group(1))
    m = re.match(r'struct mv(b?)(\d+)$', t)
    if m:
        return int(m.group(2)) * (1 if m.group(1) else 4)
    return 64


def _outer(operand):
    """the operand with every inner access `*(T *)(...)` written as 0: what is left is the address arithmetic of this access itself"""
    out, i = [], 0
    while True:
        m = DEREF.search(operand, i)
        if not m:
            out.append(operand[i:])
            return ''.join(out)
        r = _match(operand, m.end() - 1)
        if r < 0:
            out.append(operand[i:])
            return ''.join(out)
        out.append(operand[i:m.start()])
        out.append('0')
        i = r + 1


def scalarize(text, addr_window=64, min_uses=2):
    """addr_window: how many bytes a frame address passed on (`(int)stk + 40` as a value) may reach: a slot inside stays memory.
    The default 64 is a guess at the biggest structure a callee fills; the real reach is known only to the callee.
    min_uses: a slot with fewer accesses than this stays (one store never read, one read: a local gains nothing by the old count, but
    SHC drops the dead store and keeps the read in a register)."""
    if 'int stk[' not in text:
        return text
    body_at = text.index('{\n') if '{\n' in text else 0
    spans, ranges, bad = [], [], False          # spans: (start, end, type, offset) of resolved derefs
    covered = []
    for m in DEREF.finditer(text, body_at):
        q = m.end() - 1
        r = _match(text, q)
        if r < 0:
            continue
        operand = text[q:r + 1]
        if '(int)stk' not in _outer(operand):
            continue                            # the frame only inside an inner access (a pointer loaded from a slot): not a frame address
        expr = _outer(operand).replace('(int)stk', '0')
        if not re.fullmatch(r'[\s()0-9xXa-fA-F+\-]*', expr):
            WHY[0] = 'a variable frame address: %s' % operand[:60]
            return text                         # an index or a variable added to the frame address: leave the function alone
        try:
            n = eval(expr)
        except Exception:
            return text
        t = m.group(1).strip()
        spans.append((m.start(), r + 1, t, n))
        covered.append((m.start(), r + 1))
        ranges.append((n, n + _size(t), t))
    for m in re.finditer(r'\bstk\[(\d+)\]', text[body_at:]):
        at = body_at + m.start()
        if text[max(0, at - 4):at] == 'int ':
            continue
        spans.append((at, body_at + m.end(), 'int', 4 * int(m.group(1))))
        covered.append((at, body_at + m.end()))
        ranges.append((4 * int(m.group(1)), 4 * int(m.group(1)) + 4, 'int'))
    # every other mention of the frame is an address taken: a region it may reach
    for m in re.finditer(r'\(int\)stk|\bstk\[|&\s*stk\b', text[body_at:]):
        at = body_at + m.start()
        if any(a <= at < b for a, b in covered) or text[max(0, at - 4):at] == 'int ':
            continue                    # inside a resolved access, or the declaration `int stk[N]`
        if text[at:at + 4] == 'stk[' or text[at:at + 1] == '&':
            WHY[0] = 'the frame indexed by a variable or its address taken: %s' % text[at:at + 40]
            return text
        mm = re.match(r'\(int\)stk \+ (\d+)\)(?: \+ (0x[0-9A-Fa-f]+|\d+))?', text[at:])
        if not mm:
            WHY[0] = 'a frame address that is not a constant offset: %s' % text[at:at + 40]
            return text
        base = int(mm.group(1)) + (int(mm.group(2), 0) if mm.group(2) else 0)      # `((int)stk + 8) + 0x1C` is the address of slot 36, not of slot 8
        ranges.append((base, base + addr_window, 'address'))
    by = {}
    for s, e, t, n in spans:
        by.setdefault(n, []).append((s, e, t))
    pick = {}
    for n, lst in by.items():
        types = {t for _, _, t in lst}
        cls = 'f' if types == {'float'} else 'i' if types <= {'int', 'unsigned int'} else None
        if cls is None or n % 4 or len(lst) < min_uses:
            continue
        # anything that overlaps the slot blocks it, except the slot's own scalar accesses; a passed address whose reach is exactly the
        # slot (addr_window 4) blocks too (the old test let any range equal to the slot through, address or not)
        if any(a < n + 4 and n < b and not (a == n and b == n + 4 and t in ('int', 'unsigned int', 'float')) for a, b, t in ranges):
            continue
        pick[n] = cls
    if not pick:
        return text
    taken = set(re.findall(r'\bR(\d+)\b', text))
    pick = {n: c for n, c in pick.items() if str(1000 + n) not in taken}
    if not pick:
        return text
    out, last = [], 0
    for s, e, t, n in sorted(spans):
        if n in pick:
            out.append(text[last:s])
            out.append('R%d' % (1000 + n))
            last = e
    out.append(text[last:])
    new = ''.join(out)
    lines = new.split('\n')
    k = next((i for i, l in enumerate(lines) if l.strip() == '{'), None)
    if k is None:
        return text
    j = k + 1
    while j < len(lines) and (not lines[j].strip() or DECL.match(lines[j])):
        j += 1
    decls = ['    %s R%d;' % ('float' if c == 'f' else 'int', 1000 + n) for n, c in sorted(pick.items())]
    inits = ['    R%d = *(%s *)((int)stk + %d);' % (1000 + n, 'float' if c == 'f' else 'int', n) for n, c in sorted(pick.items())]
    return '\n'.join(lines[:j] + decls + inits + lines[j:]) if lines[j - 1].strip() else '\n'.join(lines[:j - 1] + decls + [''] + inits + lines[j - 1:j] + lines[j:])
