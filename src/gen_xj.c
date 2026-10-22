/* Straight-line functions with calls and guards (batch gen_xj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int PutNameEntryRank(int a4);

int PutNameEntryRank(int a4)
{
    float u0;
    int t2;
    int t4;
    int t18;
    int stk[25] = {0};

    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x70A;
    *(unsigned int *)(((int)stk + 52)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = 0x4B;
    *(float *)(((int)stk + 8)) = 112.0f;
    *(float *)(((int)stk + 12)) = 206.0f;
    u0 = *(float *)0xC2864D4;
    *(float *)(((int)stk + 24)) = (u0 * 0.75f);
    *(float *)(((int)stk + 20)) = (u0 * 0.75f);
    nlSprPut(((int)stk + 4));
    t2 = (int)((int)a4 % (int)0xA);
    *(unsigned int *)(((int)stk + 4)) = (t2 + 0x41);
    *(float *)(((int)stk + 8)) = 120.0f;
    *(float *)(((int)stk + 12)) = 204.0f;
    nlSprPut(((int)stk + 4));
    if ((int)a4 >= (int)0xA) {
        t4 = (int)((int)a4 / (int)0xA);
        *(unsigned int *)(((int)stk + 4)) = (t4 + 0x41);
        *(float *)(((int)stk + 8)) = 88.0f;
        nlSprPut(((int)stk + 4));
    }
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                *(unsigned int *)(((int)stk + 4)) = 0x4F;
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0x4D;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x4C;
        }
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0x4E;
    }
    *(float *)(((int)stk + 8)) = 168.0f;
    *(float *)(((int)stk + 12)) = 214.0f;
    t18 = nlSprPut(((int)stk + 4));
    return t18;
}
