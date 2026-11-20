/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetLight(void);
int CarSel_SetFog(void);
int selectInitSprites(void);
int Init_nd_Sprite(void);
int Start_Time_Count(int, int);
int fcvCalcAngle(int, int);
int nlMatrixMode(int);
int nlMvSendTriangle(int, int, int);
int _lsfts(int, int, int);
int _sub(int, int, int, int);
int _umemcmp(int, int, int);
int _mvito4b(int, int);
int _add(int, int, int);
int _mvsto2b(int, int);
int mwlSbSetFx(int, int, int);
int mwlSbGetFx(int, int, int);
int mwlSbSetPitch(int, int, int);
int mwlSbSetFilter(int, int, int);
int mwlSbGetFilter(int, int, int);
int mwlSbSetGain(int, int);
int mwlSbGetGain(void);
int mwlSbSetDrctLvl(int, int);
int mwlSbGetDrctLvl(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
float _app_coss(float);
float _app_sins(float);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int _destructFiber(int, int);
float _in_fmods(int, float, float);
int _rsfts(int, int, int);
int buSetCompleteCallback(int);
int buSetProgressCallback(int);
int BupCompleteCallback();
int BupProgressCallback();
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o204_int { char p[0x204]; int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_int { char p[0x208]; int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct oD78_uint { char p[0xD78]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int longjmp(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int mwlSbGetPitch(int, int, int);
int nlFastSinCos(int, int, int);
int nlMultiMatrix(int);
int nlPerspective(int, float, float, float);
int nlUnitMatrix(void);
int setjmp(int);
void vmsfs_setword_big(int a4, int a5, int a6);
int vmsfs_getword_big(int a4, int a5);
int gdGdcCheckDmaTrans(int a4, int a5);
void nlGetTranslate(int a4);
int fmMngMcpy_tail_0c1708b2(int a4, int a5, int a6);
int __init_dteapi_cc_f(void);
int _pow5(int a4, int a5);
int mwSbSetExPrm(int a4, int a5, int a6, int a7);
int mwSbGetExPrm(int a4, int a5, int a6, int a7);
int nlPushMatrix(int a4);
int _mult(int a4, int a5, int a6);
int nlGetMatrix8(int a4);
float nlMakeFastModelProjectMatrix(void);
float _in_coss(float f4);
int buFbrExecFiberServer(int a4);
int fcvRotateCurve(int a4);
int _unpack(int a4, int a5, int a6, float f4, float f5);
int _its(int a4, int a5, int a6);
int kmiChkActiveListType(int a4, int a5, int a6, int a7, int a8);
int _pd_peripheral_set_data(int a4, int a5, int a6);
void syIntInit(int a4, int a5);
int nlMvPutStrip(int a4, int a5, int a6, int a7);
int nd_CarSelInit(void);


void nlGetTranslate(int a4)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = u0[14];
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = u0[13];
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[12];
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
}


/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */


int nlPushMatrix(int a4)
{
    int t0;
    int t1;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u2[16];
    float u4[16];
    float u21[16];
    float u38[16];

    t0 = (((struct o8_int *)0xC2B31DC)->v);
    t1 = (((struct o0_int *)0xC2B31DC)->v);
    _builtin_st_ext((float (*)[4])u2);
    *(float *)((((t0 + 0x40) - 0x8) + 0x0)) = u2[15];
    *(float *)(((((t0 + 0x40) - 0x8) + 0x0) + 4)) = u2[14];
    *(float *)(((((t0 + 0x40) - 0x8) - 0x8) + 0x0)) = u2[13];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u2[12];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[11];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[10];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[9];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[8];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[7];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[6];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[5];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[4];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[3];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[2];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[1];
    *(float *)((((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[0];
    (((struct o8_uint *)0xC2B31DC)->v) = (t0 + 0x40);
    
    (((struct o0_ushort *)0xC2B31DC)->v) = ((short)t1 + 0x1);
    if (a4 == 0) {
        _builtin_st_ext((float (*)[4])u4);
        u4[0] = u2[0];
        u4[1] = u2[1];
        u4[2] = u2[2];
        u4[3] = u2[3];
        u4[4] = u2[4];
        u4[5] = u2[5];
        u4[6] = u2[6];
        u4[7] = u2[7];
        u4[8] = u2[8];
        u4[9] = u2[9];
        u4[10] = u2[10];
        u4[11] = u2[11];
        u4[12] = u2[12];
        u4[13] = u2[13];
        u4[14] = u2[14];
        u4[15] = u2[15];
        _builtin_ld_ext((float (*)[4])u4);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    _builtin_prefetch((void *)a4);
    if ((a4 & 0x4) != 0) {
        u5 = *(float *)((a4 + 0x0));
        u6 = *(float *)(((a4 + 0x4) + 0x0));
        u7 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
        u8 = *(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
        u9 = *(float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u10 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u11 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u12 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u13 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u14 = *(float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u15 = *(float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u16 = *(float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u17 = *(float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u18 = *(float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u19 = *(float *)((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u20 = *(float *)(((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        _builtin_st_ext((float (*)[4])u21);
        u21[0] = u5;
        u21[1] = u6;
        u21[2] = u7;
        u21[3] = u8;
        u21[4] = u9;
        u21[5] = u10;
        u21[6] = u11;
        u21[7] = u12;
        u21[8] = u13;
        u21[9] = u14;
        u21[10] = u15;
        u21[11] = u16;
        u21[12] = u17;
        u21[13] = u18;
        u21[14] = u19;
        u21[15] = u20;
        _builtin_ld_ext((float (*)[4])u21);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    u22 = *(float *)((a4 + 0x0));
    u23 = *(float *)(((a4 + 0x0) + 4));
    u24 = *(float *)(((a4 + 0x8) + 0x0));
    u25 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u26 = *(float *)((((a4 + 0x8) + 0x8) + 0x0));
    u27 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u28 = *(float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x0));
    u29 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u30 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u31 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u32 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u33 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u34 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u35 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u36 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u37 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u38);
    u38[0] = u23;
    u38[1] = u22;
    u38[2] = u25;
    u38[3] = u24;
    u38[4] = u27;
    u38[5] = u26;
    u38[6] = u29;
    u38[7] = u28;
    u38[8] = u31;
    u38[9] = u30;
    u38[10] = u33;
    u38[11] = u32;
    u38[12] = u35;
    u38[13] = u34;
    u38[14] = u37;
    u38[15] = u36;
    _builtin_ld_ext((float (*)[4])u38);
    return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
}


int nlGetMatrix8(int a4)
{
    int t1;
    float u3[16];
    int stk[1] = {0};

    t1 = a4;
    if (a4 == 0) {
        t1 = *(int *)0xC2B31E4;
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[1];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[0];
    return (((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8);
}


