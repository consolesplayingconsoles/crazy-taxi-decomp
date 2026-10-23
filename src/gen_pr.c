/* Straight-line functions with calls and guards (batch gen_pr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int, float, float, float);
int extRand(void);
int nlRand(void);
int replay(int a4, float f4, float f5, float f6);

int replay(int a4, float f4, float f5, float f6)
{
    int t14;
    int t158;
    int t148;
    int t67;
    int t68;
    int t139;
    int t120;
    int t112;
    int t77;
    int t104;
    int t80;
    int t82;
    int t95;
    int t97;
    int t42;
    int t130;
    int t98;

    if (a4 == 0) {
    } else {
        t14 = *(int *)0xC2A62A0;
        if (a4 != 5) {
            *(unsigned int *)0xC2A629C = a4;
        } else {
            if ((*(int *)0xC2A629C) == 1) {
                *(unsigned int *)0xC2A62A0 = 0x0;
            } else {
                if (((*(int *)0xC2A629C) != 3) && (t42 = *(int *)0xC2A629C, t42 != 4)) {
                    if (t42 != 2) {
                    } else {
                        t158 = 0x0;
                        if ((*(int *)0xC1EE234) != 1) {
                        } else {
                            t148 = 0x0;
                            if ((*(int *)0xC2A4E50) != 0) {
                            } else {
                                if ((*(int *)0xC2A62A0) == 0) {
                                    *(unsigned int *)0xC0F2B30 = 0xFFFFFFFF;
                                    *(unsigned int *)0xC0F2B34 = 0xB4;
                                    *(unsigned int *)0xC0F2B38 = 0xFFFFFFFF;
                                }
                                t67 = *(int *)0xC0F2B30;
                                t68 = 0x0;
                                if ((int)t67 < 0) {
                                    t68 = 0x1;
                                }
                                t139 = 0x2;
                                if ((int)t67 < (int)0xB) {
                                    if ((*(int *)0xC0F2B34) == 0) {
                                        t120 = 0x2;
                                        if ((*(int *)0xC0F2B38) != -1) {
                                            t112 = 0x2;
                                            if ((CheckKyakuArea(0xC179144, (*(int *)0xC0F2B38), f4, f5, f6)) != 0) {
                                                t77 = *(int *)0xC0F2B30;
                                                *(unsigned int *)0xC0F2B30 = (t77 + 0x1);
                                                t104 = 0x2;
                                                if ((int)(t77 + 0x1) < (int)0xB) {
                                                    t80 = *(int *)0xC0F2B30;
                                                    t82 = 0xC0F3A40;
                                                    if ((*(int *)0xC1EE20C) == 0) {
                                                        t82 = 0xC0F3540;
                                                    }
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x0)) = (*(int *)0xC2A62A0);
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x4)) = 0x0;
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x8)) = ((*(int *)0xC0F2B30) + 0x28);
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0xC)) = 0x4;
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x10)) = ((*(int *)0xC0F2B30) + 0x17);
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x14)) = (*(int *)0xC0F2B38);
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x18)) = ((int)((int)(nlRand()) % (int)0x3));
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x1C)) = 0x3039;
                                                    *(unsigned int *)(((((*(int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x8))) * 0x3C0) + (*(int *)0xC2A62A8)) + 0x0)) = (*(int *)0xC179488);
                                                    t95 = 0xC1790CC;
                                                    t97 = ((((*(int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x8))) * 0x3C0) + (*(int *)0xC2A62A8)) + 0x4);
                                                    for (;;) { t98 = *(int *)t95; t95 = (t95 + 4); if ((unsigned int)((0xC1790CC + 956)) < (unsigned int)t95) break; *(unsigned int *)t97 = t98; t97 = (t97 + 4); }
                                                    *(unsigned int *)0xC0F2B34 = 0x12C;
                                                    *(unsigned int *)0xC0F2B38 = 0xFFFFFFFF;
                                                    t104 = 0x0;
                                                }
                                                t112 = t104;
                                            }
                                            t120 = t112;
                                        }
                                        t130 = t120;
                                    } else {
                                        *(unsigned int *)0xC0F2B34 = ((*(int *)0xC0F2B34) - 1);
                                        t130 = t68;
                                    }
                                    t139 = t130;
                                }
                                t148 = t139;
                            }
                            t158 = t148;
                        }
                        if (((int)(*(int *)0xC2A62A0) < (int)(*(int *)0xC0F2B2C)) && (t158 == 0)) {
                            *(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x0)) = (*(float *)0xC1EE2F4);
                            *(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x4)) = (*(float *)0xC1EE2F8);
                            *(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x8)) = (*(float *)0xC1EE2FC);
                            *(unsigned int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC)) = 0x0;
                            if ((*(signed char *)0xC1EE267) != 0) {
                                *(unsigned int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC)) = ((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) | 0x200000);
                            }
                            if ((*(signed char *)0xC1EE268) != 0) {
                                *(unsigned int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC)) = ((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) | 0x100000);
                            }
                            if ((*(signed char *)0xC1EE26B) != 0) {
                                *(unsigned int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC)) = ((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) | 0x20);
                            }
                            if ((*(signed char *)0xC1EE26C) != 0) {
                                *(unsigned int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC)) = ((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) | 0x10);
                            }
                            *(unsigned int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x10)) = (extRand());
                            *(unsigned int *)0xC2A62A0 = ((*(int *)0xC2A62A0) + 0x1);
                        } else {
                            if (t158 == 1) {
                                *(unsigned int *)0xC2A62A0 = ((*(int *)0xC2A62A0) + 0x1);
                            }
                        }
                    }
                } else {
                    if ((int)(*(int *)0xC2A62A0) >= (int)(*(int *)0xC0F2B2C)) {
                    } else {
                        *(float *)0xC1EE2F4 = (*(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x0)));
                        *(float *)0xC1EE2F8 = (*(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x4)));
                        *(float *)0xC1EE2FC = (*(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x8)));
                        if (((short)((unsigned int)(*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) >> 16) & 32) != 0) {
                            *(unsigned char *)0xC1EE267 = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE267 = 0x0;
                        }
                        if (((short)((unsigned int)(*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) >> 16) & 16) != 0) {
                            *(unsigned char *)0xC1EE268 = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE268 = 0x0;
                        }
                        if (((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) & 32) != 0) {
                            *(unsigned char *)0xC1EE26B = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE26B = 0x0;
                        }
                        if (((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) & 16) != 0) {
                            *(unsigned char *)0xC1EE26C = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE26C = 0x0;
                        }
                        extRand();
                        *(volatile int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x10));
                        *(unsigned int *)0xC2A62A0 = ((*(int *)0xC2A62A0) + 0x1);
                    }
                }
            }
        }
    }
    return (*(int *)0xC2A629C);
}
