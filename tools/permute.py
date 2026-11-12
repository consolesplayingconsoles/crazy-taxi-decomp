#!/usr/bin/env python3
"""A permuter: small rewrites of one function's C that do not change what it does, kept when the compiled code gets closer to the game's.

    python3 tools/permute.py <file.c> <function> [--image NAME] [--iters N] [--jobs J] [--seed S] [--out PATH]

Run in the repo; --image an overlay (default 1ST_READ.BIN). The score is tools/fcmp.py --score: instructions the C and the original do not
have in common, addresses masked (0: the instructions match; the build still decides about the pool). Each round, J candidates of one or two rewrites
of the best text so far are compiled at once; the best of them is kept when its score is no worse (a plateau is walked). Stops at 0 or after N rounds.
The rewrites keep the meaning: swap the operands of a commutative operator, swap two neighbouring statements that share no names written by either,
reorder local declarations, split or join a declaration's initialiser, add or drop `register`, write `x op= y` as `x = x op y` or back.
The best text goes to --out (default: <file>.best.c beside it) with its score. Nothing in src/ changes.
"""
import concurrent.futures as CF, os, random, re, shutil, subprocess, sys
args = sys.argv[1:]


def opt(name, default):
    if name in args:
        i = args.index(name)
        v = args[i + 1]
        del args[i:i + 2]
        return v
    return default


IMAGE = opt('--image', '1ST_READ')
ITERS = int(opt('--iters', '60'))
JOBS = int(opt('--jobs', '6'))
SEED = int(opt('--seed', '1'))
OUT = opt('--out', None)
cfile, fn = os.path.abspath(args[0]), args[1]
R = os.getcwd()
CWD = R if IMAGE == '1ST_READ' else os.path.join(R, 'overlays', IMAGE)
OUT = OUT or cfile[:-2] + '.best.c'
text = open(cfile, encoding='latin1').read()
h, e = spans(text)[fn]
HEAD, BODY, TAIL = text[:h], text[h:e], text[e:]
CONTROL = re.compile(r'^\s*(if|else|for|while|do|switch|case|default|return|break|continue|goto|\{|\})\b')
DECL = re.compile(r'^\s*(?:register\s+|const\s+|unsigned\s+|signed\s+|struct\s+)*[A-Za-z_]\w*(?:\s*\*)*\s+\*?\s*[A-Za-z_]\w*(?:\s*\[[^\]]*\])?\s*(?:=[^;]*)?;\s*$')


def spans(text):
    """Each function's text in a C file: name -> (start, end)."""
    masked = re.sub(r'/\*.*?\*/|//[^\n]*', lambda x: ' ' * len(x.group(0)), text, flags=re.S)
    out, depth, last, i = {}, 0, 0, 0
    for i, c in enumerate(masked):
        if c == '{':
            if depth == 0:
                body = i
            depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0:
                head = masked[last:body]
                m = re.search(r'(\w+)\s*\([^;{}]*\)\s*$', head)
                if m and not head.rstrip().endswith('='):
                    k = re.search(r'[^\s;}][^;}]*$', head)
                    out[m.group(1)] = (last + (k.start() if k else 0), i + 1)
                last = i + 1
        elif c == ';' and depth == 0:
            last = i + 1
    return out


def score(body, k):
    d = os.path.join('build', 'perm_%s_%d' % (fn, k))
    p = os.path.join(CWD, d)
    os.makedirs(p, exist_ok=True)
    c = os.path.join(p, 'try.c')
    open(c, 'w', encoding='latin1').write(HEAD + body + TAIL)
    r = subprocess.run(['python3', os.path.join(R, 'tools/fcmp.py'), c, fn, '--score'], cwd=CWD,
                       env=dict(os.environ, FCMP_DIR=os.path.join(d, 'fc')), capture_output=True, text=True, errors='replace')
    m = re.search(r'^SCORE %s (\d+)$' % re.escape(fn), r.stdout, re.M)
    return int(m.group(1)) if m else None


def lines_of(body):
    return body.split('\n')


def names_in(s):
    return set(re.findall(r'[A-Za-z_]\w*', s))


def written(s):
    m = re.match(r'^\s*([^=;(]+?)\s*(?:[-+*/|&^]|<<|>>)?=(?!=)', s)
    return names_in(m.group(1)) if m else set()


def m_commute(body, rnd):
    ops = list(re.finditer(r'(?<![\w\]\)>.])([A-Za-z_][\w]*(?:->\w+|\.\w+|\[[^\]]*\])*|\d+[uUfF]?)\s*(\+|\*|&|\||\^|==|!=)\s*([A-Za-z_][\w]*(?:->\w+|\.\w+|\[[^\]]*\])*|\d+[uUfF]?)(?![\w(\[.>-])', body))
    ops = [m for m in ops if not (m.group(2) == '&' and body[max(0, m.start() - 1)] in '(,=')]
    if not ops:
        return None
    m = rnd.choice(ops)
    return body[:m.start()] + m.group(3) + ' ' + m.group(2) + ' ' + m.group(1) + body[m.end():]


def m_swap(body, rnd):
    L = lines_of(body)
    idx = [i for i in range(len(L) - 1) if L[i].strip().endswith(';') and L[i + 1].strip().endswith(';')
           and not CONTROL.match(L[i]) and not CONTROL.match(L[i + 1]) and not DECL.match(L[i]) and not DECL.match(L[i + 1])
           and len(L[i]) - len(L[i].lstrip()) == len(L[i + 1]) - len(L[i + 1].lstrip())]
    rnd.shuffle(idx)
    for i in idx:
        a, b = L[i], L[i + 1]
        wa, wb = written(a), written(b)
        if not wa or not wb:
            continue                                   # a call: its effects are unknown, it stays where it is
        if wa & names_in(b) or wb & names_in(a):
            continue
        L[i], L[i + 1] = b, a
        return '\n'.join(L)
    return None


def decl_block(L):
    first = next(i for i, l in enumerate(L) if l.strip() == '{')
    j = first + 1
    out = []
    while j < len(L) and (DECL.match(L[j]) or not L[j].strip()):
        if L[j].strip():
            out.append(j)
        j += 1
    return out


def m_decl_order(body, rnd):
    L = lines_of(body)
    d = [i for i in decl_block(L) if '=' not in L[i]]
    if len(d) < 2:
        return None
    i, j = rnd.sample(d, 2)
    L[i], L[j] = L[j], L[i]
    return '\n'.join(L)


def m_split_init(body, rnd):
    L = lines_of(body)
    d = decl_block(L)
    if not d:
        return None
    cand = [i for i in d if '=' in L[i]]
    if cand and rnd.random() < 0.7:
        i = rnd.choice(cand)
        m = re.match(r'^(\s*)(.*?)\b([A-Za-z_]\w*)\s*=\s*(.*);\s*$', L[i])
        if not m:
            return None
        ind, typ, name, val = m.groups()
        L[i] = '%s%s%s;' % (ind, typ, name)
        last = max(d)
        L.insert(last + 1, '%s%s = %s;' % (ind, name, val))
        return '\n'.join(L)
    # join: a plain declaration and the first statement after the declarations assigning it a value that uses no other local declared after it
    plain = [i for i in d if '=' not in L[i]]
    if not plain:
        return None
    i = rnd.choice(plain)
    m = re.match(r'^(\s*)(.*?)\b([A-Za-z_]\w*)\s*;\s*$', L[i])
    if not m:
        return None
    ind, typ, name = m.groups()
    k = max(d) + 1
    while k < len(L) and not L[k].strip():
        k += 1
    if k >= len(L):
        return None
    m2 = re.match(r'^\s*%s\s*=\s*(.*);\s*$' % re.escape(name), L[k])
    if not m2:
        return None
    L[i] = '%s%s%s = %s;' % (ind, typ, name, m2.group(1))
    del L[k]
    return '\n'.join(L)


def m_register(body, rnd):
    L = lines_of(body)
    d = decl_block(L)
    if not d:
        return None
    i = rnd.choice(d)
    if re.match(r'^\s*register\s+', L[i]):
        L[i] = re.sub(r'^(\s*)register\s+', r'\1', L[i])
    else:
        L[i] = re.sub(r'^(\s*)', r'\1register ', L[i], count=1)
    return '\n'.join(L)


def m_opassign(body, rnd):
    ms = list(re.finditer(r'^(\s*)([A-Za-z_][\w>\-.\[\]]*)\s*(\+|-|\*|\||&|\^)=\s*([^;]+);', body, re.M))
    ms2 = list(re.finditer(r'^(\s*)([A-Za-z_][\w>\-.\[\]]*)\s*=\s*\2\s*(\+|-|\*|\||&|\^)\s*([^;]+);', body, re.M))
    if ms and (not ms2 or rnd.random() < 0.5):
        m = rnd.choice(ms)
        return body[:m.start()] + '%s%s = %s %s %s;' % (m.group(1), m.group(2), m.group(2), m.group(3), m.group(4)) + body[m.end():]
    if ms2:
        m = rnd.choice(ms2)
        return body[:m.start()] + '%s%s %s= %s;' % (m.group(1), m.group(2), m.group(3), m.group(4)) + body[m.end():]
    return None


GLOBALS = {}
for _m in re.finditer(r'^extern\s+([A-Za-z_][\w \t]*?)\s*(\*?)\s*([A-Za-z_]\w*)\s*(\[\s*\])?\s*;', HEAD, re.M):
    _t, _star, _n, _arr = _m.groups()
    if _star or _arr:
        GLOBALS[_n] = _t.strip() + ' *'                 # an array or a pointer: a local pointer holds it


def m_hoist(body, rnd):
    """A global object or pointer the function uses twice or more, through a local copy taken at the start (the original compiler then keeps its
    address in a register from the start)."""
    cand = [n for n in GLOBALS if len(re.findall(r'\b%s\b' % re.escape(n), body)) >= 2]
    if not cand:
        return None
    n = rnd.choice(cand)
    L = lines_of(body)
    d = decl_block(L)
    first = next(i for i, l in enumerate(L) if l.strip() == '{')
    ind = re.match(r'^(\s*)', L[d[0]]).group(1) if d else '\t'
    local = 'h_' + n[:20]
    if re.search(r'\b%s\b' % local, body):
        return None
    after = (max(d) + 1) if d else first + 1
    rest = '\n'.join(L[after:])
    rest = re.sub(r'\b%s\b' % re.escape(n), local, rest)
    early = rnd.random() < 0.5
    new = L[:after] + ['%s%s%s;' % (ind, GLOBALS[n], local)] + (['%s%s = %s;' % (ind, local, n)] if early else [])
    if not early:                                         # just before its first use
        R_ = rest.split('\n')
        k = next((i for i, l in enumerate(R_) if re.search(r'\b%s\b' % local, l)), 0)
        R_.insert(k, '%s%s = %s;' % (ind, local, n))
        rest = '\n'.join(R_)
    return '\n'.join(new) + '\n' + rest


FLIP = {'<': '>', '>': '<', '<=': '>=', '>=': '<='}


def m_compare(body, rnd):
    """a < b as b > a (the order of cmp's operands and of the branch)."""
    ops = list(re.finditer(r'([A-Za-z_][\w]*(?:->\w+|\.\w+|\[[^\]]*\])*|\d+[uUfF]?|\d*\.\d+[fF]?)\s*(<=|>=|<|>)\s*([A-Za-z_][\w]*(?:->\w+|\.\w+|\[[^\]]*\])*|\d+[uUfF]?|\d*\.\d+[fF]?)(?![\w(\[.>-])', body))
    ops = [m for m in ops if body[m.start(2) - 1:m.start(2)] not in '<>-' and body[m.end(2):m.end(2) + 1] not in '<>=']
    if not ops:
        return None
    m = rnd.choice(ops)
    return body[:m.start()] + m.group(3) + ' ' + FLIP[m.group(2)] + ' ' + m.group(1) + body[m.end():]


def m_zero(body, rnd):
    """if (!x) as if (x == 0), and if (x) as if (x != 0), and back."""
    a = list(re.finditer(r'\((\s*)!\s*([A-Za-z_][\w>\-.\[\]]*)\s*\)', body))
    b = list(re.finditer(r'\(\s*([A-Za-z_][\w>\-.\[\]]*)\s*==\s*0\s*\)', body))
    c = list(re.finditer(r'\b(if|while)\s*\(\s*([A-Za-z_][\w>\-.\[\]]*)\s*\)', body))
    d = list(re.finditer(r'\b(if|while)\s*\(\s*([A-Za-z_][\w>\-.\[\]]*)\s*!=\s*0\s*\)', body))
    pick = [('a', m) for m in a] + [('b', m) for m in b] + [('c', m) for m in c] + [('d', m) for m in d]
    if not pick:
        return None
    k, m = rnd.choice(pick)
    if k == 'a':
        return body[:m.start()] + '(%s == 0)' % m.group(2) + body[m.end():]
    if k == 'b':
        return body[:m.start()] + '(!%s)' % m.group(1) + body[m.end():]
    if k == 'c':
        return body[:m.start()] + '%s (%s != 0)' % (m.group(1), m.group(2)) + body[m.end():]
    return body[:m.start()] + '%s (%s)' % (m.group(1), m.group(2)) + body[m.end():]


INV = {'==': '!=', '!=': '==', '<': '>=', '>=': '<', '>': '<=', '<=': '>'}


def m_ifelse(body, rnd):
    """if (a OP b) { X } else { Y } as if (a NOT-OP b) { Y } else { X }: the order the compiler lays the two blocks out in."""
    out = []
    for m in re.finditer(r'\bif\s*\(', body):
        i = m.end(); depth = 1
        while i < len(body) and depth:
            depth += {'(': 1, ')': -1}.get(body[i], 0); i += 1
        cond = body[m.end():i - 1]
        j = i
        while j < len(body) and body[j].isspace():
            j += 1
        if j >= len(body) or body[j] != '{':
            continue
        k = j + 1; depth = 1
        while k < len(body) and depth:
            depth += {'{': 1, '}': -1}.get(body[k], 0); k += 1
        thenb = body[j:k]
        rest = body[k:]
        me = re.match(r'\s*else\s*\{', rest)
        if not me:
            continue
        s = k + me.end(); depth = 1; q = s
        while q < len(body) and depth:
            depth += {'{': 1, '}': -1}.get(body[q], 0); q += 1
        elseb = body[k + me.end() - 1:q]
        mc = re.fullmatch(r'\s*(.+?)\s*(==|!=|<=|>=|<|>)\s*(.+?)\s*', cond)
        if mc and '&&' not in cond and '||' not in cond:
            nc = '%s %s %s' % (mc.group(1), INV[mc.group(2)], mc.group(3))
        else:
            nc = '!(%s)' % cond
        out.append((m.start(), q, 'if (%s) %s else %s' % (nc, elseb, thenb)))
    if not out:
        return None
    a, b, new = rnd.choice(out)
    return body[:a] + new + body[b:]


MUTS = [m_hoist, m_compare, m_zero, m_ifelse, m_commute, m_swap, m_swap, m_decl_order, m_split_init, m_register, m_opassign]


def mutate(body, rnd):
    for _ in range(rnd.choice((1, 1, 2))):
        for _try in range(10):
            b = rnd.choice(MUTS)(body, rnd)
            if b and b != body:
                body = b
                break
    return body


def flatten(body):
    """The blocks a C99-to-C89 conversion opened for late declarations (`{ T x = e;` ... ` }}`) taken out again: the declarations go to the
    top of the function, as a C89 author writes them, and stay assignments where they were."""
    n_open = len(re.findall(r'(?m)^(\s*)\{ (?=[A-Za-z_])', body))
    if not n_open:
        return None
    decls = []
    def take(m):
        ind, decl = m.group(1), m.group(2)
        mm = re.match(r'^((?:const\s+|unsigned\s+|signed\s+|struct\s+)*[A-Za-z_]\w*(?:\s*\*)*\s*\**)\s*([A-Za-z_]\w*)\s*(=\s*(.*))?;$', decl.strip())
        if not mm:
            return m.group(0)
        typ, name, _, val = mm.groups()
        decls.append('\t%s %s;' % (typ.strip(), name))
        return ind + ('%s = %s;' % (name, val) if val is not None else '')
    out = re.sub(r'(?m)^(\s*)\{ ((?:const\s+|unsigned\s+|signed\s+|struct\s+)*[A-Za-z_]\w*(?:\s*\*)*\s*\**\s*[A-Za-z_]\w*\s*(?:=[^;]*)?;)', take, body)
    k = len(decls)
    if not k:
        return None
    # each opened block closed with ' }' just before an original '}': as many go again
    for _ in range(k):
        out, c = re.subn(r' \}(?=\s*\})', '', out, count=1)
        if not c:
            return None
    L = out.split('\n')
    first = next(i for i, l in enumerate(L) if l.strip() == '{')
    L[first + 1:first + 1] = decls
    return '\n'.join(L)


def main():
    rnd = random.Random(SEED)
    best = BODY
    bscore = score(best, 0)
    if bscore is None:
        sys.exit('[ERROR] the starting text does not compile')
    fl = flatten(best)
    if fl:
        fs = score(fl, 0)
        if fs is not None and fs <= bscore:
            best, bscore = fl, fs
            print('flattened', fs, flush=True)
    print('start', bscore, flush=True)
    seen = {best}
    with CF.ThreadPoolExecutor(JOBS) as ex:
        for it in range(ITERS):
            if bscore == 0:
                break
            cands = []
            for k in range(JOBS):
                c = mutate(best, random.Random(rnd.random()))
                if c not in seen:
                    seen.add(c)
                    cands.append(c)
            if not cands:
                continue
            res = list(ex.map(lambda kv: (score(kv[1], kv[0] + 1), kv[1]), enumerate(cands)))
            res = [(s, c) for s, c in res if s is not None]
            if not res:
                continue
            s, c = min(res, key=lambda x: x[0])
            if s <= bscore:
                if s < bscore:
                    print('round %d: %d' % (it, s), flush=True)
                best, bscore = c, s
    open(OUT, 'w', encoding='latin1').write(HEAD + best + TAIL)
    for k in range(JOBS + 1):
        shutil.rmtree(os.path.join(CWD, 'build', 'perm_%s_%d' % (fn, k)), ignore_errors=True)
    print('best', bscore, OUT)


if __name__ == '__main__':
    main()
