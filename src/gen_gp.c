/* Straight-line functions with calls and guards (batch gen_gp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int PcarEvInit(int);
int Put_Motion2D(int);
int TrailerInit(int, int);
int calcCheckExec(int, int);
int extRand(void);
int set_event(int, int);
int ParkingCarInit(int a4, int a5, int a6, int a7, int a8);

int ParkingCarInit(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t66;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t12;
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
    int t26;
    int t27;
    int t28;
    int t33;
    int t35;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    float u43;
    int t50;
    int t51;
    int t52;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t62;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = extRand();
    t1 = set_event(0x12C, 0xC046B60);
    t66 = 0x0;
    if (t1 == 0) {
    } else {
        t2 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t2 + 0x1);
        *(unsigned int *)((t1 + 0x74)) = ((t2 + 0x1) - 1);
        t3 = *(int *)0xC2A44A8;
        *(unsigned int *)0xC2A44A8 = (t3 + 0x1);
        t4 = *(int *)(((int)stk + 16));
        *(unsigned int *)((t1 + 0x78)) = t4;
        *(unsigned int *)((t1 + 0x80)) = 0x0;
        if ((0x8000 & ((t0 << 2) << 2)) == 0) {
            t5 = *(int *)(((int)stk + 8));
            if (t5 != 0) {
                t6 = *(int *)(((int)stk + 8));
                *(unsigned int *)((t1 + 0x80)) = t6;
            }
        }
        t12 = *(int *)(((int)stk + 4));
        if (t12 == 0) {
            t13 = *(int *)((t1 + 0x80));
            t14 = *(int *)0xC2A6690;
            t15 = *(int *)((((((t13 << 1) + t13) << 2) + t14) + 0x0));
            t16 = *(int *)((t15 + 0x8));
            t17 = *(int *)((t15 + 0x4));
            *(unsigned int *)(((0x8C + t1) + 0x8)) = t16;
            t18 = *(int *)((t15 + 0x0));
            *(unsigned int *)(((0x8C + t1) + 0x4)) = t17;
            *(unsigned int *)(((0x8C + t1) + 0x0)) = t18;
        } else {
            t19 = *(int *)(((int)stk + 4));
            t20 = *(int *)((t19 + 0x8));
            t21 = *(int *)((t19 + 0x4));
            *(unsigned int *)(((0x8C + t1) + 0x8)) = t20;
            t22 = *(int *)((t19 + 0x0));
            *(unsigned int *)(((0x8C + t1) + 0x4)) = t21;
            *(unsigned int *)(((0x8C + t1) + 0x0)) = t22;
        }
        PcarEvInit(t1);
        t26 = *(int *)((t1 + 0x84));
        *(unsigned int *)((t1 + 0x84)) = (t26 | 0x10);
        t27 = *(int *)((t1 + 0x78));
        if (t27 == 0) {
            t28 = *(int *)((t1 + 0x84));
            *(unsigned int *)((t1 + 0x84)) = (t28 | 0x2);
        }
        t33 = *(int *)(((int)stk + 12));
        *(unsigned int *)((t1 + 0xD8)) = t33;
        *(float *)((t1 + 0xC8)) = 0.00999999978f;
        t35 = (((t0 << 2) << 2) & 0x83FF);
        if ((0x80000000 & a8) != 0) {
            t35 = (((t0 << 2) << 2) & 0x3FF);
        }
        *(unsigned short *)((t1 + 0xA6)) = (t35 + a8);
        t38 = GetCollision2D((0x8C + t1), 30.0f);
        t39 = *(int *)((t38 + 0x1C));
        if (t39 != -1) {
            t40 = *(int *)(((t38 + 0xC) + 0x8));
            t41 = *(int *)(((t38 + 0xC) + 0x4));
            *(unsigned int *)(((0xEC + t1) + 0x8)) = t40;
            t42 = *(int *)(((t38 + 0xC) + 0x0));
            *(unsigned int *)(((0xEC + t1) + 0x4)) = t41;
            *(unsigned int *)(((0xEC + t1) + 0x0)) = t42;
            *(unsigned int *)((t1 + 0x110)) = 0xA;
            u43 = *(float *)((t38 + 0x18));
            *(float *)((t1 + 0x104)) = u43;
            *(float *)((t1 + 0x90)) = u43;
        }
        t50 = *(int *)0xC0A4790;
        t51 = *(int *)0xC0A478C;
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t50;
        t52 = *(int *)0xC0A4788;
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t51;
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t52;
        Put_Motion2D(t1);
        t54 = *(signed char *)(((0x108 + t1) + 0x0));
        *(unsigned char *)(((0xA4 + t1) + 0x0)) = t54;
        t55 = *(signed char *)(((0x108 + t1) + 0x1));
        *(unsigned char *)(((0xA4 + t1) + 0x1)) = t55;
        t56 = *(signed char *)(((0x108 + t1) + 0x2));
        *(unsigned char *)(((0xA4 + t1) + 0x2)) = t56;
        t57 = *(signed char *)(((0x108 + t1) + 0x3));
        *(unsigned char *)(((0xA4 + t1) + 0x3)) = t57;
        t58 = *(signed char *)(((0x108 + t1) + 0x4));
        *(unsigned char *)(((0xA4 + t1) + 0x4)) = t58;
        t59 = *(signed char *)(((0x108 + t1) + 0x5));
        *(unsigned char *)(((0xA4 + t1) + 0x5)) = t59;
        t60 = *(int *)((t1 + 0x84));
        calcCheckExec(t1, t60);
        t62 = *(int *)((t1 + 0x78));
        if (t62 == 11) {
            TrailerInit(t1, 0x1);
        }
        t66 = t1;
    }
    return t66;
}
