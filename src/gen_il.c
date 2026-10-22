/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int courseStatusGet(int, int, int, int);
extern int getNearLineIndex();
int getSteering(int);
int cableCarDrive(int a4);

int cableCarDrive(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
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
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t177;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    float u183;
    int t184;
    float u199;
    float u196;
    float u193;
    float u190;
    float u187;
    float u185;
    float u201;
    float u202;
    float u203;
    float u204;
    float u205;
    float u206;
    float u207;
    float u208;
    int t223;
    float u216;
    float u217;
    float u232;
    float u233;
    float u234;
    float u246;
    int t264;
    float u274;
    int t247;
    int t251;
    int t248;
    int t249;
    int t250;
    float u261;
    int stk[12] = {0};

    t0 = *(int *)((a4 + 0x80));
    t1 = *(int *)0xC2A6690;
    t2 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x4));
    t3 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x0));
    t4 = *(int *)((t2 + 0x0));
    t5 = ((int (*)(int, int, int, int))(getNearLineIndex))(0x1, t3, t4, (0xD4 + a4));
    t6 = *(int *)((a4 + 0xD4));
    u7 = *(float *)((a4 + 0xE0));
    u8 = *(float *)(((0xE0 + a4) + 0x0));
    u9 = *(float *)(((((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3) + 0x0));
    u10 = u7;
    u10 = u10 + 0.199999988f * (u9 - u8);
    *(float *)((a4 + 0xE0)) = u10;
    u11 = *(float *)(((0xE4 + a4) + 0x0));
    u12 = *(float *)((a4 + 0xE4));
    u13 = *(float *)(((0x4 + (((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3)) + 0x0));
    u14 = u12;
    u14 = u14 + 0.199999988f * (u13 - u11);
    *(float *)((a4 + 0xE4)) = u14;
    u15 = *(float *)((a4 + 0xE8));
    u16 = *(float *)(((0xE8 + a4) + 0x0));
    u17 = *(float *)(((0x8 + (((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3)) + 0x0));
    u18 = u15;
    u18 = u18 + 0.199999988f * (u17 - u16);
    *(float *)((a4 + 0xE8)) = u18;
    *(unsigned int *)((a4 + 0x88)) = 0x0;
    t19 = *(int *)((a4 + 0xD4));
    if ((int)t19 >= (int)(t4 - 3)) {
        *(unsigned int *)((a4 + 0x88)) = 0x4;
        t20 = *(int *)((a4 + 0x80));
        if (t20 == 0x120) {
            t21 = *(int *)0xC2A4E44;
            if ((t21 & 0xF0) != 96) {
                if (t20 == 0x121) {
                    t22 = *(int *)0xC2A4E44;
                    if ((t22 & 0xF) == 6) {
                        t23 = *(int *)0xC2A6690;
                        t24 = *(int *)((a4 + 0x80));
                        t25 = *(int *)((((((t24 << 1) + t24) << 2) + t23) + 0x8));
                        t26 = *(short *)((t25 + 0x4));
                        *(unsigned int *)(((0x80 + a4) + 0x0)) = (unsigned short)t26;
                        *(unsigned int *)((a4 + 0xD4)) = 0x0;
                        t27 = *(int *)((a4 + 0x80));
                        t28 = *(int *)0xC2A6690;
                        t29 = *(int *)((((((t27 << 1) + t27) << 2) + t28) + 0x4));
                        t30 = *(int *)((((((t27 << 1) + t27) << 2) + t28) + 0x0));
                        t31 = *(int *)((t29 + 0x0));
                        t32 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(0x1, t30, t31, (0xD4 + a4), (0x8C + a4), 0.199999988f);
                        t33 = *(int *)((a4 + 0xD4));
                        t34 = *(int *)(((((((t33 << 1) + t33) << 2) + t30) + 0x18) + 0x8));
                        t35 = *(int *)(((((((t33 << 1) + t33) << 2) + t30) + 0x18) + 0x4));
                        *(unsigned int *)(((0xE0 + a4) + 0x8)) = t34;
                        t36 = *(int *)(((((((t33 << 1) + t33) << 2) + t30) + 0x18) + 0x0));
                        *(unsigned int *)(((0xE0 + a4) + 0x4)) = t35;
                        *(unsigned int *)(((0xE0 + a4) + 0x0)) = t36;
                    }
                }
            } else {
                t59 = *(int *)0xC2A6690;
                t60 = *(int *)((a4 + 0x80));
                t61 = *(int *)((((((t60 << 1) + t60) << 2) + t59) + 0x8));
                t62 = *(short *)((t61 + 0x4));
                *(unsigned int *)(((0x80 + a4) + 0x0)) = (unsigned short)t62;
                *(unsigned int *)((a4 + 0xD4)) = 0x0;
                t63 = *(int *)((a4 + 0x80));
                t64 = *(int *)0xC2A6690;
                t65 = *(int *)((((((t63 << 1) + t63) << 2) + t64) + 0x4));
                t66 = *(int *)((((((t63 << 1) + t63) << 2) + t64) + 0x0));
                t67 = *(int *)((t65 + 0x0));
                t68 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(0x1, t66, t67, (0xD4 + a4), (0x8C + a4), 0.199999988f);
                t69 = *(int *)((a4 + 0xD4));
                t70 = *(int *)(((((((t69 << 1) + t69) << 2) + t66) + 0x18) + 0x8));
                t71 = *(int *)(((((((t69 << 1) + t69) << 2) + t66) + 0x18) + 0x4));
                *(unsigned int *)(((0xE0 + a4) + 0x8)) = t70;
                t72 = *(int *)(((((((t69 << 1) + t69) << 2) + t66) + 0x18) + 0x0));
                *(unsigned int *)(((0xE0 + a4) + 0x4)) = t71;
                *(unsigned int *)(((0xE0 + a4) + 0x0)) = t72;
            }
        } else {
            if (t20 == 0x121) {
                t84 = *(int *)0xC2A4E44;
                if ((t84 & 0xF) == 6) {
                    t85 = *(int *)0xC2A6690;
                    t86 = *(int *)((a4 + 0x80));
                    t87 = *(int *)((((((t86 << 1) + t86) << 2) + t85) + 0x8));
                    t88 = *(short *)((t87 + 0x4));
                    *(unsigned int *)(((0x80 + a4) + 0x0)) = (unsigned short)t88;
                    *(unsigned int *)((a4 + 0xD4)) = 0x0;
                    t89 = *(int *)((a4 + 0x80));
                    t90 = *(int *)0xC2A6690;
                    t91 = *(int *)((((((t89 << 1) + t89) << 2) + t90) + 0x4));
                    t92 = *(int *)((((((t89 << 1) + t89) << 2) + t90) + 0x0));
                    t93 = *(int *)((t91 + 0x0));
                    t94 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(0x1, t92, t93, (0xD4 + a4), (0x8C + a4), 0.199999988f);
                    t95 = *(int *)((a4 + 0xD4));
                    t96 = *(int *)(((((((t95 << 1) + t95) << 2) + t92) + 0x18) + 0x8));
                    t97 = *(int *)(((((((t95 << 1) + t95) << 2) + t92) + 0x18) + 0x4));
                    *(unsigned int *)(((0xE0 + a4) + 0x8)) = t96;
                    t98 = *(int *)(((((((t95 << 1) + t95) << 2) + t92) + 0x18) + 0x0));
                    *(unsigned int *)(((0xE0 + a4) + 0x4)) = t97;
                    *(unsigned int *)(((0xE0 + a4) + 0x0)) = t98;
                }
            }
        }
    } else {
        t132 = *(int *)((a4 + 0xD4));
        if ((int)t132 > (int)(t4 - 8)) {
            *(unsigned int *)((a4 + 0x88)) = 0x2;
        } else {
            t133 = *(int *)((a4 + 0x38));
            if ((t133 & 0x5FFF) != 0) {
                *(unsigned int *)((a4 + 0x88)) = 0x5;
            } else {
                t134 = *(int *)((a4 + 0xD4));
                t135 = *(int *)((a4 + 0x80));
                t136 = courseStatusGet(t135, t134, 0x0, 0xA);
                if ((0x1F & (t136 >> 1)) != 0) {
                    *(unsigned int *)((a4 + 0x88)) = 0x4;
                } else {
                    if ((t136 >> 1) != 0) {
                        *(unsigned int *)((a4 + 0x88)) = 0x3;
                    }
                }
            }
        }
    }
    t177 = getSteering(a4);
    t178 = *(int *)(((0xC0 + a4) + 0x0));
    *(unsigned int *)(((0xC0 + a4) + 0x0)) = (t178 + t177);
    t179 = *(int *)((a4 + 0x80));
    t180 = *(int *)0xC2A6690;
    t181 = *(int *)((((((t179 << 1) + t179) << 2) + t180) + 0x8));
    t182 = *(int *)((t181 + 0x0));
    u183 = *(float *)((0xC0C3F04 + ((t182 & 0xF) << 2)));
    t184 = *(int *)((a4 + 0x88));
    u199 = u183;
    if (t184 != 0) {
        u196 = 0.462963015f;
        if (t184 != 1) {
            u193 = 0.324074119f;
            if (t184 != 2) {
                u190 = 0.13888891f;
                if (t184 != 3) {
                    u187 = 0.0f;
                    if (t184 != 4) {
                        u185 = u183;
                        if (t184 == 5) {
                            u185 = 0.0f;
                        }
                        u187 = u185;
                    }
                    u190 = u187;
                }
                u193 = u190;
            }
            u196 = u193;
        }
        u199 = u196;
    }
    *(float *)((a4 + 0xC8)) = 0.0f;
    u201 = *(float *)((a4 + 0xCC));
    if (u199 == 0.0f) {
        *(float *)((a4 + 0xC4)) = 0.0f;
        u202 = *(float *)((a4 + 0xD0));
        *(float *)((a4 + 0xC8)) = u202;
    } else {
        u203 = *(float *)((a4 + 0xCC));
        if (!(u203 > u199)) {
            u204 = *(float *)((a4 + 0xD0));
            u205 = *(float *)((a4 + 0xC4));
            if ((u204 * (1.0f + 1.0f)) > u205) {
                u206 = *(float *)(((0xD0 + a4) + 0x0));
                u207 = *(float *)((a4 + 0xC4));
                u208 = 0.000999999931f;
                if (0.000999999931f > (u206 * 0.0299999993f)) {
                    u208 = (u206 * 0.0299999993f);
                }
                *(float *)((a4 + 0xC4)) = (u207 + u208);
            }
        } else {
            t223 = 0;
            if (0.231481507f > _builtin_fabsf((u199 - u201))) {
                u216 = *(float *)((a4 + 0xC4));
                *(float *)((a4 + 0xC4)) = (u216 * 0.5f);
                t223 = (1);
            } else {
                *(float *)((a4 + 0xC4)) = 0.0f;
                if (_builtin_fabsf((u199 - u201)) > 0.462963015f) {
                    u217 = *(float *)((a4 + 0xD0));
                    *(float *)((a4 + 0xC8)) = (u217 * 0.5f);
                }
                t223 = ((_builtin_fabsf((u199 - u201)) > 0.462963015f));
            }
        }
        u232 = *(float *)((a4 + 0xD0));
        u233 = *(float *)((a4 + 0xC4));
        if (u233 > (u232 * (1.0f + 1.0f))) {
            u234 = *(float *)((a4 + 0xD0));
            *(float *)((a4 + 0xC4)) = u234;
        }
    }
    u246 = *(float *)((a4 + 0x2C));
    t264 = 0x2C;
    u274 = _builtin_fabsf((u199 - u201));
    if (800.0f > u246) {
        t247 = *(int *)0xC1EE330;
        t251 = t247;
        if ((t247 & 127) == 0) {
            t248 = *(int *)0xC1EE330;
            t249 = *(int *)(((((int)(t248 & 0x180) >> 7) << 2) + 0xC0A37A8));
            t250 = Sound_Request(t249, 0x2);
            t251 = t250;
        } else {
            u261 = _builtin_fabsf((u199 - u201));
        }
        t264 = t251;
        u274 = u261;
    }
    return t264;
}
