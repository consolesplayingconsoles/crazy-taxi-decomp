/* Straight-line functions with calls and guards (batch gen_zq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float getNearLineIndex(int, int, int, int);
float navi_GetRouteDataC(int a4, int a5, int a6, int a7, float f4);

float navi_GetRouteDataC(int a4, int a5, int a6, int a7, float f4)
{
    int t14;
    float t21;
    int stk[12];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F4;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    L_C02B146:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1EE1EC) = *(struct mv3 *)(R4); }
    R10 = (R4);
    R11 = (R5);
    R12 = (0x8);
    R13 = (((*(int *)0xC2A6690) + 0xEF4));
    R14 = (0x0);
    R8 = (0xC1EE200);
    R9 = (0xC049CE6);
    F15 = (999999.875f);
    goto L_C02B17C;
    L_C02B17C:;
    if ((R11 == 44)) goto L_C02B18C;
    goto L_C02B184;
    L_C02B184:;
    if ((R11 != 55)) goto L_C02B198;
    goto L_C02B18C;
    L_C02B18C:;
    R0 = (R14);
    if ((R14 != 7)) goto L_C02B198;
    goto L_C02B194;
    L_C02B194:;
    R14 = ((R14 + 0x1));
    goto L_C02B1BE;
    L_C02B1BE:;
    t14 = (int)(R14 + 0x1) <= (int)R12;
    R13 = ((R13 + 0xC));
    R14 = ((R14 + 0x1));
    if (t14) goto L_C02B17C;
    goto L_C02B1C6;
    L_C02B1C6:;
    return F0;
    L_C02B198:;
    t21 = getNearLineIndex(0x0, (*(int *)((R13 + 0x0))), (*(int *)(((*(int *)((R13 + 0x4))) + 0x0))), (((int)stk + 4) + 0x4));
    F0 = (t21);
    F4 = (t21);
    if ((!(F15 > t21))) goto L_C02B1BE;
    goto L_C02B1B0;
    L_C02B1B0:;
    *(float *)((R8 + 0x0)) = F4;
    *(unsigned int *)0xC1EE1F8 = R14;
    *(unsigned int *)0xC1EE1FC = (*(int *)(((int)stk + 8)));
    F15 = (F4);
    goto L_C02B1BE;
}
