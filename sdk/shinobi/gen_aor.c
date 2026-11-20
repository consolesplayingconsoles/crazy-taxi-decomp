/* Straight-line functions with calls and guards (batch gen_aor): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsLockDir(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int syChainAddHandler(int, int, int, int);
int gdFsInitSub(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_ushort { unsigned short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int gdFsInitSub(int a4, int a5, int a6, int a7)
{
    int t0;
    int t21;
    int t300;
    int t25;
    int t289;
    int t27;
    int t31;
    int t278;
    int t256;
    int t51;
    int t245;
    int t56;
    int t58;
    int t60;
    int t64;
    int t68;
    int t83;
    int t234;
    int t85;
    int t224;
    int t89;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t116;
    int t118;
    int t124;
    int t134;
    int t136;
    int t137;
    int t142;
    int t267;
    int stk[18];
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    R1016 = ((((int)stk + 8) + 0x18) + 0x4);
    t0 = _builtin_get_imask();
    R1024 = 0xC2B8D48;
    R1008 = 0xC2B8D4A;
    R1012 = 0xC2B8D4B;
    R1020 = t0;
    _builtin_set_imask(0xF);
    if (((((struct o4_int *)0xC177A8C)->v)) == 0) {
        (((struct o4_uint *)0xC177A8C)->v) = (syChainAddHandler(0x900, 0xC14D2EC, 0x50, ((((struct o0_int *)0xC177A8C)->v))));
    }
    if (((((struct o8_int *)0xC177A8C)->v)) == 0) {
        (((struct o8_uint *)0xC177A8C)->v) = (syChainAddHandler(0xA40, 0xC14D2D2, 0x10, ((((struct o0_int *)0xC177A8C)->v))));
    }
    t21 = gdFsReopenHn((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x14))), 0x0, 0x0, 0x0);
    t300 = 0xFFFFFFFE;
    if (t21 != 0) {
        t25 = ((int (*)(void))((*(int *)(((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0xC))) + 0x1C)))))();
        t289 = 0xFFFFFFFE;
        if (t25 != 0) {
            *(unsigned int *)((t21 + 0x3C)) = t25;
            *(unsigned short *)((t21 + 0x50)) = 0x4;
            *(unsigned int *)(((*(int *)((t21 + 0x0))) + 0x1C)) = t21;
            t27 = gdFsWaitCompleteReq(t21);
            t31 = ((int (*)(int))((*(int *)(((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0xC))) + 0x20)))))((((int)stk + 8) + 0x18));
            t278 = 0xFFFFFFFE;
            if (t31 != 0) {
                if (t27 != 0) {
                    t267 = t27;
                    if (t27 != -29) {
                    } else {
                        t267 = 0xFFFFFFE9;
                        if ((*(int *)(((int)stk + 32))) != 6) {
                            t267 = t27;
                        }
                    }
                } else {
                    t256 = 0xFFFFFFFB;
                    if ((*(int *)(((R1016) + 0x0))) != 0x80) {
                    } else {
                        t51 = gdFsReopenHn((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x14))), 0x0, 0x0, 0x0);
                        t245 = 0xFFFFFFFE;
                        if (t51 == 0) {
                        } else {
                            *(unsigned int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x2C)) = 0x0;
                            t56 = ((int (*)(int))((*(int *)(((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0xC))) + 0x4C)))))(0xC2B8D3C);
                            if (t56 != 0) {
                                *(unsigned int *)((t51 + 0x3C)) = t56;
                                *(unsigned short *)((t51 + 0x50)) = 0x4;
                                *(unsigned int *)(((*(int *)((t51 + 0x0))) + 0x1C)) = t51;
                                t58 = gdFsWaitCompleteReq(t51);
                                if (t58 == 0) {
                                    t60 = (((struct o0_int *)0xC177A8C)->v);
                                    *(unsigned int *)((t60 + 0x2C)) = ((*(int *)((t60 + 0x2C))) | (((*(signed char *)(((R1024) + 0x0))) - 48) << 16));
                                    t64 = (((struct o0_int *)0xC177A8C)->v);
                                    *(unsigned int *)((t64 + 0x2C)) = ((*(int *)((t64 + 0x2C))) | (((*(signed char *)(((R1008) + 0x0))) - 48) << 8));
                                    t68 = (((struct o0_int *)0xC177A8C)->v);
                                    *(unsigned int *)((t68 + 0x2C)) = ((*(int *)((t68 + 0x2C))) | ((*(signed char *)(((R1012) + 0x0))) - 48));
                                }
                            }
                            t83 = gdFsReadWG((*(int *)0xC174E90), 0x1, (((((struct o0_int *)0xC177A8C)->v)) + 0x40));
                            t234 = 0xFFFFFFFC;
                            if (t83 != 0) {
                            } else {
                                t85 = gdFsCheckMedia((((((struct o0_int *)0xC177A8C)->v)) + 0x40));
                                t224 = 0xFFFFFFFB;
                                if (t85 == 0) {
                                } else {
                                    *(unsigned int *)(((0x4 + ((((struct o0_int *)0xC177A8C)->v))) + 0x0)) = (gdFsGetLE4(((((((struct o0_int *)0xC177A8C)->v)) + 0x40) + 0x8C)));
                                    t89 = (((struct o0_int *)0xC177A8C)->v);
                                    *(unsigned int *)((t89 + 0x4)) = ((*(int *)((t89 + 0x4))) + 0x96);
                                    *(unsigned int *)(((0x8 + ((((struct o0_int *)0xC177A8C)->v))) + 0x0)) = (gdFsGetLE4(((((((struct o0_int *)0xC177A8C)->v)) + 0x40) + 0x84)));
                                    (((struct o18_uint *)0xC2B8D5C)->v) = 0xC2B8D5C;
                                    (((struct o0_ushort *)0xC2B8D5C)->v) = (*(signed char *)0x8C0080FC);
                                    if ((*(short *)((((((struct o18_int *)0xC2B8D5C)->v)) + 0x0))) == 1) {
                                        t101 = (((struct o18_int *)0xC2B8D5C)->v);
                                        *(unsigned short *)((t101 + 0x2)) = (*(signed char *)0x8C0080FD);
                                        *(unsigned int *)((((((struct o18_int *)0xC2B8D5C)->v)) + 0x4)) = 0x0;
                                        t102 = 0x0;
                                        t103 = 0x8C0080F0;
                                        t104 = (((((struct o18_int *)0xC2B8D5C)->v)) + 0x8);
                                        t105 = a7;
                                        for (;;) {
                                            if ((*(signed char *)((t103 + 0x0))) != 32) {
                                                t101 = (*(signed char *)((t103 + 0x0)));
                                                t103 = (t103 + 0x1);
                                                t105 = 0xC;
                                                t102 = (t102 + 0x1);
                                                *(unsigned char *)((t104 + 0x0)) = t101;
                                                t104 = (t104 + 0x1);
                                                if ((int)t102 >= (int)t105) {
                                                    break;
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                        *(unsigned char *)((t104 + 0x0)) = 0x0;
                                    }
                                    t116 = gdFsGetLE4(((((((struct o0_int *)0xC177A8C)->v)) + 0x40) + 0x9E));
                                    t118 = gdFsGetLE4(((((((struct o0_int *)0xC177A8C)->v)) + 0x40) + 0xA6));
                                    *(unsigned int *)(((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x10))) + 0x8)) = 0x0;
                                    t124 = gdFsGetDirEnt((((((struct o0_int *)0xC177A8C)->v)) + 0x40), (t116 + 0x96), (*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x10))), t118);
                                    t224 = t124;
                                    if (t124 != -12) {
                                        t224 = 0xFFFFFFFC;
                                        if (t124 == 0) {
                                            t224 = 0xFFFFFFFB;
                                            if ((*(int *)(((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x10))) + 0x0))) != 0) {
                                                t134 = (((struct o18_int *)0xC2B8D5C)->v);
                                                if ((*(short *)((t134 + 0x0))) == 1) {
                                                    t136 = gdFsGetDirInfoG((t134 + 0x8), (((int)stk + 8) + 0x14));
                                                    t224 = 0xFFFFFFFC;
                                                    if (t136 == 0) {
                                                        t137 = *(int *)(((int)stk + 28));
                                                        *(unsigned int *)((((((struct o18_int *)0xC2B8D5C)->v)) + 0x4)) = t137;
                                                        t142 = gdFsGetDirEnt((((((struct o0_int *)0xC177A8C)->v)) + 0x40), t137, (*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x10))), 0x1);
                                                        t224 = t142;
                                                        if (t142 == -12) {
                                                        } else {
                                                            t224 = 0xFFFFFFFC;
                                                            if (t142 != 0) {
                                                            } else {
                                                                t224 = 0xFFFFFFFB;
                                                                if ((*(int *)(((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x10))) + 0x0))) == 0) {
                                                                } else {
                                                                    gdFsLockDir((*(int *)((((((struct o0_int *)0xC177A8C)->v)) + 0x10))));
                                                                    *(unsigned short *)((((((struct o0_int *)0xC177A8C)->v)) + 0x38)) = 0x1;
                                                                    t224 = 0x0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned short *)((((((struct o0_int *)0xC177A8C)->v)) + 0x38)) = 0x1;
                                                    t224 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                                t234 = t224;
                            }
                            t245 = t234;
                        }
                        t256 = t245;
                    }
                    t267 = t256;
                }
                t278 = t267;
            }
            t289 = t278;
        }
        t300 = t289;
    }
    _builtin_set_imask(((unsigned int)((((R1020) & 0xF) << 2) << 2) >> 4));
    return t300;
}
