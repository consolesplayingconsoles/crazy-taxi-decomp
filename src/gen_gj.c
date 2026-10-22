/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0630a2(int, float);
int FUN_0c062da4(int a4);

int FUN_0c062da4(int a4)
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
    int t16;
    int t14;
    int t22;
    int t18;
    int t19;
    int t20;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int stk[20] = {0};

    t0 = *(int *)0xC0D5130;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0xC)) = t0;
    t1 = *(int *)0xC0D512C;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x8)) = t1;
    t2 = *(int *)0xC0D5128;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x4)) = t2;
    t3 = *(int *)0xC0D5124;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = t3;
    t4 = *(int *)0xC0D5140;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0xC)) = t4;
    t5 = *(int *)0xC0D513C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t5;
    t6 = *(int *)0xC0D5138;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t6;
    t7 = *(int *)0xC0D5134;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t7;
    t8 = *(int *)0xC0D5150;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t8;
    t9 = *(int *)0xC0D514C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t9;
    t10 = *(int *)0xC0D5148;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t10;
    t11 = *(int *)0xC0D5144;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t11;
    t12 = *(int *)0xC2AD01C;
    t13 = *(int *)0xC2AD000;
    t16 = a4;
    if ((unsigned int)t12 <= (unsigned int)0x0) {
        t14 = a4;
        if (a4 == 0) {
            *(unsigned int *)0xC2AD014 = 0x1;
            t14 = 0x1;
        }
        t16 = t14;
    }
    if (t16 != 0) {
        t22 = t16;
        if (t16 != 1) {
        } else {
            t18 = *(int *)(((((int)stk + 4) + 0x14) + ((t13 - 1) << 2)));
            *(unsigned int *)0xC2AD1D0 = t18;
            t19 = *(int *)(((((int)stk + 4) + 0x4) + ((t13 - 1) << 2)));
            *(unsigned int *)0xC2AD1D4 = t19;
            t20 = *(int *)(((((int)stk + 4) + 0x24) + ((t13 - 1) << 2)));
            FUN_0c0630a2(t20, 0.0f);
            *(float *)0xC2AD0F8 = 15.0f;
            t22 = 0xF8;
        }
        t38 = t22;
    } else {
        *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
        *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
        *(unsigned int *)(((int)stk + 4)) = (((t13 - 1) << 2) + (((int)stk + 4) + 0x24));
        t31 = *(int *)(((((t13 - 1) << 2) + (((int)stk + 4) + 0x24)) + 0x0));
        FUN_0c0630a2(t31, 0.0f);
        *(float *)0xC2AD0F8 = 15.0f;
        t33 = *(int *)(((int)stk + 4));
        t34 = *(int *)((t33 + 0x0));
        t35 = *(int *)((t34 + 0x0));
        t36 = *(int *)0xC2AD1DC;
        t37 = (int)((unsigned int)(t35 + 0x78) & 0xFFFFFF);
        *(unsigned int *)0xC2AD1DC = ((t36 & 0xFF000000) | ((unsigned int)t37 << 0));
        t38 = t37;
    }
    return t38;
}
