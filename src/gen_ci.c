/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Class_Shadow_Put(void);
int Sound_Request(int, int);
int nlSprPut(int, int);
int Result_Crazy_Put(void);

int Result_Crazy_Put(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t11;
    int t12;
    int t14;
    float u15;
    float u16;
    int t17;
    float u18;
    float u19;
    float u28;
    float u29;
    int t32;
    int t38;
    int t20;
    int t23;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0xC2A9864;
        if ((int)t0 < (int)0x8) {
            if ((int)t1 > (int)(((t0 << 2) << 1) - t0)) {
                if ((int)t1 < (int)0x38) {
                    t2 = (int)((int)t1 % (int)0x7);
                    if (t2 == 0) {
                        Sound_Request(0xA00A9, 0x0);
                        t4 = *(int *)0xC2A9870;
                        *(unsigned int *)0xC2A9870 = (t4 + 0x1);
                        *(unsigned int *)0xC2A9754 = 0x1;
                        *(unsigned short *)0xC2A9750 = 0x0;
                        *(float *)0xC2A974C = 0.5f;
                        *(float *)0xC2A9758 = 0.0f;
                    }
                }
                if ((int)t0 < (int)0x5) {
                    t11 = *(int *)((0xC130FFC + (t0 << 2)));
                    *(unsigned int *)0xC2A96F8 = t11;
                    t12 = ((((t0 - 2) << 2) << 2) << 1);
                    if ((int)t0 > (int)0x2) {
                        t12 = (((((t0 - 2) << 2) << 2) << 1) - ((t0 - 2) << 2));
                    }
                    *(float *)0xC2A96FC = (float)((t12 + (t0 << 1)) + 0x9C);
                    *(unsigned int *)0xC2A972C = 0x200A;
                    t14 = *(int *)0xC2A9748;
                    *(float *)0xC2A9700 = (float)(t14 + 0x18C);
                    *(float *)0xC2A9704 = 0.149999991f;
                    u15 = *(float *)0xC2A9758;
                    *(float *)0xC2A9708 = (u15 + 1.0f);
                    u16 = *(float *)0xC2A9758;
                    *(float *)0xC2A970C = (u16 + 1.0f);
                    *(float *)0xC2A9714 = 0.0f;
                    t20 = 0x24;
                    t23 = 0x18C;
                } else {
                    *(unsigned int *)0xC2A972C = 0xA;
                    *(unsigned int *)0xC2A96F8 = 0x13D;
                    *(float *)0xC2A96FC = (float)((((t0 - 4) << 2) << 2) + 0xE6);
                    t17 = *(int *)0xC2A9748;
                    *(float *)0xC2A9700 = (float)(t17 + 0x18B);
                    u18 = *(float *)0xC2A9758;
                    *(float *)0xC2A9708 = (u18 + 0.399999976f);
                    u19 = *(float *)0xC2A9758;
                    *(float *)0xC2A970C = (u19 + 1.5f);
                    *(float *)0xC2A9710 = 0.599999964f;
                    t20 = 0x20;
                    t23 = 0x18B;
                }
                *(float *)((0xC2A96F8 + t20)) = 1.0f;
                *(unsigned int *)0xC2A9720 = 0x0;
                nlSprPut(0xC2A96F8, t23);
                u28 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u28 + 1.0f);
                u29 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u29 + 1.0f);
                *(float *)0xC2A9710 = 0.0f;
            }
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    if ((int)t1 >= (int)0x3D) {
        if (t1 == 61) {
            t32 = *(int *)0xC2A9874;
            *(unsigned int *)0xC2A9874 = (t32 + 0x1);
            Sound_Request(0xE00A9, 0x0);
            *(unsigned int *)0xC2A9754 = 0x1;
            *(unsigned short *)0xC2A9750 = 0x0;
            *(float *)0xC2A974C = 0.5f;
            *(float *)0xC2A9758 = 0.0f;
        }
        Result_Class_Shadow_Put();
    }
    t38 = *(int *)0xC2A9864;
    *(unsigned int *)0xC2A9864 = (t38 + 0x1);
    *(float *)0xC2A9704 = 0.199999988f;
    return 0xC;
}
