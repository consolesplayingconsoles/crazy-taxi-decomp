#!/usr/bin/env python3
"""audit_equivalent.py: every function tests/equivalent.txt calls Equivalent must have C behind it. Run in the repo. Stdlib only.

    python3 tools/5-generated/audit_equivalent.py [--fix]

A name counts when src/*.c defines it (with tests/<file>/<name>.json) or sdk-verified.txt lists it (the SDK's own source
reproduces it). Anything else is a phantom: equiv.py records every function it passes, also in a scratch file, so a run that
is stopped can leave names behind. Prints the phantoms and exits 1 when there are any; --fix removes them from
tests/equivalent.txt and their entries from docs/equivalent.md."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import glob
import os
import re
import sys


def main():
    fix = '--fix' in sys.argv
    if not os.path.exists('tests/equivalent.txt'):
        print('no tests/equivalent.txt')
        return 0
    names = [l.strip() for l in open('tests/equivalent.txt') if l.strip()]
    defined = set()
    for f in glob.glob('src/*.c'):
        text = open(f, errors='replace').read()
        defined |= set(re.findall(r'^[A-Za-z_][\w \t\*]*?\b(\w+)\s*\([^;{]*\)\s*\{', text, flags=re.M))
    tests = set(os.path.basename(p)[:-5] for p in glob.glob('tests/*/*.json'))
    verified = set()
    if os.path.exists('sdk-verified.txt'):
        for l in open('sdk-verified.txt'):
            if not l.startswith('#'):
                verified.update(l.split())
    phantom = [n for n in names if n not in verified and n not in defined]
    notest = [n for n in names if n in defined and n not in tests and n not in verified]
    print('%d entries: %d with no C and not SDK-verified, %d with C but no test file' % (len(names), len(phantom), len(notest)))
    for n in phantom[:40]:
        print('  no C:', n)
    for n in notest[:40]:
        print('  no test file:', n)
    if fix and phantom:
        keep = [n for n in names if n not in set(phantom)]
        open('tests/equivalent.txt', 'w').write(''.join(n + '\n' for n in keep))
        if os.path.exists('docs/equivalent.md'):
            doc = open('docs/equivalent.md').read()
            head, _, rest = doc.partition('\n### ')
            blocks = [('### ' + b) for b in rest.split('\n### ')] if rest else []
            blocks = [b for b in blocks if b.split(' ', 2)[1] not in set(phantom)]
            open('docs/equivalent.md', 'w').write(head + ('\n' + '\n'.join(x.rstrip('\n') for x in blocks) + '\n' if blocks else '\n'))
        print('removed %d phantom entries' % len(phantom))
        return 0
    return 1 if (phantom or notest) else 0


if __name__ == '__main__':
    sys.exit(main())
