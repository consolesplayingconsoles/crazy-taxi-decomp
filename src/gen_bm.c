/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
void FUN_0c077170(int a4, int a5);
void FUN_0c0771b0(int a4, int a5);
float FUN_0c078600(float f4, float f5);
float FUN_0c078450(float f4, float f5);

void FUN_0c077170(int a4, int a5)
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

void FUN_0c0771b0(int a4, int a5)
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

float FUN_0c078600(float f4, float f5)
{
    float u0[4];
    float u1[4];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = (-f4);
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    return u0[0];
}

float FUN_0c078450(float f4, float f5)
{
    float u0[4];
    float u1[4];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = (-f4);
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    return u0[0];
}
