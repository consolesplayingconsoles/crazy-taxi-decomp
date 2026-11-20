/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetBubble(int, int);
int ReturnBreakPin(int);
int nd_SprPut(int, int, float, float);
int Start_Bowling_Message(void);
int ndPuru2Check(void);
int Start_CrazyBox_Voice(int);
int nlSetPaletteMap(int, int);
int nlSetPaletteData(int, int, int);
int nlsndSeqRequest(void);
int nlObjPutLoadTextureCallBack(void);
int syCacheOCWB(int, int);
int syCachePurgeAll(void);
int kmytex_FBAllocEntry(void);
int kmytex_FBFreeEntry(int);
int kmytex_FBEnQueueTop(int, int, int);
int vmsfs_memcpyl(int, int, int);
int syIntAdrChk_dumpline(int, int);
int syIntAdrChk_init(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_finish(void);
int syIntAdrChk_prints(int);
int syIntAdrChk_printh(int);
int ResetFadeColor(void);
int SetEffect(int, int, int);
int Sound_Request(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(void);
int kdGetDevice(int);
int kdGetDeviceInfo(void);
int kdGetStatus(void);
int kdIsChanged(void);
int kdSetBlockRead(void);
int kmFreeTexture(int);
int kmiFatalErrorEntry(int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int make_header(int, int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_init_globals(void);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_set_dreq_ns(void);
int mpdrv_set_end_ns(void);
int mpdrv_swaplong(int, int);
int mwRnaErrCallFunc(int, ...);
int mwlRnaStartCopy(int, int, int, int, int);
int nlCommonTextureClearTextureIndex(int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlFreePalette(int);
int nlLoadTextureMem(int, int, int);
int nlLocate(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlRand(void);
float nlScalor(int);
int nlSearchPalette(int, int);
int nlSetDummyTextureParameter(int);
int nlSetTextureParameter(int, int);
int pdVibStart(int, int);
int setTechnicalBonus(int, int);
int ndPuru2Stop(void);
int vmsfb_sleep(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_sys(int);
void sys_init(void);
void syChainInit(void);
void syCacheInit_P2_(int a4);
int nlsndStreamChgFilter(int a4, int a5, int a6);
int nlsndStreamChgFx(int a4, int a5, int a6);
int vmsfs_fsetparam(int a4, int a5, int a6);
int vmsfs_setvolume(int a4, int a5);
int trigger(int a4, int a5);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int Result_Drop_Lowest_Rank(void);
int hudLoadRanking(void);
int vmsio_block_read(int a4, int a5, int a6);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6);
int vmsfs_init_work_normal(int a4, int a5, int a6);
int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int kmiErrorRecover(int a4);
int mwlRnaStartTrans(int a4);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int Put_Bowling_Pins(void);
int nlsndStreamInit(int a4, int a5, int a6);
int syIntChkDump(int a4, int a5);
int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8);
int adxb_DecodeInfoAiffSub(int a4, int a5, int a6, int a7, int a8);
int kmiVQallocFB(int a4, int a5, int a6, int a7, int a8, int a9);
int nd_Exec_Puru2(int a4);
int ExecEffect(int a4, int a5);
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
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
    int t13;
    int t14;
    int t17;
    int t18;
    int t19;
    int t20;
    int t24;
    int t25;
    int t26;
    int stk[9] = {0};

    t0 = *(signed char *)((a4 + 0x7));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)t0 << 2) << 2);
    t1 = *(signed char *)((a4 + 0x9));
    *(unsigned char *)((a10 + 0x0)) = ((t1 & 0x3) + 0x1);
    t2 = *(short *)((a4 + 0x2A));
    *(unsigned int *)((a11 + 0x0)) = (unsigned short)t2;
    t3 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)(((int)stk + 4)) = t3;
    t4 = *(signed char *)(((int)stk + 4));
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            if ((unsigned char)t4 != 2) {
                if ((unsigned char)t4 == 3) {
                    *(unsigned char *)((a8 + 0x0)) = 0x4;
                    t5 = *(signed char *)((a10 + 0x0));
                    *(unsigned char *)((a9 + 0x0)) = t5;
                    *(unsigned int *)((a13 + 0x0)) = 0x2;
                    t6 = *(int *)(((a4 + 0xC) + 0x0));
                    *(unsigned int *)((a12 + 0x0)) = (t6 << 1);
                    *(unsigned short *)((a14 + 0x0)) = 0x2;
                }
            } else {
                *(unsigned char *)((a8 + 0x0)) = 0x4;
                t9 = *(signed char *)((a10 + 0x0));
                *(unsigned char *)((a9 + 0x0)) = t9;
                *(unsigned int *)((a13 + 0x0)) = 0x2;
                t10 = *(int *)(((a4 + 0xC) + 0x0));
                *(unsigned int *)((a12 + 0x0)) = (t10 << 1);
                *(unsigned short *)((a14 + 0x0)) = 0x2;
            }
        } else {
            *(unsigned char *)((a8 + 0x0)) = 0x8;
            t13 = *(signed char *)((a10 + 0x0));
            *(unsigned char *)((a9 + 0x0)) = t13;
            *(unsigned int *)((a13 + 0x0)) = 0x1;
            t14 = *(int *)(((a4 + 0xC) + 0x0));
            *(unsigned int *)((a12 + 0x0)) = t14;
            *(unsigned short *)((a14 + 0x0)) = 0x1;
        }
    } else {
        *(unsigned char *)((a8 + 0x0)) = 0x10;
        t17 = *(signed char *)((a10 + 0x0));
        *(unsigned char *)((a9 + 0x0)) = (t17 << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        t18 = *(int *)(((a4 + 0xC) + 0x0));
        t19 = (int)((unsigned int)t18 + (unsigned int)0x0);
        t20 = (int)((unsigned int)t19 + ((((int)0x0 > (int)t18)) ? 1u : 0u));
        *(unsigned int *)((a12 + 0x0)) = (t20 >> 1);
        *(unsigned short *)((a14 + 0x0)) = 0x0;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t24 = *(int *)(((a4 + 0xC) + 0x0));
    t25 = (int)((unsigned int)t24 + (unsigned int)0x0);
    t26 = (int)((unsigned int)t25 + ((((int)0x0 > (int)t24)) ? 1u : 0u));
    *(unsigned int *)((a12 + 0x0)) = (t26 >> 1);
    *(unsigned char *)((a8 + 0x0)) = 0x10;
    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}


int mwlRnaStartTrans(int a4)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
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
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t22;
    int t47;
    int stk[13] = {0};
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    t0 = *(int *)((a4 + 0x8));
    t1 = (int)((int)0x20 / (int)t0);
    t2 = *(int *)((a4 + 0x34));
    t3 = *(int *)((a4 + 0x28));
    t4 = (int)((int)(t3 - t2) / (int)((t1 << 2) << 1));
    t5 = 0x0;
    for (;;) {
        t6 = *(signed char *)((a4 + 0x3));
        if ((int)t5 >= (int)(unsigned char)t6) break;
        t7 = *(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0));
        if (t7 == 0) {
            mwRnaErrCallFunc(0xC176700);
        }
        t10 = *(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0));
        R1008 = t10;
        t11 = *(int *)((a4 + 0x8));
        t12 = *(int *)((t10 + 0x0));
        t13 = *(int *)((t12 + 0x18));
        t14 = ((t4 * ((t1 << 2) << 1)) * t11);
        if ((int)((t4 * ((t1 << 2) << 1)) * t11) < 0) {
            t14 = (((t4 * ((t1 << 2) << 1)) * t11) + 0x7);
        }
        t15 = R1008;
        t16 = ((int (*)(int, int, int, int))(t13))(t15, 0x1, (((t14 >> 1) >> 1) >> 1), (((t5 << 2) << 1) + (a4 + 0x18)));
        t5 = (t5 + 0x1);
    }
    t17 = *(signed char *)((a4 + 0x3));
    if ((unsigned char)t17 == 1) {
        t18 = *(int *)((a4 + 0x1C));
        t22 = t18;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (a4 + 0x18);
        t19 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)(((int)stk + 12)) = ((a4 + 0x18) + 0x8);
        t20 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t21 = t20;
        if ((int)t19 < (int)t20) {
            t21 = t19;
        }
        t22 = t21;
    }
    t23 = *(int *)((a4 + 0x8));
    t24 = (int)((int)t22 / (int)t23);
    t25 = ((t24 << 2) << 1);
    if ((int)((t24 << 2) << 1) >= (int)(t4 * ((t1 << 2) << 1))) {
        t25 = (t4 * ((t1 << 2) << 1));
    }
    t26 = *(int *)((a4 + 0x28));
    t27 = *(int *)((a4 + 0x2C));
    t28 = t25;
    if ((int)t25 >= (int)(t26 - t27)) {
        t28 = (t26 - t27);
    }
    t29 = (int)((int)t28 / (int)((t1 << 2) << 1));
    if ((int)(t29 * ((t1 << 2) << 1)) <= 0) {
        t30 = (t29 * ((t1 << 2) << 1));
        t31 = 0x0;
        for (;;) {
            t32 = *(signed char *)((a4 + 0x3));
            if ((int)t31 >= (int)(unsigned char)t32) break;
            t33 = *(int *)((((a4 + 0x10) + (t31 << 2)) + 0x0));
            if (t33 == 0) {
                mwRnaErrCallFunc(0xC176700);
            }
            t30 = a4;
            t30 = (t30 + 0x10);
            t30 = (t30 + (t31 << 2));
            t36 = *(int *)((t30 + 0x0));
            t30 = t36;
            t37 = *(int *)((t30 + 0x0));
            t38 = *(int *)((t37 + 0x1C));
            t39 = ((int (*)(int, int, int))(t38))(t30, 0x1, (((t31 << 2) << 1) + (a4 + 0x18)));
            t31 = (t31 + 0x1);
        }
        t47 = 0x0;
    } else {
        t41 = 0xC2F751C;
        t42 = 0x0;
        for (;;) {
            t43 = *(signed char *)((a4 + 0x3));
            if ((int)t42 >= (int)(unsigned char)t43) break;
            t44 = *(int *)((a4 + 0x2C));
            t45 = *(int *)(((((t42 << 2) << 1) + (a4 + 0x18)) + 0x0));
            *(unsigned int *)0xC2F751C = 0x0;
            t41 = a4;
            t46 = mwlRnaStartCopy(t41, t42, t44, t45, (t29 * ((t1 << 2) << 1)));
            t42 = (t42 + 0x1);
            *(unsigned int *)0xC2F7520 = 0x0;
            t41 = t46;
        }
        *(unsigned int *)((a4 + 0x3C)) = t41;
        t47 = t41;
    }
    return t47;
}


