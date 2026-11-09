/* Straight-line functions with calls and guards (batch gen_ty): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitEffect(void);
int InitSpark(void);
int SetColliObj(int, int);
int carCalcInertia(int);
int carInitDriveSplit(int);
int getReplayPoint(int, int, int, int, int);
int init_CarSound(void);
int init_CarMain(void);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_short { char p[0x32]; short v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int init_CarMain(void)
{
    int t21;
    int t22;
    int t35;
    int t60;
    int t124;
    int t149;
    int t219;
    int t223;
    int t224;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t237;
    float u13;
    int t23;
    int t25;
    float u31;
    int t52;
    float u72;
    float u58;
    float u66;
    int t141;
    float u161;
    float u147;
    float u155;
    float u216;
    int t220;
    int t221;
    int t222;
    float u225;

    (((struct o2C_uint *)0xC0DAFD4)->v) = 0x0;
    (((struct o0_uint *)0xC0DAEC0)->v) = 0x0;
    (((struct o4_uint *)0xC0DAEC0)->v) = 0x0;
    (((struct o0_uint *)0xC1790C8)->v) = 0x1;
    (((struct o0_uint *)0xC179120)->v) = 0x3;
    (((struct o4_uint *)0xC179120)->v) = 0x0;
    (((struct o8_uint *)0xC179120)->v) = 0x2;
    (((struct oC_uint *)0xC179120)->v) = 0x0;
    (((struct o10_uint *)0xC179120)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC179120)->v) = 0x0;
    if ((int)((((struct o0_int *)0xC179488)->v)) < (int)0x4) {
        (((struct o18_uint *)0xC179120)->v) = (*(int *)((0xC0DAFD8 + (((((struct o0_int *)0xC179488)->v)) << 2))));
        (((struct o1C_uint *)0xC179120)->v) = (*(int *)((0xC0DAFEC + (((((struct o0_int *)0xC179488)->v)) << 2))));
        (((struct o20_uint *)0xC179120)->v) = (*(int *)((0xC0DAFC4 + (((((struct o0_int *)0xC179488)->v)) << 2))));
        (((struct o30_float *)0xC179488)->v) = 0.179999992f;
        (((struct o34_float *)0xC179488)->v) = 0.174999997f;
        (((struct o28_float *)0xC179488)->v) = 23.0f;
        (((struct o2C_float *)0xC179488)->v) = 24.0f;
        (((struct o38_float *)0xC179488)->v) = 4.19999981f;
        u13 = 3.5f;
    } else {
        (((struct o18_uint *)0xC179120)->v) = ((((struct o14_int *)0xC0DAFD4)->v));
        (((struct o1C_uint *)0xC179120)->v) = ((((struct o28_int *)0xC0DAFD4)->v));
        (((struct o20_uint *)0xC179120)->v) = ((((struct o0_int *)0xC0DAFD4)->v));
        (((struct o30_float *)0xC179488)->v) = 0.099999994f;
        (((struct o34_float *)0xC179488)->v) = 0.0949999988f;
        (((struct o28_float *)0xC179488)->v) = 27.0f;
        (((struct o2C_float *)0xC179488)->v) = 26.0f;
        (((struct o38_float *)0xC179488)->v) = 2.79999995f;
        u13 = 2.29999995f;
    }
    (((struct o3C_float *)0xC179488)->v) = u13;
    *(float *)0xC1794C8 = 0.0f;
    (((struct o30_uchar *)0xC179120)->v) = (*(signed char *)0xC08ADAC);
    (((struct o31_uchar *)0xC179120)->v) = (*(signed char *)0xC08ADAD);
    (((struct o32_uchar *)0xC179120)->v) = (*(signed char *)0xC08ADAE);
    (((struct o33_uchar *)0xC179120)->v) = (*(signed char *)0xC08ADAF);
    (((struct o34_uchar *)0xC179120)->v) = (*(signed char *)0xC08ADB0);
    (((struct o35_uchar *)0xC179120)->v) = (*(signed char *)0xC08ADB1);
    t21 = (((struct o0_int *)0xC1EE20C)->v);
    t22 = (((struct o4_int *)0xC179488)->v);
    if (t21 != 0) {
        if (t21 == 1) {
            if (t22 != 1) {
                (((struct o24_float *)0xC179120)->v) = 288.459991f;
                (((struct o28_float *)0xC179120)->v) = 2304.11987f;
                (((struct o2C_float *)0xC179120)->v) = 4535.48975f;
                (((struct o32_ushort *)0xC179120)->v) = 0x349F;
                (((struct o30_ushort *)0xC179120)->v) = 0xF866;
                t23 = 0x88;
                t25 = 0xFE8C;
            } else {
                (((struct o24_float *)0xC179120)->v) = -1087.70996f;
                (((struct o28_float *)0xC179120)->v) = 102.079994f;
                (((struct o2C_float *)0xC179120)->v) = -6556.45996f;
                t23 = 0x86;
                t25 = 0xC69;
            }
            *(unsigned short *)((0xC1790CC + t23)) = t25;
            if ((int)((((struct o0_int *)0xC179488)->v)) < (int)0x4) {
                u31 = (((((struct o28_float *)0xC179120)->v)) + 0.199999988f);
            } else {
                u31 = (((((struct o28_float *)0xC179120)->v)) + 0.099999994f);
            }
            (((struct o28_float *)0xC179120)->v) = u31;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179158) = *(struct mv3 *)(0xC179144); }
        } else {
            if (t21 == 2) {
                (((struct o32_ushort *)0xC179120)->v) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)(((*(int *)0xC1EE800) + 0x4)); }
                (((struct o28_float *)0xC179120)->v) = (((((struct o28_float *)0xC179120)->v)) + 50.0f);
            } else {
                t35 = *(signed char *)0xC1EE35C;
                if (t35 != 0) {
                    if (t35 != 1) {
                        if (t35 == 2) {
                            (((struct o32_ushort *)0xC179120)->v) = 0x4000;
                            getReplayPoint(0xC2A1B28, t22, 0x4000, 0xC0DAFC4, 0xC179144);
                            (((struct o28_float *)0xC179120)->v) = (((((struct o28_float *)0xC179120)->v)) + 20.0f);
                        }
                    } else {
                        if ((t22 == 1) && (t52 = (((struct o8_int *)0xC1EE20C)->v), t52 != 15)) {
                            (((struct o32_ushort *)0xC179120)->v) = 0xD000;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((struct o0_int *)0xC2A1B28)->v)) + 0x18)); }
                            (((struct o2C_float *)0xC179120)->v) = (((((struct o2C_float *)0xC179120)->v)) - 140.0f);
                            if ((int)((((struct o0_int *)0xC179488)->v)) < (int)0x4) {
                                u58 = (((((struct o28_float *)0xC179120)->v)) + 0.199999988f);
                            } else {
                                u58 = (((((struct o28_float *)0xC179120)->v)) + 0.099999994f);
                            }
                            u72 = u58;
                        } else {
                            (((struct o32_ushort *)0xC179120)->v) = 0x5000;
                            t60 = (((struct o4_int *)0xC2A1B28)->v);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((t60 << 1) + t60) << 2) + ((((struct o0_int *)0xC2A1B28)->v))) - 12)); }
                            (((struct o2C_float *)0xC179120)->v) = (((((struct o2C_float *)0xC179120)->v)) + 135.0f);
                            if ((int)((((struct o0_int *)0xC179488)->v)) >= (int)0x4) {
                                u66 = (((((struct o28_float *)0xC179120)->v)) + 0.099999994f);
                            } else {
                                u66 = (((((struct o28_float *)0xC179120)->v)) + 0.199999988f);
                            }
                            u72 = u66;
                        }
                        (((struct o28_float *)0xC179120)->v) = u72;
                    }
                } else {
                    (((struct o32_ushort *)0xC179120)->v) = 0x4000;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((struct o0_int *)0xC2A1B28)->v)) + 0x4B0)); }
                    (((struct o28_float *)0xC179120)->v) = (((((struct o28_float *)0xC179120)->v)) + 20.0f);
                }
            }
        }
    } else {
        t124 = *(signed char *)0xC1EE35C;
        if (t124 != 0) {
            if (t124 != 1) {
                if (t124 == 2) {
                    (((struct o32_ushort *)0xC179120)->v) = 0x4000;
                    getReplayPoint(0xC2A1B28, t22, 0x4000, 0xC0DAFC4, 0xC179144);
                    (((struct o28_float *)0xC179120)->v) = (((((struct o28_float *)0xC179120)->v)) + 20.0f);
                }
            } else {
                if ((t22 == 1) && (t141 = (((struct o8_int *)0xC1EE20C)->v), t141 != 15)) {
                    (((struct o32_ushort *)0xC179120)->v) = 0xD000;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((struct o0_int *)0xC2A1B28)->v)) + 0x18)); }
                    (((struct o2C_float *)0xC179120)->v) = (((((struct o2C_float *)0xC179120)->v)) - 140.0f);
                    if ((int)((((struct o0_int *)0xC179488)->v)) < (int)0x4) {
                        u147 = (((((struct o28_float *)0xC179120)->v)) + 0.199999988f);
                    } else {
                        u147 = (((((struct o28_float *)0xC179120)->v)) + 0.099999994f);
                    }
                    u161 = u147;
                } else {
                    (((struct o32_ushort *)0xC179120)->v) = 0x5000;
                    t149 = (((struct o4_int *)0xC2A1B28)->v);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((t149 << 1) + t149) << 2) + ((((struct o0_int *)0xC2A1B28)->v))) - 12)); }
                    (((struct o2C_float *)0xC179120)->v) = (((((struct o2C_float *)0xC179120)->v)) + 135.0f);
                    if ((int)((((struct o0_int *)0xC179488)->v)) >= (int)0x4) {
                        u155 = (((((struct o28_float *)0xC179120)->v)) + 0.099999994f);
                    } else {
                        u155 = (((((struct o28_float *)0xC179120)->v)) + 0.199999988f);
                    }
                    u161 = u155;
                }
                (((struct o28_float *)0xC179120)->v) = u161;
            }
        } else {
            (((struct o32_ushort *)0xC179120)->v) = 0x4000;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((struct o0_int *)0xC2A1B28)->v)) + 0x4B0)); }
            (((struct o28_float *)0xC179120)->v) = (((((struct o28_float *)0xC179120)->v)) + 20.0f);
        }
    }
    { struct mv5 { int w[5]; }; *(struct mv5 *)(0xC179158) = *(struct mv5 *)(0xC179144); }
    (((struct o0_uchar *)0xC179178)->v) = (*(signed char *)0xC08ADAC);
    (((struct o1_uchar *)0xC179178)->v) = (*(signed char *)0xC08ADAD);
    (((struct o2_uchar *)0xC179178)->v) = (*(signed char *)0xC08ADAE);
    (((struct o3_uchar *)0xC179178)->v) = (*(signed char *)0xC08ADAF);
    (((struct o4_uchar *)0xC179178)->v) = (*(signed char *)0xC08ADB0);
    (((struct o5_uchar *)0xC179178)->v) = (*(signed char *)0xC08ADB1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC17916C) = *(struct mv3 *)(0xC08AD94); }
    (((struct o0_ushort *)0xC1791C0)->v) = ((((struct o32_short *)0xC179120)->v));
    (((struct o2_uchar *)0xC1791C0)->v) = (*(signed char *)0xC08ADAC);
    (((struct o3_uchar *)0xC1791C0)->v) = (*(signed char *)0xC08ADAD);
    (((struct o4_uchar *)0xC1791C0)->v) = (*(signed char *)0xC08ADAE);
    (((struct o5_uchar *)0xC1791C0)->v) = (*(signed char *)0xC08ADAF);
    (((struct o6_uchar *)0xC1791C0)->v) = (*(signed char *)0xC08ADB0);
    (((struct o7_uchar *)0xC1791C0)->v) = (*(signed char *)0xC08ADB1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1791C8) = *(struct mv3 *)(0xC08AD94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1791D4) = *(struct mv3 *)(0xC1791C8); }
    (((struct o20_ushort *)0xC1791C0)->v) = 0x0;
    (((struct o24_float *)0xC1791C0)->v) = (float)0x0;
    (((struct o28_float *)0xC1791C0)->v) = (float)0x0;
    (((struct o2C_uint *)0xC1791C0)->v) = 0x1;
    (((struct o30_uint *)0xC1791C0)->v) = 0x0;
    if ((int)((((struct o0_int *)0xC179488)->v)) < (int)0x4) {
        (((struct o34_float *)0xC1791C0)->v) = 204.081635f;
        (((struct o38_float *)0xC1791C0)->v) = 2.86999989f;
        (((struct o10_float *)0xC179200)->v) = 15.0f;
        (((struct o3C_float *)0xC1791C0)->v) = 15.5f;
        (((struct o0_float *)0xC179200)->v) = 17.5f;
        (((struct o4_float *)0xC179200)->v) = 0.0f;
        u216 = 40.0f;
    } else {
        (((struct o34_float *)0xC1791C0)->v) = 214.285721f;
        (((struct o38_float *)0xC1791C0)->v) = 3.5999999f;
        (((struct o10_float *)0xC179200)->v) = 11.0f;
        (((struct o3C_float *)0xC1791C0)->v) = 14.5f;
        (((struct o0_float *)0xC179200)->v) = 13.5f;
        (((struct o4_float *)0xC179200)->v) = 0.0f;
        u216 = 32.0f;
    }
    (((struct o8_float *)0xC179200)->v) = u216;
    (((struct oC_float *)0xC179200)->v) = 25.0f;
    carCalcInertia(0xC1790CC);
    (((struct o28_float *)0xC179200)->v) = 0.0f;
    (((struct o38_float *)0xC179200)->v) = 0.0f;
    (((struct o34_float *)0xC179200)->v) = 0.0f;
    (((struct o30_float *)0xC179200)->v) = 0.0f;
    (((struct o24_float *)0xC179200)->v) = 0.0f;
    (((struct o2C_float *)0xC179200)->v) = 0.0f;
    (((struct o20_float *)0xC179200)->v) = 0.0f;
    (((struct o0_float *)0xC179240)->v) = 0.0f;
    (((struct o3C_float *)0xC179200)->v) = 0.0f;
    (((struct o4_float *)0xC179240)->v) = 1.0f;
    (((struct oC_float *)0xC179240)->v) = 0.0f;
    (((struct o8_float *)0xC179240)->v) = 0.0f;
    (((struct o10_float *)0xC179240)->v) = 1.0f;
    (((struct o18_float *)0xC179240)->v) = 0.0f;
    (((struct o14_float *)0xC179240)->v) = 0.0f;
    (((struct o1C_float *)0xC179240)->v) = 1.0f;
    (((struct o20_float *)0xC179240)->v) = 1.0f;
    (((struct o28_ushort *)0xC179240)->v) = 0x0;
    (((struct o26_ushort *)0xC179240)->v) = 0x0;
    (((struct o24_ushort *)0xC179240)->v) = 0x0;
    t219 = 0xC023BF8;
    t223 = 0x4;
    t224 = 0xC17926C;
    for (;;) {
        if (t223 == 0) {
            break;
        }
        t219 = 0x30;
        *(unsigned int *)((t224 + 0x0)) = 0x1;
        *(unsigned int *)((t224 + 0x4)) = 0x1;
        u225 = ((((struct o3C_float *)0xC179488)->v));
        *(float *)((t224 + t219)) = u225;
        t219 = 0x34;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x38;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x3C;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x128;
        u225 = (*(float *)((0xC1790CC + t219)));
        t219 = 0x8;
        u225 = (u225 * 0.25f);
        *(float *)((t224 + t219)) = u225;
        t219 = 0x10;
        *(float *)((t224 + t219)) = u225;
        t219 = 0xC;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x20;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x1C;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x18;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x14;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x28;
        *(float *)((t224 + t219)) = 0.0f;
        t219 = 0x2C;
        *(float *)((t224 + t219)) = 0.0f;
        t221 = 0xC08AD94;
        t220 = t224;
        t222 = 0xC081324;
        t219 = 0x40;
        *(float *)((t224 + t219)) = 0.0f;
        t220 = (t220 + 0x74);
        t219 = 0xC;
        t228 = 0;
        for (; t228 < (int)t219; t228++) *(unsigned char *)(t220 + t228) = *(unsigned char *)(t221 + t228);
        t220 = t224;
        t220 = (t220 + 0x68);
        t219 = 0xC;
        t229 = 0;
        for (; t229 < (int)t219; t229++) *(unsigned char *)(t220 + t229) = *(unsigned char *)(t221 + t229);
        t220 = t224;
        t220 = (t220 + 0x5C);
        t219 = 0xC;
        t230 = 0;
        for (; t230 < (int)t219; t230++) *(unsigned char *)(t220 + t230) = *(unsigned char *)(t221 + t230);
        t220 = t224;
        t220 = (t220 + 0x50);
        t219 = 0xC;
        t231 = 0;
        for (; t231 < (int)t219; t231++) *(unsigned char *)(t220 + t231) = *(unsigned char *)(t221 + t231);
        t220 = t224;
        t220 = (t220 + 0x44);
        t219 = 0xC;
        t232 = 0;
        for (; t232 < (int)t219; t232++) *(unsigned char *)(t220 + t232) = *(unsigned char *)(t221 + t232);
        t219 = 0x82;
        t223 = (t223 - 1);
        t222 = 0x84;
        *(unsigned short *)((t224 + t219)) = 0x0;
        t219 = (t219 - 2);
        *(unsigned short *)((t224 + t219)) = 0x0;
        t224 = (t224 + t222);
    }
    carInitDriveSplit(0xC1790CC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179114) = *(struct mv3 *)(0xC08AD94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1790CC) = *(struct mv3 *)(0xC179144); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1790D8) = *(struct mv3 *)(0xC1791C8); }
    (((struct o2C_uint *)0xC1790C8)->v) = 0xC1790FC;
    (((struct o30_uint *)0xC1790C8)->v) = 0x0;
    SetColliObj(0xC1790CC, 0x0);
    init_CarSound();
    InitEffect();
    t237 = InitSpark();
    (((struct o8_uint *)0xC179488)->v) = 0x0;
    (((struct oC_uint *)0xC179488)->v) = 0x0;
    return t237;
}
