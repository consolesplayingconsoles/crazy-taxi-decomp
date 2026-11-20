"""frame_reads.py: functions whose C reads past its own local frame (`int stk[N]` at offset >= 4N): the SH-4 stack
words its caller passed (a structure argument, stack parameters) that its C does not declare, read through the frame
the generated C kept. Prints file, function, frame bytes, the largest offset. Run in the repo."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re

SRC = os.environ.get('PORT_SRC') or os.path.join(os.path.dirname(__file__), '..', '..', 'src')
DEF = re.compile(r'^([A-Za-z_][\w \t\*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*\{', re.M)
NUM = r'(0x[0-9A-Fa-f]+|\d+)'


def offsets(body):
    """the constant offsets from stk the body uses"""
    s = body.replace('(int)stk', '@0')
    prev = None
    while prev != s:
        prev = s
        s = re.sub(r'\(\s*@(-?\d+)\s*\)', r'@\1', s)
        s = re.sub(r'@(-?\d+)\s*\+\s*' + NUM + r'(?![\w.])', lambda m: '@%d' % (int(m.group(1)) + int(m.group(2), 0)), s)
        s = re.sub(r'(?<![\w.)])' + NUM + r'\s*\+\s*@(-?\d+)', lambda m: '@%d' % (int(m.group(2)) + int(m.group(1), 0)), s)
    return [int(x) for x in re.findall(r'@(-?\d+)', s)]


def scan():
    out = []
    for f in sorted(os.listdir(SRC)):
        if not f.endswith('.c'):
            continue
        t = open(os.path.join(SRC, f), errors='replace').read()
        for m in DEF.finditer(t):
            end = t.find('\n}', m.end())
            body = t[m.end():end]
            mm = re.search(r'\bint stk\[(\d+)\]', body)
            if not mm:
                continue
            n = int(mm.group(1)) * 4
            big = [o for o in offsets(body) if o >= n]
            if big:
                out.append((f, m.group(2), n, max(big)))
    return out


if __name__ == '__main__':
    r = scan()
    for x in r:
        print('%-12s %-32s frame %4d, reads up to %4d' % x)
    print(len(r), 'functions')
