/* Straight-line functions with calls and guards (batch gen_atn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
int nlPopMatrix(int a4);

int nlPopMatrix(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
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
    t1 = *(short *)0xC2B31DC;
    t2 = *(short *)0xC2B31DE;
    t3 = (t1 - t0);
    if ((int)t1 < (int)t0) {
        t3 = 0x0;
    }
    t4 = *(int *)0xC2B31E0;
    *(unsigned short *)0xC2B31DC = t3;
    if ((int)t3 < (int)t2) {
        *(unsigned int *)0xC2B31E4 = (t4 + ((unsigned int)(t3 << 8) >> 2));
    }
    u0 = *(float *)(((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x0));
    u1 = *(float *)((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u10);
    u10[0] = u1;
    u10[1] = u0;
    _builtin_ld_ext((float (*)[4])u10);
    u0 = *(float *)((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x0));
    u1 = *(float *)(((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u13);
    u13[2] = u1;
    u13[3] = u0;
    _builtin_ld_ext((float (*)[4])u13);
    u0 = *(float *)(((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u16);
    u16[4] = u1;
    u16[5] = u0;
    _builtin_ld_ext((float (*)[4])u16);
    u0 = *(float *)((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)(((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u19);
    u19[6] = u1;
    u19[7] = u0;
    _builtin_ld_ext((float (*)[4])u19);
    u0 = *(float *)(((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u22);
    u22[8] = u1;
    u22[9] = u0;
    _builtin_ld_ext((float (*)[4])u22);
    u0 = *(float *)((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)(((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u25);
    u25[10] = u1;
    u25[11] = u0;
    _builtin_ld_ext((float (*)[4])u25);
    u0 = *(float *)(((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)((((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u28);
    u28[12] = u1;
    u28[13] = u0;
    _builtin_ld_ext((float (*)[4])u28);
    u0 = *(float *)((((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u1 = *(float *)(((((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u31);
    u31[14] = u1;
    u31[15] = u0;
    _builtin_ld_ext((float (*)[4])u31);
    return ((((int)t1 >= (int)t0)) ? 1 : 0);
}
