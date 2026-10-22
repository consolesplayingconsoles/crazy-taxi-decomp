/* Straight-line functions with calls and guards (batch gen_ajn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f5c0(int);
int FUN_0c0801e0(int a4, int a5);

int FUN_0c0801e0(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        return FUN_0c07f5c0((0xCA1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}
