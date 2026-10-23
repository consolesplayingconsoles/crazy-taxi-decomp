/* Straight-line functions with calls and guards (batch gen_vo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetBackColor(int, int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlSprPut(int);
int Put_GameOver2(void);

int Put_GameOver2(void)
{
    int t1;
    int t7;
    int t8;
    int t9;
    int t11;
    int t32;
    float u12;
    float u13;
    float u14;
    float u15;
    int t16;
    int t18;
    int t19;
    int t22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    int t28;
    int t29;
    int t17;
    float u20;
    float u21;

    nlSetBackColor(0xFF000000, 0xFF000000, 0xFF000000);
    t1 = *(int *)0xC2A8FD4;
    if (t1 == 0) {
        Voice_ShutUp(0x0);
        Voice_Request(0xC130BA8, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2A8FD4 = 0x1;
    }
    t7 = 0x8;
    t8 = 0xC2A89CC;
    for (;;) {
        *(unsigned int *)((t8 + 0x28)) = 0x0;
        t9 = nlSprPut(t8);
        t7 = (t7 - 0x1);
        t8 = (t8 + 0x50);
        if (t7 == 0) {
            break;
        }
    }
    t11 = *(int *)0xC2A8FCC;
    t32 = t9;
    if ((int)t11 < (int)0x8) {
        u12 = 0.16666666f;
        u13 = 64.0f;
        u14 = 6.0f;
        u15 = -3.5f;
        t16 = 0xC0577C8;
        t18 = 0xC2A89CC;
        t19 = 0x0;
        for (;;) {
            t22 = *(int *)0xC2A8FCC;
            if (t22 == t19) {
                t16 = 0x4;
                u23 = *(float *)((t18 + t16));
                u20 = u23;
                u21 = (float)t19;
                u21 = (u21 + u15);
                u21 = (u21 * u13);
                u21 = (u21 / u14);
                u20 = (u20 + u21);
                *(float *)((t18 + t16)) = u20;
                t16 = 0x10;
                u24 = *(float *)((t18 + t16));
                u21 = u24;
                u21 = (u21 + u12);
                *(float *)((t18 + t16)) = u21;
                t16 = 0x14;
                u25 = *(float *)((t18 + t16));
                u20 = u25;
                u20 = (u20 + u12);
                *(float *)((t18 + t16)) = u20;
                t16 = 0xC;
                u26 = *(float *)((t18 + t16));
                u21 = u26;
                u21 = (u21 - u12);
                *(float *)((t18 + t16)) = u21;
                t16 = 0x2C;
                u27 = *(float *)((t18 + t16));
                u20 = u27;
                u20 = (u20 + u12);
                *(float *)((t18 + t16)) = u20;
                t28 = *(int *)0xC2A8FD0;
                t16 = t28;
                t16 = (t16 + 0x1);
                *(unsigned int *)0xC2A8FD0 = t16;
                if (t16 == 6) {
                    t29 = *(int *)0xC2A8FCC;
                    t17 = t29;
                    t17 = (t17 + 0x1);
                    *(unsigned int *)0xC2A8FCC = t17;
                    *(unsigned int *)0xC2A8FD0 = 0x0;
                }
            }
            t19 = (t19 + 0x1);
            t18 = (t18 + 0x50);
            if ((int)t19 >= (int)0x8) {
                break;
            }
        }
        t32 = t16;
    }
    return t32;
}
