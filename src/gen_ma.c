/* Straight-line functions with calls and guards (batch gen_ma): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
int nlCharacter(int a4, int a5, int a6, int a7);

int nlCharacter(int a4, int a5, int a6, int a7)
{
    int t0;
    float u1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)0xC2AF0C8;
    u1 = *(float *)0xC14A7BC;
    t2 = *(int *)0xC2AF0CC;
    if ((*(int *)0xC14A7B8) == 0) {
        t4 = *(short *)(((((signed char)a6 << 1) + 0xC2AF158) + 0x2));
        t5 = *(short *)(((((signed char)a6 << 1) + 0xC2AF158) + 0x0));
        *(unsigned int *)((a7 + 0x0)) = 0xF0000000;
        *(float *)(((a7 + 0x4) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0x8) + 0x0)) = (float)a5;
        *(float *)(((a7 + 0xC) + 0x0)) = u1;
        *(float *)(((a7 + 0x10) + 0x0)) = ((float)a4 + (float)t0);
        *(float *)(((a7 + 0x14) + 0x0)) = (float)a5;
        *(float *)(((a7 + 0x18) + 0x0)) = u1;
        *(float *)(((a7 + 0x1C) + 0x0)) = ((float)a4 + (float)t0);
        _builtin_prefetch((void *)a7);
        *(float *)(((a7 + 0x20) + 0x0)) = ((float)a5 + (float)t2);
        *(float *)(((a7 + 0x20) + 0x4)) = u1;
        *(float *)(((a7 + 0x20) + 0x8)) = (float)a4;
        *(float *)(((a7 + 0x20) + 0xC)) = ((float)a5 + (float)t2);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t5;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = (t5 | 0x3F800000);
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t4 | 0x3F800000);
    } else {
        t6 = *(short *)0xC2B3190;
        t7 = *(short *)(((((signed char)a6 << 1) + 0xC2AF158) + 0x0));
        t8 = *(short *)(((((signed char)a6 << 1) + 0xC2AF158) + 0x2));
        *(unsigned int *)((a7 + 0x0)) = 0xF0000000;
        *(float *)(((a7 + 0x4) + 0x0)) = (float)(((-a5) - t2) + t6);
        *(float *)(((a7 + 0x8) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0xC) + 0x0)) = u1;
        *(float *)(((a7 + 0x10) + 0x0)) = ((float)(((-a5) - t2) + t6) + (float)t2);
        *(float *)(((a7 + 0x14) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0x18) + 0x0)) = u1;
        *(float *)(((a7 + 0x1C) + 0x0)) = ((float)(((-a5) - t2) + t6) + (float)t2);
        _builtin_prefetch((void *)a7);
        *(float *)(((a7 + 0x20) + 0x0)) = ((float)a4 + (float)t0);
        *(float *)(((a7 + 0x20) + 0x4)) = u1;
        *(float *)(((a7 + 0x20) + 0x8)) = (float)(((-a5) - t2) + t6);
        *(float *)(((a7 + 0x20) + 0xC)) = ((float)a4 + (float)t0);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t8;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = t7;
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t7 | 0x3F800000);
    }
    _builtin_prefetch((void *)(a7 + 0x20));
    return ((a7 + 0x20) + 0x20);
}
