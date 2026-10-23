/* Straight-line functions with calls and guards (batch gen_sh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Check_FogArea(float, float);
int Exec_FogColor(void);
int Exec_FogDensity(void);
int Exec_Fog(float f4, float f5);

int Exec_Fog(float f4, float f5)
{
    int t1;
    int t180;
    int t2;
    float u3;
    float u4;
    float u21;
    int t23;
    int t6;
    float u7;
    float u8;
    float u14;
    int t9;
    float u10;
    int t24;
    int t27;
    int t30;
    float u31;
    float u32;
    int t74;
    float u79;
    int t34;
    float u35;
    float u36;
    int t66;
    float u71;
    int t37;
    float u38;
    float u39;
    int t59;
    float u63;
    int t65;
    int t40;
    float u41;
    float u42;
    int t53;
    int t43;
    int t45;
    int t47;
    int t83;
    float u84;
    float u85;
    int t115;
    float u120;
    int t86;
    float u87;
    float u88;
    int t108;
    float u112;
    int t114;
    int t89;
    float u90;
    float u91;
    int t102;
    int t92;
    int t94;
    int t96;
    int t132;
    float u133;
    float u134;
    int t164;
    float u169;
    int t135;
    float u136;
    float u137;
    int t157;
    float u161;
    int t163;
    int t138;
    float u139;
    float u140;
    int t151;
    int t141;
    int t143;
    int t145;
    int t191;
    int t172;
    int t123;

    t1 = *(int *)0xC2A9F6C;
    t180 = (Check_FogArea(f4, f5));
    if ((int)t1 >= (int)0x2) {
    } else {
        t2 = *(int *)0xC2A9F64;
        u3 = *(float *)0xC2A9F70;
        u4 = *(float *)((((signed char)(((t2 << 2) + t2) << 2) + 0xC1322C0) + 0x0));
        u21 = _builtin_fabsf((u4 - u3));
        t23 = 0;
        if (!(100.0f > _builtin_fabsf((u4 - u3)))) {
            Exec_FogDensity();
            t6 = *(int *)0xC2A9F64;
            u7 = *(float *)0xC2A9F70;
            u8 = *(float *)((((signed char)(((t6 << 2) + t6) << 2) + 0xC1322C0) + 0x0));
            u14 = _builtin_fabsf((u8 - u7));
            if (100.0f > _builtin_fabsf((u8 - u7))) {
                t9 = *(int *)0xC2A9F64;
                u10 = *(float *)((((signed char)(((t9 << 2) + t9) << 2) + 0xC1322C0) + 0x0));
                *(float *)0xC2A9F70 = u10;
                *(float *)0xC0E4E48 = u10;
                *(unsigned int *)0xC2A9F6C = ((*(int *)0xC2A9F6C) + 0x1);
                u14 = u10;
            }
            u21 = u14;
            t23 = ((100.0f > _builtin_fabsf((u8 - u7))));
        } else {
            t23 = (1);
        }
        t24 = *(int *)0xC2A9F64;
        if ((1.0f + 1.0f) > _builtin_fabsf(((*(float *)((((signed char)(((t24 << 2) + t24) << 2) + 0xC1322C0) + 0x4))) - (*(float *)0xC2A9F74)))) {
            t27 = *(signed char *)0xC2A9F64;
            if ((1.0f + 1.0f) > _builtin_fabsf(((*(float *)((((signed char)(((t27 << 2) + t27) << 2) + 0xC1322C0) + 0x8))) - (*(float *)0xC2A9F78)))) {
                t30 = *(int *)0xC2A9F64;
                u31 = *(float *)0xC2A9F7C;
                u32 = *(float *)((0xC + ((signed char)(((t30 << 2) + t30) << 2) + 0xC1322C0)));
                t74 = ((signed char)(((t30 << 2) + t30) << 2) + 0xC1322C0);
                u79 = _builtin_fabsf((u32 - u31));
                if (!((1.0f + 1.0f) > _builtin_fabsf((u32 - u31)))) {
                    Exec_FogColor();
                    t34 = *(int *)0xC2A9F64;
                    u35 = *(float *)0xC2A9F74;
                    u36 = *(float *)((((signed char)(((t34 << 2) + t34) << 2) + 0xC1322C0) + 0x4));
                    t66 = 0x4;
                    u71 = _builtin_fabsf((u36 - u35));
                    if ((1.0f + 1.0f) > _builtin_fabsf((u36 - u35))) {
                        t37 = *(signed char *)0xC2A9F64;
                        u38 = *(float *)0xC2A9F78;
                        u39 = *(float *)((((signed char)(((t37 << 2) + t37) << 2) + 0xC1322C0) + 0x8));
                        t59 = 0x8;
                        u63 = _builtin_fabsf((u39 - u38));
                        t65 = 0;
                        if ((1.0f + 1.0f) > _builtin_fabsf((u39 - u38))) {
                            t40 = *(int *)0xC2A9F64;
                            u41 = *(float *)0xC2A9F7C;
                            u42 = *(float *)((0xC + ((signed char)(((t40 << 2) + t40) << 2) + 0xC1322C0)));
                            t53 = ((signed char)(((t40 << 2) + t40) << 2) + 0xC1322C0);
                            if ((1.0f + 1.0f) > _builtin_fabsf((u42 - u41))) {
                                t43 = *(int *)0xC2A9F64;
                                *(float *)0xC2A9F74 = (*(float *)((((signed char)(((t43 << 2) + t43) << 2) + 0xC1322C0) + 0x4)));
                                t45 = *(int *)0xC2A9F64;
                                *(float *)0xC2A9F78 = (*(float *)((((signed char)(((t45 << 2) + t45) << 2) + 0xC1322C0) + 0x8)));
                                t47 = *(int *)0xC2A9F64;
                                *(float *)0xC2A9F7C = (*(float *)((((signed char)(((t47 << 2) + t47) << 2) + 0xC1322C0) + 0xC)));
                                *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)(*(float *)0xC2A9F74) << 16) | ((int)(*(float *)0xC2A9F78) << 8)) | (int)(*(float *)0xC2A9F7C)));
                                *(unsigned int *)0xC2A9F6C = ((*(int *)0xC2A9F6C) + 0x1);
                                t53 = 0xC;
                            }
                            t59 = t53;
                            u63 = _builtin_fabsf((u42 - u41));
                            t65 = (((1.0f + 1.0f) > _builtin_fabsf((u42 - u41))));
                        } else {
                            t65 = (0);
                        }
                        t66 = t59;
                        u71 = u63;
                    }
                    t74 = t66;
                    u79 = u71;
                }
                t123 = t74;
            } else {
                Exec_FogColor();
                t83 = *(int *)0xC2A9F64;
                u84 = *(float *)0xC2A9F74;
                u85 = *(float *)((((signed char)(((t83 << 2) + t83) << 2) + 0xC1322C0) + 0x4));
                t115 = 0x4;
                u120 = _builtin_fabsf((u85 - u84));
                if ((1.0f + 1.0f) > _builtin_fabsf((u85 - u84))) {
                    t86 = *(signed char *)0xC2A9F64;
                    u87 = *(float *)0xC2A9F78;
                    u88 = *(float *)((((signed char)(((t86 << 2) + t86) << 2) + 0xC1322C0) + 0x8));
                    t108 = 0x8;
                    u112 = _builtin_fabsf((u88 - u87));
                    t114 = 0;
                    if ((1.0f + 1.0f) > _builtin_fabsf((u88 - u87))) {
                        t89 = *(int *)0xC2A9F64;
                        u90 = *(float *)0xC2A9F7C;
                        u91 = *(float *)((0xC + ((signed char)(((t89 << 2) + t89) << 2) + 0xC1322C0)));
                        t102 = ((signed char)(((t89 << 2) + t89) << 2) + 0xC1322C0);
                        if ((1.0f + 1.0f) > _builtin_fabsf((u91 - u90))) {
                            t92 = *(int *)0xC2A9F64;
                            *(float *)0xC2A9F74 = (*(float *)((((signed char)(((t92 << 2) + t92) << 2) + 0xC1322C0) + 0x4)));
                            t94 = *(int *)0xC2A9F64;
                            *(float *)0xC2A9F78 = (*(float *)((((signed char)(((t94 << 2) + t94) << 2) + 0xC1322C0) + 0x8)));
                            t96 = *(int *)0xC2A9F64;
                            *(float *)0xC2A9F7C = (*(float *)((((signed char)(((t96 << 2) + t96) << 2) + 0xC1322C0) + 0xC)));
                            *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)(*(float *)0xC2A9F74) << 16) | ((int)(*(float *)0xC2A9F78) << 8)) | (int)(*(float *)0xC2A9F7C)));
                            *(unsigned int *)0xC2A9F6C = ((*(int *)0xC2A9F6C) + 0x1);
                            t102 = 0xC;
                        }
                        t108 = t102;
                        u112 = _builtin_fabsf((u91 - u90));
                        t114 = (((1.0f + 1.0f) > _builtin_fabsf((u91 - u90))));
                    } else {
                        t114 = (0);
                    }
                    t115 = t108;
                    u120 = u112;
                }
                t123 = t115;
            }
            t172 = t123;
        } else {
            Exec_FogColor();
            t132 = *(int *)0xC2A9F64;
            u133 = *(float *)0xC2A9F74;
            u134 = *(float *)((((signed char)(((t132 << 2) + t132) << 2) + 0xC1322C0) + 0x4));
            t164 = 0x4;
            u169 = _builtin_fabsf((u134 - u133));
            if ((1.0f + 1.0f) > _builtin_fabsf((u134 - u133))) {
                t135 = *(signed char *)0xC2A9F64;
                u136 = *(float *)0xC2A9F78;
                u137 = *(float *)((((signed char)(((t135 << 2) + t135) << 2) + 0xC1322C0) + 0x8));
                t157 = 0x8;
                u161 = _builtin_fabsf((u137 - u136));
                t163 = 0;
                if ((1.0f + 1.0f) > _builtin_fabsf((u137 - u136))) {
                    t138 = *(int *)0xC2A9F64;
                    u139 = *(float *)0xC2A9F7C;
                    u140 = *(float *)((0xC + ((signed char)(((t138 << 2) + t138) << 2) + 0xC1322C0)));
                    t151 = ((signed char)(((t138 << 2) + t138) << 2) + 0xC1322C0);
                    if ((1.0f + 1.0f) > _builtin_fabsf((u140 - u139))) {
                        t141 = *(int *)0xC2A9F64;
                        *(float *)0xC2A9F74 = (*(float *)((((signed char)(((t141 << 2) + t141) << 2) + 0xC1322C0) + 0x4)));
                        t143 = *(int *)0xC2A9F64;
                        *(float *)0xC2A9F78 = (*(float *)((((signed char)(((t143 << 2) + t143) << 2) + 0xC1322C0) + 0x8)));
                        t145 = *(int *)0xC2A9F64;
                        *(float *)0xC2A9F7C = (*(float *)((((signed char)(((t145 << 2) + t145) << 2) + 0xC1322C0) + 0xC)));
                        *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)(*(float *)0xC2A9F74) << 16) | ((int)(*(float *)0xC2A9F78) << 8)) | (int)(*(float *)0xC2A9F7C)));
                        *(unsigned int *)0xC2A9F6C = ((*(int *)0xC2A9F6C) + 0x1);
                        t151 = 0xC;
                    }
                    t157 = t151;
                    u161 = _builtin_fabsf((u140 - u139));
                    t163 = (((1.0f + 1.0f) > _builtin_fabsf((u140 - u139))));
                } else {
                    t163 = (0);
                }
                t164 = t157;
                u169 = u161;
            }
            t172 = t164;
        }
        t180 = t172;
    }
    t191 = *(int *)0xC2A9F64;
    if ((*(int *)0xC2A9F68) != t191) {
        *(unsigned int *)0xC2A9F68 = t191;
    }
    return t180;
}
