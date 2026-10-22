/* Straight-line functions with calls and guards (batch gen_oc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetColliObj(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
void setObjHitShed(int a4, int a5, float f4);

void setObjHitShed(int a4, int a5, float f4)
{
    float t0;
    int t1;
    int t2;
    float u3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t20;
    int t21;
    int t22;
    int t12;
    int stk[7] = {0};

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    L_C038A00:;
    t0 = nlLength((R4 + 0xC), (R4 + 0x58));
    t1 = t0 > (1.0f + 1.0f);
    t2 = R4;
    R14 = t2;
    if (t1) goto L_C038A28;
    goto L_C038A1C;
    L_C038A1C:;
    u3 = *(float *)((R14 + 0x40));
    t4 = !(0.699999988f > u3);
    if (t4) goto L_C038AB0;
    goto L_C038A28;
    L_C038A28:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x58)) = *(struct mv3 *)((R14 + 0xC)); }
    t5 = set_event(0x84, 0xC0385AC);
    t6 = t5 == 0;
    t7 = t5;
    t8 = t5;
    R0 = t7;
    R4 = t8;
    if (t6) goto L_C038ABE;
    goto L_C038A46;
    L_C038A46:;
    t9 = R14;
    t10 = (R14 + 112);
    t11 = (R4 + 0x14);
    for (;;) { t12 = *(int *)t9; t9 = (t9 + 4); if ((unsigned int)t10 < (unsigned int)t9) break; *(unsigned int *)t11 = t12; t11 = (t11 + 4); }
    nlScaleVector(((int)stk + 4), ((R4 + 0x14) + 0x3C), -8.0f);
    nlAddVector((R4 + 0x14), ((int)stk + 4));
    *(unsigned int *)(((R4 + 0x14) + 0x28)) = ((R4 + 0x14) + 0x30);
    *(unsigned int *)(((R4 + 0x14) + 0x54)) = 0xC0EDC08;
    t15 = *(int *)0xC0EE1BC;
    t16 = *(int *)((t15 + 0x0));
    *(unsigned int *)(((R4 + 0x14) + 0x64)) = t16;
    SetColliObj((R4 + 0x14), 0x10);
    nlScaleVector(((int)stk + 4), (R14 + 0x3C), 11.0f);
    nlAddVector(R14, ((int)stk + 4));
    *(unsigned int *)((R14 + 0x54)) = 0xC0EDCBC;
    t20 = *(int *)0xC0EE1D0;
    t21 = *(int *)((t20 + 0x0));
    *(unsigned int *)((R14 + 0x64)) = t21;
    t22 = 0x64;
    R0 = t22;
    goto L_C038ABE;
    L_C038ABE:;
    return;
    L_C038AB0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x58)) = *(struct mv3 *)((R14 + 0xC)); }
    goto L_C038ABE;
}
