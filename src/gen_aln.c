/* Straight-line functions with calls and guards (batch gen_aln): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carListShiftBack(int a4, int a5, int a6, int a7, float f4);

int carListShiftBack(int a4, int a5, int a6, int a7, float f4)
{
    int t8;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    L_C044B3A:;
    R0 = (0xC044B78);
    R1 = (0xC2A44C8);
    R4 = (0xC2A44CC);
    R6 = (0x0);
    R7 = (0x3E8);
    F4 = (10000.0f);
    goto L_C044B5C;
    L_C044B5C:;
    if (((unsigned int)R6 < (unsigned int)(*(int *)((R1 + 0x0))))) goto L_C044B48;
    goto L_C044B62;
    L_C044B62:;
    return R0;
    L_C044B48:;
    t8 = *(int *)((R4 + 0x0));
    *(float *)((t8 + 0x94)) = ((*(float *)((t8 + 0x94))) - F4);
    *(unsigned int *)((t8 + 0xD4)) = ((*(int *)((t8 + 0xD4))) - R7);
    R0 = (0xD4);
    R4 = ((R4 + 0x4));
    R6 = ((R6 + 0x1));
    goto L_C044B5C;
}
