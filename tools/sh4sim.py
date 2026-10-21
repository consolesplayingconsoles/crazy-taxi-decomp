#!/usr/bin/env python3
"""A small SH-4 interpreter for behaviour checks: run one function from a known state and record
what it does. Stdlib only.

    python3 sh4sim.py run <case.json> [--bytes <file> --at <hex>] [--deep]

Memory is sparse 4 KB pages over the 29-bit physical space (P1/P2 mirrors fold together): the
case loads a RAM dump (16 MB at 0x0C000000) and/or the executable, then patches bytes on top.
The function runs from `entry` with the case's registers until it returns to a sentinel return
address. What it does is the result:
  - calls: every call or tail jump out of [entry, end): target, r4-r7, fr4-fr11. By default a call
    is not run: its return values come from the case, in order. --deep runs
    the callee instead (its own calls and writes then count as the function's).
  - writes: every store (address, size, value) outside the stack the run started with;
  - devices: reads and writes outside RAM (hardware registers, store queues);
  - out: r0, r1, fr0, fr1 at the return.
Compiled C runs with FPSCR.PR = 0 (single precision); double precision is not implemented and
stops the run. fipr and ftrv are exact here, approximate on the hardware: only the comparison
between two runs of this interpreter is meaningful, never a value against the console's.

The case (JSON): {"exe": path, "base": hex, "dump": path, "entry": hex, "end": hex,
"regs": {"r4": hex, "fr4": float, ...}, "sr": hex (optional, the starting SR), "poke": {hex addr: hex bytes}, "calls": [{"r0": hex,
"fr0": float, "poke_arg": {"r7": hexbytes}}, ...], "steps": max}. Paths are relative to the case file.
A call's "poke_arg" writes those bytes at the address the named register holds when the call is made.
"""
import json
import math
import os
import re
import struct
import sys

M32 = 0xFFFFFFFF
SENTINEL = 0x0EADBEE0          # return address the run ends on (outside RAM, never executed)
STACK_TOP = 0x0E000000         # a fresh stack page, so its writes are not effects
RAM_LO, RAM_HI = 0x0C000000, 0x0D000000


def s8(x):
    return x - 0x100 if x & 0x80 else x


def s12(x):
    return x - 0x1000 if x & 0x800 else x


def s16(x):
    return x - 0x10000 if x & 0x8000 else x


def s32(x):
    return x - 0x100000000 if x & 0x80000000 else x


def bits_f(b):
    return struct.unpack('<f', struct.pack('<I', b & M32))[0]


def f_bits(f):
    """float -> float32 bits, round to nearest, denormals flushed to zero (FPSCR.DN = 1)."""
    if f != f:
        return 0x7FBFFFFF
    try:
        b = struct.unpack('<I', struct.pack('<f', f))[0]
    except OverflowError:
        b = 0x7F800000 if f > 0 else 0xFF800000
    if (b & 0x7F800000) == 0 and b & 0x007FFFFF:
        b &= 0x80000000
    return b


class Stop(Exception):
    pass


class Memory:
    def __init__(self):
        self.pages = {}
        self.writes = []          # (addr, size, value), stack excluded
        self.devices = []         # ('r'/'w', addr, size, value)
        self.reads = []           # the address of every data read, in order (capped)
        self.stack = (STACK_TOP - 0x10000, STACK_TOP)
        self.device_reads = {}    # addr -> list of values to hand back, in order
        self.seq_reads = {}       # RAM addr -> what each read returns, in order (the last value stays): a word an interrupt changes
        self.seq_used = {}        # RAM addr -> how many reads took one of those values

    @staticmethod
    def phys(a):
        return a & 0x1FFFFFFF

    def load(self, addr, data):
        a = self.phys(addr)
        o = 0
        while o < len(data):
            pa = a + o
            page = self.pages.setdefault(pa >> 12, bytearray(4096))
            k = min(4096 - (pa & 4095), len(data) - o)
            page[pa & 4095:(pa & 4095) + k] = data[o:o + k]
            o += k

    def mapped(self, a):
        return (a >> 12) in self.pages

    def read(self, addr, size, fetch=False):
        a = self.phys(addr)
        if not fetch and len(self.reads) < 4000:
            self.reads.append(a)
        sq = self.seq_reads.get(a) if not fetch else None
        if sq:                                   # a word that changes between reads (an interrupt, a counter): the case lists what each read returns
            self.seq_used['%08X' % a] = self.seq_used.get('%08X' % a, 0) + 1
            return (sq.pop(0) if len(sq) > 1 else sq[0]) & ((1 << (8 * size)) - 1)
        if a & (size - 1):
            raise Stop('unaligned %d-byte read at %08X' % (size, addr))
        page = self.pages.get(a >> 12)
        if page is None:
            if not (RAM_LO <= a < RAM_HI) and not fetch and not (self.stack[0] <= a < self.stack[1]):
                vals = self.device_reads.get(a)
                v = vals.pop(0) if vals else 0
                self.devices.append(('r', a, size, v))
                return v
            page = self.pages.setdefault(a >> 12, bytearray(4096))
        o = a & 4095
        return int.from_bytes(page[o:o + size], 'little')

    def write(self, addr, size, value):
        a = self.phys(addr)
        if a & (size - 1):
            raise Stop('unaligned %d-byte write at %08X' % (size, addr))
        value &= (1 << (8 * size)) - 1
        page = self.pages.get(a >> 12)
        in_stack = self.stack[0] <= a < self.stack[1]
        if page is None and not (RAM_LO <= a < RAM_HI) and not in_stack:
            self.devices.append(('w', a, size, value))
            return
        if page is None:
            page = self.pages.setdefault(a >> 12, bytearray(4096))
        o = a & 4095
        page[o:o + size] = value.to_bytes(size, 'little')
        if not in_stack:
            self.writes.append((a, size, value))


class CPU:
    def __init__(self, mem):
        self.m = mem
        self.r = [0] * 16
        self.t = self.s = self.q = self.mq = 0
        self.srx = 0x40000000         # SR's other bits (MD = 1, interrupt mask 0): read by stc sr, written by ldc sr
        self.gbr = self.mach = self.macl = self.pr = self.pc = 0
        self.vbr = 0
        self.fpul = 0
        self.fr = [0] * 16        # float32 bits, current bank
        self.xf = [0] * 16        # the other bank
        self.sz = self.prec = self.frbit = 0
        self.fpscr_rest = 0x00040001   # DN = 1, RM = nearest
        self.steps = 0
        self.covered = set()                  # the address of every instruction that ran
        self.trace = None                     # with case['trace']: (pc, opcode, r0-r15, fr0-fr15) of every instruction, before it runs
        self.on_call = None       # callback(cpu, target, kind) -> True when the call was handled
        self.lo = self.hi = 0     # the function's own bytes: branches inside stay inside
        self.inside = []          # return addresses of the callees running now (deep calls)

    # FPSCR as a word
    def get_fpscr(self):
        return self.fpscr_rest | (self.prec << 19) | (self.sz << 20) | (self.frbit << 21)

    def set_fpscr(self, v):
        fr = (v >> 21) & 1
        if fr != self.frbit:
            self.fr, self.xf = self.xf, self.fr
        self.frbit, self.sz, self.prec = fr, (v >> 20) & 1, (v >> 19) & 1
        self.fpscr_rest = v & ~(7 << 19) & M32
        if self.prec:
            raise Stop('double precision (FPSCR.PR = 1) is not implemented')

    def f(self, n):
        return bits_f(self.fr[n])

    def setf(self, n, x):
        self.fr[n] = f_bits(x)

    def sr(self):
        return self.srx | (self.mq << 9) | (self.q << 8) | (self.s << 1) | self.t

    def set_sr(self, x):
        if (x ^ self.srx) & 0x30000000:
            raise Stop('ldc sr changes the register bank or the block bit (not modelled)')
        self.t, self.s, self.q, self.mq = x & 1, (x >> 1) & 1, (x >> 8) & 1, (x >> 9) & 1
        self.srx = x & 0xFFFFFCFC

    # one instruction; returns a pending branch target (delayed) or None
    def step(self, in_slot=False):
        pc = self.pc
        if not in_slot and not self.inside and getattr(self, 'hi', None) and pc == self.hi and self.on_call:
            # execution ran on past the function's last instruction (no return: it falls into the next function): a jump out, like a tail call
            if self.on_call(self, pc, 'jump', pc):
                return
        op = self.m.read(pc, 2, fetch=True)
        self.steps += 1
        self.covered.add(pc)
        if self.trace is not None:
            self.trace.append((pc, op, tuple(self.r), tuple(self.fr)))
        self.pc = (pc + 2) & M32
        n, m_, lo4, lo8 = (op >> 8) & 15, (op >> 4) & 15, op & 15, op & 255
        r = self.r
        rd = self.m.read
        wr = self.m.write
        hi = op >> 12

        def branch_slot(target, call=None):
            if in_slot:
                raise Stop('branch in a delay slot at %08X' % pc)
            self.step(in_slot=True)       # the delay slot runs first
            self.go(target, call, pc)
            return True

        if hi == 0:
            if op == 0x0009 or lo4 == 3 and m_ in (8, 9, 0xa, 0xb):      # nop, pref, ocbi, ocbp, ocbwb
                return
            if op == 0x000b:                                              # rts
                return branch_slot(self.pr, 'rts')
            if op == 0x0008: self.t = 0; return
            if op == 0x0018: self.t = 1; return
            if op == 0x0028: self.mach = self.macl = 0; return
            if op == 0x0048: self.s = 0; return
            if op == 0x0058: self.s = 1; return
            if op == 0x0019: self.mq = self.q = self.t = 0; return
            if lo8 == 0x02: r[n] = self.sr(); return
            if lo8 == 0x12: r[n] = self.gbr; return
            if lo8 == 0x22: r[n] = self.vbr; return                          # stc vbr,rn
            if lo8 == 0x0a: r[n] = self.mach; return
            if lo8 == 0x1a: r[n] = self.macl; return
            if lo8 == 0x2a: r[n] = self.pr; return
            if lo8 == 0x5a: r[n] = self.fpul; return
            if lo8 == 0x6a: r[n] = self.get_fpscr(); return
            if lo8 == 0x29: r[n] = self.t; return
            if lo8 == 0x03:                                               # bsrf
                self.pr = (pc + 4) & M32
                return branch_slot((pc + 4 + r[n]) & M32, 'call')
            if lo8 == 0x23:                                               # braf
                return branch_slot((pc + 4 + r[n]) & M32, 'jump')
            if lo8 == 0xc3: wr(r[n], 4, r[0]); return                     # movca.l
            if lo4 == 4: wr(r[n] + r[0], 1, r[m_]); return
            if lo4 == 5: wr(r[n] + r[0], 2, r[m_]); return
            if lo4 == 6: wr(r[n] + r[0], 4, r[m_]); return
            if lo4 == 7: self.macl = (r[n] * r[m_]) & M32; return
            if lo4 == 0xc: r[n] = s8(rd(r[m_] + r[0], 1)) & M32; return
            if lo4 == 0xd: r[n] = s16(rd(r[m_] + r[0], 2)) & M32; return
            if lo4 == 0xe: r[n] = rd(r[m_] + r[0], 4); return
            if lo4 == 0xf:                                                # mac.l
                a = s32(rd(r[n], 4)); r[n] = (r[n] + 4) & M32
                b = s32(rd(r[m_], 4)); r[m_] = (r[m_] + 4) & M32
                acc = s32(self.mach) << 32 | self.macl
                acc = (acc + a * b) & ((1 << 64) - 1)
                self.mach, self.macl = acc >> 32, acc & M32
                return
        elif hi == 1:
            wr(r[n] + lo4 * 4, 4, r[m_]); return
        elif hi == 2:
            if lo4 == 0: wr(r[n], 1, r[m_]); return
            if lo4 == 1: wr(r[n], 2, r[m_]); return
            if lo4 == 2: wr(r[n], 4, r[m_]); return
            if lo4 in (4, 5, 6):
                size = (1, 2, 4)[lo4 - 4]
                v = r[m_]
                r[n] = (r[n] - size) & M32
                wr(r[n], size, v); return
            if lo4 == 7:
                self.q, self.mq = r[n] >> 31, r[m_] >> 31; self.t = self.q ^ self.mq; return
            if lo4 == 8: self.t = int((r[n] & r[m_]) == 0); return
            if lo4 == 9: r[n] &= r[m_]; return
            if lo4 == 0xa: r[n] ^= r[m_]; return
            if lo4 == 0xb: r[n] |= r[m_]; return
            if lo4 == 0xc:
                x = r[n] ^ r[m_]
                self.t = int(any(((x >> s) & 255) == 0 for s in (0, 8, 16, 24))); return
            if lo4 == 0xd: r[n] = ((r[m_] << 16) | (r[n] >> 16)) & M32; return
            if lo4 == 0xe: self.macl = ((r[n] & 0xFFFF) * (r[m_] & 0xFFFF)) & M32; return
            if lo4 == 0xf: self.macl = (s16(r[n] & 0xFFFF) * s16(r[m_] & 0xFFFF)) & M32; return
        elif hi == 3:
            a, b = r[n], r[m_]
            if lo4 == 0: self.t = int(a == b); return
            if lo4 == 2: self.t = int(a >= b); return
            if lo4 == 3: self.t = int(s32(a) >= s32(b)); return
            if lo4 == 4: self.div1(n, m_); return
            if lo4 == 5:
                p = a * b; self.mach, self.macl = (p >> 32) & M32, p & M32; return
            if lo4 == 6: self.t = int(a > b); return
            if lo4 == 7: self.t = int(s32(a) > s32(b)); return
            if lo4 == 8: r[n] = (a - b) & M32; return
            if lo4 == 0xa:
                v = a - b - self.t; r[n] = v & M32; self.t = int(v < 0); return
            if lo4 == 0xb:
                v = s32(a) - s32(b); r[n] = v & M32; self.t = int(v < -0x80000000 or v > 0x7FFFFFFF); return
            if lo4 == 0xc: r[n] = (a + b) & M32; return
            if lo4 == 0xd:
                p = (s32(a) * s32(b)) & ((1 << 64) - 1); self.mach, self.macl = p >> 32, p & M32; return
            if lo4 == 0xe:
                v = a + b + self.t; r[n] = v & M32; self.t = int(v > M32); return
            if lo4 == 0xf:
                v = s32(a) + s32(b); r[n] = v & M32; self.t = int(v < -0x80000000 or v > 0x7FFFFFFF); return
        elif hi == 4:
            if lo4 == 0xc:                                                # shad
                sh = s32(r[m_])
                r[n] = (s32(r[n]) << (sh & 31)) & M32 if sh >= 0 else \
                    ((s32(r[n]) >> ((-sh) & 31)) & M32 if (sh & 31) else (M32 if r[n] >> 31 else 0))
                return
            if lo4 == 0xd:                                                # shld
                sh = s32(r[m_])
                r[n] = (r[n] << (sh & 31)) & M32 if sh >= 0 else \
                    (r[n] >> ((-sh) & 31) if (sh & 31) else 0)
                return
            if lo4 == 0xf:                                                # mac.w
                a = s16(rd(r[n], 2)); r[n] = (r[n] + 2) & M32
                b = s16(rd(r[m_], 2)); r[m_] = (r[m_] + 2) & M32
                acc = (s32(self.mach) << 32 | self.macl) + a * b
                acc &= (1 << 64) - 1
                self.mach, self.macl = acc >> 32, acc & M32
                return
            x = r[n]
            if lo8 == 0x00: self.t = x >> 31; r[n] = (x << 1) & M32; return
            if lo8 == 0x01: self.t = x & 1; r[n] = x >> 1; return
            if lo8 == 0x20: self.t = x >> 31; r[n] = (x << 1) & M32; return
            if lo8 == 0x21: self.t = x & 1; r[n] = (s32(x) >> 1) & M32; return
            if lo8 == 0x04: self.t = x >> 31; r[n] = ((x << 1) | self.t) & M32; return
            if lo8 == 0x05: self.t = x & 1; r[n] = (x >> 1) | (self.t << 31); return
            if lo8 == 0x24:
                t = x >> 31; r[n] = ((x << 1) | self.t) & M32; self.t = t; return
            if lo8 == 0x25:
                t = x & 1; r[n] = (x >> 1) | (self.t << 31); self.t = t; return
            if lo8 == 0x08: r[n] = (x << 2) & M32; return
            if lo8 == 0x09: r[n] = x >> 2; return
            if lo8 == 0x18: r[n] = (x << 8) & M32; return
            if lo8 == 0x19: r[n] = x >> 8; return
            if lo8 == 0x28: r[n] = (x << 16) & M32; return
            if lo8 == 0x29: r[n] = x >> 16; return
            if lo8 == 0x10: r[n] = (x - 1) & M32; self.t = int(r[n] == 0); return
            if lo8 == 0x11: self.t = int(s32(x) >= 0); return
            if lo8 == 0x15: self.t = int(s32(x) > 0); return
            if lo8 == 0x1b:                                               # tas.b
                v = rd(x, 1); self.t = int(v == 0); wr(x, 1, v | 0x80); return
            if lo8 == 0x0b:                                               # jsr
                self.pr = (pc + 4) & M32
                return branch_slot(x, 'call')
            if lo8 == 0x2b:                                               # jmp
                return branch_slot(x, 'jump')
            if lo8 == 0x0a: self.mach = x; return
            if lo8 == 0x1a: self.macl = x; return
            if lo8 == 0x2a: self.pr = x; return
            if lo8 == 0x5a: self.fpul = x; return
            if lo8 == 0x6a: self.set_fpscr(x); return
            if lo8 == 0x1e: self.gbr = x; return
            if lo8 == 0x2e: self.vbr = x; return                             # ldc rm,vbr
            if lo8 == 0x0e: self.set_sr(x); return                         # ldc rm,sr
            if lo8 in (0x02, 0x12, 0x22, 0x52, 0x62, 0x13, 0x23):         # sts.l / stc.l gbr, vbr
                v = {0x02: self.mach, 0x12: self.macl, 0x22: self.pr, 0x52: self.fpul,
                     0x62: self.get_fpscr(), 0x13: self.gbr, 0x23: self.vbr}[lo8]
                r[n] = (x - 4) & M32; wr(r[n], 4, v); return
            if lo8 in (0x06, 0x16, 0x26, 0x56, 0x66, 0x17, 0x27):         # lds.l / ldc.l gbr, vbr
                v = rd(x, 4); r[n] = (x + 4) & M32
                if lo8 == 0x06: self.mach = v
                elif lo8 == 0x16: self.macl = v
                elif lo8 == 0x26: self.pr = v
                elif lo8 == 0x56: self.fpul = v
                elif lo8 == 0x66: self.set_fpscr(v)
                elif lo8 == 0x27: self.vbr = v
                else: self.gbr = v
                return
        elif hi == 5:
            r[n] = rd(r[m_] + lo4 * 4, 4); return
        elif hi == 6:
            v = r[m_]
            if lo4 == 0: r[n] = s8(rd(v, 1)) & M32; return
            if lo4 == 1: r[n] = s16(rd(v, 2)) & M32; return
            if lo4 == 2: r[n] = rd(v, 4); return
            if lo4 == 3: r[n] = v; return
            if lo4 in (4, 5, 6):
                size = (1, 2, 4)[lo4 - 4]
                x = rd(v, size)
                if n != m_:
                    r[m_] = (v + size) & M32
                r[n] = (s8(x) if size == 1 else s16(x) if size == 2 else x) & M32
                return
            if lo4 == 7: r[n] = ~v & M32; return
            if lo4 == 8: r[n] = (v & 0xFFFF0000) | ((v & 0xFF) << 8) | ((v >> 8) & 0xFF); return
            if lo4 == 9: r[n] = ((v << 16) | (v >> 16)) & M32; return
            if lo4 == 0xa:
                t = int(v != 0 or self.t != 0); r[n] = (-v - self.t) & M32; self.t = t; return
            if lo4 == 0xb: r[n] = (-v) & M32; return
            if lo4 == 0xc: r[n] = v & 0xFF; return
            if lo4 == 0xd: r[n] = v & 0xFFFF; return
            if lo4 == 0xe: r[n] = s8(v & 0xFF) & M32; return
            if lo4 == 0xf: r[n] = s16(v & 0xFFFF) & M32; return
        elif hi == 7:
            r[n] = (r[n] + s8(lo8)) & M32; return
        elif hi == 8:
            d = lo4
            if n == 0: wr(r[m_] + d, 1, r[0]); return
            if n == 1: wr(r[m_] + d * 2, 2, r[0]); return
            if n == 4: r[0] = s8(rd(r[m_] + d, 1)) & M32; return
            if n == 5: r[0] = s16(rd(r[m_] + d * 2, 2)) & M32; return
            if n == 8: self.t = int(r[0] == (s8(lo8) & M32)); return
            if n in (9, 0xb, 0xd, 0xf):
                take = self.t == (1 if n in (9, 0xd) else 0)
                target = (pc + 4 + s8(lo8) * 2) & M32
                if n in (9, 0xb):                                         # bt, bf: no delay slot
                    if in_slot:
                        raise Stop('branch in a delay slot at %08X' % pc)
                    if take:
                        self.go(target, None, pc)
                    return
                if in_slot:
                    raise Stop('branch in a delay slot at %08X' % pc)
                self.step(in_slot=True)
                if take:
                    self.go(target, None, pc)
                return
        elif hi == 9:
            r[n] = s16(rd(pc + 4 + lo8 * 2, 2)) & M32; return
        elif hi == 0xa:
            return branch_slot((pc + 4 + s12(op & 0xFFF) * 2) & M32, None)
        elif hi == 0xb:
            self.pr = (pc + 4) & M32
            return branch_slot((pc + 4 + s12(op & 0xFFF) * 2) & M32, 'call')
        elif hi == 0xc:
            g = self.gbr
            if n == 0: wr(g + lo8, 1, r[0]); return
            if n == 1: wr(g + lo8 * 2, 2, r[0]); return
            if n == 2: wr(g + lo8 * 4, 4, r[0]); return
            if n == 3: raise Stop('trapa #%d at %08X' % (lo8, pc))
            if n == 4: r[0] = s8(rd(g + lo8, 1)) & M32; return
            if n == 5: r[0] = s16(rd(g + lo8 * 2, 2)) & M32; return
            if n == 6: r[0] = rd(g + lo8 * 4, 4); return
            if n == 7: r[0] = ((pc & ~3) + 4 + lo8 * 4) & M32; return
            if n == 8: self.t = int((r[0] & lo8) == 0); return
            if n == 9: r[0] &= lo8; return
            if n == 0xa: r[0] ^= lo8; return
            if n == 0xb: r[0] |= lo8; return
            a = (g + r[0]) & M32
            v = rd(a, 1)
            if n == 0xc: self.t = int((v & lo8) == 0); return
            if n == 0xd: wr(a, 1, v & lo8); return
            if n == 0xe: wr(a, 1, v ^ lo8); return
            if n == 0xf: wr(a, 1, v | lo8); return
        elif hi == 0xd:
            r[n] = rd(((pc & ~3) + 4 + lo8 * 4) & M32, 4); return
        elif hi == 0xe:
            r[n] = s8(lo8) & M32; return
        elif hi == 0xf:
            return self.fpu(op, n, m_, lo4)
        raise Stop('unknown instruction %04X at %08X' % (op, pc))

    def go(self, target, call, at):
        """A taken branch: inside the function, or out of it (a call, a tail jump, the return)."""
        if call == 'rts' or target == SENTINEL:
            if self.inside and target == self.inside[-1]:
                self.inside.pop()                 # a deep callee returned
            self.pc = target
            return
        if self.inside and call != 'call':        # inside a deep callee: its branches are its own
            self.pc = target
            return
        if call in ('call', 'jump') or not (self.lo <= target < self.hi):
            if self.on_call and self.on_call(self, target, call or 'jump', at):
                return
        self.pc = target

    def div1(self, n, m_):
        r = self.r
        oldq = self.q
        self.q = r[n] >> 31
        tmp2 = r[m_]
        r[n] = ((r[n] << 1) | self.t) & M32
        tmp0 = r[n]
        if oldq == 0:
            if self.mq == 0:
                r[n] = (r[n] - tmp2) & M32; tmp1 = int(r[n] > tmp0)
                self.q = tmp1 if self.q == 0 else int(tmp1 == 0)
            else:
                r[n] = (r[n] + tmp2) & M32; tmp1 = int(r[n] < tmp0)
                self.q = int(tmp1 == 0) if self.q == 0 else tmp1
        else:
            if self.mq == 0:
                r[n] = (r[n] + tmp2) & M32; tmp1 = int(r[n] < tmp0)
                self.q = tmp1 if self.q == 0 else int(tmp1 == 0)
            else:
                r[n] = (r[n] - tmp2) & M32; tmp1 = int(r[n] > tmp0)
                self.q = int(tmp1 == 0) if self.q == 0 else tmp1
        self.t = int(self.q == self.mq)

    def fpu(self, op, n, m_, lo4):
        r, rd, wr = self.r, self.m.read, self.m.write
        if op == 0xF3FD:                                                  # fschg
            self.sz ^= 1; return
        if op == 0xFBFD:                                                  # frchg
            self.fr, self.xf = self.xf, self.fr; self.frbit ^= 1; return
        if lo4 == 0xd:
            k = m_
            if k == 0: self.fr[n] = self.fpul; return                    # fsts
            if k == 1: self.fpul = self.fr[n]; return                    # flds
            if k == 2: self.setf(n, float(s32(self.fpul))); return       # float
            if k == 3:                                                    # ftrc
                x = self.f(n)
                if x != x: v = 0x80000000
                elif x >= 2147483648.0: v = 0x7FFFFFFF
                elif x <= -2147483648.0: v = 0x80000000
                else: v = int(x) & M32
                self.fpul = v; return
            if k == 4: self.fr[n] ^= 0x80000000; return                  # fneg
            if k == 5: self.fr[n] &= 0x7FFFFFFF; return                  # fabs
            if k == 6:                                                    # fsqrt
                x = self.f(n)
                self.setf(n, math.sqrt(x) if x >= 0 else float('nan')); return
            if k == 8: self.fr[n] = 0; return                            # fldi0
            if k == 9: self.fr[n] = 0x3F800000; return                   # fldi1
            if k == 7:                                                    # fsrra frn
                x = self.f(n)
                self.setf(n, 1.0 / math.sqrt(x) if x > 0 else float('inf')); return
            if k == 0xf and (n & 1) == 0:                                 # fsca fpul,drn: sine and cosine of an angle in 1/65536 turns
                a = 2.0 * math.pi * (self.fpul & 0xFFFF) / 65536.0
                self.setf(n, math.sin(a)); self.setf(n + 1, math.cos(a)); return
            if k == 0xe:                                                  # fipr fvm,fvn
                vn, vm = (n >> 2) * 4, (n & 3) * 4
                s = sum(self.f(vm + i) * self.f(vn + i) for i in range(4))
                self.setf(vn + 3, s); return
            if k == 0xf and (n & 3) == 1:                                 # ftrv xmtrx,fvn
                vn = (n >> 2) * 4
                v = [self.f(vn + i) for i in range(4)]
                xm = [bits_f(b) for b in self.xf]
                for i in range(4):
                    self.setf(vn + i, sum(xm[i + 4 * j] * v[j] for j in range(4)))
                return
            raise Stop('FPU instruction %04X not implemented (k=%d)' % (op, k))
        if lo4 in (6, 7, 8, 9, 0xa, 0xb, 0xc):
            return self.fmov(op, n, m_, lo4)
        a, b = self.f(n), self.f(m_)
        if lo4 == 0: self.setf(n, a + b); return
        if lo4 == 1: self.setf(n, a - b); return
        if lo4 == 2: self.setf(n, a * b); return
        if lo4 == 3:
            if b == 0:
                self.setf(n, float('nan') if a == 0 or a != a else math.copysign(float('inf'), a) * math.copysign(1, b))
            else:
                self.setf(n, a / b)
            return
        if lo4 == 4: self.t = int(a == b); return
        if lo4 == 5: self.t = int(a > b); return
        if lo4 == 0xe: self.setf(n, self.f(0) * b + a); return            # fmac fr0,frm,frn
        raise Stop('FPU instruction %04X not implemented' % op)

    def fmov(self, op, n, m_, lo4):
        """fmov in both sizes: SZ = 1 moves register pairs (DRn; an odd number names XDn)."""
        r, rd, wr = self.r, self.m.read, self.m.write
        if not self.sz:
            if lo4 == 0xc: self.fr[n] = self.fr[m_]; return
            if lo4 == 8: self.fr[n] = rd(r[m_], 4); return
            if lo4 == 6: self.fr[n] = rd(r[m_] + r[0], 4); return
            if lo4 == 9:
                self.fr[n] = rd(r[m_], 4); r[m_] = (r[m_] + 4) & M32; return
            if lo4 == 0xa: wr(r[n], 4, self.fr[m_]); return
            if lo4 == 7: wr(r[n] + r[0], 4, self.fr[m_]); return
            if lo4 == 0xb:
                r[n] = (r[n] - 4) & M32; wr(r[n], 4, self.fr[m_]); return

        def get(k):                      # pair k: (high word, low word)
            bank = self.xf if k & 1 else self.fr
            return bank[k & 14], bank[(k & 14) + 1]

        def put(k, hi, lo):
            bank = self.xf if k & 1 else self.fr
            bank[k & 14], bank[(k & 14) + 1] = hi, lo

        def load(a):                     # little endian: the low word first in memory
            return rd(a + 4, 4), rd(a, 4)

        def store(a, hi, lo):
            wr(a, 4, lo); wr(a + 4, 4, hi)
        if lo4 == 0xc: put(n, *get(m_)); return
        if lo4 == 8: put(n, *load(r[m_])); return
        if lo4 == 6: put(n, *load(r[m_] + r[0])); return
        if lo4 == 9:
            put(n, *load(r[m_])); r[m_] = (r[m_] + 8) & M32; return
        if lo4 == 0xa: store(r[n], *get(m_)); return
        if lo4 == 7: store(r[n] + r[0], *get(m_)); return
        if lo4 == 0xb:
            r[n] = (r[n] - 8) & M32; store(r[n], *get(m_)); return


def run(case, case_dir='.', code=None, deep=False, entry=None, end=None):
    """Run one case. code = (address, bytes) puts other code (a compiled C unit) at its address;
    entry/end then name the function inside it (default: all of it). deep: True runs every call;
    a function of the target address runs the calls it accepts (the rest return the case's values)."""
    mem = Memory()
    path = lambda p: p if os.path.isabs(p) else os.path.join(case_dir, p)
    if case.get('dump'):
        mem.load(RAM_LO, open(path(case['dump']), 'rb').read())
    if case.get('exe'):
        mem.load(int(case['base'], 16), open(path(case['exe']), 'rb').read())
    if code:
        mem.load(code[0], code[1])
    entry_, end_ = entry, end
    entry = entry_ if entry_ is not None else (code[0] if code else int(case['entry'], 16))
    end = end_ if end_ is not None else (code[0] + len(code[1]) if code else int(case['end'], 16))
    for a, hexbytes in case.get('poke', {}).items():
        mem.load(int(a, 16), bytes.fromhex(hexbytes))
    for a, vals in case.get('seq_reads', {}).items():
        mem.seq_reads[Memory.phys(int(a, 16))] = [int(v, 16) for v in vals]
    for a, vals in case.get('device_reads', {}).items():
        mem.device_reads[Memory.phys(int(a, 16))] = [int(v, 16) for v in vals]
    mem.writes.clear()
    cpu = CPU(mem)
    cpu.lo, cpu.hi = entry, end
    cpu.r[15] = STACK_TOP - 0x100
    if 'sr' in case:                                     # the starting SR (interrupt mask and the rest)
        cpu.set_sr(int(case['sr'], 16))
    for k, v in case.get('regs', {}).items():
        if k.startswith('fr'):
            cpu.fr[int(k[2:])] = f_bits(float(v)) if not isinstance(v, str) else int(v, 16)
        elif k == 'gbr':
            cpu.gbr = int(v, 16)
        elif k == 'vbr':
            cpu.vbr = int(v, 16)
        elif k.startswith('xf'):                          # the back bank (XMTRX) the function starts with
            cpu.xf[int(k[2:])] = f_bits(float(v)) if not isinstance(v, str) else int(v, 16)
        else:
            cpu.r[int(k[1:])] = int(v, 16) & M32
    cpu.pr = SENTINEL
    cpu.pc = entry
    if case.get('trace'):
        cpu.trace = []
    calls = []
    returns = list(case.get('calls', []))
    entry_r15 = cpu.r[15]
    xf_entry = list(cpu.xf)
    given_args = {int(k[1:]) for k in case.get('regs', {}) if re.match(r'r[4-7]$', k)}   # the arguments the case passes in are the function's own
    entry_fargs = [cpu.fr[i] for i in range(4, 12)]   # fr4-fr11 as the case gave them: a float argument register that still holds this was not set by the function
    given_fargs = {int(k[2:]) for k in case.get('regs', {}) if re.match(r'fr(4|5|6|7|8|9|10|11)$', k)}
    entry_args = [cpu.r[i] for i in range(4, 8)]      # r4-r7 as the case gave them: a call's argument register that still holds this was not set by the function

    def on_call(c, target, kind, at):
        if deep is True or (callable(deep) and deep(target)):   # True: every call; a test: those it accepts
            if kind == 'call':
                c.inside.append(c.pr)            # runs until it returns here; not a call out
            return False
        calls.append({'to': '%08X' % (target & M32), 'kind': kind,
                      'r4-r7': ['%08X' % c.r[i] for i in range(4, 8)],
                      'fr4-fr11': ['%08X' % c.fr[i] for i in range(4, 12)],
                      'chg': [i in given_args or c.r[i] != entry_args[i - 4] for i in range(4, 8)],
                      'fchg': [i in given_fargs or c.fr[i] != entry_fargs[i - 4] for i in range(4, 12)],
                      'stack': '%08X' % mem.read(c.r[15] & M32, 4)})   # the word on top of the stack: the first argument of a variadic call
        if not returns:
            c.r[0] = 0                           # a call the case gives no answer for returns 0 (r0 and fr0): a leftover register is not a result, on the original or on the compiled C
            c.fr[0] = 0
        ret = returns.pop(0) if returns else {}
        for k, v in ret.get('poke_arg', {}).items():             # the callee filled an output slot
            mem.load(c.r[int(k[1:])] & M32, bytes.fromhex(v))
        if ret.get('poke_stack'):                                # a structure returned by value: the callee fills the buffer the stack word names
            mem.load(mem.read(c.r[15] & M32, 4) & M32, bytes.fromhex(ret['poke_stack']))
        for k, v in ret.items():
            if k in ('poke_arg', 'poke_stack'):
                continue
            if k.startswith('fr'):
                c.fr[int(k[2:])] = f_bits(float(v)) if not isinstance(v, str) else int(v, 16)
            else:
                c.r[int(k[1:])] = int(v, 16) & M32
        if kind == 'jump':                       # a tail jump: the callee returns for us
            c.pc = c.pr
        else:
            c.pc = c.pr                          # the mocked callee returns at once
        return True
    cpu.on_call = on_call
    limit = case.get('steps', 2000000)
    error = None
    try:
        while cpu.pc != SENTINEL:
            if cpu.steps > limit:
                raise Stop('more than %d instructions' % limit)
            cpu.step()
    except Stop as e:
        error = str(e)
    return {'error': error, 'steps': cpu.steps, 'calls': calls, 'sr': '%08X' % cpu.sr(),
            'writes': [['%08X' % a, s, '%0*X' % (s * 2, v)] for a, s, v in mem.writes],
            'devices': [[k, '%08X' % a, s, '%0*X' % (s * 2, v)] for k, a, s, v in mem.devices],
            'out': {'r0': '%08X' % cpu.r[0], 'r1': '%08X' % cpu.r[1],
                    'fr0': '%08X' % cpu.fr[0], 'fr1': '%08X' % cpu.fr[1]},
            'r15_balanced': cpu.r[15] == entry_r15,
            'xf': ['%08X' % v for v in cpu.xf], 'xf_changed': cpu.xf != xf_entry,
            'covered': sorted(a for a in cpu.covered if entry <= a < end),
            'reads': mem.reads, 'seq_used': dict(mem.seq_used), 'trace': cpu.trace}


def main(argv):
    if len(argv) < 3 or argv[1] != 'run':
        sys.exit(__doc__)
    case_path = argv[2]
    case = json.load(open(case_path))
    code = None
    if '--bytes' in argv:
        code = (int(argv[argv.index('--at') + 1], 16), open(argv[argv.index('--bytes') + 1], 'rb').read())
    res = run(case, os.path.dirname(os.path.abspath(case_path)), code, '--deep' in argv)
    print(json.dumps(res, indent=1))


if __name__ == '__main__':
    main(sys.argv)
