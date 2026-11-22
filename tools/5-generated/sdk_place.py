#!/usr/bin/env python3
"""sdk_place.py: the SDK's C in its library's folder: sdk/<library>/, out of the game's src/. Run in the repo. Stdlib only.

    python3 tools/5-generated/sdk_place.py [--fix]

src/ is the game's own code. A function inside a library block of sdk.txt (a `range` line) is the SDK's, and its C belongs in
sdk/<library>/ (tools/common/layout.py): sdk/naomi/, sdk/kamui/, sdk/shinobi/, sdk/sofdec/, sdk/runtime/, sdk/boot/.

Which library: by the function's name where the SDK's naming says it (nl... the NAOMI library; km... Kamui; ADX..., SJ..., mw...
Sofdec and ADX; sy..., gd..., pd..., kd..., mpdrv..., bu..., vms..., fm..., ov... Shinobi; boot... the boot block; an all-lowercase
_name and the C library's own names (memcpy, strlen, setjmp) the compiler runtime). A name that says nothing (search_fat) goes with the library linked
around it: the nearest function before it in the block whose name does (libraries are linked whole, one after another).

Without --fix it prints the plan. With --fix:
  - a file that holds one library only moves as it is; its cases stay in tests/<file>/ (a file is found by its name)
  - a file that holds more (two libraries, or a library and the game) is split by function: each library's functions go to
    sdk/<library>/<file>_<library>.c with the file's declarations and structures and the helpers they use (a function of
    the file's own that functions.txt does not list, an inline-assembly one with its pragma); the game's stay in the file; a function's
    cases follow it to tests/<file>_<library>/
  - docs/equivalent.md names the new file and cases of each function that moved
Never moved: a library function inside what the console build compiles (layout.txt's game region outside keep: the console
build reads src/ alone), a matching unit (`/* @unit`), a scratch file (gen_tmp..., zz_...).
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import re
import sys

import layout  # noqa: E402

def strip_comments(t):
    """the text with what is not code blanked, at the same length: comments, preprocessor directives with their continued
    lines (a macro written over several lines may hold braces), and the insides of strings and character constants"""
    blank = lambda m: re.sub(r'[^\n]', ' ', m.group(0))
    t = re.sub(r'/\*.*?\*/|//[^\n]*', blank, t, flags=re.S)
    t = re.sub(r'(?m)^[ \t]*#(?:[^\n\\]|\\.|\\\n)*', blank, t)
    return re.sub(r'"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'', blank, t)


def definitions(text):
    """[(name, start, end)] of the top-level function definitions: start is where the definition's own text begins (after the
    blank lines that follow the item before it), end is past its closing brace and the line's end"""
    clean = strip_comments(text)
    out, depth, seg = [], 0, 0
    i, n = 0, len(clean)
    head_end = None
    while i < n:
        c = clean[i]
        if c == '{':
            if depth == 0:
                head_end = i
            depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0:
                head = clean[seg:head_end]
                m = re.search(r'(\w+)\s*\([^;{]*\)\s*$', head)
                if m and not re.match(r'\s*typedef\b', head) and '=' not in head:      # `struct x *f(...)` is a function
                    start = seg + (len(head) - len(head.lstrip()))
                    end = i + 1
                    if text[end:end + 1] == '\n':
                        end += 1
                    out.append((m.group(1), start, end))
                seg = i + 1
        elif c == ';' and depth == 0:
            seg = i + 1
        i += 1
    return out


PREFIX = (('naomi', r'nl|display'), ('kamui', r'km|kb[A-Z]'), ('sofdec', r'ADX|adx|SJ|sj[A-Z_]|mw|MW|LSC|lsc|SVM|svm|CVFS|cvFs'),
          ('shinobi', r'sy[A-Z]|gd[A-Z]|pd[A-Z]|pd_|kd[A-Z]|mpdrv|bu[A-Z]|vms|fm[A-Z]|ov[A-Z]|INIT|FINISH|bcd|BCD|ccitt|crc'),
          ('boot', r'boot'), ('runtime', r'quick_|slow_'))
# the C library's own names: a name that only starts like one (memcpy2, str_len: a library's helper) is not it
LIBC = set('memcpy memmove memset memcmp strlen strcpy strncpy strcmp strncmp strcat strchr sprintf vsprintf abs cos sin tan sqrt '
           'setjmp longjmp rand srand malloc free atoi'.split())


def by_name(name):
    """the library a name says, or None"""
    bare = name.lstrip('_')
    if name in LIBC:
        return 'runtime'
    for lib, pat in PREFIX:
        if re.match(pat, bare):
            return lib
    if re.match(r'_[a-z0-9_]+$', name):          # SHC's helpers: _divls, _quick_evn_mvn, _in_fmods
        return 'runtime'
    return None


def libraries():
    """{function: library} for the functions inside sdk.txt's library blocks that the console build does not compile"""
    ranges = []
    if os.path.exists('sdk.txt'):
        for line in open('sdk.txt'):
            p = line.split()
            if len(p) >= 3 and p[0] == 'range':
                ranges.append((layout.mirror(int(p[1], 16)), layout.mirror(int(p[2], 16))))
    built = layout.moving if layout.region('game') else (lambda a: False)
    out = {}
    funcs = layout.functions()
    for lo, hi in ranges:
        block = [(a, n) for a, sz, n in funcs if lo <= a < hi and not built(a)]
        named = [(a, n, by_name(n)) for a, n in block]
        last = next((lib for a, n, lib in named if lib), None)      # a block that starts with a silent name takes the first that speaks
        for a, n, lib in named:
            if lib:
                last = lib
            if last:
                out[n] = last
    return out


def plan():
    """[(file, {library or None: [(name, start, end)]}, text)] for the game files that hold SDK functions"""
    lib = libraries()
    listed = {n for a, sz, n in layout.functions()}
    out = []
    for f in layout.game_files():
        stem = layout.stem(f)
        if stem.startswith(('gen_tmp', 'zz_')):
            continue
        text = open(f, errors='replace').read()
        if text.startswith('/* @unit'):
            continue
        groups, helpers = {}, []
        for d in definitions(text):
            if d[0] in listed:
                groups.setdefault(lib.get(d[0]), []).append(d)
            else:
                helpers.append(d)               # a function of the file's own that functions.txt does not list
        if any(k for k in groups):
            out.append((f, groups, text, helpers))
    return out


def needed(helpers, defs, text):
    """the helpers those definitions use, and the helpers those use in turn"""
    body = ' '.join(text[s:e] for n, s, e in defs)
    got, more = [], True
    while more:
        more = False
        for h in helpers:
            if h not in got and re.search(r'\b%s\b' % re.escape(h[0]), body):
                got.append(h)
                body += ' ' + text[h[1]:h[2]]
                more = True
    return got


def without(text, defs):
    """the text with those definitions taken out"""
    for name, start, end in sorted(defs, key=lambda d: -d[1]):
        text = text[:start] + text[end:]
    return re.sub(r'\n{4,}', '\n\n\n', text)


def part(text, everything, defs):
    """one part of a split file: the file as it is, without the definitions that are not the part's. What stands between
    the functions (declarations, data, macros) keeps its place. `#pragma inline_asm(name)` stays only for a name the part
    defines: the compiler stops on one it does not"""
    names = {n for n, s, e in defs}
    out = without(text, [d for d in everything if d not in defs])

    def keep(line):
        m = re.match(r'\s*#pragma\s+inline_asm\((\w+)\)', line)
        return not m or m.group(1) in names
    return '\n'.join(l for l in out.split('\n') if keep(l))


def main(argv):
    fix = '--fix' in argv
    moved = {}                      # function -> (old file, new file, old stem, new stem)
    whole = split = 0
    taken = {layout.stem(f) for f in layout.c_files()}
    for f, groups, text, helpers in plan():
        stem = layout.stem(f)
        libs = sorted(k for k in groups if k)
        if len(libs) == 1 and None not in groups:
            dst = 'sdk/%s/%s.c' % (libs[0], stem)
            whole += 1
            print('%-22s -> %-34s whole, %d function(s)' % (f, dst, len(groups[libs[0]])))
            for name, start, end in groups[libs[0]]:
                moved[name] = (f, dst, stem, stem)
            if fix:
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                os.rename(f, dst)
            continue
        split += 1
        everything = [d for g in groups.values() for d in g] + helpers
        for l in libs:
            new, k = '%s_%s' % (stem, l), 1
            while new in taken:                      # a name an earlier split of a file of that name took: the next free one
                k += 1
                new = '%s_%s_%d' % (stem, l, k)
            taken.add(new)
            dst = 'sdk/%s/%s.c' % (l, new)
            print('%-22s -> %-34s split, %d function(s)' % (f, dst, len(groups[l])))
            for name, start, end in groups[l]:
                moved[name] = (f, dst, stem, new)
            if fix:
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                with open(dst, 'w') as fp:               # with the helpers its functions use: a part is whole on its own
                    fp.write(part(text, everything, groups[l] + needed(helpers, groups[l], text)))
                for name, start, end in groups[l]:
                    case = 'tests/%s/%s.json' % (stem, name)
                    if os.path.exists(case):
                        os.makedirs('tests/' + new, exist_ok=True)
                        os.rename(case, 'tests/%s/%s.json' % (new, name))
        if fix:
            if None in groups:
                with open(f, 'w') as fp:
                    fp.write(part(text, everything, groups[None] + needed(helpers, groups[None], text)))
            else:
                os.remove(f)
                if os.path.isdir('tests/' + stem) and not os.listdir('tests/' + stem):
                    os.rmdir('tests/' + stem)
    doc = os.path.join('docs', 'equivalent.md')
    if fix and moved and os.path.exists(doc):
        out, cur = [], None
        for line in open(doc).read().split('\n'):
            if line.startswith('### '):
                m = re.match(r'### (\S+)', line)
                cur = moved.get(m.group(1)) if m else None
            if cur:
                old_f, new_f, old_s, new_s = cur
                line = line.replace('`%s`' % old_f, '`%s`' % new_f).replace('`tests/%s/' % old_s, '`tests/%s/' % new_s)
            out.append(line)
        with open(doc, 'w') as fp:
            fp.write('\n'.join(out))
    print('%d function(s) of the SDK in src/: %d file(s) move whole, %d are split%s'
          % (len(moved), whole, split, '' if fix else ' (--fix does it)'))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
