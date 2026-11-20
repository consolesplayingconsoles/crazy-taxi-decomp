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


void syCacheInit_P2_(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[4] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 8)) = t0;
    _builtin_set_imask(0xF);
    syCachePurgeAll();
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xFF00001C = t2;
    t3 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t3 & 0xFFFFF7FF) | 0x800);
    t4 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t4 & 0xFFFFFFF7) | 0x8);
    t5 = *(short *)(((int)stk + 8));
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
}


int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t19;
    int t20;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t41;
    int t44;
    int stk[8] = {0};

    *(unsigned char *)(((int)stk + 4)) = a4;
    make_header(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t1 = *(signed char *)((a5 + 0x2));
    t2 = *(signed char *)(((int)stk + 4));
    if (((unsigned char)t1 & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        t3 = *(int *)((a7 + 0x24));
        *(unsigned int *)((a7 + 0x24)) = (t3 + 0x1);
    }
    t5 = *(signed char *)((a5 + 0x3));
    if (((unsigned char)t5 & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    t7 = *(signed char *)((a5 + 0x0));
    if (((unsigned char)t7 & (unsigned char)t2) != 0) {
        t8 = *(signed char *)((a7 + 0x7));
        if (t8 == 0) {
            t9 = *(signed char *)((a7 + 0x0));
            if (t9 != 0) {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t8 == 1) {
                t11 = *(signed char *)((a7 + 0x8));
                if ((unsigned char)t11 == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    t12 = *(int *)((a7 + 0x24));
                    *(unsigned int *)((a7 + 0x24)) = (t12 + 0x1);
                    t13 = *(int *)0xC2FA538;
                    t14 = (((struct o10D8_int *)(t13))->v);
                    t15 = *(int *)((a7 + 0x24));
                    if ((unsigned int)t15 <= (unsigned int)t14) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                t19 = *(signed char *)((a7 + 0x7));
                if ((unsigned char)t19 == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    t20 = *(signed char *)((a7 + 0x7));
                    if (t20 != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    t29 = *(signed char *)((a7 + 0x0));
    if (t29 != 0) {
        t30 = *(signed char *)((a7 + 0x7));
        if (t30 != 0) {
            t31 = *(int *)0xC2FA538;
            t32 = (((struct o10C4_int *)(t31))->v);
            if (t32 == 1) {
                t33 = *(int *)((a8 + 0x0));
                if (t33 != -1) {
                    if (t33 != 0xFFFFFF00) {
                        t34 = *(int *)((a8 + 0x0));
                        mpdrv_swaplong(a8, ((unsigned char)t34 + 0x1));
                    }
                }
            }
        }
    }
    t41 = *(signed char *)((a7 + 0x2));
    if (t41 != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_make_deviceinfo(a6, a7, a8);
    }
    t44 = *(signed char *)((a7 + 0x3));
    if (t44 != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}


