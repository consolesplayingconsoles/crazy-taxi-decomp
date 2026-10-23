/* Straight-line functions with calls and guards (batch gen_aqx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int findSplineSection(int a4, int a5, int a6, int a7);

int findSplineSection(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;
    int stk[3];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C04E21C:;
    t0 = *(int *)((R5 + 0x0));
    R13 = (0x0);
    R14 = ((t0 - 1));
    if (((int)(t0 - 1) < 0)) goto L_C04E260;
    goto L_C04E22A;
    L_C04E22A:;
    t5 = (int)((unsigned int)((int)((unsigned int)(R13 + R14) + (unsigned int)0x0)) + ((((int)0x0 > (int)(R13 + R14))) ? 1u : 0u));
    R7 = ((t5 >> 1));
    if (((*(int *)((R4 + ((t5 >> 1) << 2)))) == (*(int *)((R6 + 0x0))))) goto L_C04E27A;
    goto L_C04E244;
    L_C04E244:;
    if (((int)(*(int *)((R4 + (R7 << 2)))) >= (int)(*(int *)((R6 + 0x0))))) goto L_C04E258;
    goto L_C04E252;
    L_C04E252:;
    R13 = ((R7 + 0x1));
    goto L_C04E25C;
    L_C04E25C:;
    if (((int)R13 <= (int)R14)) goto L_C04E22A;
    goto L_C04E260;
    L_C04E260:;
    if (((int)R7 <= (int)(*(int *)((R5 + 0x0))))) goto L_C04E26A;
    goto L_C04E266;
    L_C04E266:;
    R0 = (0xFFFFFFFF);
    goto L_C04E27E;
    L_C04E27E:;
    return R0;
    L_C04E26A:;
    if (((int)(*(int *)((R4 + (R7 << 2)))) >= (int)(*(int *)((R6 + 0x0))))) goto L_C04E27A;
    goto L_C04E278;
    L_C04E278:;
    R7 = ((R7 + 0x1));
    goto L_C04E27A;
    L_C04E27A:;
    R0 = (R7);
    goto L_C04E27E;
    L_C04E258:;
    R14 = ((R7 - 1));
    goto L_C04E25C;
}
