/* game.c: host versions of this game's console-only library functions that the other runtime files do not cover (here:
   the ones Crazy Taxi needed; a game whose C covers one drops it). A function defined here wins over the interpreter's
   wrapper (tools/10-port/native_build.py). The addresses come from game.h. */
#include <stdint.h>
#include <time.h>
#include "port.h"
#include "game.h"

uint32_t port_mmio_r32(uint32_t a);
#define U32(a) (*(volatile uint32_t *)(uintptr_t)(a))

/* kdGetDeviceInfo(port): the Maple driver's record of the device on a port. A standard controller on every port, with no extension
   (the first word is the function codes: the controller; its vibration bit, 0x100, is clear: pdVibIsReady then says no). A record of
   0x40 bytes a port at the top of RAM, above the interpreter's stack (0x0CFEFF00). */
int kdGetDeviceInfo(int port)
{
    uint32_t rec = 0x8CFF1000u + (uint32_t)(port & 3) * 0x40u;
    U32(rec) = 0x01000000u;
    return (int)(rec & 0x00FFFFFFu | 0x0C000000u);
}

/* the system layer: the host has no hardware to initialise, no caches, no MMU, and a clock of its own (the Dreamcast's counts seconds
   since 1950) */
#define NOP0(name) int name(void) { return 0; }
NOP0(syRtcInit)
NOP0(syRtcFinish)
NOP0(syCachePurgeAll)
NOP0(syMmuAddEntry)
NOP0(syMmuDeleteEntry)
NOP0(syIntAdrChk_init)
NOP0(syRtcDbgWriteLog)
/* syCblCheckCable: the cable type, 0 VGA (a host window is a progressive 640x480) */
int syCblCheckCable(void) { return 0; }
unsigned int syRtcGetCountForce(void) { return (unsigned int)((long)time(0) + 631152000L); }
/* the peripheral API's extras: no memory card screen, nothing to serve (the controller is read once a frame, platform.c) */
NOP0(pdExecPeripheralServerUser)
NOP0(pdVmsLcdBlt)
NOP0(pdVmsLcdIsReady)

/* syHwInit / syHwInit2: the original calls hwInit (the memory controller and clocks), syIntInit (the interrupt handlers: without it no
   interrupt has a handler), sySqInit, syCacheInit and syTmrInit; then syChainInit (the vblank handler chain) and syG2SysInit. The host
   does the ones that set up the game's own tables and leaves the hardware and the caches out. */
void syIntInit(int a, int b);
int sySqInit(void);
void syTmrInit(void);
int syChainInit(void);
int syHwInit(void)
{
    syIntInit((int)U32(GAME_SYINTINIT_ARG1), (int)U32(GAME_SYINTINIT_ARG2));
    sySqInit();
    syTmrInit();
    return 0;
}
int syHwInit2(void)
{
    syChainInit();
    return 0;
}

#ifdef GAME_DEFAULT_HANDLER
/* Interrupts. The game's exception vector code (copied by syIntInit) is assembly with no C, and its table has only the default
   handler for the HOLLY interrupts: Kamui registers its handler with kmiRegisterPhIntHandler, and the vertical blank goes through the
   system's handler chain (syChainMasterHandler, event 0x900). port_game_irq does what that code does for those: Kamui's handler (which
   reads and clears SB_ISTNRM and services list ends, render end and DMA end), then the chain for a vertical blank. */
/* kmiRegisterPhIntHandler (no C) runs in the interpreter: it opens the SB_IML masks itself. The game registers one handler,
   kmiInterruptHandlerSH (game.h) */
static const uint32_t ph_handler = GAME_KAMUI_HANDLER;
int syChainMasterHandler(int event);
void port_game_irq(int evt)
{
    (void)evt;
    uint32_t pending = port_mmio_r32(0xA05F6900u);
    if (ph_handler) {
        const struct port_entry *e = port_lookup(0x8C000000u | (ph_handler & 0x00FFFFFFu));
        if (e)
            ((int (*)(int, int, int, int))e->fn)(0, 0, 0, 0);
    }
    if (pending & 8)                                   /* the vertical blank */
        syChainMasterHandler(0x900);
}
#endif
