/* Straight-line functions with calls and guards (batch gen_np): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pedIsSpecialModel(int);
int nlRand(void);
int pedPickIdle(int);
int pedInit(int a4, int a5);

int pedInit(int a4, int a5)
{
    int t0;
    int t38;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t15;
    int t16;
    int t21;
    int t22;
    int t28;
    int t29;
    int t47;
    int t48;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t61;
    int t62;
    int t67;
    int t68;
    int t74;
    int t75;
    int t84;
    int t23;
    int t17;
    int t11;
    int t69;
    int t63;
    int t57;

    t0 = *(int *)0xC1EE20C;
    if (t0 != 0) {
        t38 = t0;
        if (t0 == 1) {
            t1 = nlRand();
            t2 = (int)((int)t1 % (int)0x2);
            *(unsigned int *)((a4 + 0x1C)) = t2;
            if (t2 == 0) {
                *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
            }
            t5 = *(int *)0xC2A71F4;
            *(unsigned int *)((a4 + 0x24)) = t5;
            t6 = *(int *)0xC1EE20C;
            if (t6 == 0) {
                if ((int)a5 >= (int)0xA1) {
                    if ((int)a5 <= (int)0xB6) {
                        t7 = nlRand();
                        t8 = (int)((int)t7 % (int)0x4);
                        t11 = (t8 + 0xC);
                    } else {
                        t9 = *(int *)0xC2A71F4;
                        t10 = (int)((int)(t9 + 0x1) % (int)0x9);
                        t11 = t10;
                    }
                    t17 = t11;
                } else {
                    t15 = *(int *)0xC2A71F4;
                    t16 = (int)((int)(t15 + 0x1) % (int)0x9);
                    t17 = t16;
                }
                t23 = t17;
            } else {
                t21 = *(int *)0xC2A71F4;
                t22 = (int)((int)(t21 + 0x1) % (int)0x9);
                t23 = t22;
            }
            *(unsigned int *)0xC2A71F4 = t23;
            pedPickIdle(a4);
            *(unsigned int *)((a4 + 0x20)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)(0xC12FF00); }
            *(unsigned short *)((a4 + 0x38)) = 0x0;
            *(float *)((a4 + 0x3C)) = 0.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC12FF00); }
            *(unsigned int *)((a4 + 0x4C)) = 0x0;
            *(unsigned int *)((a4 + 0x50)) = 0x1;
            t28 = *(int *)0xC1EE20C;
            if (t28 == 1) {
                t29 = pedIsSpecialModel(a5);
                if (t29 != 0) {
                    *(unsigned short *)((a4 + 0x60)) = 0x1;
                } else {
                    *(unsigned short *)((a4 + 0x60)) = 0x0;
                }
            } else {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
            t38 = 0x60;
        }
        t84 = t38;
    } else {
        t47 = nlRand();
        t48 = (int)((int)t47 % (int)0x2);
        *(unsigned int *)((a4 + 0x1C)) = t48;
        if (t48 == 0) {
            *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
        }
        t51 = *(int *)0xC2A71F4;
        *(unsigned int *)((a4 + 0x24)) = t51;
        t52 = *(int *)0xC1EE20C;
        if (t52 == 0) {
            if ((int)a5 >= (int)0xA1) {
                if ((int)a5 <= (int)0xB6) {
                    t53 = nlRand();
                    t54 = (int)((int)t53 % (int)0x4);
                    t57 = (t54 + 0xC);
                } else {
                    t55 = *(int *)0xC2A71F4;
                    t56 = (int)((int)(t55 + 0x1) % (int)0x9);
                    t57 = t56;
                }
                t63 = t57;
            } else {
                t61 = *(int *)0xC2A71F4;
                t62 = (int)((int)(t61 + 0x1) % (int)0x9);
                t63 = t62;
            }
            t69 = t63;
        } else {
            t67 = *(int *)0xC2A71F4;
            t68 = (int)((int)(t67 + 0x1) % (int)0x9);
            t69 = t68;
        }
        *(unsigned int *)0xC2A71F4 = t69;
        pedPickIdle(a4);
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)(0xC12FF00); }
        *(unsigned short *)((a4 + 0x38)) = 0x0;
        *(float *)((a4 + 0x3C)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC12FF00); }
        *(unsigned int *)((a4 + 0x4C)) = 0x0;
        *(unsigned int *)((a4 + 0x50)) = 0x1;
        t74 = *(int *)0xC1EE20C;
        if (t74 == 1) {
            t75 = pedIsSpecialModel(a5);
            if (t75 != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x1;
            } else {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x60)) = 0x0;
        }
        t84 = 0x60;
    }
    return t84;
}
