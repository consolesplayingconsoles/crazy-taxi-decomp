#!/usr/bin/env python3
"""Check names against the running game (optional): RetroArch with the Flycast core, driven over
its network ports, nothing typed into the emulator's window. Stdlib only.

RetroArch, once, while it is closed (it rewrites retroarch.cfg when it quits):
    network_cmd_enable = "true"              memory, pause, frame step, screenshot (UDP 55355)
    network_remote_enable = "true"           controller input (UDP 55400 + player)
    network_remote_enable_user_p1 = "true"
    audio_mute_enable = "true"               mute rather than audio_enable = "false": the Flycast
                                             core crashes at start-up with audio off
The Flycast core needs the Dreamcast BIOS as <system_directory>/dc/dc_boot.bin.

    live.py launch DISC.gdi [CORE]  start RetroArch in the background with the Flycast core
    live.py status                  playing / paused, and the content
    live.py read WHERE [N]          N bytes (default 4) as hex
    live.py word WHERE / float WHERE / vec WHERE   a 32-bit word, a float, three floats
    live.py watch WHERE [SECONDS]   print the word each time it changes (default 10 s)
    live.py write WHERE HEXBYTES
    live.py pause / step [N]        toggle pause; advance N frames while paused
    live.py shot                    screenshot, prints the PNG path
    live.py press BUTTON [FRAMES]   hold a Dreamcast button (A B X Y START UP DOWN LEFT RIGHT L R)
                                    for FRAMES frames (default 6), then let go
    live.py hold BUTTON / release BUTTON|all / stick X Y   (stick: -1..1 each, 0 0 centres it)

WHERE is a Dreamcast address (hex, e.g. 0C2A44A8, 8C2A44A8 works too) or a name from the repo's
globals.txt or functions.txt, with +OFFSET if needed (e.g. playerEV+4).
Settings from the environment: RA_HOST (127.0.0.1), RA_PORT (55355), RA_PAD_PORT (55400),
RA_APP (/Applications/RetroArch.app), RA_SHOTS (the screenshot folder to watch).
"""
import glob
import os
import socket
import struct
import subprocess
import sys
import time

HOST = os.environ.get('RA_HOST', '127.0.0.1')
CMD_PORT = int(os.environ.get('RA_PORT', '55355'))
PAD_PORT = int(os.environ.get('RA_PAD_PORT', '55400'))
APP = os.environ.get('RA_APP', '/Applications/RetroArch.app')
CORE = os.path.expanduser('~/Library/Application Support/RetroArch/cores/flycast_libretro.dylib')
SHOTS = os.path.expanduser(os.environ.get('RA_SHOTS', '~/Documents/RetroArch/screenshots'))
RAM = 0x0C000000                                  # main RAM, 16 MB: the achievements address 0
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# RetroPad ids; the Flycast core maps RetroPad B/A/Y/X to Dreamcast A/B/X/Y, L2/R2 to L/R.
PAD = {'A': 0, 'X': 1, 'START': 3, 'UP': 4, 'DOWN': 5, 'LEFT': 6, 'RIGHT': 7,
       'B': 8, 'Y': 9, 'L': 12, 'R': 13}
JOYPAD, ANALOG = 1, 5                             # RETRO_DEVICE_JOYPAD, RETRO_DEVICE_ANALOG


def cmd(text, reply=True, timeout=1.0):
    """One network command; its answer, or None (most commands have none)."""
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.settimeout(timeout)
    try:
        s.sendto(text.encode(), (HOST, CMD_PORT))
        return s.recv(65536).decode().strip() if reply else None
    except (socket.timeout, ConnectionRefusedError):   # not listening (yet)
        return None
    finally:
        s.close()


def names():
    table = {}
    for f, col in (('globals.txt', 0), ('functions.txt', 1)):
        path = os.path.join(REPO, f)
        if not os.path.exists(path):
            continue
        for line in open(path):
            p = line.split()
            if not p or line.startswith('#') or (col and p[0] != 'F'):
                continue
            try:
                table[p[-1]] = int(p[col], 16)
            except (ValueError, IndexError):
                pass
    return table


def where(text):
    base, _, off = text.partition('+')
    t = names()                                   # a name first: some names spell hex
    if base in t:
        a = t[base]
    else:
        try:
            a = int(base, 16)
        except ValueError:
            sys.exit('%s: not an address, and not in globals.txt or functions.txt' % base)
    a = (a & 0x1FFFFFFF) | 0x0C000000 if (a >> 24) in (0x8C, 0xAC) else a
    return a + (int(off, 0) if off else 0)


def read(addr, n):
    """Bytes at a Dreamcast address: the core's memory map, else the achievements RAM view."""
    for _ in range(3):                            # a busy machine drops or delays answers
        for name, a in (('READ_CORE_MEMORY', addr), ('READ_CORE_RAM', addr - RAM)):
            r = cmd('%s %x %d' % (name, a, n))
            if r and r.split()[2:3] != ['-1']:
                return bytes(int(b, 16) for b in r.split()[2:])
    sys.exit('read failed at %08X (is RetroArch running the game, with network commands on?)' % addr)


def write(addr, data):
    hexes = ' '.join('%02x' % b for b in data)
    r = cmd('WRITE_CORE_MEMORY %x %s' % (addr, hexes))
    if r is None or r.split()[2:3] == ['-1']:
        cmd('WRITE_CORE_RAM %x %s' % (addr - RAM, hexes), reply=False)


def pad(device, index, ident, state):
    """One network gamepad message: port, device, index, id, state (20 bytes with padding)."""
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.sendto(struct.pack('<iiiiHxx', 0, device, index, ident, state & 0xFFFF), (HOST, PAD_PORT))
    s.close()


def button(name, down):
    pad(JOYPAD, 0, PAD[name.upper()], 1 if down else 0)


def launch(disc, core):
    subprocess.check_call(['open', '-g', '-n', '-a', APP, '--args', '-L', core, disc])
    for _ in range(90):                           # boot animation, then the game
        time.sleep(1)
        r = cmd('GET_STATUS')
        if r and 'CONTENTLESS' not in r:
            print(r)
            return
    print('RetroArch started, no answer on port %d (network_cmd_enable on?)' % CMD_PORT)


def shot():
    before = set(glob.glob(os.path.join(glob.escape(SHOTS), '*.png')))
    cmd('SCREENSHOT', reply=False)
    for _ in range(50):
        time.sleep(0.1)
        new = set(glob.glob(os.path.join(glob.escape(SHOTS), '*.png'))) - before
        if new:
            time.sleep(0.2)                       # let the write finish
            return max(new, key=os.path.getmtime)
    sys.exit('no screenshot appeared in %s (set RA_SHOTS to RetroArch\'s folder)' % SHOTS)


def main(a):
    if not a:
        sys.exit(__doc__)
    c = a[0]
    if c == 'launch':
        if len(a) < 2:
            sys.exit(__doc__)
        launch(os.path.abspath(a[1]), a[2] if len(a) > 2 else CORE)
    elif c == 'status':
        print(cmd('GET_STATUS'))
    elif c == 'read':
        print(read(where(a[1]), int(a[2]) if len(a) > 2 else 4).hex())
    elif c == 'word':
        print('%08X' % struct.unpack('<I', read(where(a[1]), 4))[0])
    elif c == 'float':
        print(struct.unpack('<f', read(where(a[1]), 4))[0])
    elif c == 'vec':
        print('%g %g %g' % struct.unpack('<3f', read(where(a[1]), 12)))
    elif c == 'watch':
        addr, end, last = where(a[1]), time.time() + (float(a[2]) if len(a) > 2 else 10), None
        while time.time() < end:
            v = struct.unpack('<I', read(addr, 4))[0]
            if v != last:
                print('%.2f %08X' % (time.time(), v), flush=True)
                last = v
            time.sleep(0.05)
    elif c == 'write':
        write(where(a[1]), bytes.fromhex(a[2]))
    elif c == 'pause':
        cmd('PAUSE_TOGGLE', reply=False)
    elif c == 'step':
        for _ in range(int(a[1]) if len(a) > 1 else 1):
            cmd('FRAMEADVANCE', reply=False)
            time.sleep(0.02)
    elif c == 'shot':
        print(shot())
    elif c == 'press':
        button(a[1], True)
        time.sleep((int(a[2]) if len(a) > 2 else 6) / 60.0)
        button(a[1], False)
    elif c == 'hold':
        button(a[1], True)
    elif c == 'release':
        if a[1].lower() == 'all':
            for name in PAD:
                button(name, False)
            pad(ANALOG, 0, 0, 0)
            pad(ANALOG, 0, 1, 0)
        else:
            button(a[1], False)
    elif c == 'stick':
        pad(ANALOG, 0, 0, int(float(a[1]) * 32767))
        pad(ANALOG, 0, 1, int(float(a[2]) * 32767))
    else:
        sys.exit(__doc__)


if __name__ == '__main__':
    main(sys.argv[1:])
