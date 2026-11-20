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


/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */


int kmiChkActiveListType(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t24;
    int t22;
    int t28;
    int t26;
    int t33;
    int t31;
    int t38;
    int t36;
    int t43;
    int t41;
    int t21;
    int stk[11] = {0};

    t0 = ((int)stk + 4);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)(((int)stk + 4) + 0x14)) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    t1 = *(int *)0xC2EA9C4;
    if (t1 == 1) {
        t2 = *(int *)0xC2EAAA0;
        if (t2 == 32) {
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x1;
        }
        t4 = *(int *)0xC2EAAA0;
        if (t4 == 33) {
            *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x1;
        }
        t6 = *(int *)0xC2EAAA0;
        if (t6 == 34) {
            *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x1;
        }
        t8 = *(int *)0xC2EAAA0;
        if (t8 == 35) {
            *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x1;
        }
        t10 = *(int *)0xC2EAAA0;
        if (t10 == 36) {
            *(unsigned int *)((((int)stk + 4) + 0x10)) = 0x1;
        }
    }
    t16 = *(int *)((((int)stk + 4) + 0x0));
    t17 = *(int *)((((int)stk + 4) + 0x4));
    t18 = *(int *)((((int)stk + 4) + 0x8));
    t19 = *(int *)((((int)stk + 4) + 0xC));
    t20 = *(int *)((((int)stk + 4) + 0x10));
    t21 = (a8 + t20);
    *(unsigned int *)0xC2EAAE8 = 0x0;
    t24 = 0x0;
    if ((a4 + t16) != 0) {
        t22 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EAAE8 = (t22 | 0x1);
        t24 = 0x1;
    }
    t28 = t24;
    if ((a5 + t17) != 0) {
        t26 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EAAE8 = (t26 | 0x2);
        t28 = (t24 + 0x1);
    }
    t33 = t28;
    if ((a6 + t18) != 0) {
        t31 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EAAE8 = (t31 | 0x4);
        t33 = (t28 + 0x1);
    }
    t38 = t33;
    if ((a7 + t19) != 0) {
        t36 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EAAE8 = (t36 | 0x8);
        t38 = (t33 + 0x1);
    }
    t43 = t38;
    if (t21 != 0) {
        t41 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EAAE8 = (t41 | 0x10);
        t43 = (t38 + 0x1);
    }
    return t43;
}


