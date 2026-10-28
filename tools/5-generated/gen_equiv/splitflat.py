"""splitflat.py: a flat-form function with more labels than the compiler takes, written as a main function and helper parts.

SHC stops at about 512 labels in a function ("3018 overflow", with or without -optimize: cpuSglAimTable, Virtua Tennis, 865 labels
after the fall-through gotos are gone). The flat form is a label per block and every register a local variable, so the blocks can be
shared out: every local (temps, stk[], R0.., F0.., T_) and the parameters become words of one int array the main function owns,
reached through #defines, and each part after the first is a function `<name>_p<k>(int *S_, int at)` that starts at block `at` (a
switch on the blocks other parts jump to) and returns the block to go on at. The main function calls the part that holds a block it
jumps to and carries on at the block the part returns; a return inside a part hands its value back in the array and returns -1.
The text still starts with the main function's own header (the file head takes a function's first line for its prototype), the
parts are declared inside its body. The check runs a part as part of the function: a call into the compiled C that is no game
function is executed, not compared (equiv.py helpers).

    split(text, max_labels=480)     the function's text, split when it has more labels than max_labels; else as it was
"""
import re

LABEL = re.compile(r'^[ \t]*(L_[0-9A-Fa-f]+):;')
DECL = re.compile(r'^[ \t]*(int|float|unsigned int|short|unsigned short|char|unsigned char)\s+(\w+)(?:\[(\d+)\])?(?:\s*=\s*\{0\})?;\s*$')
HEAD = re.compile(r'^(void|int|float)\s+(\w+)\((.*)\)\s*$')


def split(text, max_labels=480):
    lines = text.split('\n')
    m = HEAD.match(lines[0]) if lines else None
    if not m or len(lines) < 3 or lines[1].strip() != '{':
        return text
    labels = [LABEL.match(l).group(1) for l in lines if LABEL.match(l)]
    if len(labels) <= max_labels:
        return text
    rt, name, params = m.group(1), m.group(2), m.group(3)
    end = max(i for i, l in enumerate(lines) if l.strip() == '}')
    body = lines[2:end]
    decls, k = [], 0
    while k < len(body) and (not body[k].strip() or DECL.match(body[k])):
        if body[k].strip():
            d = DECL.match(body[k]); decls.append((d.group(1), d.group(2), int(d.group(3)) if d.group(3) else 0))
        k += 1
    rest = body[k:]
    pre, blocks, cur = [], [], None
    for l in rest:
        lm = LABEL.match(l)
        if lm:
            cur = [lm.group(1), [l]]; blocks.append(cur)
        elif cur is None:
            pre.append(l)
        else:
            cur[1].append(l)
    # parts: blocks in order, each part holding at most half the limit, so a part's own labels and the cases of its entry switch fit
    per = max(1, max_labels // 2)
    parts = [blocks[i:i + per] for i in range(0, len(blocks), per)]
    part_of = {b[0]: p for p, bs in enumerate(parts) for b in bs}
    index = {b[0]: i for i, b in enumerate(blocks)}
    plist = [x.strip() for x in params.split(',')] if params.strip() and params.strip() != 'void' else []
    pnames = [x.split()[-1].lstrip('*') for x in plist]
    # the state: every local and parameter one or more int words; floats read through a cast
    slots, off = [], 0
    for t, n, size in decls + [(' '.join(x.split()[:-1]), x.split()[-1].lstrip('*'), 0) for x in plist]:
        slots.append((t, n, size, off)); off += max(size, 1)
    defs = []
    for t, n, size, o in slots:
        if size:
            defs.append('#define %s (S_ + %d)' % (n, o))
        elif t == 'float':
            defs.append('#define %s (*(float *)&S_[%d])' % (n, o))
        else:
            defs.append('#define %s (*(%s *)&S_[%d])' % (n, t, o))
    RET = off; off += 1
    retv = '' if rt == 'void' else ('(*(float *)&S_[%d])' % RET if rt == 'float' else 'S_[%d]' % RET)

    def jumps(ls, me):
        """the part's lines with each goto to another part's block made a hand-over"""
        out = []
        for l in ls:
            def go(mm):
                tgt = mm.group(1)
                if part_of.get(tgt, me) == me:
                    return mm.group(0)
                return ('{ NEXT_ = %d; goto X_; }' if me == 0 else 'return %d;') % index[tgt]
            out.append(re.sub(r'\bgoto (L_[0-9A-Fa-f]+);', go, l))
        return out

    def returns(ls):
        out = []
        for l in ls:
            mm = re.match(r'^(\s*)return\s*(.*?);\s*$', l)
            if mm:
                out.append('%s{ %sreturn -1; }' % (mm.group(1), ('%s = %s; ' % (retv, mm.group(2))) if mm.group(2) and retv else ''))
            else:
                out.append(l)
        return out

    np = ', '.join('%s p_%s' % (' '.join(x.split()[:-1]), x.split()[-1].lstrip('*')) for x in plist) or 'void'
    out = ['%s %s(%s)' % (rt, name, np), '{']
    out += ['    int %s_p%d(int *S_, int at);' % (name, p) for p in range(1, len(parts))]
    out += ['    int S_v[%d];' % off, '    int *S_ = S_v;', '    int NEXT_;', '']
    out += defs
    out += ['    %s = p_%s;' % (n, n) for n in pnames]
    out += jumps(pre, 0)
    for b in parts[0]:
        out += jumps(b[1], 0)
    if len(parts) > 1:                           # the last block of this part may fall through (no goto) into the next part's first
        out += ['    NEXT_ = %d;' % index[parts[1][0][0]]]
    # the hand-over: run the part that holds the block, until a block of this part comes back (or the function returned)
    out += ['    X_:;', '    for (;;) {', '        if (NEXT_ < 0) return%s;' % ((' ' + retv) if retv else '')]
    for p in range(1, len(parts)):
        lo, hi = index[parts[p][0][0]], index[parts[p][-1][0]] + 1
        out += ['        if (NEXT_ >= %d && NEXT_ < %d) { NEXT_ = %s_p%d(S_, NEXT_); continue; }' % (lo, hi, name, p)]
    out += ['        break;', '    }']
    back = sorted({index[b[0]] for b in parts[0]})
    out += ['    switch (NEXT_) { %s }' % ' '.join('case %d: goto %s;' % (i, blocks[i][0]) for i in back)]
    if rt != 'void':
        out += ['    return %s;' % retv]
    out += ['}']
    for p in range(1, len(parts)):
        entries = sorted({index[b[0]] for b in parts[p]})
        out += ['', 'int %s_p%d(int *S_, int at)' % (name, p), '{',
                '    switch (at) { %s }' % ' '.join('case %d: goto %s;' % (i, blocks[i][0]) for i in entries), '    return -2;']
        for b in parts[p]:
            out += jumps(returns(b[1]), p)        # a return first: the hand-overs jumps() writes are returns of their own
        if p + 1 < len(parts):
            out += ['    return %d;' % index[parts[p + 1][0][0]]]       # falling off the part's last block: the next part's first
        else:
            out += ['    return -1;']
        out += ['}']
    out += [''] + ['#undef %s' % n for _, n, _, _ in slots]
    return '\n'.join(out)
