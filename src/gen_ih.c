/* Straight-line functions with calls and guards (batch gen_ih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlSprPut(int, int);
int hudDrawFareDigits(int a4);

int hudDrawFareDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t23;
    int t24;
    int t48;
    int t46;
    int t44;
    int t42;
    int t40;
    int t38;
    int t36;
    int t50;
    int t51;
    int t52;
    int t53;
    int t56;
    float u58;
    float u60;
    float u61;
    float u62;
    float u63;
    int t64;
    int t65;
    float u72;
    float u78;
    float u79;
    float u80;
    float u81;
    int t87;
    int t88;
    int t89;
    float u90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t106;
    float u107;
    float u108;
    int t109;
    float u110;
    float u111;
    int t112;
    int t120;
    int t121;
    int t122;
    float u83;
    float u84;
    float u74;
    float u75;
    int t104;

    t0 = 0xC0554A4;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2A8E8C;
        if (t2 == 0) {
            t0 = 0xC2A8E34;
            t3 = *(int *)(((t1 << 2) + t0));
            if ((int)t3 > 0) {
                t4 = *(int *)(((t1 << 2) + t0));
                *(unsigned int *)(((t1 << 2) + t0)) = (t4 - 1);
                t0 = 0xC2A8E90;
                t5 = *(int *)((t0 + 0x0));
                if ((int)t1 > (int)t5) {
                    t6 = *(int *)((((t1 << 2) + 0xC2A8E50) + 0x0));
                    t0 = 0xB;
                    t7 = (int)((int)(t6 + 0x1) % (int)t0);
                    t0 = t7;
                    *(unsigned int *)((((t1 << 2) + 0xC2A8E50) + 0x0)) = t0;
                } else {
                    t0 = (t1 << 2);
                    t8 = *(int *)((0xC2A8E50 + t0));
                    t0 = t8;
                    if (t0 == 10) {
                        t9 = *(int *)0xC2A8E90;
                        if ((int)t1 < (int)t9) {
                            t10 = *(int *)((((t1 << 2) + 0xC2A8E50) + 0x0));
                            t0 = 0xB;
                            t11 = (int)((int)(t10 + 0x1) % (int)t0);
                            t0 = t11;
                        } else {
                            t12 = *(int *)((((t1 << 2) + 0xC2A8E50) + 0x0));
                            t0 = 0xA;
                            t13 = (int)((int)(t12 + 0x1) % (int)t0);
                            t0 = t13;
                        }
                        *(unsigned int *)((((t1 << 2) + 0xC2A8E50) + 0x0)) = t0;
                    } else {
                        t15 = *(int *)((((t1 << 2) + 0xC2A8E50) + 0x0));
                        t0 = 0xA;
                        t16 = (int)((int)(t15 + 0x1) % (int)t0);
                        t0 = t16;
                        *(unsigned int *)((((t1 << 2) + 0xC2A8E50) + 0x0)) = t0;
                    }
                }
            } else {
                t0 = (t1 << 2);
                t23 = *(int *)((0xC2A8E6C + t0));
                if (t23 == 0) {
                    t0 = (t1 << 2);
                    *(unsigned int *)((0xC2A8E6C + t0)) = 0x1;
                    t24 = Sound_Request(0x205A9, 0x0);
                    t0 = t24;
                }
            }
        }
        t0 = t1;
        t48 = 0xFFFFFFFA;
        if (t0 != 1) {
            t0 = t1;
            t46 = 0xFFFFFFFA;
            if (t0 == 2) {
            } else {
                t44 = 0x2;
                if (t0 == 3) {
                } else {
                    t0 = t1;
                    t42 = 0xA;
                    if (t0 != 4) {
                        t0 = t1;
                        t40 = 0xA;
                        if (t0 == 5) {
                        } else {
                            t38 = 0x12;
                            if (t0 == 6) {
                            } else {
                                t0 = t1;
                                t36 = 0xFFFFFFF2;
                                if (t0 == 7) {
                                    t36 = 0x1A;
                                }
                                t38 = t36;
                            }
                            t40 = t38;
                        }
                        t42 = t40;
                    }
                    t44 = t42;
                }
                t46 = t44;
            }
            t48 = t46;
        }
        if ((int)t1 <= (int)0x1) {
            t0 = (t1 << 2);
            t50 = *(int *)((0xC2A8E50 + t0));
            t0 = 0xC130C80;
            t51 = *(int *)(((t50 << 2) + t0));
            *(unsigned int *)0xC2A888C = t51;
        } else {
            t0 = (t1 << 2);
            t52 = *(int *)((0xC2A8E50 + t0));
            t0 = 0xC130C54;
            t53 = *(int *)(((t52 << 2) + t0));
            *(unsigned int *)0xC2A888C = t53;
        }
        t0 = 0x1A2;
        t56 = *(int *)0xC2A8EB0;
        u58 = (float)(((((((0x8 - t1) << 1) + (0x8 - t1)) << 2) << 1) + t48) + t0);
        t0 = t56;
        if (t0 != 1) {
            t0 = t56;
            if (t0 == 6) {
                t0 = 0x1C;
                *(unsigned int *)0xC2A88C0 = 0x6;
                u60 = *(float *)0xC2A8EA0;
                *(float *)((0xC2A888C + t0)) = (1.0f - u60);
                t0 = 0x24;
                *(float *)((0xC2A888C + t0)) = 1.0f;
                t0 = 0x14;
                u61 = *(float *)0xC2A8EA0;
                *(float *)((0xC2A888C + t0)) = u61;
                t0 = 0x4;
                *(float *)((0xC2A888C + t0)) = u58;
                t0 = 0xC0555E8;
                u62 = *(float *)0xC2A8EB8;
                u63 = *(float *)((t0 + 0x0));
                u74 = u63;
                u75 = u62;
            } else {
                t0 = 0x1C;
                *(unsigned int *)0xC2A88C0 = 0xE;
                *(float *)((0xC2A888C + t0)) = 0.0f;
                t0 = (t1 << 2);
                t64 = *(int *)((0xC2A8E6C + t0));
                if (t64 == 0) {
                    t0 = 0x24;
                    t65 = *(int *)0xC2A8E8C;
                    *(float *)((0xC2A888C + t0)) = (1.0f - ((float)t65 * 0.25f));
                    t0 = 0x14;
                    *(float *)((0xC2A888C + t0)) = (1.0f - ((float)t65 * 0.25f));
                } else {
                    t0 = 0x24;
                    *(float *)((0xC2A888C + t0)) = 1.0f;
                    t0 = 0x14;
                    *(float *)((0xC2A888C + t0)) = 1.0f;
                }
                t0 = 0x4;
                *(float *)((0xC2A888C + t0)) = u58;
                u72 = *(float *)0xC2A8EB8;
                u74 = 111.0f;
                u75 = u72;
            }
            u83 = u74;
            u84 = u75;
        } else {
            t0 = 0x1C;
            *(unsigned int *)0xC2A88C0 = 0x6;
            u78 = *(float *)0xC2A8EA0;
            *(float *)((0xC2A888C + t0)) = (1.0f - u78);
            t0 = 0x24;
            *(float *)((0xC2A888C + t0)) = 1.0f;
            t0 = 0x14;
            u79 = *(float *)0xC2A8EA0;
            *(float *)((0xC2A888C + t0)) = u79;
            t0 = 0x4;
            *(float *)((0xC2A888C + t0)) = u58;
            t0 = 0xC0555E8;
            u80 = *(float *)0xC2A8EB8;
            u81 = *(float *)((t0 + 0x0));
            u83 = u81;
            u84 = u80;
        }
        t0 = 0x8;
        *(float *)((0xC2A888C + t0)) = (u83 - u84);
        *(unsigned int *)0xC2A88B4 = 0x0;
        t87 = nlSprPut(0xC2A888C, t56);
        t0 = t87;
        t88 = *(int *)0xC2A8EB0;
        t0 = t88;
        if (t0 != 1) {
            t0 = (t1 << 2);
            t89 = *(int *)((0xC2A8E6C + t0));
            if (t89 == 0) {
                t0 = 0x8;
                u90 = *(float *)((0xC2A888C + t0));
                *(float *)((0xC2A888C + t0)) = (u90 - 32.0f);
                if ((int)t1 <= (int)0x1) {
                    t0 = (t1 << 2);
                    t91 = *(int *)((0xC2A8E50 + t0));
                    t0 = 0xA;
                    t92 = (int)((int)(t91 + 0x1) % (int)t0);
                    t0 = t92;
                    t0 = (t0 << 2);
                    t93 = *(int *)((0xC130C80 + t0));
                    *(unsigned int *)0xC2A888C = t93;
                } else {
                    t0 = 0xC2A8E90;
                    t94 = *(int *)((t0 + 0x0));
                    if ((int)t1 > (int)t94) {
                        t0 = (t1 << 2);
                        t95 = *(int *)((0xC2A8E50 + t0));
                        t0 = 0xB;
                        t96 = (int)((int)(t95 + 0x1) % (int)t0);
                        t0 = t96;
                        t0 = (t0 << 2);
                        t97 = *(int *)((0xC130C54 + t0));
                        *(unsigned int *)0xC2A888C = t97;
                    } else {
                        t0 = (t1 << 2);
                        t98 = *(int *)((0xC2A8E50 + t0));
                        t0 = 0xA;
                        t99 = (int)((int)(t98 + 0x1) % (int)t0);
                        t0 = t99;
                        t0 = (t0 << 2);
                        t100 = *(int *)((0xC130C54 + t0));
                        *(unsigned int *)0xC2A888C = t100;
                    }
                    t104 = 0xC130C54;
                }
                t0 = 0x14;
                *(unsigned int *)0xC2A88C0 = 0x6;
                t106 = *(int *)0xC2A8E8C;
                u107 = *(float *)0xC2A8EA0;
                u108 = ((float)t106 * u107);
                *(float *)((0xC2A888C + t0)) = (u108 * 0.25f);
                t0 = 0x1C;
                t109 = *(int *)0xC2A8E8C;
                u110 = *(float *)0xC2A8EA0;
                u111 = (1.0f - ((float)t109 * 0.25f));
                *(float *)((0xC2A888C + t0)) = (u111 * u110);
                t0 = 0x24;
                *(float *)((0xC2A888C + t0)) = 1.0f;
                *(unsigned int *)0xC2A88B4 = 0x0;
                t112 = nlSprPut(0xC2A888C, t104);
                t0 = t112;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x7) continue;
        break;
    }
    t120 = *(int *)0xC2A8E88;
    t121 = *(int *)((0xC2A8E6C + (t120 << 2)));
    if (t121 == 1) {
        t122 = *(int *)0xC2A8E88;
        *(unsigned int *)0xC2A8E88 = (t122 + 0x1);
    }
    return t121;
}
