/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int DispVector(int, int, int, float);
int Drv_StartAction(int, int, int);
int SetScreen(int);
int NextWindow(int);
int SetWindow(int);
int menuChangeValue(int, int, int);
int windowOpenStep(void);
int windowEnterStep(void);
int putMenuValue(int, int, int, int);
extern int PutRecords();
int windowClose(void);
int callSaveData(int);
int callWarnning(int);
int GetNowLanguage(int);
int SetTotalRecords(void);
int HomingPosX(int, float, float);
int nd_SprPut(int, int, float, float);
int Put_Window_SpriteXtoY(int, int, int, int, int, float, float, float, float);
int Start_LoadSave(int, int);
int End_LoadSave(int);
int Chat_Getoff(void);
int Drv_StartBikePedal(int);
int Drv_SetMotion(int, float);
float Drv_DriveFrame(void);
float Drv_ReverseFrame(void);
float Drv_BikePedalStep(void);
int Drv_ExecBlend(void);
int rinRand(void);
int breathSteer(int, int);
int breathMove(int, int);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c078480(int, int);
int FUN_0c078a70(int, int, int);
int FUN_0c07f5c0(void);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int FUN_0c15fab8(int, int);
int FcvStoreBuffer(int, int, float);
int GetMenuMode(int);
int LoadBackupData(int);
int PcarEvInit(int);
int Psg_SetMoveSpeed(int, float);
int Put2DObjUp(int, float, float);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
int SetCameraMode(int);
int Sound_Request(int, int);
int TrailerInit(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int buIsExistFile(int, int);
int calcCheckExec(int, int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int gdFsReadWG(int, int, int);
int hudHidePickUpNag(void);
int menuCursor(int, int, int);
int menuPutSprites(int, int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSetTranslate(int);
int nlSprPut(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int psgPickExitSide(int);
int putLevelCTFontAssist(int, int, int, int);
int putString(int, int, float, float, float);
int set_event(int, int);
int vibIsReady(void);
int Drv_StartBikeReverse(void);
int Drv_StartChoin(void);
int breathExecOne(int a4, int a5);
int LetsMakeAquarium(void);
int windowNameDelete(void);
int windowPause(void);
int ExecScreen(void);
int Drv_ExecDrive(void);
int Put_Stop_and_Brake(int a4, int a5);
int Drv_ExecReverse(void);
int InitRenderTexture2nd(int a4);
int ExecEffectSpray(int a4);
float calcCurvePoint(int a4, int a5, int a6, int a7, int a8, float f4);
int Drv_ExecBikeReverse(void);
float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4);
int menuItemBoxRecord(int a4, int a5);
int windowCardError(void);
int gdFsGetDirEnt(int a4, int a5, int a6, int a7);
int PutWindow(int a4, float f4, float f5);
int windowCardDriveError(void);
int TrainCarInit(int a4, int a5, int a6);
int drvPredictPath(void);
int menuItemName(int a4);
int menuItemDifficulty(int a4, int a5);
int Drv_ExecBikePedal(void);
int PcarInit(int a4, int a5, int a6);
int ExecBubble(int a4);
int GS_GuestIn(int a4);
int windowLoadData(void);
int CarSel_ChangeCar(void);
int goiToolLight(int a4);
int Put_Here_We_Go(int a4);
int windowGotBike(void);
int camGetOffShot1(void);
int psgEnterState4(int a4, int a5);

int Drv_StartBikeReverse(void)
{
    float u1;

    *(unsigned int *)0xC2AD1D0 = 0xC0D3080;
    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
    Drv_SetMotion(0xC13BB20, 0.0f);
    u1 = *(float *)0xC063114;
    *(float *)0xC2AD0F8 = u1;
    return 0xF8;
}

int Drv_StartChoin(void)
{
    float u1;

    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    Drv_SetMotion(0xC8A6B30, 0.0f);
    u1 = *(float *)0xC062FDC;
    *(float *)0xC2AD0F8 = u1;
    return 0xF8;
}

int breathExecOne(int a4, int a5)
{
    float u0;
    int t1;

    u0 = *(float *)0xC072A18;
    t1 = CheckClipping(u0);
    if (t1 != 0) {
        breathSteer(a4, a5);
        breathMove(a4, a5);
        return ((int (*)(int))(0xC0727F4))(a4);
    }
    return t1;
}


int windowNameDelete(void)
{
    int t2;
    int t3;
    int t4;
    float u6;
    float u7;

    windowOpenStep();
    menuCursor(0x1, 0x2, 0x0);
    t2 = *(int *)0xC2A11F4;
    t3 = *(int *)((((t2 << 2) + 0xC2A11F8) + 0x0));
    t4 = GetNowLanguage(0x0);
    putLevelCTFontAssist(0x24, (0xC09E1B4 + (short)((short)t4 * (short)0x58)), 0x2, t3);
    u6 = *(float *)0xC03EF2C;
    u7 = *(float *)0xC03EF30;
    PutVM_Message(0x20, 0x19, 0xC2A1248, u7, u6);
    return windowEnterStep();
}

int windowPause(void)
{
    int t1;
    int t2;
    int t4;
    int t9;
    int t10;
    float u12;
    float u13;
    float u14;

    windowOpenStep();
    t1 = vibIsReady();
    t2 = 0x0;
    if (t1 == 0) {
        t2 = 0x8;
    }
    t4 = *(int *)0xC2A11CC;
    if ((t4 & 4) == 0) {
        menuCursor(0x1, 0x4, t2);
    }
    t9 = *(int *)0xC2A11F4;
    t10 = *(int *)((((t9 << 2) + 0xC2A11F8) + 0x0));
    putLevelCTFontAssist(0x2020, 0xC09E0AC, 0x4, t10);
    u12 = *(float *)0xC03EA5C;
    u13 = *(float *)0xC03EA60;
    u14 = *(float *)0xC03EA64;
    putString(0x24, 0xC0A2088, u14, u13, u12);
    return windowEnterStep();
}


int Drv_ExecDrive(void)
{
    int t0;
    int t1;
    float t3;
    int t4;
    int t8;
    float u9;
    float u10;
    int t24;
    int t27;
    float u26;

    t0 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t0 | 0x40);
    t1 = *(signed char *)0xC2AD1DF;
    if ((t1 & 128) != 0) {
        Drv_ExecBlend();
    } else {
        t3 = Drv_DriveFrame();
        *(float *)0xC2AD024 = t3;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, t3);
    }
    t8 = *(int *)0xC1791EC;
    if (t8 == 0) {
        u9 = *(float *)0xC063238;
        u10 = *(float *)0xC179228;
        if (u9 > u10) {
            Drv_StartAction(0x1, 0x0, 0x0);
        }
    }
    t24 = *(signed char *)0xC1EE26E;
    t27 = 0x22;
    if (t24 != 0) {
        Drv_StartAction(0x9, 0x0, 0x0);
        u26 = *(float *)0xC063244;
        *(float *)0xC2AD024 = u26;
        t27 = 0x24;
    }
    return t27;
}

int Put_Stop_and_Brake(int a4, int a5)
{
    float u1;
    float u2;
    int t3;
    int t6;
    int t10;

    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
    *(float *)0xC2A7EEC = 1.0f;
    *(float *)0xC2A7EF0 = 1.0f;
    *(float *)0xC2A7F08 = 1.0f;
    *(unsigned int *)0xC2A7F10 = 0x200A;
    *(unsigned int *)0xC2A7F04 = 0x0;
    u1 = *(float *)0xC05757C;
    u2 = *(float *)0xC057580;
    if (a4 == 0) {
        t3 = 0x1D9;
        if (a5 == 0) {
            t3 = 0x1D2;
        }
        nd_SprPut(0xC2A7EDC, t3, u1, u2);
    } else {
        t6 = 0x1D8;
        if (a5 == 0) {
            t6 = 0x1D1;
        }
        nd_SprPut(0xC2A7EDC, t6, u1, u2);
    }
    t10 = ResetFadeColor();
    *(unsigned int *)0xC2A7F10 = 0xA;
    return t10;
}


int InitRenderTexture2nd(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    int t6;
    int t7;
    float u8;
    float u9;
    int t15;
    int t23;
    float u16;
    int t17;
    int t18;
    float u19;
    float u20;
    float u21;

    t0 = *(int *)0xC2B3184;
    t1 = *(int *)0xC2AEC84;
    t2 = *(int *)0xC2B29C0;
    t3 = *(int *)((((((t0 + 0x78) << 2) << 1) + t1) + 0x4));
    t4 = *(int *)((((t3 * 0x3C) + t2) + 0x34));
    *(unsigned int *)0xC0EE7FC = t4;
    if (a4 != 0) {
        u5 = *(float *)0xC0393A8;
        t6 = 0xC0EE810;
        t7 = 0x0;
        for (;;) {
            u8 = *(float *)((t6 + 0x4));
            t7 = (t7 + 0x1);
            *(float *)((t6 + 0x4)) = (u8 * u5);
            u9 = *(float *)((t6 + 0x10));
            *(float *)((t6 + 0x10)) = (u9 * u5);
            t6 = (t6 + 0x14);
            if ((int)t7 >= (int)0x4) {
                break;
            }
        }
    }
    t15 = *(int *)0xC1EE228;
    t23 = t15;
    if (t15 == 2) {
        u16 = *(float *)0xC0393B8;
        t17 = 0x0;
        t18 = 0x0;
        for (;;) {
            u19 = *(float *)(((t17 + 0xC0EE810) + 0x10));
            t18 = (t18 + 0x1);
            *(float *)(((t17 + 0xC0EE810) + 0x10)) = (u19 * u16);
            u20 = *(float *)(((t17 + 0xC0EE860) + 0x10));
            *(float *)(((t17 + 0xC0EE860) + 0x10)) = (u20 * u16);
            u21 = *(float *)(((t17 + 0xC0EE8B0) + 0x10));
            *(float *)(((t17 + 0xC0EE8B0) + 0x10)) = (u21 * u16);
            t17 = (t17 + 0x14);
            if ((int)t18 >= (int)0x4) {
                break;
            }
        }
        t23 = 0x10;
    }
    return t23;
}

int ExecEffectSpray(int a4)
{
    int t0;
    float u1;
    float u6;
    float u7;
    int t11;
    float u13;
    float u15;
    float u16;

    t0 = *(int *)((a4 + 0x30));
    u1 = *(float *)0xC036A60;
    *(float *)0xC462ABC = ((float)t0 / u1);
    if (((float)t0 / u1) > 1.0f) {
        *(float *)0xC462ABC = 1.0f;
    }
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 1.0f);
    u6 = *(float *)0xC036A70;
    u7 = *(float *)((a4 + 0x2C));
    Put2DObjUp(0xC462A78, u7, u7);
    ResetFadeColor();
    nlPopMatrix(0x1);
    t11 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t11 - 1);
    if ((int)(t11 - 1) <= 0) {
        return nlCloseEvent(a4);
    }
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    u13 = *(float *)0xC036A88;
    nlScaleVector((a4 + 0x20), (a4 + 0x20), u13);
    u15 = *(float *)((a4 + 0x24));
    *(float *)((a4 + 0x24)) = (u15 - 0.166665986f);
    u16 = *(float *)((a4 + 0x2C));
    *(float *)((a4 + 0x2C)) = (u16 + 0.0799999982f);
    return 0x2C;
}


int Drv_ExecBikeReverse(void)
{
    int t0;
    int t1;
    float u3;
    int t4;
    float t6;
    float u7;
    int t8;
    float u9;
    int t10;
    int t21;
    float u22;
    float u23;

    t0 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t0 | 0x40);
    t1 = *(signed char *)0xC2AD1DF;
    if ((t1 & 128) != 0) {
        Drv_ExecBlend();
    } else {
        u3 = *(float *)0xC2AD024;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, u3);
        t6 = Drv_BikePedalStep();
        u7 = *(float *)0xC2AD024;
        *(float *)0xC2AD024 = (u7 + t6);
        t8 = *(int *)0xC2AD020;
        u9 = *(float *)0xC2AD024;
        t10 = *(int *)((t8 + 0x0));
        if (!((float)(t10 - 1) > u9)) {
            *(float *)0xC2AD024 = 0.0f;
        }
    }
    t21 = *(int *)0xC1791EC;
    if (t21 != 0) {
        u22 = *(float *)0xC063C50;
        u23 = *(float *)0xC179228;
        if (u23 > u22) {
            return Drv_StartAction(0x0, 0x0, 0x0);
        }
        return 0x15C;
    }
    return 0x120;
}

float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    int stk[5] = {0};

    u0 = *(float *)0xC04D4D8;
    u1 = *(float *)0xC04D4DC;
    u2 = *(float *)(((a4 + 0xC) + 0x0));
    u3 = *(float *)((a4 + 0x0));
    u4 = *(float *)(((a4 + 0x18) + 0x0));
    u5 = *(float *)(((a4 + 0x24) + 0x0));
    *(float *)((((int)stk + 4) + 0x0)) = ((((((((f4 + 1.0f) * (f4 + (-1.0f))) * (f4 + u1)) / (1.0f + 1.0f)) * u2) + ((-(((f4 + (-1.0f)) * (f4 + u1)) * f4)) / u0) * u3) + ((-((((f4 + 1.0f) * (f4 + u1)) * f4) * 1.0f)) / (1.0f + 1.0f)) * u4) + ((((f4 + 1.0f) * (f4 + (-1.0f))) * f4) / u0) * u5);
    u6 = *(float *)(((a4 + 0xC) + 0x4));
    u7 = *(float *)((a4 + 0x4));
    u8 = *(float *)(((a4 + 0x18) + 0x4));
    u9 = *(float *)(((a4 + 0x24) + 0x4));
    *(float *)((((int)stk + 4) + 0x4)) = ((((((((f4 + 1.0f) * (f4 + (-1.0f))) * (f4 + u1)) / (1.0f + 1.0f)) * u6) + ((-(((f4 + (-1.0f)) * (f4 + u1)) * f4)) / u0) * u7) + ((-((((f4 + 1.0f) * (f4 + u1)) * f4) * 1.0f)) / (1.0f + 1.0f)) * u8) + ((((f4 + 1.0f) * (f4 + (-1.0f))) * f4) / u0) * u9);
    u10 = *(float *)(((a4 + 0xC) + 0x8));
    u11 = *(float *)((a4 + 0x8));
    u12 = *(float *)(((a4 + 0x18) + 0x8));
    u13 = *(float *)(((a4 + 0x24) + 0x8));
    *(float *)((((int)stk + 4) + 0x8)) = ((((((((f4 + 1.0f) * (f4 + (-1.0f))) * (f4 + u1)) / (1.0f + 1.0f)) * u10) + ((-(((f4 + (-1.0f)) * (f4 + u1)) * f4)) / u0) * u11) + ((-((((f4 + 1.0f) * (f4 + u1)) * f4) * 1.0f)) / (1.0f + 1.0f)) * u12) + ((((f4 + 1.0f) * (f4 + (-1.0f))) * f4) / u0) * u13);
    t14 = *(int *)((((int)stk + 4) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t14;
    t15 = *(int *)((((int)stk + 4) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t15;
    t16 = *(int *)((((int)stk + 4) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t16;
    return ((((f4 + 1.0f) * (f4 + (-1.0f))) * f4) / u0);
}

int menuItemBoxRecord(int a4, int a5)
{
    int t0;
    float u1;
    int t2;
    int t17;
    int t3;
    float u4;
    int t5;
    float u6;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t24;
    int t14;

    if (a4 != 0) {
        t0 = *(int *)0xC2A1ADC;
        u1 = *(float *)0xC03DF78;
        t2 = PutWindow(0x2, (float)(t0 + 0x138), u1);
        t17 = t2;
        if (t2 == 1) {
            t3 = *(int *)0xC2A1ADC;
            u4 = *(float *)0xC03DF7C;
            t5 = *(int *)0xC2A11D0;
            u6 = *(float *)0xC03DF80;
            if ((t5 & 0x600) == 0) {
                putString(0x23, 0xC0A2060, (float)(t3 + 0x148), u6, 1.0f);
                t8 = *(int *)0xC2A1ADC;
                t9 = *(int *)0xC2A11C4;
                t10 = ((int (*)(int, int, int, int, float, float))(PutRecords))(0x24, t9, (a5 + 0x6), 0x0, (float)(0x148 + t8), u4);
                t14 = t10;
            } else {
                putString(0x23, 0xC0A2068, (float)(t3 + 0x148), u6, 1.0f);
                t12 = *(int *)0xC2A1ADC;
                t13 = ((int (*)(int, int, int, int, int, int, float, float))(PutRecords))(0x24, 0xFFFFFFFF, (a5 + 0x6), 0x0, 0x4, 0x1, (float)(0x148 + t12), u4);
                t14 = t13;
            }
            t17 = t14;
        }
        t24 = t17;
    }
    return t24;
}


int gdFsGetDirEnt(int a4, int a5, int a6, int a7)
{
    int t0;
    int t27;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t6;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)((a6 + 0x8));
    t27 = 0x0;
    if (t0 != a5) {
        t1 = *(int *)(((int)stk + 4));
        *(unsigned int *)((a6 + 0x8)) = t1;
        t2 = *(int *)(((int)stk + 8));
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)(((int)stk + 12)) = (t2 + 0x800);
        t4 = a7;
        t5 = (a6 + 0x10);
        t7 = 0x0;
        for (;;) {
            if ((int)t4 <= 0) {
                *(unsigned int *)((a6 + 0x0)) = t7;
                if (t7 == t3) {
                    if (t4 != 0) {
                        if (t4 == 0x800) {
                            t8 = *(int *)(((int)stk + 12));
                            if ((unsigned int)t6 < (unsigned int)t8) {
                                t9 = *(signed char *)((t6 + 0x0));
                                if (t9 != 0) {
                                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                                    return 0xFFFFFFF4;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        *(unsigned int *)((a6 + 0x8)) = 0x0;
                        return 0xFFFFFFF4;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t10 = *(int *)(((int)stk + 8));
            t11 = *(int *)(((int)stk + 4));
            t12 = gdFsReadWG(t11, 0x1, t10);
            if (t12 != 0) {
                break;
            }
            t13 = *(int *)(((int)stk + 8));
            t6 = t13;
            if ((int)t7 < (int)t3) {
                for (;;) {
                    t14 = FUN_0c15fab8(t6, t5);
                    if (t14 != 0) {
                        if (t7 == 0) {
                            t15 = *(int *)((t5 + 0x4));
                            if (t15 != t4) {
                                t16 = *(int *)((t5 + 0x4));
                                t4 = t16;
                            }
                        }
                        t20 = *(int *)(((int)stk + 12));
                        t6 = (t6 + t14);
                        t5 = (t5 + 0x2C);
                        t7 = (t7 + 0x1);
                        if ((unsigned int)t6 < (unsigned int)t20) {
                            
                            continue;
                        }
                    }
                    break;
                }
                if ((int)t7 < (int)t3) {
                    t22 = *(int *)(((int)stk + 4));
                    t4 = (t4 - 0x800);
                    *(unsigned int *)(((int)stk + 4)) = (t22 + 0x1);
                    continue;
                }
                *(unsigned int *)((a6 + 0x0)) = t7;
                if (t7 == t3) {
                    if (t4 != 0) {
                        if (t4 == 0x800) {
                            t23 = *(int *)(((int)stk + 12));
                            if ((unsigned int)t6 < (unsigned int)t23) {
                                t24 = *(signed char *)((t6 + 0x0));
                                if (t24 != 0) {
                                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                                    return 0xFFFFFFF4;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        *(unsigned int *)((a6 + 0x8)) = 0x0;
                        return 0xFFFFFFF4;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            *(unsigned int *)((a6 + 0x0)) = t7;
            if (t7 == t3) {
                if (t4 != 0) {
                    if (t4 == 0x800) {
                        t25 = *(int *)(((int)stk + 12));
                        if ((unsigned int)t6 < (unsigned int)t25) {
                            t26 = *(signed char *)((t6 + 0x0));
                            if (t26 != 0) {
                                *(unsigned int *)((a6 + 0x8)) = 0x0;
                                return 0xFFFFFFF4;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            return 0x0;
        }
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        t27 = t12;
    }
    return t27;
}

int PutWindow(int a4, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t9;
    float u4;
    float u5;
    int t6;
    float u25;
    int t18;

    u0 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = (u0 + 0.0199999996f);
    *(float *)0xC2A1AB0 = 0.799999952f;
    u1 = *(float *)0xC2A1AB0;
    u2 = *(float *)0xC2A1AD4;
    if ((int)a4 <= (int)0x2) {
        t3 = Put_Window_SpriteXtoY((int)(f4 + 160.0f), (int)(f5 + 72.0f), 0x6, 0x3, a4, u2, 19.0f, 8.0f, u1);
        t18 = t3;
    } else {
        t9 = 0xFFFFFFFF;
        if (a4 == 3) {
            u4 = *(float *)0xC03D4D4;
            u5 = *(float *)0xC03D4D8;
            t6 = Put_Window_SpriteXtoY((int)(f4 + u5), (int)(f5 + 72.0f), 0x6, 0x3, a4, u2, u4, 8.0f, u1);
            t9 = t6;
        }
        t18 = t9;
    }
    *(float *)0xC2A1AB0 = 1.0f;
    u25 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = (u25 - 0.0199999996f);
    return t18;
}


int TrainCarInit(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u20;
    float u21;
    float u22;
    float u23;
    int t24;
    int t25;
    int t27;

    t0 = 0xC048C48;
    if (a4 == 15) {
        t0 = 0xC0483E0;
    }
    t2 = set_event(0x12C, t0);
    if (t2 != 0) {
        t3 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x74)) = ((t3 + 0x1) - 1);
        t4 = *(int *)0xC2A44A8;
        *(unsigned int *)0xC2A44A8 = (t4 + 0x1);
        *(unsigned int *)((t2 + 0x78)) = a4;
        *(unsigned int *)((t2 + 0x80)) = a5;
        if (a6 == 0) {
            t5 = *(int *)((t2 + 0x80));
            t6 = *(int *)0xC2A6690;
            t7 = *(int *)((((((t5 << 1) + t5) << 2) + t6) + 0x4));
            t8 = *(int *)((((((t5 << 1) + t5) << 2) + t6) + 0x0));
            t9 = *(int *)((t7 + 0x0));
            t10 = *(int *)(((((((t9 << 1) + t9) << 2) + t8) - 120) + 0x8));
            *(unsigned int *)(((0x8C + t2) + 0x8)) = t10;
            t11 = *(int *)(((((((t9 << 1) + t9) << 2) + t8) - 120) + 0x4));
            *(unsigned int *)(((0x8C + t2) + 0x4)) = t11;
            t12 = *(int *)(((((((t9 << 1) + t9) << 2) + t8) - 120) + 0x0));
            *(unsigned int *)(((0x8C + t2) + 0x0)) = t12;
        } else {
            t13 = *(int *)((a6 + 0x8));
            *(unsigned int *)(((0x8C + t2) + 0x8)) = t13;
            t14 = *(int *)((a6 + 0x4));
            *(unsigned int *)(((0x8C + t2) + 0x4)) = t14;
            t15 = *(int *)((a6 + 0x0));
            *(unsigned int *)(((0x8C + t2) + 0x0)) = t15;
        }
        PcarEvInit(t2);
        u20 = *(float *)((t2 + 0xB4));
        u21 = *(float *)0xC047A70;
        u22 = *(float *)0xC047A74;
        u23 = *(float *)0xC047A78;
        *(float *)((t2 + 0xD0)) = (u22 + u23 * (u21 / u20));
        t24 = *(int *)((t2 + 0xD4));
        t25 = *(int *)((t2 + 0x80));
        courseStatusEntry(t25, t24);
        t27 = *(int *)((t2 + 0x84));
        calcCheckExec(t2, t27);
    }
    return t2;
}

int drvPredictPath(void)
{
    float u1;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t12;
    int t13;
    int t14;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int stk[21] = {0};

    nlSubVector3op((((int)stk + 4) + 0xC), 0xC1791C8, 0xC1791D4);
    u1 = *(float *)0xC064618;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC13ED8C, (((int)stk + 4) + 0xC), u1, u1);
    t3 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)0xC13ED94 = t3;
    t4 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)0xC13ED90 = t4;
    t5 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)0xC13ED8C = t5;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC13ED80, (((int)stk + 4) + 0xC), u1, u1);
    t7 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)0xC13ED88 = t7;
    t8 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)0xC13ED84 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)0xC13ED80 = t9;
    nlGetAverageVector(0xC1791C8, 0xC1791D4, (((int)stk + 4) + 0x18), u1, u1);
    nlGetAverageVector((((int)stk + 4) + 0x18), 0xC13ED74, (((int)stk + 4) + 0x18), u1, u1);
    t12 = *(int *)(((((int)stk + 4) + 0x18) + 0x8));
    *(unsigned int *)0xC13ED7C = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x18) + 0x4));
    *(unsigned int *)0xC13ED78 = t13;
    t14 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
    *(unsigned int *)0xC13ED74 = t14;
    nlGetAverageVector(0xC179144, 0xC179158, (((int)stk + 4) + 0x24), u1, u1);
    nlGetAverageVector((((int)stk + 4) + 0x24), 0xC13ED68, (((int)stk + 4) + 0x24), u1, u1);
    t17 = *(int *)(((((int)stk + 4) + 0x24) + 0x8));
    *(unsigned int *)0xC13ED70 = t17;
    t18 = *(int *)(((((int)stk + 4) + 0x24) + 0x4));
    *(unsigned int *)0xC13ED6C = t18;
    t19 = *(int *)(((((int)stk + 4) + 0x24) + 0x0));
    *(unsigned int *)0xC13ED68 = t19;
    t20 = *(int *)(((((int)stk + 4) + 0x24) + 0x8));
    *(unsigned int *)0xC2AD2C4 = t20;
    t21 = *(int *)(((((int)stk + 4) + 0x24) + 0x4));
    *(unsigned int *)0xC2AD2C0 = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x24) + 0x0));
    *(unsigned int *)0xC2AD2BC = t22;
    t23 = 0x1;
    for (;;) {
        FUN_0c078a70(((short)(((t23 << 1) + t23) << 2) + 0xC2AD2BC), (((short)(((t23 << 1) + t23) << 2) + 0xC2AD2BC) - 12), (((int)stk + 4) + 0x18));
        t25 = nlAddVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
        t23 = (t23 + 0x1);
        if ((int)t23 >= (int)0x23) {
            break;
        }
    }
    return t25;
}


int menuItemDifficulty(int a4, int a5)
{
    int t0;
    int t12;
    int t13;
    float u16;
    float u17;
    float u1;
    int t20;
    int t21;
    int t22;
    float u35;
    float u36;
    float u38;
    int t39;
    int t46;
    int t40;
    int t41;
    int t42;
    int t44;
    int t3;
    int t4;
    float u6;
    float u7;
    int stk[12] = {0};

    t0 = *(int *)0xC2A1ADC;
    t12 = 0x8;
    t13 = 0xC28A4EA;
    u16 = 154.0f;
    u17 = (float)(t0 + 0x1DE);
    if (a5 == 1) {
    } else {
        if (a5 == 2) {
            u1 = *(float *)0xC03D84C;
            t3 = 0x8;
            t4 = 0xC28A4EB;
            u6 = u1;
            u7 = (float)(0x1DE - t0);
        }
        t12 = t3;
        t13 = t4;
        u16 = u6;
        u17 = u7;
    }
    t20 = *(signed char *)((t13 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t20;
    if (a4 != 0) {
        t21 = menuChangeValue(0x0, ((int)stk + 4), t12);
        if (t21 == 1) {
            t22 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t13 + 0x0)) = t22;
        }
    }
    u35 = *(float *)0xC03D858;
    u36 = *(float *)0xC03D85C;
    putString(0x28, 0xC0A2048, (u17 + u36), (u16 + u35), 1.0f);
    u38 = *(float *)0xC03D868;
    t39 = putString(0x20, 0xC0A2050, (u17 + u38), (u16 + u35), 1.0f);
    t46 = t39;
    if ((int)t12 > 0) {
        t40 = 0x0;
        for (;;) {
            t41 = *(int *)(((int)stk + 4));
            t42 = 0xC0A0868;
            if ((int)t40 <= (int)t41) {
                t42 = 0xC0A0858;
            }
            t44 = menuPutSprites(t42, 0xC2A1A84, (int)((float)(((((t40 - 3) << 2) + (t40 - 3)) << 2) - 10) + u17), (int)u16);
            t40 = (t40 + 0x1);
            if ((int)t40 >= (int)t12) {
                break;
            }
        }
        t46 = t44;
    }
    return t46;
}

int Drv_ExecBikePedal(void)
{
    int t0;
    int t1;
    float u3;
    int t4;
    float t6;
    float u7;
    int t8;
    float u9;
    int t10;
    float u13;
    int t14;
    float u15;
    float u16;
    float u68;
    float u69;
    int t99;
    float u100;
    float u101;
    int t121;

    t0 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t0 | 0x40);
    t1 = *(signed char *)0xC2AD1DF;
    if ((t1 & 128) != 0) {
        Drv_ExecBlend();
    } else {
        u3 = *(float *)0xC2AD024;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, u3);
        t6 = Drv_BikePedalStep();
        u7 = *(float *)0xC2AD024;
        *(float *)0xC2AD024 = (u7 + t6);
        t8 = *(int *)0xC2AD020;
        u9 = *(float *)0xC2AD024;
        t10 = *(int *)((t8 + 0x0));
        if (!((float)(t10 - 1) > u9)) {
            *(float *)0xC2AD024 = 0.0f;
        }
        u13 = *(float *)0xC2AD024;
        t14 = *(int *)0xC2AD014;
        u15 = *(float *)0xC2AD2B8;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                } else {
                    u16 = *(float *)0xC063B24;
                    if (u16 > u15) {
                        *(unsigned int *)0xC2AD014 = 0x0;
                        Drv_StartBikePedal(0x0);
                        *(float *)0xC2AD100 = u13;
                    }
                }
            } else {
                if (u15 > (1.0f + 1.0f)) {
                    *(unsigned int *)0xC2AD014 = 0x0;
                    Drv_StartBikePedal(0x0);
                    *(float *)0xC2AD100 = u13;
                }
            }
        } else {
            if (u15 > 0.099999994f) {
                if (1.5f > u15) {
                    *(unsigned int *)0xC2AD014 = 0x1;
                    Drv_StartBikePedal(0x1);
                    *(float *)0xC2AD100 = u13;
                }
            }
            u68 = *(float *)0xC2AD2B8;
            if (u68 > 6.0f) {
                u69 = *(float *)0xC2AD024;
                *(unsigned int *)0xC2AD014 = 0x2;
                Drv_StartBikePedal(0x2);
                *(float *)0xC2AD100 = u69;
            }
        }
    }
    t99 = *(int *)0xC1791EC;
    if (t99 == 0) {
        u100 = *(float *)0xC063B2C;
        u101 = *(float *)0xC179228;
        if (u100 > u101) {
            Drv_StartAction(0x1, 0x0, 0x0);
        }
    }
    t121 = *(signed char *)0xC1EE26E;
    if (t121 != 0) {
        return Sound_Request(0x308A9, 0x0);
    }
    return 0x22;
}


int ExecBubble(int a4)
{
    int t0;
    float u5;
    float u10;
    float u11;
    float u12;
    float u14;
    float u15;
    float t16;
    float u17;
    float u18;
    float t19;
    float u20;
    float u21;

    t0 = *(int *)((a4 + 0x30));
    *(float *)0xC4634A4 = ((float)t0 / 10.0f);
    if (((float)t0 / 10.0f) > 1.0f) {
        *(float *)0xC4634A4 = 1.0f;
    }
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 1.0f);
    u5 = *(float *)((a4 + 0x2C));
    Put2DObjUp(0xC463460, u5, u5);
    ResetFadeColor();
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    u10 = *(float *)((a4 + 0x18));
    u11 = *(float *)0xC274258;
    if (!(u11 > u10)) {
        return nlCloseEvent(a4);
    }
    u12 = *(float *)0xC036BAC;
    nlScaleVector((a4 + 0x20), (a4 + 0x20), u12);
    u14 = *(float *)0xC036BB4;
    u15 = *(float *)0xC036BB8;
    t16 = nlRandom();
    u17 = *(float *)(((a4 + 0x20) + 0x0));
    *(float *)(((a4 + 0x20) + 0x0)) = (u17 + u15 * (t16 + u14));
    u18 = *(float *)((a4 + 0x24));
    *(float *)((a4 + 0x24)) = (u18 + 0.049999997f);
    t19 = nlRandom();
    u20 = *(float *)(((a4 + 0x28) + 0x0));
    *(float *)(((a4 + 0x28) + 0x0)) = (u20 + u15 * (t19 + u14));
    u21 = *(float *)((a4 + 0x2C));
    *(float *)((a4 + 0x2C)) = (u21 + 0.00999999978f);
    return 0x2C;
}


int windowLoadData(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    float u19;
    float u23;
    int t27;
    float u28;
    float u29;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t43;

    t0 = *(int *)0xC2A1220;
    if (t0 != 0) {
        return 0;
    }
    t1 = *(int *)0xC2A121C;
    if (t1 == 1) {
        *(unsigned int *)0xC2A121C = 0x2;
        *(unsigned int *)0xC2A1208 = 0x2;
    }
    t4 = windowOpenStep();
    if (t4 == 1) {
        t5 = *(int *)0xC2A11B8;
        t6 = buIsExistFile(t5, 0xC0A2078);
        if (t6 != 0) {
            if (t6 != 0xFFFFFF05) {
                return callWarnning(t6);
            }
            SetWindow(0x0);
            t8 = *(int *)0xC2A1228;
            *(unsigned int *)0xC1EE234 = t8;
            t9 = *(int *)0xC2A122C;
            *(unsigned int *)0xC1EE238 = t9;
            t10 = callSaveData(0x0);
            *(unsigned int *)0xC2A1224 = 0x0;
            return t10;
        }
        *(unsigned int *)0xC2A19E0 = 0x3;
        return t6;
    }
    t11 = *(signed char *)0xC28A4F6;
    if (t11 != 0) {
        *(unsigned int *)0xC2A11C4 = 0x0;
    }
    t15 = *(int *)0xC2A1228;
    if (t15 == 0) {
        t16 = *(int *)0xC2A122C;
        if (t16 == 0) {
            t17 = *(int *)0xC2A11B8;
            PutVM_Message(0x20, 0xB, ((((t17 << 2) << 2) << 1) + 0xC09F9F0), 98.0f, 240.0f);
        } else {
            u19 = *(float *)0xC03E2B8;
            PutVM_Message(0x20, 0x11, 0x0, u19, 240.0f);
        }
    } else {
        u23 = *(float *)0xC03E2B8;
        PutVM_Message(0x20, 0x11, 0x0, u23, 240.0f);
    }
    t27 = *(int *)0xC2A11B8;
    u28 = *(float *)0xC03E2C4;
    u29 = *(float *)0xC03E2C8;
    PutVM_Message(0x20, 0x7, ((((t27 << 2) << 2) << 1) + 0xC09F9F0), u29, u28);
    t31 = *(int *)0xC2A11B8;
    t32 = Start_LoadSave(((((t31 >> 1) << 1) + ((t31 >> 1) << 2)) + 0x1), 0x0);
    t33 = *(int *)0xC2A19E0;
    if ((int)t33 > 0) {
        t34 = *(int *)0xC2A19E0;
        *(unsigned int *)0xC2A19E0 = (t34 - 1);
        return t32;
    }
    t35 = *(int *)0xC2A11B8;
    t36 = LoadBackupData(t35);
    End_LoadSave(0x0);
    if (t36 != 0) {
        return callWarnning(t36);
    }
    windowEnterStep();
    SetTotalRecords();
    windowClose();
    SetScreen(0x4);
    SetWindow(0x0);
    t43 = *(int *)0xC2A121C;
    if (t43 == 2) {
        *(unsigned int *)0xC2A121C = 0x3;
    }
    return t43;
}


int goiToolLight(int a4)
{
    int t0;
    int t1;
    int t5;
    float u2;
    int t3;
    int t13;
    float u10;
    int t11;
    float u18;
    float u19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t37;
    float t38;
    int t39;
    float t40;
    int t41;
    float t42;
    int t43;
    float t44;
    int t45;
    float t46;
    float u48;
    float u50;
    float u51;
    float u54;
    int t55;
    int t56;
    int t57;
    int t58;
    int stk[18] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A5AF0 = 0x2200;
        *(unsigned int *)0xC2A5AF4 = 0x2900;
        *(float *)0xC2A5AF8 = 0.649999976f;
        t58 = 0xC04AB74;
    } else {
        t0 = *(int *)0xC1EE24C;
        if ((t0 & 4) != 0) {
            *(unsigned int *)(((int)stk + 20)) = 0xC1EE24C;
            t1 = *(int *)0xC1EE24C;
            t5 = 0x0;
            if ((0x10 & t1) != 0) {
                u2 = *(float *)0xC2A5AF8;
                t3 = 0x0;
                if (1.0f > u2) {
                    t3 = 0x1;
                }
                t5 = t3;
            }
            t13 = 0x0;
            if ((0x20 & t1) != 0) {
                u10 = *(float *)0xC2A5AF8;
                t11 = 0x0;
                if (u10 > 0.0f) {
                    t11 = 0x1;
                }
                t13 = t11;
            }
            u18 = *(float *)0xC2A5AF8;
            u19 = *(float *)0xC04ACBC;
            *(float *)0xC2A5AF8 = (u18 + u19 * (float)(t5 - t13));
        } else {
            t20 = *(int *)0xC1EE24C;
            t21 = *(int *)0xC2A5AF0;
            *(unsigned int *)0xC2A5AF0 = (t21 + ((((((((((0x10 & t20) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x20 & t20) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            t22 = *(int *)0xC1EE24C;
            t23 = *(int *)0xC2A5AF4;
            *(unsigned int *)0xC2A5AF4 = (t23 + ((((((((((0x80 & t22) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x40 & t22) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            t24 = *(int *)0xC2A5AF0;
            *(unsigned int *)0xC2A5AF0 = (unsigned short)t24;
            t25 = *(int *)0xC2A5AF4;
            *(unsigned int *)0xC2A5AF4 = (unsigned short)t25;
        }
        t37 = *(int *)0xC2A5AF0;
        t38 = FUN_0c089de8(t37);
        t39 = *(int *)0xC2A5AF4;
        t40 = FUN_0c089de0(t39);
        *(float *)(((int)stk + 36)) = (t38 * t40);
        t41 = *(int *)0xC2A5AF0;
        t42 = FUN_0c089de0(t41);
        *(float *)(((int)stk + 40)) = t42;
        t43 = *(int *)0xC2A5AF0;
        t44 = FUN_0c089de8(t43);
        t45 = *(int *)0xC2A5AF4;
        t46 = FUN_0c089de8(t45);
        *(float *)(((int)stk + 44)) = (t44 * t46);
        nlObjPutSetLightDirectionV((((int)stk + 20) + 0x10));
        u48 = *(float *)0xC2A5AF8;
        nlObjPutSetGlobalAmbience(u48);
        *(float *)(((int)stk + 24)) = 0.0f;
        u50 = *(float *)0xC04ACD0;
        *(float *)(((int)stk + 28)) = u50;
        u51 = *(float *)0xC04ACD4;
        *(float *)(((int)stk + 32)) = u51;
        DispVector((((int)stk + 20) + 0x10), (((int)stk + 20) + 0x4), 0x1, 1.0f);
        nlLocate(0x1E, 0x28);
        u54 = *(float *)0xC2A5AF8;
        *(float *)(((int)stk + 16)) = u54;
        t55 = *(int *)0xC2A5AF4;
        t56 = *(int *)0xC2A5AF0;
        t57 = nlPrintf(0xC0C324C, t56, t55, u54);
        t58 = t57;
    }
    return t58;
}


int windowGotBike(void)
{
    int t0;
    int t3;
    int t7;
    int t8;
    float u9;
    float t10;
    float u11;
    float u12;
    float u13;
    float u17;
    float u18;
    int t32;
    int t33;
    float u34;
    float u35;
    float u41;
    float u42;
    int t47;
    int t48;
    int t51;
    int t52;
    int t55;
    int t78;
    int t79;
    int t80;
    int t94;
    int t119;
    float u120;
    float u121;
    float u122;
    float u129;
    float u130;
    int t132;
    int t134;
    float u136;
    int t137;
    float u139;
    float u140;
    float u141;
    float u143;
    int t144;
    int t145;
    int t159;
    int t161;
    float u169;
    int t177;

    t0 = *(int *)0xC1EE284;
    if ((t0 & 0x400) != 0) {
        *(unsigned int *)0xC2A1208 = 0x2;
    }
    t3 = windowOpenStep();
    if (t3 == 1) {
        *(float *)0xC2A1AF4 = 2560.0f;
        *(float *)0xC2A1AF8 = -32.0f;
        *(float *)0xC2A1AFC = 150.0f;
        *(float *)0xC2A1B00 = 0.0f;
        *(float *)0xC2A1B04 = 500.0f;
        *(unsigned short *)0xC2A1B08 = 0x0;
        *(unsigned short *)0xC2A1B0A = 0x4000;
        *(unsigned short *)0xC2A1B0C = 0x800;
        *(float *)0xC2A1B10 = 10.0f;
        *(float *)0xC2A1B14 = (-1.0f);
        *(unsigned int *)0xC2A1AF0 = 0xB4;
        *(unsigned int *)0xC0EF550 = 0x2BA;
        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
    }
    t7 = *(int *)0xC2A1208;
    if ((t7 & 0x4) == 0) {
    } else {
        t8 = *(int *)0xC2A1AF0;
        if ((int)(int)((float)t8 - 30.0f) > 0) {
            u9 = *(float *)0xC2A1AF4;
            *(float *)0xC2A1AF4 = (u9 - 40.0f);
            t10 = FUN_0c089de0((0x10000 - ((int)((float)t8 - 30.0f) << 7)));
            *(unsigned short *)0xC2A1B0A = (int)(t10 * 65536.0f);
            u11 = *(float *)0xC2A1AFC;
            if (u11 > 0.0f) {
                u12 = *(float *)0xC2A1AFC;
                u13 = *(float *)0xC2A1AFC;
                *(float *)0xC2A1AFC = (u13 - (u12 / (float)(int)((float)t8 - 30.0f)));
            }
            u17 = *(float *)0xC2A1B04;
            if (u17 > 0.0f) {
                u18 = *(float *)0xC2A1B04;
                *(float *)0xC2A1B04 = (u18 - (u17 / (float)(int)((float)t8 - 30.0f)));
            }
            if ((int)((float)t8 - 30.0f) == 30) {
                FUN_0c07f5c0();
            }
        } else {
            *(float *)0xC2A1B10 = 1.0f;
            t32 = *(int *)0xC2A1AF0;
            if (t32 == 0) {
                *(float *)0xC2A1AF4 = 0.0f;
            } else {
                t33 = *(int *)0xC2A1AF0;
                u34 = *(float *)0xC2A1AF4;
                u35 = *(float *)0xC2A1AF4;
                *(float *)0xC2A1AF4 = (u35 - (u34 / (float)t33));
            }
            *(float *)0xC2A1AF8 = 32.0f;
            *(float *)0xC2A1AFC = 0.0f;
            *(float *)0xC2A1B04 = 0.0f;
            *(unsigned short *)0xC2A1B0A = 0x0;
            u41 = *(float *)0xC2A1B14;
            if (0.0f > u41) {
                u42 = *(float *)0xC2A1B14;
                *(float *)0xC2A1B14 = (u42 + 0.099999994f);
            }
            t47 = *(short *)0xC2A1B08;
            if ((int)(unsigned short)t47 > 0) {
                t48 = *(short *)0xC2A1B08;
                *(unsigned short *)0xC2A1B08 = (t48 - 0x100);
            }
            t51 = *(short *)0xC2A1B0C;
            if ((int)(unsigned short)t51 > 0) {
                t52 = *(short *)0xC2A1B0C;
                *(unsigned short *)0xC2A1B0C = (t52 - 0x100);
            }
            t55 = *(int *)0xC2A1AF0;
            if (t55 == 10) {
                FUN_0c07f5c0();
            }
        }
        t78 = *(int *)0xC2A1AF0;
        if ((int)t78 > 0) {
            t79 = *(int *)0xC2A1AF0;
            if (t79 == 1) {
                t80 = *(int *)0xC2A1208;
                *(unsigned int *)0xC2A1208 = (t80 | 0x8);
                FUN_0c07f5c0();
            }
            t94 = *(int *)0xC2A1AF0;
            *(unsigned int *)0xC2A1AF0 = (t94 - 1);
        }
    }
    t119 = *(int *)0xC2A1AF0;
    u120 = *(float *)0xC2A1AF8;
    u121 = *(float *)0xC2A1B10;
    u122 = *(float *)0xC2A1AF4;
    if ((float)t119 > 30.0f) {
        putString(0x26, 0xC0A20E0, (u122 + 320.0f), (u120 + 240.0f), u121);
    } else {
        putString(0x26, 0xC0A20F8, (u122 + 320.0f), (u120 + 240.0f), u121);
    }
    nlPushUnitMatrix();
    nlSetTranslate(0xC2A1AFC);
    u129 = *(float *)0xC03F9EC;
    u130 = *(float *)0xC03F9F0;
    nlTranslate(0.0f, u130, u129);
    t132 = *(short *)0xC2A1B0A;
    nlRotateAY((0xF000 + (unsigned short)t132));
    t134 = *(short *)0xC2A1B0A;
    nlRotateAY((unsigned short)t134);
    u136 = *(float *)0xC03F9FC;
    t137 = 0x0;
    for (;;) {
        nlPushMatrix(0x0);
        u139 = *(float *)((((signed char)(((t137 << 1) + t137) << 2) + 0xC0A20B0) + 0x8));
        u140 = *(float *)((((signed char)(((t137 << 1) + t137) << 2) + 0xC0A20B0) + 0x4));
        u141 = *(float *)((((signed char)(((t137 << 1) + t137) << 2) + 0xC0A20B0) + 0x0));
        nlTranslate(u141, u140, u139);
        if ((int)t137 < (int)0x2) {
            u143 = *(float *)0xC03FA0C;
            t144 = *(int *)0xC2A1AF0;
            if ((float)t144 > u143) {
                t145 = *(int *)0xC1EE330;
                nlRotateAX((unsigned short)((t145 << 8) << 2));
            }
        }
        if ((int)t137 >= (int)0x1) {
            t159 = *(short *)0xC2A1B08;
            nlRotateAX((unsigned short)t159);
            t161 = *(short *)0xC2A1B0C;
            nlRotateAZ((unsigned short)t161);
        }
        if ((int)t137 >= (int)0x2) {
            u169 = *(float *)0xC2A1B14;
            nlTranslate(0.0f, (u169 + u136), 0.0f);
        }
        t177 = *(int *)(((t137 << 2) + 0xC0EF7E4));
        nlObjPut(t177);
        nlPopMatrix(0x1);
        t137 = (t137 + 0x1);
        if ((int)t137 >= (int)0x4) {
            break;
        }
    }
    nlPopMatrix(0x1);
    NextWindow(0x0);
    return windowEnterStep();
}

int camGetOffShot1(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t28;
    int t29;
    float u30;
    float u32;
    float u33;
    float u34;
    int t37;
    int t38;
    float u39;
    float u41;
    float u42;
    float u43;
    int t47;
    int t48;
    int t50;
    int t51;
    float u52;
    float u54;
    float u55;
    float u56;
    int t58;
    int t59;
    float u60;
    float u62;
    float u63;
    float u64;
    int t70;
    int t71;
    float u72;
    float u74;
    float u75;
    float u76;
    int t78;
    int t79;
    float u80;
    float u82;
    float u83;
    float u84;
    int t90;
    int t91;
    int t95;
    int t97;
    int t98;
    float u99;
    float u101;
    float u102;
    float u103;
    int t106;
    int t107;
    float u108;
    float u110;
    float u111;
    float u112;
    int t116;
    float u118;
    float u149;
    int t151;
    int t152;
    int t162;
    int t169;
    int t177;
    int t179;
    int t178;
    int stk[51] = {0};

    t0 = *(int *)0xC0D52D8;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x2C)) = t0;
    t1 = *(int *)0xC0D52D4;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x28)) = t1;
    t2 = *(int *)0xC0D52D0;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x24)) = t2;
    t3 = *(int *)0xC0D52CC;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x20)) = t3;
    t4 = *(int *)0xC0D52C8;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x1C)) = t4;
    t5 = *(int *)0xC0D52C4;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x18)) = t5;
    t6 = *(int *)0xC0D52C0;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x14)) = t6;
    t7 = *(int *)0xC0D52BC;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x10)) = t7;
    t8 = *(int *)0xC0D52B8;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0xC)) = t8;
    t9 = *(int *)0xC0D52B4;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x8)) = t9;
    t10 = *(int *)0xC0D52B0;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x4)) = t10;
    t11 = *(int *)0xC0D52AC;
    *(unsigned int *)(((((int)stk + 4) + 0x70) + 0x0)) = t11;
    t12 = *(int *)0xC0D5308;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x2C)) = t12;
    t13 = *(int *)0xC0D5304;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x28)) = t13;
    t14 = *(int *)0xC0D5300;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x24)) = t14;
    t15 = *(int *)0xC0D52FC;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x20)) = t15;
    t16 = *(int *)0xC0D52F8;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x1C)) = t16;
    t17 = *(int *)0xC0D52F4;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x18)) = t17;
    t18 = *(int *)0xC0D52F0;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x14)) = t18;
    t19 = *(int *)0xC0D52EC;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x10)) = t19;
    t20 = *(int *)0xC0D52E8;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0xC)) = t20;
    t21 = *(int *)0xC0D52E4;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x8)) = t21;
    t22 = *(int *)0xC0D52E0;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x4)) = t22;
    t23 = *(int *)0xC0D52DC;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x0)) = t23;
    SetCameraMode(0x1);
    *(unsigned int *)(((int)stk + 4)) = 0xC1790CC;
    t25 = *(int *)0xC2AD580;
    if (t25 != 0) {
        if (t25 != 1) {
            if (t25 == 2) {
                t26 = *(int *)(((int)stk + 4));
                nlPushMatrix((t26 + 0xB4));
                t28 = *(int *)0xC2AD54C;
                t29 = *(signed char *)((t28 + 0x14B));
                u30 = (-1.0f);
                if ((t29 & 4) != 0) {
                    u30 = 1.0f;
                }
                u32 = *(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x0));
                *(float *)(((int)stk + 56)) = (u30 * u32);
                u33 = *(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x4));
                *(float *)(((int)stk + 60)) = u33;
                u34 = *(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x8));
                *(float *)(((int)stk + 64)) = u34;
                nlSqrt((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x34));
                camSetEye((((int)stk + 4) + 0x34), 0x0);
                t37 = *(int *)0xC2AD54C;
                t38 = *(signed char *)((t37 + 0x14B));
                u39 = (-1.0f);
                if ((t38 & 4) != 0) {
                    u39 = 1.0f;
                }
                u41 = *(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x0));
                *(float *)(((int)stk + 44)) = (u39 * u41);
                u42 = *(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x4));
                *(float *)(((int)stk + 48)) = u42;
                u43 = *(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x8));
                *(float *)(((int)stk + 52)) = u43;
                nlSqrt((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x28));
                camSetTarget((((int)stk + 4) + 0x28), 0x0);
                nlPopMatrix(0x1);
                t47 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t47 + 0x1);
            } else {
                if (t25 == 3) {
                    t48 = *(int *)(((int)stk + 4));
                    nlPushMatrix((t48 + 0xB4));
                    t50 = *(int *)0xC2AD54C;
                    t51 = *(signed char *)((t50 + 0x14B));
                    u52 = (-1.0f);
                    if ((t51 & 4) != 0) {
                        u52 = 1.0f;
                    }
                    u54 = *(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x0));
                    *(float *)(((int)stk + 56)) = (u52 * u54);
                    u55 = *(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x4));
                    *(float *)(((int)stk + 60)) = u55;
                    u56 = *(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x8));
                    *(float *)(((int)stk + 64)) = u56;
                    nlSqrt((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x10));
                    t58 = *(int *)0xC2AD54C;
                    t59 = *(signed char *)((t58 + 0x14B));
                    u60 = (-1.0f);
                    if ((t59 & 4) != 0) {
                        u60 = 1.0f;
                    }
                    u62 = *(float *)((((((int)stk + 4) + 0x70) + 0x18) + 0x0));
                    *(float *)(((int)stk + 56)) = (u60 * u62);
                    u63 = *(float *)((((((int)stk + 4) + 0x70) + 0x18) + 0x4));
                    *(float *)(((int)stk + 60)) = u63;
                    u64 = *(float *)((((((int)stk + 4) + 0x70) + 0x18) + 0x8));
                    *(float *)(((int)stk + 64)) = u64;
                    nlSqrt((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x4));
                    nlSubVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10));
                    nlScaleVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0.0166666657f);
                    FUN_0c078a70((((int)stk + 4) + 0x34), 0xC179840, (((int)stk + 4) + 0x1C));
                    camSetEye((((int)stk + 4) + 0x34), 0x0);
                    t70 = *(int *)0xC2AD54C;
                    t71 = *(signed char *)((t70 + 0x14B));
                    u72 = (-1.0f);
                    if ((t71 & 4) != 0) {
                        u72 = 1.0f;
                    }
                    u74 = *(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x0));
                    *(float *)(((int)stk + 44)) = (u72 * u74);
                    u75 = *(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x4));
                    *(float *)(((int)stk + 48)) = u75;
                    u76 = *(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x8));
                    *(float *)(((int)stk + 52)) = u76;
                    nlSqrt((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10));
                    t78 = *(int *)0xC2AD54C;
                    t79 = *(signed char *)((t78 + 0x14B));
                    u80 = (-1.0f);
                    if ((t79 & 4) != 0) {
                        u80 = 1.0f;
                    }
                    u82 = *(float *)((((((int)stk + 4) + 0x40) + 0x18) + 0x0));
                    *(float *)(((int)stk + 44)) = (u80 * u82);
                    u83 = *(float *)((((((int)stk + 4) + 0x40) + 0x18) + 0x4));
                    *(float *)(((int)stk + 48)) = u83;
                    u84 = *(float *)((((((int)stk + 4) + 0x40) + 0x18) + 0x8));
                    *(float *)(((int)stk + 52)) = u84;
                    nlSqrt((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x4));
                    nlSubVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10));
                    nlScaleVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0.0166666657f);
                    FUN_0c078a70((((int)stk + 4) + 0x28), 0xC17984C, (((int)stk + 4) + 0x1C));
                    camSetTarget((((int)stk + 4) + 0x28), 0x0);
                    t90 = *(int *)0xC2AD578;
                    if ((int)t90 >= (int)0x8C) {
                        t91 = *(int *)0xC2AD580;
                        *(unsigned int *)0xC2AD580 = (t91 + 0x1);
                    }
                    nlPopMatrix(0x1);
                } else {
                    if (t25 == 4) {
                        t95 = *(int *)(((int)stk + 4));
                        nlPushMatrix((t95 + 0xB4));
                        t97 = *(int *)0xC2AD54C;
                        t98 = *(signed char *)((t97 + 0x14B));
                        u99 = (-1.0f);
                        if ((t98 & 4) != 0) {
                            u99 = 1.0f;
                        }
                        u101 = *(float *)((((((int)stk + 4) + 0x70) + 0x24) + 0x0));
                        *(float *)(((int)stk + 20)) = (u99 * u101);
                        u102 = *(float *)((((((int)stk + 4) + 0x70) + 0x24) + 0x4));
                        *(float *)(((int)stk + 24)) = u102;
                        u103 = *(float *)((((((int)stk + 4) + 0x70) + 0x24) + 0x8));
                        *(float *)(((int)stk + 28)) = u103;
                        nlSqrt((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x34));
                        camSetEye((((int)stk + 4) + 0x34), 0x0);
                        t106 = *(int *)0xC2AD54C;
                        t107 = *(signed char *)((t106 + 0x14B));
                        u108 = (-1.0f);
                        if ((t107 & 4) != 0) {
                            u108 = 1.0f;
                        }
                        u110 = *(float *)((((((int)stk + 4) + 0x40) + 0x24) + 0x0));
                        *(float *)(((int)stk + 20)) = (u108 * u110);
                        u111 = *(float *)((((((int)stk + 4) + 0x40) + 0x24) + 0x4));
                        *(float *)(((int)stk + 24)) = u111;
                        u112 = *(float *)((((((int)stk + 4) + 0x40) + 0x24) + 0x8));
                        *(float *)(((int)stk + 28)) = u112;
                        nlSqrt((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x28));
                        camSetTarget((((int)stk + 4) + 0x28), 0x0);
                        nlPopMatrix(0x1);
                        t116 = *(int *)0xC2AD580;
                        *(unsigned int *)0xC2AD580 = (t116 + 0x1);
                    } else {
                        if (t25 == 5) {
                            nlSubVector3op((((int)stk + 4) + 0x1C), 0xC2AD554, 0xC179840);
                            u118 = *(float *)0xC065154;
                            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x34), 1.0f, u118);
                            camSetEye((((int)stk + 4) + 0x34), 0x0);
                            nlSubVector3op((((int)stk + 4) + 0x1C), 0xC2AD560, 0xC17984C);
                            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x28), 1.0f, u118);
                            camSetTarget((((int)stk + 4) + 0x28), 0x0);
                        }
                    }
                }
            }
        } else {
            nlSubVector3op((((int)stk + 4) + 0x1C), 0xC179840, 0xC17984C);
            nlPushUnitMatrix();
            FUN_0c078480(0xC2AD1EC, 0xFFFFFCD0);
            FUN_0c077210((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
            nlPopMatrix(0x1);
            FUN_0c078a70((((int)stk + 4) + 0x34), 0xC17984C, (((int)stk + 4) + 0x1C));
            u149 = *(float *)(((int)stk + 60));
            *(float *)(((int)stk + 60)) = (u149 - 0.199999988f);
            camSetEye((((int)stk + 4) + 0x34), 0x0);
            t151 = *(int *)0xC2AD578;
            if ((int)t151 < (int)0x50) {
            } else {
                t152 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t152 + 0x1);
            }
        }
    } else {
        t162 = *(int *)(((int)stk + 4));
        nlPushMatrix((t162 + 0xB4));
        nlSqrt((((int)stk + 4) + 0x70), (((int)stk + 4) + 0x34));
        nlSqrt((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x28));
        nlPopMatrix(0x1);
        camSetEye((((int)stk + 4) + 0x34), 0x0);
        camSetTarget((((int)stk + 4) + 0x28), 0x0);
        t169 = *(int *)0xC2AD580;
        *(unsigned int *)0xC2AD580 = (t169 + 0x1);
    }
    t177 = *(int *)0xC2AD590;
    t179 = t177;
    if ((t177 & 2) == 0) {
        t178 = camRestore();
        t179 = t178;
    }
    return t179;
}

int psgEnterState4(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t157;
    int t145;
    int t146;
    float u147;
    int t148;
    float u149;
    int t150;
    int t152;
    float u153;
    int t154;
    int t155;
    int t156;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t180;
    int t185;
    int t190;
    int t195;
    int t196;
    int t197;
    int t205;
    int t206;
    int t207;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t227;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t238;
    int t243;
    int t248;
    int t253;
    int t258;
    int t263;
    int t268;
    int t273;
    int t278;
    int t283;
    int t288;
    int t293;
    int t298;
    int t303;
    int t308;
    int t313;
    int t318;
    int t323;
    int t328;
    int t329;
    int t330;
    int t335;
    int t340;
    int t345;
    int t350;
    int t355;
    int t360;
    int t365;
    int t370;
    int t375;
    int t380;
    int t385;
    int t390;
    int t395;
    int t400;
    int t405;
    int t410;
    int t415;
    int t420;
    int t431;
    int t432;
    int t433;
    int t434;
    int t435;
    int t436;
    int t437;
    int t438;
    int t439;
    int t444;
    int t449;
    int t454;
    int t459;
    int t464;
    int t469;
    int t474;
    int t479;
    int t484;
    int t489;
    int t494;
    int t499;
    int t504;
    int t509;
    int t514;
    int t519;
    int t524;
    int t529;
    int t534;
    int t535;
    int t536;
    int t541;
    int t546;
    int t551;
    int t556;
    int t561;
    int t566;
    int t571;
    int t576;
    int t581;
    int t586;
    int t591;
    int t596;
    int t601;
    int t606;
    int t611;
    int t616;
    int t621;
    int t626;
    int t637;
    int t638;
    int t642;
    int t646;
    int t647;
    int t648;
    int t649;
    int t650;
    int t651;
    int t652;
    int t657;
    int t662;
    int t667;
    int t672;
    int t677;
    int t682;
    int t687;
    int t692;
    int t697;
    int t702;
    int t707;
    int t712;
    int t717;
    int t722;
    int t727;
    int t732;
    int t737;
    int t742;
    int t747;
    int t748;
    int t749;
    int t754;
    int t759;
    int t764;
    int t769;
    int t774;
    int t779;
    int t784;
    int t789;
    int t794;
    int t799;
    int t804;
    int t809;
    int t814;
    int t819;
    int t824;
    int t829;
    int t834;
    int t839;
    int t868;
    int t869;
    int t873;
    int t877;
    int t878;
    int t879;
    int t880;
    int t881;
    int t882;
    int t883;
    int t888;
    int t893;
    int t898;
    int t903;
    int t908;
    int t913;
    int t918;
    int t923;
    int t928;
    int t933;
    int t938;
    int t943;
    int t948;
    int t953;
    int t958;
    int t963;
    int t968;
    int t973;
    int t978;
    int t979;
    int t980;
    int t985;
    int t990;
    int t995;
    int t1000;
    int t1005;
    int t1010;
    int t1015;
    int t1020;
    int t1025;
    int t1030;
    int t1035;
    int t1040;
    int t1045;
    int t1050;
    int t1055;
    int t1060;
    int t1065;
    int t1070;
    int t1099;
    int t1100;
    int t1104;
    int t1108;
    int t1109;
    int t1110;
    int t1111;
    int t1112;
    int t1113;
    int t1114;
    int t1119;
    int t1124;
    int t1129;
    int t1134;
    int t1139;
    int t1144;
    int t1149;
    int t1154;
    int t1159;
    int t1164;
    int t1169;
    int t1174;
    int t1179;
    int t1184;
    int t1189;
    int t1194;
    int t1199;
    int t1204;
    int t1209;
    int t1210;
    int t1211;
    int t1216;
    int t1221;
    int t1226;
    int t1231;
    int t1236;
    int t1241;
    int t1246;
    int t1251;
    int t1256;
    int t1261;
    int t1266;
    int t1271;
    int t1276;
    int t1281;
    int t1286;
    int t1291;
    int t1296;
    int t1301;
    int t1337;
    int t1351;
    int t1352;
    int t1353;
    int t1354;
    int t1355;
    int t1356;
    int t1357;
    int t1358;
    int t1359;
    int t1360;
    int t1361;
    int t1362;
    int t1369;
    int t1370;
    int t1371;
    int t1372;
    int t1373;
    int t1374;
    int t1375;
    int t1376;
    int t1377;
    int t1378;
    int t1379;
    int t1380;
    int t1381;
    int t1382;
    int t1383;
    int t1384;
    int t1390;
    int t1391;
    int t1393;
    int t1394;
    int t1395;
    int t1396;
    int t1397;
    int t1398;
    int t1399;
    int t1413;
    int t1414;
    int t1416;
    int t1417;
    int t1418;
    int t1419;
    int t1420;
    int t1421;
    int t1422;
    int t1436;
    int t1437;
    int t1439;
    int t1440;
    int t1441;
    int t1442;
    int t1443;
    int t1444;
    int t1445;
    int t1459;
    int t1460;
    int t1461;
    int t1469;
    int t1499;
    int t1500;
    int t1501;
    int t1502;
    int t1503;
    int t1504;
    int t1505;
    int t1506;
    int t1507;
    int t1508;
    int t1509;
    int t1510;
    int t1511;
    int t1519;
    int t1520;
    int t1521;
    int t1522;
    int t1523;
    int t1524;
    int t1525;
    int t1526;
    int t1527;
    int t1528;
    int t1529;
    int t1530;
    int t1531;
    int t1539;
    int t1540;
    int t1541;
    int t1549;
    int t1550;
    int t1551;
    int t1559;
    int t1560;
    int t1561;
    int t1569;
    int t1570;
    int t1571;
    int t1579;
    int t1580;
    int t1581;
    int t1589;
    int t1590;
    int t1591;
    int t1599;
    int t1600;
    int t1601;
    int t1609;
    int t1610;
    int t1611;
    int t1619;
    int t1620;
    int t1621;
    int t1629;
    int t1630;
    int t1631;
    int t1639;
    int t1640;
    int t1641;
    int t1642;
    int t1650;
    int t1680;
    int t1674;
    int t1668;
    int t1651;
    int t1652;
    int t1653;
    int t1658;
    int t1659;
    int t1682;
    int t1683;
    int t1690;
    int t1752;
    int t1738;
    int t1732;
    int t1691;
    int t1692;
    int t1693;
    int t1698;
    int t1699;
    int t1704;
    int t1705;
    int t1710;
    int t1711;
    int t1716;
    int t1717;
    int t1722;
    int t1723;
    int t1740;
    int t1741;
    int t1754;
    int t1755;
    int t1762;
    int t1763;
    int t1770;
    int t1771;
    int t1784;
    int t1785;
    int t1786;
    int t1794;
    int t1795;
    int t1796;
    int t1797;
    int t1798;
    int t1799;
    int t1800;
    int t1801;
    int t1809;
    int t1810;
    int t1811;
    int t1819;
    int t1820;
    int t1821;
    int t1829;
    int t1830;
    int t1831;
    int t1839;
    int t1840;
    int t1841;
    int t1849;
    int t1850;
    int t1851;
    int t1859;
    int t1860;
    int t1861;
    int t1869;
    int t1870;
    int t1871;
    int t1879;
    int t1880;
    int t1881;
    int t1889;
    int t1890;
    int t1891;
    int t1899;
    int t1900;
    int t1901;
    int t1909;
    int t1910;
    int t1911;
    int t1912;
    int t1927;
    int t1928;
    int t1929;
    int t1930;
    int t1931;
    int t1932;
    int t1933;
    int t1934;
    int t1942;
    int t1943;
    int t1944;
    int t1952;
    int t1953;
    int t1954;
    int t1962;
    int t1963;
    int t1964;
    int t1972;
    int t1973;
    int t1974;
    int t1982;
    int t1983;
    int t1984;
    int t1992;
    int t1993;
    int t1994;
    int t2002;
    int t2003;
    int t2004;
    int t2012;
    int t2013;
    int t2014;
    int t2022;
    int t2023;
    int t2024;
    int t2032;
    int t2033;
    int t2034;
    int t2042;
    int t2043;
    int t2044;
    int t2045;
    int t2060;
    int t2061;
    int t2062;
    int t2063;
    int t2064;
    int t2065;
    int t2066;
    int t2067;
    int t2068;
    int t2069;
    int t2077;
    int t2078;
    int t2079;
    int t2087;
    int t2088;
    int t2089;
    int t2097;
    int t2098;
    int t2099;
    int t2107;
    int t2108;
    int t2109;
    int t2117;
    int t2118;
    int t2119;
    int t2127;
    int t2128;
    int t2129;
    int t2137;
    int t2138;
    int t2139;
    int t2147;
    int t2148;
    int t2149;
    int t2157;
    int t2158;
    int t2159;
    int t2167;
    int t2168;
    int t2169;
    int t2177;
    int t2178;
    int t2179;
    int t2180;
    int t2188;
    int t2218;
    int t2212;
    int t2206;
    int t2189;
    int t2190;
    int t2191;
    int t2196;
    int t2197;
    int t2220;
    int t2221;
    int t2228;
    int t2290;
    int t2276;
    int t2270;
    int t2229;
    int t2230;
    int t2231;
    int t2236;
    int t2237;
    int t2242;
    int t2243;
    int t2248;
    int t2249;
    int t2254;
    int t2255;
    int t2260;
    int t2261;
    int t2278;
    int t2279;
    int t2292;
    int t2293;
    int t2300;
    int t2301;
    int t2308;
    int t2309;
    int t2322;
    int t2323;
    int t2324;
    int t2332;
    int t2333;
    int t2334;
    int t2335;
    int t2336;
    int t2337;
    int t2338;
    int t2339;
    int t2347;
    int t2348;
    int t2349;
    int t2357;
    int t2358;
    int t2359;
    int t2367;
    int t2368;
    int t2369;
    int t2377;
    int t2378;
    int t2379;
    int t2387;
    int t2388;
    int t2389;
    int t2397;
    int t2398;
    int t2399;
    int t2407;
    int t2408;
    int t2409;
    int t2417;
    int t2418;
    int t2419;
    int t2427;
    int t2428;
    int t2429;
    int t2437;
    int t2438;
    int t2439;
    int t2447;
    int t2448;
    int t2449;
    int t2450;
    int t2479;
    int t2480;
    int t2481;
    int t2482;
    int t2483;
    int t2484;
    int t2492;
    int t2493;
    int t2494;
    int t2495;
    int t2496;
    int t2497;
    int t2498;
    int t2499;
    int t2500;
    int t2501;
    int t2502;
    int t2503;
    int t2511;
    int t2512;
    int t2513;
    int t2514;
    int t2522;
    int t2542;
    int t2537;
    int t2532;
    int t2527;
    int t2523;
    int t2544;
    int t2545;
    int t2546;
    int t2554;
    int t2555;
    int t2556;
    int t2557;
    int t2558;
    int t2559;
    int t2560;
    int t2561;
    int t2562;
    int t2570;
    int t2571;
    int t2572;
    int t2573;
    int t2588;
    int t2589;
    int t2590;
    int t2591;
    int t2592;
    int t2593;
    int t2594;
    int t2595;
    int t2596;
    int t2597;
    int t2605;
    int t2606;
    int t2607;
    int t2608;
    int t2616;
    int t2636;
    int t2631;
    int t2626;
    int t2621;
    int t2617;
    int t2638;
    int t2639;
    int t2640;
    int t2676;
    int t2677;
    int t2678;
    int t2679;
    int t2680;
    int t2681;
    int t2682;
    int t2690;
    int t2691;
    int t2692;
    int t2693;
    int t2694;
    int t2695;
    int t2696;
    int t2697;
    int t2698;
    int t2699;
    int t2700;
    int t2701;
    int t2702;
    int t2710;
    int t2711;
    int t2712;
    int t2720;
    int t2721;
    int t2722;
    int t2730;
    int t2731;
    int t2732;
    int t2740;
    int t2741;
    int t2742;
    int t2750;
    int t2751;
    int t2752;
    int t2760;
    int t2761;
    int t2762;
    int t2770;
    int t2771;
    int t2772;
    int t2780;
    int t2781;
    int t2782;
    int t2790;
    int t2791;
    int t2792;
    int t2800;
    int t2801;
    int t2802;
    int t2810;
    int t2811;
    int t2812;
    int t2813;
    int t2821;
    int t2851;
    int t2845;
    int t2839;
    int t2822;
    int t2823;
    int t2824;
    int t2829;
    int t2830;
    int t2853;
    int t2854;
    int t2861;
    int t2923;
    int t2909;
    int t2903;
    int t2862;
    int t2863;
    int t2864;
    int t2869;
    int t2870;
    int t2875;
    int t2876;
    int t2881;
    int t2882;
    int t2887;
    int t2888;
    int t2893;
    int t2894;
    int t2911;
    int t2912;
    int t2925;
    int t2926;
    int t2933;
    int t2934;
    int t2941;
    int t2942;
    int t2955;
    int t2956;
    int t2957;
    int t2965;
    int t2966;
    int t2967;
    int t2968;
    int t2969;
    int t2970;
    int t2971;
    int t2972;
    int t2980;
    int t2981;
    int t2982;
    int t2990;
    int t2991;
    int t2992;
    int t3000;
    int t3001;
    int t3002;
    int t3010;
    int t3011;
    int t3012;
    int t3020;
    int t3021;
    int t3022;
    int t3030;
    int t3031;
    int t3032;
    int t3040;
    int t3041;
    int t3042;
    int t3050;
    int t3051;
    int t3052;
    int t3060;
    int t3061;
    int t3062;
    int t3070;
    int t3071;
    int t3072;
    int t3080;
    int t3081;
    int t3082;
    int t3083;
    int t3098;
    int t3099;
    int t3100;
    int t3101;
    int t3102;
    int t3103;
    int t3104;
    int t3105;
    int t3113;
    int t3114;
    int t3115;
    int t3123;
    int t3124;
    int t3125;
    int t3133;
    int t3134;
    int t3135;
    int t3143;
    int t3144;
    int t3145;
    int t3153;
    int t3154;
    int t3155;
    int t3163;
    int t3164;
    int t3165;
    int t3173;
    int t3174;
    int t3175;
    int t3183;
    int t3184;
    int t3185;
    int t3193;
    int t3194;
    int t3195;
    int t3203;
    int t3204;
    int t3205;
    int t3213;
    int t3214;
    int t3215;
    int t3216;
    int t3231;
    int t3232;
    int t3233;
    int t3234;
    int t3235;
    int t3236;
    int t3237;
    int t3238;
    int t3239;
    int t3240;
    int t3248;
    int t3249;
    int t3250;
    int t3258;
    int t3259;
    int t3260;
    int t3268;
    int t3269;
    int t3270;
    int t3278;
    int t3279;
    int t3280;
    int t3288;
    int t3289;
    int t3290;
    int t3298;
    int t3299;
    int t3300;
    int t3308;
    int t3309;
    int t3310;
    int t3318;
    int t3319;
    int t3320;
    int t3328;
    int t3329;
    int t3330;
    int t3338;
    int t3339;
    int t3340;
    int t3348;
    int t3349;
    int t3350;
    int t3351;
    int t3359;
    int t3389;
    int t3383;
    int t3377;
    int t3360;
    int t3361;
    int t3362;
    int t3367;
    int t3368;
    int t3391;
    int t3392;
    int t3399;
    int t3461;
    int t3447;
    int t3441;
    int t3400;
    int t3401;
    int t3402;
    int t3407;
    int t3408;
    int t3413;
    int t3414;
    int t3419;
    int t3420;
    int t3425;
    int t3426;
    int t3431;
    int t3432;
    int t3449;
    int t3450;
    int t3463;
    int t3464;
    int t3471;
    int t3472;
    int t3479;
    int t3480;
    int t3493;
    int t3494;
    int t3495;
    int t3503;
    int t3504;
    int t3505;
    int t3506;
    int t3507;
    int t3508;
    int t3509;
    int t3510;
    int t3518;
    int t3519;
    int t3520;
    int t3528;
    int t3529;
    int t3530;
    int t3538;
    int t3539;
    int t3540;
    int t3548;
    int t3549;
    int t3550;
    int t3558;
    int t3559;
    int t3560;
    int t3568;
    int t3569;
    int t3570;
    int t3578;
    int t3579;
    int t3580;
    int t3588;
    int t3589;
    int t3590;
    int t3598;
    int t3599;
    int t3600;
    int t3608;
    int t3609;
    int t3610;
    int t3618;
    int t3619;
    int t3620;
    int t3621;
    int t3650;
    int t3651;
    int t3652;
    int t3653;
    int t3654;
    int t3655;
    int t3663;
    int t3664;
    int t3665;
    int t3666;
    int t3667;
    int t3668;
    int t3669;
    int t3670;
    int t3671;
    int t3672;
    int t3673;
    int t3674;
    int t3682;
    int t3683;
    int t3684;
    int t3685;
    int t3693;
    int t3713;
    int t3708;
    int t3703;
    int t3698;
    int t3694;
    int t3715;
    int t3716;
    int t3717;
    int t3725;
    int t3726;
    int t3727;
    int t3728;
    int t3729;
    int t3730;
    int t3731;
    int t3732;
    int t3733;
    int t3741;
    int t3742;
    int t3743;
    int t3744;
    int t3759;
    int t3760;
    int t3761;
    int t3762;
    int t3763;
    int t3764;
    int t3765;
    int t3766;
    int t3767;
    int t3768;
    int t3776;
    int t3777;
    int t3778;
    int t3779;
    int t3787;
    int t3807;
    int t3802;
    int t3797;
    int t3792;
    int t3788;
    int t3809;
    int t3810;
    int t3811;
    int t3854;
    float u3855;
    int t3856;
    int t3858;
    int t3859;
    int t3860;
    int t3861;
    int t3862;
    int t3863;
    int t3864;
    int t3865;
    int t3866;
    int t3867;
    int t3868;
    int t3873;
    float u3879;
    int t3952;
    int t3953;
    float u3954;
    float u3955;
    int t3956;
    int t3957;
    int t164;
    int t743;
    int t738;
    int t733;
    int t728;
    int t723;
    int t718;
    int t713;
    int t708;
    int t703;
    int t698;
    int t693;
    int t688;
    int t683;
    int t678;
    int t673;
    int t668;
    int t663;
    int t658;
    int t653;
    int t840;
    int t835;
    int t830;
    int t825;
    int t820;
    int t815;
    int t810;
    int t805;
    int t800;
    int t795;
    int t790;
    int t785;
    int t780;
    int t775;
    int t770;
    int t765;
    int t760;
    int t755;
    int t750;
    int t974;
    int t969;
    int t964;
    int t959;
    int t954;
    int t949;
    int t944;
    int t939;
    int t934;
    int t929;
    int t924;
    int t919;
    int t914;
    int t909;
    int t904;
    int t899;
    int t894;
    int t889;
    int t884;
    int t1071;
    int t1066;
    int t1061;
    int t1056;
    int t1051;
    int t1046;
    int t1041;
    int t1036;
    int t1031;
    int t1026;
    int t1021;
    int t1016;
    int t1011;
    int t1006;
    int t1001;
    int t996;
    int t991;
    int t986;
    int t981;
    int t1205;
    int t1200;
    int t1195;
    int t1190;
    int t1185;
    int t1180;
    int t1175;
    int t1170;
    int t1165;
    int t1160;
    int t1155;
    int t1150;
    int t1145;
    int t1140;
    int t1135;
    int t1130;
    int t1125;
    int t1120;
    int t1115;
    int t1302;
    int t1297;
    int t1292;
    int t1287;
    int t1282;
    int t1277;
    int t1272;
    int t1267;
    int t1262;
    int t1257;
    int t1252;
    int t1247;
    int t1242;
    int t1237;
    int t1232;
    int t1227;
    int t1222;
    int t1217;
    int t1212;
    int t1388;
    int t1782;
    int t1688;
    int t1660;
    int t1654;
    int t1776;
    int t1768;
    int t1760;
    int t1746;
    int t1724;
    int t1718;
    int t1712;
    int t1706;
    int t1700;
    int t1694;
    int t2320;
    int t2226;
    int t2198;
    int t2192;
    int t2314;
    int t2306;
    int t2298;
    int t2284;
    int t2262;
    int t2256;
    int t2250;
    int t2244;
    int t2238;
    int t2232;
    int t2953;
    int t2859;
    int t2831;
    int t2825;
    int t2947;
    int t2939;
    int t2931;
    int t2917;
    int t2895;
    int t2889;
    int t2883;
    int t2877;
    int t2871;
    int t2865;
    int t3491;
    int t3397;
    int t3369;
    int t3363;
    int t3485;
    int t3477;
    int t3469;
    int t3455;
    int t3433;
    int t3427;
    int t3421;
    int t3415;
    int t3409;
    int t3403;
    int t3877;
    int t3871;
    int stk[157] = {0};

    t0 = *(int *)0xC0D5CDC;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x1C)) = t0;
    t1 = *(int *)0xC0D5CD8;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x18)) = t1;
    t2 = *(int *)0xC0D5CD4;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x14)) = t2;
    t3 = *(int *)0xC0D5CD0;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x10)) = t3;
    t4 = *(int *)0xC0D5CCC;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0xC)) = t4;
    t5 = *(int *)0xC0D5CC8;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x8)) = t5;
    t6 = *(int *)0xC0D5CC4;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x4)) = t6;
    t7 = *(int *)0xC0D5CC0;
    *(unsigned int *)(((0x228 + ((int)stk + 8)) + 0x0)) = t7;
    t8 = *(int *)0xC0D5CFC;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x1C)) = t8;
    t9 = *(int *)0xC0D5CF8;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x18)) = t9;
    t10 = *(int *)0xC0D5CF4;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x14)) = t10;
    t11 = *(int *)0xC0D5CF0;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x10)) = t11;
    t12 = *(int *)0xC0D5CEC;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0xC)) = t12;
    t13 = *(int *)0xC0D5CE8;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x8)) = t13;
    t14 = *(int *)0xC0D5CE4;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x4)) = t14;
    t15 = *(int *)0xC0D5CE0;
    *(unsigned int *)(((0x208 + ((int)stk + 8)) + 0x0)) = t15;
    t16 = *(int *)0xC0D5D08;
    *(unsigned int *)(((0x1FC + ((int)stk + 8)) + 0x8)) = t16;
    t17 = *(int *)0xC0D5D04;
    *(unsigned int *)(((0x1FC + ((int)stk + 8)) + 0x4)) = t17;
    t18 = *(int *)0xC0D5D00;
    *(unsigned int *)(((0x1FC + ((int)stk + 8)) + 0x0)) = t18;
    t19 = *(int *)0xC0D5D14;
    *(unsigned int *)(((0x1F0 + ((int)stk + 8)) + 0x8)) = t19;
    t20 = *(int *)0xC0D5D10;
    *(unsigned int *)(((0x1F0 + ((int)stk + 8)) + 0x4)) = t20;
    t21 = *(int *)0xC0D5D0C;
    *(unsigned int *)(((0x1F0 + ((int)stk + 8)) + 0x0)) = t21;
    *(unsigned int *)(((int)stk + 8)) = 0x3;
    t22 = *(int *)0xC0D5D20;
    *(unsigned int *)(((0x1E4 + ((int)stk + 8)) + 0x8)) = t22;
    t23 = *(int *)0xC0D5D1C;
    *(unsigned int *)(((0x1E4 + ((int)stk + 8)) + 0x4)) = t23;
    t24 = *(int *)0xC0D5D18;
    *(unsigned int *)(((0x1E4 + ((int)stk + 8)) + 0x0)) = t24;
    t25 = *(int *)0xC0D5D2C;
    *(unsigned int *)(((0x1D8 + ((int)stk + 8)) + 0x8)) = t25;
    t26 = *(int *)0xC0D5D28;
    *(unsigned int *)(((0x1D8 + ((int)stk + 8)) + 0x4)) = t26;
    t27 = *(int *)0xC0D5D24;
    *(unsigned int *)(((0x1D8 + ((int)stk + 8)) + 0x0)) = t27;
    *(unsigned int *)(((int)stk + 20)) = 0x3;
    t28 = *(int *)0xC0D5D38;
    *(unsigned int *)(((0x1CC + ((int)stk + 8)) + 0x8)) = t28;
    t29 = *(int *)0xC0D5D34;
    *(unsigned int *)(((0x1CC + ((int)stk + 8)) + 0x4)) = t29;
    t30 = *(int *)0xC0D5D30;
    *(unsigned int *)(((0x1CC + ((int)stk + 8)) + 0x0)) = t30;
    t31 = *(int *)0xC0D5D44;
    *(unsigned int *)(((0x1C0 + ((int)stk + 8)) + 0x8)) = t31;
    t32 = *(int *)0xC0D5D40;
    *(unsigned int *)(((0x1C0 + ((int)stk + 8)) + 0x4)) = t32;
    t33 = *(int *)0xC0D5D3C;
    *(unsigned int *)(((0x1C0 + ((int)stk + 8)) + 0x0)) = t33;
    t34 = *(int *)0xC0D5D50;
    *(unsigned int *)(((0x1B4 + ((int)stk + 8)) + 0x8)) = t34;
    t35 = *(int *)0xC0D5D4C;
    *(unsigned int *)(((0x1B4 + ((int)stk + 8)) + 0x4)) = t35;
    t36 = *(int *)0xC0D5D48;
    *(unsigned int *)(((0x1B4 + ((int)stk + 8)) + 0x0)) = t36;
    t37 = *(int *)0xC0D5D5C;
    *(unsigned int *)(((0x1A8 + ((int)stk + 8)) + 0x8)) = t37;
    t38 = *(int *)0xC0D5D58;
    *(unsigned int *)(((0x1A8 + ((int)stk + 8)) + 0x4)) = t38;
    t39 = *(int *)0xC0D5D54;
    *(unsigned int *)(((0x1A8 + ((int)stk + 8)) + 0x0)) = t39;
    t40 = *(int *)0xC0D5D68;
    *(unsigned int *)(((0x19C + ((int)stk + 8)) + 0x8)) = t40;
    t41 = *(int *)0xC0D5D64;
    *(unsigned int *)(((0x19C + ((int)stk + 8)) + 0x4)) = t41;
    t42 = *(int *)0xC0D5D60;
    *(unsigned int *)(((0x19C + ((int)stk + 8)) + 0x0)) = t42;
    t43 = *(int *)0xC0D5D74;
    *(unsigned int *)(((0x190 + ((int)stk + 8)) + 0x8)) = t43;
    t44 = *(int *)0xC0D5D70;
    *(unsigned int *)(((0x190 + ((int)stk + 8)) + 0x4)) = t44;
    t45 = *(int *)0xC0D5D6C;
    *(unsigned int *)(((0x190 + ((int)stk + 8)) + 0x0)) = t45;
    t46 = *(int *)0xC0D5D7C;
    *(unsigned int *)(((0x188 + ((int)stk + 8)) + 0x4)) = t46;
    t47 = *(int *)0xC0D5D78;
    *(unsigned int *)(((0x188 + ((int)stk + 8)) + 0x0)) = t47;
    t48 = *(int *)0xC0D5D84;
    *(unsigned int *)(((0x180 + ((int)stk + 8)) + 0x4)) = t48;
    t49 = *(int *)0xC0D5D80;
    *(unsigned int *)(((0x180 + ((int)stk + 8)) + 0x0)) = t49;
    t50 = *(int *)0xC0D5D8C;
    *(unsigned int *)(((0x178 + ((int)stk + 8)) + 0x4)) = t50;
    t51 = *(int *)0xC0D5D88;
    *(unsigned int *)(((0x178 + ((int)stk + 8)) + 0x0)) = t51;
    t52 = *(int *)0xC0D5D94;
    *(unsigned int *)(((0x170 + ((int)stk + 8)) + 0x4)) = t52;
    t53 = *(int *)0xC0D5D90;
    *(unsigned int *)(((0x170 + ((int)stk + 8)) + 0x0)) = t53;
    t54 = *(int *)0xC0D5D9C;
    *(unsigned int *)(((0x168 + ((int)stk + 8)) + 0x4)) = t54;
    t55 = *(int *)0xC0D5D98;
    *(unsigned int *)(((0x168 + ((int)stk + 8)) + 0x0)) = t55;
    t56 = *(int *)0xC0D5DA4;
    *(unsigned int *)(((0x160 + ((int)stk + 8)) + 0x4)) = t56;
    t57 = *(int *)0xC0D5DA0;
    *(unsigned int *)(((0x160 + ((int)stk + 8)) + 0x0)) = t57;
    t58 = *(int *)0xC0D5DB4;
    *(unsigned int *)(((0x150 + ((int)stk + 8)) + 0xC)) = t58;
    t59 = *(int *)0xC0D5DB0;
    *(unsigned int *)(((0x150 + ((int)stk + 8)) + 0x8)) = t59;
    t60 = *(int *)0xC0D5DAC;
    *(unsigned int *)(((0x150 + ((int)stk + 8)) + 0x4)) = t60;
    t61 = *(int *)0xC0D5DA8;
    *(unsigned int *)(((0x150 + ((int)stk + 8)) + 0x0)) = t61;
    t62 = *(int *)0xC0D5DC4;
    *(unsigned int *)(((0x140 + ((int)stk + 8)) + 0xC)) = t62;
    t63 = *(int *)0xC0D5DC0;
    *(unsigned int *)(((0x140 + ((int)stk + 8)) + 0x8)) = t63;
    t64 = *(int *)0xC0D5DBC;
    *(unsigned int *)(((0x140 + ((int)stk + 8)) + 0x4)) = t64;
    t65 = *(int *)0xC0D5DB8;
    *(unsigned int *)(((0x140 + ((int)stk + 8)) + 0x0)) = t65;
    t66 = *(int *)0xC0D5DD4;
    *(unsigned int *)(((0x130 + ((int)stk + 8)) + 0xC)) = t66;
    t67 = *(int *)0xC0D5DD0;
    *(unsigned int *)(((0x130 + ((int)stk + 8)) + 0x8)) = t67;
    t68 = *(int *)0xC0D5DCC;
    *(unsigned int *)(((0x130 + ((int)stk + 8)) + 0x4)) = t68;
    t69 = *(int *)0xC0D5DC8;
    *(unsigned int *)(((0x130 + ((int)stk + 8)) + 0x0)) = t69;
    t70 = *(int *)0xC0D5DE4;
    *(unsigned int *)(((0x120 + ((int)stk + 8)) + 0xC)) = t70;
    t71 = *(int *)0xC0D5DE0;
    *(unsigned int *)(((0x120 + ((int)stk + 8)) + 0x8)) = t71;
    t72 = *(int *)0xC0D5DDC;
    *(unsigned int *)(((0x120 + ((int)stk + 8)) + 0x4)) = t72;
    t73 = *(int *)0xC0D5DD8;
    *(unsigned int *)(((0x120 + ((int)stk + 8)) + 0x0)) = t73;
    t74 = *(int *)0xC0D5DF4;
    *(unsigned int *)(((0x110 + ((int)stk + 8)) + 0xC)) = t74;
    t75 = *(int *)0xC0D5DF0;
    *(unsigned int *)(((0x110 + ((int)stk + 8)) + 0x8)) = t75;
    t76 = *(int *)0xC0D5DEC;
    *(unsigned int *)(((0x110 + ((int)stk + 8)) + 0x4)) = t76;
    t77 = *(int *)0xC0D5DE8;
    *(unsigned int *)(((0x110 + ((int)stk + 8)) + 0x0)) = t77;
    t78 = *(int *)0xC0D5E04;
    *(unsigned int *)(((0x100 + ((int)stk + 8)) + 0xC)) = t78;
    t79 = *(int *)0xC0D5E00;
    *(unsigned int *)(((0x100 + ((int)stk + 8)) + 0x8)) = t79;
    t80 = *(int *)0xC0D5DFC;
    *(unsigned int *)(((0x100 + ((int)stk + 8)) + 0x4)) = t80;
    t81 = *(int *)0xC0D5DF8;
    *(unsigned int *)(((0x100 + ((int)stk + 8)) + 0x0)) = t81;
    t82 = *(int *)0xC0D5E28;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x20)) = t82;
    t83 = *(int *)0xC0D5E24;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x1C)) = t83;
    t84 = *(int *)0xC0D5E20;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x18)) = t84;
    t85 = *(int *)0xC0D5E1C;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x14)) = t85;
    t86 = *(int *)0xC0D5E18;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x10)) = t86;
    t87 = *(int *)0xC0D5E14;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0xC)) = t87;
    t88 = *(int *)0xC0D5E10;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x8)) = t88;
    t89 = *(int *)0xC0D5E0C;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x4)) = t89;
    t90 = *(int *)0xC0D5E08;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x0)) = t90;
    t91 = *(int *)0xC0D5E4C;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x20)) = t91;
    t92 = *(int *)0xC0D5E48;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x1C)) = t92;
    t93 = *(int *)0xC0D5E44;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x18)) = t93;
    t94 = *(int *)0xC0D5E40;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x14)) = t94;
    t95 = *(int *)0xC0D5E3C;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x10)) = t95;
    t96 = *(int *)0xC0D5E38;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0xC)) = t96;
    t97 = *(int *)0xC0D5E34;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x8)) = t97;
    t98 = *(int *)0xC0D5E30;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x4)) = t98;
    t99 = *(int *)0xC0D5E2C;
    *(unsigned int *)(((0xB8 + ((int)stk + 8)) + 0x0)) = t99;
    t100 = *(int *)0xC0D5E70;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x20)) = t100;
    t101 = *(int *)0xC0D5E6C;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x1C)) = t101;
    t102 = *(int *)0xC0D5E68;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x18)) = t102;
    t103 = *(int *)0xC0D5E64;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x14)) = t103;
    t104 = *(int *)0xC0D5E60;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x10)) = t104;
    t105 = *(int *)0xC0D5E5C;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0xC)) = t105;
    t106 = *(int *)0xC0D5E58;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x8)) = t106;
    t107 = *(int *)0xC0D5E54;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x4)) = t107;
    t108 = *(int *)0xC0D5E50;
    *(unsigned int *)(((0x94 + ((int)stk + 8)) + 0x0)) = t108;
    t109 = *(int *)0xC0D5E94;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x20)) = t109;
    t110 = *(int *)0xC0D5E90;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x1C)) = t110;
    t111 = *(int *)0xC0D5E8C;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x18)) = t111;
    t112 = *(int *)0xC0D5E88;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x14)) = t112;
    t113 = *(int *)0xC0D5E84;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x10)) = t113;
    t114 = *(int *)0xC0D5E80;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0xC)) = t114;
    t115 = *(int *)0xC0D5E7C;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x8)) = t115;
    t116 = *(int *)0xC0D5E78;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x4)) = t116;
    t117 = *(int *)0xC0D5E74;
    *(unsigned int *)(((((int)stk + 8) + 0x70) + 0x0)) = t117;
    t118 = *(int *)0xC0D5EB8;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x20)) = t118;
    t119 = *(int *)0xC0D5EB4;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x1C)) = t119;
    t120 = *(int *)0xC0D5EB0;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x18)) = t120;
    t121 = *(int *)0xC0D5EAC;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x14)) = t121;
    t122 = *(int *)0xC0D5EA8;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x10)) = t122;
    t123 = *(int *)0xC0D5EA4;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0xC)) = t123;
    t124 = *(int *)0xC0D5EA0;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x8)) = t124;
    t125 = *(int *)0xC0D5E9C;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x4)) = t125;
    t126 = *(int *)0xC0D5E98;
    *(unsigned int *)(((((int)stk + 8) + 0x4C) + 0x0)) = t126;
    t127 = *(int *)0xC0D5EDC;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x20)) = t127;
    t128 = *(int *)0xC0D5ED8;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x1C)) = t128;
    t129 = *(int *)0xC0D5ED4;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x18)) = t129;
    t130 = *(int *)0xC0D5ED0;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x14)) = t130;
    t131 = *(int *)0xC0D5ECC;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x10)) = t131;
    t132 = *(int *)0xC0D5EC8;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0xC)) = t132;
    t133 = *(int *)0xC0D5EC4;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x8)) = t133;
    t134 = *(int *)0xC0D5EC0;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x4)) = t134;
    t135 = *(int *)0xC0D5EBC;
    *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x0)) = t135;
    *(unsigned int *)(((int)stk + 12)) = 0x3;
    *(unsigned int *)(((int)stk + 16)) = 0x9;
    t136 = *(int *)0xC0D5EE8;
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x8)) = t136;
    t137 = *(int *)0xC0D5EE4;
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x4)) = t137;
    t138 = *(int *)0xC0D5EE0;
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x0)) = t138;
    if (a5 != 0) {
        if (a5 == 1) {
            t139 = *(int *)0xC2AE34C;
            *(unsigned int *)((a4 + 0x34)) = t139;
            *(float *)((a4 + 0x38)) = 0.0f;
            t140 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t140 & 0x7F);
            *(float *)((a4 + 0x108)) = 0.0f;
            *(float *)((a4 + 0x10C)) = 0.0f;
            t141 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t141 & 0xF9);
            t142 = *(int *)0xC2AE354;
            *(unsigned int *)((a4 + 0x124)) = t142;
            t143 = *(int *)0xC2AE35C;
            *(unsigned int *)((a4 + 0x128)) = t143;
            t164 = 0x128;
        } else {
            t157 = a5;
            if (a5 == 2) {
                FcvStoreBuffer(0xC9EF530, (a4 + 0x3C), 0.0f);
                t145 = *(int *)((a4 + 0x0));
                t146 = *(int *)((((t145 - 23) << 2) + 0xC0D5690));
                *(unsigned int *)((a4 + 0x110)) = t146;
                u147 = *(float *)0xC06D6EC;
                *(float *)((a4 + 0x114)) = u147;
                t148 = *(int *)((a4 + 0x118));
                u149 = *(float *)((a4 + 0x114));
                t150 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t150, t148, u149);
                t152 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t152 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                u153 = *(float *)0xC06D6F0;
                *(float *)((a4 + 0x10C)) = u153;
                t154 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t154 & 0xF9);
                t155 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t155 | 0x40);
                t156 = Psg_SetMoveSpeed(a4, 0.0f);
                t157 = t156;
            }
            t164 = t157;
        }
        t3957 = t164;
    } else {
        *(unsigned int *)0xC13EEE4 = 0x0;
        t171 = *(int *)0xC1EE20C;
        if (t171 == 2) {
            t172 = *(int *)0xC1EE214;
            if (t172 == 14) {
                t173 = *(int *)((a4 + 0x154));
                if (t173 != 0) {
                    if (t173 != 1) {
                        if (t173 != 3) {
                            if (t173 == 5) {
                                t174 = *(signed char *)(((0x14B + a4) + 0x0));
                                *(unsigned char *)(((0x14B + a4) + 0x0)) = (t174 | 0x4);
                            } else {
                                t175 = *(signed char *)(((0x14B + a4) + 0x0));
                                *(unsigned char *)(((0x14B + a4) + 0x0)) = (t175 & 0xFB);
                            }
                        } else {
                            t180 = *(signed char *)(((0x14B + a4) + 0x0));
                            *(unsigned char *)(((0x14B + a4) + 0x0)) = (t180 | 0x4);
                        }
                    } else {
                        t185 = *(signed char *)(((0x14B + a4) + 0x0));
                        *(unsigned char *)(((0x14B + a4) + 0x0)) = (t185 | 0x4);
                    }
                } else {
                    t190 = *(signed char *)(((0x14B + a4) + 0x0));
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = (t190 | 0x4);
                }
            } else {
                t195 = psgPickExitSide(a4);
                t196 = *(int *)(((0x148 + a4) + 0x0));
                t197 = (int)((unsigned int)t195 & 0x1);
                *(unsigned int *)(((0x148 + a4) + 0x0)) = ((t196 & 0xFBFFFFFF) | ((unsigned int)t197 << 26));
            }
        } else {
            t205 = psgPickExitSide(a4);
            t206 = *(int *)(((0x148 + a4) + 0x0));
            t207 = (int)((unsigned int)t205 & 0x1);
            *(unsigned int *)(((0x148 + a4) + 0x0)) = ((t206 & 0xFBFFFFFF) | ((unsigned int)t207 << 26));
        }
        t215 = rinRand();
        t216 = *(int *)(((0x148 + a4) + 0x0));
        t217 = (int)(((unsigned int)t216 >> 21) & 0x3);
        if (t217 != 0) {
            t218 = *(int *)(((int)stk + 20));
            t219 = (int)((int)t215 % (int)t218);
            t220 = *(signed char *)((a4 + 0x14B));
            if ((t220 & 4) != 0) {
                t221 = *(int *)((((t219 << 2) + (0x1E4 + ((int)stk + 8))) + 0x0));
                *(unsigned int *)(((0x110 + a4) + 0x0)) = t221;
            } else {
                t222 = *(int *)((((t219 << 2) + (0x1D8 + ((int)stk + 8))) + 0x0));
                *(unsigned int *)(((0x110 + a4) + 0x0)) = t222;
            }
            *(unsigned int *)0xC2AE350 = 0xC0D3068;
            *(unsigned int *)0xC2AE358 = 0xC0D3068;
        } else {
            t227 = *(int *)0xC1EE210;
            if (t227 != 2) {
                t228 = (int)((int)t215 % (int)0x7);
                t229 = (int)((int)t215 % (int)0x8);
                t230 = *(signed char *)((a4 + 0x14B));
                if ((t230 & 4) != 0) {
                    t231 = *(int *)((a4 + 0x0));
                    if (t231 != 25) {
                        if (t231 != 26) {
                            if (t231 != 28) {
                                if (t231 != 29) {
                                    if (t231 != 31) {
                                        if (t231 != 32) {
                                            if (t231 != 33) {
                                                if (t231 != 36) {
                                                    if (t231 != 37) {
                                                        if (t231 != 40) {
                                                            if (t231 != 41) {
                                                                if (t231 != 42) {
                                                                    if (t231 != 45) {
                                                                        if (t231 != 49) {
                                                                            if (t231 != 50) {
                                                                                if (t231 != 53) {
                                                                                    if (t231 != 54) {
                                                                                        if (t231 != 55) {
                                                                                            if (t231 != 57) {
                                                                                                t232 = *(int *)((((t229 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t232;
                                                                                            } else {
                                                                                                t233 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t233;
                                                                                            }
                                                                                        } else {
                                                                                            t238 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t238;
                                                                                        }
                                                                                    } else {
                                                                                        t243 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t243;
                                                                                    }
                                                                                } else {
                                                                                    t248 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t248;
                                                                                }
                                                                            } else {
                                                                                t253 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t253;
                                                                            }
                                                                        } else {
                                                                            t258 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t258;
                                                                        }
                                                                    } else {
                                                                        t263 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t263;
                                                                    }
                                                                } else {
                                                                    t268 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t268;
                                                                }
                                                            } else {
                                                                t273 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t273;
                                                            }
                                                        } else {
                                                            t278 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t278;
                                                        }
                                                    } else {
                                                        t283 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t283;
                                                    }
                                                } else {
                                                    t288 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t288;
                                                }
                                            } else {
                                                t293 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t293;
                                            }
                                        } else {
                                            t298 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t298;
                                        }
                                    } else {
                                        t303 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t303;
                                    }
                                } else {
                                    t308 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t308;
                                }
                            } else {
                                t313 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t313;
                            }
                        } else {
                            t318 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t318;
                        }
                    } else {
                        t323 = *(int *)((((t228 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t323;
                    }
                } else {
                    t328 = *(int *)((a4 + 0x0));
                    if (t328 != 25) {
                        if (t328 != 26) {
                            if (t328 != 28) {
                                if (t328 != 29) {
                                    if (t328 != 31) {
                                        if (t328 != 32) {
                                            if (t328 != 33) {
                                                if (t328 != 36) {
                                                    if (t328 != 37) {
                                                        if (t328 != 40) {
                                                            if (t328 != 41) {
                                                                if (t328 != 42) {
                                                                    if (t328 != 45) {
                                                                        if (t328 != 49) {
                                                                            if (t328 != 50) {
                                                                                if (t328 != 53) {
                                                                                    if (t328 != 54) {
                                                                                        if (t328 != 55) {
                                                                                            if (t328 != 57) {
                                                                                                t329 = *(int *)((((t229 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t329;
                                                                                            } else {
                                                                                                t330 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t330;
                                                                                            }
                                                                                        } else {
                                                                                            t335 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t335;
                                                                                        }
                                                                                    } else {
                                                                                        t340 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t340;
                                                                                    }
                                                                                } else {
                                                                                    t345 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t345;
                                                                                }
                                                                            } else {
                                                                                t350 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t350;
                                                                            }
                                                                        } else {
                                                                            t355 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t355;
                                                                        }
                                                                    } else {
                                                                        t360 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t360;
                                                                    }
                                                                } else {
                                                                    t365 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t365;
                                                                }
                                                            } else {
                                                                t370 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t370;
                                                            }
                                                        } else {
                                                            t375 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t375;
                                                        }
                                                    } else {
                                                        t380 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t380;
                                                    }
                                                } else {
                                                    t385 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t385;
                                                }
                                            } else {
                                                t390 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t390;
                                            }
                                        } else {
                                            t395 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t395;
                                        }
                                    } else {
                                        t400 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t400;
                                    }
                                } else {
                                    t405 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t405;
                                }
                            } else {
                                t410 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t410;
                            }
                        } else {
                            t415 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t415;
                        }
                    } else {
                        t420 = *(int *)((((t228 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t420;
                    }
                }
            } else {
                t431 = *(int *)0xC1EE214;
                if (t431 != 14) {
                    t432 = *(int *)0xC1EE214;
                    if (t432 != 10) {
                        t433 = *(int *)0xC1EE214;
                        if (t433 != 11) {
                            t434 = (int)((int)t215 % (int)0x7);
                            t435 = (int)((int)t215 % (int)0x8);
                            t436 = *(signed char *)((a4 + 0x14B));
                            if ((t436 & 4) != 0) {
                                t437 = *(int *)((a4 + 0x0));
                                if (t437 != 25) {
                                    if (t437 != 26) {
                                        if (t437 != 28) {
                                            if (t437 != 29) {
                                                if (t437 != 31) {
                                                    if (t437 != 32) {
                                                        if (t437 != 33) {
                                                            if (t437 != 36) {
                                                                if (t437 != 37) {
                                                                    if (t437 != 40) {
                                                                        if (t437 != 41) {
                                                                            if (t437 != 42) {
                                                                                if (t437 != 45) {
                                                                                    if (t437 != 49) {
                                                                                        if (t437 != 50) {
                                                                                            if (t437 != 53) {
                                                                                                if (t437 != 54) {
                                                                                                    if (t437 != 55) {
                                                                                                        if (t437 != 57) {
                                                                                                            t438 = *(int *)((((t435 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t438;
                                                                                                        } else {
                                                                                                            t439 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t439;
                                                                                                        }
                                                                                                    } else {
                                                                                                        t444 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t444;
                                                                                                    }
                                                                                                } else {
                                                                                                    t449 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t449;
                                                                                                }
                                                                                            } else {
                                                                                                t454 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t454;
                                                                                            }
                                                                                        } else {
                                                                                            t459 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t459;
                                                                                        }
                                                                                    } else {
                                                                                        t464 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t464;
                                                                                    }
                                                                                } else {
                                                                                    t469 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t469;
                                                                                }
                                                                            } else {
                                                                                t474 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t474;
                                                                            }
                                                                        } else {
                                                                            t479 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t479;
                                                                        }
                                                                    } else {
                                                                        t484 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t484;
                                                                    }
                                                                } else {
                                                                    t489 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t489;
                                                                }
                                                            } else {
                                                                t494 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t494;
                                                            }
                                                        } else {
                                                            t499 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t499;
                                                        }
                                                    } else {
                                                        t504 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t504;
                                                    }
                                                } else {
                                                    t509 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t509;
                                                }
                                            } else {
                                                t514 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t514;
                                            }
                                        } else {
                                            t519 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t519;
                                        }
                                    } else {
                                        t524 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t524;
                                    }
                                } else {
                                    t529 = *(int *)((((t434 << 2) + (0x228 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t529;
                                }
                            } else {
                                t534 = *(int *)((a4 + 0x0));
                                if (t534 != 25) {
                                    if (t534 != 26) {
                                        if (t534 != 28) {
                                            if (t534 != 29) {
                                                if (t534 != 31) {
                                                    if (t534 != 32) {
                                                        if (t534 != 33) {
                                                            if (t534 != 36) {
                                                                if (t534 != 37) {
                                                                    if (t534 != 40) {
                                                                        if (t534 != 41) {
                                                                            if (t534 != 42) {
                                                                                if (t534 != 45) {
                                                                                    if (t534 != 49) {
                                                                                        if (t534 != 50) {
                                                                                            if (t534 != 53) {
                                                                                                if (t534 != 54) {
                                                                                                    if (t534 != 55) {
                                                                                                        if (t534 != 57) {
                                                                                                            t535 = *(int *)((((t435 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t535;
                                                                                                        } else {
                                                                                                            t536 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t536;
                                                                                                        }
                                                                                                    } else {
                                                                                                        t541 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t541;
                                                                                                    }
                                                                                                } else {
                                                                                                    t546 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t546;
                                                                                                }
                                                                                            } else {
                                                                                                t551 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t551;
                                                                                            }
                                                                                        } else {
                                                                                            t556 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t556;
                                                                                        }
                                                                                    } else {
                                                                                        t561 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t561;
                                                                                    }
                                                                                } else {
                                                                                    t566 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t566;
                                                                                }
                                                                            } else {
                                                                                t571 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t571;
                                                                            }
                                                                        } else {
                                                                            t576 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t576;
                                                                        }
                                                                    } else {
                                                                        t581 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t581;
                                                                    }
                                                                } else {
                                                                    t586 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t586;
                                                                }
                                                            } else {
                                                                t591 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t591;
                                                            }
                                                        } else {
                                                            t596 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t596;
                                                        }
                                                    } else {
                                                        t601 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t601;
                                                    }
                                                } else {
                                                    t606 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t606;
                                                }
                                            } else {
                                                t611 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = t611;
                                            }
                                        } else {
                                            t616 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t616;
                                        }
                                    } else {
                                        t621 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = t621;
                                    }
                                } else {
                                    t626 = *(int *)((((t434 << 2) + (0x208 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = t626;
                                }
                            }
                        } else {
                            t637 = *(int *)0xC1EE214;
                            if (t637 == 14) {
                                t638 = *(signed char *)((a4 + 0x14B));
                                if ((t638 & 4) != 0) {
                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94DB88;
                                } else {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC94F70C;
                                }
                            } else {
                                if (t637 == 11) {
                                    t642 = *(signed char *)((a4 + 0x14B));
                                    if ((t642 & 4) != 0) {
                                        *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94AA20;
                                    } else {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC94C2D4;
                                    }
                                } else {
                                    t646 = (int)((int)t215 % (int)0x2);
                                    t647 = *(int *)(((int)stk + 8));
                                    t648 = (int)((int)t215 % (int)t647);
                                    t649 = *(signed char *)((a4 + 0x14B));
                                    if ((t649 & 4) != 0) {
                                        t650 = *(int *)((a4 + 0x0));
                                        if (t650 != 25) {
                                            if (t650 != 26) {
                                                if (t650 != 28) {
                                                    if (t650 != 29) {
                                                        if (t650 != 31) {
                                                            if (t650 != 32) {
                                                                if (t650 != 33) {
                                                                    if (t650 != 36) {
                                                                        if (t650 != 37) {
                                                                            if (t650 != 40) {
                                                                                if (t650 != 41) {
                                                                                    if (t650 != 42) {
                                                                                        if (t650 != 45) {
                                                                                            if (t650 != 49) {
                                                                                                if (t650 != 50) {
                                                                                                    if (t650 != 53) {
                                                                                                        if (t650 != 54) {
                                                                                                            if (t650 != 55) {
                                                                                                                if (t650 != 57) {
                                                                                                                    t651 = *(int *)((((t648 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                                    t653 = t651;
                                                                                                                } else {
                                                                                                                    t652 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                                    t653 = t652;
                                                                                                                }
                                                                                                                t658 = t653;
                                                                                                            } else {
                                                                                                                t657 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                                t658 = t657;
                                                                                                            }
                                                                                                            t663 = t658;
                                                                                                        } else {
                                                                                                            t662 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                            t663 = t662;
                                                                                                        }
                                                                                                        t668 = t663;
                                                                                                    } else {
                                                                                                        t667 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                        t668 = t667;
                                                                                                    }
                                                                                                    t673 = t668;
                                                                                                } else {
                                                                                                    t672 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                    t673 = t672;
                                                                                                }
                                                                                                t678 = t673;
                                                                                            } else {
                                                                                                t677 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                t678 = t677;
                                                                                            }
                                                                                            t683 = t678;
                                                                                        } else {
                                                                                            t682 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                            t683 = t682;
                                                                                        }
                                                                                        t688 = t683;
                                                                                    } else {
                                                                                        t687 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                        t688 = t687;
                                                                                    }
                                                                                    t693 = t688;
                                                                                } else {
                                                                                    t692 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                    t693 = t692;
                                                                                }
                                                                                t698 = t693;
                                                                            } else {
                                                                                t697 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                t698 = t697;
                                                                            }
                                                                            t703 = t698;
                                                                        } else {
                                                                            t702 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                            t703 = t702;
                                                                        }
                                                                        t708 = t703;
                                                                    } else {
                                                                        t707 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                        t708 = t707;
                                                                    }
                                                                    t713 = t708;
                                                                } else {
                                                                    t712 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                    t713 = t712;
                                                                }
                                                                t718 = t713;
                                                            } else {
                                                                t717 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                t718 = t717;
                                                            }
                                                            t723 = t718;
                                                        } else {
                                                            t722 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                            t723 = t722;
                                                        }
                                                        t728 = t723;
                                                    } else {
                                                        t727 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                        t728 = t727;
                                                    }
                                                    t733 = t728;
                                                } else {
                                                    t732 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                    t733 = t732;
                                                }
                                                t738 = t733;
                                            } else {
                                                t737 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                t738 = t737;
                                            }
                                            t743 = t738;
                                        } else {
                                            t742 = *(int *)((((t646 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                            t743 = t742;
                                        }
                                        *(unsigned int *)((a4 + 0x110)) = t743;
                                    } else {
                                        t747 = *(int *)((a4 + 0x0));
                                        if (t747 != 25) {
                                            if (t747 != 26) {
                                                if (t747 != 28) {
                                                    if (t747 != 29) {
                                                        if (t747 != 31) {
                                                            if (t747 != 32) {
                                                                if (t747 != 33) {
                                                                    if (t747 != 36) {
                                                                        if (t747 != 37) {
                                                                            if (t747 != 40) {
                                                                                if (t747 != 41) {
                                                                                    if (t747 != 42) {
                                                                                        if (t747 != 45) {
                                                                                            if (t747 != 49) {
                                                                                                if (t747 != 50) {
                                                                                                    if (t747 != 53) {
                                                                                                        if (t747 != 54) {
                                                                                                            if (t747 != 55) {
                                                                                                                if (t747 != 57) {
                                                                                                                    t748 = *(int *)((((t648 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                                    t750 = t748;
                                                                                                                } else {
                                                                                                                    t749 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                                    t750 = t749;
                                                                                                                }
                                                                                                                t755 = t750;
                                                                                                            } else {
                                                                                                                t754 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                                t755 = t754;
                                                                                                            }
                                                                                                            t760 = t755;
                                                                                                        } else {
                                                                                                            t759 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                            t760 = t759;
                                                                                                        }
                                                                                                        t765 = t760;
                                                                                                    } else {
                                                                                                        t764 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                        t765 = t764;
                                                                                                    }
                                                                                                    t770 = t765;
                                                                                                } else {
                                                                                                    t769 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                    t770 = t769;
                                                                                                }
                                                                                                t775 = t770;
                                                                                            } else {
                                                                                                t774 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                t775 = t774;
                                                                                            }
                                                                                            t780 = t775;
                                                                                        } else {
                                                                                            t779 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                            t780 = t779;
                                                                                        }
                                                                                        t785 = t780;
                                                                                    } else {
                                                                                        t784 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                        t785 = t784;
                                                                                    }
                                                                                    t790 = t785;
                                                                                } else {
                                                                                    t789 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                    t790 = t789;
                                                                                }
                                                                                t795 = t790;
                                                                            } else {
                                                                                t794 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                t795 = t794;
                                                                            }
                                                                            t800 = t795;
                                                                        } else {
                                                                            t799 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                            t800 = t799;
                                                                        }
                                                                        t805 = t800;
                                                                    } else {
                                                                        t804 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                        t805 = t804;
                                                                    }
                                                                    t810 = t805;
                                                                } else {
                                                                    t809 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                    t810 = t809;
                                                                }
                                                                t815 = t810;
                                                            } else {
                                                                t814 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                t815 = t814;
                                                            }
                                                            t820 = t815;
                                                        } else {
                                                            t819 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                            t820 = t819;
                                                        }
                                                        t825 = t820;
                                                    } else {
                                                        t824 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                        t825 = t824;
                                                    }
                                                    t830 = t825;
                                                } else {
                                                    t829 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                    t830 = t829;
                                                }
                                                t835 = t830;
                                            } else {
                                                t834 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                t835 = t834;
                                            }
                                            t840 = t835;
                                        } else {
                                            t839 = *(int *)((((t646 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                            t840 = t839;
                                        }
                                        *(unsigned int *)((a4 + 0x110)) = t840;
                                    }
                                }
                            }
                        }
                    } else {
                        t868 = *(int *)0xC1EE214;
                        if (t868 == 14) {
                            t869 = *(signed char *)((a4 + 0x14B));
                            if ((t869 & 4) != 0) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94DB88;
                            } else {
                                *(unsigned int *)((a4 + 0x110)) = 0xC94F70C;
                            }
                        } else {
                            if (t868 == 11) {
                                t873 = *(signed char *)((a4 + 0x14B));
                                if ((t873 & 4) != 0) {
                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94AA20;
                                } else {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC94C2D4;
                                }
                            } else {
                                t877 = (int)((int)t215 % (int)0x2);
                                t878 = *(int *)(((int)stk + 8));
                                t879 = (int)((int)t215 % (int)t878);
                                t880 = *(signed char *)((a4 + 0x14B));
                                if ((t880 & 4) != 0) {
                                    t881 = *(int *)((a4 + 0x0));
                                    if (t881 != 25) {
                                        if (t881 != 26) {
                                            if (t881 != 28) {
                                                if (t881 != 29) {
                                                    if (t881 != 31) {
                                                        if (t881 != 32) {
                                                            if (t881 != 33) {
                                                                if (t881 != 36) {
                                                                    if (t881 != 37) {
                                                                        if (t881 != 40) {
                                                                            if (t881 != 41) {
                                                                                if (t881 != 42) {
                                                                                    if (t881 != 45) {
                                                                                        if (t881 != 49) {
                                                                                            if (t881 != 50) {
                                                                                                if (t881 != 53) {
                                                                                                    if (t881 != 54) {
                                                                                                        if (t881 != 55) {
                                                                                                            if (t881 != 57) {
                                                                                                                t882 = *(int *)((((t879 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                                t884 = t882;
                                                                                                            } else {
                                                                                                                t883 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                                t884 = t883;
                                                                                                            }
                                                                                                            t889 = t884;
                                                                                                        } else {
                                                                                                            t888 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                            t889 = t888;
                                                                                                        }
                                                                                                        t894 = t889;
                                                                                                    } else {
                                                                                                        t893 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                        t894 = t893;
                                                                                                    }
                                                                                                    t899 = t894;
                                                                                                } else {
                                                                                                    t898 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                    t899 = t898;
                                                                                                }
                                                                                                t904 = t899;
                                                                                            } else {
                                                                                                t903 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                t904 = t903;
                                                                                            }
                                                                                            t909 = t904;
                                                                                        } else {
                                                                                            t908 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                            t909 = t908;
                                                                                        }
                                                                                        t914 = t909;
                                                                                    } else {
                                                                                        t913 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                        t914 = t913;
                                                                                    }
                                                                                    t919 = t914;
                                                                                } else {
                                                                                    t918 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                    t919 = t918;
                                                                                }
                                                                                t924 = t919;
                                                                            } else {
                                                                                t923 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                t924 = t923;
                                                                            }
                                                                            t929 = t924;
                                                                        } else {
                                                                            t928 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                            t929 = t928;
                                                                        }
                                                                        t934 = t929;
                                                                    } else {
                                                                        t933 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                        t934 = t933;
                                                                    }
                                                                    t939 = t934;
                                                                } else {
                                                                    t938 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                    t939 = t938;
                                                                }
                                                                t944 = t939;
                                                            } else {
                                                                t943 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                t944 = t943;
                                                            }
                                                            t949 = t944;
                                                        } else {
                                                            t948 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                            t949 = t948;
                                                        }
                                                        t954 = t949;
                                                    } else {
                                                        t953 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                        t954 = t953;
                                                    }
                                                    t959 = t954;
                                                } else {
                                                    t958 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                    t959 = t958;
                                                }
                                                t964 = t959;
                                            } else {
                                                t963 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                t964 = t963;
                                            }
                                            t969 = t964;
                                        } else {
                                            t968 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                            t969 = t968;
                                        }
                                        t974 = t969;
                                    } else {
                                        t973 = *(int *)((((t877 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                        t974 = t973;
                                    }
                                    *(unsigned int *)((a4 + 0x110)) = t974;
                                } else {
                                    t978 = *(int *)((a4 + 0x0));
                                    if (t978 != 25) {
                                        if (t978 != 26) {
                                            if (t978 != 28) {
                                                if (t978 != 29) {
                                                    if (t978 != 31) {
                                                        if (t978 != 32) {
                                                            if (t978 != 33) {
                                                                if (t978 != 36) {
                                                                    if (t978 != 37) {
                                                                        if (t978 != 40) {
                                                                            if (t978 != 41) {
                                                                                if (t978 != 42) {
                                                                                    if (t978 != 45) {
                                                                                        if (t978 != 49) {
                                                                                            if (t978 != 50) {
                                                                                                if (t978 != 53) {
                                                                                                    if (t978 != 54) {
                                                                                                        if (t978 != 55) {
                                                                                                            if (t978 != 57) {
                                                                                                                t979 = *(int *)((((t879 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                                t981 = t979;
                                                                                                            } else {
                                                                                                                t980 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                                t981 = t980;
                                                                                                            }
                                                                                                            t986 = t981;
                                                                                                        } else {
                                                                                                            t985 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                            t986 = t985;
                                                                                                        }
                                                                                                        t991 = t986;
                                                                                                    } else {
                                                                                                        t990 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                        t991 = t990;
                                                                                                    }
                                                                                                    t996 = t991;
                                                                                                } else {
                                                                                                    t995 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                    t996 = t995;
                                                                                                }
                                                                                                t1001 = t996;
                                                                                            } else {
                                                                                                t1000 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                t1001 = t1000;
                                                                                            }
                                                                                            t1006 = t1001;
                                                                                        } else {
                                                                                            t1005 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                            t1006 = t1005;
                                                                                        }
                                                                                        t1011 = t1006;
                                                                                    } else {
                                                                                        t1010 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                        t1011 = t1010;
                                                                                    }
                                                                                    t1016 = t1011;
                                                                                } else {
                                                                                    t1015 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                    t1016 = t1015;
                                                                                }
                                                                                t1021 = t1016;
                                                                            } else {
                                                                                t1020 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                t1021 = t1020;
                                                                            }
                                                                            t1026 = t1021;
                                                                        } else {
                                                                            t1025 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                            t1026 = t1025;
                                                                        }
                                                                        t1031 = t1026;
                                                                    } else {
                                                                        t1030 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                        t1031 = t1030;
                                                                    }
                                                                    t1036 = t1031;
                                                                } else {
                                                                    t1035 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                    t1036 = t1035;
                                                                }
                                                                t1041 = t1036;
                                                            } else {
                                                                t1040 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                t1041 = t1040;
                                                            }
                                                            t1046 = t1041;
                                                        } else {
                                                            t1045 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                            t1046 = t1045;
                                                        }
                                                        t1051 = t1046;
                                                    } else {
                                                        t1050 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                        t1051 = t1050;
                                                    }
                                                    t1056 = t1051;
                                                } else {
                                                    t1055 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                    t1056 = t1055;
                                                }
                                                t1061 = t1056;
                                            } else {
                                                t1060 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                t1061 = t1060;
                                            }
                                            t1066 = t1061;
                                        } else {
                                            t1065 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                            t1066 = t1065;
                                        }
                                        t1071 = t1066;
                                    } else {
                                        t1070 = *(int *)((((t877 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                        t1071 = t1070;
                                    }
                                    *(unsigned int *)((a4 + 0x110)) = t1071;
                                }
                            }
                        }
                    }
                } else {
                    t1099 = *(int *)0xC1EE214;
                    if (t1099 == 14) {
                        t1100 = *(signed char *)((a4 + 0x14B));
                        if ((t1100 & 4) != 0) {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94DB88;
                        } else {
                            *(unsigned int *)((a4 + 0x110)) = 0xC94F70C;
                        }
                    } else {
                        if (t1099 == 11) {
                            t1104 = *(signed char *)((a4 + 0x14B));
                            if ((t1104 & 4) != 0) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94AA20;
                            } else {
                                *(unsigned int *)((a4 + 0x110)) = 0xC94C2D4;
                            }
                        } else {
                            t1108 = (int)((int)t215 % (int)0x2);
                            t1109 = *(int *)(((int)stk + 8));
                            t1110 = (int)((int)t215 % (int)t1109);
                            t1111 = *(signed char *)((a4 + 0x14B));
                            if ((t1111 & 4) != 0) {
                                t1112 = *(int *)((a4 + 0x0));
                                if (t1112 != 25) {
                                    if (t1112 != 26) {
                                        if (t1112 != 28) {
                                            if (t1112 != 29) {
                                                if (t1112 != 31) {
                                                    if (t1112 != 32) {
                                                        if (t1112 != 33) {
                                                            if (t1112 != 36) {
                                                                if (t1112 != 37) {
                                                                    if (t1112 != 40) {
                                                                        if (t1112 != 41) {
                                                                            if (t1112 != 42) {
                                                                                if (t1112 != 45) {
                                                                                    if (t1112 != 49) {
                                                                                        if (t1112 != 50) {
                                                                                            if (t1112 != 53) {
                                                                                                if (t1112 != 54) {
                                                                                                    if (t1112 != 55) {
                                                                                                        if (t1112 != 57) {
                                                                                                            t1113 = *(int *)((((t1110 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                            t1115 = t1113;
                                                                                                        } else {
                                                                                                            t1114 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                            t1115 = t1114;
                                                                                                        }
                                                                                                        t1120 = t1115;
                                                                                                    } else {
                                                                                                        t1119 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                        t1120 = t1119;
                                                                                                    }
                                                                                                    t1125 = t1120;
                                                                                                } else {
                                                                                                    t1124 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                    t1125 = t1124;
                                                                                                }
                                                                                                t1130 = t1125;
                                                                                            } else {
                                                                                                t1129 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                                t1130 = t1129;
                                                                                            }
                                                                                            t1135 = t1130;
                                                                                        } else {
                                                                                            t1134 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                            t1135 = t1134;
                                                                                        }
                                                                                        t1140 = t1135;
                                                                                    } else {
                                                                                        t1139 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                        t1140 = t1139;
                                                                                    }
                                                                                    t1145 = t1140;
                                                                                } else {
                                                                                    t1144 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                    t1145 = t1144;
                                                                                }
                                                                                t1150 = t1145;
                                                                            } else {
                                                                                t1149 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                                t1150 = t1149;
                                                                            }
                                                                            t1155 = t1150;
                                                                        } else {
                                                                            t1154 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                            t1155 = t1154;
                                                                        }
                                                                        t1160 = t1155;
                                                                    } else {
                                                                        t1159 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                        t1160 = t1159;
                                                                    }
                                                                    t1165 = t1160;
                                                                } else {
                                                                    t1164 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                    t1165 = t1164;
                                                                }
                                                                t1170 = t1165;
                                                            } else {
                                                                t1169 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                                t1170 = t1169;
                                                            }
                                                            t1175 = t1170;
                                                        } else {
                                                            t1174 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                            t1175 = t1174;
                                                        }
                                                        t1180 = t1175;
                                                    } else {
                                                        t1179 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                        t1180 = t1179;
                                                    }
                                                    t1185 = t1180;
                                                } else {
                                                    t1184 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                    t1185 = t1184;
                                                }
                                                t1190 = t1185;
                                            } else {
                                                t1189 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                                t1190 = t1189;
                                            }
                                            t1195 = t1190;
                                        } else {
                                            t1194 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                            t1195 = t1194;
                                        }
                                        t1200 = t1195;
                                    } else {
                                        t1199 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                        t1200 = t1199;
                                    }
                                    t1205 = t1200;
                                } else {
                                    t1204 = *(int *)((((t1108 << 2) + (0x1FC + ((int)stk + 8))) + 0x0));
                                    t1205 = t1204;
                                }
                                *(unsigned int *)((a4 + 0x110)) = t1205;
                            } else {
                                t1209 = *(int *)((a4 + 0x0));
                                if (t1209 != 25) {
                                    if (t1209 != 26) {
                                        if (t1209 != 28) {
                                            if (t1209 != 29) {
                                                if (t1209 != 31) {
                                                    if (t1209 != 32) {
                                                        if (t1209 != 33) {
                                                            if (t1209 != 36) {
                                                                if (t1209 != 37) {
                                                                    if (t1209 != 40) {
                                                                        if (t1209 != 41) {
                                                                            if (t1209 != 42) {
                                                                                if (t1209 != 45) {
                                                                                    if (t1209 != 49) {
                                                                                        if (t1209 != 50) {
                                                                                            if (t1209 != 53) {
                                                                                                if (t1209 != 54) {
                                                                                                    if (t1209 != 55) {
                                                                                                        if (t1209 != 57) {
                                                                                                            t1210 = *(int *)((((t1110 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                            t1212 = t1210;
                                                                                                        } else {
                                                                                                            t1211 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                            t1212 = t1211;
                                                                                                        }
                                                                                                        t1217 = t1212;
                                                                                                    } else {
                                                                                                        t1216 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                        t1217 = t1216;
                                                                                                    }
                                                                                                    t1222 = t1217;
                                                                                                } else {
                                                                                                    t1221 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                    t1222 = t1221;
                                                                                                }
                                                                                                t1227 = t1222;
                                                                                            } else {
                                                                                                t1226 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                                t1227 = t1226;
                                                                                            }
                                                                                            t1232 = t1227;
                                                                                        } else {
                                                                                            t1231 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                            t1232 = t1231;
                                                                                        }
                                                                                        t1237 = t1232;
                                                                                    } else {
                                                                                        t1236 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                        t1237 = t1236;
                                                                                    }
                                                                                    t1242 = t1237;
                                                                                } else {
                                                                                    t1241 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                    t1242 = t1241;
                                                                                }
                                                                                t1247 = t1242;
                                                                            } else {
                                                                                t1246 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                                t1247 = t1246;
                                                                            }
                                                                            t1252 = t1247;
                                                                        } else {
                                                                            t1251 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                            t1252 = t1251;
                                                                        }
                                                                        t1257 = t1252;
                                                                    } else {
                                                                        t1256 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                        t1257 = t1256;
                                                                    }
                                                                    t1262 = t1257;
                                                                } else {
                                                                    t1261 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                    t1262 = t1261;
                                                                }
                                                                t1267 = t1262;
                                                            } else {
                                                                t1266 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                                t1267 = t1266;
                                                            }
                                                            t1272 = t1267;
                                                        } else {
                                                            t1271 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                            t1272 = t1271;
                                                        }
                                                        t1277 = t1272;
                                                    } else {
                                                        t1276 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                        t1277 = t1276;
                                                    }
                                                    t1282 = t1277;
                                                } else {
                                                    t1281 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                    t1282 = t1281;
                                                }
                                                t1287 = t1282;
                                            } else {
                                                t1286 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                                t1287 = t1286;
                                            }
                                            t1292 = t1287;
                                        } else {
                                            t1291 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                            t1292 = t1291;
                                        }
                                        t1297 = t1292;
                                    } else {
                                        t1296 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                        t1297 = t1296;
                                    }
                                    t1302 = t1297;
                                } else {
                                    t1301 = *(int *)((((t1108 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0));
                                    t1302 = t1301;
                                }
                                *(unsigned int *)((a4 + 0x110)) = t1302;
                            }
                        }
                    }
                }
            }
            t1337 = *(int *)((a4 + 0x110));
            if (t1337 != 0xC962F0C) {
                if (t1337 == 0xC9659C0) {
                    *(unsigned int *)0xC2AE350 = 0xC0D3068;
                    *(unsigned int *)0xC2AE358 = 0xC0D58C0;
                } else {
                    *(unsigned int *)0xC2AE350 = 0xC0D3068;
                    *(unsigned int *)0xC2AE358 = 0xC0D3068;
                }
            } else {
                *(unsigned int *)0xC2AE350 = 0xC0D3068;
                *(unsigned int *)0xC2AE358 = 0xC0D58C0;
            }
        }
        t1351 = *(int *)((a4 + 0x110));
        *(unsigned int *)0xC2AE348 = t1351;
        t1352 = rinRand();
        t1353 = *(int *)(((0x148 + a4) + 0x0));
        t1354 = (int)(((unsigned int)t1353 >> 21) & 0x3);
        if (t1354 != 0) {
            if (t1354 == 1) {
                t1355 = (int)((int)t1352 % (int)0x4);
                t1356 = *(signed char *)((a4 + 0x14B));
                if ((t1356 & 4) != 0) {
                    t1357 = *(int *)((((t1355 << 2) + (0x150 + ((int)stk + 8))) + 0x0));
                    *(unsigned int *)0xC2AE34C = t1357;
                    t1358 = *(int *)((((0x140 + ((int)stk + 8)) + (t1355 << 2)) + 0x0));
                    *(unsigned int *)0xC2AE354 = t1358;
                    t1359 = *(int *)((((t1355 << 2) + (0x130 + ((int)stk + 8))) + 0x0));
                    *(unsigned int *)0xC2AE35C = t1359;
                } else {
                    t1360 = *(int *)((((t1355 << 2) + (0x120 + ((int)stk + 8))) + 0x0));
                    *(unsigned int *)0xC2AE34C = t1360;
                    t1361 = *(int *)((((0x110 + ((int)stk + 8)) + (t1355 << 2)) + 0x0));
                    *(unsigned int *)0xC2AE354 = t1361;
                    t1362 = *(int *)((((t1355 << 2) + (0x100 + ((int)stk + 8))) + 0x0));
                    *(unsigned int *)0xC2AE35C = t1362;
                }
            } else {
                if (t1354 == 2) {
                    t1369 = *(int *)((a4 + 0x0));
                    if (t1369 != 32) {
                        if (t1369 != 33) {
                            if (t1369 != 35) {
                                if (t1369 != 36) {
                                    t1370 = *(int *)(((int)stk + 16));
                                    t1371 = (int)((int)t1352 % (int)t1370);
                                    *(unsigned int *)(((int)stk + 8)) = (t1371 << 2);
                                    t1372 = *(signed char *)((a4 + 0x14B));
                                    if ((t1372 & 4) != 0) {
                                        t1373 = *(int *)(((int)stk + 8));
                                        t1374 = *(int *)(((t1373 + (0xDC + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t1374;
                                        t1375 = *(int *)(((int)stk + 8));
                                        t1376 = *(int *)(((t1375 + (0xB8 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t1376;
                                        t1377 = *(int *)(((int)stk + 8));
                                        t1378 = *(int *)(((0x94 + ((int)stk + 8)) + t1377));
                                        t1388 = t1378;
                                    } else {
                                        t1379 = *(int *)(((int)stk + 8));
                                        t1380 = *(int *)(((t1379 + (((int)stk + 8) + 0x70)) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t1380;
                                        t1381 = *(int *)(((int)stk + 8));
                                        t1382 = *(int *)(((t1381 + (((int)stk + 8) + 0x4C)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t1382;
                                        t1383 = *(int *)(((int)stk + 8));
                                        t1384 = *(int *)(((t1383 + (((int)stk + 8) + 0x28)) + 0x0));
                                        t1388 = t1384;
                                    }
                                    *(unsigned int *)0xC2AE35C = t1388;
                                } else {
                                    t1390 = (int)((int)t1352 % (int)0x8);
                                    t1391 = t1390;
                                    if ((int)t1390 >= (int)0x3) {
                                        t1391 = (t1390 + 0x1);
                                    }
                                    t1393 = *(signed char *)((a4 + 0x14B));
                                    if ((t1393 & 4) != 0) {
                                        t1394 = *(int *)((((t1391 << 2) + (0xDC + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t1394;
                                        t1395 = *(int *)((((0xB8 + ((int)stk + 8)) + (t1391 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t1395;
                                        t1396 = *(int *)((((t1391 << 2) + (0x94 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t1396;
                                    } else {
                                        t1397 = *(int *)((((t1391 << 2) + (((int)stk + 8) + 0x70)) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t1397;
                                        t1398 = *(int *)((((((int)stk + 8) + 0x4C) + (t1391 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t1398;
                                        t1399 = *(int *)((((t1391 << 2) + (((int)stk + 8) + 0x28)) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t1399;
                                    }
                                }
                            } else {
                                t1413 = (int)((int)t1352 % (int)0x8);
                                t1414 = t1413;
                                if ((int)t1413 >= (int)0x3) {
                                    t1414 = (t1413 + 0x1);
                                }
                                t1416 = *(signed char *)((a4 + 0x14B));
                                if ((t1416 & 4) != 0) {
                                    t1417 = *(int *)((((t1414 << 2) + (0xDC + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t1417;
                                    t1418 = *(int *)((((0xB8 + ((int)stk + 8)) + (t1414 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t1418;
                                    t1419 = *(int *)((((t1414 << 2) + (0x94 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t1419;
                                } else {
                                    t1420 = *(int *)((((t1414 << 2) + (((int)stk + 8) + 0x70)) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t1420;
                                    t1421 = *(int *)((((((int)stk + 8) + 0x4C) + (t1414 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t1421;
                                    t1422 = *(int *)((((t1414 << 2) + (((int)stk + 8) + 0x28)) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t1422;
                                }
                            }
                        } else {
                            t1436 = (int)((int)t1352 % (int)0x8);
                            t1437 = t1436;
                            if ((int)t1436 >= (int)0x3) {
                                t1437 = (t1436 + 0x1);
                            }
                            t1439 = *(signed char *)((a4 + 0x14B));
                            if ((t1439 & 4) != 0) {
                                t1440 = *(int *)((((t1437 << 2) + (0xDC + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE34C = t1440;
                                t1441 = *(int *)((((0xB8 + ((int)stk + 8)) + (t1437 << 2)) + 0x0));
                                *(unsigned int *)0xC2AE354 = t1441;
                                t1442 = *(int *)((((t1437 << 2) + (0x94 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE35C = t1442;
                            } else {
                                t1443 = *(int *)((((t1437 << 2) + (((int)stk + 8) + 0x70)) + 0x0));
                                *(unsigned int *)0xC2AE34C = t1443;
                                t1444 = *(int *)((((((int)stk + 8) + 0x4C) + (t1437 << 2)) + 0x0));
                                *(unsigned int *)0xC2AE354 = t1444;
                                t1445 = *(int *)((((t1437 << 2) + (((int)stk + 8) + 0x28)) + 0x0));
                                *(unsigned int *)0xC2AE35C = t1445;
                            }
                        }
                    } else {
                        t1459 = *(int *)0xC1EE210;
                        if (t1459 == 2) {
                            t1460 = *(int *)0xC1EE214;
                            if (t1460 != 14) {
                                t1461 = *(signed char *)((a4 + 0x14B));
                                if ((t1461 & 4) != 0) {
                                    *(unsigned int *)0xC2AE34C = 0xC9944D8;
                                } else {
                                    *(unsigned int *)0xC2AE34C = 0xC99697C;
                                }
                            } else {
                                *(unsigned int *)0xC2AE34C = 0xC9944D8;
                            }
                        } else {
                            t1469 = *(signed char *)((a4 + 0x14B));
                            if ((t1469 & 4) != 0) {
                                *(unsigned int *)0xC2AE34C = 0xC9944D8;
                            } else {
                                *(unsigned int *)0xC2AE34C = 0xC99697C;
                            }
                        }
                        *(unsigned int *)0xC2AE354 = 0xC0D3068;
                        *(unsigned int *)0xC2AE35C = 0xC0D3068;
                    }
                }
            }
        } else {
            t1499 = *(int *)0xC1EE210;
            if (t1499 == 2) {
                t1500 = *(int *)0xC1EE214;
                if (t1500 == 14) {
                    t1501 = (int)((int)t1352 % (int)0x2);
                    t1502 = *(int *)((((t1501 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                    *(unsigned int *)0xC2AE34C = t1502;
                    t1503 = *(int *)((((0x180 + ((int)stk + 8)) + (t1501 << 2)) + 0x0));
                    *(unsigned int *)0xC2AE354 = t1503;
                    t1504 = *(int *)(((0x178 + ((int)stk + 8)) + (t1501 << 2)));
                    *(unsigned int *)0xC2AE35C = t1504;
                } else {
                    t1505 = *(signed char *)((a4 + 0x14B));
                    if ((t1505 & 4) == 0) {
                        t1506 = *(int *)0xC2AE348;
                        if (t1506 == 0xC9702C0) {
                            t1507 = *(int *)((a4 + 0x0));
                            if (t1507 == 52) {
                                *(unsigned int *)0xC2AE34C = 0xC9B38F4;
                                *(unsigned int *)0xC2AE354 = 0xC0D5998;
                                *(unsigned int *)0xC2AE35C = 0xC0D5998;
                            } else {
                                t1508 = (int)((int)t1352 % (int)0x2);
                                t1509 = *(int *)((((t1508 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE34C = t1509;
                                t1510 = *(int *)((((0x168 + ((int)stk + 8)) + (t1508 << 2)) + 0x0));
                                *(unsigned int *)0xC2AE354 = t1510;
                                t1511 = *(int *)((((t1508 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE35C = t1511;
                            }
                        } else {
                            t1519 = *(int *)0xC1EE210;
                            t1520 = *(int *)0xC2AD000;
                            if (t1519 == 2) {
                                t1521 = *(int *)0xC1EE214;
                                if (t1521 != 10) {
                                    t1522 = *(int *)0xC1EE214;
                                    if (t1522 != 14) {
                                        t1523 = *(int *)0xC1EE214;
                                        if (t1523 == 11) {
                                            if (t1520 != 3) {
                                                t1524 = *(int *)((a4 + 0x0));
                                                if (t1524 != 23) {
                                                    if (t1524 != 27) {
                                                        if (t1524 != 29) {
                                                            if (t1524 != 30) {
                                                                if (t1524 != 34) {
                                                                    if (t1524 != 39) {
                                                                        if (t1524 != 40) {
                                                                            if (t1524 != 43) {
                                                                                if (t1524 != 50) {
                                                                                    if (t1524 != 54) {
                                                                                        if (t1524 != 56) {
                                                                                            t1525 = (int)((int)t1352 % (int)0x2);
                                                                                            t1526 = *(int *)((((t1525 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                            *(unsigned int *)0xC2AE34C = t1526;
                                                                                            t1527 = *(int *)((((0x168 + ((int)stk + 8)) + (t1525 << 2)) + 0x0));
                                                                                            *(unsigned int *)0xC2AE354 = t1527;
                                                                                            t1528 = *(int *)((((t1525 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                            *(unsigned int *)0xC2AE35C = t1528;
                                                                                        } else {
                                                                                            t1529 = *(int *)(((int)stk + 440));
                                                                                            *(unsigned int *)0xC2AE34C = t1529;
                                                                                            t1530 = *(int *)(((int)stk + 428));
                                                                                            *(unsigned int *)0xC2AE354 = t1530;
                                                                                            t1531 = *(int *)(((int)stk + 416));
                                                                                            *(unsigned int *)0xC2AE35C = t1531;
                                                                                        }
                                                                                    } else {
                                                                                        t1539 = *(int *)(((int)stk + 440));
                                                                                        *(unsigned int *)0xC2AE34C = t1539;
                                                                                        t1540 = *(int *)(((int)stk + 428));
                                                                                        *(unsigned int *)0xC2AE354 = t1540;
                                                                                        t1541 = *(int *)(((int)stk + 416));
                                                                                        *(unsigned int *)0xC2AE35C = t1541;
                                                                                    }
                                                                                } else {
                                                                                    t1549 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t1549;
                                                                                    t1550 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t1550;
                                                                                    t1551 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t1551;
                                                                                }
                                                                            } else {
                                                                                t1559 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t1559;
                                                                                t1560 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t1560;
                                                                                t1561 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t1561;
                                                                            }
                                                                        } else {
                                                                            t1569 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t1569;
                                                                            t1570 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t1570;
                                                                            t1571 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t1571;
                                                                        }
                                                                    } else {
                                                                        t1579 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t1579;
                                                                        t1580 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t1580;
                                                                        t1581 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t1581;
                                                                    }
                                                                } else {
                                                                    t1589 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t1589;
                                                                    t1590 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t1590;
                                                                    t1591 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t1591;
                                                                }
                                                            } else {
                                                                t1599 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t1599;
                                                                t1600 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t1600;
                                                                t1601 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t1601;
                                                            }
                                                        } else {
                                                            t1609 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t1609;
                                                            t1610 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t1610;
                                                            t1611 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t1611;
                                                        }
                                                    } else {
                                                        t1619 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t1619;
                                                        t1620 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t1620;
                                                        t1621 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t1621;
                                                    }
                                                } else {
                                                    t1629 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t1629;
                                                    t1630 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t1630;
                                                    t1631 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t1631;
                                                }
                                            } else {
                                                t1639 = (int)((int)t1352 % (int)0x2);
                                                t1640 = *(int *)((((t1639 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)0xC2AE34C = t1640;
                                                t1641 = *(int *)((((0x168 + ((int)stk + 8)) + (t1639 << 2)) + 0x0));
                                                *(unsigned int *)0xC2AE354 = t1641;
                                                t1642 = *(int *)((((t1639 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)0xC2AE35C = t1642;
                                            }
                                        } else {
                                            if (t1520 == 3) {
                                                t1650 = *(int *)((a4 + 0x0));
                                                if (t1650 != 24) {
                                                    t1680 = 0x0;
                                                    if (t1650 != 33) {
                                                        t1674 = 0x0;
                                                        if (t1650 != 35) {
                                                            t1668 = 0x0;
                                                            if (t1650 != 36) {
                                                                if (t1650 != 42) {
                                                                    if (t1650 != 48) {
                                                                        t1651 = (int)((int)t1352 % (int)0x2);
                                                                        t1654 = t1651;
                                                                    } else {
                                                                        t1652 = *(int *)(((int)stk + 12));
                                                                        t1653 = (int)((int)t1352 % (int)t1652);
                                                                        t1654 = t1653;
                                                                    }
                                                                    t1660 = t1654;
                                                                } else {
                                                                    t1658 = *(int *)(((int)stk + 12));
                                                                    t1659 = (int)((int)t1352 % (int)t1658);
                                                                    t1660 = t1659;
                                                                }
                                                                t1668 = t1660;
                                                            }
                                                            t1674 = t1668;
                                                        }
                                                        t1680 = t1674;
                                                    }
                                                    t1688 = t1680;
                                                } else {
                                                    t1682 = *(int *)(((int)stk + 12));
                                                    t1683 = (int)((int)t1352 % (int)t1682);
                                                    t1688 = t1683;
                                                }
                                                t1782 = t1688;
                                            } else {
                                                t1690 = *(int *)((a4 + 0x0));
                                                if (t1690 != 23) {
                                                    if (t1690 != 27) {
                                                        if (t1690 != 29) {
                                                            t1752 = 0x0;
                                                            if (t1690 != 33) {
                                                                if (t1690 != 34) {
                                                                    t1738 = 0x0;
                                                                    if (t1690 != 35) {
                                                                        t1732 = 0x0;
                                                                        if (t1690 != 36) {
                                                                            if (t1690 != 39) {
                                                                                if (t1690 != 40) {
                                                                                    if (t1690 != 43) {
                                                                                        if (t1690 != 50) {
                                                                                            if (t1690 != 54) {
                                                                                                if (t1690 != 56) {
                                                                                                    t1691 = (int)((int)t1352 % (int)0x2);
                                                                                                    t1694 = t1691;
                                                                                                } else {
                                                                                                    t1692 = *(int *)(((int)stk + 12));
                                                                                                    t1693 = (int)((int)t1352 % (int)t1692);
                                                                                                    t1694 = t1693;
                                                                                                }
                                                                                                t1700 = t1694;
                                                                                            } else {
                                                                                                t1698 = *(int *)(((int)stk + 12));
                                                                                                t1699 = (int)((int)t1352 % (int)t1698);
                                                                                                t1700 = t1699;
                                                                                            }
                                                                                            t1706 = t1700;
                                                                                        } else {
                                                                                            t1704 = *(int *)(((int)stk + 12));
                                                                                            t1705 = (int)((int)t1352 % (int)t1704);
                                                                                            t1706 = t1705;
                                                                                        }
                                                                                        t1712 = t1706;
                                                                                    } else {
                                                                                        t1710 = *(int *)(((int)stk + 12));
                                                                                        t1711 = (int)((int)t1352 % (int)t1710);
                                                                                        t1712 = t1711;
                                                                                    }
                                                                                    t1718 = t1712;
                                                                                } else {
                                                                                    t1716 = *(int *)(((int)stk + 12));
                                                                                    t1717 = (int)((int)t1352 % (int)t1716);
                                                                                    t1718 = t1717;
                                                                                }
                                                                                t1724 = t1718;
                                                                            } else {
                                                                                t1722 = *(int *)(((int)stk + 12));
                                                                                t1723 = (int)((int)t1352 % (int)t1722);
                                                                                t1724 = t1723;
                                                                            }
                                                                            t1732 = t1724;
                                                                        }
                                                                        t1738 = t1732;
                                                                    }
                                                                    t1746 = t1738;
                                                                } else {
                                                                    t1740 = *(int *)(((int)stk + 12));
                                                                    t1741 = (int)((int)t1352 % (int)t1740);
                                                                    t1746 = t1741;
                                                                }
                                                                t1752 = t1746;
                                                            }
                                                            t1760 = t1752;
                                                        } else {
                                                            t1754 = *(int *)(((int)stk + 12));
                                                            t1755 = (int)((int)t1352 % (int)t1754);
                                                            t1760 = t1755;
                                                        }
                                                        t1768 = t1760;
                                                    } else {
                                                        t1762 = *(int *)(((int)stk + 12));
                                                        t1763 = (int)((int)t1352 % (int)t1762);
                                                        t1768 = t1763;
                                                    }
                                                    t1776 = t1768;
                                                } else {
                                                    t1770 = *(int *)(((int)stk + 12));
                                                    t1771 = (int)((int)t1352 % (int)t1770);
                                                    t1776 = t1771;
                                                }
                                                t1782 = t1776;
                                            }
                                            t1784 = *(int *)((((t1782 << 2) + (0x1A8 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t1784;
                                            t1785 = *(int *)((((0x19C + ((int)stk + 8)) + (t1782 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t1785;
                                            t1786 = *(int *)((((t1782 << 2) + (0x190 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE35C = t1786;
                                        }
                                    } else {
                                        if (t1520 != 3) {
                                            t1794 = *(int *)((a4 + 0x0));
                                            if (t1794 != 23) {
                                                if (t1794 != 27) {
                                                    if (t1794 != 29) {
                                                        if (t1794 != 30) {
                                                            if (t1794 != 34) {
                                                                if (t1794 != 39) {
                                                                    if (t1794 != 40) {
                                                                        if (t1794 != 43) {
                                                                            if (t1794 != 50) {
                                                                                if (t1794 != 54) {
                                                                                    if (t1794 != 56) {
                                                                                        t1795 = (int)((int)t1352 % (int)0x2);
                                                                                        t1796 = *(int *)((((t1795 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)0xC2AE34C = t1796;
                                                                                        t1797 = *(int *)((((0x168 + ((int)stk + 8)) + (t1795 << 2)) + 0x0));
                                                                                        *(unsigned int *)0xC2AE354 = t1797;
                                                                                        t1798 = *(int *)((((t1795 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)0xC2AE35C = t1798;
                                                                                    } else {
                                                                                        t1799 = *(int *)(((int)stk + 440));
                                                                                        *(unsigned int *)0xC2AE34C = t1799;
                                                                                        t1800 = *(int *)(((int)stk + 428));
                                                                                        *(unsigned int *)0xC2AE354 = t1800;
                                                                                        t1801 = *(int *)(((int)stk + 416));
                                                                                        *(unsigned int *)0xC2AE35C = t1801;
                                                                                    }
                                                                                } else {
                                                                                    t1809 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t1809;
                                                                                    t1810 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t1810;
                                                                                    t1811 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t1811;
                                                                                }
                                                                            } else {
                                                                                t1819 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t1819;
                                                                                t1820 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t1820;
                                                                                t1821 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t1821;
                                                                            }
                                                                        } else {
                                                                            t1829 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t1829;
                                                                            t1830 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t1830;
                                                                            t1831 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t1831;
                                                                        }
                                                                    } else {
                                                                        t1839 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t1839;
                                                                        t1840 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t1840;
                                                                        t1841 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t1841;
                                                                    }
                                                                } else {
                                                                    t1849 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t1849;
                                                                    t1850 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t1850;
                                                                    t1851 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t1851;
                                                                }
                                                            } else {
                                                                t1859 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t1859;
                                                                t1860 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t1860;
                                                                t1861 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t1861;
                                                            }
                                                        } else {
                                                            t1869 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t1869;
                                                            t1870 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t1870;
                                                            t1871 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t1871;
                                                        }
                                                    } else {
                                                        t1879 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t1879;
                                                        t1880 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t1880;
                                                        t1881 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t1881;
                                                    }
                                                } else {
                                                    t1889 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t1889;
                                                    t1890 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t1890;
                                                    t1891 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t1891;
                                                }
                                            } else {
                                                t1899 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t1899;
                                                t1900 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t1900;
                                                t1901 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t1901;
                                            }
                                        } else {
                                            t1909 = (int)((int)t1352 % (int)0x2);
                                            t1910 = *(int *)((((t1909 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t1910;
                                            t1911 = *(int *)((((0x168 + ((int)stk + 8)) + (t1909 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t1911;
                                            t1912 = *(int *)((((t1909 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE35C = t1912;
                                        }
                                    }
                                } else {
                                    if (t1520 != 3) {
                                        t1927 = *(int *)((a4 + 0x0));
                                        if (t1927 != 23) {
                                            if (t1927 != 27) {
                                                if (t1927 != 29) {
                                                    if (t1927 != 30) {
                                                        if (t1927 != 34) {
                                                            if (t1927 != 39) {
                                                                if (t1927 != 40) {
                                                                    if (t1927 != 43) {
                                                                        if (t1927 != 50) {
                                                                            if (t1927 != 54) {
                                                                                if (t1927 != 56) {
                                                                                    t1928 = (int)((int)t1352 % (int)0x2);
                                                                                    t1929 = *(int *)((((t1928 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE34C = t1929;
                                                                                    t1930 = *(int *)((((0x168 + ((int)stk + 8)) + (t1928 << 2)) + 0x0));
                                                                                    *(unsigned int *)0xC2AE354 = t1930;
                                                                                    t1931 = *(int *)((((t1928 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE35C = t1931;
                                                                                } else {
                                                                                    t1932 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t1932;
                                                                                    t1933 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t1933;
                                                                                    t1934 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t1934;
                                                                                }
                                                                            } else {
                                                                                t1942 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t1942;
                                                                                t1943 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t1943;
                                                                                t1944 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t1944;
                                                                            }
                                                                        } else {
                                                                            t1952 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t1952;
                                                                            t1953 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t1953;
                                                                            t1954 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t1954;
                                                                        }
                                                                    } else {
                                                                        t1962 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t1962;
                                                                        t1963 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t1963;
                                                                        t1964 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t1964;
                                                                    }
                                                                } else {
                                                                    t1972 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t1972;
                                                                    t1973 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t1973;
                                                                    t1974 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t1974;
                                                                }
                                                            } else {
                                                                t1982 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t1982;
                                                                t1983 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t1983;
                                                                t1984 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t1984;
                                                            }
                                                        } else {
                                                            t1992 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t1992;
                                                            t1993 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t1993;
                                                            t1994 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t1994;
                                                        }
                                                    } else {
                                                        t2002 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t2002;
                                                        t2003 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t2003;
                                                        t2004 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t2004;
                                                    }
                                                } else {
                                                    t2012 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t2012;
                                                    t2013 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t2013;
                                                    t2014 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t2014;
                                                }
                                            } else {
                                                t2022 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t2022;
                                                t2023 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t2023;
                                                t2024 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t2024;
                                            }
                                        } else {
                                            t2032 = *(int *)(((int)stk + 440));
                                            *(unsigned int *)0xC2AE34C = t2032;
                                            t2033 = *(int *)(((int)stk + 428));
                                            *(unsigned int *)0xC2AE354 = t2033;
                                            t2034 = *(int *)(((int)stk + 416));
                                            *(unsigned int *)0xC2AE35C = t2034;
                                        }
                                    } else {
                                        t2042 = (int)((int)t1352 % (int)0x2);
                                        t2043 = *(int *)((((t2042 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2043;
                                        t2044 = *(int *)((((0x168 + ((int)stk + 8)) + (t2042 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2044;
                                        t2045 = *(int *)((((t2042 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t2045;
                                    }
                                }
                            } else {
                                t2060 = *(int *)0xC1EE214;
                                if (t2060 != 14) {
                                    t2061 = *(int *)0xC1EE214;
                                    if (t2061 == 11) {
                                        if (t1520 != 3) {
                                            t2062 = *(int *)((a4 + 0x0));
                                            if (t2062 != 23) {
                                                if (t2062 != 27) {
                                                    if (t2062 != 29) {
                                                        if (t2062 != 30) {
                                                            if (t2062 != 34) {
                                                                if (t2062 != 39) {
                                                                    if (t2062 != 40) {
                                                                        if (t2062 != 43) {
                                                                            if (t2062 != 50) {
                                                                                if (t2062 != 54) {
                                                                                    if (t2062 != 56) {
                                                                                        t2063 = (int)((int)t1352 % (int)0x2);
                                                                                        t2064 = *(int *)((((t2063 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)0xC2AE34C = t2064;
                                                                                        t2065 = *(int *)((((0x168 + ((int)stk + 8)) + (t2063 << 2)) + 0x0));
                                                                                        *(unsigned int *)0xC2AE354 = t2065;
                                                                                        t2066 = *(int *)((((t2063 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)0xC2AE35C = t2066;
                                                                                    } else {
                                                                                        t2067 = *(int *)(((int)stk + 440));
                                                                                        *(unsigned int *)0xC2AE34C = t2067;
                                                                                        t2068 = *(int *)(((int)stk + 428));
                                                                                        *(unsigned int *)0xC2AE354 = t2068;
                                                                                        t2069 = *(int *)(((int)stk + 416));
                                                                                        *(unsigned int *)0xC2AE35C = t2069;
                                                                                    }
                                                                                } else {
                                                                                    t2077 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t2077;
                                                                                    t2078 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t2078;
                                                                                    t2079 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t2079;
                                                                                }
                                                                            } else {
                                                                                t2087 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t2087;
                                                                                t2088 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t2088;
                                                                                t2089 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t2089;
                                                                            }
                                                                        } else {
                                                                            t2097 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t2097;
                                                                            t2098 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t2098;
                                                                            t2099 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t2099;
                                                                        }
                                                                    } else {
                                                                        t2107 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t2107;
                                                                        t2108 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t2108;
                                                                        t2109 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t2109;
                                                                    }
                                                                } else {
                                                                    t2117 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t2117;
                                                                    t2118 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t2118;
                                                                    t2119 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t2119;
                                                                }
                                                            } else {
                                                                t2127 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t2127;
                                                                t2128 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t2128;
                                                                t2129 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t2129;
                                                            }
                                                        } else {
                                                            t2137 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t2137;
                                                            t2138 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t2138;
                                                            t2139 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t2139;
                                                        }
                                                    } else {
                                                        t2147 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t2147;
                                                        t2148 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t2148;
                                                        t2149 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t2149;
                                                    }
                                                } else {
                                                    t2157 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t2157;
                                                    t2158 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t2158;
                                                    t2159 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t2159;
                                                }
                                            } else {
                                                t2167 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t2167;
                                                t2168 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t2168;
                                                t2169 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t2169;
                                            }
                                        } else {
                                            t2177 = (int)((int)t1352 % (int)0x2);
                                            t2178 = *(int *)((((t2177 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t2178;
                                            t2179 = *(int *)((((0x168 + ((int)stk + 8)) + (t2177 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t2179;
                                            t2180 = *(int *)((((t2177 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE35C = t2180;
                                        }
                                    } else {
                                        if (t1520 == 3) {
                                            t2188 = *(int *)((a4 + 0x0));
                                            if (t2188 != 24) {
                                                t2218 = 0x0;
                                                if (t2188 != 33) {
                                                    t2212 = 0x0;
                                                    if (t2188 != 35) {
                                                        t2206 = 0x0;
                                                        if (t2188 != 36) {
                                                            if (t2188 != 42) {
                                                                if (t2188 != 48) {
                                                                    t2189 = (int)((int)t1352 % (int)0x2);
                                                                    t2192 = t2189;
                                                                } else {
                                                                    t2190 = *(int *)(((int)stk + 12));
                                                                    t2191 = (int)((int)t1352 % (int)t2190);
                                                                    t2192 = t2191;
                                                                }
                                                                t2198 = t2192;
                                                            } else {
                                                                t2196 = *(int *)(((int)stk + 12));
                                                                t2197 = (int)((int)t1352 % (int)t2196);
                                                                t2198 = t2197;
                                                            }
                                                            t2206 = t2198;
                                                        }
                                                        t2212 = t2206;
                                                    }
                                                    t2218 = t2212;
                                                }
                                                t2226 = t2218;
                                            } else {
                                                t2220 = *(int *)(((int)stk + 12));
                                                t2221 = (int)((int)t1352 % (int)t2220);
                                                t2226 = t2221;
                                            }
                                            t2320 = t2226;
                                        } else {
                                            t2228 = *(int *)((a4 + 0x0));
                                            if (t2228 != 23) {
                                                if (t2228 != 27) {
                                                    if (t2228 != 29) {
                                                        t2290 = 0x0;
                                                        if (t2228 != 33) {
                                                            if (t2228 != 34) {
                                                                t2276 = 0x0;
                                                                if (t2228 != 35) {
                                                                    t2270 = 0x0;
                                                                    if (t2228 != 36) {
                                                                        if (t2228 != 39) {
                                                                            if (t2228 != 40) {
                                                                                if (t2228 != 43) {
                                                                                    if (t2228 != 50) {
                                                                                        if (t2228 != 54) {
                                                                                            if (t2228 != 56) {
                                                                                                t2229 = (int)((int)t1352 % (int)0x2);
                                                                                                t2232 = t2229;
                                                                                            } else {
                                                                                                t2230 = *(int *)(((int)stk + 12));
                                                                                                t2231 = (int)((int)t1352 % (int)t2230);
                                                                                                t2232 = t2231;
                                                                                            }
                                                                                            t2238 = t2232;
                                                                                        } else {
                                                                                            t2236 = *(int *)(((int)stk + 12));
                                                                                            t2237 = (int)((int)t1352 % (int)t2236);
                                                                                            t2238 = t2237;
                                                                                        }
                                                                                        t2244 = t2238;
                                                                                    } else {
                                                                                        t2242 = *(int *)(((int)stk + 12));
                                                                                        t2243 = (int)((int)t1352 % (int)t2242);
                                                                                        t2244 = t2243;
                                                                                    }
                                                                                    t2250 = t2244;
                                                                                } else {
                                                                                    t2248 = *(int *)(((int)stk + 12));
                                                                                    t2249 = (int)((int)t1352 % (int)t2248);
                                                                                    t2250 = t2249;
                                                                                }
                                                                                t2256 = t2250;
                                                                            } else {
                                                                                t2254 = *(int *)(((int)stk + 12));
                                                                                t2255 = (int)((int)t1352 % (int)t2254);
                                                                                t2256 = t2255;
                                                                            }
                                                                            t2262 = t2256;
                                                                        } else {
                                                                            t2260 = *(int *)(((int)stk + 12));
                                                                            t2261 = (int)((int)t1352 % (int)t2260);
                                                                            t2262 = t2261;
                                                                        }
                                                                        t2270 = t2262;
                                                                    }
                                                                    t2276 = t2270;
                                                                }
                                                                t2284 = t2276;
                                                            } else {
                                                                t2278 = *(int *)(((int)stk + 12));
                                                                t2279 = (int)((int)t1352 % (int)t2278);
                                                                t2284 = t2279;
                                                            }
                                                            t2290 = t2284;
                                                        }
                                                        t2298 = t2290;
                                                    } else {
                                                        t2292 = *(int *)(((int)stk + 12));
                                                        t2293 = (int)((int)t1352 % (int)t2292);
                                                        t2298 = t2293;
                                                    }
                                                    t2306 = t2298;
                                                } else {
                                                    t2300 = *(int *)(((int)stk + 12));
                                                    t2301 = (int)((int)t1352 % (int)t2300);
                                                    t2306 = t2301;
                                                }
                                                t2314 = t2306;
                                            } else {
                                                t2308 = *(int *)(((int)stk + 12));
                                                t2309 = (int)((int)t1352 % (int)t2308);
                                                t2314 = t2309;
                                            }
                                            t2320 = t2314;
                                        }
                                        t2322 = *(int *)((((t2320 << 2) + (0x1A8 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2322;
                                        t2323 = *(int *)((((0x19C + ((int)stk + 8)) + (t2320 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2323;
                                        t2324 = *(int *)((((t2320 << 2) + (0x190 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t2324;
                                    }
                                } else {
                                    if (t1520 != 3) {
                                        t2332 = *(int *)((a4 + 0x0));
                                        if (t2332 != 23) {
                                            if (t2332 != 27) {
                                                if (t2332 != 29) {
                                                    if (t2332 != 30) {
                                                        if (t2332 != 34) {
                                                            if (t2332 != 39) {
                                                                if (t2332 != 40) {
                                                                    if (t2332 != 43) {
                                                                        if (t2332 != 50) {
                                                                            if (t2332 != 54) {
                                                                                if (t2332 != 56) {
                                                                                    t2333 = (int)((int)t1352 % (int)0x2);
                                                                                    t2334 = *(int *)((((t2333 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE34C = t2334;
                                                                                    t2335 = *(int *)((((0x168 + ((int)stk + 8)) + (t2333 << 2)) + 0x0));
                                                                                    *(unsigned int *)0xC2AE354 = t2335;
                                                                                    t2336 = *(int *)((((t2333 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE35C = t2336;
                                                                                } else {
                                                                                    t2337 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t2337;
                                                                                    t2338 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t2338;
                                                                                    t2339 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t2339;
                                                                                }
                                                                            } else {
                                                                                t2347 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t2347;
                                                                                t2348 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t2348;
                                                                                t2349 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t2349;
                                                                            }
                                                                        } else {
                                                                            t2357 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t2357;
                                                                            t2358 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t2358;
                                                                            t2359 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t2359;
                                                                        }
                                                                    } else {
                                                                        t2367 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t2367;
                                                                        t2368 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t2368;
                                                                        t2369 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t2369;
                                                                    }
                                                                } else {
                                                                    t2377 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t2377;
                                                                    t2378 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t2378;
                                                                    t2379 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t2379;
                                                                }
                                                            } else {
                                                                t2387 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t2387;
                                                                t2388 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t2388;
                                                                t2389 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t2389;
                                                            }
                                                        } else {
                                                            t2397 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t2397;
                                                            t2398 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t2398;
                                                            t2399 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t2399;
                                                        }
                                                    } else {
                                                        t2407 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t2407;
                                                        t2408 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t2408;
                                                        t2409 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t2409;
                                                    }
                                                } else {
                                                    t2417 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t2417;
                                                    t2418 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t2418;
                                                    t2419 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t2419;
                                                }
                                            } else {
                                                t2427 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t2427;
                                                t2428 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t2428;
                                                t2429 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t2429;
                                            }
                                        } else {
                                            t2437 = *(int *)(((int)stk + 440));
                                            *(unsigned int *)0xC2AE34C = t2437;
                                            t2438 = *(int *)(((int)stk + 428));
                                            *(unsigned int *)0xC2AE354 = t2438;
                                            t2439 = *(int *)(((int)stk + 416));
                                            *(unsigned int *)0xC2AE35C = t2439;
                                        }
                                    } else {
                                        t2447 = (int)((int)t1352 % (int)0x2);
                                        t2448 = *(int *)((((t2447 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2448;
                                        t2449 = *(int *)((((0x168 + ((int)stk + 8)) + (t2447 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2449;
                                        t2450 = *(int *)((((t2447 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t2450;
                                    }
                                }
                            }
                        }
                    } else {
                        t2479 = *(int *)0xC2AE348;
                        if (t2479 == 0xC96DE8C) {
                            t2480 = *(int *)((a4 + 0x0));
                            if (t2480 == 52) {
                                *(unsigned int *)0xC2AE34C = 0xC9B1170;
                                *(unsigned int *)0xC2AE354 = 0xC0D5998;
                                *(unsigned int *)0xC2AE35C = 0xC0D5998;
                            } else {
                                t2481 = (int)((int)t1352 % (int)0x2);
                                t2482 = *(int *)((((t2481 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE34C = t2482;
                                t2483 = *(int *)((((0x180 + ((int)stk + 8)) + (t2481 << 2)) + 0x0));
                                *(unsigned int *)0xC2AE354 = t2483;
                                t2484 = *(int *)(((0x178 + ((int)stk + 8)) + (t2481 << 2)));
                                *(unsigned int *)0xC2AE35C = t2484;
                            }
                        } else {
                            t2492 = *(int *)0xC1EE210;
                            if (t2492 == 2) {
                                t2493 = *(int *)0xC1EE214;
                                if (t2493 != 10) {
                                    t2494 = *(int *)0xC1EE214;
                                    if (t2494 == 11) {
                                        t2495 = *(int *)0xC1EE214;
                                        if (t2495 == 11) {
                                            t2496 = *(int *)0xC179488;
                                            if ((int)t2496 < (int)0x4) {
                                                t2497 = *(int *)(((int)stk + 476));
                                                *(unsigned int *)0xC2AE34C = t2497;
                                                t2498 = *(int *)(((int)stk + 464));
                                                *(unsigned int *)0xC2AE354 = t2498;
                                                t2499 = *(int *)(((int)stk + 452));
                                                *(unsigned int *)0xC2AE35C = t2499;
                                            } else {
                                                t2500 = (int)((int)t1352 % (int)0x2);
                                                t2501 = *(int *)((((t2500 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                                *(unsigned int *)0xC2AE34C = t2501;
                                                t2502 = *(int *)((((0x180 + ((int)stk + 8)) + (t2500 << 2)) + 0x0));
                                                *(unsigned int *)0xC2AE354 = t2502;
                                                t2503 = *(int *)(((0x178 + ((int)stk + 8)) + (t2500 << 2)));
                                                *(unsigned int *)0xC2AE35C = t2503;
                                            }
                                        } else {
                                            t2511 = (int)((int)t1352 % (int)0x2);
                                            t2512 = *(int *)((((t2511 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t2512;
                                            t2513 = *(int *)((((0x180 + ((int)stk + 8)) + (t2511 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t2513;
                                            t2514 = *(int *)(((0x178 + ((int)stk + 8)) + (t2511 << 2)));
                                            *(unsigned int *)0xC2AE35C = t2514;
                                        }
                                    } else {
                                        t2522 = *(int *)((a4 + 0x0));
                                        t2542 = 0x2;
                                        if (t2522 != 30) {
                                            t2537 = 0x0;
                                            if (t2522 != 33) {
                                                t2532 = 0x0;
                                                if (t2522 != 35) {
                                                    t2527 = 0x0;
                                                    if (t2522 != 36) {
                                                        t2523 = (int)((int)t1352 % (int)0x2);
                                                        t2527 = t2523;
                                                    }
                                                    t2532 = t2527;
                                                }
                                                t2537 = t2532;
                                            }
                                            t2542 = t2537;
                                        }
                                        t2544 = *(int *)((((t2542 << 2) + (0x1CC + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2544;
                                        t2545 = *(int *)((((0x1C0 + ((int)stk + 8)) + (t2542 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2545;
                                        t2546 = *(int *)((((t2542 << 2) + (0x1B4 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t2546;
                                    }
                                } else {
                                    t2554 = *(int *)0xC1EE214;
                                    if (t2554 == 11) {
                                        t2555 = *(int *)0xC179488;
                                        if ((int)t2555 < (int)0x4) {
                                            t2556 = *(int *)(((int)stk + 476));
                                            *(unsigned int *)0xC2AE34C = t2556;
                                            t2557 = *(int *)(((int)stk + 464));
                                            *(unsigned int *)0xC2AE354 = t2557;
                                            t2558 = *(int *)(((int)stk + 452));
                                            *(unsigned int *)0xC2AE35C = t2558;
                                        } else {
                                            t2559 = (int)((int)t1352 % (int)0x2);
                                            t2560 = *(int *)((((t2559 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t2560;
                                            t2561 = *(int *)((((0x180 + ((int)stk + 8)) + (t2559 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t2561;
                                            t2562 = *(int *)(((0x178 + ((int)stk + 8)) + (t2559 << 2)));
                                            *(unsigned int *)0xC2AE35C = t2562;
                                        }
                                    } else {
                                        t2570 = (int)((int)t1352 % (int)0x2);
                                        t2571 = *(int *)((((t2570 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2571;
                                        t2572 = *(int *)((((0x180 + ((int)stk + 8)) + (t2570 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2572;
                                        t2573 = *(int *)(((0x178 + ((int)stk + 8)) + (t2570 << 2)));
                                        *(unsigned int *)0xC2AE35C = t2573;
                                    }
                                }
                            } else {
                                t2588 = *(int *)0xC1EE214;
                                if (t2588 == 11) {
                                    t2589 = *(int *)0xC1EE214;
                                    if (t2589 == 11) {
                                        t2590 = *(int *)0xC179488;
                                        if ((int)t2590 < (int)0x4) {
                                            t2591 = *(int *)(((int)stk + 476));
                                            *(unsigned int *)0xC2AE34C = t2591;
                                            t2592 = *(int *)(((int)stk + 464));
                                            *(unsigned int *)0xC2AE354 = t2592;
                                            t2593 = *(int *)(((int)stk + 452));
                                            *(unsigned int *)0xC2AE35C = t2593;
                                        } else {
                                            t2594 = (int)((int)t1352 % (int)0x2);
                                            t2595 = *(int *)((((t2594 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t2595;
                                            t2596 = *(int *)((((0x180 + ((int)stk + 8)) + (t2594 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t2596;
                                            t2597 = *(int *)(((0x178 + ((int)stk + 8)) + (t2594 << 2)));
                                            *(unsigned int *)0xC2AE35C = t2597;
                                        }
                                    } else {
                                        t2605 = (int)((int)t1352 % (int)0x2);
                                        t2606 = *(int *)((((t2605 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2606;
                                        t2607 = *(int *)((((0x180 + ((int)stk + 8)) + (t2605 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2607;
                                        t2608 = *(int *)(((0x178 + ((int)stk + 8)) + (t2605 << 2)));
                                        *(unsigned int *)0xC2AE35C = t2608;
                                    }
                                } else {
                                    t2616 = *(int *)((a4 + 0x0));
                                    t2636 = 0x2;
                                    if (t2616 != 30) {
                                        t2631 = 0x0;
                                        if (t2616 != 33) {
                                            t2626 = 0x0;
                                            if (t2616 != 35) {
                                                t2621 = 0x0;
                                                if (t2616 != 36) {
                                                    t2617 = (int)((int)t1352 % (int)0x2);
                                                    t2621 = t2617;
                                                }
                                                t2626 = t2621;
                                            }
                                            t2631 = t2626;
                                        }
                                        t2636 = t2631;
                                    }
                                    t2638 = *(int *)((((t2636 << 2) + (0x1CC + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t2638;
                                    t2639 = *(int *)((((0x1C0 + ((int)stk + 8)) + (t2636 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t2639;
                                    t2640 = *(int *)((((t2636 << 2) + (0x1B4 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t2640;
                                }
                            }
                        }
                    }
                }
            } else {
                t2676 = *(signed char *)((a4 + 0x14B));
                if ((t2676 & 4) == 0) {
                    t2677 = *(int *)0xC2AE348;
                    if (t2677 == 0xC9702C0) {
                        t2678 = *(int *)((a4 + 0x0));
                        if (t2678 == 52) {
                            *(unsigned int *)0xC2AE34C = 0xC9B38F4;
                            *(unsigned int *)0xC2AE354 = 0xC0D5998;
                            *(unsigned int *)0xC2AE35C = 0xC0D5998;
                        } else {
                            t2679 = (int)((int)t1352 % (int)0x2);
                            t2680 = *(int *)((((t2679 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                            *(unsigned int *)0xC2AE34C = t2680;
                            t2681 = *(int *)((((0x168 + ((int)stk + 8)) + (t2679 << 2)) + 0x0));
                            *(unsigned int *)0xC2AE354 = t2681;
                            t2682 = *(int *)((((t2679 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                            *(unsigned int *)0xC2AE35C = t2682;
                        }
                    } else {
                        t2690 = *(int *)0xC1EE210;
                        t2691 = *(int *)0xC2AD000;
                        if (t2690 == 2) {
                            t2692 = *(int *)0xC1EE214;
                            if (t2692 != 10) {
                                t2693 = *(int *)0xC1EE214;
                                if (t2693 != 14) {
                                    t2694 = *(int *)0xC1EE214;
                                    if (t2694 == 11) {
                                        if (t2691 != 3) {
                                            t2695 = *(int *)((a4 + 0x0));
                                            if (t2695 != 23) {
                                                if (t2695 != 27) {
                                                    if (t2695 != 29) {
                                                        if (t2695 != 30) {
                                                            if (t2695 != 34) {
                                                                if (t2695 != 39) {
                                                                    if (t2695 != 40) {
                                                                        if (t2695 != 43) {
                                                                            if (t2695 != 50) {
                                                                                if (t2695 != 54) {
                                                                                    if (t2695 != 56) {
                                                                                        t2696 = (int)((int)t1352 % (int)0x2);
                                                                                        t2697 = *(int *)((((t2696 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)0xC2AE34C = t2697;
                                                                                        t2698 = *(int *)((((0x168 + ((int)stk + 8)) + (t2696 << 2)) + 0x0));
                                                                                        *(unsigned int *)0xC2AE354 = t2698;
                                                                                        t2699 = *(int *)((((t2696 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                        *(unsigned int *)0xC2AE35C = t2699;
                                                                                    } else {
                                                                                        t2700 = *(int *)(((int)stk + 440));
                                                                                        *(unsigned int *)0xC2AE34C = t2700;
                                                                                        t2701 = *(int *)(((int)stk + 428));
                                                                                        *(unsigned int *)0xC2AE354 = t2701;
                                                                                        t2702 = *(int *)(((int)stk + 416));
                                                                                        *(unsigned int *)0xC2AE35C = t2702;
                                                                                    }
                                                                                } else {
                                                                                    t2710 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t2710;
                                                                                    t2711 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t2711;
                                                                                    t2712 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t2712;
                                                                                }
                                                                            } else {
                                                                                t2720 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t2720;
                                                                                t2721 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t2721;
                                                                                t2722 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t2722;
                                                                            }
                                                                        } else {
                                                                            t2730 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t2730;
                                                                            t2731 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t2731;
                                                                            t2732 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t2732;
                                                                        }
                                                                    } else {
                                                                        t2740 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t2740;
                                                                        t2741 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t2741;
                                                                        t2742 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t2742;
                                                                    }
                                                                } else {
                                                                    t2750 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t2750;
                                                                    t2751 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t2751;
                                                                    t2752 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t2752;
                                                                }
                                                            } else {
                                                                t2760 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t2760;
                                                                t2761 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t2761;
                                                                t2762 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t2762;
                                                            }
                                                        } else {
                                                            t2770 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t2770;
                                                            t2771 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t2771;
                                                            t2772 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t2772;
                                                        }
                                                    } else {
                                                        t2780 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t2780;
                                                        t2781 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t2781;
                                                        t2782 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t2782;
                                                    }
                                                } else {
                                                    t2790 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t2790;
                                                    t2791 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t2791;
                                                    t2792 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t2792;
                                                }
                                            } else {
                                                t2800 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t2800;
                                                t2801 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t2801;
                                                t2802 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t2802;
                                            }
                                        } else {
                                            t2810 = (int)((int)t1352 % (int)0x2);
                                            t2811 = *(int *)((((t2810 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t2811;
                                            t2812 = *(int *)((((0x168 + ((int)stk + 8)) + (t2810 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t2812;
                                            t2813 = *(int *)((((t2810 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE35C = t2813;
                                        }
                                    } else {
                                        if (t2691 == 3) {
                                            t2821 = *(int *)((a4 + 0x0));
                                            if (t2821 != 24) {
                                                t2851 = 0x0;
                                                if (t2821 != 33) {
                                                    t2845 = 0x0;
                                                    if (t2821 != 35) {
                                                        t2839 = 0x0;
                                                        if (t2821 != 36) {
                                                            if (t2821 != 42) {
                                                                if (t2821 != 48) {
                                                                    t2822 = (int)((int)t1352 % (int)0x2);
                                                                    t2825 = t2822;
                                                                } else {
                                                                    t2823 = *(int *)(((int)stk + 12));
                                                                    t2824 = (int)((int)t1352 % (int)t2823);
                                                                    t2825 = t2824;
                                                                }
                                                                t2831 = t2825;
                                                            } else {
                                                                t2829 = *(int *)(((int)stk + 12));
                                                                t2830 = (int)((int)t1352 % (int)t2829);
                                                                t2831 = t2830;
                                                            }
                                                            t2839 = t2831;
                                                        }
                                                        t2845 = t2839;
                                                    }
                                                    t2851 = t2845;
                                                }
                                                t2859 = t2851;
                                            } else {
                                                t2853 = *(int *)(((int)stk + 12));
                                                t2854 = (int)((int)t1352 % (int)t2853);
                                                t2859 = t2854;
                                            }
                                            t2953 = t2859;
                                        } else {
                                            t2861 = *(int *)((a4 + 0x0));
                                            if (t2861 != 23) {
                                                if (t2861 != 27) {
                                                    if (t2861 != 29) {
                                                        t2923 = 0x0;
                                                        if (t2861 != 33) {
                                                            if (t2861 != 34) {
                                                                t2909 = 0x0;
                                                                if (t2861 != 35) {
                                                                    t2903 = 0x0;
                                                                    if (t2861 != 36) {
                                                                        if (t2861 != 39) {
                                                                            if (t2861 != 40) {
                                                                                if (t2861 != 43) {
                                                                                    if (t2861 != 50) {
                                                                                        if (t2861 != 54) {
                                                                                            if (t2861 != 56) {
                                                                                                t2862 = (int)((int)t1352 % (int)0x2);
                                                                                                t2865 = t2862;
                                                                                            } else {
                                                                                                t2863 = *(int *)(((int)stk + 12));
                                                                                                t2864 = (int)((int)t1352 % (int)t2863);
                                                                                                t2865 = t2864;
                                                                                            }
                                                                                            t2871 = t2865;
                                                                                        } else {
                                                                                            t2869 = *(int *)(((int)stk + 12));
                                                                                            t2870 = (int)((int)t1352 % (int)t2869);
                                                                                            t2871 = t2870;
                                                                                        }
                                                                                        t2877 = t2871;
                                                                                    } else {
                                                                                        t2875 = *(int *)(((int)stk + 12));
                                                                                        t2876 = (int)((int)t1352 % (int)t2875);
                                                                                        t2877 = t2876;
                                                                                    }
                                                                                    t2883 = t2877;
                                                                                } else {
                                                                                    t2881 = *(int *)(((int)stk + 12));
                                                                                    t2882 = (int)((int)t1352 % (int)t2881);
                                                                                    t2883 = t2882;
                                                                                }
                                                                                t2889 = t2883;
                                                                            } else {
                                                                                t2887 = *(int *)(((int)stk + 12));
                                                                                t2888 = (int)((int)t1352 % (int)t2887);
                                                                                t2889 = t2888;
                                                                            }
                                                                            t2895 = t2889;
                                                                        } else {
                                                                            t2893 = *(int *)(((int)stk + 12));
                                                                            t2894 = (int)((int)t1352 % (int)t2893);
                                                                            t2895 = t2894;
                                                                        }
                                                                        t2903 = t2895;
                                                                    }
                                                                    t2909 = t2903;
                                                                }
                                                                t2917 = t2909;
                                                            } else {
                                                                t2911 = *(int *)(((int)stk + 12));
                                                                t2912 = (int)((int)t1352 % (int)t2911);
                                                                t2917 = t2912;
                                                            }
                                                            t2923 = t2917;
                                                        }
                                                        t2931 = t2923;
                                                    } else {
                                                        t2925 = *(int *)(((int)stk + 12));
                                                        t2926 = (int)((int)t1352 % (int)t2925);
                                                        t2931 = t2926;
                                                    }
                                                    t2939 = t2931;
                                                } else {
                                                    t2933 = *(int *)(((int)stk + 12));
                                                    t2934 = (int)((int)t1352 % (int)t2933);
                                                    t2939 = t2934;
                                                }
                                                t2947 = t2939;
                                            } else {
                                                t2941 = *(int *)(((int)stk + 12));
                                                t2942 = (int)((int)t1352 % (int)t2941);
                                                t2947 = t2942;
                                            }
                                            t2953 = t2947;
                                        }
                                        t2955 = *(int *)((((t2953 << 2) + (0x1A8 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t2955;
                                        t2956 = *(int *)((((0x19C + ((int)stk + 8)) + (t2953 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t2956;
                                        t2957 = *(int *)((((t2953 << 2) + (0x190 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t2957;
                                    }
                                } else {
                                    if (t2691 != 3) {
                                        t2965 = *(int *)((a4 + 0x0));
                                        if (t2965 != 23) {
                                            if (t2965 != 27) {
                                                if (t2965 != 29) {
                                                    if (t2965 != 30) {
                                                        if (t2965 != 34) {
                                                            if (t2965 != 39) {
                                                                if (t2965 != 40) {
                                                                    if (t2965 != 43) {
                                                                        if (t2965 != 50) {
                                                                            if (t2965 != 54) {
                                                                                if (t2965 != 56) {
                                                                                    t2966 = (int)((int)t1352 % (int)0x2);
                                                                                    t2967 = *(int *)((((t2966 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE34C = t2967;
                                                                                    t2968 = *(int *)((((0x168 + ((int)stk + 8)) + (t2966 << 2)) + 0x0));
                                                                                    *(unsigned int *)0xC2AE354 = t2968;
                                                                                    t2969 = *(int *)((((t2966 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE35C = t2969;
                                                                                } else {
                                                                                    t2970 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t2970;
                                                                                    t2971 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t2971;
                                                                                    t2972 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t2972;
                                                                                }
                                                                            } else {
                                                                                t2980 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t2980;
                                                                                t2981 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t2981;
                                                                                t2982 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t2982;
                                                                            }
                                                                        } else {
                                                                            t2990 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t2990;
                                                                            t2991 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t2991;
                                                                            t2992 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t2992;
                                                                        }
                                                                    } else {
                                                                        t3000 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t3000;
                                                                        t3001 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t3001;
                                                                        t3002 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t3002;
                                                                    }
                                                                } else {
                                                                    t3010 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t3010;
                                                                    t3011 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t3011;
                                                                    t3012 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t3012;
                                                                }
                                                            } else {
                                                                t3020 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t3020;
                                                                t3021 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t3021;
                                                                t3022 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t3022;
                                                            }
                                                        } else {
                                                            t3030 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t3030;
                                                            t3031 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t3031;
                                                            t3032 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t3032;
                                                        }
                                                    } else {
                                                        t3040 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t3040;
                                                        t3041 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t3041;
                                                        t3042 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t3042;
                                                    }
                                                } else {
                                                    t3050 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t3050;
                                                    t3051 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t3051;
                                                    t3052 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t3052;
                                                }
                                            } else {
                                                t3060 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t3060;
                                                t3061 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t3061;
                                                t3062 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t3062;
                                            }
                                        } else {
                                            t3070 = *(int *)(((int)stk + 440));
                                            *(unsigned int *)0xC2AE34C = t3070;
                                            t3071 = *(int *)(((int)stk + 428));
                                            *(unsigned int *)0xC2AE354 = t3071;
                                            t3072 = *(int *)(((int)stk + 416));
                                            *(unsigned int *)0xC2AE35C = t3072;
                                        }
                                    } else {
                                        t3080 = (int)((int)t1352 % (int)0x2);
                                        t3081 = *(int *)((((t3080 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t3081;
                                        t3082 = *(int *)((((0x168 + ((int)stk + 8)) + (t3080 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t3082;
                                        t3083 = *(int *)((((t3080 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t3083;
                                    }
                                }
                            } else {
                                if (t2691 != 3) {
                                    t3098 = *(int *)((a4 + 0x0));
                                    if (t3098 != 23) {
                                        if (t3098 != 27) {
                                            if (t3098 != 29) {
                                                if (t3098 != 30) {
                                                    if (t3098 != 34) {
                                                        if (t3098 != 39) {
                                                            if (t3098 != 40) {
                                                                if (t3098 != 43) {
                                                                    if (t3098 != 50) {
                                                                        if (t3098 != 54) {
                                                                            if (t3098 != 56) {
                                                                                t3099 = (int)((int)t1352 % (int)0x2);
                                                                                t3100 = *(int *)((((t3099 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)0xC2AE34C = t3100;
                                                                                t3101 = *(int *)((((0x168 + ((int)stk + 8)) + (t3099 << 2)) + 0x0));
                                                                                *(unsigned int *)0xC2AE354 = t3101;
                                                                                t3102 = *(int *)((((t3099 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)0xC2AE35C = t3102;
                                                                            } else {
                                                                                t3103 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t3103;
                                                                                t3104 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t3104;
                                                                                t3105 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t3105;
                                                                            }
                                                                        } else {
                                                                            t3113 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t3113;
                                                                            t3114 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t3114;
                                                                            t3115 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t3115;
                                                                        }
                                                                    } else {
                                                                        t3123 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t3123;
                                                                        t3124 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t3124;
                                                                        t3125 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t3125;
                                                                    }
                                                                } else {
                                                                    t3133 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t3133;
                                                                    t3134 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t3134;
                                                                    t3135 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t3135;
                                                                }
                                                            } else {
                                                                t3143 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t3143;
                                                                t3144 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t3144;
                                                                t3145 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t3145;
                                                            }
                                                        } else {
                                                            t3153 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t3153;
                                                            t3154 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t3154;
                                                            t3155 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t3155;
                                                        }
                                                    } else {
                                                        t3163 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t3163;
                                                        t3164 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t3164;
                                                        t3165 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t3165;
                                                    }
                                                } else {
                                                    t3173 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t3173;
                                                    t3174 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t3174;
                                                    t3175 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t3175;
                                                }
                                            } else {
                                                t3183 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t3183;
                                                t3184 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t3184;
                                                t3185 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t3185;
                                            }
                                        } else {
                                            t3193 = *(int *)(((int)stk + 440));
                                            *(unsigned int *)0xC2AE34C = t3193;
                                            t3194 = *(int *)(((int)stk + 428));
                                            *(unsigned int *)0xC2AE354 = t3194;
                                            t3195 = *(int *)(((int)stk + 416));
                                            *(unsigned int *)0xC2AE35C = t3195;
                                        }
                                    } else {
                                        t3203 = *(int *)(((int)stk + 440));
                                        *(unsigned int *)0xC2AE34C = t3203;
                                        t3204 = *(int *)(((int)stk + 428));
                                        *(unsigned int *)0xC2AE354 = t3204;
                                        t3205 = *(int *)(((int)stk + 416));
                                        *(unsigned int *)0xC2AE35C = t3205;
                                    }
                                } else {
                                    t3213 = (int)((int)t1352 % (int)0x2);
                                    t3214 = *(int *)((((t3213 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t3214;
                                    t3215 = *(int *)((((0x168 + ((int)stk + 8)) + (t3213 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t3215;
                                    t3216 = *(int *)((((t3213 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t3216;
                                }
                            }
                        } else {
                            t3231 = *(int *)0xC1EE214;
                            if (t3231 != 14) {
                                t3232 = *(int *)0xC1EE214;
                                if (t3232 == 11) {
                                    if (t2691 != 3) {
                                        t3233 = *(int *)((a4 + 0x0));
                                        if (t3233 != 23) {
                                            if (t3233 != 27) {
                                                if (t3233 != 29) {
                                                    if (t3233 != 30) {
                                                        if (t3233 != 34) {
                                                            if (t3233 != 39) {
                                                                if (t3233 != 40) {
                                                                    if (t3233 != 43) {
                                                                        if (t3233 != 50) {
                                                                            if (t3233 != 54) {
                                                                                if (t3233 != 56) {
                                                                                    t3234 = (int)((int)t1352 % (int)0x2);
                                                                                    t3235 = *(int *)((((t3234 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE34C = t3235;
                                                                                    t3236 = *(int *)((((0x168 + ((int)stk + 8)) + (t3234 << 2)) + 0x0));
                                                                                    *(unsigned int *)0xC2AE354 = t3236;
                                                                                    t3237 = *(int *)((((t3234 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                    *(unsigned int *)0xC2AE35C = t3237;
                                                                                } else {
                                                                                    t3238 = *(int *)(((int)stk + 440));
                                                                                    *(unsigned int *)0xC2AE34C = t3238;
                                                                                    t3239 = *(int *)(((int)stk + 428));
                                                                                    *(unsigned int *)0xC2AE354 = t3239;
                                                                                    t3240 = *(int *)(((int)stk + 416));
                                                                                    *(unsigned int *)0xC2AE35C = t3240;
                                                                                }
                                                                            } else {
                                                                                t3248 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t3248;
                                                                                t3249 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t3249;
                                                                                t3250 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t3250;
                                                                            }
                                                                        } else {
                                                                            t3258 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t3258;
                                                                            t3259 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t3259;
                                                                            t3260 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t3260;
                                                                        }
                                                                    } else {
                                                                        t3268 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t3268;
                                                                        t3269 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t3269;
                                                                        t3270 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t3270;
                                                                    }
                                                                } else {
                                                                    t3278 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t3278;
                                                                    t3279 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t3279;
                                                                    t3280 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t3280;
                                                                }
                                                            } else {
                                                                t3288 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t3288;
                                                                t3289 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t3289;
                                                                t3290 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t3290;
                                                            }
                                                        } else {
                                                            t3298 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t3298;
                                                            t3299 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t3299;
                                                            t3300 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t3300;
                                                        }
                                                    } else {
                                                        t3308 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t3308;
                                                        t3309 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t3309;
                                                        t3310 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t3310;
                                                    }
                                                } else {
                                                    t3318 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t3318;
                                                    t3319 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t3319;
                                                    t3320 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t3320;
                                                }
                                            } else {
                                                t3328 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t3328;
                                                t3329 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t3329;
                                                t3330 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t3330;
                                            }
                                        } else {
                                            t3338 = *(int *)(((int)stk + 440));
                                            *(unsigned int *)0xC2AE34C = t3338;
                                            t3339 = *(int *)(((int)stk + 428));
                                            *(unsigned int *)0xC2AE354 = t3339;
                                            t3340 = *(int *)(((int)stk + 416));
                                            *(unsigned int *)0xC2AE35C = t3340;
                                        }
                                    } else {
                                        t3348 = (int)((int)t1352 % (int)0x2);
                                        t3349 = *(int *)((((t3348 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t3349;
                                        t3350 = *(int *)((((0x168 + ((int)stk + 8)) + (t3348 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t3350;
                                        t3351 = *(int *)((((t3348 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE35C = t3351;
                                    }
                                } else {
                                    if (t2691 == 3) {
                                        t3359 = *(int *)((a4 + 0x0));
                                        if (t3359 != 24) {
                                            t3389 = 0x0;
                                            if (t3359 != 33) {
                                                t3383 = 0x0;
                                                if (t3359 != 35) {
                                                    t3377 = 0x0;
                                                    if (t3359 != 36) {
                                                        if (t3359 != 42) {
                                                            if (t3359 != 48) {
                                                                t3360 = (int)((int)t1352 % (int)0x2);
                                                                t3363 = t3360;
                                                            } else {
                                                                t3361 = *(int *)(((int)stk + 12));
                                                                t3362 = (int)((int)t1352 % (int)t3361);
                                                                t3363 = t3362;
                                                            }
                                                            t3369 = t3363;
                                                        } else {
                                                            t3367 = *(int *)(((int)stk + 12));
                                                            t3368 = (int)((int)t1352 % (int)t3367);
                                                            t3369 = t3368;
                                                        }
                                                        t3377 = t3369;
                                                    }
                                                    t3383 = t3377;
                                                }
                                                t3389 = t3383;
                                            }
                                            t3397 = t3389;
                                        } else {
                                            t3391 = *(int *)(((int)stk + 12));
                                            t3392 = (int)((int)t1352 % (int)t3391);
                                            t3397 = t3392;
                                        }
                                        t3491 = t3397;
                                    } else {
                                        t3399 = *(int *)((a4 + 0x0));
                                        if (t3399 != 23) {
                                            if (t3399 != 27) {
                                                if (t3399 != 29) {
                                                    t3461 = 0x0;
                                                    if (t3399 != 33) {
                                                        if (t3399 != 34) {
                                                            t3447 = 0x0;
                                                            if (t3399 != 35) {
                                                                t3441 = 0x0;
                                                                if (t3399 != 36) {
                                                                    if (t3399 != 39) {
                                                                        if (t3399 != 40) {
                                                                            if (t3399 != 43) {
                                                                                if (t3399 != 50) {
                                                                                    if (t3399 != 54) {
                                                                                        if (t3399 != 56) {
                                                                                            t3400 = (int)((int)t1352 % (int)0x2);
                                                                                            t3403 = t3400;
                                                                                        } else {
                                                                                            t3401 = *(int *)(((int)stk + 12));
                                                                                            t3402 = (int)((int)t1352 % (int)t3401);
                                                                                            t3403 = t3402;
                                                                                        }
                                                                                        t3409 = t3403;
                                                                                    } else {
                                                                                        t3407 = *(int *)(((int)stk + 12));
                                                                                        t3408 = (int)((int)t1352 % (int)t3407);
                                                                                        t3409 = t3408;
                                                                                    }
                                                                                    t3415 = t3409;
                                                                                } else {
                                                                                    t3413 = *(int *)(((int)stk + 12));
                                                                                    t3414 = (int)((int)t1352 % (int)t3413);
                                                                                    t3415 = t3414;
                                                                                }
                                                                                t3421 = t3415;
                                                                            } else {
                                                                                t3419 = *(int *)(((int)stk + 12));
                                                                                t3420 = (int)((int)t1352 % (int)t3419);
                                                                                t3421 = t3420;
                                                                            }
                                                                            t3427 = t3421;
                                                                        } else {
                                                                            t3425 = *(int *)(((int)stk + 12));
                                                                            t3426 = (int)((int)t1352 % (int)t3425);
                                                                            t3427 = t3426;
                                                                        }
                                                                        t3433 = t3427;
                                                                    } else {
                                                                        t3431 = *(int *)(((int)stk + 12));
                                                                        t3432 = (int)((int)t1352 % (int)t3431);
                                                                        t3433 = t3432;
                                                                    }
                                                                    t3441 = t3433;
                                                                }
                                                                t3447 = t3441;
                                                            }
                                                            t3455 = t3447;
                                                        } else {
                                                            t3449 = *(int *)(((int)stk + 12));
                                                            t3450 = (int)((int)t1352 % (int)t3449);
                                                            t3455 = t3450;
                                                        }
                                                        t3461 = t3455;
                                                    }
                                                    t3469 = t3461;
                                                } else {
                                                    t3463 = *(int *)(((int)stk + 12));
                                                    t3464 = (int)((int)t1352 % (int)t3463);
                                                    t3469 = t3464;
                                                }
                                                t3477 = t3469;
                                            } else {
                                                t3471 = *(int *)(((int)stk + 12));
                                                t3472 = (int)((int)t1352 % (int)t3471);
                                                t3477 = t3472;
                                            }
                                            t3485 = t3477;
                                        } else {
                                            t3479 = *(int *)(((int)stk + 12));
                                            t3480 = (int)((int)t1352 % (int)t3479);
                                            t3485 = t3480;
                                        }
                                        t3491 = t3485;
                                    }
                                    t3493 = *(int *)((((t3491 << 2) + (0x1A8 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t3493;
                                    t3494 = *(int *)((((0x19C + ((int)stk + 8)) + (t3491 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t3494;
                                    t3495 = *(int *)((((t3491 << 2) + (0x190 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t3495;
                                }
                            } else {
                                if (t2691 != 3) {
                                    t3503 = *(int *)((a4 + 0x0));
                                    if (t3503 != 23) {
                                        if (t3503 != 27) {
                                            if (t3503 != 29) {
                                                if (t3503 != 30) {
                                                    if (t3503 != 34) {
                                                        if (t3503 != 39) {
                                                            if (t3503 != 40) {
                                                                if (t3503 != 43) {
                                                                    if (t3503 != 50) {
                                                                        if (t3503 != 54) {
                                                                            if (t3503 != 56) {
                                                                                t3504 = (int)((int)t1352 % (int)0x2);
                                                                                t3505 = *(int *)((((t3504 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)0xC2AE34C = t3505;
                                                                                t3506 = *(int *)((((0x168 + ((int)stk + 8)) + (t3504 << 2)) + 0x0));
                                                                                *(unsigned int *)0xC2AE354 = t3506;
                                                                                t3507 = *(int *)((((t3504 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                                                                *(unsigned int *)0xC2AE35C = t3507;
                                                                            } else {
                                                                                t3508 = *(int *)(((int)stk + 440));
                                                                                *(unsigned int *)0xC2AE34C = t3508;
                                                                                t3509 = *(int *)(((int)stk + 428));
                                                                                *(unsigned int *)0xC2AE354 = t3509;
                                                                                t3510 = *(int *)(((int)stk + 416));
                                                                                *(unsigned int *)0xC2AE35C = t3510;
                                                                            }
                                                                        } else {
                                                                            t3518 = *(int *)(((int)stk + 440));
                                                                            *(unsigned int *)0xC2AE34C = t3518;
                                                                            t3519 = *(int *)(((int)stk + 428));
                                                                            *(unsigned int *)0xC2AE354 = t3519;
                                                                            t3520 = *(int *)(((int)stk + 416));
                                                                            *(unsigned int *)0xC2AE35C = t3520;
                                                                        }
                                                                    } else {
                                                                        t3528 = *(int *)(((int)stk + 440));
                                                                        *(unsigned int *)0xC2AE34C = t3528;
                                                                        t3529 = *(int *)(((int)stk + 428));
                                                                        *(unsigned int *)0xC2AE354 = t3529;
                                                                        t3530 = *(int *)(((int)stk + 416));
                                                                        *(unsigned int *)0xC2AE35C = t3530;
                                                                    }
                                                                } else {
                                                                    t3538 = *(int *)(((int)stk + 440));
                                                                    *(unsigned int *)0xC2AE34C = t3538;
                                                                    t3539 = *(int *)(((int)stk + 428));
                                                                    *(unsigned int *)0xC2AE354 = t3539;
                                                                    t3540 = *(int *)(((int)stk + 416));
                                                                    *(unsigned int *)0xC2AE35C = t3540;
                                                                }
                                                            } else {
                                                                t3548 = *(int *)(((int)stk + 440));
                                                                *(unsigned int *)0xC2AE34C = t3548;
                                                                t3549 = *(int *)(((int)stk + 428));
                                                                *(unsigned int *)0xC2AE354 = t3549;
                                                                t3550 = *(int *)(((int)stk + 416));
                                                                *(unsigned int *)0xC2AE35C = t3550;
                                                            }
                                                        } else {
                                                            t3558 = *(int *)(((int)stk + 440));
                                                            *(unsigned int *)0xC2AE34C = t3558;
                                                            t3559 = *(int *)(((int)stk + 428));
                                                            *(unsigned int *)0xC2AE354 = t3559;
                                                            t3560 = *(int *)(((int)stk + 416));
                                                            *(unsigned int *)0xC2AE35C = t3560;
                                                        }
                                                    } else {
                                                        t3568 = *(int *)(((int)stk + 440));
                                                        *(unsigned int *)0xC2AE34C = t3568;
                                                        t3569 = *(int *)(((int)stk + 428));
                                                        *(unsigned int *)0xC2AE354 = t3569;
                                                        t3570 = *(int *)(((int)stk + 416));
                                                        *(unsigned int *)0xC2AE35C = t3570;
                                                    }
                                                } else {
                                                    t3578 = *(int *)(((int)stk + 440));
                                                    *(unsigned int *)0xC2AE34C = t3578;
                                                    t3579 = *(int *)(((int)stk + 428));
                                                    *(unsigned int *)0xC2AE354 = t3579;
                                                    t3580 = *(int *)(((int)stk + 416));
                                                    *(unsigned int *)0xC2AE35C = t3580;
                                                }
                                            } else {
                                                t3588 = *(int *)(((int)stk + 440));
                                                *(unsigned int *)0xC2AE34C = t3588;
                                                t3589 = *(int *)(((int)stk + 428));
                                                *(unsigned int *)0xC2AE354 = t3589;
                                                t3590 = *(int *)(((int)stk + 416));
                                                *(unsigned int *)0xC2AE35C = t3590;
                                            }
                                        } else {
                                            t3598 = *(int *)(((int)stk + 440));
                                            *(unsigned int *)0xC2AE34C = t3598;
                                            t3599 = *(int *)(((int)stk + 428));
                                            *(unsigned int *)0xC2AE354 = t3599;
                                            t3600 = *(int *)(((int)stk + 416));
                                            *(unsigned int *)0xC2AE35C = t3600;
                                        }
                                    } else {
                                        t3608 = *(int *)(((int)stk + 440));
                                        *(unsigned int *)0xC2AE34C = t3608;
                                        t3609 = *(int *)(((int)stk + 428));
                                        *(unsigned int *)0xC2AE354 = t3609;
                                        t3610 = *(int *)(((int)stk + 416));
                                        *(unsigned int *)0xC2AE35C = t3610;
                                    }
                                } else {
                                    t3618 = (int)((int)t1352 % (int)0x2);
                                    t3619 = *(int *)((((t3618 << 2) + (0x170 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t3619;
                                    t3620 = *(int *)((((0x168 + ((int)stk + 8)) + (t3618 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t3620;
                                    t3621 = *(int *)((((t3618 << 2) + (0x160 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t3621;
                                }
                            }
                        }
                    }
                } else {
                    t3650 = *(int *)0xC2AE348;
                    if (t3650 == 0xC96DE8C) {
                        t3651 = *(int *)((a4 + 0x0));
                        if (t3651 == 52) {
                            *(unsigned int *)0xC2AE34C = 0xC9B1170;
                            *(unsigned int *)0xC2AE354 = 0xC0D5998;
                            *(unsigned int *)0xC2AE35C = 0xC0D5998;
                        } else {
                            t3652 = (int)((int)t1352 % (int)0x2);
                            t3653 = *(int *)((((t3652 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                            *(unsigned int *)0xC2AE34C = t3653;
                            t3654 = *(int *)((((0x180 + ((int)stk + 8)) + (t3652 << 2)) + 0x0));
                            *(unsigned int *)0xC2AE354 = t3654;
                            t3655 = *(int *)(((0x178 + ((int)stk + 8)) + (t3652 << 2)));
                            *(unsigned int *)0xC2AE35C = t3655;
                        }
                    } else {
                        t3663 = *(int *)0xC1EE210;
                        if (t3663 == 2) {
                            t3664 = *(int *)0xC1EE214;
                            if (t3664 != 10) {
                                t3665 = *(int *)0xC1EE214;
                                if (t3665 == 11) {
                                    t3666 = *(int *)0xC1EE214;
                                    if (t3666 == 11) {
                                        t3667 = *(int *)0xC179488;
                                        if ((int)t3667 < (int)0x4) {
                                            t3668 = *(int *)(((int)stk + 476));
                                            *(unsigned int *)0xC2AE34C = t3668;
                                            t3669 = *(int *)(((int)stk + 464));
                                            *(unsigned int *)0xC2AE354 = t3669;
                                            t3670 = *(int *)(((int)stk + 452));
                                            *(unsigned int *)0xC2AE35C = t3670;
                                        } else {
                                            t3671 = (int)((int)t1352 % (int)0x2);
                                            t3672 = *(int *)((((t3671 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                            *(unsigned int *)0xC2AE34C = t3672;
                                            t3673 = *(int *)((((0x180 + ((int)stk + 8)) + (t3671 << 2)) + 0x0));
                                            *(unsigned int *)0xC2AE354 = t3673;
                                            t3674 = *(int *)(((0x178 + ((int)stk + 8)) + (t3671 << 2)));
                                            *(unsigned int *)0xC2AE35C = t3674;
                                        }
                                    } else {
                                        t3682 = (int)((int)t1352 % (int)0x2);
                                        t3683 = *(int *)((((t3682 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t3683;
                                        t3684 = *(int *)((((0x180 + ((int)stk + 8)) + (t3682 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t3684;
                                        t3685 = *(int *)(((0x178 + ((int)stk + 8)) + (t3682 << 2)));
                                        *(unsigned int *)0xC2AE35C = t3685;
                                    }
                                } else {
                                    t3693 = *(int *)((a4 + 0x0));
                                    t3713 = 0x2;
                                    if (t3693 != 30) {
                                        t3708 = 0x0;
                                        if (t3693 != 33) {
                                            t3703 = 0x0;
                                            if (t3693 != 35) {
                                                t3698 = 0x0;
                                                if (t3693 != 36) {
                                                    t3694 = (int)((int)t1352 % (int)0x2);
                                                    t3698 = t3694;
                                                }
                                                t3703 = t3698;
                                            }
                                            t3708 = t3703;
                                        }
                                        t3713 = t3708;
                                    }
                                    t3715 = *(int *)((((t3713 << 2) + (0x1CC + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t3715;
                                    t3716 = *(int *)((((0x1C0 + ((int)stk + 8)) + (t3713 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t3716;
                                    t3717 = *(int *)((((t3713 << 2) + (0x1B4 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE35C = t3717;
                                }
                            } else {
                                t3725 = *(int *)0xC1EE214;
                                if (t3725 == 11) {
                                    t3726 = *(int *)0xC179488;
                                    if ((int)t3726 < (int)0x4) {
                                        t3727 = *(int *)(((int)stk + 476));
                                        *(unsigned int *)0xC2AE34C = t3727;
                                        t3728 = *(int *)(((int)stk + 464));
                                        *(unsigned int *)0xC2AE354 = t3728;
                                        t3729 = *(int *)(((int)stk + 452));
                                        *(unsigned int *)0xC2AE35C = t3729;
                                    } else {
                                        t3730 = (int)((int)t1352 % (int)0x2);
                                        t3731 = *(int *)((((t3730 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t3731;
                                        t3732 = *(int *)((((0x180 + ((int)stk + 8)) + (t3730 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t3732;
                                        t3733 = *(int *)(((0x178 + ((int)stk + 8)) + (t3730 << 2)));
                                        *(unsigned int *)0xC2AE35C = t3733;
                                    }
                                } else {
                                    t3741 = (int)((int)t1352 % (int)0x2);
                                    t3742 = *(int *)((((t3741 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t3742;
                                    t3743 = *(int *)((((0x180 + ((int)stk + 8)) + (t3741 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t3743;
                                    t3744 = *(int *)(((0x178 + ((int)stk + 8)) + (t3741 << 2)));
                                    *(unsigned int *)0xC2AE35C = t3744;
                                }
                            }
                        } else {
                            t3759 = *(int *)0xC1EE214;
                            if (t3759 == 11) {
                                t3760 = *(int *)0xC1EE214;
                                if (t3760 == 11) {
                                    t3761 = *(int *)0xC179488;
                                    if ((int)t3761 < (int)0x4) {
                                        t3762 = *(int *)(((int)stk + 476));
                                        *(unsigned int *)0xC2AE34C = t3762;
                                        t3763 = *(int *)(((int)stk + 464));
                                        *(unsigned int *)0xC2AE354 = t3763;
                                        t3764 = *(int *)(((int)stk + 452));
                                        *(unsigned int *)0xC2AE35C = t3764;
                                    } else {
                                        t3765 = (int)((int)t1352 % (int)0x2);
                                        t3766 = *(int *)((((t3765 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                        *(unsigned int *)0xC2AE34C = t3766;
                                        t3767 = *(int *)((((0x180 + ((int)stk + 8)) + (t3765 << 2)) + 0x0));
                                        *(unsigned int *)0xC2AE354 = t3767;
                                        t3768 = *(int *)(((0x178 + ((int)stk + 8)) + (t3765 << 2)));
                                        *(unsigned int *)0xC2AE35C = t3768;
                                    }
                                } else {
                                    t3776 = (int)((int)t1352 % (int)0x2);
                                    t3777 = *(int *)((((t3776 << 2) + (0x188 + ((int)stk + 8))) + 0x0));
                                    *(unsigned int *)0xC2AE34C = t3777;
                                    t3778 = *(int *)((((0x180 + ((int)stk + 8)) + (t3776 << 2)) + 0x0));
                                    *(unsigned int *)0xC2AE354 = t3778;
                                    t3779 = *(int *)(((0x178 + ((int)stk + 8)) + (t3776 << 2)));
                                    *(unsigned int *)0xC2AE35C = t3779;
                                }
                            } else {
                                t3787 = *(int *)((a4 + 0x0));
                                t3807 = 0x2;
                                if (t3787 != 30) {
                                    t3802 = 0x0;
                                    if (t3787 != 33) {
                                        t3797 = 0x0;
                                        if (t3787 != 35) {
                                            t3792 = 0x0;
                                            if (t3787 != 36) {
                                                t3788 = (int)((int)t1352 % (int)0x2);
                                                t3792 = t3788;
                                            }
                                            t3797 = t3792;
                                        }
                                        t3802 = t3797;
                                    }
                                    t3807 = t3802;
                                }
                                t3809 = *(int *)((((t3807 << 2) + (0x1CC + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE34C = t3809;
                                t3810 = *(int *)((((0x1C0 + ((int)stk + 8)) + (t3807 << 2)) + 0x0));
                                *(unsigned int *)0xC2AE354 = t3810;
                                t3811 = *(int *)((((t3807 << 2) + (0x1B4 + ((int)stk + 8))) + 0x0));
                                *(unsigned int *)0xC2AE35C = t3811;
                            }
                        }
                    }
                }
            }
        }
        *(float *)((a4 + 0x114)) = 0.0f;
        t3854 = *(int *)((a4 + 0x118));
        u3855 = *(float *)((a4 + 0x114));
        t3856 = *(int *)((a4 + 0x110));
        FcvStoreBuffer(t3856, t3854, u3855);
        t3858 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t3858 | 0x80);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 15.0f;
        t3859 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t3859 & 0xF9);
        t3860 = *(int *)0xC2AE350;
        *(unsigned int *)((a4 + 0x124)) = t3860;
        t3861 = *(int *)0xC2AE358;
        *(unsigned int *)((a4 + 0x128)) = t3861;
        t3862 = *(int *)0xC2AE348;
        t3863 = *(int *)((t3862 + 0x0));
        *(float *)((a4 + 0x120)) = (float)t3863;
        t3864 = *(int *)0xC2AE348;
        if (t3864 != 0xC956FCC) {
            if (t3864 != 0xC95A230) {
                if (t3864 != 0xC95D7C4) {
                    if (t3864 != 0xC960308) {
                        if (t3864 != 0xC962F0C) {
                            if (t3864 != 0xC9659C0) {
                                if (t3864 != 0xC9684A4) {
                                    if (t3864 != 0xC96B138) {
                                        t3865 = *(int *)0xC2AE34C;
                                        if (t3865 != 0xC9BBD68) {
                                            if (t3865 == 0xC9BE3CC) {
                                                t3866 = *(int *)0xC9C0A30;
                                                t3871 = t3866;
                                            } else {
                                                t3867 = *(int *)0xC2AE34C;
                                                t3868 = *(int *)((t3867 + 0x0));
                                                t3871 = t3868;
                                            }
                                            t3877 = t3871;
                                        } else {
                                            t3873 = *(int *)0xC9C0A30;
                                            t3877 = t3873;
                                        }
                                        u3879 = *(float *)((a4 + 0x120));
                                        *(float *)((a4 + 0x120)) = (u3879 + (float)t3877);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        t3952 = *(int *)(((0x148 + a4) + 0x0));
        t3953 = (int)(((unsigned int)t3952 >> 21) & 0x3);
        u3954 = *(float *)(((0x120 + a4) + 0x0));
        u3955 = *(float *)(((((int)stk + 4) + 0x20) + (t3953 << 2)));
        *(float *)(((0x120 + a4) + 0x0)) = (u3954 / u3955);
        t3956 = Chat_Getoff();
        t3957 = t3956;
    }
    return t3957;
}

int Put_Here_We_Go(int a4)
{
    int t0;
    int t1;
    int t4;
    int t3;
    int t10;
    float u13;
    float u16;
    float u18;
    float u20;
    float u21;
    float u23;
    float u25;
    float u26;
    float u27;
    float u30;
    float u31;
    float u32;
    float u34;
    int t36;
    int t37;
    float u38;
    float u39;
    float u41;
    float u42;
    float u43;
    float u49;
    float u50;
    int t52;
    int t53;
    float u54;
    float u55;
    float u57;
    float u58;
    float u59;
    float u65;
    float u66;
    float u68;
    float u69;
    float u71;
    float u73;
    float u74;
    float u75;
    float u78;
    float u79;
    float u80;
    float u82;
    int t84;
    int t85;
    float u86;
    float u87;
    float u89;
    float u90;
    float u91;
    float u97;
    float u98;
    int t100;
    int t101;
    float u102;
    float u103;
    float u105;
    float u106;
    float u107;
    float u113;
    float u114;

    if ((int)a4 > 0) {
        if ((int)a4 <= (int)0x150) {
            t0 = *(int *)0xC2A8C94;
            *(unsigned int *)0xC2A8C94 = (t0 + 0x1);
            *(unsigned int *)0xC2A7F10 = 0x200A;
            t1 = *(int *)0xC2A8C94;
            t4 = t1;
            if (t1 == 1) {
                Voice_ShutUp(0x0);
                t3 = Voice_Request(0xC130B18, 0x0, 0x7F, 0x0);
                t4 = t3;
            }
            t10 = *(int *)0xC2A8C94;
            if ((int)t10 > (int)0xDD) {
                if ((int)t10 <= (int)0xF1) {
                    nlObjPutSetFadeColor(1.0f, 0.643137217f, 0.160784304f);
                    HomingPosX(0xC2A8C98, 0.199999988f, 0.0f);
                    u13 = *(float *)0xC2A8C98;
                    if (!(-6.0f > u13)) {
                        *(float *)0xC2A7F08 = 1.0f;
                    } else {
                        *(float *)0xC2A7F08 = 0.5f;
                    }
                    *(unsigned int *)0xC2A7F04 = 0x0;
                    u16 = *(float *)0xC2A8C98;
                    nd_SprPut(0xC2A7EDC, 0x19A, (u16 + 320.0f), 240.0f);
                    u18 = *(float *)0xC2A8C98;
                    nd_SprPut(0xC2A7EDC, 0x19A, (320.0f - u18), 240.0f);
                    return ResetFadeColor();
                }
                if ((int)t10 > (int)0xF3) {
                    if ((int)t10 <= (int)0x107) {
                        u20 = *(float *)0xC053AE8;
                        u21 = *(float *)0xC053AEC;
                        nlObjPutSetFadeColor(1.0f, u21, u20);
                        u23 = *(float *)0xC053AF8;
                        HomingPosX(0xC2A8C9C, u23, 0.0f);
                        *(unsigned int *)0xC2A7F04 = 0x0;
                        u25 = *(float *)0xC2A8C9C;
                        u26 = *(float *)0xC053B04;
                        if (!(u26 > u25)) {
                            *(float *)0xC2A7F08 = 1.0f;
                        } else {
                            u27 = *(float *)0xC053B08;
                            *(float *)0xC2A7F08 = u27;
                        }
                        u30 = *(float *)0xC053B0C;
                        u31 = *(float *)0xC053B10;
                        u32 = *(float *)0xC2A8C9C;
                        nd_SprPut(0xC2A7EDC, 0x19B, (u32 + u30), u31);
                        u34 = *(float *)0xC2A8C9C;
                        nd_SprPut(0xC2A7EDC, 0x19B, (u30 - u34), u31);
                        return ResetFadeColor();
                    }
                    if ((int)t10 >= (int)0x10A) {
                        if ((int)t10 <= (int)0x146) {
                            t36 = *(int *)0xC2A8CA4;
                            t37 = (int)((int)(t36 + 0x1) % (int)0x1E);
                            *(unsigned int *)0xC2A8CA4 = t37;
                            u38 = *(float *)0xC053B24;
                            u39 = *(float *)0xC053B28;
                            nlObjPutSetFadeColor(u39, u38, 0.0f);
                            u41 = *(float *)0xC2A7EEC;
                            *(float *)0xC2A7EEC = (u41 + 0.099999994f);
                            *(float *)0xC2A7EF0 = (u41 + 0.099999994f);
                            *(unsigned int *)0xC2A7F04 = 0x0;
                            u42 = *(float *)0xC2A7F08;
                            if (u42 > 0.0f) {
                                u43 = *(float *)0xC2A7F08;
                                *(float *)0xC2A7F08 = (u43 - 0.0199999996f);
                            }
                            u49 = *(float *)0xC053B10;
                            u50 = *(float *)0xC2A8CA0;
                            nd_SprPut(0xC2A7EDC, 0x63, u50, u49);
                            return ResetFadeColor();
                        }
                        return t4;
                    }
                    return t4;
                }
                if ((int)t10 >= (int)0x10A) {
                    if ((int)t10 <= (int)0x146) {
                        t52 = *(int *)0xC2A8CA4;
                        t53 = (int)((int)(t52 + 0x1) % (int)0x1E);
                        *(unsigned int *)0xC2A8CA4 = t53;
                        u54 = *(float *)0xC053B24;
                        u55 = *(float *)0xC053B28;
                        nlObjPutSetFadeColor(u55, u54, 0.0f);
                        u57 = *(float *)0xC2A7EEC;
                        *(float *)0xC2A7EEC = (u57 + 0.099999994f);
                        *(float *)0xC2A7EF0 = (u57 + 0.099999994f);
                        *(unsigned int *)0xC2A7F04 = 0x0;
                        u58 = *(float *)0xC2A7F08;
                        if (u58 > 0.0f) {
                            u59 = *(float *)0xC2A7F08;
                            *(float *)0xC2A7F08 = (u59 - 0.0199999996f);
                        }
                        u65 = *(float *)0xC053B10;
                        u66 = *(float *)0xC2A8CA0;
                        nd_SprPut(0xC2A7EDC, 0x63, u66, u65);
                        return ResetFadeColor();
                    }
                    return t4;
                }
                return t4;
            }
            if ((int)t10 > (int)0xF3) {
                if ((int)t10 <= (int)0x107) {
                    u68 = *(float *)0xC053AE8;
                    u69 = *(float *)0xC053AEC;
                    nlObjPutSetFadeColor(1.0f, u69, u68);
                    u71 = *(float *)0xC053AF8;
                    HomingPosX(0xC2A8C9C, u71, 0.0f);
                    *(unsigned int *)0xC2A7F04 = 0x0;
                    u73 = *(float *)0xC2A8C9C;
                    u74 = *(float *)0xC053B04;
                    if (!(u74 > u73)) {
                        *(float *)0xC2A7F08 = 1.0f;
                    } else {
                        u75 = *(float *)0xC053B08;
                        *(float *)0xC2A7F08 = u75;
                    }
                    u78 = *(float *)0xC053B0C;
                    u79 = *(float *)0xC053B10;
                    u80 = *(float *)0xC2A8C9C;
                    nd_SprPut(0xC2A7EDC, 0x19B, (u80 + u78), u79);
                    u82 = *(float *)0xC2A8C9C;
                    nd_SprPut(0xC2A7EDC, 0x19B, (u78 - u82), u79);
                    return ResetFadeColor();
                }
                if ((int)t10 >= (int)0x10A) {
                    if ((int)t10 <= (int)0x146) {
                        t84 = *(int *)0xC2A8CA4;
                        t85 = (int)((int)(t84 + 0x1) % (int)0x1E);
                        *(unsigned int *)0xC2A8CA4 = t85;
                        u86 = *(float *)0xC053B24;
                        u87 = *(float *)0xC053B28;
                        nlObjPutSetFadeColor(u87, u86, 0.0f);
                        u89 = *(float *)0xC2A7EEC;
                        *(float *)0xC2A7EEC = (u89 + 0.099999994f);
                        *(float *)0xC2A7EF0 = (u89 + 0.099999994f);
                        *(unsigned int *)0xC2A7F04 = 0x0;
                        u90 = *(float *)0xC2A7F08;
                        if (u90 > 0.0f) {
                            u91 = *(float *)0xC2A7F08;
                            *(float *)0xC2A7F08 = (u91 - 0.0199999996f);
                        }
                        u97 = *(float *)0xC053B10;
                        u98 = *(float *)0xC2A8CA0;
                        nd_SprPut(0xC2A7EDC, 0x63, u98, u97);
                        return ResetFadeColor();
                    }
                    return t4;
                }
                return t4;
            }
            if ((int)t10 >= (int)0x10A) {
                if ((int)t10 <= (int)0x146) {
                    t100 = *(int *)0xC2A8CA4;
                    t101 = (int)((int)(t100 + 0x1) % (int)0x1E);
                    *(unsigned int *)0xC2A8CA4 = t101;
                    u102 = *(float *)0xC053B24;
                    u103 = *(float *)0xC053B28;
                    nlObjPutSetFadeColor(u103, u102, 0.0f);
                    u105 = *(float *)0xC2A7EEC;
                    *(float *)0xC2A7EEC = (u105 + 0.099999994f);
                    *(float *)0xC2A7EF0 = (u105 + 0.099999994f);
                    *(unsigned int *)0xC2A7F04 = 0x0;
                    u106 = *(float *)0xC2A7F08;
                    if (u106 > 0.0f) {
                        u107 = *(float *)0xC2A7F08;
                        *(float *)0xC2A7F08 = (u107 - 0.0199999996f);
                    }
                    u113 = *(float *)0xC053B10;
                    u114 = *(float *)0xC2A8CA0;
                    nd_SprPut(0xC2A7EDC, 0x63, u114, u113);
                    return ResetFadeColor();
                }
                return t4;
            }
            return t4;
        }
        return 0;
    }
    return 0;
}

