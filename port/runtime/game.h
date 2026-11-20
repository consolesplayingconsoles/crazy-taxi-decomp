/* game.h: the addresses of this game that the runtime needs. Each is a console address from this repo's functions.txt
   or globals.txt (the cached mirror, 0x8C......). Fill them in, then remove the #error. port/README.md says how each
   one is found; the values in the comments are Crazy Taxi's, the game this runtime was first brought up on. */
#ifndef GAME_H
#define GAME_H

/* the start code: what runs before main (the entry, 0x8C010000 + the IP.BIN's bootstrap offset; Crazy Taxi 0x8C14AB60),
   and the three calls the runtime makes in its place (runner.c game_main) */
#define GAME_START      0x8C14AB60u   /* Crazy Taxi 0x8C14AB60 */
#define GAME_INITSCT    0x8C14AB98u   /* _INITSCT: the bss clear and the initial data copy (Crazy Taxi 0x8C14AB98) */
#define GAME_INITLIBH   0x8C14AB88u   /* _INITLIBH: the library modules' entries (Crazy Taxi 0x8C14AB88) */
#define GAME_MAIN       0x8C02AB40u   /* main, or what the start code calls in its place (Crazy Taxi thunk_MainLoop 0x8C02AB40) */

/* the compiler runtime's errno, which the division helpers set on a division by 0 (Crazy Taxi 0x8C2B7BA0) */
#define GAME_ERRNO      0x8C2B7BA0u

/* interrupts (hw.c, game.c): the word the game's exception code copies INTEVT to (Crazy Taxi 0x8C16E1D8), the library's
   default handler that the HOLLY events start with (Crazy Taxi 0x8C16DD08), the handler Kamui registers with
   kmiRegisterPhIntHandler (Crazy Taxi kmiInterruptHandlerSH 0x8C16C810), and syIntInit's two arguments as syHwInit
   passes them (Crazy Taxi: the words at 0x8C175060 and 0x8C177A9C) */
#define GAME_INTEVT_COPY       0x8C16E1D8u
#define GAME_DEFAULT_HANDLER   0x8C16DD08u
#define GAME_KAMUI_HANDLER     0x0C16C810u
#define GAME_SYINTINIT_ARG1    0x8C175060u
#define GAME_SYINTINIT_ARG2    0x8C177A9Cu

/* the NAOMI library's list pointers (nlib.c, platform.c's list report): a game without the NAOMI library has none
   (Crazy Taxi 0x8C2B8CBC) */
#define GAME_NL_LIST_PTRS      0x8C2B8CBCu

/* the NAOMI library's near plane, which nlPerspective and nlFrustum set (nlib.c's clip when a model's lighting context
   holds none; Crazy Taxi 0x8C2B7BDC) */
#define GAME_NL_NEAR           0x8C2B7BDCu

/* the game's main mode and sub-mode words, which boot.c logs with PORT_BOOT_LOG (0: no log). Crazy Taxi's MainLoop
   mode 0x8C1EE234 (0 attract, 1 the game, 3 menu) and its sub-mode 0x8C1EE238 */
#define GAME_MAIN_MODE         0x8C1EE234u
#define GAME_SUB_MODE          0x8C1EE238u
/* the main mode whose 2D is the play HUD: on a wider picture (PORT_WIDESCREEN) its pieces go to the screen's sides (draw.c) */
#define GAME_HUD_MODE          1

#endif
