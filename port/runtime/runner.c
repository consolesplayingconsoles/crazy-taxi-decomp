/* runner.c: the native game's start. It gives the game's C the machine it was written for, as far as that C can see:

   - the console's 16 MB of main RAM at its own address, 0x0C000000, with the same memory at the cached and uncached
     mirrors 0x8C000000 and 0xAC000000 (one memfd mapped three times), and zeroed stand-ins for the hardware register
     and video/sound memory windows the game's C touches;
   - 1ST_READ.BIN loaded at PORT_IMAGE_BASE (0x8C010000: the cached mirror of the address the game is linked at), which gives the game its tables, strings and initial data at their addresses
     (the code bytes there are data to the host: they are never run);
   - a stack inside the low 2 GB, since the game keeps addresses of its locals in 32-bit words;
   - the SH-4's float rounding for the basic operations (toward zero, denormals flushed), through MXCSR;
   - calls to console addresses: that memory is not executable, so such a call faults, and the handler sends it on to
     the host function the dispatch table gives for that address, with the arguments still in their registers.

   Then it runs what the console's start code (GAME_START, game.h) runs: the stack fill, _INITSCT (the bss clear and the data
   copies), the library entries (ovMdlEntryTbl) and MainLoop, through its thunk.
   The layout follows the native runner of the Sonic Adventure decompilation (github.com/reshaped/sonic-adventure,
   engine/native): the game's own scheduler, fixed addresses in a mapped domain, the game on a low stack. */
#define _GNU_SOURCE
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/personality.h>
#include <ucontext.h>
#include <fcntl.h>
#include <sys/time.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <pthread.h>
#include <xmmintrin.h>

#include "port.h"
#include "game.h"

int port_sr = 0x600000F0, port_fr15; /* privileged, register bank 1, interrupts masked (15); BL clear, as start-up leaves it */

#define GAME_STACK 0x20000000u
#define GAME_STACK_SIZE 0x00800000u

static const char *image_path;
extern const char *port_data_dir;
extern int port_headless;
int port_platform_init(void);
int port_data_path(const char *name, char *out, size_t size);
static int strict, trace_calls;
static unsigned max_seconds;

static void die(const char *what)
{
    fprintf(stderr, PORT_NAME ": %s: %s\n", what, strerror(errno));
    exit(2);
}

static char **saved_argv;

static void map_fixed(uint64_t at, size_t size, int fd, const char *what)
{
    /* something of the host's (its heap, with address randomization) can sit where the console's memory goes: run
       again once without the randomization */
    if (!(personality(0xffffffff) & ADDR_NO_RANDOMIZE) && msync((void *)(uintptr_t)(at & ~0xFFFull), 4096, MS_ASYNC) == 0) {
        personality(personality(0xffffffff) | ADDR_NO_RANDOMIZE);
        execv("/proc/self/exe", saved_argv);
    }
    void *p = mmap((void *)at, size, PROT_READ | PROT_WRITE, MAP_FIXED_NOREPLACE | (fd < 0 ? MAP_PRIVATE | MAP_ANONYMOUS : MAP_SHARED),
                   fd, 0);
    /* the probe above sees only the range's first page: a mapping of the host's further in fails here instead */
    if (p != (void *)at && errno == EEXIST && !(personality(0xffffffff) & ADDR_NO_RANDOMIZE)) {
        personality(personality(0xffffffff) | ADDR_NO_RANDOMIZE);
        execv("/proc/self/exe", saved_argv);
    }
    if (p != (void *)at)
        die(what);
}

static void map_machine(void)
{
    int fd = memfd_create("dreamcast-ram", 0);
    if (fd < 0 || ftruncate(fd, PORT_RAM_SIZE) < 0)
        die("main RAM");
    map_fixed(PORT_RAM, PORT_RAM_SIZE, fd, "main RAM at 0x0C000000");
    map_fixed(0x8C000000u, PORT_RAM_SIZE, fd, "RAM mirror at 0x8C000000");
    map_fixed(0xAC000000u, PORT_RAM_SIZE, fd, "RAM mirror at 0xAC000000");
    /* hardware windows, as plain memory for now: system bus and video registers, sound, video memory, the SH-4's own registers */
    map_fixed(0xA05F0000u, 0x00010000u, -1, "system and video registers");
    map_fixed(0xA0700000u, 0x00010000u, -1, "sound registers");
    map_fixed(0xA0710000u, 0x00010000u, -1, "the AICA's clock");
    map_fixed(0xA0800000u, 0x00200000u, -1, "sound RAM");
    map_fixed(0xA4000000u, 0x00800000u, -1, "video RAM (64-bit path)");
    map_fixed(0xA5000000u, 0x00800000u, -1, "video RAM (32-bit path)");
    /* the store queues: the game writes a block anywhere in 0xE0000000-0xE3FFFFFF (the low bits of the destination),
       then flushes it (hw.c); only the pages it touches take memory */
    map_fixed(0xE0000000u, 0x04000000u, -1, "store queues");
    map_fixed(0xFF000000u, 0x01000000u, -1, "SH-4 control registers");
    /* the boot ROM and flash (0x00000000-0x0021FFFF), read as zeros: the game reads there through a null entry of its own
       tables and goes on, on the console with the ROM's bytes. Read only: a write
       still faults. Below vm.mmap_min_addr only root may map; else the runtime says so and such a read faults as before */
    void *rom = mmap((void *)0, 0x00220000u, PROT_READ, MAP_FIXED_NOREPLACE | MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (rom != (void *)0)
        fprintf(stderr, PORT_NAME ": the boot ROM's addresses (0x00000000) could not be mapped (%s): a read there faults\n",
                strerror(errno));
    map_fixed(GAME_STACK, GAME_STACK_SIZE, -1, "the game's stack");
}

static void load_image(void)
{
    static char path[1024];
    if (!image_path) {
        if (!port_data_path("1ST_READ.BIN", path, sizeof path)) {
            fprintf(stderr, PORT_NAME ": no 1ST_READ.BIN in the data folder %s (give it with --data DIR: a folder holding the "
                            "files of your " PORT_TITLE " disc)\n", port_data_dir);
            exit(2);
        }
        image_path = path;
    }
    FILE *f = fopen(image_path, "rb");
    if (!f)
        die(image_path);
    size_t n = fread((void *)(uintptr_t)PORT_IMAGE_BASE, 1, PORT_RAM_SIZE - (PORT_IMAGE_BASE & 0x00FFFFFFu), f);
    fclose(f);
    fprintf(stderr, PORT_NAME ": %s, %zu bytes at 0x%08X\n", image_path, n, PORT_IMAGE_BASE);
}

static uint32_t word(uint32_t addr)
{
    return *(uint32_t *)(uintptr_t)addr;
}

/* what the start code (GAME_START) does before _INITSCT: the word "SEGA" over 0x8C00C000-0x8C00F400 (the
   console's system stack area, which the host does not use for its stack; filled for whatever reads it) */
static void start_fill(void)
{
    for (uint32_t a = 0x8C00C000u; a < 0x8C00F400u; a += 4)
        *(uint32_t *)(uintptr_t)a = 0x41474553u;
}

/* --- dispatch -------------------------------------------------------------------------------------------------------- */

const struct port_entry *port_lookup(uint32_t addr)
{
    unsigned lo = 0, hi = port_table_size;
    while (lo < hi) {
        unsigned mid = (lo + hi) / 2;
        if (port_table[mid].addr < addr)
            lo = mid + 1;
        else
            hi = mid;
    }
    return lo < port_table_size && port_table[lo].addr == addr ? &port_table[lo] : 0;
}

const struct port_entry *port_nearest(uint32_t addr)
{
    const struct port_entry *best = 0;
    for (unsigned i = 0; i < port_table_size && port_table[i].addr <= addr; i++)
        best = &port_table[i];
    return best;
}

static void report_fault(const char *kind, uint64_t rip, uint64_t addr)
{
    char line[200];
    int n = snprintf(line, sizeof line, PORT_NAME ": %s at rip=%#lx, address %#lx\n", kind, (unsigned long)rip, (unsigned long)addr);
    if (write(2, line, n) < 0)
        _exit(3);
}

/* Integer division by zero. The SH-4 has no divide instruction: the game's C divides through the compiler's runtime
   (_divls, _divlu, _modls, _modlu), which for a divisor of 0 returns 0 and sets the runtime's errno (GAME_ERRNO) to
   0x44E; nothing traps. On the host the same C compiles to div / idiv, which does. So a div or idiv that faults with a
   divisor of 0 is given the console's answer (quotient and remainder 0, errno set) and the game goes on after it. Any
   other arithmetic fault (INT_MIN / -1) is not handled here. Returns 1 when it handled the fault. */
static int console_div_by_zero(ucontext_t *uc)
{
    greg_t *g = uc->uc_mcontext.gregs;
    static const int R[16] = {REG_RAX, REG_RCX, REG_RDX, REG_RBX, REG_RSP, REG_RBP, REG_RSI, REG_RDI,
                              REG_R8, REG_R9, REG_R10, REG_R11, REG_R12, REG_R13, REG_R14, REG_R15};
    const unsigned char *p = (const unsigned char *)(uintptr_t)g[REG_RIP];
    int n = 0, size = 4, rex = 0, addr32 = 0;
    for (;; n++) {                                  /* prefixes */
        unsigned char c = p[n];
        if (c == 0x66)
            size = 2;
        else if (c == 0x67)
            addr32 = 1;
        else if (!(c == 0x2E || c == 0x3E || c == 0x26 || c == 0x36 || c == 0x64 || c == 0x65 || c == 0xF2 || c == 0xF3))
            break;
    }
    if ((p[n] & 0xF0) == 0x40)
        rex = p[n++];
    if (rex & 8)
        size = 8;
    unsigned char op = p[n++];
    if (op == 0xF6)
        size = 1;
    else if (op != 0xF7)
        return 0;
    unsigned char modrm = p[n++];
    int mod = modrm >> 6, reg = (modrm >> 3) & 7, rm = modrm & 7;
    if (reg != 6 && reg != 7)                       /* F6/F7 /6 div, /7 idiv */
        return 0;
    uint64_t divisor;
    if (mod == 3) {
        if (size == 1 && !rex && rm >= 4)           /* ah, ch, dh, bh */
            divisor = (uint64_t)g[R[rm - 4]] >> 8;
        else
            divisor = (uint64_t)g[R[rm | (rex & 1) << 3]];
    } else {
        uint64_t ea = 0;
        int rip_rel = 0;
        if (rm == 4) {
            unsigned char sib = p[n++];
            int idx = ((sib >> 3) & 7) | (rex & 2) << 2, base = sib & 7;
            if (idx != 4)
                ea += (uint64_t)g[R[idx]] << (sib >> 6);
            if (base == 5 && mod == 0) {
                int32_t d;
                memcpy(&d, p + n, 4), n += 4, ea += (uint64_t)(int64_t)d;
            } else
                ea += (uint64_t)g[R[base | (rex & 1) << 3]];
        } else if (rm == 5 && mod == 0) {
            int32_t d;
            memcpy(&d, p + n, 4), n += 4, ea += (uint64_t)(int64_t)d, rip_rel = 1;
        } else
            ea += (uint64_t)g[R[rm | (rex & 1) << 3]];
        if (mod == 1)
            ea += (uint64_t)(int64_t)(int8_t)p[n++];
        else if (mod == 2) {
            int32_t d;
            memcpy(&d, p + n, 4), n += 4, ea += (uint64_t)(int64_t)d;
        }
        if (rip_rel)
            ea += (uint64_t)g[REG_RIP] + (uint64_t)n;
        if (addr32)
            ea = (uint32_t)ea;
        divisor = 0;
        memcpy(&divisor, (const void *)(uintptr_t)ea, (size_t)size);
    }
    if (size < 8)
        divisor &= (1ull << (8 * size)) - 1;
    if (divisor != 0)
        return 0;
    if (size == 1)
        g[REG_RAX] &= ~(greg_t)0xFFFF;              /* al the quotient, ah the remainder */
    else if (size == 2)
        g[REG_RAX] &= ~(greg_t)0xFFFF, g[REG_RDX] &= ~(greg_t)0xFFFF;
    else
        g[REG_RAX] = 0, g[REG_RDX] = 0;             /* a 32-bit result clears the upper half too */
    *(volatile uint32_t *)(uintptr_t)GAME_ERRNO = 0x44E;
    g[REG_RIP] += n;
    return 1;
}

/* the last fault on_fault saw, for the watchdog: a game stuck faulting over and over shows where */
static volatile int last_fault_sig;
static volatile uint64_t last_fault_rip, last_fault_addr, last_fault_rbp;
static volatile unsigned long fault_count;

/* a call to an address where no function is listed: interpreted there */
static uint32_t raw_addr;
static int raw_guest_call(int a, int b, int c, int d, int e, int f, int g, int h, float x0, float x1, float x2, float x3, float x4,
                          float x5, float x6, float x7)
{
    int r = interp_call(raw_addr, a, b, c, d, e, f, g, h, x0, x1, x2, x3, x4, x5, x6, x7);
    __asm__ volatile("movss %0, %%xmm0" :: "m"(interp_f0));
    return r;
}

static void on_fault(int sig, siginfo_t *si, void *ctx)
{
    ucontext_t *uc = ctx;
    last_fault_sig = sig;
    last_fault_rip = uc->uc_mcontext.gregs[REG_RIP];
    last_fault_addr = (uint64_t)(uintptr_t)si->si_addr;
    last_fault_rbp = uc->uc_mcontext.gregs[REG_RBP];
    fault_count++;
    if (sig == SIGFPE && console_div_by_zero(uc))
        return;
    uint64_t rip = uc->uc_mcontext.gregs[REG_RIP];
    uint32_t target = (uint32_t)rip;
    if (sig == SIGSEGV && rip == target && (target >> 24 == 0x0C || target >> 24 == 0x8C || target >> 24 == 0xAC)) {
        const struct port_entry *e = port_lookup(0x8C000000u | (target & 0x00FFFFFFu));
        if (e) {
            if (trace_calls) {
                char line[120];
                int n = snprintf(line, sizeof line, "call %08X %s\n", target, e->name);
                if (write(2, line, n) < 0)
                    _exit(3);
            }
            uc->uc_mcontext.gregs[REG_RIP] = (greg_t)(uintptr_t)e->fn;
            return;
        }
        /* a call to an address where functions.txt lists no function: code the decomp has not found yet. The game stops
           here on purpose, so it gets listed and given C instead of running on with a wrong result; PORT_UNLISTED_OK=1
           lets it return 0 and go on (the old behaviour) */
        raw_addr = target;                        /* code no function owns (a jump into the middle of one, a tail): interpreted from the original */
        uc->uc_mcontext.gregs[REG_RIP] = (greg_t)(uintptr_t)raw_guest_call;
        return;
        if (!getenv("PORT_UNLISTED_OK")) {
            const struct port_entry *n = port_nearest(target);
            char line[200];
            int k = snprintf(line, sizeof line, PORT_NAME ": STOP: call to 0x%08X, where no function is listed (nearest before it: %s); "
                             "list it in functions.txt and give it C\n", target, n ? n->name : "?");
            if (write(2, line, k) < 0)
                _exit(86);
            FILE *f = fopen("unlisted_calls.txt", "a");
            if (f) {
                fprintf(f, "0x%08X %s\n", target, n ? n->name : "?");
                fclose(f);
            }
            _exit(86);
        }
        static uint32_t warned[64];
        int seen = 0;
        for (int i = 0; i < 64 && warned[i]; i++)
            seen |= warned[i] == target;
        if (!seen) {
            for (int i = 0; i < 64; i++)
                if (!warned[i]) { warned[i] = target; break; }
            char line[120];
            int n = snprintf(line, sizeof line, PORT_NAME ": call to 0x%08X (no function there) returns 0\n", target);
            if (write(2, line, n) < 0)
                _exit(3);
        }
        uint64_t *sp = (uint64_t *)(uintptr_t)uc->uc_mcontext.gregs[REG_RSP];
        uc->uc_mcontext.gregs[REG_RIP] = (greg_t)sp[0];
        uc->uc_mcontext.gregs[REG_RSP] += 8;
        uc->uc_mcontext.gregs[REG_RAX] = 0;
        return;
    }
    report_fault(sig == SIGSEGV ? "memory fault" : sig == SIGILL ? "illegal instruction" : sig == SIGFPE ? "arithmetic fault" : "bus error",
                 rip, (uint64_t)(uintptr_t)si->si_addr);
    {
        /* where it came from: the word at the stack top (a call to 0 leaves its return address there) and the frame chain */
        uint64_t rsp = uc->uc_mcontext.gregs[REG_RSP], rbp = uc->uc_mcontext.gregs[REG_RBP];
        char line[400];
        int n = snprintf(line, sizeof line, PORT_NAME ": [rsp] %#lx, callers", (unsigned long)(rsp ? *(uint64_t *)rsp : 0));
        for (int i = 0; i < 12 && rbp > 0x1000 && rbp < 0x7fffffffffffull && !(rbp & 3); i++) {
            n += snprintf(line + n, sizeof line - n, " %#lx", (unsigned long)*(uint64_t *)(rbp + 8));
            rbp = *(uint64_t *)rbp;
            if (n > 360)
                break;
        }
        line[n++] = '\n';
        if (write(2, line, n) < 0)
            _exit(3);
    }
    _exit(4);
}

/* the watchdog: when no frame ends for 3 seconds, the game thread reports where it is (a spin on hardware the port
   doesn't give, most often) */
extern unsigned long port_frames;
static pthread_t game_thread;

static volatile int watchdog_answered;
static pid_t game_tid;

static void wd_write(const char *s, int n)
{
    if (write(2, s, (size_t)n) < 0)
        _exit(3);
}

/* SIGUSR1 from the watchdog: the game thread says where it is (its host rip and frame chain; tools/10-port/where.sh
   turns the addresses into functions and lines) */
static void on_watchdog(int sig, siginfo_t *si, void *ctx)
{
    (void)sig;
    (void)si;
    ucontext_t *uc = ctx;
    uint64_t rip = uc->uc_mcontext.gregs[REG_RIP], rbp = uc->uc_mcontext.gregs[REG_RBP];
    char line[300];
    int n = snprintf(line, sizeof line, PORT_NAME ": watchdog: game thread at rip=%#lx, callers", (unsigned long)rip);
    /* the frame chain, followed only inside the interrupted stack (the game's C keeps no frame pointer everywhere) */
    uint64_t rsp = uc->uc_mcontext.gregs[REG_RSP];
    for (int i = 0; i < 12 && rbp >= rsp && rbp < rsp + (8u << 20) && !(rbp & 7); i++) {
        uint64_t ret = *(uint64_t *)(rbp + 8);
        n += snprintf(line + n, sizeof line - n, " %#lx", (unsigned long)ret);
        rbp = *(uint64_t *)rbp;
        if (n > 270)
            break;
    }
    line[n++] = '\n';
    wd_write(line, n);
    watchdog_answered = 1;
}

/* the game thread's blocked and pending signals, from /proc */
static void wd_sigstate(void)
{
    char path[64], buf[2048], out[256];
    snprintf(path, sizeof path, "/proc/self/task/%d/status", (int)game_tid);
    FILE *f = fopen(path, "r");
    if (!f)
        return;
    while (fgets(buf, sizeof buf, f))
        if (!strncmp(buf, "SigBlk:", 7) || !strncmp(buf, "SigPnd:", 7) || !strncmp(buf, "State:", 6)) {
            int n = snprintf(out, sizeof out, PORT_NAME ": watchdog:   game thread %s", buf);
            wd_write(out, n);
        }
    fclose(f);
}

/* the watchdog: when no frame ends for 3 seconds, it logs the state and samples where the game thread is every 2
   seconds (a loop shows as the same few addresses); it never ends the program: a frozen game stays to be read */
static void *watchdog(void *arg)
{
    (void)arg;
    extern unsigned long port_vsyncs;
    extern volatile int port_host_depth;
    int port_in_interrupt(void);
    unsigned long last = (unsigned long)-1;
    int still = 0;
    for (;;) {
        sleep(1);
        if (port_frames != last) {
            if (still >= 3) {
                char line[120];
                int n = snprintf(line, sizeof line, PORT_NAME ": watchdog: frames resumed at frame %lu after %d s\n",
                                 port_frames, still);
                wd_write(line, n);
            }
            still = 0;
            last = port_frames;
            continue;
        }
        still++;
        if (still >= 3 && (still - 3) % 2 == 0) {
            char line[200];
            int n = snprintf(line, sizeof line, PORT_NAME ": watchdog: no frame for %d s (frame %lu, vsyncs %lu, in interrupt %d, "
                             "host depth %d)\n", still, port_frames, port_vsyncs, port_in_interrupt(), (int)port_host_depth);
            wd_write(line, n);
            if (still == 3)
                wd_sigstate();
            {
                /* the last fault: the game's calls to console addresses fault on purpose (the dispatch), so a count that
                   climbs by millions a second with one rip is a loop of faults (a division by zero, most often) */
                static unsigned long last_count;
                unsigned long fc = fault_count;
                uint64_t rbp = last_fault_rbp;
                n = snprintf(line, sizeof line, PORT_NAME ": watchdog:   last fault sig %d at rip=%#lx addr %#lx, %lu faults "
                             "since the last sample, callers", last_fault_sig, (unsigned long)last_fault_rip,
                             (unsigned long)last_fault_addr, fc - last_count);
                last_count = fc;
                for (int i = 0; i < 8 && rbp >= 0x20000000ull && rbp < 0x7fffffffffffull && !(rbp & 7); i++) {
                    uint64_t ret = *(volatile uint64_t *)(rbp + 8);
                    n += snprintf(line + n, sizeof line - n, " %#lx", (unsigned long)ret);
                    rbp = *(volatile uint64_t *)rbp;
                    if (n > 180)
                        break;
                }
                if (n > (int)sizeof line - 2)
                    n = (int)sizeof line - 2;
                line[n++] = '\n';
                wd_write(line, n);
            }
            watchdog_answered = 0;
            pthread_kill(game_thread, SIGUSR1);
            sleep(1);
            still++;
            if (!watchdog_answered) {
                n = snprintf(line, sizeof line, PORT_NAME ": watchdog: the game thread did not answer (SIGUSR1 blocked or it is "
                             "stuck in the kernel)\n");
                wd_write(line, n);
                wd_sigstate();
            }
        }
    }
    return 0;
}

/* PORT_PROFILE=<file>: where the program is, 1,000 times a second of the CPU time it uses (SIGPROF), written to <file> as
   8-byte addresses every 4,096 samples; the hot spots are named afterwards from the program's symbols (nm, addr2line).
   Without it nothing is sampled */
static uint64_t prof_buf[4096];
static unsigned prof_n;
static int prof_fd = -1;
static void on_prof(int sig, siginfo_t *si, void *ctx)
{
    (void)sig, (void)si;
    prof_buf[prof_n++] = (uint64_t)((ucontext_t *)ctx)->uc_mcontext.gregs[REG_RIP];
    if (prof_n == 4096) {
        if (write(prof_fd, prof_buf, sizeof prof_buf) < 0)
            prof_fd = -1;
        prof_n = 0;
    }
}

static void start_profile(void)
{
    const char *f = getenv("PORT_PROFILE");
    if (!f || !*f)
        return;
    prof_fd = open(f, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (prof_fd < 0) {
        fprintf(stderr, PORT_NAME ": PORT_PROFILE %s: %s\n", f, strerror(errno));
        return;
    }
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = on_prof;
    sa.sa_flags = SA_SIGINFO | SA_RESTART;
    sigaction(SIGPROF, &sa, 0);
    struct itimerval it = {{0, 1000}, {0, 1000}};
    setitimer(ITIMER_PROF, &it, 0);
    fprintf(stderr, PORT_NAME ": profiling to %s\n", f);
}

static void install_handlers(void)
{
    static char altstack[1 << 20]; /* below 4 GB with the host binary: the vsync runs the game's handler here */
    stack_t ss = {.ss_sp = altstack, .ss_size = sizeof altstack};
    sigaltstack(&ss, 0);
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = on_fault;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK | SA_NODEFER;
    sigaction(SIGSEGV, &sa, 0);
    sigaction(SIGBUS, &sa, 0);
    sigaction(SIGILL, &sa, 0);
    sigaction(SIGFPE, &sa, 0);
    sa.sa_sigaction = on_watchdog;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK | SA_RESTART;
    sigaction(SIGUSR1, &sa, 0);
    game_thread = pthread_self();
    game_tid = (pid_t)syscall(SYS_gettid);
    pthread_t w;
    pthread_create(&w, 0, watchdog, 0);
}

/* --- the unimplemented ---------------------------------------------------------------------------------------------- */

#define SEEN_MAX 4096
static struct {
    const char *name;
    uint32_t addr;
    unsigned long count;
} seen[SEEN_MAX];
static unsigned seen_n;

void port_unimplemented(const char *name, uint32_t addr)
{
    for (unsigned i = 0; i < seen_n; i++)
        if (seen[i].name == name) {
            seen[i].count++;
            return;
        }
    if (seen_n < SEEN_MAX)
        seen[seen_n++] = (typeof(seen[0])){name, addr, 1};
    fprintf(stderr, PORT_NAME ": no C yet for %s (0x%08X)\n", name, addr);
    if (strict)
        exit(5);
}

static void report_unimplemented(void)
{
    fprintf(stderr, PORT_NAME ": %u functions without C were called:\n", seen_n);
    for (unsigned i = 0; i < seen_n; i++)
        fprintf(stderr, "  %08X %-40s %lu\n", seen[i].addr, seen[i].name, seen[i].count);
}

/* --- the game --------------------------------------------------------------------------------------------------------- */

static ucontext_t host_context, game_context;

static void call_console(uint32_t addr, uint32_t arg)
{
    const struct port_entry *e = port_lookup(addr);
    if (!e) {
        const struct port_entry *n = port_nearest(addr);
        fprintf(stderr, PORT_NAME ": no C for the start-up call to 0x%08X (%s), skipped\n", addr, n ? n->name : "?");
        return;
    }
    ((void (*)(uint32_t))e->fn)(arg);
}

void port_bios_install(void);
void port_hw_init(void);
void port_pvr_init(void);
void port_files_init(void);

static void game_main(void)
{
    /* the SH-4's FPSCR as the game runs it: single precision, rounding toward zero, denormals as zero */
    _mm_setcsr((_mm_getcsr() & ~0x6000u) | 0x6000u | 0x8040u);
    start_fill();
    port_bios_install();                          /* the boot ROM's system call vectors (bios.c) */
    port_hw_init();                               /* video timing, timers, interrupts (hw.c) */
    call_console(GAME_INITSCT, 0);                /* _INITSCT: the bss cleared, the initial data copied */
    call_console(GAME_INITLIBH, 0);               /* _INITLIBH: the library modules' entries */
    call_console(GAME_MAIN, 0);                   /* what the start code calls: main, or the game's own main loop */
    fprintf(stderr, PORT_NAME ": main returned\n");
}

static void on_alarm(int sig)
{
    (void)sig;
    report_unimplemented();
    _exit(0);
}

int main(int argc, char **argv)
{
    saved_argv = argv;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--strict"))
            strict = 1;
        else if (!strcmp(argv[i], "--trace-calls"))
            trace_calls = 1;
        else if (!strcmp(argv[i], "--seconds") && i + 1 < argc)
            max_seconds = (unsigned)atoi(argv[++i]);
        else if (!strcmp(argv[i], "--data") && i + 1 < argc)
            port_data_dir = argv[++i];
        else if (!strcmp(argv[i], "--screenshot") && i + 2 < argc) {
            extern unsigned long port_shot_frame;
            extern const char *port_shot_file;
            port_shot_frame = strtoul(argv[++i], 0, 10);
            port_shot_file = argv[++i];
        } else if (!strcmp(argv[i], "--screenshot-every") && i + 2 < argc) {
            extern unsigned long port_shot_every;
            extern const char *port_shot_file;
            port_shot_every = strtoul(argv[++i], 0, 10);
            port_shot_file = argv[++i];
        } else if (!strcmp(argv[i], "--keys") && i + 1 < argc) {
            extern const char *port_keys;
            port_keys = argv[++i];
        } else if (!strcmp(argv[i], "--press") && i + 1 < argc) {
            extern unsigned long port_press_frame;
            port_press_frame = strtoul(argv[++i], 0, 10);
        } else if (!strcmp(argv[i], "--vmu") && i + 1 < argc) {
            extern const char *port_vmu_dir;
            port_vmu_dir = argv[++i];
        } else if (!strcmp(argv[i], "--fast")) {
            extern int port_fast;
            port_fast = 1;
        } else if (!strcmp(argv[i], "--headless"))
            port_headless = 1;
        else if (!strcmp(argv[i], "--image") && i + 1 < argc)
            image_path = argv[++i];
        else {
            fprintf(stderr, "usage: " PORT_NAME " [--data DIR] [--vmu DIR] [--headless] [--fast] [--strict] [--trace-calls] [--seconds N]\n"
                            "               [--image FILE] [--screenshot FRAME FILE.ppm] [--screenshot-every N PREFIX] [--press FRAME]\n"
                            "  DIR: a folder holding the files of your " PORT_TITLE " disc (1ST_READ.BIN, PACK0.BIN, ...)\n");
            return 2;
        }
    }
    map_machine();
    load_image();
    install_handlers();
    start_profile();
    if (!port_platform_init())
        return 2;
    port_pvr_init();
    port_files_init();
    atexit(report_unimplemented);
    if (max_seconds) {
        signal(SIGALRM, on_alarm);
        alarm(max_seconds);
    }
    getcontext(&game_context);
    game_context.uc_stack.ss_sp = (void *)(uintptr_t)GAME_STACK;
    game_context.uc_stack.ss_size = GAME_STACK_SIZE;
    game_context.uc_link = &host_context;
    makecontext(&game_context, game_main, 0);
    swapcontext(&host_context, &game_context);
    return 0;
}
