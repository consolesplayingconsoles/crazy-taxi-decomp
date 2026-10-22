/* Straight-line functions with calls and guards (batch gen_acj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_TotalDrum_Meter(void);
int Sound_Request(int, int);
extern int nlSprPut();
int Put_TotalDrum_Digits(int a4);

int Put_TotalDrum_Digits(int a4)
{
    int t0;
    int t2;
    int t24;
    int t52;
    int t50;
    int t49;
    int t47;
    int t45;
    int t53;
    int t55;
    int t66;
    int t67;
    int t77;
    int t81;
    int t84;
    int t100;
    int t1;
    int t20;
    int t12;
    int t17;
    int t28;
    int t41;
    int t74;
    int t88;
    int t90;

    t0 = 0xC054884;
    t2 = 0x0;
    for (;;) {
        t24 = t1;
        if ((*(int *)0xC2A8DE0) == 0) {
            t0 = 0xC2A8D7C;
            if ((int)(*(int *)(((t2 << 2) + t0))) > 0) {
                *(unsigned int *)(((t2 << 2) + t0)) = ((*(int *)(((t2 << 2) + t0))) - 1);
                t1 = (*(int *)0xC2A8DE4);
                if ((int)t2 > (int)t1) {
                    t0 = 0xB;
                    t12 = ((*(int *)(((0xC2A8D9C + (t2 << 2)) + 0x0))) + 0x1);
                } else {
                    t0 = 0xA;
                    t12 = ((*(int *)(((0xC2A8D9C + (t2 << 2)) + 0x0))) + 0x1);
                }
                t0 = ((int)((int)t12 % (int)t0));
                *(unsigned int *)(((0xC2A8D9C + (t2 << 2)) + 0x0)) = t0;
                t20 = t1;
            } else {
                t0 = (t2 << 2);
                if ((*(int *)((0xC2A8DBC + t0))) == 0) {
                    t0 = (t2 << 2);
                    *(unsigned int *)((0xC2A8DBC + t0)) = 0x1;
                    t0 = (Sound_Request(0x205A9, 0x0));
                } else {
                    t17 = t1;
                }
                t20 = t17;
            }
            t24 = t20;
        }
        t0 = t2;
        t1 = t24;
        t52 = 0xFFFFFFFA;
        if ((t0 != 1) && (t28 = (t0 == 1), t0 = t2, t0 != 2)) {
            t50 = 0x2;
            if (t0 == 3) {
            } else {
                t0 = t2;
                t49 = 0xA;
                if ((t0 != 4) && (t41 = (t0 == 4), t0 = t2, t0 != 5)) {
                    t47 = 0x12;
                    if (t0 == 6) {
                    } else {
                        t0 = t2;
                        t45 = 0xFFFFFFF2;
                        if (t0 == 7) {
                            t45 = 0x1A;
                        }
                        t47 = t45;
                    }
                    t49 = t47;
                }
                t50 = t49;
            }
            t52 = t50;
        }
        if ((int)t2 <= (int)0x1) {
            t0 = (t2 << 2);
            t53 = *(int *)((0xC2A8D9C + t0));
            t0 = 0xC130C28;
            *(unsigned int *)0xC2A801C = (*(int *)(((t53 << 2) + t0)));
        } else {
            t0 = (t2 << 2);
            t55 = *(int *)((0xC2A8D9C + t0));
            t0 = 0xC130BFC;
            *(unsigned int *)0xC2A801C = (*(int *)(((t55 << 2) + t0)));
        }
        t1 = 0x200E;
        t0 = 0x1C;
        *(unsigned int *)0xC2A8050 = t1;
        *(float *)((0xC2A801C + t0)) = 0.0f;
        t0 = (t2 << 2);
        if ((*(int *)((0xC2A8DBC + t0))) == 0) {
            t0 = 0x24;
            *(float *)((0xC2A801C + t0)) = (1.0f - ((float)(*(int *)0xC2A8DE0) * 0.25f));
            t0 = 0x14;
            *(float *)((0xC2A801C + t0)) = (1.0f - ((float)(*(int *)0xC2A8DE0) * 0.25f));
        } else {
            t0 = 0x24;
            *(float *)((0xC2A801C + t0)) = 1.0f;
            t0 = 0x14;
            *(float *)((0xC2A801C + t0)) = 1.0f;
        }
        t1 = (0x8 - t2);
        t66 = (((0x8 - t2) << 1) + t1);
        t1 = 0xC2A8D74;
        t0 = 0x4;
        *(float *)((0xC2A801C + t0)) = (float)((((t66 << 2) << 1) + t52) + 0x1AA);
        t67 = *(int *)((t1 + 0x0));
        t0 = t1;
        t1 = (*(int *)((t0 + 0x0)));
        t0 = 0x8;
        *(unsigned int *)0xC2A8D78 = (t1 * t67);
        t1 = (*(int *)0xC2A8D78);
        t1 = (t1 + 0x1B);
        *(float *)((0xC2A801C + t0)) = (float)t1;
        t0 = (Put_TotalDrum_Meter());
        t1 = 0xC07DF00;
        *(unsigned int *)0xC2A8044 = 0x0;
        t0 = (((int (*)(int))(nlSprPut))(0xC2A801C));
        t0 = (t2 << 2);
        if (((*(int *)((0xC2A8DBC + t0))) == 0) && (t74 = *(int *)0xC2A8CBC, t0 = t74, t0 == 2)) {
            t0 = 0x8;
            *(float *)((0xC2A801C + t0)) = ((*(float *)((0xC2A801C + t0))) - 16.0f);
            if ((int)t2 <= (int)0x1) {
                t0 = (t2 << 2);
                t77 = *(int *)((0xC2A8D9C + t0));
                t0 = 0xA;
                t0 = ((int)((int)(t77 + 0x1) % (int)t0));
                t0 = (t0 << 2);
                *(unsigned int *)0xC2A801C = (*(int *)((0xC130C28 + t0)));
            } else {
                t1 = (*(int *)0xC2A8DE4);
                if ((int)t2 > (int)t1) {
                    t0 = (t2 << 2);
                    t81 = *(int *)((0xC2A8D9C + t0));
                    t1 = 0xC08106C;
                    t0 = 0xB;
                    t0 = ((int)((int)(t81 + 0x1) % (int)t0));
                    t0 = (t0 << 2);
                    t1 = (*(int *)((0xC130BFC + t0)));
                    *(unsigned int *)0xC2A801C = t1;
                } else {
                    t0 = (t2 << 2);
                    t84 = *(int *)((0xC2A8D9C + t0));
                    t0 = 0xA;
                    t0 = ((int)((int)(t84 + 0x1) % (int)t0));
                    t0 = (t0 << 2);
                    t1 = (*(int *)((0xC130BFC + t0)));
                    *(unsigned int *)0xC2A801C = t1;
                }
                t88 = t1;
                t90 = 0xC130BFC;
            }
            t1 = t88;
            t0 = 0x14;
            *(unsigned int *)0xC2A8050 = 0x2006;
            t1 = (*(int *)0xC2A8DE0);
            *(float *)((0xC2A801C + t0)) = ((float)t1 * 0.25f);
            t0 = 0x1C;
            *(float *)((0xC2A801C + t0)) = (1.0f - ((float)(*(int *)0xC2A8DE0) * 0.25f));
            t0 = 0x24;
            *(float *)((0xC2A801C + t0)) = 1.0f;
            t0 = (((int (*)(int, int))(nlSprPut))(0xC2A801C, t90));
        }
        t1 = 0x8;
        t2 = (t2 + 0x1);
        if ((int)t2 < (int)t1) continue;
        break;
    }
    t100 = *(int *)((0xC2A8DBC + ((*(int *)0xC2A8DDC) << 2)));
    if (t100 == 1) {
        *(unsigned int *)0xC2A8DDC = ((*(int *)0xC2A8DDC) + 0x1);
    }
    return t100;
}
