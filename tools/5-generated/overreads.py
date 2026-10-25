#!/usr/bin/env python3
"""overreads.py: which Equivalent C reads memory the original does not. Run in the repo; needs the compiler (docker) like equiv.py.

    python3 tools/5-generated/overreads.py src/<file>.c [function ...]

equiv.py's simulator hands back 0 for every byte of RAM a case did not set, so a C function that reads the wrong struct
offset, or a global the original never touches, agrees with the original whenever that memory is 0, and passes. On the
console the memory holds leftovers, and it breaks there. This runs every case a second time, on the original and on the
compiled C, with the unset RAM filled with junk instead (each byte a function of its address, so a read from a different
address returns a different value; the stack stays 0). A function whose two runs now differ reads memory the original does not.

It is a report, not a verdict: Equivalent keeps its meaning, and nothing is recorded (tests/equivalent.txt and
docs/equivalent.md are put back as they were). A case where the original itself stops on junk (it walks a list the case
never built, and follows a junk pointer) is skipped: it says nothing about the C. A flagged function needs a human look:
the C may read a field the original also reads in a way no case shows, or it may be the bug.

This reuses equiv.py's own comparison by wrapping sh4sim.run and equiv.same, so neither file changes (both are hashed into
every saved proof). Runs with --fresh: a cached proof skips its cases, and these are what is wanted here.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import sys

import sh4sim

KEEP = ('tests/equivalent.txt', 'docs/equivalent.md')


def junk_page(pn):
    """The 4 KB page pn filled with junk: byte at address a is a function of a, and differs from the bytes 1 to 255 away."""
    base = pn << 12
    return bytearray((((base + i) * 0x2F) ^ ((base + i) >> 9) ^ 0xA5) & 0xFF for i in range(4096))


class JunkPages(dict):
    """The simulator's page table, where a RAM page nobody set starts as junk instead of zeros. Memory.load and Memory.read
    create pages with setdefault; pages outside RAM (devices, the boot ROM, the stack) stay zero as before."""
    def setdefault(self, pn, default=None):
        if pn in self:
            return self[pn]
        base = pn << 12
        page = junk_page(pn) if sh4sim.RAM_LO <= base < sh4sim.RAM_HI else default
        self[pn] = page
        return page


def make_junk_memory(base_class):
    class JunkMemory(base_class):
        def __init__(self):
            base_class.__init__(self)
            self.pages = JunkPages()
    return JunkMemory


def run_with_junk(real_run, case, case_dir='.', code=None, **kw):
    """sh4sim.run on a Memory whose unset RAM holds junk. An exception the simulator does not turn into a stop is the original
    failing on junk too: reported as an error so the case is skipped."""
    normal = sh4sim.Memory
    sh4sim.Memory = make_junk_memory(normal)
    try:
        return real_run(case, case_dir, code, **kw)
    except Exception as e:          # noqa: BLE001  anything the junk makes the simulator choke on
        return {'error': 'exception on junk: %s' % e}
    finally:
        sh4sim.Memory = normal


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    import equiv
    saved = {f: open(f).read() for f in KEEP if os.path.exists(f)}
    real_run, real_same, real_key = sh4sim.run, equiv.same, equiv.proof_key
    pending = []
    now = {'fn': None, 'case': 0}
    flagged, counts = {}, {'compared': 0, 'skipped': 0, 'touch': 0}

    def run(case, case_dir='.', code=None, **kw):
        res = real_run(case, case_dir, code, **kw)
        pending.append(run_with_junk(real_run, case, case_dir, code, **kw))
        return res

    def key(code, offset, case_path, *a, **kw):
        now['fn'], now['case'] = os.path.splitext(os.path.basename(case_path))[0], 0
        return real_key(code, offset, case_path, *a, **kw)

    def same(orig, mine, *a, **kw):
        result = real_same(orig, mine, *a, **kw)
        now['case'] += 1
        junk = pending[-2:] if len(pending) >= 2 else [None, None]      # the original's and the C's run of this case on junk
        del pending[:]
        if junk[0] is None or not result[0] or orig.get('error') or junk[0].get('error'):
            counts['skipped'] += 1                  # a failing case is equiv.py's to report; an original that stops on junk says nothing
            return result
        counts['compared'] += 1
        if not real_same(orig, junk[0], *a, **kw)[0]:
            counts['touch'] += 1                    # the original's own result changes on junk: this case reads memory it did not set
        good, diff = real_same(junk[0], junk[1], *a, **kw)
        if not good and now['fn'] not in flagged:
            flagged[now['fn']] = 'case %d: %s' % (now['case'], diff)
        return result

    sh4sim.run, equiv.same, equiv.proof_key = run, same, key
    try:
        equiv.main(['equiv.py', '--fresh', '-q'] + argv[1:])
    finally:
        sh4sim.run, equiv.same, equiv.proof_key = real_run, real_same, real_key
        for f, t in saved.items():
            open(f, 'w').write(t)
    print('')
    print('%d cases compared with junk in unused memory (%d of them read memory the case never set), %d skipped (a failing case, or the original stops on junk)'
          % (counts['compared'], counts['touch'], counts['skipped']))
    if not flagged:
        print('OVER-READS: none flagged')
    else:
        print('OVER-READS: %d function(s) differ from the original when unused memory holds junk:' % len(flagged))
        for fn in sorted(flagged):
            print('  %-28s %s' % (fn, flagged[fn]))


if __name__ == '__main__':
    main(sys.argv)
