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

