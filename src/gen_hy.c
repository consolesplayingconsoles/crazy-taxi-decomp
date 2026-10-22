/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02dcd8(void);
int FUN_0c04bff2(int, int);
int FUN_0c057c3c(void);
int Voice_Request(int, int, int, int);
int gdc_CoursePointLoadReq(float);
int FUN_0c02c1a0(void);

int FUN_0c02c1a0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t9;
    int t10;
    int t11;
    int t20;
    int t21;
    int t22;
    int t38;
    int t40;
    int t41;
    int t42;
    int t45;
    int t46;
    int t47;
    int t50;
    int t51;
    int t52;
    int t55;
    int t56;
    int t57;
    int t60;
    int t61;
    int t62;
    int t65;
    int t66;
    int t67;
    int t69;
    int t70;
    int t71;
    int t74;
    int t75;
    int t76;
    int t79;
    int t80;
    int t81;
    int t84;
    int t85;
    int t86;
    int t89;
    int t90;
    int t91;
    int t94;
    int t95;
    int t96;
    int t108;
    int t109;
    int t116;
    int t117;
    int t102;
    int t26;
    float u97;
    int t118;
    int stk[29] = {0};

    t0 = *(int *)0xC1EE240;
    *(unsigned int *)0xC1EE240 = (t0 + 0x1);
    t1 = *(int *)0xC0E5310;
    if ((int)t1 > 0) {
        t2 = *(int *)0xC0E5310;
        *(unsigned int *)0xC0E5310 = (t2 - 1);
        t3 = *(int *)0xC1EE240;
        if ((int)t3 > (int)0x5) {
            *(unsigned int *)0xC1EE240 = 0x5;
        }
    }
    t9 = *(int *)0xC1EE23C;
    t10 = *(int *)0xC1EE240;
    if (t9 != 0) {
        t11 = *(int *)0xC1EE23C;
        if (t11 == 1) {
            if (t10 == 30) {
                Voice_Request(0xC0E52F8, 0x0, 0x7F, 0x0);
            }
            FUN_0c04bff2(0x2, 0x0);
            t20 = *(int *)((((int)stk + 76) + 0x8));
            t21 = *(int *)((((int)stk + 76) + 0x4));
            *(unsigned int *)((((int)stk + 64) + 0x8)) = t20;
            t22 = *(int *)((((int)stk + 76) + 0x0));
            *(unsigned int *)((((int)stk + 64) + 0x4)) = t21;
            *(unsigned int *)((((int)stk + 64) + 0x0)) = t22;
            gdc_CoursePointLoadReq(800.0f);
            t26 = 0x117;
        }
        t102 = t26;
    } else {
        if (t10 == 40) {
            Voice_Request(0xC0E52F8, 0x0, 0x7F, 0x0);
        }
        t38 = *(int *)0xC1EE20C;
        if (t38 == 0) {
            FUN_0c04bff2(0x1, 0x0);
            t40 = *(int *)((((int)stk + 76) + 0x8));
            t41 = *(int *)((((int)stk + 76) + 0x4));
            *(unsigned int *)((((int)stk + 64) + 0x8)) = t40;
            t42 = *(int *)((((int)stk + 76) + 0x0));
            *(unsigned int *)((((int)stk + 64) + 0x4)) = t41;
            *(unsigned int *)((((int)stk + 64) + 0x0)) = t42;
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x1);
            t45 = *(int *)(((((int)stk + 64) + 0xC) + 0x8));
            t46 = *(int *)(((((int)stk + 64) + 0xC) + 0x4));
            *(unsigned int *)((((int)stk + 52) + 0x8)) = t45;
            t47 = *(int *)(((((int)stk + 64) + 0xC) + 0x0));
            *(unsigned int *)((((int)stk + 52) + 0x4)) = t46;
            *(unsigned int *)((((int)stk + 52) + 0x0)) = t47;
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x2);
            t50 = *(int *)(((((int)stk + 52) + 0x18) + 0x8));
            t51 = *(int *)(((((int)stk + 52) + 0x18) + 0x4));
            *(unsigned int *)((((int)stk + 40) + 0x8)) = t50;
            t52 = *(int *)(((((int)stk + 52) + 0x18) + 0x0));
            *(unsigned int *)((((int)stk + 40) + 0x4)) = t51;
            *(unsigned int *)((((int)stk + 40) + 0x0)) = t52;
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x3);
            t55 = *(int *)(((((int)stk + 40) + 0x24) + 0x8));
            t56 = *(int *)(((((int)stk + 40) + 0x24) + 0x4));
            *(unsigned int *)((((int)stk + 28) + 0x8)) = t55;
            t57 = *(int *)(((((int)stk + 40) + 0x24) + 0x0));
            *(unsigned int *)((((int)stk + 28) + 0x4)) = t56;
            *(unsigned int *)((((int)stk + 28) + 0x0)) = t57;
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x4);
            t60 = *(int *)(((((int)stk + 28) + 0x30) + 0x8));
            t61 = *(int *)(((((int)stk + 28) + 0x30) + 0x4));
            *(unsigned int *)((((int)stk + 16) + 0x8)) = t60;
            t62 = *(int *)(((((int)stk + 28) + 0x30) + 0x0));
            *(unsigned int *)((((int)stk + 16) + 0x4)) = t61;
            *(unsigned int *)((((int)stk + 16) + 0x0)) = t62;
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x5);
            t65 = *(int *)(((((int)stk + 16) + 0x3C) + 0x8));
            t66 = *(int *)(((((int)stk + 16) + 0x3C) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t65;
            t67 = *(int *)(((((int)stk + 16) + 0x3C) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t66;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t67;
            u97 = 1500.0f;
        } else {
            FUN_0c04bff2(0x2, 0x0);
            t69 = *(int *)((((int)stk + 76) + 0x8));
            t70 = *(int *)((((int)stk + 76) + 0x4));
            *(unsigned int *)((((int)stk + 64) + 0x8)) = t69;
            t71 = *(int *)((((int)stk + 76) + 0x0));
            *(unsigned int *)((((int)stk + 64) + 0x4)) = t70;
            *(unsigned int *)((((int)stk + 64) + 0x0)) = t71;
            gdc_CoursePointLoadReq(1000.0f);
            FUN_0c04bff2(0x2, 0x1);
            t74 = *(int *)(((((int)stk + 64) + 0xC) + 0x8));
            t75 = *(int *)(((((int)stk + 64) + 0xC) + 0x4));
            *(unsigned int *)((((int)stk + 52) + 0x8)) = t74;
            t76 = *(int *)(((((int)stk + 64) + 0xC) + 0x0));
            *(unsigned int *)((((int)stk + 52) + 0x4)) = t75;
            *(unsigned int *)((((int)stk + 52) + 0x0)) = t76;
            gdc_CoursePointLoadReq(800.0f);
            FUN_0c04bff2(0x2, 0x2);
            t79 = *(int *)(((((int)stk + 52) + 0x18) + 0x8));
            t80 = *(int *)(((((int)stk + 52) + 0x18) + 0x4));
            *(unsigned int *)((((int)stk + 40) + 0x8)) = t79;
            t81 = *(int *)(((((int)stk + 52) + 0x18) + 0x0));
            *(unsigned int *)((((int)stk + 40) + 0x4)) = t80;
            *(unsigned int *)((((int)stk + 40) + 0x0)) = t81;
            gdc_CoursePointLoadReq(600.0f);
            FUN_0c04bff2(0x2, 0x3);
            t84 = *(int *)(((((int)stk + 40) + 0x24) + 0x8));
            t85 = *(int *)(((((int)stk + 40) + 0x24) + 0x4));
            *(unsigned int *)((((int)stk + 28) + 0x8)) = t84;
            t86 = *(int *)(((((int)stk + 40) + 0x24) + 0x0));
            *(unsigned int *)((((int)stk + 28) + 0x4)) = t85;
            *(unsigned int *)((((int)stk + 28) + 0x0)) = t86;
            gdc_CoursePointLoadReq(400.0f);
            FUN_0c04bff2(0x2, 0x4);
            t89 = *(int *)(((((int)stk + 28) + 0x30) + 0x8));
            t90 = *(int *)(((((int)stk + 28) + 0x30) + 0x4));
            *(unsigned int *)((((int)stk + 16) + 0x8)) = t89;
            t91 = *(int *)(((((int)stk + 28) + 0x30) + 0x0));
            *(unsigned int *)((((int)stk + 16) + 0x4)) = t90;
            *(unsigned int *)((((int)stk + 16) + 0x0)) = t91;
            gdc_CoursePointLoadReq(400.0f);
            FUN_0c04bff2(0x2, 0x5);
            t94 = *(int *)(((((int)stk + 16) + 0x3C) + 0x8));
            t95 = *(int *)(((((int)stk + 16) + 0x3C) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t94;
            t96 = *(int *)(((((int)stk + 16) + 0x3C) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t95;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t96;
            u97 = 400.0f;
        }
        gdc_CoursePointLoadReq(u97);
        t102 = 0x135;
    }
    t108 = *(int *)0xC1EE240;
    if ((int)t108 >= (int)t102) {
        t109 = *(int *)0xC1EE23C;
        if (t109 == 0) {
            *(unsigned int *)0xC1EE238 = 0x2;
        } else {
            if (t109 == 1) {
                *(unsigned int *)0xC1EE238 = 0x4;
            }
        }
        t116 = FUN_0c057c3c();
        t118 = t116;
    } else {
        t117 = FUN_0c02dcd8();
        t118 = t117;
    }
    return t118;
}
