/* Straight-line functions with calls and guards (batch gen_ait): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
void FUN_0c077190(int a4, int a5);

void FUN_0c077190(int a4, int a5)
{
    float u4[4];

    u4[0] = (*(float *)((a4 + 0x0)));
    u4[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u4[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u4[3] = (*(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    _builtin_ftrv(u4, u4);
    *(float *)((((a5 + 0x10) - 0x4) + 0x0)) = u4[3];
    *(float *)(((((a5 + 0x10) - 0x4) - 0x4) + 0x0)) = u4[2];
    *(float *)((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) + 0x0)) = u4[1];
    *(float *)(((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u4[0];
}
