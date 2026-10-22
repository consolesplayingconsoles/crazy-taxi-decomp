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
    u4 = 420.0f;
    u5 = 560.0f;
    pfLocate(u5, u4);
    pfCleanString();
    t8 = *(int *)0xC2864C4;
    t9 = (int)((int)t8 / (int)0x3C);
    pfAddNumber(t9);
    t11 = *(int *)0xC08D678;
    pfPuts(t11);
    u13 = 0.9f;
    u14 = *(float *)0xC2864D4;
    *(float *)0xC2864D4 = (u14 * u13);
    if (1.0f > (u14 * u13)) {
        t15 = *(int *)0xC2864D8;
        t16 = FUN_0c089de0(((t15 << 8) << 2));
        u17 = 0.5f;
        u18 = 1.5f;
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


