/* Straight-line functions with calls and guards (batch gen_yd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CoursePointLoadReq(int, int, int, int, float);
int gdc_CourseReq(int, int, float);
int gdc_CourseStartLoadReq(int a4, int a5, int a6, int a7);

int gdc_CourseStartLoadReq(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t5;
    int t6;
    int t46;
    int t32;
    float u28;
    int stk[13];

    t0 = *(int *)0xC1EE20C;
    if (t0 != 0) {
        if (t0 != 1) {
            t11 = t0;
            if (t0 == 2) {
                t5 = (*(int *)((0xC0C835C + ((*(int *)0xC1EE214) << 2))));
                for (;;) {
                    t6 = *(int *)0xC1EE214;
                    if ((int)t5 >= (int)((*(int *)(((t6 << 2) + (*(int *)0xC1244E8)))) + (*(int *)((0xC0C835C + (t6 << 2)))))) {
                        break;
                    }
                    gdc_CourseReq(t5, 0x0, 0.0f);
                    t5 = (t5 + 0x1);
                }
                t11 = (t6 << 2);
            }
            t32 = t11;
        } else {
            if ((*(int *)0xC17948C) != 1) {
                *(float *)((((int)stk + 16) + 0x0)) = (*(float *)0xC02F2CC);
                *(float *)((((int)stk + 16) + 0x4)) = (*(float *)0xC02F2D0);
                u28 = (*(float *)0xC02F2D4);
            } else {
                *(float *)((((int)stk + 16) + 0x0)) = (*(float *)0xC02F2D8);
                *(float *)((((int)stk + 16) + 0x4)) = (*(float *)0xC02F2DC);
                u28 = (*(float *)0xC02F2E0);
            }
            *(float *)((((int)stk + 16) + 0x8)) = u28;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 16)); }
            t32 = (gdc_CoursePointLoadReq(a4, a5, a6, a7, (*(float *)0xC02F2E4)));
        }
        t46 = t32;
    } else {
        *(float *)((((int)stk + 16) + 0x0)) = (*(float *)0xC02F2B4);
        *(float *)((((int)stk + 16) + 0x4)) = (*(float *)0xC02F2B8);
        *(float *)((((int)stk + 16) + 0x8)) = (*(float *)0xC02F2BC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 16)); }
        t46 = (gdc_CoursePointLoadReq(a4, a5, a6, a7, (*(float *)0xC02F2C4)));
    }
    return t46;
}
