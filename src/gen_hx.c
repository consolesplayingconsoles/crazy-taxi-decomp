/* Straight-line functions with calls and guards (batch gen_hx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int Result_Customer_Count_Put(void);

int Result_Customer_Count_Put(void)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t5;
    int t109;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t52;
    int t53;
    int t54;
    int t55;
    float u61;
    float u62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t72;
    int t73;
    int t74;
    int t77;
    int t78;
    int t97;
    int t98;
    float u99;
    int t100;
    float u101;
    int t102;
    float u107;
    int t108;
    int t56;
    int t57;
    int t59;
    int t47;
    int t48;
    int t50;
    int t92;
    int t93;
    int t83;
    int t84;

    t0 = *(int *)0xC1794D0;
    t1 = *(int *)0xC2A9850;
    t3 = 0xC059C28;
    if (t1 != t0) {
        t2 = *(int *)0xC2A9854;
        *(unsigned int *)0xC2A9854 = (t2 + 0x1);
        t3 = (t2 + 0x1);
    }
    t5 = *(int *)0xC2A96F4;
    t109 = t3;
    if ((int)t5 <= (int)0x2A) {
    } else {
        t6 = *(int *)0xC2A9850;
        t7 = *(int *)0xC1794D0;
        if (t6 != t7) {
            t8 = *(int *)0xC2A97E0;
            if (t8 == 0) {
                t9 = *(int *)0xC2A9850;
                t10 = *(int *)0xC2A9854;
                if ((int)t9 < (int)0xF) {
                    t11 = *(int *)0xC2A9850;
                    if ((int)t10 >= (int)(0x10 - t11)) {
                        t12 = *(int *)0xC2A9850;
                        *(unsigned int *)0xC2A9850 = (t12 + 0x1);
                        *(unsigned int *)0xC2A9854 = 0x0;
                    }
                } else {
                    if ((int)t10 >= (int)0x1) {
                        t16 = *(int *)0xC2A9850;
                        if ((int)t16 < (int)0x33) {
                            t17 = *(int *)0xC2A9850;
                            *(unsigned int *)0xC2A9850 = (t17 + 0x1);
                        } else {
                            t18 = *(int *)0xC2A9850;
                            *(unsigned int *)0xC2A9850 = (t18 + 0x3);
                            t19 = *(int *)0xC1794D0;
                            if ((int)(t18 + 0x3) > (int)t19) {
                                t20 = *(int *)0xC1794D0;
                                *(unsigned int *)0xC2A9850 = t20;
                            }
                        }
                        *(unsigned int *)0xC2A9854 = 0x0;
                    }
                }
                t36 = *(int *)0xC2A9850;
                t37 = (int)((int)t36 / (int)0x64);
                t38 = *(int *)0xC2A9850;
                t39 = (int)((int)t38 / (int)0xA);
                t40 = (int)((int)t39 % (int)0xA);
                t41 = *(int *)0xC2A9850;
                t42 = (int)((int)t41 % (int)0xA);
                t47 = t42;
                t48 = t37;
                t50 = t40;
            } else {
                t43 = (int)((int)t7 / (int)0x64);
                t44 = (int)((int)t7 / (int)0xA);
                t45 = (int)((int)t44 % (int)0xA);
                t46 = (int)((int)t7 % (int)0xA);
                t47 = t46;
                t48 = t43;
                t50 = t45;
            }
            t56 = t47;
            t57 = t48;
            t59 = t50;
        } else {
            t52 = (int)((int)t7 / (int)0x64);
            t53 = (int)((int)t7 / (int)0xA);
            t54 = (int)((int)t53 % (int)0xA);
            t55 = (int)((int)t7 % (int)0xA);
            t56 = t55;
            t57 = t52;
            t59 = t54;
        }
        u61 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u61 + 1.0f);
        u62 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u62 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        if (t57 != 0) {
            t63 = *(int *)((0xC130E18 + (t57 << 2)));
            *(unsigned int *)0xC2A96F8 = t63;
            *(float *)0xC2A96FC = 496.0f;
            t64 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(t64 + 0x36);
            t65 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t59, (t56 << 2));
            t66 = *(int *)(((t59 << 2) + 0xC130E18));
            *(unsigned int *)0xC2A96F8 = t66;
            *(float *)0xC2A96FC = 528.0f;
            t67 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            t68 = *(int *)(((t56 << 2) + 0xC130E18));
            *(unsigned int *)0xC2A96F8 = t68;
            *(float *)0xC2A96FC = 560.0f;
        } else {
            if (t59 != 0) {
                t69 = *(int *)((0xC130E18 + (t59 << 2)));
                *(unsigned int *)0xC2A96F8 = t69;
                if (t57 != 0) {
                    *(float *)0xC2A96FC = 496.0f;
                } else {
                    *(float *)0xC2A96FC = 512.0f;
                }
                t72 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(t72 + 0x36);
                t73 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t59, (t56 << 2));
                t74 = *(int *)(((t56 << 2) + 0xC130E18));
                *(unsigned int *)0xC2A96F8 = t74;
                if (t57 != 0) {
                    *(float *)0xC2A96FC = 528.0f;
                } else {
                    *(float *)0xC2A96FC = 544.0f;
                }
            } else {
                t77 = *(int *)((0xC130E18 + (t56 << 2)));
                *(unsigned int *)0xC2A96F8 = t77;
                *(float *)0xC2A96FC = 528.0f;
                t78 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(t78 + 0x36);
                t83 = t59;
                t84 = (t56 << 2);
            }
            t92 = t83;
            t93 = t84;
        }
        t97 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, t92, t93);
        *(unsigned int *)0xC2A96F8 = 0x12B;
        t98 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t98 + 0x52);
        u99 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u99 + 1.0f);
        *(unsigned int *)0xC2A9720 = 0x0;
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        t100 = *(int *)0xC2A9850;
        if ((int)t100 >= (int)0x2) {
            *(float *)0xC2A96FC = 588.0f;
            *(float *)0xC2A9710 = 0.267999977f;
            *(float *)0xC2A9718 = 0.375999987f;
            u101 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u101 + 0.103999995f);
            t102 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            *(float *)0xC2A9710 = 0.0f;
            *(float *)0xC2A9718 = 1.0f;
            *(float *)0xC2A96FC = 520.0f;
        } else {
            *(float *)0xC2A96FC = 528.0f;
        }
        u107 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u107 + 1.0f);
        t108 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
        t109 = t108;
    }
    return t109;
}
