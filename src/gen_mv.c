/* Straight-line functions with calls and guards (batch gen_mv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckSoftReset(void);
int gdc_FileLoadExec(void);
int CheckDrive(void);
int Exec_LCD(void);
int LoadBigOne(int);
int PutVMSMessage(void);
int Sound_Execute(void);
int frameFlip(void);
int InitSys(void);
int gdc_Err(void);
int getSwitch(void);
int getSystemMetrics(void);
int nd_Exec_Puru2(int);
int nlObjPutSetFadeColor(float, float, float);
int paletteUpload(void);
void MainLoop(void);

void MainLoop(void)
{
    int t1;
    int t7;
    int t8;
    int t9;
    int t12;
    int t16;
    int t17;
    int t25;
    int t28;
    int t32;
    int t33;
    int t46;
    int t47;
    int t48;
    int t51;
    int t55;
    int t56;
    int t64;
    int t67;
    int t71;
    int t72;

    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE24C) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE280) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE2B4) = *(struct mv13 *)(0xC0E4E50); }
    *(unsigned int *)0xC1EE244 = 0x0;
    InitSys();
    t1 = *(int *)0xC2A11C0;
    if (t1 == 0) {
        *(unsigned int *)0xC1EE244 = 0x0;
        LoadBigOne(0xC141868);
        { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE24C) = *(struct mv13 *)(0xC0E4E50); }
        { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE280) = *(struct mv13 *)(0xC0E4E50); }
        { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE2B4) = *(struct mv13 *)(0xC0E4E50); }
        for (;;) {
            getSwitch();
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            CheckSoftReset();
            CheckDrive();
            t7 = *(int *)0xC1EE234;
            t8 = *(int *)((((t7 & 0x7) << 2) + 0xC08ACEC));
            if (t8 == 0) {
                t9 = *(int *)0xC1EE234;
                *(unsigned int *)0xC1EE234 = (t9 + 0x1);
                *(unsigned int *)0xC1EE238 = 0x0;
                PutVMSMessage();
                Exec_LCD();
                t12 = *(signed char *)0xC1EE278;
                nd_Exec_Puru2((unsigned char)t12);
                gdc_FileLoadExec();
                Sound_Execute();
                t16 = *(int *)0xC1EE330;
                *(unsigned int *)0xC1EE330 = (t16 + 0x1);
                t17 = *(int *)0xC1EE208;
                if ((int)t17 > (int)0x2) {
                    gdc_Err();
                    getSystemMetrics();
                    frameFlip();
                    paletteUpload();
                    continue;
                }
                getSystemMetrics();
                frameFlip();
                paletteUpload();
                continue;
            }
            t25 = ((int (*)(void))(t8))();
            PutVMSMessage();
            Exec_LCD();
            t28 = *(signed char *)0xC1EE278;
            nd_Exec_Puru2((unsigned char)t28);
            gdc_FileLoadExec();
            Sound_Execute();
            t32 = *(int *)0xC1EE330;
            *(unsigned int *)0xC1EE330 = (t32 + 0x1);
            t33 = *(int *)0xC1EE208;
            if ((int)t33 > (int)0x2) {
                gdc_Err();
                getSystemMetrics();
                frameFlip();
                paletteUpload();
                continue;
            }
            getSystemMetrics();
            frameFlip();
            paletteUpload();
        }
    }
    *(unsigned int *)0xC1EE244 = 0x1;
    LoadBigOne(0xC141868);
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE24C) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE280) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE2B4) = *(struct mv13 *)(0xC0E4E50); }
    for (;;) {
        getSwitch();
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
        CheckSoftReset();
        CheckDrive();
        t46 = *(int *)0xC1EE234;
        t47 = *(int *)((((t46 & 0x7) << 2) + 0xC08ACEC));
        if (t47 == 0) {
            t48 = *(int *)0xC1EE234;
            *(unsigned int *)0xC1EE234 = (t48 + 0x1);
            *(unsigned int *)0xC1EE238 = 0x0;
            PutVMSMessage();
            Exec_LCD();
            t51 = *(signed char *)0xC1EE278;
            nd_Exec_Puru2((unsigned char)t51);
            gdc_FileLoadExec();
            Sound_Execute();
            t55 = *(int *)0xC1EE330;
            *(unsigned int *)0xC1EE330 = (t55 + 0x1);
            t56 = *(int *)0xC1EE208;
            if ((int)t56 > (int)0x2) {
                gdc_Err();
                getSystemMetrics();
                frameFlip();
                paletteUpload();
                continue;
            }
            getSystemMetrics();
            frameFlip();
            paletteUpload();
            continue;
        }
        t64 = ((int (*)(void))(t47))();
        PutVMSMessage();
        Exec_LCD();
        t67 = *(signed char *)0xC1EE278;
        nd_Exec_Puru2((unsigned char)t67);
        gdc_FileLoadExec();
        Sound_Execute();
        t71 = *(int *)0xC1EE330;
        *(unsigned int *)0xC1EE330 = (t71 + 0x1);
        t72 = *(int *)0xC1EE208;
        if ((int)t72 > (int)0x2) {
            gdc_Err();
            getSystemMetrics();
            frameFlip();
            paletteUpload();
            continue;
        }
        getSystemMetrics();
        frameFlip();
        paletteUpload();
    }
}
