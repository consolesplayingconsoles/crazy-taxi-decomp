/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int putDriverName(int, int, int);
int putRecordFrame(int, int, float, float);
int Level_Calc(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
extern int putRecordUnit();
int putString(int, int, float, float, float);
void PutRecords(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5);

void PutRecords(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5)
{
    float u12;
    float u13;
    int t0;
    int t2;
    int t4;
    int t22;
    int t20;
    int t26;
    int t29;
    int t30;
    int t31;
    int t32;
    float u33;
    float u34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t49;
    int t50;
    int t51;
    int t52;
    int t54;
    float u55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t62;
    int t66;
    int t63;
    float u69;
    int t71;
    float u72;
    int t73;
    int t74;
    float u79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t87;
    int t84;
    float u90;
    int t92;
    int t101;
    float u102;
    int t104;
    int t107;
    int t108;
    int t109;
    int t110;
    float u111;
    int t112;
    int t113;
    float u114;
    int t116;
    int t117;
    int t118;
    float u125;
    int t129;
    int t130;
    int t131;
    float u132;
    int t133;
    int t134;
    int t137;
    int t138;
    int t143;
    int t139;
    int t140;
    float u146;
    int t148;
    int t149;
    float u150;
    int t151;
    int t152;
    int t156;
    int t157;
    int t158;
    int t65;
    int t86;
    int stk[29] = {0};

    *(unsigned int *)(((int)stk + 20)) = a7;
    u12 = f4;
    u13 = f5;
    if ((a9 & 0x2) != 0) {
        t0 = 0x2;
        if ((int)a6 < (int)0x8) {
            t0 = 0x0;
        }
        t2 = t0;
        if ((int)a5 >= 0) {
            t2 = (t0 + 0x1);
        }
        t4 = *(int *)(((int)stk + 20));
        putRecordFrame(t2, ((a8 - t4) + 0x1), f4, f5);
        u12 = (f4 + 40.0f);
        u13 = (f5 + 19.0f);
    }
    t22 = 0xE;
    if ((a4 & 0x1) != 0) {
    } else {
        t20 = 0x12;
        if ((a4 & 0x2) != 0) {
        } else {
            t20 = 0xC;
        }
        t22 = t20;
    }
    t26 = ((short)((short)a5 * (short)0x788) + 0xC28A4F8);
    if ((int)a5 < 0) {
        t26 = 0xC2A1258;
    }
    if ((int)a6 >= (int)0x8) {
        *(unsigned int *)(((int)stk + 12)) = ((short)((short)(a6 - 8) * (short)0x3C) + (0x3C8 + t26));
        if ((unsigned int)(a6 - 8) < (unsigned int)0x10) {
            switch (((a6 - 8) << 1)) {
                case 0:
                {
                    *(unsigned int *)(((int)stk + 16)) = 0x3;
                }
                    break;
                case 2:
                case 4:
                case 6:
                case 10:
                case 12:
                case 14:
                case 16:
                case 18:
                case 20:
                case 22:
                case 26:
                case 28:
                case 30:
                {
                    *(unsigned int *)(((int)stk + 16)) = 0x2;
                }
                    break;
                default:
                {
                    *(unsigned int *)(((int)stk + 16)) = 0x4;
                }
                    break;
            }
        } else {
            *(unsigned int *)(((int)stk + 16)) = 0x3;
        }
        t29 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 8)) = t29;
        *(float *)(((int)stk + 48)) = (u12 + 116.0f);
        *(float *)(((int)stk + 52)) = (u12 + 268.0f);
        *(float *)(((int)stk + 28)) = (u12 + 384.0f);
        *(float *)(((int)stk + 44)) = (u12 + 104.0f);
        *(float *)(((int)stk + 24)) = (u12 + 252.0f);
        t30 = 0x8;
        t31 = 0x2;
        t32 = a6;
        u33 = 252.0f;
        u34 = u13;
        for (;;) {
            t35 = *(int *)(((int)stk + 8));
            if ((int)t35 <= (int)a8) {
                t36 = *(int *)(((int)stk + 8));
                t32 = t36;
                t37 = *(int *)(((int)stk + 12));
                t30 = t32;
                t32 = (t32 << 1);
                t32 = (t32 + t30);
                t32 = (t32 << 2);
                t32 = (t32 + t37);
                if ((int)a5 < 0) {
                    t38 = *(int *)(((int)stk + 8));
                    t31 = t38;
                    if ((int)t31 >= (int)0x1) {
                        t39 = t35;
                        t40 = t37;
                        for (;;) {
                            *(unsigned int *)(((int)stk + 40)) = t32;
                            t41 = *(int *)((t32 + 0x0));
                            if (t41 != -1) {
                                t40 = t31;
                                t40 = (t40 - 1);
                                t30 = t40;
                                t40 = (t40 << 1);
                                t42 = *(int *)(((int)stk + 12));
                                t39 = t42;
                                t40 = (t40 + t30);
                                t40 = (t40 << 2);
                                t40 = (t40 + t39);
                                t43 = *(int *)((t40 + 0x0));
                                t30 = t43;
                                if (t41 == t30) {
                                    t31 = (t31 - 1);
                                    if ((int)t31 < (int)0x1) {
                                        break;
                                    }
                                    continue;
                                }
                                break;
                            }
                            break;
                        }
                    }
                    t49 = ((int (*)(int, int, int, int, float, float))(putRecordUnit))(a4, (t31 + 0x1), 0x3, 0x0, u12, u34);
                } else {
                    t50 = t22;
                    t51 = *(signed char *)((t32 + 0x9));
                    t52 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, t51, 0x3, 0x0, t50, u12, u34);
                }
                if ((a9 & 0x1) == 0) {
                    t54 = t22;
                    u55 = *(float *)(((int)stk + 48));
                    t56 = *(int *)((t32 + 0x0));
                    t57 = *(int *)(((int)stk + 16));
                    t58 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, t56, 0x8, t57, t54, u55, u34);
                    t59 = *(signed char *)((t32 + 0x8));
                    *(volatile float *)(((int)stk + 52));
                    putDriverName(a4, t59, 0x0);
                    if ((int)a5 < 0) {
                        t62 = *(signed char *)((t32 + 0x9));
                        t66 = 0xC0A2044;
                        if (t62 != -1) {
                            t63 = *(signed char *)((t32 + 0x9));
                            t30 = 0xC28A4E8;
                            t30 = (t30 + 0x10);
                            t65 = t30;
                            t66 = ((short)((short)t63 * (short)0x788) + t30);
                        }
                        t30 = t65;
                        t30 = 0xC03B44C;
                        u69 = *(float *)(((int)stk + 28));
                        PutStringFixPfont(a4, t66, u69, u34, ((float)t22 * 1.29999995f), 1.0f);
                    } else {
                        t71 = t22;
                        u72 = *(float *)(((int)stk + 28));
                        t73 = *(int *)((t32 + 0x4));
                        t74 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, t73, 0x8, 0x5, t71, u72, u34);
                    }
                } else {
                    u79 = *(float *)(((int)stk + 44));
                    t80 = *(int *)((t32 + 0x0));
                    t81 = *(int *)(((int)stk + 16));
                    t82 = ((int (*)(int, int, int, int, float, float))(putRecordUnit))(a4, t80, 0x8, t81, u79, u34);
                    if ((int)a5 < 0) {
                        t83 = *(signed char *)((t32 + 0x9));
                        t87 = 0xC0A2044;
                        if (t83 != -1) {
                            t84 = *(signed char *)((t32 + 0x9));
                            t30 = 0xC28A4E8;
                            t30 = (t30 + 0x10);
                            t86 = t30;
                            t87 = ((short)((short)t84 * (short)0x788) + t30);
                        }
                        t30 = t86;
                        u90 = *(float *)(((int)stk + 24));
                        PutStringFixPfont(a4, t87, u90, u34, ((float)t22 * 1.29999995f), 1.0f);
                    } else {
                        t92 = *(signed char *)((t32 + 0x8));
                        *(volatile float *)(((int)stk + 24));
                        putDriverName(a4, t92, 0x0);
                    }
                }
                t101 = *(int *)(((int)stk + 8));
                t30 = t101;
                u102 = *(float *)0xC03D3D4;
                u33 = u102;
                t30 = (t30 + 0x1);
                u34 = (u34 + u33);
                *(unsigned int *)(((int)stk + 8)) = t30;
                continue;
            }
            break;
        }
    } else {
        t104 = ((short)((short)(a6 - 4) * (short)0x78) + (0x1E8 + t26));
        if ((int)a6 < (int)0x4) {
            t104 = ((short)((short)a6 * (short)0x78) + (t26 + 0x8));
        }
        *(unsigned int *)(((int)stk + 8)) = t104;
        t107 = *(int *)(((int)stk + 20));
        t108 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 16)) = ((((t107 << 1) + t107) << 2) + t108);
        *(unsigned int *)(((int)stk + 12)) = ((((t107 << 1) + t107) << 2) + t108);
        *(unsigned int *)(((int)stk + 20)) = ((((t107 << 1) + t107) << 2) + t108);
        *(float *)(((int)stk + 36)) = (u12 + 16.0f);
        *(float *)(((int)stk + 60)) = (u12 + 144.0f);
        *(float *)(((int)stk + 56)) = (u12 + 284.0f);
        *(float *)(((int)stk + 32)) = (u12 + 400.0f);
        if ((int)t107 > (int)a8) {
        } else {
            t109 = 0x2;
            t110 = t107;
            u111 = u13;
            for (;;) {
                t112 = *(int *)(((int)stk + 8));
                t113 = *(signed char *)((((((t110 << 1) + t110) << 2) + t112) + 0x8));
                if ((int)t113 < 0) {
                    u114 = *(float *)(((int)stk + 36));
                    putString(a4, 0xC0A2040, u114, u111, 1.0f);
                } else {
                    t116 = *(int *)(((int)stk + 8));
                    t117 = *(int *)((((((t110 << 1) + t110) << 2) + t116) + 0x0));
                    t118 = Level_Calc(t117, 0x3, 0x4);
                    t109 = t118;
                    if (t109 == 0x3E7) {
                        t109 = 0x0;
                    } else {
                        if (t109 == 99) {
                            t109 = 0x1;
                        } else {
                            t109 = (t109 + 0x2);
                        }
                    }
                    u125 = *(float *)(((int)stk + 36));
                    putString(a4, ((((t109 << 2) << 2) << 1) + 0xC09FD50), u125, u111, 1.0f);
                }
                t109 = t110;
                t129 = t22;
                t109 = (t109 << 1);
                t130 = *(int *)(((int)stk + 8));
                t109 = (t109 + t110);
                t109 = (t109 << 2);
                t109 = (t109 + t130);
                t131 = *(int *)((t109 + 0x0));
                u132 = *(float *)(((int)stk + 60));
                t133 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, t131, 0x8, 0x1, t129, u132, u111);
                t134 = *(signed char *)((t109 + 0x8));
                *(volatile float *)(((int)stk + 56));
                putDriverName(a4, t134, 0x0);
                if ((int)a5 < 0) {
                    t137 = *(int *)(((int)stk + 20));
                    t138 = *(signed char *)((t137 + 0x9));
                    t143 = 0xC0A2044;
                    if (t138 != -1) {
                        t139 = *(int *)(((int)stk + 12));
                        t140 = *(signed char *)((t139 + 0x9));
                        t143 = ((short)((short)t140 * (short)0x788) + 0xC28A4F8);
                    }
                    u146 = *(float *)(((int)stk + 32));
                    PutStringFixPfont(a4, t143, u146, u111, ((float)t22 * 1.29999995f), 1.0f);
                } else {
                    t148 = t22;
                    t149 = *(int *)(((int)stk + 16));
                    u150 = *(float *)(((int)stk + 32));
                    t151 = *(int *)((t149 + 0x4));
                    t152 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, t151, 0x8, 0x5, t148, u150, u111);
                }
                t156 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t156 + 0xC);
                t110 = (t110 + 0x1);
                t157 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t157 + 0xC);
                t158 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t158 + 0xC);
                u111 = (u111 + 20.0f);
                if ((int)t110 <= (int)a8) continue;
                break;
            }
        }
    }
}
