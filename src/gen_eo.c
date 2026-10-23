/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int Result_Customer_Count_Put(void);

int Result_Customer_Count_Put(void)
{
    int t3;
    int t2;
    int t126;
    int t18;
    int t29;
    int t40;
    int t77;
    int t79;
    int t85;
    int t109;
    int t118;
    int t19;
    int t69;
    int t70;
    int t72;
    int t104;
    int t105;
    int t95;
    int t96;

    t3 = 0xC059C28;
    if ((*(int *)0xC2A9850) != (*(int *)0xC1794D0)) {
        t2 = *(int *)0xC2A9854;
        *(unsigned int *)0xC2A9854 = (t2 + 0x1);
        t3 = (t2 + 0x1);
    }
    t126 = t3;
    if ((int)(*(int *)0xC2A96F4) <= (int)0x2A) {
    } else {
        t18 = *(int *)0xC1794D0;
        if (((*(int *)0xC2A9850) != t18) && (t19 = *(int *)0xC2A97E0, t19 == 0)) {
            t29 = *(int *)0xC2A9854;
            if ((int)(*(int *)0xC2A9850) < (int)0xF) {
                if ((int)t29 >= (int)(0x10 - (*(int *)0xC2A9850))) {
                    *(unsigned int *)0xC2A9850 = ((*(int *)0xC2A9850) + 0x1);
                    *(unsigned int *)0xC2A9854 = 0x0;
                }
            } else {
                if ((int)t29 >= (int)0x1) {
                    if ((int)(*(int *)0xC2A9850) < (int)0x33) {
                        *(unsigned int *)0xC2A9850 = ((*(int *)0xC2A9850) + 0x1);
                    } else {
                        t40 = *(int *)0xC2A9850;
                        *(unsigned int *)0xC2A9850 = (t40 + 0x3);
                        if ((int)(t40 + 0x3) > (int)(*(int *)0xC1794D0)) {
                            *(unsigned int *)0xC2A9850 = (*(int *)0xC1794D0);
                        }
                    }
                    *(unsigned int *)0xC2A9854 = 0x0;
                }
            }
            t69 = ((int)((int)(*(int *)0xC2A9850) % (int)0xA));
            t70 = ((int)((int)(*(int *)0xC2A9850) / (int)0x64));
            t72 = ((int)((int)((int)((int)(*(int *)0xC2A9850) / (int)0xA)) % (int)0xA));
        } else {
            t69 = ((int)((int)t18 % (int)0xA));
            t70 = ((int)((int)t18 / (int)0x64));
            t72 = ((int)((int)((int)((int)t18 / (int)0xA)) % (int)0xA));
        }
        *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        if (t70 != 0) {
            *(unsigned int *)0xC2A96F8 = (*(int *)((0xC130E18 + (t70 << 2))));
            *(float *)0xC2A96FC = 496.0f;
            *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x36);
            t77 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t72, (t69 << 2));
            *(unsigned int *)0xC2A96F8 = (*(int *)(((t72 << 2) + 0xC130E18)));
            *(float *)0xC2A96FC = 528.0f;
            t79 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            *(unsigned int *)0xC2A96F8 = (*(int *)(((t69 << 2) + 0xC130E18)));
            *(float *)0xC2A96FC = 560.0f;
        } else {
            if (t72 != 0) {
                *(unsigned int *)0xC2A96F8 = (*(int *)((0xC130E18 + (t72 << 2))));
                if (t70 != 0) {
                    *(float *)0xC2A96FC = 496.0f;
                } else {
                    *(float *)0xC2A96FC = 512.0f;
                }
                *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x36);
                t85 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t72, (t69 << 2));
                *(unsigned int *)0xC2A96F8 = (*(int *)(((t69 << 2) + 0xC130E18)));
                if (t70 != 0) {
                    *(float *)0xC2A96FC = 528.0f;
                } else {
                    *(float *)0xC2A96FC = 544.0f;
                }
            } else {
                *(unsigned int *)0xC2A96F8 = (*(int *)((0xC130E18 + (t69 << 2))));
                *(float *)0xC2A96FC = 528.0f;
                *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x36);
                t95 = t72;
                t96 = (t69 << 2);
            }
            t104 = t95;
            t105 = t96;
        }
        t109 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t104, t105);
        *(unsigned int *)0xC2A96F8 = 0x12B;
        *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x52);
        *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
        *(unsigned int *)0xC2A9720 = 0x0;
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        if ((int)(*(int *)0xC2A9850) >= (int)0x2) {
            *(float *)0xC2A96FC = (588.0f);
            *(float *)0xC2A9710 = (0.26799998f);
            *(float *)0xC2A9718 = (0.376f);
            *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + (0.103999995f));
            t118 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            *(float *)0xC2A9710 = 0.0f;
            *(float *)0xC2A9718 = 1.0f;
            *(float *)0xC2A96FC = (520.0f);
        } else {
            *(float *)0xC2A96FC = 528.0f;
        }
        *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
        t126 = (((int (*)(int))(nlSprPut))(0xC2A96F8));
    }
    return t126;
}
