#!/usr/bin/env python3
"""disc.py: the game built the way the repo's mode says, written into a copy of your disc. Run in the repo. Stdlib only.

    python3 tools/8-build/disc.py <your original .gdi>     `make disc GDI=...` runs this
    python3 tools/8-build/disc.py --plan                   the mode and its steps, nothing run

The mode is status.txt's line `MODE: equivalent` or `MODE: matching`, read as tools/progress.py reads it: no status.txt or no MODE
line means equivalent (the repos from before the line existed build as they always did), any other word stops the build.

  MODE: equivalent   the C is proven function by function to behave like the original and is not the original's bytes:
                       1  make c                    retcheck, pointers, symbolize, movecheck, mbuild -> build/mbuild/game.bin
                       2  the disc                  a copy of your disc with build/mbuild/game.bin as 1ST_READ.BIN
  MODE: matching     the C compiles to the original's bytes, unit by unit, in place:
                       1  bash build.sh             asm/ and the matching C units -> build/out.bin; it must end in MATCH
                                                    (DC_EXPECT_CHANGES=1, build.sh's own switch, lets a changed game through)
                       2  bash build_overlays.sh    only when the repo has code overlays set up (overlays/<name>/objects.txt):
                                                    every overlay rebuilt and compared; one that differs stops the build.
                                                    Overlays that are not set up in the checkout are said so and left out
                       3  the disc                  a copy of your disc with build/out.bin as 1ST_READ.BIN. The overlays are
                                                    checked, not written: one that matches is the file your disc already has
                                                    (compressed there)

Both write build/disc-cbuild/, the same place and name, so what runs `make disc` (Pluto's Build) needs to know nothing of the mode.
The movable build (make c) is not for a matching repo: its C units are not in tests/equivalent.txt and mbuild does not place them.
"""
import glob
import os
import re
import shutil
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
OUT = 'build/disc-cbuild'
BOOT = '1ST_READ.BIN'
MODES = ('equivalent', 'matching')


def mode(path='status.txt'):
    """status.txt's mode: 'equivalent' when the file or its MODE line is missing; any word but the two stops with an error."""
    m = 'equivalent'
    if os.path.exists(path):
        for l in open(path, encoding='utf-8', errors='replace'):
            x = re.match(r'^MODE:\s*(\S+)\s*(#.*)?$', l)
            if x:
                m = x.group(1)
    if m not in MODES:
        sys.exit('[ERROR] status.txt: "MODE: %s" must be "MODE: equivalent" or "MODE: matching" (no MODE line means equivalent)' % m)
    return m


def has_overlays():
    return os.path.exists('build_overlays.sh') and bool(glob.glob('overlays/*/objects.txt'))


def plan(m, overlays):
    """[(what it is, command)] before the disc is written, and the executable the disc takes."""
    if m == 'matching':
        steps = [('the byte-for-byte build', ['bash', 'build.sh'])]
        if overlays:
            steps.append(('the code overlays, each rebuilt and compared', ['bash', 'build_overlays.sh']))
        return steps, 'build/out.bin'
    return [('the build from C on the movable split', ['make', 'c'])], 'build/mbuild/game.bin'


def main(argv):
    args = [a for a in argv[1:] if a != '--plan']
    m = mode()
    steps, exe = plan(m, has_overlays())
    print('disc.py: MODE %s (status.txt)' % m, flush=True)
    for i, (what, cmd) in enumerate(steps):
        print('  %d  %-22s %s' % (i + 1, ' '.join(cmd), what), flush=True)
    print('  %d  %-22s a copy of your disc with %s as %s -> %s/' % (len(steps) + 1, 'the disc', exe, BOOT, OUT), flush=True)
    if m == 'matching' and os.path.exists('build_overlays.sh') and not has_overlays():
        print('     the code overlays are not set up in this checkout (no overlays/<name>/objects.txt: setup.sh makes them): not rebuilt, not compared', flush=True)
    if '--plan' in argv:
        return
    if len(args) != 1:
        sys.exit('usage: python3 tools/8-build/disc.py <your original .gdi>   (or --plan)')
    gdi = args[0]
    if not os.path.isfile(gdi):
        sys.exit('[ERROR] no disc at %s' % gdi)
    for what, cmd in steps:
        print('disc.py: %s (%s)' % (' '.join(cmd), what), flush=True)
        rc = subprocess.call(cmd)
        if rc:
            sys.exit('[ERROR] %s stopped (exit %d): no disc written' % (' '.join(cmd), rc))
    if not os.path.isfile(exe):
        sys.exit('[ERROR] no %s after the build: no disc written' % exe)
    shutil.rmtree(OUT, ignore_errors=True)
    rc = subprocess.call([sys.executable, os.path.join(HERE, 'disc_patch.py'), gdi, OUT, '%s=%s' % (BOOT, exe)])
    if rc:
        sys.exit('[ERROR] disc_patch.py stopped (exit %d)' % rc)
    print('disc.py: MODE %s: %s/%s' % (m, OUT, os.path.basename(gdi)), flush=True)


if __name__ == '__main__':
    main(sys.argv)
