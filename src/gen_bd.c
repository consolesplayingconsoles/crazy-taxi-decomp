/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_DecodeHeader(int, int, int);
int ADXB_GetFormat(int);
int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeByte(int, int);
int ADXSTM_GetFsizeSct(int, int);
int ADX_DecodeInfoAiff(int, int, int, int);
int ADX_DecodeInfoAu(int, int, int, int);
int ADX_DecodeInfoSpsd(int, int, int, int);
int ADX_DecodeInfoWav(int, int, int, int);
int SetCameraPosVelocity(int);
int TOANG2(int, float);
int gdc_FadeManStreamSong(void);
int gdc_CourseStartLoadReq(void);
int pfCleanString(void);
int pfAddNumber(int);
int nd_StartWait_InitSprite(void);
int nd_StartWait_SetLight(void);
int nd_StartWait_SetFog(void);
int nd_CarSelExec(void);
int Money_Array(int, int, int);
int psgFaceBoyFriend(int);
int psgUpdatePartTracks(int);
int psgPutMarker(int, int);
float nlTanfReduce(int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlLookAtUp(int, int, int);
int nlMatrixMode(int);
int nlPushMultiViewMatrix(void);
int nlAddVector3op(int, int, int);
int nlsndStreamSetHdInfo(int, int);
int SearchUsed(int, int);
int FBfree(int, int);
int kmiPurgeCache(int);
int mwRnaLockCs(int);
int FcvPlay(int, int, float);
int GetAverageAngle(int, int, float);
int GetCollision2D(int, float);
int GetCollisionFirst(int, int);
int IsBoyFriend(int, int);
int MakeKyakuTakeArea(int, int, int, float);
int Psg_SetPosPtr(int, int);
int RailroadAreaCheck(int, int);
int SJ_SplitChunk(int, int, int);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int MultiRot4Vec(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int adxf_ChkPrmPt(int);
int adxf_LoadData(int, int, int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int check_file_correct(int);
int gdDecSubcode(int, int);
int gdFsGetDrvStatG(void);
int gdc_StopStreamSongAll(void);
int getGoiToolFlag(int);
int getNearLineIndex(int, int, int, int, int, float);
int humanDraw(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwRnaSetTransSw(int, int);
int mwRnaStop(int);
int mwRnaUnlockCs(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlObjPutMvInit(void);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlSprPut(int, int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int nlUnitVector(int);
int nlVoidUnitVector(int);
int nlsndStreamGetHdInfo(int, int);
int ovGetLibTbl(int);
int ovLockCs(int);
int ovSearchLibByUuid(int);
int ovUnlockCs(int);
int parkingControl(int, int);
int pedSpawn(int, int);
int pedUpdate(int);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int psgEnterState1(int, int);
int psgPlayBlend(int, int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgSetState(int, int, int, int);
int trafficLevelControl(int);
int trafficSectionControl(int, int, float);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_write_retry(int, int, int);
int ovLibOpen(int a4);
int mwlSbSetDrctLvl(int a4, int a5);
int CalcShadow2Matrix(int a4);
int mwRnaSetPitch(int a4, int a5, int a6);
int Put2DObjUp(int a4, float f4, float f5, float f6);
int mwRnaContinue(int a4);
float nlTanf(void);
int mwRnaDestroy(int a4);
int mwRnaStart(int a4);
int gameState5(void);
void syG2DmaEndIntrruptHandler(int a4);
int kmiFBfree(int a4);
int adxf_SetFileInfo(int a4, int a5);
int mwRnaAdjustBuf(int a4);
float Drv_FacePsgFrame(int a4);
int psgFaceTaxi(int a4);
int SetStartCamera(void);
int Init_Time_Spark(int a4, int a5);
int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8);
int carBodyTilt(int a4);
int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6);
int ADXB_DecodeHeaderWav(int a4, int a5, int a6);
int adxsjd_decode_prep(int a4);
int ADXB_DecodeHeaderAu(int a4, int a5, int a6);
int Init_nd_StartWait(void);
int ADXB_DecodeHeaderAiff(int a4, int a5, int a6);
int Drv_CheckSideClear(int a4, int a5);
int crowdTask(int a4);
int breathMove(int a4, int a5);
int Put_Time_Count(int a4);
float colliBoxShapeInit(int a4, int a5);
int kmtex_ReloadVQMM(int a4, int a5, int a6);
int kmtex_ReloadPalettized4MM(int a4, int a5, int a6);
int ADXF_LoadPartition(int a4, int a5, int a6, int a7);
int trafficControl(int a4);
int gdFsGetStatG(void);
int psgFrameState1(int a4);

int ovLibOpen(int a4)
{
    int t1;
    int t2;
    int t3;
    int t7;
    int t4;
    int t5;
    int t6;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    ovLockCs(((int)stk + 4));
    t1 = ovGetLibTbl((((int)stk + 4) + 0x4));
    *(unsigned int *)(((int)stk + 16)) = t1;
    t2 = *(int *)(((int)stk + 12));
    t3 = ovSearchLibByUuid(t2);
    t7 = 0x0;
    if ((int)t3 >= 0) {
        t4 = *(int *)(((int)stk + 16));
        t5 = *(int *)((((t4 + 0x8) + ((t3 << 2) << 1)) + 0x4));
        t6 = *(int *)((((t4 + 0x8) + ((t3 << 2) << 1)) + 0x0));
        *(unsigned int *)((((t4 + 0x8) + ((t3 << 2) << 1)) + 0x4)) = (t5 + 0x1);
        t7 = t6;
    }
    ovUnlockCs(((int)stk + 4));
    return t7;
}

int mwlSbSetDrctLvl(int a4, int a5)
{
    int t13;
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t12;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    t13 = 0x0;
    if (a5 != 0) {
        t0 = *(int *)(((int)stk + 12));
        t1 = nlsndStreamGetHdInfo(t0, ((int)stk + 8));
        if (t1 == 0) {
            mwRnaErrCallFunc(0xC176C14);
        }
        t4 = *(int *)((a4 + 0x1C));
        t5 = *(int *)(((int)stk + 8));
        t6 = *(int *)((t4 + 0x4));
        memmove(t6, t1, t5);
        t8 = *(int *)((a4 + 0x1C));
        t9 = *(short *)((a4 + 0x6));
        t10 = *(int *)((t8 + 0x4));
        nlsndStreamSetHdInfo(t9, t10);
        t12 = *(int *)(((int)stk + 8));
        *(unsigned int *)((a4 + 0x64)) = t12;
        t13 = 0x1;
    }
    *(unsigned char *)((a4 + 0x5)) = t13;
    return t13;
}


int mwRnaSetPitch(int a4, int a5, int a6)
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
    int stk[9] = {0};

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 16)) = t1;
    t2 = *(int *)((t1 + 0x0));
    t3 = *(int *)(((int)stk + 24));
    t4 = *(int *)(((int)stk + 20));
    t5 = *(int *)((t2 + 0x44));
    t6 = ((int (*)(int, int, int, int))(t5))(t1, 0x1, t4, t3);
    t7 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 16)) = t7;
    t8 = *(int *)((t7 + 0x0));
    t9 = *(int *)((t8 + 0x48));
    t10 = ((int (*)(int, int, int, int))(t9))(t7, 0x1, ((int)stk + 8), (((int)stk + 8) + 0x4));
    t11 = *(int *)(((int)stk + 8));
    *(unsigned int *)((a4 + 0x74)) = t11;
    t12 = *(int *)(((int)stk + 12));
    *(unsigned int *)((a4 + 0x78)) = t12;
    return 0x78;
}


int mwRnaContinue(int a4)
{
    int t0;
    int t2;
    int t3;
    int t8;
    int stk[5] = {0};

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    mwRnaLockCs(((int)stk + 8));
    t2 = *(signed char *)((a4 + 0x7));
    if ((unsigned char)t2 == 1) {
        t3 = *(int *)((a4 + 0x88));
        if (t3 != 0) {
            if (t3 != 1) {
                mwRnaSetPlaySw(a4, 0x1);
            }
        }
        *(unsigned char *)((a4 + 0x7)) = 0x0;
    }
    t8 = mwRnaUnlockCs(((int)stk + 8));
    return t8;
}

float nlTanf(void)
{
    float t0;
    int t1;
    int t2;
    float u3;
    int stk[3] = {0};

    t0 = nlTanfReduce(((int)stk + 4));
    t1 = *(int *)(((int)stk + 4));
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 == 0) {
        return t0;
    }
    if (t0 != 0.0f) {
        return ((-1.0f) / t0);
    }
    u3 = 3.4028235e+38f;
    return u3;
}

int mwRnaDestroy(int a4)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int stk[6] = {0};

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    mwRnaLockCs(((int)stk + 8));
    t2 = *(signed char *)((a4 + 0x1));
    if (t2 != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t5 = 0x0;
    for (;;) {
        t6 = *(signed char *)((a4 + 0x2));
        if ((int)t5 >= (int)(unsigned char)t6) break;
        t7 = ((t5 << 2) + (a4 + 0x10));
        t5 = (t5 + 0x1);
        *(unsigned int *)((t7 + 0x0)) = 0x0;
    }
    t8 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 12)) = t8;
    t9 = *(int *)((t8 + 0x0));
    t10 = *(int *)((t9 + 0xC));
    t11 = ((int (*)(int, int))(t10))(t8, 0x0);
    memset(a4, 0x0, 0x90);
    t13 = mwRnaUnlockCs(((int)stk + 8));
    return t13;
}

int mwRnaStart(int a4)
{
    int t0;
    int t2;
    int t5;
    int t7;
    int stk[5] = {0};

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    mwRnaLockCs(((int)stk + 8));
    t2 = *(signed char *)((a4 + 0x1));
    if (t2 != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    t5 = *(int *)((a4 + 0x44));
    *(unsigned int *)((a4 + 0x40)) = t5;
    mwRnaSetTransSw(a4, 0x1);
    t7 = mwRnaUnlockCs(((int)stk + 8));
    return t7;
}


void syG2DmaEndIntrruptHandler(int a4)
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

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0xC178700;
    t3 = *(int *)((t2 + 0x0));
    *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x1;
    t4 = *(int *)0xC178700;
    t5 = *(int *)((a4 + 0x0));
    t6 = *(int *)((((t5 << 2) + (0xEC + t4)) + 0x0));
    *(unsigned int *)((((t5 << 2) + (0xEC + t4)) + 0x0)) = (t6 + 0x1);
    t7 = *(int *)((a4 + 0x0));
    t8 = *(int *)0xC1786F8;
    *(unsigned int *)((t8 + 0x0)) = (((int)(t7 + 0xF) >= 0) ? (0x1 << ((t7 + 0xF) & 31)) : ((-(int)(t7 + 0xF) & 31) ? ((int)0x1 >> (-(int)(t7 + 0xF) & 31)) : ((int)0x1 >> 31)));
    t9 = *(int *)((a4 + 0x1C));
    if (t9 != 0) {
        t10 = *(int *)((a4 + 0x1C));
        t11 = *(int *)((a4 + 0x20));
        t12 = ((int (*)(int, int, int))(t10))(t11, 0x0, 0xC178700);
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int kmiFBfree(int a4)
{
    int t0;
    int t21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t17;
    int t18;
    int t19;
    int t16;
    int t15;
    int stk[6] = {0};

    t0 = SearchUsed(a4, ((int)stk + 4));
    t21 = 0x7;
    if (t0 != 0) {
        t1 = *(short *)((t0 + 0x0));
        if (((unsigned short)t1 & 2) != 0) {
            t2 = *(short *)(((int)stk + 4));
            t3 = *(int *)0xC177FB0;
            t4 = (a4 - t3);
            if (t2 == 0) {
                t4 = (t3 + a4);
            }
            t5 = SearchUsed(t4, (((int)stk + 4) + 0x4));
            if (t5 == 0) {
                t6 = *(short *)(((int)stk + 4));
                FBfree(t6, t0);
                t16 = 0x0;
            } else {
                t8 = *(short *)((t5 + 0x0));
                if (((unsigned short)t8 & 4) != 0) {
                    t9 = *(short *)((t0 + 0x0));
                    *(unsigned short *)((t0 + 0x0)) = (t9 & 0xFFFB);
                    t15 = 0x0;
                } else {
                    t10 = *(short *)(((int)stk + 4));
                    FBfree(t10, t0);
                    t12 = *(short *)(((int)stk + 8));
                    t13 = FBfree(t12, t5);
                    t15 = t13;
                }
                t16 = t15;
            }
            t19 = t16;
        } else {
            t17 = *(short *)(((int)stk + 4));
            t18 = FBfree(t17, t0);
            t19 = t18;
        }
        t21 = t19;
    }
    return t21;
}

int mwRnaAdjustBuf(int a4)
{
    int t0;
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
    int t18;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t33;
    int stk[7] = {0};

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    mwRnaLockCs((((int)stk + 8) + 0x4));
    t2 = *(signed char *)((a4 + 0x5));
    if ((unsigned char)t2 == 1) {
        t3 = mwRnaGetTransSw(a4);
        if (t3 == 1) {
            mwlRnaAddWrPos(a4);
        } else {
            mwlRnaAddFlshPos(a4);
        }
        *(unsigned char *)((a4 + 0x5)) = 0x0;
    }
    t8 = *(int *)((a4 + 0x30));
    if (t8 != 0) {
        t9 = *(int *)((a4 + 0x34));
        if ((int)t9 > 0) {
            t10 = *(int *)((a4 + 0x38));
            t11 = *(int *)((a4 + 0x30));
            *(unsigned int *)(((int)stk + 16)) = t10;
            t12 = *(int *)((t10 + 0x0));
            t13 = *(int *)((t12 + 0x54));
            t14 = ((int (*)(int, int, int))(t13))(t10, t11, ((int)stk + 8));
            t15 = *(int *)((a4 + 0x88));
            if (t15 == 2) {
                t16 = *(int *)((a4 + 0x28));
                t17 = *(int *)((a4 + 0x50));
                t18 = *(int *)(((int)stk + 8));
                t19 = (int)((int)((t17 + t16) - t18) % (int)t16);
                *(unsigned int *)(((0x50 + a4) + 0x0)) = t19;
            }
            t21 = *(int *)((a4 + 0x2C));
            t22 = *(int *)((a4 + 0x28));
            t23 = *(int *)(((int)stk + 8));
            t24 = (int)((int)((t21 + t22) - t23) % (int)t22);
            *(unsigned int *)((a4 + 0x2C)) = t24;
            t25 = *(int *)((a4 + 0x30));
            t26 = *(int *)(((int)stk + 8));
            *(unsigned int *)((a4 + 0x30)) = ((t25 + t14) - t26);
            t27 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t27 - t14);
        }
    }
    t33 = mwRnaUnlockCs((((int)stk + 8) + 0x4));
    return t33;
}





int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t41;
    int t2;
    int t36;
    int t3;
    int t31;
    int t26;
    int t21;
    int t4;
    int t5;
    int t16;
    int t10;
    int t6;
    int t7;
    int t8;
    int t9;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = a8;
    t0 = *(int *)(((int)stk + 4));
    t1 = vmsfs_fgetinfo(a4, t0, (((int)stk + 4) + 0x4));
    t41 = t1;
    if ((int)t1 >= 0) {
        t2 = *(signed char *)(((int)stk + 14));
        t36 = 0xFFFFFF0B;
        if ((unsigned char)t2 == 1) {
            t3 = *(short *)(((int)stk + 12));
            t31 = 0xFFFFFF00;
            if ((unsigned int)a7 < (unsigned int)(unsigned short)t3) {
                t26 = 0xFFFFFF00;
                if ((unsigned int)a8 <= (unsigned int)(unsigned short)t3) {
                    t21 = 0xFFFFFF00;
                    if ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t3) {
                        t4 = *(int *)(((int)stk + 4));
                        t5 = check_file_correct(a4);
                        t16 = t5;
                        if ((int)t5 >= 0) {
                            t10 = 0x0;
                            if ((unsigned int)0x0 < (unsigned int)a8) {
                                t6 = 0x0;
                                t7 = a6;
                                t8 = a7;
                                for (;;) {
                                    t9 = vmsfs_write_retry(a4, t8, t7);
                                    if ((int)t9 < 0) break;
                                    t6 = (t6 + 0x1);
                                    t7 = (t7 + 0x200);
                                    t8 = (t8 + 0x1);
                                    if ((unsigned int)t6 >= (unsigned int)a8) {
                                        return 0x0;
                                    }
                                }
                                t10 = t9;
                            }
                            t16 = t10;
                        }
                        t21 = t16;
                    }
                    t26 = t21;
                }
                t31 = t26;
            }
            t36 = t31;
        }
        t41 = t36;
    }
    return t41;
}


int adxsjd_decode_prep(int a4)
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
    int t14;
    int t15;
    int t17;
    int t16;
    int t18;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t32;
    int t28;
    int stk[11] = {0};

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((t0 + 0x0));
    t2 = *(int *)((a4 + 0x4));
    t3 = *(int *)((t1 + 0x18));
    t4 = ((int (*)(int, int, int, int))(t3))(t0, 0x1, 0x1000, (((int)stk + 4) + 0xC));
    t5 = *(int *)(((int)stk + 20));
    if ((int)t5 >= (int)0x10) {
        t6 = *(int *)(((int)stk + 16));
        t7 = ADXB_DecodeHeader(t2, t6, t5);
        if (t7 != 0) {
            t8 = *(int *)(((int)stk + 20));
            if ((int)t7 > (int)t8) {
                t9 = *(int *)((t0 + 0x0));
                t10 = *(int *)((t9 + 0x1C));
                t11 = ((int (*)(int, int, int))(t10))(t0, 0x1, (((int)stk + 4) + 0xC));
                t28 = t11;
            } else {
                t12 = ADXB_GetFormat(t2);
                if (t12 == 4) {
                    *(unsigned char *)((a4 + 0x3)) = 0x1;
                }
                t14 = ADXB_GetFormat(t2);
                if (t14 == 2) {
                    t15 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 4)) = t15;
                    t17 = 0x40;
                    if ((int)t15 < (int)0x40) {
                        t16 = *(int *)(((int)stk + 4));
                        t17 = t16;
                    }
                    t18 = *(int *)(((int)stk + 16));
                    memmove((a4 + 0x58), t18, t17);
                }
                SJ_SplitChunk((((int)stk + 4) + 0xC), t7, (((int)stk + 4) + 0xC));
                t22 = *(int *)((t0 + 0x0));
                t23 = *(int *)((t22 + 0x20));
                t24 = ((int (*)(int, int, int))(t23))(t0, 0x0, (((int)stk + 4) + 0xC));
                t25 = *(int *)((t0 + 0x0));
                t26 = *(int *)((t25 + 0x1C));
                t27 = ((int (*)(int, int, int))(t26))(t0, 0x1, (((int)stk + 4) + 0x4));
                *(unsigned char *)((a4 + 0x1)) = 0x2;
                t28 = 0x2;
            }
            t32 = t28;
        } else {
            t29 = *(int *)((t0 + 0x0));
            t30 = *(int *)((t29 + 0x1C));
            t31 = ((int (*)(int, int, int))(t30))(t0, 0x1, (((int)stk + 4) + 0xC));
            t32 = t31;
        }
        t36 = t32;
    } else {
        t33 = *(int *)((t0 + 0x0));
        t34 = *(int *)((t33 + 0x1C));
        t35 = ((int (*)(int, int, int))(t34))(t0, 0x1, (((int)stk + 4) + 0xC));
        t36 = t35;
    }
    return t36;
}

