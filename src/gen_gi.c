/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetColliObj(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
void setObjHitBreakOff(int a4, int a5, float f4);

void setObjHitBreakOff(int a4, int a5, float f4)
{
    float t0;
    int t4;
    int t7;
    int t9;
    int t10;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R13;
    int R14;
    float F0;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    L_C038C34:;
    t0 = nlLength((R4 + 0xC), (R4 + 0x58));
    R13 = (R4);
    F0 = (t0);
    if ((!(t0 > (1.0f + 1.0f)))) goto L_C038CDE;
    goto L_C038C50;
    L_C038C50:;
    t4 = set_event(0x84, 0xC0385AC);
    R4 = (t4);
    if ((t4 == 0)) goto L_C038CD0;
    goto L_C038C60;
    L_C038C60:;
    t7 = R13;
    t9 = (R4 + 0x14);
    for (;;) { t10 = *(int *)t7; t7 = (t7 + 4); if ((unsigned int)((R13 + 112)) < (unsigned int)t7) break; *(unsigned int *)t9 = t10; t9 = (t9 + 4); }
    nlScaleVector((((int)stk + 4) + 0xC), ((R4 + 0x14) + 0x3C), 8.0f);
    nlAddVector((R4 + 0x14), (((int)stk + 4) + 0xC));
    *(unsigned int *)(((R4 + 0x14) + 0x28)) = ((R4 + 0x14) + 0x30);
    *(unsigned int *)(((R4 + 0x14) + 0x54)) = 0xC0EDF44;
    *(unsigned int *)(((R4 + 0x14) + 0x64)) = (*(int *)(((*(int *)0xC0EE218) + 0x0)));
    SetColliObj((R4 + 0x14), 0x10);
    nlScaleVector((((int)stk + 4) + 0xC), ((R4 + 0x14) + 0x3C), (*(float *)0xC038D14));
    nlAddVector(R13, (((int)stk + 4) + 0xC));
    *(unsigned int *)((R13 + 0x54)) = 0xC0EDF68;
    *(unsigned int *)((R13 + 0x64)) = (*(int *)(((*(int *)0xC0EE21C) + 0x0)));
    R14 = ((R4 + 0x14));
    goto L_C038CD0;
    L_C038CD0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R13 + 0x58)) = *(struct mv3 *)((R13 + 0xC)); }
    goto L_C038CDE;
    L_C038CDE:;
}
