/* Straight-line functions with calls and guards (batch gen_ho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
int nlPopMatrix(int a4);
void nlLoadMatrix8(int a4);

int nlPopMatrix(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    float u10[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = (((struct o0_short *)0xC2B31DC)->v);
    t3 = (((struct o2_short *)0xC2B31DC)->v);
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = (((struct o4_int *)0xC2B31DC)->v);
    (((struct o0_ushort *)0xC2B31DC)->v) = t4;
    if ((int)t4 < (int)t3) {
        (((struct o8_uint *)0xC2B31DC)->v) = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u10[0] = (*(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0)));
    u10[1] = (*(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4)));
    u10[2] = ((((struct o8_float *)((t6 + ((unsigned int)(t4 << 8) >> 2))))->v));
    u10[3] = (*(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4)));
    u10[4] = ((((struct o8_float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8)))->v));
    u10[5] = (*(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4)));
    u10[6] = ((((struct o8_float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8)))->v));
    u10[7] = (*(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[8] = ((((struct o8_float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8)))->v));
    u10[9] = (*(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[10] = ((((struct o8_float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[11] = (*(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[12] = ((((struct o8_float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[13] = (*(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[14] = ((((struct o8_float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[15] = (*(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    _builtin_ld_ext((float (*)[4])u10);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

void nlLoadMatrix8(int a4)
{
    register int t1;
    float u5[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC2B31E4);
    }
    u5[0] = (*(float *)((t1 + 0x0)));
    u5[1] = (*(float *)(((t1 + 0x0) + 4)));
    u5[2] = ((((struct o8_float *)(t1))->v));
    u5[3] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u5[4] = ((((struct o8_float *)((t1 + 0x8)))->v));
    u5[5] = (*(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4)));
    u5[6] = ((((struct o8_float *)(((t1 + 0x8) + 0x8)))->v));
    u5[7] = (*(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[8] = ((((struct o8_float *)((((t1 + 0x8) + 0x8) + 0x8)))->v));
    u5[9] = (*(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[10] = ((((struct o8_float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[11] = (*(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[12] = ((((struct o8_float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[13] = (*(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[14] = ((((struct o8_float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[15] = (*(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    _builtin_ld_ext((float (*)[4])u5);
}
