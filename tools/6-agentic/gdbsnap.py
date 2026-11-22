#!/usr/bin/env python3
"""RAM snapshots of the running game over Flycast's GDB server, and what changed between them. Stdlib only.

Release builds of Flycast leave the GDB server out (CMake option ENABLE_GDB_SERVER, default OFF): the
Debug.GDB* settings exist in every build but do nothing. Build Flycast with -DENABLE_GDB_SERVER=ON and start
it with `-config config:Debug.GDBEnabled=yes` (port 3263). It listens on every interface, not only
localhost: anything on the LAN can attach while it runs.

    gdbsnap.py snap REGIONS --out DIR [--label NAME]
    gdbsnap.py timeline REGIONS --out DIR --every SECONDS --count N [--label NAME]
    gdbsnap.py diff A.json B.json [--min N]

REGIONS: ADDR:LENGTH[,ADDR:LENGTH...] in hex, the game's own addresses as functions.txt has them (a
game linked at 0C010000 is read at 0C..., 8C... reads as zeros through the debugger).
snap pauses the game (^C), reads each region in 2 KB pieces (about 580 KB/s), writes one .bin per region
and a manifest .json, and resumes. timeline takes N snaps SECONDS apart. diff compares two manifests word
by word and prints the changed runs (at least --min words, default 1), each with the nearest name from
globals.txt / symbols.txt when run in a decomp repo.
Settings from the environment: GDB_HOST (127.0.0.1), GDB_PORT (3263).
"""
import argparse
import bisect
import json
import os
import socket
import struct
import sys
import time

HOST = os.environ.get('GDB_HOST', '127.0.0.1')
PORT = int(os.environ.get('GDB_PORT', '3263'))
CHUNK = 2048


class Gdb:
    def __init__(self, host, port, timeout=10.0):
        self.s = socket.create_connection((host, port), timeout=timeout)
        self.buf = b''

    def _byte(self):
        while not self.buf:
            chunk = self.s.recv(65536)
            if not chunk:
                raise ConnectionError('the GDB server closed the connection')
            self.buf += chunk
        b, self.buf = self.buf[:1], self.buf[1:]
        return b

    def _packet(self, payload):
        data = payload.encode('ascii')
        return b'$' + data + b'#' + ('%02x' % (sum(data) & 0xff)).encode('ascii')

    def recv(self):
        while self._byte() != b'$':
            pass
        out = bytearray()
        while True:
            c = self._byte()
            if c == b'#':
                break
            out += c
        self._byte()
        self._byte()
        self.s.sendall(b'+')
        return out.decode('ascii', 'replace')

    def ask(self, payload):
        pkt = self._packet(payload)
        self.s.sendall(pkt)
        while True:
            c = self._byte()
            if c == b'+':
                break
            if c == b'-':
                self.s.sendall(pkt)
        return self.recv()

    def stop(self):
        self.s.sendall(b'\x03')
        return self.recv()

    def resume(self):
        # the stop reply comes when the game next stops; nothing waits for it
        self.s.sendall(self._packet('c'))

    def read(self, addr, length):
        reply = self.ask('m%x,%x' % (addr, length))
        if not reply or reply.startswith('E'):
            raise IOError('read %08X (%d bytes): %s' % (addr, length, reply or 'no reply'))
        return bytes.fromhex(reply)

    def close(self):
        self.s.close()


def regions(spec):
    out = []
    for item in spec.split(','):
        a, n = item.split(':')
        out.append((int(a, 16), int(n, 16)))
    return out


def connect():
    try:
        return Gdb(HOST, PORT)
    except OSError as e:
        sys.exit('no GDB server at %s:%d (%s): start a Flycast built with ENABLE_GDB_SERVER, '
                 'with -config config:Debug.GDBEnabled=yes' % (HOST, PORT, e))


def snap(g, regs, outdir, label):
    os.makedirs(outdir, exist_ok=True)
    stamp = time.strftime('%Y%m%dT%H%M%S')
    name = '%s_%s' % (label, stamp)
    manifest = {'label': label, 'time': stamp, 'regions': []}
    g.stop()
    try:
        for addr, length in regs:
            data = bytearray()
            for off in range(0, length, CHUNK):
                data += g.read(addr + off, min(CHUNK, length - off))
            fn = '%s_%08X.bin' % (name, addr)
            with open(os.path.join(outdir, fn), 'wb') as f:
                f.write(data)
            manifest['regions'].append({'file': fn, 'addr': '%08X' % addr, 'length': length})
    finally:
        g.resume()
    path = os.path.join(outdir, name + '.json')
    with open(path, 'w') as f:
        json.dump(manifest, f, indent=1)
    return path


def names():
    table = []
    for fn in ('globals.txt', 'symbols.txt'):
        if not os.path.exists(fn):
            continue
        for line in open(fn, errors='replace'):
            p = line.split()
            if len(p) >= 2:
                for i, tok in enumerate(p[:-1]):
                    try:
                        a = int(tok, 16)
                    except ValueError:
                        continue
                    if 0x0C000000 <= (a & 0x1FFFFFFF) < 0x0D000000:
                        table.append((a & 0x1FFFFFFF, p[-1]))
                        break
    table.sort()
    return table


def nearest(table, addr):
    keys = [a for a, _ in table]
    i = bisect.bisect_right(keys, addr & 0x1FFFFFFF) - 1
    if i < 0:
        return ''
    a, n = table[i]
    off = (addr & 0x1FFFFFFF) - a
    if off > 0x1000:
        return ''
    return n if off == 0 else '%s+%X' % (n, off)


def load(manifest):
    base = os.path.dirname(manifest)
    m = json.load(open(manifest))
    out = {}
    for r in m['regions']:
        out[int(r['addr'], 16)] = open(os.path.join(base, r['file']), 'rb').read()
    return m, out


def diff(a, b, minwords):
    ma, ra = load(a)
    mb, rb = load(b)
    table = names()
    total = 0
    for addr in sorted(set(ra) & set(rb)):
        x, y = ra[addr], rb[addr]
        n = min(len(x), len(y)) // 4
        i = 0
        while i < n:
            if x[i * 4:i * 4 + 4] == y[i * 4:i * 4 + 4]:
                i += 1
                continue
            j = i
            while j < n and x[j * 4:j * 4 + 4] != y[j * 4:j * 4 + 4]:
                j += 1
            if j - i >= minwords:
                at = addr + i * 4
                first_a = struct.unpack('<I', x[i * 4:i * 4 + 4])[0]
                first_b = struct.unpack('<I', y[i * 4:i * 4 + 4])[0]
                print('%08X  %4d word(s)  %08X -> %08X  %s' % (at, j - i, first_a, first_b, nearest(table, at)))
                total += 1
            i = j
    print('%d changed run(s) between %s and %s' % (total, ma['time'], mb['time']))


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    sub = ap.add_subparsers(dest='cmd', required=True)
    s = sub.add_parser('snap')
    s.add_argument('regions')
    s.add_argument('--out', required=True)
    s.add_argument('--label', default='snap')
    t = sub.add_parser('timeline')
    t.add_argument('regions')
    t.add_argument('--out', required=True)
    t.add_argument('--label', default='t')
    t.add_argument('--every', type=float, required=True)
    t.add_argument('--count', type=int, required=True)
    d = sub.add_parser('diff')
    d.add_argument('a')
    d.add_argument('b')
    d.add_argument('--min', type=int, default=1)
    a = ap.parse_args()
    if a.cmd == 'diff':
        diff(a.a, a.b, a.min)
        return
    g = connect()
    try:
        if a.cmd == 'snap':
            print(snap(g, regions(a.regions), a.out, a.label))
        else:
            for k in range(a.count):
                t0 = time.time()
                print(snap(g, regions(a.regions), a.out, '%s%03d' % (a.label, k)))
                if k + 1 < a.count:
                    time.sleep(max(0.0, a.every - (time.time() - t0)))
    finally:
        g.close()


if __name__ == '__main__':
    main()
