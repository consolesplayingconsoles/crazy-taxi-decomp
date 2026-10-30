/* Straight-line functions with calls and guards (batch gen_atp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
void nlLoadMatrix8(int a4);

void nlLoadMatrix8(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    float u5[16];
    float u8[16];
    float u11[16];
    float u14[16];
    float u17[16];
    float u20[16];
    float u23[16];
    float u26[16];

    t0 = a4;
    if (a4 == 0) {
        t0 = (*(int *)0xC2B31E4);
    }
    u0 = *(float *)((t0 + 0x0));
    u1 = *(float *)(((t0 + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u5);
    u5[0] = u1;
    u5[1] = u0;
    _builtin_ld_ext((float (*)[4])u5);
    u0 = *(float *)(((t0 + 0x8) + 0x0));
    u1 = *(float *)((((t0 + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u8);
    u8[2] = u1;
    u8[3] = u0;
    _builtin_ld_ext((float (*)[4])u8);
    u0 = *(float *)((((t0 + 0x8) + 0x8) + 0x0));
    u1 = *(float *)(((((t0 + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u11);
    u11[4] = u1;
    u11[5] = u0;
    _builtin_ld_ext((float (*)[4])u11);
    u0 = *(float *)(((((t0 + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u14);
    u14[6] = u1;
    u14[7] = u0;
    _builtin_ld_ext((float (*)[4])u14);
    u0 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u17);
    u17[8] = u1;
    u17[9] = u0;
    _builtin_ld_ext((float (*)[4])u17);
    u0 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u20);
    u20[10] = u1;
    u20[11] = u0;
    _builtin_ld_ext((float (*)[4])u20);
    u0 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u23);
    u23[12] = u1;
    u23[13] = u0;
    _builtin_ld_ext((float (*)[4])u23);
    u0 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u26);
    u26[14] = u1;
    u26[15] = u0;
    _builtin_ld_ext((float (*)[4])u26);
}
