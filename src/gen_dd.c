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

