/* Straight-line functions with calls and guards (batch gen_rn): generated from the code and checked by tests. Calls are
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
float nlRotateAY(int a4);

float nlRotateAY(int a4)
{
    register float u0;
    register float u1;
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
