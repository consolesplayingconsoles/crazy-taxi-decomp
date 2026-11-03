#!/usr/bin/env python3
"""stackparams.py: a generated function that reads the words its caller pushed through offsets past its own frame array. Run in the repo.

    python3 tools/5-generated/gen_equiv/stackparams.py                   report: function, file, the stack words it reads
    python3 tools/5-generated/gen_equiv/stackparams.py --fix [name ...]  give those words a parameter each (a8 is the first stack word, a9 the next)

The generator writes the original's frame as `int stk[N]` and reads a word of the caller's frame at `stk + N` and on. That is the word at
the entry SP only while the compiler's frame is exactly the array: a function that saves registers (or the compiler's own temporaries)
has them in between, and the C then reads its own saved registers (Virtua Tennis primSprDrawScaleAlpha: the position it draws at was
zeros or a stack address; primTexVertexSet and primVertexSet wrote vertices with stack addresses for coordinates). equiv.py compared its
cases with zeros in those words, where reading the wrong place gives the same answer, and a callee that does not declare the words
leaves the callers' pushes of them uncompared. As parameters, the compiler places them where the ABI says: ints a4-a7 in r4-r7, then
one word each on the stack. A word read as a float is read as `*(float *)&aN` (a float parameter would go to fr4 and up).
Skipped, and reported: a function that already has a structure parameter, a read that is not 4 bytes or not word aligned.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob
import re
import sys

sys.path.insert(0, _tp_os.path.dirname(_tp_os.path.abspath(__file__)))
import frame  # noqa: E402

FN = re.compile(r'(?m)^(int|void|float|Stk\d+)\s+(\w+)\s*\(([^;{]*)\)\s*\n\{')
SCALAR = ('int', 'unsigned int', 'float')


def read_words(body, k):
    """[(start, end, type, n)] of every dereference at stack offset n >= k, or (None, reason) when one cannot be turned into a parameter"""
    out = []
    for m in frame.DEREF.finditer(body):
        q = m.end() - 1
        r = frame._match(body, q)
        if r < 0:
            continue
        operand = body[q:r + 1]
        outer = frame._outer(operand)
        if '(int)stk' not in outer:
            continue
        expr = outer.replace('(int)stk', '0')
        if not re.fullmatch(r'[\s()0-9xXa-fA-F+\-]*', expr):
            return None, 'a variable frame address'
        try:
            n = eval(expr)
        except Exception:
            return None, 'an address that cannot be read'
        if n < k:
            continue
        t = m.group(1).strip()
        if t not in SCALAR:
            return None, 'a %s read past the frame (offset %d)' % (t, n)
        if (n - k) % 4:
            return None, 'an unaligned word (offset %d)' % n
        out.append((m.start(), r + 1, t, n))
    return out, ''


def analyse(text):
    """{name: (start, end, k, words, why)}: words {w: type set} read past the frame, why '' when it can be converted"""
    res = {}
    for m in FN.finditer(text):
        e = text.find('\n}\n', m.end())
        if e < 0:
            continue
        body = text[m.start():e + 3]
        k = re.search(r'\bint stk\[(\d+)\]', body)
        if not k:
            continue
        kb = 4 * int(k.group(1))
        reads, why = read_words(body, kb)
        if reads is None:
            res[m.group(2)] = (m.start(), e + 3, kb, {}, why)
            continue
        if not reads:
            continue
        params = [p.strip() for p in m.group(3).split(',') if p.strip() and p.strip() != 'void']
        if any(not re.match(r'^(int|float) (a\d+|f\d+)$', p) for p in params):
            res[m.group(2)] = (m.start(), e + 3, kb, {}, 'a parameter that is not a plain int or float: %s' % ', '.join(params))
            continue
        words = {}
        for s, e_, t, n in reads:
            words.setdefault((n - kb) // 4, set()).add(t)
        res[m.group(2)] = (m.start(), e + 3, kb, words, '')
    return res


def addresses(text, kb, lo, hi, n):
    """The address of a stack word (`((int)stk + 4) + 8` with the frame ending at kb) becomes the address of its parameter: the parameter lives
    where the compiler put it, not at the frame's end."""
    out, last, i = [], 0, 0
    while True:
        j = text.find('(int)stk', i)
        if j < 0:
            break
        s, e, v = j, j + 8, 0
        while text[s - 1:s] == '(':
            m = re.match(r' \+ (0x[0-9A-Fa-f]+|\d+)\)', text[e:])
            if not m:
                break
            v += int(m.group(1), 0)
            s -= 1
            e += m.end()
        if s < j and v >= kb and (v - kb) % 4 == 0 and lo <= (v - kb) // 4 <= hi:
            w = (v - kb) // 4
            out.append(text[last:s])
            out.append('((int)&s.w[%d])' % (w - lo) if n >= 2 else '((int)&a%d)' % (8 + w))
            last = e
        i = e if s < j else j + 8
    out.append(text[last:])
    return ''.join(out)


def convert(text, name, info):
    """The function with its stack words as parameters. The words from the lowest read to the highest are one structure by value (`StkN s`,
    the form the generator's callers know: gen_core.def_stack_words), after one int parameter for every lower word; one word alone is an int."""
    s, e, kb, words, why = info
    body = text[s:e]
    m = FN.match(body)
    rtype, params = m.group(1), [p.strip() for p in m.group(3).split(',') if p.strip() and p.strip() != 'void']
    ints = sorted(int(p.split('a')[-1]) for p in params if p.startswith('int a'))
    flts = [p for p in params if p.startswith('float ')]
    lo, hi = min(words), max(words)
    n = hi - lo + 1
    ptypes = ['int a%d' % i for i in range(4, 8 + lo)]
    for i in ints:
        if i >= 8 + lo and i <= 8 + hi:
            return None, 'an int parameter a%d inside the structure words' % i
    if n >= 2:
        ptypes.append('Stk%d s' % n)
        ref = lambda w, t: ('(*(%s *)&s.w[%d])' % (t, w - lo)) if t != 'int' else 's.w[%d]' % (w - lo)
    else:
        ptypes.append('int a%d' % (8 + lo))
        ref = lambda w, t: ('(*(%s *)&a%d)' % (t, 8 + w)) if t != 'int' else 'a%d' % (8 + w)
    reads, _ = read_words(body, kb)
    out, last = [], 0
    for st, en, t, nn in sorted(reads):
        out.append(body[last:st])
        out.append(ref((nn - kb) // 4, t))
        last = en
    out.append(body[last:])
    new = ''.join(out)
    new = addresses(new, kb, lo, hi, n)
    head = '%s %s(%s)' % (rtype, name, ', '.join(ptypes + flts))
    new = re.sub(r'^(?:int|void|float|Stk\d+)\s+%s\s*\([^;{]*\)' % re.escape(name), head, new, count=1, flags=re.M)
    return new, head


def main(argv):
    fix = '--fix' in argv
    only = [a for a in argv if not a.startswith('--')]
    total = done = 0
    for f in sorted(glob.glob('src/*.c')):
        text = open(f, errors='replace').read()
        res = analyse(text)
        if only:
            res = {n: v for n, v in res.items() if n in only}
        if not res:
            continue
        heads = {}
        for name, info in sorted(res.items(), key=lambda kv: -kv[1][0]):
            total += 1
            s, e, kb, words, why = info
            if why:
                print('%s: %s: skipped: %s' % (f, name, why))
                continue
            print('%s: %s: frame %d bytes, stack words %s' % (f, name, kb, ', '.join('%d (%s)' % (w, '/'.join(sorted(t))) for w, t in sorted(words.items()))))
            if fix:
                new, head = convert(text, name, info)
                if new is None:
                    print('  skipped: %s' % head)
                    continue
                text = text[:s] + new + text[e:]                 # last function first: the offsets of the ones before it stay right
                heads[name] = head
                done += 1
        for name, head in heads.items():                        # the prototypes of the file, after the bodies
            text = re.sub(r'(?m)^(?:extern )?(?:int|void|float)\s+%s\s*\([^;{]*\);$' % re.escape(name), head + ';', text)
            for k_ in set(re.findall(r'Stk(\d+) s', head)):
                td = 'typedef struct { int w[%s]; } Stk%s;\n' % (k_, k_)
                if td not in text:
                    m_ = re.search(r'(?m)^typedef struct \{ int w\[\d+\]; \} Stk\d+;\n', text)
                    text = (text[:m_.end()] + td + text[m_.end():]) if m_ else td + text
        if fix:
            open(f, 'w').write(text)
    print('stackparams: %d function(s) read stack words past their frame array%s' % (total, '; %d converted, prove them with equiv.py' % done if fix else ''))


if __name__ == '__main__':
    main(sys.argv[1:])
