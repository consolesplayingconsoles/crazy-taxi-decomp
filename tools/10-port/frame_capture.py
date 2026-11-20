#!/usr/bin/env python3
"""frame_capture.py OUT_PREFIX: what the running native game shows and holds, read without stopping it: the renderer's last
finished frame (pvr.c's records: every polygon with its list, its ISP, TSP, PCW and TCW words and its vertices, screen x, y and
W) to OUT_PREFIX.txt, and the console's RAM (16 MB at 0x0C000000) to OUT_PREFIX_ram.bin. Run in the container the game runs in
(it needs /proc/<pid>/mem: the container is started with --cap-add=SYS_PTRACE), from the repo:

    python3 tools/10-port/frame_capture.py build/native/capture/race_0

The game is found by its command line (build/native/<your disc's name> --data: GDI in the repo's .env, as native_build.py
names it); the records by their symbol, `bufs`, in the program (nm). Nothing is attached and no signal is sent: the game runs on. tools/10-port/capture.sh calls it at the mode it waits for.
Layouts are pvr.c's (x86-64): struct tabuf 48 bytes, struct poly 28, struct rvert 36 (render.h)."""
import os
import re
import struct
import subprocess
import sys

NBUF = 4                        # pvr.c's TABUFS
TABUF, POLY, RVERT = 48, 28, 36
RAM, RAM_SIZE = 0x0C000000, 0x1000000


def symbol(program, name):
    """the address of a symbol of the program (nm), or None"""
    for line in subprocess.check_output(['nm', program]).decode().splitlines():
        p = line.split()
        if len(p) == 3 and p[2] == name:
            return int(p[0], 16)
    return None


def last_frame(read, bufs):
    """(frame number, buffer, [(poly number, list, pcw, isp, tsp, tcw, [(x, y, w)])]) of the last finished frame in the
    renderer's records at `bufs`; read(address, size) gives the program's memory. The newest buffer may still be filling:
    the one before it is taken"""
    tabs = []
    for i in range(NBUF):
        key, v, nv, capv, p, np_, capp, frame = struct.unpack('<I4xQIIQIIQ', read(bufs + TABUF * i, TABUF))
        tabs.append((frame, i, v, nv, p, np_))
    tabs.sort()
    frame, i, v, nv, p, np_ = tabs[-2]
    polys = read(p, POLY * np_) if np_ else b''
    verts = read(v, RVERT * nv) if nv else b''
    out = []
    for k in range(np_):
        pcw, isp, tsp, tcw, first, count, lst = struct.unpack_from('<4IIIi', polys, POLY * k)
        vs = [struct.unpack_from('<3f', verts, RVERT * (first + j)) for j in range(count) if first + j < nv]
        out.append((k, lst, pcw, isp, tsp, tcw, vs))
    return frame, i, out


def write_frame(path, frame, buf, polys):
    """the frame as text: a header line, then one line per polygon (the format the offline tools read)"""
    with open(path, 'w') as f:
        f.write('frame %d buffer %d: %d polygons, %d vertices\n' % (frame, buf, len(polys), sum(len(p[6]) for p in polys)))
        for k, lst, pcw, isp, tsp, tcw, vs in polys:
            f.write('poly %d list %d pcw %08X isp %08X tsp %08X tcw %08X n %d' % (k, lst, pcw, isp, tsp, tcw, len(vs)))
            for x, y, w in vs:
                f.write('  (%.1f %.1f w%.4g)' % (x, y, w))
            f.write('\n')


def program():
    """build/native/<the disc image's name>: GDI in the repo's .env, without its folder and .gdi (native_build.py's name)"""
    gdi = None
    for line in open('.env', errors='replace'):
        m = re.match(r'\s*GDI\s*=\s*(.*?)\s*$', line)
        if m:
            gdi = m.group(1).strip('"\'')
    if not gdi:
        sys.exit('frame_capture: GDI is not set in .env (the program is named after your disc image)')
    return 'build/native/' + re.sub(r'(?i)\.gdi$', '', os.path.basename(gdi.replace('\\', '/')))


def main():
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    out = sys.argv[1]
    exe = program()
    pid = int(subprocess.check_output(['pgrep', '-f', '^' + re.escape(exe) + ' --data']).split()[0])
    bufs = symbol(exe, 'bufs')
    if bufs is None:
        sys.exit('frame_capture: %s has no symbol bufs (pvr.c)' % exe)
    mem = open('/proc/%d/mem' % pid, 'rb', 0)

    def read(a, n):
        mem.seek(a)
        return mem.read(n)

    frame, buf, polys = last_frame(read, bufs)
    with open(out + '_ram.bin', 'wb') as f:
        f.write(read(RAM, RAM_SIZE))
    write_frame(out + '.txt', frame, buf, polys)
    print('%s: frame %d, %d polygons' % (out, frame, len(polys)))


if __name__ == '__main__':
    main()
