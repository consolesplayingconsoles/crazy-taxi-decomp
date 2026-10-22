/* Straight-line functions with calls and guards (batch gen_hg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
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
int nlPopMatrix(int a4);
float nlRotateAX(int a4);
float FUN_0c078450(float f4, float f5);
float nlRotateAY(int a4);
float nlRotateAZ(int a4);
float FUN_0c078600(float f4, float f5);

int nlPopMatrix(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;
    float u8;
    float u9;
    float u11;
    float u12;
    float u14;
    float u15;
    float u17;
    float u18;
    float u20;
    float u21;
    float u23;
    float u24;
    float u26;
    float u27;
    float u29;
    float u30;
    float u10[16];
    float u13[16];
    float u16[16];
    float u19[16];
    float u22[16];
    float u25[16];
    float u28[16];
    float u31[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = *(short *)0xC2B31DC;
    t3 = *(short *)0xC2B31DE;
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = *(int *)0xC2B31E0;
    *(unsigned short *)0xC2B31DC = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0xC2B31E4 = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u8 = *(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0));
    u9 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u10);
    u10[0] = u9;
    u10[1] = u8;
    _builtin_ld_ext((float (*)[4])u10);
    u11 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0));
    u12 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u13);
    u13[2] = u12;
    u13[3] = u11;
    _builtin_ld_ext((float (*)[4])u13);
    u14 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u16);
    u16[4] = u15;
    u16[5] = u14;
    _builtin_ld_ext((float (*)[4])u16);
    u17 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0));
    u18 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u19);
    u19[6] = u18;
    u19[7] = u17;
    _builtin_ld_ext((float (*)[4])u19);
    u20 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u21 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u22);
    u22[8] = u21;
    u22[9] = u20;
    _builtin_ld_ext((float (*)[4])u22);
    u23 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u24 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u25);
    u25[10] = u24;
    u25[11] = u23;
    _builtin_ld_ext((float (*)[4])u25);
    u26 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u27 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u28);
    u28[12] = u27;
    u28[13] = u26;
    _builtin_ld_ext((float (*)[4])u28);
    u29 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u30 = *(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u31);
    u31[14] = u30;
    u31[15] = u29;
    _builtin_ld_ext((float (*)[4])u31);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

float nlRotateAX(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = (-u0);
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u2[0];
    u4[5] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u2[2];
    u5[7] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[8] = u3[0];
    u6[9] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[10] = u3[2];
    u7[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

float FUN_0c078450(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = (-f4);
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[6] = u0[2];
    u3[7] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float nlRotateAY(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[2] = u2[2];
    u5[3] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[8] = u3[0];
    u6[9] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[10] = u3[2];
    u7[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

float nlRotateAZ(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = u0;
    u2[2] = 0.0f;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = (-u0);
    u3[1] = u1;
    u3[2] = 0.0f;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[2] = u2[2];
    u5[3] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[4] = u3[0];
    u6[5] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[6] = u3[2];
    u7[7] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

float FUN_0c078600(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = (-f4);
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}
