/* Straight-line functions with calls and guards (batch gen_oi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Choin(int a4, int a5);

int Chat_Choin(int a4, int a5)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t24;
    int t3;
    int stk[32] = {0};

    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x64)) = *(struct mv5 *)(0xC0D412C); }
    t0 = 0xC0D4140;
    t1 = (0xC0D4140 + 100);
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)t1 < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(int *)0xC13EB90;
    if (a5 == 3) {
        t5 = *(int *)(((0x148 + a4) + 0x0));
        t6 = (int)(((unsigned int)t5 >> 29) & 0x7);
        t7 = (int)((int)t4 % (int)0x5);
        t8 = *(int *)(((((((t6 << 2) + t6) + t7) << 2) + ((int)stk + 4)) + 0x0));
        *(unsigned int *)0xC13EC8C = t8;
    } else {
        t9 = *(int *)(((0x148 + a4) + 0x0));
        t10 = (int)(((unsigned int)t9 >> 29) & 0x7);
        t11 = *(int *)((0xC13ED0C + (t10 << 2)));
        t12 = *(int *)(((((int)stk + 4) + 0x64) + (t10 << 2)));
        t13 = (int)((unsigned int)t4 % (unsigned int)t12);
        t14 = *(int *)0xC13EC8C;
        t15 = *(int *)((t11 + (t13 << 2)));
        if (t14 != t15) {
            *(unsigned int *)0xC13EC8C = t15;
        }
    }
    Voice_ShutUp(0x2);
    t24 = Voice_Request(0xC13EC8C, 0x2, 0x73, 0x0);
    return t24;
}
