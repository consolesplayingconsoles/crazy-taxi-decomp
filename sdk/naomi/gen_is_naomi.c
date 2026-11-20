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
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
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


int nlPerspective_L(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u36;
    register float u37;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 0));
    t2 = nlTan((t0 >> 1));
    u3 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 4)) = (u3 / (1.0f / t2));
    if (((((struct oC_float *)0xC14A810)->v)) != 0.0f) {
        t5 = nlArcTan((u3 / (1.0f / t2)));
        *(unsigned int *)(((int)stk + 0)) = t5;
        t6 = nlTan(t5);
        t8 = nlArcTan((t6 * (((((struct oC_float *)0xC14A810)->v)) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (nlCos(t8)));
    } else {
        t10 = nlArcTan((u3 / (1.0f / t2)));
        *(float *)(((int)stk + 12)) = (1.0f / (nlCos(t10)));
    }
    t21 = (t0 >> 1);
    if (((((struct o10_float *)0xC14A810)->v)) != 0.0f) {
        t17 = nlTan((t0 >> 1));
        t21 = (nlArcTan((t17 * (((((struct o10_float *)0xC14A810)->v)) + 1.0f))));
    }
    t25 = nlCos(t21);
    (((struct oC_float *)0xC14A810)->v) = 0.0f;
    (((struct o10_float *)0xC14A810)->v) = 0.0f;
    u26 = *(float *)(((int)stk + 8));
    u28 = ((1.0f / t2) * (1.0f / t25));
    u29 = (((1.0f / t2) / u26) * (*(float *)(((int)stk + 12))));
    (((struct o0_float *)0xC14A810)->v) = (u29 * 0.5f);
    (((struct o4_float *)0xC14A810)->v) = (u28 * 0.5f);
    (((struct o0_float *)0xC2B3490)->v) = (((((struct o14_float *)0xC14A810)->v)) * ((((struct o0_float *)0xC14A810)->v)));
    u32 = (((struct o4_float *)0xC14A810)->v);
    u33 = (((struct o18_float *)0xC14A810)->v);
    (((struct o4_float *)0xC2B3490)->v) = (u33 * u32);
    u34 = (((struct o0_float *)0xC2B3490)->v);
    if (u34 > (u33 * u32)) {
        (((struct o8_float *)0xC14A810)->v) = u34;
    } else {
        (((struct o8_float *)0xC14A810)->v) = (u33 * u32);
    }
    *(float *)(((int)stk + 16)) = ((1.0f / t2) / u26);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (1.0f / t2);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u36 = (f5 * f6);
    u37 = (u36 * (1.0f + 1.0f));
    u37 = -u37;
    *(float *)(((int)stk + 72)) = (u37 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC2B7BDC)->v) = f5;
    (((struct o4_float *)0xC2B7BDC)->v) = f6;
    (((struct o8_float *)0xC2B7BDC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2B315C)->v) = f5;
    (((struct o0_float *)0xC2B315C)->v) = (-f5);
    (((struct o1C_float *)0xC2B315C)->v) = f6;
    (((struct o14_float *)0xC2B315C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (nl_set_cnv_proj_pers());
}

int nlCreateVertexBuffer_clx22(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct o4_int *)0xC2AED38)->v);
    t1 = (((((a4 + a5) + a6) + a7) + t0) + ((((a4 + a5) + a6) + a7) + t0));
    if (((((struct o0_int *)0xC2AED38)->v)) == 3) {
    } else {
        t2 = (((struct o34_int *)0xC2AECF8)->v);
        t1 = (((a5 + a6) + a7) + t0);
        if (t2 == 32) {
        } else {
            t1 = (((a4 + a5) + a7) + t0);
            if (t2 == 34) {
            } else {
                if (((((struct o34_int *)0xC2AECF8)->v)) == 36) {
                    t2 = (((a4 + a5) + a6) + a7);
                }
                t1 = t2;
            }
        }
    }
    (((struct o0_uint *)0xC2AECF8)->v) = t1;
    u0 = *(float *)0xC0750EC;
    if (((((struct o0_int *)0xC2AED38)->v)) == 3) {
        t2 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
        (((struct o4_float *)0xC2AECF8)->v) = (((float)a4 * u0) / (float)(t2 >> 1));
        (((struct o8_float *)0xC2AECF8)->v) = (((float)a5 * u0) / (float)(t2 >> 1));
        (((struct oC_float *)0xC2AECF8)->v) = (((float)a6 * u0) / (float)(t2 >> 1));
        (((struct o10_float *)0xC2AECF8)->v) = (((float)a7 * u0) / (float)(t2 >> 1));
        (((struct o14_float *)0xC2AECF8)->v) = (((float)t0 * u0) / (float)(t2 >> 1));
    } else {
        t2 = (((struct o34_int *)0xC2AECF8)->v);
        if (t2 == 32) {
            (((struct o4_float *)0xC2AECF8)->v) = 0.0f;
            (((struct o8_float *)0xC2AECF8)->v) = (((float)a5 * u0) / (float)t1);
            (((struct oC_float *)0xC2AECF8)->v) = (((float)a6 * u0) / (float)t1);
            (((struct o10_float *)0xC2AECF8)->v) = (((float)a7 * u0) / (float)t1);
            (((struct o14_float *)0xC2AECF8)->v) = (((float)t0 * u0) / (float)t1);
        } else {
            if (t2 == 34) {
                (((struct o4_float *)0xC2AECF8)->v) = (((float)a4 * u0) / (float)t1);
                (((struct o8_float *)0xC2AECF8)->v) = (((float)a5 * u0) / (float)t1);
                (((struct oC_float *)0xC2AECF8)->v) = 0.0f;
                (((struct o10_float *)0xC2AECF8)->v) = (((float)a7 * u0) / (float)t1);
                (((struct o14_float *)0xC2AECF8)->v) = (((float)t0 * u0) / (float)t1);
            } else {
                if (((((struct o34_int *)0xC2AECF8)->v)) == 36) {
                    (((struct o4_float *)0xC2AECF8)->v) = (((float)a4 * u0) / (float)t1);
                    (((struct o8_float *)0xC2AECF8)->v) = (((float)a5 * u0) / (float)t1);
                    (((struct oC_float *)0xC2AECF8)->v) = (((float)a6 * u0) / (float)t1);
                    (((struct o10_float *)0xC2AECF8)->v) = (((float)a7 * u0) / (float)t1);
                    (((struct o14_float *)0xC2AECF8)->v) = 0.0f;
                }
            }
        }
    }
    t0 = kmSetSystemConfiguration(0xC2AECD0);
    if (t0 != 0) {
        _builtin_trapa(65);
    }
    *(unsigned int *)(((*(int *)0xC2AF36C) + 0x0)) = 0x800000;
    if ((*(int *)0xC2AEDC0) == 0) {
        nlLoadDummyTexture();
        *(unsigned int *)0xC2AEDC0 = 0x1;
    }
    return t0;
}


float displayStrip_tex_spd(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u162;
    register float u163;
    register float u164;
    register float u165;
    register int t34;
    float u43[4];
    register int t55;
    float u65[4];
    register int t78;
    float u88[4];
    register int t101;
    float u110[4];
    register int t122;
    float u132[4];
    register int t145;
    float u155[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    *(volatile float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u4;
    u1 = u5;
    u2 = u3;
    u3 = u14[0];
    u4 = u14[1];
    u5 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = u2;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = 0.0f;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t34 = (t6 - 8);
            } else {
                t34 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u6 = *(float *)((t34 + 0x0));
            u7 = *(float *)(((t34 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u8 = (((struct o8_float *)(t34))->v);
            *(volatile float *)((((t34 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t34 + 0x8)))->v);
            *(volatile float *)(((((t34 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t6 = t3;
            t3 = (t3 - 0x8);
            u43[0] = u6;
            u43[1] = u7;
            u43[2] = u8;
            u43[3] = 1.0f;
            _builtin_ftrv(u43, u43);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = ((((struct o8_float *)(((t34 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t34 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = 0.0f;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t55 = (t8 - 8);
                } else {
                    t55 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t55 + 0x0)));
                u4 = (*(float *)(((t55 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t55))->v);
                *(volatile float *)((((t55 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t55 + 0x8)))->v);
                *(volatile float *)(((((t55 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t8 = t3;
                t3 = (t3 - 0x8);
                u65[0] = u3;
                u65[1] = u4;
                u65[2] = u5;
                u65[3] = 1.0f;
                _builtin_ftrv(u65, u65);
                u3 = u65[0];
                u4 = u65[1];
                u5 = u65[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u43[2] * (1.0f / u43[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u43[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u43[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u43[1] * (1.0f / u43[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t55 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t55 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t78 = (t6 - 8);
                } else {
                    t78 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t78 + 0x0)));
                u4 = (*(float *)(((t78 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t78))->v);
                *(volatile float *)((((t78 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t78 + 0x8)))->v);
                *(volatile float *)(((((t78 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u88[0] = u3;
                u88[1] = u4;
                u88[2] = u5;
                u88[3] = 1.0f;
                _builtin_ftrv(u88, u88);
                u3 = u88[0];
                u4 = u88[1];
                u5 = u88[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u43[2] * (1.0f / u43[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u43[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u43[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u43[1] * (1.0f / u43[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t78 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t78 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u162 = u43[2]; u163 = (1.0f / u43[0]); u164 = u43[0]; u165 = u43[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t101 = (t4 - 8);
            } else {
                t101 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u6 = *(float *)((t101 + 0x0));
            u7 = *(float *)(((t101 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u8 = (((struct o8_float *)(t101))->v);
            *(volatile float *)((((t101 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t101 + 0x8)))->v);
            *(volatile float *)(((((t101 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u110[0] = u6;
            u110[1] = u7;
            u110[2] = u8;
            u110[3] = 1.0f;
            _builtin_ftrv(u110, u110);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = ((((struct o8_float *)(((t101 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t101 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = 0.0f;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t122 = (t6 - 8);
                } else {
                    t122 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t122 + 0x0)));
                u4 = (*(float *)(((t122 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t122))->v);
                *(volatile float *)((((t122 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t122 + 0x8)))->v);
                *(volatile float *)(((((t122 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = t3;
                t3 = (t3 - 0x8);
                u132[0] = u3;
                u132[1] = u4;
                u132[2] = u5;
                u132[3] = 1.0f;
                _builtin_ftrv(u132, u132);
                u3 = u132[0];
                u4 = u132[1];
                u5 = u132[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u110[2] * (1.0f / u110[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u110[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u110[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u110[1] * (1.0f / u110[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t122 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t122 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t145 = (t4 - 8);
                } else {
                    t145 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)((t145 + 0x0)));
                u4 = (*(float *)(((t145 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u6 = (((struct o8_float *)(t145))->v);
                *(volatile float *)((((t145 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t145 + 0x8)))->v);
                *(volatile float *)(((((t145 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u155[0] = u3;
                u155[1] = u4;
                u155[2] = u5;
                u155[3] = 1.0f;
                _builtin_ftrv(u155, u155);
                u3 = u155[0];
                u4 = u155[1];
                u5 = u155[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u110[2] * (1.0f / u110[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u110[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u110[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u110[1] * (1.0f / u110[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = ((((struct o8_float *)(((t145 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t145 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u162 = u110[2]; u163 = (1.0f / u110[0]); u164 = u110[0]; u165 = u110[1]; break;
        }
        u5 = (u5 * (1.0f / u3));
        u4 = (u4 * (1.0f / u3));
        *(float *)(((t3 - 0x8) + 0x0)) = u0;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = u5;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u3);
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u3;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u0;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = (u162 * u163);
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = u163;
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = u164;
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u165 * u163);
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}

float displayStrip_tex_spd_ofst(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u163;
    register float u164;
    register float u165;
    register float u166;
    register int t35;
    float u44[4];
    register int t56;
    float u66[4];
    register int t79;
    float u89[4];
    register int t102;
    float u111[4];
    register int t123;
    float u133[4];
    register int t146;
    float u156[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    u4 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u5 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u6 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u5;
    u1 = u6;
    u2 = u3;
    u3 = u4;
    u4 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = u2;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t35 = (t6 - 8);
            } else {
                t35 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t35 + 0x0));
            u8 = *(float *)(((t35 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u9 = (((struct o8_float *)(t35))->v);
            *(volatile float *)((((t35 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t35 + 0x8)))->v));
            u3 = (*(float *)(((((t35 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t6 = t3;
            t3 = (t3 - 0x8);
            u44[0] = u7;
            u44[1] = u8;
            u44[2] = u9;
            u44[3] = 1.0f;
            _builtin_ftrv(u44, u44);
            *(float *)(((t3 - 0x8) + 0x0)) = u6;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u4;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = ((((struct o8_float *)(((t35 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t35 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t56 = (t8 - 8);
                } else {
                    t56 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t56 + 0x0)));
                u5 = (*(float *)(((t56 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t56))->v);
                *(volatile float *)((((t56 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t56 + 0x8)))->v));
                u3 = (*(float *)(((((t56 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t8 = t3;
                t3 = (t3 - 0x8);
                u66[0] = u4;
                u66[1] = u5;
                u66[2] = u6;
                u66[3] = 1.0f;
                _builtin_ftrv(u66, u66);
                u4 = u66[0];
                u5 = u66[1];
                u6 = u66[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[2] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u44[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u44[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[1] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t56 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t56 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t79 = (t6 - 8);
                } else {
                    t79 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t79 + 0x0)));
                u5 = (*(float *)(((t79 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t79))->v);
                *(volatile float *)((((t79 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t79 + 0x8)))->v));
                u3 = (*(float *)(((((t79 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u89[0] = u4;
                u89[1] = u5;
                u89[2] = u6;
                u89[3] = 1.0f;
                _builtin_ftrv(u89, u89);
                u4 = u89[0];
                u5 = u89[1];
                u6 = u89[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[2] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u44[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u44[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[1] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t79 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t79 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u44[2]; u164 = (1.0f / u44[0]); u165 = u44[0]; u166 = u44[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t102 = (t4 - 8);
            } else {
                t102 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t102 + 0x0));
            u8 = *(float *)(((t102 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u9 = (((struct o8_float *)(t102))->v);
            *(volatile float *)((((t102 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t102 + 0x8)))->v));
            u3 = (*(float *)(((((t102 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u111[0] = u7;
            u111[1] = u8;
            u111[2] = u9;
            u111[3] = 1.0f;
            _builtin_ftrv(u111, u111);
            *(float *)(((t3 - 0x8) + 0x0)) = u6;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u4;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = ((((struct o8_float *)(((t102 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t102 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t123 = (t6 - 8);
                } else {
                    t123 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t123 + 0x0)));
                u5 = (*(float *)(((t123 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t123))->v);
                *(volatile float *)((((t123 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t123 + 0x8)))->v));
                u3 = (*(float *)(((((t123 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = t3;
                t3 = (t3 - 0x8);
                u133[0] = u4;
                u133[1] = u5;
                u133[2] = u6;
                u133[3] = 1.0f;
                _builtin_ftrv(u133, u133);
                u4 = u133[0];
                u5 = u133[1];
                u6 = u133[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[2] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u111[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u111[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[1] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t123 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t123 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t146 = (t4 - 8);
                } else {
                    t146 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t146 + 0x0)));
                u5 = (*(float *)(((t146 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t146))->v);
                *(volatile float *)((((t146 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t146 + 0x8)))->v));
                u3 = (*(float *)(((((t146 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u156[0] = u4;
                u156[1] = u5;
                u156[2] = u6;
                u156[3] = 1.0f;
                _builtin_ftrv(u156, u156);
                u4 = u156[0];
                u5 = u156[1];
                u6 = u156[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[2] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u111[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u111[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[1] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = ((((struct o8_float *)(((t146 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t146 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u111[2]; u164 = (1.0f / u111[0]); u165 = u111[0]; u166 = u111[1]; break;
        }
        u6 = (u6 * (1.0f / u4));
        u5 = (u5 * (1.0f / u4));
        *(float *)(((t3 - 0x8) + 0x0)) = u0;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = u6;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u4);
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u4;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u0;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = (u163 * u164);
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = u164;
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = u165;
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u166 * u164);
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}

float displayTriangle_tex_spd(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u123;
    register float u124;
    register float u125;
    register float u126;
    float u38[4];
    float u54[4];
    float u70[4];
    float u85[4];
    float u101[4];
    float u117[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    *(volatile float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u4;
    u1 = u5;
    u2 = u3;
    u3 = u14[0];
    u4 = u14[1];
    u5 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = u2;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = 0.0f;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u6 = *(float *)((t7 + 0x0));
            u7 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u8 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t7 + 0x8)))->v);
            *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t8 = t4;
            t4 = (t4 - 0x8);
            u38[0] = u6;
            u38[1] = u7;
            u38[2] = u8;
            u38[3] = 1.0f;
            _builtin_ftrv(u38, u38);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = 0.0f;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t9 + 0x0)));
                u4 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t9 + 0x8)))->v);
                *(volatile float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t10 = t4;
                t4 = (t4 - 0x8);
                u54[0] = u3;
                u54[1] = u4;
                u54[2] = u5;
                u54[3] = 1.0f;
                _builtin_ftrv(u54, u54);
                u3 = u54[0];
                u4 = u54[1];
                u5 = u54[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u38[2] * (1.0f / u38[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u38[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u38[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u38[1] * (1.0f / u38[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t9 + 0x0)));
                u4 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t9 + 0x8)))->v);
                *(volatile float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u70[0] = u3;
                u70[1] = u4;
                u70[2] = u5;
                u70[3] = 1.0f;
                _builtin_ftrv(u70, u70);
                u3 = u70[0];
                u4 = u70[1];
                u5 = u70[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u38[2] * (1.0f / u38[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u38[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u38[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u38[1] * (1.0f / u38[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u123 = u38[2]; u124 = (1.0f / u38[0]); u125 = u38[0]; u126 = u38[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u6 = *(float *)((t7 + 0x0));
            u7 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u8 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t7 + 0x8)))->v);
            *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u85[0] = u6;
            u85[1] = u7;
            u85[2] = u8;
            u85[3] = 1.0f;
            _builtin_ftrv(u85, u85);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = 0.0f;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t7 + 0x0)));
                u4 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t7 + 0x8)))->v);
                *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t8 = t4;
                t4 = (t4 - 0x8);
                u101[0] = u3;
                u101[1] = u4;
                u101[2] = u5;
                u101[3] = 1.0f;
                _builtin_ftrv(u101, u101);
                u3 = u101[0];
                u4 = u101[1];
                u5 = u101[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u85[2] * (1.0f / u85[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u85[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u85[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u85[1] * (1.0f / u85[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t7 + 0x0)));
                u4 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t7 + 0x8)))->v);
                *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u117[0] = u3;
                u117[1] = u4;
                u117[2] = u5;
                u117[3] = 1.0f;
                _builtin_ftrv(u117, u117);
                u3 = u117[0];
                u4 = u117[1];
                u5 = u117[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u85[2] * (1.0f / u85[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u85[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u85[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u85[1] * (1.0f / u85[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u123 = u85[2]; u124 = (1.0f / u85[0]); u125 = u85[0]; u126 = u85[1]; break;
        }
        u5 = (u5 * (1.0f / u3));
        *(float *)(((t4 - 0x8) + 0x0)) = u0;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u4 = (u4 * (1.0f / u3));
        *(float *)(((t4 - 0x8) + 0x0)) = u5;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u3);
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u3;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u0;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = (u123 * u124);
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = u124;
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = u125;
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u126 * u124);
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}

float displayTriangle_tex_spd_ofst(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u124;
    register float u125;
    register float u126;
    register float u127;
    float u39[4];
    float u55[4];
    float u71[4];
    float u86[4];
    float u102[4];
    float u118[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    u4 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u5 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u6 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u5;
    u1 = u6;
    u2 = u3;
    u3 = u4;
    u4 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = u2;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u9 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t8 = t4;
            t4 = (t4 - 0x8);
            u39[0] = u7;
            u39[1] = u8;
            u39[2] = u9;
            u39[3] = 1.0f;
            _builtin_ftrv(u39, u39);
            *(float *)(((t4 - 0x8) + 0x0)) = u6;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u4;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t9 + 0x0)));
                u5 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t9 + 0x8)))->v));
                u3 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t10 = t4;
                t4 = (t4 - 0x8);
                u55[0] = u4;
                u55[1] = u5;
                u55[2] = u6;
                u55[3] = 1.0f;
                _builtin_ftrv(u55, u55);
                u4 = u55[0];
                u5 = u55[1];
                u6 = u55[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[2] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u39[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u39[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[1] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t9 + 0x0)));
                u5 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t9 + 0x8)))->v));
                u3 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u71[0] = u4;
                u71[1] = u5;
                u71[2] = u6;
                u71[3] = 1.0f;
                _builtin_ftrv(u71, u71);
                u4 = u71[0];
                u5 = u71[1];
                u6 = u71[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[2] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u39[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u39[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[1] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u39[2]; u125 = (1.0f / u39[0]); u126 = u39[0]; u127 = u39[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u9 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u86[0] = u7;
            u86[1] = u8;
            u86[2] = u9;
            u86[3] = 1.0f;
            _builtin_ftrv(u86, u86);
            *(float *)(((t4 - 0x8) + 0x0)) = u6;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u4;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t7 + 0x0)));
                u5 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
                u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t8 = t4;
                t4 = (t4 - 0x8);
                u102[0] = u4;
                u102[1] = u5;
                u102[2] = u6;
                u102[3] = 1.0f;
                _builtin_ftrv(u102, u102);
                u4 = u102[0];
                u5 = u102[1];
                u6 = u102[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[2] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u86[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u86[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[1] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t7 + 0x0)));
                u5 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
                u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u118[0] = u4;
                u118[1] = u5;
                u118[2] = u6;
                u118[3] = 1.0f;
                _builtin_ftrv(u118, u118);
                u4 = u118[0];
                u5 = u118[1];
                u6 = u118[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[2] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u86[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u86[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[1] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u86[2]; u125 = (1.0f / u86[0]); u126 = u86[0]; u127 = u86[1]; break;
        }
        u6 = (u6 * (1.0f / u4));
        *(float *)(((t4 - 0x8) + 0x0)) = u0;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u5 = (u5 * (1.0f / u4));
        *(float *)(((t4 - 0x8) + 0x0)) = u6;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u4);
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u4;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u0;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = (u124 * u125);
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = u125;
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = u126;
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u127 * u125);
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}



int nlSysMetricsGetFrameBuffer(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC2AEE08;
    t1 = *(int *)0xC2AEDB8;
    t2 = (((struct o0_short *)0xC2B3190)->v);
    t3 = (t2 + t2);
    if ((int)t1 <= (int)0x3) {
    } else {
        if ((int)t1 <= (int)0x4) {
            t4 = ((t2 << 1) + t2);
        } else {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t3 = t4;
    }
    t2 = (int)((int)t3 / (int)0x4);
    t3 = 0xC080F10;
    t4 = t1;
    t1 = 0x0;
    t5 = a4;
    t6 = (t0 + 0xA5000000);
    for (;;) {
        t0 = (((struct o2_short *)0xC2B3190)->v);
        if ((int)t1 >= (int)t0) {
            break;
        }
        t4 = 0x0;
        if ((int)t2 > 0) {
            for (;;) {
                t3 = *(int *)((t6 + 0x0));
                t6 = (t6 + 0x4);
                t4 = (t4 + 0x1);
                *(unsigned int *)((t5 + 0x0)) = t3;
                t5 = (t5 + 0x4);
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}


void nlFatalErrorTrap(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t13;

    *(unsigned int *)(((int)stk + 4)) = a4;
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                    t1 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
                    *(int *)((int)stk + 0) = t1;
                    kmSetBorderColor(a4, a5, a6, a7, t1);
                    for (;;) {
                    }
                }
                *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFFFF00FF;
                t4 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
                *(int *)((int)stk + 0) = t4;
                kmSetBorderColor(a4, a5, a6, a7, t4);
                for (;;) {
                }
            }
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFF00FF00;
            t7 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
            *(int *)((int)stk + 0) = t7;
            kmSetBorderColor(a4, a5, a6, a7, t7);
            for (;;) {
            }
        }
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFFFF0000;
        t10 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        *(int *)((int)stk + 0) = t10;
        kmSetBorderColor(a4, a5, a6, a7, t10);
        for (;;) {
        }
    }
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFF0000FF;
    t13 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(int *)((int)stk + 0) = t13;
    kmSetBorderColor(a4, a5, a6, a7, t13);
    for (;;) {
    }
}


void nlSysMetricsInitSetClock(int a4)
{
    register int t1;
    int t2;

    _builtin_set_imask(0xE);
    t1 = 0x2;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x4)) {
        t1 = a4;
    }
    t2 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (0xFFFFFFFE & t2);
    (((struct o0_uchar *)0xFFD80000)->v) = 0x1;
    (((struct o10_ushort *)0xFFD80000)->v) = t1;
    (((struct o8_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct o4_uchar *)0xFFD80000)->v) = (t2 | 0x1);
    *(float *)0xC2AEDBC = (*(float *)(((t1 << 2) + 0xC14A7A0)));
    _builtin_set_imask(0x0);
}


int nlAtan256(float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = f4;
    if (0.0f > f4) {
        u0 = (-f4);
    }
    u1 = f5;
    if (0.0f > f5) {
        u1 = (-f5);
    }
    t0 = (((0.0f > f5)) ? 1 : 0);
    u2 = u0;
    u3 = u1;
    if (u0 > u1) {
        t0 = ((((0.0f > f5)) ? 1 : 0) | 0x2);
        u2 = u1;
        u3 = u0;
    }
    t1 = *(short *)((((((((0.0f > f4)) ? 1 : 0) << 2) | t0) << 1) + 0xC089D44));
    u0 = 0.5f;
    u0 = u0 + 128.0f * ((u2 / u3));
    t0 = *(signed char *)(((unsigned char)(int)u0 + 0xC089D5C));
    t2 = t0;
    if (((int)(((unsigned int)t1) & 1)) != 0) {
        t2 = (-t0);
    }
    return (t2 + ((unsigned int)t1 >> 1));
}


int memcpy8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    if (a6 != 0) {
        if ((((a4 | a5) | a6) & 7) == 0) {
            t0 = a4;
            t1 = a5;
            t2 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
            for (;;) {
                u0 = *(float *)((t1 + 0x0));
                u1 = *(float *)(((t1 + 0x0) + 4));
                t1 = (t1 + 0x8);
                t2 = (t2 - 0x1);
                *(float *)((t0 + 0x0)) = u0;
                *(float *)(((t0 + 0x0) + 4)) = u1;
                t0 = (t0 + 0x8);
                if (t2 == 0) {
                    break;
                }
            }
            return ((a4 | a5) | a6);
        }
        t0 = a4;
        t1 = a5;
        t2 = ((unsigned int)a6 >> 2);
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t2 = (t2 - 0x1);
            *(unsigned int *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
        return t3;
    }
    return ((a4 | a5) | a6);
}

int nlSetCommonTextureParameter(int a4, int a5)
{
    register int t3;
    register int t4;
    register int t6;

    t3 = *(int *)0xC2B29C0;
    t4 = *(int *)(((((a5 << 2) << 1) + (*(int *)0xC2AEC84)) + 0x4));
    t6 = *(int *)((((t4 * 0x3C) + t3) + 0x34));
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | (*(int *)((((t4 * 0x3C) + t3) + 0x30))));
    *(unsigned int *)((a4 + 0xC)) = (0x0 | t6);
    return 0xC2B29C0;
}

int nlGetMatrix33on44(int a4)
{
    float u0[16];
    float u1[16];

    if (a4 == 0) {
        return 0x0;
    }
    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0x2C) - 0x4) + 0x0)) = u0[10];
    *(float *)(((((a4 + 0x2C) - 0x4) - 0x4) + 0x0)) = u0[9];
    *(float *)((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[8];
    *(float *)((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) + 0x0)) = u0[6];
    *(float *)(((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) + 0x0)) = u0[5];
    *(float *)((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[4];
    *(float *)((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) + 0x0)) = u0[2];
    *(float *)(((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) + 0x0)) = u0[1];
    *(float *)((((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[0];
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = u0[0];
    u1[1] = u0[1];
    u1[2] = u0[2];
    u1[3] = u0[3];
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
    return ((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4);
}

int nlGetMatrix34(int a4)
{
    float u0[16];
    float u1[16];

    if (a4 == 0) {
        return 0x0;
    }
    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0x30) - 0x4) + 0x0)) = u0[14];
    *(float *)(((((a4 + 0x30) - 0x4) - 0x4) + 0x0)) = u0[13];
    *(float *)((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[12];
    *(float *)(((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[10];
    *(float *)((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[9];
    *(float *)(((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[8];
    *(float *)((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[6];
    *(float *)(((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[5];
    *(float *)((((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[4];
    *(float *)(((((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[2];
    *(float *)((((((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[1];
    *(float *)(((((((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[0];
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = u0[0];
    u1[1] = u0[1];
    u1[2] = u0[2];
    u1[3] = u0[3];
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
    return (((((((((((((a4 + 0x30) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4);
}

int nlGetMatrix(int a4)
{
    register int t1;
    float u3[16];
    float u4[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC2B31E4);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x4) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x4) - 0x4) + 0x0)) = u3[14];
    *(float *)((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[13];
    *(float *)(((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[12];
    *(float *)((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[11];
    *(float *)(((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[10];
    *(float *)((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[9];
    *(float *)(((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[8];
    *(float *)((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[7];
    *(float *)(((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[6];
    *(float *)((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[5];
    *(float *)(((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[4];
    *(float *)((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u3[0];
    u4[1] = u3[1];
    u4[2] = u3[2];
    u4[3] = u3[3];
    u4[4] = u3[4];
    u4[5] = u3[5];
    u4[6] = u3[6];
    u4[7] = u3[7];
    u4[8] = u3[8];
    u4[9] = u3[9];
    u4[10] = u3[10];
    u4[11] = u3[11];
    u4[12] = u3[12];
    u4[13] = u3[13];
    u4[14] = u3[14];
    u4[15] = u3[15];
    _builtin_ld_ext((float (*)[4])u4);
    return (((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4);
}

float nlMultiMatrixRevOrder8(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x0) + 4));
    u2 = (((struct o8_float *)(a4))->v);
    u3 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)((a4 + 0x8)))->v);
    u5 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u6 = (((struct o8_float *)(((a4 + 0x8) + 0x8)))->v);
    u7 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = (((struct o8_float *)((((a4 + 0x8) + 0x8) + 0x8)))->v);
    u9 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = (((struct o8_float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u11 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = (((struct o8_float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u13 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = (((struct o8_float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u15 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u16[0] = u0;
    u16[1] = u1;
    u16[2] = u2;
    u16[3] = u3;
    u16[4] = u4;
    u16[5] = u5;
    u16[6] = u6;
    u16[7] = u7;
    u16[8] = u8;
    u16[9] = u9;
    u16[10] = u10;
    u16[11] = u11;
    u16[12] = u12;
    u16[13] = u13;
    u16[14] = u14;
    u16[15] = u15;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u0;
    u19[1] = u1;
    u19[2] = u2;
    u19[3] = u3;
    u19[4] = u4;
    u19[5] = u5;
    u19[6] = u6;
    u19[7] = u7;
    u19[8] = u8;
    u19[9] = u9;
    u19[10] = u10;
    u19[11] = u11;
    u19[12] = u12;
    u19[13] = u13;
    u19[14] = u14;
    u19[15] = u15;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u0;
    u21[1] = u1;
    u21[2] = u2;
    u21[3] = u3;
    u21[4] = u4;
    u21[5] = u5;
    u21[6] = u6;
    u21[7] = u7;
    u21[8] = u8;
    u21[9] = u9;
    u21[10] = u10;
    u21[11] = u11;
    u21[12] = u12;
    u21[13] = u13;
    u21[14] = u14;
    u21[15] = u15;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u0;
    u23[1] = u1;
    u23[2] = u2;
    u23[3] = u3;
    u23[4] = u4;
    u23[5] = u5;
    u23[6] = u6;
    u23[7] = u7;
    u23[8] = u8;
    u23[9] = u9;
    u23[10] = u10;
    u23[11] = u11;
    u23[12] = u12;
    u23[13] = u13;
    u23[14] = u14;
    u23[15] = u15;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u0;
}

float nlOuterProductLength(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    float u9[4];
    float u10[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o4_float *)(a5))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    u6 = (-(u1 * u3));
    u6 = u6 + u0 * u4;
    u7 = (-(u0 * u5));
    u7 = u7 + u2 * u3;
    u0 = (-(u2 * u4));
    u0 = u0 + u1 * u5;
    u9[0] = 0.0f;
    u9[1] = u0;
    u9[2] = u7;
    u9[3] = u6;
    u10[0] = 0.0f;
    u10[1] = u0;
    u10[2] = u7;
    u10[3] = u6;
    return _builtin_sqrtf((_builtin_fipr(u9, u10)));
}


int nlObjPutVtxBufScan(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)(((*(int *)0xC2B8CBC) + 0x0))) - ((((struct o0_int *)0xC2AEDC4)->v)));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)(((*(int *)0xC2B8CBC) + 0x4))) - ((((struct o4_int *)0xC2AEDC4)->v)));
    *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((*(int *)0xC2B8CBC) + 0x8))) - ((((struct o8_int *)0xC2AEDC4)->v)));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)(((*(int *)0xC2B8CBC) + 0xC))) - ((((struct oC_int *)0xC2AEDC4)->v)));
    return 0xC2B8CBC;
}

float nlRotateAX_L(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = u0;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u2[0];
    u4[5] = u2[1];
    u4[6] = u2[2];
    u4[7] = u2[3];
    u4[8] = u3[0];
    u4[9] = u3[1];
    u4[10] = u3[2];
    u4[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

void nlScaleV(int a4)
{
    register float u2;
    register float u3;
    register float u4;
    int t5;
    float u0[16];
    float u6[16];

    _builtin_st_ext((float (*)[4])u0);
    u2 = *(float *)((a4 + 0x0));
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    t5 = (*(int *)&(u0[15]));
    _builtin_st_ext((float (*)[4])u6);
    u6[0] = (u0[0] * u2);
    u6[1] = (u0[1] * u2);
    u6[2] = (u0[2] * u2);
    u6[3] = (u0[3] * u2);
    u6[4] = (u0[4] * u3);
    u6[5] = (u0[5] * u3);
    u6[6] = (u0[6] * u3);
    u6[7] = (u0[7] * u3);
    u6[8] = (u0[8] * u4);
    u6[9] = (u0[9] * u4);
    u6[10] = (u0[10] * u4);
    u6[11] = (u0[11] * u4);
    u6[12] = u0[12];
    u6[13] = u0[13];
    u6[14] = u0[14];
    u6[15] = (*(float *)&t5);
    _builtin_ld_ext((float (*)[4])u6);
}

float nlRotateAZ_L(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = (-u0);
    u2[2] = 0.0f;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = 0.0f;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    u4[2] = u2[2];
    u4[3] = u2[3];
    u4[4] = u3[0];
    u4[5] = u3[1];
    u4[6] = u3[2];
    u4[7] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

float nlRotateAY_L(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = (-u0);
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    u4[2] = u2[2];
    u4[3] = u2[3];
    u4[8] = u3[0];
    u4[9] = u3[1];
    u4[10] = u3[2];
    u4[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6)
{
    (((struct o10_float *)0xC14A918)->v) = (((((struct o0_float *)0xC14A918)->v)) + f4);
    (((struct o14_float *)0xC14A918)->v) = (((((struct o4_float *)0xC14A918)->v)) + f5);
    (((struct o18_float *)0xC14A918)->v) = (((((struct o8_float *)0xC14A918)->v)) + f6);
    (((struct o20_float *)0xC14A918)->v) = f4;
    (((struct o24_float *)0xC14A918)->v) = f5;
    (((struct o28_float *)0xC14A918)->v) = f6;
    return 0x8;
}


void nlObjPutVtxBufScanInit(void)
{
    (((struct o0_uint *)0xC2AEDC4)->v) = (*(int *)(((*(int *)0xC2B8CBC) + 0x0)));
    (((struct o4_uint *)0xC2AEDC4)->v) = (*(int *)(((*(int *)0xC2B8CBC) + 0x4)));
    (((struct o8_uint *)0xC2AEDC4)->v) = (*(int *)(((*(int *)0xC2B8CBC) + 0x8)));
    (((struct oC_uint *)0xC2AEDC4)->v) = (*(int *)(((*(int *)0xC2B8CBC) + 0xC)));
}

void nlSetTrnslMode(int a4, int a5)
{
    *(unsigned int *)0xC14A648 = ((((((~a4) & 0x7) << 2) << 2) << 1) + (((~a5) & 0x7) << 2));
}

void nlObjPutSetTrnslMode(int a4, int a5)
{
    *(unsigned int *)0xC14A648 = ((((((~a4) & 0x7) << 2) << 2) << 1) + (((~a5) & 0x7) << 2));
}

