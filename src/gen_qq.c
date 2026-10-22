/* Straight-line functions with calls and guards (batch gen_qq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
int signalInit(int a4, int a5);

int signalInit(int a4, int a5)
{
    int t0;
    int t4;
    int t5;
    int t6;
    int t10;
    int t23;
    int t25;
    int t27;
    int t29;

    t0 = set_event(0x8C, 0xC0496FC);
    if (t0 == 0) {
        return t0;
    }
    if ((a5 & 0x1) != 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((t0 + 0x14)) = 0x1000;
    }
    *(unsigned int *)((t0 + 0x84)) = 0x258;
    *(unsigned int *)((t0 + 0x88)) = (*(int *)((t0 + 0x84)));
    t4 = *(int *)(((a4 << 2) + 0xC0F2B18));
    t5 = 0xC0F2B18;
    t6 = 0x0;
    for (;;) {
        *(unsigned int *)((((t0 + 0x18) + (t6 << 2)) + 0x0)) = (*(int *)((((t4 + ((((a5 << 1) + a5) << 2) << 2)) + (t6 << 2)) + 0x0)));
        if ((int)(*(int *)((((t0 + 0x18) + (t6 << 2)) + 0x0))) >= 0) {
            t5 = (*(int *)0xC2A6690);
            t10 = *(int *)((((t0 + 0x18) + (t6 << 2)) + 0x0));
            t5 = (*(int *)(((*(int *)((((((t10 << 1) + t10) << 2) + t5) + 0x4))) + 0x0)));
            t5 = (t5 - 2);
            *(unsigned int *)((((t0 + 0x48) + (t6 << 2)) + 0x0)) = t5;
        } else {
            *(unsigned int *)((((t0 + 0x48) + (t6 << 2)) + 0x0)) = (-(*(int *)((((t0 + 0x18) + (t6 << 2)) + 0x0))));
            if ((t6 & 0x1) == 0) {
                *(unsigned int *)((((t0 + 0x18) + (t6 << 2)) + 0x0)) = 0x120;
            } else {
                *(unsigned int *)((((t0 + 0x18) + (t6 << 2)) + 0x0)) = 0x121;
            }
        }
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0xC) {
            break;
        }
    }
    t23 = *(int *)((t0 + 0x18));
    t25 = *(int *)(((t0 + 0x48) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x78)) = *(struct mv3 *)(((*(int *)((((((t23 << 1) + t23) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t25 << 1) + t25) << 2))); }
    t27 = *(int *)((t0 + 0x30));
    t29 = *(int *)((t0 + 0x60));
    nlAddVector((t0 + 0x78), ((*(int *)((((((t27 << 1) + t27) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t29 << 1) + t29) << 2)));
    return nlScaleVector((t0 + 0x78), (t0 + 0x78), 0.5f);
}
