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


int ADXAMP_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t11;
    register int t12;
    register float u21;
    register int t23;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        t23 = 0x0;
    } else {
        ADXCRS_Lock();
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x2)) = a4;
        if ((int)a4 > 0) {
            t11 = 0x0;
            t12 = 0x0;
            for (;;) {
                t12 = (t12 + 0x1);
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x4) + t11) + 0x0)) = (*(int *)((t11 + a5)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0xC) + t11) + 0x0)) = (*(int *)((t11 + a6)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x14) + t11) + 0x0)) = 0x0;
                t11 = (t11 + 0x4);
                if ((int)t12 >= (int)a4) {
                    break;
                }
            }
        }
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x1)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x2C)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x1C)) = a4;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x20)) = 0xAC44;
        u21 = *(float *)0xC167A50;
        (((struct o24_float *)((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C)))->v) = u21;
        (((struct o28_float *)((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C)))->v) = u21;
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C) + 0x0)) = 0x1;
        ADXCRS_Unlock();
        t23 = (((((t0 << 1) + t0) << 2) << 2) + 0xC2F4C9C);
    }
    return t23;
}


int adxf_purge_all(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC16973C))();
}


