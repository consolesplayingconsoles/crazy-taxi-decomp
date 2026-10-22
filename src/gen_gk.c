/* Straight-line functions with calls and guards (batch gen_gk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void Start_Fog(int a4, int a5, int a6, int a7, float f4);

void Start_Fog(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    float u55;
    float u56;
    float u57;
    float u78;
    float u79;
    float u80;
    float u81;
    float u82;
    float u83;
    float u84;
    float u85;
    float u86;
    float u87;
    float u88;
    float u89;
    float u90;
    float u91;
    float u119;
    float u120;
    float u121;
    float u122;
    float u123;
    float u124;
    float u125;
    float u126;
    float u127;
    float u128;
    float u129;
    float u130;

    t0 = *(int *)0xC2A9F68;
    if (a4 == t0) {
    } else {
        *(float *)0xC2A9F84 = 1.0f;
        t1 = *(int *)0xC2A9F68;
        if (a4 != 0) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if (a4 != 3) {
                        u2 = *(float *)0xC2A9F70;
                        u3 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x0));
                        u4 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F88 = ((u3 - u2) / u4);
                        u5 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x4));
                        u6 = *(float *)0xC2A9F74;
                        u7 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F8C = ((u5 - u6) / u7);
                        u8 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x8));
                        u9 = *(float *)0xC2A9F78;
                        u10 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F90 = ((u8 - u9) / u10);
                        u11 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0xC));
                        u12 = *(float *)0xC2A9F7C;
                        u13 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F94 = ((u11 - u12) / u13);
                        *(unsigned int *)0xC2A9F64 = a4;
                        *(unsigned int *)0xC2A9F6C = 0x0;
                    } else {
                        if (t1 == 0) {
                            *(float *)0xC2A9F84 = 1.0f;
                            *(unsigned int *)0xC2A9F9C = 0x0;
                            u14 = *(float *)0xC2A9F70;
                            u15 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x0));
                            u16 = *(float *)0xC2A9F84;
                            *(float *)0xC2A9F88 = ((u15 - u14) / u16);
                            u17 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x4));
                            u18 = *(float *)0xC2A9F74;
                            u19 = *(float *)0xC2A9F84;
                            *(float *)0xC2A9F8C = ((u17 - u18) / u19);
                            u20 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x8));
                            u21 = *(float *)0xC2A9F78;
                            u22 = *(float *)0xC2A9F84;
                            *(float *)0xC2A9F90 = ((u20 - u21) / u22);
                            u23 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0xC));
                            u24 = *(float *)0xC2A9F7C;
                            u25 = *(float *)0xC2A9F84;
                            *(float *)0xC2A9F94 = ((u23 - u24) / u25);
                            *(unsigned int *)0xC2A9F64 = a4;
                            *(unsigned int *)0xC2A9F6C = 0x0;
                        }
                    }
                } else {
                    if (t1 == 0) {
                        u44 = *(float *)0xC06012C;
                        *(float *)0xC2A9F84 = u44;
                        *(unsigned int *)0xC2A9F9C = 0x0;
                        *(float *)0xC2A9F74 = 0.0f;
                        *(float *)0xC2A9F78 = 0.0f;
                        *(float *)0xC2A9F7C = 0.0f;
                        u45 = *(float *)0xC060130;
                        *(float *)0xC2A9F70 = u45;
                        u46 = *(float *)0xC2A9F70;
                        u47 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x0));
                        u48 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F88 = ((u47 - u46) / u48);
                        u49 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x4));
                        u50 = *(float *)0xC2A9F74;
                        u51 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F8C = ((u49 - u50) / u51);
                        u52 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x8));
                        u53 = *(float *)0xC2A9F78;
                        u54 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F90 = ((u52 - u53) / u54);
                        u55 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0xC));
                        u56 = *(float *)0xC2A9F7C;
                        u57 = *(float *)0xC2A9F84;
                        *(float *)0xC2A9F94 = ((u55 - u56) / u57);
                        *(unsigned int *)0xC2A9F64 = a4;
                        *(unsigned int *)0xC2A9F6C = 0x0;
                    }
                }
            } else {
                if (t1 == 0) {
                    u78 = *(float *)0xC060128;
                    *(float *)0xC2A9F84 = u78;
                    *(unsigned int *)0xC2A9F9C = 0x0;
                    *(float *)0xC2A9F74 = 0.0f;
                    *(float *)0xC2A9F78 = 0.0f;
                    *(float *)0xC2A9F7C = 0.0f;
                    u79 = *(float *)0xC060130;
                    *(float *)0xC2A9F70 = u79;
                    u80 = *(float *)0xC2A9F70;
                    u81 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x0));
                    u82 = *(float *)0xC2A9F84;
                    *(float *)0xC2A9F88 = ((u81 - u80) / u82);
                    u83 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x4));
                    u84 = *(float *)0xC2A9F74;
                    u85 = *(float *)0xC2A9F84;
                    *(float *)0xC2A9F8C = ((u83 - u84) / u85);
                    u86 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x8));
                    u87 = *(float *)0xC2A9F78;
                    u88 = *(float *)0xC2A9F84;
                    *(float *)0xC2A9F90 = ((u86 - u87) / u88);
                    u89 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0xC));
                    u90 = *(float *)0xC2A9F7C;
                    u91 = *(float *)0xC2A9F84;
                    *(float *)0xC2A9F94 = ((u89 - u90) / u91);
                    *(unsigned int *)0xC2A9F64 = a4;
                    *(unsigned int *)0xC2A9F6C = 0x0;
                }
            }
        } else {
            if (t1 == 1) {
                *(float *)0xC2A9F84 = 24.0f;
            } else {
                if (t1 == 2) {
                    *(float *)0xC2A9F84 = 45.0f;
                } else {
                    if (t1 == 3) {
                        *(float *)0xC2A9F84 = 1.0f;
                    }
                }
            }
            *(unsigned int *)0xC2A9F9C = 0x1;
            *(unsigned int *)0xC2A9FA0 = 0x0;
            u119 = *(float *)0xC2A9F70;
            u120 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x0));
            u121 = *(float *)0xC2A9F84;
            *(float *)0xC2A9F88 = ((u120 - u119) / u121);
            u122 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x4));
            u123 = *(float *)0xC2A9F74;
            u124 = *(float *)0xC2A9F84;
            *(float *)0xC2A9F8C = ((u122 - u123) / u124);
            u125 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0x8));
            u126 = *(float *)0xC2A9F78;
            u127 = *(float *)0xC2A9F84;
            *(float *)0xC2A9F90 = ((u125 - u126) / u127);
            u128 = *(float *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC1322C0) + 0xC));
            u129 = *(float *)0xC2A9F7C;
            u130 = *(float *)0xC2A9F84;
            *(float *)0xC2A9F94 = ((u128 - u129) / u130);
            *(unsigned int *)0xC2A9F64 = a4;
            *(unsigned int *)0xC2A9F6C = 0x0;
        }
    }
}
