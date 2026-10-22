/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int getNearLinkedLine(int, int, int, int, int, float);
int FUN_0c157ba0(int, int);
int FUN_0c157d20(int);
int FUN_0c157d58(int, int);
int gdc_CourseReq(int, int, float);
int getCoursePointMove(int, int, int);
int kmiFBfree(int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
float getCourseDistPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
float gdc_CoursePointLoadReq(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmiVQFBfree(int a4, int a5);

float getCourseDistPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    float t23;
    float u24;
    float u25;
    float t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t37;
    int t38;
    int t39;
    int t40;
    int stk[29] = {0};

    stk[25] = a8;
    stk[26] = a9;
    stk[27] = a10;
    stk[28] = a11;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((int)stk + 48)) = a7;
    *(unsigned int *)(((int)stk + 8)) = a4;
    getNearLinkedLine(0x2, 0x0, (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x2C), a5, f4);
    t1 = *(int *)(((int)stk + 52));
    t2 = *(int *)0xC2A6690;
    t3 = *(int *)(((int)stk + 48));
    t4 = *(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x0));
    t5 = *(int *)(((t4 + (((t3 << 1) + t3) << 2)) + 0x8));
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x8)) = t5;
    t6 = *(int *)(((t4 + (((t3 << 1) + t3) << 2)) + 0x4));
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x4)) = t6;
    t7 = *(int *)(((t4 + (((t3 << 1) + t3) << 2)) + 0x0));
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x0)) = t7;
    t8 = *(int *)(((int)stk + 8));
    t9 = 0xFFFFFFFF;
    if ((int)t8 >= 0) {
        t9 = 0x1;
    }
    for (;;) {
        t11 = *(int *)(((int)stk + 48));
        *(unsigned int *)(((int)stk + 48)) = (t11 + t9);
        getCoursePointMove((((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x28), 0x0);
        t13 = *(int *)(((((int)stk + 8) + 0x1C) + 0x8));
        *(unsigned int *)(((((int)stk + 8) + 0x10) + 0x8)) = t13;
        t14 = *(int *)(((((int)stk + 8) + 0x1C) + 0x4));
        *(unsigned int *)(((((int)stk + 8) + 0x10) + 0x4)) = t14;
        t15 = *(int *)(((((int)stk + 8) + 0x1C) + 0x0));
        *(unsigned int *)(((((int)stk + 8) + 0x10) + 0x0)) = t15;
        t16 = *(int *)(((int)stk + 52));
        t17 = *(int *)0xC2A6690;
        t18 = *(int *)(((int)stk + 48));
        t19 = *(int *)((((((t16 << 1) + t16) << 2) + t17) + 0x0));
        t20 = *(int *)(((t19 + (((t18 << 1) + t18) << 2)) + 0x8));
        *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x8)) = t20;
        t21 = *(int *)(((t19 + (((t18 << 1) + t18) << 2)) + 0x4));
        *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x4)) = t21;
        t22 = *(int *)(((t19 + (((t18 << 1) + t18) << 2)) + 0x0));
        *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x0)) = t22;
        t23 = nlLength(a5, (((int)stk + 8) + 0x1C));
        if (t23 > f4) {
            break;
        }
    }
    u24 = t23;
    for (;;) {
        u25 = u24;
        u24 = 0.5f;
        nlGetAverageVector((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10), (((int)stk + 8) + 0x4), u24, 0.5f);
        t27 = nlLength(a5, (((int)stk + 8) + 0x4));
        u24 = t27;
        if (u24 > f4) {
            t28 = *(int *)(((((int)stk + 8) + 0x4) + 0x8));
            *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x8)) = t28;
            t29 = *(int *)(((((int)stk + 8) + 0x4) + 0x4));
            *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x4)) = t29;
            t30 = *(int *)(((((int)stk + 8) + 0x4) + 0x0));
            *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x0)) = t30;
        } else {
            t31 = *(int *)(((((int)stk + 8) + 0x4) + 0x8));
            *(unsigned int *)(((((int)stk + 8) + 0x10) + 0x8)) = t31;
            t32 = *(int *)(((((int)stk + 8) + 0x4) + 0x4));
            *(unsigned int *)(((((int)stk + 8) + 0x10) + 0x4)) = t32;
            t33 = *(int *)(((((int)stk + 8) + 0x4) + 0x0));
            *(unsigned int *)(((((int)stk + 8) + 0x10) + 0x0)) = t33;
        }
        u24 = (u24 - f4);
        u24 = (u24 < 0.0f ? -u24 : u24);
        if (!(0.000999999931f > ((u24 - u25) < 0.0f ? -(u24 - u25) : (u24 - u25)))) continue;
        break;
    }
    t37 = *(int *)(((((int)stk + 8) + 0x5C) + 0x0));
    t38 = *(int *)(((((int)stk + 8) + 0x4) + 0x8));
    *(unsigned int *)((t37 + 0x8)) = t38;
    t39 = *(int *)(((((int)stk + 8) + 0x4) + 0x4));
    *(unsigned int *)((t37 + 0x4)) = t39;
    t40 = *(int *)(((((int)stk + 8) + 0x4) + 0x0));
    *(unsigned int *)((t37 + 0x0)) = t40;
    return t27;
}


