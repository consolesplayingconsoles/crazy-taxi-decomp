/* Straight-line functions with calls and guards (batch gen_jp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
int Sound_Execute(int a4, int a5);

int Sound_Execute(int a4, int a5)
{
    int t7;
    int t21;
    int t26;
    int t27;
    int stk[10];

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
    int T_;
    R4 = a4;
    R5 = a5;
    L_C072218:;
    R10 = (0x0);
    R13 = (0x0);
    R8 = (0xC2AE6F4);
    R9 = (0x48);
    goto L_C0722A8;
    L_C0722A8:;
    if (((int)R10 < (int)0x3)) goto L_C072234;
    goto L_C0722AE;
    L_C0722AE:;
    R4 = (0xC2AE5C8);
    R5 = (R13);
    goto L_C0722B2;
    L_C0722B2:;
    *(unsigned int *)((R4 + 0x0)) = R13;
    t7 = (int)(R5 + 0x1) < (int)R9;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x1));
    if (t7) goto L_C0722B2;
    goto L_C0722BC;
    L_C0722BC:;
    return R0;
    L_C072234:;
    *(unsigned int *)(((int)stk + 4)) = (0xC2AE700 + (R10 << 2));
    R11 = (((R10 << 2) + R8));
    R12 = (((short)((((((R10 << 2) << 1) + R10) << 2) << 2) << 1) + 0xC2AE388));
    R14 = ((R10 << 2));
    goto L_C072296;
    L_C072296:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) > 0)) goto L_C07225A;
    goto L_C07229E;
    L_C07229E:;
    R0 = (R5);
    if ((R5 == -1)) goto L_C0722AE;
    goto L_C0722A6;
    L_C0722A6:;
    R10 = ((R10 + 0x1));
    goto L_C0722A8;
    L_C07225A:;
    t21 = nlsndSeqRequest((*(int *)(((*(int *)((R11 + 0x0))) + 0x0))));
    R5 = (t21);
    if ((t21 == -1)) goto L_C07229E;
    goto L_C072268;
    L_C072268:;
    *(unsigned int *)(((*(int *)(((R14 + R8) + 0x0))) + 0x0)) = R13;
    *(unsigned int *)((R14 + 0xC2AE700)) = ((*(int *)((R14 + 0xC2AE700))) - 1);
    t26 = *(int *)(((R14 + R8) + 0x0));
    *(unsigned int *)(((R14 + R8) + 0x0)) = (t26 + 0x4);
    t27 = (int)((int)((t26 + 0x4) - R12) / (int)0x4);
    R4 = (t27);
    if (((int)t27 >= (int)R9)) goto L_C072294;
    goto L_C07228E;
    L_C07228E:;
    if (((int)R4 > (int)0xFFFFFFB8)) goto L_C072296;
    goto L_C072294;
    L_C072294:;
    *(unsigned int *)((R11 + 0x0)) = R12;
    goto L_C072296;
}
