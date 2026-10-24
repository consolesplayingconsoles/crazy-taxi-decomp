/* Straight-line functions with calls and guards (batch gen_aqu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutRecords(int, int, int, int, int, int, float, float);
int PutWindow(int, float, float);
int putString(int, int, float, float, float);
int menuItemBoxRecord(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int menuItemBoxRecord(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t3;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    float F6;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C03DE54:;
    *(unsigned int *)(((int)stk + 12)) = R5;
    if ((R4 == 0)) goto L_C03DF08;
    goto L_C03DE6A;
    L_C03DE6A:;
    t3 = PutWindow(0x2, (float)((*(int *)0xC2A1ADC) + 0x138), 264.0f);
    R0 = (t3);
    R14 = (0xC2A1ADC);
    if ((t3 != 1)) goto L_C03DF08;
    goto L_C03DE84;
    L_C03DE84:;
    R12 = (((*(int *)(((int)stk + 12))) + 0x6));
    R13 = (0x148);
    F13 = (3e+02f);
    F14 = (1.0f);
    F15 = (272.0f);
    F4 = ((float)((*(int *)((R14 + 0x0))) + 0x148));
    if ((((*(int *)0xC2A11D0) & 0x600) != 0)) goto L_C03DEDA;
    goto L_C03DEA8;
    L_C03DEA8:;
    putString(0x23, 0xC0A2060, F4, F15, F14);
    R0 = ((PutRecords(0x24, (*(int *)0xC2A11C4), R12, 0x0, 0x4, 0x1, (float)(R13 + (*(int *)((R14 + 0x0)))), F13)));
    goto L_C03DF06;
    L_C03DF06:;
    goto L_C03DF08;
    L_C03DF08:;
    return R0;
    L_C03DEDA:;
    putString(0x23, 0xC0A2068, F4, F15, F14);
    R0 = ((PutRecords(0x24, 0xFFFFFFFF, R12, 0x0, 0x4, 0x1, (float)(R13 + (*(int *)((R14 + 0x0)))), F13)));
    goto L_C03DF06;
}
