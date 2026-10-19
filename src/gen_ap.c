/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c085dfc(int, int, int);

void ADXERR_CallErrFunc(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int stk[3];

    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    FUN_0c085dfc(0xC2F4E1C, a8, t0);
    t2 = *(int *)0xC178630;
    if (t2 != 0) {
        t3 = *(int *)0xC178634;
        t4 = ((int (*)(int, int))(t2))(t3, 0xC2F4E1C);
    }
}
