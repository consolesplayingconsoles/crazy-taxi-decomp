/* Straight-line functions with calls and guards (batch gen_abt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c171e62(int, int, int);
int FUN_0c171f36(int a4, int a5);

int FUN_0c171f36(int a4, int a5)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = (FUN_0c171e62(a4, 0x6, a5));
    return (*(int *)(((a5 << 2) + (a4 + 0x40))));
}
