/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010682(int, int, int, int);
int FUN_0c010754(int, int, int, int);
int FUN_0c0107fe(int, int, int, int);
int FUN_0c010954(int, int, int);
int FUN_0c0109c4(int);
int FUN_0c011088(void);
int FUN_0c0110e6(void);
int FUN_0c011afe(void);
int FUN_0c010402(int a4, int a5);
int FUN_0c010f3e(int a4);

int FUN_0c010402(int a4, int a5)
{
    int t0;
    int t31;
    int t1;
    int t3;
    int t9;
    int t10;
    int t16;
    int t17;
    int t24;
    int t18;
    int t21;
    int t19;
    int t23;
    int t40;
    int t41;
    int t42;
    int t43;
    int t53;
    int t54;
    int t55;
    int t56;
    int t66;
    int t67;
    int t68;
    int t69;
    int t79;
    int t81;
    int t82;
    int t70;
    int t57;
    int t44;

    t0 = *(signed char *)((a5 + 0x1));
    if (((unsigned char)t0 & 0xF0) != 0) {
        if (((unsigned char)t0 & 0xF0) != 16) {
            if (((unsigned char)t0 & 0xF0) != 32) {
                if (((unsigned char)t0 & 0xF0) != 48) {
                    t31 = ((unsigned char)t0 & 0xF0);
                    if (((unsigned char)t0 & 0xF0) != 0xF0) {
                    } else {
                        t1 = ((int (*)(int, int))(0xAC010A26))(0xFF, a5);
                        FUN_0c0109c4(a4);
                        t3 = *(int *)0xAC00F708;
                        if (t3 != 0) {
                            FUN_0c0110e6();
                        }
                        t9 = ((int (*)(void))(0xAC010E3C))();
                        t10 = *(int *)0xAC00F708;
                        if (t10 != 0) {
                            FUN_0c011088();
                        }
                        t16 = *(int *)0x8C00FA1C;
                        t17 = *(int *)((t16 + 0x7C));
                        *(unsigned int *)0x8C00F400 = t17;
                        t24 = a4;
                        if (a4 == 1) {
                            t18 = ((int (*)(void))(0xAC011AEA))();
                            t21 = 0x0;
                            if (t18 != 0) {
                                t19 = FUN_0c011afe();
                                t21 = t19;
                            }
                            t23 = ((int (*)(int))(0xAC011B2C))((unsigned char)t21);
                            t24 = t23;
                        }
                        t31 = t24;
                    }
                    t44 = t31;
                } else {
                    t40 = *(signed char *)((a5 + 0x1));
                    t41 = *(int *)((a5 + 0x4));
                    t42 = *(short *)((a5 + 0x2));
                    t43 = FUN_0c0107fe(a4, ((unsigned char)t40 & 0x7), t41, (unsigned short)t42);
                    t44 = t43;
                }
                t57 = t44;
            } else {
                t53 = *(signed char *)((a5 + 0x1));
                t54 = *(int *)((a5 + 0x4));
                t55 = *(short *)((a5 + 0x2));
                t56 = FUN_0c010754(a4, ((unsigned char)t53 & 0x7), t54, (unsigned short)t55);
                t57 = t56;
            }
            t70 = t57;
        } else {
            t66 = *(signed char *)((a5 + 0x1));
            t67 = *(int *)((a5 + 0x4));
            t68 = *(short *)((a5 + 0x2));
            t69 = FUN_0c010682(a4, ((unsigned char)t66 & 0x7), t67, (unsigned short)t68);
            t70 = t69;
        }
        t82 = t70;
    } else {
        t79 = *(int *)0xAC00F700;
        FUN_0c010954(a4, t79, 0x40);
        t81 = FUN_0c0109c4(a4);
        t82 = t81;
    }
    return t82;
}

int FUN_0c010f3e(int a4)
{
    int t0;
    int t9;
    int t15;
    int t16;
    int t10;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t38;
    int t36;
    int t37;
    int t7;
    int t3;

    t0 = *(int *)0xAC00F718;
    if (t0 != 1) {
        if (t0 != 2) {
        } else {
            *(unsigned int *)0xAC00F728 = 0xA3010000;
            *(unsigned int *)0xAC00F72C = 0xA3010040;
            *(unsigned int *)0xAC00F730 = 0xA3010040;
            *(unsigned int *)0xAC00F734 = 0xA3010040;
            t3 = 0xA3010040;
        }
        t7 = t3;
    } else {
        *(unsigned int *)0xAC00F728 = 0xA05F7080;
        *(unsigned int *)0xAC00F72C = 0xA05F70C0;
        *(unsigned int *)0xAC00F730 = 0xA05F70C0;
        *(unsigned int *)0xAC00F734 = 0xA05F70C0;
        t7 = 0xA05F70C0;
    }
    t9 = *(int *)0xAC00F718;
    t15 = t7;
    t16 = 0xAC00F718;
    if (t9 == 1) {
        *(unsigned int *)0xA05F7490 = 0x511;
        *(unsigned int *)0xA05F7494 = 0x511;
        *(unsigned int *)0xA05F74A0 = 0x5;
        t10 = *(int *)0xA05F707C;
        *(unsigned int *)0xA05F707C = (t10 | 0x8);
        t15 = (t10 | 0x8);
        t16 = 0xA05F707C;
    }
    t18 = *(int *)0xAC00F728;
    *(unsigned char *)((t18 + 0x3C)) = 0xFFFFFFC0;
    t19 = *(int *)0xAC00F730;
    *(unsigned char *)((t19 + 0x0)) = 0xB;
    t20 = *(int *)0xAC00F730;
    *(unsigned char *)((t20 + 0x4)) = a4;
    t21 = *(int *)0xAC00F730;
    *(unsigned char *)((t21 + 0x8)) = 0x43;
    t22 = *(int *)0xAC00F730;
    *(unsigned char *)((t22 + 0xC)) = 0x0;
    t23 = *(int *)0xAC00F730;
    *(unsigned char *)((t23 + 0x10)) = 0x0;
    t24 = *(int *)0xAC00F730;
    *(unsigned char *)((t24 + 0x14)) = 0x0;
    t25 = *(int *)0xAC00F730;
    *(unsigned char *)((t25 + 0x18)) = 0x0;
    t26 = *(int *)0xAC00F730;
    *(unsigned char *)((t26 + 0x1C)) = 0x1;
    t27 = *(int *)0xAC00F730;
    *(unsigned char *)((t27 + 0x20)) = 0x40;
    t28 = *(int *)0xAC00F730;
    *(unsigned char *)((t28 + 0x24)) = 0x0;
    t29 = *(int *)0xAC00F730;
    *(unsigned char *)((t29 + 0x28)) = 0x33;
    t30 = *(int *)0xAC00F730;
    *(unsigned char *)((t30 + 0x2C)) = 0x0;
    t31 = *(int *)0xAC00F730;
    *(unsigned char *)((t31 + 0x30)) = 0x4;
    t32 = *(int *)0xAC00F730;
    *(unsigned char *)((t32 + 0x34)) = 0x0;
    t33 = *(int *)0xAC00F730;
    *(unsigned char *)((t33 + 0x3C)) = 0x0;
    t34 = *(int *)0xAC00F728;
    *(unsigned char *)((t34 + 0x14)) = 0x43;
    t35 = ((int (*)(int, int, int, int))(0xAC0118F8))(0x43, 0xAC00F730, t15, t16);
    t38 = 0x1;
    if (t35 != 0) {
    } else {
        t36 = *(int *)0xAC00F728;
        *(unsigned char *)((t36 + 0x3C)) = 0x0;
        t37 = ((int (*)(void))(0xAC0115B8))();
        t38 = 0x0;
    }
    return t38;
}
