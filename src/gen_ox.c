/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlSprPut(int, int);
int hudDrawFareDigits(int a4);

int hudDrawFareDigits(int a4)
{
    int t0;
    int t1;
    int t66;
    int t64;
    int t63;
    int t61;
    int t59;
    int t67;
    int t69;
    int t73;
    float u75;
    int t79;
    int t101;
    int t105;
    int t108;
    int t128;
    int t42;
    int t55;
    int t77;
    float u92;
    float u93;
    int t97;
    int t98;
    int t114;

    t0 = 0xC0554A4;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)0xC2A8E8C) == 0) {
            t0 = 0xC2A8E34;
            if ((int)(*(int *)(((t1 << 2) + t0))) > 0) {
                *(unsigned int *)(((t1 << 2) + t0)) = ((*(int *)(((t1 << 2) + t0))) - 1);
                t0 = 0xC2A8E90;
                if ((int)t1 > (int)(*(int *)((t0 + 0x0)))) {
                    t0 = 0xB;
                    t0 = ((int)((int)((*(int *)((((t1 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t0));
                    *(unsigned int *)((((t1 << 2) + 0xC2A8E50) + 0x0)) = t0;
                } else {
                    t0 = (t1 << 2);
                    t0 = (*(int *)((0xC2A8E50 + t0)));
                    if (t0 == 10) {
                        if ((int)t1 < (int)(*(int *)0xC2A8E90)) {
                            t0 = 0xB;
                            t0 = ((int)((int)((*(int *)((((t1 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t0));
                        } else {
                            t0 = 0xA;
                            t0 = ((int)((int)((*(int *)((((t1 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t0));
                        }
                        *(unsigned int *)((((t1 << 2) + 0xC2A8E50) + 0x0)) = t0;
                    } else {
                        t0 = 0xA;
                        t0 = ((int)((int)((*(int *)((((t1 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t0));
                        *(unsigned int *)((((t1 << 2) + 0xC2A8E50) + 0x0)) = t0;
                    }
                }
            } else {
                t0 = (t1 << 2);
                if ((*(int *)((0xC2A8E6C + t0))) == 0) {
                    t0 = (t1 << 2);
                    *(unsigned int *)((0xC2A8E6C + t0)) = 0x1;
                    t0 = (Sound_Request(0x205A9, 0x0));
                }
            }
        }
        t0 = t1;
        t66 = 0xFFFFFFFA;
        if ((t0 != 1) && (t42 = (t0 == 1), t0 = t1, t0 != 2)) {
            t64 = 0x2;
            if (t0 == 3) {
            } else {
                t0 = t1;
                t63 = 0xA;
                if ((t0 != 4) && (t55 = (t0 == 4), t0 = t1, t0 != 5)) {
                    t61 = 0x12;
                    if (t0 == 6) {
                    } else {
                        t0 = t1;
                        t59 = 0xFFFFFFF2;
                        if (t0 == 7) {
                            t59 = 0x1A;
                        }
                        t61 = t59;
                    }
                    t63 = t61;
                }
                t64 = t63;
            }
            t66 = t64;
        }
        if ((int)t1 <= (int)0x1) {
            t0 = (t1 << 2);
            t67 = *(int *)((0xC2A8E50 + t0));
            t0 = 0xC130C80;
            *(unsigned int *)0xC2A888C = (*(int *)(((t67 << 2) + t0)));
        } else {
            t0 = (t1 << 2);
            t69 = *(int *)((0xC2A8E50 + t0));
            t0 = 0xC130C54;
            *(unsigned int *)0xC2A888C = (*(int *)(((t69 << 2) + t0)));
        }
        t0 = 0x1A2;
        t73 = *(int *)0xC2A8EB0;
        u75 = (float)(((((((0x8 - t1) << 1) + (0x8 - t1)) << 2) << 1) + t66) + t0);
        t0 = t73;
        if ((t0 != 1) && (t77 = (t0 == 1), t0 = t73, t0 != 6)) {
            t0 = 0x1C;
            *(unsigned int *)0xC2A88C0 = 0xE;
            *(float *)((0xC2A888C + t0)) = 0.0f;
            t0 = (t1 << 2);
            if ((*(int *)((0xC2A8E6C + t0))) == 0) {
                t0 = 0x24;
                t79 = *(int *)0xC2A8E8C;
                *(float *)((0xC2A888C + t0)) = (1.0f - ((float)t79 * 0.25f));
                t0 = 0x14;
                *(float *)((0xC2A888C + t0)) = (1.0f - ((float)t79 * 0.25f));
            } else {
                t0 = 0x24;
                *(float *)((0xC2A888C + t0)) = 1.0f;
                t0 = 0x14;
                *(float *)((0xC2A888C + t0)) = 1.0f;
            }
            t0 = 0x4;
            *(float *)((0xC2A888C + t0)) = u75;
            u92 = 111.0f;
            u93 = (*(float *)0xC2A8EB8);
        } else {
            t0 = 0x1C;
            *(unsigned int *)0xC2A88C0 = 0x6;
            *(float *)((0xC2A888C + t0)) = (1.0f - (*(float *)0xC2A8EA0));
            t0 = 0x24;
            *(float *)((0xC2A888C + t0)) = 1.0f;
            t0 = 0x14;
            *(float *)((0xC2A888C + t0)) = (*(float *)0xC2A8EA0);
            t0 = 0x4;
            *(float *)((0xC2A888C + t0)) = u75;
            t0 = 0xC0555E8;
            u92 = (*(float *)((t0 + 0x0)));
            u93 = (*(float *)0xC2A8EB8);
        }
        t0 = 0x8;
        *(float *)((0xC2A888C + t0)) = (u92 - u93);
        *(unsigned int *)0xC2A88B4 = 0x0;
        t0 = (nlSprPut(0xC2A888C, t73));
        t0 = (*(int *)0xC2A8EB0);
        if ((t0 != 1) && (t97 = (t0 == 1), t0 = (t1 << 2), t98 = *(int *)((0xC2A8E6C + t0)), t98 == 0)) {
            t0 = 0x8;
            *(float *)((0xC2A888C + t0)) = ((*(float *)((0xC2A888C + t0))) - 32.0f);
            if ((int)t1 <= (int)0x1) {
                t0 = (t1 << 2);
                t101 = *(int *)((0xC2A8E50 + t0));
                t0 = 0xA;
                t0 = ((int)((int)(t101 + 0x1) % (int)t0));
                t0 = (t0 << 2);
                *(unsigned int *)0xC2A888C = (*(int *)((0xC130C80 + t0)));
            } else {
                t0 = 0xC2A8E90;
                if ((int)t1 > (int)(*(int *)((t0 + 0x0)))) {
                    t0 = (t1 << 2);
                    t105 = *(int *)((0xC2A8E50 + t0));
                    t0 = 0xB;
                    t0 = ((int)((int)(t105 + 0x1) % (int)t0));
                    t0 = (t0 << 2);
                    *(unsigned int *)0xC2A888C = (*(int *)((0xC130C54 + t0)));
                } else {
                    t0 = (t1 << 2);
                    t108 = *(int *)((0xC2A8E50 + t0));
                    t0 = 0xA;
                    t0 = ((int)((int)(t108 + 0x1) % (int)t0));
                    t0 = (t0 << 2);
                    *(unsigned int *)0xC2A888C = (*(int *)((0xC130C54 + t0)));
                }
                t114 = 0xC130C54;
            }
            t0 = 0x14;
            *(unsigned int *)0xC2A88C0 = 0x6;
            *(float *)((0xC2A888C + t0)) = ((((float)(*(int *)0xC2A8E8C) * (*(float *)0xC2A8EA0))) * 0.25f);
            t0 = 0x1C;
            *(float *)((0xC2A888C + t0)) = (((1.0f - ((float)(*(int *)0xC2A8E8C) * 0.25f))) * (*(float *)0xC2A8EA0));
            t0 = 0x24;
            *(float *)((0xC2A888C + t0)) = 1.0f;
            *(unsigned int *)0xC2A88B4 = 0x0;
            t0 = (nlSprPut(0xC2A888C, t114));
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x7) continue;
        break;
    }
    t128 = *(int *)((0xC2A8E6C + ((*(int *)0xC2A8E88) << 2)));
    if (t128 == 1) {
        *(unsigned int *)0xC2A8E88 = ((*(int *)0xC2A8E88) + 0x1);
    }
    return t128;
}
