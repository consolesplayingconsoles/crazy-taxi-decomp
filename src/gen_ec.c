/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow2Matrix(int);
int CalcShadow4Normal(int, int);
int FUN_0c0771b0(int, int);
int FUN_0c078310(void);
int GetCollision2D(int, float);
int GetRotVec(int);
int ParkingCarInit(int, int, int, int, int);
int SetCameraPosVelocity(int);
int Sound_Request(int, int);
int courseCarType(void);
int extRand(void);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotate(int, int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float nlUnitVector(int);
float parkingControl(int a4, int a5);
float FUN_0c0370c4(int a4);

float parkingControl(int a4, int a5)
{
    int t0;
    int t1;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t74;
    int t33;
    float u34;
    int t35;
    int t36;
    float u37;
    int t38;
    float u39;
    int t40;
    float u41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    float u47;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    float u95;
    float u96;
    int t97;
    int t98;
    float t99;
    float u100;
    float u101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t145;
    int t160;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    int t178;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t191;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t207;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t220;
    float u242;
    int t77;
    float u83;
    float u84;
    int t61;
    int t64;
    float u70;
    int t49;
    int t52;
    float u94;
    int t226;
    int t153;
    float u156;
    float u157;
    float u158;
    int t125;
    int t127;
    int t128;
    int t146;
    float u149;
    float u150;
    float u151;
    int t140;
    int t142;
    int t143;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(int *)0xC1EE210;
    t1 = *(int *)0xC1EE214;
    if (a4 == 0) {
        *(unsigned int *)0xC2A447C = 0x0;
        *(unsigned int *)0xC2A4480 = 0x0;
        *(unsigned int *)0xC2A4484 = 0x0;
        if ((t0 + t1) != 0) {
            if ((t0 + t1) == 17) {
                *(unsigned int *)0xC2A447C = 0xC0F1878;
                *(unsigned int *)0xC2A4480 = 0x10;
                *(unsigned int *)0xC2A4484 = 0xC0EF7F8;
            } else {
                if ((t0 + t1) == 1) {
                    *(unsigned int *)0xC2A447C = 0xC0F1A78;
                    *(unsigned int *)0xC2A4480 = 0xA;
                    *(unsigned int *)0xC2A4484 = 0xC0F0BF8;
                } else {
                    if ((t0 + t1) == 16) {
                        *(unsigned int *)0xC2A447C = 0xC0F1BB8;
                        *(unsigned int *)0xC2A4480 = 0x2;
                        *(unsigned int *)0xC2A4484 = 0xC0F1BF8;
                    } else {
                        if ((t0 + t1) == 15) {
                            *(unsigned int *)0xC2A447C = 0xC0F1E78;
                            *(unsigned int *)0xC2A4480 = 0x9;
                            *(unsigned int *)0xC2A4484 = 0xC0F1F98;
                        }
                    }
                }
            }
        } else {
            *(unsigned int *)0xC2A447C = 0xC0F1878;
            *(unsigned int *)0xC2A4480 = 0x10;
            *(unsigned int *)0xC2A4484 = 0xC0EF7F8;
        }
        t27 = 0x0;
        t28 = 0x0;
        for (;;) {
            t29 = *(int *)0xC2A4480;
            if ((int)t28 >= (int)t29) {
                break;
            }
            t30 = *(int *)0xC2A447C;
            t28 = (t28 + 0x1);
            t31 = (t30 + t27);
            t27 = (t27 + 0x20);
            *(unsigned int *)((t31 + 0x0)) = 0x0;
        }
    } else {
        t32 = *(int *)0xC2A447C;
        t74 = 0xC1EE210;
        if ((t0 + t1) == 15) {
            t33 = *(int *)(((int)stk + 20));
            u34 = *(float *)((t33 + 0x4));
            if (35.0f > u34) {
                *(float *)((t32 + 0x58)) = 500.0f;
                *(float *)((t32 + 0x38)) = 500.0f;
                *(float *)((t32 + 0x18)) = 500.0f;
                t35 = *(int *)0xC2A447C;
                t36 = *(int *)0xC2A447C;
                u37 = *(float *)0xC2A1B18;
                *(float *)(((0x100 + t35) + 0x18)) = (-30.0f - u37);
                *(float *)(((0xE0 + t35) + 0x18)) = (-30.0f - u37);
                *(float *)(((0xC0 + t35) + 0x18)) = (-30.0f - u37);
                *(float *)(((0xA0 + t35) + 0x18)) = (-30.0f - u37);
                *(float *)(((0x80 + t35) + 0x18)) = (-30.0f - u37);
                *(float *)(((t36 + 0x60) + 0x18)) = (-30.0f - u37);
                t61 = 0xC2A1B18;
                t64 = (0xC0 + t35);
                u70 = u37;
            } else {
                t38 = *(int *)(((int)stk + 20));
                u39 = *(float *)((t38 + 0x4));
                if (105.0f > u39) {
                    *(float *)(((0xA0 + t32) + 0x18)) = 500.0f;
                    *(float *)(((0x80 + t32) + 0x18)) = 500.0f;
                    *(float *)((t32 + 0x78)) = 500.0f;
                    t40 = *(int *)0xC2A447C;
                    u41 = *(float *)0xC2A1B18;
                    *(float *)(((0x100 + t40) + 0x18)) = (-30.0f - u41);
                    *(float *)(((0xE0 + t40) + 0x18)) = (-30.0f - u41);
                    *(float *)(((0xC0 + t40) + 0x18)) = (-30.0f - u41);
                    *(float *)(((t40 + 0x40) + 0x18)) = (-30.0f - u41);
                    *(float *)(((t40 + 0x20) + 0x18)) = (-30.0f - u41);
                    *(float *)((t40 + 0x18)) = (-30.0f - u41);
                    t49 = (t40 + 0x40);
                    t52 = (0xC0 + t40);
                } else {
                    *(float *)(((0x100 + t32) + 0x18)) = 500.0f;
                    *(float *)(((0xE0 + t32) + 0x18)) = 500.0f;
                    *(float *)(((0xC0 + t32) + 0x18)) = 500.0f;
                    t42 = *(int *)0xC2A447C;
                    t43 = *(int *)0xC2A447C;
                    t44 = *(int *)0xC2A447C;
                    t45 = *(int *)0xC2A447C;
                    t46 = *(int *)0xC2A447C;
                    u47 = *(float *)0xC2A1B18;
                    *(float *)(((0x18 + (0xA0 + t44)) + 0x0)) = (-30.0f - u47);
                    *(float *)(((0x18 + (0x80 + t44)) + 0x0)) = (-30.0f - u47);
                    *(float *)((0x18 + (t45 + 0x60))) = (-30.0f - u47);
                    *(float *)(((t46 + 0x40) + 0x18)) = (-30.0f - u47);
                    *(float *)(((0x18 + (t43 + 0x20)) + 0x0)) = (-30.0f - u47);
                    *(float *)(((0x18 + t42) + 0x0)) = (-30.0f - u47);
                    t49 = (0x18 + t42);
                    t52 = (0xC0 + t32);
                }
                t61 = t49;
                t64 = t52;
                u70 = 105.0f;
            }
            t74 = t61;
            t77 = t64;
            u83 = u70;
            u84 = 35.0f;
        }
        t88 = *(int *)0xC2A447C;
        *(unsigned int *)(((int)stk + 16)) = 0xC0A2220;
        *(unsigned int *)(((int)stk + 16)) = 0xC0A2220;
        t89 = 0xC0425E0;
        t90 = t74;
        t91 = 0x0;
        t92 = t88;
        t93 = t77;
        u95 = u83;
        u96 = u84;
        for (;;) {
            t97 = *(int *)0xC2A4480;
            if ((int)t91 < (int)t97) {
                t98 = *(int *)(((int)stk + 20));
                t99 = nlLength(t98, (t92 + 0xC));
                t89 = t99;
                t89 = 0x18;
                u100 = *(float *)((t92 + t89));
                u96 = u100;
                u101 = *(float *)0xC2A1B18;
                u95 = u101;
                u95 = (u95 + u96);
                u95 = (u95 + 30.0f);
                u94 = t99;
                if (!(u95 > t99)) {
                    *(unsigned int *)((t92 + 0x0)) = 0x0;
                } else {
                    t102 = *(int *)((t92 + 0x0));
                    t90 = t102;
                    if (t90 != 0) {
                    } else {
                        t93 = t91;
                        t93 = (t93 << 2);
                        t93 = (t93 + t91);
                        t93 = (t93 << 2);
                        t103 = *(int *)((t92 + 0x4));
                        t89 = t103;
                        t93 = (t93 << 2);
                        t104 = *(int *)0xC2A4484;
                        t90 = t104;
                        t93 = (t93 << 2);
                        t93 = (t93 + t90);
                        if (t89 != 1) {
                            if (t89 != 2) {
                                if (t89 == 3) {
                                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                                    t105 = 0xC2A4484;
                                    for (;;) {
                                        t106 = *(int *)(((int)stk + 12));
                                        t90 = t106;
                                        t107 = *(int *)((t92 + 0x8));
                                        if ((int)t90 >= (int)t107) {
                                            break;
                                        }
                                        t108 = *(int *)((t93 + 0xC));
                                        t105 = t108;
                                        t109 = courseCarType();
                                        t89 = t109;
                                        t110 = *(int *)((t92 + 0x1C));
                                        t111 = ParkingCarInit(t89, t91, t110, t93, t105);
                                        t89 = t111;
                                        t112 = *(int *)(((int)stk + 12));
                                        t105 = t112;
                                        t93 = (t93 + 0x10);
                                        t105 = (t105 + 0x1);
                                        *(unsigned int *)(((int)stk + 12)) = t105;
                                    }
                                } else {
                                    if (t89 != 4) {
                                        if (t89 != 5) {
                                            if (t89 != 6) {
                                                if (t89 == 7) {
                                                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                                                    t113 = 0xC2A1B18;
                                                    for (;;) {
                                                        t114 = *(int *)(((int)stk + 12));
                                                        t90 = t114;
                                                        t115 = *(int *)((t92 + 0x8));
                                                        if ((int)t90 >= (int)t115) {
                                                            break;
                                                        }
                                                        if (t91 == 0) {
                                                            t116 = *(int *)(((int)stk + 12));
                                                            t113 = 0xB;
                                                            if ((int)t116 < (int)t113) {
                                                                t117 = *(int *)((t93 + 0xC));
                                                                t118 = *(int *)((t92 + 0x1C));
                                                                t119 = *(int *)(((int)stk + 16));
                                                                t120 = *(int *)((t119 + 0x0));
                                                                t125 = (t117 | 0x80000000);
                                                                t127 = t120;
                                                                t128 = t118;
                                                            } else {
                                                                t121 = *(int *)((t93 + 0xC));
                                                                t122 = *(int *)(((int)stk + 16));
                                                                t123 = *(int *)((t92 + 0x1C));
                                                                t124 = *(int *)((t122 + 0x0));
                                                                t125 = (t121 | 0x80000000);
                                                                t127 = (t124 + 0x1);
                                                                t128 = t123;
                                                            }
                                                            t130 = ParkingCarInit(t127, t91, t128, t93, t125);
                                                            t89 = t130;
                                                        } else {
                                                            t89 = t91;
                                                            if (t89 == 1) {
                                                                t131 = *(int *)(((int)stk + 12));
                                                                t113 = t131;
                                                                if ((int)t113 < (int)0x7) {
                                                                    t132 = *(int *)((t93 + 0xC));
                                                                    t90 = t132;
                                                                    t90 = (t90 | 0x80000000);
                                                                    t133 = *(int *)(((int)stk + 16));
                                                                    t134 = *(int *)((t92 + 0x1C));
                                                                    t135 = *(int *)((t133 + 0x0));
                                                                    t140 = t90;
                                                                    t142 = (t135 + 0x1);
                                                                    t143 = t134;
                                                                } else {
                                                                    t136 = *(int *)((t93 + 0xC));
                                                                    t137 = *(int *)(((int)stk + 16));
                                                                    t138 = *(int *)((t92 + 0x1C));
                                                                    t139 = *(int *)((t137 + 0x0));
                                                                    t140 = (t136 | 0x80000000);
                                                                    t142 = (t139 + 0x2);
                                                                    t143 = t138;
                                                                }
                                                                t145 = ParkingCarInit(t142, t91, t143, t93, t140);
                                                                t89 = t145;
                                                            } else {
                                                                t146 = t90;
                                                                u149 = u94;
                                                                u150 = u95;
                                                                u151 = u96;
                                                            }
                                                            t153 = t146;
                                                            u156 = u149;
                                                            u157 = u150;
                                                            u158 = u151;
                                                        }
                                                        t160 = *(int *)(((int)stk + 12));
                                                        u94 = u156;
                                                        u95 = u157;
                                                        u96 = u158;
                                                        t90 = t153;
                                                        t113 = t160;
                                                        t93 = (t93 + 0x10);
                                                        t113 = (t113 + 0x1);
                                                        *(unsigned int *)(((int)stk + 12)) = t113;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 12)) = 0x0;
                                                t163 = 0xC2A1B18;
                                                for (;;) {
                                                    t164 = *(int *)(((int)stk + 12));
                                                    t90 = t164;
                                                    t165 = *(int *)((t92 + 0x8));
                                                    if ((int)t90 >= (int)t165) {
                                                        break;
                                                    }
                                                    t166 = *(int *)((t93 + 0xC));
                                                    t167 = *(int *)((t92 + 0x1C));
                                                    t168 = ParkingCarInit(0xB, t91, t167, t93, t166);
                                                    t89 = t168;
                                                    t169 = *(int *)(((int)stk + 12));
                                                    t163 = t169;
                                                    t93 = (t93 + 0x10);
                                                    t163 = (t163 + 0x1);
                                                    *(unsigned int *)(((int)stk + 12)) = t163;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 12)) = 0x0;
                                            t172 = 0xC2A1B18;
                                            for (;;) {
                                                t173 = *(int *)(((int)stk + 12));
                                                t90 = t173;
                                                t174 = *(int *)((t92 + 0x8));
                                                if ((int)t90 >= (int)t174) {
                                                    break;
                                                }
                                                t175 = *(int *)((t93 + 0xC));
                                                t176 = *(int *)((t92 + 0x1C));
                                                t177 = ParkingCarInit(0x0, t91, t176, t93, t175);
                                                t89 = t177;
                                                t178 = *(int *)(((int)stk + 12));
                                                t172 = t178;
                                                t93 = (t93 + 0x10);
                                                t172 = (t172 + 0x1);
                                                *(unsigned int *)(((int)stk + 12)) = t172;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 12)) = 0x0;
                                        t181 = 0xC2A1B18;
                                        for (;;) {
                                            t182 = *(int *)(((int)stk + 12));
                                            t90 = t182;
                                            t183 = *(int *)((t92 + 0x8));
                                            if ((int)t90 >= (int)t183) {
                                                break;
                                            }
                                            t184 = extRand();
                                            t89 = t184;
                                            t181 = 0x6;
                                            t89 = (t89 & 0x7);
                                            if ((int)t89 < (int)t181) {
                                                t185 = *(int *)((t93 + 0xC));
                                                t90 = t185;
                                                t186 = courseCarType();
                                                t89 = t186;
                                                t187 = *(int *)((t92 + 0x1C));
                                                t188 = ParkingCarInit(t89, t91, t187, t93, t90);
                                                t89 = t188;
                                            }
                                            t191 = *(int *)(((int)stk + 12));
                                            t181 = t191;
                                            t93 = (t93 + 0x10);
                                            t181 = (t181 + 0x1);
                                            *(unsigned int *)(((int)stk + 12)) = t181;
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 12)) = 0x0;
                                t197 = 0xC2A1B18;
                                for (;;) {
                                    t198 = *(int *)(((int)stk + 12));
                                    t90 = t198;
                                    t199 = *(int *)((t92 + 0x8));
                                    if ((int)t90 >= (int)t199) {
                                        break;
                                    }
                                    t200 = extRand();
                                    t89 = t200;
                                    t197 = 0x6;
                                    t89 = (t89 & 0x7);
                                    if ((int)t89 < (int)t197) {
                                        t201 = *(int *)((t93 + 0xC));
                                        t90 = t201;
                                        t202 = courseCarType();
                                        t89 = t202;
                                        t203 = *(int *)((t92 + 0x1C));
                                        t204 = ParkingCarInit(t89, t91, t203, t93, t90);
                                        t89 = t204;
                                    }
                                    t207 = *(int *)(((int)stk + 12));
                                    t197 = t207;
                                    t93 = (t93 + 0x10);
                                    t197 = (t197 + 0x1);
                                    *(unsigned int *)(((int)stk + 12)) = t197;
                                }
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 12)) = 0x0;
                            t211 = 0xC2A4484;
                            for (;;) {
                                t212 = *(int *)(((int)stk + 12));
                                t90 = t212;
                                t213 = *(int *)((t92 + 0x8));
                                if ((int)t90 >= (int)t213) {
                                    break;
                                }
                                t211 = 0xC04981E;
                                t214 = extRand();
                                t89 = t214;
                                if ((t89 & 3) == 0) {
                                    t215 = *(int *)((t93 + 0xC));
                                    t211 = t215;
                                    t216 = courseCarType();
                                    t89 = t216;
                                    t217 = *(int *)((t92 + 0x1C));
                                    t218 = ParkingCarInit(t89, t91, t217, t93, t211);
                                    t89 = t218;
                                }
                                t220 = *(int *)(((int)stk + 12));
                                t211 = t220;
                                t93 = (t93 + 0x10);
                                t211 = (t211 + 0x1);
                                *(unsigned int *)(((int)stk + 12)) = t211;
                            }
                        }
                    }
                    *(unsigned int *)((t92 + 0x0)) = 0x1;
                    t226 = t90;
                }
                t90 = t226;
                t91 = (t91 + 0x1);
                t92 = (t92 + 0x20);
                continue;
            }
            break;
        }
        u242 = u94;
    }
    return u242;
}

float FUN_0c0370c4(int a4)
{
    float t3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u21;
    float u22;
    float u35;
    float t24;
    float u30;
    float t44;
    int t52;
    int t60;
    float u64;
    float u65;
    int t66;
    int t67;
    int t69;
    int t71;
    int t72;
    float u74;
    float u75;
    int t79;
    int t80;
    float u81;
    float u82;
    float u83;
    float u89;
    float u90;
    float u91;
    float u92;
    float u93;
    float u117;
    int t118;
    float t119;
    float u120;
    float u132;
    int t121;
    float u135;
    float u126;
    float u140;
    int stk[17] = {0};

    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x20), 120.0f);
    nlAddVector((((int)stk + 4) + 0xC), (a4 + 0x14));
    nlSubVector3op((((int)stk + 4) + 0xC), 0xC274274, (((int)stk + 4) + 0xC));
    *(float *)(((int)stk + 20)) = 0.0f;
    t3 = nlUnitVector((((int)stk + 4) + 0xC));
    u4 = *(float *)((a4 + 0x18));
    u5 = *(float *)0xC274278;
    if (u5 > u4) {
        u6 = *(float *)((a4 + 0x50));
        *(float *)((a4 + 0x50)) = (u6 + 0.00499999989f);
    } else {
        u7 = *(float *)((a4 + 0x18));
        if (u7 > (u5 + 50.0f)) {
            u8 = *(float *)((a4 + 0x50));
            *(float *)((a4 + 0x50)) = (u8 - 0.00499999989f);
        }
    }
    u21 = *(float *)(((0x50 + a4) + 0x0));
    u22 = *(float *)((a4 + 0x50));
    *(float *)((a4 + 0x50)) = (u22 + 0.099999994f * ((-u21) + 0.166666597f));
    if (0.0f > (u22 + 0.099999994f * ((-u21) + 0.166666597f))) {
        *(float *)((a4 + 0x50)) = 0.0f;
    }
    u35 = t3;
    if (t3 > 500.0f) {
        t24 = nlInnerProduct((((int)stk + 4) + 0xC), (a4 + 0x2C));
        if (t24 > 0.699999988f) {
            nlAddVector((a4 + 0x20), (a4 + 0x2C));
        }
        u30 = *(float *)((a4 + 0x50));
        *(float *)((a4 + 0x50)) = (u30 + 0.00499999989f);
        u35 = 500.0f;
    }
    nlScaleVector((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), (u35 * 0.00199999986f));
    nlAddVector((((int)stk + 4) + 0xC), 0xC096644);
    nlSubVector((((int)stk + 4) + 0xC), (a4 + 0x38));
    nlOuterProduct((a4 + 0x38), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    t44 = nlScalor((((int)stk + 4) + 0xC));
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    if (t44 > 0.0f) {
        nlRotate((((int)stk + 4) + 0xC), (int)(t44 * 50.0f));
    }
    SetCameraPosVelocity((a4 + 0x2C));
    t52 = *(int *)((a4 + 0x58));
    nlRotateAY(t52);
    nlObjPutUseViewMatrix(0xC627F40);
    GetRotVec((a4 + 0x2C));
    nlPushMatrix(0x0);
    FUN_0c078310();
    FUN_0c0771b0(0xC274280, (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    t60 = *(int *)((a4 + 0x54));
    nlRotateAY(t60);
    nlObjPutUseViewMatrix(0xC629978);
    nlPopMatrix(0x1);
    u64 = *(float *)(((int)stk + 24));
    u65 = *(float *)(((int)stk + 16));
    t66 = nlArcTan2((-u65), u64);
    t67 = t66;
    if ((int)(short)t66 > (int)0x1000) {
        t67 = 0x1000;
    }
    t69 = t67;
    if ((int)(short)t67 < (int)0xFFFFF000) {
        t69 = 0xFFFFF000;
    }
    t71 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t71 - ((int)(short)t69 >> 10));
    t72 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (int)((float)t72 * 0.979999959f);
    nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.979999959f);
    u74 = *(float *)((a4 + 0x24));
    *(float *)((a4 + 0x24)) = (u74 - 0.166666597f);
    u75 = *(float *)((a4 + 0x50));
    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x38), u75);
    nlAddVector((a4 + 0x20), (((int)stk + 4) + 0xC));
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    t79 = GetCollision2D((a4 + 0x14), 40.0f);
    t80 = *(int *)((t79 + 0x1C));
    if (t80 != -1) {
        u81 = *(float *)((t79 + 0x18));
        u82 = *(float *)((a4 + 0x18));
        if ((u81 + 100.0f) > u82) {
            u83 = *(float *)((a4 + 0x50));
            *(float *)((a4 + 0x50)) = (u83 + 0.00999999978f);
        }
        u89 = *(float *)((a4 + 0x18));
        u90 = *(float *)((t79 + 0x18));
        if (u90 > (u89 + -15.0f)) {
            u91 = *(float *)((t79 + 0x18));
            *(float *)((a4 + 0x18)) = (u91 + 15.0f);
            u92 = *(float *)((a4 + 0x24));
            if (0.0f > u92) {
                u93 = *(float *)((a4 + 0x24));
                *(float *)((a4 + 0x24)) = (u93 * -0.599999964f);
            }
            nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.899999976f);
        }
        CalcShadow4Normal(((int)stk + 4), (t79 + 0xC));
        nlPushUnitMatrix();
        nlTranslateV(t79);
        CalcShadow2Matrix(((int)stk + 4));
        nlScale(20.0f, 20.0f, 20.0f);
        nlTranslate(0.0f, 0.099999994f, 0.0f);
        nlSetScaleFactor(20.0f);
        nlObjPutUseViewMatrix(0xC55F218);
        nlPopMatrix(0x1);
    }
    u117 = *(float *)((a4 + 0x50));
    t118 = *(int *)(((0x54 + a4) + 0x0));
    *(unsigned int *)(((0x54 + a4) + 0x0)) = (int)((float)t118 + (8225.0f + 1000.0f * u117));
    t119 = nlLength((a4 + 0x14), 0xC179144);
    u120 = *(float *)0xC037654;
    u132 = t119;
    if (t119 > u120) {
        t121 = *(int *)0xC274290;
        if (t121 != 0) {
            Sound_Request(0x511A9, 0x0);
        } else {
            u126 = t119;
        }
        u132 = u126;
    }
    u135 = *(float *)0xC037664;
    if (t119 > u135) {
        nlCloseEvent(a4);
        *(unsigned int *)0xC27428C = 0x0;
    } else {
        u140 = u132;
    }
    return u140;
}
