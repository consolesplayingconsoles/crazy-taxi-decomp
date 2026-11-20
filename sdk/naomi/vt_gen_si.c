/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_si): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_fipr(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
void nlQuickInvertMatrix(void);


void nlQuickInvertMatrix(void)
{
    float u4;
    float u7;
    int t8;
    float u11;
    int t13;
    int t15;
    float u0[16];
    float u2[4];
    float u3[4];
    float u5[4];
    float u6[4];
    float u9[4];
    float u10[4];
    float u16[16];

    _builtin_st_ext((float (*)[4])u0);
    u2[0] = u0[12];
    u2[1] = u0[13];
    u2[2] = u0[14];
    u2[3] = 1.0f;
    u3[0] = u0[0];
    u3[1] = u0[1];
    u3[2] = u0[2];
    u3[3] = 0.0f;
    u4 = _builtin_fipr(u2, u3);
    u5[0] = u0[12];
    u5[1] = u0[13];
    u5[2] = u0[14];
    u5[3] = 1.0f;
    u6[0] = u0[4];
    u6[1] = u0[5];
    u6[2] = u0[6];
    u6[3] = 0.0f;
    u7 = _builtin_fipr(u5, u6);
    t8 = (*(int *)&(u0[1]));
    u9[0] = u0[12];
    u9[1] = u0[13];
    u9[2] = u0[14];
    u9[3] = 1.0f;
    u10[0] = u0[8];
    u10[1] = u0[9];
    u10[2] = u0[10];
    u10[3] = (u0[11] - u0[11]);
    u11 = _builtin_fipr(u9, u10);
    t13 = (*(int *)&(u0[2]));
    t15 = (*(int *)&(u0[6]));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u0[0];
    u16[1] = u0[4];
    u16[2] = u0[8];
    u16[3] = (u4 - u4);
    u16[4] = (*(float *)&t8);
    u16[5] = u0[5];
    u16[6] = u0[9];
    u16[7] = (u7 - u7);
    u16[8] = (*(float *)&t13);
    u16[9] = (*(float *)&t15);
    u16[10] = u0[10];
    u16[11] = (u11 - u11);
    u16[12] = (0.0f - u4);
    u16[13] = (0.0f - u7);
    u16[14] = ((u0[14] - u0[14]) - u11);
    u16[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u16);
}
