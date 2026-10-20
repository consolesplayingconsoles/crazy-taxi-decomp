/* Straight-line functions with calls and guards (batch gen_dg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
void nlUnitRotation(void);
void nlUnitMatrix(void);
void FUN_0c079ed0(int a4);

void nlUnitRotation(void)
{
    float u0[16];

    _builtin_st_ext((float (*)[4])u0);
    u0[0] = 1.0f;
    u0[1] = 0.0f;
    u0[2] = 0.0f;
    u0[4] = 0.0f;
    u0[5] = 1.0f;
    u0[6] = 0.0f;
    u0[8] = 0.0f;
    u0[9] = 0.0f;
    u0[10] = 1.0f;
    _builtin_ld_ext((float (*)[4])u0);
}

void nlUnitMatrix(void)
{
    float u0[16];
    float u1[16];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    _builtin_st_ext((float (*)[4])u0);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ld_ext((float (*)[4])u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[6] = 0.0f;
    u1[7] = 0.0f;
    _builtin_ld_ext((float (*)[4])u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[8] = 0.0f;
    u2[9] = 0.0f;
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = 0.0f;
    u3[13] = 0.0f;
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = 1.0f;
    u4[1] = 0.0f;
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = 1.0f;
    u5[11] = 0.0f;
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[4] = 0.0f;
    u6[5] = 1.0f;
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[14] = 0.0f;
    u7[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u7);
}

void FUN_0c079ed0(int a4)
{
    float u0;
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
    float u16[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u4 = *(float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x0));
    u5 = *(float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u7 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u8 = *(float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u9 = *(float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u11 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u12 = *(float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u15 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}
