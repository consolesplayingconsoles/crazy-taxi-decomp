/* Draft: generated C that the check did not accept (DIFFERS case 1: error). Not proven equivalent. */



void kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t19;
    int t20;
    int t21;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t36;
    int t37;
    int t38;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t53;
    int t54;
    int t55;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t70;
    int t71;
    int t72;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t87;
    int t88;
    int t89;
    int t90;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t25;
    int t18;
    int t16;
    int t23;
    int t42;
    int t35;
    int t33;
    int t40;
    int t59;
    int t52;
    int t50;
    int t57;
    int t76;
    int t69;
    int t67;
    int t74;
    int t94;
    int t86;
    int t84;
    int t92;
    int stk[16];

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
            t9 = *(int *)((t4 + 0x0));
            if (t9 == 1) {
                t2 = 0xC2EAAA0;
                t10 = *(int *)((t2 + 0x0));
                if (t10 == 32) {
                    t11 = *(int *)(((int)stk + 4));
                    t3 = t11;
                    *(unsigned int *)((t3 + 0x0)) = 0x10000000;
                    t18 = 0x0;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a4 > (unsigned int)t3) {
                        t12 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t12;
                        t13 = *(int *)(((int)stk + 4));
                        t2 = t13;
                        t4 = (t4 + 0x0);
                        *(unsigned int *)((t2 + 0x0)) = t4;
                        t16 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t14 = *(int *)(((int)stk + 4));
                        t2 = t14;
                        *(unsigned int *)((t2 + 0x0)) = 0x0;
                        t16 = 0x0;
                    }
                    t18 = t16;
                }
                t25 = t18;
            } else {
                t3 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t3) {
                    t19 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t19;
                    t20 = *(int *)(((int)stk + 4));
                    t2 = t20;
                    t4 = (t4 + 0x0);
                    *(unsigned int *)((t2 + 0x0)) = t4;
                    t23 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t21 = *(int *)(((int)stk + 4));
                    t2 = t21;
                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                    t23 = 0x0;
                }
                t25 = t23;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t26 = *(int *)((t3 + 0x0));
            if (t26 == 1) {
                t2 = 0xC2EAAA0;
                t27 = *(int *)((t2 + 0x0));
                if (t27 == 33) {
                    t28 = *(int *)(((int)stk + 4));
                    t3 = t28;
                    *(unsigned int *)((t3 + 0x4)) = 0x10000000;
                    t35 = t25;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a5 > (unsigned int)t3) {
                        t29 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t29;
                        t30 = *(int *)(((int)stk + 4));
                        t2 = t30;
                        t4 = (t4 + (t25 << 2));
                        *(unsigned int *)((t2 + 0x4)) = t4;
                        t33 = (((t25 + a5) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t31 = *(int *)(((int)stk + 4));
                        t2 = t31;
                        *(unsigned int *)((t2 + 0x4)) = 0x0;
                        t33 = t25;
                    }
                    t35 = t33;
                }
                t42 = t35;
            } else {
                t3 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t3) {
                    t36 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t36;
                    t37 = *(int *)(((int)stk + 4));
                    t2 = t37;
                    t4 = (t4 + (t25 << 2));
                    *(unsigned int *)((t2 + 0x4)) = t4;
                    t40 = (((t25 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t38 = *(int *)(((int)stk + 4));
                    t2 = t38;
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t40 = t25;
                }
                t42 = t40;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t43 = *(int *)((t3 + 0x0));
            if (t43 == 1) {
                t2 = 0xC2EAAA0;
                t44 = *(int *)((t2 + 0x0));
                if (t44 == 34) {
                    t45 = *(int *)(((int)stk + 4));
                    t3 = t45;
                    *(unsigned int *)((t3 + 0x8)) = 0x10000000;
                    t52 = t42;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a6 > (unsigned int)t3) {
                        t46 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t46;
                        t47 = *(int *)(((int)stk + 4));
                        t2 = t47;
                        t4 = (t4 + (t42 << 2));
                        *(unsigned int *)((t2 + 0x8)) = t4;
                        t50 = (((t42 + a6) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t48 = *(int *)(((int)stk + 4));
                        t2 = t48;
                        *(unsigned int *)((t2 + 0x8)) = 0x0;
                        t50 = t42;
                    }
                    t52 = t50;
                }
                t59 = t52;
            } else {
                t3 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t3) {
                    t53 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t53;
                    t54 = *(int *)(((int)stk + 4));
                    t2 = t54;
                    t4 = (t4 + (t42 << 2));
                    *(unsigned int *)((t2 + 0x8)) = t4;
                    t57 = (((t42 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t55 = *(int *)(((int)stk + 4));
                    t2 = t55;
                    *(unsigned int *)((t2 + 0x8)) = 0x0;
                    t57 = t42;
                }
                t59 = t57;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t60 = *(int *)((t3 + 0x0));
            if (t60 == 1) {
                t2 = 0xC2EAAA0;
                t61 = *(int *)((t2 + 0x0));
                if (t61 == 35) {
                    t62 = *(int *)(((int)stk + 4));
                    t3 = t62;
                    *(unsigned int *)((t3 + 0xC)) = 0x10000000;
                    t69 = t59;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a7 > (unsigned int)t3) {
                        t63 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t63;
                        t64 = *(int *)(((int)stk + 4));
                        t2 = t64;
                        t4 = (t4 + (t59 << 2));
                        *(unsigned int *)((t2 + 0xC)) = t4;
                        t67 = (((t59 + a7) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t65 = *(int *)(((int)stk + 4));
                        t2 = t65;
                        *(unsigned int *)((t2 + 0xC)) = 0x0;
                        t67 = t59;
                    }
                    t69 = t67;
                }
                t76 = t69;
            } else {
                t3 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t3) {
                    t70 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t70;
                    t71 = *(int *)(((int)stk + 4));
                    t2 = t71;
                    t4 = (t4 + (t59 << 2));
                    *(unsigned int *)((t2 + 0xC)) = t4;
                    t74 = (((t59 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t72 = *(int *)(((int)stk + 4));
                    t2 = t72;
                    *(unsigned int *)((t2 + 0xC)) = 0x0;
                    t74 = t59;
                }
                t76 = t74;
            }
            t4 = 0xC2EA9C4;
            t77 = *(int *)((t4 + 0x0));
            if (t77 == 1) {
                t2 = 0xC2EAAA0;
                t78 = *(int *)((t2 + 0x0));
                if (t78 == 36) {
                    t4 = t5;
                    t4 = (t4 << 2);
                    t3 = t5;
                    t4 = (t4 + t3);
                    t4 = (t4 << 2);
                    t4 = (t4 + 0xC2B8CCC);
                    *(unsigned int *)((t4 + 0x10)) = 0x10000000;
                    t86 = t76;
                } else {
                    t4 = a8;
                    t3 = 0x0;
                    if ((unsigned int)t4 > (unsigned int)t3) {
                        t79 = *(int *)(((int)stk + 20));
                        t2 = t76;
                        t80 = *(int *)(((int)stk + 8));
                        t4 = t80;
                        t2 = (t2 << 2);
                        t81 = *(int *)((t79 + 0x0));
                        t2 = (t2 + t81);
                        *(unsigned int *)((t4 + 0x10)) = t2;
                        t4 = a8;
                        t84 = (((t76 + t4) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t82 = *(int *)(((int)stk + 16));
                        t4 = t82;
                        *(unsigned int *)((t4 + 0x10)) = 0x0;
                        t84 = t76;
                    }
                    t86 = t84;
                }
                t94 = t86;
            } else {
                t4 = a8;
                t3 = 0x0;
                if ((unsigned int)t4 > (unsigned int)t3) {
                    t87 = *(int *)(((int)stk + 20));
                    t2 = t76;
                    t88 = *(int *)(((int)stk + 8));
                    t4 = t88;
                    t2 = (t2 << 2);
                    t89 = *(int *)((t87 + 0x0));
                    t2 = (t2 + t89);
                    *(unsigned int *)((t4 + 0x10)) = t2;
                    t4 = a8;
                    t92 = (((t76 + t4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t90 = *(int *)(((int)stk + 16));
                    t4 = t90;
                    *(unsigned int *)((t4 + 0x10)) = 0x0;
                    t92 = t76;
                }
                t94 = t92;
            }
            t95 = *(int *)(((int)stk + 12));
            t3 = t95;
            t96 = *(int *)(((int)stk + 24));
            t4 = t96;
            t97 = *(int *)((t3 + 0x0));
            t2 = t97;
            t5 = (t5 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((t94 << 2) + t2);
            t98 = *(int *)(((int)stk + 16));
            t4 = t98;
            t4 = (t4 + 0x14);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t99 = *(int *)(((int)stk + 20));
            t3 = t99;
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t3;
            t100 = *(int *)(((int)stk + 8));
            t2 = t100;
            t2 = (t2 + 0x14);
            *(unsigned int *)(((int)stk + 8)) = t2;
            t4 = a10;
            if ((unsigned int)t5 < (unsigned int)t4) continue;
            break;
        }
    }
}

