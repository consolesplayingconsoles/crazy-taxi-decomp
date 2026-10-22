/* Straight-line functions with calls and guards (batch gen_ws): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Customer_Count_Put(void);
int Result_Face_Put(void);
int Result_Name_Put(void);
int Sound_Request(int, int);
int nlSprPut(int);
int Result_Title_Put(void);

int Result_Title_Put(void)
{
    int t0;
    float u1;
    float u2;
    int t3;
    int t4;
    float u5;
    float u6;
    int t7;
    float u26;
    float u27;
    int t8;
    float u20;
    float u21;
    int t9;
    int t10;
    int t11;
    int t28;
    int t29;
    int t38;
    int t39;
    float u34;
    float u35;
    float u15;
    float u16;

    t0 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t0 + 0x5C);
    *(unsigned int *)0xC2A972C = 0xE;
    u1 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u1 + 1.0f);
    u2 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u2 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    t3 = 0x24;
    t4 = 0x0;
    u5 = 0.0f;
    u6 = 1.0f;
    for (;;) {
        t7 = *(int *)0xC2A96F4;
        if ((int)t7 > (int)(((t4 << 2) << 1) - t4)) {
            u26 = u5;
            u27 = u6;
            if ((int)t7 <= (int)0x2A) {
                t3 = 0x7;
                t8 = (int)((int)t7 % (int)t3);
                t3 = t8;
                u20 = u5;
                u21 = u6;
                if (t3 == 0) {
                    t3 = 0x7;
                    t9 = (int)((int)t7 % (int)t3);
                    t3 = t9;
                    if ((t3 == 0) && (t4 == 0)) {
                        t10 = Sound_Request(0xA00A9, 0x0);
                        t3 = t10;
                        t11 = *(int *)0xC130DF0;
                        *(unsigned int *)0xC130DF0 = (t11 + 0x1);
                    } else {
                        u15 = u5;
                        u16 = u6;
                    }
                    u20 = u15;
                    u21 = u16;
                }
                u26 = u20;
                u27 = u21;
            }
            u5 = u26;
            u6 = u27;
            t3 = 0x4;
            u5 = (float)((((t4 << 2) << 2) << 2) + 0x50);
            *(float *)((0xC2A96F8 + t3)) = u5;
            t3 = 0xC0D0D30;
            t28 = *(int *)(((t4 << 2) + t3));
            *(unsigned int *)0xC2A96F8 = t28;
            t29 = nlSprPut(0xC2A96F8);
            t3 = t29;
        } else {
            u34 = u5;
            u35 = u6;
        }
        u5 = u34;
        u6 = u35;
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x6) {
            break;
        }
    }
    Result_Face_Put();
    Result_Name_Put();
    t38 = Result_Customer_Count_Put();
    t39 = *(int *)0xC2A9788;
    *(unsigned int *)0xC2A9788 = (t39 + 0x1);
    return t38;
}
