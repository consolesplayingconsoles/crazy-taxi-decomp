/* Straight-line functions with calls and guards (batch gen_adt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chk_DispCredit(void);
int End_Adv_Title_LOGO(void);
int Voice_Request(int, int, int, int);
int gdc_CoursePointLoadReq(float);
int getReplayChangePos(int, int, int);
int AdvStateTitle(void);

int AdvStateTitle(void)
{
    int t10;
    int t71;
    int t63;
    int t23;
    float u58;
    int t80;
    int stk[29];

    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    if ((int)(*(int *)0xC0E5310) > 0) {
        *(unsigned int *)0xC0E5310 = ((*(int *)0xC0E5310) - 1);
        if ((int)(*(int *)0xC1EE240) > (int)0x5) {
            *(unsigned int *)0xC1EE240 = 0x5;
        }
    }
    t10 = *(int *)0xC1EE240;
    if ((*(int *)0xC1EE23C) != 0) {
        if ((*(int *)0xC1EE23C) == 1) {
            if (t10 == 30) {
                Voice_Request(0xC0E52F8, 0x0, 0x7F, 0x0);
            }
            getReplayChangePos(0x2, 0x0, ((int)stk + 76));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 76)); }
            gdc_CoursePointLoadReq(800.0f);
            t23 = 0x117;
        }
        t63 = t23;
    } else {
        if (t10 == 40) {
            Voice_Request(0xC0E52F8, 0x0, 0x7F, 0x0);
        }
        if ((*(int *)0xC1EE20C) == 0) {
            getReplayChangePos(0x1, 0x0, ((int)stk + 76));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 76)); }
            gdc_CoursePointLoadReq(1500.0f);
            getReplayChangePos(0x1, 0x1, (((int)stk + 64) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
            gdc_CoursePointLoadReq(1500.0f);
            getReplayChangePos(0x1, 0x2, (((int)stk + 52) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
            gdc_CoursePointLoadReq(1500.0f);
            getReplayChangePos(0x1, 0x3, (((int)stk + 40) + 0x24));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x24)); }
            gdc_CoursePointLoadReq(1500.0f);
            getReplayChangePos(0x1, 0x4, (((int)stk + 28) + 0x30));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
            gdc_CoursePointLoadReq(1500.0f);
            getReplayChangePos(0x1, 0x5, (((int)stk + 16) + 0x3C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
            u58 = 1500.0f;
        } else {
            getReplayChangePos(0x2, 0x0, ((int)stk + 76));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 76)); }
            gdc_CoursePointLoadReq(1000.0f);
            getReplayChangePos(0x2, 0x1, (((int)stk + 64) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
            gdc_CoursePointLoadReq(800.0f);
            getReplayChangePos(0x2, 0x2, (((int)stk + 52) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
            gdc_CoursePointLoadReq(600.0f);
            getReplayChangePos(0x2, 0x3, (((int)stk + 40) + 0x24));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x24)); }
            gdc_CoursePointLoadReq(400.0f);
            getReplayChangePos(0x2, 0x4, (((int)stk + 28) + 0x30));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
            gdc_CoursePointLoadReq(400.0f);
            getReplayChangePos(0x2, 0x5, (((int)stk + 16) + 0x3C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
            u58 = 400.0f;
        }
        gdc_CoursePointLoadReq(u58);
        t63 = 0x135;
    }
    if ((int)(*(int *)0xC1EE240) >= (int)t63) {
        t71 = *(int *)0xC1EE23C;
        if (t71 == 0) {
            *(unsigned int *)0xC1EE238 = 0x2;
        } else {
            if (t71 == 1) {
                *(unsigned int *)0xC1EE238 = 0x4;
            }
        }
        t80 = (End_Adv_Title_LOGO());
    } else {
        t80 = (Chk_DispCredit());
    }
    return t80;
}
