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


