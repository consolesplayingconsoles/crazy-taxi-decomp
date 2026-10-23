/* Straight-line functions with calls and guards (batch gen_agh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ParkingCarInit(int, int, int, int, int);
int courseCarType(int);
int extRand(void);
float nlLength(int, int, float, float);
float parkingControl(int a4, int a5, int a6, int a7, float f4, float f5);

float parkingControl(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    int t22;
    int t23;
    int t26;
    int t27;
    int t71;
    float u82;
    float u83;
    int t32;
    int t33;
    float u34;
    int t37;
    float u38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    float u44;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    float u92;
    float u93;
    int t103;
    int t112;
    int t168;
    int t178;
    int t188;
    int t205;
    int t220;
    float u252;
    int t74;
    float u80;
    float u81;
    int t58;
    int t61;
    float u67;
    float u68;
    int t46;
    int t49;
    float u55;
    float u91;
    int t236;
    int t158;
    float u161;
    float u162;
    float u163;
    int t128;
    int t130;
    int t131;
    int t151;
    float u154;
    float u155;
    float u156;
    int t145;
    int t147;
    int t148;
    int stk[15];

    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(int *)0xC1EE210;
    t1 = *(int *)0xC1EE214;
    if (a4 == 0) {
        *(unsigned int *)0xC2A447C = 0x0;
        *(unsigned int *)0xC2A4480 = 0x0;
        *(unsigned int *)0xC2A4484 = 0x0;
        if (((t0 + t1) != 0) && ((t0 + t1) != 17)) {
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
        } else {
            *(unsigned int *)0xC2A447C = 0xC0F1878;
            *(unsigned int *)0xC2A4480 = 0x10;
            *(unsigned int *)0xC2A4484 = 0xC0EF7F8;
        }
        t22 = 0x0;
        t23 = 0x0;
        for (;;) {
            if ((int)t23 >= (int)(*(int *)0xC2A4480)) {
                break;
            }
            t23 = (t23 + 0x1);
            t26 = ((*(int *)0xC2A447C) + t22);
            t22 = (t22 + 0x20);
            *(unsigned int *)((t26 + 0x0)) = 0x0;
        }
    } else {
        t27 = *(int *)0xC2A447C;
        t71 = 0xC1EE210;
        u82 = f4;
        u83 = f5;
        if ((t0 + t1) == 15) {
            if (35.0f > (*(float *)(((*(int *)(((int)stk + 20))) + 0x4)))) {
                *(float *)((t27 + 0x58)) = 500.0f;
                *(float *)((t27 + 0x38)) = 500.0f;
                *(float *)((t27 + 0x18)) = 500.0f;
                t32 = *(int *)0xC2A447C;
                t33 = *(int *)0xC2A447C;
                u34 = *(float *)0xC2A1B18;
                *(float *)(((0x100 + t32) + 0x18)) = (-30.0f - u34);
                *(float *)(((0xE0 + t32) + 0x18)) = (-30.0f - u34);
                *(float *)(((0xC0 + t32) + 0x18)) = (-30.0f - u34);
                *(float *)(((0xA0 + t32) + 0x18)) = (-30.0f - u34);
                *(float *)(((0x80 + t32) + 0x18)) = (-30.0f - u34);
                *(float *)(((t33 + 0x60) + 0x18)) = (-30.0f - u34);
                t58 = 0xC2A1B18;
                t61 = (0xC0 + t32);
                u67 = u34;
                u68 = (-30.0f - u34);
            } else {
                if (105.0f > (*(float *)(((*(int *)(((int)stk + 20))) + 0x4)))) {
                    *(float *)(((0xA0 + t27) + 0x18)) = 500.0f;
                    *(float *)(((0x80 + t27) + 0x18)) = 500.0f;
                    *(float *)((t27 + 0x78)) = 500.0f;
                    t37 = *(int *)0xC2A447C;
                    u38 = *(float *)0xC2A1B18;
                    *(float *)(((0x100 + t37) + 0x18)) = (-30.0f - u38);
                    *(float *)(((0xE0 + t37) + 0x18)) = (-30.0f - u38);
                    *(float *)(((0xC0 + t37) + 0x18)) = (-30.0f - u38);
                    *(float *)(((t37 + 0x40) + 0x18)) = (-30.0f - u38);
                    *(float *)(((t37 + 0x20) + 0x18)) = (-30.0f - u38);
                    *(float *)((t37 + 0x18)) = (-30.0f - u38);
                    t46 = (t37 + 0x40);
                    t49 = (0xC0 + t37);
                    u55 = (-30.0f - u38);
                } else {
                    *(float *)(((0x100 + t27) + 0x18)) = 500.0f;
                    *(float *)(((0xE0 + t27) + 0x18)) = 500.0f;
                    *(float *)(((0xC0 + t27) + 0x18)) = 500.0f;
                    t39 = *(int *)0xC2A447C;
                    t40 = *(int *)0xC2A447C;
                    t41 = *(int *)0xC2A447C;
                    t42 = *(int *)0xC2A447C;
                    t43 = *(int *)0xC2A447C;
                    u44 = *(float *)0xC2A1B18;
                    *(float *)(((0x18 + (0xA0 + t41)) + 0x0)) = (-30.0f - u44);
                    *(float *)(((0x18 + (0x80 + t41)) + 0x0)) = (-30.0f - u44);
                    *(float *)((0x18 + (t42 + 0x60))) = (-30.0f - u44);
                    *(float *)(((t43 + 0x40) + 0x18)) = (-30.0f - u44);
                    *(float *)(((0x18 + (t40 + 0x20)) + 0x0)) = (-30.0f - u44);
                    *(float *)(((0x18 + t39) + 0x0)) = (-30.0f - u44);
                    t46 = (0x18 + t39);
                    t49 = (0xC0 + t27);
                    u55 = (-30.0f - u44);
                }
                t58 = t46;
                t61 = t49;
                u67 = 105.0f;
                u68 = u55;
            }
            t71 = t58;
            t74 = t61;
            u80 = u67;
            u81 = 35.0f;
            u82 = u68;
            u83 = 500.0f;
        }
        t85 = *(int *)0xC2A447C;
        *(unsigned int *)(((int)stk + 16)) = 0xC0A2220;
        *(unsigned int *)(((int)stk + 16)) = 0xC0A2220;
        t86 = 0xC0425E0;
        t87 = t71;
        t88 = 0x0;
        t89 = t85;
        t90 = t74;
        u92 = u80;
        u93 = u81;
        for (;;) {
            if ((int)t88 < (int)(*(int *)0xC2A4480)) {
                u91 = (nlLength((*(int *)(((int)stk + 20))), (t89 + 0xC), u82, u83));
                t86 = 0x18;
                u93 = (*(float *)((t89 + t86)));
                u92 = (*(float *)0xC2A1B18);
                u92 = (u92 + u93);
                u92 = (u92 + 30.0f);
                if (!(u92 > u91)) {
                    *(unsigned int *)((t89 + 0x0)) = 0x0;
                } else {
                    t87 = (*(int *)((t89 + 0x0)));
                    if (t87 != 0) {
                    } else {
                        t90 = t88;
                        t90 = (t90 << 2);
                        t90 = (t90 + t88);
                        t90 = (t90 << 2);
                        t86 = (*(int *)((t89 + 0x4)));
                        t90 = (t90 << 2);
                        t87 = (*(int *)0xC2A4484);
                        t90 = (t90 << 2);
                        t90 = (t90 + t87);
                        if (t86 != 1) {
                            if (t86 != 2) {
                                if (t86 == 3) {
                                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                                    t103 = 0xC2A4484;
                                    for (;;) {
                                        t87 = (*(int *)(((int)stk + 12)));
                                        if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                            break;
                                        }
                                        t103 = (*(int *)((t90 + 0xC)));
                                        t86 = (courseCarType(0x1));
                                        t86 = (ParkingCarInit(t86, t88, (*(int *)((t89 + 0x1C))), t90, (t103)));
                                        t103 = (*(int *)(((int)stk + 12)));
                                        t90 = (t90 + 0x10);
                                        t103 = (t103 + 0x1);
                                        *(unsigned int *)(((int)stk + 12)) = t103;
                                    }
                                } else {
                                    if (t86 != 4) {
                                        if (t86 != 5) {
                                            if (t86 != 6) {
                                                if (t86 == 7) {
                                                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                                                    t112 = 0xC2A1B18;
                                                    for (;;) {
                                                        t87 = (*(int *)(((int)stk + 12)));
                                                        if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                                            break;
                                                        }
                                                        if (t88 == 0) {
                                                            t112 = 0xB;
                                                            if ((int)(*(int *)(((int)stk + 12))) < (int)t112) {
                                                                t128 = ((*(int *)((t90 + 0xC))) | 0x80000000);
                                                                t130 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                                                                t131 = (*(int *)((t89 + 0x1C)));
                                                            } else {
                                                                t128 = ((*(int *)((t90 + 0xC))) | 0x80000000);
                                                                t130 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x1);
                                                                t131 = (*(int *)((t89 + 0x1C)));
                                                            }
                                                            t86 = (ParkingCarInit(t130, t88, t131, t90, t128));
                                                        } else {
                                                            t86 = t88;
                                                            if (t86 == 1) {
                                                                t112 = (*(int *)(((int)stk + 12)));
                                                                if ((int)t112 < (int)0x7) {
                                                                    t87 = (*(int *)((t90 + 0xC)));
                                                                    t87 = (t87 | 0x80000000);
                                                                    t145 = (t87);
                                                                    t147 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x1);
                                                                    t148 = (*(int *)((t89 + 0x1C)));
                                                                } else {
                                                                    t145 = ((*(int *)((t90 + 0xC))) | 0x80000000);
                                                                    t147 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x2);
                                                                    t148 = (*(int *)((t89 + 0x1C)));
                                                                }
                                                                t86 = (ParkingCarInit(t147, t88, t148, t90, t145));
                                                            } else {
                                                                t151 = t87;
                                                                u154 = u91;
                                                                u155 = u92;
                                                                u156 = u93;
                                                            }
                                                            t158 = t151;
                                                            u161 = u154;
                                                            u162 = u155;
                                                            u163 = u156;
                                                        }
                                                        u91 = u161;
                                                        u92 = u162;
                                                        u93 = u163;
                                                        t87 = t158;
                                                        t112 = (*(int *)(((int)stk + 12)));
                                                        t90 = (t90 + 0x10);
                                                        t112 = (t112 + 0x1);
                                                        *(unsigned int *)(((int)stk + 12)) = t112;
                                                    }
                                                }
                                            } else {
                                                *(unsigned int *)(((int)stk + 12)) = 0x0;
                                                t168 = 0xC2A1B18;
                                                for (;;) {
                                                    t87 = (*(int *)(((int)stk + 12)));
                                                    if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                                        break;
                                                    }
                                                    t86 = (ParkingCarInit(0xB, t88, (*(int *)((t89 + 0x1C))), t90, ((*(int *)((t90 + 0xC))))));
                                                    t168 = (*(int *)(((int)stk + 12)));
                                                    t90 = (t90 + 0x10);
                                                    t168 = (t168 + 0x1);
                                                    *(unsigned int *)(((int)stk + 12)) = t168;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((int)stk + 12)) = 0x0;
                                            t178 = 0xC2A1B18;
                                            for (;;) {
                                                t87 = (*(int *)(((int)stk + 12)));
                                                if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                                    break;
                                                }
                                                t86 = (ParkingCarInit(0x0, t88, (*(int *)((t89 + 0x1C))), t90, ((*(int *)((t90 + 0xC))))));
                                                t178 = (*(int *)(((int)stk + 12)));
                                                t90 = (t90 + 0x10);
                                                t178 = (t178 + 0x1);
                                                *(unsigned int *)(((int)stk + 12)) = t178;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)(((int)stk + 12)) = 0x0;
                                        t188 = 0xC2A1B18;
                                        for (;;) {
                                            t87 = (*(int *)(((int)stk + 12)));
                                            if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                                break;
                                            }
                                            t86 = (extRand());
                                            t188 = 0x6;
                                            t86 = (t86 & 0x7);
                                            if ((int)t86 < (int)t188) {
                                                t87 = (*(int *)((t90 + 0xC)));
                                                t86 = (courseCarType(0x3));
                                                t86 = (ParkingCarInit(t86, t88, (*(int *)((t89 + 0x1C))), t90, (t87)));
                                            }
                                            t188 = (*(int *)(((int)stk + 12)));
                                            t90 = (t90 + 0x10);
                                            t188 = (t188 + 0x1);
                                            *(unsigned int *)(((int)stk + 12)) = t188;
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 12)) = 0x0;
                                t205 = 0xC2A1B18;
                                for (;;) {
                                    t87 = (*(int *)(((int)stk + 12)));
                                    if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                        break;
                                    }
                                    t86 = (extRand());
                                    t205 = 0x6;
                                    t86 = (t86 & 0x7);
                                    if ((int)t86 < (int)t205) {
                                        t87 = (*(int *)((t90 + 0xC)));
                                        t86 = (courseCarType(0x1));
                                        t86 = (ParkingCarInit(t86, t88, (*(int *)((t89 + 0x1C))), t90, (t87)));
                                    }
                                    t205 = (*(int *)(((int)stk + 12)));
                                    t90 = (t90 + 0x10);
                                    t205 = (t205 + 0x1);
                                    *(unsigned int *)(((int)stk + 12)) = t205;
                                }
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 12)) = 0x0;
                            t220 = 0xC2A4484;
                            for (;;) {
                                t87 = (*(int *)(((int)stk + 12)));
                                if ((int)t87 >= (int)(*(int *)((t89 + 0x8)))) {
                                    break;
                                }
                                t220 = 0xC04981E;
                                t86 = (extRand());
                                if ((t86 & 3) == 0) {
                                    t220 = (*(int *)((t90 + 0xC)));
                                    t86 = (courseCarType(0x1));
                                    t86 = (ParkingCarInit(t86, t88, (*(int *)((t89 + 0x1C))), t90, (t220)));
                                }
                                t220 = (*(int *)(((int)stk + 12)));
                                t90 = (t90 + 0x10);
                                t220 = (t220 + 0x1);
                                *(unsigned int *)(((int)stk + 12)) = t220;
                            }
                        }
                    }
                    *(unsigned int *)((t89 + 0x0)) = 0x1;
                    t236 = t87;
                }
                t87 = t236;
                t88 = (t88 + 0x1);
                t89 = (t89 + 0x20);
                continue;
            }
            break;
        }
        u252 = u91;
    }
    return u252;
}
