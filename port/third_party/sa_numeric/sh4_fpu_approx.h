/*
The MIT License (MIT)

Copyright © 2026 Stefanos Kornilios Mitsis Poiitidis

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/* sh4_fpu_approx.h -- bit-exact models of the SH7091 / SH7750 (SH-4) vector and approximation FPU instructions:
 *     FIPR (inner product), FTRV (matrix x vector), FSCA (sine / cosine), FSRRA (reciprocal square root).
 * Single header, C99, no dependencies.  GENERATED from sh4_fipr.h, sh4_fsca.h and sh4_fsrra.h by tools/make_fpu_approx.py:
 * the instruction code is identical to those headers, with the multiplier shared.  Do not include it together with them
 * (it defines their include guards, so including them AFTER this file is harmless).
 *
 * All four instructions run on ONE hardware block -- four truncated Booth radix-4 multipliers, an aligner per product, a
 * four-input adder and one normalise / round stage (Hitachi US 6,038,582).  FIPR uses it once; FTRV is four FIPRs; FSCA and
 * FSRRA are 4- and 3-step microprograms that evaluate a cubic around a table node through the SAME multipliers, feeding
 * product registers back as operands.  That is why one array model, below, serves all of them.
 *
 *     uint32_t sh4_fipr (fvm[4], fvn[4], rz)                 int sh4_fipr_ex (fvm, fvn, &fpscr, &r)
 *     void     sh4_ftrv (xmtrx[16], fv[4], rz)               int sh4_ftrv_ex (xmtrx, fv, &fpscr)
 *     void     sh4_fsca (fpul, rz, &sin, &cos)               int sh4_fsca_ex (fpul, &fpscr, &sin, &cos)
 *     uint32_t sh4_fsrra(x, rz)                              int sh4_fsrra_ex(x, &fpscr, &r)
 * Values are IEEE-754 bit patterns; rz = (FPSCR.RM == 1).  The plain functions return the value (FPSCR.DN = 1 behaviour,
 * no trap taken).  The _ex functions implement the measured FPSCR semantics -- cause field rewritten, flag field OR-ed,
 * DN, PR -- and return 1 when the instruction raises an FPU exception trap, leaving the destination untouched.
 *
 * Everything here was verified against a real Dreamcast with 0 mismatches; the per-instruction sections say on what.
 * In short, which enables make each instruction trap UNCONDITIONALLY (PR = 0 / PR = 1, where all four are no-ops):
 *     FSRRA  I / I       FSCA  I / I       FIPR  O,U,I / I       FTRV  V,O,U,I / V,O,U,I
 */
#ifndef SH4_FPU_APPROX_H
#define SH4_FPU_APPROX_H

#if defined(SH4_FIPR_H) || defined(SH4_FSCA_H) || defined(SH4_FSRRA_H)
#error "include sh4_fpu_approx.h INSTEAD of sh4_fipr.h / sh4_fsca.h / sh4_fsrra.h (or before them)"
#endif
#define SH4_FIPR_H
#define SH4_FSCA_H
#define SH4_FSRRA_H

#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ---------------------------------------------------------------------------------------------------------
 * The shared core. */

/* arithmetic shift right that does not rely on implementation-defined behaviour */
static inline int64_t sh4_fpu__asr(int64_t x, int n) { return x < 0 ? ~(~x >> n) : x >> n; }

/* The truncated Booth radix-4 multiplier array, before the rounding constant 2^19 that every product register adds.
 * rec = recoded operand (28 bits signed), mul = multiplicand (25 bits signed).  Partial-product rows are cut below column
 * 16, a negative row is a one's complement whose hot one is only present from column 18 up, rows 0-2 contribute a majority
 * carry from column 15 and rows 6-8 lose the parity of their column-16 bits.  Rows 9 and up are therefore exact and are
 * taken as one ordinary product.  Not monotone in rec. */
static inline int64_t sh4_fpu__arr(int64_t rec, int64_t mul) {
    uint32_t lo = (uint32_t)rec & 0x3ffffu;                          /* bits 17..0 feed digits 0..8 */
    int64_t  slo = (int64_t)lo - ((lo & 0x20000u) ? 0x40000 : 0);    /* value of digits 0..8 = signed low 18 bits */
    int64_t  T = (rec - slo) * mul;                                  /* digits 9..13: exact */
    uint32_t bits = lo << 1;                                         /* bit -1 = 0 */
    int m15 = 0, p16 = 0, k;
    for (k = 0; k < 9; k++, bits >>= 2) {
        int d = (int)(bits & 1u) + (int)((bits >> 1) & 1u) - 2 * (int)((bits >> 2) & 1u);
        int64_t mag = (int64_t)(d < 0 ? -d : d) * mul;
        int64_t row = (d < 0 ? ~mag : mag) * ((int64_t)1 << (2 * k));
        T += sh4_fpu__asr(row, 16) * 65536;
        if (k < 3)  m15 += (int)(sh4_fpu__asr(row, 15) & 1);
        if (k >= 6) p16 ^= (int)(sh4_fpu__asr(row, 16) & 1);
    }
    if (m15 >= 2) T += 65536;
    if (p16)      T -= 65536;
    return T;
}

/* the aligner in front of the four-input adder: truncation of a signed product, "every negative input gets a hot one" */
static inline int64_t sh4_fpu__sm(int64_t P, int u) { return P >= 0 ? (P >> u) : -((~P) >> u); }

/* ---------------------------------------------------------------------------------------------------------
 * FIPR / FTRV -- bit-exact SH7091 / SH7750 (SH-4) FIPR (4-element inner product) and FTRV (4x4 matrix times vector).
 *
 *     uint32_t sh4_fipr(const uint32_t fvm[4], const uint32_t fvn[4], int round_to_zero);           value, FPSCR.DN = 1
 *     int      sh4_fipr_ex(const uint32_t fvm[4], const uint32_t fvn[4], uint32_t *fpscr, uint32_t *r);   full semantics
 *     void     sh4_ftrv(const uint32_t xmtrx[16], uint32_t fv[4], int round_to_zero);               in place, FPSCR.DN = 1
 *     int      sh4_ftrv_ex(const uint32_t xmtrx[16], uint32_t fv[4], uint32_t *fpscr);              full semantics
 *     float    sh4_fipr_f(const float fvm[4], const float fvn[4], int round_to_zero);               convenience wrapper
 *
 * All values are IEEE-754 bit patterns.  `FIPR FVm,FVn` writes its result to the LAST element of FVn (FR[n+3]).
 * `FTRV XMTRX,FVn`: xmtrx[0..15] = XF0..XF15 (column major), result[i] = sum_j xmtrx[4j + i] * fv[j].
 * round_to_zero = (FPSCR.RM == 1).
 *
 * VERIFIED against real hardware (Dreamcast), 0 mismatches:
 *   - FIPR values, DN = 1: 32M vectors (mantissa sweeps, random single / two / four products, alignment sweeps) and 5.2M edge
 *     vectors (exponent extremes, signed zeros, cancellation, infinities, NaNs, denormals), each in RN and RZ
 *   - FIPR values, DN = 0: 1M vectors with denormal operands and results in the underflow range, RN and RZ
 *   - FTRV values: 524,288 matrices x 4 rows, RN and RZ
 *   - FPSCR behaviour: 1,736 FIPR and 427 FTRV measured cases (special operands x DN x RM x exception enables, preset
 *     cause / flag fields, PR = 1, SZ = 1, the infinity sign quirk): result, FPSCR after, trap / no trap
 *
 * What the silicon does: each product is formed by a 24 x 24 -> 28-bit truncated Booth radix-4 multiplier that recodes the
 * FVn operand (for FTRV: the MATRIX element; the vector element is the multiplicand).  Partial-product rows are cut below
 * column 16 of the 48-bit product, a negative row is a one's complement whose hot one survives only from column 18 up,
 * rows 0-2 add a majority carry from column 15, rows 6-8 lose the parity of their column-16 bits, 2^19 is added and the
 * low 20 bits dropped.  The four 28-bit products are aligned to the largest product exponent by truncation (no guard
 * bits), added exactly, and the sum is rounded ONCE: to nearest-even with sticky, or truncated.  FTRV is four such inner
 * products.  Operand classes:
 *   - a product with a zero operand, or with biased exponents ea + eb <= 75, is discarded (contributes +0);
 *   - DN = 1: denormal operands are zeros, and a result below the normal range is a signed zero;
 *     DN = 0: a denormal operand enters the multiplier as it is (no hidden bit, exponent 1) -- there is NO FPU-error trap --
 *     and a result below the normal range is a denormal, rounded once at its own position;
 *   - any NaN operand, inf * 0, or infinities of both signs -> qNaN 0x7fbfffff; one infinity keeps its sign; two or more
 *     infinities of the same sign take the sign of product 0, whatever that product is (a hardware quirk, measured for
 *     both instructions; for FTRV product 0 is the j = 0 term); an exact zero sum is +0;
 *   - overflow -> +-inf when rounding to nearest, +-0x7f7fffff when rounding to zero.
 * Measured FPSCR behaviour (the cause field is rewritten, the flag field is sticky; on a trap the destination is left
 * unchanged while cause and flag are still updated):
 *   - a finite computation ALWAYS raises I, plus U when the result's exponent field is 0 (any zero or denormal result, even
 *     0 * 0), plus O on overflow; a signalling NaN operand (mantissa bit 22 = 1), inf * 0 or inf - inf raises V; a quiet
 *     NaN or an infinity passing through raises nothing.  FTRV raises the OR over its four rows.
 *   - FIPR traps on V only when V is raised, but UNCONDITIONALLY when any of the O, U, I enables is set.  FTRV traps
 *     unconditionally when any of the V, O, U, I enables is set.  The Z enable does nothing.
 *   - FPSCR.PR = 1: both instructions do nothing at all (destination, cause and flag fields untouched); FIPR then traps
 *     only if the I enable is set, FTRV still on any of V, O, U, I.  SZ has no effect.
 * Derivation: shrike4-rtl/model/fipr/README.md and hw_specials/.
 */
/* One inner product.  mul[0], mul[ms], .. are the multiplicand operands (FIPR: FVm; FTRV: the vector), rec[0], rec[rs], ..
 * the Booth-recoded ones (FIPR: FVn; FTRV: a matrix row).  dn = FPSCR.DN.  *cause receives the cause bits this inner
 * product raises, as I = 1, U = 2, O = 4, V = 16. */
static inline uint32_t sh4_fipr__dot(const uint32_t *mul, int ms, const uint32_t *rec, int rs, int round_to_zero, int dn, uint32_t *cause) {
    int nan = 0, invalid = 0, pinf = 0, ninf = 0, n = 0, i, sign0 = (int)(((mul[0] ^ rec[0]) >> 31) & 1u);
    int psign[4], pexp[4]; int64_t pval[4];
    for (i = 0; i < 4; i++) {
        uint32_t a = mul[i * ms], b = rec[i * rs], fa = a & 0x7fffffu, fb = b & 0x7fffffu;
        int ea = (int)((a >> 23) & 0xffu), eb = (int)((b >> 23) & 0xffu), neg = (int)(((a ^ b) >> 31) & 1u);
        int za = ea == 0 && (dn || fa == 0), zb = eb == 0 && (dn || fb == 0);
        int ia = ea == 255 && fa == 0, ib = eb == 255 && fb == 0, na = ea == 255 && fa != 0, nb = eb == 255 && fb != 0;
        if (na || nb) { nan = 1; if ((na && (fa & 0x400000u)) || (nb && (fb & 0x400000u))) invalid = 1; continue; }
        if ((ia && zb) || (ib && za)) { nan = 1; invalid = 1; continue; }
        if (ia || ib) { if (neg) ninf++; else pinf++; continue; }
        if (za || zb) continue;
        if (!ea) ea = 1; else fa |= 0x800000u;                       /* a DN = 0 denormal: no hidden bit, exponent 1 */
        if (!eb) eb = 1; else fb |= 0x800000u;
        if (ea + eb <= 75) continue;
        { int64_t p = (sh4_fpu__arr((int64_t)fb, (int64_t)fa) + ((int64_t)1 << 19)) >> 20;   /* the 28-bit product register */
          if (!p) continue;
          psign[n] = neg; pexp[n] = ea + eb; pval[n] = p; n++; }
    }
    if (pinf && ninf) { nan = 1; invalid = 1; }
    if (nan)  { *cause = invalid ? 16u : 0u; return 0x7fbfffffu; }
    if (pinf + ninf >= 2) { *cause = 0u; return sign0 ? 0xff800000u : 0x7f800000u; }
    if (pinf) { *cause = 0u; return 0x7f800000u; }
    if (ninf) { *cause = 0u; return 0xff800000u; }
    { int emax = 0, top = 0, sh, e; int64_t S = 0, q; uint32_t sign;
      for (i = 0; i < n; i++) if (pexp[i] > emax) emax = pexp[i];
      for (i = 0; i < n; i++) { int d = emax - pexp[i]; int64_t x = d >= 40 ? 0 : (pval[i] >> d); S += psign[i] ? -x : x; }
      if (!S) { *cause = 1u | 2u; return 0u; }                       /* exact zero: +0, inexact and underflow raised */
      sign = S < 0 ? 1u : 0u; if (S < 0) S = -S;
      while ((S >> (top + 1)) != 0) top++;
      e = top + emax - 280 + 127;                                    /* biased exponent before rounding */
      sh = top - 23; if (e < 1 && !dn) sh += 1 - e;                  /* DN = 0: round once at the denormal position */
      if (sh >= 62) q = 0;
      else if (sh > 0) { int64_t r = S & (((int64_t)1 << sh) - 1), h = (int64_t)1 << (sh - 1); q = S >> sh; if (!round_to_zero) q += (r > h) || (r == h && (q & 1)); }
      else q = S * ((int64_t)1 << (-sh));
      if (e < 1 && !dn) { *cause = 1u | 2u; return (sign << 31) | (uint32_t)q; }   /* denormal (a carry to 2^23 is the smallest normal) */
      if (q >> 24) { q >>= 1; e++; }
      if (e < 1)    { *cause = 1u | 2u; return sign << 31; }         /* DN = 1: underflow -> signed zero */
      if (e >= 255) { *cause = 1u | 4u; return (sign << 31) | (round_to_zero ? 0x7f7fffffu : 0x7f800000u); }
      *cause = 1u; return (sign << 31) | ((uint32_t)e << 23) | ((uint32_t)q & 0x7fffffu); }
}

/* cause bits (I1 U2 O4 Z8 V16 E32) -> FPSCR: cause field rewritten, flags OR-ed in */
static inline uint32_t sh4_fipr__fpscr(uint32_t f, uint32_t cause) { return (f & ~(0x3fu << 12)) | (cause << 12) | ((cause & 0x1fu) << 2); }

static inline uint32_t sh4_fipr(const uint32_t fvm[4], const uint32_t fvn[4], int round_to_zero) {
    uint32_t cause; return sh4_fipr__dot(fvm, 1, fvn, 1, round_to_zero, 1, &cause); }

/* Full semantics.  Returns 1 when an FPU exception trap (EXPEVT 0x120) is taken: FR[n+3] must then be left unchanged (*r is
 * not written) and the updated *fpscr is what the handler sees.  With PR = 1 nothing is written, *fpscr included. */
static inline int sh4_fipr_ex(const uint32_t fvm[4], const uint32_t fvn[4], uint32_t *fpscr, uint32_t *r) {
    uint32_t f = *fpscr, en = (f >> 7) & 0x1fu, cause, res;
    if (f & (1u << 19)) return (int)(en & 1u);
    res = sh4_fipr__dot(fvm, 1, fvn, 1, (f & 3u) == 1u, (int)((f >> 18) & 1u), &cause);
    *fpscr = sh4_fipr__fpscr(f, cause);
    if ((en & (1u | 2u | 4u)) || (en & cause & 16u)) return 1;
    *r = res; return 0;
}

static inline void sh4_ftrv(const uint32_t xmtrx[16], uint32_t fv[4], int round_to_zero) {
    uint32_t cause, out[4]; int i;
    for (i = 0; i < 4; i++) out[i] = sh4_fipr__dot(fv, 1, xmtrx + i, 4, round_to_zero, 1, &cause);
    for (i = 0; i < 4; i++) fv[i] = out[i];
}

/* Full semantics; fv[] is left unchanged when 1 (trap) is returned, and always when PR = 1. */
static inline int sh4_ftrv_ex(const uint32_t xmtrx[16], uint32_t fv[4], uint32_t *fpscr) {
    uint32_t f = *fpscr, en = (f >> 7) & 0x1fu, cause = 0, c, out[4]; int i, trap = (en & (1u | 2u | 4u | 16u)) != 0;
    if (f & (1u << 19)) return trap;
    for (i = 0; i < 4; i++) { out[i] = sh4_fipr__dot(fv, 1, xmtrx + i, 4, (f & 3u) == 1u, (int)((f >> 18) & 1u), &c); cause |= c; }
    *fpscr = sh4_fipr__fpscr(f, cause);
    if (trap) return 1;
    for (i = 0; i < 4; i++) fv[i] = out[i];
    return 0;
}

static inline float sh4_fipr_f(const float fvm[4], const float fvn[4], int round_to_zero) {
    uint32_t a[4], b[4], rb; float r;
    memcpy(a, fvm, sizeof a); memcpy(b, fvn, sizeof b); rb = sh4_fipr(a, b, round_to_zero); memcpy(&r, &rb, sizeof r);
    return r;
}

/* ---------------------------------------------------------------------------------------------------------
 * FSCA -- bit-exact SH7091 / SH7750 (SH-4) FSCA: single-precision sine and cosine of a 16-bit angle (FSCA FPUL,DRn).
 *
 *     void     sh4_fsca(uint32_t fpul, int round_to_zero, uint32_t *sin_bits, uint32_t *cos_bits);   values only
 *     uint32_t sh4_fsca_sin(uint32_t fpul, int round_to_zero);   uint32_t sh4_fsca_cos(uint32_t fpul, int round_to_zero);
 *     int      sh4_fsca_ex(uint32_t fpul, uint32_t *fpscr, uint32_t *sin_bits, uint32_t *cos_bits);  FPSCR update, traps
 *     void     sh4_fsca_f(uint32_t fpul, int round_to_zero, float *s, float *c);                     convenience wrapper
 *
 * The angle is FPUL[15:0] in units of 2 pi / 65536; FPUL[31:16] is ignored by the hardware.  Results are IEEE-754 bit
 * patterns (sine -> FRn, cosine -> FRn+1).  round_to_zero = (FPSCR.RM == 1).
 *
 * VERIFIED against real hardware (Dreamcast), 0 mismatches:
 *   - all 65,536 angles x {sine, cosine} x {round to nearest, round to zero}, strict 32-bit equality (signed zeros included)
 *   - FPSCR behaviour: 97 measured cases (enables x RM x angles, preset cause / flag fields, PR = 1, SZ = 1), FPSCR after and
 *     trap / no trap; FPUL[31:16] ignored: 0 differences over all angles for four upper-bit patterns.
 *
 * Measured FPSCR behaviour: FSCA has no special operands.  It ALWAYS raises inexact (cause I and flag I, also for angle 0);
 * the cause field is rewritten, the flag field is sticky.  It traps if and only if the inexact enable (FPSCR bit 7) is set,
 * leaving both destination registers unchanged (cause and flag are still updated); the other enables do nothing.  With
 * FPSCR.PR = 1 the instruction does nothing at all -- registers, cause and flag fields untouched -- but still traps if the
 * inexact enable is set.  DN and SZ have no effect.
 *
 * What the silicon does (a model of the datapath, not a fit): FSCA is a 4-step microprogram on the FIPR multiplier block
 * (sine after three multiply steps, cosine one step later reusing the two held latches).  The turn is cut into 64 nodes,
 *     node = (angle + 512) >> 10,   t = angle - 1024 * node  (signed, -512..511, from the node CENTRE),   dx = t << 13,
 * and a cubic around the node centre is evaluated on a 2^-26 grid.  The coefficient ROM has 17 words, word m holding values
 * derived from sin(m pi/32) only:  C0 (26 bits), L = sin * pi/2 as a 23-bit normalised field with a 2-bit exponent E, and
 * Q = sin * 2646 (12 bits).  With r = node[3:0] and q = node[5:4], an instruction reads word r and word 16-r: in an odd
 * quadrant (q[0]) the two swap roles and the odd terms change sign, in the second half turn (q[1]) the result is negated;
 * the cosine is the sine of angle + 0x4000 and uses the same two words the other way round.  For the sine at word m
 * (the "own" word W = ROM[m], the complementary word X = ROM[16-m], s = +-1):
 *     sq = (arr(dx, dx) + K) >> 23                       the square latch, exactly 8 t^2
 *     T1 = sm(arr(X.L, dx) + K, 23 + X.E)                linear : cos * (pi/2) dx
 *     A3 = (arr(sq, dx) + K) >> 23 ;  T3 = sm(arr(X.Q << 5, A3) + K, 26)          cubic
 *     I1 = (arr(KC, dx) + K) >> 23 ;  J = (arr(dx, I1) + K) >> 23                 KC = 0x648340 ~ economised 4 pi
 *     T2 = sm(arr(W.L, J) + K, 27 + W.E)                 even term: the OWN word's linear field, there is no separate sine field
 *     V  = W.C0 + s * T1 - T2 - s * T3
 * arr(rec, mul) is the truncated FIPR Booth array, K = 2^19 is added into every product register, every feedback latch is
 * the product register >> 3, and sm(P, u) = (P >> u) + (P < 0) is the aligner's truncation.  The result is V without its
 * guard bits: truncated, or rounded to nearest-even.  Derivation: shrike4-rtl/model/fsca/NOTES.md.
 */
typedef struct { uint32_t c0, l; int e; uint32_t q; } sh4_fsca_word_t;

/* the coefficient ROM, word m = values derived from sin(m pi/32).  L, E and Q follow closed rules (L = the 23-bit
 * round-to-nearest normalised field of sin * pi/2, Q = RN(sin * 2646)); C0 is the hardware's own value at the node centre
 * (RN(sin * 2^26) within a few units -- its generation rule is not known). */
static const sh4_fsca_word_t sh4_fsca_rom[17] = {
    {        0UL, 0x000000UL, 0, 0x000U },  /* word  0 : sin( 0 pi/32) */
    {  6577819UL, 0x4ed47fUL, 3, 0x103U },  /* word  1 : sin( 1 pi/32) */
    { 13092290UL, 0x4e7352UL, 2, 0x204U },  /* word  2 : sin( 2 pi/32) */
    { 19480674UL, 0x74bafbUL, 2, 0x300U },  /* word  3 : sin( 3 pi/32) */
    { 25681450UL, 0x4cf16dUL, 1, 0x3f5U },  /* word  4 : sin( 4 pi/32) */
    { 31634899UL, 0x5ec7aaUL, 1, 0x4dfU },  /* word  5 : sin( 5 pi/32) */
    { 37283686UL, 0x6fb43bUL, 1, 0x5beU },  /* word  6 : sin( 6 pi/32) */
    { 42573411UL, 0x7f8d66UL, 1, 0x68fU },  /* word  7 : sin( 7 pi/32) */
    { 47453131UL, 0x47160cUL, 0, 0x74fU },  /* word  8 : sin( 8 pi/32) */
    { 51875851UL, 0x4db624UL, 0, 0x7fdU },  /* word  9 : sin( 9 pi/32) */
    { 55798982UL, 0x5396a4UL, 0, 0x898U },  /* word 10 : sin(10 pi/32) */
    { 59184735UL, 0x58a910UL, 0, 0x91dU },  /* word 11 : sin(11 pi/32) */
    { 62000504UL, 0x5ce0e5UL, 0, 0x98cU },  /* word 12 : sin(12 pi/32) */
    { 64219180UL, 0x6033bfUL, 0, 0x9e4U },  /* word 13 : sin(13 pi/32) */
    { 65819382UL, 0x62996bUL, 0, 0xa23U },  /* word 14 : sin(14 pi/32) */
    { 66785715UL, 0x640c00UL, 0, 0xa49U },  /* word 15 : sin(15 pi/32) */
    { 67108863UL, 0x6487edUL, 0, 0xa56U },  /* word 16 : sin(16 pi/32) */
};
#define SH4_FSCA_KC 0x648340L   /* global constant of the even term: 102925 << 6, ~ economised 4 pi at scale 2^19 */




/* signed internal value V of the SINE on the 2^-26 grid, |V| <= 2^26 - 1 */
static inline int64_t sh4_fsca_internal(uint32_t angle) {
    const int64_t K = (int64_t)1 << 19;
    uint32_t a = angle & 0xffffu, node = ((a + 512u) >> 10) & 63u, r = node & 15u, quad = node >> 4;
    int t = (int)((a + 512u) & 1023u) - 512;
    int swap = (int)(quad & 1u), m = swap ? 16 - (int)r : (int)r;
    const sh4_fsca_word_t *W = &sh4_fsca_rom[m], *X = &sh4_fsca_rom[16 - m];
    int64_t dx = (int64_t)t * 8192;
    int64_t sq = sh4_fpu__asr(sh4_fpu__arr(dx, dx) + K, 23);
    int64_t T1 = sh4_fpu__sm(sh4_fpu__arr((int64_t)X->l, dx) + K, 23 + X->e);
    int64_t A3 = sh4_fpu__asr(sh4_fpu__arr(sq, dx) + K, 23);
    int64_t T3 = sh4_fpu__sm(sh4_fpu__arr((int64_t)X->q * 32, A3) + K, 26);
    int64_t I1 = sh4_fpu__asr(sh4_fpu__arr((int64_t)SH4_FSCA_KC, dx) + K, 23);
    int64_t J  = sh4_fpu__asr(sh4_fpu__arr(dx, I1) + K, 23);
    int64_t T2 = sh4_fpu__sm(sh4_fpu__arr((int64_t)W->l, J) + K, 27 + W->e);
    int64_t V  = (int64_t)W->c0 + (swap ? T3 - T1 : T1 - T3) - T2;
    return (quad & 2u) ? -V : V;
}

/* V * 2^-26 as a float: truncated, or rounded to nearest-even.  A zero result is +0 at both zero crossings. */
static inline uint32_t sh4_fsca__to_float(int64_t V, int round_to_zero) {
    uint32_t sign = V < 0 ? 1u : 0u; uint64_t mag = (uint64_t)(V < 0 ? -V : V), q; int p = 0, sh;
    if (!mag) return 0u;
    while ((mag >> (p + 1)) != 0) p++;
    sh = p - 23;
    if (sh <= 0) q = mag << (-sh);
    else { uint64_t rem = mag & (((uint64_t)1 << sh) - 1), half = (uint64_t)1 << (sh - 1); q = mag >> sh;
        if (!round_to_zero) { q += (rem > half) || (rem == half && (q & 1)); if (q >> 24) { q >>= 1; p++; } } }
    return (sign << 31) | ((uint32_t)(127 - 26 + p) << 23) | ((uint32_t)q & 0x7fffffu);
}

static inline uint32_t sh4_fsca_sin(uint32_t fpul, int round_to_zero) { return sh4_fsca__to_float(sh4_fsca_internal(fpul), round_to_zero); }
static inline uint32_t sh4_fsca_cos(uint32_t fpul, int round_to_zero) { return sh4_fsca__to_float(sh4_fsca_internal(fpul + 0x4000u), round_to_zero); }
static inline void sh4_fsca(uint32_t fpul, int round_to_zero, uint32_t *sin_bits, uint32_t *cos_bits) {
    *sin_bits = sh4_fsca_sin(fpul, round_to_zero); *cos_bits = sh4_fsca_cos(fpul, round_to_zero); }

/* Full semantics.  *fpscr is read (RM, inexact enable, PR) and updated (cause field rewritten to I, flag I OR-ed in).
 * Returns 1 when an FPU exception trap (EXPEVT 0x120) is taken, and leaves *sin_bits / *cos_bits untouched, as the
 * hardware leaves FRn / FRn+1; the updated *fpscr is what the handler sees.  Returns 0 otherwise with both results written.
 * With FPSCR.PR = 1 nothing is written at all, *fpscr included; the return value is still the inexact enable. */
static inline int sh4_fsca_ex(uint32_t fpul, uint32_t *fpscr, uint32_t *sin_bits, uint32_t *cos_bits) {
    uint32_t f = *fpscr; int trap = (int)((f >> 7) & 1u);
    if (f & (1u << 19)) return trap;
    *fpscr = (f & ~(0x3fu << 12)) | (1u << 12) | (1u << 2);
    if (trap) return 1;
    sh4_fsca(fpul, (f & 3u) == 1u, sin_bits, cos_bits);
    return 0;
}

static inline void sh4_fsca_f(uint32_t fpul, int round_to_zero, float *s, float *c) {
    uint32_t sb, cb; sh4_fsca(fpul, round_to_zero, &sb, &cb); memcpy(s, &sb, sizeof sb); memcpy(c, &cb, sizeof cb);
}

/* ---------------------------------------------------------------------------------------------------------
 * FSRRA -- bit-exact SH7091 / SH7750 (SH-4) FSRRA: single-precision 1/sqrt(x).  Single header, C99, no dependencies.
 *
 *     uint32_t sh4_fsrra(uint32_t x_bits, int round_to_zero);             value only; IEEE-754 bit patterns in and out
 *     int      sh4_fsrra_ex(uint32_t x_bits, uint32_t *fpscr, uint32_t *r);  full semantics: FPSCR cause/flag update, traps
 *     float    sh4_fsrra_f(float x, int round_to_zero);                    convenience wrapper
 *
 * round_to_zero = (FPSCR.RM == 1).
 *
 * VERIFIED against real hardware (Dreamcast), 0 mismatches:
 *   - every positive normal input, round to nearest: 2,130,706,432 inputs (the capture's own damaged words excluded)
 *   - every input of [1,4) in round to zero (full result words) and in round to nearest: 16,777,216 inputs each
 *   - special operands and FPSCR behaviour: 854 measured cases (hw_specials/fpu_specials*.txt: zeros, denormals, infinities,
 *     quiet / signalling NaNs of both signs, negative and extreme normals x DN x RM x exception enables, preset
 *     cause / flag fields, PR = 1, SZ = 1), result word, FPSCR after, and trap / no trap.
 *
 * Measured behaviour of the special cases (it differs from a plain reading of the manual in places):
 *   operand                          result        cause / flag      notes
 *   positive normal                  1/sqrt        I                 ALWAYS inexact, also for 1.0, 4.0, 0.25
 *   +-0                              +-inf         Z                 -0 gives -inf, not invalid
 *   denormal, DN = 1                 +-inf         Z                 treated as +-0, sign kept
 *   positive denormal, DN = 0        (unchanged)   E                 FPU error: always traps, no flag
 *   negative denormal, DN = 0        qNaN          V
 *   negative normal, -inf            qNaN          V
 *   +inf                             +0            none              not even inexact
 *   NaN with mantissa bit 22 = 0     qNaN          none              quiet; sign and payload are NOT propagated
 *   NaN with mantissa bit 22 = 1     qNaN          V                 signalling (SH-4 convention)
 *   qNaN is always 0x7fbfffff.  The cause field is rewritten by every FSRRA, the flag field is sticky (OR).
 *   Traps (the destination register is left unchanged, cause AND flag are still updated): E always; V / Z when their enable
 *   bit is set; and ALWAYS when the inexact enable (FPSCR bit 7) is set -- for every operand, even +inf and quiet NaNs where
 *   no cause bit is raised.  The overflow / underflow enables do nothing.  RM and SZ never matter for the special cases.
 *   FPSCR.PR = 1: the instruction does nothing at all -- register, cause and flag fields untouched -- but still traps if the
 *   inexact enable is set.  (FSCA behaves the same way: always inexact, traps on the inexact enable, no-op with PR = 1, and
 *   it ignores the upper 16 bits of FPUL.)
 *
 * What the silicon does (this is a model of the datapath, not a fit): FSRRA is a 3-step microprogram on the FIPR
 * multiplier block.  The 23-bit mantissa m is split around the nearest of 17 nodes per exponent parity,
 *     node = (m + 2^18) >> 19,   t = m - node * 2^19  (signed, 19 bits),   dx = t << 4,   word = ROM[parity * 17 + node]
 * and a cubic is evaluated on a 2^-26 grid, every product through the same truncated Booth array arr(rec, mul) with the
 * rounding constant K = 2^19 added into its product register:
 *     sq = (arr(dx, dx) + K) >> 23                 one square latch, shared by the two terms below
 *     T1 = sm(arr(REC1, dx) + K, 26 - E1)          REC1: 23-bit normalised field with a 2-bit exponent E1
 *     T2 = sm(arr(C2F << 9, sq) + K, 29)           C2F : 14-bit fixed-point field
 *     I  = (arr(C3F << 8, sq) + K) >> 23           C3F :  9-bit fixed-point field
 *     T3 = sm(arr(dx, I) + K, 27)
 *     W  = C0 - T1 + T2 - T3                       sm(P, u) = (P >> u) + (P < 0): the aligner's truncation
 * The result mantissa is W without its two guard bits: truncated, or rounded to nearest-even on those two bits.
 * The result exponent depends only on the input exponent.  Derivation: shrike4-rtl/model/fsrra/NOTES.md.
 */
typedef struct { uint32_t c0, rec1; int e1; uint32_t c2f, c3f; } sh4_fsrra_word_t;

/* the coefficient ROM: index = parity * 17 + node; every field is pinned to its last bit by the hardware captures */
static const sh4_fsrra_word_t sh4_fsrra_rom[34] = {
    {  67108864UL, 0x400000UL, 2, 12296, 320 },  /* parity 0 node  0 */
    {  65105160UL, 0x74dfa6UL, 1, 10566, 260 },  /* parity 0 node  1 */
    {  63270842UL, 0x6b454dUL, 1,  9159, 212 },  /* parity 0 node  2 */
    {  61583317UL, 0x62ea16UL, 1,  8000, 176 },  /* parity 0 node  3 */
    {  60023991UL, 0x5b96dfUL, 1,  7037, 148 },  /* parity 0 node  4 */
    {  58577421UL, 0x552032UL, 1,  6228, 124 },  /* parity 0 node  5 */
    {  57230630UL, 0x4f6360UL, 1,  5545, 106 },  /* parity 0 node  6 */
    {  55972662UL, 0x4a4474UL, 1,  4962,  90 },  /* parity 0 node  7 */
    {  54794160UL, 0x45aca4UL, 1,  4460,  78 },  /* parity 0 node  8 */
    {  53687088UL, 0x418937UL, 1,  4029,  68 },  /* parity 0 node  9 */
    {  52644524UL, 0x7b9555UL, 0,  3651,  58 },  /* parity 0 node 10 */
    {  51660427UL, 0x74c814UL, 0,  3323,  52 },  /* parity 0 node 11 */
    {  50729532UL, 0x6e94e4UL, 0,  3035,  46 },  /* parity 0 node 12 */
    {  49847212UL, 0x68e955UL, 0,  2779,  40 },  /* parity 0 node 13 */
    {  49009384UL, 0x63b5b8UL, 0,  2553,  36 },  /* parity 0 node 14 */
    {  48212432UL, 0x5eec9fUL, 0,  2352,  32 },  /* parity 0 node 15 */
    {  47453132UL, 0x5a8279UL, 0,  2174,  28 },  /* parity 0 node 16 */
    {  47453132UL, 0x5a8279UL, 1,  8695, 226 },  /* parity 1 node  0 */
    {  46036301UL, 0x52a463UL, 1,  7471, 183 },  /* parity 1 node  1 */
    {  44739243UL, 0x4bda13UL, 1,  6476, 151 },  /* parity 1 node  2 */
    {  43545981UL, 0x45f16bUL, 1,  5658, 124 },  /* parity 1 node  3 */
    {  42443371UL, 0x40c371UL, 1,  4976, 104 },  /* parity 1 node  4 */
    {  41420491UL, 0x7862d1UL, 0,  4404,  87 },  /* parity 1 node  5 */
    {  40468166UL, 0x704598UL, 0,  3921,  74 },  /* parity 1 node  6 */
    {  39578650UL, 0x6907abUL, 0,  3508,  63 },  /* parity 1 node  7 */
    {  38745321UL, 0x6288d1UL, 0,  3154,  55 },  /* parity 1 node  8 */
    {  37962507UL, 0x5cae91UL, 0,  2847,  47 },  /* parity 1 node  9 */
    {  37225301UL, 0x5762f9UL, 0,  2581,  41 },  /* parity 1 node 10 */
    {  36529438UL, 0x5293b8UL, 0,  2350,  36 },  /* parity 1 node 11 */
    {  35871196UL, 0x4e3168UL, 0,  2146,  32 },  /* parity 1 node 12 */
    {  35247303UL, 0x4a2f01UL, 0,  1965,  28 },  /* parity 1 node 13 */
    {  34654868UL, 0x468169UL, 0,  1805,  25 },  /* parity 1 node 14 */
    {  34091336UL, 0x431f22UL, 0,  1664,  22 },  /* parity 1 node 15 */
    {  33554432UL, 0x400000UL, 0,  1537,  20 },  /* parity 1 node 16 */
};




/* internal value W on the 2^-26 grid, in [2^25, 2^26], for a 23-bit mantissa and the parity of the unbiased exponent */
static inline int64_t sh4_fsrra_internal(uint32_t mantissa23, int parity) {
    const int64_t K = (int64_t)1 << 19;
    int64_t m = (int64_t)(mantissa23 & 0x7fffffu);
    int64_t node = (m + ((int64_t)1 << 18)) >> 19;
    int64_t t = m - node * ((int64_t)1 << 19);
    const sh4_fsrra_word_t *w = &sh4_fsrra_rom[(parity ? 17 : 0) + (int)node];
    int64_t dx = t * 16;
    int64_t sq = (sh4_fpu__arr(dx, dx) + K) >> 23;                 /* never negative */
    int64_t T1 = sh4_fpu__sm(sh4_fpu__arr((int64_t)w->rec1, dx) + K, 26 - w->e1);
    int64_t T2 = sh4_fpu__sm(sh4_fpu__arr((int64_t)w->c2f * 512, sq) + K, 29);
    int64_t I  = (sh4_fpu__arr((int64_t)w->c3f * 256, sq) + K) >> 23;   /* never negative */
    int64_t T3 = sh4_fpu__sm(sh4_fpu__arr(dx, I) + K, 27);
    return (int64_t)w->c0 - T1 + T2 - T3;
}

static inline uint32_t sh4_fsrra(uint32_t x, int round_to_zero) {
    uint32_t sign = x >> 31, exp = (x >> 23) & 0xffu, man = x & 0x7fffffu;
    /* special operands, as measured on hardware with no trap taken.  Denormals are treated as FPSCR.DN = 1 does (as +-0);
     * use sh4_fsrra_ex() for DN = 0, the FPSCR side effects and the trapping cases. */
    if (exp == 0xffu) return (man || sign) ? 0x7fbfffffu : 0x00000000u;   /* NaN, -inf -> qNaN;  +inf -> +0 */
    if (exp == 0)     return (sign << 31) | 0x7f800000u;                  /* +-0, denormals -> +-inf */
    if (sign)         return 0x7fbfffffu;                                 /* negative -> qNaN */
    {
        int e = (int)exp - 127, parity = e & 1, k = (e - parity) / 2;     /* x = 1.m * 2^parity * 4^k */
        uint64_t W = (uint64_t)sh4_fsrra_internal(man, parity);
        int top = (W >> 26) ? 26 : 25, sh = top - 23;                     /* W = 2^26 only for x = 4^k exactly */
        uint64_t q = W >> sh;
        if (!round_to_zero) {
            uint64_t r = W & (((uint64_t)1 << sh) - 1), h = (uint64_t)1 << (sh - 1);
            q += (r > h) || (r == h && (q & 1));
            if (q >> 24) { q >>= 1; top++; }
        }
        return ((uint32_t)(top - 26 - k + 127) << 23) | ((uint32_t)q & 0x7fffffu);
    }
}

/* Full semantics.  *fpscr is read (RM, enables, DN, PR) and updated (cause field rewritten, flag field OR-ed).
 * Returns 1 when an FPU exception trap (EXPEVT 0x120) is taken: the destination register must then be left unchanged
 * (*r = x) and the updated *fpscr is what the handler sees.  Returns 0 otherwise, with the result in *r. */
static inline int sh4_fsrra_ex(uint32_t x, uint32_t *fpscr, uint32_t *r) {
    uint32_t f = *fpscr, sign = x >> 31, exp = (x >> 23) & 0xffu, man = x & 0x7fffffu, res, cause;   /* cause: I1 U2 O4 Z8 V16 E32 */
    int trap;
    if (f & (1u << 19)) { *r = x; return (int)((f >> 7) & 1u); }          /* PR = 1: no operation; traps only on the inexact enable */
    if (exp == 0xffu && man)      { res = 0x7fbfffffu; cause = (man & 0x400000u) ? 16u : 0u; }   /* signalling / quiet NaN */
    else if (exp == 0xffu)        { res = sign ? 0x7fbfffffu : 0u; cause = sign ? 16u : 0u; }    /* -inf invalid, +inf -> +0 */
    else if (exp == 0 && (man == 0 || (f & (1u << 18)))) { res = (sign << 31) | 0x7f800000u; cause = 8u; }   /* +-0, DN = 1 denormal */
    else if (exp == 0)            { res = 0x7fbfffffu; cause = sign ? 16u : 32u; }               /* DN = 0 denormal: - invalid, + FPU error */
    else if (sign)                { res = 0x7fbfffffu; cause = 16u; }
    else                          { res = sh4_fsrra(x, (f & 3u) == 1u); cause = 1u; }
    f = (f & ~(0x3fu << 12)) | (cause << 12) | ((cause & 0x1fu) << 2);
    trap = (cause & 32u) || (cause & (f >> 7) & 0x1fu) || (f & (1u << 7));
    *fpscr = f; *r = trap ? x : res;
    return trap;
}

static inline float sh4_fsrra_f(float x, int round_to_zero) {
    uint32_t b; float r;
    memcpy(&b, &x, sizeof b); b = sh4_fsrra(b, round_to_zero); memcpy(&r, &b, sizeof r);
    return r;
}

#ifdef __cplusplus
}
#endif
#endif /* SH4_FPU_APPROX_H */
