/* Straight-line functions with calls and guards (batch gen_os): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
float nlLength(int, int);
float GetStopPosCenter(int a4, int a5, int a6);

float GetStopPosCenter(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u17;
    float u18;
    float u19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    float u41;
    int t26;
    int t27;
    float u28;
    float t29;
    int t45;
    float u40;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)0xC1EE210;
    t1 = *(int *)0xC1EE214;
    t2 = *(int *)((0xC0ED974 + (t0 << 2)));
    t3 = *(int *)(((t1 << 2) + t2));
    *(unsigned int *)(((int)stk + 8)) = ((a4 << 2) << 1);
    t4 = *(int *)(((t3 + ((a4 << 2) << 1)) + 0x4));
    t5 = *(int *)(((t3 + ((a4 << 2) << 1)) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC08AD94); }
    if ((int)t5 > 0) {
        t6 = 0x0;
        t7 = t4;
        for (;;) {
            nlAddVector((((int)stk + 4) + 0x8), t7);
            t6 = (t6 + 0x1);
            t7 = (t7 + 0xC);
            if ((int)t6 >= (int)t5) {
                break;
            }
        }
    }
    u17 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 12)) = (u17 * (1.0f / (float)t5));
    *(float *)((a5 + 0x0)) = (u17 * (1.0f / (float)t5));
    u18 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 16)) = (u18 * (1.0f / (float)t5));
    *(float *)((a5 + 0x4)) = (u18 * (1.0f / (float)t5));
    u19 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 20)) = (u19 * (1.0f / (float)t5));
    *(float *)((a5 + 0x8)) = (u19 * (1.0f / (float)t5));
    t20 = *(int *)0xC1EE214;
    t21 = *(int *)0xC1EE210;
    t22 = *(int *)((0xC0ED974 + (t21 << 2)));
    t23 = *(int *)(((int)stk + 8));
    t24 = *(int *)(((t20 << 2) + t22));
    t25 = *(int *)(((t24 + t23) + 0x4));
    u41 = 0.0f;
    if ((int)t5 > 0) {
        t26 = 0x0;
        t27 = t25;
        u28 = 0.0f;
        for (;;) {
            t29 = nlLength(a5, t27);
            t27 = (t27 + 0xC);
            if (t29 > u28) {
                u28 = t29;
            }
            t26 = (t26 + 0x1);
            if ((int)t26 >= (int)t5) {
                break;
            }
        }
        u40 = t29;
        u41 = u28;
    }
    t45 = *(int *)(((int)stk + 4));
    *(float *)((t45 + 0x0)) = (u41 * 1.19999993f);
    return u40;
}
