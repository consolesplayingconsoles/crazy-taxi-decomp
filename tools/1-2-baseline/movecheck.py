#!/usr/bin/env python3
"""Does the executable move: the check of the split written with names (symbolize.py). Run in the repo. Stdlib and Docker.

    python3 tools/1-2-baseline/movecheck.py [--dir build/sym] [--pad 32] [--steps 20000000]

Two links of <dir>/asm (the pieces with names; the others from build/obj, which build.sh left):
  1. as the original: it must be 1ST_READ.BIN byte for byte (MATCH): the names point where the numbers did;
  2. with a pad (zeros) between every two groups, so each group lands at another distance from every other one, as a build from C
     moves them. Both images run from the entry in tools/sh4sim.py (BIOS calls answered by a stub) for --steps instructions, and
     every write must be the same, an address or an address value in the moved range at its group's new place. A number left in
     the image for an address, or a distance between pieces that do not move together, writes somewhere else or runs off.

A group is the pieces that must stay together: a pool load (mov.l, mov.w, mova) into a neighbour's pool (the original compiler
shared pools between the functions of one object file), a bsrf or braf whose register comes from a pool word (a distance, not an
address: it is right only while the two pieces keep their distance), a bsr or bra within 1 KB of its 4 KB reach (a pad would put it out of
reach: a build from C writes those as jsr), and a piece that is not a listed function, kept with both neighbours (code the listing
missed can hide in data: Virtua Tennis's SDK start-up code at 8C1DCC60 loads its pool from the next piece). Branches into another
piece are names (symbolize.py) and do not tie.

Writes <dir>/obj/*.obj (assembled when the source is newer; written on the container's own disk and copied out in one go: Docker
Desktop on macOS keeps a host file descriptor for every file a container creates on a shared folder, and thousands of objects in one
build ran the Mac out of them), <dir>/link.sub and pad.sub, out.bin, pad.bin, groups.json, and
movecheck.log (one line a step, with the time). Exit 1 when either check fails.
"""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import bisect
import json
import os
import re
import struct
import subprocess
import sys
import time

import layout

REACH = 3072                     # a bsr/bra farther than this from its target is kept with it (the reach is 4 KB)
TOPS = (0x0C, 0x8C, 0xAC)


def say(msg, log=None):
    line = '%s  %s' % (msg, time.strftime('%H:%M:%S'))
    print(line, flush=True)
    if log:
        open(log, 'a').write(line + '\n')


def piece_starts(objects='objects.txt'):
    """[(start, file)] of the pieces in link order, start in the 0C mirror."""
    out = []
    for f in open(objects).read().split():
        m = re.match(r'([0-9a-f]{8})_', f)
        if m:
            out.append((layout.mirror(int(m.group(1), 16)), f))
    return out


def groups(starts, listed, code, word, pools, end, stay=None, pool32=None, bsr_ties=True):
    """Indexes of the pieces that start a group. starts: piece starts (sorted); listed: the starts that are listed functions;
    code: [(start, size)] of the listed functions; word(a): the halfword at a; pools: pool word addresses (not instructions);
    pool32(a): the signed 32-bit word at a (the distance a bsrf or braf takes from a pool); stay: pieces below it stay with the first one (the boot code and the entry stub before layout.txt's `game`: Crazy Taxi's
    boot block copies 0C010100-0C014000 to 0C004000 by number, so a pad inside it changes what is copied)."""
    piece = lambda a: bisect.bisect_right(starts, a) - 1
    link = [0] * (len(starts) + 1)

    def tie(i, j):
        i, j = sorted((i, j))
        if i != j:
            link[i] += 1
            link[j] -= 1
    for a, s in code:
        for x in range(a, min(a + s, end), 2):
            if x in pools or x - 2 in pools:
                continue
            w = word(x)
            t = None
            if w >> 12 == 0xD or w >> 8 == 0xC7:
                t = ((x + 4) & ~3) + 4 * (w & 0xFF)
            elif w >> 12 == 0x9:
                t = x + 4 + 2 * (w & 0xFF)
            elif w >> 12 in (0xA, 0xB) and bsr_ties:      # (bsr_ties=False: a running copy leaves its group by veneer, mbuild ties it by pools only)
                d = w & 0xFFF
                d -= 0x1000 if d & 0x800 else 0
                if abs(2 * d) > REACH:
                    t = x + 4 + 2 * d
            elif (w & 0xF0FF) in (0x0003, 0x0023) and pool32 is not None:      # bsrf / braf Rn: the target is this instruction + 4 +
                rn = (w >> 8) & 0xF                                              # Rn, and Rn came from a pool word: a distance, no address
                for y in range(x - 2, max(a - 2, x - 26), -2):                       # (Crazy Taxi strcmp -> _slow_strcmp1, 0x8A0 bytes on; a pad
                    v = word(y)                                                  # between the two sent it into _xtostr_rounddigits)
                    if v >> 12 == 0xD and (v >> 8) & 0xF == rn:
                        t = x + 4 + pool32(((y + 4) & ~3) + 4 * (v & 0xFF))
                        break
                    if (v >> 8) & 0xF == rn and v >> 12 in (0x6, 0x7, 0xE, 0x4):    # Rn set some other way: not a pool distance
                        break
            if t is not None and starts[0] <= t < end:
                tie(piece(x), piece(t))
    for i in range(len(starts) - 1):
        if starts[i] not in listed or starts[i + 1] not in listed:
            tie(i, i + 1)
    out, run = [0], 0
    for i in range(len(starts) - 1):
        run += link[i]
        if run == 0 and not (stay is not None and starts[i + 1] < stay):
            out.append(i + 1)
    return out


def mapper(gstart, pad, end, lo, hi):
    """new(v): where the padded image has what the original has at v (an address or an address value, any RAM mirror). gstart:
    the group starts (0C mirror); the first group does not move, each later one moves pad more; past the image (BSS) all of them."""
    def new(v):
        if (v >> 24) not in TOPS:
            return v
        a = (v & 0x1FFFFFFF) | 0x0C000000
        if not (lo <= a < hi):
            return v
        n = len(gstart) - 1 if a >= end else bisect.bisect_right(gstart, a) - 1
        return (v + pad * n) & 0xFFFFFFFF
    return new


def script(d, name, text):
    """Write a shell script for the container under a name no earlier run used, flushed to disk before it returns: the shared folder
    has served a container the previous content of a file rewritten the same second (a truncated line, 'unexpected newline')."""
    k = 0
    while os.path.exists(os.path.join(d, '%s.%d.sh' % (name, k))):
        k += 1
    for old in range(k):
        try:
            os.remove(os.path.join(d, '%s.%d.sh' % (name, old)))
        except OSError:
            pass
    path = os.path.join(d, '%s.%d.sh' % (name, k))
    with open(path, 'w') as f:
        f.write(text)
        f.flush()
        os.fsync(f.fileno())
    return path


def docker(steps):
    """Run a shell script in the dc-tools container with the SDK's tools as $T; its stdout+stderr. The image is built on first
    use (tools/docker_check.sh, as build.sh does: a Docker restart can drop it)."""
    import equiv
    sdk, rel = equiv.sdk_env()
    chk = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'docker_check.sh')
    img = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'tools-image')
    r = subprocess.run(['bash', '-c', '. "%s" && docker_ready "%s"' % (chk, img)], stdin=subprocess.DEVNULL, capture_output=True, text=True)
    if r.returncode:
        sys.exit(r.stderr.strip() or '[ERROR] Docker is not ready')
    r = subprocess.run(['docker', 'run', '--rm', '-v', sdk + ':/sdk:ro', '-v', os.getcwd() + ':/app', '-w', '/app',
                        '-e', 'T=/sdk/' + rel, os.environ.get('DC_TOOLS_IMAGE', 'dc-tools'), 'bash', '-c', steps],
                       stdin=subprocess.DEVNULL, capture_output=True, text=True)
    return r.returncode, r.stdout + r.stderr


def winpath(p):
    return p.replace('/', '\\')


def bios_pokes():
    """The BIOS system-call vectors, each to a stub (no BIOS in the simulator): rts / mov #0,r0, success; the flash-ROM one (B8)
    to rts / mov #-1,r0, a failed read. A read answered "success" left its buffer as the stack had it, words of earlier frames that
    differ between the two layouts (Zombie Revenge kbCfgIni: two bytes of a flash read copied to 8C000070, check 2 differed there)."""
    poke = {'%08X' % v: '0008008c' for v in (0x8C0000B0, 0x8C0000B4, 0x8C0000BC, 0x8C0000C0, 0x8C0000E0)}
    poke['8C0000B8'] = '0408008c'
    poke['8C000800'] = '0b0000e0'            # rts / mov #0,r0
    poke['8C000804'] = '0b00ffe0'            # rts / mov #-1,r0
    return poke


def simulate(exe, steps):
    import sh4sim
    poke = bios_pokes()
    base = int(open('BASE').read().strip(), 16)
    n = os.path.getsize(exe)
    code = layout.region('code')              # the run starts where the game's code does: past a boot block (Crazy Taxi 0C020000),
    entry = ((code[0] & 0x1FFFFFFF) | (base & 0xE0000000)) if code else base      # which the console's loader runs, not the game
    return sh4sim.run({'poke': poke, 'exe': exe, 'base': '%08X' % base, 'entry': '%08X' % entry, 'end': '%08X' % (base + n),
                       'steps': steps}, '.', deep=True)


def main(argv):
    d, pad, steps = 'build/sym', 32, 20000000
    a = list(argv)
    while a:
        k = a.pop(0)
        if k == '--dir':
            d = a.pop(0)
        elif k == '--pad':
            pad = int(a.pop(0))
        elif k == '--steps':
            steps = int(a.pop(0))
        else:
            sys.exit(__doc__)
    log = os.path.join(d, 'movecheck.log')
    if not os.path.isdir(os.path.join(d, 'asm')):
        sys.exit('[ERROR] no %s/asm: run python3 tools/1-2-baseline/symbolize.py %s first' % (d, d))
    open(log, 'w').close()
    import boundaries as B
    import shift
    base_txt = open('BASE').read().strip()
    link_top = int(base_txt, 16) & 0xE0000000
    end = B.BASE + len(B.BIN)
    fixed = layout.region('fixed', True)[0]
    P = piece_starts()
    starts = [s for s, _ in P]
    files = [f for _, f in P]
    changed = [f for f in files if open(os.path.join(d, 'asm', f)).read() != open(os.path.join('asm', f)).read()]
    os.makedirs(os.path.join(d, 'obj'), exist_ok=True)
    have = lambda o: os.path.exists(o) and os.path.getsize(o) > 0        # an empty object is what a run killed midway leaves
    stale = [f for f in changed if not have(os.path.join(d, 'obj', f[:-4] + '.obj'))
             or os.path.getmtime(os.path.join(d, 'asm', f)) > os.path.getmtime(os.path.join(d, 'obj', f[:-4] + '.obj'))]
    missing = [f for f in files if f not in changed and not have(os.path.join('build', 'obj', f[:-4] + '.obj'))]
    if missing:
        sys.exit('[ERROR] %d pieces have no build/obj object (bash build.sh first, it must print MATCH): %s' % (len(missing), missing[:3]))
    say('%d pieces, %d with names, %d to assemble' % (len(files), len(changed), len(stale)), log)

    # the groups and their pads
    listed = {a for a, s, n in layout.functions()}
    _, _, pools = shift._listed()
    game = layout.region('game')
    G = groups(starts, listed, [(a, s) for a, s, n in layout.functions()], B.word, pools, end, stay=game[0] if game else None,
               pool32=lambda a: struct.unpack_from('<i', B.BIN, a - B.BASE)[0])
    gset = set(G[1:])
    os.makedirs(os.path.join(d, 'pads'), exist_ok=True)
    padsrc = '          .SECTION    P, CODE, ALIGN=2\n' + "          .DATA.L     H'00000000\n" * (pad // 4) + '          .END\n'
    for i in G[1:]:
        p = os.path.join(d, 'pads', 'p%05d.src' % i)
        if not os.path.exists(p) or open(p).read() != padsrc or not have(p[:-4] + '.obj'):
            open(p, 'w').write(padsrc)
            stale.append('../pads/p%05d.src' % i)
    json.dump({'pad': pad, 'gstart': [starts[i] for i in G], 'end': end}, open(os.path.join(d, 'groups.json'), 'w'))
    say('%d groups: %d pads of %d bytes' % (len(G), len(G) - 1, pad), log)

    # the link lists: the original order, and the same with a pad before every group but the first
    ch = set(changed)
    inputs = [winpath(os.path.join(d, 'obj', f[:-4] + '.obj')) if f in ch else winpath(os.path.join('build', 'obj', f[:-4] + '.obj'))
              for f in files]
    bss = winpath(os.path.join(d, 'obj', 'bss.obj'))

    def sub(name, padded):
        out = ['elf', 'start P(%s),B(%08X)' % (base_txt, ((layout.bss_start(end) + (pad * (len(G) - 1) if padded else 0)) & 0x1FFFFFFF) | link_top),
               'output %s' % winpath(os.path.join(d, name + '.elf')), 'print %s' % winpath(os.path.join(d, name + '.map'))]
        for i, o in enumerate(inputs):
            if padded and i in gset:
                out.append('input %s' % winpath(os.path.join(d, 'pads', 'p%05d.obj' % i)))
            out.append('input %s' % o)
        out += ['input %s' % bss, 'exit']
        open(os.path.join(d, name + '.sub'), 'w').write('\n'.join(out) + '\n')
    sub('out', False)
    sub('pad', True)

    # assemble what changed, then both links
    jobs = [(os.path.join(d, 'asm', f), os.path.join(d, 'obj', f[:-4] + '.obj')) for f in stale if not f.startswith('../')]
    jobs += [(os.path.join(d, f[3:]), os.path.join(d, f[3:-4] + '.obj')) for f in stale if f.startswith('../')]
    jobs.append((os.path.join(d, 'bss.src'), os.path.join(d, 'obj', 'bss.obj')))
    alog = os.path.join(d, 'asm.log')
    lines = ['set -e', 'A="$(find "$T" -maxdepth 1 -iname asmsh.exe -print -quit)"',
             'L="$(find "$T" -maxdepth 1 -iname lnk.exe -print -quit)"', 'E="$(find "$T" -maxdepth 1 -iname elf2bin.exe -print -quit)"']
    q = lambda p: "'%s'" % p                  # single quotes: the Windows paths' backslashes reach wibo as they are
    lines.append('mkdir -p /work/obj /work/pads')
    for s, o in jobs:
        w = 'Z:\\work\\' + ('pads\\' if '/pads/' in o else 'obj\\') + os.path.basename(o)      # the container's disk, not the shared
        lines.append('( wibo "$A" %s -object=%s -cpu=sh4 -endian=little > /work/asm.log 2>&1 ) || { cat /work/asm.log; echo "FAILED %s"; exit 1; }'
                     % (q(winpath(s)), q(w), s))                                              # volume (see the module's note on Docker Desktop)
        lines.append('if grep -q "(E)" /work/asm.log; then cat /work/asm.log; echo "FAILED %s"; exit 1; fi' % s)
    lines.append('cp /work/obj/* %s/obj/ 2>/dev/null || true; cp /work/pads/* %s/pads/ 2>/dev/null || true; echo assembled' % (d, d))   # nothing to copy (none stale) is no error
    for n in ('out', 'pad'):
        for x in ('.elf', '.bin', '.map'):
            p = os.path.join(d, n + x)
            if os.path.exists(p):
                os.remove(p)                  # a failed link must not leave an older image to be checked
        lines.append('( wibo "$L" -subcommand=%s > %s 2>&1 ) || true' % (q(winpath(os.path.join(d, n + '.sub'))), q(os.path.join(d, n + '.lnk.log'))))
        lines.append('( wibo "$E" -s %s %s %s > %s 2>&1 ) || true' % (base_txt, q(winpath(os.path.join(d, n + '.elf'))),
                                                                     q(winpath(os.path.join(d, n + '.bin'))), q(os.path.join(d, n + '.e2b.log'))))
    lines.append('echo linked')
    sh = script(d, 'assemble', '\n'.join(lines) + '\n')
    rc, out = docker('bash %s' % sh)
    if 'linked' not in out:
        say('[ERROR] assembling or linking stopped:\n' + out[-1500:], log)
        sys.exit(1)
    say('assembled %d, linked both' % len(stale), log)
    bad = False
    for n in ('out', 'pad'):
        msgs = [l for l in open(os.path.join(d, n + '.lnk.log'), errors='replace').read().replace('\r', '').split('\n')
                if re.search(r'OVERFLOW|UNDEFINED|DUPLICATE|CANNOT FIND|ABORT', l)]
        if not os.path.exists(os.path.join(d, n + '.bin')):
            msgs.append('no %s.bin' % n)
        if msgs:
            say('[ERROR] the %s link: %d messages, e.g. %s' % (n, len(msgs), '; '.join(msgs[:3])), log)
            bad = True
    if bad:
        sys.exit(1)

    # check 1: the bytes
    same = open(os.path.join(d, 'out.bin'), 'rb').read() == B.BIN
    say('check 1: %s' % ('MATCH: the pieces with names rebuild 1ST_READ.BIN byte for byte' if same else
                         'DIFFERS: the pieces with names do not rebuild 1ST_READ.BIN'), log)
    if not same:
        sys.exit(1)

    # check 2: the padded image runs as the original
    new = mapper([starts[i] for i in G], pad, end, starts[0], fixed)
    ra = simulate('1ST_READ.BIN', steps)
    say('original: %s after %d steps, %d writes' % (ra['error'], ra['steps'], len(ra['writes'])), log)
    rb = simulate(os.path.join(d, 'pad.bin'), steps)
    say('padded:   %s after %d steps, %d writes' % (rb['error'], rb['steps'], len(rb['writes'])), log)
    diff = []
    for k, (x, y) in enumerate(zip(ra['writes'], rb['writes'])):
        ax, s, av = int(x[0], 16), x[1], int(x[2], 16)
        bx, s2, bv = int(y[0], 16), y[1], int(y[2], 16)
        if bx != new(ax) or s != s2 or not (bv == av or (s == 4 and bv == new(av))):
            diff.append((k, x, y))
            if len(diff) >= 8:
                break
    if diff:
        say('check 2: DIFFERS at write #%d of %d:' % (diff[0][0], len(ra['writes'])), log)
        for k, x, y in diff:
            say('  #%d original %s padded %s' % (k, x, y), log)
        sys.exit(1)
    if ra['steps'] != rb['steps'] or len(ra['writes']) != len(rb['writes']) or ra['error'] != rb['error']:
        say('check 2: DIFFERS: the writes agree as far as both went, but the runs end differently:', log)
        say('  original: %s after %d steps, %d writes; padded: %s after %d steps, %d writes' % (
            ra['error'], ra['steps'], len(ra['writes']), rb['error'], rb['steps'], len(rb['writes'])), log)
        longer, tag = (ra, 'original') if len(ra['writes']) > len(rb['writes']) else (rb, 'padded')
        k = min(len(ra['writes']), len(rb['writes']))
        for w in longer['writes'][k:k + 8]:
            say('  %s went on to write %s' % (tag, w), log)
        sys.exit(1)
    say('check 2: SAME: with %d groups apart, all %d writes of %d steps are the original\'s' % (len(G), len(ra['writes']), steps), log)


if __name__ == '__main__':
    main(sys.argv[1:])
