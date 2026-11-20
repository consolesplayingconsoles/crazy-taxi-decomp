/* shim.c: host C for console library calls the game's C makes (the Katana SDK, the NAOMI library, the C runtime).
   Each replaces the stub native_build.py would otherwise write for that name. Empty so far: the first runs list what
   the game reaches (port/README.md). */
#include "port.h"

#include <math.h>
#include <string.h>

#include "play_math.h"

/* SHC's intrinsics (port/runtime/prelude.h); port_sr stands for the status register */
float port_fabsf(float x) { return fabsf(x); }
float port_sqrtf(float x) { return sqrtf(x); }
float port_fsrra(float x) { return 1.0f / sqrtf(x); }
int port_get_cr(void) { return port_sr; }
void port_imask_lowered(void); /* hw.c: interrupts held back may run now */
void port_set_cr(int v)
{
    int was = (port_sr >> 4) & 15;
    port_sr = v;
    if (((v >> 4) & 15) < was)
        port_imask_lowered();
}
void port_set_imask(int m)
{
    int was = (port_sr >> 4) & 15;
    port_sr = (port_sr & ~0xF0) | ((m & 15) << 4);
    if ((m & 15) < was)
        port_imask_lowered();
}
int port_get_imask(void) { return (port_sr >> 4) & 15; }
static int fpscr = 0x00040001;
int port_get_fpscr(void) { return fpscr; }
void port_set_fpscr(int v) { fpscr = v; }
unsigned int interp_get_gbr(void);
void interp_set_gbr(unsigned int v);
int port_get_gbr(void) { return (int)interp_get_gbr(); }
void port_set_gbr(uint32_t v) { interp_set_gbr(v); }
/* SHC's gbr intrinsics, as the game's C calls them */
void builtin_set_gbr(uint32_t v) __asm__("_builtin_set_gbr");
void builtin_set_gbr(uint32_t v) { interp_set_gbr(v); }
int builtin_get_gbr(void) __asm__("_builtin_get_gbr");
int builtin_get_gbr(void) { return (int)interp_get_gbr(); }
int port_get_vbr(void) { return 0x8C000000; }
void hw_sq_flush(uint32_t a); /* hw.c */
/* pref: a cache prefetch (nothing to do), or on 0xE0000000-0xE3FFFFFF a store queue's flush */
void port_prefetch(uint32_t p)
{
    if (p >> 26 == 0xE0000000u >> 26)
        hw_sq_flush(p);
}
int port_tas(uint32_t p)
{
    unsigned char *b = (unsigned char *)(uintptr_t)p;
    int was_zero = *b == 0;
    *b |= 0x80;
    return was_zero;
}
uint32_t port_strcpy(uint32_t d, uint32_t s)
{
    strcpy((char *)(uintptr_t)d, (const char *)(uintptr_t)s);
    return d;
}

/* the FPU's back bank as the library uses it: XMTRX, the matrix FTRV applies (XF0-XF15 in the order ld_ext loads them).
   FIPR, FTRV and FSCA give the console's bits through sa_numeric */
void port_ld_ext(uint32_t m) { memcpy(port_xmtrx, (void *)(uintptr_t)m, sizeof(float[16])); }
void port_st_ext(uint32_t m) { memcpy((void *)(uintptr_t)m, port_xmtrx, sizeof(float[16])); }
/* --fast-fpu (for training): the host's own float arithmetic for FIPR, FTRV and FSCA instead of the console's exact bits
   (sa_numeric's emulation of the SH-4's approximate units is most of a frame's time). The results differ in the last bits;
   play keeps the exact ones. */
int port_fast_fpu;

void port_ftrv(uint32_t in, uint32_t out)
{
    float v[4], r[4];
    memcpy(v, (void *)(uintptr_t)in, sizeof v);
    if (port_fast_fpu) {
        const float *m = port_xmtrx;        /* XF0-XF15 column by column, as sa_ftrv takes them */
        for (int i = 0; i < 4; i++)
            r[i] = m[i] * v[0] + m[4 + i] * v[1] + m[8 + i] * v[2] + m[12 + i] * v[3];
    } else
        sa_ftrv(port_xmtrx, v, r);
    memcpy((void *)(uintptr_t)out, r, sizeof r);
}
float port_fipr(uint32_t a, uint32_t b)
{
    const float *x = (const float *)(uintptr_t)a, *y = (const float *)(uintptr_t)b;
    if (port_fast_fpu)
        return x[0] * y[0] + x[1] * y[1] + x[2] * y[2] + x[3] * y[3];
    return sa_fipr(x, y);
}
void port_fsca(uint32_t angle, uint32_t sinv, uint32_t cosv)
{
    float sc[2];
    if (port_fast_fpu) {
        float a = (float)(angle & 0xFFFF) * (6.28318530718f / 65536.0f);
        sc[0] = sinf(a);
        sc[1] = cosf(a);
    } else
        sa_fsca(angle, sc);
    *(float *)(uintptr_t)sinv = sc[0];
    *(float *)(uintptr_t)cosv = sc[1];
}


/* inline assembly the port has no host body for (tools/10-port/native_build.py) */
void port_asm_unimplemented(const char *name)
{
    port_unimplemented(name, 0);
}
