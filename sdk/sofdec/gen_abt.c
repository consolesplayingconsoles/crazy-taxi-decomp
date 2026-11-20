/* Straight-line functions with calls and guards (batch gen_abt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwlSbGetStreamParam(int, int, int);
int mwSbGetPan(int a4, int a5);

int mwSbGetPan(int a4, int a5)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = (mwlSbGetStreamParam(a4, 0x6, a5));
    return (*(int *)(((a5 << 2) + (a4 + 0x40))));
}
