/* Straight-line functions with calls and guards (batch gen_it): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsCheckMedia(int);
int gdFsLockDir(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int syChainAddHandler(int, int, int, int);
int gdFsInitSub(int a4, int a5, int a6, int a7);

int gdFsInitSub(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int t19;
    int t20;
    int t21;
    int t281;
    int t22;
    int t23;
    int t24;
    int t25;
    int t270;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t259;
    int t37;
    int t32;
    int t33;
    int t40;
    int t41;
    int t237;
    int t42;
    int t43;
    int t44;
    int t226;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t74;
    int t75;
    int t76;
    int t215;
    int t77;
    int t78;
    int t205;
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
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
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
    int t196;
    int t188;
    int t118;
    int t119;
    int t120;
    int t180;
    int t121;
    int t122;
    int t123;
    int t163;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t155;
    int t148;
    int t130;
    int t131;
    int t132;
    int t141;
    int t133;
    int t134;
    int t136;
    int t166;
    int t285;
    int t248;
    int t172;
    int stk[18] = {0};

    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 8) + 0x18) + 0x4);
    t0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 24)) = 0xC2B8D48;
    *(unsigned int *)(((int)stk + 8)) = 0xC2B8D4A;
    *(unsigned int *)(((int)stk + 12)) = 0xC2B8D4B;
    *(unsigned int *)(((int)stk + 20)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(int *)0xC177A90;
    if (t1 == 0) {
        t2 = *(int *)0xC177A8C;
        t3 = syChainAddHandler(0x900, 0xC14D2EC, 0x50, t2);
        *(unsigned int *)0xC177A90 = t3;
    }
    t10 = *(int *)0xC177A94;
    if (t10 == 0) {
        t11 = *(int *)0xC177A8C;
        t12 = syChainAddHandler(0xA40, 0xC14D2D2, 0x10, t11);
        *(unsigned int *)0xC177A94 = t12;
    }
    t19 = *(int *)0xC177A8C;
    t20 = *(int *)((t19 + 0x14));
    t21 = gdFsReopenHn(t20, 0x0, 0x0, 0x0);
    t281 = 0xFFFFFFFE;
    if (t21 != 0) {
        t22 = *(int *)0xC177A8C;
        t23 = *(int *)((t22 + 0xC));
        t24 = *(int *)((t23 + 0x1C));
        t25 = ((int (*)(void))(t24))();
        t270 = 0xFFFFFFFE;
        if (t25 != 0) {
            *(unsigned int *)((t21 + 0x3C)) = t25;
            *(unsigned short *)((t21 + 0x50)) = 0x4;
            t26 = *(int *)((t21 + 0x0));
            *(unsigned int *)((t26 + 0x1C)) = t21;
            t27 = gdFsWaitCompleteReq(t21);
            t28 = *(int *)0xC177A8C;
            t29 = *(int *)((t28 + 0xC));
            t30 = *(int *)((t29 + 0x20));
            t31 = ((int (*)(int))(t30))((((int)stk + 8) + 0x18));
            t259 = 0xFFFFFFFE;
            if (t31 != 0) {
                if (t27 != 0) {
                    t37 = t27;
                    if (t27 != -29) {
                    } else {
                        t32 = *(int *)(((int)stk + 32));
                        t33 = 0xFFFFFFE9;
                        if (t32 != 6) {
                            t33 = t27;
                        }
                        t37 = t33;
                    }
                    t248 = t37;
                } else {
                    t40 = *(int *)(((int)stk + 16));
                    t41 = *(int *)((t40 + 0x0));
                    t237 = 0xFFFFFFFB;
                    if (t41 != 0x80) {
                    } else {
                        t42 = *(int *)0xC177A8C;
                        t43 = *(int *)((t42 + 0x14));
                        t44 = gdFsReopenHn(t43, 0x0, 0x0, 0x0);
                        t226 = 0xFFFFFFFE;
                        if (t44 == 0) {
                        } else {
                            t45 = *(int *)0xC177A8C;
                            *(unsigned int *)((t45 + 0x2C)) = 0x0;
                            t46 = *(int *)0xC177A8C;
                            t47 = *(int *)((t46 + 0xC));
                            t48 = *(int *)((t47 + 0x4C));
                            t49 = ((int (*)(int))(t48))(0xC2B8D3C);
                            if (t49 != 0) {
                                *(unsigned int *)((t44 + 0x3C)) = t49;
                                *(unsigned short *)((t44 + 0x50)) = 0x4;
                                t50 = *(int *)((t44 + 0x0));
                                *(unsigned int *)((t50 + 0x1C)) = t44;
                                t51 = gdFsWaitCompleteReq(t44);
                                if (t51 == 0) {
                                    t52 = *(int *)(((int)stk + 24));
                                    t53 = *(int *)0xC177A8C;
                                    t54 = *(signed char *)((t52 + 0x0));
                                    t55 = *(int *)((t53 + 0x2C));
                                    *(unsigned int *)((t53 + 0x2C)) = (t55 | ((t54 - 48) << 16));
                                    t56 = *(int *)(((int)stk + 8));
                                    t57 = *(int *)0xC177A8C;
                                    t58 = *(signed char *)((t56 + 0x0));
                                    t59 = *(int *)((t57 + 0x2C));
                                    *(unsigned int *)((t57 + 0x2C)) = (t59 | ((t58 - 48) << 8));
                                    t60 = *(int *)(((int)stk + 12));
                                    t61 = *(int *)0xC177A8C;
                                    t62 = *(signed char *)((t60 + 0x0));
                                    t63 = *(int *)((t61 + 0x2C));
                                    *(unsigned int *)((t61 + 0x2C)) = (t63 | (t62 - 48));
                                }
                            }
                            t74 = *(int *)0xC177A8C;
                            t75 = *(int *)0xC174E90;
                            t76 = gdFsReadWG(t75, 0x1, (t74 + 0x40));
                            t215 = 0xFFFFFFFC;
                            if (t76 != 0) {
                            } else {
                                t77 = *(int *)0xC177A8C;
                                t78 = gdFsCheckMedia((t77 + 0x40));
                                t205 = 0xFFFFFFFB;
                                if (t78 == 0) {
                                } else {
                                    t79 = *(int *)0xC177A8C;
                                    t80 = *(int *)0xC177A8C;
                                    t81 = gdFsGetLE4(((t80 + 0x40) + 0x8C));
                                    *(unsigned int *)(((0x4 + t79) + 0x0)) = t81;
                                    t82 = *(int *)0xC177A8C;
                                    t83 = *(int *)((t82 + 0x4));
                                    *(unsigned int *)((t82 + 0x4)) = (t83 + 0x96);
                                    t84 = *(int *)0xC177A8C;
                                    t85 = *(int *)0xC177A8C;
                                    t86 = gdFsGetLE4(((t85 + 0x40) + 0x84));
                                    *(unsigned int *)(((0x8 + t84) + 0x0)) = t86;
                                    *(unsigned int *)0xC2B8D74 = 0xC2B8D5C;
                                    t87 = *(signed char *)0x8C0080FC;
                                    *(unsigned short *)0xC2B8D5C = t87;
                                    t88 = *(int *)0xC2B8D74;
                                    t89 = *(short *)((t88 + 0x0));
                                    if (t89 == 1) {
                                        t90 = *(int *)0xC2B8D74;
                                        t91 = *(signed char *)0x8C0080FD;
                                        *(unsigned short *)((t90 + 0x2)) = t91;
                                        t92 = *(int *)0xC2B8D74;
                                        *(unsigned int *)((t92 + 0x4)) = 0x0;
                                        t93 = *(int *)0xC2B8D74;
                                        t94 = t90;
                                        t95 = 0x0;
                                        t96 = 0x8C0080F0;
                                        t97 = (t93 + 0x8);
                                        t98 = a7;
                                        for (;;) {
                                            t99 = *(signed char *)((t96 + 0x0));
                                            if (t99 != 32) {
                                                t100 = *(signed char *)((t96 + 0x0));
                                                t94 = t100;
                                                t96 = (t96 + 0x1);
                                                t98 = 0xC;
                                                t95 = (t95 + 0x1);
                                                *(unsigned char *)((t97 + 0x0)) = t94;
                                                t97 = (t97 + 0x1);
                                                if ((int)t95 >= (int)t98) {
                                                    break;
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                        *(unsigned char *)((t97 + 0x0)) = 0x0;
                                    }
                                    t108 = *(int *)0xC177A8C;
                                    t109 = gdFsGetLE4(((t108 + 0x40) + 0x9E));
                                    t110 = *(int *)0xC177A8C;
                                    t111 = gdFsGetLE4(((t110 + 0x40) + 0xA6));
                                    t112 = *(int *)0xC177A8C;
                                    t113 = *(int *)((t112 + 0x10));
                                    *(unsigned int *)((t113 + 0x8)) = 0x0;
                                    t114 = *(int *)0xC177A8C;
                                    t115 = *(int *)0xC177A8C;
                                    t116 = *(int *)((t114 + 0x10));
                                    t117 = gdFsGetDirEnt((t115 + 0x40), (t109 + 0x96), t116, t111);
                                    t196 = t117;
                                    if (t117 != -12) {
                                        t188 = 0xFFFFFFFC;
                                        if (t117 == 0) {
                                            t118 = *(int *)0xC177A8C;
                                            t119 = *(int *)((t118 + 0x10));
                                            t120 = *(int *)((t119 + 0x0));
                                            t180 = 0xFFFFFFFB;
                                            if (t120 != 0) {
                                                t121 = *(int *)0xC2B8D74;
                                                t122 = *(short *)((t121 + 0x0));
                                                if (t122 == 1) {
                                                    t123 = gdFsGetDirInfoG((t121 + 0x8), (((int)stk + 8) + 0x14));
                                                    t163 = 0xFFFFFFFC;
                                                    if (t123 == 0) {
                                                        t124 = *(int *)(((int)stk + 28));
                                                        t125 = *(int *)0xC2B8D74;
                                                        *(unsigned int *)((t125 + 0x4)) = t124;
                                                        t126 = *(int *)0xC177A8C;
                                                        t127 = *(int *)0xC177A8C;
                                                        t128 = *(int *)((t126 + 0x10));
                                                        t129 = gdFsGetDirEnt((t127 + 0x40), t124, t128, 0x1);
                                                        t155 = t129;
                                                        if (t129 == -12) {
                                                        } else {
                                                            t148 = 0xFFFFFFFC;
                                                            if (t129 != 0) {
                                                            } else {
                                                                t130 = *(int *)0xC177A8C;
                                                                t131 = *(int *)((t130 + 0x10));
                                                                t132 = *(int *)((t131 + 0x0));
                                                                t141 = 0xFFFFFFFB;
                                                                if (t132 == 0) {
                                                                } else {
                                                                    t133 = *(int *)0xC177A8C;
                                                                    t134 = *(int *)((t133 + 0x10));
                                                                    gdFsLockDir(t134);
                                                                    t136 = *(int *)0xC177A8C;
                                                                    *(unsigned short *)((t136 + 0x38)) = 0x1;
                                                                    t141 = 0x0;
                                                                }
                                                                t148 = t141;
                                                            }
                                                            t155 = t148;
                                                        }
                                                        t163 = t155;
                                                    }
                                                    t172 = t163;
                                                } else {
                                                    t166 = *(int *)0xC177A8C;
                                                    *(unsigned short *)((t166 + 0x38)) = 0x1;
                                                    t172 = 0x0;
                                                }
                                                t180 = t172;
                                            }
                                            t188 = t180;
                                        }
                                        t196 = t188;
                                    }
                                    t205 = t196;
                                }
                                t215 = t205;
                            }
                            t226 = t215;
                        }
                        t237 = t226;
                    }
                    t248 = t237;
                }
                t259 = t248;
            }
            t270 = t259;
        }
        t281 = t270;
    }
    t285 = *(int *)(((int)stk + 20));
    _builtin_set_imask(((unsigned int)(((t285 & 0xF) << 2) << 2) >> 4));
    return t281;
}
