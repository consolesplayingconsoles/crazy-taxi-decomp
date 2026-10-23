/* Straight-line functions with calls and guards (batch gen_gk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int strlen(int);
int strncmp(int, int, int);
int search(int a4, int a5, int a6);

int search(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t15;
    int t18;
    int t19;
    int stk[10];

    int R0;
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
    L_C04D548:;
    *(unsigned int *)(((int)stk + 4)) = (strlen(R4));
    t1 = strlen(R5);
    t2 = *(int *)(((int)stk + 4));
    R10 = (((t1 - 1) + R5));
    R11 = ((R4 + t2));
    R12 = (R5);
    R13 = (t1);
    R14 = (((t1 + R4) - 1));
    R8 = (0xC081494);
    R9 = (0xC2A66A0);
    if (((unsigned int)((t1 + R4) - 1) >= (unsigned int)(R4 + t2))) goto L_C04D5AC;
    goto L_C04D584;
    L_C04D584:;
    if (((*(signed char *)((R14 + 0x0))) != (*(signed char *)((R10 + 0x0))))) goto L_C04D5A0;
    goto L_C04D58C;
    L_C04D58C:;
    t15 = (strncmp(((R14 - R13) + 0x1), R12, R13)) != 0;
    if (t15) goto L_C04D5A0;
    goto L_C04D59C;
    L_C04D59C:;
    R0 = (0x1);
    goto L_C04D5AE;
    L_C04D5AE:;
    return R0;
    L_C04D5A0:;
    t18 = *(int *)((R9 + ((*(signed char *)((R14 + 0x0))) << 2)));
    t19 = (unsigned int)(R14 + t18) < (unsigned int)R11;
    R14 = ((R14 + t18));
    if (t19) goto L_C04D584;
    goto L_C04D5AC;
    L_C04D5AC:;
    R0 = (0x0);
    goto L_C04D5AE;
}
