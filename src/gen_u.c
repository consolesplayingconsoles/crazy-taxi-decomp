/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_Create(int, int, int, int);
int ADXB_EntryGetWrFunc(int, int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(void);
int ADXF_LoadPartition(int, int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
int Act_Init(void);
int Drv_StartAction(int, int, int);
int FUN_0c02e36c(int, int);
int FUN_0c02e83c(int);
int FUN_0c031048(void);
int FUN_0c031934(int);
int FUN_0c03bea0(int, int, int);
int FUN_0c03c792(int, int, int, int);
int FUN_0c041a3e(int);
int FUN_0c04f1b0(int);
int FUN_0c0512ac(void);
int FUN_0c0530a0(int);
int FUN_0c0532ea(int);
int FUN_0c05778a(int, int, float, float);
int FUN_0c057e9e(void);
int FUN_0c06047c(void);
int FUN_0c060616(int);
int FUN_0c0713d8(int);
int FUN_0c072e36(void);
int FUN_0c074680(void);
int FUN_0c156c32(int, int, int, int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetMenuMode(int);
int InitAdvCamera(void);
int InitColliObj(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_Fog(void);
int Init_Standard(void);
int LightEffect(int);
int PutCourse_Init(int);
int ResetLight(void);
int SJRBF_GetBufPtr(int);
int SJRBF_GetBufSize(int);
int SJRBF_GetXtrSize(int);
int Sound_Init(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int adxamp_extract(int);
int adxsjd_clear(int);
int buCalcCRC(int, int);
int buIsFormat(void);
int buStat(void);
int callGoBackAdvertise(void);
int entryCarPut(int);
int extRand(void);
int extRandomSeed(int);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoice(int);
int gdc_StopStreamVoiceAll(void);
int get_fat(int, int);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiFlipVertexBuffer(int);
int kmiGetSysConfigFlag(void);
int kmiReadRegister(int);
int kmiSetSysConfigFlag(int);
int kmiWaitVlank(void);
int kmiWriteRegister(int, int);
int kmyConvertAddress64to32(int);
int memset(int, int, int);
int menuPutSprites(int, int, int, int);
int mpdrv_insertnop(int);
int mpdrv_set_allstatreq_ns(void);
int mpdrv_set_dkill_ns(void);
int mpdrv_set_dreq_ns(void);
int mpdrv_set_dreset_ns(void);
int mpdrv_set_end_ns(void);
int mpdrv_set_getcond_ns(int, int);
int ndPuru2Reset(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSpriteFreeTexture(int, int);
int nlsndIcsControl(int, int, int);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int psgEnterState5(int);
int psgSeatMatrix(int);
int search_fat(int, int);
int search_fat_free_xross(int);
int set_fat(int, int);
int trafficControl(int);
int usr_gd_err_func(int, int);
int vmsfb_create(int, int, int);
int vmsfb_init(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c0208d6(void);
int FUN_0c0210d4(int a4);
int Initialize_Replay_Part(void);
int FUN_0c02eb86(int a4, int a5, float f4);
int gdc_CourseSet(int a4);
int gdc_SpriteFreeMenu(void);
int FUN_0c03d594(int a4);
int CheckSoftReset(void);
int FUN_0c044b80(int a4);
int CarSel_Time_Count(void);
int FUN_0c0511a4(void);
int FUN_0c051746(void);
int FUN_0c0528c8(void);
int FUN_0c05423a(void);
int FUN_0c0551c6(int a4, int a5);
int FUN_0c05765c(void);
int execAdvSprite(void);
int FUN_0c058828(void);
int FUN_0c0596ac(void);
int FUN_0c05a460(void);
int psgFrameState5(int a4);
int FUN_0c07e580(float f4, float f5, float f6, float f7);
int kmSetUserClipLevelAdjust(int a4, int a5);
int buAnalyzeBackupFileImage(int a4, int a5);
int adxf_read_sj32(int a4, int a5, int a6);
int kmiExecuteDMAChain(void);
int kmiFBallocEx(int a4, int a5, int a6);
int FUN_0c158958(int a4, int a5);
int kmfSetVirticalFilterMode(int a4);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int kmSetFramebufferTexture(int a4);
int kmResetPointer(void);
int vmsfs_c_init(int a4);
int vmsfs_fwrite1(int a4, int a5);
int vmsfs_xwrite1(int a4, int a5);
int vmsfs_fread1(int a4, int a5);
int ADXAMP_ExecHndl(int a4);
int ADXSJD_Create(int a4, int a5, int a6);
int kmiFinalizeRender(void);
int frame_make(void);

int FUN_0c0208d6(void)
{
    float u0;
    int t1;
    int t3;
    float u4;
    float u6;
    int t7;
    int t10;
    int t18;
    float u19;
    int t22;
    float u23;
    int t24;
    int t13;
    int t14;

    *(unsigned int *)0xC1794AC = 0x0;
    u0 = *(float *)0xC0209EC;
    t1 = *(int *)0xC179488;
    if ((int)t1 < (int)0x4) {
        nlsndIcsControl(0x0, 0xA5, 0x400);
        t3 = *(signed char *)0xC28A4ED;
        u4 = *(float *)0xC0209F8;
        t13 = 0x0;
        t14 = (signed char)(int)(((float)(unsigned char)t3 / u0) * u4);
    } else {
        nlsndIcsControl(0x0, 0xA5, 0x300);
        u6 = *(float *)0xC0209FC;
        t7 = *(signed char *)0xC28A4ED;
        nlsndIcsControl(0x0, 0x10A5, (signed char)(int)(((float)(unsigned char)t7 / u0) * u6));
        nlsndIcsControl(0x3, 0xA5, 0x301);
        t10 = *(signed char *)0xC28A4ED;
        t13 = 0x3;
        t14 = (signed char)(int)(((float)(unsigned char)t10 / u0) * u6);
    }
    nlsndIcsControl(t13, 0x10A5, t14);
    nlsndIcsControl(0x1, 0xA5, 0x100);
    t18 = *(signed char *)0xC28A4ED;
    u19 = *(float *)0xC020A00;
    nlsndIcsControl(0x1, 0x10A5, (signed char)(int)(((float)(unsigned char)t18 / u0) * u19));
    nlsndIcsControl(0x2, 0xA5, 0x101);
    t22 = *(signed char *)0xC28A4ED;
    u23 = *(float *)0xC020A04;
    t24 = nlsndIcsControl(0x2, 0x10A5, (signed char)(int)(((float)(unsigned char)t22 / u0) * u23));
    *(unsigned char *)0xC1794A8 = 0x0;
    *(float *)0xC1794A4 = 0.0f;
    return t24;
}

int FUN_0c0210d4(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    int t5;
    int t6;
    float u7;
    int t8;
    float u9;
    int t10;
    float u11;
    int t12;
    int t17;
    float u22;
    int t23;
    float u24;
    int t25;
    float u26;
    int t27;
    int t32;
    float u37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t14;
    float u16;
    int t29;
    float u31;

    t0 = *(int *)((a4 + 0x5C));
    if (t0 != 3) {
        t1 = *(short *)((a4 + 0x114));
        *(unsigned short *)(((0x1A0 + a4) + 0x80)) = t1;
        t2 = *(short *)((a4 + 0x114));
        *(unsigned short *)((((0x1A0 + a4) + 0x84) + 0x80)) = t2;
        t3 = *(short *)((a4 + 0x114));
        if ((int)t3 < (int)0x600) {
            if ((int)t3 > (int)0xFFFFFA00) {
                u4 = *(float *)0xC02122C;
                t5 = *(short *)((a4 + 0x114));
                *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((float)t5 * u4);
                t6 = *(short *)((a4 + 0x114));
                *(unsigned short *)((((((0x1A0 + a4) + 0x84) + 0x84) + 0x84) + 0x80)) = (int)((float)t6 * u4);
            } else {
                u7 = *(float *)0xC021230;
                t8 = *(short *)((a4 + 0x114));
                if ((int)t8 > 0) {
                    u9 = *(float *)0xC021234;
                    t10 = *(short *)((a4 + 0x114));
                    *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((-((float)(t10 - 1536) * u7)) + u9);
                    t14 = 0xFFFFFA00;
                    u16 = u9;
                } else {
                    u11 = *(float *)0xC021238;
                    t12 = *(short *)((a4 + 0x114));
                    *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((-((float)(t12 + 0x600) * u7)) + u11);
                    t14 = 0x600;
                    u16 = u11;
                }
                t17 = *(short *)((a4 + 0x114));
                *(unsigned short *)((((((0x1A0 + a4) + 0x84) + 0x84) + 0x84) + 0x80)) = (int)((-((float)(t17 + t14) * u7)) + u16);
            }
        } else {
            u22 = *(float *)0xC021230;
            t23 = *(short *)((a4 + 0x114));
            if ((int)t23 > 0) {
                u24 = *(float *)0xC021234;
                t25 = *(short *)((a4 + 0x114));
                *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((-((float)(t25 - 1536) * u22)) + u24);
                t29 = 0xFFFFFA00;
                u31 = u24;
            } else {
                u26 = *(float *)0xC021238;
                t27 = *(short *)((a4 + 0x114));
                *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((-((float)(t27 + 0x600) * u22)) + u26);
                t29 = 0x600;
                u31 = u26;
            }
            t32 = *(short *)((a4 + 0x114));
            *(unsigned short *)((((((0x1A0 + a4) + 0x84) + 0x84) + 0x84) + 0x80)) = (int)((-((float)(t32 + t29) * u22)) + u31);
        }
        t42 = 0x80;
    } else {
        u37 = *(float *)0xC02123C;
        t38 = *(short *)((a4 + 0x114));
        *(unsigned short *)((a4 + 0x2A4)) = (int)((float)t38 * u37);
        t39 = *(short *)((a4 + 0x114));
        *(unsigned short *)((a4 + 0x220)) = (int)((float)t39 * u37);
        t40 = *(short *)((a4 + 0x114));
        *(unsigned short *)((a4 + 0x3AC)) = (-t40);
        t41 = *(short *)((a4 + 0x114));
        *(unsigned short *)((a4 + 0x328)) = (-t41);
        t42 = 0x328;
    }
    return t42;
}

int Initialize_Replay_Part(void)
{
    int t7;
    int t9;
    int t11;
    int t14;
    int t15;
    int t17;
    int t21;
    int t26;

    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    Init_Standard();
    init_GameSystem();
    t7 = *(int *)0xC179488;
    InitColliObj(t7);
    t9 = *(int *)0xC1EE20C;
    if (t9 != 0) {
        if (t9 != 1) {
            if (t9 != 2) {
                FUN_0c031934(t9);
                t11 = *(int *)0xC1EE20C;
                PutCourse_Init(t11);
                FUN_0c04f1b0(0x46);
            } else {
                t14 = *(int *)0xC1EE214;
                t15 = t9;
                if (t14 != 15) {
                    t15 = t14;
                }
                FUN_0c031934(t15);
                t17 = *(int *)0xC1EE20C;
                PutCourse_Init(t17);
            }
        } else {
            FUN_0c031934(t9);
            t21 = *(int *)0xC1EE20C;
            PutCourse_Init(t21);
            FUN_0c04f1b0(0x32);
        }
    } else {
        FUN_0c031934(t9);
        t26 = *(int *)0xC1EE20C;
        PutCourse_Init(t26);
        FUN_0c04f1b0(0x46);
    }
    init_CarMain();
    InitAdvCamera();
    init_KyakuMain();
    InitSetObject();
    InitHelicopter();
    Act_Init();
    entryCarPut(0x0);
    trafficControl(0x0);
    Drv_StartAction(0x0, 0x0, 0x0);
    *(unsigned int *)0xC179120 = 0x1;
    return Init_Fog();
}

int FUN_0c02eb86(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
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
    float u18;
    float u19;
    float u20;
    int t21;
    float u22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t30;
    int t28;
    int t29;
    int t32;
    int t5;
    int t6;
    int t31;

    if (a5 == 0) {
        t0 = *(int *)0xC26E0FC;
        t1 = *(int *)(((a4 << 2) + t0));
        t5 = t1;
        t6 = 0xC1EE800;
    } else {
        t2 = *(int *)0xC26E100;
        t3 = *(int *)(((a4 << 2) + t2));
        t5 = t3;
        t6 = 0xC1EE804;
    }
    t8 = *(int *)((t6 + 0x0));
    t9 = *(int *)(((t8 + (((a4 << 2) + a4) << 2)) + 0x10));
    t10 = 0x0;
    t11 = a5;
    t12 = 0xC26C5DC;
    for (;;) {
        t13 = *(int *)((t12 + 0x4));
        if (t13 == t5) break;
        t14 = *(int *)((t12 + 0x8));
        t11 = t14;
        t10 = (t10 + t11);
        t11 = (t11 + 0x1);
        t15 = t11;
        t11 = (t11 << 1);
        t11 = (t11 + t15);
        t10 = (t10 + 0x1);
        t11 = (t11 << 2);
        t11 = (t11 << 1);
        t12 = (t12 + t11);
        if ((int)t10 >= (int)0x120) {
            t10 = t9;
            t16 = FUN_0c02e83c(t10);
            t10 = t16;
            if (t16 != -1) {
                t17 = t10;
                t10 = (t10 << 1);
                t10 = (t10 + t17);
                t10 = (t10 << 2);
                t10 = (t10 << 1);
                t10 = (short)t10;
                t10 = (t10 + 0xC26C5DC);
                t11 = 0x1;
                *(unsigned char *)((t10 + 0x0)) = t11;
                *(unsigned int *)((t10 + 0x4)) = t5;
                u18 = *(float *)0xC02ED04;
                u19 = *(float *)0xC02ED08;
                if (0.0f > (u19 - (f4 * u18))) {
                    u20 = *(float *)0xC02ED0C;
                    *(unsigned int *)((t10 + 0xC)) = (int)(0.0f + u20);
                    t21 = *(int *)((t10 + 0x10));
                    *(unsigned int *)((t10 + 0x10)) = (t21 + 0x1);
                    *(unsigned int *)((t10 + 0x8)) = (t9 - 1);
                    if ((int)t9 > (int)t11) {
                        t10 = (t10 + 0x18);
                        if ((int)t11 < (int)t9) {
                            do {
                                t11 = (t11 + 0x1);
                                *(unsigned char *)((t10 + 0x0)) = 0x0;
                                *(unsigned int *)((t10 + 0xC)) = 0x3E8;
                                *(unsigned int *)((t10 + 0x10)) = 0x0;
                                *(unsigned int *)((t10 + 0x8)) = 0x0;
                                *(unsigned int *)((t10 + 0x4)) = 0xFFFFFFFF;
                                t10 = (t10 + 0x18);
                            } while ((int)t11 < (int)t9);
                            return 0xC02ED0C;
                        }
                        return 0xC02ED0C;
                    }
                    return 0xC02ED0C;
                }
                u22 = *(float *)0xC02ED0C;
                *(unsigned int *)((t10 + 0xC)) = (int)((u19 - (f4 * u18)) + u22);
                t23 = *(int *)((t10 + 0x10));
                *(unsigned int *)((t10 + 0x10)) = (t23 + 0x1);
                *(unsigned int *)((t10 + 0x8)) = (t9 - 1);
                if ((int)t9 > (int)t11) {
                    t10 = (t10 + 0x18);
                    if ((int)t11 < (int)t9) {
                        do {
                            t11 = (t11 + 0x1);
                            *(unsigned char *)((t10 + 0x0)) = 0x0;
                            *(unsigned int *)((t10 + 0xC)) = 0x3E8;
                            *(unsigned int *)((t10 + 0x10)) = 0x0;
                            *(unsigned int *)((t10 + 0x8)) = 0x0;
                            *(unsigned int *)((t10 + 0x4)) = 0xFFFFFFFF;
                            t10 = (t10 + 0x18);
                        } while ((int)t11 < (int)t9);
                        return 0xC02ED0C;
                    }
                    return 0xC02ED0C;
                }
                return 0xC02ED0C;
            }
            return t16;
        }
    }
    t24 = *(signed char *)((t12 + 0x0));
    if ((unsigned char)t24 == 4) {
        t25 = *(int *)((t12 + 0x14));
        t26 = nlObjPutUseViewMatrix(t25);
        t31 = t26;
    } else {
        t27 = *(signed char *)((t12 + 0x0));
        t30 = (unsigned char)t24;
        if (t27 == 0) {
            t28 = *(int *)((t12 + 0x14));
            t29 = nlObjPutUseViewMatrix(t28);
            *(unsigned char *)((t12 + 0x0)) = 0x4;
            *(unsigned int *)((t12 + 0xC)) = 0x0;
            t30 = t29;
        }
        t31 = t30;
    }
    t32 = *(int *)((t12 + 0x10));
    *(unsigned int *)((t12 + 0x10)) = (t32 + 0x1);
    return t31;
}

int gdc_CourseSet(int a4)
{
    int t3;
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t7;

    if (a4 != 0) {
        if (a4 != 1) {
            t3 = a4;
            if (a4 == 2) {
                t0 = 0x0;
                for (;;) {
                    t1 = ADXF_LoadPartition(0x0, 0xC08D474, 0xC26C1C4, 0x1F9);
                    if (t1 == 0) break;
                    t0 = (t0 + 0x1);
                    if ((int)t0 > (int)0xA) {
                        t2 = *(int *)0xC1EE208;
                        *(unsigned int *)0xC1EE208 = (t2 + 0x1);
                    }
                }
                *(unsigned int *)0xC26E0FC = 0xC08D21C;
                *(unsigned int *)0xC26E100 = 0xC08D424;
                *(unsigned int *)0xC26E104 = 0x82;
                *(unsigned int *)0xC26E108 = 0x0;
                *(unsigned int *)0xC0EA3D8 = 0xC149818;
                *(unsigned int *)0xC1EE800 = 0xC0E9988;
                *(unsigned int *)0xC1EE804 = 0xC0EA3C4;
                t3 = 0xC1EE800;
            }
            t7 = t3;
        } else {
            t4 = 0x0;
            for (;;) {
                t5 = ADXF_LoadPartition(0x0, 0xC08D468, 0xC26C1C4, 0x1F9);
                if (t5 == 0) break;
                t4 = (t4 + 0x1);
                if ((int)t4 > (int)0xA) {
                    t6 = *(int *)0xC1EE208;
                    *(unsigned int *)0xC1EE208 = (t6 + 0x1);
                }
            }
            *(unsigned int *)0xC26E0FC = 0xC08CBDC;
            *(unsigned int *)0xC26E100 = 0xC08CF8C;
            *(unsigned int *)0xC26E104 = 0xEC;
            *(unsigned int *)0xC26E108 = 0xA4;
            *(unsigned int *)0xC0EA3D8 = 0xC1483C8;
            *(unsigned int *)0xC1EE800 = 0xC0E7A20;
            *(unsigned int *)0xC1EE804 = 0xC0E8CA4;
            t7 = 0xC1EE804;
        }
        t12 = t7;
    } else {
        t9 = 0x0;
        for (;;) {
            t10 = ADXF_LoadPartition(0x0, 0xC08D45C, 0xC26C1C4, 0x1F9);
            if (t10 == 0) break;
            t9 = (t9 + 0x1);
            if ((int)t9 > (int)0xA) {
                t11 = *(int *)0xC1EE208;
                *(unsigned int *)0xC1EE208 = (t11 + 0x1);
            }
        }
        *(unsigned int *)0xC26E0FC = 0xC08C420;
        *(unsigned int *)0xC26E100 = 0xC08C81C;
        *(unsigned int *)0xC26E104 = 0xFF;
        *(unsigned int *)0xC26E108 = 0xF0;
        *(unsigned int *)0xC0EA3D8 = 0xC146EB8;
        *(unsigned int *)0xC1EE800 = 0xC0E534C;
        *(unsigned int *)0xC1EE804 = 0xC0E674C;
        t12 = 0xC1EE804;
    }
    return t12;
}

int gdc_SpriteFreeMenu(void)
{
    int t2;
    int t4;
    int t28;
    int t29;
    int t26;
    int t27;
    int t22;
    int t23;
    int t16;
    int t17;
    int t10;
    int t11;

    nlSetCommonTextureOffset(0x208);
    nlSpriteFreeTexture(0xC144D58, 0xC08B700);
    t2 = *(int *)0xC2A11C0;
    if (t2 == 0) {
        nlSetCommonTextureOffset(0x244);
        t4 = nlSpriteFreeTexture(0xC1450C8, 0xC08B700);
        t29 = t4;
    } else {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    if (t2 != 4) {
                        nlSetCommonTextureOffset(0x2A8);
                        t10 = 0xC1456D8;
                        t11 = 0xC08B890;
                    } else {
                        nlSetCommonTextureOffset(0x2A8);
                        nlSpriteFreeTexture(0xC145DF8, 0xC08B890);
                        nlSetCommonTextureOffset(0x384);
                        t10 = 0xC146778;
                        t11 = 0xC08BA70;
                    }
                    t16 = t10;
                    t17 = t11;
                } else {
                    nlSetCommonTextureOffset(0x2A8);
                    nlSpriteFreeTexture(0xC145DF8, 0xC08B890);
                    nlSetCommonTextureOffset(0x320);
                    t16 = 0xC1462B8;
                    t17 = 0xC08BA70;
                }
                t22 = t16;
                t23 = t17;
            } else {
                nlSetCommonTextureOffset(0x2A8);
                nlSpriteFreeTexture(0xC145DF8, 0xC08B890);
                nlSetCommonTextureOffset(0x352);
                t22 = 0xC146518;
                t23 = 0xC08BA70;
            }
            t26 = t22;
            t27 = t23;
        } else {
            nlSetCommonTextureOffset(0x2A8);
            t26 = 0xC1456D8;
            t27 = 0xC08B890;
        }
        t28 = nlSpriteFreeTexture(t26, t27);
        t29 = t28;
    }
    return t29;
}

int FUN_0c03d594(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u10;
    float u11;
    int t12;
    float u13;
    int t14;

    t0 = *(signed char *)0xC28A4E8;
    t1 = 0x8;
    if (((unsigned char)t0 & 1) == 0) {
        t1 = 0x4;
    }
    t2 = *(int *)0xC2A1240;
    if ((int)t2 >= (int)t1) {
        *(unsigned int *)0xC2A1240 = 0x0;
    }
    if (a4 != 0) {
        FUN_0c03bea0(0x0, 0xC2A1240, t1);
    }
    t5 = *(int *)0xC2A1240;
    *(unsigned int *)0xC179488 = t5;
    t6 = *(int *)0xC2A1240;
    t7 = 0x17;
    if (a4 != 0) {
        t7 = 0x8017;
    }
    t8 = FUN_0c03c792(t7, 0xC09E4F8, t1, t6);
    t9 = *(int *)0xC2A1240;
    if ((int)(t9 - 4) >= 0) {
        u10 = *(float *)0xC03D700;
        u11 = *(float *)0xC09E4FC;
        t12 = *(int *)0xC2A1ADC;
        u13 = *(float *)0xC09E4F8;
        t14 = *(int *)((((t9 - 4) << 2) + 0xC0EF638));
        return menuPutSprites(t14, 0xC2A1A84, (int)(u13 + (float)t12), (int)(u11 + u10));
    }
    return t8;
}

int CheckSoftReset(void)
{
    int t0;
    int t1;
    int t2;
    int t68;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int t14;
    int t38;
    int t16;
    int t17;
    int t18;
    int t19;
    int t41;
    int t65;
    int t43;
    int t44;
    int t45;
    int t46;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t80;
    int t81;
    int t82;
    int t106;
    int t84;
    int t85;
    int t86;
    int t87;
    int t112;
    int t136;
    int t114;
    int t115;
    int t116;
    int t117;
    int t142;
    int t10;
    int t67;
    int t40;
    int t39;
    int t66;
    int t77;
    int t140;
    int t110;
    int t108;
    int t138;

    t0 = *(int *)0xC2A121C;
    if (t0 != 0) {
        t1 = *(int *)0xC2A11B8;
        t2 = buStat();
        t68 = t2;
        if (t2 == 0) {
            t3 = *(signed char *)0xC1EE277;
            if ((unsigned char)t3 != 0) {
                if ((unsigned char)t3 != 1) {
                    *(unsigned int *)0xC2A123C = 0x0;
                } else {
                    *(unsigned int *)0xC2A123C = 0x1;
                }
            } else {
                *(unsigned int *)0xC2A123C = 0x0;
            }
            t4 = *(int *)0xC2A123C;
            if (t4 == 1) {
                t5 = *(int *)0xC1EE24C;
                t6 = 0x1;
                if ((t5 & 0x6) != 6) {
                    t6 = 0x0;
                }
                t10 = t6;
            } else {
                t7 = *(int *)0xC1EE24C;
                t8 = 0x0;
                if ((t7 & 0x606) == 0x606) {
                    t8 = 0x1;
                }
                t10 = t8;
            }
            t12 = *(int *)0xC1EE250;
            if ((t12 & 0x8) == 0) {
                t13 = *(int *)0xC1EE24C;
                if ((t13 & 0x8) != 0) {
                    if (t10 == 1) {
                        t14 = *(int *)0xC0EF7F4;
                        t38 = 0x0;
                        if (t14 == 0) {
                            ndPuru2Reset();
                            t16 = *(int *)0xC1EE234;
                            if (t16 != 0) {
                                t17 = *(int *)0xC1EE234;
                                if (t17 != 2) {
                                    t18 = *(int *)0xC2A1228;
                                    if (t18 == 0) {
                                        t19 = *(int *)0xC2A122C;
                                        if (t19 == 0) {
                                            usr_gd_err_func(0x0, 0xFFFFFFE9);
                                        } else {
                                            callGoBackAdvertise();
                                        }
                                    } else {
                                        callGoBackAdvertise();
                                    }
                                } else {
                                    usr_gd_err_func(0x0, 0xFFFFFFE9);
                                }
                            } else {
                                usr_gd_err_func(0x0, 0xFFFFFFE9);
                            }
                            FUN_0c072e36();
                            gdc_StopStreamVoiceAll();
                            gdc_StopStreamSongAll();
                            Sound_Init();
                            *(unsigned int *)0xC2A4E50 = 0x0;
                            FUN_0c041a3e(0x0);
                            FUN_0c060616(0x0);
                            FUN_0c060616(0x1);
                            FUN_0c06047c();
                            FUN_0c031048();
                            *(unsigned int *)0xC0EF7F4 = 0x1;
                            t38 = 0x1;
                        }
                        t39 = t38;
                    } else {
                        *(unsigned int *)0xC0EF7F4 = 0x0;
                        t39 = 0x0;
                    }
                    t40 = t39;
                } else {
                    *(unsigned int *)0xC0EF7F4 = 0x0;
                    t40 = 0x0;
                }
                t67 = t40;
            } else {
                if (t10 == 1) {
                    t41 = *(int *)0xC0EF7F4;
                    t65 = 0x0;
                    if (t41 == 0) {
                        ndPuru2Reset();
                        t43 = *(int *)0xC1EE234;
                        if (t43 != 0) {
                            t44 = *(int *)0xC1EE234;
                            if (t44 != 2) {
                                t45 = *(int *)0xC2A1228;
                                if (t45 == 0) {
                                    t46 = *(int *)0xC2A122C;
                                    if (t46 == 0) {
                                        usr_gd_err_func(0x0, 0xFFFFFFE9);
                                    } else {
                                        callGoBackAdvertise();
                                    }
                                } else {
                                    callGoBackAdvertise();
                                }
                            } else {
                                usr_gd_err_func(0x0, 0xFFFFFFE9);
                            }
                        } else {
                            usr_gd_err_func(0x0, 0xFFFFFFE9);
                        }
                        FUN_0c072e36();
                        gdc_StopStreamVoiceAll();
                        gdc_StopStreamSongAll();
                        Sound_Init();
                        *(unsigned int *)0xC2A4E50 = 0x0;
                        FUN_0c041a3e(0x0);
                        FUN_0c060616(0x0);
                        FUN_0c060616(0x1);
                        FUN_0c06047c();
                        FUN_0c031048();
                        *(unsigned int *)0xC0EF7F4 = 0x1;
                        t65 = 0x1;
                    }
                    t66 = t65;
                } else {
                    *(unsigned int *)0xC0EF7F4 = 0x0;
                    t66 = 0x0;
                }
                t67 = t66;
            }
            t68 = t67;
        }
        t142 = t68;
    } else {
        t70 = *(signed char *)0xC1EE277;
        if ((unsigned char)t70 != 0) {
            if ((unsigned char)t70 != 1) {
                *(unsigned int *)0xC2A123C = 0x0;
            } else {
                *(unsigned int *)0xC2A123C = 0x1;
            }
        } else {
            *(unsigned int *)0xC2A123C = 0x0;
        }
        t71 = *(int *)0xC2A123C;
        if (t71 == 1) {
            t72 = *(int *)0xC1EE24C;
            t73 = 0x1;
            if ((t72 & 0x6) != 6) {
                t73 = 0x0;
            }
            t77 = t73;
        } else {
            t74 = *(int *)0xC1EE24C;
            t75 = 0x0;
            if ((t74 & 0x606) == 0x606) {
                t75 = 0x1;
            }
            t77 = t75;
        }
        t80 = *(int *)0xC1EE250;
        if ((t80 & 0x8) == 0) {
            t81 = *(int *)0xC1EE24C;
            if ((t81 & 0x8) != 0) {
                if (t77 == 1) {
                    t82 = *(int *)0xC0EF7F4;
                    t106 = 0x0;
                    if (t82 == 0) {
                        ndPuru2Reset();
                        t84 = *(int *)0xC1EE234;
                        if (t84 != 0) {
                            t85 = *(int *)0xC1EE234;
                            if (t85 != 2) {
                                t86 = *(int *)0xC2A1228;
                                if (t86 == 0) {
                                    t87 = *(int *)0xC2A122C;
                                    if (t87 == 0) {
                                        usr_gd_err_func(0x0, 0xFFFFFFE9);
                                    } else {
                                        callGoBackAdvertise();
                                    }
                                } else {
                                    callGoBackAdvertise();
                                }
                            } else {
                                usr_gd_err_func(0x0, 0xFFFFFFE9);
                            }
                        } else {
                            usr_gd_err_func(0x0, 0xFFFFFFE9);
                        }
                        FUN_0c072e36();
                        gdc_StopStreamVoiceAll();
                        gdc_StopStreamSongAll();
                        Sound_Init();
                        *(unsigned int *)0xC2A4E50 = 0x0;
                        FUN_0c041a3e(0x0);
                        FUN_0c060616(0x0);
                        FUN_0c060616(0x1);
                        FUN_0c06047c();
                        FUN_0c031048();
                        *(unsigned int *)0xC0EF7F4 = 0x1;
                        t106 = 0x1;
                    }
                    t108 = t106;
                } else {
                    *(unsigned int *)0xC0EF7F4 = 0x0;
                    t108 = 0x0;
                }
                t110 = t108;
            } else {
                *(unsigned int *)0xC0EF7F4 = 0x0;
                t110 = 0x0;
            }
            t140 = t110;
        } else {
            if (t77 == 1) {
                t112 = *(int *)0xC0EF7F4;
                t136 = 0x0;
                if (t112 == 0) {
                    ndPuru2Reset();
                    t114 = *(int *)0xC1EE234;
                    if (t114 != 0) {
                        t115 = *(int *)0xC1EE234;
                        if (t115 != 2) {
                            t116 = *(int *)0xC2A1228;
                            if (t116 == 0) {
                                t117 = *(int *)0xC2A122C;
                                if (t117 == 0) {
                                    usr_gd_err_func(0x0, 0xFFFFFFE9);
                                } else {
                                    callGoBackAdvertise();
                                }
                            } else {
                                callGoBackAdvertise();
                            }
                        } else {
                            usr_gd_err_func(0x0, 0xFFFFFFE9);
                        }
                    } else {
                        usr_gd_err_func(0x0, 0xFFFFFFE9);
                    }
                    FUN_0c072e36();
                    gdc_StopStreamVoiceAll();
                    gdc_StopStreamSongAll();
                    Sound_Init();
                    *(unsigned int *)0xC2A4E50 = 0x0;
                    FUN_0c041a3e(0x0);
                    FUN_0c060616(0x0);
                    FUN_0c060616(0x1);
                    FUN_0c06047c();
                    FUN_0c031048();
                    *(unsigned int *)0xC0EF7F4 = 0x1;
                    t136 = 0x1;
                }
                t138 = t136;
            } else {
                *(unsigned int *)0xC0EF7F4 = 0x0;
                t138 = 0x0;
            }
            t140 = t138;
        }
        t142 = t140;
    }
    return t142;
}

int FUN_0c044b80(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t31;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t18;
    int t19;
    int t20;
    int t23;
    int t25;
    int t24;
    int t41;
    int t65;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t52;
    int t53;
    int t54;
    int t57;
    int t59;
    int t58;
    int t70;
    int t36;
    int t22;
    int t28;
    int t56;
    int t62;

    t0 = *(int *)0xC2A6690;
    t1 = *(int *)((a4 + 0x80));
    t2 = *(int *)((((((t1 << 1) + t1) << 2) + t0) + 0x4));
    t3 = *(int *)((t2 + 0x0));
    t4 = 0x2;
    if ((int)(t3 - 14) > (int)0x2) {
        t4 = (t3 - 14);
    }
    t5 = *(int *)((a4 + 0xD4));
    if ((int)t5 < (int)t4) {
        if ((int)t5 > 0) {
            t6 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t6 & 0xFFFF8DFF);
            t36 = 0x84;
        } else {
            t7 = *(int *)((a4 + 0x84));
            t31 = 0x84;
            if ((t7 & 0x1000) == 0) {
                t8 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t8 | 0x1000);
                t9 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t9 & 0xFFFFF3FF);
                t10 = *(int *)((a4 + 0x80));
                t11 = *(int *)0xC2A6690;
                t12 = *(int *)((((((t10 << 1) + t10) << 2) + t11) + 0x8));
                t13 = *(short *)((t12 + 0x6));
                if (t13 != 0) {
                    t14 = extRand();
                    if ((t14 & 1) != 0) {
                        t15 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t15 | 0x200);
                    }
                }
                t18 = *(int *)((a4 + 0x84));
                if ((t18 & 0x200) == 0) {
                    t19 = *(int *)((t12 + 0x0));
                    t22 = (short)((unsigned int)t19 >> 16);
                } else {
                    t20 = *(int *)((t12 + 0x0));
                    t22 = ((int)t20 >> 18);
                }
                if ((t22 & 0x3) == 2) {
                    t23 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t23 | 0x4000);
                    t28 = 0x84;
                } else {
                    t25 = (t22 & 0x3);
                    if ((t22 & 0x3) == 1) {
                        t24 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t24 | 0x2000);
                        t25 = 0x84;
                    }
                    t28 = t25;
                }
                t31 = t28;
            }
            t36 = t31;
        }
        t70 = t36;
    } else {
        t41 = *(int *)((a4 + 0x84));
        t65 = 0x84;
        if ((t41 & 0x1000) == 0) {
            t42 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t42 | 0x1000);
            t43 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t43 & 0xFFFFF3FF);
            t44 = *(int *)((a4 + 0x80));
            t45 = *(int *)0xC2A6690;
            t46 = *(int *)((((((t44 << 1) + t44) << 2) + t45) + 0x8));
            t47 = *(short *)((t46 + 0x6));
            if (t47 != 0) {
                t48 = extRand();
                if ((t48 & 1) != 0) {
                    t49 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t49 | 0x200);
                }
            }
            t52 = *(int *)((a4 + 0x84));
            if ((t52 & 0x200) == 0) {
                t53 = *(int *)((t46 + 0x0));
                t56 = (short)((unsigned int)t53 >> 16);
            } else {
                t54 = *(int *)((t46 + 0x0));
                t56 = ((int)t54 >> 18);
            }
            if ((t56 & 0x3) == 2) {
                t57 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t57 | 0x4000);
                t62 = 0x84;
            } else {
                t59 = (t56 & 0x3);
                if ((t56 & 0x3) == 1) {
                    t58 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t58 | 0x2000);
                    t59 = 0x84;
                }
                t62 = t59;
            }
            t65 = t62;
        }
        t70 = t65;
    }
    return t70;
}

int CarSel_Time_Count(void)
{
    int t0;
    int t1;
    int t9;
    int t10;
    int t3;
    int t4;
    int t6;
    int t8;
    int t7;
    int t12;
    int t56;
    int t57;
    int t13;
    int t14;
    int t15;
    int t20;
    int t16;
    int t17;
    int t26;
    int t31;
    int t27;
    int t28;
    int t37;
    int t52;
    int t53;
    int t38;
    int t39;
    int t40;
    int t46;
    int t60;
    int t63;
    int t64;
    int t61;
    int t62;
    int t66;
    int t69;
    int t70;
    int t71;
    int t34;
    int t23;
    int t49;
    int t43;

    t0 = *(int *)0xC2A7518;
    if (t0 != 0) {
        return 0;
    }
    t1 = *(int *)0xC2A757C;
    t9 = 0xC2A757C;
    t10 = 0x0;
    if ((int)t1 < (int)0x3B0) {
        FUN_0c0511a4();
        t3 = *(int *)0xC2A75C0;
        t4 = 0x0;
        if (t3 == 4) {
            t4 = 0x1;
        }
        FUN_0c0512ac();
        t6 = *(int *)0xC17948C;
        t8 = t4;
        if (t6 == 1) {
            t7 = t4;
            if (t4 == 0) {
                t7 = 0x1;
            }
            t8 = t7;
        }
        t9 = t6;
        t10 = t8;
    }
    t12 = *(signed char *)0xC28A4E8;
    t56 = t9;
    t57 = t10;
    if (((unsigned char)t12 & 0x1) != 0) {
        t13 = *(int *)0xC1EE250;
        if ((t13 & 16) != 0) {
            t14 = *(int *)0xC2A75C4;
            if (t14 == 0) {
                *(unsigned int *)0xC2A75C4 = 0x1;
                *(float *)0xC2A7504 = 480.0f;
                t23 = 0xC05112C;
            } else {
                t15 = *(int *)0xC1EE250;
                t20 = t15;
                if ((t15 & 32) != 0) {
                    t16 = *(int *)0xC2A75C4;
                    t17 = t15;
                    if (t16 != 0) {
                        *(unsigned int *)0xC2A75C4 = 0x0;
                        *(float *)0xC2A7504 = 480.0f;
                        t17 = 0xC05112C;
                    }
                    t20 = t17;
                }
                t23 = t20;
            }
            t34 = t23;
        } else {
            t26 = *(int *)0xC1EE250;
            t31 = t26;
            if ((t26 & 32) != 0) {
                t27 = *(int *)0xC2A75C4;
                t28 = t26;
                if (t27 != 0) {
                    *(unsigned int *)0xC2A75C4 = 0x0;
                    *(float *)0xC2A7504 = 480.0f;
                    t28 = 0xC05112C;
                }
                t31 = t28;
            }
            t34 = t31;
        }
        t37 = *(int *)0xC2A75C4;
        t52 = t34;
        t53 = t10;
        if (t37 != 0) {
            t38 = *(int *)0xC1EE250;
            if ((t38 & 4) != 0) {
                t39 = *(int *)0xC2A757C;
                if ((int)t39 < (int)0x3B0) {
                    *(unsigned int *)0xC2A75C0 = 0x4;
                    t43 = 0x1;
                } else {
                    if (t37 != 0) {
                        t40 = *(int *)0xC2A757C;
                        if (t40 == 0) {
                            *(unsigned int *)0xC2A75C0 = 0x4;
                        }
                    }
                    t43 = t10;
                }
                t49 = t43;
            } else {
                if (t37 != 0) {
                    t46 = *(int *)0xC2A757C;
                    if (t46 == 0) {
                        *(unsigned int *)0xC2A75C0 = 0x4;
                    }
                }
                t49 = t10;
            }
            t52 = t38;
            t53 = t49;
        }
        t56 = t52;
        t57 = t53;
    }
    t60 = *(int *)0xC2A757C;
    t63 = t56;
    t64 = 0x1;
    if (t60 != 0) {
        t61 = *(int *)0xC1EE250;
        t62 = t57;
        if ((t61 & 4) != 0) {
            t62 = 0x1;
        }
        t63 = t61;
        t64 = t62;
    }
    if (t64 != 0) {
        FUN_0c0530a0(0x0);
        *(unsigned int *)0xC2A7518 = 0x1;
        t66 = *(int *)0xC2A75A4;
        *(unsigned int *)0xC2A75A4 = (t66 + 0x1);
        FUN_0c02e36c(0x3C, 0xF0);
        Voice_ShutUp(0x0);
        t69 = *(int *)0xC2A751C;
        t70 = *(int *)((t69 + 0x0));
        t71 = *(int *)(((t70 << 2) + 0xC1306A0));
        return Voice_Request(t71, 0x0, 0x7F, 0x0);
    }
    return t63;
}

int FUN_0c0511a4(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t26;
    int t27;
    int t28;
    int t29;
    int t36;
    int t37;
    int t38;
    int t39;
    int t46;
    int t49;
    int t47;

    t0 = *(int *)0xC2A75B8;
    if (t0 == 0) {
        t1 = *(int *)0xC1EE24C;
        if ((t1 & 0x20000) != 0) {
            t2 = *(int *)0xC1EE24C;
            if ((t2 & 0x10000) != 0) {
                t3 = *(int *)0xC2A75B8;
                *(unsigned int *)0xC2A75B8 = (t3 + 0x1);
            }
        }
    }
    t8 = *(int *)0xC2A75B8;
    if (t8 == 1) {
        t9 = *(int *)0xC1EE24C;
        if ((t9 & 0x20000) == 0) {
            if ((t9 & 0x10000) != 0) {
                t10 = *(int *)0xC2A75B8;
                *(unsigned int *)0xC2A75B8 = (t10 + 0x1);
            } else {
                t11 = *(int *)0xC1EE24C;
                if ((t11 & 0x10000) == 0) {
                    *(unsigned int *)0xC2A75B8 = 0x0;
                }
            }
        } else {
            t14 = *(int *)0xC1EE24C;
            if ((t14 & 0x10000) == 0) {
                *(unsigned int *)0xC2A75B8 = 0x0;
            }
        }
    }
    t18 = *(int *)0xC2A75B8;
    if (t18 == 2) {
        t19 = *(int *)0xC1EE24C;
        if ((t19 & 0x20000) == 0) {
            if ((t19 & 0x10000) == 0) {
                t20 = *(int *)0xC2A75B8;
                *(unsigned int *)0xC2A75B8 = (t20 + 0x1);
            } else {
                t21 = *(int *)0xC1EE24C;
                if ((0x20000 & t21) != 0) {
                    *(unsigned int *)0xC2A75B8 = 0x0;
                }
            }
        } else {
            t23 = *(int *)0xC1EE24C;
            if ((0x20000 & t23) != 0) {
                *(unsigned int *)0xC2A75B8 = 0x0;
            }
        }
    }
    t26 = *(int *)0xC2A75B8;
    if (t26 == 3) {
        t27 = *(int *)0xC1EE24C;
        if ((t27 & 0x20000) != 0) {
            t28 = *(int *)0xC1EE24C;
            if ((t28 & 0x10000) != 0) {
                t29 = *(int *)0xC2A75B8;
                *(unsigned int *)0xC2A75B8 = (t29 + 0x1);
            }
        }
    }
    t36 = *(int *)0xC2A75B8;
    if (t36 == 4) {
        t37 = *(int *)0xC1EE24C;
        if ((t37 & 0x20000) == 0) {
            t38 = *(int *)0xC1EE24C;
            if ((t38 & 0x10000) == 0) {
                t39 = *(int *)0xC2A75B8;
                *(unsigned int *)0xC2A75B8 = (t39 + 0x1);
            }
        }
    }
    t46 = *(int *)0xC2A75B8;
    t49 = t46;
    if (t46 == 5) {
        t47 = *(int *)0xC1EE250;
        if ((t47 & 4) != 0) {
            *(unsigned int *)0xC2A75C0 = 0x4;
        }
        t49 = t47;
    }
    return t49;
}

int FUN_0c051746(void)
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
    int t15;
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
    int t37;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t53;
    int t57;
    int t42;
    int t38;
    int t33;
    int t54;
    int t51;

    t0 = *(int *)0xC2A751C;
    t1 = *(int *)((t0 + 0x0));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    t2 = *(int *)0xC1337B8;
                    *(unsigned int *)0xC133184 = t2;
                    t3 = *(int *)0xC1337B4;
                    *(unsigned int *)0xC133178 = t3;
                }
            } else {
                t4 = *(int *)0xC133790;
                *(unsigned int *)0xC133144 = t4;
            }
            t42 = t1;
        } else {
            t5 = *(int *)0xC2A751C;
            t6 = *(int *)((t5 + 0x0));
            t7 = *(int *)((0xC2A7538 + (t6 << 2)));
            if ((int)t7 < (int)0x6F) {
                t8 = *(int *)0xC2A751C;
                t9 = *(int *)((t8 + 0x0));
                t10 = *(int *)((0xC2A7538 + (t9 << 2)));
                if ((int)t10 >= (int)0x17) {
                    t11 = *(int *)0xC133780;
                    *(unsigned int *)0xC133104 = t11;
                } else {
                    t12 = *(int *)0xC133778;
                    *(unsigned int *)0xC133104 = t12;
                }
            } else {
                t15 = *(int *)0xC133778;
                *(unsigned int *)0xC133104 = t15;
            }
            t19 = *(int *)0xC2A751C;
            t20 = *(int *)((t19 + 0x0));
            t21 = *(int *)((0xC2A7538 + (t20 << 2)));
            if ((int)t21 < (int)0x7C) {
                t22 = *(int *)0xC2A751C;
                t23 = *(int *)((t22 + 0x0));
                t24 = *(int *)((0xC2A7538 + (t23 << 2)));
                if ((int)t24 >= (int)0x59) {
                    t25 = *(int *)0xC13376C;
                    *(unsigned int *)0xC1330F8 = t25;
                    t33 = t25;
                } else {
                    t26 = *(int *)0xC2A751C;
                    t27 = *(int *)((t26 + 0x0));
                    t28 = *(int *)((0xC2A7538 + (t27 << 2)));
                    if ((int)t28 >= (int)0x17) {
                        t29 = *(int *)0xC13377C;
                        *(unsigned int *)0xC1330F8 = t29;
                    } else {
                        t30 = *(int *)0xC133784;
                        *(unsigned int *)0xC1330F8 = t30;
                    }
                    t33 = 0x17;
                }
                t38 = t33;
            } else {
                t37 = *(int *)0xC133784;
                *(unsigned int *)0xC1330F8 = t37;
                t38 = (t20 << 2);
            }
            t42 = t38;
        }
        t57 = t42;
    } else {
        t43 = *(int *)0xC2A751C;
        t44 = *(int *)((t43 + 0x0));
        t45 = *(int *)((0xC2A7538 + (t44 << 2)));
        if ((int)t45 < (int)0x56) {
            t46 = *(int *)0xC2A751C;
            t47 = *(int *)((t46 + 0x0));
            t48 = *(int *)((0xC2A7538 + (t47 << 2)));
            if ((int)t48 >= (int)0x32) {
                t49 = *(int *)0xC133758;
                *(unsigned int *)0xC1330C4 = t49;
                t51 = t49;
            } else {
                t50 = *(int *)0xC133750;
                *(unsigned int *)0xC1330C4 = t50;
                t51 = (t47 << 2);
            }
            t54 = t51;
        } else {
            t53 = *(int *)0xC133750;
            *(unsigned int *)0xC1330C4 = t53;
            t54 = (t44 << 2);
        }
        t57 = t54;
    }
    return t57;
}

int FUN_0c0528c8(void)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    int t5;

    *(unsigned int *)0xC2A8EA4 = 0x0;
    *(unsigned int *)0xC2A8EA8 = 0x0;
    *(unsigned int *)0xC2A8EAC = 0x0;
    *(unsigned int *)0xC2A8EB4 = 0x0;
    u0 = *(float *)0xC0529D0;
    *(float *)0xC2A8EB8 = u0;
    *(unsigned int *)0xC2A8F6C = 0x0;
    *(unsigned int *)0xC2A8F70 = 0x0;
    *(unsigned int *)0xC2A8EB0 = 0x1;
    *(unsigned int *)0xC2A8F5C = 0x0;
    *(unsigned int *)0xC2A8F60 = 0x0;
    *(unsigned int *)0xC2A8F64 = 0x0;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EA8 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    u1 = *(float *)0xC0529F4;
    *(float *)0xC2A7EB8 = u1;
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(float *)0xC2A7E90 = 0.0f;
    *(float *)0xC2A7E94 = 0.0f;
    u2 = *(float *)0xC0529F8;
    *(float *)0xC2A7E98 = u2;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(unsigned int *)0xC2A7EBC = 0x2;
    *(float *)0xC2A8890 = 0.0f;
    *(float *)0xC2A8894 = 0.0f;
    u3 = *(float *)0xC052A00;
    *(float *)0xC2A8898 = u3;
    *(float *)0xC2A889C = 1.0f;
    *(float *)0xC2A88A0 = 1.0f;
    *(float *)0xC2A88A4 = 0.0f;
    *(float *)0xC2A88A8 = 0.0f;
    *(float *)0xC2A88AC = 1.0f;
    *(float *)0xC2A88B0 = 1.0f;
    *(unsigned int *)0xC2A88B4 = 0x0;
    *(unsigned int *)0xC2A88C0 = 0xA;
    *(float *)0xC2A88B8 = 1.0f;
    *(unsigned int *)0xC2A88BC = 0x2;
    t4 = 0x0;
    do {
        *(unsigned int *)((0xC2A8E34 + (t4 << 2))) = 0x0;
        if ((int)t4 >= (int)0x3) {
            *(unsigned int *)((0xC2A8E50 + (t4 << 2))) = 0xA;
        } else {
            *(unsigned int *)((0xC2A8E50 + (t4 << 2))) = 0x0;
        }
        t5 = (t4 << 2);
        t4 = (t4 + 0x1);
        *(unsigned int *)((0xC2A8E6C + t5)) = 0x1;
    } while ((int)t4 < (int)0x7);
    *(unsigned int *)0xC2A8E90 = 0x2;
    *(unsigned int *)0xC2A8E88 = 0x7;
    *(unsigned int *)0xC2A8E8C = 0x3;
    return t5;
}

int FUN_0c05423a(void)
{
    int t0;
    int t1;
    int t2;
    float u4;
    float u5;
    float u8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t344;
    int t676;
    int t345;
    int t672;
    int t346;
    int t347;
    int t668;
    int t506;

    t0 = *(int *)0xC2A8CBC;
    if (t0 == 0) {
        t1 = *(int *)0xC2A8C90;
        if ((int)t1 < (int)0xA) {
            t2 = *(int *)0xC2A8C90;
            *(unsigned int *)0xC2A8C90 = (t2 + 0x1);
        } else {
            *(unsigned int *)0xC2A8C90 = 0xA;
            *(unsigned int *)0xC2A8CBC = 0x1;
        }
    } else {
        if (t0 == 1) {
            u4 = *(float *)0xC2A8C8C;
            if (1.0f > u4) {
                u5 = *(float *)0xC2A8C8C;
                *(float *)0xC2A8C8C = (u5 + 0.099999994f);
            } else {
                Sound_Request(0x705A9, 0x0);
                *(unsigned int *)0xC2A8CBC = 0x2;
            }
            u8 = *(float *)0xC2A8C8C;
            if (u8 > 1.0f) {
                *(float *)0xC2A8C8C = 1.0f;
            }
        }
    }
    t10 = *(int *)0xC2A8CBC;
    if (t10 == 2) {
        t11 = *(int *)0xC2A8CB8;
        if ((int)t11 < (int)0x30) {
            t12 = *(int *)0xC2A8CB8;
            *(unsigned int *)0xC2A8CB8 = (t12 + 0x1);
            if ((int)(t12 + 0x1) > 0) {
                t13 = *(int *)0xC2A8CB8;
                if ((int)t13 > (int)0x3) {
                    if ((int)(t12 + 0x1) > (int)0x3) {
                        if ((int)(t12 + 0x1) > (int)0x5) {
                            if ((int)(t12 + 0x1) > (int)0x5) {
                                if ((int)(t12 + 0x1) > (int)0x8) {
                                    if ((int)(t12 + 0x1) > (int)0xC) {
                                        if ((int)(t12 + 0x1) > (int)0xF) {
                                            if ((int)(t12 + 0x1) > (int)0xF) {
                                                if ((int)(t12 + 0x1) > (int)0x11) {
                                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                                        if ((int)(t12 + 0x1) <= (int)0x14) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                                        } else {
                                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                                            } else {
                                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) > (int)0x11) {
                                                    if ((int)(t12 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                                    } else {
                                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0xF) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) > (int)0x11) {
                                                    if ((int)(t12 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                                    } else {
                                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                }
                            } else {
                                if ((int)(t12 + 0x1) > (int)0xC) {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0xF) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) > (int)0x11) {
                                                    if ((int)(t12 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                                    } else {
                                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)0xC2A8CB4 = 0x2;
                        }
                    } else {
                        if ((int)(t12 + 0x1) > (int)0x5) {
                            if ((int)(t12 + 0x1) > (int)0x8) {
                                if ((int)(t12 + 0x1) > (int)0xC) {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0xF) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) > (int)0x11) {
                                                    if ((int)(t12 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                                    } else {
                                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0xC2A8CB4 = 0x1;
                            }
                        } else {
                            if ((int)(t12 + 0x1) > (int)0xC) {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                }
                            } else {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    *(unsigned int *)0xC2A8CB4 = 0x1;
                }
            } else {
                if ((int)(t12 + 0x1) > (int)0x3) {
                    if ((int)(t12 + 0x1) > (int)0x5) {
                        if ((int)(t12 + 0x1) > (int)0x5) {
                            if ((int)(t12 + 0x1) > (int)0x8) {
                                if ((int)(t12 + 0x1) > (int)0xC) {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0xF) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) > (int)0x11) {
                                                    if ((int)(t12 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                                    } else {
                                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0xC2A8CB4 = 0x1;
                            }
                        } else {
                            if ((int)(t12 + 0x1) > (int)0xC) {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                }
                            } else {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        *(unsigned int *)0xC2A8CB4 = 0x2;
                    }
                } else {
                    if ((int)(t12 + 0x1) > (int)0x5) {
                        if ((int)(t12 + 0x1) > (int)0x8) {
                            if ((int)(t12 + 0x1) > (int)0xC) {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0xF) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) > (int)0x11) {
                                                if ((int)(t12 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                                } else {
                                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8CB4 = 0x1;
                                }
                            } else {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                        }
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)0xC2A8CB4 = 0x1;
                        }
                    } else {
                        if ((int)(t12 + 0x1) > (int)0xC) {
                            if ((int)(t12 + 0x1) > (int)0xF) {
                                if ((int)(t12 + 0x1) > (int)0xF) {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) > (int)0x11) {
                                            if ((int)(t12 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8CB4 = 0x1;
                                            } else {
                                                if ((int)(t12 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8CB4 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0xC2A8CB4 = 0x1;
                            }
                        } else {
                            if ((int)(t12 + 0x1) > (int)0xF) {
                                if ((int)(t12 + 0x1) > (int)0x11) {
                                    if ((int)(t12 + 0x1) > (int)0x11) {
                                        if ((int)(t12 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8CB4 = 0x1;
                                        } else {
                                            if ((int)(t12 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8CB4 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8CB4 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8CB4 = 0x2;
                                }
                            } else {
                                if ((int)(t12 + 0x1) > (int)0x11) {
                                    if ((int)(t12 + 0x1) <= (int)0x14) {
                                        *(unsigned int *)0xC2A8CB4 = 0x1;
                                    } else {
                                        if ((int)(t12 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8CB4 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8CB4 = 0x0;
                                        }
                                    }
                                } else {
                                    if ((int)(t12 + 0x1) >= (int)0x30) {
                                        *(unsigned int *)0xC2A8CB4 = 0x2;
                                    } else {
                                        *(unsigned int *)0xC2A8CB4 = 0x0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t344 = *(int *)0xC2A8EB0;
    t676 = t344;
    if (t344 == 2) {
        t345 = *(int *)0xC2A8EAC;
        t672 = 0xC2A8EAC;
        if ((int)t345 < (int)0x30) {
            t346 = *(int *)0xC2A8EAC;
            *(unsigned int *)0xC2A8EAC = (t346 + 0x1);
            if ((int)(t346 + 0x1) > 0) {
                t347 = *(int *)0xC2A8EAC;
                if ((int)t347 > (int)0x3) {
                    if ((int)(t346 + 0x1) > (int)0x3) {
                        if ((int)(t346 + 0x1) > (int)0x5) {
                            if ((int)(t346 + 0x1) > (int)0x5) {
                                if ((int)(t346 + 0x1) > (int)0x8) {
                                    if ((int)(t346 + 0x1) > (int)0xC) {
                                        if ((int)(t346 + 0x1) > (int)0xF) {
                                            if ((int)(t346 + 0x1) > (int)0xF) {
                                                if ((int)(t346 + 0x1) > (int)0x11) {
                                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                                        if ((int)(t346 + 0x1) <= (int)0x14) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                                        } else {
                                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                                            } else {
                                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) > (int)0x11) {
                                                    if ((int)(t346 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                                    } else {
                                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0xF) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) > (int)0x11) {
                                                    if ((int)(t346 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                                    } else {
                                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                }
                            } else {
                                if ((int)(t346 + 0x1) > (int)0xC) {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0xF) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) > (int)0x11) {
                                                    if ((int)(t346 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                                    } else {
                                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)0xC2A8EA8 = 0x2;
                        }
                    } else {
                        if ((int)(t346 + 0x1) > (int)0x5) {
                            if ((int)(t346 + 0x1) > (int)0x8) {
                                if ((int)(t346 + 0x1) > (int)0xC) {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0xF) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) > (int)0x11) {
                                                    if ((int)(t346 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                                    } else {
                                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0xC2A8EA8 = 0x1;
                            }
                        } else {
                            if ((int)(t346 + 0x1) > (int)0xC) {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                }
                            } else {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    t506 = 0x3;
                } else {
                    *(unsigned int *)0xC2A8EA8 = 0x1;
                    t506 = 0xC2A8EAC;
                }
                t668 = t506;
            } else {
                if ((int)(t346 + 0x1) > (int)0x3) {
                    if ((int)(t346 + 0x1) > (int)0x5) {
                        if ((int)(t346 + 0x1) > (int)0x5) {
                            if ((int)(t346 + 0x1) > (int)0x8) {
                                if ((int)(t346 + 0x1) > (int)0xC) {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0xF) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) > (int)0x11) {
                                                    if ((int)(t346 + 0x1) <= (int)0x14) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                                    } else {
                                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                                        } else {
                                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0xC2A8EA8 = 0x1;
                            }
                        } else {
                            if ((int)(t346 + 0x1) > (int)0xC) {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                }
                            } else {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        *(unsigned int *)0xC2A8EA8 = 0x2;
                    }
                } else {
                    if ((int)(t346 + 0x1) > (int)0x5) {
                        if ((int)(t346 + 0x1) > (int)0x8) {
                            if ((int)(t346 + 0x1) > (int)0xC) {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0xF) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) > (int)0x11) {
                                                if ((int)(t346 + 0x1) <= (int)0x14) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                                } else {
                                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                                    } else {
                                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                                    }
                                                }
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x1;
                                }
                            } else {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                        }
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)0xC2A8EA8 = 0x1;
                        }
                    } else {
                        if ((int)(t346 + 0x1) > (int)0xC) {
                            if ((int)(t346 + 0x1) > (int)0xF) {
                                if ((int)(t346 + 0x1) > (int)0xF) {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) > (int)0x11) {
                                            if ((int)(t346 + 0x1) <= (int)0x14) {
                                                *(unsigned int *)0xC2A8EA8 = 0x1;
                                            } else {
                                                if ((int)(t346 + 0x1) >= (int)0x30) {
                                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                                } else {
                                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                                }
                                            }
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0xC2A8EA8 = 0x1;
                            }
                        } else {
                            if ((int)(t346 + 0x1) > (int)0xF) {
                                if ((int)(t346 + 0x1) > (int)0x11) {
                                    if ((int)(t346 + 0x1) > (int)0x11) {
                                        if ((int)(t346 + 0x1) <= (int)0x14) {
                                            *(unsigned int *)0xC2A8EA8 = 0x1;
                                        } else {
                                            if ((int)(t346 + 0x1) >= (int)0x30) {
                                                *(unsigned int *)0xC2A8EA8 = 0x2;
                                            } else {
                                                *(unsigned int *)0xC2A8EA8 = 0x0;
                                            }
                                        }
                                    } else {
                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                        }
                                    }
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                }
                            } else {
                                if ((int)(t346 + 0x1) > (int)0x11) {
                                    if ((int)(t346 + 0x1) <= (int)0x14) {
                                        *(unsigned int *)0xC2A8EA8 = 0x1;
                                    } else {
                                        if ((int)(t346 + 0x1) >= (int)0x30) {
                                            *(unsigned int *)0xC2A8EA8 = 0x2;
                                        } else {
                                            *(unsigned int *)0xC2A8EA8 = 0x0;
                                        }
                                    }
                                } else {
                                    if ((int)(t346 + 0x1) >= (int)0x30) {
                                        *(unsigned int *)0xC2A8EA8 = 0x2;
                                    } else {
                                        *(unsigned int *)0xC2A8EA8 = 0x0;
                                    }
                                }
                            }
                        }
                    }
                }
                t668 = 0x3;
            }
            t672 = t668;
        }
        t676 = t672;
    }
    return t676;
}

int FUN_0c0551c6(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t17;
    int t18;
    int t21;
    int t22;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t35;
    int t36;
    int t37;
    int t38;

    *(unsigned int *)0xC2A8E88 = 0x0;
    t0 = 0xC2A8E88;
    t1 = 0x6;
    do {
        t2 = *(int *)((a5 + (t1 << 2)));
        if (t2 != 0) {
            if (t2 != 10) {
                t3 = *(int *)0xC2A8E90;
                t0 = t3;
                if ((int)t1 > (int)t0) {
                    *(unsigned int *)0xC2A8E90 = t1;
                }
            }
        }
        t5 = *(int *)0xC2A8E90;
        t6 = *(int *)((a4 + (t1 << 2)));
        t7 = *(int *)((a5 + (t1 << 2)));
        t0 = t7;
        if ((int)t0 >= (int)t6) {
            if ((int)t5 > (int)t1) {
                t8 = *(int *)(((t1 << 2) + 0xC2A8E50));
                if (t8 == 10) {
                    t9 = *(int *)((a4 + (t1 << 2)));
                    t0 = t9;
                    t10 = *(int *)((a5 + (t1 << 2)));
                    if (t10 == t0) {
                        if (t10 == 0) {
                            *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = 0x1;
                        } else {
                            t11 = *(int *)((a4 + (t1 << 2)));
                            t12 = *(int *)((a5 + (t1 << 2)));
                            t0 = t12;
                            t0 = (t0 - t11);
                            t0 = (t0 + 0x1);
                            *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = t0;
                        }
                    } else {
                        t14 = *(int *)((a4 + (t1 << 2)));
                        t15 = *(int *)((a5 + (t1 << 2)));
                        t0 = t15;
                        t0 = (t0 - t14);
                        t0 = (t0 + 0x1);
                        *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = t0;
                    }
                } else {
                    t17 = *(int *)((a4 + (t1 << 2)));
                    t18 = *(int *)((a5 + (t1 << 2)));
                    t0 = t18;
                    t0 = (t0 - t17);
                    *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = t0;
                }
            } else {
                t21 = *(int *)((a4 + (t1 << 2)));
                t22 = *(int *)((a5 + (t1 << 2)));
                t0 = t22;
                t0 = (t0 - t21);
                *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = t0;
            }
        } else {
            t25 = *(int *)((a4 + (t1 << 2)));
            t26 = *(int *)((a5 + (t1 << 2)));
            t0 = t26;
            if ((int)t0 < (int)t25) {
                if ((int)t5 < (int)t1) {
                    t27 = *(int *)((a4 + (t1 << 2)));
                    t28 = *(int *)((a5 + (t1 << 2)));
                    t0 = t28;
                    t0 = (t0 - t27);
                    t0 = (t0 + 0xB);
                    *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = t0;
                } else {
                    t29 = *(int *)((a4 + (t1 << 2)));
                    t30 = *(int *)((a5 + (t1 << 2)));
                    t0 = t30;
                    t0 = (t0 - t29);
                    t0 = (t0 + 0xA);
                    *(unsigned int *)((0xC2A8E34 + (t1 << 2))) = t0;
                }
            }
        }
        t35 = *(int *)((0xC2A8E34 + (t1 << 2)));
        t0 = t35;
        t36 = (t1 << 2);
        t37 = (t1 << 2);
        t1 = (t1 - 1);
        if (t0 == 0) {
            *(unsigned int *)((0xC2A8E6C + t37)) = 0x1;
            t38 = t37;
        } else {
            *(unsigned int *)((0xC2A8E6C + t36)) = 0x0;
            t38 = t36;
        }
    } while ((int)t1 >= 0);
    return t38;
}

int FUN_0c05765c(void)
{
    int t1;
    int t6;
    int t7;
    int t8;
    int t9;
    int t25;
    float u10;
    float u11;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    int t23;
    int t24;

    FUN_0c074680();
    t1 = *(int *)0xC2A8FD4;
    if (t1 == 0) {
        Voice_ShutUp(0x0);
        Voice_Request(0xC130BA8, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2A8FD4 = 0x1;
    }
    t6 = 0x8;
    t7 = 0xC2A89CC;
    do {
        *(unsigned int *)((t7 + 0x28)) = 0x0;
        t8 = nlSprPut(t7);
        t6 = (t6 - 0x1);
        t7 = (t7 + 0x50);
    } while (t6 != 0);
    t9 = *(int *)0xC2A8FCC;
    t25 = t8;
    if ((int)t9 < (int)0x8) {
        u10 = *(float *)0xC0577BC;
        u11 = *(float *)0xC0577C0;
        u12 = *(float *)0xC0577C4;
        u13 = *(float *)0xC0577C8;
        t14 = 0xC0577C8;
        t15 = 0xC2A89CC;
        t16 = 0x0;
        do {
            t17 = *(int *)0xC2A8FCC;
            if (t17 == t16) {
                t14 = 0x4;
                u18 = *(float *)((t15 + t14));
                *(float *)((t15 + t14)) = (u18 + ((((float)t16 + u13) * u11) / u12));
                t14 = 0x10;
                u19 = *(float *)((t15 + t14));
                *(float *)((t15 + t14)) = (u19 + u10);
                t14 = 0x14;
                u20 = *(float *)((t15 + t14));
                *(float *)((t15 + t14)) = (u20 + u10);
                t14 = 0xC;
                u21 = *(float *)((t15 + t14));
                *(float *)((t15 + t14)) = (u21 - u10);
                t14 = 0x2C;
                u22 = *(float *)((t15 + t14));
                *(float *)((t15 + t14)) = (u22 + u10);
                t23 = *(int *)0xC2A8FD0;
                t14 = t23;
                t14 = (t14 + 0x1);
                *(unsigned int *)0xC2A8FD0 = t14;
                if (t14 == 6) {
                    t24 = *(int *)0xC2A8FCC;
                    *(unsigned int *)0xC2A8FCC = (t24 + 0x1);
                    *(unsigned int *)0xC2A8FD0 = 0x0;
                }
            }
            t16 = (t16 + 0x1);
            t15 = (t15 + 0x50);
        } while ((int)t16 < (int)0x8);
        t25 = t14;
    }
    return t25;
}

int execAdvSprite(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t25;
    int t27;
    int t29;
    int t31;
    int t32;
    float u36;
    float u37;

    t0 = *(int *)0xC2A931C;
    if (t0 == 1) {
        FUN_0c057e9e();
    }
    t3 = *(int *)0xC2A9320;
    if ((int)t3 > 0) {
        t4 = *(int *)0xC2A9320;
        *(unsigned int *)0xC2A9320 = (t4 - 0x80);
    }
    *(unsigned int *)0xC2A9254 = 0x0;
    t5 = 0x0;
    t6 = 0xC130D80;
    t7 = 0xFFFFFF00;
    do {
        t8 = *(int *)0xC2A9320;
        t9 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        FUN_0c05778a(0xC2A922C, t9, (float)((t8 + t7) + 0x170), 208.0f);
        t5 = (t5 + 0x1);
        t7 = (t7 + 0x80);
    } while ((int)t5 < (int)0x4);
    t11 = *(int *)0xC2A9320;
    t12 = *(int *)0xC130D90;
    FUN_0c05778a(0xC2A922C, t12, (float)(t11 + 0x250), 176.0f);
    t14 = *(int *)0xC2A9320;
    t15 = *(int *)0xC130D94;
    FUN_0c05778a(0xC2A922C, t15, (float)(t14 + 0x250), 240.0f);
    t17 = 0x0;
    t18 = 0xC130D98;
    t19 = 0xFFFFFF00;
    do {
        t20 = *(int *)0xC2A9320;
        t21 = *(int *)((t18 + 0x0));
        t18 = (t18 + 0x4);
        FUN_0c05778a(0xC2A922C, t21, (float)((t20 + t19) + 0x150), 304.0f);
        t17 = (t17 + 0x1);
        t19 = (t19 + 0x40);
    } while ((int)t17 < (int)0x7);
    *(float *)0xC2A9240 = 0.25f;
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A9250 = 0.25f;
    t23 = *(int *)0xC2A9320;
    FUN_0c05778a(0xC2A922C, 0xEC, (float)(t23 + 0x188), 440.0f);
    *(float *)0xC2A9248 = 0.25f;
    *(float *)0xC2A9250 = 0.5f;
    t25 = *(int *)0xC2A9320;
    FUN_0c05778a(0xC2A922C, 0xEC, (float)(t25 + 0x1C8), 440.0f);
    *(float *)0xC2A9248 = 0.5f;
    *(float *)0xC2A9250 = 0.75f;
    t27 = *(int *)0xC2A9320;
    FUN_0c05778a(0xC2A922C, 0xEC, (float)(t27 + 0x208), 440.0f);
    *(float *)0xC2A9248 = 0.75f;
    *(float *)0xC2A9250 = 1.0f;
    t29 = *(int *)0xC2A9320;
    FUN_0c05778a(0xC2A922C, 0xEC, (float)(t29 + 0x248), 440.0f);
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A9250 = 1.0f;
    *(float *)0xC2A9240 = 1.0f;
    t31 = *(int *)0xC2A9324;
    if (t31 == 1) {
        t32 = *(int *)0xC2A9328;
        if (t32 != -1) {
            pfSetFont(0x1);
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            u36 = *(float *)0xC057F64;
            u37 = *(float *)0xC057F68;
            pfLocate(u37, u36);
            return pfPuts(0xC0D0AA0);
        }
        return t32;
    }
    return t31;
}

int FUN_0c058828(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    float u7;
    float u8;
    float u9;
    int t11;
    int t13;
    int t15;
    int t17;
    float u18;
    int t20;
    int t21;

    t0 = *(int *)0xC2A968C;
    if ((int)t0 > 0) {
        t1 = *(int *)0xC2A968C;
        *(unsigned int *)0xC2A968C = (t1 - 64);
    }
    t2 = *(int *)0xC2A96A4;
    if (t2 == 0) {
        t3 = *(int *)0xC2A968C;
        if (t3 == 0) {
            *(unsigned int *)0xC2A96A4 = 0x1;
        }
    }
    *(unsigned int *)0xC2A91D8 = 0xE3;
    t6 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t6 + 0x8);
    u7 = *(float *)0xC05894C;
    *(float *)0xC2A91E0 = u7;
    u8 = *(float *)0xC058950;
    *(float *)0xC2A91E4 = u8;
    u9 = *(float *)0xC058954;
    *(float *)0xC2A91E8 = u9;
    *(float *)0xC2A91EC = 1.0f;
    *(unsigned int *)0xC2A9200 = 0x0;
    *(unsigned int *)0xC2A920C = 0xA;
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE8;
    *(float *)0xC2A91E8 = 1.0f;
    t11 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t11 + 0x53);
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE7;
    t13 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t13 + 0xD3);
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE9;
    t15 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t15 + 0x146);
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE3;
    t17 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t17 + 0x1CA);
    u18 = *(float *)0xC05895C;
    *(float *)0xC2A91E8 = u18;
    nlSprPut(0xC2A91D8);
    *(float *)0xC2A91E8 = 1.0f;
    *(unsigned int *)0xC2A91D8 = 0xE4;
    t20 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t20 + 0x24C);
    t21 = nlSprPut(0xC2A91D8);
    return t21;
}

int FUN_0c0596ac(void)
{
    int t0;
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
    int t15;
    int t16;
    int t18;
    int t22;
    int t19;
    int t20;
    int t55;
    int t57;
    int t56;
    int t58;
    int t72;
    int t59;
    int t70;
    int t60;
    int t61;
    int t62;
    int t65;
    int t66;
    int t67;

    t0 = *(int *)0xC2A96F4;
    if (t0 == 0) {
        Voice_ShutUp(0x0);
        Voice_Request(0xC130EC8, 0x0, 0x7F, 0x0);
    }
    t3 = *(int *)0xC2A96F4;
    t4 = *(int *)0xC2A97A8;
    if ((int)t3 >= (int)t4) {
        t5 = *(int *)0xC2A97E8;
        if (t5 == 0) {
            t6 = *(int *)0xC2A982C;
            if (t6 == 1) {
                t7 = *(int *)0xC2A9830;
                if (t7 == 1) {
                    t8 = *(int *)0xC2A9834;
                    if (t8 == 1) {
                        t9 = *(int *)0xC2A9838;
                        if (t9 == 1) {
                            t10 = *(int *)0xC2A983C;
                            if (t10 == 1) {
                                t11 = *(int *)0xC2A9840;
                                if (t11 == 1) {
                                    t12 = *(int *)0xC2A9844;
                                    if (t12 == 1) {
                                        t13 = *(int *)0xC2A9848;
                                        if (t13 == 1) {
                                            Voice_ShutUp(0x0);
                                            t15 = *(int *)0xC2A97E0;
                                            if (t15 == 0) {
                                                t16 = *(int *)0xC2A97D8;
                                                if (t16 == 0x3E7) {
                                                    Voice_Request(0xC130EE0, 0x0, 0x7F, 0x0);
                                                } else {
                                                    t18 = *(int *)0xC2A97D8;
                                                    t22 = 0xC130EF8;
                                                    if (t18 != 99) {
                                                        t19 = *(int *)0xC2A97D8;
                                                        t20 = *(int *)(((t19 << 2) + 0xC130FB8));
                                                        t22 = t20;
                                                    }
                                                    Voice_Request(t22, 0x0, 0x7F, 0x0);
                                                }
                                            }
                                            *(unsigned int *)0xC2A97E8 = 0x1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t55 = *(int *)0xC2A97D8;
    t57 = 0x7;
    if (t55 != 0x3E7) {
        t56 = t55;
        if (t55 == 99) {
            t56 = 0x8;
        }
        t57 = t56;
    }
    t58 = *(int *)0xC1EE210;
    t72 = t58;
    if (t58 != 2) {
        t59 = GetMenuMode(0x1);
        t70 = t59;
        if (t59 != 0) {
            t60 = *(int *)0xC2A97A8;
            t61 = *(int *)(((t57 << 2) + 0xC130FD8));
            t62 = *(int *)0xC2A96F4;
            if (t62 == (t61 + t60)) {
                gdc_StopStreamVoice(0x0);
            }
            t65 = *(int *)0xC2A97A8;
            t66 = *(int *)(((t57 << 2) + 0xC130FD8));
            t67 = *(int *)0xC2A96F4;
            if (t67 == ((t66 + t65) + 0x3C)) {
                *(unsigned int *)0xC1EE238 = 0x2;
            }
            t70 = 0xC130FD8;
        }
        t72 = t70;
    }
    return t72;
}

int FUN_0c05a460(void)
{
    int t0;
    int t1;
    float u2;
    float u3;
    int t4;
    int t5;
    float u7;
    int t8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u15;
    int t16;
    float u17;
    float u18;

    t0 = *(int *)0xC2A96F4;
    if ((int)t0 <= (int)0x58) {
        return 0xC2A96F4;
    }
    *(unsigned int *)0xC2A96F8 = 0x5D;
    t1 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t1 + 0x1BC);
    u2 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u2 + 1.0f);
    u3 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u3 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    *(unsigned int *)0xC2A972C = 0xA;
    t4 = 0x0;
    t5 = 0x68;
    do {
        *(float *)0xC2A96FC = (float)t5;
        nlSprPut(0xC2A96F8);
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x11);
    } while ((int)t4 < (int)0x8);
    *(unsigned int *)0xC2A96F8 = 0x146;
    u7 = *(float *)0xC05A5CC;
    *(float *)0xC2A96FC = u7;
    t8 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t8 + 0x18C);
    u9 = *(float *)0xC05A5D0;
    *(float *)0xC2A9704 = u9;
    u10 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u10 + 1.0f);
    u11 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u11 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A972C = 0x200A;
    u12 = *(float *)0xC05A5D4;
    nlObjPutSetFadeColor(u12, u12, u12);
    nlSprPut(0xC2A96F8);
    *(float *)0xC2A9704 = u9;
    *(unsigned int *)0xC2A972C = 0xA;
    *(unsigned int *)0xC2A96F8 = 0x12E;
    u15 = *(float *)0xC05A5DC;
    *(float *)0xC2A96FC = u15;
    t16 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t16 + 0x1B4);
    u17 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u17 + 1.0f);
    u18 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u18 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    nlSprPut(0xC2A96F8);
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}

int psgFrameState5(int a4)
{
    int t0;
    float u4;
    int t5;
    int t7;
    float u9;
    int t10;
    float u14;
    float u15;
    float u18;
    float u19;
    int t20;
    float u25;
    int t26;
    int t28;
    float u30;
    int t31;
    int t32;
    int t33;
    int t35;
    float u36;
    int t37;
    int t38;
    float u45;
    int t46;
    float u48;
    float u47;
    int t50;
    float u52;
    int t53;
    float u54;
    int t55;
    int t56;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            nlPushMatrix(0x0);
            psgSeatMatrix(a4);
            FUN_0c0713d8(a4);
            u4 = *(float *)((a4 + 0x38));
            t5 = *(int *)((a4 + 0x34));
            FcvStoreBuffer(t5, (a4 + 0x3C), u4);
            t7 = *(int *)((a4 + 0x0));
            FcvPlayBuffer((a4 + 0x3C), t7);
            u9 = *(float *)((a4 + 0x38));
            *(float *)((a4 + 0x38)) = (u9 + 1.0f);
            if ((int)(u9 + 1.0f) == 5) {
                t10 = *(int *)0xC1EE794;
                if ((int)t10 > 0) {
                    FUN_0c0532ea(0xFFFFFFFF);
                }
            }
            u14 = *(float *)0xC070884;
            u15 = *(float *)((a4 + 0x38));
            if (u15 == u14) {
                Drv_StartAction(0x7, 0x0, 0x1);
            }
            u18 = *(float *)0xC07088C;
            u19 = *(float *)((a4 + 0x38));
            if (!(u18 > u19)) {
                t20 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t20 | 0x20);
            }
            return nlPopMatrix(0x1);
        }
        nlPushMatrix(0x0);
        psgSeatMatrix(a4);
        FUN_0c0713d8(a4);
        u25 = *(float *)((a4 + 0x38));
        t26 = *(int *)((a4 + 0x34));
        FcvStoreBuffer(t26, (a4 + 0x3C), u25);
        t28 = *(int *)((a4 + 0x0));
        FcvPlayBuffer((a4 + 0x3C), t28);
        u30 = *(float *)((a4 + 0x38));
        *(float *)((a4 + 0x38)) = (u30 + 1.0f);
        t31 = *(signed char *)((a4 + 0x149));
        if ((t31 & 16) != 0) {
            t32 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x24)) = (t32 + 0x1);
            t33 = *(int *)((a4 + 0x24));
            psgEnterState5(a4);
        } else {
            t35 = *(int *)((a4 + 0x34));
            u36 = *(float *)((a4 + 0x38));
            t37 = *(int *)((t35 + 0x0));
            if (!((float)(t37 - 2) > u36)) {
                t38 = *(int *)((a4 + 0x24));
                psgEnterState5(a4);
            }
        }
        return nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    psgSeatMatrix(a4);
    FUN_0c0713d8(a4);
    u45 = *(float *)((a4 + 0x38));
    t46 = *(int *)((a4 + 0x34));
    u48 = 58.0f;
    if (58.0f > u45) {
        u47 = *(float *)((a4 + 0x38));
        u48 = u47;
    }
    FcvStoreBuffer(t46, (a4 + 0x3C), u48);
    t50 = *(int *)((a4 + 0x0));
    FcvPlayBuffer((a4 + 0x3C), t50);
    u52 = *(float *)((a4 + 0x38));
    *(float *)((a4 + 0x38)) = (u52 + 1.0f);
    t53 = *(int *)((a4 + 0x34));
    u54 = *(float *)((a4 + 0x38));
    t55 = *(int *)((t53 + 0x0));
    if (!((float)(t55 - 2) > u54)) {
        t56 = *(int *)((a4 + 0x24));
        *(unsigned int *)((a4 + 0x24)) = (t56 + 0x1);
        psgEnterState5(a4);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c07e580(float f4, float f5, float f6, float f7)
{
    float u1;
    float u3;
    float u5;
    float u8;
    float u6;
    int t9;
    int t10;
    int t11;
    int t12;

    u1 = (f4 * 255.0f);
    if ((f4 * 255.0f) > 2.14748365e+09f) {
        u1 = ((f4 * 255.0f) + -4.2949673e+09f);
    }
    u3 = (f5 * 255.0f);
    if ((f5 * 255.0f) > 2.14748365e+09f) {
        u3 = ((f5 * 255.0f) + -4.2949673e+09f);
    }
    u5 = (f6 * 255.0f);
    if ((f6 * 255.0f) > 2.14748365e+09f) {
        u5 = ((f6 * 255.0f) + -4.2949673e+09f);
    }
    u8 = (f7 * 255.0f);
    if ((f7 * 255.0f) > 2.14748365e+09f) {
        u6 = *(float *)0xC07E720;
        u8 = ((f7 * 255.0f) + u6);
    }
    t9 = (int)u1;
    if ((unsigned int)(int)u1 > (unsigned int)0xFF) {
        t9 = 0xFF;
    }
    t10 = (int)u3;
    if ((unsigned int)(int)u3 > (unsigned int)0xFF) {
        t10 = 0xFF;
    }
    t11 = (int)u5;
    if ((unsigned int)(int)u5 > (unsigned int)0xFF) {
        t11 = 0xFF;
    }
    t12 = (int)u8;
    if ((unsigned int)(int)u8 > (unsigned int)0xFF) {
        t12 = 0xFF;
    }
    return ((((((t9 << 8) | t10) << 8) | t11) << 8) | t12);
}

int kmSetUserClipLevelAdjust(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t10;
    int t15;
    int t16;
    int t17;
    int t18;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t38;
    int t33;
    int t34;
    int t39;
    int t42;
    int t44;
    int t46;

    t0 = *(int *)0xC2EA6B8;
    if (t0 == 1) {
        t1 = *(int *)0xC2EA944;
        t2 = *(int *)0xC2EA6BC;
        t3 = *(int *)0xC2EA898;
        *(unsigned int *)0xC2EA898 = (t3 - (((t2 * t1) << 2) << 1));
        t4 = *(int *)0xC2EA89C;
        *(unsigned int *)0xC2EA89C = (t4 - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 == 1) {
            t8 = *(int *)0xC2EA6A0;
            t9 = 0x0;
            if ((t8 & 0x1) == 1) {
                t9 = 0x1;
            }
            if (t9 != 1) {
                t10 = *(int *)0xC2EA6A0;
                if ((t10 & 32) != 0) {
                    *(unsigned int *)0xC2EA6BC = 0x10;
                } else {
                    *(unsigned int *)0xC2EA6BC = 0x8;
                }
            } else {
                *(unsigned int *)0xC2EA6BC = 0x10;
            }
            t15 = *(int *)0xC2EA944;
            t16 = *(int *)0xC2EA6BC;
            t17 = *(int *)0xC2EA898;
            *(unsigned int *)0xC2EA898 = (t17 + (((t16 * t15) << 2) << 1));
            t18 = *(int *)0xC2EA89C;
            *(unsigned int *)0xC2EA89C = ((((t16 * t15) << 2) << 1) + t18);
        }
    } else {
        *(unsigned int *)0xC2EA6BC = 0x0;
    }
    t25 = *(int *)0xC2EA940;
    t26 = *(int *)0xC2EA6D4;
    t27 = *(int *)0xC2EA6BC;
    t28 = *(int *)0xC2EA6C4;
    t29 = 0xC2EA6BC;
    if ((int)t27 < (int)t26) {
        t29 = 0xC2EA6D4;
    }
    t30 = *(int *)((t29 + 0x0));
    t31 = *(int *)0xC2EA6D4;
    t32 = *(int *)0xC2EA6C4;
    t38 = (t28 - t30);
    if ((unsigned int)(t31 + (t28 - t30)) > (unsigned int)t32) {
        t33 = *(int *)0xC2EA6BC;
        t34 = *(int *)0xC2EA6C4;
        t38 = (t34 - t33);
    }
    t39 = *(int *)0xC2EA6C4;
    if ((unsigned int)t39 < (unsigned int)t38) {
        *(unsigned int *)0xC2EA6C4 = t38;
    }
    *(unsigned int *)0xC2EA940 = ((((t38 & 0x3FF) << 8) << 2) | (t25 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    t42 = *(int *)0xC2EA940;
    kmiWriteRegister(0x5C, t42);
    t44 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, t44);
    *(unsigned int *)0xC2EA6B8 = a4;
    if (a5 != 0) {
        t46 = *(int *)0xC2EA6BC;
        *(unsigned int *)((a5 + 0x0)) = t46;
    }
    return 0x0;
}

int buAnalyzeBackupFileImage(int a4, int a5)
{
    int t0;
    int t38;
    int t1;
    int t37;
    int t2;
    int t36;
    int t3;
    int t35;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t34;
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
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t28;

    t0 = *(short *)((a5 + 0x40));
    t38 = 0xFFFFFF21;
    if (t0 != 0) {
        t1 = *(short *)((a5 + 0x40));
        t37 = 0xFFFFFF21;
        if ((int)(unsigned short)t1 <= (int)0x3) {
            t2 = *(short *)((a5 + 0x44));
            t36 = 0xFFFFFF21;
            if ((int)(unsigned short)t2 <= (int)0x3) {
                t3 = *(int *)((a5 + 0x48));
                t35 = 0xFFFFFF21;
                if ((unsigned int)t3 <= (unsigned int)0xE1000) {
                    t4 = *(short *)((a5 + 0x40));
                    t5 = *(int *)((((unsigned short)t4 << 2) + 0xC177AA8));
                    t6 = *(short *)((a5 + 0x44));
                    t7 = *(int *)((((unsigned short)t6 << 2) + 0xC177AB8));
                    t8 = *(int *)((a5 + 0x48));
                    t34 = 0xFFFFFF21;
                    if ((unsigned int)(((t5 + t7) + t8) + 0x80) <= (unsigned int)0xE1000) {
                        t9 = 0x80;
                        t10 = 0x10;
                        t11 = a4;
                        t12 = a5;
                        while (t10 != 0) {
                            t13 = *(signed char *)((t12 + 0x0));
                            t9 = t13;
                            t12 = (t12 + 0x1);
                            t10 = (t10 - 1);
                            *(unsigned char *)((t11 + 0x0)) = t9;
                            t11 = (t11 + 0x1);
                        }
                        *(unsigned char *)((t11 + 0x0)) = 0x0;
                        t14 = t9;
                        t15 = 0x20;
                        t16 = (a4 + 0x12);
                        t17 = (a5 + 0x10);
                        while (t15 != 0) {
                            t18 = *(signed char *)((t17 + 0x0));
                            t17 = (t17 + 0x1);
                            t14 = t18;
                            t15 = (t15 - 1);
                            *(unsigned char *)((t16 + 0x0)) = t14;
                            t16 = (t16 + 0x1);
                        }
                        *(unsigned char *)((t16 + 0x0)) = 0x0;
                        t19 = t14;
                        t20 = 0x10;
                        t21 = (a4 + 0x34);
                        t22 = (a5 + 0x30);
                        while (t20 != 0) {
                            t23 = *(signed char *)((t22 + 0x0));
                            t22 = (t22 + 0x1);
                            t19 = t23;
                            t20 = (t20 - 1);
                            *(unsigned char *)((t21 + 0x0)) = t19;
                            t21 = (t21 + 0x1);
                        }
                        *(unsigned char *)((t21 + 0x0)) = 0x0;
                        t24 = *(short *)((a5 + 0x42));
                        *(unsigned short *)((a4 + 0x4E)) = t24;
                        t25 = *(short *)((a5 + 0x40));
                        *(unsigned short *)((a4 + 0x4C)) = t25;
                        *(unsigned int *)((a4 + 0x44)) = (a5 + 0x60);
                        *(unsigned int *)((a4 + 0x48)) = (a5 + 0x80);
                        t26 = *(short *)((a5 + 0x44));
                        *(unsigned short *)((a4 + 0x54)) = t26;
                        t27 = *(short *)((a5 + 0x44));
                        if (t27 == 0) {
                            *(unsigned int *)((a4 + 0x50)) = 0x0;
                            t28 = ((a5 + 0x80) + t5);
                        } else {
                            *(unsigned int *)((a4 + 0x50)) = ((a5 + 0x80) + t5);
                            t28 = (((a5 + 0x80) + t5) + t7);
                        }
                        t29 = *(int *)((a5 + 0x48));
                        *(unsigned int *)((a4 + 0x5C)) = t29;
                        t30 = *(int *)((a5 + 0x48));
                        if (t30 == 0) {
                            *(unsigned int *)((a4 + 0x58)) = 0x0;
                        } else {
                            *(unsigned int *)((a4 + 0x58)) = t28;
                        }
                        t31 = *(short *)((a5 + 0x46));
                        *(unsigned short *)((a5 + 0x46)) = 0x0;
                        t32 = buCalcCRC(a5, (((t5 + t7) + t8) + 0x80));
                        *(unsigned short *)((a5 + 0x46)) = t31;
                        t33 = 0x0;
                        if ((unsigned short)t32 != (unsigned short)t31) {
                            t33 = 0xFFFFFF20;
                        }
                        t34 = t33;
                    }
                    t35 = t34;
                }
                t36 = t35;
            }
            t37 = t36;
        }
        t38 = t37;
    }
    return t38;
}

int adxf_read_sj32(int a4, int a5, int a6)
{
    int t3;
    int t23;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t19;
    int t15;
    int t17;
    int t29;
    int t27;
    int t25;
    int t21;

    if (a4 == 0) {
        ADXERR_CallErrFunc();
        t29 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc();
            t27 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                ADXERR_CallErrFunc();
                t25 = 0xFFFFFFFD;
            } else {
                t3 = *(signed char *)((a4 + 0x1));
                t23 = 0x0;
                if (t3 != 2) {
                    t4 = *(int *)((a4 + 0x4));
                    if (t4 != 0) {
                        ADXERR_CallErrFunc();
                        t21 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock();
                        t7 = *(int *)((a4 + 0xC));
                        t8 = *(int *)((a4 + 0x18));
                        *(unsigned int *)((a4 + 0x1C)) = (t7 + t8);
                        t9 = *(int *)((a4 + 0x10));
                        t10 = *(int *)((a4 + 0x18));
                        t11 = (t9 - t10);
                        if ((int)a5 < (int)(t9 - t10)) {
                            t11 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t11;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t12 = *(int *)((a4 + 0x20));
                        t13 = *(int *)((a4 + 0x1C));
                        t14 = ADXSTM_OpenRange(t13, t12, a6);
                        t19 = 0xFFFFFFFF;
                        if (t14 != 0) {
                            *(unsigned int *)((a4 + 0x4)) = t14;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            t15 = *(int *)((a4 + 0x4));
                            ADXSTM_Start(t15);
                            t17 = *(int *)((a4 + 0x20));
                            t19 = t17;
                        }
                        ADXCRS_Unlock();
                        t21 = t19;
                    }
                    t23 = t21;
                }
                t25 = t23;
            }
            t27 = t25;
        }
        t29 = t27;
    }
    return t29;
}

int kmiExecuteDMAChain(void)
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
    int t15;
    int t16;
    int t17;

    t0 = *(int *)0xC2BF674;
    t1 = *(int *)0xC2BF678;
    t2 = *(int *)(((((t1 << 8) + 0xC2BF460) + (((t0 << 2) << 2) << 1)) + 0x18));
    *(unsigned int *)(((((t1 << 8) + 0xC2BF460) + (((t0 << 2) << 2) << 1)) + 0x18)) = (t2 & 0xFFFFFFFC);
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((0xC2BF66C + (t3 << 2)));
        t5 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x18));
        if ((t5 & 0x3) == 1) break;
        t3 = (t3 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)0x2) {
            return 0x0;
        }
    }
    t6 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x18));
    *(unsigned int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x18)) = ((t6 & 0xFFFFFFFC) | 0x2);
    t7 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x4));
    *(unsigned int *)0xFFA00020 = t7;
    t8 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0xC));
    *(unsigned int *)0xFFA00024 = ((t8 + 0xF0000000) << 1);
    t9 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x14));
    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)t9 >> 2) >> 2) >> 1);
    t10 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x18));
    t11 = 0x241;
    if ((t10 & 4) == 0) {
        t11 = 0x2C1;
    }
    t12 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x18));
    t13 = t11;
    if ((t12 & 16) != 0) {
        t13 = (t11 | 0x1000);
    }
    *(unsigned int *)0xFFA0002C = t13;
    t15 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0xC));
    *(unsigned int *)0xA05F6800 = t15;
    t16 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x14));
    *(unsigned int *)0xA05F6804 = t16;
    *(unsigned int *)0xA05F6808 = 0x1;
    *(unsigned int *)0xC2BF674 = t4;
    *(unsigned int *)0xC2BF678 = t3;
    t17 = *(int *)((((t3 << 2) + 0xC2BF66C) + 0x0));
    *(unsigned int *)((((t3 << 2) + 0xC2BF66C) + 0x0)) = ((t17 + 0x1) & 0x7);
    return 0x1;
}

int kmiFBallocEx(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t9;

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t2 = *(int *)0xC2EA684;
    if ((t2 & 4) != 0) {
        t3 = *(int *)0xC177FCC;
        t4 = *(int *)0xC177FE0;
        t5 = 0x0;
        if ((unsigned int)t3 <= (unsigned int)t4) {
            t5 = 0x1;
        }
        t6 = FUN_0c156c32(t5, (t1 << 1), a5, 0x8);
        t9 = t6;
    } else {
        t7 = FUN_0c156c32(0x0, (t1 << 1), a5, 0x8);
        t9 = t7;
    }
    if (t9 == 0) {
        t10 = *(int *)((a5 + 0x1C));
        *(unsigned int *)((a5 + 0x14)) = t1;
        t11 = kmyConvertAddress64to32(t10);
        *(unsigned int *)((a5 + 0x1C)) = t11;
        *(unsigned int *)((a6 + 0x14)) = t1;
        t12 = kmyConvertAddress64to32((t10 + 0x4));
        *(unsigned int *)(((a6 + 0x1C) + 0x0)) = t12;
    }
    return t9;
}

int FUN_0c158958(int a4, int a5)
{
    int t0;
    int t8;
    int t7;
    int t6;
    int t5;
    int t4;
    int t3;
    int t2;
    int t1;

    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 != 3) {
                    if (a5 != 4) {
                        if (a5 == 5) {
                            *(unsigned int *)((a4 + 0x25C)) = 0xC158E88;
                            t3 = 0x25C;
                        } else {
                            if (a5 == 6) {
                                *(unsigned int *)((a4 + 0x264)) = 0xC158E8C;
                                t2 = 0x264;
                            } else {
                                if (a5 == 7) {
                                    *(unsigned int *)((a4 + 0x26C)) = 0xC158E90;
                                    t1 = 0x26C;
                                } else {
                                    t0 = a5;
                                    if (a5 == 8) {
                                        *(unsigned int *)((a4 + 0x274)) = 0xC158E94;
                                        t0 = 0x274;
                                    }
                                    t1 = t0;
                                }
                                t2 = t1;
                            }
                            t3 = t2;
                        }
                        t4 = t3;
                    } else {
                        *(unsigned int *)((a4 + 0x254)) = 0xC158E84;
                        t4 = 0x254;
                    }
                    t5 = t4;
                } else {
                    *(unsigned int *)((a4 + 0x24C)) = 0xC158E80;
                    t5 = 0x24C;
                }
                t6 = t5;
            } else {
                *(unsigned int *)((a4 + 0x244)) = 0xC158E5A;
                t6 = 0x244;
            }
            t7 = t6;
        } else {
            *(unsigned int *)((a4 + 0x23C)) = 0xC158E56;
            t7 = 0x23C;
        }
        t8 = t7;
    } else {
        *(unsigned int *)((a4 + 0x234)) = 0xC158E52;
        t8 = 0x234;
    }
    return t8;
}

int kmfSetVirticalFilterMode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t53;
    int t56;
    int t57;
    int t58;
    int t45;
    int t48;
    int t49;
    int t50;
    int t37;
    int t40;
    int t41;
    int t42;
    int t5;
    int t29;
    int t32;
    int t33;
    int t34;
    int t6;
    int t23;
    int t25;
    int t26;
    int t27;
    int t7;
    int t18;
    int t19;
    int t20;
    int t21;
    int t8;
    int t13;
    int t14;
    int t15;
    int t16;
    int t9;
    int t10;
    int t11;
    int t12;
    int t59;
    int t60;
    int t62;
    int t64;

    t0 = *(int *)0xC2EA6DC;
    t1 = *(int *)0xC2EA6E0;
    t2 = *(int *)0xC2EA6C4;
    t3 = *(int *)0xC2EA940;
    t4 = *(int *)0xC2EA980;
    t53 = t2;
    t56 = ((unsigned short)t4 & 0xFF00);
    t57 = t1;
    t58 = t0;
    if (a4 != 0) {
        t45 = t2;
        t48 = (unsigned short)t4;
        t49 = t1;
        t50 = t0;
        if (a4 != 1) {
            t37 = t2;
            t40 = (unsigned short)t4;
            t41 = t1;
            t42 = t0;
            if (a4 == 2) {
                t5 = *(int *)0xC2EA6A0;
                t29 = t2;
                t32 = (unsigned short)t4;
                t33 = t1;
                t34 = t0;
                if ((t5 & 3) == 0) {
                    t6 = *(int *)0xC2EA6A0;
                    t23 = t2;
                    t25 = (unsigned short)t4;
                    t26 = t1;
                    t27 = t0;
                    if ((t6 & 32) != 0) {
                        t7 = *(int *)0xC2EA6A0;
                        t18 = 0xD6;
                        t19 = 0x471;
                        t20 = (t1 + 0xC);
                        t21 = (t0 + 0xC);
                        if ((t7 & 0x1) != 1) {
                            t8 = *(int *)0xC2EA6A0;
                            t13 = 0xD6;
                            t14 = 0x471;
                            t15 = (t1 + 0xC);
                            t16 = (t0 + 0xC);
                            if ((t8 & 0x2C) == 32) {
                                t9 = t2;
                                t10 = (unsigned short)t4;
                                t11 = t1;
                                t12 = t0;
                                if (0x1 == 0) {
                                    t9 = 0xD6;
                                    t10 = 0x471;
                                    t11 = (t1 + 0xC);
                                    t12 = (t0 + 0xC);
                                }
                                t13 = t9;
                                t14 = t10;
                                t15 = t11;
                                t16 = t12;
                            }
                            t18 = t13;
                            t19 = t14;
                            t20 = t15;
                            t21 = t16;
                        }
                        t23 = t18;
                        t25 = t19;
                        t26 = t20;
                        t27 = t21;
                    }
                    t29 = t23;
                    t32 = t25;
                    t33 = t26;
                    t34 = t27;
                }
                t37 = t29;
                t40 = t32;
                t41 = t33;
                t42 = t34;
            }
            t45 = t37;
            t48 = t40;
            t49 = t41;
            t50 = t42;
        }
        t53 = t45;
        t56 = t48;
        t57 = t49;
        t58 = t50;
    }
    t59 = *(int *)0xC2EA6D4;
    t60 = *(int *)0xC2EA6D4;
    kmiWaitVlank();
    t62 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, (t62 & 0xFFFFFFFE));
    t64 = *(int *)0xC2EA984;
    kmiWriteRegister(0xE8, (t64 | 0x8));
    kmiWriteRegister(0xF0, ((t58 + t59) | ((t57 + t60) << 16)));
    kmiWriteRegister(0x5C, ((t3 & 0xFFF003FF) | (((t53 & 0x3FF) << 8) << 2)));
    kmiWriteRegister(0xF4, ((t4 & 0xFFFF0000) | t56));
    *(unsigned int *)0xC2EA928 = 0x1;
    return 0x0;
}

int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    int t48;
    int t45;
    int t0;
    int t1;
    int t6;
    int t3;
    int t4;
    int t7;
    int t8;
    int t37;
    int t9;
    int t10;
    int t32;
    int t11;
    int t12;
    int t13;
    int t15;
    int t17;
    int t19;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t28;
    int t42;
    int t30;

    t48 = 0xE;
    if (a4 != 0) {
        t45 = 0xE;
        if (a5 != 0) {
            *(unsigned int *)0xC2B8C7C = a4;
            *(unsigned int *)0xC2B8C80 = a5;
            *(unsigned int *)0xC2B8C84 = a7;
            *(unsigned int *)0xC2B8C58 = a6;
            *(unsigned int *)0xC2EA6B4 = a6;
            t0 = kmiGetSysConfigFlag();
            if (t0 != 0x80000000) {
                t1 = kmiAddSysConfigFlag(0x800);
                t6 = 0x0;
                if (t1 == 0xB00) {
                    kmiSetSysConfigFlag(0x80000000);
                    t3 = *(int *)0xC2B8C94;
                    t4 = kmiAllocSysConfig(t3);
                    t6 = t4;
                }
                t42 = t6;
            } else {
                t7 = *(int *)((a4 + 0x18));
                t8 = *(int *)((a5 + 0x18));
                t37 = 0xF;
                if (t7 == t8) {
                    t9 = *(int *)((a4 + 0x14));
                    t10 = *(int *)((a5 + 0x14));
                    t32 = 0x10;
                    if (t9 == t10) {
                        t11 = *(int *)((a4 + 0x1C));
                        *(unsigned int *)0xC2EA9B4 = t11;
                        *(unsigned int *)0xC2EA9BC = 0x0;
                        t12 = *(int *)((a5 + 0x1C));
                        *(unsigned int *)0xC2EA9B8 = t12;
                        *(unsigned int *)0xC2EA9C0 = 0x0;
                        t13 = *(int *)0xC2EA950;
                        kmiWriteRegister(0x50, t13);
                        t15 = *(int *)0xC2EA950;
                        kmiWriteRegister(0x54, t15);
                        t17 = *(int *)0xC2EA9B4;
                        kmiWriteRegister(0x60, t17);
                        t19 = *(int *)0xC2EA9B8;
                        kmiWriteRegister(0x64, t19);
                        t21 = *(int *)0xC2EA9B4;
                        *(unsigned int *)0xC2EA950 = t21;
                        t22 = *(int *)0xC2EA9B8;
                        *(unsigned int *)0xC2EA954 = t22;
                        if (a6 == 1) {
                            *(unsigned int *)0xC2EA898 = 0x0;
                            *(unsigned int *)0xC2EA89C = 0x0;
                            t23 = *(int *)0xC2EA950;
                            kmiWriteRegister(0x50, t23);
                            t25 = *(int *)0xC2EA954;
                            t30 = t25;
                        } else {
                            t26 = *(int *)0xC2EA950;
                            kmiWriteRegister(0x50, t26);
                            t28 = *(int *)0xC2EA950;
                            t30 = t28;
                        }
                        kmiWriteRegister(0x54, t30);
                        *(unsigned int *)0xC2EA928 = 0x1;
                        *(unsigned int *)0xC2EA868 = a7;
                        t32 = 0x0;
                    }
                    t37 = t32;
                }
                t42 = t37;
            }
            t45 = t42;
        }
        t48 = t45;
    }
    return t48;
}

int kmSetFramebufferTexture(int a4)
{
    int t0;
    int t7;
    int t8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;

    t0 = *(int *)0xC2EA69C;
    t7 = 0x280;
    t8 = 0x1E0;
    if (t0 != 1) {
        t1 = *(int *)0xC2EA6A0;
        t2 = 0x140;
        if ((t1 & 16) != 0) {
            t2 = 0x280;
        }
        t3 = *(int *)0xC2EA6A0;
        t4 = 0xF0;
        if ((t3 & 32) != 0) {
            t4 = 0x1E0;
        }
        t7 = t2;
        t8 = t4;
    }
    t9 = *(int *)0xC2EA6A4;
    if (t9 != 3) {
        if (t9 != 0) {
            if (t9 != 1) {
                return 0x4;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            *(unsigned int *)((a4 + 0x8)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x2;
            *(unsigned int *)((a4 + 0xC)) = 0x400;
            *(unsigned int *)((a4 + 0x10)) = 0x400;
            *(unsigned int *)((a4 + 0x14)) = ((t7 * t8) << 1);
            *(unsigned int *)((a4 + 0x18)) = 0x10;
            t10 = *(int *)0xC178274;
            t11 = *(int *)(((t10 << 2) + 0xC2EA9B4));
            *(unsigned int *)((a4 + 0x1C)) = ((t11 << 2) << 1);
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x8000000;
        *(unsigned int *)((a4 + 0x0)) = 0x2;
        *(unsigned int *)((a4 + 0xC)) = 0x400;
        *(unsigned int *)((a4 + 0x10)) = 0x400;
        *(unsigned int *)((a4 + 0x14)) = ((t7 * t8) << 1);
        *(unsigned int *)((a4 + 0x18)) = 0x10;
        t12 = *(int *)0xC178274;
        t13 = *(int *)(((t12 << 2) + 0xC2EA9B4));
        *(unsigned int *)((a4 + 0x1C)) = ((t13 << 2) << 1);
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x4)) = 0x1;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0x2;
    *(unsigned int *)((a4 + 0xC)) = 0x400;
    *(unsigned int *)((a4 + 0x10)) = 0x400;
    *(unsigned int *)((a4 + 0x14)) = ((t7 * t8) << 1);
    *(unsigned int *)((a4 + 0x18)) = 0x10;
    t14 = *(int *)0xC178274;
    t15 = *(int *)(((t14 << 2) + 0xC2EA9B4));
    *(unsigned int *)((a4 + 0x1C)) = ((t15 << 2) << 1);
    return 0x0;
}

int kmResetPointer(void)
{
    int t0;
    int t1;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t16;
    int t19;

    t0 = *(int *)0xC2EA9C4;
    if (t0 == 1) {
        t1 = *(int *)0xC2EA9DC;
        kmiWriteRegister(0x8, 0x1);
        kmiWriteRegister(0x8, 0x0);
        t4 = *(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
        kmiWriteRegister(0x124, t4);
        t6 = *(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
        kmiWriteRegister(0x12C, t6);
        t8 = *(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
        kmiWriteRegister(0x128, t8);
        t10 = *(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
        kmiWriteRegister(0x130, t10);
        t12 = *(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
        kmiWriteRegister(0x164, t12);
        kmiWriteRegister(0x144, 0x80000000);
        kmiReadRegister(0x144);
        *(unsigned int *)0xC2EA9EC = 0x0;
        t16 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EA9E8 = t16;
    }
    t19 = *(int *)0xC178274;
    return kmiFlipVertexBuffer(t19);
}

int vmsfs_c_init(int a4)
{
    int t9;
    int t26;

    *(unsigned int *)0xC2EC558 = 0x0;
    *(unsigned int *)0xC2EC55C = 0x0;
    *(unsigned int *)0xC2EC560 = 0x0;
    *(unsigned int *)0xC2EC564 = 0x0;
    *(unsigned int *)0xC2EC568 = 0x0;
    *(unsigned int *)0xC2EC56C = 0x0;
    *(unsigned int *)0xC2EC570 = 0x0;
    *(unsigned int *)0xC2EC574 = 0x0;
    memset(0xC2EC578, 0x0, 0x400);
    memset(0xC2EC978, 0x30, 0x400);
    memset(0xC2ECD78, 0x31, 0x400);
    memset(0xC2ED178, 0x32, 0x400);
    memset(0xC2ED578, 0x33, 0x400);
    memset(0xC2ED978, 0x34, 0x400);
    memset(0xC2EDD78, 0x35, 0x400);
    memset(0xC2EE178, 0x36, 0x400);
    memset(0xC2EE578, 0x37, 0x400);
    t9 = vmsfb_init();
    t26 = 0xFFFFFFFF;
    if (t9 != 0) {
        if ((0x1 & a4) != 0) {
            vmsfb_create(0xC1631DC, 0xC2EC978, 0x400);
        }
        if ((0x2 & a4) != 0) {
            vmsfb_create(0xC1631E0, 0xC2ECD78, 0x400);
        }
        if ((0x4 & a4) != 0) {
            vmsfb_create(0xC1631E4, 0xC2ED178, 0x400);
        }
        if ((0x8 & a4) != 0) {
            vmsfb_create(0xC1631E8, 0xC2ED578, 0x400);
        }
        if ((0x10 & a4) != 0) {
            vmsfb_create(0xC1631EC, 0xC2ED978, 0x400);
        }
        if ((0x20 & a4) != 0) {
            vmsfb_create(0xC1631F0, 0xC2EDD78, 0x400);
        }
        if ((0x40 & a4) != 0) {
            vmsfb_create(0xC1631F4, 0xC2EE178, 0x400);
        }
        if ((a4 & 0x80) != 0) {
            vmsfb_create(0xC16324C, 0xC2EE578, 0x400);
        }
        t26 = 0x0;
    }
    return t26;
}

int vmsfs_fwrite1(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t38;
    int t6;
    int t7;
    int t37;
    int t8;
    int t9;
    int t36;
    int t10;
    int t11;
    int t34;
    int t12;
    int t23;
    int t13;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t22;
    int t26;
    int t27;
    int t30;
    int t39;
    int t31;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x28));
        vmsfs_unmount(t2);
        t39 = 0xFFFFFF01;
    } else {
        t4 = *(int *)((a4 + 0x28));
        t5 = vmsio_ismount(t4);
        t38 = 0xFFFFFF01;
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x28));
            t7 = *(signed char *)(((t6 * 0x148) + 0xC2EE998));
            t37 = 0xFFFFFF01;
            if (t7 != 0) {
                t8 = *(int *)((a4 + 0x28));
                t9 = buIsFormat();
                t36 = 0xFFFFFF03;
                if ((int)t9 >= 0) {
                    t10 = *(int *)((a4 + 0x28));
                    t11 = search_fat_free_xross(t10);
                    t34 = 0xFFFFFF04;
                    if ((int)t11 >= 0) {
                        t12 = vmsfs_write_retry(t10, t11, a5);
                        if ((int)t12 < 0) {
                            t23 = t12;
                            if (t12 != 0xFFFFFF01) {
                                t13 = t11;
                                for (;;) {
                                    set_fat(t10, t13);
                                    t15 = search_fat(t10, 0xFFFC);
                                    t13 = t15;
                                    if ((int)t13 < 0) break;
                                    t16 = vmsfs_write_retry(t10, t13, a5);
                                    if (t16 == 0) {
                                        set_fat(t10, t13);
                                        t18 = *(int *)((a4 + 0x38));
                                        if (t18 == 0xFFFF) {
                                            *(unsigned int *)((a4 + 0x38)) = (short)t13;
                                            *(unsigned int *)((a4 + 0x3C)) = (short)t13;
                                            t19 = *(int *)((a4 + 0x30));
                                            *(unsigned int *)((a4 + 0x30)) = (t19 + 0x1);
                                            return 0x0;
                                        }
                                        t20 = *(int *)((a4 + 0x3C));
                                        set_fat(t10, t20);
                                        *(unsigned int *)((a4 + 0x3C)) = (short)t13;
                                        t22 = *(int *)((a4 + 0x30));
                                        *(unsigned int *)((a4 + 0x30)) = (t22 + 0x1);
                                        return 0x0;
                                    }
                                }
                                t23 = 0xFFFFFF04;
                            }
                            t31 = t23;
                        } else {
                            set_fat(t10, t11);
                            t26 = *(int *)((a4 + 0x38));
                            if (t26 == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t11;
                            } else {
                                t27 = *(int *)((a4 + 0x3C));
                                set_fat(t10, t27);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t11;
                            t30 = *(int *)((a4 + 0x30));
                            *(unsigned int *)((a4 + 0x30)) = (t30 + 0x1);
                            t31 = 0x0;
                        }
                        t34 = t31;
                    }
                    t36 = t34;
                }
                t37 = t36;
            }
            t38 = t37;
        }
        t39 = t38;
    }
    return t39;
}

int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t28;
    int t6;
    int t7;
    int t27;
    int t8;
    int t9;
    int t26;
    int t10;
    int t11;
    int t12;
    int t25;
    int t13;
    int t14;
    int t15;
    int t24;
    int t16;
    int t23;
    int t18;
    int t19;
    int t22;
    int t29;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x28));
        vmsfs_unmount(t2);
        t29 = 0xFFFFFF01;
    } else {
        t4 = *(int *)((a4 + 0x28));
        t5 = vmsio_ismount(t4);
        t28 = 0xFFFFFF01;
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x28));
            t7 = *(signed char *)(((t6 * 0x148) + 0xC2EE998));
            t27 = 0xFFFFFF01;
            if (t7 != 0) {
                t8 = *(int *)((a4 + 0x28));
                t9 = buIsFormat();
                t26 = 0xFFFFFF03;
                if ((int)t9 >= 0) {
                    t10 = *(int *)((a4 + 0x30));
                    t11 = *(int *)((a4 + 0x28));
                    t12 = get_fat(t11, t10);
                    t25 = 0xFFFFFF04;
                    if ((unsigned short)t12 == 0xFFFC) {
                        t13 = *(int *)((a4 + 0x30));
                        t14 = *(int *)((((t0 * 0x148) + 0xC2EE990) + 0x1C));
                        t15 = *(int *)((t14 + 0x38));
                        t24 = 0xFFFFFF04;
                        if ((int)t13 < (int)t15) {
                            t16 = vmsfs_write_retry(t11, t10, a5);
                            t23 = t16;
                            if ((int)t16 >= 0) {
                                set_fat(t11, t10);
                                t18 = *(int *)((a4 + 0x38));
                                if (t18 == 0xFFFF) {
                                    *(unsigned int *)((a4 + 0x38)) = (short)t10;
                                } else {
                                    t19 = *(int *)((a4 + 0x3C));
                                    set_fat(t11, t19);
                                }
                                *(unsigned int *)((a4 + 0x3C)) = (short)t10;
                                t22 = *(int *)((a4 + 0x30));
                                *(unsigned int *)((a4 + 0x30)) = (t22 + 0x1);
                                t23 = 0x0;
                            }
                            t24 = t23;
                        }
                        t25 = t24;
                    }
                    t26 = t25;
                }
                t27 = t26;
            }
            t28 = t27;
        }
        t29 = t28;
    }
    return t29;
}

int vmsfs_fread1(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t28;
    int t6;
    int t7;
    int t27;
    int t8;
    int t9;
    int t26;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t24;
    int t15;
    int t23;
    int t16;
    int t22;
    int t17;
    int t18;
    int t21;
    int t19;
    int t20;
    int t29;
    int t25;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x28));
        vmsfs_unmount(t2);
        t29 = 0xFFFFFF01;
    } else {
        t4 = *(int *)((a4 + 0x28));
        t5 = vmsio_ismount(t4);
        t28 = 0xFFFFFF01;
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x28));
            t7 = *(signed char *)(((t6 * 0x148) + 0xC2EE998));
            t27 = 0xFFFFFF01;
            if (t7 != 0) {
                t8 = *(int *)((a4 + 0x28));
                t9 = buIsFormat();
                t26 = 0xFFFFFF03;
                if ((int)t9 >= 0) {
                    t10 = *(int *)((a4 + 0x40));
                    t11 = *(int *)((a4 + 0x28));
                    if (t10 == 0xFFFA) {
                        t12 = *(int *)((a4 + 0x34));
                        t13 = 0x0;
                        if (t12 != 0) {
                            t13 = 0xFFFF0000;
                        }
                        t25 = t13;
                    } else {
                        t14 = *(int *)((a4 + 0x34));
                        t24 = 0x0;
                        if (t14 != 0) {
                            t15 = *(int *)((a4 + 0x40));
                            t23 = 0xFFFFFF41;
                            if (t15 != 0xFFFC) {
                                t16 = *(int *)((a4 + 0x40));
                                t22 = 0xFFFFFF41;
                                if (t16 != 0xFFFF) {
                                    t17 = *(int *)((a4 + 0x40));
                                    t18 = vmsfs_read_retry(t11, t17, a5);
                                    t21 = t18;
                                    if ((int)t18 >= 0) {
                                        t19 = get_fat(t11, t17);
                                        *(unsigned int *)(((0x40 + a4) + 0x0)) = (unsigned short)t19;
                                        t20 = *(int *)((a4 + 0x34));
                                        *(unsigned int *)((a4 + 0x34)) = (t20 - 1);
                                        t21 = (t20 - 1);
                                    }
                                    t22 = t21;
                                }
                                t23 = t22;
                            }
                            t24 = t23;
                        }
                        t25 = t24;
                    }
                    t26 = t25;
                }
                t27 = t26;
            }
            t28 = t27;
        }
        t29 = t28;
    }
    return t29;
}

int ADXAMP_ExecHndl(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxamp_extract(a4);
    }
    return t0;
}

int ADXSJD_Create(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t23;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t21;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t1 * 0x98) + 0xC2F4F1C) + 0x0));
        if (t2 != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t23 = 0x0;
    if (t1 != 8) {
        t5 = SJRBF_GetBufPtr(t0);
        t6 = SJRBF_GetBufSize(t0);
        t7 = SJRBF_GetXtrSize(t0);
        t8 = ADXB_Create(a5, t5, ((unsigned int)t6 >> 1), (((unsigned int)t6 >> 1) + ((unsigned int)t7 >> 1)));
        *(unsigned int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x4)) = t8;
        ADXB_EntryGetWrFunc(t8, 0xC168460, ((t1 * 0x98) + 0xC2F4F1C));
        t10 = *(int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x4));
        t21 = 0x0;
        if (t10 != 0) {
            *(unsigned int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x8)) = a4;
            *(unsigned char *)((((t1 * 0x98) + 0xC2F4F1C) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t11 = 0x0;
                t12 = 0x0;
                do {
                    t13 = *(int *)((a6 + t11));
                    t12 = (t12 + 0x1);
                    *(unsigned int *)((((((t1 * 0x98) + 0xC2F4F1C) + 0xC) + t11) + 0x0)) = t13;
                    t11 = (t11 + 0x4);
                } while ((int)t12 < (int)a5);
            }
            *(unsigned char *)((((t1 * 0x98) + 0xC2F4F1C) + 0x1)) = 0x0;
            adxsjd_clear(((t1 * 0x98) + 0xC2F4F1C));
            *(unsigned int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x48)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x4C)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x50)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0xC2F4F1C) + 0x54)) = 0x0;
            *(unsigned char *)((((t1 * 0x98) + 0xC2F4F1C) + 0x0)) = 0x1;
            t21 = ((t1 * 0x98) + 0xC2F4F1C);
        }
        t23 = t21;
    }
    return t23;
}

int kmiFinalizeRender(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t27;
    int t28;
    int t14;

    t0 = *(int *)0xC2EA9E4;
    t1 = *(int *)((0xC2EA9CC + (t0 << 2)));
    if (t1 != -1) {
        t2 = *(int *)0xC2EA9F8;
        if (t2 == 0) {
            t3 = *(int *)0xC2EA930;
            *(unsigned int *)0xC2EA930 = (t3 | 0x20);
            t4 = *(int *)0xC2EA9E4;
            *(unsigned int *)(((t4 << 2) + 0xC2EA9CC)) = 0x3;
        }
        t8 = *(int *)0xC2EA684;
        if ((t8 & 0x1) != 0) {
            t9 = *(int *)0xA05F8138;
            t14 = t9;
        } else {
            t10 = *(int *)0xC2EA9E4;
            t11 = *(int *)((((((t10 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
            t14 = t11;
        }
        t15 = *(int *)0xC2EA9E4;
        t16 = *(int *)0xA05F8138;
        *(unsigned int *)(((((t15 & 0x1) << 2) + 0xC2F91CC) + 0x0)) = t16;
        t17 = *(int *)0xC2EA82C;
        t18 = *(int *)0xC2EA9E4;
        t19 = *(int *)((((((t18 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
        *(unsigned int *)0xC2EA834 = ((t17 & 0xFF000000) | (((t14 - t19) << 1) & 0xFFFFF8));
        t20 = (t14 + 0xA5000000);
        t21 = 0x30;
        t22 = 0xC2EA724;
        do {
            t23 = *(int *)((t22 + 0x0));
            t22 = (t22 + 0x4);
            t21 = (t21 - 1);
            *(unsigned int *)((t20 + 0x0)) = t23;
            t20 = (t20 + 0x4);
        } while (t21 != 0);
    }
    *(unsigned int *)0xC2EA88C = 0x0;
    t27 = *(int *)0xFFD8000C;
    t28 = *(int *)0xC2F91F0;
    *(unsigned int *)0xC2F91F4 = (t28 - t27);
    return 0x4C;
}

int frame_make(void)
{
    int t0;
    int t1;
    int t4;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)0xC2FA538;
    t1 = *(int *)((t0 + 0x10E4));
    t4 = 0x10E4;
    if ((int)t1 > 0) {
        t2 = *(int *)((t0 + 0x10E4));
        t3 = mpdrv_insertnop(t2);
        t4 = t3;
    }
    t5 = t4;
    t6 = (0x44C + t0);
    t7 = (t0 + 0x28);
    t8 = 0x0;
    while ((int)t8 < (int)0x18) {
        t9 = *(int *)0xC2FA538;
        t5 = t9;
        t10 = *(signed char *)((((0xF90 + t5) + t8) + 0x0));
        if (t10 != 0) {
            t11 = *(signed char *)((t7 + 0x6));
            t5 = t11;
            if (t5 == 0) {
                t13 = *(signed char *)((t7 + 0x4));
                t5 = t13;
                t5 = (unsigned char)t5;
                if (t5 != 1) {
                    if (t5 != 2) {
                        if (t5 != 3) {
                            if (t5 != 4) {
                                if (t5 == 9) {
                                    t14 = *(int *)((t6 + 0x0));
                                    t15 = t14;
                                    if ((t14 & 0x1) != 0) {
                                        t15 = 0x1;
                                    }
                                    t16 = mpdrv_set_getcond_ns(t8, t15);
                                    t5 = t16;
                                }
                            } else {
                                t17 = mpdrv_set_dkill_ns();
                                t5 = t17;
                            }
                        } else {
                            t18 = mpdrv_set_dreset_ns();
                            t5 = t18;
                        }
                    } else {
                        t19 = mpdrv_set_allstatreq_ns();
                        t5 = t19;
                    }
                } else {
                    t20 = mpdrv_set_dreq_ns();
                    t5 = t20;
                }
            }
        }
        t6 = (t6 + 0x78);
        t7 = (t7 + 0x2C);
        t8 = (t8 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}

