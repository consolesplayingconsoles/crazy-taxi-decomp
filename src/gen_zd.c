/* Straight-line functions with calls and guards (batch gen_zd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carAngularMotion(int a4);

int carAngularMotion(int a4)
{
    float u2;
    float u12;
    float u13;
    float u15;
    float u17;
    float u18;
    float u20;
    int t29;
    int t55;
    int t56;
    int t61;
    float u62;
    int t58;
    int t72;
    int t74;
    int t79;
    float u80;
    int t76;
    int t92;
    int t147;
    float u134;
    float u137;
    float u140;
    float u143;
    float u23;
    float u24;
    int t31;
    int t32;
    int t68;
    float u69;
    int t70;
    int t63;
    int t86;
    float u87;
    int t88;
    int t81;
    float u131;
    float u132;

    u2 = *(float *)((a4 + 0x138));
    *(unsigned short *)((a4 + 0x198)) = (int)((float)(*(short *)((a4 + 0x198))) + (((((((((*(float *)(((0x84 + (0x1A0 + a4)) + 0x44))) + (*(float *)(((0x1A0 + a4) + 0x44)))) * ((*(float *)((a4 + 0x130))) + u2)) - (((*(float *)(((0x18C + (0x1A0 + a4)) + 0x44))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x44)))) * ((*(float *)((a4 + 0x134))) - u2)))) * (*(float *)((a4 + 0x14C)))) / 6.28317976f)) * 65535.0f));
    if ((*(int *)((a4 + 0x3B0))) == 4) {
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
    *(unsigned short *)((a4 + 0x198)) = (int)((float)(*(short *)((a4 + 0x198))) * (u24 + u23));
    t29 = *(short *)((a4 + 0x198));
    *(float *)((a4 + 0x4C)) = ((float)t29 * 9.58737946e-05f);
    if (((*(int *)0xC1EE234) == 1) && ((t31 = *(int *)((a4 + 0x54)), t31 == 0) || (t32 = *(int *)((a4 + 0x54)), t32 == 3))) {
        *(unsigned short *)((a4 + 0x198)) = 0x0;
        *(unsigned short *)((a4 + 0xF8)) = 0x0;
    }
    *(unsigned short *)(((0x84 + a4) + 0x2)) = ((*(short *)(((0x84 + a4) + 0x2))) + ((*(short *)((a4 + 0x198))) + (*(short *)((a4 + 0xF8)))));
    *(unsigned short *)(((0x84 + a4) + 0x0)) = ((*(short *)(((0x84 + a4) + 0x0))) + ((*(short *)((a4 + 0x19C))) + (*(short *)((a4 + 0xF6)))));
    *(unsigned short *)(((0x84 + a4) + 0x4)) = ((*(short *)(((0x84 + a4) + 0x4))) + ((*(short *)((a4 + 0x19A))) + (*(short *)((a4 + 0xFA)))));
    *(unsigned char *)(((0xF6 + a4) + 0x0)) = (*(signed char *)0xC08ADAC);
    *(unsigned char *)(((0xF6 + a4) + 0x1)) = (*(signed char *)0xC08ADAD);
    *(unsigned char *)(((0xF6 + a4) + 0x2)) = (*(signed char *)0xC08ADAE);
    *(unsigned char *)(((0xF6 + a4) + 0x3)) = (*(signed char *)0xC08ADAF);
    *(unsigned char *)(((0xF6 + a4) + 0x4)) = (*(signed char *)0xC08ADB0);
    *(unsigned char *)(((0xF6 + a4) + 0x5)) = (*(signed char *)0xC08ADB1);
    if ((int)(*(short *)(((0x84 + a4) + 0x0))) > (int)0x2100) {
        *(unsigned short *)(((0x84 + a4) + 0x0)) = 0x2100;
        *(unsigned short *)((a4 + 0x19C)) = ((int)(-(_builtin_fabsf((float)(*(short *)((a4 + 0x19C)))) * 0.699999988f)) - 8);
        t55 = *(short *)((a4 + 0xF6));
        *(unsigned short *)((a4 + 0xF6)) = ((int)(-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f)) + 0xFFF8);
        t68 = ((int)(-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f)) + 0xFFF8);
        u69 = (-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f));
        t70 = (int)(-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f));
    } else {
        t56 = *(short *)(((0x84 + a4) + 0x0));
        t61 = t56;
        u62 = ((float)t29 * 9.58737946e-05f);
        if ((int)t56 < (int)0xFFFFDF00) {
            *(unsigned short *)(((0x84 + a4) + 0x0)) = 0xDF00;
            *(unsigned short *)((a4 + 0x19C)) = ((int)(_builtin_fabsf((float)(*(short *)((a4 + 0x19C)))) * 0.699999988f) + 0x8);
            t58 = *(short *)((a4 + 0xF6));
            *(unsigned short *)((a4 + 0xF6)) = ((int)(_builtin_fabsf((float)(unsigned short)t58) * 0.699999988f) + 0x8);
            t61 = ((int)(_builtin_fabsf((float)(unsigned short)t58) * 0.699999988f) + 0x8);
            u62 = (_builtin_fabsf((float)(unsigned short)t58) * 0.699999988f);
            t63 = (int)(_builtin_fabsf((float)(unsigned short)t58) * 0.699999988f);
        } else {
            t63 = t29;
        }
        t68 = t61;
        u69 = u62;
        t70 = t63;
    }
    t72 = *(short *)(((0x84 + a4) + 0x4));
    if ((int)t72 > (int)0x2700) {
        *(unsigned short *)(((0x84 + a4) + 0x4)) = 0x2700;
        *(unsigned short *)((a4 + 0x19A)) = ((int)(-(_builtin_fabsf((float)(*(short *)((a4 + 0x19A)))) * 0.649999976f)) - 8);
        t74 = *(short *)((a4 + 0xFA));
        *(unsigned short *)((a4 + 0xFA)) = ((int)(-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f)) + 0xFFF8);
        t86 = ((int)(-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f)) + 0xFFF8);
        u87 = (-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f));
        t88 = (int)(-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f));
    } else {
        t79 = 0x2700;
        u80 = u69;
        if ((int)t72 < (int)0xFFFFD900) {
            *(unsigned short *)(((0x84 + a4) + 0x4)) = 0xD900;
            *(unsigned short *)((a4 + 0x19A)) = ((int)(_builtin_fabsf((float)(*(short *)((a4 + 0x19A)))) * 0.649999976f) + 0x8);
            t76 = *(short *)((a4 + 0xFA));
            *(unsigned short *)((a4 + 0xFA)) = ((int)(_builtin_fabsf((float)(unsigned short)t76) * 0.649999976f) + 0x8);
            t79 = ((int)(_builtin_fabsf((float)(unsigned short)t76) * 0.649999976f) + 0x8);
            u80 = (_builtin_fabsf((float)(unsigned short)t76) * 0.649999976f);
            t81 = (int)(_builtin_fabsf((float)(unsigned short)t76) * 0.649999976f);
        } else {
            t81 = t70;
        }
        t86 = t79;
        u87 = u80;
        t88 = t81;
    }
    if ((*(int *)0xC1EE234) != 0) {
        t92 = *(short *)(((0x84 + a4) + 0x4));
        if ((int)t92 > (int)0x2000) {
            *(unsigned short *)((a4 + 0xFA)) = ((*(short *)((a4 + 0xFA))) - 8);
        } else {
            if ((int)t92 < (int)0xFFFFE000) {
                *(unsigned short *)((a4 + 0xFA)) = ((*(short *)((a4 + 0xFA))) + 0x8);
            }
        }
        if ((int)(*(short *)(((0x84 + a4) + 0x0))) > (int)0x1C00) {
            *(unsigned short *)((a4 + 0xF6)) = ((*(short *)((a4 + 0xF6))) - 8);
        } else {
            if ((int)(*(short *)(((0x84 + a4) + 0x0))) < (int)0xFFFFE400) {
                *(unsigned short *)((a4 + 0xF6)) = ((*(short *)((a4 + 0xF6))) + 0x8);
            }
        }
    }
    if ((*(int *)((a4 + 0x3B0))) == 4) {
        u131 = (((*(float *)(((0x84 + (0x1A0 + a4)) + 0x50))) + (*(float *)(((0x1A0 + a4) + 0x50)))) * 0.779999971f);
        u132 = (((*(float *)(((0x18C + (0x1A0 + a4)) + 0x50))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x50)))) * 0.779999971f);
    } else {
        u131 = ((*(float *)(((0x84 + (0x1A0 + a4)) + 0x50))) + (*(float *)(((0x1A0 + a4) + 0x50))));
        u132 = ((*(float *)(((0x18C + (0x1A0 + a4)) + 0x50))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x50))));
    }
    t147 = 0x50;
    if ((u131 + u132) != 0.0f) {
        u134 = *(float *)((a4 + 0x15C));
        u137 = (((u134 * u134)) * (*(float *)((a4 + 0x128))));
        u140 = ((u137 * 2.14999986f) / (u131 + u132));
        if (!(0.0f > ((u137 * 2.14999986f) / (u131 + u132))) && (75.0f > ((u137 * 2.14999986f) / (u131 + u132)))) {
            u140 = 75.0f;
        }
        u143 = u140;
        if ((0.0f > u140) && (u140 > -75.0f)) {
            u143 = -75.0f;
        }
        *(unsigned short *)((a4 + 0xF4)) = ((*(short *)((a4 + 0xF4))) + (int)((((*(float *)(((0x15C + a4) + 0x0))) / (u143 * 6.28317976f))) * 65535.0f));
        t147 = 0xF4;
    }
    return t147;
}
