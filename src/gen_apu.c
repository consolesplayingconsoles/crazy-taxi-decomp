/* Straight-line functions with calls and guards (batch gen_apu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootDevRecv(int, int, int, int);
int bootDevSend(int, int, int, int);
int bootParsePacket(int a4);

int bootParsePacket(int a4)
{
    int t0;
    int t127;
    int t72;
    int t4;
    int t5;
    int t25;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t43;
    int t82;
    int t85;
    int t103;
    int t104;
    int t107;
    int t109;
    int t117;
    int t93;
    int t63;
    int t53;
    int stk[18];

    t0 = *(signed char *)((a4 + 0x0));
    t127 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
    } else {
        if ((unsigned char)t0 != 3) {
            if ((unsigned char)t0 != 18) {
                t72 = (unsigned char)t0;
                if ((unsigned char)t0 == 27) {
                } else {
                    if ((unsigned char)t0 == 37) {
                        t4 = 0x20;
                        t5 = (((int)stk + 4) + 0x4);
                        for (;;) {
                            t4 = (t4 - 0x1);
                            *(unsigned char *)((t5 + 0x0)) = 0x0;
                            t5 = (t5 + 0x1);
                            if (t4 == 0) {
                                break;
                            }
                        }
                        t63 = (bootDevSend((((int)stk + 4) + 0x4), 0x8, t5, (a4 + 0x6)));
                    } else {
                        if ((unsigned char)t0 != 40) {
                            t25 = (unsigned char)t0;
                            if ((unsigned char)t0 != 42) {
                            } else {
                                t7 = *(signed char *)(((a4 + 0x2) + 0x0));
                                t8 = *(signed char *)(((a4 + 0x3) + 0x0));
                                t9 = *(signed char *)(((a4 + 0x4) + 0x0));
                                t10 = *(signed char *)(((a4 + 0x5) + 0x0));
                                *(unsigned int *)(((int)stk + 4)) = ((((((unsigned char)t7 << 16) << 8) + ((unsigned char)t8 << 16)) + ((unsigned char)t9 << 8)) + (unsigned char)t10);
                                t11 = *(signed char *)(((a4 + 0x6) + 0x0));
                                t12 = *(signed char *)(((a4 + 0x7) + 0x0));
                                t13 = *(signed char *)(((a4 + 0x8) + 0x0));
                                t15 = (unsigned char)t0;
                                if ((unsigned int)((((unsigned char)t11 << 16) + ((unsigned char)t12 << 8)) + (unsigned char)t13) > (unsigned int)0x0) {
                                    t15 = (bootDevRecv(((((((unsigned char)t7 << 16) << 8) + ((unsigned char)t8 << 16)) + ((unsigned char)t9 << 8)) + (unsigned char)t10), ((((unsigned char)t11 << 16) + ((unsigned char)t12 << 8)) + (unsigned char)t13), (a4 + 0x4), (a4 + 0x6)));
                                }
                                t25 = t15;
                            }
                            t53 = t25;
                        } else {
                            t35 = *(signed char *)(((a4 + 0x2) + 0x0));
                            t36 = *(signed char *)(((a4 + 0x3) + 0x0));
                            t37 = *(signed char *)(((a4 + 0x4) + 0x0));
                            t38 = *(signed char *)(((a4 + 0x5) + 0x0));
                            *(unsigned int *)(((int)stk + 4)) = ((((((unsigned char)t35 << 16) << 8) + ((unsigned char)t36 << 16)) + ((unsigned char)t37 << 8)) + (unsigned char)t38);
                            t39 = *(signed char *)(((a4 + 0x6) + 0x0));
                            t40 = *(signed char *)(((a4 + 0x7) + 0x0));
                            t41 = *(signed char *)(((a4 + 0x8) + 0x0));
                            t43 = (unsigned char)t0;
                            if ((unsigned int)((((unsigned char)t39 << 16) + ((unsigned char)t40 << 8)) + (unsigned char)t41) > (unsigned int)0x0) {
                                t43 = (bootDevSend(((((((unsigned char)t35 << 16) << 8) + ((unsigned char)t36 << 16)) + ((unsigned char)t37 << 8)) + (unsigned char)t38), ((((unsigned char)t39 << 16) + ((unsigned char)t40 << 8)) + (unsigned char)t41), (a4 + 0x4), (a4 + 0x6)));
                            }
                            t53 = t43;
                        }
                        t63 = t53;
                    }
                    t72 = t63;
                }
                t93 = t72;
            } else {
                t82 = *(signed char *)(((a4 + 0x4) + 0x0));
                t85 = (unsigned char)t0;
                if ((unsigned int)(unsigned char)t82 <= (unsigned int)0x0) {
                } else {
                    t85 = (bootDevSend((*(int *)0xAC00F704), (unsigned char)t82, (a4 + 0x4), (a4 + 0x6)));
                }
                t93 = t85;
            }
            t117 = t93;
        } else {
            t103 = 0x20;
            t104 = (((int)stk + 4) + 0x4);
            for (;;) {
                t103 = (t103 - 0x1);
                *(unsigned char *)((t104 + 0x0)) = 0x0;
                t104 = (t104 + 0x1);
                if (t103 == 0) {
                    break;
                }
            }
            t107 = *(signed char *)(((a4 + 0x4) + 0x0));
            t109 = (unsigned char)t0;
            if ((unsigned int)(unsigned char)t107 <= (unsigned int)0x0) {
            } else {
                t109 = (bootDevSend((((int)stk + 4) + 0x4), (unsigned char)t107, (a4 + 0x4), t104));
            }
            t117 = t109;
        }
        t127 = t117;
    }
    return t127;
}
