/* Straight-line functions with calls and guards (batch gen_jk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetTime(int, int, int);
int gdc_GetStreamSongPlayTime(int a4);

int gdc_GetStreamSongPlayTime(int a4)
{
    int t2;
    float u3;
    int stk[5] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    ADXT_GetTime((*(int *)(((a4 << 2) + 0xC1EE820))), ((int)stk + 4), (((int)stk + 4) + 0x4));
    t2 = *(int *)(((int)stk + 4));
    u3 = 0.0013605441f;
    *(unsigned int *)(((int)stk + 4)) = (int)((float)t2 * u3);
    return (int)((float)t2 * u3);
}
