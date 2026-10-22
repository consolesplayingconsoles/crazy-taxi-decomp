/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
int FUN_0c0574c0(int, int);
float FUN_0c089de0(int);
int ResetFadeColor(void);
int ResetLight(void);
float nlFraction(float);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetLightDirectionV(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlRoundUp(float);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslate(float, float, float);
int Model_Put_Sprite3D(int a4, int a5, float f4);

int Model_Put_Sprite3D(int a4, int a5, float f4)
{
    int t0;
    int t217;
    int t1;
    int t2;
    int t94;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    float t12;
    int t13;
    int t14;
    int t15;
    float t26;
    int t27;
    int t28;
    int t29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    int t42;
    int t43;
    float t44;
    float u45;
    float u58;
    float u59;
    float u60;
    int t62;
    int t65;
    int t66;
    int t71;
    int t77;
    int t78;
    int t85;
    int t93;
    int t110;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    float t119;
    int t120;
    int t121;
    int t122;
    float t133;
    int t134;
    int t135;
    int t136;
    float u137;
    float u138;
    float u139;
    float u140;
    float u141;
    float u142;
    float u143;
    float u144;
    float u145;
    float u146;
    float u147;
    float u148;
    int t149;
    int t150;
    float t151;
    float u152;
    float u165;
    float u166;
    float u167;
    int t169;
    int t172;
    int t173;
    int t178;
    int t184;
    int t185;
    int t192;
    int t200;
    int t201;
    float u54;
    float u21;
    float u161;
    float u128;
    int stk[19] = {0};

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC2A4E50;
    t217 = t0;
    if (t0 == 1) {
    } else {
        t1 = *(int *)0xC1EE234;
        if (t1 == 0) {
            t2 = *(int *)0xC179860;
            t94 = 0xC179860;
            if (t2 != 0) {
            } else {
                t3 = *(int *)0xC0E49E8;
                if (t3 != a5) {
                    *(unsigned int *)0xC0E49EC = 0x0;
                    *(unsigned short *)0xC0E49E4 = 0x0;
                }
                *(unsigned int *)0xC0E49E8 = a5;
                if (!(1800.0f > f4)) {
                    t6 = *(int *)0xC0E49D8;
                    t7 = *(int *)0xC0E49D4;
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t6;
                    t8 = *(int *)0xC0E49D0;
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t7;
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t8;
                    u54 = 1.0f;
                } else {
                    if (0.0f > (((f4 + -200.0f) / 1600.0f) * 4.0f)) {
                        t9 = *(int *)0xC0E49A8;
                        t10 = *(int *)0xC0E49A4;
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t9;
                        t11 = *(int *)0xC0E49A0;
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t10;
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t11;
                        u21 = 0.0f;
                    } else {
                        t12 = nlRoundUp((((f4 + -200.0f) / 1600.0f) * 4.0f));
                        t13 = *(int *)((((signed char)((((int)t12 << 1) + (int)t12) << 2) + 0xC0E49A0) + 0x8));
                        t14 = *(int *)((((signed char)((((int)t12 << 1) + (int)t12) << 2) + 0xC0E49A0) + 0x4));
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t13;
                        t15 = *(int *)((((signed char)((((int)t12 << 1) + (int)t12) << 2) + 0xC0E49A0) + 0x0));
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t14;
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t15;
                        u21 = (((f4 + -200.0f) / 1600.0f) * 4.0f);
                    }
                    t26 = nlFraction(u21);
                    t27 = *(int *)((((signed char)((((int)u21 << 1) + (int)u21) << 2) + 0xC0E49A0) + 0x8));
                    t28 = *(int *)((((signed char)((((int)u21 << 1) + (int)u21) << 2) + 0xC0E49A0) + 0x4));
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t27;
                    t29 = *(int *)((((signed char)((((int)u21 << 1) + (int)u21) << 2) + 0xC0E49A0) + 0x0));
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t28;
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t29;
                    u30 = *(float *)(((((int)stk + 4) + 0x8) + 0x0));
                    u31 = *(float *)(((int)stk + 24));
                    u32 = *(float *)(((int)stk + 24));
                    u33 = u32;
                    u33 = u33 + t26 * (u30 - u31);
                    *(float *)(((int)stk + 24)) = u33;
                    u34 = *(float *)(((int)stk + 28));
                    u35 = *(float *)(((((int)stk + 4) + 0x8) + 0x4));
                    u36 = *(float *)(((int)stk + 28));
                    u37 = u36;
                    u37 = u37 + t26 * (u35 - u34);
                    *(float *)(((int)stk + 28)) = u37;
                    u38 = *(float *)(((int)stk + 32));
                    u39 = *(float *)(((((int)stk + 4) + 0x8) + 0x8));
                    u40 = *(float *)(((int)stk + 32));
                    u41 = u40;
                    u41 = u41 + t26 * (u39 - u38);
                    *(float *)(((int)stk + 32)) = u41;
                    t42 = *(short *)0xC0E49E4;
                    *(unsigned short *)0xC0E49E4 = (t42 + ((int)(1800.0f - f4) + 0x120));
                    t43 = *(short *)0xC0E49E4;
                    t44 = FUN_0c089de0((unsigned short)t43);
                    u45 = 1.19999993f;
                    u45 = u45 + 0.269999981f * t44;
                    u54 = u45;
                }
                u58 = *(float *)(((int)stk + 32));
                u59 = *(float *)(((int)stk + 28));
                u60 = *(float *)(((int)stk + 24));
                nlObjPutSetFadeColor(u60, u59, u58);
                t62 = ExecArrow(a5, f4);
                *(unsigned int *)(((int)stk + 8)) = t62;
                if (a5 == 0) {
                    nlPushMatrix(0x0);
                    nlTranslate(0.0f, 0.199999988f, -0.699999988f);
                    t65 = *(short *)(((int)stk + 4));
                    t66 = *(short *)0xC17985A;
                    nlRotateAY((((-(unsigned short)t66) + (unsigned short)t65) - 32768));
                    *(float *)(((int)stk + 24)) = -0.149999991f;
                    *(float *)(((int)stk + 28)) = -0.399999976f;
                    *(float *)(((int)stk + 32)) = 0.5f;
                    nlObjPutSetLightDirectionV((((int)stk + 4) + 0x14));
                    nlScale(u54, u54, u54);
                    nlSetScaleFactor(u54);
                    t71 = *(int *)(((int)stk + 8));
                    if (t71 != 0) {
                        nlObjPutTrnsl(0xC46BAB8, 0.5f);
                    } else {
                        nlObjPut(0xC46BAB8);
                    }
                    nlPopMatrix(0x1);
                } else {
                    t77 = *(int *)0xC0E49EC;
                    if ((int)(0x1F & t77) < (int)0x1B) {
                        t78 = *(int *)0xC1EE244;
                        FUN_0c0574c0(((((int)(t77 & 0x7F) >= (int)0x3F)) ? 1 : 0), t78);
                    }
                    t85 = *(int *)0xC0E49EC;
                    *(unsigned int *)0xC0E49EC = (t85 + 0x1);
                }
                ResetFadeColor();
                t93 = ResetLight();
                t94 = t93;
            }
            t201 = t94;
        } else {
            t110 = *(int *)0xC0E49E8;
            if (t110 != a5) {
                *(unsigned int *)0xC0E49EC = 0x0;
                *(unsigned short *)0xC0E49E4 = 0x0;
            }
            *(unsigned int *)0xC0E49E8 = a5;
            if (!(1800.0f > f4)) {
                t113 = *(int *)0xC0E49D8;
                t114 = *(int *)0xC0E49D4;
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t113;
                t115 = *(int *)0xC0E49D0;
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t114;
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t115;
                u161 = 1.0f;
            } else {
                if (0.0f > (((f4 + -200.0f) / 1600.0f) * 4.0f)) {
                    t116 = *(int *)0xC0E49A8;
                    t117 = *(int *)0xC0E49A4;
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t116;
                    t118 = *(int *)0xC0E49A0;
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t117;
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t118;
                    u128 = 0.0f;
                } else {
                    t119 = nlRoundUp((((f4 + -200.0f) / 1600.0f) * 4.0f));
                    t120 = *(int *)((((signed char)((((int)t119 << 1) + (int)t119) << 2) + 0xC0E49A0) + 0x8));
                    t121 = *(int *)((((signed char)((((int)t119 << 1) + (int)t119) << 2) + 0xC0E49A0) + 0x4));
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t120;
                    t122 = *(int *)((((signed char)((((int)t119 << 1) + (int)t119) << 2) + 0xC0E49A0) + 0x0));
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t121;
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t122;
                    u128 = (((f4 + -200.0f) / 1600.0f) * 4.0f);
                }
                t133 = nlFraction(u128);
                t134 = *(int *)((((signed char)((((int)u128 << 1) + (int)u128) << 2) + 0xC0E49A0) + 0x8));
                t135 = *(int *)((((signed char)((((int)u128 << 1) + (int)u128) << 2) + 0xC0E49A0) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t134;
                t136 = *(int *)((((signed char)((((int)u128 << 1) + (int)u128) << 2) + 0xC0E49A0) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t135;
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t136;
                u137 = *(float *)(((((int)stk + 4) + 0x8) + 0x0));
                u138 = *(float *)(((int)stk + 24));
                u139 = *(float *)(((int)stk + 24));
                u140 = u139;
                u140 = u140 + t133 * (u137 - u138);
                *(float *)(((int)stk + 24)) = u140;
                u141 = *(float *)(((int)stk + 28));
                u142 = *(float *)(((((int)stk + 4) + 0x8) + 0x4));
                u143 = *(float *)(((int)stk + 28));
                u144 = u143;
                u144 = u144 + t133 * (u142 - u141);
                *(float *)(((int)stk + 28)) = u144;
                u145 = *(float *)(((int)stk + 32));
                u146 = *(float *)(((((int)stk + 4) + 0x8) + 0x8));
                u147 = *(float *)(((int)stk + 32));
                u148 = u147;
                u148 = u148 + t133 * (u146 - u145);
                *(float *)(((int)stk + 32)) = u148;
                t149 = *(short *)0xC0E49E4;
                *(unsigned short *)0xC0E49E4 = (t149 + ((int)(1800.0f - f4) + 0x120));
                t150 = *(short *)0xC0E49E4;
                t151 = FUN_0c089de0((unsigned short)t150);
                u152 = 1.19999993f;
                u152 = u152 + 0.269999981f * t151;
                u161 = u152;
            }
            u165 = *(float *)(((int)stk + 32));
            u166 = *(float *)(((int)stk + 28));
            u167 = *(float *)(((int)stk + 24));
            nlObjPutSetFadeColor(u167, u166, u165);
            t169 = ExecArrow(a5, f4);
            *(unsigned int *)(((int)stk + 8)) = t169;
            if (a5 == 0) {
                nlPushMatrix(0x0);
                nlTranslate(0.0f, 0.199999988f, -0.699999988f);
                t172 = *(short *)(((int)stk + 4));
                t173 = *(short *)0xC17985A;
                nlRotateAY((((-(unsigned short)t173) + (unsigned short)t172) - 32768));
                *(float *)(((int)stk + 24)) = -0.149999991f;
                *(float *)(((int)stk + 28)) = -0.399999976f;
                *(float *)(((int)stk + 32)) = 0.5f;
                nlObjPutSetLightDirectionV((((int)stk + 4) + 0x14));
                nlScale(u161, u161, u161);
                nlSetScaleFactor(u161);
                t178 = *(int *)(((int)stk + 8));
                if (t178 != 0) {
                    nlObjPutTrnsl(0xC46BAB8, 0.5f);
                } else {
                    nlObjPut(0xC46BAB8);
                }
                nlPopMatrix(0x1);
            } else {
                t184 = *(int *)0xC0E49EC;
                if ((int)(0x1F & t184) < (int)0x1B) {
                    t185 = *(int *)0xC1EE244;
                    FUN_0c0574c0(((((int)(t184 & 0x7F) >= (int)0x3F)) ? 1 : 0), t185);
                }
                t192 = *(int *)0xC0E49EC;
                *(unsigned int *)0xC0E49EC = (t192 + 0x1);
            }
            ResetFadeColor();
            t200 = ResetLight();
            t201 = t200;
        }
        t217 = t201;
    }
    return t217;
}
