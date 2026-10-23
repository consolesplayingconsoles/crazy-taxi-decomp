/* Straight-line functions with calls and guards (batch gen_ala): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int PutNameEntryScreen(void);

int PutNameEntryScreen(void)
{
    float u2;
    int t13;
    float u14;
    int stk[30];

    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x705;
    *(unsigned int *)(((int)stk + 52)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = 0x125;
    *(float *)(((int)stk + 8)) = 32.0f;
    *(float *)(((int)stk + 12)) = 32.0f;
    *(float *)(((int)stk + 16)) = (1.0f + 1.0f);
    nlSprPut(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = 0x126;
    *(float *)(((int)stk + 8)) = 544.0f;
    nlSprPut(((int)stk + 4));
    u2 = *(float *)0xC2864D4;
    *(float *)(((int)stk + 24)) = u2;
    *(float *)(((int)stk + 20)) = u2;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((0xC0EE9CC + (((*(int *)0xC179488) & 0x3) << 2))));
    *(float *)(((int)stk + 8)) = 528.0f;
    *(float *)(((int)stk + 12)) = 190.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x270A;
    nlSprPut(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((0xC0EE9DC + (((*(int *)0xC179488) & 0x3) << 2))));
    *(float *)(((int)stk + 12)) = 276.0f;
    nlSprPut(((int)stk + 4));
    nlObjPutSetFadeColor(0.699999988f, 0.699999988f, 0.699999988f);
    *(unsigned int *)(((int)stk + 4)) = 0x127;
    *(float *)(((int)stk + 8)) = 320.0f;
    *(float *)(((int)stk + 12)) = 190.0f;
    nlSprPut(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = 0x146;
    *(float *)(((int)stk + 12)) = 320.0f;
    nlSprPut(((int)stk + 4));
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(unsigned int *)(((int)stk + 4)) = 0x5D;
    *(float *)(((int)stk + 12)) = 250.0f;
    t13 = 0x0;
    for (;;) {
        u14 = 38.0f;
        u14 = u14 + 17.0f * (float)t13;
        *(float *)(((int)stk + 8)) = u14;
        nlSprPut(((int)stk + 4));
        t13 = (t13 + 0x1);
        if ((int)t13 >= (int)0xA) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0x62;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 112.0f;
    *(float *)(((int)stk + 16)) = 3.0f;
    *(float *)(((int)stk + 20)) = 40.0f;
    *(float *)(((int)stk + 24)) = 30.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x705;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    return (nlSprPut(((int)stk + 4)));
}
