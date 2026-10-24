/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int nlAddVector(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int, float, float);
void getReplayPassenger(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

void getReplayPassenger(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int t0;
    int t3;
    int t12;
    int t22;
    float u14;
    float u15;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC0F2B30;
    if ((int)t0 < (int)0xB) {
        t3 = 0xC0F3A40;
        if ((*(int *)0xC1EE20C) == 0) {
            t3 = 0xC0F3540;
        }
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x10)) = a4;
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x14)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x18)) = a6;
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x1C)) = a7;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(a8); }
        *(float *)(((int)stk + 12)) = (*(float *)0xC179148);
        nlSubVector((((int)stk + 4) + 0x4), 0xC179144, f4, f5);
        nlScaleUnitVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), 5e+01f);
        nlAddVector((((int)stk + 4) + 0x4), 0xC179144);
        t12 = GetCollision2D((((int)stk + 4) + 0x4), 1e+01f);
        if (((*(int *)((t12 + 0x1C))) != -1) && (u14 = *(float *)((t12 + 0x18)), u15 = *(float *)(((int)stk + 12)), u14 > u15)) {
            *(float *)(((int)stk + 12)) = (*(float *)((t12 + 0x18)));
        }
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 4.0f);
        t22 = *(int *)(((int)stk + 4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t22 << 1) + t22) << 2) + (*(int *)0xC2A62AC))) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
    }
}
