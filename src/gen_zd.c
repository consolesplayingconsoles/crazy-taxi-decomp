/* Straight-line functions with calls and guards (batch gen_zd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitEffect(void);
int InitSpark(void);
int SetColliObj(int, int);
int carCalcInertia(int);
int carInitDriveSplit(int);
int getReplayPoint(int, ...);
int init_CarSound(void);
int init_CarMain(void);

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

    *(unsigned int *)0xC0DB000 = 0x0;
    *(unsigned int *)0xC0DAEC0 = 0x0;
    *(unsigned int *)0xC0DAEC4 = 0x0;
    *(unsigned int *)0xC1790C8 = 0x1;
    *(unsigned int *)0xC179120 = 0x3;
    *(unsigned int *)0xC179124 = 0x0;
    *(unsigned int *)0xC179128 = 0x2;
    *(unsigned int *)0xC17912C = 0x0;
    *(unsigned int *)0xC179130 = 0xFFFFFFFF;
    *(unsigned int *)0xC179134 = 0x0;
    if ((int)(*(int *)0xC179488) < (int)0x4) {
        *(unsigned int *)0xC179138 = (*(int *)((0xC0DAFD8 + ((*(int *)0xC179488) << 2))));
        *(unsigned int *)0xC17913C = (*(int *)((0xC0DAFEC + ((*(int *)0xC179488) << 2))));
        *(unsigned int *)0xC179140 = (*(int *)((0xC0DAFC4 + ((*(int *)0xC179488) << 2))));
        *(float *)0xC1794B8 = 0.179999992f;
        *(float *)0xC1794BC = 0.174999997f;
        *(float *)0xC1794B0 = 23.0f;
        *(float *)0xC1794B4 = 24.0f;
        *(float *)0xC1794C0 = 4.19999981f;
        u13 = 3.5f;
    } else {
        *(unsigned int *)0xC179138 = (*(int *)0xC0DAFE8);
        *(unsigned int *)0xC17913C = (*(int *)0xC0DAFFC);
        *(unsigned int *)0xC179140 = (*(int *)0xC0DAFD4);
        *(float *)0xC1794B8 = 0.099999994f;
        *(float *)0xC1794BC = 0.0949999988f;
        *(float *)0xC1794B0 = 27.0f;
        *(float *)0xC1794B4 = 26.0f;
        *(float *)0xC1794C0 = 2.79999995f;
        u13 = 2.29999995f;
    }
    *(float *)0xC1794C4 = u13;
    *(float *)0xC1794C8 = 0.0f;
    *(unsigned char *)0xC179150 = (*(signed char *)0xC08ADAC);
    *(unsigned char *)0xC179151 = (*(signed char *)0xC08ADAD);
    *(unsigned char *)0xC179152 = (*(signed char *)0xC08ADAE);
    *(unsigned char *)0xC179153 = (*(signed char *)0xC08ADAF);
    *(unsigned char *)0xC179154 = (*(signed char *)0xC08ADB0);
    *(unsigned char *)0xC179155 = (*(signed char *)0xC08ADB1);
    t21 = *(int *)0xC1EE20C;
    t22 = *(int *)0xC17948C;
    if (t21 != 0) {
        if (t21 == 1) {
            if (t22 != 1) {
                *(float *)0xC179144 = 288.459991f;
                *(float *)0xC179148 = 2304.11987f;
                *(float *)0xC17914C = 4535.48975f;
                *(unsigned short *)0xC179152 = 0x349F;
                *(unsigned short *)0xC179150 = 0xF866;
                t23 = 0x88;
                t25 = 0xFE8C;
            } else {
                *(float *)0xC179144 = -1087.70996f;
                *(float *)0xC179148 = 102.079994f;
                *(float *)0xC17914C = -6556.45996f;
                t23 = 0x86;
                t25 = 0xC69;
            }
            *(unsigned short *)((0xC1790CC + t23)) = t25;
            if ((int)(*(int *)0xC179488) < (int)0x4) {
                u31 = ((*(float *)0xC179148) + 0.199999988f);
            } else {
                u31 = ((*(float *)0xC179148) + 0.099999994f);
            }
            *(float *)0xC179148 = u31;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179158) = *(struct mv3 *)(0xC179144); }
        } else {
            if (t21 == 2) {
                *(unsigned short *)0xC179152 = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)(((*(int *)0xC1EE800) + 0x4)); }
                *(float *)0xC179148 = ((*(float *)0xC179148) + 50.0f);
            } else {
                t35 = *(signed char *)0xC1EE35C;
                if (t35 != 0) {
                    if (t35 != 1) {
                        if (t35 == 2) {
                            *(unsigned short *)0xC179152 = 0x4000;
                            getReplayPoint(0xC179144);
                            *(float *)0xC179148 = ((*(float *)0xC179148) + 20.0f);
                        }
                    } else {
                        if ((t22 == 1) && (t52 = *(int *)0xC1EE214, t52 != 15)) {
                            *(unsigned short *)0xC179152 = 0xD000;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)(((*(int *)0xC2A1B28) + 0x18)); }
                            *(float *)0xC17914C = ((*(float *)0xC17914C) - 140.0f);
                            if ((int)(*(int *)0xC179488) < (int)0x4) {
                                u58 = ((*(float *)0xC179148) + 0.199999988f);
                            } else {
                                u58 = ((*(float *)0xC179148) + 0.099999994f);
                            }
                            u72 = u58;
                        } else {
                            *(unsigned short *)0xC179152 = 0x5000;
                            t60 = *(int *)0xC2A1B2C;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((t60 << 1) + t60) << 2) + (*(int *)0xC2A1B28)) - 12)); }
                            *(float *)0xC17914C = ((*(float *)0xC17914C) + 135.0f);
                            if ((int)(*(int *)0xC179488) >= (int)0x4) {
                                u66 = ((*(float *)0xC179148) + 0.099999994f);
                            } else {
                                u66 = ((*(float *)0xC179148) + 0.199999988f);
                            }
                            u72 = u66;
                        }
                        *(float *)0xC179148 = u72;
                    }
                } else {
                    *(unsigned short *)0xC179152 = 0x4000;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)(((*(int *)0xC2A1B28) + 0x4B0)); }
                    *(float *)0xC179148 = ((*(float *)0xC179148) + 20.0f);
                }
            }
        }
    } else {
        t124 = *(signed char *)0xC1EE35C;
        if (t124 != 0) {
            if (t124 != 1) {
                if (t124 == 2) {
                    *(unsigned short *)0xC179152 = 0x4000;
                    getReplayPoint(0xC179144);
                    *(float *)0xC179148 = ((*(float *)0xC179148) + 20.0f);
                }
            } else {
                if ((t22 == 1) && (t141 = *(int *)0xC1EE214, t141 != 15)) {
                    *(unsigned short *)0xC179152 = 0xD000;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)(((*(int *)0xC2A1B28) + 0x18)); }
                    *(float *)0xC17914C = ((*(float *)0xC17914C) - 140.0f);
                    if ((int)(*(int *)0xC179488) < (int)0x4) {
                        u147 = ((*(float *)0xC179148) + 0.199999988f);
                    } else {
                        u147 = ((*(float *)0xC179148) + 0.099999994f);
                    }
                    u161 = u147;
                } else {
                    *(unsigned short *)0xC179152 = 0x5000;
                    t149 = *(int *)0xC2A1B2C;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)((((((t149 << 1) + t149) << 2) + (*(int *)0xC2A1B28)) - 12)); }
                    *(float *)0xC17914C = ((*(float *)0xC17914C) + 135.0f);
                    if ((int)(*(int *)0xC179488) >= (int)0x4) {
                        u155 = ((*(float *)0xC179148) + 0.099999994f);
                    } else {
                        u155 = ((*(float *)0xC179148) + 0.199999988f);
                    }
                    u161 = u155;
                }
                *(float *)0xC179148 = u161;
            }
        } else {
            *(unsigned short *)0xC179152 = 0x4000;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179144) = *(struct mv3 *)(((*(int *)0xC2A1B28) + 0x4B0)); }
            *(float *)0xC179148 = ((*(float *)0xC179148) + 20.0f);
        }
    }
    { struct mv5 { int w[5]; }; *(struct mv5 *)(0xC179158) = *(struct mv5 *)(0xC179144); }
    *(unsigned char *)0xC179178 = (*(signed char *)0xC08ADAC);
    *(unsigned char *)0xC179179 = (*(signed char *)0xC08ADAD);
    *(unsigned char *)0xC17917A = (*(signed char *)0xC08ADAE);
    *(unsigned char *)0xC17917B = (*(signed char *)0xC08ADAF);
    *(unsigned char *)0xC17917C = (*(signed char *)0xC08ADB0);
    *(unsigned char *)0xC17917D = (*(signed char *)0xC08ADB1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC17916C) = *(struct mv3 *)(0xC08AD94); }
    *(unsigned short *)0xC1791C0 = (*(short *)0xC179152);
    *(unsigned char *)0xC1791C2 = (*(signed char *)0xC08ADAC);
    *(unsigned char *)0xC1791C3 = (*(signed char *)0xC08ADAD);
    *(unsigned char *)0xC1791C4 = (*(signed char *)0xC08ADAE);
    *(unsigned char *)0xC1791C5 = (*(signed char *)0xC08ADAF);
    *(unsigned char *)0xC1791C6 = (*(signed char *)0xC08ADB0);
    *(unsigned char *)0xC1791C7 = (*(signed char *)0xC08ADB1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1791C8) = *(struct mv3 *)(0xC08AD94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1791D4) = *(struct mv3 *)(0xC1791C8); }
    *(unsigned short *)0xC1791E0 = 0x0;
    *(float *)0xC1791E4 = (float)0x0;
    *(float *)0xC1791E8 = (float)0x0;
    *(unsigned int *)0xC1791EC = 0x1;
    *(unsigned int *)0xC1791F0 = 0x0;
    if ((int)(*(int *)0xC179488) < (int)0x4) {
        *(float *)0xC1791F4 = 204.081635f;
        *(float *)0xC1791F8 = 2.86999989f;
        *(float *)0xC179210 = 15.0f;
        *(float *)0xC1791FC = 15.5f;
        *(float *)0xC179200 = 17.5f;
        *(float *)0xC179204 = 0.0f;
        u216 = 40.0f;
    } else {
        *(float *)0xC1791F4 = 214.285721f;
        *(float *)0xC1791F8 = 3.5999999f;
        *(float *)0xC179210 = 11.0f;
        *(float *)0xC1791FC = 14.5f;
        *(float *)0xC179200 = 13.5f;
        *(float *)0xC179204 = 0.0f;
        u216 = 32.0f;
    }
    *(float *)0xC179208 = u216;
    *(float *)0xC17920C = 25.0f;
    carCalcInertia(0xC1790CC);
    *(float *)0xC179228 = 0.0f;
    *(float *)0xC179238 = 0.0f;
    *(float *)0xC179234 = 0.0f;
    *(float *)0xC179230 = 0.0f;
    *(float *)0xC179224 = 0.0f;
    *(float *)0xC17922C = 0.0f;
    *(float *)0xC179220 = 0.0f;
    *(float *)0xC179240 = 0.0f;
    *(float *)0xC17923C = 0.0f;
    *(float *)0xC179244 = 1.0f;
    *(float *)0xC17924C = 0.0f;
    *(float *)0xC179248 = 0.0f;
    *(float *)0xC179250 = 1.0f;
    *(float *)0xC179258 = 0.0f;
    *(float *)0xC179254 = 0.0f;
    *(float *)0xC17925C = 1.0f;
    *(float *)0xC179260 = 1.0f;
    *(unsigned short *)0xC179268 = 0x0;
    *(unsigned short *)0xC179266 = 0x0;
    *(unsigned short *)0xC179264 = 0x0;
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
        u225 = (*(float *)0xC1794C4);
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
    *(unsigned int *)0xC1790F4 = 0xC1790FC;
    *(unsigned int *)0xC1790F8 = 0x0;
    SetColliObj(0xC1790CC, 0x0);
    init_CarSound();
    InitEffect();
    t237 = InitSpark();
    *(unsigned int *)0xC179490 = 0x0;
    *(unsigned int *)0xC179494 = 0x0;
    return t237;
}
