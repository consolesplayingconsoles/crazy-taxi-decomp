/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
float nlRotateXSC_L(float f4, float f5);
float nlRotateYSC_L(float f4, float f5);
float nlRotateZSC_L(float f4, float f5);
float nlRotateZSC(float f4, float f5);

float nlRotateXSC_L(float f4, float f5)
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
    u1[1] = f4;
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

float nlRotateYSC_L(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
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

float nlRotateZSC_L(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = (-f4);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = f5;
    u1[2] = 0.0f;
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
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float nlRotateZSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = f4;
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = f5;
    u1[2] = 0.0f;
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
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}
