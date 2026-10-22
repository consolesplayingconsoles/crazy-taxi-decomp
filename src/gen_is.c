/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SJ_SplitChunk(int, int, int);
int memset(int, int, int);
int FUN_0c1525d4(int a4, int a5, int a6);

int FUN_0c1525d4(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int stk[11] = {0};

    t0 = *(int *)((a4 + 0x14));
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (a6 + 0x1F);
    }
    t3 = *(int *)((t0 + 0x0));
    t4 = *(int *)((t3 + 0x18));
    t5 = ((int (*)(int, int, int, int))(t4))(t0, 0x0, (((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8));
    t6 = *(int *)(((int)stk + 16));
    t7 = (int)((int)t6 / (int)((((a5 << 2) << 1) + a5) << 1));
    t8 = *(int *)(((int)stk + 12));
    memset(t8, 0x0, (t7 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 4) + 0x8), (t7 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8));
    t11 = *(int *)((t0 + 0x0));
    t12 = *(int *)((t11 + 0x20));
    t13 = ((int (*)(int, int, int))(t12))(t0, 0x1, (((int)stk + 4) + 0x8));
    t14 = *(int *)((t0 + 0x0));
    t15 = *(int *)((t14 + 0x1C));
    t16 = ((int (*)(int, int, int))(t15))(t0, 0x0, ((int)stk + 4));
    t17 = *(int *)((t0 + 0x0));
    t18 = *(int *)((t17 + 0x18));
    t19 = ((int (*)(int, int, int, int))(t18))(t0, 0x0, ((((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)) - (t7 * ((((a5 << 2) << 1) + a5) << 1))), (((int)stk + 4) + 0x8));
    t20 = *(int *)(((int)stk + 16));
    t21 = (int)((int)t20 / (int)((((a5 << 2) << 1) + a5) << 1));
    t22 = *(int *)(((int)stk + 12));
    memset(t22, 0x0, (t21 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 4) + 0x8), (t21 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8));
    t25 = *(int *)((t0 + 0x0));
    t26 = *(int *)((t25 + 0x20));
    t27 = ((int (*)(int, int, int))(t26))(t0, 0x1, (((int)stk + 4) + 0x8));
    t28 = *(int *)((t0 + 0x0));
    t29 = *(int *)((t28 + 0x1C));
    t30 = ((int (*)(int, int, int))(t29))(t0, 0x0, ((int)stk + 4));
    t31 = (int)((int)((0x0 + (t7 * ((((a5 << 2) << 1) + a5) << 1))) + (t21 * ((((a5 << 2) << 1) + a5) << 1))) / (int)((((a5 << 2) << 1) + a5) << 1));
    return (((t31 << 2) << 2) << 1);
}
