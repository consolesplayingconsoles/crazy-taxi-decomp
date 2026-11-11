#!/usr/bin/env python3
"""regenone.py: the generator's C for one function, written into its file in place of the old one. Run in the repo.

    python3 tools/5-generated/gen_equiv/regenone.py [--print] name [name ...]      environment as for gen_equiv (GEN_COALESCE=0 ...)

Only that function's text is replaced (nothing else in the file, no evidence, no cases); prove it with equiv.py afterwards. The whole of
`gen_equiv --regen` is not needed to apply a generator fix to a handful of functions: the generator reads and writes one function in a
second or two, and a batch run's move of files and parallel compiles is what has crashed machines. With --print the text goes to stdout.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '../..')))
import toolpath  # noqa: E402,F401
import glob
import re
import sys

sys.path.insert(0, _tp_os.path.dirname(_tp_os.path.abspath(__file__)))
sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import gen_core  # noqa: E402
import gen_drv  # noqa: E402
import gen_pipe  # noqa: E402
import rewrites  # noqa: E402


def generate(name):
    try:
        gen_core.run(name)
    except gen_core.Skip as e:
        if 'arg gap' not in str(e):
            raise
        gen_core.run(name, True)
    vs = gen_pipe.variants(name, False)
    text, c = gen_drv.build(name, vs[0], False)
    return text, c


def splice(name, new, protos=None):
    for f in sorted(glob.glob('src/*.c')):
        t = open(f, errors='replace').read()
        m = re.search(r'(?m)^(?:int|void|float|Stk\d+)\s+\**%s\s*\([^;{]*\)\s*\n\{' % re.escape(name), t)
        if not m:
            continue
        e = t.find('\n}\n', m.end()) + 3
        body = new[new.index(name):] if False else new
        mm = re.search(r'(?m)^(?:int|void|float|Stk\d+)\s+\**%s\s*\([^;{]*\)\s*\n\{' % re.escape(name), new)
        body = new[mm.start():new.find('\n}\n', mm.end()) + 3]
        t = t[:m.start()] + body + t[e:]
        for callee, sig in sorted((protos or {}).items()):
            if callee == name or re.search(r'(?m)^(?:int|void|float|Stk\d+)\s+\**%s\s*\([^;{]*\)\s*\n\{' % re.escape(callee), t):
                continue                                          # the function itself, or a callee this file defines: its definition is its prototype
            line = gen_drv.protos_text({callee: sig}).strip()
            if not line:
                continue
            pat = re.compile(r'(?m)^(?:extern )?(?:int|void|float|Stk\d+)\s+\**%s\s*\([^;{]*\);$' % re.escape(callee))
            if pat.search(t):
                t = pat.sub(lambda mm: line.split('\n')[-1], t, count=1)
            else:
                k = [x for x in re.finditer(r'(?m)^typedef struct \{ int w\[\d+\]; \} Stk\d+;\n', t)]
                at = k[-1].end() if k else 0
                t = t[:at] + line.split('\n')[-1] + '\n' + t[at:]
        # the function's own prototype, when the file declares it, takes the new signature (Zombie Revenge FUN_0c0b8bcc: the old
        # `int FUN_0c0b8bcc(int a4);` stayed above a definition with five parameters)
        hdr = ' '.join(body[:body.index('\n{')].split())
        own = re.compile(r'(?m)^(?:extern )?(?:int|void|float|Stk\d+)\s+\**%s\s*\([^;{]*\);$' % re.escape(name))
        t = own.sub(lambda mm: hdr + ';', t)
        # the field structures the new text names and the file does not declare yet (FUN_0c0b8bcc: o0_int, o4_int, o8_int and o8_uint
        # were missing, and shc stopped with an internal error): declared before the file's first one, else before the function
        have = set(re.findall(r'(?m)^struct (o[0-9A-F]+_\w+) \{', t))
        need = [d for d in rewrites.struct_decls(body) if d.split()[1] not in have]
        if need:
            first = re.search(r'(?m)^struct o[0-9A-F]+_\w+ \{', t)
            at = first.start() if first else re.search(r'(?m)^(?:int|void|float|Stk\d+)\s+\**%s\s*\(' % re.escape(name), t).start()
            t = t[:at] + '\n'.join(need) + '\n' + t[at:]
        for w in sorted({int(x) for x in re.findall(r'\bStk(\d+)\b', t)}):
            td = 'typedef struct { int w[%d]; } Stk%d;\n' % (w, w)
            if td not in t:
                t = td + t
        open(f, 'w').write(t)
        return f
    return None


def main(argv):
    show = '--print' in argv
    for name in [a for a in argv if not a.startswith('--')]:
        text, c = generate(name)
        if show:
            print(text)
            continue
        f = splice(name, text, c.protos)
        print('%s: %s' % (name, ('written into ' + f) if f else 'no definition found in src/'))


if __name__ == '__main__':
    main(sys.argv[1:])
