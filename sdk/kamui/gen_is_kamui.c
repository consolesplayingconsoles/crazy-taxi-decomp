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

int kmiProcessVertex_07(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register float u18;
    register float u20;
    register int t21;
    register float u23;
    register int t30;
    register int t34;
    register float u36;
    register float u38;
    register int t39;
    register int t46;
    register int t50;
    register float u52;
    register float u54;
    register int t56;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    (((struct oC_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    u18 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t16 << 2) + 0xC2EA724)) = ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f));
    u20 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), ((((((int)(u20 * 255.0f) << 16) << 8) | ((int)(u20 * 255.0f) << 16)) | ((int)(u20 * 255.0f) << 8)) | (int)(u20 * 255.0f)));
    u23 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t21 << 2) + 0xC2EA724)) = ((((((int)(u23 * 255.0f) << 16) << 8) | ((int)(u23 * 255.0f) << 16)) | ((int)(u23 * 255.0f) << 8)) | (int)(u23 * 255.0f));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)((((((t21 + 0x1) + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t30 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t30;
    t34 = kmiBGPlanePutColor2(t3, ((((t21 + 0x1) + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t30 + 0x14))));
    u36 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t34 << 2) + 0xC2EA724)) = ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u36 * 255.0f) << 16)) | ((int)(u36 * 255.0f) << 8)) | (int)(u36 * 255.0f));
    u38 = (((struct o1C_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    t39 = kmiBGPlanePutWord(t3, (t34 + 0x1), ((((((int)(u38 * 255.0f) << 16) << 8) | ((int)(u38 * 255.0f) << 16)) | ((int)(u38 * 255.0f) << 8)) | (int)(u38 * 255.0f)));
    *(unsigned int *)(((t39 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t39 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t39 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t46 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t46;
    t50 = kmiBGPlanePutColor2(t3, (((t39 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t46 + 0x14))));
    u52 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t50 << 2) + 0xC2EA724)) = ((((((int)(u52 * 255.0f) << 16) << 8) | ((int)(u52 * 255.0f) << 16)) | ((int)(u52 * 255.0f) << 8)) | (int)(u52 * 255.0f));
    u54 = (((struct o1C_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC2EA81C)->v) = ((kmiBGPlanePutWord(t3, (t50 + 0x1), ((((((int)(u54 * 255.0f) << 16) << 8) | ((int)(u54 * 255.0f) << 16)) | ((int)(u54 * 255.0f) << 8)) | (int)(u54 * 255.0f)))) << 2);
    t56 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t56, 0x0, 0x0);
    (((struct o14_uint *)0xC2EA81C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int kmiProcessVertex_13(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register float u18;
    register float u20;
    register int t21;
    register int t28;
    register int t32;
    register float u34;
    register float u36;
    register int t37;
    register int t44;
    register int t48;
    register float u50;
    register float u52;
    register int t54;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    (((struct oC_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    u18 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t16 << 2) + 0xC2EA724)) = ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f));
    u20 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), ((((((int)(u20 * 255.0f) << 16) << 8) | ((int)(u20 * 255.0f) << 16)) | ((int)(u20 * 255.0f) << 8)) | (int)(u20 * 255.0f)));
    *(unsigned int *)(((t21 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    u34 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t32 << 2) + 0xC2EA724)) = ((((((int)(u34 * 255.0f) << 16) << 8) | ((int)(u34 * 255.0f) << 16)) | ((int)(u34 * 255.0f) << 8)) | (int)(u34 * 255.0f));
    u36 = (((struct o1C_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u36 * 255.0f) << 16)) | ((int)(u36 * 255.0f) << 8)) | (int)(u36 * 255.0f)));
    *(unsigned int *)(((t37 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    u50 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t48 << 2) + 0xC2EA724)) = ((((((int)(u50 * 255.0f) << 16) << 8) | ((int)(u50 * 255.0f) << 16)) | ((int)(u50 * 255.0f) << 8)) | (int)(u50 * 255.0f));
    u52 = (((struct o1C_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC2EA81C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), ((((((int)(u52 * 255.0f) << 16) << 8) | ((int)(u52 * 255.0f) << 16)) | ((int)(u52 * 255.0f) << 8)) | (int)(u52 * 255.0f)))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC2EA81C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}


int kmiProcessVertex_11(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t21;
    register int t28;
    register int t32;
    register int t37;
    register int t44;
    register int t48;
    register int t54;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    (((struct oC_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    *(unsigned int *)(((t16 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t21 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    *(unsigned int *)(((t32 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x18)));
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t37 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    *(unsigned int *)(((t48 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC2EA81C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC2EA81C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int kmiProcessVertex_03(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t21;
    register int t28;
    register int t32;
    register int t37;
    register int t44;
    register int t48;
    register int t54;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    (((struct oC_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC2EA724)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    *(unsigned int *)(((t16 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t21 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    *(unsigned int *)(((t32 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x18)));
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t37 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    *(unsigned int *)(((t48 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC2EA81C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC2EA81C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}


int kmLoadTexturePart(int a4, int a5, int a6, int a7)
{
    register int t34;
    int t4;
    register int t7;
    register int t8;
    register int t10;
    register int t11;

    t34 = 0x0;
    if ((a7 & 0xFFFFFFFC) != 0) {
        t34 = 0x4;
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        } else {
            t4 = *(int *)((a4 + 0x18));
            t7 = 0x0;
            if (((0x4 & t4) != 0) && (((0x1 & t4) != 0) && (((0x8 & t4) == 0) && ((0x20 & t4) == 0)))) {
                t7 = 0x4;
            }
            t8 = *(int *)((a4 + 0x14));
            t34 = 0x7;
            if ((unsigned int)((a6 & 0xFFFFFFFC) + t7) >= (unsigned int)t8) {
            } else {
                t10 = *(int *)((a4 + 0x1C));
                t11 = (t8 - ((a6 & 0xFFFFFFFC) + t7));
                if ((unsigned int)(t8 - ((a6 & 0xFFFFFFFC) + t7)) > (unsigned int)(a7 & 0xFFFFFFFC)) {
                    t11 = (a7 & 0xFFFFFFFC);
                }
                kmiCopyToFrameBuffer((((a6 & 0xFFFFFFFC) + t7) + t10), a5, t11);
                t34 = 0x0;
            }
        }
    }
    return t34;
}


int kmSetVertex(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t3;
    register int t7;

    *(unsigned int *)0xC2B8CB0 = a6;
    t1 = *(int *)(((*(int *)((a4 + 0x8))) + 0x0));
    t3 = *(int *)(((t1 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    kmiMemCopy8(((0x3FFFFFF & t3) | 0xE0000000), a5, a7);
    _builtin_prefetch((void *)((0x3FFFFFF & t3) | 0xE0000000));
    if (a7 == 64) {
        _builtin_prefetch((void *)(((0x3FFFFFF & t3) | 0xE0000000) + 0x20));
    }
    t7 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((t1 << 2) + t7)) = ((*(int *)(((t1 << 2) + t7))) + (((a7 >> 1) >> 1) << 2));
    return 0x0;
}

float kmiExCallBackFunc(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t6;
    register float u2;

    t0 = _builtin_get_fpscr();
    _builtin_set_fpscr((~((~t0) | 0x100000)));
    t6 = ((int (*)(int, int, float, float, float, float, float, float, float, float))(a4))(a5, a5, f4, f5, f6, f7, f8, f9, f10, f11);
    _builtin_set_fpscr((t0));
    return u2;
}

int kmLoadTexture(int a4, int a5, int a6, int a7)
{
    int t10;

    if ((a6 != 1) && (a7 != 1)) {
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
            kmtex_ConvertSmallVQToMem((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))), (*(int *)((a4 + 0x18))));
        } else {
            t10 = *(int *)((a4 + 0x18));
            if (((0x4 & t10) != 0) && (((0x1 & t10) != 0) && (((0x8 & t10) == 0) && ((0x20 & t10) == 0)))) {
                kmtex_CopyTextureToMem((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))));
            } else {
                kmiCopyToFrameBuffer((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0x14))));
            }
        }
        return 0x0;
    }
    return 0x4;
}


void kmiRegisterPhIntHandler(int a4)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o224_uint *)(((int)_builtin_get_vbr())))->v) = a4;
    (((struct o30_uint *)0xA05F6900)->v) = 0x0;
    (((struct o38_uint *)0xA05F6900)->v) = 0x0;
    (((struct o0_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o30_uint *)0xA05F6900)->v) = 0x2807EC;
    (((struct o38_uint *)0xA05F6900)->v) = 0xE;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}


void kmiDefaultFatalErrorCallback(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                    t1 = (*(int *)((((int)stk + 4) + 0x0)));
                    *(int *)((int)stk + 0) = t1;
                    kmSetBorderColor(a4, a5, a6, a7, t1);
                    for (;;) {
                    }
                }
                *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFFFF00FF;
                t4 = (*(int *)((((int)stk + 4) + 0x0)));
                *(int *)((int)stk + 0) = t4;
                kmSetBorderColor(a4, a5, a6, a7, t4);
                for (;;) {
                }
            }
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFF00FF00;
            t7 = (*(int *)((((int)stk + 4) + 0x0)));
            *(int *)((int)stk + 0) = t7;
            kmSetBorderColor(a4, a5, a6, a7, t7);
            for (;;) {
            }
        }
        *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFFFF0000;
        t10 = (*(int *)((((int)stk + 4) + 0x0)));
        *(int *)((int)stk + 0) = t10;
        kmSetBorderColor(a4, a5, a6, a7, t10);
        for (;;) {
        }
    }
    *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFF0000FF;
    t13 = (*(int *)((((int)stk + 4) + 0x0)));
    *(int *)((int)stk + 0) = t13;
    kmSetBorderColor(a4, a5, a6, a7, t13);
    for (;;) {
    }
}


int kmChangeContextTextureShadingMode(int a4)
{
    *(unsigned int *)0xC2EABB0 = (((*(int *)0xC2EABB0) & 0xFFFFFF3F) | (((a4 << 2) << 2) << 2));
    *(unsigned int *)0xC17830C = (*(int *)0xC2EABB0);
    return 0x0;
}


