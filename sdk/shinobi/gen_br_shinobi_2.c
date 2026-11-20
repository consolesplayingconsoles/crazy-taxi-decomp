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


void syChainInit(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[2] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = 0xC2EAC10;
    do {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
    } while ((unsigned int)t1 < (unsigned int)0xC2EBC10);
    t2 = 0xC2EBC10;
    do {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
    } while ((unsigned int)t2 < (unsigned int)0xC2EBF10);
    t3 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t3 & 0xF) << 2) << 2) >> 4));
}


