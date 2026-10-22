/* Straight-line functions with calls and guards (batch gen_lk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_Execute(void);
int FUN_0c0644cc(void);
int FUN_0c0630d2(void);

int FUN_0c0630d2(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t12;
    int t3;
    int t8;
    int stk[22] = {0};

    t0 = 0xC0D5184;
    t1 = (0xC0D5184 + 76);
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)t1 < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(signed char *)0xC2AD1DF;
    t5 = *(int *)0xC2AD010;
    if ((t4 & 1) == 0) {
        t6 = *(int *)((((t5 << 2) + ((int)stk + 4)) + 0x0));
        t8 = t6;
    } else {
        t7 = *(int *)((((t5 << 2) + ((int)stk + 4)) + 0x28));
        t8 = t7;
    }
    t10 = ((int (*)(int, int, int))(t8))(((t5 << 2) + ((int)stk + 4)), ((int)stk + 4), 0xC2AD000);
    Drv_Execute();
    t12 = FUN_0c0644cc();
    return t12;
}
