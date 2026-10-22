/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_Balloon(void);
int pfCleanString(void);
int pfAddNumber(int);
int CheckNameEntryPad(void);
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
int Exec_Balloon_Event(void);
float navi_GetRouteDataC(int a4, int a5, float f4);
float ExecNameEntryScroll(void);
float psgUpdatePartTracks(int a4);
int TrainInit(int a4, int a5);
int courseStatusGet(int a4, int a5, int a6, int a7);
int TrailerInit(int a4, int a5);
float getNearCoursePoint(int a4, int a5, int a6, int a7);



float ExecNameEntryScroll(void)
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

    CheckNameEntryPad();
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
    pfCleanString();
    t8 = *(int *)0xC2864C4;
    t9 = (int)((int)t8 / (int)0x3C);
    pfAddNumber(t9);
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

float psgUpdatePartTracks(int a4)
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

