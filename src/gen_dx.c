/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077df0(int);
int humanDraw(int, int, int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlUnitVector(int);
int FUN_0c058b70(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int FUN_0c058c78(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
void Start_Proposal(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c0589b8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int FUN_0c058a94(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int FUN_0c058b70(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t6;
    int t7;
    int t9;
    int t11;
    int t13;
    int t18;
    int t25;
    int stk[14] = {0};

    stk[10] = a8;
    stk[11] = a9;
    stk[12] = a10;
    stk[13] = a11;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c077df0(0x3);
    nlPushMatrix(0xC0D09D0);
    FUN_0c077df0(0x2);
    nlPushUnitMatrix();
    FUN_0c077df0(0x1);
    nlPushUnitMatrix();
    t6 = *(int *)(((int)stk + 12));
    t7 = *(int *)(((int)stk + 4));
    nlTranslate(((float)(t7 - 320) * 0.000999999931f), ((float)(0xF0 - t6) * 0.000999999931f), -0.599999964f);
    t9 = *(short *)(((((int)stk + 4) + 0x24) + 0x2));
    nlRotateAY((unsigned short)t9);
    t11 = *(short *)(((((int)stk + 4) + 0x24) + 0x0));
    nlRotateAX((unsigned short)t11);
    t13 = *(short *)(((((int)stk + 4) + 0x24) + 0x4));
    nlRotateAZ((unsigned short)t13);
    nlScale(f4, f4, f4);
    nlScale((f4 * 0.000999999931f), (f4 * 0.000999999931f), (f4 * 0.000999999931f));
    nlSetScaleFactor((f4 * 0.000999999931f));
    t18 = *(int *)(((int)stk + 8));
    nlObjPut(t18);
    nlPopMatrix(0x1);
    FUN_0c077df0(0x2);
    nlPopMatrix(0x1);
    FUN_0c077df0(0x3);
    nlPopMatrix(0x1);
    t25 = FUN_0c077df0(0x1);
    return t25;
}

int FUN_0c058c78(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t6;
    int t7;
    int t9;
    int t11;
    int t13;
    int t16;
    int t17;
    int t24;
    int stk[13] = {0};

    stk[9] = a8;
    stk[10] = a9;
    stk[11] = a10;
    stk[12] = a11;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    FUN_0c077df0(0x3);
    nlPushMatrix(0xC0D09D0);
    FUN_0c077df0(0x2);
    nlPushUnitMatrix();
    FUN_0c077df0(0x1);
    nlPushUnitMatrix();
    t6 = *(int *)(((int)stk + 16));
    t7 = *(int *)(((int)stk + 4));
    nlTranslate((float)(t7 - 320), (float)(0xF0 - t6), -0.299999982f);
    t9 = *(short *)(((((int)stk + 4) + 0x20) + 0x2));
    nlRotateAY((unsigned short)t9);
    t11 = *(short *)(((((int)stk + 4) + 0x20) + 0x0));
    nlRotateAX((unsigned short)t11);
    t13 = *(short *)(((((int)stk + 4) + 0x20) + 0x4));
    nlRotateAZ((unsigned short)t13);
    nlScale(f4, f4, f4);
    t16 = *(int *)(((int)stk + 8));
    t17 = *(int *)(((int)stk + 12));
    humanDraw(t17, t16, a10, 0x0);
    nlPopMatrix(0x1);
    FUN_0c077df0(0x2);
    nlPopMatrix(0x1);
    FUN_0c077df0(0x3);
    nlPopMatrix(0x1);
    t24 = FUN_0c077df0(0x1);
    return t24;
}

void Start_Proposal(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t18;
    int t19;
    int t20;
    int t21;
    int stk[12] = {0};

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    t0 = *(int *)(((int)stk + 4));
    if (a5 != 0) {
        t1 = *(int *)0xC2A9D5C;
        *(unsigned int *)0xC2A9D5C = (t1 | (((int)(a4 << 2) >= 0) ? (t0 << ((a4 << 2) & 31)) : ((-(int)(a4 << 2) & 31) ? ((unsigned int)t0 >> (-(int)(a4 << 2) & 31)) : 0)));
        t2 = *(int *)((0xC2A9D30 + ((a4 + ((a5 << 2) + a5)) << 2)));
        *(unsigned int *)((t2 + 0x18)) = 0x1;
    } else {
        t3 = *(int *)0xC2A9D58;
        *(unsigned int *)0xC2A9D58 = (t3 | (((int)(a4 << 2) >= 0) ? (t0 << ((a4 << 2) & 31)) : ((-(int)(a4 << 2) & 31) ? ((unsigned int)t0 >> (-(int)(a4 << 2) & 31)) : 0)));
        t4 = *(int *)((0xC2A9D30 + (a4 << 2)));
        *(unsigned int *)((t4 + 0x18)) = 0x2;
    }
    t10 = *(int *)(((((a4 + ((a5 << 2) + a5)) << 2) + 0xC2A9D30) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x1C) + 0x8));
    *(unsigned int *)(((t10 + 0x1C) + 0x8)) = t11;
    t12 = *(int *)(((((int)stk + 4) + 0x1C) + 0x4));
    *(unsigned int *)(((t10 + 0x1C) + 0x4)) = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
    *(unsigned int *)(((t10 + 0x1C) + 0x0)) = t13;
    t14 = *(int *)(((((a4 + ((a5 << 2) + a5)) << 2) + 0xC2A9D30) + 0x0));
    t15 = (int)((int)a4 % (int)0x5);
    nlSubVector3op((((int)stk + 4) + 0x4), ((signed char)(((t15 << 1) + t15) << 2) + 0xC131B10), (t14 + 0x1C));
    nlUnitVector((((int)stk + 4) + 0x4));
    t18 = *(int *)(((((a4 + ((a5 << 2) + a5)) << 2) + 0xC2A9D30) + 0x0));
    t19 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
    *(unsigned int *)(((t18 + 0x28) + 0x8)) = t19;
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
    *(unsigned int *)(((t18 + 0x28) + 0x4)) = t20;
    t21 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    *(unsigned int *)(((t18 + 0x28) + 0x0)) = t21;
}


