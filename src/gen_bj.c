/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Model_Put_Sprite3D(int, int, int, float);
int Result_Class_Shadow_Put(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_init_memory(void);
int mpdrv_memset_l(int, int, int);
int mpdrv_swapmode(int);
int nlAddVector(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSprPut(int, int);
int Put_Time_Spark(int a4);
int Result_Awesome_Put(void);
int mpdrv_init_globals(void);

int Put_Time_Spark(int a4)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u8;
    float u9;
    float u10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t23;
    int stk[8] = {0};

    nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    nlPushMatrix(0x0);
    t2 = *(signed char *)(((a4 + 0x30) + 0x0));
    *(unsigned char *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(signed char *)(((a4 + 0x30) + 0x1));
    *(unsigned char *)((((int)stk + 4) + 0x1)) = t3;
    t4 = *(signed char *)(((a4 + 0x30) + 0x2));
    *(unsigned char *)((((int)stk + 4) + 0x2)) = t4;
    t5 = *(signed char *)(((a4 + 0x30) + 0x3));
    *(unsigned char *)((((int)stk + 4) + 0x3)) = t5;
    t6 = *(signed char *)(((a4 + 0x30) + 0x4));
    *(unsigned char *)((((int)stk + 4) + 0x4)) = t6;
    t7 = *(signed char *)(((a4 + 0x30) + 0x5));
    *(unsigned char *)((((int)stk + 4) + 0x5)) = t7;
    u8 = *(float *)0xC057354;
    u9 = *(float *)((a4 + 0x1C));
    u10 = *(float *)((a4 + 0x18));
    Model_Put_Sprite3D((int)u10, (int)u9, 0xC0EAC20, u8);
    t12 = *(signed char *)(((a4 + 0x30) + 0x0));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = t12;
    t13 = *(signed char *)(((a4 + 0x30) + 0x1));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = t13;
    t14 = *(signed char *)(((a4 + 0x30) + 0x2));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x2)) = t14;
    t15 = *(signed char *)(((a4 + 0x30) + 0x3));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x3)) = t15;
    t16 = *(signed char *)(((a4 + 0x30) + 0x4));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x4)) = t16;
    t17 = *(signed char *)(((a4 + 0x30) + 0x5));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x5)) = t17;
    t18 = *(short *)(((((int)stk + 4) + 0x8) + 0x2));
    *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x2)) = (t18 + 0x8000);
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x18), (a4 + 0x24));
    t21 = *(short *)(((0x36 + a4) + 0x0));
    t22 = *(short *)((a4 + 0x32));
    *(unsigned short *)((a4 + 0x32)) = (t22 + t21);
    t23 = ResetFadeColor();
    return t23;
}

int Result_Awesome_Put(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t12;
    int t13;
    int t17;
    float u18;
    float u19;
    int t20;
    int t21;
    int t22;
    float u28;
    int t29;

    t0 = 0xC05AAA4;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2A985C;
        if ((int)t2 > (int)(((t1 << 2) << 1) - t1)) {
            t3 = *(int *)0xC2A985C;
            if ((int)t3 < (int)0x31) {
                t4 = *(int *)0xC2A985C;
                t0 = 0x7;
                t5 = (int)((int)t4 % (int)t0);
                t0 = t5;
                if (t0 == 0) {
                    t6 = Sound_Request(0xA00A9, 0x0);
                    t0 = t6;
                    t7 = *(int *)0xC2A9870;
                    *(unsigned int *)0xC2A9870 = (t7 + 0x1);
                    *(unsigned int *)0xC2A9754 = 0x1;
                    *(unsigned short *)0xC2A9750 = 0x0;
                    *(float *)0xC2A974C = 0.5f;
                    *(float *)0xC2A9758 = 0.0f;
                }
            }
            t0 = 0xC131010;
            t12 = *(int *)(((t1 << 2) + t0));
            *(unsigned int *)0xC2A96F8 = t12;
            if ((int)t1 > (int)0x3) {
                t0 = 0x4;
                *(float *)((0xC2A96F8 + t0)) = (float)(((((((t1 - 2) << 2) << 2) << 1) - (((t1 - 3) << 1) + (t1 - 3))) + (t1 << 1)) + 0x8E);
            } else {
                t0 = t1;
                t13 = 0x9C;
                if (t0 == 3) {
                    t13 = 0x92;
                }
                t0 = 0x4;
                *(float *)((0xC2A96F8 + t0)) = (float)((((((t1 - 2) << 2) << 2) << 1) + (t1 << 1)) + t13);
            }
            t0 = 0x8;
            *(unsigned int *)0xC2A972C = 0x200A;
            t17 = *(int *)0xC2A9748;
            *(float *)((0xC2A96F8 + t0)) = (float)(t17 + 0x18C);
            t0 = 0xC;
            *(float *)((0xC2A96F8 + t0)) = 0.149999991f;
            t0 = 0x10;
            u18 = *(float *)0xC2A9758;
            *(float *)((0xC2A96F8 + t0)) = (u18 + 1.0f);
            t0 = 0x14;
            u19 = *(float *)0xC2A9758;
            *(float *)((0xC2A96F8 + t0)) = (u19 + 1.0f);
            t0 = 0x1C;
            *(float *)((0xC2A96F8 + t0)) = 0.0f;
            t0 = 0x24;
            *(float *)((0xC2A96F8 + t0)) = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
            t20 = nlSprPut(0xC2A96F8, (t1 << 1));
            t0 = t20;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x7) continue;
        break;
    }
    t21 = *(int *)0xC2A985C;
    if ((int)t21 >= (int)0x31) {
        if (t21 == 49) {
            t22 = *(int *)0xC2A9874;
            *(unsigned int *)0xC2A9874 = (t22 + 0x1);
            Sound_Request(0xE00A9, 0x0);
            *(unsigned int *)0xC2A9754 = 0x1;
            *(unsigned short *)0xC2A9750 = 0x0;
            *(float *)0xC2A974C = 0.5f;
            *(float *)0xC2A9758 = 0.0f;
        }
        Result_Class_Shadow_Put();
    }
    u28 = *(float *)0xC05AC3C;
    *(float *)0xC2A9704 = u28;
    t29 = *(int *)0xC2A985C;
    *(unsigned int *)0xC2A985C = (t29 + 0x1);
    return 0xC;
}

int mpdrv_init_globals(void)
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
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
    int t40;
    int t41;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
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
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t72;
    int stk[11] = {0};

    t0 = *(int *)0xC2FA538;
    *(unsigned int *)((t0 + 0x10B4)) = 0x0;
    t1 = *(int *)0xC2FA538;
    *(unsigned int *)((t1 + 0x10B8)) = 0x0;
    t2 = 0x0;
    t3 = 0x6000;
    t4 = 0x0;
    do {
        t5 = *(int *)0xC2FA538;
        t6 = *(int *)((t5 + 0xFC8));
        *(unsigned int *)((((0xFE8 + t5) + t2) + 0x0)) = (t6 + t4);
        t7 = *(int *)0xC2FA538;
        t8 = *(int *)((t7 + 0xFC8));
        t9 = ((0xFE8 + t7) + t2);
        t2 = (t2 + 0x4);
        *(unsigned int *)(((t9 + 0x60) + 0x0)) = (t8 + t3);
        t3 = (t3 + 0x400);
        t4 = (t4 + 0x400);
    } while ((unsigned int)t2 < (unsigned int)0x60);
    t11 = *(int *)0xC2FA538;
    t12 = *(int *)((t11 + 0xFC4));
    *(unsigned int *)((t11 + 0x10A8)) = t12;
    t13 = *(int *)0xC2FA538;
    t14 = *(int *)((t13 + 0xFC4));
    *(unsigned int *)((t13 + 0x10AC)) = (t14 + 0x3000);
    t15 = *(int *)0xC2FA538;
    t16 = *(int *)((t15 + 0x10A8));
    *(unsigned int *)((t15 + 0xFCC)) = t16;
    t17 = *(int *)0xC2FA538;
    mpdrv_memset_l((t17 + 0x4), 0x0, 0x8);
    t19 = *(int *)0xC2FA538;
    mpdrv_memset_l((t19 + 0x28), 0x0, 0x108);
    t21 = 0x0;
    do {
        t22 = *(int *)0xC2FA538;
        mpdrv_clear_deviceinfo(((t22 + 0x44C) + t21));
        t21 = (t21 + 0x78);
    } while ((unsigned int)t21 < (unsigned int)0xB40);
    t24 = 0x0;
    do {
        t25 = *(int *)0xC2FA538;
        t26 = ((0xF90 + t25) + t24);
        t24 = (t24 + 0x1);
        *(unsigned char *)((t26 + 0x0)) = 0x0;
    } while ((int)t24 < (int)0x18);
    t27 = *(signed char *)0xC1768EC;
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = t27;
    t28 = *(signed char *)0xC1768ED;
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = t28;
    t29 = *(signed char *)0xC1768EE;
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = t29;
    t30 = *(signed char *)0xC1768EF;
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = t30;
    t31 = *(int *)0xA05F689C;
    t32 = 0xF;
    if ((int)(unsigned char)t31 <= (int)0x1) {
        t32 = 0x7;
    }
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4) + 0x4);
    t33 = 0xA05F689C;
    t34 = ((((int)stk + 4) + 0x4) + 0x4);
    t35 = (((int)stk + 4) + 0x4);
    t36 = 0x0;
    t37 = 0x0;
    t38 = t21;
    do {
        t39 = *(signed char *)((t35 + 0x0));
        if ((t39 & (signed char)t32) != 0) {
            t34 = t37;
            t40 = *(int *)0xC2FA538;
            t33 = t40;
            t34 = (t34 + 0x1);
            t38 = 0x0;
            *(unsigned char *)((((0xF90 + t33) + t36) + 0x0)) = 0x52;
            do {
                t38 = (t38 + 0x1);
                t41 = *(int *)0xC2FA538;
                t33 = t41;
                *(unsigned char *)((((0xF90 + t33) + t34) + 0x0)) = 0x45;
                t34 = (t34 + 0x1);
            } while ((int)t38 < (int)0x5);
        }
        t44 = *(int *)(((int)stk + 4));
        t35 = (t35 + 0x1);
        t37 = (t37 + 0x6);
        t36 = (t36 + 0x6);
    } while ((unsigned int)t35 < (unsigned int)t44);
    t45 = *(int *)0xC2FA538;
    *(unsigned int *)((t45 + 0x10C0)) = 0xC3500000;
    t46 = *(int *)0xC2FA538;
    *(unsigned int *)((t46 + 0xFDC)) = 0x0;
    t47 = *(int *)0xC2FA538;
    *(unsigned int *)((t47 + 0xFD8)) = 0x0;
    t48 = *(int *)0xC2FA538;
    *(unsigned int *)((t48 + 0xFE0)) = 0x1;
    t49 = *(int *)0xC2FA538;
    *(unsigned int *)((t49 + 0x10C8)) = 0x0;
    t50 = *(int *)0xC2FA538;
    *(unsigned int *)((t50 + 0x10EC)) = 0x0;
    t51 = *(int *)0xC2FA538;
    *(unsigned int *)((t51 + 0x10E8)) = 0x0;
    t52 = *(int *)0xC2FA538;
    *(unsigned int *)((t52 + 0x10CC)) = 0x5;
    t53 = *(int *)0xC2FA538;
    *(unsigned int *)((t53 + 0x10D0)) = 0x0;
    t54 = *(int *)0xC2FA538;
    *(unsigned int *)((t54 + 0x10D8)) = 0xA;
    t55 = *(int *)0xC2FA538;
    *(unsigned int *)((t55 + 0x10DC)) = 0x5;
    t56 = *(int *)0xC2FA538;
    *(unsigned int *)((t56 + 0x10E0)) = 0x0;
    t57 = *(int *)0xC2FA538;
    *(unsigned int *)((t57 + 0x10E4)) = 0x0;
    t58 = *(int *)0xC2FA538;
    *(unsigned int *)((t58 + 0xFAC)) = 0x0;
    t59 = *(int *)0xC2FA538;
    *(unsigned int *)((t59 + 0xFB0)) = 0x0;
    t60 = *(int *)0xC2FA538;
    *(unsigned int *)((t60 + 0xFBC)) = 0x0;
    t61 = *(int *)0xC2FA538;
    *(unsigned int *)((t61 + 0x0)) = 0x54524F50;
    t62 = *(int *)0xC2FA538;
    *(unsigned int *)((t62 + 0x24)) = 0x20564544;
    t63 = *(int *)0xC2FA538;
    *(unsigned int *)((t63 + 0x448)) = 0x4F464E49;
    t64 = *(int *)0xC2FA538;
    *(unsigned int *)((t64 + 0xF8C)) = 0x4C424E45;
    t65 = *(int *)0xC2FA538;
    *(unsigned int *)((t65 + 0xFA8)) = 0x54415453;
    t66 = *(int *)0xC2FA538;
    *(unsigned int *)((t66 + 0xFE4)) = 0x52444152;
    t67 = *(int *)0xC2FA538;
    *(unsigned int *)((t67 + 0x10BC)) = 0x54554F54;
    t68 = *(int *)0xC2FA538;
    *(unsigned int *)((t68 + 0x10D4)) = 0x43515244;
    t69 = *(int *)0xC2FA538;
    *(unsigned int *)((t69 + 0x10F0)) = 0x434E5546;
    t70 = *(int *)0xC2FA538;
    *(unsigned int *)((t70 + 0x10F8)) = 0x20444E45;
    mpdrv_swapmode(0x0);
    t72 = mpdrv_init_memory();
    return t72;
}

