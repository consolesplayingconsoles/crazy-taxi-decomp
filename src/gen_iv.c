/* Straight-line functions with calls and guards (batch gen_iv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _sub(int, int, int, int);
int _lsft(int, int);
int _add(int, int, int);
int _rsft(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int _div64(int a4, int a5, int a6, int a7);

int _div64(int a4, int a5, int a6, int a7)
{
    int t1;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t17;
    int t20;
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
    int t38;
    int t41;
    int t44;
    int t47;
    int t50;
    int t53;
    int t56;
    int t59;
    int t64;
    int t69;
    int t74;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t92;
    int t93;
    int t95;
    int t102;
    int t103;
    int t105;
    int t112;
    int t113;
    int t115;
    int t122;
    int t123;
    int t125;
    int t132;
    int t133;
    int t135;
    int t142;
    int t143;
    int t145;
    int t152;
    int t153;
    int t155;
    int t162;
    int t163;
    int t165;
    int t172;
    int t173;
    int t175;
    int t181;
    int t182;
    int t76;
    int t71;
    int t66;
    int t61;
    int stk[23] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    memset((((int)stk + 4) + 0x2C), 0x0, 0x4);
    t1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x2C) + 0x4);
    memmove(((((int)stk + 4) + 0x2C) + 0x4), t1, 0x8);
    memset((((int)stk + 4) + 0x20), 0x0, 0x4);
    t4 = *(int *)(((int)stk + 8));
    memmove(((((int)stk + 4) + 0x20) + 0x4), t4, 0x8);
    memset((((int)stk + 4) + 0x10), 0x0, 0x10);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0xB);
    t7 = 0xC0895BC;
    t8 = 0x42;
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t9 = _lsft((((int)stk + 4) + 0x10), 0xC);
        t7 = t9;
        t10 = _sub(0x0, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), 0xC);
        t7 = t10;
        if ((int)t7 >= 0) {
            t11 = *(int *)(((int)stk + 4));
            t12 = *(signed char *)((t11 + 0x0));
            *(unsigned char *)((t11 + 0x0)) = (t12 + 0x1);
        } else {
            t13 = _add((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), 0xC);
            t7 = t13;
        }
        t17 = _lsft((((int)stk + 4) + 0x2C), 0xC);
        t7 = t17;
        t8 = (t8 - 1);
    }
    t20 = 0x2;
    for (;;) {
        if (t20 == 0) {
            break;
        }
        _rsft((((int)stk + 4) + 0x10), 0x10);
        t20 = (t20 - 1);
    }
    t22 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x0));
    if (t22 == 0) {
        t23 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x1));
        if (t23 == 0) {
            t24 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x2));
            if (t24 == 0) {
                t25 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x3));
                if (t25 == 0) {
                    t26 = *(int *)(((int)stk + 16));
                    t27 = *(signed char *)((t26 + 0x0));
                    if (t27 == 0) {
                        t28 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x5));
                        if (t28 == 0) {
                            t29 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x6));
                            if (t29 == 0) {
                                t30 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x7));
                                if (t30 == 0) {
                                    t31 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x8));
                                    if (t31 == 0) {
                                        t32 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x9));
                                        if (t32 == 0) {
                                            t33 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0xA));
                                            if (t33 == 0) {
                                                t34 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0xB));
                                                if (t34 != 0) {
                                                    t35 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                                    *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t35 | 0x20);
                                                }
                                            } else {
                                                t38 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                                *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t38 | 0x20);
                                            }
                                        } else {
                                            t41 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                            *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t41 | 0x20);
                                        }
                                    } else {
                                        t44 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                        *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t44 | 0x20);
                                    }
                                } else {
                                    t47 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                    *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t47 | 0x20);
                                }
                            } else {
                                t50 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t50 | 0x20);
                            }
                        } else {
                            t53 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                            *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t53 | 0x20);
                        }
                    } else {
                        t56 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                        *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t56 | 0x20);
                    }
                    t61 = t27;
                } else {
                    t59 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                    *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t59 | 0x20);
                    t61 = t22;
                }
                t66 = t61;
            } else {
                t64 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t64 | 0x20);
                t66 = t22;
            }
            t71 = t66;
        } else {
            t69 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
            *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t69 | 0x20);
            t71 = t22;
        }
        t76 = t71;
    } else {
        t74 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
        *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = (t74 | 0x20);
        t76 = t22;
    }
    t79 = *(short *)(((int)stk + 12));
    t80 = *(short *)((a4 + 0x0));
    *(unsigned short *)((a4 + 0x0)) = (t79 - t80);
    t81 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x4));
    if (t81 == 0) {
        t82 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x5));
        if (t82 == 0) {
            t83 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x6));
            if (t83 == 0) {
                t84 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x7));
                if (t84 == 0) {
                    t85 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x8));
                    if (t85 == 0) {
                        t86 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x9));
                        if (t86 == 0) {
                            t87 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xA));
                            if (t87 == 0) {
                                t88 = *(int *)(((int)stk + 4));
                                t89 = *(signed char *)((t88 + 0x0));
                                if (t89 == 0) {
                                    t90 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC));
                                    if (t90 != 0) {
                                        t92 = t89;
                                        for (;;) {
                                            t93 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                                            if (((unsigned char)t93 & 0x80) != 0) {
                                                break;
                                            }
                                            _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                                            t95 = *(short *)((a4 + 0x0));
                                            t92 = t95;
                                            t92 = (t92 - 1);
                                            *(unsigned short *)((a4 + 0x0)) = t92;
                                        }
                                    }
                                } else {
                                    t102 = t89;
                                    for (;;) {
                                        t103 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                                        if (((unsigned char)t103 & 0x80) != 0) {
                                            break;
                                        }
                                        _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                                        t105 = *(short *)((a4 + 0x0));
                                        t102 = t105;
                                        t102 = (t102 - 1);
                                        *(unsigned short *)((a4 + 0x0)) = t102;
                                    }
                                }
                            } else {
                                t112 = t76;
                                for (;;) {
                                    t113 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                                    if (((unsigned char)t113 & 0x80) != 0) {
                                        break;
                                    }
                                    _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                                    t115 = *(short *)((a4 + 0x0));
                                    t112 = t115;
                                    t112 = (t112 - 1);
                                    *(unsigned short *)((a4 + 0x0)) = t112;
                                }
                            }
                        } else {
                            t122 = t76;
                            for (;;) {
                                t123 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                                if (((unsigned char)t123 & 0x80) != 0) {
                                    break;
                                }
                                _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                                t125 = *(short *)((a4 + 0x0));
                                t122 = t125;
                                t122 = (t122 - 1);
                                *(unsigned short *)((a4 + 0x0)) = t122;
                            }
                        }
                    } else {
                        t132 = t76;
                        for (;;) {
                            t133 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                            if (((unsigned char)t133 & 0x80) != 0) {
                                break;
                            }
                            _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                            t135 = *(short *)((a4 + 0x0));
                            t132 = t135;
                            t132 = (t132 - 1);
                            *(unsigned short *)((a4 + 0x0)) = t132;
                        }
                    }
                } else {
                    t142 = t76;
                    for (;;) {
                        t143 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                        if (((unsigned char)t143 & 0x80) != 0) {
                            break;
                        }
                        _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                        t145 = *(short *)((a4 + 0x0));
                        t142 = t145;
                        t142 = (t142 - 1);
                        *(unsigned short *)((a4 + 0x0)) = t142;
                    }
                }
            } else {
                t152 = t76;
                for (;;) {
                    t153 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                    if (((unsigned char)t153 & 0x80) != 0) {
                        break;
                    }
                    _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                    t155 = *(short *)((a4 + 0x0));
                    t152 = t155;
                    t152 = (t152 - 1);
                    *(unsigned short *)((a4 + 0x0)) = t152;
                }
            }
        } else {
            t162 = t76;
            for (;;) {
                t163 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
                if (((unsigned char)t163 & 0x80) != 0) {
                    break;
                }
                _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
                t165 = *(short *)((a4 + 0x0));
                t162 = t165;
                t162 = (t162 - 1);
                *(unsigned short *)((a4 + 0x0)) = t162;
            }
        }
    } else {
        t172 = t76;
        for (;;) {
            t173 = *(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0));
            if (((unsigned char)t173 & 0x80) != 0) {
                break;
            }
            _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
            t175 = *(short *)((a4 + 0x0));
            t172 = t175;
            t172 = (t172 - 1);
            *(unsigned short *)((a4 + 0x0)) = t172;
        }
    }
    t181 = *(int *)(((int)stk + 8));
    t182 = memmove(t181, ((((int)stk + 4) + 0x10) + 0x4), 0x9);
    return t182;
}
