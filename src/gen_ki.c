/* Straight-line functions with calls and guards (batch gen_ki): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c16d2c0(void);
int kmiInitPAL(void);

int kmiInitPAL(void)
{
    int t0;
    int t1;
    int t13;
    int t14;
    int t15;
    int t27;
    int t30;
    int t31;
    int t43;
    int t49;
    int t50;
    int t64;
    int t65;
    int t71;
    int t74;
    int t83;
    int t86;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t105;
    int t98;
    int t101;
    int t99;
    int t107;
    int t108;
    int t109;
    int t110;
    int t112;
    int t113;
    int t128;
    int t129;
    int t130;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t138;
    int t61;
    int t56;
    int t52;
    int t137;
    int stk[134] = {0};

    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x8)) = 0x35F;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x0)) = 0x8D;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x4)) = 0x34B;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x18)) = 0x3F;
    t0 = *(int *)0xC2EA6A0;
    if ((t0 & 0x1) != 1) {
        t1 = *(int *)0xC2EA6A0;
        if ((t1 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x270;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x138;
            }
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x138;
        }
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x138;
    }
    t13 = *(int *)0xC2EA6A0;
    if ((t13 & 0x42) == 66) {
        t14 = *(int *)0xC2EA6A0;
        if ((t14 & 0x1) != 1) {
            t15 = *(int *)0xC2EA6A0;
            if ((t15 & 44) != 0) {
                if (0x1 != 0) {
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x2C;
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x26C;
                } else {
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
                }
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
            }
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
        }
        t27 = *(int *)0xC2EA6A0;
        if ((t27 & 32) != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x134;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x136;
        }
    } else {
        t30 = *(int *)0xC2EA6A0;
        if ((t30 & 0x1) != 1) {
            t31 = *(int *)0xC2EA6A0;
            if ((t31 & 44) != 0) {
                if (0x1 != 0) {
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x2C;
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x26C;
                } else {
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
                }
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
            }
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
        }
        t43 = *(int *)0xC2EA6A0;
        if ((t43 & 32) != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x134;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x136;
        }
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x78)) = 0x15;
    t49 = *(int *)0xC2EA6A0;
    if ((t49 & 0x1) != 1) {
        t50 = *(int *)0xC2EA6A0;
        if ((t50 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x16A;
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0x1F;
                t52 = 0x5;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x31F;
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0xF;
                t52 = 0x3;
            }
            t56 = t52;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x31F;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0xF;
            t56 = 0x3;
        }
        t61 = t56;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x31F;
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0xF;
        t61 = 0x3;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x1C)) = t61;
    t64 = *(int *)0xC2EA6A0;
    if ((t64 & 0x1) != 1) {
        t65 = *(int *)0xC2EA6A0;
        if ((t65 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x0;
            }
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x0;
        }
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x0;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x34)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x3C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x40)) = 0x0;
    t71 = *(int *)0xC2EA6A0;
    if ((t71 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
        }
    } else {
        t74 = *(int *)0xC2EA6A0;
        if ((t74 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
            }
        }
    }
    t83 = *(int *)0xC2EA680;
    if (t83 == 6) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x70)) = 0x16;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x70)) = 0x3F;
    }
    t86 = *(int *)0xC2EA6A0;
    if ((t86 & 16) != 0) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x6C)) = 0x0;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x6C)) = 0x1;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x28)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x2C)) = 0x1;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x48)) = 0x1;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x4C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x50)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x54)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x58)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x5C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x68)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x60)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x64)) = 0xF0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF8)) = 0xAE;
    t88 = *(int *)0xC2EA6A0;
    if ((t88 & 0x42) == 66) {
        t89 = *(int *)0xC17684C;
        t90 = *(int *)0xC176850;
        *(unsigned int *)((((int)stk + 256) + 0x0)) = t89;
        *(unsigned int *)((((int)stk + 256) + 0x4)) = t90;
        t91 = *(int *)0xC176854;
        t92 = *(int *)0xC176858;
        *(unsigned int *)((((int)stk + 256) + 0x8)) = t91;
        *(unsigned int *)((((int)stk + 256) + 0xC)) = t92;
        t93 = *(int *)0xC17685C;
        *(unsigned int *)((((int)stk + 256) + 0x10)) = t93;
        t94 = *(int *)0xC2EA6B0;
        t95 = *(int *)((((int)stk + 256) + (t94 << 2)));
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF4)) = t95;
        t96 = *(int *)(((((int)stk + 256) + 0x14) + 0xF4));
        t97 = *(int *)0xC2EA6A0;
        t105 = t96;
        if ((t97 & 0x1) != 1) {
            t98 = *(int *)0xC2EA6A0;
            t101 = t96;
            if ((t98 & 44) != 0) {
                t99 = t96;
                if (0x1 != 0) {
                    t99 = (t96 - 1);
                }
                t101 = t99;
            }
            t105 = t101;
        }
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = t105;
        t107 = *(int *)0xC2EA6B0;
        t108 = *(int *)(((t107 << 2) + 0xC2EAB58));
        t109 = (int)((unsigned int)t108 + (unsigned int)0x0);
        t110 = (int)((unsigned int)t109 + ((((int)0x0 > (int)t108)) ? 1u : 0u));
        *(unsigned int *)0xC2EA9A0 = (t110 >> 1);
    } else {
        t112 = *(int *)0xC2EA6A0;
        if ((t112 & 0x1) != 1) {
            t113 = *(int *)0xC2EA6A0;
            if ((t113 & 44) != 0) {
                if (0x1 != 0) {
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2D;
                } else {
                    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2E;
                }
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2E;
            }
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2E;
        }
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF4)) = 0x2E;
        *(unsigned int *)0xC2EA9A0 = 0xF0;
    }
    t128 = *(int *)(((((int)stk + 256) + 0x14) + 0xC));
    t129 = (int)((unsigned int)t128 + (unsigned int)0x0);
    t130 = (int)((unsigned int)t129 + ((((int)0x0 > (int)t128)) ? 1u : 0u));
    t132 = *(int *)0xC2EA9A0;
    *(unsigned int *)0xC2EA998 = ((t130 >> 1) + t132);
    t133 = *(int *)(((((int)stk + 256) + 0x14) + 0xC));
    *(unsigned int *)0xC2EA99C = t133;
    t134 = (((int)stk + 256) + 0x14);
    t135 = ((((int)stk + 256) + 0x14) + 252);
    t136 = ((int)stk + 4);
    for (;;) { t137 = *(int *)t134; t134 = (t134 + 4); if ((unsigned int)t135 < (unsigned int)t134) break; *(unsigned int *)t136 = t137; t136 = (t136 + 4); }
    t138 = FUN_0c16d2c0();
    return t138;
}
