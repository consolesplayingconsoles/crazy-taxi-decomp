/* Straight-line functions with calls and guards (batch gen_aen): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float getNearLineIndex(int, int, int, int, int, float);
float navi_GetRouteDataC(int a4, int a5, float f4);

float navi_GetRouteDataC(int a4, int a5, float f4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u9;
    float u10;
    float u8;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t16;
    int t17;
    int t18;
    int stk[12];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1EE1EC) = *(struct mv3 *)(a4); }
    t1 = 0xC1EE1EC;
    t2 = 0xC2A6690;
    t3 = 0xEF4;
    t4 = a4;
    t5 = a5;
    t6 = ((*(int *)0xC2A6690) + 0xEF4);
    t7 = 0x0;
    u9 = f4;
    u10 = 999999.875f;
    for (;;) {
        if (((a5 != 44) && (a5 != 55)) || (t7 != 7)) {
            t5 = (*(int *)((t6 + 0x0)));
            t4 = 0x0;
            u8 = (getNearLineIndex(t4, t5, (*(int *)(((*(int *)((t6 + 0x4))) + 0x0))), (((int)stk + 4) + 0x4), a4, u9));
            u9 = u8;
            if (u10 > u9) {
                t1 = 0xC1EE1FC;
                t2 = 0xC1EE1F8;
                u10 = u9;
                *(float *)0xC1EE200 = u10;
                *(unsigned int *)((t2 + 0x0)) = t7;
                t3 = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((t1 + 0x0)) = t3;
                t16 = t1;
                t17 = t2;
                t18 = t3;
            }
            t22 = t16;
            t23 = t17;
            t24 = t18;
        } else {
            t7 = (t7 + 0x1);
            t22 = t1;
            t23 = t2;
            t24 = t3;
            t25 = t4;
            t26 = t5;
        }
        t1 = t22;
        t7 = (t7 + 0x1);
        t2 = t23;
        t3 = t24;
        t4 = t25;
        t5 = t26;
        t6 = (t6 + 0xC);
        if ((int)t7 > (int)0x8) {
            break;
        }
    }
    return u8;
}
