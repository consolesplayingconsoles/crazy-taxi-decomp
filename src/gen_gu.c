/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Choin(int a4, int a5);

int Chat_Choin(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t10;
    int t15;
    int t3;
    int stk[32];

    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x64)) = *(struct mv5 *)(0xC0D412C); }
    t0 = 0xC0D4140;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D4140 + 100)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(int *)0xC13EB90;
    if (a5 == 3) {
        t6 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
        *(unsigned int *)0xC13EC8C = (*(int *)(((((((t6 << 2) + t6) + ((int)((int)t4 % (int)0x5))) << 2) + ((int)stk + 4)) + 0x0)));
    } else {
        t10 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
        t15 = *(int *)(((*(int *)((0xC13ED0C + (t10 << 2)))) + (((int)((unsigned int)t4 % (unsigned int)(*(int *)(((((int)stk + 4) + 0x64) + (t10 << 2)))))) << 2)));
        if ((*(int *)0xC13EC8C) != t15) {
            *(unsigned int *)0xC13EC8C = t15;
        }
    }
    Voice_ShutUp(0x2);
    return (Voice_Request(0xC13EC8C, 0x2, 0x73, 0x0));
}
