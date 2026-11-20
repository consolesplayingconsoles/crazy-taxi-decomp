#include "interp.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/* An SH-4 interpreter for the guest functions that have no C (the SDK's assembly-only functions): a C port of the decomp's own simulator
   (tools/sh4sim.py, which is the specification for every instruction here). It runs the original code from guest RAM. A call to an address
   that has host C (the build's function table) is made as a host call; anything else keeps interpreting. Single precision only (FPSCR.PR = 0). */
extern int printf(const char *, ...);
extern void abort(void);
extern double sin(double), cos(double);
extern float sqrtf(float);
typedef unsigned int u32;
typedef int s32;

#define SENTINEL 0x0EADBEE0u
#define STACK_TOP 0x0CFEFF00u

/* the build's table (fn_table.c): guest address -> host function; flags bit 0 = a stub that comes back here, bit 1 = returns a float */
static const void *host_lookup(u32 addr, int *flags)
{
    const struct port_entry *e = port_lookup(0x8C000000u | (addr & 0x00FFFFFFu));
    if (!e) return 0;
    *flags = e->interp;
    return e->fn;
}

static struct {
    u32 r[16];
    u32 t, s, q, mq, srx, gbr, mach, macl, pr, pc, vbr, fpul, spc, ssr;
    u32 fr[16], xf[16];
    u32 sz, prec, frbit, fpscr_rest;
} c = { {0}, 0, 0, 0, 0, 0x40000000u, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0}, {0}, 0, 0, 0, 0x00040001u };
static int depth, trace;
extern char *getenv(const char *);
static u32 skip[16]; static int nskip, skip_read;
extern long strtol(const char *, char **, int);
static int skipped(u32 a) { int i; if (!skip_read) { char *t = getenv("SH4_SKIP"); skip_read = 1; while (t && *t && nskip < 16) { skip[nskip++] = (u32)strtol(t, &t, 16); if (*t == ',') t++; } } for (i = 0; i < nskip; i++) if (skip[i] == (a & 0xFFFFFF)) return 1; return 0; }
int sh4_gate;                                    /* set by host/gdrom.c after the directory reads: SH4_TRACE=late traces only from then on */

static u32 hist[32]; static unsigned hn; static u32 last_entry[8];
float interp_f0;                                 /* fr0 after the last interpreted call (a float result) */

static unsigned char page0[16];                 /* guest address 0 (the boot ROM): reads 0, writes land here */
/* a register that acts (hw.c models it): not plain memory */
static inline int mmio(u32 a)
{
    u32 p = a & 0x1FFFFFFFu;
    if (a >> 24 == 0xFF) return (a >> 16) == 0xFFD8 || (a >> 16) == 0xFFA0;
    if (a >> 29 == 7) return 0;
    return (p >= 0x005F6800u && p < 0x005F9000u) || (p >= 0x00710000u && p < 0x00710010u);
}
static inline u32 rd(u32 a, int sz)
{
    if (mmio(a)) return sz == 1 ? port_mmio_r8(a) : sz == 2 ? port_mmio_r16(a) : port_mmio_r32(a);
    const void *p = GA(a); if (!p) p = page0;
    return sz == 1 ? *(const unsigned char *)p : sz == 2 ? *(const unsigned short *)p : *(const u32 *)p;
}
static inline void wr(u32 a, int sz, u32 v)
{
    if (mmio(a)) { if (sz == 1) port_mmio_w8(a, (uint8_t)v); else if (sz == 2) port_mmio_w16(a, (uint16_t)v); else port_mmio_w32(a, v); return; }
    void *p = GA(a); if (!p) p = page0;
    if (sz == 1) *(unsigned char *)p = (unsigned char)v; else if (sz == 2) *(unsigned short *)p = (unsigned short)v; else *(u32 *)p = v;
}
static inline s32 s8(u32 x) { return (s32)(signed char)x; }
static inline s32 s16(u32 x) { return (s32)(short)x; }
static inline s32 s12(u32 x) { x &= 0xFFF; return x & 0x800 ? (s32)x - 0x1000 : (s32)x; }
static inline float bf(u32 b) { union { u32 u; float f; } x; x.u = b; return x.f; }
static inline u32 fb(float f) { union { u32 u; float f; } x; x.f = f; return x.u; }
#define FR(n) bf(c.fr[n])
#define SETF(n, v) (c.fr[n] = fb((float)(v)))

int port_in_interrupt(void);

int backtrace(void **, int); void backtrace_symbols_fd(void *const *, int, int);
static struct { int k; u32 addr; int depth; u32 r15; } ring[48]; static unsigned rn;
static void static_ring_add(int k, u32 addr, int d, u32 r15) { ring[rn & 47].k = k; ring[rn & 47].addr = addr; ring[rn & 47].depth = d; ring[rn & 47].r15 = r15; rn++; }
static void stop(const char *why, u32 pc, u32 op)
{
    { int k; printf("  recent calls (1 = enter, 2 = leave):"); for (k = 0; k < 48; k++) { unsigned i = (rn + k) & 47; if (ring[i].k) printf(" [%d d%d %X sp %X]", ring[i].k, ring[i].depth, ring[i].addr, ring[i].r15); } printf("\n"); }
    { void *bt[40]; int n = backtrace(bt, 40); printf("  host stack:\n"); fflush(stdout); backtrace_symbols_fd(bt, n, 1); }
    { int k; printf("  recent pcs:"); for (k = 0; k < 32; k++) printf(" %X", hist[(hn + k) & 31]); printf("\n  entries by depth: %X %X %X %X %X", last_entry[0], last_entry[1], last_entry[2], last_entry[3], last_entry[4]); printf("\n  depth %d in_irq %d pr %08X r0-r15:", depth, port_in_interrupt(), c.pr); for (k = 0; k < 16; k++) printf(" %X", c.r[k]); printf("\n"); }
    printf("  sh4: %s at %08X (opcode %04X)\n", why, pc, op);
    abort();
}

static u32 sr(void) { return ((u32)port_sr & 0xFFFFFCFCu) | (c.mq << 9) | (c.q << 8) | (c.s << 1) | c.t; }
static void set_sr(u32 x)
{
    c.t = x & 1; c.s = (x >> 1) & 1; c.q = (x >> 8) & 1; c.mq = (x >> 9) & 1;
    port_sr = (int)((x & 0xFFFFFCFCu) | ((u32)port_sr & ~0xFFFFFCFCu & 0));
}
static u32 get_fpscr(void) { return c.fpscr_rest | (c.prec << 19) | (c.sz << 20) | (c.frbit << 21); }
static void swap_banks(void) { int i; for (i = 0; i < 16; i++) { u32 t = c.fr[i]; c.fr[i] = c.xf[i]; c.xf[i] = t; } }
static void set_fpscr(u32 v)
{
    u32 f = (v >> 21) & 1;
    if (f != c.frbit) swap_banks();
    c.frbit = f; c.sz = (v >> 20) & 1; c.prec = (v >> 19) & 1;
    c.fpscr_rest = v & ~(7u << 19);
    if (c.prec) stop("double precision (FPSCR.PR = 1) is not implemented", c.pc, 0);
}

int host_depth = -1;                             /* the interpreter depth whose instruction is waiting on a host function, -1 if none */
static void host_call(const void *fn, int flags)
{
    int a0 = (int)c.r[4], a1 = (int)c.r[5], a2 = (int)c.r[6], a3 = (int)c.r[7];
    int a4 = (int)rd(c.r[15], 4), a5 = (int)rd(c.r[15] + 4, 4), a6 = (int)rd(c.r[15] + 8, 4), a7 = (int)rd(c.r[15] + 12, 4);
    float f4 = FR(4), f5 = FR(5), f6 = FR(6), f7 = FR(7), f8 = FR(8), f9 = FR(9), f10 = FR(10), f11 = FR(11);
    u32 pr = c.pr; int old_host = host_depth;
    host_depth = depth;                          /* the interpreter waits on host code here: a display interrupt may run (see hw_tick) */
    {   /* the result goes back in r0 and fr0 both: the host function's type is not known here, and the caller reads the one it expects */
        float fv;
        port_host_depth--;                       /* C code runs here: an interrupt may be delivered (hw_deliver saves the interpreter's state) */
        int v = ((int (*)(int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float))fn)(a0, a1, a2, a3, a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
        port_host_depth++;
        __asm__ volatile("movss %%xmm0, %0" : "=m"(fv));
        c.r[0] = (u32)v; c.fr[0] = fb(fv);
    }
    host_depth = old_host;
    c.pr = pr;
}

/* a taken branch; kind: 0 branch, 1 call (jsr/bsr), 2 jump (jmp/braf), 3 return */
static void go(u32 target, int kind)
{
    if (kind == 1 || kind == 2) {
        int flags = 0;
        const void *fn = host_lookup(target, &flags);
        if (trace && !skipped(target)) printf("  [sh4] %s %08X -> %s\n", kind == 1 ? "call" : "jump", target, fn ? ((flags & 1) ? "interpreted stub" : "host") : "interpret");
        if (fn && !(flags & 1)) { host_call(fn, flags); c.pc = c.pr; return; }
    }
    c.pc = target;
}

static void fmov(u32 op, int n, int m, int lo4)
{
    u32 *R = c.r; u32 *bank;
    if (!c.sz) {
        if (lo4 == 0xc) { c.fr[n] = c.fr[m]; return; }
        if (lo4 == 8) { c.fr[n] = rd(R[m], 4); return; }
        if (lo4 == 6) { c.fr[n] = rd(R[m] + R[0], 4); return; }
        if (lo4 == 9) { c.fr[n] = rd(R[m], 4); R[m] += 4; return; }
        if (lo4 == 0xa) { wr(R[n], 4, c.fr[m]); return; }
        if (lo4 == 7) { wr(R[n] + R[0], 4, c.fr[m]); return; }
        if (lo4 == 0xb) { R[n] -= 4; wr(R[n], 4, c.fr[m]); return; }
    }
    /* SZ = 1: register pairs (an odd number names the other bank) */
#define PAIR(k, hi, lo) do { bank = ((k) & 1) ? c.xf : c.fr; hi = bank[(k) & 14]; lo = bank[((k) & 14) + 1]; } while (0)
#define PUT(k, hi, lo) do { bank = ((k) & 1) ? c.xf : c.fr; bank[(k) & 14] = hi; bank[((k) & 14) + 1] = lo; } while (0)
    {
        u32 h, l;
        if (lo4 == 0xc) { PAIR(m, h, l); PUT(n, h, l); return; }
        /* a pair move keeps the singles' order, as the repo's simulator (tools/sh4sim.py) has it: the first register of the pair goes
           to and from the lower address */
        if (lo4 == 8) { h = rd(R[m], 4); l = rd(R[m] + 4, 4); PUT(n, h, l); return; }
        if (lo4 == 6) { h = rd(R[m] + R[0], 4); l = rd(R[m] + R[0] + 4, 4); PUT(n, h, l); return; }
        if (lo4 == 9) { h = rd(R[m], 4); l = rd(R[m] + 4, 4); PUT(n, h, l); R[m] += 8; return; }
        if (lo4 == 0xa) { PAIR(m, h, l); wr(R[n], 4, h); wr(R[n] + 4, 4, l); return; }
        if (lo4 == 7) { PAIR(m, h, l); wr(R[n] + R[0], 4, h); wr(R[n] + R[0] + 4, 4, l); return; }
        if (lo4 == 0xb) { R[n] -= 8; PAIR(m, h, l); wr(R[n], 4, h); wr(R[n] + 4, 4, l); return; }
    }
    stop("fmov form not implemented", c.pc, op);
}

static void fpu(u32 op, int n, int m, int lo4)
{
    if (op == 0xF3FD) { c.sz ^= 1; return; }                                  /* fschg */
    if (op == 0xFBFD) { swap_banks(); c.frbit ^= 1; return; }                  /* frchg */
    if (lo4 == 0xd) {
        int k = m;
        if (k == 0) { c.fr[n] = c.fpul; return; }
        if (k == 1) { c.fpul = c.fr[n]; return; }
        if (k == 2) { SETF(n, (double)(s32)c.fpul); return; }
        if (k == 3) {
            float x = FR(n); u32 v;
            if (x != x) v = 0x80000000u;
            else if (x >= 2147483648.0f) v = 0x7FFFFFFFu;
            else if (x <= -2147483648.0f) v = 0x80000000u;
            else v = (u32)(s32)x;
            c.fpul = v; return;
        }
        if (k == 4) { c.fr[n] ^= 0x80000000u; return; }
        if (k == 5) { c.fr[n] &= 0x7FFFFFFFu; return; }
        if (k == 6) { float x = FR(n); c.fr[n] = x >= 0 ? fb(sqrtf(x)) : 0x7FC00000u; return; }
        if (k == 8) { c.fr[n] = 0; return; }
        if (k == 9) { c.fr[n] = 0x3F800000u; return; }
        if (k == 7) { float x = FR(n); SETF(n, x > 0 ? 1.0 / (double)sqrtf(x) : 1e300); return; }
        if (k == 0xf && (n & 1) == 0) {
            double a = 2.0 * 3.14159265358979323846 * (double)(c.fpul & 0xFFFF) / 65536.0;
            SETF(n, sin(a)); SETF(n + 1, cos(a)); return;
        }
        if (k == 0xe) {
            int vn = (n >> 2) * 4, vm = (n & 3) * 4, i; double s = 0;
            for (i = 0; i < 4; i++) s += (double)FR(vm + i) * (double)FR(vn + i);
            SETF(vn + 3, s); return;
        }
        if (k == 0xf && (n & 3) == 1) {
            int vn = (n >> 2) * 4, i, j; double v[4];
            for (i = 0; i < 4; i++) v[i] = FR(vn + i);
            for (i = 0; i < 4; i++) { double s = 0; for (j = 0; j < 4; j++) s += (double)bf(c.xf[i + 4 * j]) * v[j]; SETF(vn + i, s); }
            return;
        }
        stop("FPU instruction not implemented", c.pc, op);
    }
    if (lo4 >= 6 && lo4 <= 0xc) { fmov(op, n, m, lo4); return; }
    {
        float a = FR(n), b = FR(m);
        if (lo4 == 0) { SETF(n, a + b); return; }
        if (lo4 == 1) { SETF(n, a - b); return; }
        if (lo4 == 2) { SETF(n, a * b); return; }
        if (lo4 == 3) { SETF(n, a / b); return; }
        if (lo4 == 4) { c.t = a == b; return; }
        if (lo4 == 5) { c.t = a > b; return; }
        if (lo4 == 0xe) { SETF(n, (double)FR(0) * (double)b + (double)a); return; }
    }
    stop("FPU instruction not implemented", c.pc, op);
}

static void div1(int n, int m)
{
    u32 *R = c.r; u32 oldq = c.q, tmp0, tmp1, tmp2 = R[m];
    c.q = R[n] >> 31;
    R[n] = (R[n] << 1) | c.t;
    tmp0 = R[n];
    if (oldq == 0) {
        if (c.mq == 0) { R[n] -= tmp2; tmp1 = R[n] > tmp0; c.q = c.q == 0 ? tmp1 : tmp1 == 0; }
        else { R[n] += tmp2; tmp1 = R[n] < tmp0; c.q = c.q == 0 ? tmp1 == 0 : tmp1; }
    } else {
        if (c.mq == 0) { R[n] += tmp2; tmp1 = R[n] < tmp0; c.q = c.q == 0 ? tmp1 : tmp1 == 0; }
        else { R[n] -= tmp2; tmp1 = R[n] > tmp0; c.q = c.q == 0 ? tmp1 == 0 : tmp1; }
    }
    c.t = c.q == c.mq;
}

int hw_safe;                                   /* set while the interpreter is between two instructions: the only time a display interrupt may run inside it */
void hw_tick(void);
unsigned int interp_pc(void) { return c.pc; }
float *interp_xf(void) { return (float *)c.xf; }     /* the back float bank (XMTRX), shared with the C's ld_ext / ftrv (shim.c) */
unsigned int interp_reg(int i) { return c.r[i]; }
void interp_hist_dump(void) { int k; printf("  recent pcs:"); for (k = 0; k < 32; k++) printf(" %X", hist[(hn + k) & 31]); printf("\n  r0-r15:"); for (k = 0; k < 16; k++) printf(" %X", c.r[k]); printf("\n  entries by depth: %X %X %X %X\n", last_entry[0], last_entry[1], last_entry[2], last_entry[3]); }
int interp_depth(void) { return depth; }
static void step(int in_slot);
/* a delayed branch: the target is taken before the delay slot runs (the slot may change the register it came from: braf r0 / mov.l @r3,r0) */
#define SLOT(target, kind) do { u32 slot_t_ = (target); if (in_slot) stop("branch in a delay slot", pc, op); step(1); go(slot_t_, kind); return; } while (0)

static void step(int in_slot)
{
    u32 pc = c.pc, op = rd(pc, 2);
    hist[hn++ & 31] = pc;
    int n = (op >> 8) & 15, m = (op >> 4) & 15, lo4 = op & 15; u32 lo8 = op & 255, hi = op >> 12;
    u32 *R = c.r;
    c.pc = pc + 2;
    switch (hi) {
    case 0:
        if (lo4 == 3 && m == 8) { port_prefetch(R[n]); return; }
        if (op == 0x0009 || (lo4 == 3 && (m == 9 || m == 9 || m == 0xa || m == 0xb))) return;
        if (op == 0x000b) SLOT(c.pr, 3);
        if (op == 0x002b) { if (in_slot) stop("branch in a delay slot", pc, op); step(1); set_sr(c.ssr); go(c.spc, 3); return; }
        if (op == 0x0008) { c.t = 0; return; }
        if (op == 0x0018) { c.t = 1; return; }
        if (op == 0x0028) { c.mach = c.macl = 0; return; }
        if (op == 0x0048) { c.s = 0; return; }
        if (op == 0x0058) { c.s = 1; return; }
        if (op == 0x0019) { c.mq = c.q = c.t = 0; return; }
        if (lo8 == 0x02) { R[n] = sr(); return; }
        if (lo8 == 0x12) { R[n] = c.gbr; return; }
        if (lo8 == 0x22) { R[n] = c.vbr; return; }
        if (lo8 == 0x0a) { R[n] = c.mach; return; }
        if (lo8 == 0x1a) { R[n] = c.macl; return; }
        if (lo8 == 0x2a) { R[n] = c.pr; return; }
        if (lo8 == 0x5a) { R[n] = c.fpul; return; }
        if (lo8 == 0x6a) { R[n] = get_fpscr(); return; }
        if (lo8 == 0x29) { R[n] = c.t; return; }
        if (lo8 == 0x03) { c.pr = pc + 4; SLOT(pc + 4 + R[n], 1); }
        if (lo8 == 0x23) SLOT(pc + 4 + R[n], 2);
        if (lo8 == 0xc3) { wr(R[n], 4, R[0]); return; }
        if (lo4 == 4) { wr(R[n] + R[0], 1, R[m]); return; }
        if (lo4 == 5) { wr(R[n] + R[0], 2, R[m]); return; }
        if (lo4 == 6) { wr(R[n] + R[0], 4, R[m]); return; }
        if (lo4 == 7) { c.macl = R[n] * R[m]; return; }
        if (lo4 == 0xc) { R[n] = (u32)s8(rd(R[m] + R[0], 1)); return; }
        if (lo4 == 0xd) { R[n] = (u32)s16(rd(R[m] + R[0], 2)); return; }
        if (lo4 == 0xe) { R[n] = rd(R[m] + R[0], 4); return; }
        if (lo4 == 0xf) {
            long long a = (s32)rd(R[n], 4), b; unsigned long long acc;
            R[n] += 4; b = (s32)rd(R[m], 4); R[m] += 4;
            acc = ((unsigned long long)c.mach << 32 | c.macl) + (unsigned long long)(a * b);
            c.mach = (u32)(acc >> 32); c.macl = (u32)acc; return;
        }
        break;
    case 1: wr(R[n] + lo4 * 4, 4, R[m]); return;
    case 2:
        if (lo4 == 0) { wr(R[n], 1, R[m]); return; }
        if (lo4 == 1) { wr(R[n], 2, R[m]); return; }
        if (lo4 == 2) { wr(R[n], 4, R[m]); return; }
        if (lo4 >= 4 && lo4 <= 6) { int sz = lo4 == 4 ? 1 : lo4 == 5 ? 2 : 4; u32 v = R[m]; R[n] -= sz; wr(R[n], sz, v); return; }
        if (lo4 == 7) { c.q = R[n] >> 31; c.mq = R[m] >> 31; c.t = c.q ^ c.mq; return; }
        if (lo4 == 8) { c.t = (R[n] & R[m]) == 0; return; }
        if (lo4 == 9) { R[n] &= R[m]; return; }
        if (lo4 == 0xa) { R[n] ^= R[m]; return; }
        if (lo4 == 0xb) { R[n] |= R[m]; return; }
        if (lo4 == 0xc) { u32 x = R[n] ^ R[m]; c.t = !(x & 0xFF) || !(x & 0xFF00) || !(x & 0xFF0000) || !(x & 0xFF000000u); return; }
        if (lo4 == 0xd) { R[n] = (R[m] << 16) | (R[n] >> 16); return; }
        if (lo4 == 0xe) { c.macl = (R[n] & 0xFFFF) * (R[m] & 0xFFFF); return; }
        if (lo4 == 0xf) { c.macl = (u32)((s32)s16(R[n]) * (s32)s16(R[m])); return; }
        break;
    case 3: {
        u32 a = R[n], b = R[m]; unsigned long long p; long long v;
        if (lo4 == 0) { c.t = a == b; return; }
        if (lo4 == 2) { c.t = a >= b; return; }
        if (lo4 == 3) { c.t = (s32)a >= (s32)b; return; }
        if (lo4 == 4) { div1(n, m); return; }
        if (lo4 == 5) { p = (unsigned long long)a * b; c.mach = (u32)(p >> 32); c.macl = (u32)p; return; }
        if (lo4 == 6) { c.t = a > b; return; }
        if (lo4 == 7) { c.t = (s32)a > (s32)b; return; }
        if (lo4 == 8) { R[n] = a - b; return; }
        if (lo4 == 0xa) { long long w = (long long)a - b - c.t; R[n] = (u32)w; c.t = w < 0; return; }
        if (lo4 == 0xb) { v = (long long)(s32)a - (s32)b; R[n] = (u32)v; c.t = v < -0x80000000LL || v > 0x7FFFFFFFLL; return; }
        if (lo4 == 0xc) { R[n] = a + b; return; }
        if (lo4 == 0xd) { p = (unsigned long long)((long long)(s32)a * (s32)b); c.mach = (u32)(p >> 32); c.macl = (u32)p; return; }
        if (lo4 == 0xe) { unsigned long long w = (unsigned long long)a + b + c.t; R[n] = (u32)w; c.t = w > 0xFFFFFFFFull; return; }
        if (lo4 == 0xf) { v = (long long)(s32)a + (s32)b; R[n] = (u32)v; c.t = v < -0x80000000LL || v > 0x7FFFFFFFLL; return; }
        break;
    }
    case 4: {
        u32 x = R[n];
        if (lo4 == 0xc) { s32 sh = (s32)R[m]; R[n] = sh >= 0 ? (u32)((s32)x << (sh & 31)) : ((sh & 31) ? (u32)((s32)x >> ((-sh) & 31)) : ((s32)x < 0 ? 0xFFFFFFFFu : 0)); return; }
        if (lo4 == 0xd) { s32 sh = (s32)R[m]; R[n] = sh >= 0 ? x << (sh & 31) : ((sh & 31) ? x >> ((-sh) & 31) : 0); return; }
        if (lo4 == 0xf) {
            long long a = s16(rd(R[n], 2)), b; unsigned long long acc;
            R[n] += 2; b = s16(rd(R[m], 2)); R[m] += 2;
            acc = ((unsigned long long)c.mach << 32 | c.macl) + (unsigned long long)(a * b);
            c.mach = (u32)(acc >> 32); c.macl = (u32)acc; return;
        }
        if (lo8 == 0x00 || lo8 == 0x20) { c.t = x >> 31; R[n] = x << 1; return; }
        if (lo8 == 0x01) { c.t = x & 1; R[n] = x >> 1; return; }
        if (lo8 == 0x21) { c.t = x & 1; R[n] = (u32)((s32)x >> 1); return; }
        if (lo8 == 0x04) { c.t = x >> 31; R[n] = (x << 1) | c.t; return; }
        if (lo8 == 0x05) { c.t = x & 1; R[n] = (x >> 1) | (c.t << 31); return; }
        if (lo8 == 0x24) { u32 t = x >> 31; R[n] = (x << 1) | c.t; c.t = t; return; }
        if (lo8 == 0x25) { u32 t = x & 1; R[n] = (x >> 1) | (c.t << 31); c.t = t; return; }
        if (lo8 == 0x08) { R[n] = x << 2; return; }
        if (lo8 == 0x09) { R[n] = x >> 2; return; }
        if (lo8 == 0x18) { R[n] = x << 8; return; }
        if (lo8 == 0x19) { R[n] = x >> 8; return; }
        if (lo8 == 0x28) { R[n] = x << 16; return; }
        if (lo8 == 0x29) { R[n] = x >> 16; return; }
        if (lo8 == 0x10) { R[n] = x - 1; c.t = R[n] == 0; return; }
        if (lo8 == 0x11) { c.t = (s32)x >= 0; return; }
        if (lo8 == 0x15) { c.t = (s32)x > 0; return; }
        if (lo8 == 0x1b) { u32 v = rd(x, 1); c.t = v == 0; wr(x, 1, v | 0x80); return; }
        if (lo8 == 0x0b) { c.pr = pc + 4; SLOT(x, 1); }
        if (lo8 == 0x2b) SLOT(x, 2);
        if (lo8 == 0x0a) { c.mach = x; return; }
        if (lo8 == 0x1a) { c.macl = x; return; }
        if (lo8 == 0x2a) { c.pr = x; return; }
        if (lo8 == 0x5a) { c.fpul = x; return; }
        if (lo8 == 0x6a) { set_fpscr(x); return; }
        if (lo8 == 0x1e) { c.gbr = x; return; }
        if (lo8 == 0x2e) { c.vbr = x; return; }
        if (lo8 == 0x0e) { set_sr(x); return; }
        if (lo8 == 0x02 || lo8 == 0x12 || lo8 == 0x22 || lo8 == 0x52 || lo8 == 0x62 || lo8 == 0x13 || lo8 == 0x23) {
            u32 v = lo8 == 0x02 ? c.mach : lo8 == 0x12 ? c.macl : lo8 == 0x22 ? c.pr : lo8 == 0x52 ? c.fpul : lo8 == 0x62 ? get_fpscr() : lo8 == 0x13 ? c.gbr : c.vbr;
            R[n] = x - 4; wr(R[n], 4, v); return;
        }
        if (lo8 == 0x06 || lo8 == 0x16 || lo8 == 0x26 || lo8 == 0x56 || lo8 == 0x66 || lo8 == 0x17 || lo8 == 0x27) {
            u32 v = rd(x, 4); R[n] = x + 4;
            if (lo8 == 0x06) c.mach = v; else if (lo8 == 0x16) c.macl = v; else if (lo8 == 0x26) c.pr = v;
            else if (lo8 == 0x56) c.fpul = v; else if (lo8 == 0x66) set_fpscr(v); else if (lo8 == 0x27) c.vbr = v; else c.gbr = v;
            return;
        }
        break;
    }
    case 5: R[n] = rd(R[m] + lo4 * 4, 4); return;
    case 6: {
        u32 v = R[m];
        if (lo4 == 0) { R[n] = (u32)s8(rd(v, 1)); return; }
        if (lo4 == 1) { R[n] = (u32)s16(rd(v, 2)); return; }
        if (lo4 == 2) { R[n] = rd(v, 4); return; }
        if (lo4 == 3) { R[n] = v; return; }
        if (lo4 >= 4 && lo4 <= 6) {
            int sz = lo4 == 4 ? 1 : lo4 == 5 ? 2 : 4; u32 x = rd(v, sz);
            if (n != m) R[m] = v + sz;
            R[n] = sz == 1 ? (u32)s8(x) : sz == 2 ? (u32)s16(x) : x; return;
        }
        if (lo4 == 7) { R[n] = ~v; return; }
        if (lo4 == 8) { R[n] = (v & 0xFFFF0000u) | ((v & 0xFF) << 8) | ((v >> 8) & 0xFF); return; }
        if (lo4 == 9) { R[n] = (v << 16) | (v >> 16); return; }
        if (lo4 == 0xa) { u32 t = v != 0 || c.t != 0; R[n] = -v - c.t; c.t = t; return; }
        if (lo4 == 0xb) { R[n] = -v; return; }
        if (lo4 == 0xc) { R[n] = v & 0xFF; return; }
        if (lo4 == 0xd) { R[n] = v & 0xFFFF; return; }
        if (lo4 == 0xe) { R[n] = (u32)s8(v); return; }
        if (lo4 == 0xf) { R[n] = (u32)s16(v); return; }
        break;
    }
    case 7: R[n] += (u32)s8(lo8); return;
    case 8: {
        u32 d = lo4;
        if (n == 0) { wr(R[m] + d, 1, R[0]); return; }
        if (n == 1) { wr(R[m] + d * 2, 2, R[0]); return; }
        if (n == 4) { R[0] = (u32)s8(rd(R[m] + d, 1)); return; }
        if (n == 5) { R[0] = (u32)s16(rd(R[m] + d * 2, 2)); return; }
        if (n == 8) { c.t = R[0] == (u32)s8(lo8); return; }
        if (n == 9 || n == 0xb || n == 0xd || n == 0xf) {
            int take = c.t == (u32)((n == 9 || n == 0xd) ? 1 : 0);
            u32 target = pc + 4 + (u32)(s8(lo8) * 2);
            if (in_slot) stop("branch in a delay slot", pc, op);
            if (n == 0xd || n == 0xf) step(1);
            if (take) go(target, 0);
            return;
        }
        break;
    }
    case 9: R[n] = (u32)s16(rd(pc + 4 + lo8 * 2, 2)); return;
    case 0xa: SLOT(pc + 4 + (u32)(s12(op) * 2), 0);
    case 0xb: c.pr = pc + 4; SLOT(pc + 4 + (u32)(s12(op) * 2), 1);
    case 0xc: {
        u32 g = c.gbr, a, v;
        if (n == 0) { wr(g + lo8, 1, R[0]); return; }
        if (n == 1) { wr(g + lo8 * 2, 2, R[0]); return; }
        if (n == 2) { wr(g + lo8 * 4, 4, R[0]); return; }
        if (n == 3) stop("trapa", pc, op);
        if (n == 4) { R[0] = (u32)s8(rd(g + lo8, 1)); return; }
        if (n == 5) { R[0] = (u32)s16(rd(g + lo8 * 2, 2)); return; }
        if (n == 6) { R[0] = rd(g + lo8 * 4, 4); return; }
        if (n == 7) { R[0] = (pc & ~3u) + 4 + lo8 * 4; return; }
        if (n == 8) { c.t = (R[0] & lo8) == 0; return; }
        if (n == 9) { R[0] &= lo8; return; }
        if (n == 0xa) { R[0] ^= lo8; return; }
        if (n == 0xb) { R[0] |= lo8; return; }
        a = g + R[0]; v = rd(a, 1);
        if (n == 0xc) { c.t = (v & lo8) == 0; return; }
        if (n == 0xd) { wr(a, 1, v & lo8); return; }
        if (n == 0xe) { wr(a, 1, v ^ lo8); return; }
        if (n == 0xf) { wr(a, 1, v | lo8); return; }
        break;
    }
    case 0xd: R[n] = rd(((pc & ~3u) + 4 + lo8 * 4), 4); return;
    case 0xe: R[n] = (u32)s8(lo8); return;
    case 0xf: fpu(op, n, m, lo4); return;
    }
    stop("unknown instruction", pc, op);
}

/* An interrupt arrives between two instructions of whatever is running (interpreted or not): its handler runs on the same interpreter, so the
   whole CPU state is saved first and put back after, like the hardware does. Interrupts do not nest here. */
static struct { u32 r[16]; u32 t, s, q, mq, srx, gbr, mach, macl, pr, pc, vbr, fpul, spc, ssr; u32 fr[16], xf[16]; u32 sz, prec, frbit, fpscr_rest; } saved;
static int saved_depth;
unsigned int interp_get_gbr(void) { return c.gbr; }
void interp_set_gbr(unsigned int v) { c.gbr = v; }
static unsigned safe_n;
void interp_save(void);
void interp_restore(void);
static void interp_safe_point(void)
{
    if (port_host_depth != 1) return;            /* host code the runtime must not interrupt is waiting on this call */
    interp_save(); port_host_depth--; hw_deliver(); port_host_depth++; interp_restore();
}
void interp_save(void) { saved = *(__typeof__(saved) *)&c; saved_depth = depth; }
void interp_restore(void) { *(__typeof__(saved) *)&c = saved; depth = saved_depth; }

/* Runs the guest function at addr with the SH-4 calling convention: r4-r7 and fr4-fr11 for the first arguments, the rest on the stack.
   Returns r0; a float result is left in interp_f0. */
int interp_call(u32 addr, int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7,
                float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    u32 save_pr = c.pr, save_r15 = c.r[15], ret;
    if (!depth) { char *t = getenv("SH4_TRACE"); trace = t != 0 && (t[0] != 'l' || sh4_gate); }
    if (depth == 0) c.r[15] = STACK_TOP;
    c.r[15] -= 16;
    wr(c.r[15], 4, (u32)a4); wr(c.r[15] + 4, 4, (u32)a5); wr(c.r[15] + 8, 4, (u32)a6); wr(c.r[15] + 12, 4, (u32)a7);
    c.r[4] = (u32)a0; c.r[5] = (u32)a1; c.r[6] = (u32)a2; c.r[7] = (u32)a3;
    c.fr[4] = fb(f4); c.fr[5] = fb(f5); c.fr[6] = fb(f6); c.fr[7] = fb(f7);
    c.fr[8] = fb(f8); c.fr[9] = fb(f9); c.fr[10] = fb(f10); c.fr[11] = fb(f11);
    last_entry[depth & 7] = addr;
    if (addr == 0x0C000000u || addr == 0) { void *ra = __builtin_return_address(0); void *ra2 = __builtin_extract_return_addr(__builtin_return_address(0)); printf("  [sh4] interp_call(%08X) at depth %d, host return address %p, a0..a3 = %X %X %X %X\n", addr, depth, ra2, a0, a1, a2, a3); }
    c.pr = SENTINEL; c.pc = addr;
    depth++;
    if (trace && !skipped(addr)) printf("  [sh4] enter %08X (%d, %d, %d, %d)\n", addr, a0, a1, a2, a3);
    port_host_depth++;                           /* the runtime's interrupts wait while guest code runs (they run at the safe points) */
    while (c.pc != SENTINEL) { if ((++safe_n & 255) == 0) interp_safe_point(); step(0); }
    if (--port_host_depth == 0) hw_deliver();
    depth--;
    if (trace && !skipped(addr)) printf("  [sh4] leave %08X = %d\n", addr, (int)c.r[0]);
    ret = c.r[0]; interp_f0 = bf(c.fr[0]);
    { static unsigned int wa; static int nw2, init; static unsigned long calls, errs; if (wa && addr == wa) { calls++; if (ret) errs++; if (calls % 200 == 0) printf("[fn] %lu calls, %lu returned non-zero\n", calls, errs); } if (!init) { init = 1; wa = getenv("CT_FNWATCH") ? (unsigned int)strtoul(getenv("CT_FNWATCH"), 0, 16) : 0; } if (wa && addr == wa && (!getenv("CT_FNWATCH_ERR") || ret != 0) && nw2++ < 30) printf("[fn] %08X (%d, %d, %d, %d) = %d (0x%X)\n", addr, a0, a1, a2, a3, (int)ret, ret); }
    c.pr = save_pr; c.r[15] = save_r15;
    return (int)ret;
}
