/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
void nlCalcPoint4(int a4, int a5);
void nlCalcPoint(int a4, int a5);
float nlRotateYSC(float f4, float f5);
float nlRotateXSC(float f4, float f5);

void nlCalcPoint4(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0x10) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((a5 + 0x10) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void nlCalcPoint(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}


