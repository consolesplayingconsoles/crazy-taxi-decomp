/* Straight-line functions with calls and guards (batch gen_or): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0813d0(int);
float nlLength(int, int);
void calcCheck(int a4, int a5, int a6);

void calcCheck(int a4, int a5, int a6)
{
    float t0;
    float u11;
    float u15;
    float u24;
    float u25;
    int t27;
    int stk[3] = {0};

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C045A2E:;
    t0 = nlLength(0xC2A1B34, (0x8C + R4));
    R14 = (R4);
    F0 = (t0);
    if ((!(((*(float *)0xC2A1B18) + 30.0f) > t0))) goto L_C045A90;
    goto L_C045A4C;
    L_C045A4C:;
    R0 = (0x84);
    R2 = (((*(int *)((R14 + 0x84))) | 0xD));
    goto L_C045A98;
    L_C045A98:;
    *(unsigned int *)((R14 + R0)) = R2;
    if (((*(float *)((R14 + 0xC4))) != 0.0f)) goto L_C045B0A;
    goto L_C045AA4;
    L_C045AA4:;
    u11 = *(float *)0xC045BB0;
    F1 = (u11);
    if ((!(u11 > _builtin_fabsf((*(float *)((R14 + 0xCC))))))) goto L_C045B0A;
    goto L_C045AB2;
    L_C045AB2:;
    u15 = *(float *)0xC045BB4;
    F0 = (u15);
    if ((!(u15 > _builtin_fabsf((*(float *)((R14 + 0x60))))))) goto L_C045B0A;
    goto L_C045AC0;
    L_C045AC0:;
    if (((int)(FUN_0c0813d0((*(short *)((R14 + 0xAA))))) >= (int)0x10)) goto L_C045B0A;
    goto L_C045ACE;
    L_C045ACE:;
    if ((!((*(float *)0xC045BB4) > _builtin_fabsf((*(float *)((R14 + 0x100))))))) goto L_C045B0A;
    goto L_C045ADC;
    L_C045ADC:;
    u24 = *(float *)((R14 + 0x104));
    u25 = *(float *)((R14 + 0x90));
    t27 = !((*(float *)0xC045BBC) > _builtin_fabsf((u25 - u24)));
    F1 = (_builtin_fabsf((u25 - u24)));
    if (t27) goto L_C045B0A;
    goto L_C045AF0;
    L_C045AF0:;
    *(unsigned int *)((R14 + 0x84)) = ((*(int *)((R14 + 0x84))) & 0xFFFFFFFB);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + R14)) = *(struct mv3 *)(0xC0A4788); }
    goto L_C045B14;
    L_C045B14:;
    return;
    L_C045B0A:;
    *(unsigned int *)((R14 + 0x84)) = ((*(int *)((R14 + 0x84))) | 0x4);
    R0 = (0x84);
    goto L_C045B14;
    L_C045A90:;
    R0 = (0x84);
    R2 = (((*(int *)((R14 + 0x84))) & 0xFFFFFFF2));
    goto L_C045A98;
}
