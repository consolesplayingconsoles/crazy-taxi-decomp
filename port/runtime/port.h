/* port.h: what the native runtime's x86-64 C shares (port/runtime/). The game's own C never includes it. */
#ifndef PORT_H
#define PORT_H

#include <stdint.h>

/* the dispatch table, console address -> host function (build/native/gen.c, sorted by address) */
struct port_entry {
    uint32_t addr;       /* canonical: 0x8C000000 | (the address & 0x00FFFFFF) */
    void *fn;
    const char *name;
    int interp;          /* 1: the function has no C and runs from the original code in the interpreter (sh4.c) */
};
extern const struct port_entry port_table[];
extern const unsigned port_table_size;

/* the host function at console address addr, or 0 */
const struct port_entry *port_lookup(uint32_t addr);
/* the entry whose function holds console address addr (the nearest at or below it), or 0 */
const struct port_entry *port_nearest(uint32_t addr);

/* a function the port has no C for yet: reports it (once per name, with a count at exit) and lets the caller go on */
void port_unimplemented(const char *name, uint32_t addr);

/* registers the game reads through inline assembly (tools/10-port/native_build.py ASM_BODIES) */
extern int port_sr, port_fr15;
/* interrupts masked: the status register's BL bit, or an interrupt mask of 15 */
static inline int port_masked(void) { return (port_sr & 0x10000000) || ((port_sr >> 4) & 15) == 15; }

/* the console's memory, as the game sees it (port/runtime/runner.c) */
/* the program's name and title: native_build.py passes them (-DPORT_NAME, -DPORT_TITLE), from the game's name */
#if !defined(PORT_NAME) || !defined(PORT_TITLE)
#error "PORT_NAME and PORT_TITLE come from tools/10-port/native_build.py: build with it"
#endif

#define PORT_RAM 0x0C000000u
#define PORT_RAM_SIZE 0x01000000u
#define PORT_IMAGE_BASE 0x8C010000u

/* the SH-4 interpreter (sh4.c): functions the decomp has no C for run from the original code in guest RAM. Arguments in r4-r7 and
   fr4-fr11, the rest on the stack; the result in r0, a float result in interp_f0 */
int interp_call(uint32_t addr, int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7,
                float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
extern float interp_f0;
float *interp_xf(void);
#define port_xmtrx (interp_xf())     /* XMTRX is the interpreter's back float bank: the C's ld_ext / ftrv and the interpreted code share it */

#define PORT_INTERP(name, addr) \
    int port_interp_##name(int a, int b, int c, int d, int e, int f, int g, int h, float x0, float x1, float x2, float x3, float x4, \
                           float x5, float x6, float x7) __asm__(#name); \
    int port_interp_##name(int a, int b, int c, int d, int e, int f, int g, int h, float x0, float x1, float x2, float x3, float x4, \
                           float x5, float x6, float x7) \
    { int r = interp_call(addr, a, b, c, d, e, f, g, h, x0, x1, x2, x3, x4, x5, x6, x7); __asm__ volatile("movss %0, %%xmm0" :: "m"(interp_f0)); return r; }

#endif
