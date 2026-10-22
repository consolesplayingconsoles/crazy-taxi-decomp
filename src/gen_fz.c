/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int);
int nlLocate(int, int);
int nlPrintColor(int);
int nlPrintf(int, ...);
int gdc_CoursePointChk(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int gdc_CoursePointChk(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u1;
    int t3;
    float u13;
    int t16;
    int t17;
    int t18;
    float u22;
    int t24;
    int t38;
    int t39;
    int t40;
    int t41;
    float u45;
    int t47;
    float u19;
    float u20;
    float u21;
    int t30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u42;
    float u43;
    float u44;
    int t53;
    float u54;
    float u55;
    float u56;
    float u57;
    int stk[28] = {0};

    stk[16] = a8;
    stk[17] = a9;
    stk[18] = a10;
    stk[19] = a11;
    u1 = 10.0f;
    t3 = *(int *)0xC1EE800;
    if (((*(int *)0xC1EE284) & 16) != 0) {
        *(float *)0xC0EA3E0 = ((*(float *)0xC0EA3E0) + u1);
    }
    if (((*(int *)0xC1EE284) & 32) != 0) {
        *(float *)0xC0EA3E0 = ((*(float *)0xC0EA3E0) - u1);
    }
    nlLocate(0x1, 0x28);
    nlPrintColor(0xFFFF0000);
    u13 = *(float *)0xC0EA3E0;
    *(float *)(((int)stk + 12)) = u13;
    nlPrintf(0xC08D428, u13);
    t16 = (nlPrintf(0xC08D430));
    t17 = t3;
    t18 = 0x0;
    u22 = f4;
    for (;;) {
        if ((int)t18 >= (int)(*(int *)0xC26E104)) {
            break;
        }
        t16 = 0xC;
        t24 = 0;
        for (; t24 < (int)t16; t24++) *(unsigned char *)(((int)stk + 16) + t24) = *(unsigned char *)((t17 + 0x4) + t24);
        t16 = 0x4;
        *(float *)((((int)stk + 16) + t16)) = 0.0f;
        u19 = (nlLength(((int)stk + 16), (((int)stk + 16) + 0x30)));
        u20 = (*(float *)((t17 + 0x0)));
        u21 = (*(float *)0xC0EA3E0);
        u22 = u19;
        u20 = (u20 + u21);
        if (u20 > u22) {
            t16 = (nlPrintf(0xC08D434, (t18)));
            t30 = t16;
        } else {
            u31 = u19;
            u32 = u20;
            u33 = u21;
            u34 = u22;
        }
        u19 = u31;
        u20 = u32;
        u21 = u33;
        u22 = u34;
        t16 = t30;
        t18 = (t18 + 0x1);
        t17 = (t17 + 0x14);
    }
    t38 = *(int *)0xC1EE804;
    t39 = (nlPrintf(0xC08D43C));
    t40 = 0x0;
    t41 = t38;
    u45 = f4;
    for (;;) {
        if ((int)t40 >= (int)(*(int *)0xC26E108)) {
            break;
        }
        t39 = 0xC;
        t47 = 0;
        for (; t47 < (int)t39; t47++) *(unsigned char *)(((int)stk + 16) + t47) = *(unsigned char *)((t41 + 0x4) + t47);
        t39 = 0x4;
        *(float *)((((int)stk + 16) + t39)) = 0.0f;
        u42 = (nlLength(((int)stk + 16), (((int)stk + 16) + 0x30)));
        u43 = (*(float *)((t41 + 0x0)));
        u44 = (*(float *)0xC0EA3E0);
        u45 = u42;
        u43 = (u43 + u44);
        if (u43 > u45) {
            t39 = (nlPrintf(0xC08D434, (t40)));
            t53 = t39;
        } else {
            u54 = u42;
            u55 = u43;
            u56 = u44;
            u57 = u45;
        }
        u42 = u54;
        u43 = u55;
        u44 = u56;
        u45 = u57;
        t39 = t53;
        t40 = (t40 + 0x1);
        t41 = (t41 + 0x14);
    }
    return (nlPrintColor(0xFFFFFFFF));
}
