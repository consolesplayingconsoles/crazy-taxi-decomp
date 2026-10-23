/* Straight-line functions with calls and guards (batch gen_uk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlSetBackColor(int, int, int, float);
int nlSprPut(int);
int Put_GameOver2(float f4);

int Put_GameOver2(float f4)
{
    int t7;
    int t8;
    int t9;
    int t32;
    float u12;
    float u13;
    float u14;
    float u15;
    int t16;
    int t18;
    int t19;
    int t17;
    float u20;
    float u21;

    nlSetBackColor(0xFF000000, 0xFF000000, 0xFF000000, f4);
    if ((*(int *)0xC2A8FD4) == 0) {
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
    t32 = t9;
    if ((int)(*(int *)0xC2A8FCC) < (int)0x8) {
        u12 = *(float *)0xC0577BC;
        u13 = *(float *)0xC0577C0;
        u14 = *(float *)0xC0577C4;
        u15 = *(float *)0xC0577C8;
        t16 = 0xC0577C8;
        t18 = 0xC2A89CC;
        t19 = 0x0;
        for (;;) {
            if ((*(int *)0xC2A8FCC) == t19) {
                t16 = 0x4;
                u20 = (*(float *)((t18 + t16)));
                u21 = (float)t19;
                u21 = (u21 + u15);
                u21 = (u21 * u13);
                u21 = (u21 / u14);
                u20 = (u20 + u21);
                *(float *)((t18 + t16)) = u20;
                t16 = 0x10;
                u21 = (*(float *)((t18 + t16)));
                u21 = (u21 + u12);
                *(float *)((t18 + t16)) = u21;
                t16 = 0x14;
                u20 = (*(float *)((t18 + t16)));
                u20 = (u20 + u12);
                *(float *)((t18 + t16)) = u20;
                t16 = 0xC;
                u21 = (*(float *)((t18 + t16)));
                u21 = (u21 - u12);
                *(float *)((t18 + t16)) = u21;
                t16 = 0x2C;
                u20 = (*(float *)((t18 + t16)));
                u20 = (u20 + u12);
                *(float *)((t18 + t16)) = u20;
                t16 = (*(int *)0xC2A8FD0);
                t16 = (t16 + 0x1);
                *(unsigned int *)0xC2A8FD0 = t16;
                if (t16 == 6) {
                    t17 = (*(int *)0xC2A8FCC);
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
