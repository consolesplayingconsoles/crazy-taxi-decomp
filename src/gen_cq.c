/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Pass_Rideoff(void);
int Start_Pass_Judgement(int);
int Result_Check_Digit_Disp(int);
int nlSpriteF2ARGB(int, int, float, float, float, float);
float nlFastSin(int);
int kmiFBFitBlock(int, int);
int kmiFBSearchFree(int, int, int);
int GetMenuMode(int);
int Sound_Request(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int free(void);
float nlCos(int);
int nlGetMatrix(int);
int nlLoadMatrix(int, int);
float nlScalor(int);
float nlSin(int);
int nlSprPutPosSet(float, float, float, float);
int nlSpriteF2C(float);
int nlsndIcsControl(int, int, int);
int GS_GuestOut(void);
int syMalloc_default_realloc(int a4, int a5);
int Init_DramRoll(void);
int kmiFBallocSub(int a4, int a5);
int InitSetObject(float f4);
int Result_Money_Digit_Put(void);
float nlLUDecomp(int a4, int a5, float f4, float f5);
int exec_CarSound(int a4);
int nlSprPut(int a4);


int syMalloc_default_realloc(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t18;
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
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t16;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)(((a4 - 32) + 0x4));
    t3 = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    if ((unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1) > (unsigned int)t1) {
        t2 = *(int *)(((a4 - 32) + 0x4));
        t3 = t2;
    }
    free();
    t5 = *(int *)0xC2B9358;
    t6 = *(int *)((t5 + 0x0));
    t7 = t6;
    t8 = t5;
    for (;;) {
        t9 = *(int *)((t7 + 0x4));
        if ((unsigned int)t9 >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) break;
        if (t7 == t5) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t8 = t7;
        t10 = *(int *)((t7 + 0x0));
        t7 = t10;
    }
    t11 = *(int *)((t7 + 0x4));
    if (t11 == (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        t12 = *(int *)((t7 + 0x0));
        *(unsigned int *)((t8 + 0x0)) = t12;
        t16 = t7;
    } else {
        *(unsigned int *)((t7 + 0x4)) = (t11 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        t16 = (t7 + ((((t11 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    if (a4 != (t16 + 0x20)) {
        if ((unsigned int)a4 < (unsigned int)(t16 + 0x20)) {
            if ((unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20) > (unsigned int)(t16 + 0x20)) {
                t17 = (((((t3 << 2) << 2) << 1) + t16) + 0x20);
                t18 = a4;
                do {
                    t19 = t18;
                    t18 = (t18 - 32);
                    t20 = t17;
                    t17 = (t17 - 32);
                    t21 = *(int *)((t19 + 0x1C));
                    *(unsigned int *)((t20 + 0x1C)) = t21;
                    t22 = *(int *)((t19 + 0x18));
                    *(unsigned int *)((t20 + 0x18)) = t22;
                    t23 = *(int *)((t19 + 0x14));
                    *(unsigned int *)((t20 + 0x14)) = t23;
                    t24 = *(int *)((t19 + 0x10));
                    *(unsigned int *)((t20 + 0x10)) = t24;
                    t25 = *(int *)((t19 + 0xC));
                    *(unsigned int *)((t20 + 0xC)) = t25;
                    t26 = *(int *)((t19 + 0x8));
                    *(unsigned int *)((t20 + 0x8)) = t26;
                    t27 = *(int *)((t19 + 0x4));
                    *(unsigned int *)((t20 + 0x4)) = t27;
                    t28 = *(int *)((t19 + 0x0));
                    *(unsigned int *)((t20 + 0x0)) = t28;
                } while ((unsigned int)t17 > (unsigned int)(t16 + 0x20));
            }
        } else {
            if ((unsigned int)a4 > (unsigned int)(t16 + 0x20)) {
                if ((unsigned int)(t16 + 0x20) < (unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20)) {
                    t34 = (t16 + 0x20);
                    t35 = a4;
                    do {
                        t36 = t35;
                        t35 = (t35 + 0x20);
                        t37 = t34;
                        t34 = (t34 + 0x20);
                        t38 = *(int *)((t36 + 0x1C));
                        *(unsigned int *)((t37 + 0x1C)) = t38;
                        t39 = *(int *)((t36 + 0x18));
                        *(unsigned int *)((t37 + 0x18)) = t39;
                        t40 = *(int *)((t36 + 0x14));
                        *(unsigned int *)((t37 + 0x14)) = t40;
                        t41 = *(int *)((t36 + 0x10));
                        *(unsigned int *)((t37 + 0x10)) = t41;
                        t42 = *(int *)((t36 + 0xC));
                        *(unsigned int *)((t37 + 0xC)) = t42;
                        t43 = *(int *)((t36 + 0x8));
                        *(unsigned int *)((t37 + 0x8)) = t43;
                        t44 = *(int *)((t36 + 0x4));
                        *(unsigned int *)((t37 + 0x4)) = t44;
                        t45 = *(int *)((t36 + 0x0));
                        *(unsigned int *)((t37 + 0x0)) = t45;
                    } while ((unsigned int)t34 < (unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20));
                }
            }
        }
    }
    *(unsigned int *)((t16 + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    *(unsigned int *)0xC2B9358 = t8;
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}





float nlLUDecomp(int a4, int a5, float f4, float f5)
{
    int t2;
    int t0;
    int t4;
    int t5;
    int t6;
    float u7;
    float u8;
    int t9;
    int t10;
    float u11;
    int t12;
    float u13;
    float u14;
    int t19;
    int t20;
    float u23;
    int t24;
    int t25;
    int t26;
    float u27;
    float u28;
    int t29;
    int t30;
    float u31;
    int t32;
    float u33;
    float u34;
    int t37;
    int t38;
    int t39;
    float u40;
    int t42;
    int t1;
    int t3;
    float u17;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t0 = nlGetMatrix(0x0);
        t1 = t0;
        t2 = t0;
    } else {
        t3 = a5;
    }
    t4 = t1;
    t5 = t3;
    t6 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t6 = 0x0;
            *(unsigned int *)(((int)stk + 8)) = (a5 + 0x4);
            t9 = (a5 + 0x4);
            t10 = 0x0;
            u11 = 1.0f;
            while ((int)t6 < (int)0x4) {
                t10 = t6;
                u8 = (-1.0f);
                if ((int)t10 < (int)0x4) {
                    do {
                        t4 = t10;
                        t12 = *(signed char *)((a5 + t4));
                        t9 = t2;
                        t4 = t12;
                        t4 = (t4 << 2);
                        t4 = (t4 << 2);
                        t4 = (t4 + t9);
                        t9 = t12;
                        u13 = *(float *)(((t6 << 2) + t4));
                        t9 = (t9 << 2);
                        t9 = (t9 + (((int)stk + 4) + 0xC));
                        u14 = *(float *)((t9 + 0x0));
                        u7 = (u13 < 0.0f ? -u13 : u13);
                        u7 = (u7 * u14);
                        if (u7 > u8) {
                            t5 = t10;
                            u8 = u7;
                        }
                        t10 = (t10 + 0x1);
                    } while ((int)t10 < (int)0x4);
                    u17 = u14;
                }
                t19 = *(signed char *)(((t5 + a5) + 0x0));
                t10 = t19;
                if (t5 != t6) {
                    t20 = *(signed char *)(((t6 + a5) + 0x0));
                    u11 = (-u11);
                    *(unsigned char *)(((t5 + a5) + 0x0)) = t20;
                    *(unsigned char *)(((t6 + a5) + 0x0)) = t10;
                }
                t4 = t2;
                t4 = (t4 + ((t10 << 2) << 2));
                u23 = *(float *)(((t6 << 2) + t4));
                u7 = u23;
                u11 = (u11 * u7);
                if (u7 != 0.0f) {
                    t24 = ((t6 + 0x1) + a5);
                    t25 = ((t10 << 2) << 2);
                    t26 = (t5 + a5);
                    u27 = u17;
                    u28 = 0.0f;
                    for (;;) {
                        t29 = *(int *)(((int)stk + 8));
                        if ((unsigned int)t24 >= (unsigned int)t29) break;
                        t30 = *(signed char *)((t24 + 0x0));
                        t10 = t30;
                        t24 = (t24 + 0x1);
                        t4 = t2;
                        t5 = (t6 + 0x1);
                        t10 = (t10 << 2);
                        t10 = (t10 << 2);
                        t4 = (t4 + t10);
                        u31 = *(float *)(((t6 << 2) + t4));
                        u8 = u31;
                        u8 = (u8 / u7);
                        *(float *)(((t6 << 2) + t4)) = u8;
                        if ((int)t5 < (int)0x4) {
                            do {
                                t26 = t5;
                                t26 = (t26 << 2);
                                u27 = u8;
                                t4 = t2;
                                *(unsigned int *)(((int)stk + 4)) = t4;
                                t4 = (t4 + t10);
                                t32 = *(int *)(((int)stk + 4));
                                t9 = t32;
                                t5 = (t5 + 0x1);
                                t9 = (t9 + t25);
                                t9 = (t9 + t26);
                                u33 = *(float *)((t9 + 0x0));
                                u28 = u33;
                                u27 = (u27 * u28);
                                u34 = *(float *)((t26 + t4));
                                u28 = u34;
                                u28 = (u28 - u27);
                                *(float *)((t26 + t4)) = u28;
                            } while ((int)t5 < (int)0x4);
                        }
                    }
                    t6 = (t6 + 0x1);
                    continue;
                }
                return u11;
            }
            t37 = *(int *)(((int)stk + 12));
            if (t37 == 0) {
                t38 = nlLoadMatrix(t2, t5);
                t4 = t38;
                return u11;
            }
            return u11;
        }
        t4 = t6;
        t5 = 0x0;
        *(unsigned char *)((a5 + t4)) = t4;
        u7 = 0.0f;
        t39 = ((t4 << 2) << 2);
        while ((int)t5 < (int)0x4) {
            t4 = t2;
            t4 = (t4 + t39);
            u40 = *(float *)(((t5 << 2) + t4));
            u8 = (u40 < 0.0f ? -u40 : u40);
            t5 = (t5 + 0x1);
            if (u8 > u7) {
                u7 = u8;
            }
        }
        if (u7 == 0.0f) break;
        t42 = ((t6 << 2) + (((int)stk + 4) + 0xC));
        t6 = (t6 + 0x1);
        *(float *)((t42 + 0x0)) = (1.0f / u7);
    }
    return 0.0f;
}


int nlSprPut(int a4)
{
    int t0;
    int t1;
    int t162;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t21;
    float u7;
    int t11;
    int t8;
    int t9;
    float u12;
    float u16;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    int t28;
    float t29;
    int t30;
    float t31;
    float u32;
    float u33;
    float u35;
    float u36;
    float u37;
    float u38;
    int t39;
    int t40;
    float u41;
    float u42;
    float u43;
    float u44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t52;
    int t53;
    int t55;
    int t56;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t71;
    int t77;
    float u78;
    float u79;
    float u80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t90;
    float u91;
    float u92;
    float u94;
    float u95;
    float u96;
    float u97;
    float u99;
    float u100;
    int t101;
    int t102;
    int t105;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t115;
    int t114;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    float u22;
    int t18;
    float u19;
    int t14;
    float u15;
    float u76;
    int t67;
    int t86;
    int t123;
    int stk[28] = {0};

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0xC2B76BC;
    t162 = 0xFFFFFFFF;
    if ((int)t0 < (int)t1) {
        t2 = *(int *)((a4 + 0x0));
        t3 = *(int *)0xC2B76B8;
        t4 = *(short *)(((t2 << 1) + t3));
        if (t4 != -1) {
            t5 = *(int *)((a4 + 0x30));
            t6 = *(int *)0xC2B76C8;
            t21 = 0x0;
            if (t5 != 0) {
                if (t5 != 2) {
                    if (t5 != 4) {
                        u7 = *(float *)((a4 + 0x2C));
                        t11 = 0x1;
                        if (!(1.0f > u7)) {
                            t8 = *(short *)((((((t4 << 2) << 2) << 1) + t6) + 0x14));
                            t9 = 0x0;
                            if (t8 != 0) {
                                t9 = 0x1;
                            }
                            t11 = t9;
                        }
                        t14 = t11;
                        u15 = u7;
                    } else {
                        u12 = *(float *)((a4 + 0x2C));
                        t14 = 0x1;
                        u15 = u12;
                    }
                    t18 = t14;
                    u19 = u15;
                } else {
                    u16 = *(float *)((a4 + 0x2C));
                    t18 = 0x1;
                    u19 = u16;
                }
                t21 = t18;
                u22 = u19;
            }
            u23 = *(float *)((a4 + 0x10));
            u24 = *(float *)((((((t4 << 2) << 2) << 1) + t6) + 0x18));
            u25 = *(float *)((a4 + 0x14));
            u26 = *(float *)((((((t4 << 2) << 2) << 1) + t6) + 0x1C));
            *(float *)(((int)stk + 8)) = ((u26 * u25) * 0.5f);
            u27 = *(float *)((a4 + 0xC));
            t28 = *(int *)((a4 + 0x28));
            t29 = nlSin(t28);
            *(float *)(((int)stk + 12)) = t29;
            t30 = *(int *)((a4 + 0x28));
            t31 = nlCos(t30);
            u32 = *(float *)(((int)stk + 12));
            u33 = *(float *)(((int)stk + 8));
            nlSprPutPosSet(((u24 * u23) * 0.5f), u33, u32, t31);
            u35 = *(float *)0xC14A828;
            u36 = *(float *)0xC2B76D0;
            u37 = *(float *)0xC14A824;
            u38 = *(float *)0xC2B76CC;
            t39 = 0x4;
            t40 = 0x0;
            u41 = u35;
            u42 = u37;
            while ((unsigned int)t40 < (unsigned int)0x10) {
                t39 = t40;
                u43 = *(float *)(((((int)stk + 4) + 0x2C) + t39));
                u42 = u43;
                t40 = (t40 + 0x4);
                u42 = (u42 * (u38 * u37));
                *(float *)(((((int)stk + 4) + 0x2C) + t39)) = u42;
                u44 = *(float *)(((((int)stk + 4) + 0x1C) + t39));
                u41 = u44;
                u41 = (u41 * (u36 * u35));
                *(float *)(((((int)stk + 4) + 0x1C) + t39)) = u41;
            }
            t45 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = (t45 & 0xF8FCFFFF);
            t46 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4)) = (t46 & 0x1FFFFFFF);
            t47 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t47 & 0x3278FFF);
            t48 = *(int *)((a4 + 0x34));
            if ((t48 & 0x800) == 0) {
                t49 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t49 | 0x800000);
            }
            t52 = *(int *)((a4 + 0x34));
            if ((t52 & 0x1000) != 0) {
                t53 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t53 | 0x2000);
            }
            t55 = *(int *)((a4 + 0x34));
            if ((t55 & 0x10000) != 0) {
                t56 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t56 | 0x1000);
            }
            t58 = *(int *)((a4 + 0x34));
            t59 = (0x7 & ((int)t58 >> 8));
            if ((0x7 & ((int)t58 >> 8)) == 0) {
                t59 = 0x4;
            }
            t60 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4)) = (t60 | (t59 << 29));
            if (t21 != 0) {
                t61 = *(int *)((a4 + 0x30));
                if (t61 == 4) {
                    t62 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                    *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t62 | 0x94100000);
                    t63 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                    t67 = (t63 | 0x4000000);
                } else {
                    t64 = *(int *)0xC14A648;
                    t65 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                    *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t65 | ((((t64 ^ 0xFC) << 16) << 8) | 0x100000));
                    t66 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                    t67 = (t66 | 0x2000000);
                }
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = t67;
                u76 = u22;
            } else {
                t71 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t71 | 0x20080000);
                u76 = 1.0f;
            }
            t77 = *(int *)((a4 + 0x34));
            if ((0x2000 & t77) != 0) {
                u78 = *(float *)0xC14A948;
                u79 = *(float *)0xC14A950;
                u80 = *(float *)0xC14A94C;
                t81 = nlSpriteF2ARGB((t59 << 29), 0x2000, u76, u78, u80, u79);
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x10)) = t81;
            } else {
                t82 = *(int *)((a4 + 0x34));
                if ((t82 & 0x4000) != 0) {
                    t83 = nlSpriteF2C(u76);
                    t84 = *(int *)((a4 + 0x38));
                    t86 = (((t83 << 16) << 8) | t84);
                } else {
                    t85 = nlSpriteF2ARGB((t59 << 29), 0x2000, u76, 1.0f, 1.0f, 1.0f);
                    t86 = t85;
                }
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x10)) = t86;
            }
            t90 = *(int *)((a4 + 0x34));
            u91 = *(float *)((a4 + 0x18));
            u92 = *(float *)((a4 + 0x20));
            u94 = u92;
            u95 = u91;
            if ((0x10 & (t90 & 0x30)) != 0) {
                u94 = (1.0f - u92);
                u95 = (1.0f - u91);
            }
            u96 = *(float *)((a4 + 0x1C));
            u97 = *(float *)((a4 + 0x24));
            u99 = u96;
            u100 = u97;
            if (((t90 & 0x30) & 0x20) == 0) {
                u99 = (1.0f - u96);
                u100 = (1.0f - u97);
            }
            t101 = *(int *)((a4 + 0x34));
            if ((t101 & 0xC000) != 0x8000) {
                if ((t101 & 0xC000) == 0xC000) {
                    t102 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                    *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = (t102 | 0x30000);
                }
            } else {
                t105 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = (t105 | 0x20000);
            }
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u95;
            t109 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(unsigned int *)(((int)stk + 24)) = (t109 & 0xFFFF0000);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u94;
            t110 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u99;
            t111 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = ((unsigned int)t111 >> 16);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u100;
            t112 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = ((unsigned int)t112 >> 16);
            t113 = *(int *)((a4 + 0x30));
            t115 = t113;
            if (t113 == -1) {
                t114 = 0x0;
                if (t21 != 0) {
                    t114 = 0x2;
                }
                t115 = t114;
            }
            *(unsigned int *)(((int)stk + 20)) = (t115 << 2);
            t116 = *(int *)0xC2B8CBC;
            t117 = *(int *)(((t115 << 2) + t116));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t117 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t117 >> 16) >> 8);
            t118 = *(int *)((a4 + 0x34));
            if ((t118 & 0x4000) != 0) {
                t119 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                t120 = *(int *)0xC2B7948;
                t123 = ((t119 | t120) | 0x4);
            } else {
                t121 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                t122 = *(int *)0xC2B7948;
                t123 = (t121 | t122);
            }
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x0)) = t123;
            t125 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x4)) = t125;
            t126 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
            t127 = *(int *)0xC2B794C;
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x8)) = (t126 | t127);
            t128 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0xC));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0xC)) = t128;
            t129 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x10));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x10)) = t129;
            t130 = nlSpriteF2C(u76);
            t131 = *(int *)((a4 + 0x3C));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x14)) = (((t130 << 16) << 8) | t131);
            _builtin_prefetch((void *)((0x3FFFFFF & t117) | 0xE0000000));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x0)) = 0xF0000000;
            t132 = *(int *)(((((int)stk + 4) + 0x2C) + 0x0));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x4)) = t132;
            t133 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x8)) = t133;
            *(float *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0xC)) = (1.0f / u27);
            t134 = *(int *)(((((int)stk + 4) + 0x2C) + 0x4));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x10)) = t134;
            t135 = *(int *)(((((int)stk + 4) + 0x1C) + 0x4));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x14)) = t135;
            *(float *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x18)) = (1.0f / u27);
            t136 = *(int *)(((((int)stk + 4) + 0x2C) + 0x8));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x1C)) = t136;
            t137 = *(int *)(((((int)stk + 4) + 0x1C) + 0x8));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x20)) = t137;
            *(float *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x24)) = (1.0f / u27);
            t138 = *(int *)(((((int)stk + 4) + 0x2C) + 0xC));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x28)) = t138;
            t139 = *(int *)(((((int)stk + 4) + 0x1C) + 0xC));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x2C)) = t139;
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x30)) = (t4 | 0x53500000);
            t140 = *(int *)(((int)stk + 4));
            t141 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x34)) = (t141 | t140);
            t142 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x38)) = (t142 | (t110 & 0xFFFF0000));
            t143 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x3C)) = ((t110 & 0xFFFF0000) | t143);
            _builtin_prefetch((void *)(((0x3FFFFFF & t117) | 0xE0000000) + 0x20));
            _builtin_prefetch((void *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x20));
            t144 = *(int *)(((int)stk + 20));
            t145 = *(int *)0xC2B8CBC;
            t146 = *(int *)(((t144 + t145) + 0x0));
            *(unsigned int *)(((t144 + t145) + 0x0)) = ((t146 & 0xFC000000) | ((((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x20) + 0x20) & 0x3FFFFFF));
        }
        t162 = 0x0;
    }
    return t162;
}
