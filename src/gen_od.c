/* Straight-line functions with calls and guards (batch gen_od): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMakeProjConvMat(int);
int kmSetPixelClipping(int, int, int, int);
int nlSetWindowSize(float f4, float f5, float f6, float f7);

int nlSetWindowSize(float f4, float f5, float f6, float f7)
{
    float u4;
    float u5;
    float u12;
    float u13;
    float u14;
    int t17;
    int t20;
    int t18;
    int t24;
    int t22;
    int t26;
    int t29;
    int t27;
    int t33;
    int t31;
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
    if (((*(short *)0xC2B3196) != 0) && (t1 = *(short *)0xC2B3192, (int)(t1 << 1) <= (int)0x1E0)) {
        u4 = (f7 * (1.0f + 1.0f));
        u5 = (f5 * (1.0f + 1.0f));
    }
    *(float *)0xC2B34A0 = f4;
    *(float *)0xC2B34A4 = f5;
    *(float *)0xC2B3498 = f6;
    *(float *)0xC2B349C = f7;
    *(float *)0xC14A830 = u5;
    *(float *)0xC14A828 = u4;
    if ((*(short *)0xC2B3196) != 0) {
        *(float *)0xC14A82C = (f4 * (1.0f + 1.0f));
        *(float *)0xC14A824 = (f6 * (1.0f + 1.0f));
    } else {
        *(float *)0xC14A82C = f4;
        *(float *)0xC14A824 = f6;
    }
    *(float *)0xC2B3490 = ((*(float *)0xC14A824) * (*(float *)0xC14A810));
    u12 = *(float *)0xC14A828;
    u13 = *(float *)0xC14A814;
    *(float *)0xC2B3494 = (u12 * u13);
    u14 = *(float *)0xC2B3490;
    if (u14 > (u12 * u13)) {
        *(float *)0xC14A818 = u14;
    } else {
        *(float *)0xC14A818 = (u12 * u13);
    }
    nlMakeProjConvMat(0xC2B3410);
    t17 = *(short *)0xC2B3190;
    t20 = 0x0;
    if ((int)(int)f4 < 0) {
    } else {
        t18 = (int)f4;
        if ((int)(int)f4 >= (int)t17) {
            t18 = t17;
        }
        t20 = t18;
    }
    t24 = 0x0;
    if ((int)(int)(f4 + f6) < 0) {
    } else {
        t22 = (int)(f4 + f6);
        if ((int)(int)(f4 + f6) >= (int)t17) {
            t22 = t17;
        }
        t24 = t22;
    }
    t26 = *(short *)0xC2B3192;
    t29 = 0x0;
    if ((int)(int)f5 < 0) {
    } else {
        t27 = (int)f5;
        if ((int)(int)f5 >= (int)t26) {
            t27 = t26;
        }
        t29 = t27;
    }
    t33 = 0x0;
    if ((int)(int)(f5 + f7) < 0) {
    } else {
        t31 = (int)(f5 + f7);
        if ((int)(int)(f5 + f7) >= (int)t26) {
            t31 = t26;
        }
        t33 = t31;
    }
    t36 = *(int *)0xC2AEDB8;
    if ((*(int *)0xC2AED9C) == 1) {
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
