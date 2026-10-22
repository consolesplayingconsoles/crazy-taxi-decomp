/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c078a70(int, int, int);
int gdc_CoursePointLoadReq(float);
int gdc_CourseReq(int, int, float);
int nlGetTranslate(int);
int nlMultiMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int gdc_CourseStartLoadReq(void);
int psgSeatMatrix(int a4);

int gdc_CourseStartLoadReq(void)
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
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    int t21;
    int t22;
    int t23;
    float u24;
    int t25;
    float u28;
    float u29;
    float u30;
    int t31;
    int t32;
    int t33;
    float u34;
    int t35;
    int t36;
    int t26;
    float u20;
    int stk[13] = {0};

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
                    gdc_CourseReq(t3, 0x0, 0.0f);
                    t3 = (t3 + 0x1);
                }
                t9 = (t4 << 2);
            }
            t26 = t9;
        } else {
            t12 = *(int *)0xC17948C;
            if (t12 != 1) {
                u13 = *(float *)0xC02F2CC;
                *(float *)((((int)stk + 16) + 0x0)) = u13;
                u14 = *(float *)0xC02F2D0;
                *(float *)((((int)stk + 16) + 0x4)) = u14;
                u15 = *(float *)0xC02F2D4;
                u20 = u15;
            } else {
                u16 = *(float *)0xC02F2D8;
                *(float *)((((int)stk + 16) + 0x0)) = u16;
                u17 = *(float *)0xC02F2DC;
                *(float *)((((int)stk + 16) + 0x4)) = u17;
                u18 = *(float *)0xC02F2E0;
                u20 = u18;
            }
            *(float *)((((int)stk + 16) + 0x8)) = u20;
            t21 = *(int *)((((int)stk + 16) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t21;
            t22 = *(int *)((((int)stk + 16) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t22;
            t23 = *(int *)((((int)stk + 16) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t23;
            u24 = *(float *)0xC02F2E4;
            t25 = gdc_CoursePointLoadReq(u24);
            t26 = t25;
        }
        t36 = t26;
    } else {
        u28 = *(float *)0xC02F2B4;
        *(float *)((((int)stk + 16) + 0x0)) = u28;
        u29 = *(float *)0xC02F2B8;
        *(float *)((((int)stk + 16) + 0x4)) = u29;
        u30 = *(float *)0xC02F2BC;
        *(float *)((((int)stk + 16) + 0x8)) = u30;
        t31 = *(int *)((((int)stk + 16) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t31;
        t32 = *(int *)((((int)stk + 16) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t32;
        t33 = *(int *)((((int)stk + 16) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t33;
        u34 = *(float *)0xC02F2C4;
        t35 = gdc_CoursePointLoadReq(u34);
        t36 = t35;
    }
    return t36;
}

int psgSeatMatrix(int a4)
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
    int stk[9] = {0};

    nlMultiMatrix(0xC179180);
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

