/* Straight-line functions with calls and guards (batch gen_ajk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f610(int a4, int a5);

int FUN_0c07f610(int a4, int a5)
{
    int t1;

    if ((unsigned int)a4 < (unsigned int)0x8) {
        t1 = *(int *)(((*(int *)0xC2B76E4) + 0x0));
        if (a5 != 0x4A0) {
            if (a5 != 0x10A0) {
                return 0xFFFFFF80;
            }
            return ((int)((*(int *)((((t1 + 0xA0800000) + ((((a4 << 2) << 1) + 0x5) << 2)) + 0x0))) & 0x7F00) >> 8);
        }
        return ((*(int *)((((t1 + 0xA0800000) + ((((a4 << 2) << 1) + 0x5) << 2)) + 0x0))) & 0x7F);
    }
    return 0xFFFFFF80;
}
