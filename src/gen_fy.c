/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int ndPuru2Start(int, int, int);
int carRumble(int a4);

int carRumble(int a4)
{
    int t4;
    int t5;
    float u20;
    int t60;
    int t92;
    int t74;
    int t75;
    int t83;
    int t80;
    int t143;
    int t144;
    float u148;
    int t150;
    int t173;
    int t1;
    int t130;
    int t121;
    int t87;
    int t112;
    int t159;
    int t153;
    int t156;
    float u157;
    int t176;

    t4 = 0x0;
    if (((unsigned char)(*(signed char *)0xC1EE277) == 2) && (t1 = *(int *)0xC1EE234, t1 != 0)) {
        t4 = 0x1;
    }
    t5 = *(int *)((a4 + 0x3B0));
    if (t5 != 0) {
        if (t5 == 1) {
            if ((int)(*(int *)((a4 + 0x3B4))) > 0) {
                if ((int)(*(int *)((a4 + 0x3B4))) > (int)0x3) {
                    u20 = 0.799999952f;
                    if (t4 != 0) {
                        u20 = 0.199999988f;
                    }
                    if (((*(float *)((a4 + 0x118))) - (*(float *)((a4 + 0x3B8)))) > u20) {
                        *(unsigned int *)((a4 + 0x3B0)) = 0x2;
                        *(unsigned int *)((a4 + 0x3B4)) = 0x5A;
                        Sound_Request(0x108A9, 0x0);
                        return ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x100000, 0x3);
                    }
                    if ((*(signed char *)0xC1EE268) != 0) {
                        *(unsigned int *)((a4 + 0x3B0)) = 0x4;
                        Sound_Request(0x102A9, 0x0);
                    }
                    *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) - 1);
                    return 0x3B4;
                }
                if ((*(signed char *)0xC1EE268) != 0) {
                    *(unsigned int *)((a4 + 0x3B0)) = 0x4;
                    Sound_Request(0x102A9, 0x0);
                }
                *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) - 1);
                return 0x3B4;
            }
            *(unsigned int *)((a4 + 0x3B0)) = 0x0;
            return 0x3B0;
        }
        if (t5 == 2) {
            *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) - 1);
            t60 = 0x3B4;
            if ((int)(*(int *)((a4 + 0x3B4))) <= 0) {
                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                t60 = 0x3B0;
            }
            t130 = t60;
        } else {
            if (t5 != 3) {
                t92 = t5;
                if (t5 != 4) {
                } else {
                    if (t4 != 0) {
                        t74 = *(signed char *)0xC1EE264;
                        t75 = 0x18;
                        if (((int)(unsigned char)t74 > (int)0x7D) && ((int)(unsigned char)t74 < (int)0x83)) {
                            *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                            t75 = 0x3B0;
                        }
                        t87 = t75;
                    } else {
                        t83 = 0x1B;
                        if ((*(signed char *)0xC1EE267) == 0) {
                            t80 = 0x1C;
                            if ((*(signed char *)0xC1EE268) != 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                                t80 = 0x3B0;
                            }
                            t83 = t80;
                        }
                        t87 = t83;
                    }
                    t92 = t87;
                }
                t121 = t92;
            } else {
                if ((int)(*(int *)((a4 + 0x3B4))) > 0) {
                    if ((*(signed char *)0xC1EE26B) == 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x3B0)) = 0x4;
                        Sound_Request(0x102A9, 0x0);
                    }
                    *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) - 1);
                    t112 = 0x3B4;
                } else {
                    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                    t112 = 0x3B0;
                }
                t121 = t112;
            }
            t130 = t121;
        }
        return t130;
    }
    if (t4 != 0) {
        if ((int)(int)_builtin_fabsf((float)((unsigned char)(*(signed char *)0xC1EE27A) - (unsigned char)(*(signed char *)0xC1EE27C))) > (int)0x40) {
            *(unsigned int *)((a4 + 0x3B0)) = 0x2;
            *(unsigned int *)((a4 + 0x3B4)) = 0x5A;
            Sound_Request(0x108A9, 0x0);
            return ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x100000, 0x0);
        }
        t143 = *(signed char *)0xC1EE279;
        t144 = *(signed char *)0xC1EE27B;
        if ((int)(int)_builtin_fabsf((float)((unsigned char)t143 - (unsigned char)t144)) > (int)0x40) {
            *(unsigned int *)((a4 + 0x3B0)) = 0x4;
            t159 = (Sound_Request(0x102A9, 0x0));
        } else {
            if ((*(signed char *)0xC1EE26B) != 0) {
                *(unsigned int *)((a4 + 0x3B4)) = 0x8;
                u148 = *(float *)((a4 + 0x118));
                *(float *)((a4 + 0x3B8)) = u148;
                *(unsigned int *)((a4 + 0x3B0)) = 0x1;
                t153 = 0x3B0;
                t156 = 0x1;
                u157 = u148;
            } else {
                t150 = 0x20;
                if ((*(signed char *)0xC1EE26C) == 0) {
                } else {
                    *(unsigned int *)((a4 + 0x3B4)) = 0xA;
                    *(unsigned int *)((a4 + 0x3B0)) = 0x3;
                    t150 = 0x3B0;
                }
                t153 = t150;
                t156 = (int)_builtin_fabsf((float)((unsigned char)t143 - (unsigned char)t144));
                u157 = _builtin_fabsf((float)((unsigned char)t143 - (unsigned char)t144));
            }
            t159 = t153;
        }
        return t159;
    }
    if ((*(signed char *)0xC1EE26B) != 0) {
        *(unsigned int *)((a4 + 0x3B4)) = 0x8;
        *(float *)((a4 + 0x3B8)) = (*(float *)((a4 + 0x118)));
        *(unsigned int *)((a4 + 0x3B0)) = 0x1;
        t176 = 0x3B0;
    } else {
        t173 = 0x20;
        if ((*(signed char *)0xC1EE26C) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x3B4)) = 0xA;
            *(unsigned int *)((a4 + 0x3B0)) = 0x3;
            t173 = 0x3B0;
        }
        t176 = t173;
    }
    return t176;
}
