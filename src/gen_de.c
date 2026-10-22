/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckDrive(void);
int CheckSoftReset(void);
int Exec_LCD(void);
int InitSys(void);
int LoadBigOne(int);
int PutVMSMessage(void);
int Sound_Execute(void);
int frameFlip(void);
int gdc_Err(void);
int gdc_FileLoadExec(void);
int getSwitch(void);
int getSystemMetrics(void);
int nd_Exec_Puru2(int);
int nlObjPutSetFadeColor(float, float, float);
int paletteUpload(void);
void MainLoop(void);

void MainLoop(void)
{
    int t8;
    int t25;
    int t47;
    int t64;

    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE24C) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE280) = *(struct mv13 *)(0xC0E4E50); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EE2B4) = *(struct mv13 *)(0xC0E4E50); }
    *(unsigned int *)0xC1EE244 = 0x0;
    InitSys();
    if ((*(int *)0xC2A11C0) == 0) {
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
            t8 = *(int *)(((((*(int *)0xC1EE234) & 0x7) << 2) + 0xC08ACEC));
            if (t8 == 0) {
                *(unsigned int *)0xC1EE234 = ((*(int *)0xC1EE234) + 0x1);
                *(unsigned int *)0xC1EE238 = 0x0;
                PutVMSMessage();
                Exec_LCD();
                nd_Exec_Puru2((unsigned char)(*(signed char *)0xC1EE278));
                gdc_FileLoadExec();
                Sound_Execute();
                *(unsigned int *)0xC1EE330 = ((*(int *)0xC1EE330) + 0x1);
                if ((int)(*(int *)0xC1EE208) > (int)0x2) {
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
            nd_Exec_Puru2((unsigned char)(*(signed char *)0xC1EE278));
            gdc_FileLoadExec();
            Sound_Execute();
            *(unsigned int *)0xC1EE330 = ((*(int *)0xC1EE330) + 0x1);
            if ((int)(*(int *)0xC1EE208) > (int)0x2) {
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
        t47 = *(int *)(((((*(int *)0xC1EE234) & 0x7) << 2) + 0xC08ACEC));
        if (t47 == 0) {
            *(unsigned int *)0xC1EE234 = ((*(int *)0xC1EE234) + 0x1);
            *(unsigned int *)0xC1EE238 = 0x0;
            PutVMSMessage();
            Exec_LCD();
            nd_Exec_Puru2((unsigned char)(*(signed char *)0xC1EE278));
            gdc_FileLoadExec();
            Sound_Execute();
            *(unsigned int *)0xC1EE330 = ((*(int *)0xC1EE330) + 0x1);
            if ((int)(*(int *)0xC1EE208) > (int)0x2) {
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
        nd_Exec_Puru2((unsigned char)(*(signed char *)0xC1EE278));
        gdc_FileLoadExec();
        Sound_Execute();
        *(unsigned int *)0xC1EE330 = ((*(int *)0xC1EE330) + 0x1);
        if ((int)(*(int *)0xC1EE208) > (int)0x2) {
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
