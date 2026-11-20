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


int fmMngMcpy_tail_0c1708b2(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return 0;
    }
    return ((int (*)(int, int, int))(0xC1708AC))(a4, a5, (a6 - 1));
}

/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */


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

    t0 = (((struct o0_int *)0xC2FD290)->v);
    (((struct o4_uint *)0xC2FD290)->v) = t0;
    t1 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40001);
    (((struct o0_uint *)0xC2FD290)->v) = a4;
    setjmp((a4 + 0x4));
    t4 = 0x0;
    t5 = (0x210 + a4);
    for (;;) {
        t6 = (((struct o208_int *)(a4))->v);
        if ((int)t4 >= (int)t6) {
            break;
        }
        (((struct oD78_uint *)(a4))->v) = t5;
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
                    t11 = (((struct o204_int *)(a4))->v);
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
    t30 = (((struct o204_int *)(a4))->v);
    (((struct o204_uint *)(a4))->v) = (t30 + 0x1);
    t31 = (((struct o4_int *)0xC2FD290)->v);
    (((struct o0_uint *)0xC2FD290)->v) = t31;
    _builtin_set_fpscr(t1);
    return 0x204;
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
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
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
    int t35;

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
            t18 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) | 0x20000);
        } else {
            t7 = *(signed char *)(((0xC2B92EE + a6) + 0x0));
            t18 = (((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000);
            if (t7 != 0) {
                t18 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
            }
        }
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
            t35 = (t18 | 0x10000);
        } else {
            t24 = *(signed char *)(((0xC2B9306 + a6) + 0x0));
            t35 = t18;
            if (t24 != 0) {
                t35 = (t18 & 0xFFFEFFFF);
            }
        }
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
    (((struct o20_ushort *)(a4))->v) = t60;
    t62 = *(int *)((a4 + 0x4));
    t65 = 0x0;
    if ((t62 & 0x200000) != 0) {
        t63 = *(signed char *)(((t0 + 0x8) + 0x7));
        t65 = ((unsigned char)t63 - 128);
    }
    (((struct o22_ushort *)(a4))->v) = t65;
    return 0x22;
}

