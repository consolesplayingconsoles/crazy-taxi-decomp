/* Straight-line functions with calls and guards (batch gen_atu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXT_Stop(int);
int SJMEM_Create(int, int);
int adxt_start_sj(int, int);
int gdc_FileLoad(int, int, int);
int gdc_SpriteFreeMenu(void);
int kmChangeDisplayFilterMode(int, int, int, int);
int nlArcTan(float);
int nlCalcPoint4(int, int);
float nlCos(int);
float nlCosf(float);
int nlFreePalette(int);
int nlMultiMatrix(int);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateXSC_L(float, float);
int nlRotateYSC(float, float);
int nlRotateYSC_L(float, float);
int nlRotateZSC(float, float);
int nlRotateZSC_L(float, float);
int nlSearchPalette(int, int);
int nlSetBackColor(int, int, int);
int nlSetCommonTextureOffset(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSetWindowSize(float, float, float, float);
float nlSinf(float);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int nlSetPalette(int a4, int a5);
int bootInitBuffers(void);
int nlProjectScreen(int a4, int a5);
int nlSetDisplayConfig(int a4, int a5, int a6, int a7);
int bootDevCheckStatus(void);
int ADXT_StartMem(int a4, int a5);
int gdc_SpriteSetMode4(void);
int Put_Adv_InsertMoreCoin(void);
int Put_Adv_FreePlay(void);
int Put_Adv_InsertCoin(void);
int bootDevReset(void);
int bootDevSetReg(int a4, int a5);
int gdFsDaPause(void);
int nlRotateRX_L(float f4);
int nlRotateRY(float f4);
int nlRotateRY_L(float f4);
int nlRotateRZ_L(float f4);
int nlRotateRZ(float f4);
int bootCopyWords(int a4, int a5, int a6);
int nlIntrSetVectorFunction(int a4, int a5);
int gdFsGetGlobalErr(void);
int gdFsDaPlaySct(void);
int gdFsDaPlay(void);
int gdFsDaStop(void);
int gdFsDaGetInfo(void);
int gdFsDaRelease(void);
int gdFsIsTrayOpen(void);
void bootFillWords(int a4, int a5, int a6);
int bootJumpUncached(void);
int gdFsReadW(void);
int gdFsSetGlobalErr(void);
void bootWritePortInv(int a4);
int bootSerialDataReady(void);
int nlIntrSetEventB00Function(int a4, int a5);
int nlIntrSetEventA40Function(int a4, int a5);
void bootNop(void);
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_int { char p[0x4C]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };


int gdFsGetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o4C_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaPlaySct(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o60_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaPlay(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o5C_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaStop(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o64_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaGetInfo(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o70_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaRelease(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o6C_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsIsTrayOpen(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = (((struct o78_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsReadW(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x1C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsSetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x18));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


