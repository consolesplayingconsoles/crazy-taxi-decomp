#!/usr/bin/env python3
"""consistency.py: every function with C in src/ has its cases where the check looks for them and a recorded outcome. Run in the repo.

    python3 tools/consistency.py            report what is out of step
    python3 tools/consistency.py --fix      repair it (takes state/.gen.lock, the generator's lock)

What it looks at, for the functions of functions.txt that src/*.c defines (matching C units, proven by the build, left out):
  defined twice      the same function in two files: the copy in the file whose cases exist stays, the other is removed
  stray cases        tests/<file>/<function>.json where <file>.c does not define the function: moved to the file that does, or
                     deleted when no file does (left behind when C moved or was regenerated)
  no recorded pass   C and cases, but the function is not in tests/equivalent.txt: the file is checked
                     again (tools/equiv.py); what still fails leaves src/
  no cases           C with no case file anywhere
C that leaves src/: generated C (src/gen_*.c) is dropped with its cases, so the generator writes it again; hand-written C moves to
partial/<file>.c, where progress.py counts it as partial work. Nothing written by hand is deleted.
"""
import fcntl
import glob
import os
import re
import subprocess
import sys

DEF = re.compile(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{', re.M)


def definitions():
    """{function: [file stem, ...]} for the functions src/*.c defines (scratch files left out)."""
    out = {}
    for f in sorted(glob.glob('src/*.c')):
        stem = os.path.basename(f)[:-2]
        if stem.startswith(('gen_tmp', 'zz_')):
            continue
        if '@unit' in open(f, errors='replace').read(300):          # a matching C unit: proven by the build (byte for byte), not by cases
            continue
        text = re.sub(r'/\*.*?\*/', lambda m: ' ' * len(m.group(0)), open(f, errors='replace').read(), flags=re.S)
        for n in DEF.findall(text):
            out.setdefault(n, []).append(stem)
    return out


def block(text, name):
    """(start, end) of the definition of name in text, the closing brace and its newline included, or None."""
    m = re.search(r'^[A-Za-z_][\w \t\*]*?\b%s\s*\([^;{]*\)\s*\{' % re.escape(name), text, re.M)
    if not m:
        return None
    depth, i = 0, m.end() - 1
    while i < len(text):
        if text[i] == '{':
            depth += 1
        elif text[i] == '}':
            depth -= 1
            if depth == 0:
                end = i + 1
                if text[end:end + 1] == '\n':
                    end += 1
                return m.start(), end
        i += 1
    return None


def lists():
    eq = set(open('tests/equivalent.txt').read().split()) if os.path.exists('tests/equivalent.txt') else set()
    return eq


def survey():
    funcs = {l.split()[3] for l in open('functions.txt') if l.startswith('F ') and len(l.split()) > 3}
    defs = {n: s for n, s in definitions().items() if n in funcs}
    cases = {}
    for p in glob.glob('tests/*/*.json'):
        stem, fn = p.split('/')[1], os.path.basename(p)[:-5]
        if fn in funcs and not stem.startswith(('gen_tmp', 'zz_')):
            cases.setdefault(fn, []).append(stem)
    eq = lists()
    found = {'defined twice': [], 'stray cases': [], 'no recorded pass': [], 'no cases': []}
    for n, stems in sorted(defs.items()):
        if len(stems) > 1:
            found['defined twice'].append((n, stems))
        st = next((s for s in stems if s in cases.get(n, [])), stems[0])
        if st not in cases.get(n, []):
            if not cases.get(n):
                found['no cases'].append((n, st))
        elif n not in eq:
            found['no recorded pass'].append((n, st))
    for n, stems in sorted(cases.items()):
        for st in stems:
            if st not in defs.get(n, []):
                found['stray cases'].append((n, st))
    return defs, cases, found


def remove_def(stem, name):
    path = 'src/%s.c' % stem
    text = open(path).read()
    b = block(text, name)
    if not b:
        return None
    open(path, 'w').write(text[:b[0]] + text[b[1]:])
    return text[b[0]:b[1]]


def leave_src(name, stem):
    """C that does not pass: generated C is dropped with its cases, hand-written C moves to partial/."""
    code = remove_def(stem, name)
    if code is None:
        return
    if not stem.startswith('gen_'):
        os.makedirs('partial', exist_ok=True)
        with open('partial/%s.c' % stem, 'a') as f:
            f.write('\n' + code)
    p = 'tests/%s/%s.json' % (stem, name)
    if os.path.exists(p):
        os.remove(p)


def fix():
    lock = open('state/.gen.lock', 'w')
    fcntl.flock(lock, fcntl.LOCK_EX)
    try:
        defs, cases, found = survey()
        done = []
        # duplicates: the copy whose file has the cases stays
        for n, stems in found['defined twice']:
            keep = next((s for s in stems if s in cases.get(n, [])), stems[0])
            for s in stems:
                if s != keep:
                    remove_def(s, n); done.append('%s: second copy removed from src/%s.c (kept in %s.c)' % (n, s, keep))
        defs, cases, found = survey()
        # stray cases: to the file that defines the function, or away
        for n, st in found['stray cases']:
            src = 'tests/%s/%s.json' % (st, n)
            home = defs.get(n, [None])[0]
            if home and home not in cases.get(n, []):
                os.makedirs('tests/%s' % home, exist_ok=True)
                os.rename(src, 'tests/%s/%s.json' % (home, n)); done.append('%s: cases moved from tests/%s to tests/%s' % (n, st, home))
            else:
                os.remove(src); done.append('%s: stray cases removed from tests/%s' % (n, st))
        defs, cases, found = survey()
        # no recorded pass: check the files again; what still fails leaves src/
        stems = sorted({st for n, st in found['no recorded pass']})
        for st in stems:
            subprocess.run([sys.executable, 'tools/equiv.py', '-q', 'src/%s.c' % st], capture_output=True, text=True)
        eq = lists()
        for n, st in found['no recorded pass']:
            if n not in eq:
                leave_src(n, st); done.append('%s: does not pass in src/%s.c: %s' % (n, st, 'moved to partial/' if not st.startswith('gen_') else 'dropped for the generator'))
        for n, st in found['no cases']:
            leave_src(n, st); done.append('%s: C with no cases in src/%s.c: %s' % (n, st, 'moved to partial/' if not st.startswith('gen_') else 'dropped for the generator'))
    finally:
        fcntl.flock(lock, fcntl.LOCK_UN)
    for d in done:
        print(d)
    print('%d repairs' % len(done))


def main():
    if '--fix' in sys.argv:
        fix()
    _, _, found = survey()
    total = 0
    for k, v in found.items():
        total += len(v)
        print('%-18s %4d  %s' % (k, len(v), ', '.join(str(x[0]) for x in v[:6])))
    print('consistent' if not total else '%d out of step' % total)


if __name__ == '__main__':
    main()
