"""coalesce.py: fewer local variables in a structured function, by giving temporaries with disjoint live ranges one name. Stdlib only.

The generator names every value t<N> (int) or u<N> (float), a new variable each time. SHC keeps a few of them in registers and puts the rest
in the stack frame: a function with 346 of them (Virtua Tennis cpuSglAimAddLv21, 2 KB in the original) compiled to 10,988 bytes, most of it
`mov.w @(pc),r0 / mov.l @(r0,r15)` because the frame had grown past the short offsets. The same function with 14 variables compiles to 8,424
bytes. The original reused registers; this reuses names.

Two temporaries share a name when the text from the first to the last line that mentions each does not overlap. A temporary that is read
before it is written, or that is mentioned both inside and outside a loop, or inside a loop and live across its head, is live over the whole
loop. A function with a label or a goto (the flat form), or a temporary whose address is taken, is left alone.

    coalesce(text)     the function's text with the temporaries renamed; the text as it was when nothing can be shared
"""
import re

DECL = re.compile(r'^    (int|float) ([tu]\d+);$')
LOOP = re.compile(r'^\s*(for|while)\b.*\{\s*$')


def coalesce(text):
    if re.search(r'\bgoto\b|^\s*L_\w+:', text, re.M):
        return text
    L = text.split('\n')
    starts = [i for i, l in enumerate(L) if l.strip() == '{']
    ends = [i for i, l in enumerate(L) if l.strip() == '}']
    if not starts or not ends:
        return text
    start, end = starts[0], max(ends)
    types, body_from = {}, start + 1
    for i in range(start + 1, end):
        m = DECL.match(L[i])
        if m:
            types[m.group(2)] = m.group(1)
            body_from = i + 1
        elif L[i].strip():
            break
    if len(types) < 2:
        return text
    body = range(body_from, end)
    occ = {}
    for i in body:
        for v in re.findall(r'\b[tu]\d+\b', L[i]):
            if v in types:
                occ.setdefault(v, []).append(i)
    if any(re.search(r'&\s*%s\b' % v, '\n'.join(L[body_from:end])) for v in types):
        return text
    loops = []
    for i in body:
        if LOOP.match(L[i]):
            ind = len(L[i]) - len(L[i].lstrip())
            j = i + 1
            while j < end and not (L[j].strip() == '}' and len(L[j]) - len(L[j].lstrip()) == ind):
                j += 1
            loops.append((i, j))
    rng = {}
    for v, ls in occ.items():
        a, b = min(ls), max(ls)
        first = L[a]
        defd = bool(re.match(r'^\s*%s = ' % v, first)) and not re.search(r'\b%s\b' % v, first.split('=', 1)[1])
        changed = True
        while changed:
            changed = False
            for x, y in loops:
                inside = [l for l in ls if x <= l <= y]
                if not inside:
                    continue
                if (a <= x <= b) or not defd or any(not (x <= l <= y) for l in ls):
                    na, nb = min(a, x), max(b, y)
                    if (na, nb) != (a, b):
                        a, b = na, nb
                        changed = True
        if not defd:
            a = min(a, body_from)
        rng[v] = (a, b)
    pools = {'int': [], 'float': []}
    mapping = {}
    for v in sorted(rng, key=lambda k: rng[k]):
        a, b = rng[v]
        pool = pools[types[v]]
        got = next((p for p in pool if p[1] < a), None)
        if got is None:
            got = ['%s%d' % ('t' if types[v] == 'int' else 'u', len(pool)), -1]
            pool.append(got)
        got[1] = b
        mapping[v] = got[0]
    if len(pools['int']) + len(pools['float']) >= len(rng):
        return text
    for i in body:
        L[i] = re.sub(r'\b[tu]\d+\b', lambda m: mapping.get(m.group(0), m.group(0)), L[i])
    decls = ['    int %s;' % p[0] for p in pools['int']] + ['    float %s;' % p[0] for p in pools['float']]
    kept = [l for l in L[start + 1:body_from] if not DECL.match(l)]
    return '\n'.join(L[:start + 1] + decls + kept + L[body_from:])
