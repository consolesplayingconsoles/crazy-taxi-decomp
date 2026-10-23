/* Straight-line functions with calls and guards (batch gen_yw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_SetMotion(int, float);
int Drv_StartReady(int a4);

int Drv_StartReady(int a4)
{
    int t1;
    int t2;
    int t7;
    int t22;
    int t23;
    int stk[20];

    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x24)) = *(struct mv4 *)(0xC0D5124); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x14)) = *(struct mv4 *)(0xC0D5134); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x4)) = *(struct mv4 *)(0xC0D5144); }
    t1 = *(int *)0xC2AD000;
    t2 = a4;
    if (((unsigned int)(*(int *)0xC2AD01C) <= (unsigned int)0x0) && (a4 == 0)) {
        *(unsigned int *)0xC2AD014 = 0x1;
        t2 = 0x1;
    }
    if (t2 != 0) {
        t7 = t2;
        if (t2 != 1) {
        } else {
            *(unsigned int *)0xC2AD1D0 = (*(int *)(((((int)stk + 4) + 0x14) + ((t1 - 1) << 2))));
            *(unsigned int *)0xC2AD1D4 = (*(int *)(((((int)stk + 4) + 0x4) + ((t1 - 1) << 2))));
            Drv_SetMotion((*(int *)(((((int)stk + 4) + 0x24) + ((t1 - 1) << 2)))), 0.0f);
            *(float *)0xC2AD0F8 = 15.0f;
            t7 = 0xF8;
        }
        t23 = t7;
    } else {
        *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
        *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
        *(unsigned int *)(((int)stk + 4)) = (((t1 - 1) << 2) + (((int)stk + 4) + 0x24));
        Drv_SetMotion((*(int *)(((((t1 - 1) << 2) + (((int)stk + 4) + 0x24)) + 0x0))), 0.0f);
        *(float *)0xC2AD0F8 = 15.0f;
        t22 = (int)((unsigned int)((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))) + 0x78) & 0xFFFFFF);
        *(unsigned int *)0xC2AD1DC = (((*(int *)0xC2AD1DC) & 0xFF000000) | ((unsigned int)t22 << 0));
        t23 = t22;
    }
    return t23;
}
