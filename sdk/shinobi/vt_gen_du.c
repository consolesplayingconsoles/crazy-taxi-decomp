/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdRecvFrame(void);
int mpdrv_set_bwrite(int, int, int, int, int, int, int);
int kdSetBlockWrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);


int kdSetBlockWrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;

    t0 = mpdrv_set_bwrite(a4, a5, a6, a7, a8, a9, a10);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}
