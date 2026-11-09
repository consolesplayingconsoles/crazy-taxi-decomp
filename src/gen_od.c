/* Straight-line functions with calls and guards (batch gen_od): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMakeProjConvMat(int);
int kmSetPixelClipping(int, int, int, int);
int nlSetWindowSize(float f4, float f5, float f6, float f7);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int nlSetWindowSize(float f4, float f5, float f6, float f7)
{
    float u4;
    float u5;
    float u12;
    float u13;
    float u14;
    int t17;
    int t20;
    int t24;
    int t26;
    int t29;
    int t33;
    int t36;
    int t38;
    float u41;
    int t59;
    int t60;
    int t66;
    int t67;
    int t1;
    int t70;
    float u57;
    float u53;
    float u49;
    float u45;

    u4 = f7;
    u5 = f5;
    if ((((((struct o6_short *)0xC2B3190)->v)) != 0) && (t1 = (((struct o2_short *)0xC2B3190)->v), (int)(t1 << 1) <= (int)0x1E0)) {
        u4 = (f7 * (1.0f + 1.0f));
        u5 = (f5 * (1.0f + 1.0f));
    }
    (((struct o10_float *)0xC2B3490)->v) = f4;
    (((struct o14_float *)0xC2B3490)->v) = f5;
    (((struct o8_float *)0xC2B3490)->v) = f6;
    (((struct oC_float *)0xC2B3490)->v) = f7;
    (((struct o20_float *)0xC14A810)->v) = u5;
    (((struct o18_float *)0xC14A810)->v) = u4;
    if (((((struct o6_short *)0xC2B3190)->v)) != 0) {
        (((struct o1C_float *)0xC14A810)->v) = (f4 * (1.0f + 1.0f));
        (((struct o14_float *)0xC14A810)->v) = (f6 * (1.0f + 1.0f));
    } else {
        (((struct o1C_float *)0xC14A810)->v) = f4;
        (((struct o14_float *)0xC14A810)->v) = f6;
    }
    (((struct o0_float *)0xC2B3490)->v) = (((((struct o14_float *)0xC14A810)->v)) * ((((struct o0_float *)0xC14A810)->v)));
    u12 = (((struct o18_float *)0xC14A810)->v);
    u13 = (((struct o4_float *)0xC14A810)->v);
    (((struct o4_float *)0xC2B3490)->v) = (u12 * u13);
    u14 = (((struct o0_float *)0xC2B3490)->v);
    if (u14 > (u12 * u13)) {
        (((struct o8_float *)0xC14A810)->v) = u14;
    } else {
        (((struct o8_float *)0xC14A810)->v) = (u12 * u13);
    }
    nlMakeProjConvMat(0xC2B3410);
    t17 = (((struct o0_short *)0xC2B3190)->v);
    t20 = 0x0;
    if ((int)(int)f4 < 0) {
    } else {
        t20 = (int)f4;
        if ((int)(int)f4 >= (int)t17) {
            t20 = t17;
        }
    }
    t24 = 0x0;
    if ((int)(int)(f4 + f6) < 0) {
    } else {
        t24 = (int)(f4 + f6);
        if ((int)(int)(f4 + f6) >= (int)t17) {
            t24 = t17;
        }
    }
    t26 = (((struct o2_short *)0xC2B3190)->v);
    t29 = 0x0;
    if ((int)(int)f5 < 0) {
    } else {
        t29 = (int)f5;
        if ((int)(int)f5 >= (int)t26) {
            t29 = t26;
        }
    }
    t33 = 0x0;
    if ((int)(int)(f5 + f7) < 0) {
    } else {
        t33 = (int)(f5 + f7);
        if ((int)(int)(f5 + f7) >= (int)t26) {
            t33 = t26;
        }
    }
    t36 = (((struct o1C_int *)0xC2AED9C)->v);
    if (((((struct o0_int *)0xC2AED9C)->v)) == 1) {
        t38 = *(int *)0xC14A64C;
        if (t38 != 0) {
            if (t38 != 1) {
                if (t38 != 2) {
                    if (t38 != 3) {
                        u41 = 1.0f;
                        if (t38 != 4) {
                        } else {
                            u41 = (1.1659999f);
                        }
                        u45 = u41;
                    } else {
                        u45 = (1.1329999f);
                    }
                    u49 = u45;
                } else {
                    u49 = (1.0999999f);
                }
                u53 = u49;
            } else {
                u53 = (1.066f);
            }
            u57 = u53;
        } else {
            u57 = (1.033f);
        }
        t59 = (t24 - 1);
        t60 = (int)((float)(t33 - 1) * u57);
        if (t36 == 4) {
            t59 = t24;
            t60 = (int)((float)t33 * u57);
        }
        t70 = (kmSetPixelClipping(t20, (int)((float)t29 * u57), t59, t60));
    } else {
        t66 = (t24 - 1);
        t67 = (t33 - 1);
        if (t36 == 4) {
            t66 = t24;
            t67 = t33;
        }
        t70 = (kmSetPixelClipping(t20, t29, t66, t67));
    }
    return t70;
}
