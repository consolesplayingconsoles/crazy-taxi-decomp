/* Straight-line functions with calls and guards (batch gen_xn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Class_Shadow_Put(void);
int Sound_Request(int, int);
int nlSprPut(int, int);
int Result_Awesome_Put(void);

int Result_Awesome_Put(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t17;
    int t18;
    int t27;
    float u28;
    float u29;
    int t30;
    int t36;
    int t37;
    float u52;
    int t53;

    t0 = 0xC05AAA4;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2A985C;
        if ((int)t2 > (int)(((t1 << 2) << 1) - t1)) {
            t4 = *(int *)0xC2A985C;
            if ((int)t4 < (int)0x31) {
                t5 = *(int *)0xC2A985C;
                t0 = 0x7;
                t6 = (int)((int)t5 % (int)t0);
                t0 = t6;
                if (t0 == 0) {
                    t7 = Sound_Request(0xA00A9, 0x0);
                    t0 = t7;
                    t8 = *(int *)0xC2A9870;
                    *(unsigned int *)0xC2A9870 = (t8 + 0x1);
                    *(unsigned int *)0xC2A9754 = 0x1;
                    *(unsigned short *)0xC2A9750 = 0x0;
                    *(float *)0xC2A974C = 0.5f;
                    *(float *)0xC2A9758 = 0.0f;
                }
            }
            t0 = 0xC131010;
            t17 = *(int *)(((t1 << 2) + t0));
            *(unsigned int *)0xC2A96F8 = t17;
            if ((int)t1 > (int)0x3) {
                t0 = 0x4;
                *(float *)((0xC2A96F8 + t0)) = (float)(((((((t1 - 2) << 2) << 2) << 1) - (((t1 - 3) << 1) + (t1 - 3))) + (t1 << 1)) + 0x8E);
            } else {
                t0 = t1;
                t18 = 0x9C;
                if (t0 == 3) {
                    t18 = 0x92;
                }
                t0 = 0x4;
                *(float *)((0xC2A96F8 + t0)) = (float)((((((t1 - 2) << 2) << 2) << 1) + (t1 << 1)) + t18);
            }
            t0 = 0x8;
            *(unsigned int *)0xC2A972C = 0x200A;
            t27 = *(int *)0xC2A9748;
            *(float *)((0xC2A96F8 + t0)) = (float)(t27 + 0x18C);
            t0 = 0xC;
            *(float *)((0xC2A96F8 + t0)) = 0.149999991f;
            t0 = 0x10;
            u28 = *(float *)0xC2A9758;
            *(float *)((0xC2A96F8 + t0)) = (u28 + 1.0f);
            t0 = 0x14;
            u29 = *(float *)0xC2A9758;
            *(float *)((0xC2A96F8 + t0)) = (u29 + 1.0f);
            t0 = 0x1C;
            *(float *)((0xC2A96F8 + t0)) = 0.0f;
            t0 = 0x24;
            *(float *)((0xC2A96F8 + t0)) = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
            t30 = nlSprPut(0xC2A96F8, (t1 << 1));
            t0 = t30;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x7) continue;
        break;
    }
    t36 = *(int *)0xC2A985C;
    if ((int)t36 >= (int)0x31) {
        if (t36 == 49) {
            t37 = *(int *)0xC2A9874;
            *(unsigned int *)0xC2A9874 = (t37 + 0x1);
            Sound_Request(0xE00A9, 0x0);
            *(unsigned int *)0xC2A9754 = 0x1;
            *(unsigned short *)0xC2A9750 = 0x0;
            *(float *)0xC2A974C = 0.5f;
            *(float *)0xC2A9758 = 0.0f;
        }
        Result_Class_Shadow_Put();
    }
    u52 = 0.19999999f;
    *(float *)0xC2A9704 = u52;
    t53 = *(int *)0xC2A985C;
    *(unsigned int *)0xC2A985C = (t53 + 0x1);
    return 0xC;
}
