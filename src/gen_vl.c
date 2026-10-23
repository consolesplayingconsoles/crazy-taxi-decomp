/* Straight-line functions with calls and guards (batch gen_vl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSubVector3op(int, int, int);
int nlUnitVector(int);
void Start_Proposal(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

void Start_Proposal(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t5;
    int t11;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    int T_;
    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C05F962:;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    t0 = *(int *)(((int)stk + 4));
    t5 = (((int)(R4 << 2) >= 0) ? (t0 << ((R4 << 2) & 31)) : ((-(int)(R4 << 2) & 31) ? ((unsigned int)t0 >> (-(int)(R4 << 2) & 31)) : 0));
    R14 = (R4);
    R4 = (((R5 << 2) + R5));
    R6 = (0xC2A9D30);
    R7 = t5;
    if ((R5 == 0)) goto L_C05F9A0;
    goto L_C05F986;
    L_C05F986:;
    *(unsigned int *)0xC2A9D5C = ((*(int *)0xC2A9D5C) | R7);
    *(unsigned int *)(((*(int *)((R6 + ((R14 + R4) << 2)))) + 0x18)) = 0x1;
    R5 = (0xC2A9D5C);
    goto L_C05F9B4;
    L_C05F9B4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((R14 + R4) << 2) + R6) + 0x0))) + 0x1C)) = *(struct mv3 *)((((int)stk + 4) + 0x1C)); }
    t11 = (int)((int)R14 % (int)0x5);
    nlSubVector3op((((int)stk + 4) + 0x4), ((signed char)(((t11 << 1) + t11) << 2) + 0xC131B10), ((*(int *)(((((R14 + R4) << 2) + R6) + 0x0))) + 0x1C));
    nlUnitVector((((int)stk + 4) + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((R14 + R4) << 2) + R6) + 0x0))) + 0x28)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
    return;
    L_C05F9A0:;
    *(unsigned int *)0xC2A9D58 = ((*(int *)0xC2A9D58) | R7);
    *(unsigned int *)(((*(int *)((R6 + (R14 << 2)))) + 0x18)) = 0x2;
    R5 = (0xC2A9D58);
    goto L_C05F9B4;
}
