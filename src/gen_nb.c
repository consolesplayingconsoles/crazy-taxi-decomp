/* Straight-line functions with calls and guards (batch gen_nb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Iraira(int a4, int a5, int a6);

int Chat_Iraira(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t21;
    int t22;
    int t27;
    int t28;
    int t33;
    int t40;
    int t60;
    int t41;
    int t42;
    int t43;
    int t44;
    int t50;
    int t51;
    int t52;
    int t59;
    int t3;
    int t77;
    int t68;
    int stk[68] = {0};

    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xD4 + ((int)stk + 4))) = *(struct mv8 *)(0xC0D41A4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0xBC + ((int)stk + 4))) = *(struct mv6 *)(0xC0D41C4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0xA4 + ((int)stk + 4))) = *(struct mv6 *)(0xC0D41DC); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((0x88 + ((int)stk + 4))) = *(struct mv7 *)(0xC0D41F4); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x78)) = *(struct mv4 *)(0xC0D4210); }
    t0 = 0xC0D4220;
    t1 = (0xC0D4220 + 100);
    t2 = (((int)stk + 4) + 0x14);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)t1 < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC0D4284); }
    if (a6 == 2) {
        t4 = *(int *)(((0x148 + a4) + 0x0));
        t5 = (int)(((unsigned int)t4 >> 29) & 0x7);
        t6 = *(int *)((((int)stk + 4) + (t5 << 2)));
        *(unsigned int *)0xC13ED20 = t6;
        t7 = *(int *)0xC2AD000;
        t8 = *(int *)(((((t7 - 1) << 2) + (((int)stk + 4) + 0x78)) + 0x0));
        *(unsigned int *)0xC13ED38 = t8;
        Voice_ShutUp(0x1);
        Voice_Request(0xC13ED38, 0x1, 0x73, 0x0);
        Voice_ShutUp(0x2);
        t12 = Voice_Request(0xC13ED20, 0x2, 0x73, 0x0);
        t77 = t12;
    } else {
        t13 = *(int *)0xC13EB90;
        if (a5 == 0) {
            t14 = *(int *)0xC2AD000;
            if (t14 != 1) {
                if (t14 != 2) {
                    if (t14 != 3) {
                        if (t14 != 4) {
                            *(unsigned int *)0xC13ED20 = 0x0;
                        } else {
                            t15 = (int)((unsigned int)t13 % (unsigned int)0x7);
                            t16 = *(int *)((((t15 << 2) + (0x88 + ((int)stk + 4))) + 0x0));
                            *(unsigned int *)0xC13ED20 = t16;
                        }
                    } else {
                        t21 = (int)((unsigned int)t13 % (unsigned int)0x6);
                        t22 = *(int *)(((0xA4 + ((int)stk + 4)) + (t21 << 2)));
                        *(unsigned int *)0xC13ED20 = t22;
                    }
                } else {
                    t27 = (int)((unsigned int)t13 % (unsigned int)0x6);
                    t28 = *(int *)(((0xBC + ((int)stk + 4)) + (t27 << 2)));
                    *(unsigned int *)0xC13ED20 = t28;
                }
            } else {
                t33 = *(int *)(((((t13 & 0x7) << 2) + (0xD4 + ((int)stk + 4))) + 0x0));
                *(unsigned int *)0xC13ED20 = t33;
            }
            Voice_ShutUp(0x1);
            t40 = Voice_Request(0xC13ED20, 0x1, 0x73, 0x0);
            t68 = t40;
        } else {
            t60 = a5;
            if (a5 == 1) {
                if (a6 != 0) {
                    if (a6 != 1) {
                    } else {
                        t41 = *(int *)(((0x148 + a4) + 0x0));
                        t42 = (int)(((unsigned int)t41 >> 29) & 0x7);
                        t43 = (int)((int)t13 % (int)0x4);
                        t44 = *(int *)(((((int)stk + 4) + 0x14) + (((t43 + ((t42 << 2) + t42)) + 0x1) << 2)));
                        *(unsigned int *)0xC13ED20 = t44;
                    }
                } else {
                    t50 = *(int *)(((0x148 + a4) + 0x0));
                    t51 = (int)(((unsigned int)t50 >> 29) & 0x7);
                    t52 = *(int *)(((((int)stk + 4) + 0x14) + (((t51 << 2) + t51) << 2)));
                    *(unsigned int *)0xC13ED20 = t52;
                }
                Voice_ShutUp(0x2);
                t59 = Voice_Request(0xC13ED20, 0x2, 0x73, 0x0);
                t60 = t59;
            }
            t68 = t60;
        }
        t77 = t68;
    }
    return t77;
}
