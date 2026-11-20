/* play math: the SH-4's operations that play reads (ENGINE.md#numbers). each
 * runs under the game's FPSCR, H'40001: single precision, rounding toward
 * zero. each gives the same bits on every host whatever its FPU's mode, and
 * none fails. a program links one build of math.c: the default build, or the
 * console's with SA_NUMERIC_CONSOLE. fast.c, linked in math.c's place, gives
 * either build's bits faster.
 *
 * a source outside the library includes this header and no other file of it.
 * the library knows nothing of the engine or of a game. it includes only its
 * own files and the C library's headers. engine/tests/boundary.py holds both
 * rules. engine/mk/play_math.mk names each build's objects for a link */
#ifndef PLAY_MATH_H
#define PLAY_MATH_H

#include <stdint.h>

float sa_fadd(float a, float b);
float sa_fsub(float a, float b); /* a - b */
float sa_fmul(float a, float b);
float sa_fdiv(float a, float b); /* a / b */
float sa_fsqrt(float a);
int32_t sa_fcmp_gt(float a, float b); /* 1 where a > b, else 0 */
int32_t sa_fcmp_eq(float a, float b);
int32_t sa_ftrc(float a);
float sa_float(int32_t i);
float sa_fmac(float f0, float fm, float fn); /* f0 * fm + fn */
/* FIPR FVb,FVa. keep each call's operand order: the console recodes a, so
 * its a . b can differ from b . a even where the default build's are equal */
float sa_fipr(const float a[4], const float b[4]);
/* m holds XMTRX's XF0 to XF15, and out[i] sums m[i + 4j] * v[j] */
void sa_ftrv(const float m[16], const float v[4], float out[4]);
/* out[0] takes the sine and out[1] the cosine of angle's low 16 bits, 65536
 * to a turn */
void sa_fsca(uint32_t angle, float out[2]);
float sa_fsrra(float a);

#endif
