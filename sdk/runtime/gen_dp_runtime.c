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

int _pow5(int a4, int a5)
{
    return memmove(a5, (((a4 << 2) << 1) + 0xC0DAD38), 0x8);
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
    int t2;
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
                t15 = memmove(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9);
            } else {
                t15 = _add(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9);
            }
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}


float _in_coss(float f4)
{
    int t0;
    int t1;
    int t14;
    int t3;
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
        t14 = (t1 | 0x2);
        if ((t3 & 0x7FFFFFFF) == 0x7F800000) {
        } else {
            t14 = t1;
            if (f4 != f4) {
                t14 = (t1 | 0x1);
            }
        }
    }
    if ((0x3 & t14) != 0) {
        u16 = (((struct o0_float *)0xC0DACD0)->v);
        return u16;
    }
    u17 = f4;
    if ((0x8 & t14) != 0) {
        u17 = (-f4);
    }
    u19 = (((struct o2C_float *)0xC0DACD0)->v);
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
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    R1016 = a5;
    R1004 = a6;
    R1028 = 0x1;
    t0 = R1016;
    t1 = R1004;
    *(unsigned char *)(((t1 + t0) + 0x0)) = 0x0;
    t2 = memmove((((int)stk + 4) + 0x24), a4, 0x8);
    t3 = R1004;
    R1008 = (t3 - 1);
    R1024 = ((((t3 - 1) << 2) << 1) + 0xC0DAC48);
    t4 = R1008;
    R1020 = (t4 + 0x1);
    t5 = t2;
    t6 = (t1 + t0);
    for (;;) {
        t7 = R1008;
        if ((int)t7 < 0) {
            return t5;
        }
        t8 = R1020;
        t5 = 0x5;
        t9 = (int)((int)t8 / (int)t5);
        t5 = t9;
        t5 = (t5 + 0x1);
        t5 = (t5 << 1);
        t10 = R1024;
        t11 = memmove(((0x8 - t5) + (((int)stk + 4) + 0x1C)), (t10 + (0x8 - t5)), (0x8 - (0x8 - t5)));
        t12 = (0x8 - t5);
        t13 = (0x8 - (0x8 - t5));
        t5 = t11;
        R1012 = 0x0;
        R1004 = 0x0;
        t14 = 0x8;
        for (;;) {
            t15 = _umemcmp((t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13);
            t5 = t15;
            if ((int)t5 >= 0) {
                t16 = _sub(0x0, (t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13);
                t5 = t16;
                R1028 = t5;
                t17 = R1012;
                R1012 = (t17 + t14);
            }
            t20 = (int)((unsigned int)t14 + (unsigned int)0x0);
            t21 = (int)((unsigned int)t20 + ((((int)0x0 > (int)t14)) ? 1u : 0u));
            t14 = t21;
            t14 = (t14 >> 1);
            if (t14 != 0) {
                t23 = _rsfts((t12 + (((int)stk + 4) + 0x1C)), t13, 0x1);
                t5 = t23;
                t24 = R1004;
                R1004 = (t24 + 0x1);
                if ((int)(t24 + 0x1) >= (int)0x4) {
                    t25 = (t24 + 0x1); t26 = 0x4; break;
                }
                continue;
            }
            t26 = 0x0; break;
        }
        t27 = R1028;
        t28 = R1012;
        if (t27 == 0) {
            break;
        }
        *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
        t6 = (t6 - 0x1);
        t29 = R1008;
        R1008 = (t29 - 1);
        t30 = R1024;
        R1024 = (t30 - 8);
        t31 = R1020;
        R1020 = (t31 - 1);
    }
    *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
    t32 = t25;
    t33 = (t6 - 0x1);
    for (;;) {
        t34 = R1016;
        t33 = (t33 - 1);
        if ((unsigned int)t33 < (unsigned int)t34) {
            break;
        }
        t32 = 0x30;
        *(unsigned char *)((t33 + 0x0)) = t32;
    }
    return t5;
}


