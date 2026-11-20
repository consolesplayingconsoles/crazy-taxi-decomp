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


void sys_init(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[3] = {0};
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x1201;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = (((struct o20_int *)0xFFA00020)->v);
        *(unsigned int *)(((int)stk + 8)) = t1;
        if (t1 == 0x8201) break;
        R1004 = 0x0;
        for (;;) {
            t2 = R1004;
            if ((int)t2 >= (int)0x10000) break;
            t3 = R1004;
            t0 = t3;
            t0 = (t0 + 0x1);
            R1004 = t0;
        }
        (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    }
}


int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6)
{
    int t56;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t15;
    int t9;
    int t16;
    int t21;
    int t22;
    int t24;
    int t27;
    int t29;
    int t30;
    int t32;
    int t34;
    int t37;
    int t38;
    int t39;
    int t42;
    int t44;
    int t45;
    int t46;
    int t48;
    int t51;
    int stk[15] = {0};
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    R1008 = a5;
    R1012 = a6;
    R1020 = 0x0;
    t4 = *(int *)((a4 + 0x0));
    t56 = 0x0;
    if ((int)t4 >= 0) {
        t1 = *(int *)((a4 + 0x18));
        t56 = 0x0;
        if (t1 != 0) {
            t2 = R1008;
            R1016 = ((((t2 == 0)) ? 1 : 0) ^ 0x1);
            t3 = ((((t2 == 0)) ? 1 : 0) ^ 0x1);
            t5 = (a4 + 0x18);
            do {
                t6 = *(int *)((t5 + 0x20));
                t7 = t5;
                t5 = (t5 + 0x50);
                if ((int)t6 >= 0) {
                    t8 = R1012;
                    t15 = t6;
                    if (t8 != 0) {
                        t9 = R1016;
                        t15 = t6;
                        if (t9 != 0) {
                            t4 = R1008;
                            t15 = *(int *)(((((t6 << 2) << 2) + t4) + 0xC));
                        }
                    }
                    t16 = *(int *)0xC2AEC84;
                    t4 = *(int *)0xC2B3184;
                    t3 = *(int *)(((t16 + (((t15 + t4) << 2) << 1)) + 0x0));
                    t21 = (((t15 + t4) << 2) << 1);
                    t4 = 0x0;
                    if ((unsigned int)t3 > (unsigned int)t4) {
                        t22 = *(int *)0xC2AEC84;
                        t3 = *(int *)(((t22 + t21) + 0x0));
                        t3 = (t3 - 1);
                        *(unsigned int *)(((t22 + t21) + 0x0)) = t3;
                        t24 = *(int *)0xC2AEC84;
                        t3 = *(int *)(((t24 + t21) + 0x0));
                        if (t3 == 0) {
                            t3 = *(int *)0xC2AEC84;
                            t3 = (t3 + t21);
                            t27 = *(int *)((t3 + 0x4));
                            R1004 = t27;
                            t3 = R1004;
                            t29 = *(int *)0xC2B29C0;
                            t30 = *(int *)(((t29 + (t3 * 0x3C)) + 0x28));
                            t32 = (t3 * 0x3C);
                            t3 = t30;
                            if (t3 == 0) {
                                t34 = *(int *)0xC2B29C0;
                                t3 = kmFreeTexture((t34 + t32));
                                if (t3 != 0) {
                                    t4 = 0x1;
                                    R1020 = t4;
                                }
                            }
                            t37 = *(int *)0xC2B29C0;
                            t4 = 0x0;
                            *(unsigned int *)(((t37 + t32) + 0x2C)) = t4;
                            t38 = *(int *)0xC2B29C0;
                            *(unsigned int *)(((t38 + t32) + 0x38)) = 0xFFFFFFFF;
                            t39 = R1004;
                            t3 = nlCommonTextureClearTextureIndex(t39);
                            t4 = *(int *)0xC2AEC84;
                            t4 = (t4 + t21);
                            *(unsigned int *)((t4 + 0x4)) = 0xFFFFFFFF;
                        }
                    }
                }
                t4 = 0xC14A644;
                t42 = *(int *)((t4 + 0x0));
                if (t42 == 0) {
                    t3 = *(int *)((t7 + 0xC));
                    t3 = ((unsigned int)t3 >> 27);
                    t44 = *(int *)0xC2B3568;
                    if (t44 != 0) {
                        t45 = (0x7 & t3);
                        t3 = (0x7 & t3);
                        if (t3 != 5) {
                            t3 = t45;
                            if (t3 == 6) {
                                t46 = *(int *)((t7 + 0x3C));
                                t3 = nlFreePalette(t46);
                            }
                        } else {
                            t48 = *(int *)((t7 + 0x3C));
                            t3 = nlFreePalette(t48);
                        }
                    }
                }
                t3 = 0x4C;
                t4 = *(int *)((t7 + t3));
                t5 = (t5 + t4);
                t51 = *(int *)((t5 + 0x0));
            } while (t51 != 0);
            t56 = R1020;
        }
    }
    return t56;
}


