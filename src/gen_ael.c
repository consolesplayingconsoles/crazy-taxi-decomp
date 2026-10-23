/* Straight-line functions with calls and guards (batch gen_ael): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetNumSmpl(int);
int ADXT_GetStat(int);
int ADXT_GetTime(int, int, int);
int gdc_GetStreamVoiceRemainTime(int a4);

int gdc_GetStreamVoiceRemainTime(int a4)
{
    int t12;
    int t2;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a4;
    t12 = 0x58764;
    if ((int)(ADXT_GetStat((*(int *)(((a4 << 2) + 0xC1EE810))))) >= (int)0x2) {
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 16)) = ((t2 << 2) + 0xC1EE810);
        ADXT_GetTime((*(int *)((((t2 << 2) + 0xC1EE810) + 0x0))), ((int)stk + 4), (((int)stk + 4) + 0x8));
        t12 = (int)((float)((ADXT_GetNumSmpl((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))))) - (*(int *)(((int)stk + 4)))) * (*(float *)0xC02E7D4));
    }
    return t12;
}
