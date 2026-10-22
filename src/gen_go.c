/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiGetDisplayData(int a4, int a5, int a6);

int kmiGetDisplayData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t12;
    int t7;
    int t8;
    int t14;
    int t15;
    int t110;
    int t16;
    int t17;
    int t45;
    int t18;
    int t19;
    int t24;
    int t20;
    int t21;
    int t26;
    int t35;
    int t27;
    int t28;
    int t29;
    int t30;
    int t47;
    int t48;
    int t53;
    int t49;
    int t50;
    int t55;
    int t64;
    int t56;
    int t57;
    int t58;
    int t59;
    int t76;
    int t77;
    int t82;
    int t78;
    int t79;
    int t84;
    int t93;
    int t85;
    int t86;
    int t87;
    int t88;
    int t120;
    int t119;
    int t123;
    int t124;
    int t125;
    int t126;
    int t117;
    int t103;
    int t74;
    int t40;
    int t69;
    int t98;
    int stk[8] = {0};

    t0 = *(int *)0xC175D64;
    t1 = *(int *)0xC175D60;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t1;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t2 = *(int *)0xC175D6C;
    t3 = *(int *)0xC175D68;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t3;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t2;
    t4 = *(int *)0xC175D74;
    t5 = *(int *)0xC175D70;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t5;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t4;
    t6 = *(int *)0xC2EA69C;
    t12 = 0x280;
    if (t6 != 1) {
        t7 = *(int *)0xC2EA6A0;
        t8 = 0x140;
        if ((t7 & 16) != 0) {
            t8 = 0x280;
        }
        t12 = t8;
    }
    if (a5 == 1) {
        t14 = *(int *)0xC2EA948;
        *(unsigned int *)0xC2EA948 = (((t14 & 0xFFA0FFFF) | (a5 << 22)) | ((((unsigned int)((unsigned int)((unsigned int)((a6 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1) & 0x1F) << 16));
        t117 = ((a6 + 0x1F) & 0xFFFFFFE0);
    } else {
        t15 = *(int *)0xC2EA69C;
        t110 = 0x1E0;
        if (t15 == 1) {
        } else {
            t16 = *(int *)0xC2EA6A0;
            if ((t16 & 0x1) != 1) {
                t17 = *(int *)0xC2EA6A0;
                if ((t17 & 0x2C) == 32) {
                    t45 = 0xF0;
                    if (0x1 != 0) {
                    } else {
                        t18 = *(int *)0xC2EA6A0;
                        if ((t18 & 32) != 0) {
                            t19 = *(int *)0xC2EA6A0;
                            t24 = 0x1E0;
                            if ((t19 & 0x42) == 66) {
                                t20 = *(int *)0xC2EA6B0;
                                t21 = *(int *)(((t20 << 2) + 0xC2EAB58));
                                t24 = t21;
                            }
                            t40 = t24;
                        } else {
                            t26 = *(int *)0xC2EA6A0;
                            t35 = 0xF0;
                            if ((t26 & 0x62) == 66) {
                                t27 = *(int *)0xC2EA6B0;
                                t28 = *(int *)(((t27 << 2) + 0xC2EAB58));
                                t29 = (int)((unsigned int)t28 + (unsigned int)0x0);
                                t30 = (int)((unsigned int)t29 + ((((int)0x0 > (int)t28)) ? 1u : 0u));
                                t35 = (t30 >> 1);
                            }
                            t40 = t35;
                        }
                        t45 = t40;
                    }
                    t74 = t45;
                } else {
                    t47 = *(int *)0xC2EA6A0;
                    if ((t47 & 32) != 0) {
                        t48 = *(int *)0xC2EA6A0;
                        t53 = 0x1E0;
                        if ((t48 & 0x42) == 66) {
                            t49 = *(int *)0xC2EA6B0;
                            t50 = *(int *)(((t49 << 2) + 0xC2EAB58));
                            t53 = t50;
                        }
                        t69 = t53;
                    } else {
                        t55 = *(int *)0xC2EA6A0;
                        t64 = 0xF0;
                        if ((t55 & 0x62) == 66) {
                            t56 = *(int *)0xC2EA6B0;
                            t57 = *(int *)(((t56 << 2) + 0xC2EAB58));
                            t58 = (int)((unsigned int)t57 + (unsigned int)0x0);
                            t59 = (int)((unsigned int)t58 + ((((int)0x0 > (int)t57)) ? 1u : 0u));
                            t64 = (t59 >> 1);
                        }
                        t69 = t64;
                    }
                    t74 = t69;
                }
                t103 = t74;
            } else {
                t76 = *(int *)0xC2EA6A0;
                if ((t76 & 32) != 0) {
                    t77 = *(int *)0xC2EA6A0;
                    t82 = 0x1E0;
                    if ((t77 & 0x42) == 66) {
                        t78 = *(int *)0xC2EA6B0;
                        t79 = *(int *)(((t78 << 2) + 0xC2EAB58));
                        t82 = t79;
                    }
                    t98 = t82;
                } else {
                    t84 = *(int *)0xC2EA6A0;
                    t93 = 0xF0;
                    if ((t84 & 0x62) == 66) {
                        t85 = *(int *)0xC2EA6B0;
                        t86 = *(int *)(((t85 << 2) + 0xC2EAB58));
                        t87 = (int)((unsigned int)t86 + (unsigned int)0x0);
                        t88 = (int)((unsigned int)t87 + ((((int)0x0 > (int)t86)) ? 1u : 0u));
                        t93 = (t88 >> 1);
                    }
                    t98 = t93;
                }
                t103 = t98;
            }
            t110 = t103;
        }
        t117 = t110;
    }
    *(unsigned int *)0xC2B8C88 = t12;
    *(unsigned int *)0xC2B8C8C = t117;
    t120 = a4;
    if (a4 != 0xFF) {
    } else {
        t119 = *(int *)0xC2EA6A4;
        t120 = t119;
    }
    t123 = *(int *)((((int)stk + 4) + (t120 << 2)));
    *(unsigned int *)0xC2B8C90 = ((unsigned int)((unsigned int)t123 >> 2) >> 1);
    t124 = *(int *)0xC2B8C8C;
    t125 = *(int *)0xC2B8C88;
    t126 = *(int *)0xC2B8C90;
    *(unsigned int *)0xC2B8CA0 = ((t125 * t124) * t126);
    return 0x60;
}
