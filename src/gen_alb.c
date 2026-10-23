/* Straight-line functions with calls and guards (batch gen_alb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlSprPut(int, int);
int Result_Earned_Text_Put(void);

int Result_Earned_Text_Put(void)
{
    int t3;
    int t4;
    int t5;
    int t6;
    float u7;
    float u8;
    int t9;
    int t30;
    float u31;
    float u32;
    int t23;
    float u24;
    float u25;
    int t40;
    float u41;
    float u42;
    int t17;
    float u18;
    float u19;

    *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x9A);
    *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A972C = 0xA;
    *(unsigned int *)0xC2A9720 = 0x0;
    t3 = 0x24;
    t4 = 0xC2A9758;
    t5 = 0x0;
    t6 = 0x0;
    u7 = 0.0f;
    u8 = 1.0f;
    for (;;) {
        t9 = *(int *)0xC2A96F4;
        if ((int)t9 > (int)(((t6 << 1) + t6) + 0x34)) {
            t30 = t4;
            u31 = u7;
            u32 = u8;
            if ((int)t9 <= (int)0x58) {
                t3 = 0x3;
                t3 = ((int)((int)t9 % (int)t3));
                t23 = t4;
                u24 = u7;
                u25 = u8;
                if (t3 == 0) {
                    t3 = 0x3;
                    t3 = ((int)((int)t9 % (int)t3));
                    if ((t3 == 0) && (t6 == 0)) {
                        t4 = 0x0;
                        t3 = (Sound_Request(0x304A9, t4));
                        *(unsigned int *)0xC130DF4 = ((*(int *)0xC130DF4) + 0x1);
                    } else {
                        t17 = t4;
                        u18 = u7;
                        u19 = u8;
                    }
                    t23 = t17;
                    u24 = u18;
                    u25 = u19;
                }
                t30 = t23;
                u31 = u24;
                u32 = u25;
            }
            u7 = u31;
            u8 = u32;
            t4 = t30;
            if ((int)t6 >= (int)0x5) {
                t5 = 0x10;
            }
            t3 = 0x4;
            u7 = (float)((((((t6 << 2) << 2) << 1) + t6) + t5) + 0x40);
            *(float *)((0xC2A96F8 + t3)) = u7;
            t3 = 0xC130E40;
            *(unsigned int *)0xC2A96F8 = (*(int *)(((t6 << 2) + t3)));
            t3 = (nlSprPut(0xC2A96F8, t4));
        } else {
            t40 = t4;
            u41 = u7;
            u42 = u8;
        }
        u7 = u41;
        u8 = u42;
        t6 = (t6 + 0x1);
        t4 = t40;
        if ((int)t6 >= (int)0xB) {
            break;
        }
    }
    return t3;
}
