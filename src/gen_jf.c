/* Straight-line functions with calls and guards (batch gen_jf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlTranslateV(int);
int set_event(int, int);
void setObjHitBreakCount(int a4, int a5, int a6);

void setObjHitBreakCount(int a4, int a5, int a6)
{
    int t18;
    int t21;
    int t23;
    int t24;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0388A4:;
    R13 = (R4);
    if (((*(int *)((R4 + 0x20))) != 0)) goto L_C0388C2;
    goto L_C0388BE;
    L_C0388BE:;
    goto L_C0389C8;
    L_C0389C8:;
    return;
    L_C0388C2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC097210); }
    nlPushUnitMatrix();
    nlTranslateV(R13);
    MultiRot4Vec((R13 + 0x30));
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0xC0EE1E8;
    R10 = (0xC0789E0);
    R11 = (0x84);
    R12 = (0x0);
    R8 = (0xC0EDD94);
    R9 = ((((int)stk + 4) + 0x4));
    goto L_C0389AA;
    L_C0389AA:;
    if (((int)R12 < (int)(*(int *)((R9 + ((*(int *)((R13 + 0x6C))) << 2)))))) goto L_C038950;
    goto L_C0389B6;
    L_C0389B6:;
    nlPopMatrix(0x2);
    KillColliObj(R13);
    *(unsigned int *)((R13 + 0x68)) = 0xFFFFFFFE;
    R0 = (0x68);
    goto L_C0389C8;
    L_C038950:;
    t18 = set_event(R11, 0xC0385AC);
    R4 = (t18);
    if ((t18 == 0)) goto L_C0389A8;
    goto L_C03895E;
    L_C03895E:;
    t21 = R13;
    t23 = (R4 + 0x14);
    for (;;) { t24 = *(int *)t21; t21 = (t21 + 4); if ((unsigned int)((R13 + 112)) < (unsigned int)t21) break; *(unsigned int *)t23 = t24; t23 = (t23 + 4); }
    nlGetPushedMatrix(0x0);
    nlTranslateV((((((((*(int *)((R13 + 0x6C))) << 2) << 2) << 2) << 1) + 0xC0EE224) + ((R12 << 2) << 2)));
    nlGetTranslate((R4 + 0x14));
    *(unsigned int *)(((R4 + 0x14) + 0x54)) = R8;
    *(unsigned int *)(((R4 + 0x14) + 0x64)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0)));
    SetColliObj((R4 + 0x14), 0x10);
    R14 = ((R4 + 0x14));
    goto L_C0389A8;
    L_C0389A8:;
    R12 = ((R12 + 0x1));
    goto L_C0389AA;
}
