/* Straight-line functions with calls and guards (batch gen_gz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int char2num(int);
int nlSprPut(int);
void PutNameEntryName(void);

void PutNameEntryName(void)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u11;
    float u12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    float u10;
    int stk[31] = {0};

    u0 = *(float *)0xC039D0C;
    u1 = *(float *)0xC2864D4;
    u2 = *(float *)0xC039D10;
    u3 = *(float *)0xC039D14;
    *(float *)(((int)stk + 12)) = u3;
    u4 = *(float *)0xC039D18;
    *(float *)(((int)stk + 16)) = u4;
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
        t13 = *(signed char *)((t8 + 0x0));
        if (t13 != 0) {
            t14 = *(signed char *)((t9 + 0x0));
            t9 = (t9 + 0x1);
            t15 = char2num(t14);
            t6 = t15;
            t6 = (t6 << 2);
            t16 = *(int *)((0xC0EE918 + t6));
            t6 = 0x4;
            *(unsigned int *)(((int)stk + 4)) = t16;
            *(float *)((((int)stk + 4) + t6)) = u12;
            t17 = nlSprPut(((int)stk + 4));
            t6 = t17;
            u18 = *(float *)0xC2864D4;
            u11 = u18;
            t7 = (t7 + 0x1);
            u10 = u0;
            u19 = u12;
            u19 = u19 + u10 * u11;
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
