/* Straight-line functions with calls and guards (batch gen_zi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int PutNameEntryDrum(int a4, float f4);

int PutNameEntryDrum(int a4, float f4)
{
    int t0;
    float u4;
    float u6;
    float u7;
    float u10;
    int t23;
    int stk[35] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 28)) = 420.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 56)) = 1.0f;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(float *)(((int)stk + 64)) = 1.0f;
    *(unsigned int *)(((int)stk + 72)) = 0x70E;
    *(unsigned int *)(((int)stk + 68)) = 0x2;
    *(float *)(((int)stk + 16)) = ((1.0f + 1.0f) - f4);
    *(float *)(((int)stk + 12)) = (32.0f - (f4 * 16.0f));
    *(float *)(((int)stk + 8)) = (f4 + 1.0f);
    t0 = 0xFFFFFFF6;
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = (*(int *)((0xC0EE918 + (((int)((unsigned int)(((*(int *)(((int)stk + 4))) + t0) + 0x2D) % (unsigned int)0x2D)) << 2))));
        u4 = 336.0f;
        u4 = u4 + 32.0f * ((float)t0 + f4);
        *(float *)(((int)stk + 24)) = u4;
        if (t0 == 0) {
            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - (16.0f - (f4 * 16.0f)));
            u6 = *(float *)(((int)stk + 16));
            u7 = *(float *)0xC2864D4;
            *(float *)(((int)stk + 40)) = (u6 * u7);
            *(float *)(((int)stk + 36)) = (u6 * u7);
        } else {
            if (t0 == -1) {
                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - (*(float *)(((int)stk + 12))));
                u10 = *(float *)(((int)stk + 8));
                *(float *)(((int)stk + 40)) = u10;
                *(float *)(((int)stk + 36)) = u10;
            } else {
                *(float *)(((int)stk + 40)) = 1.0f;
                *(float *)(((int)stk + 36)) = 1.0f;
                if ((int)t0 < 0) {
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - 32.0f);
                }
            }
        }
        t23 = nlSprPut((((int)stk + 4) + 0x10));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t23;
}
