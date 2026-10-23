/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int saveBufferInit(int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameErase(int a4, int a5, int a6, float f4, float f5);

int windowNameErase(int a4, int a5, int a6, float f4, float f5)
{
    int t10;
    int t15;
    int t17;
    int t18;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    float F4;
    float F5;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    F5 = f5;
    L_C03EE76:;
    windowOpenStep(0x3C);
    PutVM_Message(0x20, 0x1A, 0xC2A1248, 240.0f, 240.0f);
    R4 = (0xC2A11F4);
    if ((((*(int *)0xC2A1208) & 4) == 0)) goto L_C03EEF6;
    goto L_C03EEA0;
    L_C03EEA0:;
    *(unsigned int *)((R4 + 0x14)) = ((*(int *)((R4 + 0x14))) | 0x8);
    R13 = (0xC28A4E8);
    R14 = ((*(int *)0xC2A11C4));
    goto L_C03EED0;
    L_C03EED0:;
    t10 = (int)(R14 + 0x1) < (int)(unsigned char)(*(signed char *)((R13 + 0xE)));
    R14 = ((R14 + 0x1));
    if (t10) goto L_C03EEAE;
    goto L_C03EEDA;
    L_C03EEDA:;
    saveBufferInit(((short)((short)(R14 - 1) * (short)0x788) + (R13 + 0x10)));
    *(unsigned char *)((R13 + 0xE)) = ((*(signed char *)((R13 + 0xE))) - 1);
    goto L_C03EEF6;
    L_C03EEF6:;
    NextWindow(0x0);
    return windowEnterStep(0x0);
    L_C03EEAE:;
    t15 = ((short)((short)R14 * (short)0x788) + (R13 + 0x10));
    t17 = ((short)((short)(R14 - 1) * (short)0x788) + (R13 + 0x10));
    for (;;) { t18 = *(int *)t15; t15 = (t15 + 4); if ((unsigned int)((((short)((short)R14 * (short)0x788) + (R13 + 0x10)) + 1928)) < (unsigned int)t15) break; *(unsigned int *)t17 = t18; t17 = (t17 + 4); }
    goto L_C03EED0;
}
