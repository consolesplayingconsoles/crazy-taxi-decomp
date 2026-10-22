/* Straight-line functions with calls and guards (batch gen_vg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int nlAddVector(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
void getReplayPassenger(int a4, int a5, int a6, int a7, int a8);

void getReplayPassenger(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t3;
    int t5;
    float u6;
    float u8;
    float u11;
    int t12;
    int t13;
    float u16;
    float u20;
    float u21;
    int t22;
    int t23;
    float u14;
    float u15;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC0F2B30;
    if ((int)t0 < (int)0xB) {
        t2 = *(int *)0xC1EE20C;
        t3 = 0xC0F3A40;
        if (t2 == 0) {
            t3 = 0xC0F3540;
        }
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x10)) = a4;
        t5 = *(int *)(((int)stk + 4));
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x14)) = t5;
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x18)) = a6;
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t3) + 0x1C)) = a7;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(a8); }
        u6 = *(float *)0xC179148;
        *(float *)(((int)stk + 12)) = u6;
        nlSubVector((((int)stk + 4) + 0x4), 0xC179144);
        u8 = 50.0f;
        nlScaleUnitVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), u8);
        nlAddVector((((int)stk + 4) + 0x4), 0xC179144);
        u11 = 10.0f;
        t12 = GetCollision2D((((int)stk + 4) + 0x4), u11);
        t13 = *(int *)((t12 + 0x1C));
        if ((t13 != -1) && (u14 = *(float *)((t12 + 0x18)), u15 = *(float *)(((int)stk + 12)), u14 > u15)) {
            u16 = *(float *)((t12 + 0x18));
            *(float *)(((int)stk + 12)) = u16;
        }
        u20 = 4.0f;
        u21 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u21 + u20);
        t22 = *(int *)(((int)stk + 4));
        t23 = *(int *)0xC2A62AC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t22 << 1) + t22) << 2) + t23)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
    }
}
