/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05a79c(void);
int FUN_0c05a9dc(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
float drvAccelDot(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int, int);
int psgEnterState3(int);

void FUN_0c05a5e0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t16;
    int t20;
    int t25;
    int t26;
    float u27;
    float u28;

    t0 = *(int *)0xC2A96F4;
    t1 = *(int *)0xC2A97A8;
    if ((int)t0 <= (int)t1) {
        return;
    }
    t2 = *(int *)0xC2A982C;
    if (t2 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t3 = *(int *)0xC2A9830;
    if (t3 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t4 = *(int *)0xC2A9834;
    if (t4 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t5 = *(int *)0xC2A9838;
    if (t5 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t6 = *(int *)0xC2A983C;
    if (t6 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t7 = *(int *)0xC2A9840;
    if (t7 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t8 = *(int *)0xC2A9844;
    if (t8 != 1) {
        *(unsigned int *)0xC2A96F4 = t1;
        return;
    }
    t9 = *(int *)0xC2A9848;
    if (t9 == 1) {
        t10 = *(int *)0xC2A97E0;
        if (t10 == 1) {
            t11 = *(int *)0xC2A97E4;
            *(unsigned int *)0xC2A97E4 = (t11 + 0x1);
        }
        t13 = *(int *)0xC2A97A8;
        t14 = *(int *)0xC2A96F4;
        if (t14 == (t13 + 0x1)) {
            Sound_Request(0x405A9, 0x0);
            t16 = *(int *)0xC130E04;
            *(unsigned int *)0xC130E04 = (t16 + 0x1);
            *(unsigned int *)0xC2A9754 = 0x1;
        }
        t20 = *(int *)0xC2A97D8;
        if (t20 == 0x3E7) {
            nlObjPutSetFadeColor(0.75f, 0.0f, 0.0f);
            FUN_0c05a79c();
            ResetFadeColor();
    return;
        }
        if (t20 == 99) {
            nlObjPutSetFadeColor(0.75f, 0.0f, 0.0f);
            FUN_0c05a9dc();
            ResetFadeColor();
    return;
        }
        t25 = *(int *)(((t20 << 2) + 0xC130E80));
        *(unsigned int *)0xC2A96F8 = t25;
        *(float *)0xC2A96FC = 164.0f;
        t26 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t26 + 0x18C);
        u27 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u27 + 1.0f);
        u28 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u28 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        nlSprPut(0xC2A96F8, 0xC2A9758);
    return;
    }
    *(unsigned int *)0xC2A96F4 = t1;
}

void FUN_0c071fa4(int a4)
{
    int t0;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)0xC1790EC;
    if (t0 != 0) {
        t1 = drvAccelDot();
        t2 = *(int *)0xC1790EC;
        if ((0x7FFE & t2) == 0) {
            if ((0x80000000 & t2) != 0) {
                if (!(-6.0f > t1)) {
                    if (-4.0f > t1) {
                        *(unsigned int *)((a4 + 0x40)) = 0xD;
                        t3 = *(int *)((a4 + 0x40));
                        psgEnterState3((a4 + 0x1C));
    return;
                    }
                    return;
                }
                *(unsigned int *)((a4 + 0x40)) = 0xD;
                t4 = *(int *)((a4 + 0x40));
                psgEnterState3((a4 + 0x1C));
    return;
            }
            t5 = *(int *)0xC1790EC;
            if ((t5 & 0x1F0000) == 0) {
                t6 = *(int *)0xC1790EC;
                if ((t6 & 0x20000) != 0) {
                    *(unsigned int *)((a4 + 0x40)) = 0xE;
                    t7 = *(int *)((a4 + 0x40));
                    psgEnterState3((a4 + 0x1C));
    return;
                }
                return;
            }
            *(unsigned int *)((a4 + 0x40)) = 0xE;
            t8 = *(int *)((a4 + 0x40));
            psgEnterState3((a4 + 0x1C));
    return;
        }
        if (!(-6.0f > t1)) {
            if (-4.0f > t1) {
                *(unsigned int *)((a4 + 0x40)) = 0xD;
                t9 = *(int *)((a4 + 0x40));
                psgEnterState3((a4 + 0x1C));
    return;
            }
            return;
        }
        *(unsigned int *)((a4 + 0x40)) = 0xD;
        t10 = *(int *)((a4 + 0x40));
        psgEnterState3((a4 + 0x1C));
    return;
    }
    t11 = *(int *)((a4 + 0x40));
    if (t11 != 12) {
        t12 = *(int *)((a4 + 0x40));
        if (t12 != 11) {
            t13 = *(int *)0xC2AD010;
            if (t13 == 1) {
                *(unsigned int *)((a4 + 0x40)) = 0xB;
                t14 = *(int *)((a4 + 0x40));
                psgEnterState3((a4 + 0x1C));
    return;
            }
            t15 = *(int *)((a4 + 0x40));
            if (t15 == 11) {
                t16 = *(int *)0xC2AD010;
                if (t16 != 1) {
                    *(unsigned int *)((a4 + 0x40)) = 0xC;
                    t17 = *(int *)((a4 + 0x40));
                    psgEnterState3((a4 + 0x1C));
    return;
                }
                return;
            }
            return;
        }
        t18 = *(int *)((a4 + 0x40));
        if (t18 == 11) {
            t19 = *(int *)0xC2AD010;
            if (t19 != 1) {
                *(unsigned int *)((a4 + 0x40)) = 0xC;
                t20 = *(int *)((a4 + 0x40));
                psgEnterState3((a4 + 0x1C));
    return;
            }
            return;
        }
        return;
    }
}
