/* Straight-line functions with calls and guards (batch gen_mk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_SetMotion(int, float);
int extRand(void);
int Drv_StartPsgReact(void);

int Drv_StartPsgReact(void)
{
    int t3;
    int t4;
    int t10;
    int t15;
    int t21;
    int stk[14] = {0};

    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x1C)) = *(struct mv2 *)(0xC0D5154); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x14)) = *(struct mv2 *)(0xC0D515C); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0xC)) = *(struct mv2 *)(0xC0D5164); }
    *(unsigned int *)(((int)stk + 12)) = (*(int *)0xC0D516C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC0D5170);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC0D5174);
    t3 = extRand();
    t4 = *(int *)0xC2AD01C;
    *(unsigned int *)0xC2AD014 = t4;
    if (t4 != 0) {
        t10 = t4;
        if (t4 != 1) {
        } else {
            *(unsigned int *)0xC2AD1D0 = (*(int *)(((int)stk + 8)));
            *(unsigned int *)0xC2AD1D4 = (*(int *)(((int)stk + 4)));
            Drv_SetMotion((*(int *)(((int)stk + 12))), 0.0f);
            *(float *)0xC2AD0F8 = (15.0f);
            t10 = 0xF8;
        }
        t21 = t10;
    } else {
        t15 = (int)((unsigned int)t3 % (unsigned int)0x2);
        *(unsigned int *)0xC2AD1D0 = (*(int *)((((t15 << 2) + (((int)stk + 4) + 0x14)) + 0x0)));
        *(unsigned int *)0xC2AD1D4 = (*(int *)((((((int)stk + 4) + 0xC) + (t15 << 2)) + 0x0)));
        Drv_SetMotion((*(int *)((((t15 << 2) + (((int)stk + 4) + 0x1C)) + 0x0))), 0.0f);
        *(float *)0xC2AD0F8 = (15.0f);
        t21 = 0xF8;
    }
    return t21;
}
