/* Straight-line functions with calls and guards (batch gen_zd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carAngularMotion(int a4);
struct o128_float { char p[0x128]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o134_float { char p[0x134]; float v; };
struct o138_float { char p[0x138]; float v; };
struct o14C_float { char p[0x14C]; float v; };
struct o15C_float { char p[0x15C]; float v; };
struct o194_float { char p[0x194]; float v; };
struct o198_short { char p[0x198]; short v; };
struct o198_ushort { char p[0x198]; unsigned short v; };
struct o19A_short { char p[0x19A]; short v; };
struct o19A_ushort { char p[0x19A]; unsigned short v; };
struct o19C_short { char p[0x19C]; short v; };
struct o19C_ushort { char p[0x19C]; unsigned short v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o84_short { char p[0x84]; short v; };
struct o84_ushort { char p[0x84]; unsigned short v; };
struct oF4_short { char p[0xF4]; short v; };
struct oF4_ushort { char p[0xF4]; unsigned short v; };
struct oF6_short { char p[0xF6]; short v; };
struct oF6_uchar { char p[0xF6]; unsigned char v; };
struct oF6_ushort { char p[0xF6]; unsigned short v; };
struct oF8_short { char p[0xF8]; short v; };
struct oF8_ushort { char p[0xF8]; unsigned short v; };
struct oFA_short { char p[0xFA]; short v; };
struct oFA_ushort { char p[0xFA]; unsigned short v; };


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

    u2 = (((struct o138_float *)(a4))->v);
    (((struct o198_ushort *)(a4))->v) = (int)((float)((((struct o198_short *)(a4))->v)) + ((((((((((((struct o44_float *)((0x84 + (0x1A0 + a4))))->v)) + ((((struct o44_float *)((0x1A0 + a4)))->v))) * (((((struct o130_float *)(a4))->v)) + u2)) - ((((((struct o44_float *)((0x18C + (0x1A0 + a4))))->v)) + ((((struct o44_float *)((0x108 + (0x1A0 + a4))))->v))) * (((((struct o134_float *)(a4))->v)) - u2)))) * ((((struct o14C_float *)(a4))->v))) / 6.28317976f)) * 65535.0f));
    if (((((struct o3B0_int *)(a4))->v)) == 4) {
        u12 = (((struct o194_float *)(a4))->v);
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
        u17 = (((struct o194_float *)(a4))->v);
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
    (((struct o198_ushort *)(a4))->v) = (int)((float)((((struct o198_short *)(a4))->v)) * (u24 + u23));
    t29 = (((struct o198_short *)(a4))->v);
    (((struct o4C_float *)(a4))->v) = ((float)t29 * 9.58737946e-05f);
    if (((*(int *)0xC1EE234) == 1) && ((t31 = (((struct o54_int *)(a4))->v), t31 == 0) || (t32 = (((struct o54_int *)(a4))->v), t32 == 3))) {
        (((struct o198_ushort *)(a4))->v) = 0x0;
        (((struct oF8_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned short *)(((0x84 + a4) + 0x2)) = ((*(short *)(((0x84 + a4) + 0x2))) + (((((struct o198_short *)(a4))->v)) + ((((struct oF8_short *)(a4))->v))));
    (((struct o84_ushort *)(a4))->v) = (((((struct o84_short *)(a4))->v)) + (((((struct o19C_short *)(a4))->v)) + ((((struct oF6_short *)(a4))->v))));
    *(unsigned short *)(((0x84 + a4) + 0x4)) = ((*(short *)(((0x84 + a4) + 0x4))) + (((((struct o19A_short *)(a4))->v)) + ((((struct oFA_short *)(a4))->v))));
    (((struct oF6_uchar *)(a4))->v) = (*(signed char *)0xC08ADAC);
    *(unsigned char *)(((0xF6 + a4) + 0x1)) = (*(signed char *)0xC08ADAD);
    *(unsigned char *)(((0xF6 + a4) + 0x2)) = (*(signed char *)0xC08ADAE);
    *(unsigned char *)(((0xF6 + a4) + 0x3)) = (*(signed char *)0xC08ADAF);
    *(unsigned char *)(((0xF6 + a4) + 0x4)) = (*(signed char *)0xC08ADB0);
    *(unsigned char *)(((0xF6 + a4) + 0x5)) = (*(signed char *)0xC08ADB1);
    if ((int)((((struct o84_short *)(a4))->v)) > (int)0x2100) {
        (((struct o84_ushort *)(a4))->v) = 0x2100;
        (((struct o19C_ushort *)(a4))->v) = ((int)(-(_builtin_fabsf((float)((((struct o19C_short *)(a4))->v))) * 0.699999988f)) - 8);
        t55 = (((struct oF6_short *)(a4))->v);
        (((struct oF6_ushort *)(a4))->v) = ((int)(-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f)) + 0xFFF8);
        t68 = ((int)(-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f)) + 0xFFF8);
        u69 = (-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f));
        t70 = (int)(-(_builtin_fabsf((float)(unsigned short)t55) * 0.699999988f));
    } else {
        t56 = (((struct o84_short *)(a4))->v);
        t61 = t56;
        u62 = ((float)t29 * 9.58737946e-05f);
        if ((int)t56 < (int)0xFFFFDF00) {
            (((struct o84_ushort *)(a4))->v) = 0xDF00;
            (((struct o19C_ushort *)(a4))->v) = ((int)(_builtin_fabsf((float)((((struct o19C_short *)(a4))->v))) * 0.699999988f) + 0x8);
            t58 = (((struct oF6_short *)(a4))->v);
            (((struct oF6_ushort *)(a4))->v) = ((int)(_builtin_fabsf((float)(unsigned short)t58) * 0.699999988f) + 0x8);
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
        (((struct o19A_ushort *)(a4))->v) = ((int)(-(_builtin_fabsf((float)((((struct o19A_short *)(a4))->v))) * 0.649999976f)) - 8);
        t74 = (((struct oFA_short *)(a4))->v);
        (((struct oFA_ushort *)(a4))->v) = ((int)(-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f)) + 0xFFF8);
        t86 = ((int)(-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f)) + 0xFFF8);
        u87 = (-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f));
        t88 = (int)(-(_builtin_fabsf((float)(unsigned short)t74) * 0.649999976f));
    } else {
        t79 = 0x2700;
        u80 = u69;
        if ((int)t72 < (int)0xFFFFD900) {
            *(unsigned short *)(((0x84 + a4) + 0x4)) = 0xD900;
            (((struct o19A_ushort *)(a4))->v) = ((int)(_builtin_fabsf((float)((((struct o19A_short *)(a4))->v))) * 0.649999976f) + 0x8);
            t76 = (((struct oFA_short *)(a4))->v);
            (((struct oFA_ushort *)(a4))->v) = ((int)(_builtin_fabsf((float)(unsigned short)t76) * 0.649999976f) + 0x8);
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
            (((struct oFA_ushort *)(a4))->v) = (((((struct oFA_short *)(a4))->v)) - 8);
        } else {
            if ((int)t92 < (int)0xFFFFE000) {
                (((struct oFA_ushort *)(a4))->v) = (((((struct oFA_short *)(a4))->v)) + 0x8);
            }
        }
        if ((int)((((struct o84_short *)(a4))->v)) > (int)0x1C00) {
            (((struct oF6_ushort *)(a4))->v) = (((((struct oF6_short *)(a4))->v)) - 8);
        } else {
            if ((int)((((struct o84_short *)(a4))->v)) < (int)0xFFFFE400) {
                (((struct oF6_ushort *)(a4))->v) = (((((struct oF6_short *)(a4))->v)) + 0x8);
            }
        }
    }
    if (((((struct o3B0_int *)(a4))->v)) == 4) {
        u131 = ((((((struct o50_float *)((0x84 + (0x1A0 + a4))))->v)) + ((((struct o50_float *)((0x1A0 + a4)))->v))) * 0.779999971f);
        u132 = ((((((struct o50_float *)((0x18C + (0x1A0 + a4))))->v)) + ((((struct o50_float *)((0x108 + (0x1A0 + a4))))->v))) * 0.779999971f);
    } else {
        u131 = (((((struct o50_float *)((0x84 + (0x1A0 + a4))))->v)) + ((((struct o50_float *)((0x1A0 + a4)))->v)));
        u132 = (((((struct o50_float *)((0x18C + (0x1A0 + a4))))->v)) + ((((struct o50_float *)((0x108 + (0x1A0 + a4))))->v)));
    }
    t147 = 0x50;
    if ((u131 + u132) != 0.0f) {
        u134 = (((struct o15C_float *)(a4))->v);
        u137 = (((u134 * u134)) * ((((struct o128_float *)(a4))->v)));
        u140 = ((u137 * 2.14999986f) / (u131 + u132));
        if (!(0.0f > ((u137 * 2.14999986f) / (u131 + u132))) && (75.0f > ((u137 * 2.14999986f) / (u131 + u132)))) {
            u140 = 75.0f;
        }
        u143 = u140;
        if ((0.0f > u140) && (u140 > -75.0f)) {
            u143 = -75.0f;
        }
        (((struct oF4_ushort *)(a4))->v) = (((((struct oF4_short *)(a4))->v)) + (int)(((((((struct o15C_float *)(a4))->v)) / (u143 * 6.28317976f))) * 65535.0f));
        t147 = 0xF4;
    }
    return t147;
}
