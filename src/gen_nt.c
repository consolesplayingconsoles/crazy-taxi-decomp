/* Straight-line functions with calls and guards (batch gen_nt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int FUN_0c0618da(int a4, int a5);

int FUN_0c0618da(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t38;
    int t39;
    int t40;
    int t41;
    int t51;
    int t3;
    int stk[69] = {0};

    t0 = 0xC0D4028;
    t1 = (0xC0D4028 + 100);
    t2 = (0xA0 + ((int)stk + 4));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)t1 < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)((0x8C + ((int)stk + 4))) = *(struct mv5 *)(0xC0D408C); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x50)) = *(struct mv15 *)(0xC0D40A0); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 4) + 0x28)) = *(struct mv10 *)(0xC0D40DC); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)(((int)stk + 4)) = *(struct mv10 *)(0xC0D4104); }
    t4 = *(int *)0xC13EB90;
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
            } else {
                t5 = *(int *)(((0x148 + a4) + 0x0));
                t6 = (int)(((unsigned int)t5 >> 29) & 0x7);
                t7 = *(int *)((((((t6 << 1) + (((0x2 & t4) >> 1) & 0x1)) << 2) + (((int)stk + 4) + 0x28)) + 0x0));
                *(unsigned int *)0xC13EC68 = t7;
                t8 = *(int *)(((0x148 + a4) + 0x0));
                t9 = (int)(((unsigned int)t8 >> 29) & 0x7);
                t10 = *(int *)0xC13EB90;
                t11 = *(int *)((((((t9 << 1) + (t10 & 0x1)) << 2) + ((int)stk + 4)) + 0x0));
                *(unsigned int *)0xC13EC74 = t11;
                Voice_ShutUp(0x2);
            }
        } else {
            t21 = *(int *)(((0x148 + a4) + 0x0));
            t22 = (int)(((unsigned int)t21 >> 29) & 0x7);
            t23 = *(int *)(((0x8C + ((int)stk + 4)) + (t22 << 2)));
            *(unsigned int *)0xC13EC68 = t23;
            t24 = *(int *)(((0x148 + a4) + 0x0));
            t25 = (int)(((unsigned int)t24 >> 29) & 0x7);
            t26 = *(int *)0xC13EB90;
            t27 = (int)((int)t26 % (int)0x3);
            t28 = *(int *)(((((((t25 << 1) + t25) + t27) << 2) + (((int)stk + 4) + 0x50)) + 0x0));
            *(unsigned int *)0xC13EC74 = t28;
            Voice_ShutUp(0x2);
        }
    } else {
        t38 = *(int *)(((0x148 + a4) + 0x0));
        t39 = (int)(((unsigned int)t38 >> 29) & 0x7);
        t40 = (int)((int)t4 % (int)0x5);
        t41 = *(int *)(((((((t39 << 2) + t39) + t40) << 2) + (0xA0 + ((int)stk + 4))) + 0x0));
        *(unsigned int *)0xC13EC68 = t41;
        *(unsigned int *)0xC13EC74 = 0x0;
    }
    t51 = Voice_Request(0xC13EC68, 0x2, 0x73, 0x0);
    return t51;
}
