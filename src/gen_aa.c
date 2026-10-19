/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c078a70(int, int, int);
int gdc_CoursePointLoadReq(float);
int gdc_CourseReq(int, int, int, int, float);
int nlGetTranslate(int);
int nlMultiMatrix(int, int, int, int);
int nlRotateAY(int);
int nlTranslateV(int);

void FUN_0c02f02a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t9;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t18;
    float u13;
    int stk[13];

    t0 = *(int *)0xC1EE20C;
    if (t0 != 0) {
        if (t0 != 1) {
            t9 = t0;
            if (t0 == 2) {
                t1 = *(int *)0xC1EE214;
                t2 = *(int *)((0xC0C835C + (t1 << 2)));
                t3 = t2;
                for (;;) {
                    t4 = *(int *)0xC1EE214;
                    t5 = *(int *)0xC1244E8;
                    t6 = *(int *)(((t4 << 2) + t5));
                    t7 = *(int *)((0xC0C835C + (t4 << 2)));
                    if ((int)t3 >= (int)(t6 + t7)) break;
                    gdc_CourseReq(t3, 0x0, a6, a7, 0.0f);
                    t3 = (t3 + 0x1);
                }
                t9 = t5;
            }
            t18 = t9;
        } else {
            t12 = *(int *)0xC17948C;
            if (t12 != 1) {
                *(float *)((((int)stk + 16) + 0x0)) = 288.459991f;
                *(float *)((((int)stk + 16) + 0x4)) = 2304.11987f;
                u13 = 4535.48975f;
            } else {
                *(float *)((((int)stk + 16) + 0x0)) = -1087.70996f;
                *(float *)((((int)stk + 16) + 0x4)) = 102.079994f;
                u13 = -6556.45996f;
            }
            *(float *)((((int)stk + 16) + 0x8)) = u13;
            t14 = *(int *)((((int)stk + 16) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t14;
            t15 = *(int *)((((int)stk + 16) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t15;
            t16 = *(int *)((((int)stk + 16) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t16;
            t17 = gdc_CoursePointLoadReq(1700.0f);
            t18 = t17;
        }
        t24 = t18;
    } else {
        *(float *)((((int)stk + 16) + 0x0)) = 375.0f;
        *(float *)((((int)stk + 16) + 0x4)) = 1504.0f;
        *(float *)((((int)stk + 16) + 0x8)) = 1696.0f;
        t20 = *(int *)((((int)stk + 16) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t20;
        t21 = *(int *)((((int)stk + 16) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t21;
        t22 = *(int *)((((int)stk + 16) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t22;
        t23 = gdc_CoursePointLoadReq(2000.0f);
        t24 = t23;
    }
    return;
}

int psgSeatMatrix(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t15;
    int t16;
    int t17;
    int t19;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t37;
    int stk[9];

    nlMultiMatrix(0xC179180, a5, a6, a7);
    t1 = *(int *)0xC1EE20C;
    t2 = *(int *)0xC179488;
    if (t1 == 2) {
        t3 = *(int *)0xC1EE214;
        if (t3 != 11) {
            t4 = *(int *)0xC1EE214;
            if (t4 == 14) {
                t5 = *(int *)0xC1EE214;
                if (t5 == 11) {
                    t6 = *(signed char *)((a4 + 0x154));
                    t7 = *(signed char *)0xC2A98EC;
                    FUN_0c078a70(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((((t6 + t7) - 7) << 1) + ((t6 + t7) - 7)) << 2) + 0xC13F3BC));
                } else {
                    t9 = *(signed char *)((a4 + 0x154));
                    FUN_0c078a70(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((t9 << 1) + t9) << 2) + 0xC13F3BC));
                }
                nlTranslateV(((int)stk + 4));
            } else {
                nlTranslateV(((((t2 << 1) + t2) << 2) + 0xC0D55C4));
            }
        } else {
            t15 = *(int *)0xC1EE214;
            if (t15 == 11) {
                t16 = *(signed char *)((a4 + 0x154));
                t17 = *(signed char *)0xC2A98EC;
                FUN_0c078a70(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((((t16 + t17) - 7) << 1) + ((t16 + t17) - 7)) << 2) + 0xC13F3BC));
            } else {
                t19 = *(signed char *)((a4 + 0x154));
                FUN_0c078a70(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((t19 << 1) + t19) << 2) + 0xC13F3BC));
            }
            nlTranslateV(((int)stk + 4));
        }
    } else {
        t24 = *(int *)0xC1EE214;
        if (t24 == 14) {
            t25 = *(int *)0xC1EE214;
            if (t25 == 11) {
                t26 = *(signed char *)((a4 + 0x154));
                t27 = *(signed char *)0xC2A98EC;
                FUN_0c078a70(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((((t26 + t27) - 7) << 1) + ((t26 + t27) - 7)) << 2) + 0xC13F3BC));
            } else {
                t29 = *(signed char *)((a4 + 0x154));
                FUN_0c078a70(((int)stk + 4), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC0D55C4), ((signed char)(((t29 << 1) + t29) << 2) + 0xC13F3BC));
            }
            nlTranslateV(((int)stk + 4));
        } else {
            nlTranslateV(((((t2 << 1) + t2) << 2) + 0xC0D55C4));
        }
    }
    nlRotateAY(0x8000);
    t37 = nlGetTranslate((a4 + 0x4));
    return t37;
}
