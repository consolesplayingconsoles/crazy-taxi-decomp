/* Straight-line functions with calls and guards (batch gen_aio): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int texLoadIndexed(void);
int FUN_0c073b30(int a4, int a5, int a6);

int FUN_0c073b30(int a4, int a5, int a6)
{
    *(volatile int *)(((((a6 << 2) << 2) + a5) + 0x8));
    return texLoadIndexed();
}
