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
int gdc_FadeStopStreamSong(int, int);
int gdc_CourseBlockFind(int);
int pfOffsetOff(void);
int InitCollision(int);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int AnnounceSecretFlag(int);
int nd_peopleInitialize(int);
int DC_Reverse_Command_Check(void);
int End_Time_Count(int);
int Start_Pass_Judgement(int);
int nd_SprPut(int, int, float, float);
int Put_Adv_Logo_Sprite(void);
int LCDAccessOK(void);
int End_LoadSave(int);
int psgUpdatePartTracks(int);
int Voice_Clear(void);
void nlSetBackColor(int, int, int);
int kmiFBallocQueue(int, int, int, int);
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
int init_CarSound(void);
int carSteerWheels(int a4);
int Initialize_Replay_Part(void);
int gdc_CoursePut(int a4, int a5, float f4);
int gdc_CourseSet(int a4);
int gdc_SpriteFreeMenu(void);
int menuItemCabbie(int a4);
int CheckSoftReset(void);
int pcarTurnSelect(int a4);
int CarSel_Time_Count(void);
int DC_Chari_Command_Check(void);
int selectSetDriverFace(void);
int Init_Drum_Fare(void);
int Put_Remain_Time_Gauge(void);
int hudSplitFareDigits(int a4, int a5);
int Put_GameOver2(void);
int execAdvSprite(void);
int Put_Ranking_Header(void);
int Result_Voice(void);
int Result_Class_Line_Put(void);
int psgFrameState5(int a4);
int nlSpriteF2ARGB(float f4, float f5, float f6, float f7);
int kmSetUserClipLevelAdjust(int a4, int a5);
int buAnalyzeBackupFileImage(int a4, int a5);
int adxf_read_sj32(int a4, int a5, int a6);
int kmiExecuteDMAChain(void);
int kmiFBallocEx(int a4, int a5, int a6);
int kmiResetCallback(int a4, int a5);
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
struct o10E4_int { char p[0x10E4]; int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o24C_uint { char p[0x24C]; unsigned int v; };
struct o254_uint { char p[0x254]; unsigned int v; };
struct o25C_uint { char p[0x25C]; unsigned int v; };
struct o264_uint { char p[0x264]; unsigned int v; };
struct o26C_uint { char p[0x26C]; unsigned int v; };
struct o274_uint { char p[0x274]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_short { char p[0x40]; short v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o46_short { char p[0x46]; short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };





















int Result_Voice(void)
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
    int t55;
    int t57;
    int t58;
    int t72;
    int t59;
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
    t4 = (((struct o0_int *)0xC2A97A8)->v);
    if ((int)t3 >= (int)t4) {
        t5 = *(int *)0xC2A97E8;
        if (t5 == 0) {
            t6 = (((struct o0_int *)0xC2A982C)->v);
            if (t6 == 1) {
                t7 = (((struct o4_int *)0xC2A982C)->v);
                if (t7 == 1) {
                    t8 = (((struct o8_int *)0xC2A982C)->v);
                    if (t8 == 1) {
                        t9 = (((struct oC_int *)0xC2A982C)->v);
                        if (t9 == 1) {
                            t10 = (((struct o10_int *)0xC2A982C)->v);
                            if (t10 == 1) {
                                t11 = (((struct o14_int *)0xC2A982C)->v);
                                if (t11 == 1) {
                                    t12 = (((struct o18_int *)0xC2A982C)->v);
                                    if (t12 == 1) {
                                        t13 = (((struct o1C_int *)0xC2A982C)->v);
                                        if (t13 == 1) {
                                            Voice_ShutUp(0x0);
                                            t15 = (((struct o38_int *)0xC2A97A8)->v);
                                            if (t15 == 0) {
                                                t16 = (((struct o30_int *)0xC2A97A8)->v);
                                                if (t16 == 0x3E7) {
                                                    Voice_Request(0xC130EE0, 0x0, 0x7F, 0x0);
                                                } else {
                                                    t18 = (((struct o30_int *)0xC2A97A8)->v);
                                                    t22 = 0xC130EF8;
                                                    if (t18 != 99) {
                                                        t19 = (((struct o30_int *)0xC2A97A8)->v);
                                                        t22 = *(int *)(((t19 << 2) + 0xC130FB8));
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
    t55 = (((struct o30_int *)0xC2A97A8)->v);
    t57 = 0x7;
    if (t55 != 0x3E7) {
        t57 = t55;
        if (t55 == 99) {
            t57 = 0x8;
        }
    }
    t58 = (((struct o0_int *)0xC1EE210)->v);
    t72 = t58;
    if (t58 != 2) {
        t59 = GetMenuMode(0x1);
        t72 = t59;
        if (t59 != 0) {
            t60 = (((struct o0_int *)0xC2A97A8)->v);
            t61 = *(int *)(((t57 << 2) + 0xC130FD8));
            t62 = *(int *)0xC2A96F4;
            if (t62 == (t61 + t60)) {
                gdc_StopStreamVoice(0x0);
            }
            t65 = (((struct o0_int *)0xC2A97A8)->v);
            t66 = *(int *)(((t57 << 2) + 0xC130FD8));
            t67 = *(int *)0xC2A96F4;
            if (t67 == ((t66 + t65) + 0x3C)) {
                (((struct o28_uint *)0xC1EE210)->v) = 0x2;
            }
            t72 = 0xC130FD8;
        }
    }
    return t72;
}



int nlSpriteF2ARGB(float f4, float f5, float f6, float f7)
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
        u6 = -4.2949673e+09f;
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


int buAnalyzeBackupFileImage(int a4, int a5)
{
    int t0;
    int t38;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t15;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t31;
    int t32;
    int t28;

    t0 = (((struct o40_short *)(a5))->v);
    t38 = 0xFFFFFF21;
    if (t0 != 0) {
        t1 = (((struct o40_short *)(a5))->v);
        t38 = 0xFFFFFF21;
        if ((int)(unsigned short)t1 <= (int)0x3) {
            t2 = (((struct o44_short *)(a5))->v);
            t38 = 0xFFFFFF21;
            if ((int)(unsigned short)t2 <= (int)0x3) {
                t3 = (((struct o48_int *)(a5))->v);
                t38 = 0xFFFFFF21;
                if ((unsigned int)t3 <= (unsigned int)0xE1000) {
                    t4 = (((struct o40_short *)(a5))->v);
                    t5 = *(int *)((((unsigned short)t4 << 2) + 0xC177AA8));
                    t6 = (((struct o44_short *)(a5))->v);
                    t7 = *(int *)((((unsigned short)t6 << 2) + 0xC177AB8));
                    t8 = (((struct o48_int *)(a5))->v);
                    t38 = 0xFFFFFF21;
                    if ((unsigned int)(((t5 + t7) + t8) + 0x80) <= (unsigned int)0xE1000) {
                        t19 = 0x80;
                        t10 = 0x10;
                        t11 = a4;
                        t12 = a5;
                        while (t10 != 0) {
                            t19 = *(signed char *)((t12 + 0x0));
                            t12 = (t12 + 0x1);
                            t10 = (t10 - 1);
                            *(unsigned char *)((t11 + 0x0)) = t19;
                            t11 = (t11 + 0x1);
                        }
                        *(unsigned char *)((t11 + 0x0)) = 0x0;
                        t15 = 0x20;
                        t16 = (a4 + 0x12);
                        t17 = (a5 + 0x10);
                        while (t15 != 0) {
                            t19 = *(signed char *)((t17 + 0x0));
                            t17 = (t17 + 0x1);
                            t15 = (t15 - 1);
                            *(unsigned char *)((t16 + 0x0)) = t19;
                            t16 = (t16 + 0x1);
                        }
                        *(unsigned char *)((t16 + 0x0)) = 0x0;
                        t20 = 0x10;
                        t21 = (a4 + 0x34);
                        t22 = (a5 + 0x30);
                        while (t20 != 0) {
                            t19 = *(signed char *)((t22 + 0x0));
                            t22 = (t22 + 0x1);
                            t20 = (t20 - 1);
                            *(unsigned char *)((t21 + 0x0)) = t19;
                            t21 = (t21 + 0x1);
                        }
                        *(unsigned char *)((t21 + 0x0)) = 0x0;
                        t24 = (((struct o42_short *)(a5))->v);
                        (((struct o4E_ushort *)(a4))->v) = t24;
                        t25 = (((struct o40_short *)(a5))->v);
                        (((struct o4C_ushort *)(a4))->v) = t25;
                        (((struct o44_uint *)(a4))->v) = (a5 + 0x60);
                        (((struct o48_uint *)(a4))->v) = (a5 + 0x80);
                        t26 = (((struct o44_short *)(a5))->v);
                        (((struct o54_ushort *)(a4))->v) = t26;
                        t27 = (((struct o44_short *)(a5))->v);
                        if (t27 == 0) {
                            (((struct o50_uint *)(a4))->v) = 0x0;
                            t28 = ((a5 + 0x80) + t5);
                        } else {
                            (((struct o50_uint *)(a4))->v) = ((a5 + 0x80) + t5);
                            t28 = (((a5 + 0x80) + t5) + t7);
                        }
                        t29 = (((struct o48_int *)(a5))->v);
                        (((struct o5C_uint *)(a4))->v) = t29;
                        t30 = (((struct o48_int *)(a5))->v);
                        if (t30 == 0) {
                            (((struct o58_uint *)(a4))->v) = 0x0;
                        } else {
                            (((struct o58_uint *)(a4))->v) = t28;
                        }
                        t31 = (((struct o46_short *)(a5))->v);
                        (((struct o46_ushort *)(a5))->v) = 0x0;
                        t32 = buCalcCRC(a5, (((t5 + t7) + t8) + 0x80));
                        (((struct o46_ushort *)(a5))->v) = t31;
                        t38 = 0x0;
                        if ((unsigned short)t32 != (unsigned short)t31) {
                            t38 = 0xFFFFFF20;
                        }
                    }
                }
            }
        }
    }
    return t38;
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

    t0 = (((struct o0_int *)0xC2BF674)->v);
    t1 = (((struct o4_int *)0xC2BF674)->v);
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
    (((struct o0_uint *)0xFFA00020)->v) = t7;
    t8 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0xC));
    (((struct o4_uint *)0xFFA00020)->v) = ((t8 + 0xF0000000) << 1);
    t9 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x14));
    (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)t9 >> 2) >> 2) >> 1);
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
    (((struct oC_uint *)0xFFA00020)->v) = t13;
    t15 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0xC));
    (((struct o0_uint *)0xA05F6800)->v) = t15;
    t16 = *(int *)(((((t3 << 8) + 0xC2BF460) + (((t4 << 2) << 2) << 1)) + 0x14));
    (((struct o4_uint *)0xA05F6800)->v) = t16;
    (((struct o8_uint *)0xA05F6800)->v) = 0x1;
    (((struct o0_uint *)0xC2BF674)->v) = t4;
    (((struct o4_uint *)0xC2BF674)->v) = t3;
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
        t3 = (((struct o0_int *)0xC177FCC)->v);
        t4 = (((struct o14_int *)0xC177FCC)->v);
        t5 = 0x0;
        if ((unsigned int)t3 <= (unsigned int)t4) {
            t5 = 0x1;
        }
        t6 = kmiFBallocQueue(t5, (t1 << 1), a5, 0x8);
        t9 = t6;
    } else {
        t7 = kmiFBallocQueue(0x0, (t1 << 1), a5, 0x8);
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

int kmiResetCallback(int a4, int a5)
{
    int t8;

    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 != 3) {
                    if (a5 != 4) {
                        if (a5 == 5) {
                            (((struct o25C_uint *)(a4))->v) = 0xC158E88;
                            t8 = 0x25C;
                        } else {
                            if (a5 == 6) {
                                (((struct o264_uint *)(a4))->v) = 0xC158E8C;
                                t8 = 0x264;
                            } else {
                                if (a5 == 7) {
                                    (((struct o26C_uint *)(a4))->v) = 0xC158E90;
                                    t8 = 0x26C;
                                } else {
                                    t8 = a5;
                                    if (a5 == 8) {
                                        (((struct o274_uint *)(a4))->v) = 0xC158E94;
                                        t8 = 0x274;
                                    }
                                }
                            }
                        }
                    } else {
                        (((struct o254_uint *)(a4))->v) = 0xC158E84;
                        t8 = 0x254;
                    }
                } else {
                    (((struct o24C_uint *)(a4))->v) = 0xC158E80;
                    t8 = 0x24C;
                }
            } else {
                (((struct o244_uint *)(a4))->v) = 0xC158E5A;
                t8 = 0x244;
            }
        } else {
            (((struct o23C_uint *)(a4))->v) = 0xC158E56;
            t8 = 0x23C;
        }
    } else {
        (((struct o234_uint *)(a4))->v) = 0xC158E52;
        t8 = 0x234;
    }
    return t8;
}

int kmfSetVirticalFilterMode(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t53;
    int t56;
    int t57;
    int t58;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t59;
    int t60;
    int t62;
    int t64;

    t0 = (((struct o3C_int *)0xC2EA6A0)->v);
    t1 = *(int *)0xC2EA6E0;
    t9 = (((struct o24_int *)0xC2EA6A0)->v);
    t3 = (((struct o18_int *)0xC2EA928)->v);
    t4 = (((struct o0_int *)0xC2EA980)->v);
    t53 = t9;
    t56 = ((unsigned short)t4 & 0xFF00);
    t57 = t1;
    t58 = t0;
    if (a4 != 0) {
        t53 = t9;
        t56 = (unsigned short)t4;
        t57 = t1;
        t58 = t0;
        if (a4 != 1) {
            t53 = t9;
            t56 = (unsigned short)t4;
            t57 = t1;
            t58 = t0;
            if (a4 == 2) {
                t5 = (((struct o0_int *)0xC2EA6A0)->v);
                t53 = t9;
                t56 = (unsigned short)t4;
                t57 = t1;
                t58 = t0;
                if ((t5 & 3) == 0) {
                    t6 = (((struct o0_int *)0xC2EA6A0)->v);
                    t53 = t9;
                    t56 = (unsigned short)t4;
                    t57 = t1;
                    t58 = t0;
                    if ((t6 & 32) != 0) {
                        t7 = (((struct o0_int *)0xC2EA6A0)->v);
                        t53 = 0xD6;
                        t56 = 0x471;
                        t57 = (t1 + 0xC);
                        t58 = (t0 + 0xC);
                        if ((t7 & 0x1) != 1) {
                            t8 = (((struct o0_int *)0xC2EA6A0)->v);
                            t53 = 0xD6;
                            t56 = 0x471;
                            t57 = (t1 + 0xC);
                            t58 = (t0 + 0xC);
                            if ((t8 & 0x2C) == 32) {
                                t56 = (unsigned short)t4;
                                t57 = t1;
                                t58 = t0;
                                if (0x1 == 0) {
                                    t9 = 0xD6;
                                    t56 = 0x471;
                                    t57 = (t1 + 0xC);
                                    t58 = (t0 + 0xC);
                                }
                                t53 = t9;
                            }
                        }
                    }
                }
            }
        }
    }
    t59 = (((struct o34_int *)0xC2EA6A0)->v);
    t60 = (((struct o34_int *)0xC2EA6A0)->v);
    kmiWaitVlank();
    t62 = (((struct o20_int *)0xC2EA928)->v);
    kmiWriteRegister(0x44, (t62 & 0xFFFFFFFE));
    t64 = (((struct o4_int *)0xC2EA980)->v);
    kmiWriteRegister(0xE8, (t64 | 0x8));
    kmiWriteRegister(0xF0, ((t58 + t59) | ((t57 + t60) << 16)));
    kmiWriteRegister(0x5C, ((t3 & 0xFFF003FF) | (((t53 & 0x3FF) << 8) << 2)));
    kmiWriteRegister(0xF4, ((t4 & 0xFFFF0000) | t56));
    (((struct o0_uint *)0xC2EA928)->v) = 0x1;
    return 0x0;
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

    t0 = (((struct o0_int *)0xC2EA69C)->v);
    t7 = 0x280;
    t8 = 0x1E0;
    if (t0 != 1) {
        t1 = (((struct o4_int *)0xC2EA69C)->v);
        t2 = 0x140;
        if ((t1 & 16) != 0) {
            t2 = 0x280;
        }
        t3 = (((struct o4_int *)0xC2EA69C)->v);
        t4 = 0xF0;
        if ((t3 & 32) != 0) {
            t4 = 0x1E0;
        }
        t7 = t2;
        t8 = t4;
    }
    t9 = (((struct o8_int *)0xC2EA69C)->v);
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

    t0 = (((struct o0_int *)0xC2EA9C4)->v);
    if (t0 == 1) {
        t1 = (((struct o18_int *)0xC2EA9C4)->v);
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
        (((struct o28_uint *)0xC2EA9C4)->v) = 0x0;
        t16 = *(int *)0xC2EAAE8;
        (((struct o24_uint *)0xC2EA9C4)->v) = t16;
    }
    t19 = *(int *)0xC178274;
    return kmiFlipVertexBuffer(t19);
}

int vmsfs_c_init(int a4)
{
    int t9;
    int t26;

    (((struct o0_uint *)0xC2EC558)->v) = 0x0;
    (((struct o4_uint *)0xC2EC558)->v) = 0x0;
    (((struct o8_uint *)0xC2EC558)->v) = 0x0;
    (((struct oC_uint *)0xC2EC558)->v) = 0x0;
    (((struct o10_uint *)0xC2EC558)->v) = 0x0;
    (((struct o14_uint *)0xC2EC558)->v) = 0x0;
    (((struct o18_uint *)0xC2EC558)->v) = 0x0;
    (((struct o1C_uint *)0xC2EC558)->v) = 0x0;
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
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t18;
    int t19;
    int t20;
    int t22;
    int t26;
    int t27;
    int t30;
    int t39;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x28));
        vmsfs_unmount(t2);
        t39 = 0xFFFFFF01;
    } else {
        t4 = *(int *)((a4 + 0x28));
        t5 = vmsio_ismount(t4);
        t39 = 0xFFFFFF01;
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x28));
            t7 = *(signed char *)(((t6 * 0x148) + 0xC2EE998));
            t39 = 0xFFFFFF01;
            if (t7 != 0) {
                t8 = *(int *)((a4 + 0x28));
                t9 = buIsFormat();
                t39 = 0xFFFFFF03;
                if ((int)t9 >= 0) {
                    t10 = *(int *)((a4 + 0x28));
                    t11 = search_fat_free_xross(t10);
                    t39 = 0xFFFFFF04;
                    if ((int)t11 >= 0) {
                        t12 = vmsfs_write_retry(t10, t11, a5);
                        if ((int)t12 < 0) {
                            t39 = t12;
                            if (t12 != 0xFFFFFF01) {
                                t13 = t11;
                                for (;;) {
                                    set_fat(t10, t13);
                                    t13 = search_fat(t10, 0xFFFC);
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
                                t39 = 0xFFFFFF04;
                            }
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
                            t39 = 0x0;
                        }
                    }
                }
            }
        }
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
        t29 = 0xFFFFFF01;
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x28));
            t7 = *(signed char *)(((t6 * 0x148) + 0xC2EE998));
            t29 = 0xFFFFFF01;
            if (t7 != 0) {
                t8 = *(int *)((a4 + 0x28));
                t9 = buIsFormat();
                t29 = 0xFFFFFF03;
                if ((int)t9 >= 0) {
                    t10 = *(int *)((a4 + 0x30));
                    t11 = *(int *)((a4 + 0x28));
                    t12 = get_fat(t11, t10);
                    t29 = 0xFFFFFF04;
                    if ((unsigned short)t12 == 0xFFFC) {
                        t13 = *(int *)((a4 + 0x30));
                        t14 = *(int *)((((t0 * 0x148) + 0xC2EE990) + 0x1C));
                        t15 = *(int *)((t14 + 0x38));
                        t29 = 0xFFFFFF04;
                        if ((int)t13 < (int)t15) {
                            t16 = vmsfs_write_retry(t11, t10, a5);
                            t29 = t16;
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
                                t29 = 0x0;
                            }
                        }
                    }
                }
            }
        }
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
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
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
        t29 = 0xFFFFFF01;
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x28));
            t7 = *(signed char *)(((t6 * 0x148) + 0xC2EE998));
            t29 = 0xFFFFFF01;
            if (t7 != 0) {
                t8 = *(int *)((a4 + 0x28));
                t9 = buIsFormat();
                t29 = 0xFFFFFF03;
                if ((int)t9 >= 0) {
                    t10 = (((struct o40_int *)(a4))->v);
                    t11 = *(int *)((a4 + 0x28));
                    if (t10 == 0xFFFA) {
                        t12 = *(int *)((a4 + 0x34));
                        t29 = 0x0;
                        if (t12 != 0) {
                            t29 = 0xFFFF0000;
                        }
                    } else {
                        t14 = *(int *)((a4 + 0x34));
                        t29 = 0x0;
                        if (t14 != 0) {
                            t15 = (((struct o40_int *)(a4))->v);
                            t29 = 0xFFFFFF41;
                            if (t15 != 0xFFFC) {
                                t16 = (((struct o40_int *)(a4))->v);
                                t29 = 0xFFFFFF41;
                                if (t16 != 0xFFFF) {
                                    t17 = (((struct o40_int *)(a4))->v);
                                    t18 = vmsfs_read_retry(t11, t17, a5);
                                    t29 = t18;
                                    if ((int)t18 >= 0) {
                                        t19 = get_fat(t11, t17);
                                        (((struct o40_uint *)(a4))->v) = (unsigned short)t19;
                                        t20 = *(int *)((a4 + 0x34));
                                        *(unsigned int *)((a4 + 0x34)) = (t20 - 1);
                                        t29 = (t20 - 1);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
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
        t23 = 0x0;
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
            (((struct o48_uint *)(((t1 * 0x98) + 0xC2F4F1C)))->v) = 0x0;
            (((struct o4C_uint *)(((t1 * 0x98) + 0xC2F4F1C)))->v) = 0x0;
            (((struct o50_uint *)(((t1 * 0x98) + 0xC2F4F1C)))->v) = 0x0;
            (((struct o54_uint *)(((t1 * 0x98) + 0xC2F4F1C)))->v) = 0x0;
            *(unsigned char *)((((t1 * 0x98) + 0xC2F4F1C) + 0x0)) = 0x1;
            t23 = ((t1 * 0x98) + 0xC2F4F1C);
        }
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

    t0 = (((struct o0_int *)0xC2EA9E4)->v);
    t1 = *(int *)((0xC2EA9CC + (t0 << 2)));
    if (t1 != -1) {
        t2 = (((struct o14_int *)0xC2EA9E4)->v);
        if (t2 == 0) {
            t3 = *(int *)0xC2EA930;
            *(unsigned int *)0xC2EA930 = (t3 | 0x20);
            t4 = (((struct o0_int *)0xC2EA9E4)->v);
            *(unsigned int *)(((t4 << 2) + 0xC2EA9CC)) = 0x3;
        }
        t8 = *(int *)0xC2EA684;
        if ((t8 & 0x1) != 0) {
            t9 = *(int *)0xA05F8138;
            t14 = t9;
        } else {
            t10 = (((struct o0_int *)0xC2EA9E4)->v);
            t11 = *(int *)((((((t10 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
            t14 = t11;
        }
        t15 = (((struct o0_int *)0xC2EA9E4)->v);
        t16 = *(int *)0xA05F8138;
        *(unsigned int *)(((((t15 & 0x1) << 2) + 0xC2F91CC) + 0x0)) = t16;
        t17 = (((struct o0_int *)0xC2EA82C)->v);
        t18 = (((struct o0_int *)0xC2EA9E4)->v);
        t19 = *(int *)((((((t18 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
        (((struct o8_uint *)0xC2EA82C)->v) = ((t17 & 0xFF000000) | (((t14 - t19) << 1) & 0xFFFFF8));
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
    t28 = (((struct o0_int *)0xC2F91F0)->v);
    (((struct o4_uint *)0xC2F91F0)->v) = (t28 - t27);
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
    t1 = (((struct o10E4_int *)(t0))->v);
    t4 = 0x10E4;
    if ((int)t1 > 0) {
        t2 = (((struct o10E4_int *)(t0))->v);
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
                switch (t5) {
                case 1:
                    t20 = mpdrv_set_dreq_ns();
                    t5 = t20;
                    break;
                case 2:
                    t19 = mpdrv_set_allstatreq_ns();
                    t5 = t19;
                    break;
                case 3:
                    t18 = mpdrv_set_dreset_ns();
                    t5 = t18;
                    break;
                case 4:
                    t17 = mpdrv_set_dkill_ns();
                    t5 = t17;
                    break;
                case 9:
                    t14 = *(int *)((t6 + 0x0));
                    t15 = t14;
                    if ((t14 & 0x1) != 0) {
                        t15 = 0x1;
                    }
                    t16 = mpdrv_set_getcond_ns(t8, t15);
                    t5 = t16;
                    break;
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

