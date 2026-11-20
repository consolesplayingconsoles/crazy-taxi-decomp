/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int gdFsCreateHnG(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSetGlobalErrG(int);
int kdSetGetMediaInfoEx(int, int, int, int);
int kmSetBorderColor(int, int, int, int, int);
int kmSetEORCallback(int, int);
int kmSetSystemConfiguration(int);
int kmSetTexOverflowCallback(int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiMemCopy8(int, int, int);
int kmtex_ConvertSmallVQToMem(int, int, int, int);
int kmtex_CopyTextureToMem(int, int, int);
int nlArcTan(float);
float nlCos(int);
int nlIntrSetHSynchLine(int);
int nlLoadDummyTexture(void);
int nlMultiMatrix(int);
int nlSetIntrFunction(int, int);
int nlSetIntrPriority(int, int);
int nlSynchFunction(void);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int syChainAddHandler(int, int, int, int);
int kmiProcessVertex_07(int a4);
int kmiProcessVertex_13(int a4);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int nlCreateVertexBuffer_clx22(int a4, int a5, int a6, int a7);
int kmiProcessVertex_11(int a4);
int kmiProcessVertex_03(int a4);
float displayStrip_tex_spd(int a4, int a5, int a6);
float displayStrip_tex_spd_ofst(int a4, int a5, int a6);
float displayTriangle_tex_spd(int a4, int a5, int a6);
float displayTriangle_tex_spd_ofst(int a4, int a5, int a6);
int nlInitInterrupt0(int a4);
int ADXAMP_Create(int a4, int a5, int a6);
int nlSysMetricsGetFrameBuffer(int a4);
int gdFsOpenG(int a4, int a5);
void nlFatalErrorTrap(int a4, int a5, int a6, int a7);
int kmLoadTexturePart(int a4, int a5, int a6, int a7);
int pdVibEnumUnitCallback(int a4, int a5, int a6, int a7);
int kmSetVertex(int a4, int a5, int a6, int a7);
float kmiExCallBackFunc(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int kmLoadTexture(int a4, int a5, int a6, int a7);
void nlSysMetricsInitSetClock(int a4);
void kmiRegisterPhIntHandler(int a4);
int nlAtan256(float f4, float f5);
void kmiDefaultFatalErrorCallback(int a4, int a5, int a6, int a7);
int memcpy8(int a4, int a5, int a6);
int nlSetCommonTextureParameter(int a4, int a5);
int nlGetMatrix33on44(int a4);
int nlGetMatrix34(int a4);
int nlGetMatrix(int a4);
float nlMultiMatrixRevOrder8(int a4);
float nlOuterProductLength(int a4, int a5);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);
int nlObjPutVtxBufScan(int a4, int a5, int a6, int a7);
float nlRotateAX_L(int a4);
void nlScaleV(int a4);
float nlRotateAZ_L(int a4);
float nlRotateAY_L(int a4);
int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6);
int syCachePurgeAll(void);
int adxf_purge_all(void);
int _destructFiber(int a4, int a5, int a6, int a7);
int kmChangeContextTextureShadingMode(int a4);
void nlObjPutVtxBufScanInit(void);
void nlSetTrnslMode(int a4, int a5);
void nlObjPutSetTrnslMode(int a4, int a5);
int fmMngSncmp_tail_0c170880(int a4, int a5, int a6, int a7);


int gdFsOpenG(int a4, int a5)
{
    register int t2;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t19;

    t2 = a5;
    if (a5 == 0) {
        t2 = (*(int *)(((*(int *)0xC177A8C) + 0x10)));
    }
    t5 = gdFsSearchName(a4, t2, 0x0);
    if (t5 == 0) {
        gdFsSetGlobalErrG(0xFFFFFFF8);
        t19 = 0x0;
    } else {
        t7 = *(int *)0xC177A8C;
        t9 = 0x0;
        t10 = (*(int *)((t7 + 0x18)));
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((t7 + 0x0)))) {
                t9 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t9);
                return 0x0;
            }
            if (((((struct o4C_short *)(t10))->v)) == 0) {
                break;
            }
            t10 = (t10 + 0x54);
            t9 = (t9 + 0x1);
        }
        gdFsCreateHnG(t10, t5, ((*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x0))) + 0x96), (*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x4))));
        gdFsSetGlobalErrG(0x0);
        t19 = t10;
    }
    return t19;
}


int pdVibEnumUnitCallback(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t25;
    register int t17;
    register int t8;

    *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0)) = 0x0;
    if ((*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x10))) != 0) {
        *(int *)((int)stk + 4) = ((int)stk + 8);
        *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
        t8 = pdVibSetUnitInfo(a4, a5, a6, a7, (((int)stk + 4) + 0x8), ((int)stk + 8));
        t25 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x10)))))((*(int *)(((int)stk + 8))), t8, (((int)stk + 8) + 0x4), (*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x8))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24)));
    }
    if (t8 == 0) {
        t25 = 0x18;
        if ((unsigned int)(unsigned char)(*(signed char *)((((a4 * 0x1C) + 0xC2B9998) + 0x18))) > (unsigned int)(*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x14)))) {
            t17 = *(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x14));
            *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x14)) = (t17 + 0x1);
            t25 = (kdSetGetMediaInfoEx(a4, 0x100, (t17 + 0x1), 0xC151864));
        }
    }
    return t25;
}


void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7)
{
    register int t3;

    if ((*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0xC))) != 0) {
        t3 = pdVibSetUnitInfo(a4, a5, a6, a7, ((*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x4)))), 0x0);
        ((int (*)(int, int, int, int))((*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0xC)))))(t3, (*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x8))), a6, a7);
    return;
    }
}


int syCachePurgeAll(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC14F440))();
}


int _destructFiber(int a4, int a5, int a6, int a7)
{
    register int t2;

    (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x0;
    if (((((struct o118_int *)(a5))->v)) != 0) {
        t2 = (((struct o118_int *)(a5))->v);
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
    }
    return 0x118;
}


int fmMngSncmp_tail_0c170880(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC170874))(a4, a5, (a6 - 1), a7);
}
