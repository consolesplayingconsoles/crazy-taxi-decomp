/* Straight-line functions with calls and guards (batch gen_kp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Level_Calc(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
int putDriverName(int, int, int);
int putRecordFrame(int, int, float, float);
extern int putRecordUnit();
int putString(int, int, float, float, float);
void PutRecords(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5);

void PutRecords(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5)
{
    float u12;
    float u13;
    int t0;
    int t2;
    int t22;
    int t20;
    int t26;
    int t30;
    int t31;
    int t32;
    float u33;
    float u34;
    int t35;
    int t37;
    int t40;
    int t41;
    int t42;
    int t50;
    int t53;
    int t59;
    int t60;
    int t76;
    int t84;
    int t95;
    int t107;
    int t110;
    int t111;
    int t112;
    int t113;
    float u114;
    int t136;
    int t137;
    int t148;
    int t157;
    int t43;
    int t44;
    int t67;
    int t68;
    int t89;
    int t90;
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
        putRecordFrame(t2, ((a8 - (*(int *)(((int)stk + 20)))) + 0x1), f4, f5);
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
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 20)));
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
                t32 = (*(int *)(((int)stk + 8)));
                t37 = *(int *)(((int)stk + 12));
                t30 = t32;
                t32 = (t32 << 1);
                t32 = (t32 + t30);
                t32 = (t32 << 2);
                t32 = (t32 + t37);
                if ((int)a5 < 0) {
                    t31 = (*(int *)(((int)stk + 8)));
                    if ((int)t31 >= (int)0x1) {
                        t40 = t35;
                        t41 = t37;
                        for (;;) {
                            *(unsigned int *)(((int)stk + 40)) = t32;
                            t42 = *(int *)((t32 + 0x0));
                            if ((t42 != -1) && (t41 = t31, t41 = (t41 - 1), t30 = t41, t41 = (t41 << 1), t43 = *(int *)(((int)stk + 12)), t40 = t43, t41 = (t41 + t30), t41 = (t41 << 2), t41 = (t41 + t40), t44 = *(int *)((t41 + 0x0)), t30 = t44, t42 == t30)) {
                                t31 = (t31 - 1);
                                if ((int)t31 < (int)0x1) {
                                    break;
                                }
                                continue;
                            }
                            break;
                        }
                    }
                    t50 = ((int (*)(int, int, int, int, float, float))(putRecordUnit))(a4, (t31 + 0x1), 0x3, 0x0, u12, u34);
                } else {
                    t53 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, (*(signed char *)((t32 + 0x9))), 0x3, 0x0, (t22), u12, u34);
                }
                if ((a9 & 0x1) == 0) {
                    t59 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, (*(int *)((t32 + 0x0))), 0x8, (*(int *)(((int)stk + 16))), (t22), (*(float *)(((int)stk + 48))), u34);
                    t60 = *(signed char *)((t32 + 0x8));
                    *(volatile float *)(((int)stk + 52));
                    putDriverName(a4, t60, 0x0);
                    if ((int)a5 < 0) {
                        if ((*(signed char *)((t32 + 0x9))) != -1) {
                            t30 = 0xC28A4E8;
                            t30 = (t30 + 0x10);
                            t67 = t30;
                            t68 = ((short)((short)(*(signed char *)((t32 + 0x9))) * (short)0x788) + t30);
                        } else {
                            t68 = 0xC0A2044;
                        }
                        t30 = t67;
                        t30 = 0xC03B44C;
                        PutStringFixPfont(a4, t68, (*(float *)(((int)stk + 28))), u34, ((float)t22 * 1.29999995f), 1.0f);
                    } else {
                        t76 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, (*(int *)((t32 + 0x4))), 0x8, 0x5, (t22), (*(float *)(((int)stk + 28))), u34);
                    }
                } else {
                    t84 = ((int (*)(int, int, int, int, float, float))(putRecordUnit))(a4, (*(int *)((t32 + 0x0))), 0x8, (*(int *)(((int)stk + 16))), (*(float *)(((int)stk + 44))), u34);
                    if ((int)a5 < 0) {
                        if ((*(signed char *)((t32 + 0x9))) != -1) {
                            t30 = 0xC28A4E8;
                            t30 = (t30 + 0x10);
                            t89 = t30;
                            t90 = ((short)((short)(*(signed char *)((t32 + 0x9))) * (short)0x788) + t30);
                        } else {
                            t90 = 0xC0A2044;
                        }
                        t30 = t89;
                        PutStringFixPfont(a4, t90, (*(float *)(((int)stk + 24))), u34, ((float)t22 * 1.29999995f), 1.0f);
                    } else {
                        t95 = *(signed char *)((t32 + 0x8));
                        *(volatile float *)(((int)stk + 24));
                        putDriverName(a4, t95, 0x0);
                    }
                }
                t30 = (*(int *)(((int)stk + 8)));
                u33 = (20.0f);
                t30 = (t30 + 0x1);
                u34 = (u34 + u33);
                *(unsigned int *)(((int)stk + 8)) = t30;
                continue;
            }
            break;
        }
    } else {
        t107 = ((short)((short)(a6 - 4) * (short)0x78) + (0x1E8 + t26));
        if ((int)a6 < (int)0x4) {
            t107 = ((short)((short)a6 * (short)0x78) + (t26 + 0x8));
        }
        *(unsigned int *)(((int)stk + 8)) = t107;
        t110 = *(int *)(((int)stk + 20));
        t111 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 16)) = ((((t110 << 1) + t110) << 2) + t111);
        *(unsigned int *)(((int)stk + 12)) = ((((t110 << 1) + t110) << 2) + t111);
        *(unsigned int *)(((int)stk + 20)) = ((((t110 << 1) + t110) << 2) + t111);
        *(float *)(((int)stk + 36)) = (u12 + 16.0f);
        *(float *)(((int)stk + 60)) = (u12 + 144.0f);
        *(float *)(((int)stk + 56)) = (u12 + 284.0f);
        *(float *)(((int)stk + 32)) = (u12 + 400.0f);
        if ((int)t110 > (int)a8) {
        } else {
            t112 = 0x2;
            t113 = t110;
            u114 = u13;
            for (;;) {
                if ((int)(*(signed char *)((((((t113 << 1) + t113) << 2) + (*(int *)(((int)stk + 8)))) + 0x8))) < 0) {
                    putString(a4, 0xC0A2040, (*(float *)(((int)stk + 36))), u114, 1.0f);
                } else {
                    t112 = (Level_Calc((*(int *)((((((t113 << 1) + t113) << 2) + (*(int *)(((int)stk + 8)))) + 0x0))), 0x3, 0x4));
                    if (t112 == 0x3E7) {
                        t112 = 0x0;
                    } else {
                        if (t112 == 99) {
                            t112 = 0x1;
                        } else {
                            t112 = (t112 + 0x2);
                        }
                    }
                    putString(a4, ((((t112 << 2) << 2) << 1) + 0xC09FD50), (*(float *)(((int)stk + 36))), u114, 1.0f);
                }
                t112 = t113;
                t112 = (t112 << 1);
                t112 = (t112 + t113);
                t112 = (t112 << 2);
                t112 = (t112 + (*(int *)(((int)stk + 8))));
                t136 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, (*(int *)((t112 + 0x0))), 0x8, 0x1, (t22), (*(float *)(((int)stk + 60))), u114);
                t137 = *(signed char *)((t112 + 0x8));
                *(volatile float *)(((int)stk + 56));
                putDriverName(a4, t137, 0x0);
                if ((int)a5 < 0) {
                    t148 = 0xC0A2044;
                    if ((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x9))) != -1) {
                        t148 = ((short)((short)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x9))) * (short)0x788) + 0xC28A4F8);
                    }
                    PutStringFixPfont(a4, t148, (*(float *)(((int)stk + 32))), u114, ((float)t22 * 1.29999995f), 1.0f);
                } else {
                    t157 = ((int (*)(int, int, int, int, int, float, float))(putRecordUnit))(a4, (*(int *)(((*(int *)(((int)stk + 16))) + 0x4))), 0x8, 0x5, (t22), (*(float *)(((int)stk + 32))), u114);
                }
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0xC);
                t113 = (t113 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0xC);
                u114 = (u114 + 20.0f);
                if ((int)t113 <= (int)a8) continue;
                break;
            }
        }
    }
}
