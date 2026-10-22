/* Straight-line functions with calls and guards (batch gen_iq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carEngineTorque(float);
float carGearbox(int a4);

float carGearbox(int a4)
{
    int t0;
    float u1;
    float u2;
    float t3;
    float u4;
    float t5;
    float u8;
    float u9;
    float u11;
    float u12;
    int t13;
    int t14;
    int t21;
    int t22;
    int t26;
    float u27;
    float u28;
    float t29;
    float u30;
    int t31;
    int t32;
    float u33;
    float t34;
    int t35;
    float u36;
    float u37;
    float u38;
    int t39;
    int t51;
    int t52;
    int t53;
    int t54;
    float u55;
    float t56;
    int t57;
    float u58;
    float u59;
    float u60;
    int t61;
    int t78;
    float u98;
    int t79;
    float u80;
    float t81;
    int t82;
    float u83;
    float u84;
    float u85;
    int t86;
    int t116;
    int t117;
    int t118;
    float u119;
    float t120;
    int t121;
    float u122;
    float u123;
    float u124;
    int t125;
    int t142;
    float u162;
    int t143;
    float u144;
    float t145;
    int t146;
    float u147;
    float u148;
    float u149;
    int t150;
    int t235;
    int t259;
    float u236;
    float u237;
    float u238;
    float u239;
    float u240;
    float u241;
    float u242;
    float u243;
    float u249;
    float u250;
    float u6;
    float u73;
    float u137;
    float u254;
    float u245;
    float u246;

    t0 = *(int *)((a4 + 0x120));
    u1 = *(float *)((0xC08A8D4 + (t0 << 2)));
    u2 = *(float *)((a4 + 0x158));
    if (2900.0f > u2) {
        t3 = carEngineTorque(2900.0f);
        u6 = t3;
    } else {
        u4 = *(float *)((a4 + 0x158));
        t5 = carEngineTorque(u4);
        u6 = t5;
    }
    u8 = *(float *)((a4 + 0x118));
    *(float *)((a4 + 0x154)) = (u8 * (u6 + 3.0f));
    u9 = *(float *)((a4 + 0x154));
    if (0.0f > u9) {
        *(float *)((a4 + 0x154)) = 0.0f;
    }
    u11 = *(float *)((a4 + 0x154));
    u12 = *(float *)(((0x158 + a4) + 0x0));
    *(float *)((a4 + 0x154)) = (u11 - (u12 * 0.00137499999f));
    t13 = *(int *)((a4 + 0x120));
    if (t13 != 0) {
        t14 = *(signed char *)0xC1EE268;
        if (t14 != 0) {
            *(unsigned int *)((a4 + 0x120)) = 0x0;
        }
    }
    t21 = *(int *)((a4 + 0x120));
    if (t21 == 0) {
        t22 = *(signed char *)0xC1EE267;
        if (t22 == 0) {
        } else {
            *(unsigned int *)((a4 + 0x120)) = 0x1;
        }
    } else {
        t26 = *(int *)((a4 + 0x124));
        if (t26 != 0) {
            u27 = *(float *)((a4 + 0x16C));
            if (0.0f > u27) {
                *(unsigned int *)((a4 + 0x120)) = 0x1;
            } else {
                u28 = *(float *)((a4 + 0x16C));
                t29 = carEngineTorque((u1 * _builtin_fabsf(u28)));
                u30 = (u1 * _builtin_fabsf(u28));
                t31 = *(int *)((a4 + 0x120));
                if ((int)t31 > (int)0x1) {
                    t32 = *(int *)((a4 + 0x120));
                    u33 = *(float *)((0xC08A8D4 + ((t32 - 1) << 2)));
                    t34 = carEngineTorque((_builtin_fabsf(u28) * u33));
                    t35 = *(int *)((a4 + 0x120));
                    u36 = *(float *)((0xC08A8D4 + ((t35 - 1) << 2)));
                    u37 = (_builtin_fabsf(u28) * u36);
                    u38 = (t34 - (u37 * 0.00137499999f));
                    if ((u38 * 1.5999999f) > (t29 - (u30 * 0.00137499999f))) {
                        t39 = *(int *)((a4 + 0x120));
                        *(unsigned int *)((a4 + 0x120)) = (t39 - 1);
                    }
                }
                t51 = *(int *)0xC179488;
                if ((int)t51 < (int)0x4) {
                    t52 = *(int *)((a4 + 0x3B0));
                    if (t52 == 2) {
                        t53 = *(int *)((a4 + 0x120));
                        if ((int)t53 < (int)0x4) {
                            t54 = *(int *)((a4 + 0x120));
                            u55 = *(float *)(((0xC08A8D4 + (t54 << 2)) + 0x4));
                            t56 = carEngineTorque((_builtin_fabsf(u28) * u55));
                            t57 = *(int *)((a4 + 0x120));
                            u58 = *(float *)(((0xC08A8D4 + (t57 << 2)) + 0x4));
                            u59 = (_builtin_fabsf(u28) * u58);
                            u60 = (t56 - (u59 * 0.00137499999f));
                            if (!((u60 * 0.399999976f) > (t29 - (u30 * 0.00137499999f)))) {
                            } else {
                                t61 = *(int *)((a4 + 0x120));
                                *(unsigned int *)((a4 + 0x120)) = (t61 + 0x1);
                            }
                            u73 = (u59 * 0.00137499999f);
                        } else {
                            *(unsigned int *)((a4 + 0x120)) = 0x4;
                            u73 = _builtin_fabsf(u28);
                        }
                    } else {
                        t78 = *(int *)((a4 + 0x120));
                        u98 = _builtin_fabsf(u28);
                        if ((int)t78 < (int)0x5) {
                            t79 = *(int *)((a4 + 0x120));
                            u80 = *(float *)(((0xC08A8D4 + (t79 << 2)) + 0x4));
                            t81 = carEngineTorque((_builtin_fabsf(u28) * u80));
                            t82 = *(int *)((a4 + 0x120));
                            u83 = *(float *)(((0xC08A8D4 + (t82 << 2)) + 0x4));
                            u84 = (_builtin_fabsf(u28) * u83);
                            u85 = (t81 - (u84 * 0.00137499999f));
                            if (!((u85 * 0.399999976f) > (t29 - (u30 * 0.00137499999f)))) {
                            } else {
                                t86 = *(int *)((a4 + 0x120));
                                *(unsigned int *)((a4 + 0x120)) = (t86 + 0x1);
                            }
                            u98 = (u84 * 0.00137499999f);
                        }
                    }
                } else {
                    t116 = *(int *)((a4 + 0x3B0));
                    if (t116 == 2) {
                        t117 = *(int *)((a4 + 0x120));
                        if ((int)t117 < (int)0x3) {
                            t118 = *(int *)((a4 + 0x120));
                            u119 = *(float *)(((0xC08A8D4 + (t118 << 2)) + 0x4));
                            t120 = carEngineTorque((_builtin_fabsf(u28) * u119));
                            t121 = *(int *)((a4 + 0x120));
                            u122 = *(float *)(((0xC08A8D4 + (t121 << 2)) + 0x4));
                            u123 = (_builtin_fabsf(u28) * u122);
                            u124 = (t120 - (u123 * 0.00137499999f));
                            if ((u124 * 0.399999976f) > (t29 - (u30 * 0.00137499999f))) {
                                t125 = *(int *)((a4 + 0x120));
                                *(unsigned int *)((a4 + 0x120)) = (t125 + 0x1);
                            }
                            u137 = (u123 * 0.00137499999f);
                        } else {
                            *(unsigned int *)((a4 + 0x120)) = 0x3;
                            u137 = _builtin_fabsf(u28);
                        }
                    } else {
                        t142 = *(int *)((a4 + 0x120));
                        u162 = _builtin_fabsf(u28);
                        if ((int)t142 < (int)0x4) {
                            t143 = *(int *)((a4 + 0x120));
                            u144 = *(float *)(((0xC08A8D4 + (t143 << 2)) + 0x4));
                            t145 = carEngineTorque((_builtin_fabsf(u28) * u144));
                            t146 = *(int *)((a4 + 0x120));
                            u147 = *(float *)(((0xC08A8D4 + (t146 << 2)) + 0x4));
                            u148 = (_builtin_fabsf(u28) * u147);
                            u149 = (t145 - (u148 * 0.00137499999f));
                            if ((u149 * 0.399999976f) > (t29 - (u30 * 0.00137499999f))) {
                                t150 = *(int *)((a4 + 0x120));
                                *(unsigned int *)((a4 + 0x120)) = (t150 + 0x1);
                            }
                            u162 = (u148 * 0.00137499999f);
                        }
                    }
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x120)) = 0x1;
        }
    }
    t235 = *(int *)((a4 + 0x124));
    t259 = 0;
    if (t235 == 0) {
        u236 = *(float *)((a4 + 0x158));
        u237 = *(float *)(((0x154 + a4) + 0x0));
        u238 = u236;
        u238 = u238 + 9.35831738f * u237;
        *(float *)((a4 + 0x158)) = u238;
        *(float *)((a4 + 0x154)) = 0.0f;
        u254 = 9.35831738f;
        t259 = (1);
    } else {
        u239 = *(float *)((a4 + 0x15C));
        if (14.0f > _builtin_fabsf(u239)) {
            u240 = *(float *)(((0x16C + a4) + 0x0));
            u241 = *(float *)(((0x158 + a4) + 0x0));
            u245 = 0.034299992f;
            u246 = ((u240 * u1) - u241);
        } else {
            u242 = *(float *)(((0x16C + a4) + 0x0));
            u243 = *(float *)(((0x158 + a4) + 0x0));
            u245 = 0.0314999931f;
            u246 = ((u242 * u1) - u243);
        }
        u249 = *(float *)((a4 + 0x158));
        u250 = u249;
        u250 = u250 + u245 * u246;
        *(float *)((a4 + 0x158)) = u250;
        u254 = u245;
        t259 = ((14.0f > _builtin_fabsf(u239)));
    }
    return u254;
}
