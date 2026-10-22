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
