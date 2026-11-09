/* Straight-line functions with calls and guards (batch gen_apa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int Result_Customer_Count_Put(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int Result_Customer_Count_Put(void)
{
    int t3;
    int t2;
    int t126;
    int t18;
    int t29;
    int t40;
    int t77;
    int t79;
    int t85;
    int t109;
    int t118;
    int t19;
    int t69;
    int t70;
    int t72;
    int t104;
    int t105;
    int t95;
    int t96;

    t3 = 0xC059C28;
    if (((((struct o0_int *)0xC2A9850)->v)) != (*(int *)0xC1794D0)) {
        t2 = (((struct o4_int *)0xC2A9850)->v);
        (((struct o4_uint *)0xC2A9850)->v) = (t2 + 0x1);
        t3 = (t2 + 0x1);
    }
    t126 = t3;
    if ((int)((((struct o0_int *)0xC2A96F4)->v)) <= (int)0x2A) {
    } else {
        t18 = *(int *)0xC1794D0;
        if ((((((struct o0_int *)0xC2A9850)->v)) != t18) && (t19 = *(int *)0xC2A97E0, t19 == 0)) {
            t29 = (((struct o4_int *)0xC2A9850)->v);
            if ((int)((((struct o0_int *)0xC2A9850)->v)) < (int)0xF) {
                if ((int)t29 >= (int)(0x10 - ((((struct o0_int *)0xC2A9850)->v)))) {
                    (((struct o0_uint *)0xC2A9850)->v) = (((((struct o0_int *)0xC2A9850)->v)) + 0x1);
                    (((struct o4_uint *)0xC2A9850)->v) = 0x0;
                }
            } else {
                if ((int)t29 >= (int)0x1) {
                    if ((int)((((struct o0_int *)0xC2A9850)->v)) < (int)0x33) {
                        (((struct o0_uint *)0xC2A9850)->v) = (((((struct o0_int *)0xC2A9850)->v)) + 0x1);
                    } else {
                        t40 = (((struct o0_int *)0xC2A9850)->v);
                        (((struct o0_uint *)0xC2A9850)->v) = (t40 + 0x3);
                        if ((int)(t40 + 0x3) > (int)(*(int *)0xC1794D0)) {
                            (((struct o0_uint *)0xC2A9850)->v) = (*(int *)0xC1794D0);
                        }
                    }
                    (((struct o4_uint *)0xC2A9850)->v) = 0x0;
                }
            }
            t69 = ((int)((int)((((struct o0_int *)0xC2A9850)->v)) % (int)0xA));
            t70 = ((int)((int)((((struct o0_int *)0xC2A9850)->v)) / (int)0x64));
            t72 = ((int)((int)((int)((int)((((struct o0_int *)0xC2A9850)->v)) / (int)0xA)) % (int)0xA));
        } else {
            t69 = ((int)((int)t18 % (int)0xA));
            t70 = ((int)((int)t18 / (int)0x64));
            t72 = ((int)((int)((int)((int)t18 / (int)0xA)) % (int)0xA));
        }
        (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
        (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
        (((struct o2C_uint *)0xC2A96F4)->v) = 0x0;
        if (t70 != 0) {
            (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)((0xC130E18 + (t70 << 2))));
            (((struct o8_float *)0xC2A96F4)->v) = 496.0f;
            (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x36);
            t77 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t72, (t69 << 2));
            (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)(((t72 << 2) + 0xC130E18)));
            (((struct o8_float *)0xC2A96F4)->v) = 528.0f;
            t79 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)(((t69 << 2) + 0xC130E18)));
            (((struct o8_float *)0xC2A96F4)->v) = 560.0f;
        } else {
            if (t72 != 0) {
                (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)((0xC130E18 + (t72 << 2))));
                if (t70 != 0) {
                    (((struct o8_float *)0xC2A96F4)->v) = 496.0f;
                } else {
                    (((struct o8_float *)0xC2A96F4)->v) = 512.0f;
                }
                (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x36);
                t85 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t72, (t69 << 2));
                (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)(((t69 << 2) + 0xC130E18)));
                if (t70 != 0) {
                    (((struct o8_float *)0xC2A96F4)->v) = 528.0f;
                } else {
                    (((struct o8_float *)0xC2A96F4)->v) = 544.0f;
                }
            } else {
                (((struct o4_uint *)0xC2A96F4)->v) = (*(int *)((0xC130E18 + (t69 << 2))));
                (((struct o8_float *)0xC2A96F4)->v) = 528.0f;
                (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x36);
                t95 = t72;
                t96 = (t69 << 2);
            }
            t104 = t95;
            t105 = t96;
        }
        t109 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t104, t105);
        (((struct o4_uint *)0xC2A96F4)->v) = 0x12B;
        (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x52);
        (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o2C_uint *)0xC2A96F4)->v) = 0x0;
        (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
        (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
        if ((int)((((struct o0_int *)0xC2A9850)->v)) >= (int)0x2) {
            (((struct o8_float *)0xC2A96F4)->v) = 588.0f;
            (((struct o1C_float *)0xC2A96F4)->v) = 0.26799998f;
            (((struct o24_float *)0xC2A96F4)->v) = 0.376f;
            (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 0.103999995f);
            t118 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            (((struct o1C_float *)0xC2A96F4)->v) = 0.0f;
            (((struct o24_float *)0xC2A96F4)->v) = 1.0f;
            (((struct o8_float *)0xC2A96F4)->v) = 5.2e+02f;
        } else {
            (((struct o8_float *)0xC2A96F4)->v) = 528.0f;
        }
        (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        t126 = (((int (*)(int))(nlSprPut))(0xC2A96F8));
    }
    return t126;
}
