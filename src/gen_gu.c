/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Crush(int a4, int a5);

int Chat_Crush(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t25;
    int t39;
    int t3;
    int stk[69] = {0};

    t0 = 0xC0D4028;
    t2 = (0xA0 + ((int)stk + 4));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D4028 + 100)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)((0x8C + ((int)stk + 4))) = *(struct mv5 *)(0xC0D408C); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x50)) = *(struct mv15 *)(0xC0D40A0); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 4) + 0x28)) = *(struct mv10 *)(0xC0D40DC); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)(((int)stk + 4)) = *(struct mv10 *)(0xC0D4104); }
    t4 = *(int *)0xC13EB90;
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
            } else {
                *(unsigned int *)0xC13EC68 = (*(int *)((((((((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7)) << 1) + (((0x2 & t4) >> 1) & 0x1)) << 2) + (((int)stk + 4) + 0x28)) + 0x0)));
                *(unsigned int *)0xC13EC74 = (*(int *)((((((((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7)) << 1) + ((*(int *)0xC13EB90) & 0x1)) << 2) + ((int)stk + 4)) + 0x0)));
                Voice_ShutUp(0x2);
            }
        } else {
            *(unsigned int *)0xC13EC68 = (*(int *)(((0x8C + ((int)stk + 4)) + (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7)) << 2))));
            t25 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
            *(unsigned int *)0xC13EC74 = (*(int *)(((((((t25 << 1) + t25) + ((int)((int)(*(int *)0xC13EB90) % (int)0x3))) << 2) + (((int)stk + 4) + 0x50)) + 0x0)));
            Voice_ShutUp(0x2);
        }
    } else {
        t39 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
        *(unsigned int *)0xC13EC68 = (*(int *)(((((((t39 << 2) + t39) + ((int)((int)t4 % (int)0x5))) << 2) + (0xA0 + ((int)stk + 4))) + 0x0)));
        *(unsigned int *)0xC13EC74 = 0x0;
    }
    return (Voice_Request(0xC13EC68, 0x2, 0x73, 0x0));
}
