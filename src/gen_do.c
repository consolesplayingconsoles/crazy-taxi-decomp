/* Straight-line functions with calls and guards (batch gen_do): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Init(void);
int BupInit(void);
int Init_EEPROM(void);
int InitBookkeep(void);
int InitNaolib2(void);
int InitNaolib3(void);
int InitNaolib(void);
int car_texload(void);
int padInitAnalog(void);
int game_init(void);
int gdc_StreamInit(void);
int gdc_CourseObjTexLoad(int);
int gdc_CourseObjGroupSet(void);
int gdc_CourseTexLoad(void);
int gdc_CourseTexFree(void);
int gdc_FileLoadStop(void);
int gdc_FileLoadSetup(void);
int gdc_SpriteSetInit(void);
int SetLight(int, int);
int SetLightAmbience(float);
int PatchPolygon(void);
int InitProportionalText(int);
int InitMV(void);
int InitRenderTexture2nd(int);
int CfgInit(void);
int InitMenu(void);
int pcarTurnSelect(int);
int pcarLaneChange(int);
int calcCurvePoint(int, int, int, int, int, float, float, float, float);
int getNearLinkedLine(int, int, int, int, int, float, float, float, float);
int CourseTableSet(int);
int Init_Adv_Sprite(void);
int Init_LCD(void);
int Voice_Init(void);
int FUN_0c074300(int);
int FUN_0c074970(int);
int FUN_0c077210(int, int);
int FUN_0c07eb10(int, int);
int nlsndPackLoad(int, int);
int FUN_0c07f0b0(void);
int FUN_0c07f5c0(void);
int FUN_0c07f870(int, int, int);
int FUN_0c0813d0(int);
int FUN_0c1519be(void);
int PAL_SettingLoop(void);
int Init_Fog(void);
int Sound_Init(void);
int Sound_Request(int, int);
extern void _builtin_set_imask(int);
int courseStatusGet(int, int, int, int);
int frameFlip(void);
int fsInit(void);
int gdFsEntryErrFuncAll(void);
int gdc_CourseSet(int);
int gdc_FileLoad(int, int, int);
int getCoursePointMove(int, int, int);
int getNearLineIndex(int, int, int, int, int, float, float, float, float);
int getSteering(int);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetVertexBasePointer(int, int, int, int);
int kmiSetTAEnvironment(int, ...);
int kmiTAallocEx(int, int, int);
int nd_Exec_Puru2(int);
int nd_Init_Puru2(void);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlLoadDummyTexture(void);
int nlLocate(int, int);
int nlObjPutLoadTextureCallBack(int);
int nlObjPutMLPreCalcLightRestore(void);
int nlPopMatrix(int);
int nlPrintf(void);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int, float, float);
int nlScaleUnitVector(int, int, float);
int nlSetCommonTextureOffset(int);
int nlSetFontSize(int, int);
int nlSetIntrFunction(int);
int nlSubVector(int, int);
int nlUnitVector(int);
int pdInitPeripheral(int, int, int);
int syCblCheck(void);
int syHwInit(void);
int syHwInit2(void);
int syRtcInit(void);
int sysCfgRead(void);
int thunk_njSetConstantAttr(void);
int loadCity(int a4, int a5);
int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8);
int InitSys(void);
float pcarDrive(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

int loadCity(int a4, int a5)
{
    int t10;
    int t33;
    int t34;
    int t60;
    int t61;

    if (a5 != -1) {
        gdc_FileLoadStop();
    }
    nlSetCommonTextureOffset(0x7D0);
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 == 2) {
                FUN_0c07f0b0();
                FUN_0c07f0b0();
                gdc_FileLoad(0xCB40000, 0xC08D564, 0x0);
                nlsndPackLoad(0xCB40000, 0x4);
                t10 = *(int *)0xC179488;
                if ((int)t10 < (int)0x4) {
                    gdc_FileLoad(0xCB40000, 0xC08D4C8, 0x0);
                } else {
                    gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
                }
                nlsndPackLoad(0xCB40000, 0x5);
                gdc_FileLoad(0xCB40000, 0xC08D570, 0x0);
                gdc_FileLoad(0xC5E0000, 0xC08D57C, 0x0);
                if (a5 != -1) {
                    gdc_CourseTexFree();
                }
                gdc_CourseSet(a4);
                gdc_CourseTexLoad();
                gdc_CourseObjTexLoad(0xC0EA590);
                gdc_FileLoad(0xCB40000, 0xC08D588, 0x0);
                gdc_FileLoad(0xCE90000, 0xC08D594, 0x8000);
                gdc_FileLoad(0xC328000, 0xC08D5A0, 0x0);
            }
        } else {
            FUN_0c07f0b0();
            FUN_0c07f0b0();
            gdc_FileLoad(0xCB40000, 0xC08D51C, 0x0);
            nlsndPackLoad(0xCB40000, 0x4);
            t33 = *(int *)0xC1EE210;
            if (t33 == 2) {
                t34 = *(int *)0xC179488;
                if ((int)t34 < (int)0x4) {
                    gdc_FileLoad(0xCB40000, 0xC08D4C8, 0x0);
                } else {
                    gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
                }
            } else {
                gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
            }
            nlsndPackLoad(0xCB40000, 0x5);
            gdc_FileLoad(0xCB40000, 0xC08D528, 0x0);
            gdc_FileLoad(0xC5E0000, 0xC08D534, 0x0);
            if (a5 != -1) {
                gdc_CourseTexFree();
            }
            gdc_CourseSet(a4);
            gdc_CourseTexLoad();
            gdc_CourseObjTexLoad(0xC0EA478);
            gdc_FileLoad(0xCB40000, 0xC08D540, 0x0);
            gdc_FileLoad(0xCE90000, 0xC08D54C, 0x8000);
            gdc_FileLoad(0xC328000, 0xC08D558, 0x0);
        }
    } else {
        FUN_0c07f0b0();
        FUN_0c07f0b0();
        gdc_FileLoad(0xCB40000, 0xC08D4BC, 0x0);
        nlsndPackLoad(0xCB40000, 0x4);
        t60 = *(int *)0xC1EE210;
        if (t60 == 2) {
            t61 = *(int *)0xC179488;
            if ((int)t61 < (int)0x4) {
                gdc_FileLoad(0xCB40000, 0xC08D4C8, 0x0);
            } else {
                gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
            }
        } else {
            gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
        }
        nlsndPackLoad(0xCB40000, 0x5);
        gdc_FileLoad(0xCB40000, 0xC08D4E0, 0x0);
        gdc_FileLoad(0xC5E0000, 0xC08D4EC, 0x0);
        if (a5 != -1) {
            gdc_CourseTexFree();
        }
        gdc_CourseSet(a4);
        gdc_CourseTexLoad();
        gdc_CourseObjTexLoad(0xC0EA3E8);
        gdc_FileLoad(0xCB40000, 0xC08D4F8, 0x0);
        gdc_FileLoad(0xCE90000, 0xC08D504, 0x8000);
        gdc_FileLoad(0xC328000, 0xC08D510, 0x0);
    }
    nlSetCommonTextureOffset(0x5DC);
    gdc_CourseObjGroupSet();
    return gdc_FileLoadSetup();
}

int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t21;
    int t11;
    int t12;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t37;
    int t36;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
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
    int t56;
    int t57;
    int t59;
    int t60;
    int t61;
    int t62;
    int t113;
    int t63;
    int t64;
    int t66;
    int t68;
    int t69;
    int t70;
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
    int t96;
    int t97;
    int t101;
    int t102;
    int t103;
    int t104;
    int t122;
    int t55;
    int t98;
    int t99;
    int t100;
    int stk[24] = {0};

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t0 = *(int *)0xC174C74;
    t1 = *(int *)0xC174C70;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = t1;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t2 = *(int *)0xC174C78;
    t3 = *(int *)0xC174C7C;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    *(unsigned int *)0xC2B8C94 = 0x1;
    t4 = *(int *)0xC2EA684;
    t5 = a5;
    if ((t4 & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    *(unsigned int *)0xC2B8C40 = a4;
    *(unsigned int *)0xC2B8C44 = t5;
    t7 = *(int *)(((int)stk + 16));
    *(unsigned int *)0xC2B8C48 = t7;
    t8 = *(int *)(((int)stk + 20));
    *(unsigned int *)0xC2B8C4C = t8;
    *(unsigned int *)0xC2B8C50 = a8;
    t9 = *(int *)0xC177A84;
    if (t9 != 0x80000000) {
        t10 = *(int *)0xC177A84;
        *(unsigned int *)0xC177A84 = (t10 | 0x100);
        t21 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            *(unsigned int *)0xC177A84 = 0x80000000;
            t11 = *(int *)0xC2B8C94;
            t12 = kmiAllocSysConfig(t11);
            t21 = t12;
        }
        t122 = t21;
    } else {
        t23 = *(int *)(((int)stk + 16));
        t24 = *(int *)(((int)stk + 20));
        t25 = kmiChkActiveListType(t5, t23, t24, a8, 0x0);
        *(unsigned int *)(((int)stk + 24)) = t25;
        t26 = *(int *)0xC2EAAE8;
        *(unsigned int *)((a4 + 0x10)) = t26;
        *(unsigned int *)0xC177A88 = 0x0;
        t27 = 0xC2B8D28;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC2B8D38) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        t28 = *(int *)(((int)stk + 16));
        t29 = *(int *)(((int)stk + 20));
        t30 = kmiGetPackOBPParam(t5, t28, t29, a8, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 28)) = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = *(int *)(((int)stk + 20));
        t33 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        t34 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = t34;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0xC)) = a8;
        t35 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
        t37 = t35;
        if (t35 != 0) {
            t36 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = (t36 - 16);
            t37 = (t36 - 16);
        }
        t39 = t37;
        t40 = ((((int)stk + 16) + 0x20) + 0x4);
        t41 = ((((int)stk + 16) + 0x20) + 0x4);
        for (;;) {
            if ((unsigned int)t40 >= (unsigned int)((((int)stk + 16) + 0x20) + 0x10)) {
                break;
            }
            t42 = *(int *)((t40 + 0x0));
            t39 = t42;
            if (t39 != 0) {
                t43 = *(int *)((t41 + 0x0));
                t39 = t43;
                t39 = (t39 - 16);
                *(unsigned int *)((t41 + 0x0)) = t39;
            }
            t40 = (t40 + 0x4);
            t41 = (t41 + 0x4);
        }
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x20);
        t45 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
        *(unsigned int *)0xC2B8C44 = t45;
        t46 = *(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0));
        *(unsigned int *)0xC2B8C48 = t46;
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x20) + 0x8);
        t47 = *(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0));
        *(unsigned int *)0xC2B8C4C = t47;
        t48 = *(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0));
        *(unsigned int *)0xC2B8C50 = t48;
        t49 = *(int *)(((int)stk + 16));
        t50 = *(int *)((t49 + 0x0));
        *(unsigned int *)(((int)stk + 16)) = t50;
        t51 = *(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0));
        *(unsigned int *)(((int)stk + 20)) = t51;
        t52 = *(int *)(((int)stk + 24));
        t53 = *(int *)((t52 + 0x0));
        *(unsigned int *)(((int)stk + 24)) = t53;
        t54 = *(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0));
        t55 = t54;
        t56 = *(int *)0xC2EA9C4;
        t57 = 0x2;
        if (t56 == 1) {
            t57 = 0x1;
        }
        t59 = *(int *)(((int)stk + 20));
        t60 = *(int *)(((int)stk + 24));
        t61 = *(int *)(((int)stk + 16));
        t62 = kmiGetVertexBasePointer(t61, t59, t60, t55);
        t113 = t62;
        if (t62 == 0) {
            t63 = *(int *)0xC2B8C64;
            t64 = *(int *)0xC2B8C58;
            kmiGetDisplayData(0xFF, t64, t63);
            t66 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t66 = 0x10000;
            }
            t68 = *(int *)0xC2B8CA4;
            *(unsigned int *)0xC2B8C98 = ((t66 << 2) + t68);
            t69 = *(int *)0xC2B8CA0;
            t70 = *(int *)0xC2B8C98;
            if ((unsigned int)t70 > (unsigned int)((-t69) + 0x200000)) {
                *(unsigned int *)0xC2B8C98 = ((-t69) + 0x200000);
            }
            t72 = *(int *)0xC2B8C98;
            t73 = kmiTAallocEx(t72, 0xC2B8D20, 0xC2B8D24);
            if (t73 == 0) {
                t74 = *(int *)0xC2B8C98;
                *(unsigned int *)0xC2EAAD8 = t74;
                t75 = *(int *)0xC2B8C58;
                t76 = *(int *)(((int)stk + 28));
                t77 = *(int *)0xC2EA6F8;
                t78 = *(int *)0xC2EA6F4;
                t79 = *(int *)0xC2EA6F0;
                t80 = *(int *)0xC2EA6EC;
                t81 = kmiSetTAEnvironment(((~t75) & t76), 0x0);
                t82 = *(int *)0xC2B8CCC;
                *(unsigned int *)0xC2B8CF4 = t82;
                t83 = *(int *)0xC2B8CD0;
                *(unsigned int *)0xC2B8CF8 = t83;
                t84 = *(int *)0xC2B8CD4;
                *(unsigned int *)0xC2B8CFC = t84;
                t85 = *(int *)0xC2B8CD8;
                *(unsigned int *)0xC2B8D00 = t85;
                t86 = t81;
                t87 = t84;
                t88 = 0x0;
                for (;;) {
                    if ((unsigned int)t88 >= (unsigned int)0x10) {
                        break;
                    }
                    t86 = t88;
                    t89 = *(int *)((0xC2B8CF4 + t86));
                    t87 = t89;
                    t88 = (t88 + 0x4);
                    *(unsigned int *)((0xC2B8D08 + t86)) = t87;
                }
                *(unsigned int *)0xC2B8CA8 = 0x0;
                *(unsigned int *)0xC2B8CAC = 0x0;
                *(unsigned int *)0xC2B8CB0 = 0x0;
                *(unsigned int *)0xC2B8CB4 = 0x0;
                *(unsigned int *)0xC2B8CB8 = 0xC2B8CCC;
                *(unsigned int *)0xC2B8CBC = 0xC2B8CF4;
                if ((unsigned int)0x0 < (unsigned int)t57) {
                    t90 = 0xC2B8CCC;
                    t91 = 0xC2B8CC4;
                    t92 = 0x0;
                    for (;;) {
                        t92 = (t92 + 0x1);
                        *(unsigned int *)((t91 + 0x0)) = t90;
                        t90 = (t90 + 0x14);
                        t91 = (t91 + 0x4);
                        if ((unsigned int)t92 >= (unsigned int)t57) {
                            break;
                        }
                    }
                }
                t96 = kmiCopyDummyGlobalData(t57);
                t97 = t96;
                t101 = 0x0;
                for (;;) {
                    if ((unsigned int)t101 >= (unsigned int)0x10) {
                        break;
                    }
                    t97 = 0xC2B8D28;
                    t102 = *(int *)0xC2B8CBC;
                    t99 = t102;
                    t103 = *(int *)((t101 + t97));
                    t100 = t103;
                    t99 = (t99 + t101);
                    t104 = *(int *)((t99 + 0x0));
                    t98 = t104;
                    t100 = (t100 << 2);
                    t101 = (t101 + 0x4);
                    t98 = (t98 + t100);
                    *(unsigned int *)((t99 + 0x0)) = t98;
                }
                *(unsigned int *)((a4 + 0x0)) = 0xC2B8CF4;
                *(unsigned int *)((a4 + 0x4)) = 0xC178304;
                *(unsigned int *)((a4 + 0x8)) = 0xC2B8CA8;
                *(unsigned int *)((a4 + 0xC)) = 0xC2B8CC4;
            }
            t113 = t73;
        }
        t122 = t113;
    }
    return t122;
}

int InitSys(void)
{
    int t0;
    int t3;
    int t4;
    int t7;
    int t13;
    int t35;
    int t37;
    int t49;
    int t79;

    _builtin_set_imask(0xE);
    t0 = *(int *)0xC089F5C;
    nlObjPutLoadTextureCallBack(t0);
    syHwInit();
    t3 = syCblCheck();
    if (t3 != 0) {
        t4 = 0x1;
        if (t3 != 1) {
            if (t3 != 2) {
                for (;;) {
                }
            }
            t4 = 0x2;
        }
        *(unsigned int *)0xC1EE228 = t4;
    } else {
        *(unsigned int *)0xC1EE228 = 0x0;
    }
    t7 = *(int *)0xC1EE228;
    if (t7 == 1) {
        FUN_0c074970(0x0);
    } else {
        t13 = 0x9;
        if (t7 == 2) {
            FUN_0c074300(0x1);
            t13 = 0x1A;
        }
        FUN_0c074970(t13);
    }
    _builtin_set_imask(0xE);
    syHwInit2();
    pdInitPeripheral(0x0, 0xC1A99F8, 0xC1B5A18);
    nlObjPutMLPreCalcLightRestore();
    nlSetIntrFunction(0x1);
    _builtin_set_imask(0x0);
    syRtcInit();
    fsInit();
    gdFsEntryErrFuncAll();
    FUN_0c1519be();
    ADXF_Init();
    thunk_njSetConstantAttr();
    *(unsigned int *)0xC1EE208 = 0x0;
    sysCfgRead();
    *(unsigned int *)0xC1EE234 = 0x0;
    *(unsigned int *)0xC1EE238 = 0x0;
    *(unsigned int *)0xC1EE23C = 0x1;
    *(unsigned int *)0xC1EE330 = 0x0;
    *(unsigned int *)0xC1EE768 = 0x0;
    Init_EEPROM();
    InitBookkeep();
    padInitAnalog();
    CfgInit();
    BupInit();
    nd_Init_Puru2();
    t35 = *(signed char *)0xC1EE278;
    nd_Exec_Puru2((unsigned char)t35);
    t37 = *(int *)0xC1EE228;
    if (t37 == 2) {
        InitNaolib2();
        frameFlip();
        *(unsigned int *)0xC1EE160 = 0x0;
        PAL_SettingLoop();
        nlLoadDummyTexture();
        InitNaolib3();
    } else {
        InitNaolib();
    }
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    gdc_FileLoad(0xCB40000, 0xC08AAF0, 0x0);
    t49 = FUN_0c07eb10(0xCB40000, 0x0);
    if (t49 != 0) {
        nlSetFontSize(0x10, 0x10);
        nlLocate(0xA, 0xC);
        nlPrintf();
        frameFlip();
        frameFlip();
        nlSetFontSize(0x8, 0x8);
        for (;;) {
        }
    }
    gdc_FileLoad(0xCB40000, 0xC08AB0C, 0x0);
    nlsndPackLoad(0xCB40000, 0x0);
    gdc_FileLoad(0xCB40000, 0xC08AB18, 0x0);
    nlsndPackLoad(0xCB40000, 0x1);
    gdc_FileLoad(0xCB40000, 0xC08AB24, 0x0);
    nlsndPackLoad(0xCB40000, 0x3);
    FUN_0c07f5c0();
    FUN_0c07f870(0x4, 0x1, 0x0);
    gdc_StreamInit();
    Sound_Init();
    Voice_Init();
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    nlPrintf();
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
    *(unsigned int *)0xC1EE210 = 0x0;
    *(unsigned int *)0xC1EE20C = 0x0;
    gdc_FileLoad(0xC390000, 0xC08AB3C, 0x0);
    gdc_FileLoad(0xCB40000, 0xC08AB48, 0x0);
    car_texload();
    PatchPolygon();
    sysCfgRead();
    gdc_SpriteSetInit();
    *(unsigned int *)0xC1EE76C = 0xFFFFFFFF;
    t79 = *(int *)0xC1EE20C;
    CourseTableSet(t79);
    game_init();
    *(unsigned int *)0xC1EE230 = 0x1;
    *(unsigned int *)0xC1EE338 = 0x1;
    *(float *)0xC1A99F0 = 0.0f;
    SetLight(0x2200, 0x2900);
    SetLightAmbience(0.399999976f);
    Init_Fog();
    InitMV();
    Init_Adv_Sprite();
    InitRenderTexture2nd(0x0);
    InitProportionalText(0x0);
    InitMenu();
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    nlPrintf();
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
    Init_LCD();
    return nd_Init_Puru2();
}

