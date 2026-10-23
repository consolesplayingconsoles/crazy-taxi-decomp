/* Straight-line functions with calls and guards (batch gen_xc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Choin(int, int);
int psgEnterState3(int, int);
int Psg_ChoinIt(int a4, int a5);

int Psg_ChoinIt(int a4, int a5)
{
    int t0;
    int t8;
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C071C78:;
    *(unsigned int *)(((int)stk + 4)) = R4;
    t0 = *(signed char *)0xC2AD1DF;
    R0 = ((-(((((t0 & 2) == 0)) ? 1 : 0) - 1)));
    R14 = (0xC2AD000);
    if (((-(((((t0 & 2) == 0)) ? 1 : 0) - 1)) != 1)) goto L_C071CD2;
    goto L_C071C92;
    L_C071C92:;
    R0 = (0x1D8);
    if (((*(int *)((R14 + 0x1D8))) == 0)) goto L_C071CD2;
    goto L_C071C9A;
    L_C071C9A:;
    t8 = *(int *)(((*(int *)((R14 + R0))) + 0x20));
    R0 = (t8);
    if ((t8 != 3)) goto L_C071CD2;
    goto L_C071CA2;
    L_C071CA2:;
    R0 = (0x1D8);
    if (((*(int *)(((*(int *)((R14 + 0x1D8))) + 0x24))) != 0)) goto L_C071CD2;
    goto L_C071CAC;
    L_C071CAC:;
    *(unsigned int *)0xC2AE340 = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((*(int *)((R14 + 0x1D8))) + 0x24)) = 0xF;
    psgEnterState3((*(int *)((R14 + 0x1D8))), 0xF);
    return Chat_Choin((*(int *)((R14 + 0x1D8))), (*(int *)(((int)stk + 4))));
    L_C071CD2:;
    return R0;
}
