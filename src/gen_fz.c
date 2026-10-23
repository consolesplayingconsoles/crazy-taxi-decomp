/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CoursePointLoadReq(float);
int gdc_CourseReq(int, int, float);
int gdc_CourseStartLoadReq(int a4, int a5, float f4);

int gdc_CourseStartLoadReq(int a4, int a5, float f4)
{
    int t0;
    int t13;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    L_C02F02A:;
    t0 = *(int *)0xC1EE20C;
    R0 = (t0);
    R14 = (((int)stk + 16));
    if ((t0 == 0)) goto L_C02F09C;
    goto L_C02F042;
    L_C02F042:;
    if ((R0 == 1)) goto L_C02F0C4;
    goto L_C02F046;
    L_C02F046:;
    if ((R0 == 2)) goto L_C02F10E;
    goto L_C02F04A;
    L_C02F04A:;
    goto L_C02F13C;
    L_C02F13C:;
    return R0;
    L_C02F10E:;
    R11 = (0xC1244E8);
    R12 = (0xC0C835C);
    R13 = (0xC1EE214);
    R14 = ((*(int *)((0xC0C835C + ((*(int *)0xC1EE214) << 2)))));
    F15 = (0.0f);
    goto L_C02F128;
    L_C02F128:;
    t13 = *(int *)((R13 + 0x0));
    R0 = ((t13 << 2));
    R4 = ((t13 << 2));
    if (((int)R14 < (int)((*(int *)(((t13 << 2) + (*(int *)((R11 + 0x0)))))) + (*(int *)((R12 + (t13 << 2))))))) goto L_C02F11E;
    goto L_C02F13C;
    L_C02F11E:;
    gdc_CourseReq(R14, 0x0, F15);
    R14 = ((R14 + 0x1));
    goto L_C02F128;
    L_C02F0C4:;
    if (((*(int *)0xC17948C) == 1)) goto L_C02F0E0;
    goto L_C02F0CC;
    L_C02F0CC:;
    *(float *)((R14 + 0x0)) = (*(float *)0xC02F2CC);
    *(float *)((R14 + 0x4)) = (*(float *)0xC02F2D0);
    F3 = ((*(float *)0xC02F2D4));
    goto L_C02F0F2;
    L_C02F0F2:;
    *(float *)((R14 + 0x8)) = F3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    F4 = ((*(float *)0xC02F2E4));
    goto L_C02F106;
    L_C02F106:;
    R0 = ((gdc_CoursePointLoadReq(F4)));
    goto L_C02F13C;
    L_C02F0E0:;
    *(float *)((R14 + 0x0)) = (*(float *)0xC02F2D8);
    *(float *)((R14 + 0x4)) = (*(float *)0xC02F2DC);
    F3 = ((*(float *)0xC02F2E0));
    goto L_C02F0F2;
    L_C02F09C:;
    *(float *)((R14 + 0x0)) = (*(float *)0xC02F2B4);
    *(float *)((R14 + 0x4)) = (*(float *)0xC02F2B8);
    *(float *)((R14 + 0x8)) = (*(float *)0xC02F2BC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    F4 = ((*(float *)0xC02F2C4));
    goto L_C02F106;
}
