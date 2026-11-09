/* Straight-line functions with calls and guards (batch gen_pr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int, float, float, float);
int extRand(void);
int nlRand(void);
int replay(int a4, float f4, float f5, float f6);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_int { char p[0x28]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int replay(int a4, float f4, float f5, float f6)
{
    int t14;
    int t158;
    int t67;
    int t68;
    int t77;
    int t80;
    int t82;
    int t95;
    int t97;
    int t42;
    int t98;

    if (a4 == 0) {
    } else {
        t14 = (((struct o4_int *)0xC2A629C)->v);
        if (a4 != 5) {
            (((struct o0_uint *)0xC2A629C)->v) = a4;
        } else {
            if (((((struct o0_int *)0xC2A629C)->v)) == 1) {
                (((struct o4_uint *)0xC2A629C)->v) = 0x0;
            } else {
                if ((((((struct o0_int *)0xC2A629C)->v)) != 3) && (t42 = (((struct o0_int *)0xC2A629C)->v), t42 != 4)) {
                    if (t42 != 2) {
                    } else {
                        t158 = 0x0;
                        if (((((struct o28_int *)0xC1EE20C)->v)) != 1) {
                        } else {
                            t158 = 0x0;
                            if ((*(int *)0xC2A4E50) != 0) {
                            } else {
                                if (((((struct o4_int *)0xC2A629C)->v)) == 0) {
                                    (((struct o4_uint *)0xC0F2B2C)->v) = 0xFFFFFFFF;
                                    (((struct o8_uint *)0xC0F2B2C)->v) = 0xB4;
                                    (((struct oC_uint *)0xC0F2B2C)->v) = 0xFFFFFFFF;
                                }
                                t67 = (((struct o4_int *)0xC0F2B2C)->v);
                                t68 = 0x0;
                                if ((int)t67 < 0) {
                                    t68 = 0x1;
                                }
                                t158 = 0x2;
                                if ((int)t67 < (int)0xB) {
                                    if (((((struct o8_int *)0xC0F2B2C)->v)) == 0) {
                                        t158 = 0x2;
                                        if (((((struct oC_int *)0xC0F2B2C)->v)) != -1) {
                                            t158 = 0x2;
                                            if ((CheckKyakuArea(0xC179144, ((((struct oC_int *)0xC0F2B2C)->v)), f4, f5, f6)) != 0) {
                                                t77 = (((struct o4_int *)0xC0F2B2C)->v);
                                                (((struct o4_uint *)0xC0F2B2C)->v) = (t77 + 0x1);
                                                t158 = 0x2;
                                                if ((int)(t77 + 0x1) < (int)0xB) {
                                                    t80 = (((struct o4_int *)0xC0F2B2C)->v);
                                                    t82 = 0xC0F3A40;
                                                    if (((((struct o0_int *)0xC1EE20C)->v)) == 0) {
                                                        t82 = 0xC0F3540;
                                                    }
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x0)) = ((((struct o4_int *)0xC2A629C)->v));
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x4)) = 0x0;
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x8)) = (((((struct o4_int *)0xC0F2B2C)->v)) + 0x28);
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0xC)) = 0x4;
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x10)) = (((((struct o4_int *)0xC0F2B2C)->v)) + 0x17);
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x14)) = ((((struct oC_int *)0xC0F2B2C)->v));
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x18)) = ((int)((int)(nlRand()) % (int)0x3));
                                                    *(unsigned int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x1C)) = 0x3039;
                                                    *(unsigned int *)(((((*(int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x8))) * 0x3C0) + ((((struct oC_int *)0xC2A629C)->v))) + 0x0)) = (*(int *)0xC179488);
                                                    t95 = 0xC1790CC;
                                                    t97 = ((((*(int *)(((t82 + (((t80 << 2) << 2) << 1)) + 0x8))) * 0x3C0) + ((((struct oC_int *)0xC2A629C)->v))) + 0x4);
                                                    for (;;) { t98 = *(int *)t95; t95 = (t95 + 4); if ((unsigned int)((0xC1790CC + 956)) < (unsigned int)t95) break; *(unsigned int *)t97 = t98; t97 = (t97 + 4); }
                                                    (((struct o8_uint *)0xC0F2B2C)->v) = 0x12C;
                                                    (((struct oC_uint *)0xC0F2B2C)->v) = 0xFFFFFFFF;
                                                    t158 = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        (((struct o8_uint *)0xC0F2B2C)->v) = (((((struct o8_int *)0xC0F2B2C)->v)) - 1);
                                        t158 = t68;
                                    }
                                }
                            }
                        }
                        if (((int)((((struct o4_int *)0xC2A629C)->v)) < (int)((((struct o0_int *)0xC0F2B2C)->v))) && (t158 == 0)) {
                            *(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x0)) = ((((struct o0_float *)0xC1EE2F4)->v));
                            *(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x4)) = ((((struct o4_float *)0xC1EE2F4)->v));
                            *(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x8)) = ((((struct o8_float *)0xC1EE2F4)->v));
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
                            (((struct o4_uint *)0xC2A629C)->v) = (((((struct o4_int *)0xC2A629C)->v)) + 0x1);
                        } else {
                            if (t158 == 1) {
                                (((struct o4_uint *)0xC2A629C)->v) = (((((struct o4_int *)0xC2A629C)->v)) + 0x1);
                            }
                        }
                    }
                } else {
                    if ((int)((((struct o4_int *)0xC2A629C)->v)) >= (int)((((struct o0_int *)0xC0F2B2C)->v))) {
                    } else {
                        (((struct o0_float *)0xC1EE2F4)->v) = (*(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x0)));
                        (((struct o4_float *)0xC1EE2F4)->v) = (*(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x4)));
                        (((struct o8_float *)0xC1EE2F4)->v) = (*(float *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x8)));
                        if (((short)((unsigned int)(*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) >> 16) & 32) != 0) {
                            (((struct o0_uchar *)0xC1EE267)->v) = 0x1;
                        } else {
                            (((struct o0_uchar *)0xC1EE267)->v) = 0x0;
                        }
                        if (((short)((unsigned int)(*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) >> 16) & 16) != 0) {
                            (((struct o1_uchar *)0xC1EE267)->v) = 0x1;
                        } else {
                            (((struct o1_uchar *)0xC1EE267)->v) = 0x0;
                        }
                        if (((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) & 32) != 0) {
                            (((struct o4_uchar *)0xC1EE267)->v) = 0x1;
                        } else {
                            (((struct o4_uchar *)0xC1EE267)->v) = 0x0;
                        }
                        if (((*(int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0xC))) & 16) != 0) {
                            (((struct o5_uchar *)0xC1EE267)->v) = 0x1;
                        } else {
                            (((struct o5_uchar *)0xC1EE267)->v) = 0x0;
                        }
                        extRand();
                        *(volatile int *)((((((t14 << 2) + t14) << 2) + 0xC30C000) + 0x10));
                        (((struct o4_uint *)0xC2A629C)->v) = (((((struct o4_int *)0xC2A629C)->v)) + 0x1);
                    }
                }
            }
        }
    }
    return ((((struct o0_int *)0xC2A629C)->v));
}
