/* Straight-line functions with calls and guards (batch gen_qq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int);
void FUN_0c0599fa(void);

void FUN_0c0599fa(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u5;

    t0 = *(int *)0xC2A96F4;
    if ((int)t0 > (int)0x2A) {
        t1 = *(int *)0xC2A96F0;
        t2 = *(int *)(((t1 << 2) + 0xC0D0D58));
        *(unsigned int *)0xC2A96F8 = t2;
        *(unsigned int *)0xC2A972C = 0xA;
        *(float *)0xC2A96FC = 528.0f;
        t3 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t3 + 0x114);
        u4 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u4 + 1.0f);
        u5 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u5 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        nlSprPut(0xC2A96F8, 0xC2A9758);
    return;
    }
}
