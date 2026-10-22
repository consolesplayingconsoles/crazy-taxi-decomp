/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetLight(void);
int CarSel_SetFog(void);
int selectInitSprites(void);
int Init_nd_Sprite(void);
int Start_Time_Count(int, int);
int fcvCalcAngle(int, int);
int FUN_0c077df0(int);
int FUN_0c07d450(int, int, int);
int FUN_0c089270(int, int, int);
int FUN_0c08933c(int, int, int, int);
int FUN_0c0893b8(int, int, int);
int FUN_0c0897f8(int, int);
int FUN_0c089ad4(int, int, int);
int FUN_0c089cc8(int, int);
int FUN_0c171f6c(int, int, int);
int FUN_0c171fe8(int, int, int);
int FUN_0c172042(int, int, int);
int FUN_0c1720ac(int, int, int);
int FUN_0c1720f4(int, int, int);
int FUN_0c172132(int, int);
int FUN_0c17217a(void);
int FUN_0c172180(int, int);
int FUN_0c1721da(void);
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
int buSetCompleteCallback(void);
int buSetProgressCallback(void);
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
void FUN_0c1701e6(int a4, int a5, int a6);
int FUN_0c1701d4(int a4, int a5);
int FUN_0c1676f8(int a4, int a5);
void nlGetTranslate(int a4);
int FUN_0c1708b2(int a4, int a5, int a6);
int __init_dteapi_cc_f(void);
int _pow5(int a4, int a5);
int FUN_0c1721e0(int a4, int a5, int a6, int a7);
int FUN_0c17225c(int a4, int a5, int a6, int a7);
int nlPushMatrix(int a4);
int _mult(int a4, int a5, int a6);
int FUN_0c077470(int a4);
float FUN_0c079da0(void);
float FUN_0c087ed4(float f4);
int buFbrExecFiberServer(int a4);
int fcvRotateCurve(int a4);
int FUN_0c0893ec(int a4, int a5, int a6, float f4, float f5);
int FUN_0c088928(int a4, int a5, int a6);
int kmiChkActiveListType(int a4, int a5, int a6, int a7, int a8);
int _pd_peripheral_set_data(int a4, int a5, int a6);
void FUN_0c160cb0(int a4, int a5);
int FUN_0c07d240(int a4, int a5, int a6, int a7);
int nd_CarSelInit(void);

void FUN_0c1701e6(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = ((((unsigned int)a6) & 0xFFFF0000) | ((((unsigned int)a6) & 0xFF) << 8) | ((((unsigned int)a6) >> 8) & 0xFF));
}

int FUN_0c1701d4(int a4, int a5)
{
    int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)((((unsigned int)t0) & 0xFFFF0000) | ((((unsigned int)t0) & 0xFF) << 8) | ((((unsigned int)t0) >> 8) & 0xFF));
}

int FUN_0c1676f8(int a4, int a5)
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

int FUN_0c1708b2(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return 0;
    }
    return ((int (*)(int, int, int))(0xC1708AC))(a4, a5, (a6 - 1));
}

int __init_dteapi_cc_f(void)
{
    buSetCompleteCallback();
    return buSetProgressCallback();
}

int _pow5(int a4, int a5)
{
    return memmove(a5, (((a4 << 2) << 1) + 0xC0DAD38), 0x8);
}

int FUN_0c1721e0(int a4, int a5, int a6, int a7)
{
    if (a5 == 0) {
        return FUN_0c171f6c(a4, a6, a7);
    }
    if (a5 == 1) {
        return FUN_0c172042(a4, a6, a7);
    }
    if (a5 == 2) {
        return FUN_0c172132(a4, a6);
    }
    if (a5 == 3) {
        return FUN_0c1720ac(a4, a6, a7);
    }
    if (a5 == 4) {
        return FUN_0c172180(a4, a6);
    }
    return a5;
}

int FUN_0c17225c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    if (a5 == 0) {
        return FUN_0c171fe8(a4, a6, a7);
    }
    if (a5 == 1) {
        return mwlSbGetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        t0 = FUN_0c17217a();
        *(unsigned int *)((a6 + 0x0)) = t0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        return t0;
    }
    if (a5 == 3) {
        return FUN_0c1720f4(a4, a6, a7);
    }
    if (a5 == 4) {
        t1 = FUN_0c1721da();
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
                FUN_0c089cc8((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)), ((int)stk + 4));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t11 = memmove(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9);
                t13 = t11;
            } else {
                t12 = FUN_0c089ad4(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9);
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

int FUN_0c077470(int a4)
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

float FUN_0c079da0(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;
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
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u17[16];
    float u18[4];
    float u19[16];
    float u20[16];
    float u21[4];
    float u22[16];
    float u23[4];
    float u24[16];
    float u25[4];
    float u26[16];
    float u43[16];
    float u44[4];
    float u45[16];
    float u46[16];
    float u47[4];
    float u48[16];
    float u49[4];
    float u50[16];
    float u51[4];
    float u52[16];

    t0 = *(int *)0xC2B3208;
    u1 = *(float *)((t0 + 0x0));
    u2 = *(float *)(((t0 + 0x0) + 4));
    u3 = *(float *)(((t0 + 0x8) + 0x0));
    u4 = *(float *)((((t0 + 0x8) + 0x0) + 4));
    u5 = *(float *)((((t0 + 0x8) + 0x8) + 0x0));
    u6 = *(float *)(((((t0 + 0x8) + 0x8) + 0x0) + 4));
    u7 = *(float *)(((((t0 + 0x8) + 0x8) + 0x8) + 0x0));
    u8 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u9 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u10 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u11 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u12 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u13 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u14 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u15 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u16 = *(float *)((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_prefetch((void *)0xC2B3410);
    u17[0] = u2;
    u17[1] = u1;
    u17[2] = u4;
    u17[3] = u3;
    u17[4] = u6;
    u17[5] = u5;
    u17[6] = u8;
    u17[7] = u7;
    u17[8] = u10;
    u17[9] = u9;
    u17[10] = u12;
    u17[11] = u11;
    u17[12] = u14;
    u17[13] = u13;
    u17[14] = u16;
    u17[15] = u15;
    _builtin_st_ext((float (*)[4])u19);
    u18[0] = u19[0];
    u18[1] = u19[1];
    u18[2] = u19[2];
    u18[3] = u19[3];
    _builtin_ld_ext((float (*)[4])u17);
    _builtin_ftrv(u18, u18);
    u20[0] = u2;
    u20[1] = u1;
    u20[2] = u4;
    u20[3] = u3;
    u20[4] = u6;
    u20[5] = u5;
    u20[6] = u8;
    u20[7] = u7;
    u20[8] = u10;
    u20[9] = u9;
    u20[10] = u12;
    u20[11] = u11;
    u20[12] = u14;
    u20[13] = u13;
    u20[14] = u16;
    u20[15] = u15;
    u21[0] = u19[4];
    u21[1] = u19[5];
    u21[2] = u19[6];
    u21[3] = u19[7];
    _builtin_ld_ext((float (*)[4])u20);
    _builtin_ftrv(u21, u21);
    u22[0] = u2;
    u22[1] = u1;
    u22[2] = u4;
    u22[3] = u3;
    u22[4] = u6;
    u22[5] = u5;
    u22[6] = u8;
    u22[7] = u7;
    u22[8] = u10;
    u22[9] = u9;
    u22[10] = u12;
    u22[11] = u11;
    u22[12] = u14;
    u22[13] = u13;
    u22[14] = u16;
    u22[15] = u15;
    u23[0] = u19[8];
    u23[1] = u19[9];
    u23[2] = u19[10];
    u23[3] = u19[11];
    _builtin_ld_ext((float (*)[4])u22);
    _builtin_ftrv(u23, u23);
    u24[0] = u2;
    u24[1] = u1;
    u24[2] = u4;
    u24[3] = u3;
    u24[4] = u6;
    u24[5] = u5;
    u24[6] = u8;
    u24[7] = u7;
    u24[8] = u10;
    u24[9] = u9;
    u24[10] = u12;
    u24[11] = u11;
    u24[12] = u14;
    u24[13] = u13;
    u24[14] = u16;
    u24[15] = u15;
    u25[0] = u19[12];
    u25[1] = u19[13];
    u25[2] = u19[14];
    u25[3] = u19[15];
    _builtin_ld_ext((float (*)[4])u24);
    _builtin_ftrv(u25, u25);
    _builtin_prefetch((void *)0xC2B3430);
    _builtin_st_ext((float (*)[4])u26);
    u26[0] = u18[0];
    u26[1] = u18[1];
    u26[2] = u18[2];
    u26[3] = u18[3];
    u26[4] = u21[0];
    u26[5] = u21[1];
    u26[6] = u21[2];
    u26[7] = u21[3];
    u26[8] = u23[0];
    u26[9] = u23[1];
    u26[10] = u23[2];
    u26[11] = u23[3];
    u26[12] = u25[0];
    u26[13] = u25[1];
    u26[14] = u25[2];
    u26[15] = u25[3];
    _builtin_ld_ext((float (*)[4])u26);
    u27 = *(float *)0xC2B3410;
    u28 = *(float *)0xC2B3414;
    u29 = *(float *)0xC2B3418;
    u30 = *(float *)0xC2B341C;
    u31 = *(float *)0xC2B3420;
    u32 = *(float *)0xC2B3424;
    u33 = *(float *)0xC2B3428;
    u34 = *(float *)0xC2B342C;
    u35 = *(float *)0xC2B3430;
    u36 = *(float *)0xC2B3434;
    u37 = *(float *)0xC2B3438;
    u38 = *(float *)0xC2B343C;
    u39 = *(float *)0xC2B3440;
    u40 = *(float *)0xC2B3444;
    u41 = *(float *)0xC2B3448;
    u42 = *(float *)0xC2B344C;
    u43[0] = u27;
    u43[1] = u28;
    u43[2] = u29;
    u43[3] = u30;
    u43[4] = u31;
    u43[5] = u32;
    u43[6] = u33;
    u43[7] = u34;
    u43[8] = u35;
    u43[9] = u36;
    u43[10] = u37;
    u43[11] = u38;
    u43[12] = u39;
    u43[13] = u40;
    u43[14] = u41;
    u43[15] = u42;
    _builtin_st_ext((float (*)[4])u45);
    u44[0] = u45[0];
    u44[1] = u45[1];
    u44[2] = u45[2];
    u44[3] = u45[3];
    _builtin_ld_ext((float (*)[4])u43);
    _builtin_ftrv(u44, u44);
    u46[0] = u27;
    u46[1] = u28;
    u46[2] = u29;
    u46[3] = u30;
    u46[4] = u31;
    u46[5] = u32;
    u46[6] = u33;
    u46[7] = u34;
    u46[8] = u35;
    u46[9] = u36;
    u46[10] = u37;
    u46[11] = u38;
    u46[12] = u39;
    u46[13] = u40;
    u46[14] = u41;
    u46[15] = u42;
    u47[0] = u45[4];
    u47[1] = u45[5];
    u47[2] = u45[6];
    u47[3] = u45[7];
    _builtin_ld_ext((float (*)[4])u46);
    _builtin_ftrv(u47, u47);
    u48[0] = u27;
    u48[1] = u28;
    u48[2] = u29;
    u48[3] = u30;
    u48[4] = u31;
    u48[5] = u32;
    u48[6] = u33;
    u48[7] = u34;
    u48[8] = u35;
    u48[9] = u36;
    u48[10] = u37;
    u48[11] = u38;
    u48[12] = u39;
    u48[13] = u40;
    u48[14] = u41;
    u48[15] = u42;
    u49[0] = u45[8];
    u49[1] = u45[9];
    u49[2] = u45[10];
    u49[3] = u45[11];
    _builtin_ld_ext((float (*)[4])u48);
    _builtin_ftrv(u49, u49);
    u50[0] = u27;
    u50[1] = u28;
    u50[2] = u29;
    u50[3] = u30;
    u50[4] = u31;
    u50[5] = u32;
    u50[6] = u33;
    u50[7] = u34;
    u50[8] = u35;
    u50[9] = u36;
    u50[10] = u37;
    u50[11] = u38;
    u50[12] = u39;
    u50[13] = u40;
    u50[14] = u41;
    u50[15] = u42;
    u51[0] = u45[12];
    u51[1] = u45[13];
    u51[2] = u45[14];
    u51[3] = u45[15];
    _builtin_ld_ext((float (*)[4])u50);
    _builtin_ftrv(u51, u51);
    _builtin_st_ext((float (*)[4])u52);
    u52[0] = u44[0];
    u52[1] = u44[1];
    u52[2] = u44[2];
    u52[3] = u44[3];
    u52[4] = u47[0];
    u52[5] = u47[1];
    u52[6] = u47[2];
    u52[7] = u47[3];
    u52[8] = u49[0];
    u52[9] = u49[1];
    u52[10] = u49[2];
    u52[11] = u49[3];
    u52[12] = u51[0];
    u52[13] = u51[1];
    u52[14] = u51[2];
    u52[15] = u51[3];
    _builtin_ld_ext((float (*)[4])u52);
    return u27;
}

float FUN_0c087ed4(float f4)
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


int FUN_0c0893ec(int a4, int a5, int a6, float f4, float f5)
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
    FUN_0c0897f8(((int)stk + 4), (((((int)stk + 4) + 0x4) + 0x6) - 2));
    t7 = _builtin_get_fpscr();
    _builtin_set_fpscr((t7 & 0xFFE7FFFF));
    memmove(a6, (((int)stk + 4) + 0x1), 0x3);
    t9 = _builtin_get_fpscr();
    _builtin_set_fpscr((t9 & 0xFFE7FFFF));
    FUN_0c0897f8(((int)stk + 4), (((((int)stk + 4) + 0x4) + 0x6) - 6));
    t11 = _builtin_get_fpscr();
    _builtin_set_fpscr((t11 & 0xFFE7FFFF));
    memmove((a6 + 0x3), ((int)stk + 4), 0x4);
    t13 = _builtin_get_fpscr();
    _builtin_set_fpscr((t13 & 0xFFE7FFFF));
    FUN_0c089270(a6, 0x7, 0x3);
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
            t23 = FUN_0c089270(a6, 0x7, 0x1);
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

int FUN_0c088928(int a4, int a5, int a6)
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
            t15 = FUN_0c0893b8((t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13);
            t5 = t15;
            if ((int)t5 >= 0) {
                t16 = FUN_0c08933c(0x0, (t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13);
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

void FUN_0c160cb0(int a4, int a5)
{
    int t0;
    int t1;
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
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t44;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = (t1 | 0x800);
    if (a4 == 0x80000000) {
        *(unsigned int *)0xC16DE34 = 0xC16E030;
        *(unsigned int *)0xC16DE90 = 0xC16E030;
        *(unsigned int *)0xC16E1DC = 0x0;
        *(unsigned int *)0xC16E1D4 = a5;
    } else {
        *(unsigned int *)0xC16DE34 = 0xC16DEC4;
        *(unsigned int *)0xC16DE90 = 0xC16DEC4;
        *(unsigned int *)0xC16E1DC = 0x0;
        *(unsigned int *)0xC16E1D4 = 0x0;
    }
    t5 = (int)_builtin_get_vbr();
    t6 = 0xC16E1DC;
    t7 = 0xC16DE94;
    t8 = t5;
    for (;;) {
        if ((unsigned int)t7 > (unsigned int)0xC16DEC4) {
            break;
        }
        t9 = *(int *)((t7 + 0x0));
        t6 = t9;
        t7 = (t7 + 0x4);
        *(unsigned int *)((t8 + 0x0)) = t6;
        t8 = (t8 + 0x4);
    }
    t10 = (int)_builtin_get_vbr();
    t11 = (int)_builtin_get_vbr();
    t12 = t11;
    t13 = (((unsigned int)((unsigned int)((unsigned int)(t8 - t10) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t12);
        t13 = (t13 - 0x1);
        t12 = (t12 + 0x20);
        if (t13 == 0) {
            break;
        }
    }
    t14 = (int)_builtin_get_vbr();
    t15 = t6;
    t16 = 0xC16DE00;
    t17 = (t14 + 0x100);
    for (;;) {
        if ((unsigned int)t16 > (unsigned int)0xC16DE38) {
            break;
        }
        t18 = *(int *)((t16 + 0x0));
        t15 = t18;
        t16 = (t16 + 0x4);
        *(unsigned int *)((t17 + 0x0)) = t15;
        t17 = (t17 + 0x4);
    }
    t19 = (int)_builtin_get_vbr();
    t20 = (int)_builtin_get_vbr();
    t21 = (t20 + 0x400);
    t22 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFF00 + (t17 - t19)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t21);
        t22 = (t22 - 0x1);
        t21 = (t21 + 0x20);
        if (t22 == 0) {
            break;
        }
    }
    t23 = (int)_builtin_get_vbr();
    t24 = t15;
    t25 = 0xC16DE00;
    t26 = (t23 + 0x400);
    for (;;) {
        if ((unsigned int)t25 > (unsigned int)0xC16DE38) {
            break;
        }
        t27 = *(int *)((t25 + 0x0));
        t24 = t27;
        t25 = (t25 + 0x4);
        *(unsigned int *)((t26 + 0x0)) = t24;
        t26 = (t26 + 0x4);
    }
    t28 = (int)_builtin_get_vbr();
    t29 = (int)_builtin_get_vbr();
    t30 = (t29 + 0x1000);
    t31 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFC00 + (t26 - t28)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t30);
        t31 = (t31 - 0x1);
        t30 = (t30 + 0x20);
        if (t31 == 0) {
            break;
        }
    }
    t32 = (int)_builtin_get_vbr();
    t33 = t24;
    t34 = 0xC16DE38;
    t35 = (t32 + 0x600);
    for (;;) {
        if ((unsigned int)t34 > (unsigned int)0xC16DE94) {
            break;
        }
        t36 = *(int *)((t34 + 0x0));
        t33 = t36;
        t34 = (t34 + 0x4);
        *(unsigned int *)((t35 + 0x0)) = t33;
        t35 = (t35 + 0x4);
    }
    t37 = (int)_builtin_get_vbr();
    t38 = (int)_builtin_get_vbr();
    t39 = (t38 + 0x1800);
    t40 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFA00 + (t35 - t37)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t39);
        t40 = (t40 - 0x1);
        t39 = (t39 + 0x20);
        if (t40 == 0) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    t41 = 0xFFFFFE40;
    for (;;) {
        t42 = (int)_builtin_get_vbr();
        t44 = (t42 + (((t41 >> 1) >> 1) >> 1));
        t41 = (t41 + 0x20);
        *(unsigned int *)(((t44 + 0x200) + 0x0)) = 0xC16DD08;
        if ((int)t41 >= (int)0x620) {
            break;
        }
    }
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFFFF));
}

int FUN_0c07d240(int a4, int a5, int a6, int a7)
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
    int t11;
    int t12;
    int t13;
    int t97;
    int t100;
    int t101;
    int t102;
    int t103;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t22;
    int t23;
    int t24;
    int t27;
    int t30;
    int t31;
    int t33;
    int t36;
    int t39;
    int t40;
    int t41;
    int t44;
    int t47;
    int t48;
    int t49;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t85;
    int t86;
    int t87;
    int t105;
    int t106;
    int t107;
    int t10;
    int t89;
    int t92;
    int t93;
    int t94;
    int t95;
    int stk[21] = {0};

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    t0 = *(int *)0xC2B7664;
    t1 = *(int *)0xC2B766C;
    *(unsigned int *)(((int)stk + 20)) = t0;
    t2 = *(int *)0xC2B7668;
    *(unsigned int *)(((int)stk + 24)) = t2;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x20) + 0x10);
    t3 = 0xC2B7668;
    t4 = ((((int)stk + 4) + 0x20) + 0xC);
    t5 = ((((int)stk + 4) + 0x20) + 0x4);
    t6 = a4;
    t7 = a5;
    t8 = a6;
    t9 = a7;
    t11 = t1;
    for (;;) {
        t12 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 28)) = (t12 - 1);
        if ((int)((t12 - 1) + 0x1) > 0) {
            t13 = *(signed char *)((t11 + 0x0));
            t3 = t13;
            t97 = t4;
            t100 = t6;
            t101 = t7;
            t102 = t8;
            t103 = t9;
            if (t3 != 1) {
            } else {
                t14 = *(int *)(((int)stk + 16));
                t6 = t14;
                t15 = *(int *)0xC2B7658;
                t7 = t15;
                t16 = *(short *)((t6 + 0x0));
                t6 = (t6 + 0x2);
                t9 = t16;
                t8 = t9;
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t17 = *(short *)((t6 + 0x0));
                t4 = t17;
                t7 = (t7 + t8);
                t18 = *(int *)((t7 + 0xC));
                t7 = t18;
                t6 = 0x0;
                if ((int)t7 >= 0) {
                    t3 = t6;
                    t19 = *(int *)0xC2B7658;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = (t19 + t8);
                }
                t9 = t4;
                t22 = *(int *)0xC2B7658;
                t10 = t22;
                t9 = (t9 << 2);
                t9 = (t9 << 2);
                t10 = (t10 + t9);
                t23 = *(int *)((t10 + 0xC));
                t10 = t23;
                if ((int)(t7 ^ t10) < 0) {
                    t3 = t6;
                    t24 = *(int *)(((int)stk + 20));
                    t3 = (t3 << 2);
                    t7 = t10;
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = t24;
                }
                if ((int)t10 >= 0) {
                    t3 = t6;
                    t27 = *(int *)0xC2B7658;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = (t27 + t9);
                }
                t30 = *(int *)0xC2B765C;
                t4 = t30;
                t4 = (t4 + t9);
                t31 = *(int *)((t4 + 0xC));
                t4 = t31;
                if ((int)(t7 ^ t4) < 0) {
                    t3 = t6;
                    t5 = 0xC2B7660;
                    t3 = (t3 << 2);
                    t7 = t4;
                    t6 = (t6 + 0x1);
                    t33 = *(int *)((t5 + 0x0));
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = (t33 + t9);
                }
                if ((int)t4 >= 0) {
                    t3 = t6;
                    t36 = *(int *)0xC2B765C;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    t9 = (t9 + t36);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = t9;
                }
                t39 = *(int *)0xC2B765C;
                t9 = t39;
                t9 = (t9 + t8);
                t40 = *(int *)((t9 + 0xC));
                t9 = t40;
                if ((int)(t7 ^ t9) < 0) {
                    t3 = t6;
                    t41 = *(int *)(((int)stk + 24));
                    t3 = (t3 << 2);
                    t7 = t9;
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = t41;
                }
                if ((int)t9 >= 0) {
                    t3 = t6;
                    t44 = *(int *)0xC2B765C;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = (t44 + t8);
                }
                t47 = *(int *)0xC2B7658;
                t5 = t47;
                t5 = (t5 + t8);
                t48 = *(int *)((t5 + 0xC));
                t7 = (t7 ^ t48);
                if ((int)t7 < 0) {
                    t3 = t6;
                    t5 = 0xC2B7660;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    t49 = *(int *)((t5 + 0x0));
                    t8 = (t8 + t49);
                    *(unsigned int *)(((((int)stk + 4) + 0x20) + t3)) = t8;
                }
                if (t6 != 0) {
                    t3 = t6;
                    if (t3 == 3) {
                        t52 = *(int *)(((int)stk + 8));
                        t7 = t52;
                        t53 = *(int *)(((int)stk + 4));
                        t8 = t53;
                        t54 = *(int *)((t7 + 0x0));
                        t7 = t54;
                        t55 = *(int *)((t8 + 0x0));
                        t8 = t55;
                        t56 = *(int *)(((((int)stk + 4) + 0x20) + 0x0));
                        t6 = t56;
                        t57 = FUN_0c07d450(t6, t7, t8);
                        t3 = t57;
                    } else {
                        if (t3 == 4) {
                            t58 = *(int *)(((int)stk + 8));
                            t7 = t58;
                            t59 = *(int *)(((int)stk + 4));
                            t8 = t59;
                            t60 = *(int *)((t7 + 0x0));
                            t7 = t60;
                            t61 = *(int *)((t8 + 0x0));
                            t8 = t61;
                            t62 = *(int *)(((((int)stk + 4) + 0x20) + 0x0));
                            t6 = t62;
                            t63 = FUN_0c07d450(t6, t7, t8);
                            t3 = t63;
                            t64 = *(int *)(((int)stk + 12));
                            t8 = t64;
                            t65 = *(int *)((t8 + 0x0));
                            t8 = t65;
                            t66 = *(int *)(((int)stk + 4));
                            t7 = t66;
                        } else {
                            t3 = t6;
                            if (t3 != 5) {
                                _builtin_trapa(48);
                            }
                            t68 = *(int *)(((int)stk + 8));
                            t7 = t68;
                            t69 = *(int *)(((int)stk + 4));
                            t8 = t69;
                            t70 = *(int *)((t7 + 0x0));
                            t7 = t70;
                            t71 = *(int *)((t8 + 0x0));
                            t8 = t71;
                            t72 = *(int *)(((((int)stk + 4) + 0x20) + 0x0));
                            t6 = t72;
                            t73 = FUN_0c07d450(t6, t7, t8);
                            t3 = t73;
                            t75 = *(int *)(((int)stk + 4));
                            t7 = t75;
                            t76 = *(int *)(((int)stk + 12));
                            t8 = t76;
                            t77 = *(int *)((t7 + 0x0));
                            t7 = t77;
                            t78 = *(int *)((t8 + 0x0));
                            t8 = t78;
                            t79 = *(int *)(((((int)stk + 4) + 0x20) + 0x0));
                            t6 = t79;
                            t80 = FUN_0c07d450(t6, t7, t8);
                            t3 = t80;
                            t81 = *(int *)(((int)stk + 32));
                            t8 = t81;
                            t82 = *(int *)(((int)stk + 12));
                            t7 = t82;
                            t83 = *(int *)((t8 + 0x0));
                            t8 = t83;
                        }
                        t85 = *(int *)((t7 + 0x0));
                        t7 = t85;
                        t86 = *(int *)(((((int)stk + 4) + 0x20) + 0x0));
                        t6 = t86;
                        t87 = FUN_0c07d450(t6, t7, t8);
                        t3 = t87;
                    }
                } else {
                    t89 = t4;
                    t92 = t6;
                    t93 = t7;
                    t94 = t8;
                    t95 = t9;
                }
                t97 = t89;
                t100 = t92;
                t101 = t93;
                t102 = t94;
                t103 = t95;
            }
            t105 = *(int *)(((int)stk + 16));
            t4 = t97;
            t5 = t105;
            t6 = t100;
            t7 = t101;
            t8 = t102;
            t9 = t103;
            t11 = (t11 + 0x1);
            t5 = (t5 + 0x4);
            *(unsigned int *)(((int)stk + 16)) = t5;
            t106 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 20)) = (t106 + 0x10);
            t107 = *(int *)(((int)stk + 24));
            t4 = t107;
            t4 = (t4 + 0x10);
            *(unsigned int *)(((int)stk + 24)) = t4;
            continue;
        }
        break;
    }
    return t3;
}

