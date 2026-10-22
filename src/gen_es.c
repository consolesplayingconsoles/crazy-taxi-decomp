/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c04a090(int, int, int, int, int, float);
int FUN_0c157ba0(int, int);
int FUN_0c157d20(int);
int FUN_0c157d58(int, int);
int gdc_CourseReq(int, int, float);
int getCoursePointMove(int, int, int);
int kmiFBfree(int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
float FUN_0c048adc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
float gdc_CoursePointLoadReq(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmiVQFBfree(int a4, int a5);

float FUN_0c048adc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
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
    FUN_0c04a090(0x2, 0x0, (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x2C), a5, f4);
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

float gdc_CoursePointLoadReq(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float u11;
    int t12;
    float u24;
    float u25;
    float u26;
    int t13;
    float t14;
    float u15;
    int t16;
    int t28;
    float t29;
    float u30;
    int t31;
    int t45;
    int t46;
    int t47;
    float u50;
    int t51;
    int t52;
    float t53;
    float u54;
    int t55;
    int t72;
    int t73;
    int t74;
    float u77;
    int t78;
    int t79;
    float t80;
    float u81;
    int t82;
    int t99;
    int t100;
    int t101;
    int t102;
    float u103;
    float u104;
    float u105;
    int t106;
    int t107;
    float t108;
    float u109;
    int t110;
    int t89;
    float u96;
    float u97;
    float u98;
    int t62;
    float u69;
    float u70;
    float u71;
    float u9;
    float u10;
    int t37;
    int t38;
    int t39;
    float u41;
    float u42;
    float u43;
    int t21;
    int t22;
    float u17;
    float u18;
    float u19;
    int t32;
    float u33;
    float u34;
    float u35;
    float u48;
    float u49;
    int t56;
    float u57;
    float u58;
    float u59;
    float u75;
    float u76;
    int t83;
    float u84;
    float u85;
    float u86;
    int t111;
    float u112;
    float u113;
    float u114;
    int stk[17] = {0};

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    t1 = *(int *)0xC1EE234;
    t2 = *(int *)0xC1EE800;
    if (t1 == 0) {
        t3 = *(int *)0xC1EE20C;
        if (t3 == 1) {
            t4 = t3;
            t5 = 0xC1EE234;
            t6 = 0xC1EE20C;
            t7 = 0x0;
            t8 = t2;
            u11 = f4;
            for (;;) {
                t12 = *(int *)0xC26E104;
                if ((int)t7 >= (int)t12) {
                    break;
                }
                if ((int)t7 >= (int)0x9) {
                    t6 = 0x1C;
                    u24 = u9;
                    u25 = u10;
                    u26 = u11;
                    if ((int)t7 > (int)t6) {
                        t6 = t8;
                        t5 = ((int)stk + 4);
                        t6 = (t6 + 0x4);
                        t4 = 0xC;
                        t13 = 0;
                        for (; t13 < (int)t4; t13++) *(unsigned char *)(t5 + t13) = *(unsigned char *)(t6 + t13);
                        t4 = 0x4;
                        *(float *)((((int)stk + 4) + t4)) = 0.0f;
                        t14 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
                        t4 = t14;
                        u15 = *(float *)((t8 + 0x0));
                        u10 = u15;
                        u9 = t14;
                        u11 = t14;
                        u10 = (u10 + f4);
                        if (u10 > u11) {
                            t16 = gdc_CourseReq(t7, 0x0, u11);
                            t4 = t16;
                        } else {
                            u17 = u9;
                            u18 = u10;
                            u19 = u11;
                        }
                        u24 = u17;
                        u25 = u18;
                        u26 = u19;
                    } else {
                        t21 = t5;
                        t22 = t6;
                    }
                    t37 = t4;
                    t38 = t21;
                    t39 = t22;
                    u41 = u24;
                    u42 = u25;
                    u43 = u26;
                } else {
                    t6 = t8;
                    t5 = ((int)stk + 4);
                    t6 = (t6 + 0x4);
                    t4 = 0xC;
                    t28 = 0;
                    for (; t28 < (int)t4; t28++) *(unsigned char *)(t5 + t28) = *(unsigned char *)(t6 + t28);
                    t4 = 0x4;
                    *(float *)((((int)stk + 4) + t4)) = 0.0f;
                    t29 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
                    u9 = t29;
                    u30 = *(float *)((t8 + 0x0));
                    u10 = u30;
                    u11 = u9;
                    u10 = (u10 + f4);
                    if (u10 > u11) {
                        t31 = gdc_CourseReq(t7, 0x0, u11);
                        t4 = t31;
                        t32 = t4;
                    } else {
                        u33 = u9;
                        u34 = u10;
                        u35 = u11;
                    }
                    t37 = t32;
                    u41 = u33;
                    u42 = u34;
                    u43 = u35;
                }
                u9 = u41;
                u10 = u42;
                u11 = u43;
                t4 = t37;
                t5 = t38;
                t7 = (t7 + 0x1);
                t6 = t39;
                t8 = (t8 + 0x14);
            }
            t62 = t4;
            u69 = u9;
            u70 = u10;
            u71 = u11;
        } else {
            t45 = t3;
            t46 = 0x0;
            t47 = t2;
            u50 = f4;
            for (;;) {
                t51 = *(int *)0xC26E104;
                if ((int)t46 >= (int)t51) {
                    break;
                }
                t45 = 0xC;
                t52 = 0;
                for (; t52 < (int)t45; t52++) *(unsigned char *)(((int)stk + 4) + t52) = *(unsigned char *)((t47 + 0x4) + t52);
                t45 = 0x4;
                *(float *)((((int)stk + 4) + t45)) = 0.0f;
                t53 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
                u48 = t53;
                u54 = *(float *)((t47 + 0x0));
                u49 = u54;
                u50 = u48;
                u49 = (u49 + f4);
                if (u49 > u50) {
                    t55 = gdc_CourseReq(t46, 0x0, u50);
                    t45 = t55;
                    t56 = t45;
                } else {
                    u57 = u48;
                    u58 = u49;
                    u59 = u50;
                }
                u48 = u57;
                u49 = u58;
                u50 = u59;
                t45 = t56;
                t46 = (t46 + 0x1);
                t47 = (t47 + 0x14);
            }
            t62 = t45;
            u69 = u48;
            u70 = u49;
            u71 = u50;
        }
        t89 = t62;
        u96 = u69;
        u97 = u70;
        u98 = u71;
    } else {
        t72 = 0x34;
        t73 = 0x0;
        t74 = t2;
        u77 = f4;
        for (;;) {
            t78 = *(int *)0xC26E104;
            if ((int)t73 >= (int)t78) {
                break;
            }
            t72 = 0xC;
            t79 = 0;
            for (; t79 < (int)t72; t79++) *(unsigned char *)(((int)stk + 4) + t79) = *(unsigned char *)((t74 + 0x4) + t79);
            t72 = 0x4;
            *(float *)((((int)stk + 4) + t72)) = 0.0f;
            t80 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
            u75 = t80;
            u81 = *(float *)((t74 + 0x0));
            u76 = u81;
            u77 = u75;
            u76 = (u76 + f4);
            if (u76 > u77) {
                t82 = gdc_CourseReq(t73, 0x0, u77);
                t72 = t82;
                t83 = t72;
            } else {
                u84 = u75;
                u85 = u76;
                u86 = u77;
            }
            u75 = u84;
            u76 = u85;
            u77 = u86;
            t72 = t83;
            t73 = (t73 + 0x1);
            t74 = (t74 + 0x14);
        }
        t89 = t72;
        u96 = u75;
        u97 = u76;
        u98 = u77;
    }
    t99 = *(int *)0xC1EE804;
    t100 = t89;
    t101 = t99;
    t102 = 0x0;
    u103 = u96;
    u104 = u97;
    u105 = u98;
    for (;;) {
        t106 = *(int *)0xC26E108;
        if ((int)t102 >= (int)t106) {
            break;
        }
        t100 = 0xC;
        t107 = 0;
        for (; t107 < (int)t100; t107++) *(unsigned char *)(((int)stk + 4) + t107) = *(unsigned char *)((t101 + 0x4) + t107);
        t100 = 0x4;
        *(float *)((((int)stk + 4) + t100)) = 0.0f;
        t108 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
        u103 = t108;
        u109 = *(float *)((t101 + 0x0));
        u104 = u109;
        u105 = u103;
        u104 = (u104 + f4);
        if (u104 > u105) {
            t110 = gdc_CourseReq(t102, 0x1, u105);
            t100 = t110;
            t111 = t100;
        } else {
            u112 = u103;
            u113 = u104;
            u114 = u105;
        }
        u103 = u112;
        u104 = u113;
        u105 = u114;
        t100 = t111;
        t102 = (t102 + 0x1);
        t101 = (t101 + 0x14);
    }
    return u103;
}

