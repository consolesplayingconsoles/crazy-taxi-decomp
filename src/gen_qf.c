/* Straight-line functions with calls and guards (batch gen_qf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int callGoBackAdvertise(void);
int callSaveData(int);
int syCfgSetSoundMode(int);
int menuGoBack(int a4);

int menuGoBack(int a4)
{
    int t3;
    int t7;
    int t8;
    int stk[3];

    int R0;
    int R2;
    int R3;
    int R4;
    int R14;
    int T_;
    R4 = a4;
    L_C03F912:;
    R14 = (0xC2A11D8);
    if (((int)(*(int *)0xC2A11D8) > (int)0x1)) goto L_C03F928;
    goto L_C03F920;
    L_C03F920:;
    return callGoBackAdvertise();
    L_C03F928:;
    t3 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t3 - 2);
    R0 = ((t3 - 2));
    if (((t3 - 2) != 0)) goto L_C03F968;
    goto L_C03F934;
    L_C03F934:;
    t7 = (GetMenuMode(0x0)) == 3;
    if (t7) goto L_C03F948;
    goto L_C03F93E;
    L_C03F93E:;
    t8 = GetMenuMode(0x0);
    R0 = (t8);
    if ((t8 != 5)) goto L_C03F968;
    goto L_C03F948;
    L_C03F948:;
    if (((*(int *)(((R14 + 0x4) + ((*(int *)((R14 + 0x0))) << 2)))) != 3)) goto L_C03F95E;
    goto L_C03F956;
    L_C03F956:;
    syCfgSetSoundMode((*(int *)0xC2A11BC));
    goto L_C03F95E;
    L_C03F95E:;
    return callSaveData(0x1);
    L_C03F968:;
    return R0;
}
