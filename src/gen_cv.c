/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c04d49e(int, float, float);
int FUN_0c05778a(int, int, float, float);
int FUN_0c15f9c4(int, int, int);
int FUN_0c15fa6c(int, int);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdFsGetLE4(int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
float nlInnerProduct(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlOuterProduct(int, int, int);
float nlUnitVector(int);
int FUN_0c07ade0(int a4);
int FUN_0c15fa1c(int a4, int a5);
int kmChangeContextSuperSample(int a4);
int FUN_0c089ad4(int a4, int a5, int a6);
float nlRotateV(int a4, int a5);
int FUN_0c089978(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
void FUN_0c05bc08(int a4);

int FUN_0c07ade0(int a4)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)((a4 + 0x8));
    u1 = *(float *)((a4 + 0x0));
    u2 = *(float *)((a4 + 0x4));
    return ((int (*)(int, float, float, float))(0xC07ADB0))(a4, u1, u2, u0);
}

int FUN_0c15fa1c(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x0));
    if (t0 == 0) {
        t1 = *(signed char *)((a5 + 0x0));
        if (t1 != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int))(0xC15FA14))(a4);
}

int kmChangeContextSuperSample(int a4)
{
    int t0;

    if (a4 != 0) {
        t0 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC2EABB0 = (t0 | 0x1000);
        return ((int (*)(int, int))(0xC15E4C8))(a4, 0xC2EAB9C);
    }
    return ((int (*)(int, int))(0xC15E4C0))(a4, 0xC2EAB9C);
}

int FUN_0c089ad4(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    if ((int)(a6 - 1) >= 0) {
        t0 = (a4 + (a6 - 1));
        t1 = (a5 + (a6 - 1));
        t2 = (a6 - 1);
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)t5 + (unsigned char)t4) + t3);
            t6 = (int)((int)(((unsigned char)t5 + (unsigned char)t4) + t3) / (int)0x100);
            t2 = (t2 - 1);
            t3 = t6;
            t1 = (t1 - 1);
            t0 = (t0 - 1);
            if ((int)t2 < 0) {
                break;
            }
        }
        t8 = t6;
    }
    return t8;
}

float nlRotateV(int a4, int a5)
{
    float t1;
    int t2;
    float t3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    float u14;
    float u10;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlOuterProduct(a4, a5, (((int)stk + 4) + 0x4));
    t1 = nlUnitVector((((int)stk + 4) + 0x4));
    t2 = *(int *)(((int)stk + 4));
    t3 = nlInnerProduct(a4, t2);
    if (t1 != 0.0f) {
        t4 = ((int (*)(int, float, float))(0xC0784A0))((((int)stk + 4) + 0x4), t1, t3);
    } else {
        if (0.0f > t3) {
            u5 = *(float *)((a4 + 0x4));
            *(float *)(((int)stk + 8)) = u5;
            u6 = *(float *)((a4 + 0x8));
            *(float *)(((int)stk + 12)) = u6;
            u7 = *(float *)((a4 + 0x0));
            *(float *)(((int)stk + 16)) = u7;
            t8 = ((int (*)(int, float, float))(0xC0784A0))((((int)stk + 4) + 0x4), 0.0f, (-1.0f));
        } else {
            u10 = t3;
        }
        u14 = u10;
    }
    return u14;
}

int FUN_0c089978(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t22;
    int t6;
    int t7;
    int t17;
    int t8;
    int t9;
    int t12;
    int t10;
    int t11;
    int t35;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t33;
    int t32;
    int stk[7] = {0};

    t0 = (int)((int)a5 / (int)0x8);
    t1 = (int)((int)a5 % (int)0x8);
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31)));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)((unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))) >> 1);
    *(unsigned char *)(((int)stk + 8)) = ((unsigned char)((unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))) >> 1) >> 1);
    t2 = (int)((int)(a5 - 1) / (int)0x8);
    t3 = (int)((int)(a5 - 1) % (int)0x8);
    t4 = *(signed char *)(((t0 + a4) + 0x0));
    t5 = *(int *)(((int)stk + 4));
    t22 = 0x0;
    if (((unsigned char)t4 & t5) != 0) {
        t6 = *(signed char *)(((t0 + a4) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)t6;
        t7 = *(int *)(((int)stk + 12));
        t17 = 0x1;
        if (((unsigned char)t6 & t7) == 0) {
            t8 = *(signed char *)(((int)stk + 8));
            t9 = *(int *)(((int)stk + 4));
            t12 = 0x1;
            if (((unsigned char)t8 & t9) == 0) {
                t10 = *(signed char *)(((t2 + a4) + 0x0));
                t11 = 0x0;
                if (((unsigned char)t10 & (unsigned char)(((int)(-t3) >= 0) ? (0x80 << ((-t3) & 31)) : ((-(int)(-t3) & 31) ? ((int)0x80 >> (-(int)(-t3) & 31)) : ((int)0x80 >> 31)))) != 0) {
                    t11 = 0x1;
                }
                t12 = t11;
            }
            t17 = t12;
        }
        t22 = t17;
    }
    t35 = 0x0;
    if (t22 == 1) {
        t25 = (t2 + a4);
        t26 = (((int)(-t3) >= 0) ? (0x80 << ((-t3) & 31)) : ((-(int)(-t3) & 31) ? ((int)0x80 >> (-(int)(-t3) & 31)) : ((int)0x80 >> 31)));
        for (;;) {
            t27 = *(signed char *)((t25 + 0x0));
            if (((unsigned char)t27 & (unsigned char)t26) != 0) {
                if ((unsigned int)t25 < (unsigned int)a4) {
                    break;
                }
                t28 = *(signed char *)((t25 + 0x0));
                t29 = (~t26);
                t26 = (t26 << 1);
                *(unsigned char *)((t25 + 0x0)) = (t28 & t29);
                if ((unsigned char)t26 == 0) {
                    t26 = 0x1;
                    t25 = (t25 - 1);
                }
                continue;
            }
            break;
        }
        t33 = 0x1;
        if ((unsigned int)t25 >= (unsigned int)a4) {
            t32 = *(signed char *)((t25 + 0x0));
            *(unsigned char *)((t25 + 0x0)) = (t32 | t26);
            t33 = 0x0;
        }
        t35 = t33;
    }
    return t35;
}

int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8)
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
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t58;
    int t59;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t70;
    int t73;
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t80;
    int t82;
    int t83;
    int t84;
    int t86;
    int t88;
    int t89;
    int t91;
    int t92;
    int t93;
    int t95;
    int t96;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t104;
    int t105;
    int t106;
    int t107;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t118;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t142;
    int t139;
    int t28;
    int t63;
    int t111;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = a8;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        if (t1 == 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t2 + 0x1);
    }
    *(unsigned int *)(((int)stk + 40)) = 0x1;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t3 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t3 + 0x800);
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    t4 = 0x1;
    t5 = 0x1;
    t6 = (a7 + 0x1);
    t7 = (t3 + 0x800);
    for (;;) {
        t8 = *(int *)(((int)stk + 12));
        if ((unsigned int)t7 < (unsigned int)t8) {
            t9 = *(signed char *)((t7 + 0x0));
            t10 = *(signed char *)((t7 + 0x0));
            t11 = *(int *)(((int)stk + 12));
            if ((unsigned int)((((unsigned char)t10 + ((unsigned char)t9 & 0x1)) + 0x8) + t7) >= (unsigned int)t11) {
                t12 = *(int *)(((int)stk + 4));
                t13 = *(int *)(((int)stk + 4));
                gdFsMemcpy(t7, (t13 - ((t12 - t7) + 0x800)), ((t12 - t7) + 0x800));
                t15 = *(int *)(((int)stk + 4));
                t16 = (t13 - ((t12 - t7) + 0x800));
                t7 = 0xC14D294;
                t17 = *(int *)(((int)stk + 20));
                t18 = gdFsReadWG(t17, 0x1, t15);
                if (t18 == 0) {
                    t19 = *(int *)(((int)stk + 20));
                    t7 = t16;
                    *(unsigned int *)(((int)stk + 20)) = (t19 + 0x1);
                    gdFsMemcpy((t16 + 0x6), (((int)stk + 4) + 0xC), 0x2);
                    t21 = *(short *)(((int)stk + 16));
                    t22 = *(int *)(((int)stk + 40));
                    if ((unsigned short)t21 == t22) {
                        if (t5 != 1) {
                            if (t4 == 1) {
                                t23 = *(int *)(((int)stk + 8));
                                *(unsigned int *)(((int)stk + 32)) = t23;
                                t28 = a8;
                            } else {
                                t24 = *(int *)(((int)stk + 28));
                                *(unsigned int *)(((int)stk + 32)) = t24;
                                t28 = t6;
                            }
                            t29 = *(signed char *)((t16 + 0x0));
                            t30 = *(int *)(((int)stk + 32));
                            if ((unsigned char)t29 == t30) {
                                t31 = *(int *)(((int)stk + 32));
                                t32 = FUN_0c15f9c4((t16 + 0x8), t28, t31);
                                if (t32 != 0) {
                                    if (t4 == 0) {
                                        t33 = *(int *)(((int)stk + 28));
                                        t6 = (t6 + t33);
                                    }
                                    t35 = *(signed char *)((t6 + 0x0));
                                    
                                    if (t4 == 1) {
                                        t4 = 0x0;
                                    } else {
                                        if (t5 != 1) {
                                            t6 = (t6 + 0x1);
                                        }
                                    }
                                    t38 = FUN_0c15fa6c(t6, 0xC176224);
                                    *(unsigned int *)(((int)stk + 28)) = t38;
                                    *(unsigned int *)(((int)stk + 40)) = t5;
                                    t39 = *(signed char *)((t16 + 0x0));
                                    t5 = (t5 + 0x1);
                                    t40 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t40 + ((((unsigned char)t39 & 0x1) + (unsigned char)t39) + 0x8));
                                    t41 = *(int *)(((int)stk + 36));
                                    t7 = (t7 + ((((unsigned char)t39 & 0x1) + (unsigned char)t39) + 0x8));
                                    if ((int)(t40 + ((((unsigned char)t39 & 0x1) + (unsigned char)t39) + 0x8)) >= (int)t41) {
                                        return 0x0;
                                    }
                                    continue;
                                }
                                t42 = *(signed char *)((t16 + 0x0));
                                t5 = (t5 + 0x1);
                                t43 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t43 + ((((unsigned char)t42 & 0x1) + (unsigned char)t42) + 0x8));
                                t44 = *(int *)(((int)stk + 36));
                                t7 = (t7 + ((((unsigned char)t42 & 0x1) + (unsigned char)t42) + 0x8));
                                if ((int)(t43 + ((((unsigned char)t42 & 0x1) + (unsigned char)t42) + 0x8)) >= (int)t44) {
                                    return 0x0;
                                }
                                continue;
                            }
                            t45 = *(signed char *)((t16 + 0x0));
                            t5 = (t5 + 0x1);
                            t46 = *(int *)(((int)stk + 24));
                            *(unsigned int *)(((int)stk + 24)) = (t46 + ((((unsigned char)t45 & 0x1) + (unsigned char)t45) + 0x8));
                            t47 = *(int *)(((int)stk + 36));
                            t7 = (t7 + ((((unsigned char)t45 & 0x1) + (unsigned char)t45) + 0x8));
                            if ((int)(t46 + ((((unsigned char)t45 & 0x1) + (unsigned char)t45) + 0x8)) >= (int)t47) {
                                return 0x0;
                            }
                            continue;
                        }
                        *(unsigned int *)(((int)stk + 40)) = t5;
                        t48 = *(signed char *)((t16 + 0x0));
                        t5 = (t5 + 0x1);
                        t50 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t50 + ((((unsigned char)t48 & 0x1) + (unsigned char)t48) + 0x8));
                        t51 = *(int *)(((int)stk + 36));
                        t7 = (t7 + ((((unsigned char)t48 & 0x1) + (unsigned char)t48) + 0x8));
                        if ((int)(t50 + ((((unsigned char)t48 & 0x1) + (unsigned char)t48) + 0x8)) >= (int)t51) {
                            return 0x0;
                        }
                        continue;
                    }
                    t52 = *(signed char *)((t16 + 0x0));
                    t5 = (t5 + 0x1);
                    t53 = *(int *)(((int)stk + 24));
                    *(unsigned int *)(((int)stk + 24)) = (t53 + ((((unsigned char)t52 & 0x1) + (unsigned char)t52) + 0x8));
                    t54 = *(int *)(((int)stk + 36));
                    t7 = (t7 + ((((unsigned char)t52 & 0x1) + (unsigned char)t52) + 0x8));
                    if ((int)(t53 + ((((unsigned char)t52 & 0x1) + (unsigned char)t52) + 0x8)) >= (int)t54) {
                        return 0x0;
                    }
                    continue;
                }
                return 0x0;
            }
            gdFsMemcpy((t7 + 0x6), (((int)stk + 4) + 0xC), 0x2);
            t56 = *(short *)(((int)stk + 16));
            t57 = *(int *)(((int)stk + 40));
            if ((unsigned short)t56 == t57) {
                if (t5 != 1) {
                    if (t4 == 1) {
                        t58 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 32)) = t58;
                        t63 = a8;
                    } else {
                        t59 = *(int *)(((int)stk + 28));
                        *(unsigned int *)(((int)stk + 32)) = t59;
                        t63 = t6;
                    }
                    t64 = *(signed char *)((t7 + 0x0));
                    t65 = *(int *)(((int)stk + 32));
                    if ((unsigned char)t64 == t65) {
                        t66 = *(int *)(((int)stk + 32));
                        t67 = FUN_0c15f9c4((t7 + 0x8), t63, t66);
                        if (t67 != 0) {
                            if (t4 == 0) {
                                t68 = *(int *)(((int)stk + 28));
                                t6 = (t6 + t68);
                            }
                            t70 = *(signed char *)((t6 + 0x0));
                            
                            if (t4 == 1) {
                                t4 = 0x0;
                            } else {
                                if (t5 != 1) {
                                    t6 = (t6 + 0x1);
                                }
                            }
                            t73 = FUN_0c15fa6c(t6, 0xC176224);
                            *(unsigned int *)(((int)stk + 28)) = t73;
                            *(unsigned int *)(((int)stk + 40)) = t5;
                            t74 = *(signed char *)((t7 + 0x0));
                            t5 = (t5 + 0x1);
                            t75 = *(int *)(((int)stk + 24));
                            *(unsigned int *)(((int)stk + 24)) = (t75 + ((((unsigned char)t74 & 0x1) + (unsigned char)t74) + 0x8));
                            t76 = *(int *)(((int)stk + 36));
                            t7 = (t7 + ((((unsigned char)t74 & 0x1) + (unsigned char)t74) + 0x8));
                            if ((int)(t75 + ((((unsigned char)t74 & 0x1) + (unsigned char)t74) + 0x8)) >= (int)t76) {
                                return 0x0;
                            }
                            continue;
                        }
                        t78 = *(signed char *)((t7 + 0x0));
                        t5 = (t5 + 0x1);
                        t79 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t79 + ((((unsigned char)t78 & 0x1) + (unsigned char)t78) + 0x8));
                        t80 = *(int *)(((int)stk + 36));
                        t7 = (t7 + ((((unsigned char)t78 & 0x1) + (unsigned char)t78) + 0x8));
                        if ((int)(t79 + ((((unsigned char)t78 & 0x1) + (unsigned char)t78) + 0x8)) >= (int)t80) {
                            return 0x0;
                        }
                        continue;
                    }
                    t82 = *(signed char *)((t7 + 0x0));
                    t5 = (t5 + 0x1);
                    t83 = *(int *)(((int)stk + 24));
                    *(unsigned int *)(((int)stk + 24)) = (t83 + ((((unsigned char)t82 & 0x1) + (unsigned char)t82) + 0x8));
                    t84 = *(int *)(((int)stk + 36));
                    t7 = (t7 + ((((unsigned char)t82 & 0x1) + (unsigned char)t82) + 0x8));
                    if ((int)(t83 + ((((unsigned char)t82 & 0x1) + (unsigned char)t82) + 0x8)) >= (int)t84) {
                        return 0x0;
                    }
                    continue;
                }
                *(unsigned int *)(((int)stk + 40)) = t5;
                t86 = *(signed char *)((t7 + 0x0));
                t5 = (t5 + 0x1);
                t88 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 24)) = (t88 + ((((unsigned char)t86 & 0x1) + (unsigned char)t86) + 0x8));
                t89 = *(int *)(((int)stk + 36));
                t7 = (t7 + ((((unsigned char)t86 & 0x1) + (unsigned char)t86) + 0x8));
                if ((int)(t88 + ((((unsigned char)t86 & 0x1) + (unsigned char)t86) + 0x8)) >= (int)t89) {
                    return 0x0;
                }
                continue;
            }
            t91 = *(signed char *)((t7 + 0x0));
            t5 = (t5 + 0x1);
            t92 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((int)stk + 24)) = (t92 + ((((unsigned char)t91 & 0x1) + (unsigned char)t91) + 0x8));
            t93 = *(int *)(((int)stk + 36));
            t7 = (t7 + ((((unsigned char)t91 & 0x1) + (unsigned char)t91) + 0x8));
            if ((int)(t92 + ((((unsigned char)t91 & 0x1) + (unsigned char)t91) + 0x8)) >= (int)t93) {
                return 0x0;
            }
            continue;
        }
        t95 = *(int *)(((int)stk + 4));
        t96 = *(int *)(((int)stk + 4));
        gdFsMemcpy(t7, (t96 - ((t95 - t7) + 0x800)), ((t95 - t7) + 0x800));
        t98 = *(int *)(((int)stk + 4));
        t99 = *(int *)(((int)stk + 20));
        t100 = gdFsReadWG(t99, 0x1, t98);
        if (t100 == 0) {
            t101 = *(int *)(((int)stk + 20));
            t102 = (t96 - ((t95 - t7) + 0x800));
            t7 = (t96 - ((t95 - t7) + 0x800));
            *(unsigned int *)(((int)stk + 20)) = (t101 + 0x1);
            gdFsMemcpy((t102 + 0x6), (((int)stk + 4) + 0xC), 0x2);
            t104 = *(short *)(((int)stk + 16));
            t105 = *(int *)(((int)stk + 40));
            if ((unsigned short)t104 == t105) {
                if (t5 != 1) {
                    if (t4 == 1) {
                        t106 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 32)) = t106;
                        t111 = a8;
                    } else {
                        t107 = *(int *)(((int)stk + 28));
                        *(unsigned int *)(((int)stk + 32)) = t107;
                        t111 = t6;
                    }
                    t112 = *(signed char *)((t102 + 0x0));
                    t113 = *(int *)(((int)stk + 32));
                    if ((unsigned char)t112 == t113) {
                        t114 = *(int *)(((int)stk + 32));
                        t115 = FUN_0c15f9c4((t102 + 0x8), t111, t114);
                        if (t115 != 0) {
                            if (t4 == 0) {
                                t116 = *(int *)(((int)stk + 28));
                                t6 = (t6 + t116);
                            }
                            t118 = *(signed char *)((t6 + 0x0));
                            
                            if (t4 == 1) {
                                t4 = 0x0;
                            } else {
                                if (t5 != 1) {
                                    t6 = (t6 + 0x1);
                                }
                            }
                            t121 = FUN_0c15fa6c(t6, 0xC176224);
                            *(unsigned int *)(((int)stk + 28)) = t121;
                            *(unsigned int *)(((int)stk + 40)) = t5;
                            t122 = *(signed char *)((t102 + 0x0));
                            t5 = (t5 + 0x1);
                            t123 = *(int *)(((int)stk + 24));
                            *(unsigned int *)(((int)stk + 24)) = (t123 + ((((unsigned char)t122 & 0x1) + (unsigned char)t122) + 0x8));
                            t124 = *(int *)(((int)stk + 36));
                            t7 = (t7 + ((((unsigned char)t122 & 0x1) + (unsigned char)t122) + 0x8));
                            if ((int)(t123 + ((((unsigned char)t122 & 0x1) + (unsigned char)t122) + 0x8)) >= (int)t124) {
                                return 0x0;
                            }
                            continue;
                        }
                        t125 = *(signed char *)((t102 + 0x0));
                        t5 = (t5 + 0x1);
                        t126 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t126 + ((((unsigned char)t125 & 0x1) + (unsigned char)t125) + 0x8));
                        t127 = *(int *)(((int)stk + 36));
                        t7 = (t7 + ((((unsigned char)t125 & 0x1) + (unsigned char)t125) + 0x8));
                        if ((int)(t126 + ((((unsigned char)t125 & 0x1) + (unsigned char)t125) + 0x8)) >= (int)t127) {
                            return 0x0;
                        }
                        continue;
                    }
                    t128 = *(signed char *)((t102 + 0x0));
                    t5 = (t5 + 0x1);
                    t129 = *(int *)(((int)stk + 24));
                    *(unsigned int *)(((int)stk + 24)) = (t129 + ((((unsigned char)t128 & 0x1) + (unsigned char)t128) + 0x8));
                    t130 = *(int *)(((int)stk + 36));
                    t7 = (t7 + ((((unsigned char)t128 & 0x1) + (unsigned char)t128) + 0x8));
                    if ((int)(t129 + ((((unsigned char)t128 & 0x1) + (unsigned char)t128) + 0x8)) >= (int)t130) {
                        return 0x0;
                    }
                    continue;
                }
                *(unsigned int *)(((int)stk + 40)) = t5;
                t131 = *(signed char *)((t102 + 0x0));
                t5 = (t5 + 0x1);
                t133 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 24)) = (t133 + ((((unsigned char)t131 & 0x1) + (unsigned char)t131) + 0x8));
                t134 = *(int *)(((int)stk + 36));
                t7 = (t7 + ((((unsigned char)t131 & 0x1) + (unsigned char)t131) + 0x8));
                if ((int)(t133 + ((((unsigned char)t131 & 0x1) + (unsigned char)t131) + 0x8)) >= (int)t134) {
                    return 0x0;
                }
                continue;
            }
            t135 = *(signed char *)((t102 + 0x0));
            t5 = (t5 + 0x1);
            t136 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((int)stk + 24)) = (t136 + ((((unsigned char)t135 & 0x1) + (unsigned char)t135) + 0x8));
            t137 = *(int *)(((int)stk + 36));
            t7 = (t7 + ((((unsigned char)t135 & 0x1) + (unsigned char)t135) + 0x8));
            if ((int)(t136 + ((((unsigned char)t135 & 0x1) + (unsigned char)t135) + 0x8)) >= (int)t137) {
                return 0x0;
            }
            continue;
        }
        return 0x0;
    }
    t142 = gdFsGetLE4((t139 + 0x2));
    return t142;
}

void FUN_0c05bc08(int a4)
{
    int t0;
    int t1;
    int t9;
    float u10;
    float u11;
    float u14;
    float u15;
    float u17;
    float u19;
    float u22;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    int t38;
    int t39;
    float u41;
    float u42;
    float u46;
    float u49;
    float u50;

    if ((int)a4 > 0) {
        if ((int)a4 <= (int)0x104) {
            t0 = *(int *)0xC2A9A44;
            *(unsigned int *)0xC2A9A44 = (t0 + 0x1);
            *(unsigned int *)0xC2A98CC = 0x200A;
            t1 = *(int *)0xC2A9A44;
            if (t1 == 1) {
                Voice_ShutUp(0x0);
                Voice_Request(0xC1311D0, 0x0, 0x7F, 0x0);
            }
            t9 = *(int *)0xC2A9A44;
            if ((int)t9 <= (int)0x8C) {
                u10 = *(float *)0xC2A9A58;
                u11 = *(float *)0xC2A98C4;
                *(float *)0xC2A98C4 = u10;
                nlObjPutSetFadeColor(1.0f, 0.643137217f, 0.160784304f);
                FUN_0c04d49e(0xC2A9A48, 0.099999994f, 0.0f);
                u14 = *(float *)0xC2A9A48;
                *(float *)0xC2A9A48 = (float)(int)u14;
                *(float *)0xC2A98A8 = 1.0f;
                *(float *)0xC2A98AC = 1.0f;
                u15 = *(float *)0xC2A9A48;
                if (!(-6.0f > u15)) {
                    *(float *)0xC2A98C4 = 1.0f;
                } else {
                    *(float *)0xC2A98C4 = 0.5f;
                }
                *(unsigned int *)0xC2A98C0 = 0x0;
                u17 = *(float *)0xC2A9A48;
                FUN_0c05778a(0xC2A9898, 0x75, (u17 + 320.0f), 240.0f);
                u19 = *(float *)0xC2A9A48;
                FUN_0c05778a(0xC2A9898, 0x75, (320.0f - u19), 240.0f);
                ResetFadeColor();
                u22 = *(float *)0xC2A98C4;
                *(float *)0xC2A9A58 = u22;
                *(float *)0xC2A98C4 = u11;
                return;
            }
            if (1) {
                if ((int)t9 <= (int)0xB4) {
                    if (t9 == 0x8D) {
                        *(float *)0xC2A9A58 = 1.0f;
                        Voice_ShutUp(0x0);
                        Voice_Request(0xC1311E8, 0x0, 0x7F, 0x0);
                    }
                    u31 = *(float *)0xC2A98C4;
                    u32 = *(float *)0xC2A98A8;
                    u33 = *(float *)0xC2A9A54;
                    u34 = *(float *)0xC2A98AC;
                    *(float *)0xC2A98A8 = u33;
                    u35 = *(float *)0xC2A98A8;
                    *(float *)0xC2A98A8 = (u35 + 0.099999994f);
                    u36 = *(float *)0xC2A9A58;
                    *(float *)0xC2A98C4 = u36;
                    u37 = *(float *)0xC2A98A8;
                    *(float *)0xC2A98AC = u37;
                    t38 = *(int *)0xC2A9A50;
                    t39 = (int)((int)(t38 + 0x1) % (int)0x1E);
                    *(unsigned int *)0xC2A9A50 = t39;
                    nlObjPutSetFadeColor(0.996078372f, 0.286274493f, 0.0f);
                    *(unsigned int *)0xC2A98C0 = 0x0;
                    u41 = *(float *)0xC2A98C4;
                    if (u41 > 0.0f) {
                        u42 = *(float *)0xC2A98C4;
                        *(float *)0xC2A98C4 = (u42 - 0.0199999996f);
                    }
                    u46 = *(float *)0xC2A9A4C;
                    FUN_0c05778a(0xC2A9898, 0x63, u46, 240.0f);
                    ResetFadeColor();
                    u49 = *(float *)0xC2A98A8;
                    *(float *)0xC2A9A54 = u49;
                    u50 = *(float *)0xC2A98C4;
                    *(float *)0xC2A9A58 = u50;
                    *(float *)0xC2A98C4 = u31;
                    *(float *)0xC2A98A8 = u32;
                    *(float *)0xC2A98AC = u34;
                    return;
                }
                return;
            }
            return;
        }
        return;
    }
}
