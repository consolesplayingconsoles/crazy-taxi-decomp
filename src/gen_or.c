/* Straight-line functions with calls and guards (batch gen_or): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int TrafficLevelChange(int);
int ndPuru2Start(int, int, int);
int nlProjectScreen3D(int);
int setTechnicalBonus(int, int);
int technicalCheck(int a4);

int technicalCheck(int a4)
{
    float u9;
    float u15;
    int t16;
    int t38;
    int t73;
    int t64;
    int t67;
    int t1;
    int t2;
    int t97;
    int t88;
    int t79;
    int t50;
    int stk[10];

    if (((*(int *)0xC1EE20C) == 2) && ((t1 = *(int *)0xC1EE214, t1 != 12) && (t2 = *(int *)0xC1EE214, t2 != 9))) {
        t97 = t2;
    } else {
        if (((*(int *)((a4 + 0x34))) & 0x1) != 0) {
            u9 = *(float *)((a4 + 0x70));
            if (!(u9 > 0.049999997f) && !(-0.099999994f > u9)) {
                ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x1000000, 0x0);
            } else {
                *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                setTechnicalBonus(0xFFFFFFFF, 0x0);
                TrafficLevelChange(0xFFFFFFFF);
                if ((*(int *)0xC2A1B74) == 0) {
                    u15 = *(float *)((a4 + 0x30));
                    t16 = 0x6;
                    if ((unsigned int)(int)(u15 * 1.5f) < (unsigned int)0x6) {
                        t16 = (int)(u15 * 1.5f);
                    }
                    *(unsigned int *)(((int)stk + 4)) = t16;
                    Sound_Request((*(int *)(((t16 << 2) + 0xC0A3788))), 0x1);
                }
                *(unsigned int *)0xC2A1B74 = 0x5;
            }
        }
        if ((*(int *)((a4 + 0x124))) == -1) {
            t38 = 0x68;
            if ((*(int *)((a4 + 0x68))) == 0) {
                *(unsigned int *)((a4 + 0x124)) = 0x0;
                t38 = 0x124;
            }
            t88 = t38;
        } else {
            if ((*(int *)((a4 + 0x68))) != 0) {
                if ((*(int *)((a4 + 0x124))) == 0) {
                    nlProjectScreen3D((0x8C + a4));
                    if (0.0f > (*(float *)(((int)stk + 8)))) {
                        t50 = (*(int *)((((((*(int *)((a4 + 0x78))) & 0x1) << 2) + 0xC0A3778) + 0x0)));
                    } else {
                        t50 = (*(int *)((((((*(int *)((a4 + 0x78))) & 0x1) << 2) + 0xC0A3778) + 0x8)));
                    }
                    Sound_Request(t50, 0x2);
                }
                if ((*(float *)((a4 + 0x6C))) > 2.5f) {
                    *(unsigned int *)((a4 + 0x124)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                }
                t79 = 0x124;
            } else {
                t73 = 0x124;
                if ((*(int *)((a4 + 0x124))) != 0) {
                    *(unsigned int *)((a4 + 0x124)) = 0x0;
                    t64 = *(int *)((0x58 + (*(int *)0xC2A1B30)));
                    t67 = t64;
                    if (t64 == 1) {
                        t67 = (setTechnicalBonus(0x0, ((int)((*(float *)((a4 + 0x6C))) * 0.199999988f) + 0x1)));
                    }
                    t73 = t67;
                }
                t79 = t73;
            }
            t88 = t79;
        }
        t97 = t88;
    }
    return t97;
}
