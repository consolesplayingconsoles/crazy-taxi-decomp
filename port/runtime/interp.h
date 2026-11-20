/* interp.h: what the SH-4 interpreter (sh4.c) expects of the runtime. The console's memory sits at its own addresses (runner.c), so a
   guest address is reached directly, apart from the mirrors, which GA() folds onto the windows runner.c maps; registers that act
   (the system bus, the PowerVR, the timers) go through hw.c's port_mmio_*. */
#ifndef CT_INTERP_H
#define CT_INTERP_H
#include <stddef.h>
#include <stdint.h>
#include "port.h"
uint8_t port_mmio_r8(uint32_t a);
uint16_t port_mmio_r16(uint32_t a);
uint32_t port_mmio_r32(uint32_t a);
void port_mmio_w8(uint32_t a, uint8_t v);
void port_mmio_w16(uint32_t a, uint16_t v);
void port_mmio_w32(uint32_t a, uint32_t v);
void port_prefetch(uint32_t p);
extern volatile int port_host_depth;
void hw_deliver(void);

/* the host pointer for a guest address, or 0 where the runner maps nothing (reads then see a scratch page) */
static inline void *GA(uint32_t a)
{
    uint32_t p = a & 0x1FFFFFFFu;
    if (a >= 0x20000000u && a < 0x20800000u) return (void *)(uintptr_t)a;                      /* the game's stack */
    if ((a >= 0xE0000000u && a < 0xE4000000u) || a >= 0xFF000000u) return (void *)(uintptr_t)a;  /* store queues, SH-4 registers */
    if (a >= 0xE4000000u) return 0;
    if (p >= 0x0C000000u && p < 0x10000000u) return (void *)(uintptr_t)(0x8C000000u | (p & 0x00FFFFFFu));
    if ((p >= 0x005F0000u && p < 0x00600000u) || (p >= 0x00700000u && p < 0x00720000u) || (p >= 0x00800000u && p < 0x00A00000u))
        return (void *)(uintptr_t)(0xA0000000u | p);
    if (p >= 0x04000000u && p < 0x04800000u) return (void *)(uintptr_t)(0xA4000000u + (p & 0x7FFFFFu));
    if (p >= 0x05000000u && p < 0x05800000u) return (void *)(uintptr_t)(0xA5000000u + (p & 0x7FFFFFu));
    return 0;
}
#define GI(x) ((long long)(uint32_t)(uintptr_t)(x))
#endif
