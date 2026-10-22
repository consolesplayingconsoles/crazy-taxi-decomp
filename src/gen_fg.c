/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Geton(int a4);

int Chat_Geton(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
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
    int t18;
    int t21;
    int t22;
    int stk[222] = {0};

    t0 = 0;
    for (; t0 < (int)0x180; t0++) *(unsigned char *)((0x1E8 + ((int)stk + 4)) + t0) = *(unsigned char *)(0xC0D3380 + t0);
    t1 = 0;
    for (; t1 < (int)0x1E0; t1++) *(unsigned char *)((((int)stk + 4) + 0x8) + t1) = *(unsigned char *)(0xC0D3500 + t1);
    *(unsigned int *)(((int)stk + 4)) = 0xC13EB9C;
    t2 = *(int *)0xC2AD1DC;
    t3 = (int)(((unsigned int)t2 >> 27) & 0x3);
    t4 = *(int *)0xC2AD000;
    t5 = *(int *)0xC13EB90;
    t6 = *(int *)((((short)((((((((t4 - 1) << 2) << 1) + (t3 << 1)) + (t5 & 0x1)) << 1) + (((((t4 - 1) << 2) << 1) + (t3 << 1)) + (t5 & 0x1))) << 2) + (0x1E8 + ((int)stk + 4))) + 0x8));
    *(unsigned int *)0xC13EBA4 = t6;
    t7 = *(int *)((((short)((((((((t4 - 1) << 2) << 1) + (t3 << 1)) + (t5 & 0x1)) << 1) + (((((t4 - 1) << 2) << 1) + (t3 << 1)) + (t5 & 0x1))) << 2) + (0x1E8 + ((int)stk + 4))) + 0x4));
    *(unsigned int *)0xC13EBA0 = t7;
    t8 = *(int *)((((short)((((((((t4 - 1) << 2) << 1) + (t3 << 1)) + (t5 & 0x1)) << 1) + (((((t4 - 1) << 2) << 1) + (t3 << 1)) + (t5 & 0x1))) << 2) + (0x1E8 + ((int)stk + 4))) + 0x0));
    *(unsigned int *)0xC13EB9C = t8;
    *(unsigned int *)(((int)stk + 8)) = 0xC13EBB4;
    t9 = *(int *)(((0x148 + a4) + 0x0));
    t10 = (int)(((unsigned int)t9 >> 29) & 0x7);
    t11 = *(int *)0xC2AD1DC;
    t12 = (int)(((unsigned int)t11 >> 27) & 0x3);
    t13 = *(int *)0xC13EB94;
    t14 = *(int *)((((short)(((((((t10 << 2) << 1) + (t12 << 1)) + ((t13 & 0x2) >> 1)) << 1) + ((((t10 << 2) << 1) + (t12 << 1)) + ((t13 & 0x2) >> 1))) << 2) + (((int)stk + 4) + 0x8)) + 0x8));
    *(unsigned int *)0xC13EBBC = t14;
    t15 = *(int *)((((short)(((((((t10 << 2) << 1) + (t12 << 1)) + ((t13 & 0x2) >> 1)) << 1) + ((((t10 << 2) << 1) + (t12 << 1)) + ((t13 & 0x2) >> 1))) << 2) + (((int)stk + 4) + 0x8)) + 0x4));
    *(unsigned int *)0xC13EBB8 = t15;
    t16 = *(int *)((((short)(((((((t10 << 2) << 1) + (t12 << 1)) + ((t13 & 0x2) >> 1)) << 1) + ((((t10 << 2) << 1) + (t12 << 1)) + ((t13 & 0x2) >> 1))) << 2) + (((int)stk + 4) + 0x8)) + 0x0));
    *(unsigned int *)0xC13EBB4 = t16;
    Voice_ShutUp(0x1);
    t18 = *(int *)(((int)stk + 4));
    Voice_Request(t18, 0x1, 0x7F, 0x0);
    Voice_ShutUp(0x2);
    t21 = *(int *)(((int)stk + 8));
    t22 = Voice_Request(t21, 0x2, 0x7F, 0x0);
    return t22;
}
