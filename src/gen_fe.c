/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0789c0(int);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int goiToolCourseMap(int a4);
int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int Chat_TellDestination(int a4);


int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t22;
    int t23;
    int t24;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t43;
    int t44;
    int t45;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t64;
    int t65;
    int t66;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t85;
    int t86;
    int t87;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t106;
    int t107;
    int t108;
    int t109;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t29;
    int t20;
    int t17;
    int t26;
    int t50;
    int t41;
    int t38;
    int t47;
    int t71;
    int t62;
    int t59;
    int t68;
    int t92;
    int t83;
    int t80;
    int t89;
    int t114;
    int t104;
    int t101;
    int t111;
    int stk[16] = {0};

    *(unsigned int *)0xC2EAB44 = (a4 << 2);
    *(unsigned int *)0xC2EAB48 = (a5 << 2);
    *(unsigned int *)0xC2EAB4C = (a6 << 2);
    *(unsigned int *)0xC2EAB50 = (a7 << 2);
    *(unsigned int *)0xC2EAB54 = (a8 << 2);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    t0 = *(int *)0xC2EAAC0;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t0;
    *(unsigned int *)(((int)stk + 8)) = 0xC2B8CCC;
    *(unsigned int *)(((int)stk + 16)) = 0xC2B8CCC;
    t1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 20)) = t1;
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x18) + 0x4);
    if ((unsigned int)a10 > (unsigned int)0x0) {
        t2 = ((((int)stk + 4) + 0x18) + 0x4);
        t3 = 0x0;
        t4 = 0xC2B8CCC;
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
            if ((t6 & 31) != 0) {
                t3 = t5;
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 4) + 0x18));
                t2 = 0xFFFFFFE0;
                *(unsigned int *)(((int)stk + 4)) = t3;
                t7 = *(int *)((t3 + 0x0));
                t4 = t7;
                t4 = (t4 + 0x1F);
                t4 = (t4 & t2);
                *(unsigned int *)((t3 + 0x0)) = t4;
            }
            t3 = t5;
            t3 = (t3 << 2);
            t4 = t5;
            t3 = (t3 + t4);
            t3 = (t3 << 2);
            t4 = 0xC2EA9C4;
            t3 = (t3 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t3;
            t10 = *(int *)((t4 + 0x0));
            if (t10 == 1) {
                t2 = 0xC2EAAA0;
                t11 = *(int *)((t2 + 0x0));
                if (t11 == 32) {
                    t12 = *(int *)(((int)stk + 4));
                    t3 = t12;
                    *(unsigned int *)((t3 + 0x0)) = 0x10000000;
                    t20 = 0x0;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a4 > (unsigned int)t3) {
                        t13 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t13;
                        t14 = *(int *)(((int)stk + 4));
                        t2 = t14;
                        t4 = (t4 + 0x0);
                        *(unsigned int *)((t2 + 0x0)) = t4;
                        t17 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t15 = *(int *)(((int)stk + 4));
                        t2 = t15;
                        *(unsigned int *)((t2 + 0x0)) = 0x0;
                        t17 = 0x0;
                    }
                    t20 = t17;
                }
                t29 = t20;
            } else {
                t3 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t3) {
                    t22 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t22;
                    t23 = *(int *)(((int)stk + 4));
                    t2 = t23;
                    t4 = (t4 + 0x0);
                    *(unsigned int *)((t2 + 0x0)) = t4;
                    t26 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t24 = *(int *)(((int)stk + 4));
                    t2 = t24;
                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                    t26 = 0x0;
                }
                t29 = t26;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t31 = *(int *)((t3 + 0x0));
            if (t31 == 1) {
                t2 = 0xC2EAAA0;
                t32 = *(int *)((t2 + 0x0));
                if (t32 == 33) {
                    t33 = *(int *)(((int)stk + 4));
                    t3 = t33;
                    *(unsigned int *)((t3 + 0x4)) = 0x10000000;
                    t41 = t29;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a5 > (unsigned int)t3) {
                        t34 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t34;
                        t35 = *(int *)(((int)stk + 4));
                        t2 = t35;
                        t4 = (t4 + (t29 << 2));
                        *(unsigned int *)((t2 + 0x4)) = t4;
                        t38 = (((t29 + a5) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t36 = *(int *)(((int)stk + 4));
                        t2 = t36;
                        *(unsigned int *)((t2 + 0x4)) = 0x0;
                        t38 = t29;
                    }
                    t41 = t38;
                }
                t50 = t41;
            } else {
                t3 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t3) {
                    t43 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t43;
                    t44 = *(int *)(((int)stk + 4));
                    t2 = t44;
                    t4 = (t4 + (t29 << 2));
                    *(unsigned int *)((t2 + 0x4)) = t4;
                    t47 = (((t29 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t45 = *(int *)(((int)stk + 4));
                    t2 = t45;
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t47 = t29;
                }
                t50 = t47;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t52 = *(int *)((t3 + 0x0));
            if (t52 == 1) {
                t2 = 0xC2EAAA0;
                t53 = *(int *)((t2 + 0x0));
                if (t53 == 34) {
                    t54 = *(int *)(((int)stk + 4));
                    t3 = t54;
                    *(unsigned int *)((t3 + 0x8)) = 0x10000000;
                    t62 = t50;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a6 > (unsigned int)t3) {
                        t55 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t55;
                        t56 = *(int *)(((int)stk + 4));
                        t2 = t56;
                        t4 = (t4 + (t50 << 2));
                        *(unsigned int *)((t2 + 0x8)) = t4;
                        t59 = (((t50 + a6) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t57 = *(int *)(((int)stk + 4));
                        t2 = t57;
                        *(unsigned int *)((t2 + 0x8)) = 0x0;
                        t59 = t50;
                    }
                    t62 = t59;
                }
                t71 = t62;
            } else {
                t3 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t3) {
                    t64 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t64;
                    t65 = *(int *)(((int)stk + 4));
                    t2 = t65;
                    t4 = (t4 + (t50 << 2));
                    *(unsigned int *)((t2 + 0x8)) = t4;
                    t68 = (((t50 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t66 = *(int *)(((int)stk + 4));
                    t2 = t66;
                    *(unsigned int *)((t2 + 0x8)) = 0x0;
                    t68 = t50;
                }
                t71 = t68;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t73 = *(int *)((t3 + 0x0));
            if (t73 == 1) {
                t2 = 0xC2EAAA0;
                t74 = *(int *)((t2 + 0x0));
                if (t74 == 35) {
                    t75 = *(int *)(((int)stk + 4));
                    t3 = t75;
                    *(unsigned int *)((t3 + 0xC)) = 0x10000000;
                    t83 = t71;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a7 > (unsigned int)t3) {
                        t76 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t76;
                        t77 = *(int *)(((int)stk + 4));
                        t2 = t77;
                        t4 = (t4 + (t71 << 2));
                        *(unsigned int *)((t2 + 0xC)) = t4;
                        t80 = (((t71 + a7) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t78 = *(int *)(((int)stk + 4));
                        t2 = t78;
                        *(unsigned int *)((t2 + 0xC)) = 0x0;
                        t80 = t71;
                    }
                    t83 = t80;
                }
                t92 = t83;
            } else {
                t3 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t3) {
                    t85 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t85;
                    t86 = *(int *)(((int)stk + 4));
                    t2 = t86;
                    t4 = (t4 + (t71 << 2));
                    *(unsigned int *)((t2 + 0xC)) = t4;
                    t89 = (((t71 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t87 = *(int *)(((int)stk + 4));
                    t2 = t87;
                    *(unsigned int *)((t2 + 0xC)) = 0x0;
                    t89 = t71;
                }
                t92 = t89;
            }
            t4 = 0xC2EA9C4;
            t94 = *(int *)((t4 + 0x0));
            if (t94 == 1) {
                t2 = 0xC2EAAA0;
                t95 = *(int *)((t2 + 0x0));
                if (t95 == 36) {
                    t4 = t5;
                    t4 = (t4 << 2);
                    t3 = t5;
                    t4 = (t4 + t3);
                    t4 = (t4 << 2);
                    t4 = (t4 + 0xC2B8CCC);
                    *(unsigned int *)((t4 + 0x10)) = 0x10000000;
                    t104 = t92;
                } else {
                    t4 = a8;
                    t3 = 0x0;
                    if ((unsigned int)t4 > (unsigned int)t3) {
                        t96 = *(int *)(((int)stk + 20));
                        t2 = t92;
                        t97 = *(int *)(((int)stk + 8));
                        t4 = t97;
                        t2 = (t2 << 2);
                        t98 = *(int *)((t96 + 0x0));
                        t2 = (t2 + t98);
                        *(unsigned int *)((t4 + 0x10)) = t2;
                        t4 = a8;
                        t101 = (((t92 + t4) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t99 = *(int *)(((int)stk + 16));
                        t4 = t99;
                        *(unsigned int *)((t4 + 0x10)) = 0x0;
                        t101 = t92;
                    }
                    t104 = t101;
                }
                t114 = t104;
            } else {
                t4 = a8;
                t3 = 0x0;
                if ((unsigned int)t4 > (unsigned int)t3) {
                    t106 = *(int *)(((int)stk + 20));
                    t2 = t92;
                    t107 = *(int *)(((int)stk + 8));
                    t4 = t107;
                    t2 = (t2 << 2);
                    t108 = *(int *)((t106 + 0x0));
                    t2 = (t2 + t108);
                    *(unsigned int *)((t4 + 0x10)) = t2;
                    t4 = a8;
                    t111 = (((t92 + t4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t109 = *(int *)(((int)stk + 16));
                    t4 = t109;
                    *(unsigned int *)((t4 + 0x10)) = 0x0;
                    t111 = t92;
                }
                t114 = t111;
            }
            t116 = *(int *)(((int)stk + 12));
            t3 = t116;
            t117 = *(int *)(((int)stk + 24));
            t4 = t117;
            t118 = *(int *)((t3 + 0x0));
            t2 = t118;
            t5 = (t5 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((t114 << 2) + t2);
            t119 = *(int *)(((int)stk + 16));
            t4 = t119;
            t4 = (t4 + 0x14);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t120 = *(int *)(((int)stk + 20));
            t3 = t120;
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t3;
            t121 = *(int *)(((int)stk + 8));
            t2 = t121;
            t2 = (t2 + 0x14);
            *(unsigned int *)(((int)stk + 8)) = t2;
            t4 = a10;
            if ((unsigned int)t5 < (unsigned int)t4) continue;
            break;
        }
    }
    return 0x0;
}

