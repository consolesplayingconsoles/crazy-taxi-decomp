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
import os
import re

LABEL = re.compile(r'^[ \t]*(L_[0-9A-Fa-f]+):;')
DECL = re.compile(r'^[ \t]*(int|float|unsigned int|short|unsigned short|char|unsigned char)\s+(\w+)(?:\[(\d+)\])?(?:\s*=\s*\{0\})?;\s*$')
HEAD = re.compile(r'^(void|int|float)\s+(\w+)\((.*)\)\s*$')

GOTO_END = re.compile(r'\bgoto (L_[0-9A-Fa-f]+);\s*$')
CAND = re.compile(r'^(?:[tu]\d+|R\d+|F\d+|T_)$')


def _flow(decls, pnames, pre, blocks, parts):
    """{name: part} for the scalar locals that can be real locals of one part instead of words of the shared array.

    A variable can when every line that mentions it is in one part and it is not live at any place that part is entered from outside
    (the first block, a block another part jumps to, the block the part before falls into): the part function is called again at each
    hand-over and its locals start over, so only a value that is written before it is read on every path from an entry survives.
    Liveness is the usual backward fixpoint over the lines of the function (a goto goes to its label, an `if (...) goto` to both, a return
    nowhere, anything else to the next line). A variable of the shared array costs a load and a store at every use; a local can be a register.
    Arrays, parameters and anything whose address is taken stay in the array."""
    cand = [n for t, n, size in decls if not size and CAND.match(n) and n not in pnames]
    if not cand:
        return None
    idx = {n: i for i, n in enumerate(cand)}
    nodes = []                                    # (part, text)
    first_of, part_of_block = {}, {}
    for l in pre:
        nodes.append((0, l))
    for p, bs in enumerate(parts):
        for b in bs:
            first_of[b[0]] = len(nodes)
            part_of_block[b[0]] = p
            for l in b[1]:
                nodes.append((p, l))
    n = len(nodes)
    use = [0] * n
    dfn = [0] * n
    succ = [[] for _ in range(n)]
    mention = {}
    addr = set()
    for i, (p, l) in enumerate(nodes):
        toks = set(re.findall(r'\b\w+\b', l))
        m = re.match(r'^\s*(\w+) = (.*)$', l)
        lhs = m.group(1) if m and m.group(1) in idx else None
        rhs_toks = set(re.findall(r'\b\w+\b', m.group(2))) if lhs else toks
        for v in toks:
            if v in idx:
                mention.setdefault(v, set()).add(p)
                if re.search(r'&\s*%s\b' % v, l):
                    addr.add(v)
        for v in rhs_toks:
            if v in idx:
                use[i] |= 1 << idx[v]
        if lhs:
            dfn[i] = 1 << idx[lhs]
        g = GOTO_END.search(l)
        if g and g.group(1) in first_of:
            succ[i].append(first_of[g.group(1)])
        stripped = l.strip()
        plain = g and stripped.startswith('goto ')
        if re.match(r'^\s*return\b', l) or plain:
            pass
        elif i + 1 < n:
            succ[i].append(i + 1)
    live_in = [0] * n
    changed = True
    while changed:
        changed = False
        for i in range(n - 1, -1, -1):
            out = 0
            for j in succ[i]:
                out |= live_in[j]
            new = use[i] | (out & ~dfn[i])
            if new != live_in[i]:
                live_in[i] = new
                changed = True
    entries = {p: set() for p in range(len(parts))}
    entries[0].add(0)
    for p in range(1, len(parts)):
        entries[p].add(first_of[parts[p][0][0]])
    for i, (p, l) in enumerate(nodes):
        g = GOTO_END.search(l)
        if g and g.group(1) in first_of and part_of_block[g.group(1)] != p:
            entries[part_of_block[g.group(1)]].add(first_of[g.group(1)])
    out = {}
    for v, ps in mention.items():
        if len(ps) != 1 or v in addr:
            continue
        p = next(iter(ps))
        bit = 1 << idx[v]
        if all(not (live_in[e] & bit) for e in entries[p]):
            out[v] = p
    return out, cand, idx, succ, live_in, dfn, use


def local_vars(decls, pnames, pre, blocks, parts):
    """{name: part} for the scalar locals that can be real locals of one part (see _flow)"""
    r = _flow(decls, pnames, pre, blocks, parts)
    return r[0] if r else {}


def local_colors(decls, pnames, pre, blocks, parts):
    """({name: shared name}, {shared name: part}) for the locals of local_vars: two that are never live at the same time of the same type
    and part share one name (a graph colouring over the liveness local_vars computes). 397 locals of cpuSglAimTable are about 40 names;
    SHC keeps few variables in registers and puts the rest in a frame whose offsets then outgrow the short forms."""
    r = _flow(decls, pnames, pre, blocks, parts)
    if not r:
        return {}, {}
    loc, cand, idx, succ, live_in, dfn, use = r
    ltype = {n: t for t, n, size in decls}
    n = len(live_in)
    adj = {v: 0 for v in loc}
    mask = {}
    for v in loc:
        mask[v] = 1 << idx[v]
    for i in range(n):
        out = 0
        for j in succ[i]:
            out |= live_in[j]
        now = (out | dfn[i])
        # the variables alive right after node i, and the one it writes, are alive together
        sel = [v for v in loc if now & mask[v]]
        if len(sel) > 1:
            bits = 0
            for v in sel:
                bits |= mask[v]
            for v in sel:
                adj[v] |= bits & ~mask[v]
    # the variables alive on entry to a node are alive together too
    for i in range(n):
        sel = [v for v in loc if live_in[i] & mask[v]]
        if len(sel) > 1:
            bits = 0
            for v in sel:
                bits |= mask[v]
            for v in sel:
                adj[v] |= bits & ~mask[v]
    names, color_of, groups = {}, {}, {}
    for v in sorted(loc, key=lambda x: (loc[x], ltype[x], -bin(adj[x]).count('1'))):
        key = (loc[v], ltype[v])
        slots = groups.setdefault(key, [])
        for k, members in enumerate(slots):
            if not any(adj[v] & mask[m] for m in members):
                members.append(v)
                names[v] = color_of[(key, k)]
                break
        else:
            slots.append([v])
            nm = '%s%d_%d' % ('w' if ltype[v] == 'float' else 'v', loc[v], len(slots) - 1)
            color_of[(key, len(slots) - 1)] = nm
            names[v] = nm
    return names, {nm: loc[v] for v, nm in names.items()}


def recolor(text):
    """The colouring of local_colors for a flat function that is not split (one part, entered once at the top): locals never live together
    share a name. Same result type: the text with the declarations of the shared names, or the text as it was."""
    if os.environ.get('GEN_COALESCE', '1') == '0':
        return text
    lines = text.split('\n')
    m = HEAD.match(lines[0]) if lines else None
    if not m or len(lines) < 3 or lines[1].strip() != '{':
        return text
    end = max(i for i, l in enumerate(lines) if l.strip() == '}')
    body = lines[2:end]
    decls, k = [], 0
    while k < len(body) and (not body[k].strip() or DECL.match(body[k])):
        if body[k].strip():
            d = DECL.match(body[k])
            decls.append((d.group(1), d.group(2), int(d.group(3)) if d.group(3) else 0))
        k += 1
    rest = body[k:]
    pre, blocks, cur = [], [], None
    for l in rest:
        lm = LABEL.match(l)
        if lm:
            cur = [lm.group(1), [l]]
            blocks.append(cur)
        elif cur is None:
            pre.append(l)
        else:
            cur[1].append(l)
    if not blocks:
        return text
    plist = [x.strip() for x in m.group(3).split(',')] if m.group(3).strip() and m.group(3).strip() != 'void' else []
    pnames = [x.split()[-1].lstrip('*') for x in plist]
    names, owners = local_colors(decls, pnames, pre, blocks, [blocks])
    if not names or len(set(names.values())) >= len(names):
        return text
    ltype = {n: t for t, n, size in decls}
    sub = re.compile(r'\b(?:%s)\b' % '|'.join(sorted(names, key=len, reverse=True)))
    keep = [l for l in body[:k] if not (DECL.match(l) and DECL.match(l).group(2) in names)]
    new = ['    %s %s;' % (ltype[next(v for v in names if names[v] == nm)], nm) for nm in sorted(owners)]
    rest = [sub.sub(lambda mm: names[mm.group(0)], l) for l in rest]
    return '\n'.join(lines[:2] + keep + new + rest + lines[end:])


def split(text, max_labels=480):
    lines = text.split('\n')
    m = HEAD.match(lines[0]) if lines else None
    if not m or len(lines) < 3 or lines[1].strip() != '{':
        return text
    labels = [LABEL.match(l).group(1) for l in lines if LABEL.match(l)]
    if len(labels) <= max_labels:
        return recolor(text)
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
    # a part of about 60 blocks (3-4 KB compiled): in a bigger one most branches are out of bra's range and each costs a jump through a pool word
    # (cpuSglAimTable, Virtua Tennis: 4 parts 47,346 bytes, 15 parts 31,030)
    per = max(1, min(max_labels // 2, int(os.environ.get('GEN_PART_BLOCKS', '60'))))
    parts = [blocks[i:i + per] for i in range(0, len(blocks), per)]
    part_of = {b[0]: p for p, bs in enumerate(parts) for b in bs}
    index = {b[0]: i for i, b in enumerate(blocks)}
    plist = [x.strip() for x in params.split(',')] if params.strip() and params.strip() != 'void' else []
    pnames = [x.split()[-1].lstrip('*') for x in plist]
    # the state: every local and parameter one or more int words; floats read through a cast
    if os.environ.get('GEN_SPLIT_LOCALS', '1') == '0':
        loc, owners = {}, {}
    else:
        loc, owners = local_colors(decls, pnames, pre, blocks, parts)
    ltype = {n: t for t, n, size in decls}
    ctype = {loc[v]: ltype[v] for v in loc}
    if loc:                                       # the shared names, in the lines of the part that owns them
        sub = re.compile(r'\b(?:%s)\b' % '|'.join(sorted(loc, key=len, reverse=True)))
        pre[:] = [sub.sub(lambda mm: loc[mm.group(0)], l) for l in pre]
        for b in blocks:
            b[1][:] = [sub.sub(lambda mm: loc[mm.group(0)], l) for l in b[1]]
    slots, off = [], 0
    for t, n, size in decls + [(' '.join(x.split()[:-1]), x.split()[-1].lstrip('*'), 0) for x in plist]:
        if n in loc:
            continue                              # a real local of one part: not a word of the shared array
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
    out += ['    int S_v[%d];' % off, '    int *S_ = S_v;', '    int NEXT_;'] + ['    %s %s;' % (ctype[n], n) for n in sorted(owners) if owners[n] == 0] + ['']
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
        out += ['', 'int %s_p%d(int *S_, int at)' % (name, p), '{'] + ['    %s %s;' % (ctype[n], n) for n in sorted(owners) if owners[n] == p] + [
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
