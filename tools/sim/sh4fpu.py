#!/usr/bin/env python3
"""Bit-exact SH-4 (SH7091 / SH7750) FIPR, FTRV, FSCA and FSRRA, for the simulator (sh4sim.py). Stdlib only.

A Python port of sh4_fpu_approx.h by Stefanos Kornilios Mitsis Poiitidis (MIT licence, below), which was verified against
a real Dreamcast with 0 mismatches (FIPR: 37M vectors; FTRV: 524,288 matrices; FSCA: all 65,536 angles; FSRRA: every
positive normal input). Only the values are ported (the plain functions of the header, FPSCR.DN as given), not the FPSCR
cause / flag updates or the traps. The datapath, and why these instructions differ from exact arithmetic:

All four run on one hardware block -- four truncated Booth radix-4 multipliers, an aligner per product, a four-input adder
and one normalise / round stage. FIPR uses it once; FTRV is four FIPRs; FSCA and FSRRA are 4- and 3-step microprograms that
evaluate a cubic around a table node through the same multipliers. A product with a zero operand, or with biased exponents
ea + eb <= 75, contributes +0; with DN = 1 denormal operands are zeros; any NaN operand, inf * 0 or infinities of both
signs give the quiet NaN 7FBFFFFF; FSRRA of +inf is +0, of +-0 or a denormal +-inf, of a negative or a NaN 7FBFFFFF.

Values are IEEE-754 single bit patterns. rz = rounding to zero (FPSCR.RM == 1); dn = FPSCR.DN.

    fipr(fvm, fvn, rz=False, dn=True) -> the word FIPR FVm,FVn writes to FR[n+3]
    ftrv(xmtrx, fv, rz=False, dn=True) -> the four words of FTRV XMTRX,FVn (xmtrx = XF0..XF15, column major)
    fsrra(x, rz=False) -> the word;   fsca(fpul, rz=False) -> (sine, cosine)

--- the licence of sh4_fpu_approx.h ---
The MIT License (MIT)

Copyright (c) 2026 Stefanos Kornilios Mitsis Poiitidis

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy,
modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
"""

QNAN = 0x7FBFFFFF
K = 1 << 19                                  # the rounding constant every product register adds


def _arr(rec, mul):
    """The truncated Booth radix-4 multiplier array (rec = recoded operand, mul = multiplicand), before K."""
    lo = rec & 0x3FFFF                                      # bits 17..0 feed digits 0..8
    slo = lo - (0x40000 if lo & 0x20000 else 0)
    t = (rec - slo) * mul                                   # digits 9 and up: exact
    bits = lo << 1
    m15 = p16 = 0
    for k in range(9):
        d = (bits & 1) + ((bits >> 1) & 1) - 2 * ((bits >> 2) & 1)
        mag = abs(d) * mul
        row = (~mag if d < 0 else mag) * (1 << (2 * k))
        t += (row >> 16) * 65536
        if k < 3:
            m15 += (row >> 15) & 1
        if k >= 6:
            p16 ^= (row >> 16) & 1
        bits >>= 2
    if m15 >= 2:
        t += 65536
    if p16:
        t -= 65536
    return t


def _sm(p, u):
    """The aligner in front of the adder: truncation of a signed product."""
    return p >> u if p >= 0 else -((~p) >> u)


def _dot(mul, rec, rz, dn):
    """One inner product of the four pairs (mul[i], rec[i]), rec Booth-recoded."""
    nan = pinf = ninf = 0
    sign0 = ((mul[0] ^ rec[0]) >> 31) & 1
    prods = []
    for a, b in zip(mul, rec):
        fa, fb = a & 0x7FFFFF, b & 0x7FFFFF
        ea, eb = (a >> 23) & 0xFF, (b >> 23) & 0xFF
        neg = ((a ^ b) >> 31) & 1
        za, zb = ea == 0 and (dn or fa == 0), eb == 0 and (dn or fb == 0)
        ia, ib = ea == 255 and fa == 0, eb == 255 and fb == 0
        if (ea == 255 and fa) or (eb == 255 and fb):
            nan = 1
            continue
        if (ia and zb) or (ib and za):
            nan = 1
            continue
        if ia or ib:
            if neg:
                ninf += 1
            else:
                pinf += 1
            continue
        if za or zb:
            continue
        if ea:
            fa |= 0x800000
        else:
            ea = 1                                          # a DN = 0 denormal: no hidden bit, exponent 1
        if eb:
            fb |= 0x800000
        else:
            eb = 1
        if ea + eb <= 75:
            continue
        p = (_arr(fb, fa) + K) >> 20                        # the 28-bit product register
        if p:
            prods.append((neg, ea + eb, p))
    if pinf and ninf:
        nan = 1
    if nan:
        return QNAN
    if pinf + ninf >= 2:
        return 0xFF800000 if sign0 else 0x7F800000
    if pinf:
        return 0x7F800000
    if ninf:
        return 0xFF800000
    emax = max([e for _, e, _ in prods] or [0])
    s = 0
    for neg, e, p in prods:
        d = emax - e
        x = 0 if d >= 40 else p >> d
        s += -x if neg else x
    if not s:
        return 0
    sign = 1 if s < 0 else 0
    s = abs(s)
    top = s.bit_length() - 1
    e = top + emax - 280 + 127
    sh = top - 23
    if e < 1 and not dn:
        sh += 1 - e                                         # DN = 0: round once at the denormal position
    if sh >= 62:
        q = 0
    elif sh > 0:
        r, h = s & ((1 << sh) - 1), 1 << (sh - 1)
        q = s >> sh
        if not rz:
            q += (r > h) or (r == h and (q & 1))
    else:
        q = s << (-sh)
    if e < 1 and not dn:
        return (sign << 31) | q
    if q >> 24:
        q >>= 1
        e += 1
    if e < 1:
        return sign << 31                                   # DN = 1: underflow -> signed zero
    if e >= 255:
        return (sign << 31) | (0x7F7FFFFF if rz else 0x7F800000)
    return (sign << 31) | (e << 23) | (q & 0x7FFFFF)


def fipr(fvm, fvn, rz=False, dn=True):
    return _dot(list(fvm), list(fvn), rz, dn)


def ftrv(xmtrx, fv, rz=False, dn=True):
    return [_dot(list(fv), [xmtrx[i + 4 * j] for j in range(4)], rz, dn) for i in range(4)]


_FSCA_ROM = [  # (C0, L, E, Q) for word m = sin(m pi / 32)
    (0, 0x000000, 0, 0x000), (6577819, 0x4ED47F, 3, 0x103), (13092290, 0x4E7352, 2, 0x204), (19480674, 0x74BAFB, 2, 0x300),
    (25681450, 0x4CF16D, 1, 0x3F5), (31634899, 0x5EC7AA, 1, 0x4DF), (37283686, 0x6FB43B, 1, 0x5BE), (42573411, 0x7F8D66, 1, 0x68F),
    (47453131, 0x47160C, 0, 0x74F), (51875851, 0x4DB624, 0, 0x7FD), (55798982, 0x5396A4, 0, 0x898), (59184735, 0x58A910, 0, 0x91D),
    (62000504, 0x5CE0E5, 0, 0x98C), (64219180, 0x6033BF, 0, 0x9E4), (65819382, 0x62996B, 0, 0xA23), (66785715, 0x640C00, 0, 0xA49),
    (67108863, 0x6487ED, 0, 0xA56)]
_FSCA_KC = 0x648340


def _fsca_internal(angle):
    a = angle & 0xFFFF
    node = ((a + 512) >> 10) & 63
    r, quad = node & 15, node >> 4
    t = ((a + 512) & 1023) - 512
    swap = quad & 1
    m = 16 - r if swap else r
    w, x = _FSCA_ROM[m], _FSCA_ROM[16 - m]
    dx = t * 8192
    sq = (_arr(dx, dx) + K) >> 23
    t1 = _sm(_arr(x[1], dx) + K, 23 + x[2])
    a3 = (_arr(sq, dx) + K) >> 23
    t3 = _sm(_arr(x[3] * 32, a3) + K, 26)
    i1 = (_arr(_FSCA_KC, dx) + K) >> 23
    j = (_arr(dx, i1) + K) >> 23
    t2 = _sm(_arr(w[1], j) + K, 27 + w[2])
    v = w[0] + (t3 - t1 if swap else t1 - t3) - t2
    return -v if quad & 2 else v


def _fsca_float(v, rz):
    sign = 1 if v < 0 else 0
    mag = abs(v)
    if not mag:
        return 0
    p = mag.bit_length() - 1
    sh = p - 23
    if sh <= 0:
        q = mag << (-sh)
    else:
        rem, half = mag & ((1 << sh) - 1), 1 << (sh - 1)
        q = mag >> sh
        if not rz:
            q += (rem > half) or (rem == half and (q & 1))
            if q >> 24:
                q >>= 1
                p += 1
    return (sign << 31) | ((127 - 26 + p) << 23) | (q & 0x7FFFFF)


def fsca(fpul, rz=False):
    return (_fsca_float(_fsca_internal(fpul), rz), _fsca_float(_fsca_internal(fpul + 0x4000), rz))


_FSRRA_ROM = [  # (C0, REC1, E1, C2F, C3F); index = parity * 17 + node
    (67108864, 0x400000, 2, 12296, 320), (65105160, 0x74DFA6, 1, 10566, 260), (63270842, 0x6B454D, 1, 9159, 212),
    (61583317, 0x62EA16, 1, 8000, 176), (60023991, 0x5B96DF, 1, 7037, 148), (58577421, 0x552032, 1, 6228, 124),
    (57230630, 0x4F6360, 1, 5545, 106), (55972662, 0x4A4474, 1, 4962, 90), (54794160, 0x45ACA4, 1, 4460, 78),
    (53687088, 0x418937, 1, 4029, 68), (52644524, 0x7B9555, 0, 3651, 58), (51660427, 0x74C814, 0, 3323, 52),
    (50729532, 0x6E94E4, 0, 3035, 46), (49847212, 0x68E955, 0, 2779, 40), (49009384, 0x63B5B8, 0, 2553, 36),
    (48212432, 0x5EEC9F, 0, 2352, 32), (47453132, 0x5A8279, 0, 2174, 28),
    (47453132, 0x5A8279, 1, 8695, 226), (46036301, 0x52A463, 1, 7471, 183), (44739243, 0x4BDA13, 1, 6476, 151),
    (43545981, 0x45F16B, 1, 5658, 124), (42443371, 0x40C371, 1, 4976, 104), (41420491, 0x7862D1, 0, 4404, 87),
    (40468166, 0x704598, 0, 3921, 74), (39578650, 0x6907AB, 0, 3508, 63), (38745321, 0x6288D1, 0, 3154, 55),
    (37962507, 0x5CAE91, 0, 2847, 47), (37225301, 0x5762F9, 0, 2581, 41), (36529438, 0x5293B8, 0, 2350, 36),
    (35871196, 0x4E3168, 0, 2146, 32), (35247303, 0x4A2F01, 0, 1965, 28), (34654868, 0x468169, 0, 1805, 25),
    (34091336, 0x431F22, 0, 1664, 22), (33554432, 0x400000, 0, 1537, 20)]


def _fsrra_internal(m, parity):
    node = (m + (1 << 18)) >> 19
    t = m - node * (1 << 19)
    c0, rec1, e1, c2f, c3f = _FSRRA_ROM[(17 if parity else 0) + node]
    dx = t * 16
    sq = (_arr(dx, dx) + K) >> 23
    t1 = _sm(_arr(rec1, dx) + K, 26 - e1)
    t2 = _sm(_arr(c2f * 512, sq) + K, 29)
    i = (_arr(c3f * 256, sq) + K) >> 23
    t3 = _sm(_arr(dx, i) + K, 27)
    return c0 - t1 + t2 - t3


def fsrra(x, rz=False):
    """FSRRA with FPSCR.DN = 1 behaviour for denormals (treated as +-0); no trap taken."""
    sign, exp, man = x >> 31, (x >> 23) & 0xFF, x & 0x7FFFFF
    if exp == 0xFF:
        return QNAN if (man or sign) else 0                 # NaN, -inf -> qNaN; +inf -> +0
    if exp == 0:
        return (sign << 31) | 0x7F800000                    # +-0 and denormals -> +-inf
    if sign:
        return QNAN
    e = exp - 127
    parity = e & 1
    k = (e - parity) // 2
    w = _fsrra_internal(man, parity)
    top = 26 if w >> 26 else 25
    sh = top - 23
    q = w >> sh
    if not rz:
        r, h = w & ((1 << sh) - 1), 1 << (sh - 1)
        q += (r > h) or (r == h and (q & 1))
        if q >> 24:
            q >>= 1
            top += 1
    return ((top - 26 - k + 127) << 23) | (q & 0x7FFFFF)
