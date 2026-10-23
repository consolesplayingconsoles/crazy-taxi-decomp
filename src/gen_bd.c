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

int adxf_SetFileInfo(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t8;
    int t12;
    int t10;
    int t9;
    int stk[9] = {0};

    t0 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x8));
    if ((int)t0 < 0) {
        ADXERR_CallErrFunc();
        t12 = t0;
    } else {
        t2 = ADXSTM_GetFsizeSct(a5, (((int)stk + 4) + 0x4));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc();
            t10 = t2;
        } else {
            t4 = ADXSTM_GetFsizeByte(a5, ((int)stk + 4));
            if ((int)t4 < 0) {
                ADXERR_CallErrFunc();
                t9 = t4;
            } else {
                t6 = *(int *)(((int)stk + 12));
                *(unsigned int *)((a4 + 0xC)) = t6;
                t7 = *(int *)(((int)stk + 8));
                *(unsigned int *)((a4 + 0x10)) = t7;
                t8 = *(int *)(((int)stk + 4));
                *(unsigned int *)((a4 + 0x14)) = t8;
                t9 = 0x0;
            }
            t10 = t9;
        }
        t12 = t10;
    }
    return t12;
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


int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t13;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = *(int *)(((int)stk + 40));
    t1 = *(int *)(((int)stk + 36));
    t2 = ADX_DecodeInfoSpsd(t1, t0, (((int)stk + 4) + 0x1C), (a4 + 0xC));
    t13 = 0x0;
    if ((int)t2 >= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        t3 = *(signed char *)((a4 + 0xE));
        *(unsigned int *)(((0x58 + a4) + 0x0)) = t3;
        t4 = *(signed char *)((a4 + 0xF));
        *(unsigned int *)(((0x5C + a4) + 0x0)) = t4;
        t5 = *(int *)((a4 + 0x10));
        *(unsigned int *)((a4 + 0x60)) = t5;
        t6 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x64)) = t6;
        t7 = *(int *)((a4 + 0x40));
        *(unsigned int *)((a4 + 0x68)) = t7;
        t8 = *(int *)((a4 + 0x44));
        *(unsigned int *)((a4 + 0x6C)) = t8;
        t9 = *(short *)((a4 + 0x48));
        *(unsigned short *)(((a4 + 0x7C) + 0x0)) = t9;
        t10 = *(short *)((a4 + 0x4A));
        *(unsigned short *)((a4 + 0x7E)) = t10;
        *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x2;
        memset((a4 + 0x4C), 0x0, 0x4);
        t12 = *(short *)(((int)stk + 32));
        t13 = t12;
    }
    return t13;
}

int ADXB_DecodeHeaderWav(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t13;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = *(int *)(((int)stk + 40));
    t1 = *(int *)(((int)stk + 36));
    t2 = ADX_DecodeInfoWav(t1, t0, (((int)stk + 4) + 0x1C), (a4 + 0xC));
    t13 = 0x0;
    if ((int)t2 >= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        t3 = *(signed char *)((a4 + 0xE));
        *(unsigned int *)(((0x58 + a4) + 0x0)) = t3;
        t4 = *(signed char *)((a4 + 0xF));
        *(unsigned int *)(((0x5C + a4) + 0x0)) = t4;
        t5 = *(int *)((a4 + 0x10));
        *(unsigned int *)((a4 + 0x60)) = t5;
        t6 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x64)) = t6;
        t7 = *(int *)((a4 + 0x40));
        *(unsigned int *)((a4 + 0x68)) = t7;
        t8 = *(int *)((a4 + 0x44));
        *(unsigned int *)((a4 + 0x6C)) = t8;
        t9 = *(short *)((a4 + 0x48));
        *(unsigned short *)(((a4 + 0x7C) + 0x0)) = t9;
        t10 = *(short *)((a4 + 0x4A));
        *(unsigned short *)((a4 + 0x7E)) = t10;
        *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x1;
        memset((a4 + 0x4C), 0x0, 0x4);
        t12 = *(short *)(((int)stk + 32));
        t13 = t12;
    }
    return t13;
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

int ADXB_DecodeHeaderAu(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t14;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 40)) = a5;
    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = *(int *)(((int)stk + 44));
    t1 = *(int *)(((int)stk + 40));
    t2 = ADX_DecodeInfoAu(t1, t0, (((int)stk + 4) + 0x1C), (a4 + 0xC));
    t14 = 0x0;
    if ((int)t2 >= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        t3 = *(signed char *)((a4 + 0xE));
        *(unsigned int *)(((0x58 + a4) + 0x0)) = t3;
        t4 = *(signed char *)((a4 + 0xF));
        *(unsigned int *)(((0x5C + a4) + 0x0)) = t4;
        t5 = *(int *)((a4 + 0x10));
        *(unsigned int *)((a4 + 0x60)) = t5;
        t6 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x64)) = t6;
        t7 = *(int *)((a4 + 0x40));
        *(unsigned int *)((a4 + 0x68)) = t7;
        t8 = *(int *)((a4 + 0x44));
        *(unsigned int *)((a4 + 0x6C)) = t8;
        t9 = *(short *)((a4 + 0x48));
        *(unsigned short *)(((a4 + 0x7C) + 0x0)) = t9;
        t10 = *(short *)((a4 + 0x4A));
        *(unsigned short *)((a4 + 0x7E)) = t10;
        *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x4;
        t11 = *(int *)(((int)stk + 36));
        *(unsigned short *)((a4 + 0xAA)) = t11;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = *(short *)(((int)stk + 32));
        t14 = t13;
    }
    return t14;
}


int ADXB_DecodeHeaderAiff(int a4, int a5, int a6)
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
    int t14;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = *(int *)(((int)stk + 36));
    t1 = *(int *)(((int)stk + 32));
    t2 = ADX_DecodeInfoAiff(t1, t0, (((int)stk + 4) + 0x18), (a4 + 0xC));
    if ((int)t2 < 0) {
        return 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x4A)) = 0x0;
    *(unsigned short *)((a4 + 0x48)) = 0x0;
    *(unsigned short *)((a4 + 0x26)) = 0x0;
    *(unsigned short *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    t3 = *(signed char *)((a4 + 0xE));
    *(unsigned int *)(((0x58 + a4) + 0x0)) = t3;
    t4 = *(signed char *)((a4 + 0xF));
    *(unsigned int *)(((0x5C + a4) + 0x0)) = t4;
    t5 = *(int *)((a4 + 0x10));
    *(unsigned int *)((a4 + 0x60)) = t5;
    t6 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x64)) = t6;
    t7 = *(int *)((a4 + 0x40));
    *(unsigned int *)((a4 + 0x68)) = t7;
    t8 = *(int *)((a4 + 0x44));
    *(unsigned int *)((a4 + 0x6C)) = t8;
    t9 = *(short *)((a4 + 0x48));
    *(unsigned short *)(((a4 + 0x7C) + 0x0)) = t9;
    t10 = *(short *)((a4 + 0x4A));
    *(unsigned short *)((a4 + 0x7E)) = t10;
    *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
    *(unsigned int *)((a4 + 0x9C)) = 0x0;
    *(unsigned int *)((a4 + 0x98)) = 0x0;
    *(unsigned short *)((a4 + 0xA8)) = 0x3;
    t11 = *(signed char *)((a4 + 0xD));
    if (t11 == 8) {
        *(unsigned short *)((a4 + 0xAA)) = 0x1;
    } else {
        *(unsigned short *)((a4 + 0xAA)) = 0x0;
    }
    memset((a4 + 0x4C), 0x0, 0x4);
    t14 = *(short *)(((int)stk + 28));
    return t14;
}






int kmtex_ReloadVQMM(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t25;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t47;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    if (a6 != 1) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
        if ((int)a6 <= (int)0x4) {
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t1 = *(int *)((a4 + 0x1C));
            t2 = *(int *)(((int)stk + 4));
            kmiCopyFromFrameBuffer(t2, (t1 + 0x800), 0x10);
            t4 = *(int *)(((int)stk + 8));
            if (a6 == 2) {
                t5 = *(signed char *)((t4 + 0x0));
                *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = t5;
            } else {
                t6 = ((((int)stk + 4) + 0x8) + 0x2);
                t7 = t4;
                do {
                    t8 = *(signed char *)((t7 + 0x0));
                    t7 = (t7 + 0x1);
                    *(unsigned char *)((t6 + 0x0)) = t8;
                    t6 = (t6 + 0x1);
                } while ((unsigned int)t6 < (unsigned int)((((int)stk + 4) + 0x8) + 0x6));
            }
            t11 = *(int *)((a4 + 0x1C));
            t47 = (t11 + 0x800);
        } else {
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t12 = *(int *)((0xC175ED8 + ((t0 - 1) << 2)));
            t13 = *(int *)((a4 + 0x1C));
            t14 = *(int *)(((int)stk + 4));
            kmiCopyFromFrameBuffer(t14, (t13 + (t12 + 0x7FA)), 0x10);
            t16 = *(int *)(((int)stk + 8));
            t17 = ((((int)stk + 4) + 0x8) + 0x6);
            t18 = t16;
            do {
                t19 = *(signed char *)((t18 + 0x0));
                t18 = (t18 + 0x1);
                *(unsigned char *)((t17 + 0x0)) = t19;
                t17 = (t17 + 0x1);
            } while ((unsigned int)t17 < (unsigned int)((((int)stk + 4) + 0x8) + 0x10));
            t20 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 4)) = t20;
            t21 = *(int *)((0xC175ED8 + ((t0 - 1) << 2)));
            t22 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t22 + (t21 + 0x7FA));
            kmiPurgeCache((((int)stk + 4) + 0x8));
            kmiPurgeCache(((((int)stk + 4) + 0x8) + 0x20));
            t25 = *(int *)(((int)stk + 4));
            kmiCopyToFrameBuffer(t25, (((int)stk + 4) + 0x8), 0x10);
            t27 = *(int *)(((t0 << 2) + 0xC175EAC));
            if ((unsigned int)(t27 - 16) > (unsigned int)0x0) {
                t28 = *(int *)((0xC175ED8 + ((t0 - 1) << 2)));
                t29 = *(int *)((a4 + 0x1C));
                t30 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 4)) = (t30 + 0xA);
                t31 = *(int *)(((t0 << 2) + 0xC175EAC));
                kmiCopyToFrameBuffer((t29 + (t28 + 0x80A)), (t30 + 0xA), (t31 - 16));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t34 = *(int *)((0xC175ED8 + (t0 << 2)));
            t35 = *(int *)((a4 + 0x1C));
            t36 = *(int *)(((int)stk + 4));
            kmiCopyFromFrameBuffer(t36, (t35 + (t34 + 0x7FA)), 0x10);
            t38 = *(int *)(((int)stk + 8));
            t39 = *(int *)(((t0 << 2) + 0xC175EAC));
            t40 = (((int)stk + 4) + 0x8);
            t41 = ((t39 + t38) - 6);
            do {
                t42 = *(signed char *)((t41 + 0x0));
                t41 = (t41 + 0x1);
                *(unsigned char *)((t40 + 0x0)) = t42;
                t40 = (t40 + 0x1);
            } while ((unsigned int)t40 < (unsigned int)((((int)stk + 4) + 0x8) + 0x6));
            t43 = *(int *)((0xC175ED8 + (t0 << 2)));
            t44 = *(int *)((a4 + 0x1C));
            t47 = (t44 + (t43 + 0x7FA));
        }
        kmiPurgeCache((((int)stk + 4) + 0x8));
        kmiPurgeCache(((((int)stk + 4) + 0x8) + 0x20));
        kmiCopyToFrameBuffer(t47, (((int)stk + 4) + 0x8), 0x10);
    }
    return 0x0;
}

int kmtex_ReloadPalettized4MM(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t16;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t34;
    int t35;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t45;
    int t46;
    int t47;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t61;
    int stk[16] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    if ((int)a6 <= (int)0x4) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
        t1 = *(int *)((a4 + 0x1C));
        kmiCopyFromFrameBuffer((((int)stk + 4) + 0xC), t1, 0x10);
        t3 = *(int *)(((int)stk + 8));
        if (a6 == 1) {
            t4 = *(signed char *)((t3 + 0x0));
            *(unsigned char *)(((((int)stk + 4) + 0xC) + 0x1)) = t4;
        } else {
            if (a6 == 2) {
                t5 = ((((int)stk + 4) + 0xC) + 0x2);
                t6 = t3;
                do {
                    t7 = *(signed char *)((t6 + 0x0));
                    t6 = (t6 + 0x1);
                    *(unsigned char *)((t5 + 0x0)) = t7;
                    t5 = (t5 + 0x1);
                } while ((unsigned int)t5 < (unsigned int)((((int)stk + 4) + 0xC) + 0x4));
            } else {
                t8 = ((((int)stk + 4) + 0xC) + 0x4);
                t9 = t3;
                do {
                    t10 = *(signed char *)((t9 + 0x0));
                    t9 = (t9 + 0x1);
                    *(unsigned char *)((t8 + 0x0)) = t10;
                    t8 = (t8 + 0x1);
                } while ((unsigned int)t8 < (unsigned int)((((int)stk + 4) + 0xC) + 0xC));
            }
        }
        t16 = *(int *)((a4 + 0x1C));
        *(unsigned int *)(((int)stk + 8)) = t16;
        kmiPurgeCache((((int)stk + 4) + 0xC));
        kmiPurgeCache(((((int)stk + 4) + 0xC) + 0x20));
        t19 = *(int *)(((int)stk + 8));
        t61 = t19;
    } else {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
        t20 = *(int *)((0xC175F5C + (t0 << 2)));
        t21 = *(int *)((a4 + 0x1C));
        t22 = *(int *)(((int)stk + 4));
        kmiCopyFromFrameBuffer(t22, (t21 + (t20 - 12)), 0x10);
        t24 = *(int *)(((int)stk + 8));
        t25 = ((((int)stk + 4) + 0xC) + 0xC);
        t26 = t24;
        do {
            t27 = *(signed char *)((t26 + 0x0));
            t26 = (t26 + 0x1);
            *(unsigned char *)((t25 + 0x0)) = t27;
            t25 = (t25 + 0x1);
        } while ((unsigned int)t25 < (unsigned int)((((int)stk + 4) + 0xC) + 0x10));
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
        t28 = *(int *)((a4 + 0x1C));
        *(unsigned int *)(((int)stk + 12)) = t28;
        t29 = *(int *)((0xC175F5C + (t0 << 2)));
        *(unsigned int *)(((int)stk + 12)) = (t28 + (t29 - 12));
        t30 = *(int *)(((int)stk + 4));
        kmiPurgeCache(t30);
        t32 = *(int *)(((int)stk + 4));
        kmiPurgeCache((t32 + 0x20));
        t34 = *(int *)(((int)stk + 4));
        t35 = *(int *)(((int)stk + 12));
        kmiCopyToFrameBuffer(t35, t34, 0x10);
        *(unsigned int *)(((int)stk + 4)) = 0xC175F88;
        t37 = *(int *)(((t0 << 2) + 0xC175F88));
        if ((unsigned int)(t37 - 16) > (unsigned int)0x0) {
            t38 = *(int *)((0xC175F5C + (t0 << 2)));
            t39 = *(int *)(((int)stk + 8));
            t40 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = (t39 + 0x4);
            t41 = *(int *)(((int)stk + 4));
            t42 = *(int *)(((t0 << 2) + t41));
            kmiCopyToFrameBuffer((t40 + (t38 + 0x4)), (t39 + 0x4), (t42 - 16));
        }
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
        t45 = *(int *)((0xC175F5C + ((t0 + 0x1) << 2)));
        t46 = *(int *)((a4 + 0x1C));
        t47 = *(int *)(((int)stk + 4));
        kmiCopyFromFrameBuffer(t47, (t46 + (t45 - 12)), 0x10);
        t49 = *(int *)(((int)stk + 8));
        t50 = *(int *)(((t0 << 2) + 0xC175F88));
        t51 = (((int)stk + 4) + 0xC);
        t52 = ((t50 + t49) - 12);
        do {
            t53 = *(signed char *)((t52 + 0x0));
            t52 = (t52 + 0x1);
            *(unsigned char *)((t51 + 0x0)) = t53;
            t51 = (t51 + 0x1);
        } while ((unsigned int)t51 < (unsigned int)((((int)stk + 4) + 0xC) + 0xC));
        t54 = *(int *)((a4 + 0x1C));
        t55 = *(int *)((0xC175F5C + ((t0 + 0x1) << 2)));
        kmiPurgeCache((((int)stk + 4) + 0xC));
        kmiPurgeCache(((((int)stk + 4) + 0xC) + 0x20));
        t61 = (t54 + (t55 - 12));
    }
    kmiCopyToFrameBuffer(t61, (((int)stk + 4) + 0xC), 0x10);
    return 0x0;
}

int ADXF_LoadPartition(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t70;
    int t2;
    int t4;
    int t7;
    int t8;
    int t9;
    int t12;
    int t14;
    int t17;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t29;
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
    int t44;
    int t46;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t57;
    int t59;
    int t61;
    int t64;
    int t68;
    int t66;
    int stk[18] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t0 = *(int *)(((int)stk + 8));
    t1 = adxf_ChkPrmPt(t0);
    t70 = t1;
    if ((int)t1 >= 0) {
        t2 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x8));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc();
            t68 = 0xFFFFFFFF;
        } else {
            t4 = ADXF_Open(a5, (((int)stk + 4) + 0x18));
            *(unsigned int *)(((int)stk + 20)) = t4;
            if (t4 == 0) {
                ADXERR_CallErrFunc();
                t66 = 0xFFFFFFFF;
            } else {
                memset(a6, 0x0, 0x18);
                t7 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((t7 << 2) + 0xC2B9F38)) = a6;
                *(unsigned int *)((a6 + 0x0)) = 0x0;
                t8 = *(int *)(((int)stk + 12));
                *(unsigned int *)((a6 + 0x8)) = t8;
                *(unsigned char *)((a6 + 0x12)) = 0x0;
                *(unsigned int *)(((int)stk + 16)) = (a6 + 0x14);
                *(unsigned int *)(((int)stk + 36)) = ((a6 + 0x14) + 0x2);
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                *(unsigned int *)((a6 + 0xC)) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = 0xC2BB384;
                *(unsigned int *)(((int)stk + 32)) = 0xC2BB388;
                t9 = 0x0;
                for (;;) {
                    if ((int)t9 >= (int)0x3) {
                        if (t9 == 3) {
                            ADXERR_CallErrFunc();
                            if (0xFFFFFFFF == -4) {
                                ADXERR_CallErrFunc();
                                t12 = *(int *)(((int)stk + 20));
                                ADXF_Close(t12);
                                return 0xFFFFFFFF;
                            }
                            t14 = *(int *)(((int)stk + 20));
                            ADXF_Close(t14);
                            return 0xFFFFFFFF;
                        }
                        if (0xFFFFFFFF == -4) {
                            ADXERR_CallErrFunc();
                            t17 = *(int *)(((int)stk + 20));
                            ADXF_Close(t17);
                            return 0xFFFFFFFF;
                        }
                        t19 = *(int *)(((int)stk + 20));
                        ADXF_Close(t19);
                        return 0xFFFFFFFF;
                    }
                    t21 = *(int *)(((int)stk + 20));
                    t22 = adxf_LoadData(t21, 0x1, 0xC2BB380);
                    if ((int)t22 > 0) {
                        t23 = *(int *)((a6 + 0xC));
                        if (t23 == 0) {
                            t24 = *(int *)(((int)stk + 4));
                            t25 = *(int *)((t24 + 0x0));
                            if ((int)t25 > (int)0x10000) break;
                            t26 = *(int *)(((int)stk + 4));
                            t27 = *(int *)(((int)stk + 24));
                            t28 = *(int *)((t26 + 0x0));
                            t30 = t28;
                            if ((int)t27 < (int)t28) {
                                t29 = *(int *)(((int)stk + 24));
                                t30 = t29;
                            }
                            *(unsigned short *)((a6 + 0x10)) = t30;
                            *(unsigned int *)((a6 + 0xC)) = (unsigned short)t30;
                            *(unsigned int *)((a6 + 0x4)) = (((unsigned int)((((unsigned short)t30 + 0x1) << 1) + 0x16) >> 2) << 2);
                            t31 = *(int *)(((int)stk + 16));
                            t32 = *(int *)(((int)stk + 32));
                            t33 = *(int *)((t32 + 0x0));
                            t34 = (int)((int)t33 / (int)0x800);
                            *(unsigned short *)((t31 + 0x0)) = t34;
                            if ((int)0x3 < (int)0x200) {
                                t35 = 0x3;
                                t36 = 0xC2BB38C;
                                do {
                                    t37 = *(int *)(((int)stk + 8));
                                    t9 = 0x7FF;
                                    *(unsigned int *)(((int)stk + 8)) = (t37 + 0x1);
                                    t38 = *(int *)((t36 + 0x0));
                                    t39 = *(int *)(((int)stk + 36));
                                    t40 = (int)((int)(t38 + t9) / (int)0x800);
                                    *(unsigned short *)((((((t37 + 0x1) - 1) << 1) + t39) + 0x0)) = t40;
                                    t41 = *(int *)(((int)stk + 8));
                                    t42 = *(int *)((a6 + 0xC));
                                    if ((int)t41 >= (int)t42) {
                                        if (0x0 == -4) {
                                            t35 = 0xC175664;
                                            t36 = a5;
                                            ADXERR_CallErrFunc();
                                            t44 = *(int *)(((int)stk + 20));
                                            t35 = t44;
                                            ADXF_Close(t35);
                                            return 0x0;
                                        }
                                        t46 = *(int *)(((int)stk + 20));
                                        t35 = t46;
                                        ADXF_Close(t35);
                                        return 0x0;
                                    }
                                    t35 = (t35 + 0x2);
                                    t36 = (t36 + 0x8);
                                } while ((int)t35 < (int)0x200);
                                t9 = 0x0;
                                continue;
                            }
                            t9 = 0x0;
                            continue;
                        }
                        if ((int)0x1 < (int)0x200) {
                            t48 = 0x1;
                            t49 = 0xC2BB384;
                            do {
                                t50 = *(int *)(((int)stk + 8));
                                t9 = 0x7FF;
                                *(unsigned int *)(((int)stk + 8)) = (t50 + 0x1);
                                t51 = *(int *)((t49 + 0x0));
                                t52 = *(int *)(((int)stk + 36));
                                t53 = (int)((int)(t51 + t9) / (int)0x800);
                                *(unsigned short *)((((((t50 + 0x1) - 1) << 1) + t52) + 0x0)) = t53;
                                t54 = *(int *)(((int)stk + 8));
                                t55 = *(int *)((a6 + 0xC));
                                if ((int)t54 >= (int)t55) {
                                    if (0x0 == -4) {
                                        t48 = 0xC175664;
                                        t49 = a5;
                                        ADXERR_CallErrFunc();
                                        t57 = *(int *)(((int)stk + 20));
                                        t48 = t57;
                                        ADXF_Close(t48);
                                        return 0x0;
                                    }
                                    t59 = *(int *)(((int)stk + 20));
                                    t48 = t59;
                                    ADXF_Close(t48);
                                    return 0x0;
                                }
                                t48 = (t48 + 0x2);
                                t49 = (t49 + 0x8);
                            } while ((int)t48 < (int)0x200);
                            t9 = 0x0;
                            continue;
                        }
                        t9 = 0x0;
                        continue;
                    }
                    t9 = (t9 + 0x1);
                }
                t61 = *(int *)(((int)stk + 4));
                *(unsigned int *)((t61 + 0x0)) = 0x10000;
                if (0xFFFFFFFC == -4) {
                    ADXERR_CallErrFunc();
                }
                t64 = *(int *)(((int)stk + 20));
                ADXF_Close(t64);
                t66 = 0xFFFFFFFC;
            }
            t68 = t66;
        }
        t70 = t68;
    }
    return t70;
}


int gdFsGetStatG(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t3;
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
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t29;
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
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t59;
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
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t81;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t106;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
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
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t145;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    int t178;
    int t180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t189;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t228;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t254;
    int stk[18] = {0};

    t0 = *(int *)0xC177A8C;
    *(unsigned int *)((t0 + 0x20)) = 0x1;
    t1 = *(int *)0xC177A8C;
    t2 = *(int *)((t1 + 0x1C));
    t4 = 0x0;
    if (t2 != 0) {
        t3 = *(int *)((t2 + 0x3C));
        t4 = t3;
    }
    t5 = *(int *)0xC177A8C;
    t6 = *(int *)((t5 + 0xC));
    t7 = *(int *)((t6 + 0x10));
    t8 = ((int (*)(int, int))(t7))(t4, (((int)stk + 4) + 0x1C));
    if (t2 != 0) {
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 == 65) {
                    t9 = *(int *)0xC177A8C;
                    t10 = *(int *)((t9 + 0xC));
                    t11 = *(int *)((t10 + 0x24));
                    t12 = *(int *)((t2 + 0x3C));
                    t13 = ((int (*)(int, int))(t11))(t12, ((int)stk + 4));
                    if (t13 == 0) {
                        t14 = *(int *)(((int)stk + 4));
                        if ((int)t14 > 0) {
                            *(unsigned short *)((t2 + 0x4A)) = 0x0;
                        } else {
                            *(unsigned short *)((t2 + 0x4A)) = 0x2;
                        }
                        t15 = *(int *)((t2 + 0x20));
                        *(unsigned int *)((t2 + 0x18)) = t15;
                    } else {
                        if (t13 == 1) {
                            t16 = *(int *)(((int)stk + 4));
                            *(unsigned int *)((t2 + 0x18)) = t16;
                        }
                    }
                } else {
                    if (t8 == 4) {
                        t18 = *(int *)(((((int)stk + 4) + 0x1C) + 0x8));
                        *(unsigned int *)((t2 + 0x40)) = t18;
                        t19 = *(short *)((t2 + 0x48));
                        if (t19 == 1) {
                            t20 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
                            *(unsigned int *)((t2 + 0x18)) = t20;
                        }
                    } else {
                        if (t8 != 67) {
                            if (t8 == 5) {
                                *(unsigned short *)((t2 + 0x50)) = t8;
                                t21 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
                                *(unsigned short *)((t2 + 0x52)) = t21;
                                t22 = *(int *)(((((int)stk + 4) + 0x1C) + 0x4));
                                *(unsigned int *)((t2 + 0x44)) = t22;
                                *(unsigned int *)((t2 + 0x3C)) = 0x0;
                                t23 = *(int *)0xC177A8C;
                                *(unsigned int *)((t23 + 0x1C)) = 0x0;
                                t24 = *(short *)((t2 + 0x52));
                                if (t24 == -29) {
                                    t25 = *(int *)((t2 + 0x44));
                                    if (t25 == 58) {
                                        t26 = gdFsGetDrvStatG();
                                        if (t26 != 6) {
                                            if (t26 == 0) {
                                                *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFE9;
                                            }
                                        } else {
                                            *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFE9;
                                        }
                                    } else {
                                        t29 = *(int *)((t2 + 0x44));
                                        if (t29 == 0x104) {
                                            *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFDB;
                                        }
                                    }
                                }
                                t34 = *(short *)((t2 + 0x52));
                                if (t34 != -23) {
                                    if (t34 == -33) {
                                        t35 = *(int *)0xC177A8C;
                                        *(unsigned int *)((t35 + 0x34)) = 0x1;
                                    }
                                } else {
                                    t36 = *(int *)0xC177A8C;
                                    *(unsigned int *)((t36 + 0x34)) = 0x1;
                                }
                                t37 = *(int *)0xC177A8C;
                                t38 = *(int *)((t37 + 0x24));
                                if (t38 != 0) {
                                    t39 = *(int *)0xC177A8C;
                                    t40 = *(short *)((t2 + 0x52));
                                    t41 = *(int *)((t39 + 0x24));
                                    t42 = *(int *)((t39 + 0x28));
                                    t43 = ((int (*)(int, int))(t41))(t42, t40);
                                }
                                t45 = *(int *)((t2 + 0x34));
                                if (t45 != 0) {
                                    t46 = *(int *)((t2 + 0x34));
                                    t47 = *(short *)((t2 + 0x52));
                                    t48 = *(int *)((t2 + 0x38));
                                    t49 = ((int (*)(int, int))(t46))(t48, t47);
                                }
                            } else {
                                if (t8 == 64) {
                                    *(unsigned short *)((t2 + 0x50)) = t8;
                                    t51 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
                                    *(unsigned short *)((t2 + 0x52)) = t51;
                                    t52 = *(int *)(((((int)stk + 4) + 0x1C) + 0x4));
                                    *(unsigned int *)((t2 + 0x44)) = t52;
                                    *(unsigned int *)((t2 + 0x3C)) = 0x0;
                                    t53 = *(int *)0xC177A8C;
                                    *(unsigned int *)((t53 + 0x1C)) = 0x0;
                                    t54 = *(short *)((t2 + 0x52));
                                    if (t54 == -29) {
                                        t55 = *(int *)((t2 + 0x44));
                                        if (t55 == 58) {
                                            t56 = gdFsGetDrvStatG();
                                            if (t56 != 6) {
                                                if (t56 == 0) {
                                                    *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFE9;
                                                }
                                            } else {
                                                *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFE9;
                                            }
                                        } else {
                                            t59 = *(int *)((t2 + 0x44));
                                            if (t59 == 0x104) {
                                                *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFDB;
                                            }
                                        }
                                    }
                                    t64 = *(short *)((t2 + 0x52));
                                    if (t64 != -23) {
                                        if (t64 == -33) {
                                            t65 = *(int *)0xC177A8C;
                                            *(unsigned int *)((t65 + 0x34)) = 0x1;
                                        }
                                    } else {
                                        t66 = *(int *)0xC177A8C;
                                        *(unsigned int *)((t66 + 0x34)) = 0x1;
                                    }
                                    t67 = *(int *)0xC177A8C;
                                    t68 = *(int *)((t67 + 0x24));
                                    if (t68 != 0) {
                                        t69 = *(int *)0xC177A8C;
                                        t70 = *(short *)((t2 + 0x52));
                                        t71 = *(int *)((t69 + 0x24));
                                        t72 = *(int *)((t69 + 0x28));
                                        t73 = ((int (*)(int, int))(t71))(t72, t70);
                                    }
                                    t75 = *(int *)((t2 + 0x34));
                                    if (t75 != 0) {
                                        t76 = *(int *)((t2 + 0x34));
                                        t77 = *(short *)((t2 + 0x52));
                                        t78 = *(int *)((t2 + 0x38));
                                        t79 = ((int (*)(int, int))(t76))(t78, t77);
                                    }
                                } else {
                                    *(unsigned short *)((t2 + 0x50)) = (unsigned char)t8;
                                    *(unsigned int *)((t2 + 0x3C)) = 0x0;
                                    t81 = *(int *)0xC177A8C;
                                    *(unsigned int *)((t81 + 0x1C)) = 0x0;
                                }
                            }
                        }
                    }
                }
            } else {
                t87 = *(int *)0xC177A8C;
                t88 = *(short *)((t2 + 0x48));
                *(unsigned int *)((t87 + 0x1C)) = 0x0;
                *(unsigned short *)((t2 + 0x50)) = t8;
                *(unsigned int *)((t2 + 0x3C)) = 0x0;
                *(unsigned short *)((t2 + 0x48)) = 0x0;
                if (t8 == 1) {
                    if (t88 == 1) {
                        t89 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
                        *(unsigned int *)((t2 + 0x18)) = t89;
                        t90 = *(int *)((t2 + 0x14));
                        t91 = *(int *)((t2 + 0x1C));
                        *(unsigned int *)((t2 + 0x14)) = (t90 + t91);
                        *(unsigned short *)((t2 + 0x4A)) = 0x2;
                        t92 = *(int *)((t2 + 0x24));
                        if (t92 != 0) {
                            t93 = *(int *)((t2 + 0x24));
                            t94 = *(int *)((t2 + 0x28));
                            t95 = ((int (*)(int))(t93))(t94);
                        }
                    } else {
                        if (t88 != 3) {
                            if (t88 == 4) {
                                t97 = *(int *)((t2 + 0x20));
                                *(unsigned int *)((t2 + 0x18)) = t97;
                                t98 = *(int *)((t2 + 0x14));
                                t99 = *(int *)((t2 + 0x1C));
                                *(unsigned int *)((t2 + 0x14)) = (t98 + t99);
                                *(unsigned short *)((t2 + 0x4A)) = 0x2;
                            } else {
                                if (t88 == 7) {
                                    t100 = *(int *)0xC177A8C;
                                    t101 = gdDecSubcode((t100 + 0x40), (((int)stk + 4) + 0x4));
                                    if (t101 != 0) {
                                        *(unsigned short *)((t2 + 0x50)) = 0x5;
                                        *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFED;
                                        *(unsigned int *)((t2 + 0x44)) = 0x0;
                                        t102 = *(short *)((t2 + 0x52));
                                        if (t102 != -23) {
                                            if (t102 == -33) {
                                                t103 = *(int *)0xC177A8C;
                                                *(unsigned int *)((t103 + 0x34)) = 0x1;
                                            }
                                        } else {
                                            t106 = *(int *)0xC177A8C;
                                            *(unsigned int *)((t106 + 0x34)) = 0x1;
                                        }
                                        t109 = *(int *)0xC177A8C;
                                        t110 = *(int *)((t109 + 0x24));
                                        if (t110 != 0) {
                                            t111 = *(int *)0xC177A8C;
                                            t112 = *(short *)((t2 + 0x52));
                                            t113 = *(int *)((t111 + 0x24));
                                            t114 = *(int *)((t111 + 0x28));
                                            t115 = ((int (*)(int, int))(t113))(t114, t112);
                                        }
                                        t117 = *(int *)((t2 + 0x34));
                                        if (t117 != 0) {
                                            t118 = *(int *)((t2 + 0x34));
                                            t119 = *(short *)((t2 + 0x52));
                                            t120 = *(int *)((t2 + 0x38));
                                            t121 = ((int (*)(int, int))(t118))(t120, t119);
                                        }
                                    } else {
                                        t123 = *(int *)(((int)stk + 8));
                                        t124 = *(int *)((t2 + 0x8));
                                        *(unsigned int *)((t124 + 0x0)) = t123;
                                        t125 = *(int *)(((int)stk + 12));
                                        t126 = *(int *)((t2 + 0x8));
                                        *(unsigned int *)((t126 + 0x4)) = t125;
                                        t127 = *(int *)(((int)stk + 16));
                                        t128 = *(int *)((t2 + 0x8));
                                        *(unsigned int *)((t128 + 0x8)) = t127;
                                        t129 = *(int *)(((int)stk + 20));
                                        t130 = *(int *)((t2 + 0x8));
                                        *(unsigned int *)((t130 + 0xC)) = t129;
                                        t131 = *(int *)(((int)stk + 24));
                                        t132 = *(int *)((t2 + 0x8));
                                        *(unsigned int *)((t132 + 0x10)) = (t131 & 0xFFFFFF);
                                    }
                                } else {
                                    if (t88 == 8) {
                                        t134 = *(int *)0xC177A8C;
                                        t135 = *(int *)((t134 + 0xC));
                                        t136 = *(int *)((t135 + 0x48));
                                        t137 = *(int *)((t2 + 0x4));
                                        t138 = ((int (*)(int, int, int, int))(t136))(0xC2B8D78, 0xC2B8D7C, t137, 0xC2B8D80);
                                        if (t138 != 0) {
                                            *(unsigned int *)((t2 + 0x3C)) = t138;
                                            *(unsigned short *)((t2 + 0x50)) = 0x4;
                                            *(unsigned short *)((t2 + 0x48)) = 0x6;
                                            t139 = *(int *)0xC177A8C;
                                            *(unsigned int *)((t139 + 0x1C)) = t2;
                                        } else {
                                            *(unsigned short *)((t2 + 0x50)) = 0x5;
                                            *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFE4;
                                            *(unsigned int *)((t2 + 0x44)) = 0x0;
                                            t140 = *(int *)((t2 + 0x4));
                                            *(unsigned int *)((t140 + 0x0)) = 0x0;
                                            t141 = *(short *)((t2 + 0x52));
                                            if (t141 != -23) {
                                                if (t141 == -33) {
                                                    t142 = *(int *)0xC177A8C;
                                                    *(unsigned int *)((t142 + 0x34)) = 0x1;
                                                }
                                            } else {
                                                t145 = *(int *)0xC177A8C;
                                                *(unsigned int *)((t145 + 0x34)) = 0x1;
                                            }
                                            t148 = *(int *)0xC177A8C;
                                            t149 = *(int *)((t148 + 0x24));
                                            if (t149 != 0) {
                                                t150 = *(int *)0xC177A8C;
                                                t151 = *(short *)((t2 + 0x52));
                                                t152 = *(int *)((t150 + 0x24));
                                                t153 = *(int *)((t150 + 0x28));
                                                t154 = ((int (*)(int, int))(t152))(t153, t151);
                                            }
                                            t156 = *(int *)((t2 + 0x34));
                                            if (t156 != 0) {
                                                t157 = *(int *)((t2 + 0x34));
                                                t158 = *(short *)((t2 + 0x52));
                                                t159 = *(int *)((t2 + 0x38));
                                                t160 = ((int (*)(int, int))(t157))(t159, t158);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            *(unsigned short *)((t2 + 0x4A)) = 0x2;
                        }
                    }
                }
            }
        } else {
            t170 = *(int *)0xC177A8C;
            t171 = *(short *)((t2 + 0x48));
            *(unsigned int *)((t170 + 0x1C)) = 0x0;
            *(unsigned short *)((t2 + 0x50)) = t8;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned short *)((t2 + 0x48)) = 0x0;
            if (t8 == 1) {
                if (t171 == 1) {
                    t172 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
                    *(unsigned int *)((t2 + 0x18)) = t172;
                    t173 = *(int *)((t2 + 0x14));
                    t174 = *(int *)((t2 + 0x1C));
                    *(unsigned int *)((t2 + 0x14)) = (t173 + t174);
                    *(unsigned short *)((t2 + 0x4A)) = 0x2;
                    t175 = *(int *)((t2 + 0x24));
                    if (t175 != 0) {
                        t176 = *(int *)((t2 + 0x24));
                        t177 = *(int *)((t2 + 0x28));
                        t178 = ((int (*)(int))(t176))(t177);
                    }
                } else {
                    if (t171 != 3) {
                        if (t171 == 4) {
                            t180 = *(int *)((t2 + 0x20));
                            *(unsigned int *)((t2 + 0x18)) = t180;
                            t181 = *(int *)((t2 + 0x14));
                            t182 = *(int *)((t2 + 0x1C));
                            *(unsigned int *)((t2 + 0x14)) = (t181 + t182);
                            *(unsigned short *)((t2 + 0x4A)) = 0x2;
                        } else {
                            if (t171 == 7) {
                                t183 = *(int *)0xC177A8C;
                                t184 = gdDecSubcode((t183 + 0x40), (((int)stk + 4) + 0x4));
                                if (t184 != 0) {
                                    *(unsigned short *)((t2 + 0x50)) = 0x5;
                                    *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFED;
                                    *(unsigned int *)((t2 + 0x44)) = 0x0;
                                    t185 = *(short *)((t2 + 0x52));
                                    if (t185 != -23) {
                                        if (t185 == -33) {
                                            t186 = *(int *)0xC177A8C;
                                            *(unsigned int *)((t186 + 0x34)) = 0x1;
                                        }
                                    } else {
                                        t189 = *(int *)0xC177A8C;
                                        *(unsigned int *)((t189 + 0x34)) = 0x1;
                                    }
                                    t192 = *(int *)0xC177A8C;
                                    t193 = *(int *)((t192 + 0x24));
                                    if (t193 != 0) {
                                        t194 = *(int *)0xC177A8C;
                                        t195 = *(short *)((t2 + 0x52));
                                        t196 = *(int *)((t194 + 0x24));
                                        t197 = *(int *)((t194 + 0x28));
                                        t198 = ((int (*)(int, int))(t196))(t197, t195);
                                    }
                                    t200 = *(int *)((t2 + 0x34));
                                    if (t200 != 0) {
                                        t201 = *(int *)((t2 + 0x34));
                                        t202 = *(short *)((t2 + 0x52));
                                        t203 = *(int *)((t2 + 0x38));
                                        t204 = ((int (*)(int, int))(t201))(t203, t202);
                                    }
                                } else {
                                    t206 = *(int *)(((int)stk + 8));
                                    t207 = *(int *)((t2 + 0x8));
                                    *(unsigned int *)((t207 + 0x0)) = t206;
                                    t208 = *(int *)(((int)stk + 12));
                                    t209 = *(int *)((t2 + 0x8));
                                    *(unsigned int *)((t209 + 0x4)) = t208;
                                    t210 = *(int *)(((int)stk + 16));
                                    t211 = *(int *)((t2 + 0x8));
                                    *(unsigned int *)((t211 + 0x8)) = t210;
                                    t212 = *(int *)(((int)stk + 20));
                                    t213 = *(int *)((t2 + 0x8));
                                    *(unsigned int *)((t213 + 0xC)) = t212;
                                    t214 = *(int *)(((int)stk + 24));
                                    t215 = *(int *)((t2 + 0x8));
                                    *(unsigned int *)((t215 + 0x10)) = (t214 & 0xFFFFFF);
                                }
                            } else {
                                if (t171 == 8) {
                                    t217 = *(int *)0xC177A8C;
                                    t218 = *(int *)((t217 + 0xC));
                                    t219 = *(int *)((t218 + 0x48));
                                    t220 = *(int *)((t2 + 0x4));
                                    t221 = ((int (*)(int, int, int, int))(t219))(0xC2B8D78, 0xC2B8D7C, t220, 0xC2B8D80);
                                    if (t221 != 0) {
                                        *(unsigned int *)((t2 + 0x3C)) = t221;
                                        *(unsigned short *)((t2 + 0x50)) = 0x4;
                                        *(unsigned short *)((t2 + 0x48)) = 0x6;
                                        t222 = *(int *)0xC177A8C;
                                        *(unsigned int *)((t222 + 0x1C)) = t2;
                                    } else {
                                        *(unsigned short *)((t2 + 0x50)) = 0x5;
                                        *(unsigned short *)((t2 + 0x52)) = 0xFFFFFFE4;
                                        *(unsigned int *)((t2 + 0x44)) = 0x0;
                                        t223 = *(int *)((t2 + 0x4));
                                        *(unsigned int *)((t223 + 0x0)) = 0x0;
                                        t224 = *(short *)((t2 + 0x52));
                                        if (t224 != -23) {
                                            if (t224 == -33) {
                                                t225 = *(int *)0xC177A8C;
                                                *(unsigned int *)((t225 + 0x34)) = 0x1;
                                            }
                                        } else {
                                            t228 = *(int *)0xC177A8C;
                                            *(unsigned int *)((t228 + 0x34)) = 0x1;
                                        }
                                        t231 = *(int *)0xC177A8C;
                                        t232 = *(int *)((t231 + 0x24));
                                        if (t232 != 0) {
                                            t233 = *(int *)0xC177A8C;
                                            t234 = *(short *)((t2 + 0x52));
                                            t235 = *(int *)((t233 + 0x24));
                                            t236 = *(int *)((t233 + 0x28));
                                            t237 = ((int (*)(int, int))(t235))(t236, t234);
                                        }
                                        t239 = *(int *)((t2 + 0x34));
                                        if (t239 != 0) {
                                            t240 = *(int *)((t2 + 0x34));
                                            t241 = *(short *)((t2 + 0x52));
                                            t242 = *(int *)((t2 + 0x38));
                                            t243 = ((int (*)(int, int))(t240))(t242, t241);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        *(unsigned short *)((t2 + 0x4A)) = 0x2;
                    }
                }
            }
        }
    }
    t254 = *(int *)0xC177A8C;
    *(unsigned int *)((t254 + 0x20)) = 0x0;
    return t8;
}


