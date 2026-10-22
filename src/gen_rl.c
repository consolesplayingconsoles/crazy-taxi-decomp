/* Straight-line functions with calls and guards (batch gen_rl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlFloor(float);
float MakeCollisionCellList(int a4, int a5);

float MakeCollisionCellList(int a4, int a5)
{
    float u0;
    float u1;
    float t2;
    float u3;
    float u4;
    float t5;
    float u6;
    float u7;
    float u8;
    float t9;
    float u10;
    float u11;
    float u12;
    float t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    float u21;
    float u22;
    float u23;
    int t25;
    float u26;
    float u27;
    int t31;
    int t29;
    float u33;
    float u34;
    int t37;
    int t35;
    int t41;
    int t39;
    int t45;
    int t43;
    float u47;
    float u48;
    float u55;
    float u56;
    int t65;
    int t66;
    int t67;
    int t68;
    float u69;
    float u70;
    float u71;
    float u72;
    int t73;
    int t74;
    float u75;
    float u76;
    float u77;
    float u78;
    float u79;
    float u80;
    int t86;
    int t95;
    int t96;
    int t100;
    int t101;
    int t17;
    float u138;
    float u114;
    int t58;
    int t59;
    float u62;
    float u63;
    int t49;
    int t50;
    float u53;
    float u84;
    int t88;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)0xC26E410;
    t2 = nlFloor((u0 / u1));
    u3 = *(float *)0xC26E410;
    u4 = *(float *)((a4 + 0x8));
    t5 = nlFloor((u4 / u3));
    u6 = *(float *)((a5 + 0x0));
    u7 = *(float *)((a4 + 0x0));
    u8 = *(float *)0xC26E410;
    t9 = nlFloor(((u7 + u6) / u8));
    u10 = *(float *)((a4 + 0x8));
    u11 = *(float *)((a5 + 0x8));
    u12 = *(float *)0xC26E410;
    t13 = nlFloor(((u10 + u11) / u12));
    t14 = *(int *)0xC26E3F8;
    t15 = *(int *)0xC26E404;
    t16 = *(int *)0xC26E3F4;
    if (((int)((t15 * ((int)t5 - t14)) + ((int)t2 - t16)) >= 0) && (t17 = *(int *)0xC26E40C, (int)((t15 * ((int)t5 - t14)) + ((int)t2 - t16)) < (int)t17)) {
        if (((int)(t9 - (float)(int)t2) == 0) && ((int)(t13 - (float)(int)t5) == 0)) {
            t18 = *(int *)0xC26E3F0;
            t19 = *(int *)(((((t15 * ((int)t5 - t14)) + ((int)t2 - t16)) << 2) + t18));
            *(unsigned int *)0xC26E3A0 = t19;
            *(float *)0xC26E3C8 = 3.40282347e+38f;
            u114 = (t13 - (float)(int)t5);
        } else {
            t20 = *(int *)0xC26E3F4;
            u21 = *(float *)0xC26E410;
            u22 = ((float)(t20 + ((int)t2 - t16)) * u21);
            u23 = (-u21);
            if ((int)(int)(t9 - (float)(int)t2) > 0) {
                u22 = (((float)(t20 + ((int)t2 - t16)) * u21) + u21);
                u23 = u21;
            }
            t25 = *(int *)0xC26E3F8;
            u26 = (-u21);
            u27 = ((float)(t25 + ((int)t5 - t14)) * u21);
            if ((int)(int)(t13 - (float)(int)t5) > 0) {
                u26 = u21;
                u27 = (((float)(t25 + ((int)t5 - t14)) * u21) + u21);
            }
            if ((int)(t13 - (float)(int)t5) == 0) {
                t31 = 0x1;
                if ((int)(int)(t9 - (float)(int)t2) > 0) {
                } else {
                    t29 = 0x0;
                    if ((int)(int)(t9 - (float)(int)t2) < 0) {
                        t29 = 0xFFFFFFFF;
                    }
                    t31 = t29;
                }
                u33 = *(float *)((a4 + 0x0));
                u34 = *(float *)((a5 + 0x0));
                t58 = t31;
                t59 = (int)(t13 - (float)(int)t5);
                u62 = ((u22 - u33) / u34);
                u63 = 3.40282347e+38f;
            } else {
                if ((int)(t9 - (float)(int)t2) == 0) {
                    t37 = 0x1;
                    if ((int)(int)(t13 - (float)(int)t5) > 0) {
                    } else {
                        t35 = 0x0;
                        if ((int)(int)(t13 - (float)(int)t5) < 0) {
                            t35 = 0xFFFFFFFF;
                        }
                        t37 = t35;
                    }
                    t49 = (int)(t9 - (float)(int)t2);
                    t50 = t37;
                    u53 = 3.40282347e+38f;
                } else {
                    t41 = 0x1;
                    if ((int)(int)(t9 - (float)(int)t2) > 0) {
                    } else {
                        t39 = 0x0;
                        if ((int)(int)(t9 - (float)(int)t2) < 0) {
                            t39 = 0xFFFFFFFF;
                        }
                        t41 = t39;
                    }
                    t45 = 0x1;
                    if ((int)(int)(t13 - (float)(int)t5) > 0) {
                    } else {
                        t43 = 0x0;
                        if ((int)(int)(t13 - (float)(int)t5) < 0) {
                            t43 = 0xFFFFFFFF;
                        }
                        t45 = t43;
                    }
                    u47 = *(float *)((a4 + 0x0));
                    u48 = *(float *)((a5 + 0x0));
                    t49 = t41;
                    t50 = t45;
                    u53 = ((u22 - u47) / u48);
                }
                u55 = *(float *)((a4 + 0x8));
                u56 = *(float *)((a5 + 0x8));
                t58 = t49;
                t59 = t50;
                u62 = u53;
                u63 = ((u27 - u55) / u56);
            }
            t65 = ((t15 * ((int)t5 - t14)) + ((int)t2 - t16));
            t66 = 0x0;
            t67 = ((int)t2 - t16);
            t68 = ((int)t5 - t14);
            u69 = u62;
            u70 = u22;
            u71 = u63;
            u72 = u27;
            for (;;) {
                t65 = (t65 << 2);
                t73 = *(int *)0xC26E3F0;
                t74 = *(int *)((t65 + t73));
                *(unsigned int *)(((0xC26E3A0 + (t66 << 2)) + 0x0)) = t74;
                if (u71 > u69) {
                    u70 = (u70 + u23);
                    u75 = *(float *)((a4 + 0x0));
                    u76 = *(float *)((a5 + 0x0));
                    u77 = u69;
                    u69 = (u70 - u75);
                    u69 = (u69 / u76);
                    t67 = (t67 + t58);
                    u84 = u77;
                } else {
                    u72 = (u72 + u26);
                    u78 = *(float *)((a4 + 0x8));
                    t68 = (t68 + t59);
                    u79 = *(float *)((a5 + 0x8));
                    u80 = u71;
                    u71 = (u72 - u78);
                    u71 = (u71 / u79);
                    u84 = u80;
                }
                if (!(u84 > 1.0f)) {
                    *(float *)((0xC26E3C8 + (t66 << 2))) = u84;
                    t86 = *(int *)0xC26E404;
                    t65 = t86;
                    t65 = (t65 * t68);
                    t65 = (t65 + t67);
                    if (((int)t65 >= 0) && (t88 = *(int *)0xC26E40C, (int)t65 < (int)t88)) {
                        t66 = (t66 + 0x1);
                        if ((int)t66 >= (int)0xA) {
                            t95 = *(int *)0xC1EE234;
                            if (t95 == 0) {
                                *(float *)((0xC26E3C8 + ((t66 - 1) << 2))) = 3.40282347e+38f;
                                return u21;
                            }
                            *(float *)0xC26E3EC = 3.40282347e+38f;
                            return u21;
                        }
                        continue;
                    }
                    break;
                }
                *(float *)((0xC26E3C8 + (t66 << 2))) = 3.40282347e+38f;
                t96 = *(int *)0xC1EE234;
                if (t96 == 0) {
                    *(float *)((0xC26E3C8 + ((t66 - 1) << 2))) = 3.40282347e+38f;
                    return u21;
                }
                *(float *)0xC26E3EC = 3.40282347e+38f;
                return u21;
            }
            if ((int)t66 < (int)0x9) {
                *(unsigned int *)(((t66 << 2) + 0xC26E3A4)) = 0x0;
            }
            *(float *)((0xC26E3C8 + (t66 << 2))) = 3.40282347e+38f;
            t100 = *(int *)0xC1EE234;
            t101 = 0x24;
            if (t100 == 0) {
                t101 = ((t66 - 1) << 2);
            }
            *(float *)((0xC26E3C8 + t101)) = 3.40282347e+38f;
            u114 = u21;
        }
        u138 = u114;
    } else {
        *(unsigned int *)0xC26E3A0 = 0x0;
        u138 = (t13 - (float)(int)t5);
    }
    return u138;
}
