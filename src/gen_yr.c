/* Straight-line functions with calls and guards (batch gen_yr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Geton(int a4);

int Chat_Geton(int a4)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t9;
    int t10;
    int t11;
    int t13;
    int t15;
    int t16;
    int t3;
    int t7;
    int stk[222] = {0};

    t0 = 0xC0D3380;
    t2 = (0x1E8 + ((int)stk + 4));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D3380 + 384)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0xC0D3500;
    t6 = (((int)stk + 4) + 0x8);
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0xC0D3500 + 480)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    *(unsigned int *)(((int)stk + 4)) = 0xC13EB9C;
    t9 = (int)(((unsigned int)(*(int *)0xC2AD1DC) >> 27) & 0x3);
    t10 = *(int *)0xC2AD000;
    t11 = *(int *)0xC13EB90;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EB9C) = *(struct mv3 *)(((short)((((((((t10 - 1) << 2) << 1) + (t9 << 1)) + (t11 & 0x1)) << 1) + (((((t10 - 1) << 2) << 1) + (t9 << 1)) + (t11 & 0x1))) << 2) + (0x1E8 + ((int)stk + 4)))); }
    *(unsigned int *)(((int)stk + 8)) = 0xC13EBB4;
    t13 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
    t15 = (int)(((unsigned int)(*(int *)0xC2AD1DC) >> 27) & 0x3);
    t16 = *(int *)0xC13EB94;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBB4) = *(struct mv3 *)(((short)(((((((t13 << 2) << 1) + (t15 << 1)) + ((t16 & 0x2) >> 1)) << 1) + ((((t13 << 2) << 1) + (t15 << 1)) + ((t16 & 0x2) >> 1))) << 2) + (((int)stk + 4) + 0x8))); }
    Voice_ShutUp(0x1);
    Voice_Request((*(int *)(((int)stk + 4))), 0x1, 0x7F, 0x0);
    Voice_ShutUp(0x2);
    return (Voice_Request((*(int *)(((int)stk + 8))), 0x2, 0x7F, 0x0));
}
