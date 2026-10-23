/* Straight-line functions with calls and guards (batch gen_jo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Iraira(int a4, int a5, int a6, int a7);

int Chat_Iraira(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t23;
    int t53;
    int t58;
    int t3;
    int stk[68];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C061B14:;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xD4 + ((int)stk + 4))) = *(struct mv8 *)(0xC0D41A4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0xBC + ((int)stk + 4))) = *(struct mv6 *)(0xC0D41C4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0xA4 + ((int)stk + 4))) = *(struct mv6 *)(0xC0D41DC); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((0x88 + ((int)stk + 4))) = *(struct mv7 *)(0xC0D41F4); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x78)) = *(struct mv4 *)(0xC0D4210); }
    t0 = 0xC0D4220;
    t2 = (((int)stk + 4) + 0x14);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D4220 + 100)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC0D4284); }
    R10 = ((((int)stk + 4) + 0x14));
    R11 = (0xC13ED20);
    R12 = (0xC072F18);
    R13 = (0xC072F5C);
    R7 = (0xC13ED20);
    if ((R6 != 2)) goto L_C061BC2;
    goto L_C061B8A;
    L_C061B8A:;
    *(unsigned int *)((R7 + 0x0)) = (*(int *)((((int)stk + 4) + (((int)(((unsigned int)(*(int *)(((0x148 + R4) + 0x0))) >> 29) & 0x7)) << 2))));
    *(unsigned int *)0xC13ED38 = (*(int *)((((((*(int *)0xC2AD000) - 1) << 2) + (((int)stk + 4) + 0x78)) + 0x0)));
    Voice_ShutUp(0x1);
    Voice_Request(0xC13ED38, 0x1, 0x73, 0x0);
    goto L_C061CEC;
    L_C061CEC:;
    Voice_ShutUp(0x2);
    R0 = ((Voice_Request(R11, 0x2, 0x73, 0x0)));
    goto L_C061CFA;
    L_C061CFA:;
    return R0;
    L_C061BC2:;
    R14 = ((*(int *)0xC13EB90));
    if ((R5 != 0)) goto L_C061C9C;
    goto L_C061BCA;
    L_C061BCA:;
    t23 = *(int *)0xC2AD000;
    R0 = (t23);
    R4 = (0x7);
    R5 = (0x6);
    if ((t23 == 1)) goto L_C061BE6;
    goto L_C061BD6;
    L_C061BD6:;
    if ((R0 == 2)) goto L_C061BF4;
    goto L_C061BDA;
    L_C061BDA:;
    if ((R0 == 3)) goto L_C061C08;
    goto L_C061BDE;
    L_C061BDE:;
    if ((R0 == 4)) goto L_C061C70;
    goto L_C061BE2;
    L_C061BE2:;
    goto L_C061C86;
    L_C061C86:;
    R1 = (0x0);
    goto L_C061C88;
    L_C061C88:;
    *(unsigned int *)((R7 + 0x0)) = R1;
    goto L_C061C8A;
    L_C061C8A:;
    Voice_ShutUp(0x1);
    R0 = ((Voice_Request(R11, 0x1, 0x73, 0x0)));
    goto L_C061CFA;
    L_C061C70:;
    R2 = ((*(int *)((((((int)((unsigned int)R14 % (unsigned int)R4)) << 2) + (0x88 + ((int)stk + 4))) + 0x0))));
    goto L_C061C82;
    L_C061C82:;
    *(unsigned int *)((R7 + 0x0)) = R2;
    goto L_C061C8A;
    L_C061C08:;
    R2 = ((*(int *)(((0xA4 + ((int)stk + 4)) + (((int)((unsigned int)R14 % (unsigned int)R5)) << 2)))));
    goto L_C061C82;
    L_C061BF4:;
    R2 = ((*(int *)(((0xBC + ((int)stk + 4)) + (((int)((unsigned int)R14 % (unsigned int)R5)) << 2)))));
    goto L_C061C82;
    L_C061BE6:;
    R1 = ((*(int *)(((((R14 & R4) << 2) + (0xD4 + ((int)stk + 4))) + 0x0))));
    R14 = ((((R14 & R4) << 2) + (0xD4 + ((int)stk + 4))));
    goto L_C061C88;
    L_C061C9C:;
    R0 = (R5);
    if ((R5 != 1)) goto L_C061CFA;
    goto L_C061CA4;
    L_C061CA4:;
    R0 = (R6);
    if ((R6 == 0)) goto L_C061CB4;
    goto L_C061CAC;
    L_C061CAC:;
    if ((R0 == 1)) goto L_C061CC8;
    goto L_C061CB0;
    L_C061CB0:;
    goto L_C061CEC;
    L_C061CC8:;
    t53 = (int)(((unsigned int)(*(int *)(((0x148 + R4) + 0x0))) >> 29) & 0x7);
    R0 = (((((int)((int)R14 % (int)0x4)) + ((t53 << 2) + t53)) + 0x1));
    goto L_C061CE6;
    L_C061CE6:;
    *(unsigned int *)((R7 + 0x0)) = (*(int *)((R10 + (R0 << 2))));
    goto L_C061CEC;
    L_C061CB4:;
    t58 = (int)(((unsigned int)(*(int *)(((0x148 + R4) + 0x0))) >> 29) & 0x7);
    R0 = (((t58 << 2) + t58));
    goto L_C061CE6;
}
