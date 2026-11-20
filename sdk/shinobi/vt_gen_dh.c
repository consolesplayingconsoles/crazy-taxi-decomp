/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_setcmd(int, int, int, int, int, int);
int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10);


int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    return (mpdrv_setcmd(a4, 0xC, ((int)stk + 12), 0x2, a9, a10));
}
