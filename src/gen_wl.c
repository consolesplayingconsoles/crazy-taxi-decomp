/* Straight-line functions with calls and guards (batch gen_wl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckDrive(void);
int CheckSoftReset(void);
int Exec_LCD(void);
int InitSys(void);
int LoadBigOne(int);
int PutVMSMessage(void);
int Sound_Execute(void);
int frameFlip(void);
int gdc_Err(int, float);
int gdc_FileLoadExec(void);
int getSwitch(void);
int getSystemMetrics(void);
int nd_Exec_Puru2(int);
int nlObjPutSetFadeColor(float, float, float);
int paletteUpload(void);
void MainLoop(int a4, float f4, float f5, float f6);

void MainLoop(int a4, float f4, float f5, float f6)
{
    int t19;
    int t37;
    int stk[2];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C02A9AC:;
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE24C) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE280) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE2B4) = *(struct mv13 *)(0xC0E4E50); }
    *(unsigned int *)0xC1EE244 = 0x0;
    InitSys();
    R11 = (0x0);
    R12 = (0xC1EE244);
    R13 = (0xC1EE24C);
    R14 = (0xC0E4E50);
    if (((*(int *)0xC2A11C0) != 0)) goto L_C02A9E8;
    goto L_C02A9E4;
    L_C02A9E4:;
    *(unsigned int *)((R12 + 0x0)) = R11;
    goto L_C02A9EC;
    L_C02A9EC:;
    LoadBigOne(0xC141868);
    { struct mv13 { int w[13]; }; *(struct mv13 *)(R13) = *(struct mv13 *)(R14); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)((R13 + 0x34)) = *(struct mv13 *)(R14); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)((R13 + 0x68)) = *(struct mv13 *)(R14); }
    *(unsigned int *)(((int)stk + 4)) = R13;
    R10 = (0x2);
    R12 = (0xC1EE330);
    R14 = (0xC1EE234);
    R8 = (0xC07AEA0);
    R9 = (0x7);
    F15 = (1.0f);
    goto L_C02AA24;
    L_C02AA24:;
    getSwitch();
    nlObjPutSetFadeColor(F15, F15, F15);
    CheckSoftReset();
    CheckDrive();
    t19 = *(int *)(((((*(int *)((R14 + 0x0))) & R9) << 2) + 0xC08ACEC));
    R13 = (t19);
    if ((t19 != 0)) goto L_C02AA56;
    goto L_C02AA4A;
    L_C02AA4A:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    *(unsigned int *)0xC1EE238 = R11;
    goto L_C02AA5A;
    L_C02AA5A:;
    PutVMSMessage();
    Exec_LCD();
    nd_Exec_Puru2((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x2C))));
    gdc_FileLoadExec();
    Sound_Execute();
    *(unsigned int *)((R12 + 0x0)) = ((*(int *)((R12 + 0x0))) + 0x1);
    if (((int)(*(int *)0xC1EE208) <= (int)R10)) goto L_C02AA92;
    goto L_C02AA8C;
    L_C02AA8C:;
    gdc_Err(R4, F4);
    goto L_C02AA92;
    L_C02AA92:;
    getSystemMetrics();
    frameFlip();
    paletteUpload();
    goto L_C02AA24;
    L_C02AA56:;
    t37 = ((int (*)(int, float, float, float))(R13))(R4, F4, F5, F6);
    goto L_C02AA5A;
    L_C02A9E8:;
    *(unsigned int *)((R12 + 0x0)) = 0x1;
    goto L_C02A9EC;
}
