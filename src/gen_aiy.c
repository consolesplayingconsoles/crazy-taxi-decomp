/* Straight-line functions with calls and guards (batch gen_aiy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
void FUN_0c078380(void);

void FUN_0c078380(void)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = (-u0[0]);
    u1[1] = (-u0[1]);
    u1[2] = (-u0[2]);
    u1[3] = (-u0[3]);
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = (-u0[8]);
    u1[9] = (-u0[9]);
    u1[10] = (-u0[10]);
    u1[11] = (-u0[11]);
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
}
