"""sh4abi.py: calls whose declaration puts the arguments where the callee's definition does not, on the host.

The game's C was proven on the SH-4 against SHC's calling convention: int arguments in r4-r7, then on the stack; float
arguments in fr4-fr11, then on the stack; a structure argument is copied onto the stack; a function that returns a
structure gets the address to put it at as the first stack word. The generated C says the same thing in two ways: a
callee may take `Stk3 v` (a structure of three words) where a caller declares it as three more ints after the fourth
(a8, a9, a10), or return `Stk3` where a caller passes the address as its fifth int. On the SH-4 both land in the same
places. The host's convention does not agree (x86-64 passes small structures in registers and ints 5-6 in registers),
so the native build rewrites each such call to the definition's parameters, matching them by their SH-4 location
(native_build.py applies abi_text to its copy of each source; src/ stays as proven).

    python3 tools/10-port/sh4abi.py           the calls it would rewrite, by kind, and the ones it cannot
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
SRC = os.environ.get('PORT_SRC') or os.path.join(ROOT, 'src')   # native_build.py: src/ with port/src_fixes.patch

PROTO = re.compile(r'^(?:extern\s+|static\s+)?([A-Za-z_][\w \t\*]*?)\s*\b(\w+)\s*\(([^;{}()]*(?:\([^()]*\)[^;{}()]*)*)\)\s*(;|\{|$)', re.M)
STK = re.compile(r'^Stk(\d+)$')
C_TYPES = set('void char short int long float double signed unsigned struct union enum'.split())
FLOAT_T = re.compile(r'^(const\s+)?(float|double)$')


def param_types(params):
    """the parameters' types (names dropped); None for K&R `()`; [] for (void)"""
    p = params.strip()
    if p == '':
        return None
    if p == 'void':
        return []
    out = []
    for a in split_top(p):
        a = a.strip()
        if a == '...':
            out.append('...')
            continue
        if '(' in a:                                # a function pointer
            out.append('int*')
            continue
        array = re.search(r'\[[^\]]*\]$', a) is not None
        a = re.sub(r'\s*\[[^\]]*\]$', '', a)
        m = re.match(r'^(.*?)(\b[A-Za-z_]\w*)?$', a)
        t = m.group(1).strip() if m and m.group(2) and m.group(1).strip() else a
        if t in ('', 'const', 'register'):          # no type word left: the name is the type (`unsigned`), or the whole text stays
            t = a
        t = re.sub(r'\s+', ' ', t.replace('register ', '')).strip()
        out.append(t + ' *' if array else t)         # an array parameter is a pointer
    return out


def split_top(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{':
            depth += 1
        elif ch in ')]}':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    out.append(cur)
    return out


# the hand-written files' structures passed or returned by value: their size in words
STRUCT_WORDS = {'Vector3f': 3}


def kind(t):
    """'i' an int-sized value (ints, pointers, enums), 'f' a float, ('s', words) a structure of words, None other"""
    t = t.strip()
    if '*' in t:
        return 'i'
    m = STK.match(t)
    if m:
        return ('s', int(m.group(1)))
    if re.sub(r'^const\s+', '', t) in STRUCT_WORDS:
        return ('s', STRUCT_WORDS[re.sub(r'^const\s+', '', t)])
    if FLOAT_T.match(t):
        return 'f'
    if re.match(r'^(const\s+)?(unsigned\s+|signed\s+)?(int|long|short|char|unsigned|signed)(\s+int)?$', t) or t in (
            'Uint32', 'Sint32', 'Uint16', 'Sint16', 'Uint8', 'Sint8', 'u32', 's32', 'u16', 's16', 'u8', 's8', 'BOOL', 'Bool'):
        return 'i'
    return None


def slots(ret, params):
    """the SH-4 locations of a function's parameters: [(location, kind)] in the parameters' order, location 'r4'..'r7',
    'fr4'..'fr11' or ('s', n) the n-th stack word; with the structure return's address as stack word 0. None if a
    parameter's kind is unknown"""
    out, r, f, s = [], 4, 4, 0
    rk = kind(ret) if ret else 'i'
    if isinstance(rk, tuple):
        s = 1
    for t in params:
        if t == '...':
            return None
        k = kind(t)
        if k is None:
            return None
        if k == 'i':
            if r <= 7:
                out.append(('r%d' % r, k))
                r += 1
            else:
                out.append((('s', s), k))
                s += 1
        elif k == 'f':
            if f <= 11:
                out.append(('fr%d' % f, k))
                f += 1
            else:
                out.append((('s', s), k))
                s += 1
        else:
            out.append((('s', s), k))
            s += k[1]
    return out


def definitions():
    """name -> (file, return type, parameter types, the definition's prototype text); the first definition in the files'
    order, as the native build keeps"""
    defs = {}
    for f in sorted(os.listdir(SRC)):
        if not f.endswith('.c'):
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        for m in PROTO.finditer(t):
            if m.group(4) != '{' or m.group(2) in ('if', 'for', 'while', 'switch', 'return', 'sizeof'):
                continue
            pt = param_types(m.group(3))
            if pt is None or m.group(2) in defs:
                continue
            defs[m.group(2)] = (f, re.sub(r'\b(static|extern|inline)\b', '', m.group(1)).strip(), pt)
    for name in list(defs):
        if name in frame_info():
            f, ret, pt = defs[name]
            defs[name] = (f, ret, frame_params(name, ret, pt)[0])
    return defs


def declarations(text):
    """name -> (return type, parameter types or None) for the file's own prototypes and definitions"""
    out = {}
    for m in PROTO.finditer(text):
        if m.group(2) in ('if', 'for', 'while', 'switch', 'return', 'sizeof'):
            continue
        out[m.group(2)] = (re.sub(r'\b(static|extern|inline)\b', '', m.group(1)).strip(), param_types(m.group(3)))
    return out


def same(a, b):
    return a == b


class Plan:
    """how calls to one function from one file are to be rewritten"""

    def __init__(self, name, decl, defn):
        self.name, self.decl, self.defn = name, decl, defn
        self.ok = False
        self.why = ''
        dret, dpar = decl
        fret, fpar = defn
        self.cs = slots(dret, dpar)
        self.ds = slots(fret, fpar)
        if self.cs is None or self.ds is None:
            self.why = 'a parameter of a kind the rewrite does not know'
            return
        self.cret, self.dret = kind(dret) if dret != 'void' else 'v', kind(fret) if fret != 'void' else 'v'
        if self.cret is None or self.dret is None:
            self.why = 'a return of a kind the rewrite does not know'
            return
        self.ok = True

    def needed(self):
        """whether the declaration's locations differ from the definition's"""
        cl = [(l, k if not isinstance(k, tuple) else 's%d' % k[1]) for l, k in self.cs]
        dl = [(l, k if not isinstance(k, tuple) else 's%d' % k[1]) for l, k in self.ds]
        sret = isinstance(self.cret, tuple) != isinstance(self.dret, tuple) or (
            isinstance(self.cret, tuple) and not STK.match(re.sub(r'^const\s+', '', self.decl[0].strip())))
        struct = any(isinstance(k, tuple) for _, k in self.cs + self.ds)
        typed = any(isinstance(k, tuple) and not STK.match(re.sub(r'^const\s+', '', ty.strip()))
                    for (_, k), ty in zip(self.cs, self.decl[1]))
        return sret or (struct and (cl != dl or typed))


def call_args(text, start):
    """the arguments of the call whose '(' is at start: (list of argument texts, index after ')')"""
    depth, i, cur, out = 0, start, '', []
    while i < len(text):
        ch = text[i]
        if ch == '(':
            depth += 1
            if depth == 1:
                i += 1
                continue
        elif ch == ')':
            depth -= 1
            if depth == 0:
                if cur.strip() or out:
                    out.append(cur)
                return out, i + 1
        if ch == ',' and depth == 1:
            out.append(cur)
            cur = ''
        else:
            cur += ch
        i += 1
    return None, start


def rewrite_call(plan, args, pre=None, ret_var=None, extra=None):
    """the definition's argument list for a call with these arguments, and how to wrap the call (kind of return fix and
    the expression of the return address); None if the call cannot be mapped. A structure argument of a type other than
    StkN goes through a temporary declared in pre; ret_var, the caller's structure for a callee that takes the return's
    address as its stack word 0"""
    if len(args) != len(plan.cs):
        return None
    at = {}
    if ret_var is not None:
        at[('s', 0)] = ('i', '(int)&%s' % ret_var)
    for loc, (k, expr) in (extra or {}).items():
        at[loc] = (k, expr)
    for idx, ((loc, k), a) in enumerate(zip(plan.cs, args)):
        a = a.strip()
        if isinstance(k, tuple):
            ty = plan.decl[1][idx].strip()
            if STK.match(ty) or pre is None:
                for w in range(k[1]):
                    at[('s', loc[1] + w)] = ('i', '((%s).w[%d])' % (a, w))
            else:
                tmp = '__port_a%d' % next(_TMP)
                pre.append('%s %s = (%s);' % (re.sub(r'^const\s+', '', ty), tmp, a))
                for w in range(k[1]):
                    at[('s', loc[1] + w)] = ('i', '((int *)&%s)[%d]' % (tmp, w))
        else:
            at[loc] = (k, a)
    ret_addr = None
    if isinstance(plan.cret, tuple) and not isinstance(plan.dret, tuple):
        pass                                        # the caller wants a structure, the callee takes the address
    if isinstance(plan.dret, tuple) and not isinstance(plan.cret, tuple):
        ret_addr = at.get(('s', 0), ('i', '0'))[1]   # the caller passed the address as stack word 0
    out = []
    for loc, k in plan.ds:
        if isinstance(k, tuple):
            words = []
            for w in range(k[1]):
                v = at.get(('s', loc[1] + w))
                words.append(v[1] if v else '0')
            out.append('((Stk%d){{%s}})' % (k[1], ', '.join('(int)(%s)' % x for x in words)))
        else:
            v = at.get(loc)
            if v is None:
                out.append('0')
            elif k == 'f':
                out.append(v[1] if v[0] == 'f' else '0.0f')
            else:
                out.append('(int)(%s)' % v[1] if v[0] == 'i' else '0')
    return out, ret_addr


_DEFS = None
_TMP = __import__('itertools').count(1)


def abi_text(text, fname):
    """the file's C with each call that disagrees with its callee's definition rewritten (module docstring); None when
    nothing changes"""
    global _DEFS
    if _DEFS is None:
        _DEFS = definitions()
    decls = declarations(text)
    plans = {}
    for name, (dret, dpar) in decls.items():
        if name not in _DEFS or _DEFS[name][0] == fname or dpar is None:
            continue
        p = Plan(name, (dret, dpar), (_DEFS[name][1], _DEFS[name][2]))
        if p.ok and p.needed():
            plans[name] = p
    if not plans:
        return None
    counter = [0]
    pat = re.compile(r'(?<![\w.])(%s)\s*\(' % '|'.join(re.escape(n) for n in sorted(plans, key=len, reverse=True)))

    def transform(s):
        out, i = '', 0
        while True:
            m = pat.search(s, i)
            if not m:
                return out + s[i:]
            # a declaration or the prototype: leave (the line starts with a type)
            line_start = s.rfind('\n', 0, m.start()) + 1
            before = s[line_start:m.start()]
            if re.match(r'^\s*(extern\s+|static\s+)?[A-Za-z_][\w \t\*]*$', before) and not re.search(r'\breturn\b|=', before):
                out += s[i:m.end()]
                i = m.end()
                continue
            args, end = call_args(s, m.end() - 1)
            if args is None:
                out += s[i:m.end()]
                i = m.end()
                continue
            args = [transform(a) for a in args]
            plan = plans[m.group(1)]
            pre, ret_var = [], None
            cret_t = re.sub(r'^const\s+', '', plan.decl[0].strip())
            if isinstance(plan.cret, tuple) and not isinstance(plan.dret, tuple) and not STK.match(cret_t) \
                    and any(loc == ('s', 0) for loc, kk in plan.ds if isinstance(kk, tuple)):
                counter[0] += 1
                ret_var = '__port_ret%d' % counter[0]       # the callee's stack word 0 is inside a structure of words
            r = rewrite_call(plan, args, pre, ret_var)
            if r is None:
                out += s[i:m.start()] + m.group(1) + '(' + ','.join(args) + ')'
                i = end
                continue
            newargs, ret_addr = r
            call = '%s(%s)' % (m.group(1), ', '.join(newargs))
            if ret_var is not None:
                out += s[i:m.start()] + '({ %s %s; %s %s; %s; })' % (cret_t, ret_var, ' '.join(pre), call, ret_var)
                i = end
                continue
            if isinstance(plan.cret, tuple) and isinstance(plan.dret, tuple) and not STK.match(cret_t):
                # the same words, another type: a structure of floats comes back elsewhere than one of ints on the host
                counter[0] += 1
                v = '__port_ret%d' % counter[0]
                out += s[i:m.start()] + '({ %s Stk%d %s = %s; *(%s *)&%s; })' % (' '.join(pre), plan.dret[1], v, call,
                                                                                 cret_t, v)
                i = end
                continue
            if pre:
                call = '({ %s %s; })' % (' '.join(pre), call)
            if isinstance(plan.dret, tuple) and not isinstance(plan.cret, tuple):
                call = '(*(Stk%d *)(%s) = %s, 0)' % (plan.dret[1], ret_addr, call)
            elif isinstance(plan.cret, tuple) and not isinstance(plan.dret, tuple):
                counter[0] += 1
                v = '__port_ret%d' % counter[0]
                # the callee takes the address as its stack word 0
                idx = next((k for k, (loc, kk) in enumerate(plan.ds) if loc == ('s', 0)), None)
                if idx is None:
                    out += s[i:m.start()] + m.group(1) + '(' + ','.join(args) + ')'
                    i = end
                    continue
                newargs[idx] = '(int)&%s' % v
                call = '({ Stk%d %s; %s(%s); %s; })' % (plan.cret[1], v, m.group(1), ', '.join(newargs), v)
            out += s[i:m.start()] + call
            i = end

    body = transform(text)
    # the file's prototypes of the rewritten functions: the definition's, with a pointer to a type this file does not
    # name (the definition's file has it, this one may not) as void *: a pointer is passed the same way whatever it
    # points at
    def here(ty):
        m = re.match(r'^\s*(?:const\s+)?([A-Za-z_]\w*)\s*(\*[\s\*]*)$', ty)
        if not m or m.group(1) in C_TYPES or re.search(r'\b%s\b' % re.escape(m.group(1)), text):
            return ty
        return 'void ' + m.group(2).strip()
    for name, p in plans.items():
        f, ret, par = _DEFS[name]
        ret, par = here(ret), [here(x) for x in par]
        # the return as the caller reads it (on the SH-4 a void or float callee leaves r0 as it was), unless a structure
        # comes back: then the definition's
        if not isinstance(p.dret, tuple) and not isinstance(p.cret, tuple):
            ret = p.decl[0]
        proto = '%s %s(%s);' % (ret, name, ', '.join(par) if par else 'void')
        body = re.sub(r'(?m)^(?:extern\s+)?[A-Za-z_][\w \t\*]*?\b%s\s*\([^;{}]*\)\s*;' % re.escape(name), proto, body)
    return body


def main():
    defs = definitions()
    from collections import Counter
    kinds, bad = Counter(), Counter()
    calls = 0
    for f in sorted(os.listdir(SRC)):
        if not f.endswith('.c'):
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        decls = declarations(t)
        for name, (dret, dpar) in decls.items():
            if name not in defs or defs[name][0] == f or dpar is None:
                continue
            p = Plan(name, (dret, dpar), (defs[name][1], defs[name][2]))
            if not p.ok:
                if p.cs != p.ds:
                    bad[p.why] += 1
                continue
            if not p.needed():
                continue
            n = len(re.findall(r'(?<![\w.])%s\s*\(' % re.escape(name), t)) - 1
            calls += max(n, 0)
            kinds['%s -> %s' % ('struct' if any(isinstance(k, tuple) for _, k in p.cs) else 'flat',
                                'struct' if any(isinstance(k, tuple) for _, k in p.ds) else 'flat')] += 1
            if isinstance(p.cret, tuple) != isinstance(p.dret, tuple):
                kinds['structure return differs'] += 1
    print('declarations to rewrite by kind:', dict(kinds))
    print('calls:', calls)
    print('declarations it cannot map:', dict(bad))


if __name__ == '__main__':
    main()


CAST = re.compile(r'\(\(\s*([A-Za-z_][\w \t\*]*?)\s*\(\*\)\(([^()]*)\)\)\s*\(\s*([A-Za-z_]\w*)\s*\)\)\s*\(')


def cast_text(text):
    """the file's C with each call through a cast of a defined function, `((int (*)(int, Stk3))(f))(a, s)`, rewritten
    to the definition's parameters by SH-4 location as abi_text does for direct calls: the cast says where the caller
    puts the arguments. None when nothing changes"""
    global _DEFS
    if _DEFS is None:
        _DEFS = definitions()
    changed = [False]
    counter = [0]

    def transform(s):
        out, i = '', 0
        while True:
            m = CAST.search(s, i)
            if not m:
                return out + s[i:]
            name = m.group(3)
            types = param_types(m.group(2))
            args, end = call_args(s, m.end() - 1)
            if args is None or name not in _DEFS or types is None:
                out += s[i:m.end()]
                i = m.end()
                continue
            args = [transform(a) for a in args]
            f, fret, fpar = _DEFS[name]
            plan = Plan(name, (m.group(1).strip(), types), (fret, fpar))
            r = rewrite_call(plan, args) if plan.ok and plan.needed() else None
            if r is None:
                out += s[i:m.start()] + s[m.start():m.end()] + ', '.join(args) + ')'
                i = end
                continue
            changed[0] = True
            newargs, ret_addr = r
            ret = fret if isinstance(plan.dret, tuple) else m.group(1).strip()
            fn = '((%s (*)(%s))(%s))' % (ret, ', '.join(fpar) if fpar else 'void', name)
            call = '%s(%s)' % (fn, ', '.join(newargs))
            if isinstance(plan.dret, tuple) and not isinstance(plan.cret, tuple):
                call = '(*(Stk%d *)(%s) = %s, 0)' % (plan.dret[1], ret_addr, call)
            elif isinstance(plan.cret, tuple) and not isinstance(plan.dret, tuple):
                idx = next((k for k, (loc, kk) in enumerate(plan.ds) if loc == ('s', 0)), None)
                if idx is None:
                    out += s[i:m.start()] + s[m.start():m.end()] + ', '.join(args) + ')'
                    i = end
                    continue
                counter[0] += 1
                v = '__port_cret%d' % counter[0]
                newargs[idx] = '(int)&%s' % v
                call = '({ Stk%d %s; %s(%s); %s; })' % (plan.cret[1], v, fn, ', '.join(newargs), v)
            out += s[i:m.start()] + call
            i = end

    body = transform(text)
    return body if changed[0] else None


# --- functions that read their caller's stack words through their own frame (frame_reads.py) -----------------------

_FRAMES = None
SKIP_FRAME = {'main'}      # the host calls the game's main with nothing


def prologue_bytes(name):
    """the bytes the function's prologue takes off r15 (its pushes and its frame), from its disassembly; None if unclear"""
    import subprocess
    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools', 'shdis.py'), '--func', name], capture_output=True,
                       text=True, cwd=ROOT)
    total = 0
    for line in r.stdout.splitlines():
        m = re.match(r'^[0-9a-f]{8} [0-9a-f]{4}  (\S+)\s*(.*?)(?:\s*;.*)?$', line)
        if not m:
            continue
        op, args = m.group(1), m.group(2).replace(' ', '')
        if op in ('bsr', 'jsr', 'bra', 'bt', 'bf', 'bt/s', 'bf/s', 'rts', 'jmp', 'braf', 'bsrf'):
            break
        if args.endswith(',@-r15') and op in ('mov.l', 'sts.l', 'stc.l', 'fmov.s'):
            total += 4
        elif op == 'add' and args.endswith(',r15'):
            mm = re.match(r'#(-?\d+),r15$', args)
            if not mm:
                return None
            total -= int(mm.group(1))
        elif args.endswith(',r15') and op not in ('cmp/eq', 'cmp/hs', 'cmp/ge', 'cmp/gt', 'cmp/hi', 'tst'):
            return None
    return total


def frame_info():
    """name -> (frame bytes, prologue bytes, the stack words it reads: [k]) for the functions frame_reads.py lists"""
    global _FRAMES
    if _FRAMES is not None:
        return _FRAMES
    import json
    cache = os.path.join(ROOT, 'build', 'native', 'frame_reads.json')
    src_time = max(os.path.getmtime(os.path.join(SRC, f)) for f in os.listdir(SRC) if f.endswith('.c'))
    if os.path.exists(cache) and os.path.getmtime(cache) > max(src_time, os.path.getmtime(__file__)):
        _FRAMES = {k: tuple(v) for k, v in json.load(open(cache)).items()}
        return _FRAMES
    sys.path.insert(0, os.path.dirname(__file__))
    import frame_reads
    # the stack words the callers' declarations pass, per function: a read through a variable offset (a loop over a
    # structure argument) is not a constant the scan sees
    passed = {}
    for f in sorted(os.listdir(SRC)):
        if f.endswith('.c'):
            for name, (dret, dpar) in declarations(open(os.path.join(SRC, f), errors='replace').read()).items():
                sl = slots(dret, dpar) if dpar is not None else None
                for loc, k in sl or []:
                    if isinstance(loc, tuple):
                        passed[name] = max(passed.get(name, 0), loc[1] + (k[1] if isinstance(k, tuple) else 1))
    out = {}
    for f, name, n, mx in frame_reads.scan():
        if name in SKIP_FRAME:
            continue
        p = prologue_bytes(name)
        if p is None:
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        m = re.search(r'\n[A-Za-z_][^\n;{]*\b%s\s*\([^;{)]*\)\s*\{' % re.escape(name), t)
        body = t[m.end():t.find('\n}', m.end())]
        words = sorted({(o - 4 - p) // 4 for o in frame_reads.offsets(body) if o >= n and (o - 4 - p) >= 0 and (o - 4 - p) % 4 == 0})
        if words:
            words = list(range(0, max(max(words) + 1, passed.get(name, 0))))
            out[name] = (n, p, words)
    os.makedirs(os.path.dirname(cache), exist_ok=True)
    json.dump(out, open(cache, 'w'))
    _FRAMES = out
    return out


def frame_params(name, ret, params):
    """the definition's parameters with the stack words it reads made explicit: ints padded to four (so that the new
    ones are stack words), then __s<k> up to the last word read"""
    info = frame_info().get(name)
    if not info:
        return params, []
    sl = slots(ret, params)
    if sl is None:
        return params, []
    ints = sum(1 for loc, k in sl if isinstance(loc, str) and loc.startswith('r'))
    used = 0
    for loc, k in sl:
        if isinstance(loc, tuple):
            used = max(used, loc[1] + (k[1] if isinstance(k, tuple) else 1))
    if isinstance(kind(ret) if ret else 'i', tuple):
        used = max(used, 1)
    new = list(params)
    pads = []
    for r in range(ints, 4):
        new.append('int')
        pads.append('__r%d' % (4 + r))
    added = []
    for k in range(used, max(info[2]) + 1):
        new.append('int')
        added.append(k)
    return new, pads + ['__s%d' % k for k in added]


def frame_text(text, fname):
    """the file's definitions of frame_info's functions given their stack words as parameters, copied into the frame
    where the C reads them; None when nothing changes"""
    info = frame_info()
    changed = False
    for name, (n, p, words) in info.items():
        m = re.search(r'\n([A-Za-z_][^\n;{(]*?\b%s)\s*\(([^;{)]*)\)\s*\{' % re.escape(name), text)
        if not m or _DEFS.get(name, ('',))[0] != fname:
            continue
        ret = m.group(1)[:m.group(1).rfind(name)].strip()
        params = param_types(m.group(2)) or []
        new, names = frame_params(name, ret, params)
        if not names:
            continue
        old_par = m.group(2).strip()
        par = ('' if old_par in ('', 'void') else old_par + ', ') + ', '.join('int ' + x for x in names)
        start = m.end()
        end = text.find('\n}', start)
        body = text[start:end]
        mm = re.search(r'\bint stk\[(\d+)\]', body)
        if not mm:
            continue
        need = (4 + p + 4 * (max(words) + 1) + 3) // 4
        body = body.replace(mm.group(0), 'int stk[%d]' % max(int(mm.group(1)), need), 1)
        copies = ''.join('\n    *(int *)((int)stk + %d) = %s;  /* the caller\'s stack word %s (the SH-4 frame) */'
                         % (4 + p + 4 * int(x[3:]), x, x[3:]) for x in names if x.startswith('__s'))
        # after the declarations: before the first statement line
        lines = body.split('\n')
        at = 1
        while at < len(lines) and (re.match(r'^\s*(register\s+)?(int|float|unsigned|signed|char|short|Stk\d+|struct)\b[^=(]*;\s*$', lines[at])
                                   or not lines[at].strip()):
            at += 1
        lines.insert(at, copies.lstrip('\n'))
        body = '\n'.join(lines)
        text = text[:m.start()] + '\n%s(%s)\n{' % (m.group(1), par) + body + text[end:]
        # the file's own prototype
        text = re.sub(r'(?m)^(?:extern\s+)?[A-Za-z_][\w \t\*]*?\b%s\s*\([^;{}]*\)\s*;' % re.escape(name),
                      '%s %s(%s);' % (ret, name, ', '.join(new) if new else 'void'), text)
        changed = True
    return text if changed else None


# --- float returns ---------------------------------------------------------------------------------------------------
# The SH-4 returns a float in fr0 and an int in r0, whatever a prototype says, and much of the generated C types a
# function that passes on a float callee's result (vecDistXZf returns nlLength(...)) as int. On the host the two come
# back in different registers (xmm0, eax), so every prototype and definition of a function that returns a float must
# say float.

_FLOAT_RET = None


def float_returns():
    """the functions whose definitions return a float in fr0: typed float, or typed int and every return passes on such
    a function's result"""
    global _FLOAT_RET
    if _FLOAT_RET is not None:
        return _FLOAT_RET
    defs = definitions()
    bodies = {}
    for f in sorted(os.listdir(SRC)):
        if not f.endswith('.c'):
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        for m in re.finditer(r'(?m)^([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{}]*)\)\s*\n\{', t):
            name = m.group(2)
            if name in bodies or defs.get(name, (None,))[0] != f:
                continue
            bodies[name] = t[m.end():t.find('\n}', m.end())]
    fl = {n for n, (f, r, p) in defs.items() if kind(r) == 'f'}
    changed = True
    while changed:
        changed = False
        for n, b in bodies.items():
            if n in fl or kind(defs[n][1]) != 'i' or '*' in defs[n][1]:
                continue
            rets = re.findall(r'\breturn\b([^;]*);', b)
            if rets and all((lambda m: m and m.group(1) in fl)(re.match(r'^\s*\(*\s*(\w+)\s*\(', r)) for r in rets):
                fl.add(n)
                changed = True
    _FLOAT_RET = fl
    return fl


def float_ret_text(text):
    """the file with the return type of each prototype and definition of a float-returning function (float_returns)
    made float; None when nothing changes"""
    fl = float_returns()
    INT_T = r'(?:(?:unsigned|signed)\s+)?(?:int|long|short|char)|unsigned|signed|Uint32|Sint32|Uint16|Sint16|Uint8|Sint8|u32|s32|u16|s16|u8|s8|BOOL|Bool'

    def fix(m):
        return m.group(1) + 'float ' + m.group(3) + m.group(4) if m.group(3) in fl else m.group(0)
    out = re.sub(r'(?m)^(\s*(?:extern\s+|static\s+)*)(%s)\s+(\w+)(\s*\()' % INT_T, fix, text)
    return out if out != text else None


# --- arguments passed on in registers (forwarded.py) -----------------------------------------------------------------

def forward_text(text, fname):
    """the file with the calls forwarded.py found completed: each call to such a callee G takes G's definition's
    arguments, the forwarding caller's own parameter in the registers it passes on; None when nothing changes"""
    import forwarded
    fx = forwarded.fixes()
    defs = definitions()
    proto = re.compile(r'(?m)^([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{}]*)\)\s*\n\{')
    mine = {}                                         # D defined here -> its fixes
    for m in proto.finditer(text):
        if m.group(2) in fx and defs.get(m.group(2), (None,))[0] == fname:
            mine[m.group(2)] = (m.start(), text.find('\n}', m.end()), fx[m.group(2)])
    if not mine:
        return None
    decls = declarations(text)
    callees = {G for _, _, gs in mine.values() for G in gs}
    plans = {}
    for G in callees:
        if G in decls and decls[G][1] is not None and G in defs:
            plans[G] = Plan(G, decls[G], (defs[G][1], defs[G][2]))
    plans = {G: p for G, p in plans.items() if p.ok}
    if not plans:
        return None
    pat = re.compile(r'(?<![\w.])(%s)\s*\(' % '|'.join(re.escape(n) for n in sorted(plans, key=len, reverse=True)))
    out, i = '', 0
    while True:
        m = pat.search(text, i)
        if not m:
            out += text[i:]
            break
        line_start = text.rfind('\n', 0, m.start()) + 1
        before = text[line_start:m.start()]
        if re.match(r'^\s*(extern\s+|static\s+)?[A-Za-z_][\w \t\*]*$', before) and not re.search(r'\breturn\b|=', before):
            out += text[i:m.end()]
            i = m.end()
            continue
        args, end = call_args(text, m.end() - 1)
        if args is None:
            out += text[i:m.end()]
            i = m.end()
            continue
        G = m.group(1)
        plan = plans[G]
        extra = {}
        for D, (s, e, gs) in mine.items():
            if s <= m.start() < e and G in gs:
                for loc, pname in gs[G].items():
                    extra[loc] = ('f' if loc.startswith('fr') else 'i', pname)
        r = rewrite_call(plan, args, None, None, extra)
        if r is None:
            out += text[i:end]
            i = end
            continue
        out += text[i:m.start()] + '%s(%s)' % (G, ', '.join(r[0]))
        i = end
    for G, p in plans.items():
        f, ret, par = defs[G]
        protoline = '%s %s(%s);' % (p.decl[0], G, ', '.join(par) if par else 'void')
        out = re.sub(r'(?m)^(?:extern\s+)?[A-Za-z_][\w \t\*]*?\b%s\s*\([^;{}]*\)\s*;' % re.escape(G), protoline, out)
    return out if out != text else None
