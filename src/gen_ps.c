/* Straight-line functions with calls and guards (batch gen_ps): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_Pass_Default2_Sprite(void);
int Money_Array(int, int, int);
int Sound_Request(int, int);
int hudDrawFare(void);
int hudSplitFareDigits(int, int);
int hudUpdateFareState(void);
int hudDrawTime(void);

int hudDrawTime(void)
{
    int t1;
    int t21;
    int t22;
    int t24;
    int t25;
    int t40;
    int t100;
    int t48;
    int t96;
    int t55;
    int t92;
    int t61;
    int t88;
    int t66;
    int t84;
    int t70;
    int t80;
    int t73;
    int t76;
    int t75;
    int t110;
    int t109;
    int t114;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t74;
    int t108;
    int stk[21];

    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x1C)) = *(struct mv7 *)(0xC0D08F8); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)(((int)stk + 4)) = *(struct mv7 *)(0xC0D0914); }
    if ((*(int *)0xC2A8EB0) == 9) {
        t1 = End_Pass_Default2_Sprite();
        *(unsigned int *)0xC2A8E98 = 0x0;
        t114 = t1;
    } else {
        hudUpdateFareState();
        if (((int)(*(int *)0xC2A8EB0) >= (int)0x2) && (((t4 = *(int *)0xC2A8C7C, t5 = *(int *)((t4 + 0x0)), t5 != 0) || ((t6 = *(int *)0xC2A8C80, t7 = *(int *)((t6 + 0x0)), t7 != 0) || (t8 = *(int *)0xC2A8C84, t9 = *(int *)((t8 + 0x0)), t9 != 0))) && ((t10 = *(int *)0xC2A8E4C, t10 == 0) && ((t11 = *(int *)0xC2A8E48, t11 == 0) && ((t12 = *(int *)0xC2A8E44, t12 == 0) && ((t13 = *(int *)0xC2A8E40, t13 == 0) && ((t14 = *(int *)0xC2A8E3C, t14 == 0) && ((t15 = *(int *)0xC2A8E38, t15 == 0) && (t16 = *(int *)0xC2A8E34, t16 == 0))))))))) {
            Money_Array((((int)stk + 4) + 0x1C), (*(int *)0xC2A8E94), 0x7);
            t21 = *(int *)(((*(int *)0xC2A8C80) + 0x0));
            t22 = *(int *)(((*(int *)0xC2A8C7C) + 0x0));
            t24 = *(int *)(((*(int *)0xC2A8C84) + 0x0));
            t25 = *(int *)0xC2A8E94;
            *(unsigned int *)0xC2A8E94 = (t25 + ((t22 + t21) + t24));
            if ((int)(t25 + ((t22 + t21) + t24)) > (int)0x98967F) {
                *(unsigned int *)0xC2A8E94 = 0x98967F;
            }
            Money_Array(((int)stk + 4), (*(int *)0xC2A8E94), 0x7);
            hudSplitFareDigits((((int)stk + 4) + 0x1C), ((int)stk + 4));
            *(unsigned int *)(((*(int *)0xC2A8C7C) + 0x0)) = 0x0;
            *(unsigned int *)(((*(int *)0xC2A8C80) + 0x0)) = 0x0;
            *(unsigned int *)(((*(int *)0xC2A8C84) + 0x0)) = 0x0;
            Sound_Request(0x604A9, 0x0);
            *(unsigned int *)0xC2A9184 = 0x0;
        }
        hudDrawFare();
        t40 = *(int *)0xC2A8E84;
        t100 = t40;
        if (t40 == 1) {
            t48 = *(int *)0xC2A8E80;
            t96 = t48;
            if (t48 == 1) {
                t55 = *(int *)0xC2A8E7C;
                t92 = t55;
                if (t55 == 1) {
                    t61 = *(int *)0xC2A8E78;
                    t88 = t61;
                    if (t61 == 1) {
                        t66 = *(int *)0xC2A8E74;
                        t84 = t66;
                        if (t66 == 1) {
                            t70 = *(int *)0xC2A8E70;
                            t80 = t70;
                            if (t70 == 1) {
                                t73 = *(int *)0xC2A8E6C;
                                t76 = t73;
                                if ((t73 == 1) && (t74 = *(int *)0xC2A9184, t74 == 0)) {
                                    t75 = Sound_Request(0x704A9, 0x0);
                                    *(unsigned int *)0xC2A9184 = 0x1;
                                    t76 = t75;
                                }
                                t80 = t76;
                            }
                            t84 = t80;
                        }
                        t88 = t84;
                    }
                    t92 = t88;
                }
                t96 = t92;
            }
            t100 = t96;
        }
        if ((*(int *)0xC2A11B0) == 0) {
            *(unsigned int *)0xC2A91C0 = 0x0;
        }
        t110 = t100;
        if (((*(int *)0xC2A11B0) != 0) && (t108 = *(int *)0xC2A91C0, t108 == 0)) {
            t109 = Sound_Request(0x704A9, 0x0);
            *(unsigned int *)0xC2A91C0 = 0x1;
            t110 = t109;
        }
        t114 = t110;
    }
    return t114;
}
