/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int getCoursePointMove(int, int, int);
int getNearLinkedLine(int, int, int, int, int, float);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
float getCourseDistPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

float getCourseDistPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t1;
    int t3;
    int t6;
    int t10;
    int t12;
    float t14;
    float u15;
    float u16;
    float t18;
    int stk[37];

    stk[25] = a8;
    stk[26] = a9;
    stk[27] = a10;
    stk[28] = a11;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((int)stk + 48)) = a7;
    *(unsigned int *)(((int)stk + 8)) = a4;
    getNearLinkedLine(0x2, 0x0, (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x2C), a5, f4);
    t1 = *(int *)(((int)stk + 52));
    t3 = *(int *)(((int)stk + 48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)(((*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t3 << 1) + t3) << 2))); }
    t6 = 0xFFFFFFFF;
    if ((int)(*(int *)(((int)stk + 8))) >= 0) {
        t6 = 0x1;
    }
    for (;;) {
        *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + t6);
        getCoursePointMove((((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x28), 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)((((int)stk + 8) + 0x1C)); }
        t10 = *(int *)(((int)stk + 52));
        t12 = *(int *)(((int)stk + 48));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)(((*(int *)((((((t10 << 1) + t10) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t12 << 1) + t12) << 2))); }
        t14 = nlLength(a5, (((int)stk + 8) + 0x1C));
        if (t14 > f4) {
            break;
        }
    }
    u15 = t14;
    for (;;) {
        u16 = u15;
        u15 = 0.5f;
        nlGetAverageVector((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10), (((int)stk + 8) + 0x4), u15, 0.5f);
        t18 = nlLength(a5, (((int)stk + 8) + 0x4));
        u15 = t18;
        if (u15 > f4) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)((((int)stk + 8) + 0x4)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)((((int)stk + 8) + 0x4)); }
        }
        u15 = (u15 - f4);
        u15 = _builtin_fabsf(u15);
        if (!(0.000999999931f > _builtin_fabsf((u15 - u16)))) continue;
        break;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 8) + 0x5C) + 0x0)))) = *(struct mv3 *)((((int)stk + 8) + 0x4)); }
    return t18;
}
