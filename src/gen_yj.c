/* Straight-line functions with calls and guards (batch gen_yj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_TotalDrum_Meter(void);
int Sound_Request(int, int);
extern int nlSprPut();
int Put_TotalDrum_Digits(int a4);

int Put_TotalDrum_Digits(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t4 = 0xC054884;
    t5 = 0x0;
    for (;;) {
        t6 = t0;
        if ((*(int *)0xC2A8DE0) == 0) {
            t4 = 0xC2A8D7C;
            if ((int)(*(int *)(((t5 << 2) + t4))) > 0) {
                *(unsigned int *)(((t5 << 2) + t4)) = ((*(int *)(((t5 << 2) + t4))) - 1);
                t0 = (*(int *)0xC2A8DE4);
                if ((int)t5 > (int)t0) {
                    t4 = 0xB;
                    t7 = ((*(int *)(((0xC2A8D9C + (t5 << 2)) + 0x0))) + 0x1);
                } else {
                    t4 = 0xA;
                    t7 = ((*(int *)(((0xC2A8D9C + (t5 << 2)) + 0x0))) + 0x1);
                }
                t4 = ((int)((int)t7 % (int)t4));
                *(unsigned int *)(((0xC2A8D9C + (t5 << 2)) + 0x0)) = t4;
                t7 = t0;
            } else {
                t4 = (t5 << 2);
                if ((*(int *)((0xC2A8DBC + t4))) == 0) {
                    t4 = (t5 << 2);
                    *(unsigned int *)((0xC2A8DBC + t4)) = 0x1;
                    t4 = (Sound_Request(0x205A9, 0x0));
                } else {
                    t8 = t0;
                }
                t7 = t8;
            }
            t6 = t7;
        }
        t4 = t5;
        t0 = t6;
        t6 = 0xFFFFFFFA;
        if ((t4 != 1) && (t1 = (t4 == 1), t4 = t5, t4 != 2)) {
            t7 = 0x2;
            if (t4 == 3) {
            } else {
                t4 = t5;
                t8 = 0xA;
                if ((t4 != 4) && (t2 = (t4 == 4), t4 = t5, t4 != 5)) {
                    t9 = 0x12;
                    if (t4 == 6) {
                    } else {
                        t4 = t5;
                        t10 = 0xFFFFFFF2;
                        if (t4 == 7) {
                            t10 = 0x1A;
                        }
                        t9 = t10;
                    }
                    t8 = t9;
                }
                t7 = t8;
            }
            t6 = t7;
        }
        if ((int)t5 <= (int)0x1) {
            t4 = (t5 << 2);
            t7 = *(int *)((0xC2A8D9C + t4));
            t4 = 0xC130C28;
            *(unsigned int *)0xC2A801C = (*(int *)(((t7 << 2) + t4)));
        } else {
            t4 = (t5 << 2);
            t7 = *(int *)((0xC2A8D9C + t4));
            t4 = 0xC130BFC;
            *(unsigned int *)0xC2A801C = (*(int *)(((t7 << 2) + t4)));
        }
        t0 = 0x200E;
        t4 = 0x1C;
        *(unsigned int *)0xC2A8050 = t0;
        *(float *)((0xC2A801C + t4)) = 0.0f;
        t4 = (t5 << 2);
        if ((*(int *)((0xC2A8DBC + t4))) == 0) {
            t4 = 0x24;
            *(float *)((0xC2A801C + t4)) = (1.0f - ((float)(*(int *)0xC2A8DE0) * 0.25f));
            t4 = 0x14;
            *(float *)((0xC2A801C + t4)) = (1.0f - ((float)(*(int *)0xC2A8DE0) * 0.25f));
        } else {
            t4 = 0x24;
            *(float *)((0xC2A801C + t4)) = 1.0f;
            t4 = 0x14;
            *(float *)((0xC2A801C + t4)) = 1.0f;
        }
        t0 = (0x8 - t5);
        t7 = (((0x8 - t5) << 1) + t0);
        t0 = 0xC2A8D74;
        t4 = 0x4;
        *(float *)((0xC2A801C + t4)) = (float)((((t7 << 2) << 1) + t6) + 0x1AA);
        t6 = *(int *)((t0 + 0x0));
        t4 = t0;
        t0 = (*(int *)((t4 + 0x0)));
        t4 = 0x8;
        *(unsigned int *)0xC2A8D78 = (t0 * t6);
        t0 = (*(int *)0xC2A8D78);
        t0 = (t0 + 0x1B);
        *(float *)((0xC2A801C + t4)) = (float)t0;
        t4 = (Put_TotalDrum_Meter());
        t0 = 0xC07DF00;
        *(unsigned int *)0xC2A8044 = 0x0;
        t4 = (((int (*)(int))(nlSprPut))(0xC2A801C));
        t4 = (t5 << 2);
        if (((*(int *)((0xC2A8DBC + t4))) == 0) && (t3 = *(int *)0xC2A8CBC, t4 = t3, t4 == 2)) {
            t4 = 0x8;
            *(float *)((0xC2A801C + t4)) = ((*(float *)((0xC2A801C + t4))) - 16.0f);
            if ((int)t5 <= (int)0x1) {
                t4 = (t5 << 2);
                t6 = *(int *)((0xC2A8D9C + t4));
                t4 = 0xA;
                t4 = ((int)((int)(t6 + 0x1) % (int)t4));
                t4 = (t4 << 2);
                *(unsigned int *)0xC2A801C = (*(int *)((0xC130C28 + t4)));
            } else {
                t0 = (*(int *)0xC2A8DE4);
                if ((int)t5 > (int)t0) {
                    t4 = (t5 << 2);
                    t6 = *(int *)((0xC2A8D9C + t4));
                    t0 = 0xC08106C;
                    t4 = 0xB;
                    t4 = ((int)((int)(t6 + 0x1) % (int)t4));
                    t4 = (t4 << 2);
                    t0 = (*(int *)((0xC130BFC + t4)));
                    *(unsigned int *)0xC2A801C = t0;
                } else {
                    t4 = (t5 << 2);
                    t6 = *(int *)((0xC2A8D9C + t4));
                    t4 = 0xA;
                    t4 = ((int)((int)(t6 + 0x1) % (int)t4));
                    t4 = (t4 << 2);
                    t0 = (*(int *)((0xC130BFC + t4)));
                    *(unsigned int *)0xC2A801C = t0;
                }
                t6 = t0;
                t7 = 0xC130BFC;
            }
            t0 = t6;
            t4 = 0x14;
            *(unsigned int *)0xC2A8050 = 0x2006;
            t0 = (*(int *)0xC2A8DE0);
            *(float *)((0xC2A801C + t4)) = ((float)t0 * 0.25f);
            t4 = 0x1C;
            *(float *)((0xC2A801C + t4)) = (1.0f - ((float)(*(int *)0xC2A8DE0) * 0.25f));
            t4 = 0x24;
            *(float *)((0xC2A801C + t4)) = 1.0f;
            t4 = (((int (*)(int, int))(nlSprPut))(0xC2A801C, t7));
        }
        t0 = 0x8;
        t5 = (t5 + 0x1);
        if ((int)t5 < (int)t0) continue;
        break;
    }
    t0 = *(int *)((0xC2A8DBC + ((*(int *)0xC2A8DDC) << 2)));
    if (t0 == 1) {
        *(unsigned int *)0xC2A8DDC = ((*(int *)0xC2A8DDC) + 0x1);
    }
    return t0;
}
