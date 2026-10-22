/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_Execute(void);
int FUN_0c0644cc(void);
int FUN_0c0630d2(void);

int FUN_0c0630d2(void)
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
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t25;
    int t27;
    int t23;
    int stk[22] = {0};

    t0 = *(int *)0xC0D51CC;
    *(unsigned int *)((((int)stk + 4) + 0x48)) = t0;
    t1 = *(int *)0xC0D51C8;
    *(unsigned int *)((((int)stk + 4) + 0x44)) = t1;
    t2 = *(int *)0xC0D51C4;
    *(unsigned int *)((((int)stk + 4) + 0x40)) = t2;
    t3 = *(int *)0xC0D51C0;
    *(unsigned int *)((((int)stk + 4) + 0x3C)) = t3;
    t4 = *(int *)0xC0D51BC;
    *(unsigned int *)((((int)stk + 4) + 0x38)) = t4;
    t5 = *(int *)0xC0D51B8;
    *(unsigned int *)((((int)stk + 4) + 0x34)) = t5;
    t6 = *(int *)0xC0D51B4;
    *(unsigned int *)((((int)stk + 4) + 0x30)) = t6;
    t7 = *(int *)0xC0D51B0;
    *(unsigned int *)((((int)stk + 4) + 0x2C)) = t7;
    t8 = *(int *)0xC0D51AC;
    *(unsigned int *)((((int)stk + 4) + 0x28)) = t8;
    t9 = *(int *)0xC0D51A8;
    *(unsigned int *)((((int)stk + 4) + 0x24)) = t9;
    t10 = *(int *)0xC0D51A4;
    *(unsigned int *)((((int)stk + 4) + 0x20)) = t10;
    t11 = *(int *)0xC0D51A0;
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = t11;
    t12 = *(int *)0xC0D519C;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t12;
    t13 = *(int *)0xC0D5198;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t13;
    t14 = *(int *)0xC0D5194;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t14;
    t15 = *(int *)0xC0D5190;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t15;
    t16 = *(int *)0xC0D518C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t16;
    t17 = *(int *)0xC0D5188;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t17;
    t18 = *(int *)0xC0D5184;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t18;
    t19 = *(signed char *)0xC2AD1DF;
    t20 = *(int *)0xC2AD010;
    if ((t19 & 1) == 0) {
        t21 = *(int *)((((t20 << 2) + ((int)stk + 4)) + 0x0));
        t23 = t21;
    } else {
        t22 = *(int *)((((t20 << 2) + ((int)stk + 4)) + 0x28));
        t23 = t22;
    }
    t25 = ((int (*)(int, int, int))(t23))(((t20 << 2) + ((int)stk + 4)), ((int)stk + 4), 0xC2AD000);
    Drv_Execute();
    t27 = FUN_0c0644cc();
    return t27;
}
