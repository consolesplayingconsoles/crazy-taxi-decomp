/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int char2num(int);
int nlSprPut(int);
void PutNameEntryName(void);

void PutNameEntryName(void)
{
    float u0;
    float u1;
    float u2;
    float u5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u11;
    float u12;
    int t14;
    int t16;
    float u19;
    int stk[31];

    u0 = 66.0f;
    u1 = *(float *)0xC2864D4;
    u2 = 3.2e+02f;
    *(float *)(((int)stk + 12)) = 1.9e+02f;
    *(float *)(((int)stk + 16)) = 0.5f;
    u5 = *(float *)0xC2864D4;
    *(float *)(((int)stk + 24)) = (u5 * (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (u5 * (1.0f + 1.0f));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x70A;
    *(unsigned int *)(((int)stk + 52)) = 0x2;
    t6 = 0x2C;
    t7 = 0x0;
    t8 = 0xC2864D0;
    t9 = 0xC2864D0;
    u11 = (1.0f + 1.0f);
    u12 = (u2 - (u1 * u0));
    for (;;) {
        if ((*(signed char *)((t8 + 0x0))) != 0) {
            t14 = *(signed char *)((t9 + 0x0));
            t9 = (t9 + 0x1);
            t6 = (char2num(t14));
            t6 = (t6 << 2);
            t16 = *(int *)((0xC0EE918 + t6));
            t6 = 0x4;
            *(unsigned int *)(((int)stk + 4)) = t16;
            *(float *)((((int)stk + 4) + t6)) = u12;
            t6 = (nlSprPut(((int)stk + 4)));
            u11 = (*(float *)0xC2864D4);
            t7 = (t7 + 0x1);
            u19 = u12;
            u19 = u19 + (u0) * u11;
            u12 = u19;
            t8 = (t8 + 0x1);
            if ((int)t7 >= (int)0x3) {
                break;
            }
            continue;
        }
        break;
    }
}
