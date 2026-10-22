/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int ADXB_EvokeExpandMono(int, int, int, int);
int ADXB_EvokeExpandSte(int, int, int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Close(int);
int ADXPD_GetNumBlk(int, int);
int ADXRNA_GetTime(int, int, int);
int ADXSTM_GetCurOfst(int, int);
int ADXT_SetOutVol(int, int);
int CalcShadow4Normal(int, int);
int FUN_0c02e1ce(int);
int FUN_0c02e282(int);
int FUN_0c02e458(int);
int FUN_0c038ee6(void);
int FUN_0c038eec(int);
int FUN_0c03b544(int, int);
int FUN_0c03b698(int);
int FUN_0c03bea0(int, int, int);
int FUN_0c03c792(int, int, int, int);
int FUN_0c03ce68(int, int, int, int, int, int, float, float);
int FUN_0c040cea(int, int);
int FUN_0c0525fc(int, int, int, int);
int FUN_0c0526a0(void);
int FUN_0c052c9e(void);
int FUN_0c05317e(void);
int FUN_0c0533ba(void);
int FUN_0c0534ec(int, int, int, int);
int FUN_0c0545ac(int, int);
int FUN_0c054698(void);
int FUN_0c054ffe(void);
int FUN_0c0551c6(int, int);
int FUN_0c0552b0(void);
int FUN_0c057728(int, int, int);
int FUN_0c059110(void);
int FUN_0c0591ea(int, int, int);
int FUN_0c059254(void);
int FUN_0c05b11c(void);
int FUN_0c05cdb4(void);
int FUN_0c05ce38(void);
int FUN_0c05fd70(int);
int FUN_0c076670(void);
int FUN_0c077590(int, int, int);
int FUN_0c077df0(int);
int FUN_0c07e820(int, int, int);
int FUN_0c07e880(int);
int FUN_0c07e8a0(int, int);
int FUN_0c07e960(int, int, int, int);
int FUN_0c07f5c0(int);
int FUN_0c07ff20(int, int, int);
int FUN_0c080190(int, int, int);
int FUN_0c080270(int, int, int);
int FUN_0c0802b0(int, int);
int FUN_0c0813e0(int, int, int);
int FUN_0c085dfc(int, int, int);
int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int FUN_0c1534e8(int, int, int);
int FUN_0c1534fc(int, int, int);
int FUN_0c156742(int, int, int);
int FUN_0c156934(int, int, int, int, int, int);
int FUN_0c15887e(int, int, int);
int FUN_0c15888e(int);
int FUN_0c159ae0(void);
int FUN_0c15c3c8(int, int, int, int);
int FUN_0c16883e(int);
int FUN_0c168856(int);
int FUN_0c16887a(int, int, int);
int FUN_0c168e10(int);
int FUN_0c170820(int, int);
int FUN_0c170834(int, int, int);
int FUN_0c1708bc(int, int);
int FUN_0c1709a6(int);
int FUN_0c172c3c(int, int, int, int, int);
int GetCollision2D(int, int, float);
int GetMenuMode(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int adxf_CloseSjStm(int);
int adxf_CreateAdxFs(void);
int adxf_SetAfsFileInfo(int, int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_SetFileInfo(int, int);
int buGetFileInfo(int, int, int);
int buIsFormat(int);
int buIsReady(int);
int buStat(int);
int camSetAngles(int, int, int, int);
int camSetMode(int);
int check_file_correct(int, int);
int check_isopen(int, int);
int direntry(int, int);
int extRand(int);
int gdc_StopStreamSongAll(void);
int get_fat(int, int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmCreateVertexBuffer(int, int, int, int, int);
int kmLoadTexture(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiFBinit(void);
int kmiInitInterrupt(void);
int kmiInitializeDevice(void);
int kmiInitializeFog(void);
int kmiInitializeTA(void);
int kmiReadRegister(int);
int kmiSetTAEnvironment(int, int, int, int, int, int);
int kmiTXalloc(int, int);
int kmiVQFBfree(int);
int kmiVQalloc(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int memset(int, int, int, int);
int mwlRnaStartCopy(int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix8(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPuts(int);
int nlUnitMatrix(void);
int nlsndStreamChgFx(int, int, int);
int nlsndStreamSetHdFx(int, int, int);
int nlsndStreamSetHdGain(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int open_file_handle(int);
int pdVibIsReady(int, int, int, int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int setTechnicalBonus(int, int, int, int);
int set_event(int, int);
int set_vmstime(int, int);
int setjmp(int);
int thunk_FUN_0c170880(int, int, int);
int vmsfs_c_getstate(int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int, int, int, int);

void FUN_0c020080(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0xC08A680;
    *(unsigned int *)0xC1789DC = t0;
    t1 = *(int *)0xC08A67C;
    *(unsigned int *)0xC1789D8 = t1;
    t2 = *(int *)0xC08A678;
    *(unsigned int *)0xC1789D4 = t2;
    t3 = *(int *)0xC08A674;
    *(unsigned int *)0xC1789D0 = t3;
    t4 = *(int *)0xC08A670;
    *(unsigned int *)0xC1789CC = t4;
    t5 = *(int *)0xC08A66C;
    *(unsigned int *)0xC1789C8 = t5;
    t6 = *(int *)0xC08A668;
    *(unsigned int *)0xC1789C4 = t6;
}

void FUN_0c0287c2(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)0xC179910 = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)0xC17990C = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xC179908 = t2;
}

int SetAdvCamera(int a4, int a5)
{
    int t1;
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;

    t1 = 0x3;
    if ((int)a5 >= 0) {
        t0 = a5;
        if ((int)a5 > (int)0x4) {
            t0 = 0x3;
        }
        t1 = t0;
    }
    *(unsigned int *)0xC0E4E38 = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)0xC179970 = t2;
    t3 = *(int *)((a4 + 0x4));
    *(unsigned int *)0xC17996C = t3;
    t4 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xC179968 = t4;
    camSetAngles(0x0, 0x0, 0x0, 0x0);
    t6 = camSetMode(0x8);
    *(unsigned int *)0xC179974 = 0x1;
    return t6;
}

int FUN_0c02e494(void)
{
    int t1;
    int t2;

    gdc_StopStreamSongAll();
    *(unsigned int *)0xC26A0C8 = 0x0;
    t1 = *(int *)0xC26A0CC;
    t2 = (int)((int)(t1 + 0x1) % (int)0x4);
    *(unsigned int *)0xC26A0CC = t2;
    return t2;
}

int FUN_0c02e4b2(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t13;
    int t32;
    int t30;
    int t24;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t27;
    int t28;
    int t22;

    t0 = *(int *)0xC2A11B0;
    t1 = *(signed char *)0xC1EE80C;
    if (t0 == 1) {
        t2 = FUN_0c02e282(t1);
        t3 = *(int *)0xC1EE820;
        ADXT_SetOutVol(t3, t2);
        *(unsigned int *)0xC0E5348 = 0x1;
    } else {
        t5 = *(int *)0xC0E5348;
        if (t5 == 1) {
            t6 = FUN_0c02e282(t1);
            t7 = *(int *)0xC1EE820;
            ADXT_SetOutVol(t7, t6);
            *(unsigned int *)0xC0E5348 = 0x0;
        }
    }
    t13 = *(int *)0xC26A0C8;
    t32 = t13;
    if (t13 != -1) {
        t30 = t13;
        if (t13 != 0) {
            if (t13 != 1) {
                t24 = t13;
                if (t13 == 2) {
                    t14 = *(int *)0xC26A0D8;
                    if ((int)t14 < (int)0x3C) {
                        t15 = *(int *)0xC26A0CC;
                        t16 = (int)((int)(t15 + 0x1) % (int)0x4);
                        *(unsigned int *)0xC26A0CC = t16;
                        t17 = FUN_0c02e458(0xC26A0CC);
                        t22 = t17;
                    } else {
                        t18 = *(signed char *)0xC1EE80C;
                        t19 = FUN_0c02e282((int)(((float)t14 / 120.0f) * (float)t18));
                        t20 = *(int *)0xC1EE820;
                        t21 = ADXT_SetOutVol(t20, t19);
                        t22 = t21;
                    }
                    t23 = *(int *)0xC26A0D8;
                    *(unsigned int *)0xC26A0D8 = (t23 - 1);
                    t24 = t22;
                }
                t28 = t24;
            } else {
                t27 = FUN_0c02e1ce(0x0);
                *(unsigned int *)0xC26A0D0 = t27;
                if ((int)t27 <= (int)0x78) {
                    *(unsigned int *)0xC26A0C8 = 0x2;
                    *(unsigned int *)0xC26A0D8 = 0x78;
                }
                t28 = t27;
            }
            t30 = t28;
        }
        t32 = t30;
    }
    return t32;
}

void FUN_0c030b68(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC26E1E0;
    *(unsigned int *)((a4 + 0x8)) = t0;
    t1 = *(int *)0xC26E1DC;
    *(unsigned int *)((a4 + 0x4)) = t1;
    t2 = *(int *)0xC26E1D8;
    *(unsigned int *)((a4 + 0x0)) = t2;
}

int SetCameraPosVelocity(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    nlOuterProduct((a4 + 0xC), a4, 0xC0ED9F8);
    t1 = *(int *)(((a4 + 0xC) + 0x8));
    *(unsigned int *)0xC0EDA10 = t1;
    t2 = *(int *)(((a4 + 0xC) + 0x4));
    *(unsigned int *)0xC0EDA0C = t2;
    t3 = *(int *)(((a4 + 0xC) + 0x0));
    *(unsigned int *)0xC0EDA08 = t3;
    t4 = *(int *)((a4 + 0x8));
    *(unsigned int *)0xC0EDA20 = t4;
    t5 = *(int *)((a4 + 0x4));
    *(unsigned int *)0xC0EDA1C = t5;
    t6 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xC0EDA18 = t6;
    return nlMultiMatrix8(0xC0ED9F8);
}

void InitHomingVector(int a4, int a5)
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

    t0 = *(int *)((a5 + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = t0;
    t1 = *(int *)((a5 + 0x4));
    *(unsigned int *)(((a4 + 0x18) + 0x4)) = t1;
    t2 = *(int *)((a5 + 0x0));
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = t2;
    t3 = *(int *)((a5 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = t3;
    t4 = *(int *)((a5 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = t4;
    t5 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = t5;
    t6 = *(int *)0xC0965F8;
    *(unsigned int *)(((a4 + 0xC) + 0x8)) = t6;
    t7 = *(int *)0xC0965F4;
    *(unsigned int *)(((a4 + 0xC) + 0x4)) = t7;
    t8 = *(int *)0xC0965F0;
    *(unsigned int *)(((a4 + 0xC) + 0x0)) = t8;
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x28)) = 0.0f;
}

void FUN_0c0364b8(int a4, int a5)
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

    t0 = *(int *)((a5 + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = t0;
    t1 = *(int *)((a5 + 0x4));
    *(unsigned int *)(((a4 + 0x18) + 0x4)) = t1;
    t2 = *(int *)((a5 + 0x0));
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = t2;
    t3 = *(int *)((a5 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = t3;
    t4 = *(int *)((a5 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = t4;
    t5 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = t5;
    t6 = *(int *)0xC096604;
    *(unsigned int *)(((a4 + 0xC) + 0x8)) = t6;
    t7 = *(int *)0xC096600;
    *(unsigned int *)(((a4 + 0xC) + 0x4)) = t7;
    t8 = *(int *)0xC0965FC;
    *(unsigned int *)(((a4 + 0xC) + 0x0)) = t8;
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x28)) = 0.0f;
}

void FUN_0c037534(void)
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

    t0 = set_event(0x5C, 0xC0370C4);
    *(unsigned int *)0xC27428C = t0;
    if (t0 != 0) {
        *(float *)((t0 + 0x14)) = 8860.0f;
        *(float *)((t0 + 0x18)) = -200.0f;
        *(float *)((t0 + 0x1C)) = -3487.0f;
        t1 = *(int *)0xC0965F8;
        *(unsigned int *)(((t0 + 0x20) + 0x8)) = t1;
        t2 = *(int *)0xC0965F4;
        *(unsigned int *)(((t0 + 0x20) + 0x4)) = t2;
        t3 = *(int *)0xC0965F0;
        *(unsigned int *)(((t0 + 0x20) + 0x0)) = t3;
        *(unsigned int *)((t0 + 0x58)) = 0x0;
        t4 = *(int *)0xC096628;
        *(unsigned int *)(((t0 + 0x2C) + 0x20)) = t4;
        t5 = *(int *)0xC096624;
        *(unsigned int *)(((t0 + 0x2C) + 0x1C)) = t5;
        t6 = *(int *)0xC096620;
        *(unsigned int *)(((t0 + 0x2C) + 0x18)) = t6;
        t7 = *(int *)0xC09661C;
        *(unsigned int *)(((t0 + 0x2C) + 0x14)) = t7;
        t8 = *(int *)0xC096618;
        *(unsigned int *)(((t0 + 0x2C) + 0x10)) = t8;
        t9 = *(int *)0xC096614;
        *(unsigned int *)(((t0 + 0x2C) + 0xC)) = t9;
        t10 = *(int *)0xC096610;
        *(unsigned int *)(((t0 + 0x2C) + 0x8)) = t10;
        t11 = *(int *)0xC09660C;
        *(unsigned int *)(((t0 + 0x2C) + 0x4)) = t11;
        t12 = *(int *)0xC096608;
        *(unsigned int *)(((t0 + 0x2C) + 0x0)) = t12;
        *(float *)((t0 + 0x50)) = 0.166666657f;
        *(unsigned int *)((t0 + 0x54)) = 0x0;
        t13 = *(int *)(((t0 + 0x14) + 0x8));
        *(unsigned int *)0xC27427C = t13;
        t14 = *(int *)(((t0 + 0x14) + 0x4));
        *(unsigned int *)0xC274278 = t14;
        t15 = *(int *)(((t0 + 0x14) + 0x0));
        *(unsigned int *)0xC274274 = t15;
    }
}

void FUN_0c03dc82(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t16;
    int t20;
    int t18;
    int t17;
    int t24;
    int t28;
    int t12;

    if (a4 != 0) {
        t0 = *(int *)0xC2A11E0;
        if (a5 != 2) {
            FUN_0c03bea0(0x0, 0xC2A1244, 0x4);
            t2 = *(int *)0xC2A1244;
            FUN_0c03c792(0x8013, 0xC09F444, 0x4, t2);
            t4 = *(int *)0xC2A1ADC;
            t5 = *(int *)0xC2A1244;
            FUN_0c03ce68(0x24, (t0 - 1), (t5 + (a5 << 2)), 0x0, 0x9, 0x2, (float)(t4 + 0x78), 128.0f);
        } else {
            if ((int)(t0 - 1) < 0) {
                t7 = 0xFFFF;
                t8 = 0x0;
                do {
                    t9 = FUN_0c040cea(t8, a5);
                    t8 = (t8 + 0x1);
                    t7 = (t7 & t9);
                } while ((int)t8 < (int)0x4);
                t12 = t7;
            } else {
                t10 = FUN_0c040cea((t0 - 1), a5);
                t12 = t10;
            }
            t13 = 0x8;
            if ((0x3000 & t12) == 0x3000) {
                t13 = 0x7;
            }
            t14 = t13;
            if ((t12 & 0xC000) == 0xC000) {
                t14 = (t13 - 1);
            }
            FUN_0c03bea0(0x0, 0xC2A1244, t14);
            t16 = *(int *)0xC2A1244;
            t20 = t16;
            if ((0x3000 & t12) == 0x3000) {
                t18 = t16;
                if ((t12 & 0xC000) != 0xC000) {
                    t17 = t16;
                    if (t16 == (t14 - 1)) {
                        t17 = (t16 + 0x1);
                    }
                    t18 = t17;
                }
                t20 = t18;
            }
            if (((((int)(t20 << 1) >= 0) ? (0x1 << ((t20 << 1) & 31)) : ((-(int)(t20 << 1) & 31) ? ((int)0x1 >> (-(int)(t20 << 1) & 31)) : ((int)0x1 >> 31))) & t12) == 0) {
                FUN_0c03c792(0x8013, 0xC09F4F4, t14, t20);
                t24 = *(int *)0xC2A1ADC;
                FUN_0c03ce68(0x24, (t0 - 1), ((a5 << 2) + (t20 << 1)), 0x0, 0x4, 0x2, (float)(t24 + 0x78), 128.0f);
            }
            if (((((int)((t20 << 1) + 0x1) >= 0) ? (0x1 << (((t20 << 1) + 0x1) & 31)) : ((-(int)((t20 << 1) + 0x1) & 31) ? ((int)0x1 >> (-(int)((t20 << 1) + 0x1) & 31)) : ((int)0x1 >> 31))) & t12) == 0) {
                FUN_0c03c792(0x8013, 0xC09F654, t14, t20);
                t28 = *(int *)0xC2A1ADC;
                FUN_0c03ce68(0x24, (t0 - 1), (((a5 << 2) + (t20 << 1)) + 0x1), 0x0, 0x4, 0x2, (float)(t28 + 0x78), 268.0f);
            }
        }
    }
}

int FUN_0c040b00(void)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)0xC1EE234;
    *(unsigned int *)0xC2A1228 = t0;
    t1 = *(int *)0xC1EE238;
    *(unsigned int *)0xC2A122C = t1;
    t2 = *(int *)0xC1EE234;
    if (t2 != 3) {
        *(unsigned int *)0xC1EE234 = 0x3;
        *(unsigned int *)0xC1EE238 = 0x0;
    }
    FUN_0c03b544(0x6, 0xC1EE238);
    FUN_0c03b698(0xF);
    t7 = *(int *)0xC2A1AE0;
    t8 = (int)((int)(t7 + 0x1) % (int)0x3);
    *(unsigned int *)0xC2A1AE0 = t8;
    t9 = *(int *)(((t8 << 2) + 0xC0A2018));
    *(unsigned int *)0xC0EF550 = t9;
    return Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
}

void FUN_0c040e1c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int stk[14];

    t0 = *(int *)0xC2A1220;
    if ((int)t0 > 0) {
        t1 = *(int *)0xC2A1220;
        *(unsigned int *)0xC2A1220 = (t1 - 1);
        if ((t1 - 1) == 0) {
            *(unsigned int *)0xC2A121C = 0x1;
            t2 = *(int *)0xC2A121C;
            if (t2 == 1) {
                t3 = 0xFFFFFFFF;
                t4 = 0x0;
                for (;;) {
                    if ((int)t4 > (int)0x7) {
                        if (t3 != -1) {
                            t5 = *(int *)0xC2A11B8;
                            if (t5 != t3) {
                                *(unsigned int *)0xC2A121C = 0x1;
                                *(unsigned int *)0xC2A11B8 = t3;
                                return;
                            }
                            *(unsigned int *)0xC2A11B8 = t3;
                            return;
                        }
                        return;
                    }
                    t6 = buIsReady(t4);
                    if (t6 == 1) {
                        if (t3 == -1) {
                            t3 = t4;
                        }
                        do {
                            t9 = buStat(t4);
                        } while (t9 == -1);
                        t10 = buGetFileInfo(t4, 0xC0A2078, ((int)stk + 4));
                        if (t10 == 0) {
                            t11 = FUN_0c0813e0((((int)stk + 4) + 0xA), 0xC28CA98, 0x8);
                            if (t11 == 0) break;
                            t4 = (t4 + 0x1);
                            continue;
                        }
                        t4 = (t4 + 0x1);
                        continue;
                    }
                    t4 = (t4 + 0x1);
                }
                if (t4 != -1) {
                    t12 = *(int *)0xC2A11B8;
                    if (t12 != t4) {
                        *(unsigned int *)0xC2A121C = 0x1;
                    }
                    *(unsigned int *)0xC2A11B8 = t4;
                }
            }
        }
    } else {
        t16 = *(int *)0xC2A121C;
        if (t16 == 1) {
            t17 = 0xFFFFFFFF;
            t18 = 0x0;
            for (;;) {
                if ((int)t18 > (int)0x7) {
                    if (t17 != -1) {
                        t19 = *(int *)0xC2A11B8;
                        if (t19 != t17) {
                            *(unsigned int *)0xC2A121C = 0x1;
                            *(unsigned int *)0xC2A11B8 = t17;
                            return;
                        }
                        *(unsigned int *)0xC2A11B8 = t17;
                        return;
                    }
                    return;
                }
                t20 = buIsReady(t18);
                if (t20 == 1) {
                    if (t17 == -1) {
                        t17 = t18;
                    }
                    do {
                        t23 = buStat(t18);
                    } while (t23 == -1);
                    t24 = buGetFileInfo(t18, 0xC0A2078, ((int)stk + 4));
                    if (t24 == 0) {
                        t25 = FUN_0c0813e0((((int)stk + 4) + 0xA), 0xC28CA98, 0x8);
                        if (t25 == 0) break;
                        t18 = (t18 + 0x1);
                        continue;
                    }
                    t18 = (t18 + 0x1);
                    continue;
                }
                t18 = (t18 + 0x1);
            }
            if (t18 != -1) {
                t26 = *(int *)0xC2A11B8;
                if (t26 != t18) {
                    *(unsigned int *)0xC2A121C = 0x1;
                }
                *(unsigned int *)0xC2A11B8 = t18;
            }
        }
    }
}

int courseCarType(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = extRand(a4);
    t1 = *(int *)(((((0x7 & t0) << 2) + (0xC0C3E24 + (((a4 << 2) << 2) << 1))) + 0x0));
    t2 = *(int *)(((((t1 << 2) << 1) + 0xC0A21F8) + 0x4));
    t3 = (int)((int)((int)t0 >> 4) % (int)t2);
    t4 = *(int *)(((((t1 << 2) << 1) + 0xC0A21F8) + 0x0));
    return (t3 + t4);
}

int trafficLevelControl(int a4)
{
    int t0;
    int t9;
    int t1;
    int t5;
    int t2;
    int t3;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t28;
    int t24;
    int t25;
    int t27;
    int t26;
    int t31;
    int t32;
    int t33;
    int t34;

    if (a4 == 0) {
        t0 = *(int *)0xC1EE234;
        t9 = 0x3;
        if (t0 == 1) {
            t1 = *(int *)0xC1EE210;
            t5 = 0x3;
            if ((int)t1 <= (int)0x1) {
                t2 = *(signed char *)0xC28A4EB;
                t3 = (int)((int)(unsigned char)t2 % (int)0x8);
                t5 = t3;
            }
            t9 = t5;
        }
        t11 = *(int *)(((t9 << 2) + 0xC0A2178));
        *(unsigned int *)0xC2A4488 = t11;
        *(unsigned int *)0xC2A1B6C = t11;
        *(unsigned int *)0xC2A1B70 = 0x0;
        t12 = *(int *)(((t9 << 2) + 0xC0A2198));
        *(unsigned int *)0xC2A448C = t12;
        t13 = *(int *)(((t9 << 2) + 0xC0A21B8));
        *(unsigned int *)0xC2A4490 = t13;
        *(unsigned int *)0xC2A4494 = 0x0;
        *(unsigned int *)0xC2A4498 = 0x0;
        return 0xC0A21B8;
    }
    t14 = *(int *)0xC2A4494;
    *(unsigned int *)0xC2A4494 = (t14 + 0x1);
    t15 = *(int *)0xC2A448C;
    if ((int)(t14 + 0x1) > (int)t15) {
        *(unsigned int *)0xC2A4494 = 0x0;
        t16 = *(int *)0xC2A1B6C;
        if ((int)t16 < (int)0x17) {
            t17 = *(int *)0xC2A1B6C;
            *(unsigned int *)0xC2A1B6C = (t17 + 0x1);
        }
    }
    t19 = *(int *)0xC2A1B30;
    t20 = *(int *)((0x58 + t19));
    if (t20 == 1) {
        t21 = *(int *)0xC2A4498;
        *(unsigned int *)0xC2A4498 = (t21 + 0x1);
        t22 = *(int *)0xC2A4490;
        t23 = *(int *)0xC2A4498;
        t28 = t23;
        if ((int)t23 > (int)t22) {
            t24 = *(int *)0xC2A1B70;
            *(unsigned int *)0xC2A1B70 = (t24 + 0x1);
            *(unsigned int *)0xC2A4498 = 0x0;
            t25 = *(int *)0xC2A1B6C;
            t27 = t23;
            if ((int)t25 < (int)0x17) {
                t26 = *(int *)0xC2A1B6C;
                *(unsigned int *)0xC2A1B6C = (t26 + 0x1);
                t27 = (t26 + 0x1);
            }
            t28 = t27;
        }
        return t28;
    }
    t31 = *(int *)0xC2A1B6C;
    t32 = *(int *)0xC2A1B70;
    *(unsigned int *)0xC2A1B6C = (t31 - t32);
    t33 = *(int *)0xC2A4488;
    if ((int)(t31 - t32) < (int)t33) {
        t34 = *(int *)0xC2A4488;
        *(unsigned int *)0xC2A1B6C = t34;
    }
    *(unsigned int *)0xC2A1B70 = 0x0;
    *(unsigned int *)0xC2A4498 = 0x0;
    return setTechnicalBonus(0xFFFFFFFF, 0x0, 0xC2A4498, 0xC2A1B70);
}

void FUN_0c043b68(void)
{
    int t0;
    int t1;
    int t2;
    float u3;
    int t4;
    float u5;
    float u6;
    int t7;
    int t8;
    int t9;
    float u10;
    int t11;
    int t12;
    int t13;
    int t14;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    float u20;
    int t21;
    int t22;
    int t23;
    int t24;
    int stk[12];

    t0 = 0x0;
    do {
        t1 = ((short)(((((t0 << 1) + t0) << 2) << 2) << 1) + 0xC2A465C);
        t2 = 0x0;
        do {
            u3 = *(float *)((((((t0 << 2) << 2) + 0xC0ED68C) + 0x4) + 0x0));
            t4 = t1;
            t1 = (t1 + 0xC);
            *(float *)((((int)stk + 4) + 0x4)) = (u3 * (float)t2);
            u5 = *(float *)(((((t0 << 2) << 2) + 0xC0ED68C) + 0x0));
            *(float *)((((int)stk + 4) + 0x0)) = (-u5);
            u6 = *(float *)((((((t0 << 2) << 2) + 0xC0ED68C) + 0xC) + 0x0));
            *(float *)((((int)stk + 4) + 0x8)) = u6;
            t7 = *(int *)((((int)stk + 4) + 0x8));
            *(unsigned int *)((t4 + 0x8)) = t7;
            t8 = *(int *)((((int)stk + 4) + 0x4));
            *(unsigned int *)((t4 + 0x4)) = t8;
            t9 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((t4 + 0x0)) = t9;
            u10 = *(float *)(((((t0 << 2) << 2) + 0xC0ED68C) + 0x0));
            *(float *)((((int)stk + 4) + 0x0)) = u10;
            t11 = t1;
            t1 = (t1 + 0xC);
            t12 = *(int *)((((int)stk + 4) + 0x8));
            *(unsigned int *)((t11 + 0x8)) = t12;
            t13 = *(int *)((((int)stk + 4) + 0x4));
            *(unsigned int *)((t11 + 0x4)) = t13;
            t14 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((t11 + 0x0)) = t14;
            u15 = *(float *)((((((t0 << 2) << 2) + 0xC0ED68C) + 0x8) + 0x0));
            *(float *)((((int)stk + 4) + 0x8)) = u15;
            t16 = t1;
            t1 = (t1 + 0xC);
            t17 = *(int *)((((int)stk + 4) + 0x8));
            *(unsigned int *)((t16 + 0x8)) = t17;
            t18 = *(int *)((((int)stk + 4) + 0x4));
            *(unsigned int *)((t16 + 0x4)) = t18;
            t19 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((t16 + 0x0)) = t19;
            u20 = *(float *)(((((t0 << 2) << 2) + 0xC0ED68C) + 0x0));
            t21 = t1;
            t1 = (t1 + 0xC);
            *(float *)((((int)stk + 4) + 0x0)) = (-u20);
            t22 = *(int *)((((int)stk + 4) + 0x8));
            *(unsigned int *)((t21 + 0x8)) = t22;
            t23 = *(int *)((((int)stk + 4) + 0x4));
            *(unsigned int *)((t21 + 0x4)) = t23;
            t24 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((t21 + 0x0)) = t24;
            t2 = (t2 + 0x1);
        } while ((int)t2 < (int)0x2);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xF);
}

void FUN_0c04a4d6(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if ((int)a4 < 0) {
        *(unsigned int *)0xC2A5AEC = 0x0;
    } else {
        t0 = *(int *)0xC2A5AEC;
        if ((int)t0 < (int)0xC8) {
            *(unsigned int *)((((t0 << 2) << 2) + 0xC2A4E6C)) = a4;
            t1 = *(int *)0xC2A5AEC;
            t2 = *(int *)((a5 + 0x8));
            *(unsigned int *)((((((t1 << 2) << 2) + 0xC2A4E6C) + 0x4) + 0x8)) = t2;
            t3 = *(int *)((a5 + 0x4));
            *(unsigned int *)((((((t1 << 2) << 2) + 0xC2A4E6C) + 0x4) + 0x4)) = t3;
            t4 = *(int *)((a5 + 0x0));
            *(unsigned int *)((((((t1 << 2) << 2) + 0xC2A4E6C) + 0x4) + 0x0)) = t4;
            t5 = *(int *)0xC2A5AEC;
            *(unsigned int *)0xC2A5AEC = (t5 + 0x1);
        }
    }
}

int getPieceWindow(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t12;
    int t22;

    t0 = *(int *)((a4 + 0x0));
    if ((int)t0 < (int)0x2) {
        t1 = *(int *)((a6 + 0x0));
        t2 = *(int *)((a4 + 0x0));
        t3 = *(int *)((a7 + 0x0));
        t4 = (int)((int)((t1 + t2) - 2) % (int)t3);
        t5 = *(int *)((a5 + (t4 << 2)));
        t6 = (int)((int)(t5 + 0x1) % (int)a8);
        t12 = t6;
    } else {
        t7 = *(int *)((a4 + 0x0));
        t8 = *(int *)((a7 + 0x0));
        t9 = (int)((int)(t7 - 2) % (int)t8);
        t10 = *(int *)((a5 + (t9 << 2)));
        t11 = (int)((int)(t10 + 0x1) % (int)a8);
        t12 = t11;
    }
    *(unsigned int *)((a9 + 0x0)) = t12;
    t13 = *(int *)((a4 + 0x0));
    t14 = *(int *)((a7 + 0x0));
    t15 = (int)((int)(t13 + 0x1) % (int)t14);
    t16 = *(int *)((a5 + (t15 << 2)));
    *(unsigned int *)((a10 + 0x0)) = t16;
    t17 = *(int *)((a9 + 0x0));
    if ((int)t16 >= (int)t17) {
        t18 = *(int *)((a10 + 0x0));
        t19 = *(int *)((a9 + 0x0));
        *(unsigned int *)((a11 + 0x0)) = ((t18 - t19) + 0x1);
        t22 = a11;
    } else {
        t20 = *(int *)((a10 + 0x0));
        t21 = *(int *)((a9 + 0x0));
        *(unsigned int *)((a11 + 0x0)) = (((t20 - t21) + a8) + 0x1);
        t22 = (t15 << 2);
    }
    return t22;
}

int pedStand(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)((a4 + 0x50)) = 0x1;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((a4 + 0xC) + 0x8)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((a4 + 0xC) + 0x4)) = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a4 + 0xC) + 0x0)) = t2;
    t3 = *(short *)((a4 + 0x18));
    *(unsigned short *)((a4 + 0x1A)) = t3;
    return t3;
}

void FUN_0c051aa8(void)
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
    int stk[14];

    t0 = *(int *)0xC0D0814;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x8)) = t0;
    t1 = *(int *)0xC0D0810;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x4)) = t1;
    t2 = *(int *)0xC0D080C;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = t2;
    t3 = *(int *)0xC0D0820;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = t3;
    t4 = *(int *)0xC0D081C;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = t4;
    t5 = *(int *)0xC0D0818;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t5;
    t6 = *(int *)0xC0D082C;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t6;
    t7 = *(int *)0xC0D0828;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t7;
    t8 = *(int *)0xC0D0824;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t8;
    t9 = *(int *)0xC0D0838;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t9;
    t10 = *(int *)0xC0D0834;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t10;
    t11 = *(int *)0xC0D0830;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t11;
}

int FUN_0c0527ec(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(float *)0xC2A80C0 = 0.0f;
    *(float *)0xC2A80C4 = 0.0f;
    *(float *)0xC2A80C8 = 0.199999988f;
    *(float *)0xC2A80CC = 1.0f;
    *(float *)0xC2A80D0 = (1.0f + 1.0f);
    *(float *)0xC2A80D4 = 0.0f;
    *(float *)0xC2A80D8 = 0.0f;
    *(float *)0xC2A80DC = 1.0f;
    *(float *)0xC2A80E0 = 1.0f;
    *(unsigned int *)0xC2A80E4 = 0x0;
    *(unsigned int *)0xC2A80F0 = 0xA;
    *(float *)0xC2A80E8 = 1.0f;
    *(unsigned int *)0xC2A80EC = 0x2;
    *(unsigned int *)0xC2A8F74 = 0x0;
    *(unsigned int *)0xC2A8F84 = 0x1;
    *(unsigned int *)0xC2A8F78 = 0x0;
    *(unsigned int *)0xC2A8F88 = 0x1;
    *(unsigned int *)0xC2A8F8C = 0x2;
    *(unsigned int *)0xC2A8F90 = 0x0;
    *(unsigned int *)0xC2A9170 = 0x0;
    *(float *)0xC2A9174 = 0.0f;
    t0 = *(int *)0xC2A9168;
    if (t0 == 100) {
        *(unsigned int *)0xC2A8F80 = 0x0;
        *(unsigned int *)0xC2A8F7C = 0x0;
        t3 = t0;
    } else {
        t1 = (int)((int)t0 / (int)0xA);
        t2 = (int)((int)t0 % (int)0xA);
        *(unsigned int *)0xC2A8F80 = (0x9 - t1);
        *(unsigned int *)0xC2A8F7C = (0x9 - t2);
        t3 = t2;
    }
    return t3;
}

int FUN_0c053100(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;

    *(unsigned int *)0xC2A8C54 = a4;
    *(unsigned int *)0xC2A8C58 = a5;
    *(unsigned int *)0xC2A7600 = a6;
    *(unsigned int *)0xC2A8C5C = a7;
    *(unsigned int *)0xC2A8C60 = a8;
    t0 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t0 | 0x20);
    FUN_0c0525fc(0xC2A75E0, a5, a6, a7);
    t2 = *(int *)0xC1EE20C;
    if (t2 != 2) {
        FUN_0c0526a0();
    }
    return FUN_0c052c9e();
}

int rankingInsert(void)
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
    int t23;
    int t20;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t35;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t34;
    int t38;
    int stk[16];

    t0 = *(int *)0xC2A9168;
    t1 = t0;
    if (t0 == 100) {
        t1 = 0x63;
    }
    t2 = (int)((int)t1 / (int)0xA);
    *(unsigned int *)(((int)stk + 4)) = t2;
    t3 = (int)((int)t1 % (int)0xA);
    *(unsigned int *)(((int)stk + 8)) = t3;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x10);
    t4 = 0x1;
    t5 = 0x1;
    t6 = 0x0;
    t7 = 0xC2A8FD8;
    for (;;) {
        if ((int)t6 >= (int)t0) {
            return 0x0;
        }
        t8 = *(int *)((t7 + 0x0));
        t9 = *(int *)0xC2A7600;
        t10 = *(int *)((t9 + 0x0));
        if ((int)t10 > (int)t8) break;
        t4 = (t4 + 0x1);
        t7 = (t7 + 0x4);
        t6 = (t6 + 0x1);
        t5 = (t5 + 0x1);
    }
    if (t4 == t1) {
        t23 = 0x0;
        if (t0 == 100) {
            t20 = 0x0;
            if (t4 != 100) {
                *(unsigned int *)0xC2A9168 = t5;
                t11 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t11;
                t12 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t12;
                t13 = *(int *)0xC2A9168;
                t14 = *(int *)(((int)stk + 12));
                t15 = (int)((int)t13 / (int)0xA);
                *(unsigned int *)((t14 + 0x0)) = t15;
                t16 = *(int *)0xC2A9168;
                t17 = (int)((int)t16 % (int)0xA);
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t17;
                FUN_0c0534ec((((int)stk + 4) + 0x14), (((int)stk + 4) + 0xC), t1, t5);
                t19 = *(int *)0xC2A9168;
                *(unsigned int *)0xC1EE340 = t19;
                t20 = 0x1;
            }
            t23 = t20;
        }
        t38 = t23;
    } else {
        t35 = 0x0;
        if (t4 != 100) {
            *(unsigned int *)0xC2A9168 = t5;
            t26 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t26;
            t27 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t27;
            t28 = *(int *)0xC2A9168;
            t29 = *(int *)(((int)stk + 12));
            t30 = (int)((int)t28 / (int)0xA);
            *(unsigned int *)((t29 + 0x0)) = t30;
            t31 = *(int *)0xC2A9168;
            t32 = (int)((int)t31 % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t32;
            FUN_0c0534ec((((int)stk + 4) + 0x14), (((int)stk + 4) + 0xC), t1, t5);
            t34 = *(int *)0xC2A9168;
            *(unsigned int *)0xC1EE340 = t34;
            t35 = 0x1;
        }
        t38 = t35;
    }
    return t38;
}

int FUN_0c0544a8(void)
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
    int t26;
    int t27;
    int t30;
    int t32;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t57;
    int t59;
    int t60;
    int t68;
    int stk[22];

    t0 = *(int *)0xC0D08D0;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x1C)) = t0;
    t1 = *(int *)0xC0D08CC;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x18)) = t1;
    t2 = *(int *)0xC0D08C8;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x14)) = t2;
    t3 = *(int *)0xC0D08C4;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x10)) = t3;
    t4 = *(int *)0xC0D08C0;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = t4;
    t5 = *(int *)0xC0D08BC;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x8)) = t5;
    t6 = *(int *)0xC0D08B8;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t6;
    t7 = *(int *)0xC0D08B4;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t7;
    t8 = *(int *)0xC0D08F0;
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = t8;
    t9 = *(int *)0xC0D08EC;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t9;
    t10 = *(int *)0xC0D08E8;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t10;
    t11 = *(int *)0xC0D08E4;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t11;
    t12 = *(int *)0xC0D08E0;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t12;
    t13 = *(int *)0xC0D08DC;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t13;
    t14 = *(int *)0xC0D08D8;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t14;
    t15 = *(int *)0xC0D08D4;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t15;
    t16 = *(int *)0xC2A8EB0;
    if (t16 == 9) {
        t17 = *(int *)0xC2A8C5C;
        t18 = *(int *)((t17 + 0x0));
        if (t18 != 0) {
            t19 = *(int *)((t17 + 0x0));
            t20 = *(int *)0xC2A7600;
            t21 = *(int *)((t20 + 0x0));
            *(unsigned int *)((t20 + 0x0)) = (t21 + t19);
            t22 = *(int *)0xC2A7600;
            t23 = *(int *)((t22 + 0x0));
            if ((int)t23 > (int)0x5F5E0FF) {
                t24 = *(int *)0xC2A7600;
                *(unsigned int *)((t24 + 0x0)) = 0x5F5E0FF;
            }
            t26 = *(int *)0xC2A7600;
            t27 = *(int *)((t26 + 0x0));
            FUN_0c057728(((int)stk + 4), t27, 0x8);
            FUN_0c0545ac((((int)stk + 4) + 0x20), ((int)stk + 4));
            t30 = *(int *)0xC2A8C5C;
            *(unsigned int *)((t30 + 0x0)) = 0x0;
            Sound_Request(0x604A9, 0x0);
            *(unsigned int *)0xC2A9180 = 0x0;
            t32 = *(int *)0xC2A7618;
            if (t32 != 0) {
                FUN_0c0533ba();
            }
        }
    }
    t37 = *(int *)0xC2A8DD8;
    if (t37 == 1) {
        t38 = *(int *)0xC2A8DD4;
        if (t38 == 1) {
            t39 = *(int *)0xC2A8DD0;
            if (t39 == 1) {
                t40 = *(int *)0xC2A8DCC;
                if (t40 == 1) {
                    t41 = *(int *)0xC2A8DC8;
                    if (t41 == 1) {
                        t42 = *(int *)0xC2A8DC4;
                        if (t42 == 1) {
                            t43 = *(int *)0xC2A8DC0;
                            if (t43 == 1) {
                                t44 = *(int *)0xC2A8DBC;
                                if (t44 == 1) {
                                    t45 = *(int *)0xC2A9180;
                                    if (t45 == 0) {
                                        Sound_Request(0x704A9, 0x0);
                                        *(unsigned int *)0xC2A9180 = 0x1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t57 = *(int *)0xC2A11B0;
    if (t57 == 0) {
        *(unsigned int *)0xC2A91BC = 0x0;
    }
    t59 = *(int *)0xC2A11B0;
    if (t59 != 0) {
        t60 = *(int *)0xC2A91BC;
        if (t60 == 0) {
            Sound_Request(0x704A9, 0x0);
            *(unsigned int *)0xC2A91BC = 0x1;
        }
    }
    t68 = FUN_0c054698();
    return t68;
}

void FUN_0c05473e(void)
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
    int t12;
    int t13;
    int t16;
    int t17;
    int t20;
    int t21;
    int t24;
    int t25;
    int t28;
    int t29;
    int t32;
    int t33;
    int t36;
    int t37;

    t0 = *(int *)0xC2A8DD8;
    if (t0 != 0) {
        t1 = *(int *)0xC2A8DD4;
        if (t1 != 0) {
            t2 = *(int *)0xC2A8DD0;
            if (t2 != 0) {
                t3 = *(int *)0xC2A8DCC;
                if (t3 != 0) {
                    t4 = *(int *)0xC2A8DC8;
                    if (t4 != 0) {
                        t5 = *(int *)0xC2A8DC4;
                        if (t5 != 0) {
                            t6 = *(int *)0xC2A8DC0;
                            if (t6 != 0) {
                                t7 = *(int *)0xC2A8DBC;
                                if (t7 == 0) {
                                    t8 = *(int *)0xC2A8DE0;
                                    t9 = (int)((int)(t8 + 0x1) % (int)0x4);
                                    *(unsigned int *)0xC2A8DE0 = t9;
                                }
                            } else {
                                t12 = *(int *)0xC2A8DE0;
                                t13 = (int)((int)(t12 + 0x1) % (int)0x4);
                                *(unsigned int *)0xC2A8DE0 = t13;
                            }
                        } else {
                            t16 = *(int *)0xC2A8DE0;
                            t17 = (int)((int)(t16 + 0x1) % (int)0x4);
                            *(unsigned int *)0xC2A8DE0 = t17;
                        }
                    } else {
                        t20 = *(int *)0xC2A8DE0;
                        t21 = (int)((int)(t20 + 0x1) % (int)0x4);
                        *(unsigned int *)0xC2A8DE0 = t21;
                    }
                } else {
                    t24 = *(int *)0xC2A8DE0;
                    t25 = (int)((int)(t24 + 0x1) % (int)0x4);
                    *(unsigned int *)0xC2A8DE0 = t25;
                }
            } else {
                t28 = *(int *)0xC2A8DE0;
                t29 = (int)((int)(t28 + 0x1) % (int)0x4);
                *(unsigned int *)0xC2A8DE0 = t29;
            }
        } else {
            t32 = *(int *)0xC2A8DE0;
            t33 = (int)((int)(t32 + 0x1) % (int)0x4);
            *(unsigned int *)0xC2A8DE0 = t33;
        }
    } else {
        t36 = *(int *)0xC2A8DE0;
        t37 = (int)((int)(t36 + 0x1) % (int)0x4);
        *(unsigned int *)0xC2A8DE0 = t37;
    }
}

int hudDrawTime(void)
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
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t43;
    int t44;
    int t45;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
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
    int t82;
    int t83;
    int t84;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t121;
    int t122;
    int t123;
    int t144;
    int t161;
    int t145;
    int t160;
    int t146;
    int t159;
    int t147;
    int t158;
    int t148;
    int t157;
    int t149;
    int t156;
    int t150;
    int t155;
    int t151;
    int t153;
    int t152;
    int t162;
    int t163;
    int t168;
    int t164;
    int t166;
    int t165;
    int t170;
    int stk[21];

    t0 = *(int *)0xC0D0910;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x18)) = t0;
    t1 = *(int *)0xC0D090C;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x14)) = t1;
    t2 = *(int *)0xC0D0908;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x10)) = t2;
    t3 = *(int *)0xC0D0904;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0xC)) = t3;
    t4 = *(int *)0xC0D0900;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x8)) = t4;
    t5 = *(int *)0xC0D08FC;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x4)) = t5;
    t6 = *(int *)0xC0D08F8;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = t6;
    t7 = *(int *)0xC0D092C;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t7;
    t8 = *(int *)0xC0D0928;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t8;
    t9 = *(int *)0xC0D0924;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t9;
    t10 = *(int *)0xC0D0920;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t10;
    t11 = *(int *)0xC0D091C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t11;
    t12 = *(int *)0xC0D0918;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t12;
    t13 = *(int *)0xC0D0914;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t13;
    t14 = *(int *)0xC2A8EB0;
    if (t14 == 9) {
        t15 = FUN_0c05317e();
        *(unsigned int *)0xC2A8E98 = 0x0;
        t170 = t15;
    } else {
        FUN_0c054ffe();
        t17 = *(int *)0xC2A8EB0;
        if ((int)t17 >= (int)0x2) {
            t18 = *(int *)0xC2A8C7C;
            t19 = *(int *)((t18 + 0x0));
            if (t19 == 0) {
                t20 = *(int *)0xC2A8C80;
                t21 = *(int *)((t20 + 0x0));
                if (t21 == 0) {
                    t22 = *(int *)0xC2A8C84;
                    t23 = *(int *)((t22 + 0x0));
                    if (t23 != 0) {
                        t24 = *(int *)0xC2A8E4C;
                        if (t24 == 0) {
                            t25 = *(int *)0xC2A8E48;
                            if (t25 == 0) {
                                t26 = *(int *)0xC2A8E44;
                                if (t26 == 0) {
                                    t27 = *(int *)0xC2A8E40;
                                    if (t27 == 0) {
                                        t28 = *(int *)0xC2A8E3C;
                                        if (t28 == 0) {
                                            t29 = *(int *)0xC2A8E38;
                                            if (t29 == 0) {
                                                t30 = *(int *)0xC2A8E34;
                                                if (t30 == 0) {
                                                    t31 = *(int *)0xC2A8E94;
                                                    FUN_0c057728((((int)stk + 4) + 0x1C), t31, 0x7);
                                                    t33 = *(int *)0xC2A8C80;
                                                    t34 = *(int *)0xC2A8C7C;
                                                    t35 = *(int *)((t33 + 0x0));
                                                    t36 = *(int *)((t34 + 0x0));
                                                    t37 = *(int *)0xC2A8C84;
                                                    t38 = *(int *)((t37 + 0x0));
                                                    t39 = *(int *)0xC2A8E94;
                                                    *(unsigned int *)0xC2A8E94 = (t39 + ((t36 + t35) + t38));
                                                    if ((int)(t39 + ((t36 + t35) + t38)) > (int)0x98967F) {
                                                        *(unsigned int *)0xC2A8E94 = 0x98967F;
                                                    }
                                                    t40 = *(int *)0xC2A8E94;
                                                    FUN_0c057728(((int)stk + 4), t40, 0x7);
                                                    FUN_0c0551c6((((int)stk + 4) + 0x1C), ((int)stk + 4));
                                                    t43 = *(int *)0xC2A8C7C;
                                                    *(unsigned int *)((t43 + 0x0)) = 0x0;
                                                    t44 = *(int *)0xC2A8C80;
                                                    *(unsigned int *)((t44 + 0x0)) = 0x0;
                                                    t45 = *(int *)0xC2A8C84;
                                                    *(unsigned int *)((t45 + 0x0)) = 0x0;
                                                    Sound_Request(0x604A9, 0x0);
                                                    *(unsigned int *)0xC2A9184 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t63 = *(int *)0xC2A8E4C;
                    if (t63 == 0) {
                        t64 = *(int *)0xC2A8E48;
                        if (t64 == 0) {
                            t65 = *(int *)0xC2A8E44;
                            if (t65 == 0) {
                                t66 = *(int *)0xC2A8E40;
                                if (t66 == 0) {
                                    t67 = *(int *)0xC2A8E3C;
                                    if (t67 == 0) {
                                        t68 = *(int *)0xC2A8E38;
                                        if (t68 == 0) {
                                            t69 = *(int *)0xC2A8E34;
                                            if (t69 == 0) {
                                                t70 = *(int *)0xC2A8E94;
                                                FUN_0c057728((((int)stk + 4) + 0x1C), t70, 0x7);
                                                t72 = *(int *)0xC2A8C80;
                                                t73 = *(int *)0xC2A8C7C;
                                                t74 = *(int *)((t72 + 0x0));
                                                t75 = *(int *)((t73 + 0x0));
                                                t76 = *(int *)0xC2A8C84;
                                                t77 = *(int *)((t76 + 0x0));
                                                t78 = *(int *)0xC2A8E94;
                                                *(unsigned int *)0xC2A8E94 = (t78 + ((t75 + t74) + t77));
                                                if ((int)(t78 + ((t75 + t74) + t77)) > (int)0x98967F) {
                                                    *(unsigned int *)0xC2A8E94 = 0x98967F;
                                                }
                                                t79 = *(int *)0xC2A8E94;
                                                FUN_0c057728(((int)stk + 4), t79, 0x7);
                                                FUN_0c0551c6((((int)stk + 4) + 0x1C), ((int)stk + 4));
                                                t82 = *(int *)0xC2A8C7C;
                                                *(unsigned int *)((t82 + 0x0)) = 0x0;
                                                t83 = *(int *)0xC2A8C80;
                                                *(unsigned int *)((t83 + 0x0)) = 0x0;
                                                t84 = *(int *)0xC2A8C84;
                                                *(unsigned int *)((t84 + 0x0)) = 0x0;
                                                Sound_Request(0x604A9, 0x0);
                                                *(unsigned int *)0xC2A9184 = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                t102 = *(int *)0xC2A8E4C;
                if (t102 == 0) {
                    t103 = *(int *)0xC2A8E48;
                    if (t103 == 0) {
                        t104 = *(int *)0xC2A8E44;
                        if (t104 == 0) {
                            t105 = *(int *)0xC2A8E40;
                            if (t105 == 0) {
                                t106 = *(int *)0xC2A8E3C;
                                if (t106 == 0) {
                                    t107 = *(int *)0xC2A8E38;
                                    if (t107 == 0) {
                                        t108 = *(int *)0xC2A8E34;
                                        if (t108 == 0) {
                                            t109 = *(int *)0xC2A8E94;
                                            FUN_0c057728((((int)stk + 4) + 0x1C), t109, 0x7);
                                            t111 = *(int *)0xC2A8C80;
                                            t112 = *(int *)0xC2A8C7C;
                                            t113 = *(int *)((t111 + 0x0));
                                            t114 = *(int *)((t112 + 0x0));
                                            t115 = *(int *)0xC2A8C84;
                                            t116 = *(int *)((t115 + 0x0));
                                            t117 = *(int *)0xC2A8E94;
                                            *(unsigned int *)0xC2A8E94 = (t117 + ((t114 + t113) + t116));
                                            if ((int)(t117 + ((t114 + t113) + t116)) > (int)0x98967F) {
                                                *(unsigned int *)0xC2A8E94 = 0x98967F;
                                            }
                                            t118 = *(int *)0xC2A8E94;
                                            FUN_0c057728(((int)stk + 4), t118, 0x7);
                                            FUN_0c0551c6((((int)stk + 4) + 0x1C), ((int)stk + 4));
                                            t121 = *(int *)0xC2A8C7C;
                                            *(unsigned int *)((t121 + 0x0)) = 0x0;
                                            t122 = *(int *)0xC2A8C80;
                                            *(unsigned int *)((t122 + 0x0)) = 0x0;
                                            t123 = *(int *)0xC2A8C84;
                                            *(unsigned int *)((t123 + 0x0)) = 0x0;
                                            Sound_Request(0x604A9, 0x0);
                                            *(unsigned int *)0xC2A9184 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        FUN_0c0552b0();
        t144 = *(int *)0xC2A8E84;
        t161 = t144;
        if (t144 == 1) {
            t145 = *(int *)0xC2A8E80;
            t160 = t145;
            if (t145 == 1) {
                t146 = *(int *)0xC2A8E7C;
                t159 = t146;
                if (t146 == 1) {
                    t147 = *(int *)0xC2A8E78;
                    t158 = t147;
                    if (t147 == 1) {
                        t148 = *(int *)0xC2A8E74;
                        t157 = t148;
                        if (t148 == 1) {
                            t149 = *(int *)0xC2A8E70;
                            t156 = t149;
                            if (t149 == 1) {
                                t150 = *(int *)0xC2A8E6C;
                                t155 = t150;
                                if (t150 == 1) {
                                    t151 = *(int *)0xC2A9184;
                                    t153 = t150;
                                    if (t151 == 0) {
                                        t152 = Sound_Request(0x704A9, 0x0);
                                        *(unsigned int *)0xC2A9184 = 0x1;
                                        t153 = t152;
                                    }
                                    t155 = t153;
                                }
                                t156 = t155;
                            }
                            t157 = t156;
                        }
                        t158 = t157;
                    }
                    t159 = t158;
                }
                t160 = t159;
            }
            t161 = t160;
        }
        t162 = *(int *)0xC2A11B0;
        if (t162 == 0) {
            *(unsigned int *)0xC2A91C0 = 0x0;
        }
        t163 = *(int *)0xC2A11B0;
        t168 = t161;
        if (t163 != 0) {
            t164 = *(int *)0xC2A91C0;
            t166 = t161;
            if (t164 == 0) {
                t165 = Sound_Request(0x704A9, 0x0);
                *(unsigned int *)0xC2A91C0 = 0x1;
                t166 = t165;
            }
            t168 = t166;
        }
        t170 = t168;
    }
    return t170;
}

void FUN_0c058f08(void)
{
    int stk[45];

    *(float *)((((int)stk + 4) + 0x4)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x8)) = 1.0f;
    *(float *)((((int)stk + 4) + 0xC)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x10)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x14)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x18)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x1C)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x20)) = 1.0f;
}

int FUN_0c058ff0(int a4)
{
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t15;
    int t22;
    int t16;
    int t21;
    int t17;
    int t20;
    int t19;

    FUN_0c077df0(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    FUN_0c077df0(0x1);
    t4 = *(int *)0xC1EE210;
    if (t4 != 2) {
        t5 = GetMenuMode(0x1);
        if (t5 == 0) {
            *(unsigned int *)0xC2A7618 = 0x1;
        } else {
            *(unsigned int *)0xC2A7618 = 0x0;
        }
    } else {
        *(unsigned int *)0xC2A7618 = 0x1;
    }
    t8 = 0xC2A986C;
    t9 = 0x0;
    do {
        t9 = (t9 + 0x1);
        *(unsigned int *)((t8 + 0x0)) = 0x0;
        t8 = (t8 + 0x4);
    } while ((int)t9 < (int)0xA);
    t10 = (int)((int)a4 % (int)0x4);
    *(unsigned int *)0xC2A96F0 = t10;
    FUN_0c0591ea(t8, t9, 0xA);
    FUN_0c059254();
    t13 = *(int *)0xC1EE340;
    *(unsigned int *)0xC2A97DC = t13;
    t14 = FUN_0c057728(0xC2A97CC, t13, 0x3);
    t15 = *(int *)0xC2A97DC;
    t22 = t14;
    if ((int)t15 < (int)0x64) {
        t16 = *(int *)0xC17948C;
        t21 = t16;
        if (t16 == 0) {
            t17 = *(int *)0xC2A7618;
            t20 = t17;
            if (t17 != 0) {
                FUN_0c059110();
                t19 = FUN_0c05b11c();
                t20 = t19;
            }
            t21 = t20;
        }
        t22 = t21;
    }
    *(unsigned int *)0xC2A9858 = 0x0;
    *(unsigned int *)0xC2A985C = 0x0;
    *(unsigned int *)0xC2A9860 = 0x0;
    *(unsigned int *)0xC2A9864 = 0x0;
    *(unsigned int *)0xC2A9868 = 0x0;
    return t22;
}

int FUN_0c05cb80(void)
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
    int t21;
    int t22;
    int t24;
    int t25;
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
    int t50;
    int t51;
    int t52;
    int t53;
    int t55;
    int t56;
    int t61;
    int t62;
    int t64;
    int t65;
    int t70;
    int t71;
    int t73;
    int t74;
    int t79;
    int t80;
    int t82;
    int t83;
    int t88;
    int t89;
    int t91;
    int t92;
    int t97;
    int t98;
    int t100;
    int t101;
    int t106;
    int t107;
    int t109;
    int t110;
    int t115;
    int t116;
    int t118;
    int t119;
    int t124;
    int t125;
    int t127;
    int t128;
    int t133;
    int t134;
    int t136;
    int t137;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t167;
    int t168;
    int t169;
    int t170;
    int t172;
    int t173;
    int t178;
    int t179;
    int t181;
    int t182;
    int t187;
    int t188;
    int t190;
    int t191;
    int t196;
    int t197;
    int t199;
    int t200;
    int t205;
    int t206;
    int t208;
    int t209;
    int t214;
    int t215;
    int t217;
    int t218;
    int t223;
    int t224;
    int t226;
    int t227;
    int t232;
    int t233;
    int t235;
    int t236;
    int t241;
    int t242;
    int t244;
    int t245;
    int t250;
    int t251;
    int t253;
    int t254;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t281;
    int t282;
    int t284;
    int t285;
    int t286;
    int t287;
    int t289;
    int t290;
    int t295;
    int t296;
    int t298;
    int t299;
    int t304;
    int t305;
    int t307;
    int t308;
    int t313;
    int t314;
    int t316;
    int t317;
    int t322;
    int t323;
    int t325;
    int t326;
    int t331;
    int t332;
    int t334;
    int t335;
    int t340;
    int t341;
    int t343;
    int t344;
    int t349;
    int t350;
    int t352;
    int t353;
    int t358;
    int t359;
    int t361;
    int t362;
    int t367;
    int t368;
    int t370;
    int t371;
    int t379;
    int t380;
    int t381;
    int t382;
    int t383;
    int t384;
    int t385;
    int t386;
    int t387;
    int t388;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    int t395;
    int t396;
    int t397;
    int t398;
    int t399;
    int t401;
    int t402;
    int t403;
    int t404;
    int t406;
    int t407;
    int t412;
    int t413;
    int t415;
    int t416;
    int t421;
    int t422;
    int t424;
    int t425;
    int t430;
    int t431;
    int t433;
    int t434;
    int t439;
    int t440;
    int t442;
    int t443;
    int t448;
    int t449;
    int t451;
    int t452;
    int t457;
    int t458;
    int t460;
    int t461;
    int t466;
    int t467;
    int t469;
    int t470;
    int t475;
    int t476;
    int t478;
    int t479;
    int t484;
    int t485;
    int t487;
    int t488;
    int t496;
    int t497;
    int t498;
    int t499;
    int t500;
    int t501;
    int t502;
    int t503;
    int t504;
    int t505;
    int t506;
    int t507;
    int t508;
    int t509;
    int t510;
    int t511;
    int t512;
    int t513;
    int t514;
    int t515;
    int t516;
    int t518;
    int t519;
    int t520;
    int t521;
    int t523;
    int t524;
    int t529;
    int t530;
    int t532;
    int t533;
    int t538;
    int t539;
    int t541;
    int t542;
    int t547;
    int t548;
    int t550;
    int t551;
    int t556;
    int t557;
    int t559;
    int t560;
    int t565;
    int t566;
    int t568;
    int t569;
    int t574;
    int t575;
    int t577;
    int t578;
    int t583;
    int t584;
    int t586;
    int t587;
    int t592;
    int t593;
    int t595;
    int t596;
    int t601;
    int t602;
    int t604;
    int t605;
    int t613;
    int t614;
    int t615;
    int t616;
    int t617;
    int t618;
    int t619;
    int t620;
    int t621;
    int t622;
    int t623;
    int t624;
    int t625;
    int t626;
    int t627;
    int t628;
    int t629;
    int t630;
    int t631;
    int t632;
    int t633;
    int t635;
    int t636;
    int t637;
    int t638;
    int t640;
    int t641;
    int t646;
    int t647;
    int t649;
    int t650;
    int t655;
    int t656;
    int t658;
    int t659;
    int t664;
    int t665;
    int t667;
    int t668;
    int t673;
    int t674;
    int t676;
    int t677;
    int t682;
    int t683;
    int t685;
    int t686;
    int t691;
    int t692;
    int t694;
    int t695;
    int t700;
    int t701;
    int t703;
    int t704;
    int t709;
    int t710;
    int t712;
    int t713;
    int t718;
    int t719;
    int t721;
    int t722;
    int t730;
    int t731;
    int t732;
    int t733;
    int t734;
    int t735;
    int t736;
    int t737;
    int t738;
    int t739;
    int t740;
    int t741;
    int t742;
    int t743;
    int t744;
    int t745;
    int t746;
    int t747;
    int t748;
    int t749;
    int t750;
    int t752;
    int t753;
    int t754;
    int t755;
    int t757;
    int t758;
    int t763;
    int t764;
    int t766;
    int t767;
    int t772;
    int t773;
    int t775;
    int t776;
    int t781;
    int t782;
    int t784;
    int t785;
    int t790;
    int t791;
    int t793;
    int t794;
    int t799;
    int t800;
    int t802;
    int t803;
    int t808;
    int t809;
    int t811;
    int t812;
    int t817;
    int t818;
    int t820;
    int t821;
    int t826;
    int t827;
    int t829;
    int t830;
    int t835;
    int t836;
    int t838;
    int t839;
    int t847;
    int t848;
    int t849;
    int t850;
    int t851;
    int t852;
    int t853;
    int t854;
    int t855;
    int t856;
    int t857;
    int t858;
    int t859;
    int t860;
    int t861;
    int t862;
    int t863;
    int t864;
    int t865;
    int t866;
    int t867;
    int t869;
    int t870;
    int t871;
    int t872;
    int t874;
    int t875;
    int t880;
    int t881;
    int t883;
    int t884;
    int t889;
    int t890;
    int t892;
    int t893;
    int t898;
    int t899;
    int t901;
    int t902;
    int t907;
    int t908;
    int t910;
    int t911;
    int t916;
    int t917;
    int t919;
    int t920;
    int t925;
    int t926;
    int t928;
    int t929;
    int t934;
    int t935;
    int t937;
    int t938;
    int t943;
    int t944;
    int t946;
    int t947;
    int t952;
    int t953;
    int t955;
    int t956;
    int t964;
    int t965;
    int t966;
    int t967;
    int t968;
    int t969;
    int t970;
    int t971;
    int t972;
    int t973;
    int t974;
    int t975;
    int t976;
    int t977;
    int t978;
    int t979;
    int t980;
    int t981;
    int t982;
    int t983;
    int t984;
    int t986;
    int t987;
    int t988;
    int t989;
    int t991;
    int t992;
    int t997;
    int t998;
    int t1000;
    int t1001;
    int t1006;
    int t1007;
    int t1009;
    int t1010;
    int t1015;
    int t1016;
    int t1018;
    int t1019;
    int t1024;
    int t1025;
    int t1027;
    int t1028;
    int t1033;
    int t1034;
    int t1036;
    int t1037;
    int t1042;
    int t1043;
    int t1045;
    int t1046;
    int t1051;
    int t1052;
    int t1054;
    int t1055;
    int t1060;
    int t1061;
    int t1063;
    int t1064;
    int t1069;
    int t1070;
    int t1072;
    int t1073;
    int t1081;
    int t1082;
    int t1083;
    int t1084;
    int t1085;
    int t1086;
    int t1087;
    int t1088;
    int t1089;
    int t1090;
    int t1091;
    int t1092;
    int t1093;
    int t1094;
    int t1095;
    int t1096;
    int t1097;
    int t1098;
    int t1099;
    int t1100;
    int t1101;
    int t1103;
    int t1104;
    int t1105;
    int t1106;
    int t1108;
    int t1109;
    int t1114;
    int t1115;
    int t1117;
    int t1118;
    int t1123;
    int t1124;
    int t1126;
    int t1127;
    int t1132;
    int t1133;
    int t1135;
    int t1136;
    int t1141;
    int t1142;
    int t1144;
    int t1145;
    int t1150;
    int t1151;
    int t1153;
    int t1154;
    int t1159;
    int t1160;
    int t1162;
    int t1163;
    int t1168;
    int t1169;
    int t1171;
    int t1172;
    int t1177;
    int t1178;
    int t1180;
    int t1181;
    int t1186;
    int t1187;
    int t1189;
    int t1190;
    int t1198;

    t0 = *(int *)0xC2A995C;
    t1 = FUN_0c038eec((((((t0 - 1) << 2) + (t0 - 1)) << 1) + 0x1));
    if (t1 != 0) {
        t2 = *(int *)0xC2A995C;
        t3 = FUN_0c038eec((((((t2 - 1) << 2) + (t2 - 1)) << 1) + 0x2));
        if (t3 != 0) {
            t4 = *(int *)0xC2A995C;
            t5 = FUN_0c038eec((((((t4 - 1) << 2) + (t4 - 1)) << 1) + 0x3));
            if (t5 != 0) {
                t6 = *(int *)0xC2A995C;
                t7 = FUN_0c038eec((((((t6 - 1) << 2) + (t6 - 1)) << 1) + 0x4));
                if (t7 != 0) {
                    t8 = *(int *)0xC2A995C;
                    t9 = FUN_0c038eec((((((t8 - 1) << 2) + (t8 - 1)) << 1) + 0x5));
                    if (t9 != 0) {
                        t10 = *(int *)0xC2A995C;
                        t11 = FUN_0c038eec((((((t10 - 1) << 2) + (t10 - 1)) << 1) + 0x6));
                        if (t11 != 0) {
                            t12 = *(int *)0xC2A995C;
                            t13 = FUN_0c038eec((((((t12 - 1) << 2) + (t12 - 1)) << 1) + 0x7));
                            if (t13 != 0) {
                                t14 = *(int *)0xC2A995C;
                                t15 = FUN_0c038eec((((((t14 - 1) << 2) + (t14 - 1)) << 1) + 0x8));
                                if (t15 != 0) {
                                    t16 = *(int *)0xC2A995C;
                                    t17 = FUN_0c038eec((((((t16 - 1) << 2) + (t16 - 1)) << 1) + 0x9));
                                    if (t17 != 0) {
                                        t18 = *(int *)0xC2A995C;
                                        t19 = FUN_0c038eec((((((t18 - 1) << 2) + (t18 - 1)) << 1) + 0xA));
                                        if (t19 != 0) {
                                            FUN_0c05cdb4();
                                            t21 = FUN_0c038ee6();
                                            if ((int)t21 > 0) {
                                                t22 = *(int *)0xC131204;
                                                FUN_0c05fd70((t22 + 0x17));
                                                t24 = *(int *)0xC131204;
                                                t25 = (int)((int)(t24 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC131204 = t25;
                                            }
                                        } else {
                                            t28 = *(int *)0xC2A995C;
                                            t29 = FUN_0c038eec((((((t28 - 1) << 2) + (t28 - 1)) << 1) + 0x1));
                                            if (t29 == 0) {
                                                t30 = *(int *)0xC2A995C;
                                                t31 = FUN_0c038eec((((((t30 - 1) << 2) + (t30 - 1)) << 1) + 0x2));
                                                if (t31 == 0) {
                                                    t32 = *(int *)0xC2A995C;
                                                    t33 = FUN_0c038eec((((((t32 - 1) << 2) + (t32 - 1)) << 1) + 0x3));
                                                    if (t33 == 0) {
                                                        t34 = *(int *)0xC2A995C;
                                                        t35 = FUN_0c038eec((((((t34 - 1) << 2) + (t34 - 1)) << 1) + 0x4));
                                                        if (t35 == 0) {
                                                            t36 = *(int *)0xC2A995C;
                                                            t37 = FUN_0c038eec((((((t36 - 1) << 2) + (t36 - 1)) << 1) + 0x5));
                                                            if (t37 == 0) {
                                                                t38 = *(int *)0xC2A995C;
                                                                t39 = FUN_0c038eec((((((t38 - 1) << 2) + (t38 - 1)) << 1) + 0x6));
                                                                if (t39 == 0) {
                                                                    t40 = *(int *)0xC2A995C;
                                                                    t41 = FUN_0c038eec((((((t40 - 1) << 2) + (t40 - 1)) << 1) + 0x7));
                                                                    if (t41 == 0) {
                                                                        t42 = *(int *)0xC2A995C;
                                                                        t43 = FUN_0c038eec((((((t42 - 1) << 2) + (t42 - 1)) << 1) + 0x8));
                                                                        if (t43 == 0) {
                                                                            t44 = *(int *)0xC2A995C;
                                                                            t45 = FUN_0c038eec((((((t44 - 1) << 2) + (t44 - 1)) << 1) + 0x9));
                                                                            if (t45 == 0) {
                                                                                t46 = *(int *)0xC2A995C;
                                                                                t47 = FUN_0c038eec((((((t46 - 1) << 2) + (t46 - 1)) << 1) + 0xA));
                                                                                if (t47 == 0) {
                                                                                    t48 = *(int *)0xC131208;
                                                                                    FUN_0c05fd70((t48 + 0x1D));
                                                                                    t50 = *(int *)0xC131208;
                                                                                    t51 = (int)((int)(t50 + 0x1) % (int)0x2);
                                                                                    *(unsigned int *)0xC131208 = t51;
                                                                                } else {
                                                                                    t52 = FUN_0c038ee6();
                                                                                    if ((int)t52 > 0) {
                                                                                        t53 = *(int *)0xC13120C;
                                                                                        FUN_0c05fd70((t53 + 0x1A));
                                                                                        t55 = *(int *)0xC13120C;
                                                                                        t56 = (int)((int)(t55 + 0x1) % (int)0x3);
                                                                                        *(unsigned int *)0xC13120C = t56;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t61 = FUN_0c038ee6();
                                                                                if ((int)t61 > 0) {
                                                                                    t62 = *(int *)0xC13120C;
                                                                                    FUN_0c05fd70((t62 + 0x1A));
                                                                                    t64 = *(int *)0xC13120C;
                                                                                    t65 = (int)((int)(t64 + 0x1) % (int)0x3);
                                                                                    *(unsigned int *)0xC13120C = t65;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t70 = FUN_0c038ee6();
                                                                            if ((int)t70 > 0) {
                                                                                t71 = *(int *)0xC13120C;
                                                                                FUN_0c05fd70((t71 + 0x1A));
                                                                                t73 = *(int *)0xC13120C;
                                                                                t74 = (int)((int)(t73 + 0x1) % (int)0x3);
                                                                                *(unsigned int *)0xC13120C = t74;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t79 = FUN_0c038ee6();
                                                                        if ((int)t79 > 0) {
                                                                            t80 = *(int *)0xC13120C;
                                                                            FUN_0c05fd70((t80 + 0x1A));
                                                                            t82 = *(int *)0xC13120C;
                                                                            t83 = (int)((int)(t82 + 0x1) % (int)0x3);
                                                                            *(unsigned int *)0xC13120C = t83;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t88 = FUN_0c038ee6();
                                                                    if ((int)t88 > 0) {
                                                                        t89 = *(int *)0xC13120C;
                                                                        FUN_0c05fd70((t89 + 0x1A));
                                                                        t91 = *(int *)0xC13120C;
                                                                        t92 = (int)((int)(t91 + 0x1) % (int)0x3);
                                                                        *(unsigned int *)0xC13120C = t92;
                                                                    }
                                                                }
                                                            } else {
                                                                t97 = FUN_0c038ee6();
                                                                if ((int)t97 > 0) {
                                                                    t98 = *(int *)0xC13120C;
                                                                    FUN_0c05fd70((t98 + 0x1A));
                                                                    t100 = *(int *)0xC13120C;
                                                                    t101 = (int)((int)(t100 + 0x1) % (int)0x3);
                                                                    *(unsigned int *)0xC13120C = t101;
                                                                }
                                                            }
                                                        } else {
                                                            t106 = FUN_0c038ee6();
                                                            if ((int)t106 > 0) {
                                                                t107 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t107 + 0x1A));
                                                                t109 = *(int *)0xC13120C;
                                                                t110 = (int)((int)(t109 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t110;
                                                            }
                                                        }
                                                    } else {
                                                        t115 = FUN_0c038ee6();
                                                        if ((int)t115 > 0) {
                                                            t116 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t116 + 0x1A));
                                                            t118 = *(int *)0xC13120C;
                                                            t119 = (int)((int)(t118 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t119;
                                                        }
                                                    }
                                                } else {
                                                    t124 = FUN_0c038ee6();
                                                    if ((int)t124 > 0) {
                                                        t125 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t125 + 0x1A));
                                                        t127 = *(int *)0xC13120C;
                                                        t128 = (int)((int)(t127 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t128;
                                                    }
                                                }
                                            } else {
                                                t133 = FUN_0c038ee6();
                                                if ((int)t133 > 0) {
                                                    t134 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t134 + 0x1A));
                                                    t136 = *(int *)0xC13120C;
                                                    t137 = (int)((int)(t136 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t137;
                                                }
                                            }
                                            FUN_0c05ce38();
                                        }
                                    } else {
                                        t145 = *(int *)0xC2A995C;
                                        t146 = FUN_0c038eec((((((t145 - 1) << 2) + (t145 - 1)) << 1) + 0x1));
                                        if (t146 == 0) {
                                            t147 = *(int *)0xC2A995C;
                                            t148 = FUN_0c038eec((((((t147 - 1) << 2) + (t147 - 1)) << 1) + 0x2));
                                            if (t148 == 0) {
                                                t149 = *(int *)0xC2A995C;
                                                t150 = FUN_0c038eec((((((t149 - 1) << 2) + (t149 - 1)) << 1) + 0x3));
                                                if (t150 == 0) {
                                                    t151 = *(int *)0xC2A995C;
                                                    t152 = FUN_0c038eec((((((t151 - 1) << 2) + (t151 - 1)) << 1) + 0x4));
                                                    if (t152 == 0) {
                                                        t153 = *(int *)0xC2A995C;
                                                        t154 = FUN_0c038eec((((((t153 - 1) << 2) + (t153 - 1)) << 1) + 0x5));
                                                        if (t154 == 0) {
                                                            t155 = *(int *)0xC2A995C;
                                                            t156 = FUN_0c038eec((((((t155 - 1) << 2) + (t155 - 1)) << 1) + 0x6));
                                                            if (t156 == 0) {
                                                                t157 = *(int *)0xC2A995C;
                                                                t158 = FUN_0c038eec((((((t157 - 1) << 2) + (t157 - 1)) << 1) + 0x7));
                                                                if (t158 == 0) {
                                                                    t159 = *(int *)0xC2A995C;
                                                                    t160 = FUN_0c038eec((((((t159 - 1) << 2) + (t159 - 1)) << 1) + 0x8));
                                                                    if (t160 == 0) {
                                                                        t161 = *(int *)0xC2A995C;
                                                                        t162 = FUN_0c038eec((((((t161 - 1) << 2) + (t161 - 1)) << 1) + 0x9));
                                                                        if (t162 == 0) {
                                                                            t163 = *(int *)0xC2A995C;
                                                                            t164 = FUN_0c038eec((((((t163 - 1) << 2) + (t163 - 1)) << 1) + 0xA));
                                                                            if (t164 == 0) {
                                                                                t165 = *(int *)0xC131208;
                                                                                FUN_0c05fd70((t165 + 0x1D));
                                                                                t167 = *(int *)0xC131208;
                                                                                t168 = (int)((int)(t167 + 0x1) % (int)0x2);
                                                                                *(unsigned int *)0xC131208 = t168;
                                                                            } else {
                                                                                t169 = FUN_0c038ee6();
                                                                                if ((int)t169 > 0) {
                                                                                    t170 = *(int *)0xC13120C;
                                                                                    FUN_0c05fd70((t170 + 0x1A));
                                                                                    t172 = *(int *)0xC13120C;
                                                                                    t173 = (int)((int)(t172 + 0x1) % (int)0x3);
                                                                                    *(unsigned int *)0xC13120C = t173;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t178 = FUN_0c038ee6();
                                                                            if ((int)t178 > 0) {
                                                                                t179 = *(int *)0xC13120C;
                                                                                FUN_0c05fd70((t179 + 0x1A));
                                                                                t181 = *(int *)0xC13120C;
                                                                                t182 = (int)((int)(t181 + 0x1) % (int)0x3);
                                                                                *(unsigned int *)0xC13120C = t182;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t187 = FUN_0c038ee6();
                                                                        if ((int)t187 > 0) {
                                                                            t188 = *(int *)0xC13120C;
                                                                            FUN_0c05fd70((t188 + 0x1A));
                                                                            t190 = *(int *)0xC13120C;
                                                                            t191 = (int)((int)(t190 + 0x1) % (int)0x3);
                                                                            *(unsigned int *)0xC13120C = t191;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t196 = FUN_0c038ee6();
                                                                    if ((int)t196 > 0) {
                                                                        t197 = *(int *)0xC13120C;
                                                                        FUN_0c05fd70((t197 + 0x1A));
                                                                        t199 = *(int *)0xC13120C;
                                                                        t200 = (int)((int)(t199 + 0x1) % (int)0x3);
                                                                        *(unsigned int *)0xC13120C = t200;
                                                                    }
                                                                }
                                                            } else {
                                                                t205 = FUN_0c038ee6();
                                                                if ((int)t205 > 0) {
                                                                    t206 = *(int *)0xC13120C;
                                                                    FUN_0c05fd70((t206 + 0x1A));
                                                                    t208 = *(int *)0xC13120C;
                                                                    t209 = (int)((int)(t208 + 0x1) % (int)0x3);
                                                                    *(unsigned int *)0xC13120C = t209;
                                                                }
                                                            }
                                                        } else {
                                                            t214 = FUN_0c038ee6();
                                                            if ((int)t214 > 0) {
                                                                t215 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t215 + 0x1A));
                                                                t217 = *(int *)0xC13120C;
                                                                t218 = (int)((int)(t217 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t218;
                                                            }
                                                        }
                                                    } else {
                                                        t223 = FUN_0c038ee6();
                                                        if ((int)t223 > 0) {
                                                            t224 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t224 + 0x1A));
                                                            t226 = *(int *)0xC13120C;
                                                            t227 = (int)((int)(t226 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t227;
                                                        }
                                                    }
                                                } else {
                                                    t232 = FUN_0c038ee6();
                                                    if ((int)t232 > 0) {
                                                        t233 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t233 + 0x1A));
                                                        t235 = *(int *)0xC13120C;
                                                        t236 = (int)((int)(t235 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t236;
                                                    }
                                                }
                                            } else {
                                                t241 = FUN_0c038ee6();
                                                if ((int)t241 > 0) {
                                                    t242 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t242 + 0x1A));
                                                    t244 = *(int *)0xC13120C;
                                                    t245 = (int)((int)(t244 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t245;
                                                }
                                            }
                                        } else {
                                            t250 = FUN_0c038ee6();
                                            if ((int)t250 > 0) {
                                                t251 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t251 + 0x1A));
                                                t253 = *(int *)0xC13120C;
                                                t254 = (int)((int)(t253 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t254;
                                            }
                                        }
                                        FUN_0c05ce38();
                                    }
                                } else {
                                    t262 = *(int *)0xC2A995C;
                                    t263 = FUN_0c038eec((((((t262 - 1) << 2) + (t262 - 1)) << 1) + 0x1));
                                    if (t263 == 0) {
                                        t264 = *(int *)0xC2A995C;
                                        t265 = FUN_0c038eec((((((t264 - 1) << 2) + (t264 - 1)) << 1) + 0x2));
                                        if (t265 == 0) {
                                            t266 = *(int *)0xC2A995C;
                                            t267 = FUN_0c038eec((((((t266 - 1) << 2) + (t266 - 1)) << 1) + 0x3));
                                            if (t267 == 0) {
                                                t268 = *(int *)0xC2A995C;
                                                t269 = FUN_0c038eec((((((t268 - 1) << 2) + (t268 - 1)) << 1) + 0x4));
                                                if (t269 == 0) {
                                                    t270 = *(int *)0xC2A995C;
                                                    t271 = FUN_0c038eec((((((t270 - 1) << 2) + (t270 - 1)) << 1) + 0x5));
                                                    if (t271 == 0) {
                                                        t272 = *(int *)0xC2A995C;
                                                        t273 = FUN_0c038eec((((((t272 - 1) << 2) + (t272 - 1)) << 1) + 0x6));
                                                        if (t273 == 0) {
                                                            t274 = *(int *)0xC2A995C;
                                                            t275 = FUN_0c038eec((((((t274 - 1) << 2) + (t274 - 1)) << 1) + 0x7));
                                                            if (t275 == 0) {
                                                                t276 = *(int *)0xC2A995C;
                                                                t277 = FUN_0c038eec((((((t276 - 1) << 2) + (t276 - 1)) << 1) + 0x8));
                                                                if (t277 == 0) {
                                                                    t278 = *(int *)0xC2A995C;
                                                                    t279 = FUN_0c038eec((((((t278 - 1) << 2) + (t278 - 1)) << 1) + 0x9));
                                                                    if (t279 == 0) {
                                                                        t280 = *(int *)0xC2A995C;
                                                                        t281 = FUN_0c038eec((((((t280 - 1) << 2) + (t280 - 1)) << 1) + 0xA));
                                                                        if (t281 == 0) {
                                                                            t282 = *(int *)0xC131208;
                                                                            FUN_0c05fd70((t282 + 0x1D));
                                                                            t284 = *(int *)0xC131208;
                                                                            t285 = (int)((int)(t284 + 0x1) % (int)0x2);
                                                                            *(unsigned int *)0xC131208 = t285;
                                                                        } else {
                                                                            t286 = FUN_0c038ee6();
                                                                            if ((int)t286 > 0) {
                                                                                t287 = *(int *)0xC13120C;
                                                                                FUN_0c05fd70((t287 + 0x1A));
                                                                                t289 = *(int *)0xC13120C;
                                                                                t290 = (int)((int)(t289 + 0x1) % (int)0x3);
                                                                                *(unsigned int *)0xC13120C = t290;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t295 = FUN_0c038ee6();
                                                                        if ((int)t295 > 0) {
                                                                            t296 = *(int *)0xC13120C;
                                                                            FUN_0c05fd70((t296 + 0x1A));
                                                                            t298 = *(int *)0xC13120C;
                                                                            t299 = (int)((int)(t298 + 0x1) % (int)0x3);
                                                                            *(unsigned int *)0xC13120C = t299;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t304 = FUN_0c038ee6();
                                                                    if ((int)t304 > 0) {
                                                                        t305 = *(int *)0xC13120C;
                                                                        FUN_0c05fd70((t305 + 0x1A));
                                                                        t307 = *(int *)0xC13120C;
                                                                        t308 = (int)((int)(t307 + 0x1) % (int)0x3);
                                                                        *(unsigned int *)0xC13120C = t308;
                                                                    }
                                                                }
                                                            } else {
                                                                t313 = FUN_0c038ee6();
                                                                if ((int)t313 > 0) {
                                                                    t314 = *(int *)0xC13120C;
                                                                    FUN_0c05fd70((t314 + 0x1A));
                                                                    t316 = *(int *)0xC13120C;
                                                                    t317 = (int)((int)(t316 + 0x1) % (int)0x3);
                                                                    *(unsigned int *)0xC13120C = t317;
                                                                }
                                                            }
                                                        } else {
                                                            t322 = FUN_0c038ee6();
                                                            if ((int)t322 > 0) {
                                                                t323 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t323 + 0x1A));
                                                                t325 = *(int *)0xC13120C;
                                                                t326 = (int)((int)(t325 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t326;
                                                            }
                                                        }
                                                    } else {
                                                        t331 = FUN_0c038ee6();
                                                        if ((int)t331 > 0) {
                                                            t332 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t332 + 0x1A));
                                                            t334 = *(int *)0xC13120C;
                                                            t335 = (int)((int)(t334 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t335;
                                                        }
                                                    }
                                                } else {
                                                    t340 = FUN_0c038ee6();
                                                    if ((int)t340 > 0) {
                                                        t341 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t341 + 0x1A));
                                                        t343 = *(int *)0xC13120C;
                                                        t344 = (int)((int)(t343 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t344;
                                                    }
                                                }
                                            } else {
                                                t349 = FUN_0c038ee6();
                                                if ((int)t349 > 0) {
                                                    t350 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t350 + 0x1A));
                                                    t352 = *(int *)0xC13120C;
                                                    t353 = (int)((int)(t352 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t353;
                                                }
                                            }
                                        } else {
                                            t358 = FUN_0c038ee6();
                                            if ((int)t358 > 0) {
                                                t359 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t359 + 0x1A));
                                                t361 = *(int *)0xC13120C;
                                                t362 = (int)((int)(t361 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t362;
                                            }
                                        }
                                    } else {
                                        t367 = FUN_0c038ee6();
                                        if ((int)t367 > 0) {
                                            t368 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t368 + 0x1A));
                                            t370 = *(int *)0xC13120C;
                                            t371 = (int)((int)(t370 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t371;
                                        }
                                    }
                                    FUN_0c05ce38();
                                }
                            } else {
                                t379 = *(int *)0xC2A995C;
                                t380 = FUN_0c038eec((((((t379 - 1) << 2) + (t379 - 1)) << 1) + 0x1));
                                if (t380 == 0) {
                                    t381 = *(int *)0xC2A995C;
                                    t382 = FUN_0c038eec((((((t381 - 1) << 2) + (t381 - 1)) << 1) + 0x2));
                                    if (t382 == 0) {
                                        t383 = *(int *)0xC2A995C;
                                        t384 = FUN_0c038eec((((((t383 - 1) << 2) + (t383 - 1)) << 1) + 0x3));
                                        if (t384 == 0) {
                                            t385 = *(int *)0xC2A995C;
                                            t386 = FUN_0c038eec((((((t385 - 1) << 2) + (t385 - 1)) << 1) + 0x4));
                                            if (t386 == 0) {
                                                t387 = *(int *)0xC2A995C;
                                                t388 = FUN_0c038eec((((((t387 - 1) << 2) + (t387 - 1)) << 1) + 0x5));
                                                if (t388 == 0) {
                                                    t389 = *(int *)0xC2A995C;
                                                    t390 = FUN_0c038eec((((((t389 - 1) << 2) + (t389 - 1)) << 1) + 0x6));
                                                    if (t390 == 0) {
                                                        t391 = *(int *)0xC2A995C;
                                                        t392 = FUN_0c038eec((((((t391 - 1) << 2) + (t391 - 1)) << 1) + 0x7));
                                                        if (t392 == 0) {
                                                            t393 = *(int *)0xC2A995C;
                                                            t394 = FUN_0c038eec((((((t393 - 1) << 2) + (t393 - 1)) << 1) + 0x8));
                                                            if (t394 == 0) {
                                                                t395 = *(int *)0xC2A995C;
                                                                t396 = FUN_0c038eec((((((t395 - 1) << 2) + (t395 - 1)) << 1) + 0x9));
                                                                if (t396 == 0) {
                                                                    t397 = *(int *)0xC2A995C;
                                                                    t398 = FUN_0c038eec((((((t397 - 1) << 2) + (t397 - 1)) << 1) + 0xA));
                                                                    if (t398 == 0) {
                                                                        t399 = *(int *)0xC131208;
                                                                        FUN_0c05fd70((t399 + 0x1D));
                                                                        t401 = *(int *)0xC131208;
                                                                        t402 = (int)((int)(t401 + 0x1) % (int)0x2);
                                                                        *(unsigned int *)0xC131208 = t402;
                                                                    } else {
                                                                        t403 = FUN_0c038ee6();
                                                                        if ((int)t403 > 0) {
                                                                            t404 = *(int *)0xC13120C;
                                                                            FUN_0c05fd70((t404 + 0x1A));
                                                                            t406 = *(int *)0xC13120C;
                                                                            t407 = (int)((int)(t406 + 0x1) % (int)0x3);
                                                                            *(unsigned int *)0xC13120C = t407;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t412 = FUN_0c038ee6();
                                                                    if ((int)t412 > 0) {
                                                                        t413 = *(int *)0xC13120C;
                                                                        FUN_0c05fd70((t413 + 0x1A));
                                                                        t415 = *(int *)0xC13120C;
                                                                        t416 = (int)((int)(t415 + 0x1) % (int)0x3);
                                                                        *(unsigned int *)0xC13120C = t416;
                                                                    }
                                                                }
                                                            } else {
                                                                t421 = FUN_0c038ee6();
                                                                if ((int)t421 > 0) {
                                                                    t422 = *(int *)0xC13120C;
                                                                    FUN_0c05fd70((t422 + 0x1A));
                                                                    t424 = *(int *)0xC13120C;
                                                                    t425 = (int)((int)(t424 + 0x1) % (int)0x3);
                                                                    *(unsigned int *)0xC13120C = t425;
                                                                }
                                                            }
                                                        } else {
                                                            t430 = FUN_0c038ee6();
                                                            if ((int)t430 > 0) {
                                                                t431 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t431 + 0x1A));
                                                                t433 = *(int *)0xC13120C;
                                                                t434 = (int)((int)(t433 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t434;
                                                            }
                                                        }
                                                    } else {
                                                        t439 = FUN_0c038ee6();
                                                        if ((int)t439 > 0) {
                                                            t440 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t440 + 0x1A));
                                                            t442 = *(int *)0xC13120C;
                                                            t443 = (int)((int)(t442 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t443;
                                                        }
                                                    }
                                                } else {
                                                    t448 = FUN_0c038ee6();
                                                    if ((int)t448 > 0) {
                                                        t449 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t449 + 0x1A));
                                                        t451 = *(int *)0xC13120C;
                                                        t452 = (int)((int)(t451 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t452;
                                                    }
                                                }
                                            } else {
                                                t457 = FUN_0c038ee6();
                                                if ((int)t457 > 0) {
                                                    t458 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t458 + 0x1A));
                                                    t460 = *(int *)0xC13120C;
                                                    t461 = (int)((int)(t460 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t461;
                                                }
                                            }
                                        } else {
                                            t466 = FUN_0c038ee6();
                                            if ((int)t466 > 0) {
                                                t467 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t467 + 0x1A));
                                                t469 = *(int *)0xC13120C;
                                                t470 = (int)((int)(t469 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t470;
                                            }
                                        }
                                    } else {
                                        t475 = FUN_0c038ee6();
                                        if ((int)t475 > 0) {
                                            t476 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t476 + 0x1A));
                                            t478 = *(int *)0xC13120C;
                                            t479 = (int)((int)(t478 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t479;
                                        }
                                    }
                                } else {
                                    t484 = FUN_0c038ee6();
                                    if ((int)t484 > 0) {
                                        t485 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t485 + 0x1A));
                                        t487 = *(int *)0xC13120C;
                                        t488 = (int)((int)(t487 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t488;
                                    }
                                }
                                FUN_0c05ce38();
                            }
                        } else {
                            t496 = *(int *)0xC2A995C;
                            t497 = FUN_0c038eec((((((t496 - 1) << 2) + (t496 - 1)) << 1) + 0x1));
                            if (t497 == 0) {
                                t498 = *(int *)0xC2A995C;
                                t499 = FUN_0c038eec((((((t498 - 1) << 2) + (t498 - 1)) << 1) + 0x2));
                                if (t499 == 0) {
                                    t500 = *(int *)0xC2A995C;
                                    t501 = FUN_0c038eec((((((t500 - 1) << 2) + (t500 - 1)) << 1) + 0x3));
                                    if (t501 == 0) {
                                        t502 = *(int *)0xC2A995C;
                                        t503 = FUN_0c038eec((((((t502 - 1) << 2) + (t502 - 1)) << 1) + 0x4));
                                        if (t503 == 0) {
                                            t504 = *(int *)0xC2A995C;
                                            t505 = FUN_0c038eec((((((t504 - 1) << 2) + (t504 - 1)) << 1) + 0x5));
                                            if (t505 == 0) {
                                                t506 = *(int *)0xC2A995C;
                                                t507 = FUN_0c038eec((((((t506 - 1) << 2) + (t506 - 1)) << 1) + 0x6));
                                                if (t507 == 0) {
                                                    t508 = *(int *)0xC2A995C;
                                                    t509 = FUN_0c038eec((((((t508 - 1) << 2) + (t508 - 1)) << 1) + 0x7));
                                                    if (t509 == 0) {
                                                        t510 = *(int *)0xC2A995C;
                                                        t511 = FUN_0c038eec((((((t510 - 1) << 2) + (t510 - 1)) << 1) + 0x8));
                                                        if (t511 == 0) {
                                                            t512 = *(int *)0xC2A995C;
                                                            t513 = FUN_0c038eec((((((t512 - 1) << 2) + (t512 - 1)) << 1) + 0x9));
                                                            if (t513 == 0) {
                                                                t514 = *(int *)0xC2A995C;
                                                                t515 = FUN_0c038eec((((((t514 - 1) << 2) + (t514 - 1)) << 1) + 0xA));
                                                                if (t515 == 0) {
                                                                    t516 = *(int *)0xC131208;
                                                                    FUN_0c05fd70((t516 + 0x1D));
                                                                    t518 = *(int *)0xC131208;
                                                                    t519 = (int)((int)(t518 + 0x1) % (int)0x2);
                                                                    *(unsigned int *)0xC131208 = t519;
                                                                } else {
                                                                    t520 = FUN_0c038ee6();
                                                                    if ((int)t520 > 0) {
                                                                        t521 = *(int *)0xC13120C;
                                                                        FUN_0c05fd70((t521 + 0x1A));
                                                                        t523 = *(int *)0xC13120C;
                                                                        t524 = (int)((int)(t523 + 0x1) % (int)0x3);
                                                                        *(unsigned int *)0xC13120C = t524;
                                                                    }
                                                                }
                                                            } else {
                                                                t529 = FUN_0c038ee6();
                                                                if ((int)t529 > 0) {
                                                                    t530 = *(int *)0xC13120C;
                                                                    FUN_0c05fd70((t530 + 0x1A));
                                                                    t532 = *(int *)0xC13120C;
                                                                    t533 = (int)((int)(t532 + 0x1) % (int)0x3);
                                                                    *(unsigned int *)0xC13120C = t533;
                                                                }
                                                            }
                                                        } else {
                                                            t538 = FUN_0c038ee6();
                                                            if ((int)t538 > 0) {
                                                                t539 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t539 + 0x1A));
                                                                t541 = *(int *)0xC13120C;
                                                                t542 = (int)((int)(t541 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t542;
                                                            }
                                                        }
                                                    } else {
                                                        t547 = FUN_0c038ee6();
                                                        if ((int)t547 > 0) {
                                                            t548 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t548 + 0x1A));
                                                            t550 = *(int *)0xC13120C;
                                                            t551 = (int)((int)(t550 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t551;
                                                        }
                                                    }
                                                } else {
                                                    t556 = FUN_0c038ee6();
                                                    if ((int)t556 > 0) {
                                                        t557 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t557 + 0x1A));
                                                        t559 = *(int *)0xC13120C;
                                                        t560 = (int)((int)(t559 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t560;
                                                    }
                                                }
                                            } else {
                                                t565 = FUN_0c038ee6();
                                                if ((int)t565 > 0) {
                                                    t566 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t566 + 0x1A));
                                                    t568 = *(int *)0xC13120C;
                                                    t569 = (int)((int)(t568 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t569;
                                                }
                                            }
                                        } else {
                                            t574 = FUN_0c038ee6();
                                            if ((int)t574 > 0) {
                                                t575 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t575 + 0x1A));
                                                t577 = *(int *)0xC13120C;
                                                t578 = (int)((int)(t577 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t578;
                                            }
                                        }
                                    } else {
                                        t583 = FUN_0c038ee6();
                                        if ((int)t583 > 0) {
                                            t584 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t584 + 0x1A));
                                            t586 = *(int *)0xC13120C;
                                            t587 = (int)((int)(t586 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t587;
                                        }
                                    }
                                } else {
                                    t592 = FUN_0c038ee6();
                                    if ((int)t592 > 0) {
                                        t593 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t593 + 0x1A));
                                        t595 = *(int *)0xC13120C;
                                        t596 = (int)((int)(t595 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t596;
                                    }
                                }
                            } else {
                                t601 = FUN_0c038ee6();
                                if ((int)t601 > 0) {
                                    t602 = *(int *)0xC13120C;
                                    FUN_0c05fd70((t602 + 0x1A));
                                    t604 = *(int *)0xC13120C;
                                    t605 = (int)((int)(t604 + 0x1) % (int)0x3);
                                    *(unsigned int *)0xC13120C = t605;
                                }
                            }
                            FUN_0c05ce38();
                        }
                    } else {
                        t613 = *(int *)0xC2A995C;
                        t614 = FUN_0c038eec((((((t613 - 1) << 2) + (t613 - 1)) << 1) + 0x1));
                        if (t614 == 0) {
                            t615 = *(int *)0xC2A995C;
                            t616 = FUN_0c038eec((((((t615 - 1) << 2) + (t615 - 1)) << 1) + 0x2));
                            if (t616 == 0) {
                                t617 = *(int *)0xC2A995C;
                                t618 = FUN_0c038eec((((((t617 - 1) << 2) + (t617 - 1)) << 1) + 0x3));
                                if (t618 == 0) {
                                    t619 = *(int *)0xC2A995C;
                                    t620 = FUN_0c038eec((((((t619 - 1) << 2) + (t619 - 1)) << 1) + 0x4));
                                    if (t620 == 0) {
                                        t621 = *(int *)0xC2A995C;
                                        t622 = FUN_0c038eec((((((t621 - 1) << 2) + (t621 - 1)) << 1) + 0x5));
                                        if (t622 == 0) {
                                            t623 = *(int *)0xC2A995C;
                                            t624 = FUN_0c038eec((((((t623 - 1) << 2) + (t623 - 1)) << 1) + 0x6));
                                            if (t624 == 0) {
                                                t625 = *(int *)0xC2A995C;
                                                t626 = FUN_0c038eec((((((t625 - 1) << 2) + (t625 - 1)) << 1) + 0x7));
                                                if (t626 == 0) {
                                                    t627 = *(int *)0xC2A995C;
                                                    t628 = FUN_0c038eec((((((t627 - 1) << 2) + (t627 - 1)) << 1) + 0x8));
                                                    if (t628 == 0) {
                                                        t629 = *(int *)0xC2A995C;
                                                        t630 = FUN_0c038eec((((((t629 - 1) << 2) + (t629 - 1)) << 1) + 0x9));
                                                        if (t630 == 0) {
                                                            t631 = *(int *)0xC2A995C;
                                                            t632 = FUN_0c038eec((((((t631 - 1) << 2) + (t631 - 1)) << 1) + 0xA));
                                                            if (t632 == 0) {
                                                                t633 = *(int *)0xC131208;
                                                                FUN_0c05fd70((t633 + 0x1D));
                                                                t635 = *(int *)0xC131208;
                                                                t636 = (int)((int)(t635 + 0x1) % (int)0x2);
                                                                *(unsigned int *)0xC131208 = t636;
                                                            } else {
                                                                t637 = FUN_0c038ee6();
                                                                if ((int)t637 > 0) {
                                                                    t638 = *(int *)0xC13120C;
                                                                    FUN_0c05fd70((t638 + 0x1A));
                                                                    t640 = *(int *)0xC13120C;
                                                                    t641 = (int)((int)(t640 + 0x1) % (int)0x3);
                                                                    *(unsigned int *)0xC13120C = t641;
                                                                }
                                                            }
                                                        } else {
                                                            t646 = FUN_0c038ee6();
                                                            if ((int)t646 > 0) {
                                                                t647 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t647 + 0x1A));
                                                                t649 = *(int *)0xC13120C;
                                                                t650 = (int)((int)(t649 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t650;
                                                            }
                                                        }
                                                    } else {
                                                        t655 = FUN_0c038ee6();
                                                        if ((int)t655 > 0) {
                                                            t656 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t656 + 0x1A));
                                                            t658 = *(int *)0xC13120C;
                                                            t659 = (int)((int)(t658 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t659;
                                                        }
                                                    }
                                                } else {
                                                    t664 = FUN_0c038ee6();
                                                    if ((int)t664 > 0) {
                                                        t665 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t665 + 0x1A));
                                                        t667 = *(int *)0xC13120C;
                                                        t668 = (int)((int)(t667 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t668;
                                                    }
                                                }
                                            } else {
                                                t673 = FUN_0c038ee6();
                                                if ((int)t673 > 0) {
                                                    t674 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t674 + 0x1A));
                                                    t676 = *(int *)0xC13120C;
                                                    t677 = (int)((int)(t676 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t677;
                                                }
                                            }
                                        } else {
                                            t682 = FUN_0c038ee6();
                                            if ((int)t682 > 0) {
                                                t683 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t683 + 0x1A));
                                                t685 = *(int *)0xC13120C;
                                                t686 = (int)((int)(t685 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t686;
                                            }
                                        }
                                    } else {
                                        t691 = FUN_0c038ee6();
                                        if ((int)t691 > 0) {
                                            t692 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t692 + 0x1A));
                                            t694 = *(int *)0xC13120C;
                                            t695 = (int)((int)(t694 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t695;
                                        }
                                    }
                                } else {
                                    t700 = FUN_0c038ee6();
                                    if ((int)t700 > 0) {
                                        t701 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t701 + 0x1A));
                                        t703 = *(int *)0xC13120C;
                                        t704 = (int)((int)(t703 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t704;
                                    }
                                }
                            } else {
                                t709 = FUN_0c038ee6();
                                if ((int)t709 > 0) {
                                    t710 = *(int *)0xC13120C;
                                    FUN_0c05fd70((t710 + 0x1A));
                                    t712 = *(int *)0xC13120C;
                                    t713 = (int)((int)(t712 + 0x1) % (int)0x3);
                                    *(unsigned int *)0xC13120C = t713;
                                }
                            }
                        } else {
                            t718 = FUN_0c038ee6();
                            if ((int)t718 > 0) {
                                t719 = *(int *)0xC13120C;
                                FUN_0c05fd70((t719 + 0x1A));
                                t721 = *(int *)0xC13120C;
                                t722 = (int)((int)(t721 + 0x1) % (int)0x3);
                                *(unsigned int *)0xC13120C = t722;
                            }
                        }
                        FUN_0c05ce38();
                    }
                } else {
                    t730 = *(int *)0xC2A995C;
                    t731 = FUN_0c038eec((((((t730 - 1) << 2) + (t730 - 1)) << 1) + 0x1));
                    if (t731 == 0) {
                        t732 = *(int *)0xC2A995C;
                        t733 = FUN_0c038eec((((((t732 - 1) << 2) + (t732 - 1)) << 1) + 0x2));
                        if (t733 == 0) {
                            t734 = *(int *)0xC2A995C;
                            t735 = FUN_0c038eec((((((t734 - 1) << 2) + (t734 - 1)) << 1) + 0x3));
                            if (t735 == 0) {
                                t736 = *(int *)0xC2A995C;
                                t737 = FUN_0c038eec((((((t736 - 1) << 2) + (t736 - 1)) << 1) + 0x4));
                                if (t737 == 0) {
                                    t738 = *(int *)0xC2A995C;
                                    t739 = FUN_0c038eec((((((t738 - 1) << 2) + (t738 - 1)) << 1) + 0x5));
                                    if (t739 == 0) {
                                        t740 = *(int *)0xC2A995C;
                                        t741 = FUN_0c038eec((((((t740 - 1) << 2) + (t740 - 1)) << 1) + 0x6));
                                        if (t741 == 0) {
                                            t742 = *(int *)0xC2A995C;
                                            t743 = FUN_0c038eec((((((t742 - 1) << 2) + (t742 - 1)) << 1) + 0x7));
                                            if (t743 == 0) {
                                                t744 = *(int *)0xC2A995C;
                                                t745 = FUN_0c038eec((((((t744 - 1) << 2) + (t744 - 1)) << 1) + 0x8));
                                                if (t745 == 0) {
                                                    t746 = *(int *)0xC2A995C;
                                                    t747 = FUN_0c038eec((((((t746 - 1) << 2) + (t746 - 1)) << 1) + 0x9));
                                                    if (t747 == 0) {
                                                        t748 = *(int *)0xC2A995C;
                                                        t749 = FUN_0c038eec((((((t748 - 1) << 2) + (t748 - 1)) << 1) + 0xA));
                                                        if (t749 == 0) {
                                                            t750 = *(int *)0xC131208;
                                                            FUN_0c05fd70((t750 + 0x1D));
                                                            t752 = *(int *)0xC131208;
                                                            t753 = (int)((int)(t752 + 0x1) % (int)0x2);
                                                            *(unsigned int *)0xC131208 = t753;
                                                        } else {
                                                            t754 = FUN_0c038ee6();
                                                            if ((int)t754 > 0) {
                                                                t755 = *(int *)0xC13120C;
                                                                FUN_0c05fd70((t755 + 0x1A));
                                                                t757 = *(int *)0xC13120C;
                                                                t758 = (int)((int)(t757 + 0x1) % (int)0x3);
                                                                *(unsigned int *)0xC13120C = t758;
                                                            }
                                                        }
                                                    } else {
                                                        t763 = FUN_0c038ee6();
                                                        if ((int)t763 > 0) {
                                                            t764 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t764 + 0x1A));
                                                            t766 = *(int *)0xC13120C;
                                                            t767 = (int)((int)(t766 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t767;
                                                        }
                                                    }
                                                } else {
                                                    t772 = FUN_0c038ee6();
                                                    if ((int)t772 > 0) {
                                                        t773 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t773 + 0x1A));
                                                        t775 = *(int *)0xC13120C;
                                                        t776 = (int)((int)(t775 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t776;
                                                    }
                                                }
                                            } else {
                                                t781 = FUN_0c038ee6();
                                                if ((int)t781 > 0) {
                                                    t782 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t782 + 0x1A));
                                                    t784 = *(int *)0xC13120C;
                                                    t785 = (int)((int)(t784 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t785;
                                                }
                                            }
                                        } else {
                                            t790 = FUN_0c038ee6();
                                            if ((int)t790 > 0) {
                                                t791 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t791 + 0x1A));
                                                t793 = *(int *)0xC13120C;
                                                t794 = (int)((int)(t793 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t794;
                                            }
                                        }
                                    } else {
                                        t799 = FUN_0c038ee6();
                                        if ((int)t799 > 0) {
                                            t800 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t800 + 0x1A));
                                            t802 = *(int *)0xC13120C;
                                            t803 = (int)((int)(t802 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t803;
                                        }
                                    }
                                } else {
                                    t808 = FUN_0c038ee6();
                                    if ((int)t808 > 0) {
                                        t809 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t809 + 0x1A));
                                        t811 = *(int *)0xC13120C;
                                        t812 = (int)((int)(t811 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t812;
                                    }
                                }
                            } else {
                                t817 = FUN_0c038ee6();
                                if ((int)t817 > 0) {
                                    t818 = *(int *)0xC13120C;
                                    FUN_0c05fd70((t818 + 0x1A));
                                    t820 = *(int *)0xC13120C;
                                    t821 = (int)((int)(t820 + 0x1) % (int)0x3);
                                    *(unsigned int *)0xC13120C = t821;
                                }
                            }
                        } else {
                            t826 = FUN_0c038ee6();
                            if ((int)t826 > 0) {
                                t827 = *(int *)0xC13120C;
                                FUN_0c05fd70((t827 + 0x1A));
                                t829 = *(int *)0xC13120C;
                                t830 = (int)((int)(t829 + 0x1) % (int)0x3);
                                *(unsigned int *)0xC13120C = t830;
                            }
                        }
                    } else {
                        t835 = FUN_0c038ee6();
                        if ((int)t835 > 0) {
                            t836 = *(int *)0xC13120C;
                            FUN_0c05fd70((t836 + 0x1A));
                            t838 = *(int *)0xC13120C;
                            t839 = (int)((int)(t838 + 0x1) % (int)0x3);
                            *(unsigned int *)0xC13120C = t839;
                        }
                    }
                    FUN_0c05ce38();
                }
            } else {
                t847 = *(int *)0xC2A995C;
                t848 = FUN_0c038eec((((((t847 - 1) << 2) + (t847 - 1)) << 1) + 0x1));
                if (t848 == 0) {
                    t849 = *(int *)0xC2A995C;
                    t850 = FUN_0c038eec((((((t849 - 1) << 2) + (t849 - 1)) << 1) + 0x2));
                    if (t850 == 0) {
                        t851 = *(int *)0xC2A995C;
                        t852 = FUN_0c038eec((((((t851 - 1) << 2) + (t851 - 1)) << 1) + 0x3));
                        if (t852 == 0) {
                            t853 = *(int *)0xC2A995C;
                            t854 = FUN_0c038eec((((((t853 - 1) << 2) + (t853 - 1)) << 1) + 0x4));
                            if (t854 == 0) {
                                t855 = *(int *)0xC2A995C;
                                t856 = FUN_0c038eec((((((t855 - 1) << 2) + (t855 - 1)) << 1) + 0x5));
                                if (t856 == 0) {
                                    t857 = *(int *)0xC2A995C;
                                    t858 = FUN_0c038eec((((((t857 - 1) << 2) + (t857 - 1)) << 1) + 0x6));
                                    if (t858 == 0) {
                                        t859 = *(int *)0xC2A995C;
                                        t860 = FUN_0c038eec((((((t859 - 1) << 2) + (t859 - 1)) << 1) + 0x7));
                                        if (t860 == 0) {
                                            t861 = *(int *)0xC2A995C;
                                            t862 = FUN_0c038eec((((((t861 - 1) << 2) + (t861 - 1)) << 1) + 0x8));
                                            if (t862 == 0) {
                                                t863 = *(int *)0xC2A995C;
                                                t864 = FUN_0c038eec((((((t863 - 1) << 2) + (t863 - 1)) << 1) + 0x9));
                                                if (t864 == 0) {
                                                    t865 = *(int *)0xC2A995C;
                                                    t866 = FUN_0c038eec((((((t865 - 1) << 2) + (t865 - 1)) << 1) + 0xA));
                                                    if (t866 == 0) {
                                                        t867 = *(int *)0xC131208;
                                                        FUN_0c05fd70((t867 + 0x1D));
                                                        t869 = *(int *)0xC131208;
                                                        t870 = (int)((int)(t869 + 0x1) % (int)0x2);
                                                        *(unsigned int *)0xC131208 = t870;
                                                    } else {
                                                        t871 = FUN_0c038ee6();
                                                        if ((int)t871 > 0) {
                                                            t872 = *(int *)0xC13120C;
                                                            FUN_0c05fd70((t872 + 0x1A));
                                                            t874 = *(int *)0xC13120C;
                                                            t875 = (int)((int)(t874 + 0x1) % (int)0x3);
                                                            *(unsigned int *)0xC13120C = t875;
                                                        }
                                                    }
                                                } else {
                                                    t880 = FUN_0c038ee6();
                                                    if ((int)t880 > 0) {
                                                        t881 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t881 + 0x1A));
                                                        t883 = *(int *)0xC13120C;
                                                        t884 = (int)((int)(t883 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t884;
                                                    }
                                                }
                                            } else {
                                                t889 = FUN_0c038ee6();
                                                if ((int)t889 > 0) {
                                                    t890 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t890 + 0x1A));
                                                    t892 = *(int *)0xC13120C;
                                                    t893 = (int)((int)(t892 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t893;
                                                }
                                            }
                                        } else {
                                            t898 = FUN_0c038ee6();
                                            if ((int)t898 > 0) {
                                                t899 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t899 + 0x1A));
                                                t901 = *(int *)0xC13120C;
                                                t902 = (int)((int)(t901 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t902;
                                            }
                                        }
                                    } else {
                                        t907 = FUN_0c038ee6();
                                        if ((int)t907 > 0) {
                                            t908 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t908 + 0x1A));
                                            t910 = *(int *)0xC13120C;
                                            t911 = (int)((int)(t910 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t911;
                                        }
                                    }
                                } else {
                                    t916 = FUN_0c038ee6();
                                    if ((int)t916 > 0) {
                                        t917 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t917 + 0x1A));
                                        t919 = *(int *)0xC13120C;
                                        t920 = (int)((int)(t919 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t920;
                                    }
                                }
                            } else {
                                t925 = FUN_0c038ee6();
                                if ((int)t925 > 0) {
                                    t926 = *(int *)0xC13120C;
                                    FUN_0c05fd70((t926 + 0x1A));
                                    t928 = *(int *)0xC13120C;
                                    t929 = (int)((int)(t928 + 0x1) % (int)0x3);
                                    *(unsigned int *)0xC13120C = t929;
                                }
                            }
                        } else {
                            t934 = FUN_0c038ee6();
                            if ((int)t934 > 0) {
                                t935 = *(int *)0xC13120C;
                                FUN_0c05fd70((t935 + 0x1A));
                                t937 = *(int *)0xC13120C;
                                t938 = (int)((int)(t937 + 0x1) % (int)0x3);
                                *(unsigned int *)0xC13120C = t938;
                            }
                        }
                    } else {
                        t943 = FUN_0c038ee6();
                        if ((int)t943 > 0) {
                            t944 = *(int *)0xC13120C;
                            FUN_0c05fd70((t944 + 0x1A));
                            t946 = *(int *)0xC13120C;
                            t947 = (int)((int)(t946 + 0x1) % (int)0x3);
                            *(unsigned int *)0xC13120C = t947;
                        }
                    }
                } else {
                    t952 = FUN_0c038ee6();
                    if ((int)t952 > 0) {
                        t953 = *(int *)0xC13120C;
                        FUN_0c05fd70((t953 + 0x1A));
                        t955 = *(int *)0xC13120C;
                        t956 = (int)((int)(t955 + 0x1) % (int)0x3);
                        *(unsigned int *)0xC13120C = t956;
                    }
                }
                FUN_0c05ce38();
            }
        } else {
            t964 = *(int *)0xC2A995C;
            t965 = FUN_0c038eec((((((t964 - 1) << 2) + (t964 - 1)) << 1) + 0x1));
            if (t965 == 0) {
                t966 = *(int *)0xC2A995C;
                t967 = FUN_0c038eec((((((t966 - 1) << 2) + (t966 - 1)) << 1) + 0x2));
                if (t967 == 0) {
                    t968 = *(int *)0xC2A995C;
                    t969 = FUN_0c038eec((((((t968 - 1) << 2) + (t968 - 1)) << 1) + 0x3));
                    if (t969 == 0) {
                        t970 = *(int *)0xC2A995C;
                        t971 = FUN_0c038eec((((((t970 - 1) << 2) + (t970 - 1)) << 1) + 0x4));
                        if (t971 == 0) {
                            t972 = *(int *)0xC2A995C;
                            t973 = FUN_0c038eec((((((t972 - 1) << 2) + (t972 - 1)) << 1) + 0x5));
                            if (t973 == 0) {
                                t974 = *(int *)0xC2A995C;
                                t975 = FUN_0c038eec((((((t974 - 1) << 2) + (t974 - 1)) << 1) + 0x6));
                                if (t975 == 0) {
                                    t976 = *(int *)0xC2A995C;
                                    t977 = FUN_0c038eec((((((t976 - 1) << 2) + (t976 - 1)) << 1) + 0x7));
                                    if (t977 == 0) {
                                        t978 = *(int *)0xC2A995C;
                                        t979 = FUN_0c038eec((((((t978 - 1) << 2) + (t978 - 1)) << 1) + 0x8));
                                        if (t979 == 0) {
                                            t980 = *(int *)0xC2A995C;
                                            t981 = FUN_0c038eec((((((t980 - 1) << 2) + (t980 - 1)) << 1) + 0x9));
                                            if (t981 == 0) {
                                                t982 = *(int *)0xC2A995C;
                                                t983 = FUN_0c038eec((((((t982 - 1) << 2) + (t982 - 1)) << 1) + 0xA));
                                                if (t983 == 0) {
                                                    t984 = *(int *)0xC131208;
                                                    FUN_0c05fd70((t984 + 0x1D));
                                                    t986 = *(int *)0xC131208;
                                                    t987 = (int)((int)(t986 + 0x1) % (int)0x2);
                                                    *(unsigned int *)0xC131208 = t987;
                                                } else {
                                                    t988 = FUN_0c038ee6();
                                                    if ((int)t988 > 0) {
                                                        t989 = *(int *)0xC13120C;
                                                        FUN_0c05fd70((t989 + 0x1A));
                                                        t991 = *(int *)0xC13120C;
                                                        t992 = (int)((int)(t991 + 0x1) % (int)0x3);
                                                        *(unsigned int *)0xC13120C = t992;
                                                    }
                                                }
                                            } else {
                                                t997 = FUN_0c038ee6();
                                                if ((int)t997 > 0) {
                                                    t998 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t998 + 0x1A));
                                                    t1000 = *(int *)0xC13120C;
                                                    t1001 = (int)((int)(t1000 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t1001;
                                                }
                                            }
                                        } else {
                                            t1006 = FUN_0c038ee6();
                                            if ((int)t1006 > 0) {
                                                t1007 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t1007 + 0x1A));
                                                t1009 = *(int *)0xC13120C;
                                                t1010 = (int)((int)(t1009 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t1010;
                                            }
                                        }
                                    } else {
                                        t1015 = FUN_0c038ee6();
                                        if ((int)t1015 > 0) {
                                            t1016 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t1016 + 0x1A));
                                            t1018 = *(int *)0xC13120C;
                                            t1019 = (int)((int)(t1018 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t1019;
                                        }
                                    }
                                } else {
                                    t1024 = FUN_0c038ee6();
                                    if ((int)t1024 > 0) {
                                        t1025 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t1025 + 0x1A));
                                        t1027 = *(int *)0xC13120C;
                                        t1028 = (int)((int)(t1027 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t1028;
                                    }
                                }
                            } else {
                                t1033 = FUN_0c038ee6();
                                if ((int)t1033 > 0) {
                                    t1034 = *(int *)0xC13120C;
                                    FUN_0c05fd70((t1034 + 0x1A));
                                    t1036 = *(int *)0xC13120C;
                                    t1037 = (int)((int)(t1036 + 0x1) % (int)0x3);
                                    *(unsigned int *)0xC13120C = t1037;
                                }
                            }
                        } else {
                            t1042 = FUN_0c038ee6();
                            if ((int)t1042 > 0) {
                                t1043 = *(int *)0xC13120C;
                                FUN_0c05fd70((t1043 + 0x1A));
                                t1045 = *(int *)0xC13120C;
                                t1046 = (int)((int)(t1045 + 0x1) % (int)0x3);
                                *(unsigned int *)0xC13120C = t1046;
                            }
                        }
                    } else {
                        t1051 = FUN_0c038ee6();
                        if ((int)t1051 > 0) {
                            t1052 = *(int *)0xC13120C;
                            FUN_0c05fd70((t1052 + 0x1A));
                            t1054 = *(int *)0xC13120C;
                            t1055 = (int)((int)(t1054 + 0x1) % (int)0x3);
                            *(unsigned int *)0xC13120C = t1055;
                        }
                    }
                } else {
                    t1060 = FUN_0c038ee6();
                    if ((int)t1060 > 0) {
                        t1061 = *(int *)0xC13120C;
                        FUN_0c05fd70((t1061 + 0x1A));
                        t1063 = *(int *)0xC13120C;
                        t1064 = (int)((int)(t1063 + 0x1) % (int)0x3);
                        *(unsigned int *)0xC13120C = t1064;
                    }
                }
            } else {
                t1069 = FUN_0c038ee6();
                if ((int)t1069 > 0) {
                    t1070 = *(int *)0xC13120C;
                    FUN_0c05fd70((t1070 + 0x1A));
                    t1072 = *(int *)0xC13120C;
                    t1073 = (int)((int)(t1072 + 0x1) % (int)0x3);
                    *(unsigned int *)0xC13120C = t1073;
                }
            }
            FUN_0c05ce38();
        }
    } else {
        t1081 = *(int *)0xC2A995C;
        t1082 = FUN_0c038eec((((((t1081 - 1) << 2) + (t1081 - 1)) << 1) + 0x1));
        if (t1082 == 0) {
            t1083 = *(int *)0xC2A995C;
            t1084 = FUN_0c038eec((((((t1083 - 1) << 2) + (t1083 - 1)) << 1) + 0x2));
            if (t1084 == 0) {
                t1085 = *(int *)0xC2A995C;
                t1086 = FUN_0c038eec((((((t1085 - 1) << 2) + (t1085 - 1)) << 1) + 0x3));
                if (t1086 == 0) {
                    t1087 = *(int *)0xC2A995C;
                    t1088 = FUN_0c038eec((((((t1087 - 1) << 2) + (t1087 - 1)) << 1) + 0x4));
                    if (t1088 == 0) {
                        t1089 = *(int *)0xC2A995C;
                        t1090 = FUN_0c038eec((((((t1089 - 1) << 2) + (t1089 - 1)) << 1) + 0x5));
                        if (t1090 == 0) {
                            t1091 = *(int *)0xC2A995C;
                            t1092 = FUN_0c038eec((((((t1091 - 1) << 2) + (t1091 - 1)) << 1) + 0x6));
                            if (t1092 == 0) {
                                t1093 = *(int *)0xC2A995C;
                                t1094 = FUN_0c038eec((((((t1093 - 1) << 2) + (t1093 - 1)) << 1) + 0x7));
                                if (t1094 == 0) {
                                    t1095 = *(int *)0xC2A995C;
                                    t1096 = FUN_0c038eec((((((t1095 - 1) << 2) + (t1095 - 1)) << 1) + 0x8));
                                    if (t1096 == 0) {
                                        t1097 = *(int *)0xC2A995C;
                                        t1098 = FUN_0c038eec((((((t1097 - 1) << 2) + (t1097 - 1)) << 1) + 0x9));
                                        if (t1098 == 0) {
                                            t1099 = *(int *)0xC2A995C;
                                            t1100 = FUN_0c038eec((((((t1099 - 1) << 2) + (t1099 - 1)) << 1) + 0xA));
                                            if (t1100 == 0) {
                                                t1101 = *(int *)0xC131208;
                                                FUN_0c05fd70((t1101 + 0x1D));
                                                t1103 = *(int *)0xC131208;
                                                t1104 = (int)((int)(t1103 + 0x1) % (int)0x2);
                                                *(unsigned int *)0xC131208 = t1104;
                                            } else {
                                                t1105 = FUN_0c038ee6();
                                                if ((int)t1105 > 0) {
                                                    t1106 = *(int *)0xC13120C;
                                                    FUN_0c05fd70((t1106 + 0x1A));
                                                    t1108 = *(int *)0xC13120C;
                                                    t1109 = (int)((int)(t1108 + 0x1) % (int)0x3);
                                                    *(unsigned int *)0xC13120C = t1109;
                                                }
                                            }
                                        } else {
                                            t1114 = FUN_0c038ee6();
                                            if ((int)t1114 > 0) {
                                                t1115 = *(int *)0xC13120C;
                                                FUN_0c05fd70((t1115 + 0x1A));
                                                t1117 = *(int *)0xC13120C;
                                                t1118 = (int)((int)(t1117 + 0x1) % (int)0x3);
                                                *(unsigned int *)0xC13120C = t1118;
                                            }
                                        }
                                    } else {
                                        t1123 = FUN_0c038ee6();
                                        if ((int)t1123 > 0) {
                                            t1124 = *(int *)0xC13120C;
                                            FUN_0c05fd70((t1124 + 0x1A));
                                            t1126 = *(int *)0xC13120C;
                                            t1127 = (int)((int)(t1126 + 0x1) % (int)0x3);
                                            *(unsigned int *)0xC13120C = t1127;
                                        }
                                    }
                                } else {
                                    t1132 = FUN_0c038ee6();
                                    if ((int)t1132 > 0) {
                                        t1133 = *(int *)0xC13120C;
                                        FUN_0c05fd70((t1133 + 0x1A));
                                        t1135 = *(int *)0xC13120C;
                                        t1136 = (int)((int)(t1135 + 0x1) % (int)0x3);
                                        *(unsigned int *)0xC13120C = t1136;
                                    }
                                }
                            } else {
                                t1141 = FUN_0c038ee6();
                                if ((int)t1141 > 0) {
                                    t1142 = *(int *)0xC13120C;
                                    FUN_0c05fd70((t1142 + 0x1A));
                                    t1144 = *(int *)0xC13120C;
                                    t1145 = (int)((int)(t1144 + 0x1) % (int)0x3);
                                    *(unsigned int *)0xC13120C = t1145;
                                }
                            }
                        } else {
                            t1150 = FUN_0c038ee6();
                            if ((int)t1150 > 0) {
                                t1151 = *(int *)0xC13120C;
                                FUN_0c05fd70((t1151 + 0x1A));
                                t1153 = *(int *)0xC13120C;
                                t1154 = (int)((int)(t1153 + 0x1) % (int)0x3);
                                *(unsigned int *)0xC13120C = t1154;
                            }
                        }
                    } else {
                        t1159 = FUN_0c038ee6();
                        if ((int)t1159 > 0) {
                            t1160 = *(int *)0xC13120C;
                            FUN_0c05fd70((t1160 + 0x1A));
                            t1162 = *(int *)0xC13120C;
                            t1163 = (int)((int)(t1162 + 0x1) % (int)0x3);
                            *(unsigned int *)0xC13120C = t1163;
                        }
                    }
                } else {
                    t1168 = FUN_0c038ee6();
                    if ((int)t1168 > 0) {
                        t1169 = *(int *)0xC13120C;
                        FUN_0c05fd70((t1169 + 0x1A));
                        t1171 = *(int *)0xC13120C;
                        t1172 = (int)((int)(t1171 + 0x1) % (int)0x3);
                        *(unsigned int *)0xC13120C = t1172;
                    }
                }
            } else {
                t1177 = FUN_0c038ee6();
                if ((int)t1177 > 0) {
                    t1178 = *(int *)0xC13120C;
                    FUN_0c05fd70((t1178 + 0x1A));
                    t1180 = *(int *)0xC13120C;
                    t1181 = (int)((int)(t1180 + 0x1) % (int)0x3);
                    *(unsigned int *)0xC13120C = t1181;
                }
            }
        } else {
            t1186 = FUN_0c038ee6();
            if ((int)t1186 > 0) {
                t1187 = *(int *)0xC13120C;
                FUN_0c05fd70((t1187 + 0x1A));
                t1189 = *(int *)0xC13120C;
                t1190 = (int)((int)(t1189 + 0x1) % (int)0x3);
                *(unsigned int *)0xC13120C = t1190;
            }
        }
        FUN_0c05ce38();
    }
    t1198 = FUN_0c038ee6();
    *(unsigned int *)0xC2A9958 = t1198;
    return t1198;
}

void FUN_0c0606e2(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (int)((unsigned int)a5 / (unsigned int)0x6);
    t1 = (int)((unsigned int)a5 % (unsigned int)0x6);
    t2 = 0x0;
    t3 = 0x0;
    do {
        t4 = (t2 + ((short)(((((((t0 << 1) + t1) - 1) << 1) + (((t0 << 1) + t1) - 1)) << 8) << 1) + 0xC2A9FF8));
        t5 = 0x0;
        do {
            t5 = (t5 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = a4;
            t4 = (t4 + 0x1);
        } while ((int)t5 < (int)0x30);
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x30);
    } while ((int)t3 < (int)0x20);
}

int Psg_SetPosPtrSet(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t6;
    int t9;
    float u7;
    float u8;
    float u11;
    float u12;
    int t13;

    t0 = GetCollision2D(a5, a5, 5.0f);
    t1 = *(int *)((t0 + 0x1C));
    if (t1 != -1) {
        t2 = *(int *)((t0 + 0x8));
        *(unsigned int *)(((a4 + 0x4) + 0x8)) = t2;
        t3 = *(int *)((t0 + 0x4));
        *(unsigned int *)(((a4 + 0x4) + 0x4)) = t3;
        t4 = *(int *)((t0 + 0x0));
        *(unsigned int *)(((a4 + 0x4) + 0x0)) = t4;
        return CalcShadow4Normal((a4 + 0x14), (t0 + 0xC));
    }
    t5 = *(int *)((a4 + 0x20));
    if (t5 != 2) {
        t10 = t5;
        if (t5 == 4) {
            t6 = *(int *)((a4 + 0x24));
            t9 = t6;
            if (t6 == 2) {
                u7 = *(float *)((a5 + 0x0));
                *(float *)((a4 + 0x4)) = u7;
                u8 = *(float *)((a5 + 0x8));
                *(float *)((a4 + 0xC)) = u8;
                t9 = 0xC;
            }
            t10 = t9;
        }
        t13 = t10;
    } else {
        u11 = *(float *)((a5 + 0x0));
        *(float *)((a4 + 0x4)) = u11;
        u12 = *(float *)((a5 + 0x8));
        *(float *)((a4 + 0xC)) = u12;
        t13 = 0xC;
    }
    return t13;
}

void FUN_0c07250c(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a5 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = t0;
    t1 = *(int *)((a5 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = t1;
    t2 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = t2;
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(unsigned int *)((a4 + 0x20)) = 0xF0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
}

void FUN_0c074690(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;

    t0 = *(int *)0xC2AED38;
    kmCreateVertexBuffer(0xC2AF368, a4, a5, a6, a7);
    kmCreateFrameBufferSurface(0xC2AED44, 0x0, 0x0, 0x0, 0x0);
    kmCreateFrameBufferSurface(0xC2AED6C, 0x0, 0x0, 0x0, 0x0);
    kmActivateFrameBuffer(0xC2AED44, 0xC2AED6C, 0x0, 0x1);
    t5 = *(int *)0xC2AEDC0;
    if (t5 == 0) {
        nlLoadDummyTexture();
        *(unsigned int *)0xC2AEDC0 = 0x1;
    }
}

float nlLdexpf(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u15;
    int stk[2];

    if (f4 == 0.0f) {
        return 0.0f;
    }
    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)((((int)stk + 4) + 0x0));
    if ((int)(a4 + (unsigned char)((int)t0 >> 23)) < (int)0x1) {
        t1 = *(int *)((((int)stk + 4) + 0x0));
        t2 = *(int *)((((int)stk + 4) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = ((t2 & 0x80000000) | (((int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) >= 0) ? (((t1 & 0x7FFFFF) | 0x800000) << ((-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31) ? ((int)((t1 & 0x7FFFFF) | 0x800000) >> (-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((int)((t1 & 0x7FFFFF) | 0x800000) >> 31))));
    } else {
        if ((int)(a4 + (unsigned char)((int)t0 >> 23)) > (int)0xFE) {
            t3 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((t3 & 0x80000000) | 0x7F800000);
        } else {
            t4 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = (t4 & 0x807FFFFF);
            t5 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = (t5 | ((a4 + (unsigned char)((int)t0 >> 23)) << 23));
        }
    }
    u15 = *(float *)(((int)stk + 4));
    return u15;
}

int nlInitPrint(void)
{
    int t0;
    float u1;
    int t2;
    float u4;
    int t6;
    int t8;
    int t10;
    int stk[3];

    *(unsigned int *)0xC2AF0C0 = 0x0;
    *(unsigned int *)0xC2AF0C4 = 0x0;
    *(unsigned int *)0xC2AF0D0 = 0x0;
    *(unsigned int *)0xC2AF108 = 0xFFFFFFFF;
    *(unsigned short *)0xC2AF104 = 0x8;
    *(unsigned int *)0xC2AF0C8 = 0x8;
    *(unsigned int *)0xC2AF0CC = 0x8;
    *(unsigned int *)0xC2AF0BC = 0x0;
    *(float *)0xC2AF10C = 0.0f;
    *(float *)0xC2AF110 = 1.0f;
    *(float *)0xC2AF114 = 0.0078125f;
    t0 = 0x0;
    do {
        u1 = *(float *)0xC2AF114;
        t2 = (t0 << 1);
        u4 = (float)t0;
        t0 = (t0 + 0x1);
        *(float *)(((int)stk + 4)) = (u4 * u1);
        t6 = *(short *)((((int)stk + 4) + 0x2));
        *(unsigned short *)(((t2 + 0xC2AF158) + 0x0)) = t6;
    } while ((int)t0 < (int)0x101);
    kmCreateTextureSurface(0xC2AF130, 0x8, 0x400, 0x902);
    t8 = *(int *)0xC14A7C0;
    kmLoadTexture(0xC2AF130, t8, 0x0, 0x0);
    t10 = FUN_0c076670();
    return t10;
}

void nlPrintf(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int stk[2];

    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    FUN_0c085dfc(0xC2AEEBC, a8, t0);
    nlPuts(0xC2AEEBC);
}

int FUN_0c0775d0(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;

    FUN_0c077590(0xC2B31F4, 0xC2B320C, 0x3);
    FUN_0c077590(0xC2B3200, 0xC2B32CC, 0x3);
    t2 = FUN_0c077590(0xC2B31E8, a4, (a5 + 0x1));
    *(unsigned char *)0xC2B31D8 = 0x1;
    t3 = *(int *)0xC2B31F0;
    *(unsigned int *)0xC2B31E4 = t3;
    t4 = *(int *)0xC2B31EC;
    *(unsigned int *)0xC2B31E0 = t4;
    t5 = *(int *)0xC2B31E8;
    *(unsigned int *)0xC2B31DC = t5;
    return t2;
}

int nlTriPutSetAttribPointNum(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (a5 == 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x54)) = a6;
        t0 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = (t0 | 0x10);
        t1 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t1 & 0xF7);
    } else {
        t2 = (int)((int)a6 / (int)0x3);
        *(unsigned int *)(((0x54 + (a4 + 0x18)) + 0x0)) = t2;
        t3 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = (t3 & 0xEF);
        t4 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t4 | 0x8);
    }
    *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = t5;
    return t5;
}

int nlSpriteGetNextSpriteIndex(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0xC2B76C0;
        t2 = (int)((int)(t1 + 0x1F) / (int)0x20);
        if ((int)t0 >= (int)t2) {
            return 0xFFFFFFFF;
        }
        t3 = *(int *)0xC2B76C4;
        t4 = *(int *)(((t0 << 2) + t3));
        if (t4 != -1) break;
        t0 = (t0 + 0x1);
    }
    t6 = 0x1;
    t7 = 0x0;
    while ((t4 & t6) != 0) {
        t6 = (t6 << 1);
        t7 = (t7 + 0x1);
    }
    t8 = *(int *)0xC2B76C4;
    t9 = *(int *)(((t0 << 2) + t8));
    *(unsigned int *)(((t0 << 2) + t8)) = (t9 | t6);
    return ((((t0 << 2) << 2) << 1) + t7);
}

int nlsndPackLoad(int a4, int a5)
{
    int t0;
    int t23;
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
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = FUN_0c07e8a0(a4, a5);
    t23 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x8));
        t2 = *(int *)((a4 + 0x4));
        t3 = *(int *)(((int)stk + 8));
        t4 = FUN_0c07e960(t3, t2, t1, ((int)stk + 4));
        t5 = 0x0;
        for (;;) {
            t6 = FUN_0c07f5c0(0x18A0);
            if (t6 != 0) {
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x400000) break;
                continue;
            }
            t7 = 0x0;
            for (;;) {
                t8 = *(int *)0xA08000B4;
                if (t8 == 0) {
                    t7 = (t7 + 0x1);
                    if ((int)t7 >= (int)0x400000) break;
                    continue;
                }
                t9 = *(int *)(((int)stk + 4));
                if (t9 != 0) {
                    t10 = *(int *)(((int)stk + 4));
                    t7 = t4;
                    t11 = FUN_0c07e820(t7, (t4 + t1), t10);
                    t7 = t11;
                    if (t11 != 0) {
                        return t7;
                    }
                    t5 = 0x0;
                    for (;;) {
                        t12 = FUN_0c07e880(t7);
                        if (t12 != 0) {
                            t5 = (t5 + 0x1);
                            if ((int)t5 >= (int)0x1000000) break;
                            continue;
                        }
                        t7 = a4;
                        if ((unsigned int)0x0 < (unsigned int)((unsigned int)t1 >> 2)) {
                            t13 = 0x0;
                            t14 = t4;
                            do {
                                t15 = *(int *)((t7 + 0x0));
                                t7 = (t7 + 0x4);
                                *(unsigned int *)((t14 + 0x0)) = t15;
                                t13 = (t13 + 0x1);
                                t14 = (t14 + 0x4);
                            } while ((unsigned int)t13 < (unsigned int)((unsigned int)t1 >> 2));
                            *(unsigned int *)0xA08000B0 = 0x1;
                            t7 = 0x0;
                            if (0x1 != 0) {
                                for (;;) {
                                    t16 = *(int *)0xA08000B4;
                                    if (t16 != 0) {
                                        t7 = (t7 + 0x1);
                                        if ((int)t7 >= (int)0x400000) break;
                                        continue;
                                    }
                                    *(unsigned int *)0xA08000B0 = 0x0;
                                    return 0x0;
                                }
                                return 0xFFFFFF00;
                            }
                            return 0xFFFFFF00;
                        }
                        *(unsigned int *)0xA08000B0 = 0x1;
                        t7 = 0x0;
                        if (0x1 != 0) {
                            for (;;) {
                                t17 = *(int *)0xA08000B4;
                                if (t17 != 0) {
                                    t7 = (t7 + 0x1);
                                    if ((int)t7 >= (int)0x400000) break;
                                    continue;
                                }
                                *(unsigned int *)0xA08000B0 = 0x0;
                                return 0x0;
                            }
                            return 0xFFFFFF00;
                        }
                        return 0xFFFFFF00;
                    }
                    return 0xFFFFFF00;
                }
                t7 = a4;
                if ((unsigned int)0x0 < (unsigned int)((unsigned int)t1 >> 2)) {
                    t18 = 0x0;
                    t19 = t4;
                    do {
                        t20 = *(int *)((t7 + 0x0));
                        t7 = (t7 + 0x4);
                        *(unsigned int *)((t19 + 0x0)) = t20;
                        t18 = (t18 + 0x1);
                        t19 = (t19 + 0x4);
                    } while ((unsigned int)t18 < (unsigned int)((unsigned int)t1 >> 2));
                    *(unsigned int *)0xA08000B0 = 0x1;
                    t7 = 0x0;
                    if (0x1 != 0) {
                        for (;;) {
                            t21 = *(int *)0xA08000B4;
                            if (t21 != 0) {
                                t7 = (t7 + 0x1);
                                if ((int)t7 >= (int)0x400000) break;
                                continue;
                            }
                            *(unsigned int *)0xA08000B0 = 0x0;
                            return 0x0;
                        }
                        return 0xFFFFFF00;
                    }
                    return 0xFFFFFF00;
                }
                *(unsigned int *)0xA08000B0 = 0x1;
                t7 = 0x0;
                if (0x1 != 0) {
                    for (;;) {
                        t22 = *(int *)0xA08000B4;
                        if (t22 != 0) {
                            t7 = (t7 + 0x1);
                            if ((int)t7 >= (int)0x400000) break;
                            continue;
                        }
                        *(unsigned int *)0xA08000B0 = 0x0;
                        return 0x0;
                    }
                    return 0xFFFFFF00;
                }
                return 0xFFFFFF00;
            }
            return 0xFFFFFF00;
        }
        t23 = 0xFFFFFF00;
    }
    return t23;
}

void kmSetColorClampValue(int a4, int a5, int a6, int a7, int a8, int a9)
{
    kmiWriteRegister(0xBC, a8);
    kmiWriteRegister(0xC0, a9);
}

void kmSetFogTableColor(int a4, int a5, int a6, int a7, int a8)
{
    kmiWriteRegister(0xB0, a8);
}

void kmSetFogVertexColor(int a4, int a5, int a6, int a7, int a8)
{
    kmiWriteRegister(0xB4, a8);
}

void kmSetBorderColor(int a4, int a5, int a6, int a7, int a8)
{
    kmiWriteRegister(0x40, a8);
}

int kmiCopyDummyGlobalData(int a4)
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
    int t20;
    int t21;
    int t23;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t37;
    int t43;
    int t44;
    int t46;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t60;
    int t66;
    int t67;
    int t69;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t83;
    int t89;
    int t90;
    int t92;
    int t100;
    int t121;
    int t101;
    int t102;
    int t110;
    int t107;
    int t103;
    int t104;
    int t105;
    int t106;
    int t116;
    int t112;
    int t113;
    int t114;
    int t115;
    int t119;
    int stk[18];

    t0 = *(int *)0xC174CB4;
    t1 = *(int *)0xC174CB0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t0;
    t2 = *(int *)0xC174CBC;
    t3 = *(int *)0xC174CB8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t3;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t2;
    t4 = *(int *)0xC174CC0;
    t5 = *(int *)0xC174CC4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t5;
    t6 = *(int *)0xC174CCC;
    t7 = *(int *)0xC174CC8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t7;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x1C)) = t6;
    t8 = *(int *)0xC2EAAE8;
    if ((t8 & 1) != 0) {
        t9 = *(int *)0xC2EA9C4;
        if (t9 != 0) {
            t10 = *(int *)0xC2EAAA0;
            if (t10 != 32) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t11 = 0xC2B8CCC;
                    do {
                        t12 = *(int *)((t11 + 0x0));
                        FUN_0c15887e(t12, (((int)stk + 4) + 0x4), 0x20);
                        t14 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t14 + 0x1);
                        t11 = (t11 + 0x14);
                    } while ((unsigned int)(t14 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D28 = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t20 = 0xC2B8CCC;
                do {
                    t21 = *(int *)((t20 + 0x0));
                    FUN_0c15887e(t21, (((int)stk + 4) + 0x4), 0x20);
                    t23 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t23 + 0x1);
                    t20 = (t20 + 0x14);
                } while ((unsigned int)(t23 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D28 = 0x8;
        }
    }
    t31 = *(int *)0xC2EAAE8;
    if ((t31 & 2) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x81000000;
        t32 = *(int *)0xC2EA9C4;
        if (t32 != 0) {
            t33 = *(int *)0xC2EAAA0;
            if (t33 != 33) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t34 = 0xC2B8CCC;
                    do {
                        t35 = *(int *)((t34 + 0x4));
                        FUN_0c15887e(t35, (((int)stk + 4) + 0x4), 0x20);
                        t37 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t37 + 0x1);
                        t34 = (t34 + 0x14);
                    } while ((unsigned int)(t37 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D2C = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t43 = 0xC2B8CCC;
                do {
                    t44 = *(int *)((t43 + 0x4));
                    FUN_0c15887e(t44, (((int)stk + 4) + 0x4), 0x20);
                    t46 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t46 + 0x1);
                    t43 = (t43 + 0x14);
                } while ((unsigned int)(t46 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D2C = 0x8;
        }
    }
    t54 = *(int *)0xC2EAAE8;
    if ((t54 & 4) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x82000000;
        t55 = *(int *)0xC2EA9C4;
        if (t55 != 0) {
            t56 = *(int *)0xC2EAAA0;
            if (t56 != 34) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t57 = 0xC2B8CCC;
                    do {
                        t58 = *(int *)((t57 + 0x8));
                        FUN_0c15887e(t58, (((int)stk + 4) + 0x4), 0x20);
                        t60 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t60 + 0x1);
                        t57 = (t57 + 0x14);
                    } while ((unsigned int)(t60 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D30 = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t66 = 0xC2B8CCC;
                do {
                    t67 = *(int *)((t66 + 0x8));
                    FUN_0c15887e(t67, (((int)stk + 4) + 0x4), 0x20);
                    t69 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t69 + 0x1);
                    t66 = (t66 + 0x14);
                } while ((unsigned int)(t69 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D30 = 0x8;
        }
    }
    t77 = *(int *)0xC2EAAE8;
    if ((t77 & 0x8) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x83000000;
        t78 = *(int *)0xC2EA9C4;
        if (t78 != 0) {
            t79 = *(int *)0xC2EAAA0;
            if (t79 != 35) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t80 = 0xC2B8CCC;
                    do {
                        t81 = *(int *)((t80 + 0xC));
                        FUN_0c15887e(t81, (((int)stk + 4) + 0x4), 0x20);
                        t83 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t83 + 0x1);
                        t80 = (t80 + 0x14);
                    } while ((unsigned int)(t83 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D34 = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t89 = 0xC2B8CCC;
                do {
                    t90 = *(int *)((t89 + 0xC));
                    FUN_0c15887e(t90, (((int)stk + 4) + 0x4), 0x20);
                    t92 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t92 + 0x1);
                    t89 = (t89 + 0x14);
                } while ((unsigned int)(t92 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D34 = 0x8;
        }
    }
    t100 = *(int *)0xC2EAAE8;
    t121 = t100;
    if ((t100 & 16) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x84000000;
        t101 = *(int *)0xC2EA9C4;
        if (t101 != 0) {
            t102 = *(int *)0xC2EAAA0;
            t110 = t102;
            if (t102 != 36) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t107 = t102;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t103 = 0xC2B8CCC;
                    do {
                        t104 = *(int *)((t103 + 0x10));
                        t105 = FUN_0c15887e(t104, (((int)stk + 4) + 0x4), 0x20);
                        t106 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t106 + 0x1);
                        t103 = (t103 + 0x14);
                    } while ((unsigned int)(t106 + 0x1) < (unsigned int)a4);
                    t107 = t105;
                }
                *(unsigned int *)0xC2B8D38 = 0x8;
                t110 = t107;
            }
            t119 = t110;
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t116 = 0xC2EA9C4;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t112 = 0xC2B8CCC;
                do {
                    t113 = *(int *)((t112 + 0x10));
                    t114 = FUN_0c15887e(t113, (((int)stk + 4) + 0x4), 0x20);
                    t115 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t115 + 0x1);
                    t112 = (t112 + 0x14);
                } while ((unsigned int)(t115 + 0x1) < (unsigned int)a4);
                t116 = t114;
            }
            *(unsigned int *)0xC2B8D38 = 0x8;
            t119 = t116;
        }
        t121 = t119;
    }
    return t121;
}

int kmiGetNativeRegOBPSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t11;
    int t7;
    int t8;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int stk[8];

    t0 = *(int *)0xC174CD0;
    t1 = *(int *)0xC174CD4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t0;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t1;
    t2 = *(int *)0xC174CD8;
    t3 = *(int *)0xC174CDC;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t3;
    *(unsigned int *)(((int)stk + 8)) = (((unsigned int)((unsigned int)a4 >> 16) >> 1) & 0x3);
    *(unsigned int *)(((int)stk + 4)) = (((unsigned int)a4 >> 21) & 0x3);
    *(unsigned int *)(((int)stk + 12)) = (((unsigned int)a4 >> 23) & 0x3);
    t4 = *(int *)0xC2EAAE0;
    t5 = *(int *)0xC2EAADC;
    t6 = *(int *)0xC2EA684;
    t11 = (t5 * t4);
    if ((t6 & 32) != 0) {
        t7 = *(int *)0xC2EAAE4;
        t8 = ((t5 * t4) + (t5 * t4));
        if (t7 != 0) {
            t8 = ((t5 * t4) << 2);
        }
        t11 = t8;
    }
    t12 = *(int *)(((int)stk + 8));
    t13 = *(int *)(((((int)stk + 4) + 0xC) + (t12 << 2)));
    t14 = *(int *)(((((int)stk + 4) + 0xC) + ((((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 2) >> 1) & 0x3) << 2)));
    t15 = *(int *)(((int)stk + 4));
    t16 = *(int *)(((((int)stk + 4) + 0xC) + (t15 << 2)));
    t17 = *(int *)(((int)stk + 12));
    t18 = *(int *)(((((int)stk + 4) + 0xC) + (t17 << 2)));
    t19 = *(int *)(((((int)stk + 4) + 0xC) + ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2)));
    *(unsigned int *)0xC2B8CA4 = (((((((t13 + t14) + t16) + t18) + t19) << 2) + 0x18) * t11);
    return ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2);
}

int kmiAllocSysConfig(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t255;
    int t6;
    int t7;
    int t8;
    int t129;
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
    int t28;
    int t29;
    int t30;
    int t33;
    int t35;
    int t37;
    int t39;
    int t41;
    int t45;
    int t46;
    int t47;
    int t48;
    int t51;
    int t53;
    int t55;
    int t57;
    int t59;
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
    int t76;
    int t78;
    int t80;
    int t82;
    int t84;
    int t88;
    int t95;
    int t96;
    int t97;
    int t100;
    int t102;
    int t104;
    int t106;
    int t108;
    int t112;
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
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t156;
    int t158;
    int t160;
    int t162;
    int t164;
    int t168;
    int t169;
    int t170;
    int t171;
    int t174;
    int t176;
    int t178;
    int t180;
    int t182;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t199;
    int t201;
    int t203;
    int t205;
    int t207;
    int t211;
    int t218;
    int t219;
    int t220;
    int t223;
    int t225;
    int t227;
    int t229;
    int t231;
    int t235;
    int t258;
    int t259;
    int t260;
    int t381;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t281;
    int t282;
    int t285;
    int t287;
    int t289;
    int t291;
    int t293;
    int t297;
    int t298;
    int t299;
    int t300;
    int t303;
    int t305;
    int t307;
    int t309;
    int t311;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t321;
    int t322;
    int t323;
    int t324;
    int t325;
    int t328;
    int t330;
    int t332;
    int t334;
    int t336;
    int t340;
    int t347;
    int t348;
    int t349;
    int t352;
    int t354;
    int t356;
    int t358;
    int t360;
    int t364;
    int t384;
    int t385;
    int t386;
    int t387;
    int t388;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    int t396;
    int t397;
    int t398;
    int t399;
    int t400;
    int t401;
    int t402;
    int t403;
    int t404;
    int t405;
    int t408;
    int t410;
    int t412;
    int t414;
    int t416;
    int t420;
    int t421;
    int t422;
    int t423;
    int t426;
    int t428;
    int t430;
    int t432;
    int t434;
    int t438;
    int t439;
    int t440;
    int t441;
    int t442;
    int t443;
    int t444;
    int t445;
    int t446;
    int t447;
    int t448;
    int t451;
    int t453;
    int t455;
    int t457;
    int t459;
    int t463;
    int t470;
    int t471;
    int t472;
    int t475;
    int t477;
    int t479;
    int t481;
    int t483;
    int t487;
    int t507;
    int t252;
    int t123;
    int t246;
    int t504;
    int t375;
    int t498;

    if (a4 == 1) {
        t0 = *(int *)0xC2B8C50;
        t1 = *(int *)0xC2B8C44;
        t2 = *(int *)0xC2B8C48;
        t3 = *(int *)0xC2B8C4C;
        t4 = *(int *)0xC2B8C40;
        t5 = kmCreateVertexBuffer(t4, t1, t2, t3, t0);
        t255 = t5;
        if (t5 == 0) {
            if (a4 == 2) {
                t6 = *(int *)0xC2B8C98;
                t7 = *(int *)0xC2B8C40;
                t8 = kmCreateTABuffer(t7, t6);
                t129 = t8;
                if (t8 == 0) {
                    t9 = *(int *)0xC2B8C5C;
                    t10 = *(int *)0xC2B8C6C;
                    t11 = 0x2;
                    if (t9 == t10) {
                        t11 = 0x1;
                    }
                    if ((unsigned int)0x0 < (unsigned int)t11) {
                        t12 = 0x0;
                        t13 = 0x0;
                        for (;;) {
                            t14 = *(int *)(((0xC2B8C5C + t13) + 0xC));
                            t15 = *(int *)(((0xC2B8C5C + t13) + 0x8));
                            t16 = *(int *)(((0xC2B8C5C + t13) + 0x4));
                            t17 = *(int *)0xC2B8C58;
                            t18 = *(int *)(((0xC2B8C5C + t13) + 0x0));
                            t19 = kmCreateFrameBufferSurface(t18, t16, t15, t17, t14);
                            if (t19 != 0) break;
                            t12 = (t12 + 0x1);
                            t13 = (t13 + 0x10);
                            if ((unsigned int)t12 >= (unsigned int)t11) {
                                t21 = *(int *)0xC2B8C84;
                                t22 = *(int *)0xC2B8C80;
                                t23 = *(int *)0xC2B8C58;
                                t24 = *(int *)0xC2B8C7C;
                                t25 = kmActivateFrameBuffer(t24, t22, t23, t21);
                                if (t25 == 0) {
                                    t26 = *(int *)0xC2EA9C4;
                                    if (t26 != 1) {
                                        t27 = *(int *)0xC177A88;
                                        if (t27 == 1) {
                                            t28 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)0xC2EA9E4 = t28;
                                            t29 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((t29 << 2) + 0xC2EA9CC)) = 0x0;
                                            *(unsigned int *)0xC2EA9F4 = 0x1;
                                            t30 = *(int *)0xC2EA9DC;
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            t13 = (0x1 & t30);
                                            t13 = (t13 << 2);
                                            t13 = (t13 << 2);
                                            t13 = (t13 << 1);
                                            t33 = *(int *)((t13 + 0xC2EAAF8));
                                            kmiWriteRegister(0x124, t33);
                                            t35 = *(int *)((t13 + 0xC2EAAFC));
                                            kmiWriteRegister(0x12C, t35);
                                            t37 = *(int *)((t13 + 0xC2EAB04));
                                            kmiWriteRegister(0x128, t37);
                                            t39 = *(int *)((t13 + 0xC2EAB08));
                                            kmiWriteRegister(0x130, t39);
                                            t41 = *(int *)((t13 + 0xC2EAB00));
                                            kmiWriteRegister(0x164, t41);
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC2EA9EC = 0x0;
                                            t45 = *(int *)0xC2EAAE8;
                                            *(unsigned int *)0xC2EA9E8 = t45;
                                            return t25;
                                        }
                                        return t25;
                                    }
                                    t46 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t46;
                                    t47 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t47 << 2) + 0xC2EA9CC)) = 0x0;
                                    *(unsigned int *)0xC2EA9F4 = 0x1;
                                    t48 = *(int *)0xC2EA9DC;
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t13 = (0x1 & t48);
                                    t13 = (t13 << 2);
                                    t13 = (t13 << 2);
                                    t13 = (t13 << 1);
                                    t51 = *(int *)((t13 + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t51);
                                    t53 = *(int *)((t13 + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t53);
                                    t55 = *(int *)((t13 + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t55);
                                    t57 = *(int *)((t13 + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t57);
                                    t59 = *(int *)((t13 + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t59);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t63 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t63;
                                    return t25;
                                }
                                return t25;
                            }
                        }
                        t123 = t19;
                    } else {
                        t64 = *(int *)0xC2B8C84;
                        t65 = *(int *)0xC2B8C80;
                        t66 = *(int *)0xC2B8C58;
                        t67 = *(int *)0xC2B8C7C;
                        t68 = kmActivateFrameBuffer(t67, t65, t66, t64);
                        if (t68 == 0) {
                            t69 = *(int *)0xC2EA9C4;
                            if (t69 != 1) {
                                t70 = *(int *)0xC177A88;
                                if (t70 == 1) {
                                    t71 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t71;
                                    t72 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t72 << 2) + 0xC2EA9CC)) = 0x0;
                                    *(unsigned int *)0xC2EA9F4 = 0x1;
                                    t73 = *(int *)0xC2EA9DC;
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t76 = *(int *)((((((0x1 & t73) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t76);
                                    t78 = *(int *)((((((0x1 & t73) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t78);
                                    t80 = *(int *)((((((0x1 & t73) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t80);
                                    t82 = *(int *)((((((0x1 & t73) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t82);
                                    t84 = *(int *)((((((0x1 & t73) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t84);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t88 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t88;
                                }
                            } else {
                                t95 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t95;
                                t96 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t96 << 2) + 0xC2EA9CC)) = 0x0;
                                *(unsigned int *)0xC2EA9F4 = 0x1;
                                t97 = *(int *)0xC2EA9DC;
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t100 = *(int *)((((((0x1 & t97) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t100);
                                t102 = *(int *)((((((0x1 & t97) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t102);
                                t104 = *(int *)((((((0x1 & t97) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t104);
                                t106 = *(int *)((((((0x1 & t97) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t106);
                                t108 = *(int *)((((((0x1 & t97) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t108);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t112 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t112;
                            }
                        }
                        t123 = t68;
                    }
                    t129 = t123;
                }
                t252 = t129;
            } else {
                t132 = *(int *)0xC2B8C5C;
                t133 = *(int *)0xC2B8C6C;
                t134 = 0x2;
                if (t132 == t133) {
                    t134 = 0x1;
                }
                if ((unsigned int)0x0 < (unsigned int)t134) {
                    t135 = 0x0;
                    t136 = 0x0;
                    for (;;) {
                        t137 = *(int *)(((0xC2B8C5C + t136) + 0xC));
                        t138 = *(int *)(((0xC2B8C5C + t136) + 0x8));
                        t139 = *(int *)(((0xC2B8C5C + t136) + 0x4));
                        t140 = *(int *)0xC2B8C58;
                        t141 = *(int *)(((0xC2B8C5C + t136) + 0x0));
                        t142 = kmCreateFrameBufferSurface(t141, t139, t138, t140, t137);
                        if (t142 != 0) break;
                        t135 = (t135 + 0x1);
                        t136 = (t136 + 0x10);
                        if ((unsigned int)t135 >= (unsigned int)t134) {
                            t144 = *(int *)0xC2B8C84;
                            t145 = *(int *)0xC2B8C80;
                            t146 = *(int *)0xC2B8C58;
                            t147 = *(int *)0xC2B8C7C;
                            t148 = kmActivateFrameBuffer(t147, t145, t146, t144);
                            if (t148 == 0) {
                                t149 = *(int *)0xC2EA9C4;
                                if (t149 != 1) {
                                    t150 = *(int *)0xC177A88;
                                    if (t150 == 1) {
                                        t151 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t151;
                                        t152 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t152 << 2) + 0xC2EA9CC)) = 0x0;
                                        *(unsigned int *)0xC2EA9F4 = 0x1;
                                        t153 = *(int *)0xC2EA9DC;
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t136 = (0x1 & t153);
                                        t136 = (t136 << 2);
                                        t136 = (t136 << 2);
                                        t136 = (t136 << 1);
                                        t156 = *(int *)((t136 + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t156);
                                        t158 = *(int *)((t136 + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t158);
                                        t160 = *(int *)((t136 + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t160);
                                        t162 = *(int *)((t136 + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t162);
                                        t164 = *(int *)((t136 + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t164);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t168 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t168;
                                        return t148;
                                    }
                                    return t148;
                                }
                                t169 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t169;
                                t170 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t170 << 2) + 0xC2EA9CC)) = 0x0;
                                *(unsigned int *)0xC2EA9F4 = 0x1;
                                t171 = *(int *)0xC2EA9DC;
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t136 = (0x1 & t171);
                                t136 = (t136 << 2);
                                t136 = (t136 << 2);
                                t136 = (t136 << 1);
                                t174 = *(int *)((t136 + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t174);
                                t176 = *(int *)((t136 + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t176);
                                t178 = *(int *)((t136 + 0xC2EAB04));
                                kmiWriteRegister(0x128, t178);
                                t180 = *(int *)((t136 + 0xC2EAB08));
                                kmiWriteRegister(0x130, t180);
                                t182 = *(int *)((t136 + 0xC2EAB00));
                                kmiWriteRegister(0x164, t182);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t186 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t186;
                                return t148;
                            }
                            return t148;
                        }
                    }
                    t246 = t142;
                } else {
                    t187 = *(int *)0xC2B8C84;
                    t188 = *(int *)0xC2B8C80;
                    t189 = *(int *)0xC2B8C58;
                    t190 = *(int *)0xC2B8C7C;
                    t191 = kmActivateFrameBuffer(t190, t188, t189, t187);
                    if (t191 == 0) {
                        t192 = *(int *)0xC2EA9C4;
                        if (t192 != 1) {
                            t193 = *(int *)0xC177A88;
                            if (t193 == 1) {
                                t194 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t194;
                                t195 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t195 << 2) + 0xC2EA9CC)) = 0x0;
                                *(unsigned int *)0xC2EA9F4 = 0x1;
                                t196 = *(int *)0xC2EA9DC;
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t199 = *(int *)((((((0x1 & t196) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t199);
                                t201 = *(int *)((((((0x1 & t196) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t201);
                                t203 = *(int *)((((((0x1 & t196) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t203);
                                t205 = *(int *)((((((0x1 & t196) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t205);
                                t207 = *(int *)((((((0x1 & t196) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t207);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t211 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t211;
                            }
                        } else {
                            t218 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t218;
                            t219 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t219 << 2) + 0xC2EA9CC)) = 0x0;
                            *(unsigned int *)0xC2EA9F4 = 0x1;
                            t220 = *(int *)0xC2EA9DC;
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t223 = *(int *)((((((0x1 & t220) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t223);
                            t225 = *(int *)((((((0x1 & t220) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t225);
                            t227 = *(int *)((((((0x1 & t220) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t227);
                            t229 = *(int *)((((((0x1 & t220) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t229);
                            t231 = *(int *)((((((0x1 & t220) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t231);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t235 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t235;
                        }
                    }
                    t246 = t191;
                }
                t252 = t246;
            }
            t255 = t252;
        }
        t507 = t255;
    } else {
        if (a4 == 2) {
            t258 = *(int *)0xC2B8C98;
            t259 = *(int *)0xC2B8C40;
            t260 = kmCreateTABuffer(t259, t258);
            t381 = t260;
            if (t260 == 0) {
                t261 = *(int *)0xC2B8C5C;
                t262 = *(int *)0xC2B8C6C;
                t263 = 0x2;
                if (t261 == t262) {
                    t263 = 0x1;
                }
                if ((unsigned int)0x0 < (unsigned int)t263) {
                    t264 = 0x0;
                    t265 = 0x0;
                    for (;;) {
                        t266 = *(int *)(((0xC2B8C5C + t265) + 0xC));
                        t267 = *(int *)(((0xC2B8C5C + t265) + 0x8));
                        t268 = *(int *)(((0xC2B8C5C + t265) + 0x4));
                        t269 = *(int *)0xC2B8C58;
                        t270 = *(int *)(((0xC2B8C5C + t265) + 0x0));
                        t271 = kmCreateFrameBufferSurface(t270, t268, t267, t269, t266);
                        if (t271 != 0) break;
                        t264 = (t264 + 0x1);
                        t265 = (t265 + 0x10);
                        if ((unsigned int)t264 >= (unsigned int)t263) {
                            t273 = *(int *)0xC2B8C84;
                            t274 = *(int *)0xC2B8C80;
                            t275 = *(int *)0xC2B8C58;
                            t276 = *(int *)0xC2B8C7C;
                            t277 = kmActivateFrameBuffer(t276, t274, t275, t273);
                            if (t277 == 0) {
                                t278 = *(int *)0xC2EA9C4;
                                if (t278 != 1) {
                                    t279 = *(int *)0xC177A88;
                                    if (t279 == 1) {
                                        t280 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t280;
                                        t281 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t281 << 2) + 0xC2EA9CC)) = 0x0;
                                        *(unsigned int *)0xC2EA9F4 = 0x1;
                                        t282 = *(int *)0xC2EA9DC;
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t265 = (0x1 & t282);
                                        t265 = (t265 << 2);
                                        t265 = (t265 << 2);
                                        t265 = (t265 << 1);
                                        t285 = *(int *)((t265 + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t285);
                                        t287 = *(int *)((t265 + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t287);
                                        t289 = *(int *)((t265 + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t289);
                                        t291 = *(int *)((t265 + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t291);
                                        t293 = *(int *)((t265 + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t293);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t297 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t297;
                                        return t277;
                                    }
                                    return t277;
                                }
                                t298 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t298;
                                t299 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t299 << 2) + 0xC2EA9CC)) = 0x0;
                                *(unsigned int *)0xC2EA9F4 = 0x1;
                                t300 = *(int *)0xC2EA9DC;
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t265 = (0x1 & t300);
                                t265 = (t265 << 2);
                                t265 = (t265 << 2);
                                t265 = (t265 << 1);
                                t303 = *(int *)((t265 + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t303);
                                t305 = *(int *)((t265 + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t305);
                                t307 = *(int *)((t265 + 0xC2EAB04));
                                kmiWriteRegister(0x128, t307);
                                t309 = *(int *)((t265 + 0xC2EAB08));
                                kmiWriteRegister(0x130, t309);
                                t311 = *(int *)((t265 + 0xC2EAB00));
                                kmiWriteRegister(0x164, t311);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t315 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t315;
                                return t277;
                            }
                            return t277;
                        }
                    }
                    t375 = t271;
                } else {
                    t316 = *(int *)0xC2B8C84;
                    t317 = *(int *)0xC2B8C80;
                    t318 = *(int *)0xC2B8C58;
                    t319 = *(int *)0xC2B8C7C;
                    t320 = kmActivateFrameBuffer(t319, t317, t318, t316);
                    if (t320 == 0) {
                        t321 = *(int *)0xC2EA9C4;
                        if (t321 != 1) {
                            t322 = *(int *)0xC177A88;
                            if (t322 == 1) {
                                t323 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t323;
                                t324 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t324 << 2) + 0xC2EA9CC)) = 0x0;
                                *(unsigned int *)0xC2EA9F4 = 0x1;
                                t325 = *(int *)0xC2EA9DC;
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t328 = *(int *)((((((0x1 & t325) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t328);
                                t330 = *(int *)((((((0x1 & t325) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t330);
                                t332 = *(int *)((((((0x1 & t325) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t332);
                                t334 = *(int *)((((((0x1 & t325) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t334);
                                t336 = *(int *)((((((0x1 & t325) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t336);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t340 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t340;
                            }
                        } else {
                            t347 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t347;
                            t348 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t348 << 2) + 0xC2EA9CC)) = 0x0;
                            *(unsigned int *)0xC2EA9F4 = 0x1;
                            t349 = *(int *)0xC2EA9DC;
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t352 = *(int *)((((((0x1 & t349) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t352);
                            t354 = *(int *)((((((0x1 & t349) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t354);
                            t356 = *(int *)((((((0x1 & t349) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t356);
                            t358 = *(int *)((((((0x1 & t349) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t358);
                            t360 = *(int *)((((((0x1 & t349) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t360);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t364 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t364;
                        }
                    }
                    t375 = t320;
                }
                t381 = t375;
            }
            t504 = t381;
        } else {
            t384 = *(int *)0xC2B8C5C;
            t385 = *(int *)0xC2B8C6C;
            t386 = 0x2;
            if (t384 == t385) {
                t386 = 0x1;
            }
            if ((unsigned int)0x0 < (unsigned int)t386) {
                t387 = 0x0;
                t388 = 0x0;
                for (;;) {
                    t389 = *(int *)(((0xC2B8C5C + t388) + 0xC));
                    t390 = *(int *)(((0xC2B8C5C + t388) + 0x8));
                    t391 = *(int *)(((0xC2B8C5C + t388) + 0x4));
                    t392 = *(int *)0xC2B8C58;
                    t393 = *(int *)(((0xC2B8C5C + t388) + 0x0));
                    t394 = kmCreateFrameBufferSurface(t393, t391, t390, t392, t389);
                    if (t394 != 0) break;
                    t387 = (t387 + 0x1);
                    t388 = (t388 + 0x10);
                    if ((unsigned int)t387 >= (unsigned int)t386) {
                        t396 = *(int *)0xC2B8C84;
                        t397 = *(int *)0xC2B8C80;
                        t398 = *(int *)0xC2B8C58;
                        t399 = *(int *)0xC2B8C7C;
                        t400 = kmActivateFrameBuffer(t399, t397, t398, t396);
                        if (t400 == 0) {
                            t401 = *(int *)0xC2EA9C4;
                            if (t401 != 1) {
                                t402 = *(int *)0xC177A88;
                                if (t402 == 1) {
                                    t403 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t403;
                                    t404 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t404 << 2) + 0xC2EA9CC)) = 0x0;
                                    *(unsigned int *)0xC2EA9F4 = 0x1;
                                    t405 = *(int *)0xC2EA9DC;
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t388 = (0x1 & t405);
                                    t388 = (t388 << 2);
                                    t388 = (t388 << 2);
                                    t388 = (t388 << 1);
                                    t408 = *(int *)((t388 + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t408);
                                    t410 = *(int *)((t388 + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t410);
                                    t412 = *(int *)((t388 + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t412);
                                    t414 = *(int *)((t388 + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t414);
                                    t416 = *(int *)((t388 + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t416);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t420 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t420;
                                    return t400;
                                }
                                return t400;
                            }
                            t421 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t421;
                            t422 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t422 << 2) + 0xC2EA9CC)) = 0x0;
                            *(unsigned int *)0xC2EA9F4 = 0x1;
                            t423 = *(int *)0xC2EA9DC;
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t388 = (0x1 & t423);
                            t388 = (t388 << 2);
                            t388 = (t388 << 2);
                            t388 = (t388 << 1);
                            t426 = *(int *)((t388 + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t426);
                            t428 = *(int *)((t388 + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t428);
                            t430 = *(int *)((t388 + 0xC2EAB04));
                            kmiWriteRegister(0x128, t430);
                            t432 = *(int *)((t388 + 0xC2EAB08));
                            kmiWriteRegister(0x130, t432);
                            t434 = *(int *)((t388 + 0xC2EAB00));
                            kmiWriteRegister(0x164, t434);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t438 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t438;
                            return t400;
                        }
                        return t400;
                    }
                }
                t498 = t394;
            } else {
                t439 = *(int *)0xC2B8C84;
                t440 = *(int *)0xC2B8C80;
                t441 = *(int *)0xC2B8C58;
                t442 = *(int *)0xC2B8C7C;
                t443 = kmActivateFrameBuffer(t442, t440, t441, t439);
                if (t443 == 0) {
                    t444 = *(int *)0xC2EA9C4;
                    if (t444 != 1) {
                        t445 = *(int *)0xC177A88;
                        if (t445 == 1) {
                            t446 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t446;
                            t447 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t447 << 2) + 0xC2EA9CC)) = 0x0;
                            *(unsigned int *)0xC2EA9F4 = 0x1;
                            t448 = *(int *)0xC2EA9DC;
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t451 = *(int *)((((((0x1 & t448) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t451);
                            t453 = *(int *)((((((0x1 & t448) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t453);
                            t455 = *(int *)((((((0x1 & t448) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t455);
                            t457 = *(int *)((((((0x1 & t448) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t457);
                            t459 = *(int *)((((((0x1 & t448) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t459);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t463 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t463;
                        }
                    } else {
                        t470 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t470;
                        t471 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t471 << 2) + 0xC2EA9CC)) = 0x0;
                        *(unsigned int *)0xC2EA9F4 = 0x1;
                        t472 = *(int *)0xC2EA9DC;
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t475 = *(int *)((((((0x1 & t472) << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t475);
                        t477 = *(int *)((((((0x1 & t472) << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t477);
                        t479 = *(int *)((((((0x1 & t472) << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t479);
                        t481 = *(int *)((((((0x1 & t472) << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t481);
                        t483 = *(int *)((((((0x1 & t472) << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t483);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t487 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t487;
                    }
                }
                t498 = t443;
            }
            t504 = t498;
        }
        t507 = t504;
    }
    return t507;
}

int buDefragDisk(int a4, int a5)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4, a5);
    t3 = 0xFFFFFFFF;
    if (t0 == 0) {
        vmsfs_c_setfunc(a4, 0x9);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int pdVibSetStopTime(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t21;
    int t8;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int t20;
    int stk[16];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 24));
    t1 = pdVibIsReady(t0, a5, a6, a7);
    t21 = 0xFFFFFFFE;
    if (t1 != 0) {
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x0)) = 0x0;
        t8 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t2 = 0x0;
            t3 = 0x0;
            do {
                t4 = *(int *)(((int)stk + 20));
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = (t4 + 0x1);
                t5 = *(signed char *)((((t4 + 0x1) - 1) + 0x0));
                t2 = (t2 | (((int)(unsigned char)t5 >= 0) ? (0x1 << ((unsigned char)t5 & 31)) : ((-(int)(unsigned char)t5 & 31) ? ((int)0x1 >> (-(int)(unsigned char)t5 & 31)) : ((int)0x1 >> 31))));
            } while ((unsigned int)t3 < (unsigned int)a7);
            t8 = t2;
        }
        *(unsigned char *)(((((int)stk + 16) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t8 >> 8);
        *(unsigned char *)((((((int)stk + 16) + 0xC) + 0x1) + 0x0)) = t8;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t10 = 0x0;
            t11 = (((((int)stk + 16) + 0xC) + 0x1) + 0x1);
            do {
                t12 = *(int *)(((int)stk + 16));
                t10 = (t10 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t12 + 0x1);
                t13 = *(signed char *)((((t12 + 0x1) - 1) + 0x0));
                *(unsigned char *)((t11 + 0x0)) = t13;
                t11 = (t11 + 0x1);
            } while ((unsigned int)t10 < (unsigned int)a7);
        }
        *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(a7 + 0x5) >> 2);
        t18 = *(int *)(((int)stk + 24));
        t19 = kdSetBlockWrite(t18, 0x100, 0x0, 0x0, 0x0, (((int)stk + 16) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t20 = 0x0;
        if ((int)t19 < 0) {
            t20 = 0xFFFFFFFF;
        }
        t21 = t20;
    }
    return t21;
}

int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t30;
    int t1;
    int t25;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    int t15;
    int t18;
    int t19;
    int t20;
    int t16;
    int t12;

    t0 = *(int *)((a7 + 0x0));
    t30 = 0xFFFFFFFE;
    if ((t0 & 0x100) != 0) {
        t1 = *(signed char *)((a6 + 0x4));
        t25 = 0xFFFFFFFE;
        if ((unsigned char)t1 == 8) {
            t2 = *(int *)((a6 + 0x8));
            if (a9 != 0) {
                t3 = *(signed char *)(((t2 + 0x8) + 0x0));
                *(unsigned int *)((a9 + 0x0)) = (((unsigned int)((unsigned int)(unsigned char)t3 >> 2) >> 2) & 0xF);
            }
            t5 = *(signed char *)(((t2 + 0x8) + 0x1));
            t6 = *(signed char *)(((t2 + 0x8) + 0x0));
            *(unsigned char *)((a8 + 0x0)) = (((unsigned int)(unsigned char)t6 >> 2) & 0x3);
            t7 = *(signed char *)(((t2 + 0x8) + 0x0));
            *(unsigned char *)((a8 + 0x1)) = (t7 & 0x3);
            t8 = 0x0;
            if ((0x80 & (unsigned char)t5) != 0) {
                t8 = 0x1;
            }
            *(unsigned char *)((a8 + 0x2)) = t8;
            t9 = 0x0;
            if ((0x40 & (unsigned char)t5) != 0) {
                t9 = 0x1;
            }
            *(unsigned char *)((a8 + 0x3)) = t9;
            t10 = 0x0;
            if ((0x20 & (unsigned char)t5) != 0) {
                t10 = 0x1;
            }
            *(unsigned char *)((a8 + 0x4)) = t10;
            t11 = 0x0;
            if ((0x10 & (unsigned char)t5) != 0) {
                t11 = 0x1;
            }
            *(unsigned char *)((a8 + 0x5)) = t11;
            if ((0xF & (unsigned char)t5) != 0) {
                if ((0xF & (unsigned char)t5) != 1) {
                    if ((0xF & (unsigned char)t5) != 15) {
                        *(unsigned char *)((a8 + 0x6)) = 0xFF;
                        t12 = 0xFF;
                    } else {
                        *(unsigned char *)((a8 + 0x6)) = 0x0;
                        t12 = 0x0;
                    }
                    t16 = t12;
                } else {
                    t14 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                    *(unsigned char *)((a8 + 0x6)) = t14;
                    t15 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                    t16 = t15;
                }
                t20 = t16;
            } else {
                t18 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                *(unsigned char *)((a8 + 0x6)) = t18;
                t19 = *(signed char *)(((t2 + 0x8) + 0x3));
                t20 = t19;
            }
            *(unsigned char *)((a8 + 0x7)) = t20;
            t25 = 0x0;
        }
        t30 = t25;
    }
    return t30;
}

void ADXT_GetTime(int a4, int a5, int a6)
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
    int t11;
    int t15;
    int t18;
    int t19;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 3) {
        if (t0 == 4) {
            t1 = *(int *)((a4 + 0xC));
            ADXRNA_GetTime(t1, a5, a6);
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            if (t3 == 5) {
                t4 = *(int *)((a4 + 0x4));
                t5 = FUN_0c16887a(t4, a5, a6);
                *(unsigned int *)((a5 + 0x0)) = t5;
                t6 = *(int *)((a4 + 0x4));
                t7 = FUN_0c16883e(t6);
                *(unsigned int *)((a6 + 0x0)) = t7;
                t8 = *(int *)((a4 + 0x4));
                t9 = FUN_0c168856(t8);
                t10 = (int)((int)0x10 / (int)t9);
                t11 = *(int *)((a5 + 0x0));
                *(unsigned int *)((a5 + 0x0)) = (t11 * t10);
            } else {
                *(unsigned int *)((a5 + 0x0)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = 0x1;
            }
        }
    } else {
        t15 = *(int *)((a4 + 0xC));
        ADXRNA_GetTime(t15, a5, a6);
    }
    t18 = *(int *)((a5 + 0x0));
    t19 = *(int *)((a4 + 0x88));
    *(unsigned int *)((a5 + 0x0)) = (t18 + t19);
}

int ADXF_Open(int a4, int a5)
{
    int t2;
    int t8;
    int t3;
    int t6;

    adxf_SetCmdHstry(0x1, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetFileInfo(t2, a4);
        t6 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t6 = 0x0;
        }
        t8 = t6;
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x1, 0x1, a4, a5, 0xFFFFFFFF);
    return t8;
}

int ADXF_OpenAfs(int a4, int a5)
{
    int t2;
    int t8;
    int t3;
    int t6;

    adxf_SetCmdHstry(0x2, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetAfsFileInfo(t2, a4, a5);
        t6 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t6 = 0x0;
        }
        t8 = t6;
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x2, 0x1, a4, a5, 0xFFFFFFFF);
    return t8;
}

int adxf_ExecOne(int a4)
{
    int t0;
    int t15;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t10;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int stk[4];

    t0 = *(signed char *)((a4 + 0x1));
    t15 = t0;
    if (t0 == 2) {
        t1 = *(int *)((a4 + 0x4));
        t2 = FUN_0c168e10(t1);
        *(unsigned char *)((a4 + 0x1)) = t2;
        t3 = *(int *)((a4 + 0x4));
        ADXSTM_GetCurOfst(t3, ((int)stk + 4));
        t5 = *(int *)(((int)stk + 4));
        *(unsigned int *)((a4 + 0x24)) = t5;
        t6 = *(signed char *)((a4 + 0x1));
        if (t6 != 3) {
            t10 = t6;
            if (t6 == 4) {
                t7 = *(int *)((a4 + 0x18));
                t8 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x18)) = (t7 + t8);
                t9 = adxf_CloseSjStm(a4);
                t10 = t9;
            }
            t14 = t10;
        } else {
            t11 = *(int *)((a4 + 0x18));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x18)) = (t11 + t12);
            t13 = adxf_CloseSjStm(a4);
            t14 = t13;
        }
        t15 = t14;
    }
    return t15;
}

void kmiProcessVertex_04(int a4)
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
    int t50;
    int t51;
    int stk[10];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = FUN_0c1534fc(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    t16 = *(int *)((t15 + 0x18));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = t16;
    t17 = *(int *)((((int)stk + 4) + 0x0));
    t18 = *(int *)((t17 + 0x1C));
    t19 = FUN_0c1534e8(t3, (t14 + 0x1), t18);
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = FUN_0c1534fc(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = t30;
    t31 = *(int *)((((int)stk + 4) + 0x0));
    t32 = *(int *)((t31 + 0x1C));
    t33 = FUN_0c1534e8(t3, (t28 + 0x1), t32);
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = FUN_0c1534fc(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t44 = *(int *)((t43 + 0x18));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = t44;
    t45 = *(int *)((((int)stk + 4) + 0x0));
    t46 = *(int *)((t45 + 0x1C));
    t47 = FUN_0c1534e8(t3, (t42 + 0x1), t46);
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
}

void kmiProcessVertex_08(int a4)
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
    float u16;
    int t17;
    float u18;
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
    float u30;
    int t31;
    float u32;
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
    float u44;
    int t45;
    float u46;
    int t47;
    int t48;
    int t50;
    int t51;
    int stk[12];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = FUN_0c1534fc(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    u16 = *(float *)(((0x18 + t15) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    t17 = *(int *)((((int)stk + 4) + 0x0));
    u18 = *(float *)((t17 + 0x1C));
    t19 = FUN_0c1534e8(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)((((int)stk + 4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = FUN_0c1534fc(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u30 = *(float *)(((0x18 + t29) + 0x0));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    t31 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u32 = *(float *)((t31 + 0x1C));
    t33 = FUN_0c1534e8(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)((((int)stk + 4) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = FUN_0c1534fc(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u44 = *(float *)(((0x18 + t43) + 0x0));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    t45 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u46 = *(float *)((t45 + 0x1C));
    t47 = FUN_0c1534e8(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)));
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
}

void kmiProcessVertex_12(int a4)
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
    int t50;
    int t51;
    int stk[10];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = FUN_0c1534fc(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    t16 = *(int *)((t15 + 0x18));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = t16;
    t17 = *(int *)((((int)stk + 4) + 0x0));
    t18 = *(int *)((t17 + 0x1C));
    t19 = FUN_0c1534e8(t3, (t14 + 0x1), t18);
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)((((int)stk + 4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = FUN_0c1534fc(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = t30;
    t31 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t32 = *(int *)((t31 + 0x1C));
    t33 = FUN_0c1534e8(t3, (t28 + 0x1), t32);
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = FUN_0c1534fc(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t44 = *(int *)((t43 + 0x18));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = t44;
    t45 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t46 = *(int *)((t45 + 0x1C));
    t47 = FUN_0c1534e8(t3, (t42 + 0x1), t46);
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
}

int kmiCBalloc(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t1;
    int t7;
    int t2;
    int t3;
    int t4;

    t0 = FUN_0c156742(a4, a5, a6);
    t9 = 0x3;
    if (t0 != -1) {
        t1 = FUN_0c156934(0x0, t0, a4, a5, 0x1, 0x1);
        t7 = t1;
        if (t1 == 0) {
            t2 = *(int *)0xC177FB0;
            t3 = FUN_0c156934(0x1, (t2 + t0), a4, a6, 0x1, 0x1);
            if (t3 != 0) {
                t4 = *(int *)((a5 + 0x1C));
                kmiFBfree(t4);
            }
            t7 = t3;
        }
        t9 = t7;
    }
    return t9;
}

int FUN_0c15748a(int a4, int a5, int a6)
{
    int t13;
    int t14;
    int t15;
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t10;
    int t17;
    int t19;
    int t20;
    int t22;
    int t23;
    int stk[522];

    t13 = a6;
    t14 = a5;
    t15 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        t0 = a5;
        t1 = a4;
        t2 = a6;
        do {
            t3 = *(int *)(((int)stk + 4));
            kmiCopyFromFrameBuffer(t3, t0, 0x800);
            t5 = *(int *)(((int)stk + 4));
            t7 = 0x40;
            t8 = t5;
            while (t7 != 0) {
                FUN_0c15888e(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            t10 = *(int *)(((int)stk + 4));
            kmiCopyToFrameBuffer(t1, t10, 0x800);
            t2 = (t2 - 0x800);
            t0 = (t0 + 0x800);
            t1 = (t1 + 0x800);
        } while ((unsigned int)t2 > (unsigned int)0x800);
        t13 = t2;
        t14 = t0;
        t15 = t1;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), t14, t13);
    t17 = *(int *)(((int)stk + 4));
    t19 = 0x40;
    t20 = t17;
    while (t19 != 0) {
        FUN_0c15888e(t20);
        t19 = (t19 - 1);
        t20 = (t20 + 0x20);
    }
    t22 = *(int *)(((int)stk + 4));
    t23 = kmiCopyToFrameBuffer(t15, t22, t13);
    return t23;
}

void FUN_0c157ba0(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t14;

    t0 = *(int *)((a5 + 0xC));
    if (t0 != 8) {
        if (t0 != 16) {
            if (t0 != 32) {
                if (t0 != 64) {
                    return;
                }
                t1 = *(int *)((a5 + 0x18));
                if ((0x1 & t1) != 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x8000;
                    *(unsigned int *)((a4 + 0x4)) = 0x800;
                    *(unsigned int *)((a4 + 0x8)) = 0x560;
                    *(unsigned int *)((a4 + 0xC)) = 0xD60;
                } else {
                    *(unsigned int *)((a4 + 0x0)) = 0x7000;
                    *(unsigned int *)((a4 + 0x4)) = 0x400;
                    *(unsigned int *)((a4 + 0x8)) = 0x400;
                    *(unsigned int *)((a4 + 0xC)) = 0x1000;
                }
                t5 = *(int *)((a4 + 0x4));
                t6 = (int)((unsigned int)0x800 / (unsigned int)t5);
                *(unsigned int *)((a4 + 0x10)) = t6;
                return;
            }
            t7 = *(int *)((a5 + 0x18));
            if ((0x1 & t7) != 0) {
                *(unsigned int *)((a4 + 0x0)) = 0x6000;
                *(unsigned int *)((a4 + 0x4)) = 0x200;
                *(unsigned int *)((a4 + 0x8)) = 0x160;
                *(unsigned int *)((a4 + 0xC)) = 0xF60;
            } else {
                *(unsigned int *)((a4 + 0x0)) = 0x5000;
                *(unsigned int *)((a4 + 0x4)) = 0x100;
                *(unsigned int *)((a4 + 0x8)) = 0x100;
                *(unsigned int *)((a4 + 0xC)) = 0x1000;
            }
            t10 = *(int *)((a4 + 0x4));
            t11 = (int)((unsigned int)0x800 / (unsigned int)t10);
            *(unsigned int *)((a4 + 0x10)) = t11;
            return;
        }
        t12 = *(int *)((a5 + 0x18));
        if ((0x1 & t12) != 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x4000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x60;
            t14 = 0xFE0;
        } else {
            *(unsigned int *)((a4 + 0x0)) = 0x3000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x40;
            t14 = 0xFC0;
        }
        *(unsigned int *)((a4 + 0xC)) = t14;
        t16 = *(int *)((a4 + 0x4));
        t17 = (int)((unsigned int)0x800 / (unsigned int)t16);
        *(unsigned int *)((a4 + 0x10)) = t17;
        return;
    }
    t18 = *(int *)((a5 + 0x18));
    if ((0x1 & t18) != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x2000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xFA0;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x1000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xF90;
    }
    t21 = *(int *)((a4 + 0x4));
    t22 = (int)((unsigned int)0x800 / (unsigned int)t21);
    *(unsigned int *)((a4 + 0x10)) = t22;
}

int kmiInitializeHardware(void)
{
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    FUN_0c159ae0();
    kmiInitializeDevice();
    kmiInitializeTA();
    kmiFBinit();
    kmiInitInterrupt();
    kmiInitializeFog();
    *(unsigned int *)0xC2EAAD8 = 0x100000;
    *(unsigned int *)0xC2EAADC = 0x0;
    *(unsigned int *)0xC2EAAE0 = 0x0;
    *(unsigned int *)0xC2EAAE4 = 0x0;
    t6 = *(int *)0xC2EA6E8;
    t7 = *(int *)0xC2EA6F8;
    t8 = *(int *)0xC2EA6F4;
    t9 = *(int *)0xC2EA6F0;
    t10 = *(int *)0xC2EA6EC;
    t11 = kmiSetTAEnvironment(((unsigned int)t10 >> 7), ((unsigned int)t9 >> 7), ((unsigned int)t8 >> 7), ((unsigned int)t7 >> 7), t6, 0x0);
    return t11;
}

void kmiReqRestOfDMA(int a4)
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
    int t16;
    int t17;
    int t18;
    int t19;
    int t22;
    int t23;
    int t24;
    int stk[12];

    *(unsigned int *)(((int)stk + 12)) = a4;
    t0 = *(int *)0xC2EA9DC;
    t1 = (0xC2EAA00 + (t0 << 2));
    t2 = (0xC2EAA50 + (t0 << 2));
    t3 = 0x0;
    do {
        t4 = *(int *)((t2 + 0x0));
        if (t4 != 0) {
            t5 = *(int *)(((int)stk + 12));
            if (t5 != t3) {
                t6 = *(int *)0xC2EAAB4;
                if (t6 == 1) {
                    if (t3 != 1) {
                        if (t3 == 3) {
                            t7 = *(int *)0xC2EAAB8;
                            t8 = *(int *)0xC2EAAB8;
                            t9 = *(int *)((t8 + 0x0));
                            *(unsigned int *)((t7 + 0x0)) = ((t9 & 0xF0FFFFFF) | ((t3 << 16) << 8));
                            do {
                                t10 = *(int *)0xC2EAABC;
                                t11 = *(int *)0xC2EAAB8;
                                t12 = kmiDMAtoTARequest(0x10000000, t11, t10, 0x10, ((int)stk + 8));
                            } while (t12 == 0x100);
                        }
                    } else {
                        t14 = *(int *)0xC2EAAB8;
                        t15 = *(int *)0xC2EAAB8;
                        t16 = *(int *)((t15 + 0x0));
                        *(unsigned int *)((t14 + 0x0)) = ((t16 & 0xF0FFFFFF) | ((t3 << 16) << 8));
                        do {
                            t17 = *(int *)0xC2EAABC;
                            t18 = *(int *)0xC2EAAB8;
                            t19 = kmiDMAtoTARequest(0x10000000, t18, t17, 0x10, ((int)stk + 8));
                        } while (t19 == 0x100);
                    }
                }
                do {
                    t22 = *(int *)((t2 + 0x0));
                    t23 = *(int *)((t1 + 0x0));
                    t24 = kmiDMAtoTARequest(0x10000000, t23, (t22 + 0x20), 0x10, ((int)stk + 8));
                } while (t24 == 0x100);
            }
        }
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x10);
        t1 = (t1 + 0x10);
    } while ((unsigned int)t3 < (unsigned int)0x5);
}

int kmCreateCombinedTextureSurface(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t30;
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
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t29;
    int t16;
    int t27;

    t0 = FUN_0c15c3c8(a4, a6, a7, a8);
    t30 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a5 + 0x0)) = t1;
        t2 = *(int *)((a4 + 0x4));
        *(unsigned int *)((a5 + 0x4)) = t2;
        t3 = *(int *)((a4 + 0x8));
        *(unsigned int *)((a5 + 0x8)) = t3;
        t4 = *(int *)((a4 + 0xC));
        *(unsigned int *)((a5 + 0xC)) = t4;
        t5 = *(int *)((a4 + 0x10));
        *(unsigned int *)((a5 + 0x10)) = t5;
        t6 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a5 + 0x14)) = t6;
        t7 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a5 + 0x18)) = t7;
        t8 = *(int *)((a4 + 0x0));
        if ((unsigned short)t8 == 3) {
            t9 = kmiVQalloc(a4);
            if (t9 != 3) {
                t10 = kmiVQalloc(a5);
                if (t10 == 3) {
                    kmiVQFBfree(a4);
                    kmiDefaultInterruptHandler(0x3);
                }
                t16 = t10;
            } else {
                kmiDefaultInterruptHandler(0x3);
                t16 = t9;
            }
            t29 = t16;
        } else {
            t17 = *(int *)((a4 + 0x14));
            t18 = kmiTXalloc(t17, a4);
            if (t18 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t27 = t18;
            } else {
                t20 = *(int *)((a5 + 0x14));
                t21 = kmiTXalloc(t20, a5);
                if (t21 == 3) {
                    t22 = *(int *)((a4 + 0x1C));
                    kmiFBfree(t22);
                    kmiDefaultInterruptHandler(0x3);
                }
                t27 = t21;
            }
            t29 = t27;
        }
        t30 = t29;
    }
    return t30;
}

int vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t49;
    int t3;
    int t5;
    int t45;
    int t6;
    int t7;
    int t43;
    int t8;
    int t41;
    int t9;
    int t10;
    int t11;
    int t39;
    int t12;
    int t37;
    int t13;
    int t35;
    int t14;
    int t33;
    int t15;
    int t31;
    int t16;
    int t29;
    int t18;
    int t27;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t47;
    int stk[22];

    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(unsigned int *)(((int)stk + 16)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((a4 * 0x148) + 0xC2EE990);
    t0 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t0 + 0x0)) = 0x0;
    t1 = *(int *)(((int)stk + 4));
    t2 = *(signed char *)((t1 + 0x2));
    t49 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4, a5, a6, a7);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t47 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t45 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = *(int *)(((int)stk + 16));
                t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8));
                t43 = 0xFFFFFF01;
                if (t7 != 0) {
                    t8 = buIsFormat(a4);
                    t41 = 0xFFFFFF03;
                    if ((int)t8 >= 0) {
                        t9 = *(int *)(((int)stk + 4));
                        t10 = *(int *)((t9 + 0x1C));
                        t11 = *(int *)((t10 + 0x38));
                        t39 = 0xFFFFFF08;
                        if (t11 != 0) {
                            t12 = check_isopen(a4, a5);
                            t37 = 0xFFFFFF08;
                            if ((int)t12 >= 0) {
                                t13 = search_dir(a4, a5, (((int)stk + 4) + 0x10));
                                t35 = 0xFFFFFF06;
                                if ((int)t13 < 0) {
                                    t14 = search_exec_file(a4, (((int)stk + 4) + 0x10));
                                    t33 = 0xFFFFFF09;
                                    if ((int)t14 < 0) {
                                        t15 = get_fat(a4, 0x0);
                                        t31 = 0xFFFFFF08;
                                        if ((unsigned short)t15 == 0xFFFC) {
                                            t16 = search_free_dir(a4);
                                            t29 = 0xFFFFFF08;
                                            if ((int)t16 >= 0) {
                                                direntry(a4, t16);
                                                t18 = open_file_handle(a4);
                                                t27 = 0xFFFFFF07;
                                                if (t18 != 0) {
                                                    *(unsigned int *)((t18 + 0x8)) = 0x1;
                                                    *(unsigned int *)((t18 + 0x4)) = 0x2;
                                                    *(unsigned int *)((t18 + 0x2C)) = t16;
                                                    *(unsigned int *)((t18 + 0x38)) = 0xFFFF;
                                                    *(unsigned int *)((t18 + 0x30)) = 0x0;
                                                    *(unsigned int *)((t18 + 0x28)) = a4;
                                                    *(unsigned short *)((t18 + 0x2)) = 0x1;
                                                    *(unsigned char *)((t18 + 0x1)) = 0x0;
                                                    t19 = 0xFFFF;
                                                    t20 = (t18 + 0x10);
                                                    t21 = a5;
                                                    for (;;) {
                                                        t22 = *(signed char *)((t21 + 0x0));
                                                        if (t22 == 0) break;
                                                        t23 = *(signed char *)((t21 + 0x0));
                                                        t21 = (t21 + 0x1);
                                                        t19 = t23;
                                                        *(unsigned char *)((t20 + 0x0)) = t19;
                                                        t20 = (t20 + 0x1);
                                                    }
                                                    *(unsigned char *)((t20 + 0x0)) = 0x0;
                                                    t24 = *(int *)(((int)stk + 12));
                                                    set_vmstime((t18 + 0x20), t24);
                                                    t26 = *(int *)(((int)stk + 8));
                                                    *(unsigned int *)((t26 + 0x0)) = t18;
                                                    t27 = 0x0;
                                                }
                                                t29 = t27;
                                            }
                                            t31 = t29;
                                        }
                                        t33 = t31;
                                    }
                                    t35 = t33;
                                }
                                t37 = t35;
                            }
                            t39 = t37;
                        }
                        t41 = t39;
                    }
                    t43 = t41;
                }
                t45 = t43;
            }
            t47 = t45;
        }
        t49 = t47;
    }
    return t49;
}

int vmsfs_scanfile(int a4, int a5, int a6)
{
    int t0;
    int t13;
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
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = search_dir(a4, a5, (((int)stk + 4) + 0x4));
    t13 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        t1 = direntry(a4, t0);
        t2 = *(int *)(((int)stk + 20));
        *(unsigned short *)((a6 + 0x0)) = t2;
        t3 = t1;
        t4 = a4;
        t5 = t2;
        t6 = (a6 + 0x2);
        t7 = 0x0;
        for (;;) {
            t8 = *(int *)(((int)stk + 48));
            if ((int)t7 >= (int)t8) break;
            t4 = a4;
            t9 = get_fat(t4, t5);
            t3 = t9;
            t4 = (unsigned short)t3;
            t5 = t4;
            *(unsigned short *)((t6 + 0x0)) = t5;
            t7 = (t7 + 0x1);
            t6 = (t6 + 0x2);
        }
        t10 = *(int *)(((int)stk + 4));
        t11 = check_file_correct(a4, t10);
        t12 = t0;
        if ((int)t11 < 0) {
            t12 = t11;
        }
        t13 = t12;
    }
    return t13;
}

void ADX_DecodeInfo(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
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

    if ((int)a5 < (int)0x10) {
        return;
    }
    t0 = *(short *)((a4 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
        return;
    }
    t1 = *(short *)((a4 + 0x2));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)((int)t1 >> 8) | ((t1 << 8) & 0xFFFFFF00)) + 0x4);
    t2 = *(signed char *)((a4 + 0x4));
    *(unsigned char *)((a7 + 0x0)) = t2;
    t3 = *(signed char *)((a4 + 0x5));
    *(unsigned char *)((a9 + 0x0)) = t3;
    t4 = *(signed char *)((a4 + 0x6));
    *(unsigned char *)((a8 + 0x0)) = t4;
    t5 = *(signed char *)((a4 + 0x7));
    *(unsigned char *)((a10 + 0x0)) = t5;
    t6 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t6 >> 16) >> 8) | (((int)t6 >> 8) & 0xFF00)) | ((t6 << 8) & 0xFF0000)) | ((t6 << 16) << 8));
    t7 = *(int *)((a4 + 0xC));
    *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t7 >> 16) >> 8) | (((int)t7 >> 8) & 0xFF00)) | ((t7 << 8) & 0xFF0000)) | ((t7 << 16) << 8));
    t8 = *(signed char *)((a9 + 0x0));
    t9 = *(signed char *)((a8 + 0x0));
    t10 = (int)((int)(((t8 - 2) << 2) << 1) / (int)t9);
    *(unsigned int *)((a13 + 0x0)) = t10;
}

void mwlRnaAddFlshPos(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)((a4 + 0x58));
    t1 = *(int *)((a4 + 0x50));
    t2 = *(int *)((a4 + 0x28));
    t3 = (int)((int)(t1 + t0) % (int)t2);
    *(unsigned int *)(((0x50 + a4) + 0x0)) = t3;
    t4 = *(int *)(((0x58 + a4) + 0x0));
    t5 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t5 + t4);
    *(unsigned int *)((a4 + 0x58)) = 0x0;
}

int mwlRnaInsrtSlntDat(int a4)
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
    int t18;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0x28));
    t1 = *(int *)((a4 + 0x34));
    t2 = *(int *)((a4 + 0x54));
    t3 = *(int *)((a4 + 0x8));
    t4 = (int)((int)0x20 / (int)t3);
    t5 = (int)((int)((t0 - t1) - t2) / (int)((t4 << 2) << 1));
    t6 = *(int *)((a4 + 0x50));
    t7 = (t0 - t6);
    if ((int)(t5 * ((t4 << 2) << 1)) < (int)(t0 - t6)) {
        t7 = (t5 * ((t4 << 2) << 1));
    }
    t8 = (int)((int)0x800 / (int)t3);
    t9 = t7;
    if ((int)t7 >= (int)((t8 << 2) << 1)) {
        t9 = ((t8 << 2) << 1);
    }
    t10 = (int)((int)t9 / (int)((t4 << 2) << 1));
    t18 = 0x0;
    if ((int)(t10 * ((t4 << 2) << 1)) > 0) {
        t11 = *(int *)((a4 + 0x8));
        t12 = 0xC2F64DC;
        if (t11 == 4) {
            t12 = 0xC2F6CFC;
        }
        t13 = t12;
        t14 = 0x0;
        for (;;) {
            t15 = *(signed char *)((a4 + 0x3));
            if ((int)t14 >= (int)(unsigned char)t15) break;
            t16 = *(int *)((a4 + 0x50));
            t13 = a4;
            t17 = mwlRnaStartCopy(t13, t14, t16, ((t12 + 0x20) & 0xFFFFFFE0), (t10 * ((t4 << 2) << 1)));
            t14 = (t14 + 0x1);
            t13 = t17;
        }
        *(unsigned int *)((a4 + 0x58)) = t13;
        t18 = t13;
    }
    return t18;
}

int FUN_0c16bca0(void)
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
    int t362;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t71;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t44;
    int t31;
    int t32;
    int t33;
    int t42;
    int t34;
    int t40;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t46;
    int t47;
    int t48;
    int t57;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t61;
    int t67;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t95;
    int t82;
    int t83;
    int t84;
    int t93;
    int t85;
    int t91;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t97;
    int t98;
    int t99;
    int t108;
    int t100;
    int t106;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t112;
    int t118;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t244;
    int t132;
    int t133;
    int t134;
    int t242;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t189;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t162;
    int t149;
    int t150;
    int t151;
    int t160;
    int t152;
    int t158;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t164;
    int t165;
    int t166;
    int t175;
    int t167;
    int t173;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t179;
    int t185;
    int t180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t213;
    int t200;
    int t201;
    int t202;
    int t211;
    int t203;
    int t209;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t215;
    int t216;
    int t217;
    int t226;
    int t218;
    int t224;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t230;
    int t236;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t246;
    int t247;
    int t248;
    int t356;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t303;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t276;
    int t263;
    int t264;
    int t265;
    int t274;
    int t266;
    int t272;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t278;
    int t279;
    int t280;
    int t289;
    int t281;
    int t287;
    int t282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t293;
    int t299;
    int t294;
    int t295;
    int t296;
    int t297;
    int t298;
    int t305;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    int t313;
    int t327;
    int t314;
    int t315;
    int t316;
    int t325;
    int t317;
    int t323;
    int t318;
    int t319;
    int t320;
    int t321;
    int t322;
    int t329;
    int t330;
    int t331;
    int t340;
    int t332;
    int t338;
    int t333;
    int t334;
    int t335;
    int t336;
    int t337;
    int t344;
    int t350;
    int t345;
    int t346;
    int t347;
    int t348;
    int t349;
    int t364;
    int t365;
    int t366;
    int t367;
    int t368;
    int t369;
    int t419;
    int t370;
    int t371;
    int t372;
    int t373;
    int t374;
    int t375;
    int t376;
    int t377;
    int t378;
    int t392;
    int t379;
    int t380;
    int t381;
    int t390;
    int t382;
    int t388;
    int t383;
    int t384;
    int t385;
    int t386;
    int t387;
    int t394;
    int t395;
    int t396;
    int t405;
    int t397;
    int t403;
    int t398;
    int t399;
    int t400;
    int t401;
    int t402;
    int t409;
    int t415;
    int t410;
    int t411;
    int t412;
    int t413;
    int t414;
    int t421;
    int t422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t427;
    int t428;
    int t429;
    int t443;
    int t430;
    int t431;
    int t432;
    int t441;
    int t433;
    int t439;
    int t434;
    int t435;
    int t436;
    int t437;
    int t438;
    int t445;
    int t446;
    int t447;
    int t456;
    int t448;
    int t454;
    int t449;
    int t450;
    int t451;
    int t452;
    int t453;
    int t460;
    int t466;
    int t461;
    int t462;
    int t463;
    int t464;
    int t465;
    int t472;
    int t473;
    int t474;
    int t475;
    int t476;
    int t477;
    int t478;
    int t479;
    int t592;
    int t480;
    int t481;
    int t482;
    int t590;
    int t483;
    int t484;
    int t485;
    int t486;
    int t487;
    int t537;
    int t488;
    int t489;
    int t490;
    int t491;
    int t492;
    int t493;
    int t494;
    int t495;
    int t496;
    int t510;
    int t497;
    int t498;
    int t499;
    int t508;
    int t500;
    int t506;
    int t501;
    int t502;
    int t503;
    int t504;
    int t505;
    int t512;
    int t513;
    int t514;
    int t523;
    int t515;
    int t521;
    int t516;
    int t517;
    int t518;
    int t519;
    int t520;
    int t527;
    int t533;
    int t528;
    int t529;
    int t530;
    int t531;
    int t532;
    int t539;
    int t540;
    int t541;
    int t542;
    int t543;
    int t544;
    int t545;
    int t546;
    int t547;
    int t561;
    int t548;
    int t549;
    int t550;
    int t559;
    int t551;
    int t557;
    int t552;
    int t553;
    int t554;
    int t555;
    int t556;
    int t563;
    int t564;
    int t565;
    int t574;
    int t566;
    int t572;
    int t567;
    int t568;
    int t569;
    int t570;
    int t571;
    int t578;
    int t584;
    int t579;
    int t580;
    int t581;
    int t582;
    int t583;
    int t594;
    int t595;
    int t596;
    int t704;
    int t597;
    int t598;
    int t599;
    int t600;
    int t601;
    int t651;
    int t602;
    int t603;
    int t604;
    int t605;
    int t606;
    int t607;
    int t608;
    int t609;
    int t610;
    int t624;
    int t611;
    int t612;
    int t613;
    int t622;
    int t614;
    int t620;
    int t615;
    int t616;
    int t617;
    int t618;
    int t619;
    int t626;
    int t627;
    int t628;
    int t637;
    int t629;
    int t635;
    int t630;
    int t631;
    int t632;
    int t633;
    int t634;
    int t641;
    int t647;
    int t642;
    int t643;
    int t644;
    int t645;
    int t646;
    int t653;
    int t654;
    int t655;
    int t656;
    int t657;
    int t658;
    int t659;
    int t660;
    int t661;
    int t675;
    int t662;
    int t663;
    int t664;
    int t673;
    int t665;
    int t671;
    int t666;
    int t667;
    int t668;
    int t669;
    int t670;
    int t677;
    int t678;
    int t679;
    int t688;
    int t680;
    int t686;
    int t681;
    int t682;
    int t683;
    int t684;
    int t685;
    int t692;
    int t698;
    int t693;
    int t694;
    int t695;
    int t696;
    int t697;
    int t710;
    int t360;
    int t122;
    int t69;
    int t59;
    int t120;
    int t110;
    int t358;
    int t240;
    int t187;
    int t177;
    int t238;
    int t228;
    int t354;
    int t301;
    int t291;
    int t352;
    int t342;
    int t708;
    int t470;
    int t417;
    int t407;
    int t468;
    int t458;
    int t706;
    int t588;
    int t535;
    int t525;
    int t586;
    int t576;
    int t702;
    int t649;
    int t639;
    int t700;
    int t690;
    int stk[12];

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((0xC2EA9CC + (t0 << 2)));
        if (t1 != 1) {
            t0 = (t0 + 0x1);
            if ((int)t0 < (int)0x4) continue;
            return 0x1;
        }
        t2 = *(int *)0xC2EA88C;
        if (t2 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 < (int)0x4) continue;
            return 0x1;
        }
        break;
    }
    *(unsigned int *)0xC2EA88C = 0x1;
    *(unsigned int *)(((t0 << 2) + 0xC2EA9CC)) = 0x2;
    *(unsigned int *)0xC2EA9E4 = t0;
    *(unsigned int *)(((int)stk + 12)) = (t0 & 0x1);
    t3 = *(int *)0xFFD8000C;
    *(unsigned int *)0xC2F91F0 = t3;
    *(unsigned int *)0xA05F8008 = 0x1;
    *(unsigned int *)0xA05F8008 = 0x0;
    t4 = *(int *)(((int)stk + 12));
    t5 = *(int *)(((((t4 << 2) << 2) << 1) + 0xC2EAAF8));
    *(unsigned int *)0xA05F8124 = t5;
    t6 = *(int *)(((((t4 << 2) << 2) << 1) + 0xC2EAAFC));
    *(unsigned int *)0xA05F812C = t6;
    t7 = *(int *)(((((t4 << 2) << 2) << 1) + 0xC2EAB04));
    *(unsigned int *)0xA05F8128 = t7;
    t8 = *(int *)(((((t4 << 2) << 2) << 1) + 0xC2EAB08));
    *(unsigned int *)0xA05F8130 = t8;
    t9 = *(int *)(((((t4 << 2) << 2) << 1) + 0xC2EAB00));
    *(unsigned int *)0xA05F8164 = t9;
    *(unsigned int *)0xA05F8144 = 0x80000000;
    t10 = *(int *)0xA05F8144;
    *(unsigned int *)0xC2EA9E8 = 0x0;
    *(unsigned int *)0xC2EA9EC = 0x0;
    *(unsigned int *)0xC2F91AC = 0x0;
    t11 = *(int *)(((t0 << 2) + 0xC2EAA50));
    if (t11 != 0) {
        t12 = *(int *)0xC2EA9E8;
        *(unsigned int *)0xC2EA9E8 = (t12 | 0x1);
        t13 = *(int *)(((t0 << 2) + 0xC2EAA50));
        t14 = *(int *)(((t0 << 2) + 0xC2EAA00));
        t15 = kmiDMAtoTARequest(0x10000000, t14, (t13 + 0x20), 0x10, ((int)stk + 8));
        t362 = 0x0;
        if (t15 != 0x100) {
            t16 = *(int *)(((t0 << 2) + 0xC2EAA60));
            if (t16 == 0) {
                t17 = *(int *)(((t0 << 2) + 0xC2EAA70));
                if (t17 != 0) {
                    t18 = *(int *)0xC2EA9E8;
                    *(unsigned int *)0xC2EA9E8 = (t18 | 0x4);
                    t19 = *(int *)(((t0 << 2) + 0xC2EAA70));
                    t20 = *(int *)(((t0 << 2) + 0xC2EAA20));
                    t21 = kmiDMAtoTARequest(0x10000000, t20, (t19 + 0x20), 0x10, ((int)stk + 8));
                    t71 = 0x0;
                    if (t21 != 0x100) {
                        t22 = *(int *)(((t0 << 2) + 0xC2EAA80));
                        if (t22 != 0) {
                            t23 = *(int *)0xC2EA9E8;
                            *(unsigned int *)0xC2EA9E8 = (t23 | 0x8);
                            t24 = *(int *)0xC2EAAB4;
                            if (t24 == 1) {
                                t25 = *(int *)0xC2EAAB8;
                                t26 = *(int *)0xC2EAAB8;
                                t27 = *(int *)((t26 + 0x0));
                                *(unsigned int *)((t25 + 0x0)) = ((t27 & 0xF0FFFFFF) | 0x3000000);
                                t28 = *(int *)0xC2EAABC;
                                t29 = *(int *)0xC2EAAB8;
                                t30 = kmiDMAtoTARequest(0x10000000, t29, t28, 0x10, ((int)stk + 8));
                                t44 = 0x0;
                                if (t30 != 0x100) {
                                    t31 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                    t32 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                    t33 = kmiDMAtoTARequest(0x10000000, t32, (t31 + 0x20), 0x10, ((int)stk + 8));
                                    t42 = 0x0;
                                    if (t33 != 0x100) {
                                        t34 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t40 = 0x1;
                                        if (t34 != 0) {
                                            t35 = *(int *)0xC2EA9E8;
                                            *(unsigned int *)0xC2EA9E8 = (t35 | 0x10);
                                            t36 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t37 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                            t38 = kmiDMAtoTARequest(0x10000000, t37, (t36 + 0x20), 0x10, ((int)stk + 8));
                                            t39 = 0x1;
                                            if (t38 == 0x100) {
                                                t39 = 0x0;
                                            }
                                            t40 = t39;
                                        }
                                        t42 = t40;
                                    }
                                    t44 = t42;
                                }
                                t59 = t44;
                            } else {
                                t46 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                t47 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                t48 = kmiDMAtoTARequest(0x10000000, t47, (t46 + 0x20), 0x10, ((int)stk + 8));
                                t57 = 0x0;
                                if (t48 != 0x100) {
                                    t49 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t55 = 0x1;
                                    if (t49 != 0) {
                                        t50 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t50 | 0x10);
                                        t51 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t52 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t53 = kmiDMAtoTARequest(0x10000000, t52, (t51 + 0x20), 0x10, ((int)stk + 8));
                                        t54 = 0x1;
                                        if (t53 == 0x100) {
                                            t54 = 0x0;
                                        }
                                        t55 = t54;
                                    }
                                    t57 = t55;
                                }
                                t59 = t57;
                            }
                            t69 = t59;
                        } else {
                            t61 = *(int *)(((t0 << 2) + 0xC2EAA90));
                            t67 = 0x1;
                            if (t61 != 0) {
                                t62 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t62 | 0x10);
                                t63 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t64 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                t65 = kmiDMAtoTARequest(0x10000000, t64, (t63 + 0x20), 0x10, ((int)stk + 8));
                                t66 = 0x1;
                                if (t65 == 0x100) {
                                    t66 = 0x0;
                                }
                                t67 = t66;
                            }
                            t69 = t67;
                        }
                        t71 = t69;
                    }
                    t122 = t71;
                } else {
                    t73 = *(int *)(((t0 << 2) + 0xC2EAA80));
                    if (t73 != 0) {
                        t74 = *(int *)0xC2EA9E8;
                        *(unsigned int *)0xC2EA9E8 = (t74 | 0x8);
                        t75 = *(int *)0xC2EAAB4;
                        if (t75 == 1) {
                            t76 = *(int *)0xC2EAAB8;
                            t77 = *(int *)0xC2EAAB8;
                            t78 = *(int *)((t77 + 0x0));
                            *(unsigned int *)((t76 + 0x0)) = ((t78 & 0xF0FFFFFF) | 0x3000000);
                            t79 = *(int *)0xC2EAABC;
                            t80 = *(int *)0xC2EAAB8;
                            t81 = kmiDMAtoTARequest(0x10000000, t80, t79, 0x10, ((int)stk + 8));
                            t95 = 0x0;
                            if (t81 != 0x100) {
                                t82 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                t83 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                t84 = kmiDMAtoTARequest(0x10000000, t83, (t82 + 0x20), 0x10, ((int)stk + 8));
                                t93 = 0x0;
                                if (t84 != 0x100) {
                                    t85 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t91 = 0x1;
                                    if (t85 != 0) {
                                        t86 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t86 | 0x10);
                                        t87 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t88 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t89 = kmiDMAtoTARequest(0x10000000, t88, (t87 + 0x20), 0x10, ((int)stk + 8));
                                        t90 = 0x1;
                                        if (t89 == 0x100) {
                                            t90 = 0x0;
                                        }
                                        t91 = t90;
                                    }
                                    t93 = t91;
                                }
                                t95 = t93;
                            }
                            t110 = t95;
                        } else {
                            t97 = *(int *)(((t0 << 2) + 0xC2EAA80));
                            t98 = *(int *)(((t0 << 2) + 0xC2EAA30));
                            t99 = kmiDMAtoTARequest(0x10000000, t98, (t97 + 0x20), 0x10, ((int)stk + 8));
                            t108 = 0x0;
                            if (t99 != 0x100) {
                                t100 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t106 = 0x1;
                                if (t100 != 0) {
                                    t101 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t101 | 0x10);
                                    t102 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t103 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                    t104 = kmiDMAtoTARequest(0x10000000, t103, (t102 + 0x20), 0x10, ((int)stk + 8));
                                    t105 = 0x1;
                                    if (t104 == 0x100) {
                                        t105 = 0x0;
                                    }
                                    t106 = t105;
                                }
                                t108 = t106;
                            }
                            t110 = t108;
                        }
                        t120 = t110;
                    } else {
                        t112 = *(int *)(((t0 << 2) + 0xC2EAA90));
                        t118 = 0x1;
                        if (t112 != 0) {
                            t113 = *(int *)0xC2EA9E8;
                            *(unsigned int *)0xC2EA9E8 = (t113 | 0x10);
                            t114 = *(int *)(((t0 << 2) + 0xC2EAA90));
                            t115 = *(int *)(((t0 << 2) + 0xC2EAA40));
                            t116 = kmiDMAtoTARequest(0x10000000, t115, (t114 + 0x20), 0x10, ((int)stk + 8));
                            t117 = 0x1;
                            if (t116 == 0x100) {
                                t117 = 0x0;
                            }
                            t118 = t117;
                        }
                        t120 = t118;
                    }
                    t122 = t120;
                }
                t360 = t122;
            } else {
                t124 = *(int *)0xC2EA9E8;
                *(unsigned int *)0xC2EA9E8 = (t124 | 0x2);
                t125 = *(int *)0xC2EAAB4;
                if (t125 == 1) {
                    t126 = *(int *)0xC2EAAB8;
                    t127 = *(int *)0xC2EAAB8;
                    t128 = *(int *)((t127 + 0x0));
                    *(unsigned int *)((t126 + 0x0)) = ((t128 & 0xF0FFFFFF) | 0x1000000);
                    t129 = *(int *)0xC2EAABC;
                    t130 = *(int *)0xC2EAAB8;
                    t131 = kmiDMAtoTARequest(0x10000000, t130, t129, 0x10, ((int)stk + 8));
                    t244 = 0x0;
                    if (t131 != 0x100) {
                        t132 = *(int *)(((t0 << 2) + 0xC2EAA60));
                        t133 = *(int *)(((t0 << 2) + 0xC2EAA10));
                        t134 = kmiDMAtoTARequest(0x10000000, t133, (t132 + 0x20), 0x10, ((int)stk + 8));
                        t242 = 0x0;
                        if (t134 != 0x100) {
                            t135 = *(int *)(((t0 << 2) + 0xC2EAA70));
                            if (t135 != 0) {
                                t136 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t136 | 0x4);
                                t137 = *(int *)(((t0 << 2) + 0xC2EAA70));
                                t138 = *(int *)(((t0 << 2) + 0xC2EAA20));
                                t139 = kmiDMAtoTARequest(0x10000000, t138, (t137 + 0x20), 0x10, ((int)stk + 8));
                                t189 = 0x0;
                                if (t139 != 0x100) {
                                    t140 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                    if (t140 != 0) {
                                        t141 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t141 | 0x8);
                                        t142 = *(int *)0xC2EAAB4;
                                        if (t142 == 1) {
                                            t143 = *(int *)0xC2EAAB8;
                                            t144 = *(int *)0xC2EAAB8;
                                            t145 = *(int *)((t144 + 0x0));
                                            *(unsigned int *)((t143 + 0x0)) = ((t145 & 0xF0FFFFFF) | 0x3000000);
                                            t146 = *(int *)0xC2EAABC;
                                            t147 = *(int *)0xC2EAAB8;
                                            t148 = kmiDMAtoTARequest(0x10000000, t147, t146, 0x10, ((int)stk + 8));
                                            t162 = 0x0;
                                            if (t148 != 0x100) {
                                                t149 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                                t150 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                                t151 = kmiDMAtoTARequest(0x10000000, t150, (t149 + 0x20), 0x10, ((int)stk + 8));
                                                t160 = 0x0;
                                                if (t151 != 0x100) {
                                                    t152 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                    t158 = 0x1;
                                                    if (t152 != 0) {
                                                        t153 = *(int *)0xC2EA9E8;
                                                        *(unsigned int *)0xC2EA9E8 = (t153 | 0x10);
                                                        t154 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                        t155 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                        t156 = kmiDMAtoTARequest(0x10000000, t155, (t154 + 0x20), 0x10, ((int)stk + 8));
                                                        t157 = 0x1;
                                                        if (t156 == 0x100) {
                                                            t157 = 0x0;
                                                        }
                                                        t158 = t157;
                                                    }
                                                    t160 = t158;
                                                }
                                                t162 = t160;
                                            }
                                            t177 = t162;
                                        } else {
                                            t164 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                            t165 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                            t166 = kmiDMAtoTARequest(0x10000000, t165, (t164 + 0x20), 0x10, ((int)stk + 8));
                                            t175 = 0x0;
                                            if (t166 != 0x100) {
                                                t167 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t173 = 0x1;
                                                if (t167 != 0) {
                                                    t168 = *(int *)0xC2EA9E8;
                                                    *(unsigned int *)0xC2EA9E8 = (t168 | 0x10);
                                                    t169 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                    t170 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                    t171 = kmiDMAtoTARequest(0x10000000, t170, (t169 + 0x20), 0x10, ((int)stk + 8));
                                                    t172 = 0x1;
                                                    if (t171 == 0x100) {
                                                        t172 = 0x0;
                                                    }
                                                    t173 = t172;
                                                }
                                                t175 = t173;
                                            }
                                            t177 = t175;
                                        }
                                        t187 = t177;
                                    } else {
                                        t179 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t185 = 0x1;
                                        if (t179 != 0) {
                                            t180 = *(int *)0xC2EA9E8;
                                            *(unsigned int *)0xC2EA9E8 = (t180 | 0x10);
                                            t181 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t182 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                            t183 = kmiDMAtoTARequest(0x10000000, t182, (t181 + 0x20), 0x10, ((int)stk + 8));
                                            t184 = 0x1;
                                            if (t183 == 0x100) {
                                                t184 = 0x0;
                                            }
                                            t185 = t184;
                                        }
                                        t187 = t185;
                                    }
                                    t189 = t187;
                                }
                                t240 = t189;
                            } else {
                                t191 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                if (t191 != 0) {
                                    t192 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t192 | 0x8);
                                    t193 = *(int *)0xC2EAAB4;
                                    if (t193 == 1) {
                                        t194 = *(int *)0xC2EAAB8;
                                        t195 = *(int *)0xC2EAAB8;
                                        t196 = *(int *)((t195 + 0x0));
                                        *(unsigned int *)((t194 + 0x0)) = ((t196 & 0xF0FFFFFF) | 0x3000000);
                                        t197 = *(int *)0xC2EAABC;
                                        t198 = *(int *)0xC2EAAB8;
                                        t199 = kmiDMAtoTARequest(0x10000000, t198, t197, 0x10, ((int)stk + 8));
                                        t213 = 0x0;
                                        if (t199 != 0x100) {
                                            t200 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                            t201 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                            t202 = kmiDMAtoTARequest(0x10000000, t201, (t200 + 0x20), 0x10, ((int)stk + 8));
                                            t211 = 0x0;
                                            if (t202 != 0x100) {
                                                t203 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t209 = 0x1;
                                                if (t203 != 0) {
                                                    t204 = *(int *)0xC2EA9E8;
                                                    *(unsigned int *)0xC2EA9E8 = (t204 | 0x10);
                                                    t205 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                    t206 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                    t207 = kmiDMAtoTARequest(0x10000000, t206, (t205 + 0x20), 0x10, ((int)stk + 8));
                                                    t208 = 0x1;
                                                    if (t207 == 0x100) {
                                                        t208 = 0x0;
                                                    }
                                                    t209 = t208;
                                                }
                                                t211 = t209;
                                            }
                                            t213 = t211;
                                        }
                                        t228 = t213;
                                    } else {
                                        t215 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                        t216 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                        t217 = kmiDMAtoTARequest(0x10000000, t216, (t215 + 0x20), 0x10, ((int)stk + 8));
                                        t226 = 0x0;
                                        if (t217 != 0x100) {
                                            t218 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t224 = 0x1;
                                            if (t218 != 0) {
                                                t219 = *(int *)0xC2EA9E8;
                                                *(unsigned int *)0xC2EA9E8 = (t219 | 0x10);
                                                t220 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t221 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                t222 = kmiDMAtoTARequest(0x10000000, t221, (t220 + 0x20), 0x10, ((int)stk + 8));
                                                t223 = 0x1;
                                                if (t222 == 0x100) {
                                                    t223 = 0x0;
                                                }
                                                t224 = t223;
                                            }
                                            t226 = t224;
                                        }
                                        t228 = t226;
                                    }
                                    t238 = t228;
                                } else {
                                    t230 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t236 = 0x1;
                                    if (t230 != 0) {
                                        t231 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t231 | 0x10);
                                        t232 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t233 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t234 = kmiDMAtoTARequest(0x10000000, t233, (t232 + 0x20), 0x10, ((int)stk + 8));
                                        t235 = 0x1;
                                        if (t234 == 0x100) {
                                            t235 = 0x0;
                                        }
                                        t236 = t235;
                                    }
                                    t238 = t236;
                                }
                                t240 = t238;
                            }
                            t242 = t240;
                        }
                        t244 = t242;
                    }
                    t358 = t244;
                } else {
                    t246 = *(int *)(((t0 << 2) + 0xC2EAA60));
                    t247 = *(int *)(((t0 << 2) + 0xC2EAA10));
                    t248 = kmiDMAtoTARequest(0x10000000, t247, (t246 + 0x20), 0x10, ((int)stk + 8));
                    t356 = 0x0;
                    if (t248 != 0x100) {
                        t249 = *(int *)(((t0 << 2) + 0xC2EAA70));
                        if (t249 != 0) {
                            t250 = *(int *)0xC2EA9E8;
                            *(unsigned int *)0xC2EA9E8 = (t250 | 0x4);
                            t251 = *(int *)(((t0 << 2) + 0xC2EAA70));
                            t252 = *(int *)(((t0 << 2) + 0xC2EAA20));
                            t253 = kmiDMAtoTARequest(0x10000000, t252, (t251 + 0x20), 0x10, ((int)stk + 8));
                            t303 = 0x0;
                            if (t253 != 0x100) {
                                t254 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                if (t254 != 0) {
                                    t255 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t255 | 0x8);
                                    t256 = *(int *)0xC2EAAB4;
                                    if (t256 == 1) {
                                        t257 = *(int *)0xC2EAAB8;
                                        t258 = *(int *)0xC2EAAB8;
                                        t259 = *(int *)((t258 + 0x0));
                                        *(unsigned int *)((t257 + 0x0)) = ((t259 & 0xF0FFFFFF) | 0x3000000);
                                        t260 = *(int *)0xC2EAABC;
                                        t261 = *(int *)0xC2EAAB8;
                                        t262 = kmiDMAtoTARequest(0x10000000, t261, t260, 0x10, ((int)stk + 8));
                                        t276 = 0x0;
                                        if (t262 != 0x100) {
                                            t263 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                            t264 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                            t265 = kmiDMAtoTARequest(0x10000000, t264, (t263 + 0x20), 0x10, ((int)stk + 8));
                                            t274 = 0x0;
                                            if (t265 != 0x100) {
                                                t266 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t272 = 0x1;
                                                if (t266 != 0) {
                                                    t267 = *(int *)0xC2EA9E8;
                                                    *(unsigned int *)0xC2EA9E8 = (t267 | 0x10);
                                                    t268 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                    t269 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                    t270 = kmiDMAtoTARequest(0x10000000, t269, (t268 + 0x20), 0x10, ((int)stk + 8));
                                                    t271 = 0x1;
                                                    if (t270 == 0x100) {
                                                        t271 = 0x0;
                                                    }
                                                    t272 = t271;
                                                }
                                                t274 = t272;
                                            }
                                            t276 = t274;
                                        }
                                        t291 = t276;
                                    } else {
                                        t278 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                        t279 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                        t280 = kmiDMAtoTARequest(0x10000000, t279, (t278 + 0x20), 0x10, ((int)stk + 8));
                                        t289 = 0x0;
                                        if (t280 != 0x100) {
                                            t281 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t287 = 0x1;
                                            if (t281 != 0) {
                                                t282 = *(int *)0xC2EA9E8;
                                                *(unsigned int *)0xC2EA9E8 = (t282 | 0x10);
                                                t283 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t284 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                t285 = kmiDMAtoTARequest(0x10000000, t284, (t283 + 0x20), 0x10, ((int)stk + 8));
                                                t286 = 0x1;
                                                if (t285 == 0x100) {
                                                    t286 = 0x0;
                                                }
                                                t287 = t286;
                                            }
                                            t289 = t287;
                                        }
                                        t291 = t289;
                                    }
                                    t301 = t291;
                                } else {
                                    t293 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t299 = 0x1;
                                    if (t293 != 0) {
                                        t294 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t294 | 0x10);
                                        t295 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t296 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t297 = kmiDMAtoTARequest(0x10000000, t296, (t295 + 0x20), 0x10, ((int)stk + 8));
                                        t298 = 0x1;
                                        if (t297 == 0x100) {
                                            t298 = 0x0;
                                        }
                                        t299 = t298;
                                    }
                                    t301 = t299;
                                }
                                t303 = t301;
                            }
                            t354 = t303;
                        } else {
                            t305 = *(int *)(((t0 << 2) + 0xC2EAA80));
                            if (t305 != 0) {
                                t306 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t306 | 0x8);
                                t307 = *(int *)0xC2EAAB4;
                                if (t307 == 1) {
                                    t308 = *(int *)0xC2EAAB8;
                                    t309 = *(int *)0xC2EAAB8;
                                    t310 = *(int *)((t309 + 0x0));
                                    *(unsigned int *)((t308 + 0x0)) = ((t310 & 0xF0FFFFFF) | 0x3000000);
                                    t311 = *(int *)0xC2EAABC;
                                    t312 = *(int *)0xC2EAAB8;
                                    t313 = kmiDMAtoTARequest(0x10000000, t312, t311, 0x10, ((int)stk + 8));
                                    t327 = 0x0;
                                    if (t313 != 0x100) {
                                        t314 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                        t315 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                        t316 = kmiDMAtoTARequest(0x10000000, t315, (t314 + 0x20), 0x10, ((int)stk + 8));
                                        t325 = 0x0;
                                        if (t316 != 0x100) {
                                            t317 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t323 = 0x1;
                                            if (t317 != 0) {
                                                t318 = *(int *)0xC2EA9E8;
                                                *(unsigned int *)0xC2EA9E8 = (t318 | 0x10);
                                                t319 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t320 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                t321 = kmiDMAtoTARequest(0x10000000, t320, (t319 + 0x20), 0x10, ((int)stk + 8));
                                                t322 = 0x1;
                                                if (t321 == 0x100) {
                                                    t322 = 0x0;
                                                }
                                                t323 = t322;
                                            }
                                            t325 = t323;
                                        }
                                        t327 = t325;
                                    }
                                    t342 = t327;
                                } else {
                                    t329 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                    t330 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                    t331 = kmiDMAtoTARequest(0x10000000, t330, (t329 + 0x20), 0x10, ((int)stk + 8));
                                    t340 = 0x0;
                                    if (t331 != 0x100) {
                                        t332 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t338 = 0x1;
                                        if (t332 != 0) {
                                            t333 = *(int *)0xC2EA9E8;
                                            *(unsigned int *)0xC2EA9E8 = (t333 | 0x10);
                                            t334 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t335 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                            t336 = kmiDMAtoTARequest(0x10000000, t335, (t334 + 0x20), 0x10, ((int)stk + 8));
                                            t337 = 0x1;
                                            if (t336 == 0x100) {
                                                t337 = 0x0;
                                            }
                                            t338 = t337;
                                        }
                                        t340 = t338;
                                    }
                                    t342 = t340;
                                }
                                t352 = t342;
                            } else {
                                t344 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t350 = 0x1;
                                if (t344 != 0) {
                                    t345 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t345 | 0x10);
                                    t346 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t347 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                    t348 = kmiDMAtoTARequest(0x10000000, t347, (t346 + 0x20), 0x10, ((int)stk + 8));
                                    t349 = 0x1;
                                    if (t348 == 0x100) {
                                        t349 = 0x0;
                                    }
                                    t350 = t349;
                                }
                                t352 = t350;
                            }
                            t354 = t352;
                        }
                        t356 = t354;
                    }
                    t358 = t356;
                }
                t360 = t358;
            }
            t362 = t360;
        }
        t710 = t362;
    } else {
        t364 = *(int *)(((t0 << 2) + 0xC2EAA60));
        if (t364 == 0) {
            t365 = *(int *)(((t0 << 2) + 0xC2EAA70));
            if (t365 != 0) {
                t366 = *(int *)0xC2EA9E8;
                *(unsigned int *)0xC2EA9E8 = (t366 | 0x4);
                t367 = *(int *)(((t0 << 2) + 0xC2EAA70));
                t368 = *(int *)(((t0 << 2) + 0xC2EAA20));
                t369 = kmiDMAtoTARequest(0x10000000, t368, (t367 + 0x20), 0x10, ((int)stk + 8));
                t419 = 0x0;
                if (t369 != 0x100) {
                    t370 = *(int *)(((t0 << 2) + 0xC2EAA80));
                    if (t370 != 0) {
                        t371 = *(int *)0xC2EA9E8;
                        *(unsigned int *)0xC2EA9E8 = (t371 | 0x8);
                        t372 = *(int *)0xC2EAAB4;
                        if (t372 == 1) {
                            t373 = *(int *)0xC2EAAB8;
                            t374 = *(int *)0xC2EAAB8;
                            t375 = *(int *)((t374 + 0x0));
                            *(unsigned int *)((t373 + 0x0)) = ((t375 & 0xF0FFFFFF) | 0x3000000);
                            t376 = *(int *)0xC2EAABC;
                            t377 = *(int *)0xC2EAAB8;
                            t378 = kmiDMAtoTARequest(0x10000000, t377, t376, 0x10, ((int)stk + 8));
                            t392 = 0x0;
                            if (t378 != 0x100) {
                                t379 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                t380 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                t381 = kmiDMAtoTARequest(0x10000000, t380, (t379 + 0x20), 0x10, ((int)stk + 8));
                                t390 = 0x0;
                                if (t381 != 0x100) {
                                    t382 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t388 = 0x1;
                                    if (t382 != 0) {
                                        t383 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t383 | 0x10);
                                        t384 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t385 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t386 = kmiDMAtoTARequest(0x10000000, t385, (t384 + 0x20), 0x10, ((int)stk + 8));
                                        t387 = 0x1;
                                        if (t386 == 0x100) {
                                            t387 = 0x0;
                                        }
                                        t388 = t387;
                                    }
                                    t390 = t388;
                                }
                                t392 = t390;
                            }
                            t407 = t392;
                        } else {
                            t394 = *(int *)(((t0 << 2) + 0xC2EAA80));
                            t395 = *(int *)(((t0 << 2) + 0xC2EAA30));
                            t396 = kmiDMAtoTARequest(0x10000000, t395, (t394 + 0x20), 0x10, ((int)stk + 8));
                            t405 = 0x0;
                            if (t396 != 0x100) {
                                t397 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t403 = 0x1;
                                if (t397 != 0) {
                                    t398 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t398 | 0x10);
                                    t399 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t400 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                    t401 = kmiDMAtoTARequest(0x10000000, t400, (t399 + 0x20), 0x10, ((int)stk + 8));
                                    t402 = 0x1;
                                    if (t401 == 0x100) {
                                        t402 = 0x0;
                                    }
                                    t403 = t402;
                                }
                                t405 = t403;
                            }
                            t407 = t405;
                        }
                        t417 = t407;
                    } else {
                        t409 = *(int *)(((t0 << 2) + 0xC2EAA90));
                        t415 = 0x1;
                        if (t409 != 0) {
                            t410 = *(int *)0xC2EA9E8;
                            *(unsigned int *)0xC2EA9E8 = (t410 | 0x10);
                            t411 = *(int *)(((t0 << 2) + 0xC2EAA90));
                            t412 = *(int *)(((t0 << 2) + 0xC2EAA40));
                            t413 = kmiDMAtoTARequest(0x10000000, t412, (t411 + 0x20), 0x10, ((int)stk + 8));
                            t414 = 0x1;
                            if (t413 == 0x100) {
                                t414 = 0x0;
                            }
                            t415 = t414;
                        }
                        t417 = t415;
                    }
                    t419 = t417;
                }
                t470 = t419;
            } else {
                t421 = *(int *)(((t0 << 2) + 0xC2EAA80));
                if (t421 != 0) {
                    t422 = *(int *)0xC2EA9E8;
                    *(unsigned int *)0xC2EA9E8 = (t422 | 0x8);
                    t423 = *(int *)0xC2EAAB4;
                    if (t423 == 1) {
                        t424 = *(int *)0xC2EAAB8;
                        t425 = *(int *)0xC2EAAB8;
                        t426 = *(int *)((t425 + 0x0));
                        *(unsigned int *)((t424 + 0x0)) = ((t426 & 0xF0FFFFFF) | 0x3000000);
                        t427 = *(int *)0xC2EAABC;
                        t428 = *(int *)0xC2EAAB8;
                        t429 = kmiDMAtoTARequest(0x10000000, t428, t427, 0x10, ((int)stk + 8));
                        t443 = 0x0;
                        if (t429 != 0x100) {
                            t430 = *(int *)(((t0 << 2) + 0xC2EAA80));
                            t431 = *(int *)(((t0 << 2) + 0xC2EAA30));
                            t432 = kmiDMAtoTARequest(0x10000000, t431, (t430 + 0x20), 0x10, ((int)stk + 8));
                            t441 = 0x0;
                            if (t432 != 0x100) {
                                t433 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t439 = 0x1;
                                if (t433 != 0) {
                                    t434 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t434 | 0x10);
                                    t435 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t436 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                    t437 = kmiDMAtoTARequest(0x10000000, t436, (t435 + 0x20), 0x10, ((int)stk + 8));
                                    t438 = 0x1;
                                    if (t437 == 0x100) {
                                        t438 = 0x0;
                                    }
                                    t439 = t438;
                                }
                                t441 = t439;
                            }
                            t443 = t441;
                        }
                        t458 = t443;
                    } else {
                        t445 = *(int *)(((t0 << 2) + 0xC2EAA80));
                        t446 = *(int *)(((t0 << 2) + 0xC2EAA30));
                        t447 = kmiDMAtoTARequest(0x10000000, t446, (t445 + 0x20), 0x10, ((int)stk + 8));
                        t456 = 0x0;
                        if (t447 != 0x100) {
                            t448 = *(int *)(((t0 << 2) + 0xC2EAA90));
                            t454 = 0x1;
                            if (t448 != 0) {
                                t449 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t449 | 0x10);
                                t450 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t451 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                t452 = kmiDMAtoTARequest(0x10000000, t451, (t450 + 0x20), 0x10, ((int)stk + 8));
                                t453 = 0x1;
                                if (t452 == 0x100) {
                                    t453 = 0x0;
                                }
                                t454 = t453;
                            }
                            t456 = t454;
                        }
                        t458 = t456;
                    }
                    t468 = t458;
                } else {
                    t460 = *(int *)(((t0 << 2) + 0xC2EAA90));
                    t466 = 0x1;
                    if (t460 != 0) {
                        t461 = *(int *)0xC2EA9E8;
                        *(unsigned int *)0xC2EA9E8 = (t461 | 0x10);
                        t462 = *(int *)(((t0 << 2) + 0xC2EAA90));
                        t463 = *(int *)(((t0 << 2) + 0xC2EAA40));
                        t464 = kmiDMAtoTARequest(0x10000000, t463, (t462 + 0x20), 0x10, ((int)stk + 8));
                        t465 = 0x1;
                        if (t464 == 0x100) {
                            t465 = 0x0;
                        }
                        t466 = t465;
                    }
                    t468 = t466;
                }
                t470 = t468;
            }
            t708 = t470;
        } else {
            t472 = *(int *)0xC2EA9E8;
            *(unsigned int *)0xC2EA9E8 = (t472 | 0x2);
            t473 = *(int *)0xC2EAAB4;
            if (t473 == 1) {
                t474 = *(int *)0xC2EAAB8;
                t475 = *(int *)0xC2EAAB8;
                t476 = *(int *)((t475 + 0x0));
                *(unsigned int *)((t474 + 0x0)) = ((t476 & 0xF0FFFFFF) | 0x1000000);
                t477 = *(int *)0xC2EAABC;
                t478 = *(int *)0xC2EAAB8;
                t479 = kmiDMAtoTARequest(0x10000000, t478, t477, 0x10, ((int)stk + 8));
                t592 = 0x0;
                if (t479 != 0x100) {
                    t480 = *(int *)(((t0 << 2) + 0xC2EAA60));
                    t481 = *(int *)(((t0 << 2) + 0xC2EAA10));
                    t482 = kmiDMAtoTARequest(0x10000000, t481, (t480 + 0x20), 0x10, ((int)stk + 8));
                    t590 = 0x0;
                    if (t482 != 0x100) {
                        t483 = *(int *)(((t0 << 2) + 0xC2EAA70));
                        if (t483 != 0) {
                            t484 = *(int *)0xC2EA9E8;
                            *(unsigned int *)0xC2EA9E8 = (t484 | 0x4);
                            t485 = *(int *)(((t0 << 2) + 0xC2EAA70));
                            t486 = *(int *)(((t0 << 2) + 0xC2EAA20));
                            t487 = kmiDMAtoTARequest(0x10000000, t486, (t485 + 0x20), 0x10, ((int)stk + 8));
                            t537 = 0x0;
                            if (t487 != 0x100) {
                                t488 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                if (t488 != 0) {
                                    t489 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t489 | 0x8);
                                    t490 = *(int *)0xC2EAAB4;
                                    if (t490 == 1) {
                                        t491 = *(int *)0xC2EAAB8;
                                        t492 = *(int *)0xC2EAAB8;
                                        t493 = *(int *)((t492 + 0x0));
                                        *(unsigned int *)((t491 + 0x0)) = ((t493 & 0xF0FFFFFF) | 0x3000000);
                                        t494 = *(int *)0xC2EAABC;
                                        t495 = *(int *)0xC2EAAB8;
                                        t496 = kmiDMAtoTARequest(0x10000000, t495, t494, 0x10, ((int)stk + 8));
                                        t510 = 0x0;
                                        if (t496 != 0x100) {
                                            t497 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                            t498 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                            t499 = kmiDMAtoTARequest(0x10000000, t498, (t497 + 0x20), 0x10, ((int)stk + 8));
                                            t508 = 0x0;
                                            if (t499 != 0x100) {
                                                t500 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t506 = 0x1;
                                                if (t500 != 0) {
                                                    t501 = *(int *)0xC2EA9E8;
                                                    *(unsigned int *)0xC2EA9E8 = (t501 | 0x10);
                                                    t502 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                    t503 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                    t504 = kmiDMAtoTARequest(0x10000000, t503, (t502 + 0x20), 0x10, ((int)stk + 8));
                                                    t505 = 0x1;
                                                    if (t504 == 0x100) {
                                                        t505 = 0x0;
                                                    }
                                                    t506 = t505;
                                                }
                                                t508 = t506;
                                            }
                                            t510 = t508;
                                        }
                                        t525 = t510;
                                    } else {
                                        t512 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                        t513 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                        t514 = kmiDMAtoTARequest(0x10000000, t513, (t512 + 0x20), 0x10, ((int)stk + 8));
                                        t523 = 0x0;
                                        if (t514 != 0x100) {
                                            t515 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t521 = 0x1;
                                            if (t515 != 0) {
                                                t516 = *(int *)0xC2EA9E8;
                                                *(unsigned int *)0xC2EA9E8 = (t516 | 0x10);
                                                t517 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t518 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                t519 = kmiDMAtoTARequest(0x10000000, t518, (t517 + 0x20), 0x10, ((int)stk + 8));
                                                t520 = 0x1;
                                                if (t519 == 0x100) {
                                                    t520 = 0x0;
                                                }
                                                t521 = t520;
                                            }
                                            t523 = t521;
                                        }
                                        t525 = t523;
                                    }
                                    t535 = t525;
                                } else {
                                    t527 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t533 = 0x1;
                                    if (t527 != 0) {
                                        t528 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t528 | 0x10);
                                        t529 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t530 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t531 = kmiDMAtoTARequest(0x10000000, t530, (t529 + 0x20), 0x10, ((int)stk + 8));
                                        t532 = 0x1;
                                        if (t531 == 0x100) {
                                            t532 = 0x0;
                                        }
                                        t533 = t532;
                                    }
                                    t535 = t533;
                                }
                                t537 = t535;
                            }
                            t588 = t537;
                        } else {
                            t539 = *(int *)(((t0 << 2) + 0xC2EAA80));
                            if (t539 != 0) {
                                t540 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t540 | 0x8);
                                t541 = *(int *)0xC2EAAB4;
                                if (t541 == 1) {
                                    t542 = *(int *)0xC2EAAB8;
                                    t543 = *(int *)0xC2EAAB8;
                                    t544 = *(int *)((t543 + 0x0));
                                    *(unsigned int *)((t542 + 0x0)) = ((t544 & 0xF0FFFFFF) | 0x3000000);
                                    t545 = *(int *)0xC2EAABC;
                                    t546 = *(int *)0xC2EAAB8;
                                    t547 = kmiDMAtoTARequest(0x10000000, t546, t545, 0x10, ((int)stk + 8));
                                    t561 = 0x0;
                                    if (t547 != 0x100) {
                                        t548 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                        t549 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                        t550 = kmiDMAtoTARequest(0x10000000, t549, (t548 + 0x20), 0x10, ((int)stk + 8));
                                        t559 = 0x0;
                                        if (t550 != 0x100) {
                                            t551 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t557 = 0x1;
                                            if (t551 != 0) {
                                                t552 = *(int *)0xC2EA9E8;
                                                *(unsigned int *)0xC2EA9E8 = (t552 | 0x10);
                                                t553 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t554 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                t555 = kmiDMAtoTARequest(0x10000000, t554, (t553 + 0x20), 0x10, ((int)stk + 8));
                                                t556 = 0x1;
                                                if (t555 == 0x100) {
                                                    t556 = 0x0;
                                                }
                                                t557 = t556;
                                            }
                                            t559 = t557;
                                        }
                                        t561 = t559;
                                    }
                                    t576 = t561;
                                } else {
                                    t563 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                    t564 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                    t565 = kmiDMAtoTARequest(0x10000000, t564, (t563 + 0x20), 0x10, ((int)stk + 8));
                                    t574 = 0x0;
                                    if (t565 != 0x100) {
                                        t566 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t572 = 0x1;
                                        if (t566 != 0) {
                                            t567 = *(int *)0xC2EA9E8;
                                            *(unsigned int *)0xC2EA9E8 = (t567 | 0x10);
                                            t568 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t569 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                            t570 = kmiDMAtoTARequest(0x10000000, t569, (t568 + 0x20), 0x10, ((int)stk + 8));
                                            t571 = 0x1;
                                            if (t570 == 0x100) {
                                                t571 = 0x0;
                                            }
                                            t572 = t571;
                                        }
                                        t574 = t572;
                                    }
                                    t576 = t574;
                                }
                                t586 = t576;
                            } else {
                                t578 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t584 = 0x1;
                                if (t578 != 0) {
                                    t579 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t579 | 0x10);
                                    t580 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t581 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                    t582 = kmiDMAtoTARequest(0x10000000, t581, (t580 + 0x20), 0x10, ((int)stk + 8));
                                    t583 = 0x1;
                                    if (t582 == 0x100) {
                                        t583 = 0x0;
                                    }
                                    t584 = t583;
                                }
                                t586 = t584;
                            }
                            t588 = t586;
                        }
                        t590 = t588;
                    }
                    t592 = t590;
                }
                t706 = t592;
            } else {
                t594 = *(int *)(((t0 << 2) + 0xC2EAA60));
                t595 = *(int *)(((t0 << 2) + 0xC2EAA10));
                t596 = kmiDMAtoTARequest(0x10000000, t595, (t594 + 0x20), 0x10, ((int)stk + 8));
                t704 = 0x0;
                if (t596 != 0x100) {
                    t597 = *(int *)(((t0 << 2) + 0xC2EAA70));
                    if (t597 != 0) {
                        t598 = *(int *)0xC2EA9E8;
                        *(unsigned int *)0xC2EA9E8 = (t598 | 0x4);
                        t599 = *(int *)(((t0 << 2) + 0xC2EAA70));
                        t600 = *(int *)(((t0 << 2) + 0xC2EAA20));
                        t601 = kmiDMAtoTARequest(0x10000000, t600, (t599 + 0x20), 0x10, ((int)stk + 8));
                        t651 = 0x0;
                        if (t601 != 0x100) {
                            t602 = *(int *)(((t0 << 2) + 0xC2EAA80));
                            if (t602 != 0) {
                                t603 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t603 | 0x8);
                                t604 = *(int *)0xC2EAAB4;
                                if (t604 == 1) {
                                    t605 = *(int *)0xC2EAAB8;
                                    t606 = *(int *)0xC2EAAB8;
                                    t607 = *(int *)((t606 + 0x0));
                                    *(unsigned int *)((t605 + 0x0)) = ((t607 & 0xF0FFFFFF) | 0x3000000);
                                    t608 = *(int *)0xC2EAABC;
                                    t609 = *(int *)0xC2EAAB8;
                                    t610 = kmiDMAtoTARequest(0x10000000, t609, t608, 0x10, ((int)stk + 8));
                                    t624 = 0x0;
                                    if (t610 != 0x100) {
                                        t611 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                        t612 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                        t613 = kmiDMAtoTARequest(0x10000000, t612, (t611 + 0x20), 0x10, ((int)stk + 8));
                                        t622 = 0x0;
                                        if (t613 != 0x100) {
                                            t614 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t620 = 0x1;
                                            if (t614 != 0) {
                                                t615 = *(int *)0xC2EA9E8;
                                                *(unsigned int *)0xC2EA9E8 = (t615 | 0x10);
                                                t616 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                                t617 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                                t618 = kmiDMAtoTARequest(0x10000000, t617, (t616 + 0x20), 0x10, ((int)stk + 8));
                                                t619 = 0x1;
                                                if (t618 == 0x100) {
                                                    t619 = 0x0;
                                                }
                                                t620 = t619;
                                            }
                                            t622 = t620;
                                        }
                                        t624 = t622;
                                    }
                                    t639 = t624;
                                } else {
                                    t626 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                    t627 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                    t628 = kmiDMAtoTARequest(0x10000000, t627, (t626 + 0x20), 0x10, ((int)stk + 8));
                                    t637 = 0x0;
                                    if (t628 != 0x100) {
                                        t629 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t635 = 0x1;
                                        if (t629 != 0) {
                                            t630 = *(int *)0xC2EA9E8;
                                            *(unsigned int *)0xC2EA9E8 = (t630 | 0x10);
                                            t631 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t632 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                            t633 = kmiDMAtoTARequest(0x10000000, t632, (t631 + 0x20), 0x10, ((int)stk + 8));
                                            t634 = 0x1;
                                            if (t633 == 0x100) {
                                                t634 = 0x0;
                                            }
                                            t635 = t634;
                                        }
                                        t637 = t635;
                                    }
                                    t639 = t637;
                                }
                                t649 = t639;
                            } else {
                                t641 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t647 = 0x1;
                                if (t641 != 0) {
                                    t642 = *(int *)0xC2EA9E8;
                                    *(unsigned int *)0xC2EA9E8 = (t642 | 0x10);
                                    t643 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t644 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                    t645 = kmiDMAtoTARequest(0x10000000, t644, (t643 + 0x20), 0x10, ((int)stk + 8));
                                    t646 = 0x1;
                                    if (t645 == 0x100) {
                                        t646 = 0x0;
                                    }
                                    t647 = t646;
                                }
                                t649 = t647;
                            }
                            t651 = t649;
                        }
                        t702 = t651;
                    } else {
                        t653 = *(int *)(((t0 << 2) + 0xC2EAA80));
                        if (t653 != 0) {
                            t654 = *(int *)0xC2EA9E8;
                            *(unsigned int *)0xC2EA9E8 = (t654 | 0x8);
                            t655 = *(int *)0xC2EAAB4;
                            if (t655 == 1) {
                                t656 = *(int *)0xC2EAAB8;
                                t657 = *(int *)0xC2EAAB8;
                                t658 = *(int *)((t657 + 0x0));
                                *(unsigned int *)((t656 + 0x0)) = ((t658 & 0xF0FFFFFF) | 0x3000000);
                                t659 = *(int *)0xC2EAABC;
                                t660 = *(int *)0xC2EAAB8;
                                t661 = kmiDMAtoTARequest(0x10000000, t660, t659, 0x10, ((int)stk + 8));
                                t675 = 0x0;
                                if (t661 != 0x100) {
                                    t662 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                    t663 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                    t664 = kmiDMAtoTARequest(0x10000000, t663, (t662 + 0x20), 0x10, ((int)stk + 8));
                                    t673 = 0x0;
                                    if (t664 != 0x100) {
                                        t665 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t671 = 0x1;
                                        if (t665 != 0) {
                                            t666 = *(int *)0xC2EA9E8;
                                            *(unsigned int *)0xC2EA9E8 = (t666 | 0x10);
                                            t667 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                            t668 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                            t669 = kmiDMAtoTARequest(0x10000000, t668, (t667 + 0x20), 0x10, ((int)stk + 8));
                                            t670 = 0x1;
                                            if (t669 == 0x100) {
                                                t670 = 0x0;
                                            }
                                            t671 = t670;
                                        }
                                        t673 = t671;
                                    }
                                    t675 = t673;
                                }
                                t690 = t675;
                            } else {
                                t677 = *(int *)(((t0 << 2) + 0xC2EAA80));
                                t678 = *(int *)(((t0 << 2) + 0xC2EAA30));
                                t679 = kmiDMAtoTARequest(0x10000000, t678, (t677 + 0x20), 0x10, ((int)stk + 8));
                                t688 = 0x0;
                                if (t679 != 0x100) {
                                    t680 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                    t686 = 0x1;
                                    if (t680 != 0) {
                                        t681 = *(int *)0xC2EA9E8;
                                        *(unsigned int *)0xC2EA9E8 = (t681 | 0x10);
                                        t682 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                        t683 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                        t684 = kmiDMAtoTARequest(0x10000000, t683, (t682 + 0x20), 0x10, ((int)stk + 8));
                                        t685 = 0x1;
                                        if (t684 == 0x100) {
                                            t685 = 0x0;
                                        }
                                        t686 = t685;
                                    }
                                    t688 = t686;
                                }
                                t690 = t688;
                            }
                            t700 = t690;
                        } else {
                            t692 = *(int *)(((t0 << 2) + 0xC2EAA90));
                            t698 = 0x1;
                            if (t692 != 0) {
                                t693 = *(int *)0xC2EA9E8;
                                *(unsigned int *)0xC2EA9E8 = (t693 | 0x10);
                                t694 = *(int *)(((t0 << 2) + 0xC2EAA90));
                                t695 = *(int *)(((t0 << 2) + 0xC2EAA40));
                                t696 = kmiDMAtoTARequest(0x10000000, t695, (t694 + 0x20), 0x10, ((int)stk + 8));
                                t697 = 0x1;
                                if (t696 == 0x100) {
                                    t697 = 0x0;
                                }
                                t698 = t697;
                            }
                            t700 = t698;
                        }
                        t702 = t700;
                    }
                    t704 = t702;
                }
                t706 = t704;
            }
            t708 = t706;
        }
        t710 = t708;
    }
    return t710;
}

int FUN_0c16bf4a(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t25;
    int t29;
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
    int t54;
    int t32;
    int t28;
    int t24;
    int t48;
    int t49;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((0xC2EA9CC + (t0 << 2)));
        if (t1 != 3) {
            t0 = (t0 + 0x1);
            if ((int)t0 < (int)0x4) continue;
            return t1;
        }
        t2 = *(int *)0xC2EA888;
        if (t2 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 < (int)0x4) continue;
            return t1;
        }
        break;
    }
    t3 = *(int *)0xC2EA840;
    if ((((t0 & 0x1) + 0x1) & t3) != 0) {
        t4 = *(int *)0xC2EA6E8;
        t5 = *(int *)0xC2EAAE0;
        t6 = *(int *)0xC2EAADC;
        kmiCreateRegionArray(t6, t5, 0x0, 0x1, (t0 & 0x1), ((~t4) & 0x1));
        t8 = *(int *)0xC2EA840;
        *(unsigned int *)0xC2EA840 = (((~((t0 & 0x1) + 0x1)) & t8) & 0x3);
    }
    *(unsigned int *)0xC2EA888 = 0x1;
    *(unsigned int *)(((t0 << 2) + 0xC2EA9CC)) = 0x4;
    t12 = *(int *)0xC2EA684;
    if ((t12 & 16) != 0) {
        *(unsigned int *)0xA05F8008 = 0x2;
        *(unsigned int *)0xA05F8008 = 0x0;
    }
    t14 = *(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAAF0));
    *(unsigned int *)0xA05F802C = t14;
    t15 = *(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
    *(unsigned int *)0xA05F8020 = t15;
    t16 = *(int *)0xC2EA6B4;
    if (t16 != 1) {
        t17 = *(int *)0xC2EA6A0;
        if ((t17 & 0x1) != 1) {
            t18 = *(int *)0xC2EA6A0;
            if ((t18 & 0x2C) == 32) {
                if (0x1 != 0) {
                    t19 = *(int *)0xC2F9200;
                    t20 = *(int *)(((t19 << 2) + 0xC2EA9B4));
                    t24 = t20;
                } else {
                    t21 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                    t24 = t21;
                }
                t28 = t24;
            } else {
                t25 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                t28 = t25;
            }
            t32 = t28;
        } else {
            t29 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
            t32 = t29;
        }
        *(unsigned int *)0xA05F8060 = t32;
    }
    t38 = *(int *)0xC2EA834;
    *(unsigned int *)0xA05F808C = t38;
    t39 = *(int *)0xC2EA830;
    *(unsigned int *)0xA05F8088 = (t39 & 0xFFFFFFF0);
    t40 = *(int *)0xC2EA934;
    *(unsigned int *)0xA05F8068 = t40;
    t41 = *(int *)0xC2EA938;
    *(unsigned int *)0xA05F806C = t41;
    t42 = *(int *)0xC2EA944;
    *(unsigned int *)0xA05F804C = t42;
    t43 = *(int *)0xC2EA94C;
    *(unsigned int *)0xA05F8048 = t43;
    *(unsigned int *)0xC2F91A8 = 0x0;
    t44 = *(int *)0xC2EA6A0;
    if ((t44 & 0xFFFFFFED) == 32) {
        t45 = *(int *)0xC2F9200;
        if (t45 == 0) {
            t46 = *(int *)0xC2EA980;
            t48 = t46;
            t49 = 0x20000;
        } else {
            t47 = *(int *)0xC2EA980;
            t48 = t47;
            t49 = 0x60000;
        }
        *(unsigned int *)0xA05F80F4 = (t48 | t49);
    }
    t54 = *(int *)0xFFD8000C;
    *(unsigned int *)0xC2F91E8 = t54;
    *(unsigned int *)0xC2EA9E0 = t0;
    *(unsigned int *)0xC2F91FC = 0x1;
    *(unsigned int *)0xA05F8014 = 0xFFFFFFFF;
    return 0xC2EA9E0;
}

int fmMngInit(int a4, int a5)
{
    int t58;
    int t55;
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
    int t52;
    int t20;
    int t21;
    int t50;
    int t22;
    int t23;
    int t24;
    int t48;
    int t25;
    int t26;
    int t27;
    int t36;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t34;
    int t35;
    int t38;
    int t39;
    int t40;
    int t41;
    int t43;
    int t44;
    int t45;
    int t46;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t58 = 0xFFFFFFF9;
    if ((int)a4 >= (int)0x1) {
        t55 = 0xFFFFFFF9;
        if ((int)a4 < (int)0x5) {
            *(unsigned int *)0xC178720 = 0xC2FA540;
            FUN_0c170820(a4, (((int)stk + 4) + 0x4));
            t1 = *(int *)0xC178720;
            *(unsigned short *)((t1 + 0x0)) = a4;
            t2 = *(int *)(((int)stk + 8));
            t3 = *(int *)0xC178720;
            *(unsigned int *)((t3 + 0x4)) = t2;
            t4 = *(int *)(((int)stk + 12));
            t5 = *(int *)0xC178720;
            *(unsigned int *)((t5 + 0x8)) = t4;
            t6 = *(int *)0xC178720;
            t7 = *(int *)((t6 + 0x8));
            *(unsigned int *)((t6 + 0x18)) = ((int)(t7 + 0x7FFF) >> 15);
            t8 = *(int *)0xC178720;
            t9 = *(int *)((t8 + 0x8));
            t10 = *(int *)((t8 + 0x18));
            *(unsigned int *)((t8 + 0x14)) = ((((int)t9 >> 6) - t10) - 1);
            t11 = *(int *)(((int)stk + 4));
            t12 = *(int *)0xC178720;
            *(unsigned int *)((t12 + 0xC)) = t11;
            t13 = *(int *)0xC178720;
            *(unsigned int *)((t13 + 0x1C)) = 0x0;
            t14 = *(int *)0xC178720;
            *(unsigned int *)((t14 + 0x20)) = 0x0;
            t15 = *(int *)0xC178720;
            *(unsigned int *)((t15 + 0x2C)) = 0x0;
            t16 = *(int *)0xC178720;
            t17 = *(int *)0xC178720;
            t18 = *(int *)((t17 + 0x4));
            t19 = FUN_0c170834(t18, (t16 + 0x34), 0x40);
            t52 = 0xFFFFFFFF;
            if (t19 != -1) {
                t20 = *(int *)0xC178720;
                t21 = thunk_FUN_0c170880((t20 + 0x34), 0xC17696C, 0xC);
                t50 = 0xFFFFFFF8;
                if (t21 != 0) {
                    t22 = *(int *)0xC178720;
                    t23 = *(signed char *)(((t20 + 0x34) + 0x10));
                    t24 = *(short *)((t22 + 0x0));
                    t48 = 0xFFFFFFF8;
                    if (t24 == t23) {
                        t25 = *(signed char *)(((t20 + 0x34) + 0x11));
                        *(unsigned short *)((t22 + 0x2)) = t25;
                        t26 = *(int *)0xC178720;
                        t27 = *(short *)((t26 + 0x2));
                        if (t27 != 0) {
                            t36 = 0xFFFFFFF8;
                            if (t27 == 1) {
                                t28 = *(int *)0xC178720;
                                t29 = *(int *)0xC178720;
                                t30 = *(int *)((t28 + 0x8));
                                t31 = *(int *)((t29 + 0xC));
                                FUN_0c1708bc(t31, t30);
                                t33 = *(int *)0xC178720;
                                t34 = FUN_0c1709a6(t33);
                                t35 = 0x0;
                                if (t34 != 0) {
                                    t35 = t34;
                                }
                                t36 = t35;
                            }
                            t46 = t36;
                        } else {
                            t38 = *(int *)0xC178720;
                            t39 = *(int *)0xC178720;
                            t40 = *(int *)((t38 + 0x8));
                            t41 = *(int *)((t39 + 0xC));
                            FUN_0c1708bc(t41, t40);
                            t43 = *(int *)0xC178720;
                            t44 = FUN_0c1709a6(t43);
                            t45 = 0x0;
                            if (t44 != 0) {
                                t45 = t44;
                            }
                            t46 = t45;
                        }
                        t48 = t46;
                    }
                    t50 = t48;
                }
                t52 = t50;
            }
            t55 = t52;
        }
        t58 = t55;
    }
    return t58;
}

void ADXB_EntryData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(short *)((a4 + 0xA8));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x50)) = a5;
        t1 = *(signed char *)((a4 + 0xF));
        t2 = (int)((int)a6 / (int)t1);
        t7 = t2;
    } else {
        *(unsigned int *)((a4 + 0x50)) = a5;
        t3 = *(signed char *)((a4 + 0xD));
        t4 = t3;
        if ((int)t3 < 0) {
            t4 = (t3 + 0x7);
        }
        t5 = *(signed char *)((a4 + 0xE));
        t6 = (int)((int)a6 / (int)((((t4 >> 1) >> 1) >> 1) * t5));
        t7 = t6;
    }
    *(unsigned int *)(((0x54 + a4) + 0x0)) = t7;
    *(unsigned int *)((a4 + 0x84)) = 0x0;
    *(unsigned int *)((a4 + 0xA0)) = 0x0;
    *(unsigned int *)((a4 + 0xA4)) = 0x0;
}

int ADXB_EvokeDecode(int a4)
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
    int t14;
    int t11;
    int t12;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)(((a4 + 0x50) + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x8));
    t2 = (int)((int)t0 / (int)t1);
    t3 = *(int *)(((a4 + 0x50) + 0x28));
    t4 = *(int *)(((a4 + 0x50) + 0x10));
    t5 = *(int *)(((a4 + 0x50) + 0x20));
    t6 = *(int *)(((a4 + 0x50) + 0x24));
    t7 = *(int *)(((a4 + 0x50) + 0x18));
    t8 = (int)((int)((t3 + t4) - 1) / (int)t4);
    t9 = (int)((int)((t3 + t4) - 1) % (int)t4);
    t10 = (int)((int)(((t7 - t5) + t4) - 1) / (int)t4);
    t14 = t10;
    if ((int)t8 < (int)t10) {
        t11 = *(int *)(((a4 + 0x50) + 0x18));
        t12 = t10;
        if ((int)(((t10 * t4) - ((t4 - t9) - 1)) + t5) < (int)t11) {
            t12 = (t10 + 0x1);
        }
        t14 = t12;
    }
    t15 = t6;
    if ((int)t3 < (int)t6) {
        t15 = (t6 + ((t4 - t9) - 1));
    }
    t16 = (int)((int)t15 / (int)t4);
    t17 = t2;
    if ((int)t2 > (int)t16) {
        t17 = t16;
    }
    t18 = t17;
    if ((int)t17 > (int)t8) {
        t18 = t8;
    }
    t19 = *(int *)(((a4 + 0x50) + 0x8));
    t20 = t18;
    if ((int)t18 > (int)t14) {
        t20 = t14;
    }
    if (t19 == 2) {
        return ADXB_EvokeExpandSte(a4, t20, t16, t14);
    }
    return ADXB_EvokeExpandMono(a4, t20, t16, t14);
}

int ADXB_EndDecode(int a4)
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

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = *(int *)((a4 + 0x40));
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = *(int *)((a4 + 0x44));
    t7 = (int)((int)((t0 + t2) - 1) / (int)t0);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t9 = *(int *)((a4 + 0x8));
    t10 = ADXPD_GetNumBlk(t9, ((t0 + t2) - 1));
    t11 = *(int *)(((a4 + 0x50) + 0x8));
    t12 = (int)((int)(t0 * t10) / (int)t11);
    t13 = t12;
    if ((int)t7 <= (int)t10) {
        t13 = (t12 - ((t0 - t8) - 1));
    }
    *(unsigned int *)((a4 + 0xA0)) = t13;
    *(unsigned int *)((a4 + 0xA4)) = (t1 * t10);
    if ((int)(t4 + t13) >= (int)t3) {
        t14 = *(int *)(((a4 + 0x50) + 0x8));
        if (t14 == 2) {
            return ADXB_CopyExtraBufSte(t5, t3, t6, ((t4 + t13) - t3));
        }
        return ADXB_CopyExtraBufMono(t5, t3, t6, ((t4 + t13) - t3));
    }
    return 0xA4;
}

int FUN_0c171d48(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (int)((int)0xAC44 / (int)(a5 + 0x1));
    t1 = *(signed char *)((0xC1769AC + t0));
    t2 = (int)((int)(((a5 - (((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31)))) << 8) << 2) / (int)(((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31))));
    t3 = *(int *)((a4 + 0x1C));
    t4 = *(int *)((t3 + 0x4));
    t5 = nlsndStreamSetHdOctFns(t4, (0xF & (-t1)), (0x3FF & t2));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int FUN_0c171de4(int a4, int a5)
{
    int t5;
    int t3;
    int t0;
    int t2;
    int t1;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t16;

    *(unsigned int *)((a4 + 0x3C)) = a5;
    t5 = 0x0;
    if ((int)a5 > (int)0xFFFFFC41) {
        t3 = 0x7F;
        if ((int)a5 < 0) {
            t0 = (int)((int)(((a5 << 8) - a5) - 128) / (int)0xFFFFFC41);
            t2 = 0x7F;
            if ((int)(0x7F - (t0 << 1)) <= (int)0x7F) {
                t1 = (0x7F - (t0 << 1));
                if ((int)(0x7F - (t0 << 1)) < 0) {
                    t1 = 0x0;
                }
                t2 = t1;
            }
            t3 = t2;
        }
        t5 = t3;
    }
    t8 = *(int *)((a4 + 0x18));
    if (t8 == 0) {
        t9 = *(int *)((a4 + 0x1C));
        t10 = *(int *)((t9 + 0x4));
        FUN_0c07ff20(t10, 0x0, t5);
        t12 = *(int *)((a4 + 0x1C));
        t13 = *(int *)((t12 + 0x4));
        return FUN_0c07ff20(t13, 0x1, t5);
    }
    t14 = *(short *)((a4 + 0x6));
    FUN_0c080190(t14, 0x0, t5);
    t16 = *(short *)((a4 + 0x6));
    return FUN_0c080190(t16, 0x1, t5);
}

int FUN_0c171f6c(int a4, int a5, int a6)
{
    int t4;
    int t2;
    int t0;
    int t5;
    int t6;
    int t7;
    int t8;

    *(unsigned int *)((a4 + 0x48)) = a5;
    *(unsigned int *)((a4 + 0x4C)) = a6;
    t4 = 0x0;
    if ((int)a6 >= (int)0xFFFFFFD6) {
        t2 = 0xF;
        if ((int)a6 < 0) {
            t0 = (int)((int)a6 / (int)0x3);
            t2 = (t0 + 0xF);
        }
        t4 = t2;
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdFx(t7, a5, t4);
    }
    t8 = *(short *)((a4 + 0x6));
    return nlsndStreamChgFx(t8, a5, t4);
}

int FUN_0c172042(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;

    t0 = a5;
    if ((int)a5 >= (int)0x3F) {
        t0 = 0x3F;
    }
    t1 = t0;
    if ((int)t0 <= (int)0xFFFFFFC0) {
        t1 = 0xFFFFFFC0;
    }
    *(unsigned int *)((a4 + 0x50)) = t1;
    t2 = a6;
    if ((int)a6 >= (int)0x63) {
        t2 = 0x63;
    }
    t3 = t2;
    if ((int)t2 <= (int)0xFFFFFF9D) {
        t3 = 0xFFFFFF9D;
    }
    *(unsigned int *)((a4 + 0x54)) = t3;
    t4 = (int)((int)(((t3 << 2) << 2) << 2) / (int)0x64);
    t5 = *(short *)((a4 + 0x6));
    FUN_0c080270(t5, t1, t3);
    t7 = *(short *)((a4 + 0x6));
    return FUN_0c0802b0(t7, t4);
}

int FUN_0c172132(int a4, int a5)
{
    int t3;
    int t4;
    int t1;
    int t2;
    int t0;
    int t5;
    int t6;
    int t7;

    *(unsigned int *)((a4 + 0x5C)) = a5;
    t3 = 0x5C;
    t4 = 0x0;
    if ((int)a5 >= (int)0xFFFFFFD6) {
        t1 = 0x5C;
        t2 = 0xF;
        if ((int)a5 < 0) {
            t0 = (int)((int)a5 / (int)0x3);
            t1 = t0;
            t2 = (t0 + 0xF);
        }
        t3 = t1;
        t4 = t2;
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdGain(t7, t4);
    }
    return t3;
}

int buFbrCreateFiber(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t14;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int stk[47];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    memset((((int)stk + 4) + 0x8), 0x0, 0x98, a7);
    t1 = *(int *)((a4 + 0x208));
    t2 = *(int *)((a4 + 0x20C));
    t14 = 0xFFFFFFFF;
    if (t2 != t1) {
        t3 = t1;
        t4 = 0x0;
        t5 = (0x210 + a4);
        for (;;) {
            t6 = *(int *)((t5 + 0xC));
            if (t6 == 0) break;
            t3 = 0x124;
            t4 = (t4 + 0x1);
            t5 = (t5 + t3);
        }
        *(unsigned int *)((t5 + 0x8)) = 0x0;
        *(unsigned int *)((t5 + 0xC)) = 0x1;
        t7 = *(int *)((a4 + 0x204));
        *(unsigned int *)((t5 + 0x14)) = t7;
        t8 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t5 + 0x0)) = t8;
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        *(unsigned int *)((t5 + 0x118)) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        *(unsigned int *)((t5 + 0x11C)) = 0x0;
        memmove((t5 + 0x18), (0x104 + a4), 0x100);
        setjmp((((int)stk + 4) + 0x8));
        memmove((t5 + 0x18), (((int)stk + 4) + 0x8), 0x100);
        t12 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + t12);
        t13 = *(int *)(((int)stk + 8));
        *(unsigned int *)((t5 + 0x20)) = t13;
        t14 = t4;
    }
    return t14;
}

void ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
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
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 32)) = a7;
    if ((int)a5 < (int)0x1000) {
        t0 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 24));
    t2 = FUN_0c172c3c(t1, (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0xC));
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 24));
        t4 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 8));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 12));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 16));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 20));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 32));
        *(unsigned char *)((t9 + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return;
    }
}

int FUN_0c173328(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t124;
    int t4;
    int t5;
    int t6;
    int t7;
    int t118;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t44;
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
    int t38;
    int t39;
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
    int t72;
    int t73;
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
    int t106;
    int t107;
    int t129;
    int t130;
    int t131;
    int t132;
    int t243;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t169;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t163;
    int t164;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t197;
    int t198;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t231;
    int t232;
    int t249;
    int t112;
    int t78;
    int t237;
    int t203;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x0));
    t2 = *(signed char *)((a4 + 0x2));
    t3 = *(signed char *)((a4 + 0x3));
    if ((((((unsigned char)t0 << 8) | ((unsigned char)t2 << 16)) | (((unsigned char)t3 << 16) << 8)) | (unsigned char)t1) != 0x64732E) {
        t124 = 0x0;
        if ((((((unsigned char)t0 << 8) | ((unsigned char)t2 << 16)) | (((unsigned char)t3 << 16) << 8)) | (unsigned char)t1) == 0x646E732E) {
            t4 = *(signed char *)(((a4 + 0x4) + 0x1));
            t5 = *(signed char *)(((a4 + 0x4) + 0x0));
            t6 = *(signed char *)(((a4 + 0x4) + 0x2));
            t7 = *(signed char *)(((a4 + 0x4) + 0x3));
            t118 = 0x0;
            if ((int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 8) & 0xFF00)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 8) & 0xFF0000)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 16) << 8)) <= (int)a5) {
                t8 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x1));
                t9 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x0));
                t10 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x2));
                t11 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x3));
                t12 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x1));
                t13 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
                t14 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x2));
                t15 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x3));
                if (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) >> 8) & 0xFF00)) | (((((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) << 8) & 0xFF0000)) | (((((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) << 16) << 8)) != 1) {
                    if (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) >> 8) & 0xFF00)) | (((((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) << 8) & 0xFF0000)) | (((((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) << 16) << 8)) != 2) {
                        t44 = 0x0;
                        if (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) >> 8) & 0xFF00)) | (((((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) << 8) & 0xFF0000)) | (((((((unsigned char)t12 << 8) | ((unsigned char)t14 << 16)) | (((unsigned char)t15 << 16) << 8)) | (unsigned char)t13) << 16) << 8)) == 3) {
                            *(unsigned int *)((a10 + 0x0)) = 0x0;
                            *(unsigned int *)((a8 + 0x0)) = 0x10;
                            t16 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                            t17 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                            t18 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                            t19 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                            *(unsigned int *)((a6 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t16 << 8) | ((unsigned char)t18 << 16)) | (((unsigned char)t19 << 16) << 8)) | (unsigned char)t17) >> 16) >> 8) | (((int)(((((unsigned char)t16 << 8) | ((unsigned char)t18 << 16)) | (((unsigned char)t19 << 16) << 8)) | (unsigned char)t17) >> 8) & 0xFF00)) | (((((((unsigned char)t16 << 8) | ((unsigned char)t18 << 16)) | (((unsigned char)t19 << 16) << 8)) | (unsigned char)t17) << 8) & 0xFF0000)) | (((((((unsigned char)t16 << 8) | ((unsigned char)t18 << 16)) | (((unsigned char)t19 << 16) << 8)) | (unsigned char)t17) << 16) << 8));
                            t20 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                            t21 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                            t22 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                            t23 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                            *(unsigned int *)((a7 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t20 << 8) | ((unsigned char)t22 << 16)) | (((unsigned char)t23 << 16) << 8)) | (unsigned char)t21) >> 16) >> 8) | (((int)(((((unsigned char)t20 << 8) | ((unsigned char)t22 << 16)) | (((unsigned char)t23 << 16) << 8)) | (unsigned char)t21) >> 8) & 0xFF00)) | (((((((unsigned char)t20 << 8) | ((unsigned char)t22 << 16)) | (((unsigned char)t23 << 16) << 8)) | (unsigned char)t21) << 8) & 0xFF0000)) | (((((((unsigned char)t20 << 8) | ((unsigned char)t22 << 16)) | (((unsigned char)t23 << 16) << 8)) | (unsigned char)t21) << 16) << 8));
                            t24 = *(int *)((a10 + 0x0));
                            if (t24 != 2) {
                                t25 = *(int *)((a10 + 0x0));
                                if (t25 == 1) {
                                    t26 = *(int *)((a7 + 0x0));
                                    t27 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) / (unsigned int)t26);
                                    *(unsigned int *)((a9 + 0x0)) = t27;
                                } else {
                                    t28 = *(int *)((a10 + 0x0));
                                    if (t28 == 0) {
                                        t29 = *(int *)((a7 + 0x0));
                                        t30 = (int)((unsigned int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) >> 1) / (unsigned int)t29);
                                        *(unsigned int *)((a9 + 0x0)) = t30;
                                    } else {
                                        *(unsigned int *)((a9 + 0x0)) = 0x7FFF0000;
                                    }
                                }
                            } else {
                                t38 = *(int *)((a7 + 0x0));
                                t39 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) / (unsigned int)t38);
                                *(unsigned int *)((a9 + 0x0)) = t39;
                            }
                            t44 = (a4 + ((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 8) & 0xFF00)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 8) & 0xFF0000)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 16) << 8)));
                        }
                        t78 = t44;
                    } else {
                        *(unsigned int *)((a10 + 0x0)) = 0x1;
                        *(unsigned int *)((a8 + 0x0)) = 0x8;
                        t50 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                        t51 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                        t52 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                        t53 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                        *(unsigned int *)((a6 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t50 << 8) | ((unsigned char)t52 << 16)) | (((unsigned char)t53 << 16) << 8)) | (unsigned char)t51) >> 16) >> 8) | (((int)(((((unsigned char)t50 << 8) | ((unsigned char)t52 << 16)) | (((unsigned char)t53 << 16) << 8)) | (unsigned char)t51) >> 8) & 0xFF00)) | (((((((unsigned char)t50 << 8) | ((unsigned char)t52 << 16)) | (((unsigned char)t53 << 16) << 8)) | (unsigned char)t51) << 8) & 0xFF0000)) | (((((((unsigned char)t50 << 8) | ((unsigned char)t52 << 16)) | (((unsigned char)t53 << 16) << 8)) | (unsigned char)t51) << 16) << 8));
                        t54 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                        t55 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                        t56 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                        t57 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                        *(unsigned int *)((a7 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t54 << 8) | ((unsigned char)t56 << 16)) | (((unsigned char)t57 << 16) << 8)) | (unsigned char)t55) >> 16) >> 8) | (((int)(((((unsigned char)t54 << 8) | ((unsigned char)t56 << 16)) | (((unsigned char)t57 << 16) << 8)) | (unsigned char)t55) >> 8) & 0xFF00)) | (((((((unsigned char)t54 << 8) | ((unsigned char)t56 << 16)) | (((unsigned char)t57 << 16) << 8)) | (unsigned char)t55) << 8) & 0xFF0000)) | (((((((unsigned char)t54 << 8) | ((unsigned char)t56 << 16)) | (((unsigned char)t57 << 16) << 8)) | (unsigned char)t55) << 16) << 8));
                        t58 = *(int *)((a10 + 0x0));
                        if (t58 != 2) {
                            t59 = *(int *)((a10 + 0x0));
                            if (t59 == 1) {
                                t60 = *(int *)((a7 + 0x0));
                                t61 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) / (unsigned int)t60);
                                *(unsigned int *)((a9 + 0x0)) = t61;
                            } else {
                                t62 = *(int *)((a10 + 0x0));
                                if (t62 == 0) {
                                    t63 = *(int *)((a7 + 0x0));
                                    t64 = (int)((unsigned int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) >> 1) / (unsigned int)t63);
                                    *(unsigned int *)((a9 + 0x0)) = t64;
                                } else {
                                    *(unsigned int *)((a9 + 0x0)) = 0x7FFF0000;
                                }
                            }
                        } else {
                            t72 = *(int *)((a7 + 0x0));
                            t73 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) / (unsigned int)t72);
                            *(unsigned int *)((a9 + 0x0)) = t73;
                        }
                        t78 = (a4 + ((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 8) & 0xFF00)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 8) & 0xFF0000)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 16) << 8)));
                    }
                    t112 = t78;
                } else {
                    *(unsigned int *)((a10 + 0x0)) = 0x2;
                    *(unsigned int *)((a8 + 0x0)) = 0x8;
                    t84 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                    t85 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                    t86 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                    t87 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                    *(unsigned int *)((a6 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t84 << 8) | ((unsigned char)t86 << 16)) | (((unsigned char)t87 << 16) << 8)) | (unsigned char)t85) >> 16) >> 8) | (((int)(((((unsigned char)t84 << 8) | ((unsigned char)t86 << 16)) | (((unsigned char)t87 << 16) << 8)) | (unsigned char)t85) >> 8) & 0xFF00)) | (((((((unsigned char)t84 << 8) | ((unsigned char)t86 << 16)) | (((unsigned char)t87 << 16) << 8)) | (unsigned char)t85) << 8) & 0xFF0000)) | (((((((unsigned char)t84 << 8) | ((unsigned char)t86 << 16)) | (((unsigned char)t87 << 16) << 8)) | (unsigned char)t85) << 16) << 8));
                    t88 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                    t89 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                    t90 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                    t91 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                    *(unsigned int *)((a7 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t88 << 8) | ((unsigned char)t90 << 16)) | (((unsigned char)t91 << 16) << 8)) | (unsigned char)t89) >> 16) >> 8) | (((int)(((((unsigned char)t88 << 8) | ((unsigned char)t90 << 16)) | (((unsigned char)t91 << 16) << 8)) | (unsigned char)t89) >> 8) & 0xFF00)) | (((((((unsigned char)t88 << 8) | ((unsigned char)t90 << 16)) | (((unsigned char)t91 << 16) << 8)) | (unsigned char)t89) << 8) & 0xFF0000)) | (((((((unsigned char)t88 << 8) | ((unsigned char)t90 << 16)) | (((unsigned char)t91 << 16) << 8)) | (unsigned char)t89) << 16) << 8));
                    t92 = *(int *)((a10 + 0x0));
                    if (t92 != 2) {
                        t93 = *(int *)((a10 + 0x0));
                        if (t93 == 1) {
                            t94 = *(int *)((a7 + 0x0));
                            t95 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) / (unsigned int)t94);
                            *(unsigned int *)((a9 + 0x0)) = t95;
                        } else {
                            t96 = *(int *)((a10 + 0x0));
                            if (t96 == 0) {
                                t97 = *(int *)((a7 + 0x0));
                                t98 = (int)((unsigned int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) >> 1) / (unsigned int)t97);
                                *(unsigned int *)((a9 + 0x0)) = t98;
                            } else {
                                *(unsigned int *)((a9 + 0x0)) = 0x7FFF0000;
                            }
                        }
                    } else {
                        t106 = *(int *)((a7 + 0x0));
                        t107 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) >> 8) & 0xFF00)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 8) & 0xFF0000)) | (((((((unsigned char)t8 << 8) | ((unsigned char)t10 << 16)) | (((unsigned char)t11 << 16) << 8)) | (unsigned char)t9) << 16) << 8)) / (unsigned int)t106);
                        *(unsigned int *)((a9 + 0x0)) = t107;
                    }
                    t112 = (a4 + ((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) >> 8) & 0xFF00)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 8) & 0xFF0000)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t6 << 16)) | (((unsigned char)t7 << 16) << 8)) | (unsigned char)t5) << 16) << 8)));
                }
                t118 = t112;
            }
            t124 = t118;
        }
        t249 = t124;
    } else {
        t129 = *(signed char *)(((a4 + 0x4) + 0x1));
        t130 = *(signed char *)(((a4 + 0x4) + 0x0));
        t131 = *(signed char *)(((a4 + 0x4) + 0x2));
        t132 = *(signed char *)(((a4 + 0x4) + 0x3));
        t243 = 0x0;
        if ((int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 8) & 0xFF00)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 8) & 0xFF0000)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 16) << 8)) <= (int)a5) {
            t133 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x1));
            t134 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x0));
            t135 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x2));
            t136 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x3));
            t137 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x1));
            t138 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
            t139 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x2));
            t140 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x3));
            if (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) >> 8) & 0xFF00)) | (((((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) << 8) & 0xFF0000)) | (((((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) << 16) << 8)) != 1) {
                if (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) >> 8) & 0xFF00)) | (((((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) << 8) & 0xFF0000)) | (((((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) << 16) << 8)) != 2) {
                    t169 = 0x0;
                    if (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) >> 8) & 0xFF00)) | (((((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) << 8) & 0xFF0000)) | (((((((unsigned char)t137 << 8) | ((unsigned char)t139 << 16)) | (((unsigned char)t140 << 16) << 8)) | (unsigned char)t138) << 16) << 8)) == 3) {
                        *(unsigned int *)((a10 + 0x0)) = 0x0;
                        *(unsigned int *)((a8 + 0x0)) = 0x10;
                        t141 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                        t142 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                        t143 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                        t144 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                        *(unsigned int *)((a6 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t141 << 8) | ((unsigned char)t143 << 16)) | (((unsigned char)t144 << 16) << 8)) | (unsigned char)t142) >> 16) >> 8) | (((int)(((((unsigned char)t141 << 8) | ((unsigned char)t143 << 16)) | (((unsigned char)t144 << 16) << 8)) | (unsigned char)t142) >> 8) & 0xFF00)) | (((((((unsigned char)t141 << 8) | ((unsigned char)t143 << 16)) | (((unsigned char)t144 << 16) << 8)) | (unsigned char)t142) << 8) & 0xFF0000)) | (((((((unsigned char)t141 << 8) | ((unsigned char)t143 << 16)) | (((unsigned char)t144 << 16) << 8)) | (unsigned char)t142) << 16) << 8));
                        t145 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                        t146 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                        t147 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                        t148 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                        *(unsigned int *)((a7 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t145 << 8) | ((unsigned char)t147 << 16)) | (((unsigned char)t148 << 16) << 8)) | (unsigned char)t146) >> 16) >> 8) | (((int)(((((unsigned char)t145 << 8) | ((unsigned char)t147 << 16)) | (((unsigned char)t148 << 16) << 8)) | (unsigned char)t146) >> 8) & 0xFF00)) | (((((((unsigned char)t145 << 8) | ((unsigned char)t147 << 16)) | (((unsigned char)t148 << 16) << 8)) | (unsigned char)t146) << 8) & 0xFF0000)) | (((((((unsigned char)t145 << 8) | ((unsigned char)t147 << 16)) | (((unsigned char)t148 << 16) << 8)) | (unsigned char)t146) << 16) << 8));
                        t149 = *(int *)((a10 + 0x0));
                        if (t149 != 2) {
                            t150 = *(int *)((a10 + 0x0));
                            if (t150 == 1) {
                                t151 = *(int *)((a7 + 0x0));
                                t152 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) / (unsigned int)t151);
                                *(unsigned int *)((a9 + 0x0)) = t152;
                            } else {
                                t153 = *(int *)((a10 + 0x0));
                                if (t153 == 0) {
                                    t154 = *(int *)((a7 + 0x0));
                                    t155 = (int)((unsigned int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) >> 1) / (unsigned int)t154);
                                    *(unsigned int *)((a9 + 0x0)) = t155;
                                } else {
                                    *(unsigned int *)((a9 + 0x0)) = 0x7FFF0000;
                                }
                            }
                        } else {
                            t163 = *(int *)((a7 + 0x0));
                            t164 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) / (unsigned int)t163);
                            *(unsigned int *)((a9 + 0x0)) = t164;
                        }
                        t169 = (a4 + ((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 8) & 0xFF00)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 8) & 0xFF0000)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 16) << 8)));
                    }
                    t203 = t169;
                } else {
                    *(unsigned int *)((a10 + 0x0)) = 0x1;
                    *(unsigned int *)((a8 + 0x0)) = 0x8;
                    t175 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                    t176 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                    t177 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                    t178 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                    *(unsigned int *)((a6 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t175 << 8) | ((unsigned char)t177 << 16)) | (((unsigned char)t178 << 16) << 8)) | (unsigned char)t176) >> 16) >> 8) | (((int)(((((unsigned char)t175 << 8) | ((unsigned char)t177 << 16)) | (((unsigned char)t178 << 16) << 8)) | (unsigned char)t176) >> 8) & 0xFF00)) | (((((((unsigned char)t175 << 8) | ((unsigned char)t177 << 16)) | (((unsigned char)t178 << 16) << 8)) | (unsigned char)t176) << 8) & 0xFF0000)) | (((((((unsigned char)t175 << 8) | ((unsigned char)t177 << 16)) | (((unsigned char)t178 << 16) << 8)) | (unsigned char)t176) << 16) << 8));
                    t179 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                    t180 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                    t181 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                    t182 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                    *(unsigned int *)((a7 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t179 << 8) | ((unsigned char)t181 << 16)) | (((unsigned char)t182 << 16) << 8)) | (unsigned char)t180) >> 16) >> 8) | (((int)(((((unsigned char)t179 << 8) | ((unsigned char)t181 << 16)) | (((unsigned char)t182 << 16) << 8)) | (unsigned char)t180) >> 8) & 0xFF00)) | (((((((unsigned char)t179 << 8) | ((unsigned char)t181 << 16)) | (((unsigned char)t182 << 16) << 8)) | (unsigned char)t180) << 8) & 0xFF0000)) | (((((((unsigned char)t179 << 8) | ((unsigned char)t181 << 16)) | (((unsigned char)t182 << 16) << 8)) | (unsigned char)t180) << 16) << 8));
                    t183 = *(int *)((a10 + 0x0));
                    if (t183 != 2) {
                        t184 = *(int *)((a10 + 0x0));
                        if (t184 == 1) {
                            t185 = *(int *)((a7 + 0x0));
                            t186 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) / (unsigned int)t185);
                            *(unsigned int *)((a9 + 0x0)) = t186;
                        } else {
                            t187 = *(int *)((a10 + 0x0));
                            if (t187 == 0) {
                                t188 = *(int *)((a7 + 0x0));
                                t189 = (int)((unsigned int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) >> 1) / (unsigned int)t188);
                                *(unsigned int *)((a9 + 0x0)) = t189;
                            } else {
                                *(unsigned int *)((a9 + 0x0)) = 0x7FFF0000;
                            }
                        }
                    } else {
                        t197 = *(int *)((a7 + 0x0));
                        t198 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) / (unsigned int)t197);
                        *(unsigned int *)((a9 + 0x0)) = t198;
                    }
                    t203 = (a4 + ((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 8) & 0xFF00)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 8) & 0xFF0000)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 16) << 8)));
                }
                t237 = t203;
            } else {
                *(unsigned int *)((a10 + 0x0)) = 0x2;
                *(unsigned int *)((a8 + 0x0)) = 0x8;
                t209 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                t210 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                t211 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                t212 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                *(unsigned int *)((a6 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t209 << 8) | ((unsigned char)t211 << 16)) | (((unsigned char)t212 << 16) << 8)) | (unsigned char)t210) >> 16) >> 8) | (((int)(((((unsigned char)t209 << 8) | ((unsigned char)t211 << 16)) | (((unsigned char)t212 << 16) << 8)) | (unsigned char)t210) >> 8) & 0xFF00)) | (((((((unsigned char)t209 << 8) | ((unsigned char)t211 << 16)) | (((unsigned char)t212 << 16) << 8)) | (unsigned char)t210) << 8) & 0xFF0000)) | (((((((unsigned char)t209 << 8) | ((unsigned char)t211 << 16)) | (((unsigned char)t212 << 16) << 8)) | (unsigned char)t210) << 16) << 8));
                t213 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                t214 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                t215 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                t216 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                *(unsigned int *)((a7 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t213 << 8) | ((unsigned char)t215 << 16)) | (((unsigned char)t216 << 16) << 8)) | (unsigned char)t214) >> 16) >> 8) | (((int)(((((unsigned char)t213 << 8) | ((unsigned char)t215 << 16)) | (((unsigned char)t216 << 16) << 8)) | (unsigned char)t214) >> 8) & 0xFF00)) | (((((((unsigned char)t213 << 8) | ((unsigned char)t215 << 16)) | (((unsigned char)t216 << 16) << 8)) | (unsigned char)t214) << 8) & 0xFF0000)) | (((((((unsigned char)t213 << 8) | ((unsigned char)t215 << 16)) | (((unsigned char)t216 << 16) << 8)) | (unsigned char)t214) << 16) << 8));
                t217 = *(int *)((a10 + 0x0));
                if (t217 != 2) {
                    t218 = *(int *)((a10 + 0x0));
                    if (t218 == 1) {
                        t219 = *(int *)((a7 + 0x0));
                        t220 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) / (unsigned int)t219);
                        *(unsigned int *)((a9 + 0x0)) = t220;
                    } else {
                        t221 = *(int *)((a10 + 0x0));
                        if (t221 == 0) {
                            t222 = *(int *)((a7 + 0x0));
                            t223 = (int)((unsigned int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) >> 1) / (unsigned int)t222);
                            *(unsigned int *)((a9 + 0x0)) = t223;
                        } else {
                            *(unsigned int *)((a9 + 0x0)) = 0x7FFF0000;
                        }
                    }
                } else {
                    t231 = *(int *)((a7 + 0x0));
                    t232 = (int)((unsigned int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) >> 8) & 0xFF00)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 8) & 0xFF0000)) | (((((((unsigned char)t133 << 8) | ((unsigned char)t135 << 16)) | (((unsigned char)t136 << 16) << 8)) | (unsigned char)t134) << 16) << 8)) / (unsigned int)t231);
                    *(unsigned int *)((a9 + 0x0)) = t232;
                }
                t237 = (a4 + ((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) >> 8) & 0xFF00)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 8) & 0xFF0000)) | (((((((unsigned char)t129 << 8) | ((unsigned char)t131 << 16)) | (((unsigned char)t132 << 16) << 8)) | (unsigned char)t130) << 16) << 8)));
            }
            t243 = t237;
        }
        t249 = t243;
    }
    return t249;
}

void ADXPD_EntrySte(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x2;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = a8;
        return;
    }
}
