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
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
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

void vmsfs_setword_big(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = ((((unsigned int)a6) & 0xFFFF0000) | ((((unsigned int)a6) & 0xFF) << 8) | ((((unsigned int)a6) >> 8) & 0xFF));
}

int vmsfs_getword_big(int a4, int a5)
{
    int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)((((unsigned int)t0) & 0xFFFF0000) | ((((unsigned int)t0) & 0xFF) << 8) | ((((unsigned int)t0) >> 8) & 0xFF));
}

int gdGdcCheckDmaTrans(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

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

int fmMngMcpy_tail_0c1708b2(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return 0;
    }
    return ((int (*)(int, int, int))(0xC1708AC))(a4, a5, (a6 - 1));
}

/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */
int __init_dteapi_cc_f(void)
{
    buSetCompleteCallback(((int)BupCompleteCallback));
    return buSetProgressCallback(((int)BupProgressCallback));
}

int _pow5(int a4, int a5)
{
    return memmove(a5, (((a4 << 2) << 1) + 0xC0DAD38), 0x8);
}

int mwSbSetExPrm(int a4, int a5, int a6, int a7)
{
    if (a5 == 0) {
        return mwlSbSetFx(a4, a6, a7);
    }
    if (a5 == 1) {
        return mwlSbSetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        return mwlSbSetGain(a4, a6);
    }
    if (a5 == 3) {
        return mwlSbSetFilter(a4, a6, a7);
    }
    if (a5 == 4) {
        return mwlSbSetDrctLvl(a4, a6);
    }
    return a5;
}

int mwSbGetExPrm(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    if (a5 == 0) {
        return mwlSbGetFx(a4, a6, a7);
    }
    if (a5 == 1) {
        return mwlSbGetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        t0 = mwlSbGetGain();
        *(unsigned int *)((a6 + 0x0)) = t0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        return t0;
    }
    if (a5 == 3) {
        return mwlSbGetFilter(a4, a6, a7);
    }
    if (a5 == 4) {
        t1 = mwlSbGetDrctLvl();
        *(unsigned int *)((a6 + 0x0)) = t1;
        t2 = t1;
    } else {
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        t2 = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = 0x0;
    return t2;
}

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

    t0 = *(int *)0xC2B31E4;
    t1 = *(int *)0xC2B31DC;
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
    *(unsigned int *)0xC2B31E4 = (t0 + 0x40);
    
    *(unsigned short *)0xC2B31DC = ((short)t1 + 0x1);
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

int _mult(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t15;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t2;
    int t13;
    int stk[16] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    memset(a6, 0x0, 0x10);
    t1 = 0x7;
    for (;;) {
        t3 = *(signed char *)((a5 + (short)t1));
        t15 = (short)t1;
        if ((unsigned char)t3 != 0) {
            memset((((int)stk + 4) + 0x8), 0x0, 0x10);
            t2 = 0x7;
            for (;;) {
                t5 = *(int *)(((int)stk + 8));
                t6 = *(signed char *)(((short)t2 + t5));
                t7 = *(signed char *)(((short)t1 + a5));
                t8 = *(signed char *)(((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)) + 0x1));
                *(unsigned short *)(((int)stk + 4)) = (unsigned char)t8;
                t9 = *(short *)(((int)stk + 4));
                *(unsigned short *)(((int)stk + 4)) = (t9 + ((unsigned short)(unsigned char)t6 * (unsigned short)(unsigned char)t7));
                _mvsto2b((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)), ((int)stk + 4));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t11 = memmove(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9);
                t13 = t11;
            } else {
                t12 = _add(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9);
                t13 = t12;
            }
            t15 = t13;
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}

int nlGetMatrix8(int a4)
{
    int t1;
    int t0;
    float u3[16];
    int stk[1] = {0};

    t1 = a4;
    if (a4 == 0) {
        t0 = *(int *)0xC2B31E4;
        t1 = t0;
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


float _in_coss(float f4)
{
    int t0;
    int t1;
    int t14;
    int t3;
    int t8;
    int t5;
    float u16;
    float u17;
    float u19;
    float t20;
    int t21;
    float u25;
    float u22;
    int t27;
    float t28;
    float t36;
    float t44;
    float t52;
    float t60;
    float t68;
    float t76;
    float t84;
    float u90;
    float u82;
    float u74;
    float u66;
    float u58;
    float u50;
    float u42;
    float u34;
    int stk[4] = {0};

    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t1 = 0x0;
    if ((int)t0 < 0) {
        t1 = 0x8;
    }
    t14 = (t1 | 0x4);
    if (f4 == 0.0f) {
    } else {
        t3 = *(int *)(((int)stk + 8));
        t8 = (t1 | 0x2);
        if ((t3 & 0x7FFFFFFF) == 0x7F800000) {
        } else {
            t5 = t1;
            if (f4 != f4) {
                t5 = (t1 | 0x1);
            }
            t8 = t5;
        }
        t14 = t8;
    }
    if ((0x3 & t14) != 0) {
        u16 = *(float *)0xC0DACD0;
        return u16;
    }
    u17 = f4;
    if ((0x8 & t14) != 0) {
        u17 = (-f4);
    }
    u19 = *(float *)0xC0DACFC;
    t20 = _in_fmods(((int)stk + 4), u17, u19);
    t21 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t21 & 0x7);
    u25 = t20;
    if (((t21 & 0x7) & 1) != 0) {
        u22 = *(float *)0xC0DAD2C;
        u25 = (u22 + t20);
    }
    t27 = *(int *)(((int)stk + 4));
    if (t27 != 0) {
        if (t27 != 1) {
            if (t27 != 2) {
                if (t27 != 3) {
                    if (t27 != 4) {
                        if (t27 != 5) {
                            if (t27 != 6) {
                                if (t27 != 7) {
                                } else {
                                    t28 = _app_coss(u25);
                                    u34 = t28;
                                }
                                u42 = u34;
                            } else {
                                t36 = _app_sins(u25);
                                u42 = t36;
                            }
                            u50 = u42;
                        } else {
                            t44 = _app_sins(u25);
                            u50 = t44;
                        }
                        u58 = u50;
                    } else {
                        t52 = _app_coss(u25);
                        u58 = (-t52);
                    }
                    u66 = u58;
                } else {
                    t60 = _app_coss(u25);
                    u66 = (-t60);
                }
                u74 = u66;
            } else {
                t68 = _app_sins(u25);
                u74 = (-t68);
            }
            u82 = u74;
        } else {
            t76 = _app_sins(u25);
            u82 = (-t76);
        }
        u90 = u82;
    } else {
        t84 = _app_coss(u25);
        u90 = t84;
    }
    return u90;
}

int buFbrExecFiberServer(int a4)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t30;
    int t31;
    int t3;

    t0 = *(int *)0xC2FD290;
    *(unsigned int *)0xC2FD294 = t0;
    t1 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40001);
    *(unsigned int *)0xC2FD290 = a4;
    setjmp((a4 + 0x4));
    t4 = 0x0;
    t5 = (0x210 + a4);
    for (;;) {
        t6 = *(int *)((a4 + 0x208));
        if ((int)t4 >= (int)t6) {
            break;
        }
        *(unsigned int *)((a4 + 0xD78)) = t5;
        t7 = *(int *)((t5 + 0xC));
        if (t7 != 0) {
            if (t7 != 3) {
                if (t7 != 1) {
                    if (t7 != 2) {
                    } else {
                        t3 = 0xC172A16;
                        *(unsigned int *)((t5 + 0xC)) = 0x3;
                        *(unsigned int *)((t5 + 0x20)) = 0xC172A16;
                    }
                } else {
                    t10 = *(int *)((t5 + 0x14));
                    t3 = t10;
                    t11 = *(int *)((a4 + 0x204));
                    if ((unsigned int)t3 <= (unsigned int)t11) {
                        longjmp((t5 + 0x18), 0x1);
                    }
                }
            } else {
                _destructFiber(a4, t5);
            }
        }
        t3 = 0x124;
        t4 = (t4 + 0x1);
        t5 = (t5 + t3);
    }
    t30 = *(int *)((a4 + 0x204));
    *(unsigned int *)((a4 + 0x204)) = (t30 + 0x1);
    t31 = *(int *)0xC2FD294;
    *(unsigned int *)0xC2FD290 = t31;
    _builtin_set_fpscr(t1);
    return 0x204;
}


int _unpack(int a4, int a5, int a6, float f4, float f5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int stk[9] = {0};

    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = f5;
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = f4;
    t0 = *(short *)((((((int)stk + 4) + 0x4) + 0x6) + 0x0));
    t1 = 0x1;
    if (((unsigned short)t0 & 0x8000) == 0x8000) {
        t1 = 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = t1;
    t3 = *(short *)((((((int)stk + 4) + 0x4) + 0x6) + 0x0));
    *(unsigned short *)((a5 + 0x0)) = t3;
    t4 = *(short *)((a5 + 0x0));
    t5 = _builtin_get_fpscr();
    *(unsigned short *)((a5 + 0x0)) = ((int)(t4 & 0x7FF0) >> 4);
    _builtin_set_fpscr((t5 & 0xFFE7FFFF));
    _mvito4b(((int)stk + 4), (((((int)stk + 4) + 0x4) + 0x6) - 2));
    t7 = _builtin_get_fpscr();
    _builtin_set_fpscr((t7 & 0xFFE7FFFF));
    memmove(a6, (((int)stk + 4) + 0x1), 0x3);
    t9 = _builtin_get_fpscr();
    _builtin_set_fpscr((t9 & 0xFFE7FFFF));
    _mvito4b(((int)stk + 4), (((((int)stk + 4) + 0x4) + 0x6) - 6));
    t11 = _builtin_get_fpscr();
    _builtin_set_fpscr((t11 & 0xFFE7FFFF));
    memmove((a6 + 0x3), ((int)stk + 4), 0x4);
    t13 = _builtin_get_fpscr();
    _builtin_set_fpscr((t13 & 0xFFE7FFFF));
    _lsfts(a6, 0x7, 0x3);
    t15 = *(short *)((a5 + 0x0));
    if ((int)t15 > 0) {
        t16 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t16 | 0x80);
        t25 = (t16 | 0x80);
    } else {
        t17 = *(short *)((a5 + 0x0));
        *(unsigned short *)((a5 + 0x0)) = (t17 + 0x1);
        t18 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t18 & 0x7F);
        t19 = (t18 & 0x7F);
        t20 = (t17 + 0x1);
        for (;;) {
            t21 = *(signed char *)((a6 + 0x0));
            if (((unsigned char)t21 & 0x80) != 0) {
                break;
            }
            t22 = _builtin_get_fpscr();
            t20 = t22;
            t20 = (t20 & 0xFFE7FFFF);
            _builtin_set_fpscr(t20);
            t23 = _lsfts(a6, 0x7, 0x1);
            t19 = t23;
            t24 = *(short *)((a5 + 0x0));
            t20 = t24;
            t20 = (t20 - 1);
            *(unsigned short *)((a5 + 0x0)) = t20;
        }
        t25 = t19;
    }
    return t25;
}

int _its(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;
    int t21;
    int t23;
    int t24;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t25;
    int t26;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 28)) = 0x1;
    t0 = *(int *)(((int)stk + 16));
    t1 = *(int *)(((int)stk + 4));
    *(unsigned char *)(((t1 + t0) + 0x0)) = 0x0;
    t2 = memmove((((int)stk + 4) + 0x24), a4, 0x8);
    t3 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t3 - 1);
    *(unsigned int *)(((int)stk + 24)) = ((((t3 - 1) << 2) << 1) + 0xC0DAC48);
    t4 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (t4 + 0x1);
    t5 = t2;
    t6 = (t1 + t0);
    for (;;) {
        t7 = *(int *)(((int)stk + 8));
        if ((int)t7 < 0) {
            return t5;
        }
        t8 = *(int *)(((int)stk + 20));
        t5 = 0x5;
        t9 = (int)((int)t8 / (int)t5);
        t5 = t9;
        t5 = (t5 + 0x1);
        t5 = (t5 << 1);
        t10 = *(int *)(((int)stk + 24));
        t11 = memmove(((0x8 - t5) + (((int)stk + 4) + 0x1C)), (t10 + (0x8 - t5)), (0x8 - (0x8 - t5)));
        t12 = (0x8 - t5);
        t13 = (0x8 - (0x8 - t5));
        t5 = t11;
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t14 = 0x8;
        for (;;) {
            t15 = _umemcmp((t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13);
            t5 = t15;
            if ((int)t5 >= 0) {
                t16 = _sub(0x0, (t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13);
                t5 = t16;
                *(unsigned int *)(((int)stk + 28)) = t5;
                t17 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t17 + t14);
            }
            t20 = (int)((unsigned int)t14 + (unsigned int)0x0);
            t21 = (int)((unsigned int)t20 + ((((int)0x0 > (int)t14)) ? 1u : 0u));
            t14 = t21;
            t14 = (t14 >> 1);
            if (t14 != 0) {
                t23 = _rsfts((t12 + (((int)stk + 4) + 0x1C)), t13, 0x1);
                t5 = t23;
                t24 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t24 + 0x1);
                if ((int)(t24 + 0x1) >= (int)0x4) {
                    t25 = (t24 + 0x1); t26 = 0x4; break;
                }
                continue;
            }
            t26 = 0x0; break;
        }
        t27 = *(int *)(((int)stk + 28));
        t28 = *(int *)(((int)stk + 12));
        if (t27 == 0) {
            break;
        }
        *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
        t6 = (t6 - 0x1);
        t29 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t29 - 1);
        t30 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 24)) = (t30 - 8);
        t31 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t31 - 1);
    }
    *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
    t32 = t25;
    t33 = (t6 - 0x1);
    for (;;) {
        t34 = *(int *)(((int)stk + 16));
        t33 = (t33 - 1);
        if ((unsigned int)t33 < (unsigned int)t34) {
            break;
        }
        t32 = 0x30;
        *(unsigned char *)((t33 + 0x0)) = t32;
    }
    return t5;
}

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

int _pd_peripheral_set_data(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t37;
    int t39;
    int t41;
    int t43;
    int t42;
    int t45;
    int t47;
    int t46;
    int t49;
    int t51;
    int t50;
    int t53;
    int t55;
    int t54;
    int t57;
    int t60;
    int t58;
    int t62;
    int t65;
    int t63;
    int t18;
    int t13;
    int t35;
    int t30;

    t0 = *(int *)((a5 + 0x8));
    t1 = *(signed char *)(((t0 + 0x8) + 0x1));
    t2 = *(signed char *)(((t0 + 0x8) + 0x0));
    t3 = *(signed char *)((((t0 + 0x8) + 0x3) + 0x0));
    t4 = *(signed char *)0xC2B92EC;
    if ((unsigned int)t3 >= (unsigned int)t4) {
        *(unsigned char *)(((0xC2B92EE + a6) + 0x0)) = 0x1;
        t18 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
    } else {
        t5 = *(signed char *)((((t0 + 0x8) + 0x3) + 0x0));
        t6 = *(signed char *)0xC2B92ED;
        if ((unsigned int)t5 <= (unsigned int)t6) {
            *(unsigned char *)(((0xC2B92EE + a6) + 0x0)) = 0x0;
            t13 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) | 0x20000);
        } else {
            t7 = *(signed char *)(((0xC2B92EE + a6) + 0x0));
            t9 = (((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000);
            if (t7 != 0) {
                t9 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
            }
            t13 = t9;
        }
        t18 = t13;
    }
    t20 = *(signed char *)0xC2B92EC;
    t21 = *(signed char *)((((t0 + 0x8) + 0x2) + 0x0));
    if ((unsigned int)t21 >= (unsigned int)t20) {
        *(unsigned char *)(((0xC2B9306 + a6) + 0x0)) = 0x1;
        t35 = (t18 & 0xFFFEFFFF);
    } else {
        t22 = *(signed char *)((((t0 + 0x8) + 0x2) + 0x0));
        t23 = *(signed char *)0xC2B92ED;
        if ((unsigned int)t22 <= (unsigned int)t23) {
            *(unsigned char *)(((0xC2B9306 + a6) + 0x0)) = 0x0;
            t30 = (t18 | 0x10000);
        } else {
            t24 = *(signed char *)(((0xC2B9306 + a6) + 0x0));
            t26 = t18;
            if (t24 != 0) {
                t26 = (t18 & 0xFFFEFFFF);
            }
            t30 = t26;
        }
        t35 = t30;
    }
    t37 = *(int *)0xC2B92E8;
    t39 = t35;
    if (t37 == 0) {
        t39 = (t35 ^ 0xFFFFFFFF);
    }
    *(unsigned int *)((a4 + 0x8)) = t39;
    t41 = *(int *)((a4 + 0x4));
    t43 = 0x0;
    if ((t41 & 0x10000) != 0) {
        t42 = *(signed char *)((((t0 + 0x8) + 0x2) + 0x0));
        t43 = (unsigned char)t42;
    }
    *(unsigned short *)((a4 + 0x18)) = t43;
    t45 = *(int *)((a4 + 0x4));
    t47 = 0x0;
    if ((t45 & 0x20000) != 0) {
        t46 = *(signed char *)((((t0 + 0x8) + 0x3) + 0x0));
        t47 = (unsigned char)t46;
    }
    *(unsigned short *)((a4 + 0x1A)) = t47;
    t49 = *(int *)((a4 + 0x4));
    t51 = 0x0;
    if ((t49 & 0x40000) != 0) {
        t50 = *(signed char *)(((t0 + 0x8) + 0x4));
        t51 = ((unsigned char)t50 - 128);
    }
    *(unsigned short *)((a4 + 0x1C)) = t51;
    t53 = *(int *)((a4 + 0x4));
    t55 = 0x0;
    if ((t53 & 0x80000) != 0) {
        t54 = *(signed char *)(((t0 + 0x8) + 0x5));
        t55 = ((unsigned char)t54 - 128);
    }
    *(unsigned short *)((a4 + 0x1E)) = t55;
    t57 = *(int *)((a4 + 0x4));
    t60 = 0x0;
    if ((t57 & 0x100000) != 0) {
        t58 = *(signed char *)(((t0 + 0x8) + 0x6));
        t60 = ((unsigned char)t58 - 128);
    }
    *(unsigned short *)((a4 + 0x20)) = t60;
    t62 = *(int *)((a4 + 0x4));
    t65 = 0x0;
    if ((t62 & 0x200000) != 0) {
        t63 = *(signed char *)(((t0 + 0x8) + 0x7));
        t65 = ((unsigned char)t63 - 128);
    }
    *(unsigned short *)((a4 + 0x22)) = t65;
    return 0x22;
}

