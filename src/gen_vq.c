/* Straight-line functions with calls and guards (batch gen_vq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Class_Shadow_Put(void);
int Sound_Request(int, int);
int nlSprPut(int, int, int);
int Result_Crazy_Put(void);

int Result_Crazy_Put(void)
{
    int t1;
    int t3;
    int t15;
    float u19;
    int t4;
    int t8;
    int t6;
    int t21;
    int t22;
    int t25;
    float u26;
    float u27;
    int t28;
    float u29;
    float u30;
    float u41;
    float u42;
    int t50;
    int t67;
    int t0;
    float u2;
    int t44;
    float u12;
    int t31;
    int t34;
    int t35;

    t1 = 0x0;
    for (;;) {
        t3 = *(int *)0xC2A9864;
        if ((int)t1 < (int)0x8) {
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 << 1);
            t0 = (t0 - t1);
            if ((int)t3 <= (int)t0) {
                t44 = t0;
            } else {
                t15 = t0;
                u19 = u2;
                if ((int)t3 < (int)0x38) {
                    t0 = 0xC08106C;
                    t4 = (int)((int)t3 % (int)0x7);
                    t8 = 0xC08106C;
                    if (t4 == 0) {
                        t0 = ((int)Sound_Request);
                        Sound_Request(0xA00A9, 0x0);
                        t6 = *(int *)0xC2A9870;
                        t0 = 0xC2A9754;
                        *(unsigned int *)0xC2A9870 = (t6 + 0x1);
                        *(unsigned int *)((t0 + 0x0)) = 0x1;
                        *(unsigned short *)0xC2A9750 = 0x0;
                        *(float *)0xC2A974C = 0.5f;
                        *(float *)0xC2A9758 = 0.0f;
                        t8 = t0;
                    } else {
                        u12 = u2;
                    }
                    t15 = t8;
                    u19 = u12;
                }
                u2 = u19;
                t0 = t15;
                if ((int)t1 < (int)0x5) {
                    t21 = *(int *)((0xC130FFC + (t1 << 2)));
                    t0 = 0x2;
                    *(unsigned int *)0xC2A96F8 = t21;
                    t22 = ((((t1 - 2) << 2) << 2) << 1);
                    if ((int)t1 > (int)t0) {
                        t22 = (((((t1 - 2) << 2) << 2) << 1) - ((t1 - 2) << 2));
                    }
                    u2 = (float)((t22 + (t1 << 1)) + 0x9C);
                    *(float *)0xC2A96FC = u2;
                    *(unsigned int *)0xC2A972C = 0x200A;
                    t25 = *(int *)0xC2A9748;
                    u2 = (float)(t25 + 0x18C);
                    *(float *)0xC2A9700 = u2;
                    *(float *)0xC2A9704 = 0.149999991f;
                    u26 = *(float *)0xC2A9758;
                    u2 = u26;
                    u2 = (u2 + 1.0f);
                    *(float *)0xC2A9708 = u2;
                    u27 = *(float *)0xC2A9758;
                    u2 = u27;
                    u2 = (u2 + 1.0f);
                    *(float *)0xC2A970C = u2;
                    *(float *)0xC2A9714 = 0.0f;
                    t31 = 0x24;
                    t34 = 0x18C;
                    t35 = (t1 << 1);
                } else {
                    *(unsigned int *)0xC2A972C = 0xA;
                    *(unsigned int *)0xC2A96F8 = 0x13D;
                    u2 = (float)((((t1 - 4) << 2) << 2) + 0xE6);
                    *(float *)0xC2A96FC = u2;
                    t28 = *(int *)0xC2A9748;
                    u2 = (float)(t28 + 0x18B);
                    *(float *)0xC2A9700 = u2;
                    u29 = *(float *)0xC2A9758;
                    u2 = u29;
                    u2 = (u2 + 0.399999976f);
                    *(float *)0xC2A9708 = u2;
                    u30 = *(float *)0xC2A9758;
                    u2 = u30;
                    u2 = (u2 + 1.5f);
                    *(float *)0xC2A970C = u2;
                    *(float *)0xC2A9710 = 0.599999964f;
                    t31 = 0x20;
                    t34 = 0x18B;
                }
                *(float *)((0xC2A96F8 + t31)) = 1.0f;
                *(unsigned int *)0xC2A9720 = 0x0;
                nlSprPut(0xC2A96F8, t34, t35);
                u41 = *(float *)0xC2A9758;
                u2 = u41;
                u2 = (u2 + 1.0f);
                *(float *)0xC2A9708 = u2;
                u42 = *(float *)0xC2A9758;
                u2 = u42;
                u2 = (u2 + 1.0f);
                *(float *)0xC2A970C = u2;
                *(float *)0xC2A9710 = 0.0f;
            }
            t1 = (t1 + 0x1);
            t0 = t44;
            continue;
        }
        break;
    }
    if ((int)t3 >= (int)0x3D) {
        if (t3 == 61) {
            t50 = *(int *)0xC2A9874;
            *(unsigned int *)0xC2A9874 = (t50 + 0x1);
            Sound_Request(0xE00A9, 0x0);
            *(unsigned int *)0xC2A9754 = 0x1;
            *(unsigned short *)0xC2A9750 = 0x0;
            *(float *)0xC2A974C = 0.5f;
            *(float *)0xC2A9758 = 0.0f;
        }
        Result_Class_Shadow_Put();
    }
    t67 = *(int *)0xC2A9864;
    *(unsigned int *)0xC2A9864 = (t67 + 0x1);
    *(float *)0xC2A9704 = 0.199999988f;
    return 0xC;
}
