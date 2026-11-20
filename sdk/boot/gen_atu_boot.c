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


int bootInitBuffers(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)(((0x8C00E000 + t0) + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x42) {
            break;
        }
    }
    (((struct o34_uint *)0x8C00E03C)->v) = 0x8C00F400;
    (((struct o38_uint *)0x8C00E03C)->v) = 0x600000E0;
    *(unsigned int *)0x8C00E0C4 = 0x40001;
    t0 = 0x1;
    t1 = 0x200;
    for (;;) {
        bootCopyWords((0x8C00E000 + t1), 0x8C00E000, 0x80);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x200);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x200;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((0x8C00E03C + t0) + 0x0)) = (0x8C00E000 + t2);
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x200);
        *(unsigned int *)((t0 + 0x8C00E078)) = ((0x8C00E000 + t0) + 0x120);
        *(unsigned int *)((((0x8C00E000 + t0) + 0x120) + 0x0)) = (0x7001AFFE | t1);
        t1 = (t1 + 0x1000000);
        t0 = (t0 + 0x200);
        if ((int)t3 >= (int)0x8) {
            break;
        }
    }
    (((struct o0_uint *)0x8C00E03C)->v) = 0xC00F400;
    *(unsigned int *)0x8C00F520 = 0x8C00E000;
    (((struct o0_uint *)0x8C00FA18)->v) = 0x0;
    (((struct o4_uint *)0x8C00FA18)->v) = 0x8C00E000;
    return (((int (*)(int, int, int, int))(0xAC010368))(t0, 0x120, t1, t2));
}


int bootDevCheckStatus(void)
{
    register int t0;
    register int t4;
    register int t6;

    t0 = (((struct o0_int *)0xAC00F728)->v);
    if (((*(signed char *)((t0 + 0x8))) & 0x80) != 0) {
        t4 = *(signed char *)((t0 + 0x10));
        *(volatile signed char *)(((0x14 + t0) + 0x0));
        if (((unsigned char)t4 != 0x80) && ((unsigned char)t4 != 0x81)) {
            return 0x0;
        }
        if ((unsigned char)t4 == 0x81) {
            (((struct o14_uchar *)(t0))->v) = 0x39;
            t6 = ((int (*)(int, int, int))(0xAC0118F8))(t0, t4, 0x80);
            *(volatile signed char *)((((((struct o4_int *)0xAC00F728)->v)) + 0x0));
        }
        return 0x1;
    }
    return 0x0;
}


int bootDevReset(void)
{
    *(unsigned char *)((((((struct o4_int *)0xAC00F728)->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct o4_int *)0xAC00F728)->v)) + 0x4)) = 0x0;
    *(unsigned char *)((((((struct o0_int *)0xAC00F728)->v)) + 0x14)) = 0x24;
    return ((int (*)(int, int))(0xAC0118F8))(0x0, 0xAC00F72C);
}

int bootDevSetReg(int a4, int a5)
{
    *(unsigned char *)(((0x3C + (*(int *)0xAC00F728)) + 0x0)) = (((unsigned int)((unsigned int)a4 >> 2) >> 2) | 0x80);
    *(unsigned char *)(((((a4 & 0xF) << 2) + (*(int *)0xAC00F734)) + 0x0)) = a5;
    return 0xF;
}


int bootCopyWords(int a4, int a5, int a6)
{
    register int t4;
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t4 = a4;
    if ((int)a6 > 0) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)a6) {
                break;
            }
        }
        t4 = t0;
    }
    return t4;
}


void bootFillWords(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((int)a6 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = a5;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)a6) {
                break;
            }
        }
    }
}

int bootJumpUncached(void)
{
    *(unsigned int *)0x8C00E078 = 0xC020000;
    return ((int (*)(void))(0xAC010E3C))();
}


void bootWritePortInv(int a4)
{
    if ((*(int *)0xAC00F71C) != 0x8F) {
        *(unsigned char *)0xA30100A0 = (~a4);
    }
}

int bootSerialDataReady(void)
{
    register int t1;

    t1 = 0x0;
    if (((unsigned short)(*(short *)0xFFE80010) & 0x2) == 2) {
        t1 = 0x1;
    }
    return t1;
}


void bootNop(void)
{
    
}
