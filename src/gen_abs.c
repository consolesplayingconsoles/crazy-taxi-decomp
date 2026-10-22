/* Straight-line functions with calls and guards (batch gen_abs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c171e62(int, int, int);
int FUN_0c171e74(int a4);

int FUN_0c171e74(int a4)
{
    int t0;
    int t14;
    int t8;

    t0 = FUN_0c171e62(a4, 0x5, 0x0);
    t14 = 0xFFFFFC41;
    if ((int)t0 <= 0) {
    } else {
        t8 = 0x0;
        if ((int)t0 >= (int)0x7F) {
        } else {
            t8 = ((int)((int)(0x80 - ((((int)((unsigned int)((int)((unsigned int)(0x7F - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x7F - t0))) ? 1u : 0u))) >> 1) * 0x3BF)) / (int)0xFF));
        }
        t14 = t8;
    }
    *(unsigned int *)((a4 + 0x3C)) = t14;
    return t14;
}
