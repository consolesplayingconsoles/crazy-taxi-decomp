/* Straight-line functions with calls and guards (batch gen_ok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02dcd8(void);
int FUN_0c04bff2(int, int, int);
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
    int t35;
    int t69;
    int t70;
    int t77;
    int t78;
    int t63;
    int t23;
    float u58;
    int t79;
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
            FUN_0c04bff2(0x2, 0x0, ((int)stk + 76));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 76)); }
            gdc_CoursePointLoadReq(800.0f);
            t23 = 0x117;
        }
        t63 = t23;
    } else {
        if (t10 == 40) {
            Voice_Request(0xC0E52F8, 0x0, 0x7F, 0x0);
        }
        t35 = *(int *)0xC1EE20C;
        if (t35 == 0) {
            FUN_0c04bff2(0x1, 0x0, ((int)stk + 76));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 76)); }
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x1, (((int)stk + 64) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x2, (((int)stk + 52) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x3, (((int)stk + 40) + 0x24));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x24)); }
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x4, (((int)stk + 28) + 0x30));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
            gdc_CoursePointLoadReq(1500.0f);
            FUN_0c04bff2(0x1, 0x5, (((int)stk + 16) + 0x3C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
            u58 = 1500.0f;
        } else {
            FUN_0c04bff2(0x2, 0x0, ((int)stk + 76));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 76)); }
            gdc_CoursePointLoadReq(1000.0f);
            FUN_0c04bff2(0x2, 0x1, (((int)stk + 64) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
            gdc_CoursePointLoadReq(800.0f);
            FUN_0c04bff2(0x2, 0x2, (((int)stk + 52) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
            gdc_CoursePointLoadReq(600.0f);
            FUN_0c04bff2(0x2, 0x3, (((int)stk + 40) + 0x24));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x24)); }
            gdc_CoursePointLoadReq(400.0f);
            FUN_0c04bff2(0x2, 0x4, (((int)stk + 28) + 0x30));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
            gdc_CoursePointLoadReq(400.0f);
            FUN_0c04bff2(0x2, 0x5, (((int)stk + 16) + 0x3C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
            u58 = 400.0f;
        }
        gdc_CoursePointLoadReq(u58);
        t63 = 0x135;
    }
    t69 = *(int *)0xC1EE240;
    if ((int)t69 >= (int)t63) {
        t70 = *(int *)0xC1EE23C;
        if (t70 == 0) {
            *(unsigned int *)0xC1EE238 = 0x2;
        } else {
            if (t70 == 1) {
                *(unsigned int *)0xC1EE238 = 0x4;
            }
        }
        t77 = FUN_0c057c3c();
        t79 = t77;
    } else {
        t78 = FUN_0c02dcd8();
        t79 = t78;
    }
    return t79;
}
