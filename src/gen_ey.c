/* Straight-line functions with calls and guards (batch gen_ey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int psgRoadCheck(int);
int psgFrame(int a4);

int psgFrame(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t22;
    int t23;
    int t24;
    int stk[11] = {0};

    t0 = *(int *)0xC0D5F7C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t0;
    t1 = *(int *)0xC0D5F78;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t1;
    t2 = *(int *)0xC0D5F74;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t2;
    t3 = *(int *)0xC0D5F70;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t3;
    t4 = *(int *)0xC0D5F6C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t4;
    t5 = *(int *)0xC0D5F68;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t5;
    t6 = *(int *)0xC0D5F64;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t6;
    t7 = *(int *)((a4 + 0x20));
    if (t7 != 0) {
        if (t7 != 1) {
        } else {
            psgRoadCheck(a4);
        }
    } else {
        psgRoadCheck(a4);
    }
    t22 = *(int *)((a4 + 0x20));
    t23 = *(int *)((((t22 << 2) + (((int)stk + 4) + 0x4)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t23;
    t24 = ((int (*)(int))(t23))(a4);
    return t24;
}
