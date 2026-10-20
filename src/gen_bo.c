/* Straight-line functions with calls and guards (batch gen_bo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
static float iaFscaC(int a)
{
    float u0;
    float u1;

    _builtin_fsca(a, &u0, &u1);
    return u1;
}
static float iaFscaS(int a)
{
    float u0;
    float u1;

    _builtin_fsca(a, &u0, &u1);
    return u0;
}
float FUN_0c089de0(int a4);
float FUN_0c089de8(int a4);
float nlRotateAY(int a4);
float nlRotateAX(int a4);

float FUN_0c089de0(int a4)
{
    float u0;

    u0 = iaFscaS(a4);
    iaFscaC(a4);
    return u0;
}

float FUN_0c089de8(int a4)
{
    float u1;

    iaFscaS(a4);
    u1 = iaFscaC(a4);
    return u1;
}

float nlRotateAY(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    return u2[0];
}

float nlRotateAX(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = (-u0);
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    return u2[0];
}
