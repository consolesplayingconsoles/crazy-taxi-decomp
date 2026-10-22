/* Straight-line functions with calls and guards (batch gen_nn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carAngularMotion(int a4);

int carAngularMotion(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u13;
    float u15;
    float u17;
    float u18;
    float u20;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t69;
    float u70;
    int t65;
    int t66;
    int t80;
    int t81;
    int t82;
    int t87;
    float u88;
    int t83;
    int t84;
    int t98;
    int t99;
    int t100;
    int t101;
    int t109;
    int t110;
    int t111;
    int t112;
    int t125;
    float u126;
    float u127;
    float u128;
    float u129;
    float u130;
    float u131;
    float u132;
    float u133;
    int t159;
    float u140;
    float u141;
    float u142;
    float u143;
    float u148;
    float u144;
    float u154;
    float u150;
    int t156;
    float u157;
    float u158;
    float u23;
    float u24;
    int t76;
    float u77;
    int t78;
    int t71;
    int t94;
    float u95;
    int t96;
    int t89;
    float u137;
    float u138;

    u0 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x44));
    u1 = *(float *)(((0x1A0 + a4) + 0x44));
    u2 = *(float *)((a4 + 0x138));
    u3 = *(float *)((a4 + 0x130));
    u4 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x44));
    u5 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x44));
    u6 = *(float *)((a4 + 0x134));
    u7 = *(float *)((a4 + 0x14C));
    u8 = (((u0 + u1) * (u3 + u2)) - ((u4 + u5) * (u6 - u2)));
    t9 = *(short *)((a4 + 0x198));
    u10 = ((u8 * u7) / 6.28317976f);
    *(unsigned short *)((a4 + 0x198)) = (int)((float)t9 + (u10 * 65535.0f));
    t11 = *(int *)((a4 + 0x3B0));
    if (t11 == 4) {
        u12 = *(float *)((a4 + 0x194));
        u13 = (((-u12) + 1.0f) * 0.099999994f);
        if ((((-u12) + 1.0f) * 0.099999994f) > 0.049999997f) {
            u13 = 0.049999997f;
        }
        u15 = u13;
        if (0.0f > u13) {
            u15 = 0.0f;
        }
        u23 = 0.829999983f;
        u24 = u15;
    } else {
        u17 = *(float *)((a4 + 0x194));
        u18 = (((-u17) + 1.0f) * 0.099999994f);
        if ((((-u17) + 1.0f) * 0.099999994f) > 0.0799999982f) {
            u18 = 0.0799999982f;
        }
        u20 = u18;
        if (0.0f > u18) {
            u20 = 0.0f;
        }
        u23 = 0.729999959f;
        u24 = u20;
    }
    t28 = *(short *)((a4 + 0x198));
    *(unsigned short *)((a4 + 0x198)) = (int)((float)t28 * (u24 + u23));
    t29 = *(short *)((a4 + 0x198));
    *(float *)((a4 + 0x4C)) = ((float)t29 * 9.58737946e-05f);
    t30 = *(int *)0xC1EE234;
    if (t30 == 1) {
        t31 = *(int *)((a4 + 0x54));
        if (t31 != 0) {
            t32 = *(int *)((a4 + 0x54));
            if (t32 == 3) {
                *(unsigned short *)((a4 + 0x198)) = 0x0;
                *(unsigned short *)((a4 + 0xF8)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x198)) = 0x0;
            *(unsigned short *)((a4 + 0xF8)) = 0x0;
        }
    }
    t46 = *(short *)((a4 + 0xF8));
    t47 = *(short *)((a4 + 0x198));
    t48 = *(short *)(((0x84 + a4) + 0x2));
    *(unsigned short *)(((0x84 + a4) + 0x2)) = (t48 + (t47 + t46));
    t49 = *(short *)(((0x84 + a4) + 0x0));
    t50 = *(short *)((a4 + 0xF6));
    t51 = *(short *)((a4 + 0x19C));
    *(unsigned short *)(((0x84 + a4) + 0x0)) = (t49 + (t51 + t50));
    t52 = *(short *)((a4 + 0xFA));
    t53 = *(short *)((a4 + 0x19A));
    t54 = *(short *)(((0x84 + a4) + 0x4));
    *(unsigned short *)(((0x84 + a4) + 0x4)) = (t54 + (t53 + t52));
    t55 = *(signed char *)0xC08ADAC;
    *(unsigned char *)(((0xF6 + a4) + 0x0)) = t55;
    t56 = *(signed char *)0xC08ADAD;
    *(unsigned char *)(((0xF6 + a4) + 0x1)) = t56;
    t57 = *(signed char *)0xC08ADAE;
    *(unsigned char *)(((0xF6 + a4) + 0x2)) = t57;
    t58 = *(signed char *)0xC08ADAF;
    *(unsigned char *)(((0xF6 + a4) + 0x3)) = t58;
    t59 = *(signed char *)0xC08ADB0;
    *(unsigned char *)(((0xF6 + a4) + 0x4)) = t59;
    t60 = *(signed char *)0xC08ADB1;
    *(unsigned char *)(((0xF6 + a4) + 0x5)) = t60;
    t61 = *(short *)(((0x84 + a4) + 0x0));
    if ((int)t61 > (int)0x2100) {
        *(unsigned short *)(((0x84 + a4) + 0x0)) = 0x2100;
        t62 = *(short *)((a4 + 0x19C));
        *(unsigned short *)((a4 + 0x19C)) = ((int)(-(_builtin_fabsf((float)t62) * 0.699999988f)) - 8);
        t63 = *(short *)((a4 + 0xF6));
        *(unsigned short *)((a4 + 0xF6)) = ((int)(-(_builtin_fabsf((float)(unsigned short)t63) * 0.699999988f)) + 0xFFF8);
        t76 = ((int)(-(_builtin_fabsf((float)(unsigned short)t63) * 0.699999988f)) + 0xFFF8);
        u77 = (-(_builtin_fabsf((float)(unsigned short)t63) * 0.699999988f));
        t78 = (int)(-(_builtin_fabsf((float)(unsigned short)t63) * 0.699999988f));
    } else {
        t64 = *(short *)(((0x84 + a4) + 0x0));
        t69 = t64;
        u70 = ((float)t29 * 9.58737946e-05f);
        if ((int)t64 < (int)0xFFFFDF00) {
            *(unsigned short *)(((0x84 + a4) + 0x0)) = 0xDF00;
            t65 = *(short *)((a4 + 0x19C));
            *(unsigned short *)((a4 + 0x19C)) = ((int)(_builtin_fabsf((float)t65) * 0.699999988f) + 0x8);
            t66 = *(short *)((a4 + 0xF6));
            *(unsigned short *)((a4 + 0xF6)) = ((int)(_builtin_fabsf((float)(unsigned short)t66) * 0.699999988f) + 0x8);
            t69 = ((int)(_builtin_fabsf((float)(unsigned short)t66) * 0.699999988f) + 0x8);
            u70 = (_builtin_fabsf((float)(unsigned short)t66) * 0.699999988f);
            t71 = (int)(_builtin_fabsf((float)(unsigned short)t66) * 0.699999988f);
        } else {
            t71 = t29;
        }
        t76 = t69;
        u77 = u70;
        t78 = t71;
    }
    t80 = *(short *)(((0x84 + a4) + 0x4));
    if ((int)t80 > (int)0x2700) {
        *(unsigned short *)(((0x84 + a4) + 0x4)) = 0x2700;
        t81 = *(short *)((a4 + 0x19A));
        *(unsigned short *)((a4 + 0x19A)) = ((int)(-(_builtin_fabsf((float)t81) * 0.649999976f)) - 8);
        t82 = *(short *)((a4 + 0xFA));
        *(unsigned short *)((a4 + 0xFA)) = ((int)(-(_builtin_fabsf((float)(unsigned short)t82) * 0.649999976f)) + 0xFFF8);
        t94 = ((int)(-(_builtin_fabsf((float)(unsigned short)t82) * 0.649999976f)) + 0xFFF8);
        u95 = (-(_builtin_fabsf((float)(unsigned short)t82) * 0.649999976f));
        t96 = (int)(-(_builtin_fabsf((float)(unsigned short)t82) * 0.649999976f));
    } else {
        t87 = 0x2700;
        u88 = u77;
        if ((int)t80 < (int)0xFFFFD900) {
            *(unsigned short *)(((0x84 + a4) + 0x4)) = 0xD900;
            t83 = *(short *)((a4 + 0x19A));
            *(unsigned short *)((a4 + 0x19A)) = ((int)(_builtin_fabsf((float)t83) * 0.649999976f) + 0x8);
            t84 = *(short *)((a4 + 0xFA));
            *(unsigned short *)((a4 + 0xFA)) = ((int)(_builtin_fabsf((float)(unsigned short)t84) * 0.649999976f) + 0x8);
            t87 = ((int)(_builtin_fabsf((float)(unsigned short)t84) * 0.649999976f) + 0x8);
            u88 = (_builtin_fabsf((float)(unsigned short)t84) * 0.649999976f);
            t89 = (int)(_builtin_fabsf((float)(unsigned short)t84) * 0.649999976f);
        } else {
            t89 = t78;
        }
        t94 = t87;
        u95 = u88;
        t96 = t89;
    }
    t98 = *(int *)0xC1EE234;
    if (t98 != 0) {
        t99 = *(short *)(((0x84 + a4) + 0x4));
        if ((int)t99 > (int)0x2000) {
            t100 = *(short *)((a4 + 0xFA));
            *(unsigned short *)((a4 + 0xFA)) = (t100 - 8);
        } else {
            if ((int)t99 < (int)0xFFFFE000) {
                t101 = *(short *)((a4 + 0xFA));
                *(unsigned short *)((a4 + 0xFA)) = (t101 + 0x8);
            }
        }
        t109 = *(short *)(((0x84 + a4) + 0x0));
        if ((int)t109 > (int)0x1C00) {
            t110 = *(short *)((a4 + 0xF6));
            *(unsigned short *)((a4 + 0xF6)) = (t110 - 8);
        } else {
            t111 = *(short *)(((0x84 + a4) + 0x0));
            if ((int)t111 < (int)0xFFFFE400) {
                t112 = *(short *)((a4 + 0xF6));
                *(unsigned short *)((a4 + 0xF6)) = (t112 + 0x8);
            }
        }
    }
    t125 = *(int *)((a4 + 0x3B0));
    if (t125 == 4) {
        u126 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x50));
        u127 = *(float *)(((0x1A0 + a4) + 0x50));
        u128 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x50));
        u129 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x50));
        u137 = ((u126 + u127) * 0.779999971f);
        u138 = ((u129 + u128) * 0.779999971f);
    } else {
        u130 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x50));
        u131 = *(float *)(((0x1A0 + a4) + 0x50));
        u132 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x50));
        u133 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x50));
        u137 = (u130 + u131);
        u138 = (u132 + u133);
    }
    t159 = 0x50;
    if ((u137 + u138) != 0.0f) {
        u140 = *(float *)((a4 + 0x15C));
        u141 = *(float *)((a4 + 0x128));
        u142 = (u140 * u140);
        u143 = (u142 * u141);
        u148 = ((u143 * 2.14999986f) / (u137 + u138));
        if (!(0.0f > ((u143 * 2.14999986f) / (u137 + u138)))) {
            u144 = ((u143 * 2.14999986f) / (u137 + u138));
            if (75.0f > ((u143 * 2.14999986f) / (u137 + u138))) {
                u144 = 75.0f;
            }
            u148 = u144;
        }
        u154 = u148;
        if (0.0f > u148) {
            u150 = u148;
            if (u148 > -75.0f) {
                u150 = -75.0f;
            }
            u154 = u150;
        }
        t156 = *(short *)((a4 + 0xF4));
        u157 = *(float *)(((0x15C + a4) + 0x0));
        u158 = (u157 / (u154 * 6.28317976f));
        *(unsigned short *)((a4 + 0xF4)) = (t156 + (int)(u158 * 65535.0f));
        t159 = 0xF4;
    }
    return t159;
}
