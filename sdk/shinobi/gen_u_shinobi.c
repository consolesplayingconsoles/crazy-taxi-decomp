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


