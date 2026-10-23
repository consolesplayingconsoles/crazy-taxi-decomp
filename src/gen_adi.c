/* Straight-line functions with calls and guards (batch gen_adi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetTime(int, int, int);
int gdc_GetStreamSongPlayTime(int a4, int a5, int a6);

int gdc_GetStreamSongPlayTime(int a4, int a5, int a6)
{
    int t2;
    float u3;
    int stk[5];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C02E19E:;
    *(unsigned int *)(((int)stk + 12)) = R4;
    ADXT_GetTime((*(int *)(((R4 << 2) + 0xC1EE820))), ((int)stk + 4), (((int)stk + 4) + 0x4));
    t2 = *(int *)(((int)stk + 4));
    u3 = *(float *)0xC02E260;
    *(unsigned int *)(((int)stk + 4)) = (int)((float)t2 * u3);
    return (int)((float)t2 * u3);
}
