/* Straight-line functions with calls and guards (batch gen_uw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0813d0(int);
int getShortRootPoint(int, int, int);
float nlLength(int, int);
float getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

float getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    float t2;
    int t3;
    int t4;
    int t7;
    int t17;
    float u19;
    float u20;
    float u22;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = getShortRootPoint(a7, a9, a5);
    if ((int)(FUN_0c0813d0(t0)) <= (int)0x1) {
        t2 = nlLength(a6, a8);
        *(float *)((a10 + 0x0)) = t2;
        u22 = t2;
    } else {
        if ((int)t0 < 0) {
            t3 = (int)((int)(a9 + 0x1) % (int)a5);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(((((t3 << 1) + t3) << 2) + a4)); }
        } else {
            t4 = (int)((int)(a9 - 1) % (int)a5);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(((((t4 << 1) + t4) << 2) + a4)); }
        }
        t7 = *(int *)(((int)stk + 4));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((*(float *)((a6 + 0x0))) - (*(float *)((((((t7 << 1) + t7) << 2) + a4) + 0x0)))));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((*(float *)((a6 + 0x4))) - (*(float *)((((((t7 << 1) + t7) << 2) + a4) + 0x4)))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((*(float *)((a6 + 0x8))) - (*(float *)((((((t7 << 1) + t7) << 2) + a4) + 0x8)))));
        t17 = FUN_0c0813d0(t0);
        u19 = 300.0f;
        u20 = (nlLength((((int)stk + 4) + 0x4), a8));
        u20 = u20 + u19 * (float)(t17 - 1);
        *(float *)((a10 + 0x0)) = u20;
        u22 = u19;
    }
    return u22;
}
