/* Straight-line functions with calls and guards (batch gen_yc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int abs(int);
void calcColliCheck(int a4);

void calcColliCheck(int a4)
{
    int t2;
    float u5;
    int t6;
    float u9;
    int t10;
    int t14;
    int t17;
    float u18;
    float u19;
    int t21;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    L_C0459A8:;
    t2 = (*(float *)((R4 + 0xC4))) != 0.0f;
    *(unsigned int *)(((int)stk + 4)) = (R14);
    R14 = (R4);
    if (t2) goto L_C045A1E;
    goto L_C0459B8;
    L_C0459B8:;
    u5 = *(float *)0xC045A68;
    t6 = !(u5 > _builtin_fabsf((*(float *)((R14 + 0xCC)))));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    F1 = (u5);
    if (t6) goto L_C045A1E;
    goto L_C0459C6;
    L_C0459C6:;
    u9 = *(float *)0xC045A6C;
    t10 = !(u9 > _builtin_fabsf((*(float *)((R14 + 0x60)))));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    F0 = (u9);
    if (t10) goto L_C045A1E;
    goto L_C0459D4;
    L_C0459D4:;
    t14 = (int)(abs((*(short *)((R14 + 0xAA))))) >= (int)0x10;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t14) goto L_C045A1E;
    goto L_C0459E2;
    L_C0459E2:;
    t17 = !((*(float *)0xC045A6C) > _builtin_fabsf((*(float *)((R14 + 0x100)))));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t17) goto L_C045A1E;
    goto L_C0459F0;
    L_C0459F0:;
    u18 = *(float *)((R14 + 0x104));
    u19 = *(float *)((R14 + 0x90));
    t21 = !((*(float *)0xC045A74) > _builtin_fabsf((u19 - u18)));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    F1 = (_builtin_fabsf((u19 - u18)));
    if (t21) goto L_C045A1E;
    goto L_C045A04;
    L_C045A04:;
    *(unsigned int *)((R14 + 0x84)) = ((*(int *)((R14 + 0x84))) & 0xFFFFFFFB);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + R14)) = *(struct mv3 *)(0xC0A4788); }
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C045A28;
    L_C045A28:;
    return;
    L_C045A1E:;
    *(unsigned int *)((R14 + 0x84)) = ((*(int *)((R14 + 0x84))) | 0x4);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x84);
    goto L_C045A28;
}
