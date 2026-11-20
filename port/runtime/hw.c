/* hw.c: the Dreamcast's hardware below the library's C, as far as the game's C reaches it.

   The native build (tools/10-port/native_build.py) turns each load and store the game's C makes at a constant hardware
   register address into a call to port_mmio_r* / port_mmio_w* here; Kamui's kmiReadRegister / kmiWriteRegister (the
   PowerVR's registers by offset) come here too. Registers without a model act as memory: the windows runner.c maps at
   their P2 addresses hold their values.

   Modelled:
   - the system bus's interrupt status (SB_ISTNRM/EXT/ERR, write 1 to clear) and the three interrupt levels it drives
     (IRL 6, 4, 2 by the SB_IML* masks), and the SH-4's timer underflows; an interrupt runs the handler the library's
     exception code would (the table at VBR + 0x200, by INTEVT), with the status register's mask raised to 15, on the
     game's thread: from the tick signal, or when the game lowers its interrupt mask;
   - the video timing: the scan line counter and V-blank in / out at 59.94 Hz;
   - the SH-4's timer unit (TMU 0-2) counting down from the host's clock;
   - DMA: the SH-4's channel 2 to the PowerVR (the tile accelerator's FIFO, texture memory), the PowerVR DMA, G2
     (sound RAM), each done at once with its end interrupt raised shortly after;
   - the store queues: a flush (pref on 0xE0000000-0xE3FFFFFF) sends its 32 bytes where QACR0/1 point;
   - the PowerVR's registers that act: its id, the render start, the tile accelerator's list init and continue
     (pvr.c draws). */
#define _GNU_SOURCE
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <xmmintrin.h>

#include "port.h"
#include "game.h"

#define REG(a) (*(volatile uint32_t *)(uintptr_t)(a))
#define REG16(a) (*(volatile uint16_t *)(uintptr_t)(a))
#define REG8(a) (*(volatile uint8_t *)(uintptr_t)(a))

/* pvr.c */
void pvr_ta_write(const void *data, uint32_t bytes);
void pvr_ta_list_init(void);
void pvr_ta_list_cont(void);
void pvr_start_render(void);
void pvr_vram_write(uint32_t addr, const void *src, uint32_t bytes, int path32);

static int hw_debug;

static uint64_t now_ns(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
}

/* --- interrupts -------------------------------------------------------------------------------------------------- */

static volatile uint32_t ist_nrm, ist_ext, ist_err;
static volatile int in_interrupt;
int port_in_interrupt(void) { return in_interrupt; }   /* runner.c's watchdog */
volatile int port_host_depth; /* > 0 while host code that must not be interrupted runs (port_host_fp_enter) */

/* events due later: a bit of SB_ISTNRM raised at a time */
#define DUE_MAX 64
static struct { uint64_t at; int bit; } due[DUE_MAX];
static volatile int ndue;

void hw_raise(int bit)
{
    __atomic_or_fetch(&ist_nrm, 1u << bit, __ATOMIC_SEQ_CST);
}

void hw_raise_ext(int bit)
{
    __atomic_or_fetch(&ist_ext, 1u << bit, __ATOMIC_SEQ_CST);
}

/* SB_ISTERR bit: the hardware's errors (the TA's parameter overflow, pvr.c) */
void hw_raise_err(int bit)
{
    __atomic_or_fetch(&ist_err, 1u << bit, __ATOMIC_SEQ_CST);
}

/* raise SB_ISTNRM bit after us microseconds of the host's time (the console's DMA and rendering take time; the code that
   starts them sets up its waiting after the start) */
void hw_raise_later(int bit, unsigned us)
{
    sigset_t all, old;
    sigfillset(&all);
    pthread_sigmask(SIG_BLOCK, &all, &old);
    if (ndue < DUE_MAX) {
        due[ndue].at = now_ns() + (uint64_t)us * 1000u;
        due[ndue].bit = bit;
        ndue++;
    } else
        hw_raise(bit);
    pthread_sigmask(SIG_SETMASK, &old, 0);
}

static void run_due(uint64_t t)
{
    for (int i = 0; i < ndue;)
        if (due[i].at <= t) {
            hw_raise(due[i].bit);
            due[i] = due[--ndue];
        } else
            i++;
}

/* SB_ISTNRM as read: bit 30 any external, bit 31 any error */
static uint32_t istnrm_value(void)
{
    return ist_nrm | (ist_ext ? 0x40000000u : 0) | (ist_err ? 0x80000000u : 0);
}

/* the timer unit's state (below), for its interrupts */
static int tmu_pending(int *evt, int *level);

/* the highest-level interrupt asking, and its INTEVT code; 0 if none */
static int pending_level(int *evt)
{
    static const struct { int level, evt; uint32_t nrm, ext, err; } irl[3] = {
        {6, 0x320, 0xA05F6930u, 0xA05F6934u, 0xA05F6938u},
        {4, 0x360, 0xA05F6920u, 0xA05F6924u, 0xA05F6928u},
        {2, 0x3A0, 0xA05F6910u, 0xA05F6914u, 0xA05F6918u},
    };
    int best = 0, tevt, tlevel;
    for (int i = 0; i < 3; i++)
        if ((ist_nrm & REG(irl[i].nrm)) || (ist_ext & REG(irl[i].ext)) || (ist_err & REG(irl[i].err))) {
            best = irl[i].level;
            *evt = irl[i].evt;
            break;
        }
    if (tmu_pending(&tevt, &tlevel) && tlevel > best) {
        best = tlevel;
        *evt = tevt;
    }
    return best;
}

unsigned long port_interrupts;
void interp_save(void);
void interp_restore(void);
void port_game_irq(int evt);           /* game.c */

/* run the handlers of the interrupts the status register lets through, one after another */
void hw_deliver(void)
{
    if (in_interrupt || port_host_depth)
        return;
    for (int guard = 0; guard < 32; guard++) {
        if (port_sr & 0x10000000)
            return;
        int evt = 0, level = pending_level(&evt);
        if (level <= ((port_sr >> 4) & 15))
            return;
        uint32_t handler = REG(0x8C000000u + 0x200u + (((uint32_t)evt - 0x200u) >> 3));
        const struct port_entry *e = handler ? port_lookup(0x8C000000u | (handler & 0x00FFFFFFu)) : 0;
        void *fn = e ? e->fn : 0;
        if ((!fn || (handler & 0x00FFFFFFu) == (GAME_DEFAULT_HANDLER & 0x00FFFFFFu)) && (evt == 0x320 || evt == 0x360 || evt == 0x3A0))
            fn = (void *)port_game_irq;          /* no handler in the table: game.c runs Kamui's and the vertical blank chain */
        if (!fn) {
            static int warned;
            if (!warned++)
                fprintf(stderr, PORT_NAME ": interrupt %03X with no handler (%08X)\n", evt, handler);
            return;
        }
        in_interrupt = 1;
        int sr = port_sr;
        unsigned csr = _mm_getcsr();
        _mm_setcsr((csr & ~0x6000u) | 0x6000u | 0x8040u);   /* the game's float rules */
        port_sr = (sr & ~0xF0) | 0xF0;                         /* the exception code's mask: 15 */
        REG(0xFF000028u) = (uint32_t)evt;                      /* INTEVT */
        REG(GAME_INTEVT_COPY) = (uint32_t)evt;                 /* where the game's exception code keeps it (game.h) */
        port_interrupts++;
        interp_save();                                         /* the interpreter may be waiting on a host function: its registers survive the handler */
        ((void (*)(int))fn)(evt);
        interp_restore();
        port_sr = sr;
        _mm_setcsr(csr);
        in_interrupt = 0;
    }
}

/* the game lowered its interrupt mask (shim.c's port_set_imask, port_set_cr): what was held back runs now */
void port_imask_lowered(void) { hw_deliver(); }

/* --- video timing ------------------------------------------------------------------------------------------------ */

#define FRAME_NS 16683333ull          /* 59.94 Hz */
#define LINES 263u                     /* per field */
#define VBLANK_IN_LINE 240u            /* the picture's end: V-blank in */
#define VBLANK_OUT_LINE 21u            /* V-blank out */
static uint64_t t0;
unsigned long port_vsyncs;

static uint32_t scanline_at(uint64_t t, uint32_t *field)
{
    uint64_t f = (t - t0) / FRAME_NS, in = (t - t0) % FRAME_NS;
    if (field)
        *field = (uint32_t)(f & 1);
    return (uint32_t)(in * LINES / FRAME_NS);
}

/* SPG_STATUS: scan line (0-9), field (10), blank (11), H-sync (12), V-sync (13) */
static uint32_t spg_status(void)
{
    uint32_t field, line = scanline_at(now_ns(), &field);
    uint32_t v = line | field << 10;
    if (line >= VBLANK_IN_LINE || line < VBLANK_OUT_LINE)
        v |= 1u << 11 | 1u << 13;
    return v;
}

/* --- the timer unit ---------------------------------------------------------------------------------------------- */

#define TMU 0xFFD80000u
static struct tmu {
    int running;
    uint32_t base_cnt;     /* the count when it (re)started */
    uint64_t base_t;
    uint64_t unf_seen;     /* underflows already flagged */
} tmu[3];

static uint32_t tmu_rate(int ch)
{
    static const uint32_t div[8] = {4, 16, 64, 256, 1024, 1024, 1024, 1024};
    return 50000000u / div[REG16(TMU + 0x10 + ch * 12) & 7];
}

/* the channel's count now; *unf the underflows since its start */
static uint32_t tmu_count(int ch, uint64_t *unf)
{
    struct tmu *m = &tmu[ch];
    *unf = 0;
    if (!m->running)
        return m->base_cnt;
    uint64_t ticks = (now_ns() - m->base_t) * tmu_rate(ch) / 1000000000ull;
    if (ticks <= m->base_cnt)
        return m->base_cnt - (uint32_t)ticks;
    uint64_t period = (uint64_t)REG(TMU + 0x08 + ch * 12) + 1, past = ticks - m->base_cnt - 1;
    *unf = 1 + past / period;
    return (uint32_t)(REG(TMU + 0x08 + ch * 12) - past % period);
}

static void tmu_update_flags(void)
{
    for (int ch = 0; ch < 3; ch++) {
        uint64_t unf;
        tmu_count(ch, &unf);
        if (unf > tmu[ch].unf_seen) {
            tmu[ch].unf_seen = unf;
            REG16(TMU + 0x10 + ch * 12) |= 0x100;  /* UNF */
        }
    }
}

static int tmu_pending(int *evt, int *level)
{
    int best = 0;
    uint16_t ipra = REG16(0xFFD00004u);
    for (int ch = 0; ch < 3; ch++) {
        uint16_t tcr = REG16(TMU + 0x10 + ch * 12);
        int lv = (ipra >> (12 - 4 * ch)) & 15;
        if ((tcr & 0x120) == 0x120 && lv > best) {  /* UNF with UNIE */
            best = lv;
            *evt = 0x400 + 0x20 * ch;
        }
    }
    *level = best;
    return best;
}

static void tmu_start_stop(uint8_t tstr)
{
    for (int ch = 0; ch < 3; ch++) {
        int on = (tstr >> ch) & 1;
        if (on && !tmu[ch].running) {
            tmu[ch].running = 1;
            tmu[ch].base_cnt = REG(TMU + 0x0C + ch * 12);
            tmu[ch].base_t = now_ns();
            tmu[ch].unf_seen = 0;
        } else if (!on && tmu[ch].running) {
            uint64_t unf;
            tmu[ch].base_cnt = tmu_count(ch, &unf);
            tmu[ch].running = 0;
        }
    }
}

static uint32_t tmu_read(uint32_t a, int size)
{
    uint32_t off = a - TMU;
    if (off == 0x0C || off == 0x18 || off == 0x24) {
        uint64_t unf;
        return tmu_count((int)(off - 0x0C) / 12, &unf);
    }
    if (off == 0x10 || off == 0x1C || off == 0x28)
        tmu_update_flags();
    return size == 1 ? REG8(a) : size == 2 ? REG16(a) : REG(a);
}

static void tmu_write(uint32_t a, uint32_t v, int size)
{
    uint32_t off = a - TMU;
    if (off == 0x04) {
        REG8(a) = (uint8_t)v;
        tmu_start_stop((uint8_t)v);
        return;
    }
    if (off == 0x0C || off == 0x18 || off == 0x24) {
        int ch = (int)(off - 0x0C) / 12;
        REG(a) = v;
        tmu[ch].base_cnt = v;
        tmu[ch].base_t = now_ns();
        tmu[ch].unf_seen = 0;
        return;
    }
    if (size == 1)
        REG8(a) = (uint8_t)v;
    else if (size == 2)
        REG16(a) = (uint16_t)v;
    else
        REG(a) = v;
}

/* --- the buses: where a DMA or a store queue's bytes go ------------------------------------------------------------ */

/* a system address (any mirror) as the host pointer to its RAM, or 0 */
static void *ram_ptr(uint32_t a)
{
    uint32_t p = a & 0x1FFFFFFF;
    if (p >= 0x0C000000u && p < 0x10000000u)
        return (void *)(uintptr_t)(0x8C000000u | (p & 0x00FFFFFFu));
    return 0;
}

/* bytes written to address a of the system bus (a DMA's destination, a store queue's) */
static void bus_write(uint32_t a, const void *src, uint32_t n)
{
    uint32_t p = a & 0x1FFFFFFF;
    void *r = ram_ptr(a);
    if (r) {
        memcpy(r, src, n);
    } else if (p >= 0x10000000u && p < 0x10800000u) {          /* the tile accelerator's polygon FIFO */
        pvr_ta_write(src, n);
    } else if (p >= 0x12000000u && p < 0x12800000u) {
        pvr_ta_write(src, n);
    } else if (p >= 0x10800000u && p < 0x11000000u) {          /* YUV converter: not modelled */
        static int warned;
        if (!warned++)
            fprintf(stderr, PORT_NAME ": YUV converter input ignored\n");
    } else if (p >= 0x11000000u && p < 0x12000000u) {          /* texture memory through the TA: LMMODE0 picks the path */
        pvr_vram_write(p & 0x007FFFFFu, src, n, REG(0xA05F6884u) & 1);
    } else if (p >= 0x13000000u && p < 0x14000000u) {
        pvr_vram_write(p & 0x007FFFFFu, src, n, REG(0xA05F6888u) & 1);
    } else if (p >= 0x04000000u && p < 0x05000000u) {           /* video memory, 64-bit path */
        pvr_vram_write(p & 0x007FFFFFu, src, n, 0);
    } else if (p >= 0x05000000u && p < 0x06000000u) {           /* 32-bit path */
        pvr_vram_write(p & 0x007FFFFFu, src, n, 1);
    } else if (p >= 0x00800000u && p < 0x00A00000u) {           /* sound RAM */
        memcpy((void *)(uintptr_t)(0xA0000000u | p), src, n);
    } else {
        static int warned;
        if (warned++ < 8)
            fprintf(stderr, PORT_NAME ": %u bytes to bus address %08X dropped\n", n, a);
    }
}

/* for host code that writes where the library's store queues would (nlib.c's model kernel) */
void hw_bus_write(uint32_t a, const void *src, uint32_t n) { bus_write(a, src, n); }

/* port_prefetch (shim.c): a store queue's flush. The SH-4 has two store queues of 32 bytes, SQ0 and SQ1, picked by
   address bit 5 whatever the other bits; a flush sends the queue's contents, and the queue keeps them. The NAOMI library
   counts on that: closing a shadow volume (the code before nlMvSendTriangle) flushes both queues again at the next
   address without storing to them, so the last triangle goes out once more after the closing headers. Here the area is
   memory (runner.c), so each queue is modelled on it: a word the game stored since the last flush of that block is the
   game's; a word it did not store (still the marker the flush leaves) is the queue's kept word. With the area as plain
   memory, those flushes sent stale bytes, the opaque modifier list went 32 bytes out of step, its end of list was read
   as data, the translucent list's end never came, and Kamui gave up the frame (the recorded stalls in the race).
   A page's words become markers at the first flush in it, and the next page's with it (a block flushed first thing in a
   page was then marked before), all but the block being flushed and the blocks either side of it (the other queue's,
   which may hold stores not yet flushed); only the pages the game touches take memory.

   PORT_DEBUG_SQ: a flush into the opaque modifier list whose first word is a parameter kind no game writes there (types 2,
   3 and 6) is logged with its destination, its words and the host call stack (tools/10-port/where.sh names them) */
#include <execinfo.h>
#define SQ_MARK 0x7FA5C3E1u
#define SQ_BASE 0xE0000000u
#define SQ_SIZE 0x04000000u
static uint32_t sq_kept[2][8];
static uint8_t sq_page_ready[SQ_SIZE >> 12];

static void sq_mark_page(uint32_t page, uint32_t keep)
{
    if (page >= (SQ_SIZE >> 12) || sq_page_ready[page])
        return;
    uint32_t *w = (uint32_t *)(uintptr_t)(SQ_BASE + (page << 12));
    for (uint32_t i = 0; i < 1024; i++) {
        uint32_t at = SQ_BASE + (page << 12) + i * 4;
        if (at - keep >= 96)                      /* the flushed block and its neighbours hold the game's stores */
            w[i] = SQ_MARK;
    }
    sq_page_ready[page] = 1;
}

void hw_sq_flush(uint32_t a)
{
    uint32_t qacr = REG(0xFF000038u + ((a >> 5) & 1) * 4);
    uint32_t dest = ((qacr & 0x1C) << 24) | (a & 0x03FFFFE0u);
    uint32_t page = ((a & ~31u) - SQ_BASE) >> 12, k = (a >> 5) & 1;
    sq_mark_page(page, (a & ~31u) - 32);
    sq_mark_page(page + 1, (a & ~31u) - 32);
    uint32_t *m = (uint32_t *)(uintptr_t)(a & ~31u), out[8];
    for (int i = 0; i < 8; i++) {
        out[i] = m[i] == SQ_MARK ? sq_kept[k][i] : m[i];
        sq_kept[k][i] = out[i];
        m[i] = SQ_MARK;
    }
    static int sq_debug = -1, logged;
    if (sq_debug < 0)
        sq_debug = getenv("PORT_DEBUG_SQ") != 0;
    /* only into the opaque modifier list's buffer (the NAOMI library's list pointers, game.h): from the lowest its pointer
       has been to the lowest the translucent list's has been. A sprite's second half starts with a float in any list */
    static uint32_t base1 = 0xFFFFFFFFu, base2 = 0xFFFFFFFFu;
    if (sq_debug > 0 && GAME_NL_LIST_PTRS) {
        uint32_t arr = REG(GAME_NL_LIST_PTRS);
        uint32_t p1 = arr ? REG(arr + 4) & 0x1FFFFFFFu : 0, p2 = arr ? REG(arr + 8) & 0x1FFFFFFFu : 0;
        if (p1 && p1 < base1)
            base1 = p1;
        if (p2 && p2 < base2)
            base2 = p2;
    }
    if (sq_debug > 0 && logged < 200 && dest >= base1 && dest < base2) {
        int type = (int)(out[0] >> 29);
        if (type == 2 || type == 3 || type == 6) {
            void *bt[8];
            int n = backtrace(bt, 8);
            char line[400];
            int c = snprintf(line, sizeof line, PORT_NAME ": sq: flush %08X -> %08X:", a, dest);
            for (int i = 0; i < 8; i++)
                c += snprintf(line + c, sizeof line - c, " %08X", out[i]);
            c += snprintf(line + c, sizeof line - c, " | callers");
            for (int i = 1; i < n && c < (int)sizeof line - 20; i++)
                c += snprintf(line + c, sizeof line - c, " %p", bt[i]);
            fprintf(stderr, "%s\n", line);
            logged++;
        }
    }
    bus_write(dest, out, 32);
}

/* channel 2 to the PowerVR: SAR2 (0xFFA00020) the source, SB_C2DSTAT the destination, SB_C2DLEN the length */
static void ch2_dma(void)
{
    uint32_t src = REG(0xFFA00020u), dst = REG(0xA05F6800u), len = REG(0xA05F6804u);
    void *s = ram_ptr(src);
    if (hw_debug)
        fprintf(stderr, "hw: ch2 DMA %08X -> %08X, %u bytes\n", src, dst, len);
    if (s && len)
        bus_write(dst, s, len);
    REG(0xFFA00020u) = src + len;
    REG(0xFFA00028u) = 0;                  /* DMATCR2 */
    REG(0xFFA0002Cu) |= 2;                 /* CHCR2 TE */
    REG(0xA05F6800u) = dst + len;
    REG(0xA05F6804u) = 0;
    REG(0xA05F6808u) = 0;
    hw_raise_later(19, 20);                /* channel 2 DMA end */
}

/* the PowerVR DMA: PDSTAP the PowerVR side, PDSTAR the system side, PDLEN, PDDIR 0 to the PowerVR */
static void pvr_dma(void)
{
    uint32_t pa = REG(0xA05F7C00u), sa = REG(0xA05F7C04u), len = REG(0xA05F7C08u), dir = REG(0xA05F7C0Cu);
    void *s = ram_ptr(sa);
    if (hw_debug)
        fprintf(stderr, "hw: PVR DMA %08X %s %08X, %u bytes\n", sa, dir ? "<-" : "->", pa, len);
    if (s && len && !dir)
        bus_write(pa, s, len);
    else if (s && len) {
        uint32_t p = pa & 0x1FFFFFFF;
        if (p >= 0x04000000u && p < 0x06000000u)
            memcpy(s, (void *)(uintptr_t)(0xA0000000u | (p & 0x017FFFFFu)), len);
    }
    REG(0xA05F7C18u) = 0;
    hw_raise_later(11, 20);                /* PVR DMA end */
}

/* G2 DMA channel ch: STAG the G2 side (sound RAM), STAR the system side, LEN, DIR 0 to G2 */
static void g2_dma(int ch)
{
    uint32_t b = 0xA05F7800u + (uint32_t)ch * 0x20;
    uint32_t ga = REG(b), sa = REG(b + 4), len = REG(b + 8) & 0x7FFFFFFF, dir = REG(b + 12);
    void *s = ram_ptr(sa);
    if (hw_debug)
        fprintf(stderr, "hw: G2 DMA %d %08X %s %08X, %u bytes\n", ch, sa, dir ? "<-" : "->", ga, len);
    uint32_t gp = ga & 0x1FFFFFFF;
    if (s && len && gp >= 0x00800000u && gp + len <= 0x00A00000u) {
        void *g = (void *)(uintptr_t)(0xA0000000u | gp);
        if (dir)
            memcpy(s, g, len);
        else
            memcpy(g, s, len);
    }
    REG(b + 0x18) = 0;
    if (!(REG(b + 8) & 0x80000000u))       /* the enable stays unless the length's top bit asks to clear it */
        ;
    hw_raise_later(15 + ch, 20);           /* AICA DMA end (ch 0), external DMA 1-3 */
}

/* --- the PowerVR's registers (0xA05F8000 + offset) ---------------------------------------------------------------- */

#define PVR 0xA05F8000u

static uint32_t pvr_reg_read(uint32_t off)
{
    switch (off) {
    case 0x000:
        return 0x17FD11DBu;                /* ID */
    case 0x004:
        return 0x00000011u;                /* REVISION: the retail chip */
    case 0x10C:
        return spg_status();
    default:
        return REG(PVR + off);
    }
}

static void pvr_reg_write(uint32_t off, uint32_t v)
{
    if (getenv("PORT_DEBUG_PVRREG") && off < 0x1000)
        fprintf(stderr, "pvr reg %03X = %08X\n", off, v);
    REG(PVR + off) = v;
    switch (off) {
    case 0x014:                            /* STARTRENDER */
        pvr_start_render();
        break;
    case 0x144:                            /* TA_LIST_INIT */
        if (v & 0x80000000u)
            pvr_ta_list_init();
        REG(PVR + off) = 0;
        break;
    case 0x160:                            /* TA_LIST_CONT */
        if (v & 0x80000000u)
            pvr_ta_list_cont();
        REG(PVR + off) = 0;
        break;
    default:
        break;
    }
}

int32_t kmi_read_register(int32_t off) __asm__("kmiReadRegister");
int32_t kmi_read_register(int32_t off) { return (int32_t)pvr_reg_read((uint32_t)off & 0x1FFC); }
int32_t kmi_write_register(int32_t off, int32_t v) __asm__("kmiWriteRegister");
int32_t kmi_write_register(int32_t off, int32_t v)
{
    pvr_reg_write((uint32_t)off & 0x1FFC, (uint32_t)v);
    return 1;
}

/* --- the register accesses the build routes here ------------------------------------------------------------------ */

/* a register address as its P2 window (where runner.c maps the memory behind it) */
static uint32_t canon(uint32_t a)
{
    if (a >> 24 == 0xFF)
        return a;
    return 0xA0000000u | (a & 0x1FFFFFFF);
}

static uint32_t mmio_read(uint32_t a, int size)
{
    a = canon(a);
    if (a >> 16 == 0xFFD8)
        return tmu_read(a, size);
    if (a >= 0xA05F8000u && a < 0xA05F9000u && size == 4)
        return pvr_reg_read(a - PVR);
    switch (a) {
    case 0xA05F689Cu:                      /* SB_SBREV: the retail system bus */
        return 0x0B;
    case 0xA05F688Cu: {                    /* SB_FFST: the G2 FIFO's state, polled before each sound RAM access. Empty;
                                              the poll takes the bus's time (about 300 ns), so that loops counting them
                                              (nlsndInit's wait for the sound driver) last as long as on the console */
        uint64_t until = now_ns() + 300;
        while (now_ns() < until)
            ;
        return 0;
    }
    case 0xA080005Cu: {                    /* the sound driver's ready word: nlsndInit (the NAOMI library's) reads it in a
                                              counted loop after it starts the ARM7. The ARM7 runs on the sound thread in
                                              real time, the loop at the PC's speed: a read that finds zero waits for the
                                              driver to write it, up to two seconds from the first read of a wait (a read
                                              after a pause of 100 ms starts a new wait); after that the game's own count
                                              ends the loop, as on the console */
        static uint64_t first, last;
        uint64_t t = now_ns();
        if (t - last > 100000000ull)
            first = t;
        while (!REG(a) && now_ns() - first < 2000000000ull) {
            struct timespec ts = {0, 1000000};
            nanosleep(&ts, 0);
        }
        last = now_ns();
        break;
    }
    case 0xA05F6900u:
        return istnrm_value();
    case 0xA05F6904u:
        return ist_ext;
    case 0xA05F6908u:
        return ist_err;
    default:
        break;
    }
    return size == 1 ? REG8(a) : size == 2 ? REG16(a) : REG(a);
}

static void mmio_write(uint32_t a, uint32_t v, int size)
{
    a = canon(a);
    if (a >> 16 == 0xFFD8) {
        tmu_write(a, v, size);
        return;
    }
    if (a >= 0xA05F8000u && a < 0xA05F9000u && size == 4) {
        pvr_reg_write(a - PVR, v);
        return;
    }
    switch (a) {
    case 0xA05F6900u:                      /* write 1 to clear */
        __atomic_and_fetch(&ist_nrm, ~v, __ATOMIC_SEQ_CST);
        return;
    case 0xA05F6904u:
        __atomic_and_fetch(&ist_ext, ~v, __ATOMIC_SEQ_CST);
        return;
    case 0xA05F6908u:
        __atomic_and_fetch(&ist_err, ~v, __ATOMIC_SEQ_CST);
        return;
    default:
        break;
    }
    if (size == 1)
        REG8(a) = (uint8_t)v;
    else if (size == 2)
        REG16(a) = (uint16_t)v;
    else
        REG(a) = v;
    switch (a) {
    case 0xA05F6808u:                      /* SB_C2DST: channel 2 DMA start */
        if (v & 1)
            ch2_dma();
        break;
    case 0xA05F7C18u:                      /* SB_PDST: PVR DMA start */
        if (v & 1)
            pvr_dma();
        break;
    case 0xA05F7818u: case 0xA05F7838u: case 0xA05F7858u: case 0xA05F7878u: /* SB_ADST.. G2 DMA start */
        if (v & 1)
            g2_dma((int)((a - 0xA05F7818u) / 0x20));
        break;
    case 0xA05F6920u: case 0xA05F6924u: case 0xA05F6928u: case 0xA05F6930u: case 0xA05F6934u: case 0xA05F6938u:
    case 0xA05F6910u: case 0xA05F6914u: case 0xA05F6918u:
        hw_deliver();                      /* a mask opened: what is pending may run */
        break;
    default:
        break;
    }
}

uint8_t port_mmio_r8(uint32_t a) { return (uint8_t)mmio_read(a, 1); }
uint16_t port_mmio_r16(uint32_t a) { return (uint16_t)mmio_read(a, 2); }
uint32_t port_mmio_r32(uint32_t a) { return mmio_read(a, 4); }
float port_mmio_rf(uint32_t a)
{
    uint32_t v = mmio_read(a, 4);
    float f;
    memcpy(&f, &v, 4);
    return f;
}
void port_mmio_w8(uint32_t a, uint8_t v) { mmio_write(a, v, 1); }
void port_mmio_w16(uint32_t a, uint16_t v) { mmio_write(a, v, 2); }
void port_mmio_w32(uint32_t a, uint32_t v) { mmio_write(a, v, 4); }
void port_mmio_wf(uint32_t a, float f)
{
    uint32_t v;
    memcpy(&v, &f, 4);
    mmio_write(a, v, 4);
}

/* --- the tick: video timing, due events, the timers' underflows; then the interrupts ------------------------------- */

static uint64_t last_tick;

/* the number of times line `line` has begun in the fields up to time t */
static uint64_t lines_passed(uint64_t t, uint32_t line)
{
    uint64_t abs = (t - t0) * LINES / FRAME_NS; /* lines since the start */
    return abs >= line ? (abs - line) / LINES + 1 : 0;
}

static void on_tick(int sig)
{
    (void)sig;
    uint64_t t = now_ns();
    /* V-blank in at line 240, out at line 21: once per field, however late the tick */
    if (lines_passed(t, VBLANK_IN_LINE) > lines_passed(last_tick, VBLANK_IN_LINE)) {
        hw_raise(3);
        port_vsyncs++;
    }
    if (lines_passed(t, VBLANK_OUT_LINE) > lines_passed(last_tick, VBLANK_OUT_LINE))
        hw_raise(4);
    last_tick = t;
    /* the AICA's clock: seconds since 1950 in two 16-bit halves (0x00710000, 0x00710004) */
    {
        uint32_t s = (uint32_t)time(0) + 631152000u;
        REG(0xA0710000u) = s >> 16;
        REG(0xA0710004u) = s & 0xFFFF;
    }
    run_due(t);
    tmu_update_flags();
    hw_deliver();
}

static pthread_t game;

static void *ticker(void *arg)
{
    (void)arg;
    for (;;) {
        struct timespec ts = {0, 250000};  /* 4 kHz */
        nanosleep(&ts, 0);
        pthread_kill(game, SIGRTMIN + 1);
    }
    return 0;
}

void port_hw_init(void)
{
    hw_debug = getenv("PORT_DEBUG_HW") != 0;
    t0 = last_tick = now_ns();
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_handler = on_tick;
    sa.sa_flags = SA_RESTART | SA_ONSTACK;
    sigaction(SIGRTMIN + 1, &sa, 0);
    game = pthread_self();
    pthread_t t;
    pthread_create(&t, 0, ticker, 0);
}
