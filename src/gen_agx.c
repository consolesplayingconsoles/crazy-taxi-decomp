/* Straight-line functions with calls and guards (batch gen_agx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int SeachRankTotal(int a4, int a5, int a6, int a7);

int SeachRankTotal(int a4, int a5, int a6, int a7)
{
    int t39;
    int t0;
    int t4;
    int t8;
    int t9;
    int t1;
    int t24;
    int t15;
    int t19;
    int t20;
    int t33;
    int t27;
    int t28;
    int t29;

    t39 = 0xFFFFFFFF;
    if (((int)a4 >= 0) && ((int)a6 >= 0)) {
        if (a5 == 0) {
            t0 = GetMenuMode(0x1);
            t15 = 0xA;
            t19 = ((((0xC28A4F8 + (short)((short)a4 * (short)0x788)) + 0x8) + (short)((short)t0 * (short)0x78)) + (signed char)(((a6 << 1) + a6) << 2));
            t20 = (0xC2A1260 + (short)((short)t0 * (short)0x78));
        } else {
            t4 = 0x5;
            t8 = (((0x3C8 + ((short)((short)a4 * (short)0x788) + 0xC28A4F8)) + (short)((short)(a5 - 2) * (short)0x3C)) + (signed char)(((a6 << 1) + a6) << 2));
            t9 = (0xC2A1620 + (short)((short)(a5 - 2) * (short)0x3C));
            if (a5 == 1) {
                t1 = GetMenuMode(0x1);
                t4 = 0xA;
                t8 = ((((0xC28A4F8 + (short)((short)a4 * (short)0x788)) + 0x1E8) + (short)((short)t1 * (short)0x78)) + (signed char)(((a6 << 1) + a6) << 2));
                t9 = (0xC2A1440 + (short)((short)t1 * (short)0x78));
            }
            t15 = t4;
            t19 = t8;
            t20 = t9;
        }
        if ((int)t15 > 0) {
            t24 = 0x0;
            for (;;) {
                if (((*(int *)((t19 + 0x0))) == (*(int *)((((((t24 << 1) + t24) << 2) + t20) + 0x0)))) && ((t27 = *(int *)((t19 + 0x4)), t28 = *(int *)((((((t24 << 1) + t24) << 2) + t20) + 0x4)), t27 == t28) && (t29 = *(signed char *)((((((t24 << 1) + t24) << 2) + t20) + 0x9)), a4 == t29))) {
                    break;
                }
                t24 = (t24 + 0x1);
                if ((int)t24 >= (int)t15) {
                    return 0xFFFFFFFF;
                }
            }
            t33 = t24;
        } else {
            t33 = 0xFFFFFFFF;
        }
        t39 = t33;
    }
    return t39;
}
