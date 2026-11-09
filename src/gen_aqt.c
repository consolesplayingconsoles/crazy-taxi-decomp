/* Straight-line functions with calls and guards (batch gen_aqt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
float nlLength(int, int);
float GetStopPosCenter(int a4, int a5, int a6);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };


float GetStopPosCenter(int a4, int a5, int a6)
{
    int t3;
    int t5;
    int t6;
    int t7;
    float u17;
    float u18;
    float u19;
    float u41;
    int t26;
    int t27;
    float u28;
    float t29;
    float u40;
    int stk[13];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1004 = a6;
    t3 = *(int *)(((((((struct o4_int *)0xC1EE210)->v)) << 2) + (*(int *)((0xC0ED974 + (((((struct o0_int *)0xC1EE210)->v)) << 2))))));
    R1008 = ((a4 << 2) << 1);
    t7 = *(int *)(((t3 + ((a4 << 2) << 1)) + 0x4));
    t5 = *(int *)(((t3 + ((a4 << 2) << 1)) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC08AD94); }
    if ((int)t5 > 0) {
        t6 = 0x0;
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
    t27 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EE210)->v)) << 2) + (*(int *)((0xC0ED974 + (((((struct o0_int *)0xC1EE210)->v)) << 2))))))) + (R1008)) + 0x4));
    u41 = 0.0f;
    if ((int)t5 > 0) {
        t26 = 0x0;
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
    *(float *)(((R1004) + 0x0)) = (u41 * 1.19999993f);
    return u40;
}
