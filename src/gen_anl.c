/* Straight-line functions with calls and guards (batch gen_anl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_Put(void);
int drvPredictPath(void);
int Drv_Execute(void);

int Drv_Execute(void)
{
    int t0;
    int t2;
    int t5;
    int t10;
    int t3;
    int t8;
    int stk[22];

    t0 = 0xC0D5184;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D5184 + 76)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t5 = *(int *)0xC2AD010;
    if (((*(signed char *)0xC2AD1DF) & 1) == 0) {
        t8 = (*(int *)((((t5 << 2) + ((int)stk + 4)) + 0x0)));
    } else {
        t8 = (*(int *)((((t5 << 2) + ((int)stk + 4)) + 0x28)));
    }
    t10 = ((int (*)(int, int, int))(t8))(((t5 << 2) + ((int)stk + 4)), ((int)stk + 4), 0xC2AD000);
    Drv_Put();
    return (drvPredictPath());
}
