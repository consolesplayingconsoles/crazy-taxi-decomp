/* Straight-line functions with calls and guards (batch gen_wj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetNumSmpl(int);
int ADXT_GetStat(int);
int ADXT_GetTime(int, int, int);
int gdc_GetStreamVoiceRemainTime(int a4);

int gdc_GetStreamVoiceRemainTime(int a4)
{
    int t0;
    int t1;
    int t12;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    float u9;
    int stk[6] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(int *)(((a4 << 2) + 0xC1EE810));
    t1 = ADXT_GetStat(t0);
    t12 = 0x58764;
    if ((int)t1 >= (int)0x2) {
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 16)) = ((t2 << 2) + 0xC1EE810);
        t3 = *(int *)((((t2 << 2) + 0xC1EE810) + 0x0));
        ADXT_GetTime(t3, ((int)stk + 4), (((int)stk + 4) + 0x8));
        t5 = *(int *)(((int)stk + 16));
        t6 = *(int *)((t5 + 0x0));
        t7 = ADXT_GetNumSmpl(t6);
        t8 = *(int *)(((int)stk + 4));
        u9 = 0.0013605441f;
        t12 = (int)((float)(t7 - t8) * u9);
    }
    return t12;
}
