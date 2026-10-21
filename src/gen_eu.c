/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int);
int nlLocate(int, int);
int nlPrintColor(int);
int nlPrintf(int, ...);
int FUN_0c02ef24(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int FUN_0c02ef24(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u1;
    int t2;
    int t3;
    float u4;
    int t7;
    float u8;
    float u13;
    int t15;
    int t16;
    int t17;
    int t18;
    float u22;
    int t23;
    int t24;
    float t25;
    float u26;
    float u27;
    int t28;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    float u43;
    int t44;
    int t45;
    float t46;
    float u47;
    float u48;
    int t49;
    int t57;
    float u19;
    float u20;
    float u21;
    float u29;
    float u30;
    float u31;
    float u32;
    float u40;
    float u41;
    float u42;
    int t50;
    float u51;
    float u52;
    float u53;
    float u54;
    int stk[28] = {0};

    stk[16] = a8;
    stk[17] = a9;
    stk[18] = a10;
    stk[19] = a11;
    u1 = *(float *)0xC02F074;
    t2 = *(int *)0xC1EE284;
    t3 = *(int *)0xC1EE800;
    if ((t2 & 16) != 0) {
        u4 = *(float *)0xC0EA3E0;
        *(float *)0xC0EA3E0 = (u4 + u1);
    }
    t7 = *(int *)0xC1EE284;
    if ((t7 & 32) != 0) {
        u8 = *(float *)0xC0EA3E0;
        *(float *)0xC0EA3E0 = (u8 - u1);
    }
    nlLocate(0x1, 0x28);
    nlPrintColor(0xFFFF0000);
    u13 = *(float *)0xC0EA3E0;
    *(float *)(((int)stk + 12)) = u13;
    nlPrintf(0xC08D428, u13);
    t15 = nlPrintf(0xC08D430);
    t16 = t15;
    t17 = t3;
    t18 = 0x0;
    u22 = f4;
    for (;;) {
        t23 = *(int *)0xC26E104;
        if ((int)t18 >= (int)t23) {
            break;
        }
        t16 = 0xC;
        t24 = 0;
        for (; t24 < (int)t16; t24++) *(unsigned char *)(((int)stk + 16) + t24) = *(unsigned char *)((t17 + 0x4) + t24);
        t16 = 0x4;
        *(float *)((((int)stk + 16) + t16)) = 0.0f;
        t25 = nlLength(((int)stk + 16), (((int)stk + 16) + 0x30));
        t16 = t25;
        u26 = *(float *)((t17 + 0x0));
        u20 = u26;
        u27 = *(float *)0xC0EA3E0;
        u21 = u27;
        u19 = t25;
        u22 = t25;
        u20 = (u20 + u21);
        if (u20 > u22) {
            t28 = nlPrintf(0xC08D434, t18);
            t16 = t28;
        } else {
            u29 = u19;
            u30 = u20;
            u31 = u21;
            u32 = u22;
        }
        u19 = u29;
        u20 = u30;
        u21 = u31;
        u22 = u32;
        t18 = (t18 + 0x1);
        t17 = (t17 + 0x14);
    }
    t35 = nlPrintf(0xC08D43C);
    t36 = *(int *)0xC1EE804;
    t37 = t35;
    t38 = 0x0;
    t39 = t36;
    u43 = f4;
    for (;;) {
        t44 = *(int *)0xC26E108;
        if ((int)t38 >= (int)t44) {
            break;
        }
        t37 = 0xC;
        t45 = 0;
        for (; t45 < (int)t37; t45++) *(unsigned char *)(((int)stk + 16) + t45) = *(unsigned char *)((t39 + 0x4) + t45);
        t37 = 0x4;
        *(float *)((((int)stk + 16) + t37)) = 0.0f;
        t46 = nlLength(((int)stk + 16), (((int)stk + 16) + 0x30));
        u40 = t46;
        u47 = *(float *)((t39 + 0x0));
        u41 = u47;
        u48 = *(float *)0xC0EA3E0;
        u42 = u48;
        u43 = u40;
        u41 = (u41 + u42);
        if (u41 > u43) {
            t49 = nlPrintf(0xC08D434, t38);
            t37 = t49;
            t50 = t37;
        } else {
            u51 = u40;
            u52 = u41;
            u53 = u42;
            u54 = u43;
        }
        u40 = u51;
        u41 = u52;
        u42 = u53;
        u43 = u54;
        t37 = t50;
        t38 = (t38 + 0x1);
        t39 = (t39 + 0x14);
    }
    t57 = nlPrintColor(0xFFFFFFFF);
    return t57;
}
