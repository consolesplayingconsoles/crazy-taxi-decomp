/* boot.c: the game says where it is, for debugging (after the Power Stone port's boot.c). port_boot_step runs once a
   frame (platform.c, at each frame's end).

   PORT_BOOT_LOG set: each change of the game's main mode (GAME_MAIN_MODE in game.h) or of its sub-mode (GAME_SUB_MODE)
   is printed with the frame, "<name>: boot: frame N, main mode M, sub-mode S". A watcher can follow that line in the
   program's output and act when the game reaches the mode it needs (tools/10-port/capture.sh). A game with no such words
   leaves both at 0, and nothing is printed. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "port.h"
#include "game.h"

#define I32(a) (*(volatile int32_t *)(uintptr_t)(a))

extern unsigned long port_frames;

void port_boot_step(void)
{
    static int log = -1, last_mode = -99, last_sub = -99;
    if (log < 0)
        log = getenv("PORT_BOOT_LOG") != 0 && GAME_MAIN_MODE != 0;
    if (!log)
        return;
    int mode = I32(GAME_MAIN_MODE), sub = GAME_SUB_MODE ? I32(GAME_SUB_MODE) : 0;
    if (mode != last_mode || sub != last_sub) {
        fprintf(stderr, PORT_NAME ": boot: frame %lu, main mode %d, sub-mode %d\n", port_frames, mode, sub);
        last_mode = mode;
        last_sub = sub;
    }
}
