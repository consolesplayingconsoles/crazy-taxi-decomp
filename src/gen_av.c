/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(void);
int ADXT_Stop(void);
int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int FUN_0c1534e8(int, int, int);
int FUN_0c153530(int, int, int, int);
int nlAddVector(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);

int ADXT_StartSj(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;

    ADXT_Stop();
    ADXCRS_Lock();
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((a4 + 0x3));
        if ((int)t2 >= (int)t3) break;
        t4 = *(int *)((((t2 << 2) + (a4 + 0x18)) + 0x0));
        t5 = *(int *)((t4 + 0x0));
        t6 = *(int *)((t5 + 0x14));
        t7 = ((int (*)(int))(t6))(t4);
        t2 = (t2 + 0x1);
    }
    t8 = *(int *)((a4 + 0x4));
    ADXSJD_SetInSj(t8, a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    t10 = *(int *)((a4 + 0x4));
    ADXSJD_Start();
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x3;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    return ADXCRS_Unlock();
}

int signalInit(int a4, int a5)
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
    int t12;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;

    t0 = set_event(0x8C, 0xC0496FC);
    if (t0 == 0) {
        return t0;
    }
    if ((a5 & 0x1) != 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((t0 + 0x14)) = 0x1000;
    }
    *(unsigned int *)((t0 + 0x84)) = 0x258;
    t1 = *(int *)((t0 + 0x84));
    *(unsigned int *)((t0 + 0x88)) = t1;
    t2 = *(int *)(((a4 << 2) + 0xC0F2B18));
    t3 = 0xC0F2B18;
    t4 = 0x0;
    do {
        t5 = *(int *)((((t2 + ((((a5 << 1) + a5) << 2) << 2)) + (t4 << 2)) + 0x0));
        *(unsigned int *)((((t0 + 0x18) + (t4 << 2)) + 0x0)) = t5;
        t6 = *(int *)((((t0 + 0x18) + (t4 << 2)) + 0x0));
        if ((int)t6 >= 0) {
            t7 = *(int *)0xC2A6690;
            t3 = t7;
            t8 = *(int *)((((t0 + 0x18) + (t4 << 2)) + 0x0));
            t9 = *(int *)((((((t8 << 1) + t8) << 2) + t3) + 0x4));
            t10 = *(int *)((t9 + 0x0));
            t3 = t10;
            t3 = (t3 - 2);
            *(unsigned int *)((((t0 + 0x48) + (t4 << 2)) + 0x0)) = t3;
        } else {
            t12 = *(int *)((((t0 + 0x18) + (t4 << 2)) + 0x0));
            *(unsigned int *)((((t0 + 0x48) + (t4 << 2)) + 0x0)) = (-t12);
            if ((t4 & 0x1) == 0) {
                *(unsigned int *)((((t0 + 0x18) + (t4 << 2)) + 0x0)) = 0x120;
            } else {
                *(unsigned int *)((((t0 + 0x18) + (t4 << 2)) + 0x0)) = 0x121;
            }
        }
        t4 = (t4 + 0x1);
    } while ((int)t4 < (int)0xC);
    t19 = *(int *)((t0 + 0x18));
    t20 = *(int *)0xC2A6690;
    t21 = *(int *)(((t0 + 0x48) + 0x0));
    t22 = *(int *)((((((t19 << 1) + t19) << 2) + t20) + 0x0));
    t23 = *(int *)(((t22 + (((t21 << 1) + t21) << 2)) + 0x8));
    *(unsigned int *)(((t0 + 0x78) + 0x8)) = t23;
    t24 = *(int *)(((t22 + (((t21 << 1) + t21) << 2)) + 0x4));
    *(unsigned int *)(((t0 + 0x78) + 0x4)) = t24;
    t25 = *(int *)(((t22 + (((t21 << 1) + t21) << 2)) + 0x0));
    *(unsigned int *)(((t0 + 0x78) + 0x0)) = t25;
    t26 = *(int *)((t0 + 0x30));
    t27 = *(int *)0xC2A6690;
    t28 = *(int *)((t0 + 0x60));
    t29 = *(int *)((((((t26 << 1) + t26) << 2) + t27) + 0x0));
    nlAddVector((t0 + 0x78), (t29 + (((t28 << 1) + t28) << 2)));
    return nlScaleVector((t0 + 0x78), (t0 + 0x78), 0.5f);
}

void kmiProcessVertex_05(int a4)
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
    int t16;
    int t17;
    float u18;
    float u19;
    float u20;
    float u21;
    int t22;
    float u23;
    float u24;
    float u25;
    float u26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    float u40;
    float u41;
    float u42;
    float u43;
    int t44;
    float u45;
    float u46;
    float u47;
    float u48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    float u62;
    float u63;
    float u64;
    float u65;
    int t66;
    float u67;
    float u68;
    float u69;
    float u70;
    int t71;
    int t72;
    int t74;
    int t75;
    int stk[13];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t12;
    t13 = *(int *)(((int)stk + 4));
    t14 = *(int *)((t12 + 0x14));
    t15 = *(int *)((t13 + 0x10));
    t16 = FUN_0c153530(t3, 0x6, t15, t14);
    t17 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u18 = *(float *)(((0x20 + t17) + 0x0));
    u19 = *(float *)(((0x24 + t17) + 0x0));
    u20 = *(float *)(((0x28 + t17) + 0x0));
    u21 = *(float *)(((0x2C + t17) + 0x0));
    *(unsigned int *)(((t16 << 2) + 0xC2EA724)) = ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u19 * 255.0f) << 16)) | ((int)(u20 * 255.0f) << 8)) | (int)(u21 * 255.0f));
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u23 = *(float *)((t22 + 0x30));
    u24 = *(float *)((t22 + 0x34));
    u25 = *(float *)((t22 + 0x38));
    u26 = *(float *)((t22 + 0x3C));
    t27 = FUN_0c1534e8(t3, (t16 + 0x1), ((((((int)(u23 * 255.0f) << 16) << 8) | ((int)(u24 * 255.0f) << 16)) | ((int)(u25 * 255.0f) << 8)) | (int)(u26 * 255.0f)));
    t28 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t29 = *(int *)((t28 + 0x4));
    *(unsigned int *)(((t27 << 2) + 0xC2EA724)) = t29;
    t30 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t31 = *(int *)((t30 + 0x8));
    *(unsigned int *)((((t27 + 0x1) << 2) + 0xC2EA724)) = t31;
    t32 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t33 = *(int *)((t32 + 0xC));
    *(unsigned int *)(((((t27 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t33;
    t34 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t34;
    t35 = *(int *)(((int)stk + 4));
    t36 = *(int *)((t34 + 0x14));
    t37 = *(int *)((t35 + 0x10));
    t38 = FUN_0c153530(t3, (((t27 + 0x1) + 0x1) + 0x1), t37, t36);
    t39 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    u40 = *(float *)(((0x20 + t39) + 0x0));
    u41 = *(float *)(((0x24 + t39) + 0x0));
    u42 = *(float *)(((0x28 + t39) + 0x0));
    u43 = *(float *)(((0x2C + t39) + 0x0));
    *(unsigned int *)(((t38 << 2) + 0xC2EA724)) = ((((((int)(u40 * 255.0f) << 16) << 8) | ((int)(u41 * 255.0f) << 16)) | ((int)(u42 * 255.0f) << 8)) | (int)(u43 * 255.0f));
    t44 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    u45 = *(float *)((t44 + 0x30));
    u46 = *(float *)((t44 + 0x34));
    u47 = *(float *)((t44 + 0x38));
    u48 = *(float *)((t44 + 0x3C));
    t49 = FUN_0c1534e8(t3, (t38 + 0x1), ((((((int)(u45 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u47 * 255.0f) << 8)) | (int)(u48 * 255.0f)));
    t50 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t51 = *(int *)((t50 + 0x4));
    *(unsigned int *)(((t49 << 2) + 0xC2EA724)) = t51;
    t52 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t53 = *(int *)((t52 + 0x8));
    *(unsigned int *)((((t49 + 0x1) << 2) + 0xC2EA724)) = t53;
    t54 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t55 = *(int *)((t54 + 0xC));
    *(unsigned int *)(((((t49 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t55;
    t56 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t56;
    t57 = *(int *)(((int)stk + 4));
    t58 = *(int *)((t56 + 0x14));
    t59 = *(int *)((t57 + 0x10));
    t60 = FUN_0c153530(t3, (((t49 + 0x1) + 0x1) + 0x1), t59, t58);
    t61 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    u62 = *(float *)(((0x20 + t61) + 0x0));
    u63 = *(float *)(((0x24 + t61) + 0x0));
    u64 = *(float *)(((0x28 + t61) + 0x0));
    u65 = *(float *)(((0x2C + t61) + 0x0));
    *(unsigned int *)(((t60 << 2) + 0xC2EA724)) = ((((((int)(u62 * 255.0f) << 16) << 8) | ((int)(u63 * 255.0f) << 16)) | ((int)(u64 * 255.0f) << 8)) | (int)(u65 * 255.0f));
    t66 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    u67 = *(float *)((t66 + 0x30));
    u68 = *(float *)((t66 + 0x34));
    u69 = *(float *)((t66 + 0x38));
    u70 = *(float *)((t66 + 0x3C));
    t71 = FUN_0c1534e8(t3, (t60 + 0x1), ((((((int)(u67 * 255.0f) << 16) << 8) | ((int)(u68 * 255.0f) << 16)) | ((int)(u69 * 255.0f) << 8)) | (int)(u70 * 255.0f)));
    *(unsigned int *)0xC2EA81C = (t71 << 2);
    t72 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t72, 0x0, 0x0);
    t74 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t75 = *(int *)((t74 + 0xC));
    *(unsigned int *)0xC2EA830 = t75;
}
