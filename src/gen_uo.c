/* Straight-line functions with calls and guards (batch gen_uo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f5c0(int);
int menuChangeValue(int a4, int a5, int a6);

int menuChangeValue(int a4, int a5, int a6)
{
    int t50;
    int t31;
    int t7;
    int t14;
    int t27;
    int t24;
    int t41;
    int t39;
    int t9;
    int t10;
    int t11;
    int t17;
    int t18;

    t50 = 0x0;
    if (((*(int *)0xC2A1214) != 1) || (a4 != 0)) {
        t31 = 0x0;
        if (((*(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14))) & 4) != 0) {
            t7 = *(int *)((a5 + 0x0));
            if (((int)t7 < 0) || ((int)t7 >= (int)a6)) {
                *(unsigned int *)((a5 + 0x0)) = 0x0;
            }
            t14 = 0x0;
            if (((((*(int *)0xC2A11CC) & 0x20) == 0) && ((t9 = *(int *)0xC2A11D4, t9 != 0) || (t10 = *(int *)0xC2A11D0, (t10 & 0x20) == 0))) || (t11 = *(int *)((a5 + 0x0)), (int)t11 <= 0)) {
            } else {
                *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 1);
                t14 = 0x1;
            }
            t27 = t14;
            if ((((*(int *)0xC2A11CC) & 0x40) == 0) && ((t17 = *(int *)0xC2A11D4, t17 != 0) || (t18 = *(int *)0xC2A11D0, (t18 & 0x40) == 0))) {
            } else {
                t24 = t14;
                if ((int)(*(int *)((a5 + 0x0))) < (int)(a6 - 1)) {
                    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x1);
                    t24 = (t14 + 0x1);
                }
                t27 = t24;
            }
            t31 = t27;
        }
        t41 = 0x0;
        if (t31 != 0) {
            FUN_0c07f5c0(0x504A9);
            t39 = 0x0;
            if (t31 != 0) {
                t39 = 0x1;
            }
            t41 = t39;
        }
        t50 = t41;
    }
    return t50;
}
