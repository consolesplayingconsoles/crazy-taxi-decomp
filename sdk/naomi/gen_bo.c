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
float nlFastSin(int a4);
float nlFastCos(int a4);
float nlRotateAY(int a4);
float nlRotateAX(int a4);

float nlFastSin(int a4)
{
    float u0;

    u0 = iaFscaS(a4);
    iaFscaC(a4);
    return u0;
}

float nlFastCos(int a4)
{
    float u1;

    iaFscaS(a4);
    u1 = iaFscaC(a4);
    return u1;
}


