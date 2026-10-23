/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
void nlTranslate(float f4, float f5, float f6);
void nlLoadMatrix8(int a4);

void nlTranslate(float f4, float f5, float f6)
{
    float u0[4];
    float u1[16];
    float u2[16];

    u0[0] = f4;
    u0[1] = f5;
    u0[2] = f6;
    u0[3] = 1.0f;
    _builtin_ftrv(u0, u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[12] = u0[0];
    u1[13] = u0[1];
    _builtin_ld_ext((float (*)[4])u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[14] = u0[2];
    u2[15] = u0[3];
    _builtin_ld_ext((float (*)[4])u2);
}

void nlLoadMatrix8(int a4)
{
    int t1;
    int t0;
    float u3;
    float u4;
    float u6;
    float u7;
    float u9;
    float u10;
    float u12;
    float u13;
    float u15;
    float u16;
    float u18;
    float u19;
    float u21;
    float u22;
    float u24;
    float u25;
    float u5[16];
    float u8[16];
    float u11[16];
    float u14[16];
    float u17[16];
    float u20[16];
    float u23[16];
    float u26[16];

    t1 = a4;
    if (a4 == 0) {
        t0 = *(int *)0xC2B31E4;
        t1 = t0;
    }
    u3 = *(float *)((t1 + 0x0));
    u4 = *(float *)(((t1 + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u5);
    u5[0] = u4;
    u5[1] = u3;
    _builtin_ld_ext((float (*)[4])u5);
    u6 = *(float *)(((t1 + 0x8) + 0x0));
    u7 = *(float *)((((t1 + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u8);
    u8[2] = u7;
    u8[3] = u6;
    _builtin_ld_ext((float (*)[4])u8);
    u9 = *(float *)((((t1 + 0x8) + 0x8) + 0x0));
    u10 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u11);
    u11[4] = u10;
    u11[5] = u9;
    _builtin_ld_ext((float (*)[4])u11);
    u12 = *(float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u14);
    u14[6] = u13;
    u14[7] = u12;
    _builtin_ld_ext((float (*)[4])u14);
    u15 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u16 = *(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u17);
    u17[8] = u16;
    u17[9] = u15;
    _builtin_ld_ext((float (*)[4])u17);
    u18 = *(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u19 = *(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u20);
    u20[10] = u19;
    u20[11] = u18;
    _builtin_ld_ext((float (*)[4])u20);
    u21 = *(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u22 = *(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u23);
    u23[12] = u22;
    u23[13] = u21;
    _builtin_ld_ext((float (*)[4])u23);
    u24 = *(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u25 = *(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u26);
    u26[14] = u25;
    u26[15] = u24;
    _builtin_ld_ext((float (*)[4])u26);
}
