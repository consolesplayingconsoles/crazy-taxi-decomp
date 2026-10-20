/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_Balloon(void);
int FUN_0c0310a0(void);
int FUN_0c031158(int);
int FUN_0c039cd2(void);
int FUN_0c077210(int, int);
int FUN_0c0813d0(int);
float FUN_0c089de0(int);
int GetCollision2D(int, float);
int KillColliObj(int);
int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int getCoursePointMove(int, int, int);
float getNearLineIndex(int, int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
float nlFloor(float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetEventNext(int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int FUN_0c05eb52(void);
float FUN_0c02b146(int a4, int a5, float f4);
float FUN_0c03a07c(void);
float FUN_0c0713d8(int a4);
int TrainInit(int a4, int a5);
int courseStatusGet(int a4, int a5, int a6, int a7);
int TrailerInit(int a4, int a5);
float getNearCoursePoint(int a4, int a5, int a6, int a7);

int FUN_0c05eb52(void)
{
    int t1;
    int t2;
    int t3;
    int stk[3] = {0};

    Exec_Balloon();
    t1 = *(int *)(((int)stk + 4));
    t2 = *(int *)((t1 + 0x7C));
    if (t2 == 1) {
        t3 = *(int *)((t1 + 0x78));
        *(unsigned int *)((t1 + 0x78)) = (t3 + 0x1);
        if ((int)(t3 + 0x1) >= (int)0x14) {
            KillColliObj((t1 + 0x48));
            return nlCloseEvent(t1);
        }
        return 0x78;
    }
    return t2;
}

float FUN_0c02b146(int a4, int a5, float f4)
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
    float u11;
    float u12;
    int t14;
    int t15;
    int t16;
    float t17;
    int t18;
    int t29;
    int t30;
    int t31;
    float t32;
    int t33;
    int t45;
    int t46;
    int t47;
    float t48;
    int t49;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    float u66;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    float u43;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    float u28;
    int t19;
    int t20;
    int t21;
    int t34;
    int t35;
    int t36;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    float u59;
    int t50;
    int t51;
    int t52;
    int stk[12] = {0};

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)0xC1EE1F4 = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)0xC1EE1F0 = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xC1EE1EC = t2;
    t3 = *(int *)0xC2A6690;
    t4 = 0xC1EE1EC;
    t5 = 0xC2A6690;
    t6 = 0xEF4;
    t7 = a4;
    t8 = a5;
    t9 = (t3 + 0xEF4);
    t10 = 0x0;
    u11 = f4;
    u12 = 999999.875f;
    do {
        if (a5 != 44) {
            if (a5 == 55) {
                if (t10 == 7) {
                    t10 = (t10 + 0x1);
                    t23 = t4;
                    t24 = t5;
                    t25 = t6;
                    t26 = t7;
                    t27 = t8;
                } else {
                    t14 = *(int *)((t9 + 0x4));
                    t15 = *(int *)((t9 + 0x0));
                    t8 = t15;
                    t16 = *(int *)((t14 + 0x0));
                    t7 = 0x0;
                    t17 = getNearLineIndex(t7, t8, t16, (((int)stk + 4) + 0x4));
                    u11 = t17;
                    if (u12 > u11) {
                        t4 = 0xC1EE1FC;
                        t5 = 0xC1EE1F8;
                        u12 = u11;
                        *(float *)0xC1EE200 = u12;
                        *(unsigned int *)((t5 + 0x0)) = t10;
                        t18 = *(int *)(((int)stk + 8));
                        t6 = t18;
                        *(unsigned int *)((t4 + 0x0)) = t6;
                        t19 = t4;
                        t20 = t5;
                        t21 = t6;
                    }
                    t23 = t19;
                    t24 = t20;
                    t25 = t21;
                    u28 = t17;
                }
                t38 = t23;
                t39 = t24;
                t40 = t25;
                t41 = t26;
                t42 = t27;
                u43 = u28;
            } else {
                t29 = *(int *)((t9 + 0x4));
                t30 = *(int *)((t9 + 0x0));
                t8 = t30;
                t31 = *(int *)((t29 + 0x0));
                t7 = 0x0;
                t32 = getNearLineIndex(t7, t8, t31, (((int)stk + 4) + 0x4));
                u11 = t32;
                if (u12 > u11) {
                    t4 = 0xC1EE1FC;
                    t5 = 0xC1EE1F8;
                    u12 = u11;
                    *(float *)0xC1EE200 = u12;
                    *(unsigned int *)((t5 + 0x0)) = t10;
                    t33 = *(int *)(((int)stk + 8));
                    t6 = t33;
                    *(unsigned int *)((t4 + 0x0)) = t6;
                    t34 = t4;
                    t35 = t5;
                    t36 = t6;
                }
                t38 = t34;
                t39 = t35;
                t40 = t36;
                u43 = t32;
            }
            t61 = t38;
            t62 = t39;
            t63 = t40;
            t64 = t41;
            t65 = t42;
            u66 = u43;
        } else {
            if (t10 == 7) {
                t10 = (t10 + 0x1);
                t54 = t4;
                t55 = t5;
                t56 = t6;
                t57 = t7;
                t58 = t8;
            } else {
                t45 = *(int *)((t9 + 0x4));
                t46 = *(int *)((t9 + 0x0));
                t8 = t46;
                t47 = *(int *)((t45 + 0x0));
                t7 = 0x0;
                t48 = getNearLineIndex(t7, t8, t47, (((int)stk + 4) + 0x4));
                u11 = t48;
                if (u12 > u11) {
                    t4 = 0xC1EE1FC;
                    t5 = 0xC1EE1F8;
                    u12 = u11;
                    *(float *)0xC1EE200 = u12;
                    *(unsigned int *)((t5 + 0x0)) = t10;
                    t49 = *(int *)(((int)stk + 8));
                    t6 = t49;
                    *(unsigned int *)((t4 + 0x0)) = t6;
                    t50 = t4;
                    t51 = t5;
                    t52 = t6;
                }
                t54 = t50;
                t55 = t51;
                t56 = t52;
                u59 = t48;
            }
            t61 = t54;
            t62 = t55;
            t63 = t56;
            t64 = t57;
            t65 = t58;
            u66 = u59;
        }
        t4 = t61;
        t10 = (t10 + 0x1);
        t5 = t62;
        t6 = t63;
        t7 = t64;
        t8 = t65;
        t9 = (t9 + 0xC);
    } while ((int)t10 <= (int)0x8);
    return u66;
}

float FUN_0c03a07c(void)
{
    int t1;
    float u4;
    float u5;
    int t8;
    int t9;
    int t11;
    float u13;
    float u14;
    int t15;
    float t16;
    float u17;
    float u18;
    int t23;
    float u20;

    FUN_0c039cd2();
    t1 = *(int *)0xC2864C4;
    *(unsigned int *)0xC2864C4 = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)0xC2864C4 = 0x0;
        *(unsigned int *)0xC2864B4 = 0x0;
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    u4 = *(float *)0xC03A164;
    u5 = *(float *)0xC03A168;
    pfLocate(u5, u4);
    FUN_0c0310a0();
    t8 = *(int *)0xC2864C4;
    t9 = (int)((int)t8 / (int)0x3C);
    FUN_0c031158(t9);
    t11 = *(int *)0xC08D678;
    pfPuts(t11);
    u13 = *(float *)0xC03A188;
    u14 = *(float *)0xC2864D4;
    *(float *)0xC2864D4 = (u14 * u13);
    if (1.0f > (u14 * u13)) {
        t15 = *(int *)0xC2864D8;
        t16 = FUN_0c089de0(((t15 << 8) << 2));
        u17 = *(float *)0xC03A194;
        u18 = *(float *)0xC03A198;
        *(float *)0xC2864D4 = ((-(t16 * u17)) + u18);
        u20 = ((-(t16 * u17)) + u18);
    }
    t23 = *(int *)0xC2864D8;
    *(unsigned int *)0xC2864D8 = (t23 + 0x1);
    if ((int)(t23 + 0x1) > (int)0x10) {
        *(unsigned int *)0xC2864D8 = 0x0;
        *(float *)0xC2864D4 = 1.0f;
        *(unsigned int *)0xC2864CC = 0xC039E58;
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    return u20;
}

float FUN_0c0713d8(int a4)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u6;
    int t15;
    int t16;
    int t25;
    int t26;
    float t35;
    int t36;
    float u37;
    int t38;
    int t41;
    float u42;
    int t43;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    float u31;
    float u21;
    float u11;

    u0 = *(float *)((a4 + 0x38));
    t1 = *(int *)(((0x148 + a4) + 0x0));
    t2 = (int)(((unsigned int)t1 >> 9) & 0x3);
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                t3 = *(int *)((a4 + 0x34));
                t4 = *(int *)((t3 + 0x0));
                u6 = (float)t4;
                if (0.0f > (float)t4) {
                    u6 = ((float)t4 + 4.2949673e+09f);
                }
                u11 = u6;
            }
            u21 = u11;
        } else {
            t15 = *(int *)((a4 + 0x34));
            t16 = *(short *)((t15 + 0x0));
            u21 = (float)(unsigned short)t16;
        }
        u31 = u21;
    } else {
        t25 = *(int *)((a4 + 0x34));
        t26 = *(int *)((t25 + 0x0));
        u31 = (float)t26;
    }
    t35 = nlFloor((u0 / u31));
    t36 = *(int *)((a4 + 0x124));
    u37 = *(float *)((t36 + 0x4));
    if ((u0 - (t35 * u31)) > u37) {
        t38 = *(int *)((a4 + 0x124));
        *(unsigned int *)((a4 + 0x124)) = (t38 + 0x8);
    }
    t41 = *(int *)((a4 + 0x128));
    u42 = *(float *)((t41 + 0x4));
    if ((u0 - (t35 * u31)) > u42) {
        t43 = *(int *)((a4 + 0x128));
        *(unsigned int *)((a4 + 0x128)) = (t43 + 0x8);
    }
    t46 = *(int *)((a4 + 0x0));
    t47 = *(int *)((0xC1337CC + (t46 << 2)));
    t48 = *(int *)((0xC1331B0 + (t46 << 2)));
    t49 = *(int *)(((0x124 + a4) + 0x0));
    t50 = *(int *)((t49 + 0x0));
    t51 = *(int *)(((t47 + ((t50 << 1) << 2)) + 0x0));
    *(unsigned int *)((t48 + 0x8)) = t51;
    t52 = *(int *)((a4 + 0x0));
    t53 = *(int *)(((0xC1331B0 + (t52 << 2)) + 0x0));
    t54 = *(int *)((0xC1337CC + (t52 << 2)));
    t55 = *(int *)(((0x128 + a4) + 0x0));
    t56 = *(int *)((t55 + 0x0));
    t57 = *(int *)(((t54 + ((t56 << 1) << 2)) + 0x4));
    *(unsigned int *)((t53 + 0x14)) = t57;
    return (t35 * u31);
}

int TrainInit(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t21;
    float u22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t36;
    int t38;

    t0 = nlSetEventNext(0x12C, 0xC0490E0, a4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
    t2 = *(int *)0xC2A44A8;
    *(unsigned int *)0xC2A44A8 = (t2 + 0x1);
    if (a5 == 5) {
        t3 = *(int *)((a4 + 0x78));
        *(unsigned int *)((t0 + 0x78)) = (t3 + 0x2);
    } else {
        t4 = *(int *)((a4 + 0x78));
        *(unsigned int *)((t0 + 0x78)) = (t4 + 0x1);
    }
    t7 = *(int *)((a4 + 0x80));
    *(unsigned int *)((t0 + 0x80)) = t7;
    t8 = *(int *)((a4 + 0xD4));
    *(unsigned int *)((t0 + 0xD4)) = (t8 - ((a5 << 1) + (a5 << 2)));
    getCoursePointMove((0x80 + t0), (0xD4 + t0), 0x0);
    t10 = *(int *)((t0 + 0x80));
    t11 = *(int *)0xC2A6690;
    t12 = *(int *)((t0 + 0xD4));
    t13 = *(int *)((((((t10 << 1) + t10) << 2) + t11) + 0x0));
    t14 = *(int *)((((((t12 << 1) + t12) << 2) + t13) + 0x8));
    *(unsigned int *)(((0x8C + t0) + 0x8)) = t14;
    t15 = *(int *)((((((t12 << 1) + t12) << 2) + t13) + 0x4));
    *(unsigned int *)(((0x8C + t0) + 0x4)) = t15;
    t16 = *(int *)((((((t12 << 1) + t12) << 2) + t13) + 0x0));
    *(unsigned int *)(((0x8C + t0) + 0x0)) = t16;
    PcarEvInit(t0);
    t18 = *(int *)((t0 + 0x80));
    t19 = *(int *)0xC2A6690;
    t20 = *(int *)((t0 + 0xD4));
    t21 = *(int *)((((((t18 << 1) + t18) << 2) + t19) + 0x0));
    u22 = *(float *)(((t21 + (((t20 << 1) + t20) << 2)) + 0x4));
    *(float *)((t0 + 0x90)) = (u22 + 1.0f);
    t23 = *(int *)(((0x98 + a4) + 0x8));
    *(unsigned int *)(((0x98 + t0) + 0x8)) = t23;
    t24 = *(int *)(((0x98 + a4) + 0x4));
    *(unsigned int *)(((0x98 + t0) + 0x4)) = t24;
    t25 = *(int *)(((0x98 + a4) + 0x0));
    *(unsigned int *)(((0x98 + t0) + 0x0)) = t25;
    t26 = *(signed char *)(((0xA4 + a4) + 0x0));
    *(unsigned char *)(((0xA4 + t0) + 0x0)) = t26;
    t27 = *(signed char *)(((0xA4 + a4) + 0x1));
    *(unsigned char *)(((0xA4 + t0) + 0x1)) = t27;
    t28 = *(signed char *)(((0xA4 + a4) + 0x2));
    *(unsigned char *)(((0xA4 + t0) + 0x2)) = t28;
    t29 = *(signed char *)(((0xA4 + a4) + 0x3));
    *(unsigned char *)(((0xA4 + t0) + 0x3)) = t29;
    t30 = *(signed char *)(((0xA4 + a4) + 0x4));
    *(unsigned char *)(((0xA4 + t0) + 0x4)) = t30;
    t31 = *(signed char *)(((0xA4 + a4) + 0x5));
    *(unsigned char *)(((0xA4 + t0) + 0x5)) = t31;
    t32 = *(int *)((t0 + 0xD4));
    t33 = *(int *)((t0 + 0x80));
    courseStatusEntry(t33, t32);
    t35 = *(int *)((t0 + 0xD4));
    t36 = *(int *)((t0 + 0x80));
    courseStatusEntry(t36, (t35 + 0x1));
    t38 = *(int *)((t0 + 0x84));
    return calcCheckExec(t0, t38);
}

int courseStatusGet(int a4, int a5, int a6, int a7)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t18;
    int t16;
    int t19;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t54;
    int t52;
    int t55;
    int t59;
    int t60;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t79;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a7;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t0 = *(int *)((((a4 << 2) << 1) + 0xC2A3A40));
    t1 = *(int *)(((int)stk + 20));
    t2 = FUN_0c0813d0(t1);
    *(unsigned int *)(((int)stk + 8)) = t2;
    *(unsigned int *)(((int)stk + 16)) = ((int)t2 >> 5);
    t3 = *(int *)(((int)stk + 20));
    t4 = *(int *)0xC2A6690;
    if ((int)t3 >= 0) {
        t5 = *(int *)(((int)stk + 8));
        t6 = *(int *)((((((a4 << 1) + a4) << 2) + t4) + 0x4));
        t7 = *(int *)((t6 + 0x0));
        if ((int)t5 >= 0) {
            t8 = 0x0;
            t9 = t7;
            t10 = a4;
            t11 = a6;
            t12 = t0;
            for (;;) {
                t13 = *(int *)(((int)stk + 4));
                t14 = *(int *)(((int)stk + 4));
                t15 = *(int *)((t12 + (((int)t14 >> 5) << 2)));
                if ((t15 & (((int)(t13 & 0x1F) >= 0) ? (0x1 << ((t13 & 0x1F) & 31)) : ((-(int)(t13 & 0x1F) & 31) ? ((int)0x1 >> (-(int)(t13 & 0x1F) & 31)) : ((int)0x1 >> 31)))) != 0) {
                    t18 = t8;
                    if (t8 != 0) {
                        t16 = *(int *)(((int)stk + 16));
                        t18 = ((((int)(-t16) >= 0) ? ((t8 - 1) << ((-t16) & 31)) : ((-(int)(-t16) & 31) ? ((int)(t8 - 1) >> (-(int)(-t16) & 31)) : ((int)(t8 - 1) >> 31))) + 0x1);
                    }
                    t19 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 12)) = (t19 | (((int)t18 >= 0) ? (0x1 << (t18 & 31)) : ((-(int)t18 & 31) ? ((int)0x1 >> (-(int)t18 & 31)) : ((int)0x1 >> 31))));
                }
                t23 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t23 + 0x1);
                if ((int)(t23 + 0x1) >= (int)t9) {
                    t24 = ((t10 << 1) + t10);
                    t26 = t10;
                    t10 = t11;
                    t27 = *(int *)((((t24 << 2) + t4) + 0x8));
                    t10 = (t10 << 1);
                    t10 = (t10 + (t27 + 0x4));
                    t28 = *(short *)((t10 + 0x0));
                    t10 = t28;
                    t10 = (unsigned short)t10;
                    if (t10 == 0) {
                        t11 = (t11 + 0x1);
                        t29 = *(int *)((((((t26 << 1) + t26) << 2) + t4) + 0x8));
                        t10 = t11;
                        t10 = (t10 & 0x1);
                        t10 = (t10 << 1);
                        t10 = (t10 + (t29 + 0x4));
                        t30 = *(short *)((t10 + 0x0));
                        t10 = t30;
                        t10 = (unsigned short)t10;
                    }
                    t9 = t10;
                    t9 = (t9 << 1);
                    t9 = (t9 + t10);
                    t12 = t10;
                    t9 = (t9 << 2);
                    t12 = (t12 << 2);
                    t9 = (t9 + t4);
                    t12 = (t12 << 1);
                    t33 = *(int *)((t9 + 0x4));
                    t9 = t33;
                    t34 = *(int *)((t9 + 0x0));
                    t9 = t34;
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t35 = *(int *)((t12 + 0xC2A3A40));
                    t12 = t35;
                    if (t12 != 0) {
                        t36 = *(int *)(((int)stk + 8));
                        t8 = (t8 + 0x1);
                        if ((int)t8 > (int)t36) break;
                        continue;
                    }
                    t37 = *(int *)(((int)stk + 12));
                    return t37;
                }
                t38 = *(int *)(((int)stk + 8));
                t8 = (t8 + 0x1);
                if ((int)t8 > (int)t38) break;
            }
        }
    } else {
        t45 = *(int *)(((int)stk + 8));
        if ((int)t45 >= 0) {
            t46 = 0x0;
            t47 = a4;
            t48 = t0;
            for (;;) {
                t49 = *(int *)(((int)stk + 4));
                t50 = *(int *)(((int)stk + 4));
                t51 = *(int *)((t48 + (((int)t50 >> 5) << 2)));
                if ((t51 & (((int)(t49 & 0x1F) >= 0) ? (0x1 << ((t49 & 0x1F) & 31)) : ((-(int)(t49 & 0x1F) & 31) ? ((int)0x1 >> (-(int)(t49 & 0x1F) & 31)) : ((int)0x1 >> 31)))) != 0) {
                    t54 = t46;
                    if (t46 != 0) {
                        t52 = *(int *)(((int)stk + 16));
                        t54 = ((((int)(-t52) >= 0) ? ((t46 - 1) << ((-t52) & 31)) : ((-(int)(-t52) & 31) ? ((int)(t46 - 1) >> (-(int)(-t52) & 31)) : ((int)(t46 - 1) >> 31))) + 0x1);
                    }
                    t55 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 12)) = (t55 | (((int)t54 >= 0) ? (0x1 << (t54 & 31)) : ((-(int)t54 & 31) ? ((int)0x1 >> (-(int)t54 & 31)) : ((int)0x1 >> 31))));
                }
                t59 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t59 - 1);
                if ((int)(t59 - 1) < 0) {
                    t60 = t47;
                    t47 = (t47 << 1);
                    t47 = (t47 + t60);
                    t47 = (t47 << 2);
                    t47 = (t47 + t4);
                    t62 = *(int *)((t47 + 0x8));
                    t47 = t62;
                    t63 = *(short *)((t47 + 0x8));
                    t47 = (unsigned short)t63;
                    t48 = t47;
                    t64 = *(int *)((((((t47 << 1) + t47) << 2) + t4) + 0x4));
                    t48 = (t48 << 2);
                    t48 = (t48 << 1);
                    t65 = *(int *)((t64 + 0x0));
                    *(unsigned int *)(((int)stk + 4)) = (t65 - 1);
                    t66 = *(int *)((t48 + 0xC2A3A40));
                    t48 = t66;
                    if (t48 != 0) {
                        t67 = *(int *)(((int)stk + 8));
                        t46 = (t46 + 0x1);
                        if ((int)t46 > (int)t67) break;
                        continue;
                    }
                    break;
                }
                t68 = *(int *)(((int)stk + 8));
                t46 = (t46 + 0x1);
                if ((int)t46 > (int)t68) break;
            }
        }
    }
    t79 = *(int *)(((int)stk + 12));
    return t79;
}

int TrailerInit(int a4, int a5)
{
    int t0;
    int t51;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t17;
    int t18;
    int t19;
    float u20;
    int t23;
    int t24;
    int t25;
    int t26;
    float u27;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t46;
    int t47;
    int t49;
    int t50;
    int stk[9] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = nlSetEventNext(0x12C, 0xC0486D4, a4);
    t51 = t0;
    if (t0 != 0) {
        t1 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
        t2 = *(int *)0xC2A44A8;
        *(unsigned int *)0xC2A44A8 = (t2 + 0x1);
        t3 = extRand();
        *(unsigned int *)(((0x78 + t0) + 0x0)) = ((t3 & 0x1) + 0xC);
        t4 = *(int *)((a4 + 0x80));
        *(unsigned int *)((t0 + 0x80)) = t4;
        t5 = *(int *)(((0x8C + a4) + 0x8));
        *(unsigned int *)(((0x8C + t0) + 0x8)) = t5;
        t6 = *(int *)(((0x8C + a4) + 0x4));
        *(unsigned int *)(((0x8C + t0) + 0x4)) = t6;
        t7 = *(int *)(((0x8C + a4) + 0x0));
        *(unsigned int *)(((0x8C + t0) + 0x0)) = t7;
        t8 = *(int *)((a4 + 0xD4));
        *(unsigned int *)((t0 + 0xD4)) = t8;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        t9 = *(int *)(((int)stk + 4));
        *(float *)(((int)stk + 16)) = (-((float)t9 * 100.0f));
        nlPushUnitMatrix();
        t11 = *(short *)((a4 + 0xA6));
        nlRotateAY((unsigned short)t11);
        FUN_0c077210((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
        nlAddVector((0x8C + t0), (((int)stk + 4) + 0x4));
        nlPopMatrix(0x1);
        PcarEvInit(t0);
        t17 = *(int *)((t0 + 0x80));
        if (t17 == 0) {
            t18 = GetCollision2D((0x8C + t0), 30.0f);
            t19 = *(int *)((t18 + 0x1C));
            if (t19 != -1) {
                u20 = *(float *)((t18 + 0x18));
                *(float *)((t0 + 0x90)) = (u20 + 1.0f);
            }
        } else {
            t23 = *(int *)((t0 + 0x80));
            t24 = *(int *)0xC2A6690;
            t25 = *(int *)((t0 + 0xD4));
            t26 = *(int *)((((((t23 << 1) + t23) << 2) + t24) + 0x0));
            u27 = *(float *)(((t26 + (((t25 << 1) + t25) << 2)) + 0x4));
            *(float *)((t0 + 0x90)) = (u27 + 1.0f);
        }
        t34 = *(int *)(((0x98 + a4) + 0x8));
        *(unsigned int *)(((0x98 + t0) + 0x8)) = t34;
        t35 = *(int *)(((0x98 + a4) + 0x4));
        *(unsigned int *)(((0x98 + t0) + 0x4)) = t35;
        t36 = *(int *)(((0x98 + a4) + 0x0));
        *(unsigned int *)(((0x98 + t0) + 0x0)) = t36;
        t37 = *(signed char *)(((0xA4 + a4) + 0x0));
        *(unsigned char *)(((0xA4 + t0) + 0x0)) = t37;
        t38 = *(signed char *)(((0xA4 + a4) + 0x1));
        *(unsigned char *)(((0xA4 + t0) + 0x1)) = t38;
        t39 = *(signed char *)(((0xA4 + a4) + 0x2));
        *(unsigned char *)(((0xA4 + t0) + 0x2)) = t39;
        t40 = *(signed char *)(((0xA4 + a4) + 0x3));
        *(unsigned char *)(((0xA4 + t0) + 0x3)) = t40;
        t41 = *(signed char *)(((0xA4 + a4) + 0x4));
        *(unsigned char *)(((0xA4 + t0) + 0x4)) = t41;
        t42 = *(signed char *)(((0xA4 + a4) + 0x5));
        *(unsigned char *)(((0xA4 + t0) + 0x5)) = t42;
        t43 = *(int *)((t0 + 0xD4));
        t44 = *(int *)((t0 + 0x80));
        courseStatusEntry(t44, t43);
        t46 = *(int *)((t0 + 0xD4));
        t47 = *(int *)((t0 + 0x80));
        courseStatusEntry(t47, (t46 + 0x1));
        t49 = *(int *)((t0 + 0x84));
        t50 = calcCheckExec(t0, t49);
        t51 = t50;
    }
    return t51;
}

float getNearCoursePoint(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t10;
    float u19;
    int t4;
    float u5;
    float t6;
    int t7;
    int t27;
    float u36;
    int t21;
    float u22;
    float t23;
    int t24;
    int t38;
    int t39;
    int t40;
    int t41;
    float u42;
    float t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    float u49;
    float t50;
    int t51;
    int t65;
    int t66;
    int t67;
    int t68;
    float u69;
    float t70;
    int t71;
    int t85;
    int t86;
    float t87;
    int t88;
    float u89;
    float t90;
    float u91;
    int t92;
    int t93;
    int t94;
    float u95;
    int t96;
    float t97;
    float u98;
    int t100;
    float u101;
    int t99;
    int t116;
    int t117;
    float t118;
    int t119;
    float u120;
    int t121;
    float t122;
    float u123;
    int t152;
    int t140;
    float u150;
    int t126;
    float u136;
    int t104;
    float u114;
    int t74;
    float u83;
    int t54;
    float u63;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = *(int *)0xC2A6690;
    t1 = *(int *)((((((a5 << 1) + a5) << 2) + t0) + 0x4));
    t2 = *(int *)((((((a5 << 1) + a5) << 2) + t0) + 0x0));
    t3 = *(int *)((t1 + 0x0));
    if (a4 == 0) {
        t10 = 0x0;
        u19 = 1000000.0f;
        if ((int)t3 > 0) {
            t4 = 0x0;
            u5 = 1000000.0f;
            do {
                t6 = nlLength(a7, ((((t4 << 1) + t4) << 2) + t2));
                t7 = 0x0;
                if (u5 > t6) {
                    u5 = t6;
                    t7 = t4;
                }
                t4 = (t4 + 0x1);
            } while ((int)t4 < (int)t3);
            t10 = t7;
            u19 = u5;
        }
        t140 = t10;
        u150 = u19;
    } else {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        t27 = 0x0;
                        u36 = 1000000.0f;
                        if ((int)t3 > 0) {
                            t21 = 0x0;
                            u22 = 1000000.0f;
                            do {
                                t23 = nlLength(a7, ((((t21 << 1) + t21) << 2) + t2));
                                t24 = 0x0;
                                if (u22 > t23) {
                                    u22 = t23;
                                    t24 = t21;
                                }
                                t21 = (t21 + 0x1);
                            } while ((int)t21 < (int)t3);
                            t27 = t24;
                            u36 = u22;
                        }
                        t54 = t27;
                        u63 = u36;
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = 0x0;
                        t38 = *(int *)(((int)stk + 8));
                        t39 = *(int *)((t38 + 0x0));
                        t40 = t39;
                        t41 = 0x0;
                        u42 = 1000000.0f;
                        do {
                            if ((int)t40 < 0) {
                                t40 = (t40 + t3);
                            }
                            t43 = nlLength(a7, ((((t40 << 1) + t40) << 2) + t2));
                            if (u42 > t43) {
                                t41 = t40;
                                u42 = t43;
                            }
                            t44 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t44 + 0x1);
                            t40 = (t40 - 1);
                        } while ((int)(t44 + 0x1) < (int)0x7);
                        *(unsigned int *)(((int)stk + 4)) = 0x0;
                        t45 = *(int *)(((int)stk + 8));
                        t46 = *(int *)((t45 + 0x0));
                        t47 = t46;
                        t48 = t41;
                        u49 = u42;
                        do {
                            if ((int)t47 >= (int)t3) {
                                t47 = (t47 - t3);
                            }
                            t50 = nlLength(a7, ((((t47 << 1) + t47) << 2) + t2));
                            if (u49 > t50) {
                                t48 = t47;
                                u49 = t50;
                            }
                            t51 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t51 + 0x1);
                            t47 = (t47 + 0x1);
                        } while ((int)(t51 + 0x1) < (int)0x7);
                        t54 = t48;
                        u63 = u49;
                    }
                    t74 = t54;
                    u83 = u63;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t65 = *(int *)(((int)stk + 8));
                    t66 = *(int *)((t65 + 0x0));
                    t67 = t66;
                    t68 = 0x0;
                    u69 = 1000000.0f;
                    do {
                        if ((int)t67 >= (int)t3) {
                            t67 = (t67 - t3);
                        }
                        t70 = nlLength(a7, ((((t67 << 1) + t67) << 2) + t2));
                        if (u69 > t70) {
                            t68 = t67;
                            u69 = t70;
                        }
                        t71 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t71 + 0x1);
                        t67 = (t67 + 0x1);
                    } while ((int)(t71 + 0x1) < (int)0x7);
                    t74 = t68;
                    u83 = u69;
                }
                t104 = t74;
                u114 = u83;
            } else {
                t85 = *(int *)(((int)stk + 8));
                t86 = *(int *)((t85 + 0x0));
                t87 = nlLength(a7, ((((t86 << 1) + t86) << 2) + t2));
                t88 = t86;
                u89 = t87;
                do {
                    *(unsigned int *)(((int)stk + 4)) = t88;
                    t88 = (t88 - 1);
                    if ((int)t88 < 0) {
                        t88 = (t3 - 1);
                    }
                    t90 = nlLength(a7, ((((t88 << 1) + t88) << 2) + t2));
                    u91 = u89;
                    u89 = t90;
                } while (u91 > u89);
                t92 = *(int *)(((int)stk + 8));
                t93 = *(int *)((t92 + 0x0));
                t94 = t93;
                u95 = t87;
                do {
                    t96 = t94;
                    t94 = (t94 + 0x1);
                    if ((int)t94 >= (int)t3) {
                        t94 = 0x0;
                    }
                    t97 = nlLength(a7, ((((t94 << 1) + t94) << 2) + t2));
                    u98 = u95;
                    u95 = t97;
                } while (u98 > u95);
                t100 = t96;
                u101 = u98;
                if (u98 > u91) {
                    t99 = *(int *)(((int)stk + 4));
                    t100 = t99;
                    u101 = u91;
                }
                t104 = t100;
                u114 = u101;
            }
            t126 = t104;
            u136 = u114;
        } else {
            t116 = *(int *)(((int)stk + 8));
            t117 = *(int *)((t116 + 0x0));
            t118 = nlLength(a7, ((((t117 << 1) + t117) << 2) + t2));
            t119 = t117;
            u120 = t118;
            do {
                t121 = t119;
                t119 = (t119 + 0x1);
                if ((int)t119 >= (int)t3) {
                    t119 = 0x0;
                }
                t122 = nlLength(a7, ((((t119 << 1) + t119) << 2) + t2));
                u123 = u120;
                u120 = t122;
            } while (u123 > u120);
            t126 = t121;
            u136 = u123;
        }
        t140 = t126;
        u150 = u136;
    }
    t152 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t152 + 0x0)) = t140;
    return u150;
}
