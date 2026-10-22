/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutStringFixPfont(int, int, float, float, float, float);
float pfLength(int);
int pfSetFont(int);
int putString(int, int, float, float, float);
int putRecordUnit(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

int putRecordUnit(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int t4;
    int t5;
    float t6;
    int t7;
    float u13;
    float u17;
    int t31;
    int t32;
    float t33;
    int t34;
    float u40;
    float u44;
    int t60;
    int t75;
    int t117;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t123;
    int t70;
    int t71;
    int t72;
    int t73;
    float u26;
    int t64;
    int t65;
    int t66;
    int t67;
    float u53;
    int t59;
    int t61;
    int t106;
    int t107;
    int t102;
    int t103;
    int t110;
    int t111;
    int stk[26] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned char *)(((((int)stk + 4) + 0x2F) + 0x0)) = 0x0;
    pfSetFont(((*(int *)(((int)stk + 4))) & 0x3));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 4))) & 0x4);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 4))) & 0x8);
    if (a7 == 3) {
        t4 = 0x2;
        t5 = (((int)stk + 4) + 0x2F);
        for (;;) {
            if (t4 == 0) {
                break;
            }
            t4 = (t4 - 1);
            *(unsigned char *)(((t5 - 0x1) + 0x0)) = 0x20;
            t5 = (t5 - 0x1);
        }
        t6 = pfLength(0xC0A202C);
        t7 = *(int *)(((int)stk + 8));
        if ((*(int *)(((int)stk + 12))) != 0) {
            u13 = ((float)(((int)((unsigned int)((int)((unsigned int)((t7 + 0x2) * a8) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t7 + 0x2) * a8))) ? 1u : 0u))) >> 1) - (float)(a8 << 1));
            u13 = u13 + 0.5f * t6;
            u26 = (u13 + f4);
        } else {
            u17 = (((float)((t7 + 0x2) * a8) - (float)(a8 << 1)) + f4);
            if ((*(int *)(((int)stk + 16))) != 0) {
                u17 = ((f4 - (float)(a8 << 1)) + t6);
            }
            u26 = u17;
        }
        putString((*(int *)(((int)stk + 4))), 0xC0A202C, u26, f5, 1.0f);
        t71 = a5;
        t72 = t5;
    } else {
        if (a7 == 4) {
            t31 = 0x7;
            t32 = (((int)stk + 4) + 0x2F);
            for (;;) {
                if (t31 == 0) {
                    break;
                }
                t31 = (t31 - 1);
                *(unsigned char *)(((t32 - 0x1) + 0x0)) = 0x20;
                t32 = (t32 - 0x1);
            }
            t33 = pfLength(0xC0A2030);
            t34 = *(int *)(((int)stk + 8));
            if ((*(int *)(((int)stk + 12))) != 0) {
                u40 = ((float)(((int)((unsigned int)((int)((unsigned int)((t34 + 0x7) * a8) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t34 + 0x7) * a8))) ? 1u : 0u))) >> 1) - (float)(((a8 << 2) << 1) - a8));
                u40 = u40 + 0.5f * t33;
                u53 = (u40 + f4);
            } else {
                u44 = (((float)((t34 + 0x7) * a8) - (float)(((a8 << 2) << 1) - a8)) + f4);
                if ((*(int *)(((int)stk + 16))) != 0) {
                    u44 = ((f4 - (float)(((a8 << 2) << 1) - a8)) + t33);
                }
                u53 = u44;
            }
            putString((*(int *)(((int)stk + 4))), 0xC0A2030, u53, f5, 1.0f);
            t65 = a5;
            t66 = t32;
        } else {
            t60 = a5;
            if ((a7 == 5) && (a5 != -1)) {
                t59 = 0x2710;
                t60 = (0x7A6 + ((((((unsigned int)((unsigned int)((unsigned int)a5 >> 16) >> 2) >> 2) & 0xF) * 0xF4240) + ((((unsigned int)a5 >> 15) & 0x1F) * 0x2710)) + (((unsigned int)((unsigned int)a5 >> 16) >> 8) & 0x7F)));
                t61 = 0xFFFFFFF1;
            }
            t64 = t59;
            t65 = t60;
            t66 = (((int)stk + 4) + 0x2F);
            t67 = t61;
        }
        t70 = t64;
        t71 = t65;
        t72 = t66;
        t73 = t67;
    }
    t75 = *(int *)(((int)stk + 8));
    t117 = t72;
    if ((int)t75 <= 0) {
    } else {
        t76 = t70;
        t77 = t73;
        t78 = t75;
        t79 = 0x0;
        t80 = a5;
        t81 = a6;
        t82 = 0x1;
        t83 = t71;
        t84 = t72;
        for (;;) {
            if (a7 == 1) {
                if ((int)t79 < (int)0x3) {
                    t82 = 0x1;
                }
                if (t82 != 0) {
                    if (t79 != 2) {
                        if (t79 == 5) {
                            t80 = 0x2C;
                            *(unsigned char *)(((t84 - 0x1) + 0x0)) = t80;
                            t84 = (t84 - 0x1);
                        }
                    } else {
                        t80 = 0x2E;
                        *(unsigned char *)(((t84 - 0x1) + 0x0)) = t80;
                        t84 = (t84 - 0x1);
                    }
                } else {
                    if (t79 == 5) {
                        *(unsigned char *)(((t84 - 0x1) + 0x0)) = 0x20;
                        t84 = (t84 - 0x1);
                    }
                }
            } else {
                if (a7 == 2) {
                    t80 = 0x5;
                    if ((int)t79 < (int)t80) {
                        t82 = 0x1;
                    }
                    if (t79 == 2) {
                        t80 = 0x22;
                        *(unsigned char *)(((t84 - 0x1) + 0x0)) = t80;
                        t84 = (t84 - 0x1);
                    } else {
                        if (t79 == 4) {
                            t80 = 0x27;
                            *(unsigned char *)(((t84 - 0x1) + 0x0)) = t80;
                            t84 = (t84 - 0x1);
                        }
                    }
                } else {
                    if (a7 == 3) {
                        if ((int)t79 < (int)0x3) {
                            t82 = 0x1;
                        }
                        if (t79 == 2) {
                            t80 = 0x2E;
                            *(unsigned char *)(((t84 - 0x1) + 0x0)) = t80;
                            t84 = (t84 - 0x1);
                        }
                    } else {
                        if (a7 == 5) {
                            t78 = 0x8;
                            if ((int)t79 < (int)t78) {
                                t82 = 0x1;
                            }
                            if ((t79 == 4) || (t79 == 6)) {
                                t80 = 0x2F;
                                *(unsigned char *)(((t84 - 0x1) + 0x0)) = t80;
                                t84 = (t84 - 0x1);
                            }
                        }
                    }
                }
            }
            t80 = 0xA;
            if (t82 != 0) {
                if (t83 != -1) {
                    t78 = 0xC081134;
                    t76 = t83;
                    *(unsigned char *)(((t84 - 0x1) + 0x0)) = (((int)((unsigned int)t76 % (unsigned int)t80)) + 0x30);
                    t84 = (t84 - 0x1);
                    t103 = 0xC081134;
                } else {
                    t81 = 0x2D;
                    *(unsigned char *)(((t84 - 0x1) + 0x0)) = t81;
                    t84 = (t84 - 0x1);
                    t102 = t76;
                    t103 = t78;
                }
                t106 = t102;
                t107 = t103;
            } else {
                *(unsigned char *)(((t84 - 0x1) + 0x0)) = 0x20;
                t84 = (t84 - 0x1);
                t106 = t76;
                t107 = t78;
            }
            t76 = t106;
            t78 = t107;
            if (t83 != -1) {
                t77 = 0xC080FC4;
                t76 = t83;
                t83 = ((int)((unsigned int)t76 / (unsigned int)t80));
                if ((t83 == -1) || (t83 == 0)) {
                    t82 = 0x0;
                }
                t111 = 0xC080FC4;
            } else {
                t82 = 0x0;
                t110 = t76;
                t111 = t77;
            }
            t76 = t110;
            t77 = t111;
            t78 = (*(int *)(((int)stk + 8)));
            t79 = (t79 + 0x1);
            if ((int)t79 >= (int)t78) {
                break;
            }
        }
        t117 = t84;
    }
    t123 = t117;
    if (a7 == 1) {
        *(unsigned char *)(((t117 - 0x1) + 0x0)) = 0x24;
        t123 = (t117 - 0x1);
    }
    return (PutStringFixPfont((*(int *)(((int)stk + 4))), t123, f4, f5, (float)a8, 1.0f));
}
