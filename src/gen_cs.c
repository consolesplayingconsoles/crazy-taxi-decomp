/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c036256(int, int, int);
int FUN_0c044f12(int);
int FUN_0c077210(int, int);
int GetCollision2D(int, float);
int Put_Motion2D(int);
int calcCheck(int);
int calcCheckExec(int, int);
int calcColliCheck(int);
int carColliReflection(void);
int carEntry(int);
int carMultiCollision(int);
int carResistance(void);
int carSteering(void);
int dropOutCheck(int);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, ...);
int kmiTAallocEx(int, int, int);
int nlAddVector(int, int);
int nlFastSinCos(int, int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int pcarDrive(int);
int pcarEnd(int);
int pointEventGet(int);
int technicalCheck(int);
void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0413c2(int a4, int a5, int a6, int a7);
int kmCreateTABuffer(int a4, int a5);
int parkingCarExec(int a4);
int pcarExec(int a4);

void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5)
{
    int t0;
    int t1;
    float u2;
    float u3;
    int t6;
    int t7;
    int t8;
    float u9;
    float u10;
    float u11;
    float u13;
    float u14;
    float u15;
    float u16;
    int t17;
    int t18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    int t27;
    int t28;
    int t29;
    float u4;
    float u5;
    float u25;

    *(unsigned int *)((a4 + 0x0)) = 0xC;
    t0 = *(int *)(((a6 << 2) + 0xC0ED9E0));
    *(unsigned int *)(((a4 + 0x4) + 0x0)) = t0;
    *(unsigned int *)((((a4 + 0x4) + 0xA0) + 0x0)) = 0x0;
    t1 = *(int *)0xC1EE20C;
    if (t1 == 0) {
        u2 = *(float *)((a5 + 0x4));
        u4 = u2;
    } else {
        u3 = *(float *)((a5 + 0x4));
        u4 = (u3 + 40.0f);
        u5 = 40.0f;
    }
    t6 = ((a4 + 0x4) + 0xA0);
    t7 = 0x0;
    t8 = (a4 + 0x8);
    u9 = u5;
    u10 = f4;
    u11 = f5;
    while ((int)t7 < (int)0xC) {
        t6 = (t7 * 0x1555);
        nlFastSinCos(t6, (t8 + 0x8), t8);
        u13 = *(float *)((t8 + 0x0));
        u14 = *(float *)((a5 + 0x0));
        u9 = u14;
        u9 = (u9 + f4 * u13);
        *(float *)((t8 + 0x0)) = u9;
        u15 = *(float *)((t8 + 0x8));
        u16 = *(float *)((a5 + 0x8));
        u9 = u16;
        u9 = (u9 + f4 * u15);
        *(float *)((t8 + 0x8)) = u9;
        *(float *)((t8 + 0x4)) = u4;
        u10 = 5.0f;
        t6 = t8;
        t17 = GetCollision2D(t6, u10);
        t6 = t17;
        u10 = 3.0f;
        t18 = *(int *)((t6 + 0x1C));
        if (t18 != -1) {
            u11 = -50.0f;
            u19 = *(float *)((a5 + 0x4));
            u9 = u19;
            u20 = *(float *)((t6 + 0x18));
            u9 = (u9 + u11);
            if (u9 > u20) {
                u21 = *(float *)((a5 + 0x4));
                u9 = u21;
                u9 = (u9 + u10);
            } else {
                u22 = *(float *)((t6 + 0x18));
                u9 = u22;
                u9 = (u9 + u10);
            }
            u25 = u11;
        } else {
            u23 = *(float *)((a5 + 0x4));
            u9 = u23;
            u9 = (u9 + u10);
        }
        *(float *)((t8 + 0x4)) = u9;
        u11 = u25;
        t8 = (t8 + 0xC);
        t7 = (t7 + 0x1);
    }
    t27 = *(int *)(((a4 + 0x8) + 0x8));
    *(unsigned int *)((t8 + 0x8)) = t27;
    t28 = *(int *)(((a4 + 0x8) + 0x4));
    *(unsigned int *)((t8 + 0x4)) = t28;
    t29 = *(int *)(((a4 + 0x8) + 0x0));
    *(unsigned int *)((t8 + 0x0)) = t29;
}

int FUN_0c0413c2(int a4, int a5, int a6, int a7)
{
    int t74;
    int t78;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t14;
    int t15;
    int t16;
    int t22;
    int t23;
    int t24;
    int t30;
    int t31;
    int t32;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t50;
    int t51;
    int t52;
    int t58;
    int t59;
    int t60;
    int t66;
    int t67;
    int t68;
    int t82;
    int t79;
    int t80;
    int t81;
    int t76;
    int t77;

    t74 = 0x0;
    t78 = (a7 - 1);
    if ((int)(a7 - 1) >= 0) {
        t0 = (a7 - 1);
        t1 = 0x0;
        for (;;) {
            if ((int)a4 > 0) {
                t2 = *(int *)((a5 + 0x0));
                t3 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                if ((unsigned int)t2 <= (unsigned int)t3) {
                    if (t2 == t3) {
                        t4 = *(int *)((a5 + 0x4));
                        t5 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                        if ((int)t4 >= (int)t5) {
                            if (t3 == -1) {
                                if ((int)t0 < (int)(a7 - 1)) {
                                    t6 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                                    *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t6;
                                    t7 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                                    *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t7;
                                    t8 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                                    *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t8;
                                }
                                t0 = (t0 - 1);
                                t1 = (t1 + 0x1);
                                if ((int)t0 < 0) break;
                                continue;
                            }
                            break;
                        }
                        if ((int)t0 < (int)(a7 - 1)) {
                            t14 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                            *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t14;
                            t15 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                            *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t15;
                            t16 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                            *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t16;
                        }
                        t0 = (t0 - 1);
                        t1 = (t1 + 0x1);
                        if ((int)t0 < 0) break;
                        continue;
                    }
                    if (t3 == -1) {
                        if ((int)t0 < (int)(a7 - 1)) {
                            t22 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                            *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t22;
                            t23 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                            *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t23;
                            t24 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                            *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t24;
                        }
                        t0 = (t0 - 1);
                        t1 = (t1 + 0x1);
                        if ((int)t0 < 0) break;
                        continue;
                    }
                    break;
                }
                if ((int)t0 < (int)(a7 - 1)) {
                    t30 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                    *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t30;
                    t31 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                    *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t31;
                    t32 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                    *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t32;
                }
                t0 = (t0 - 1);
                t1 = (t1 + 0x1);
                if ((int)t0 < 0) break;
                continue;
            }
            t38 = *(int *)((a5 + 0x0));
            t39 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
            if ((unsigned int)t38 >= (unsigned int)t39) {
                if (t38 == t39) {
                    t40 = *(int *)((a5 + 0x4));
                    t41 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                    if ((int)t40 >= (int)t41) {
                        if (t39 == -1) {
                            if ((int)t0 < (int)(a7 - 1)) {
                                t42 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                                *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t42;
                                t43 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                                *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t43;
                                t44 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                                *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t44;
                            }
                            t0 = (t0 - 1);
                            t1 = (t1 + 0x1);
                            if ((int)t0 < 0) break;
                            continue;
                        }
                        break;
                    }
                    if ((int)t0 < (int)(a7 - 1)) {
                        t50 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                        *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t50;
                        t51 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                        *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t51;
                        t52 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                        *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t52;
                    }
                    t0 = (t0 - 1);
                    t1 = (t1 + 0x1);
                    if ((int)t0 < 0) break;
                    continue;
                }
                if (t39 == -1) {
                    if ((int)t0 < (int)(a7 - 1)) {
                        t58 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                        *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t58;
                        t59 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                        *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t59;
                        t60 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                        *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t60;
                    }
                    t0 = (t0 - 1);
                    t1 = (t1 + 0x1);
                    if ((int)t0 < 0) break;
                    continue;
                }
                break;
            }
            if ((int)t0 < (int)(a7 - 1)) {
                t66 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x8));
                *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x8)) = t66;
                t67 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x4));
                *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x4)) = t67;
                t68 = *(int *)((((((t0 << 1) + t0) << 2) + a6) + 0x0));
                *(unsigned int *)(((((((t0 << 1) + t0) << 2) + a6) + 0xC) + 0x0)) = t68;
            }
            t0 = (t0 - 1);
            t1 = (t1 + 0x1);
            if ((int)t0 < 0) break;
        }
        t74 = t1;
        t76 = a5;
        t77 = a6;
        t78 = t0;
    }
    t82 = 0xFFFFFFFF;
    if (t74 != 0) {
        t79 = *(int *)((t76 + 0x8));
        *(unsigned int *)(((((((t78 << 1) + t78) << 2) + t77) + 0xC) + 0x8)) = t79;
        t80 = *(int *)((t76 + 0x4));
        *(unsigned int *)(((((((t78 << 1) + t78) << 2) + t77) + 0xC) + 0x4)) = t80;
        t81 = *(int *)((t76 + 0x0));
        *(unsigned int *)(((((((t78 << 1) + t78) << 2) + t77) + 0xC) + 0x0)) = t81;
        t82 = (t78 + 0x1);
    }
    return t82;
}

int kmCreateTABuffer(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
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
    int t49;
    int t5;
    int stk[16] = {0};

    *(unsigned int *)0xC2B8C94 = 0x2;
    *(unsigned int *)0xC2B8C40 = a4;
    *(unsigned int *)0xC2B8C98 = a5;
    t0 = *(int *)0xC177A84;
    *(unsigned int *)(((int)stk + 16)) = t0;
    if (t0 != 0x80000000) {
        t1 = *(int *)0xC177A84;
        *(unsigned int *)0xC177A84 = (t1 | 0x100);
        if ((t1 | 0x100) == 0xB00) {
            *(unsigned int *)0xC177A84 = 0x80000000;
            t2 = *(int *)0xC2B8C94;
            t3 = kmiAllocSysConfig(t2);
            t5 = t3;
        }
        t49 = t5;
    } else {
        *(unsigned int *)0xC177A88 = 0x1;
        t11 = *(int *)0xC2EA9DC;
        *(unsigned int *)0xC2EA9E4 = t11;
        t12 = *(int *)0xC2EA9DC;
        *(unsigned int *)(((t12 << 2) + 0xC2EA9CC)) = 0x2;
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F4 = 0x1;
        t13 = *(int *)((a4 + 0x10));
        *(unsigned int *)(((((int)stk + 16) + 0x4) + 0x0)) = (t13 & 0x1);
        t14 = *(int *)((a4 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x4) + 0x4) + 0x0)) = (0x2 & t14);
        t15 = *(int *)((a4 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x4) + 0x8) + 0x0)) = (t15 & 0x4);
        t16 = *(int *)((a4 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x4) + 0xC) + 0x0)) = (t16 & 0x8);
        t17 = *(int *)((((((int)stk + 16) + 0x4) + 0xC) + 0x0));
        t18 = *(int *)((((((int)stk + 16) + 0x4) + 0x8) + 0x0));
        t19 = *(int *)((((((int)stk + 16) + 0x4) + 0x4) + 0x0));
        t20 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
        kmiChkActiveListType(t20, t19, t18, t17);
        t22 = *(int *)((((((int)stk + 16) + 0x4) + 0xC) + 0x0));
        t23 = *(int *)((((((int)stk + 16) + 0x4) + 0x8) + 0x0));
        t24 = *(int *)((((((int)stk + 16) + 0x4) + 0x4) + 0x0));
        t25 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
        t26 = kmiGetPackOBPParam(t25, t24, t23, t22, 0x0, 0x1, 0x0);
        kmiGetNativeRegOBPSize(t26);
        t28 = *(int *)0xC2B8C98;
        *(unsigned int *)0xC2B8C98 = ((unsigned int)t28 >> 1);
        t29 = *(int *)0xC2B8C64;
        t30 = *(int *)0xC2B8C58;
        kmiGetDisplayData(0xFF, t30, t29);
        t32 = *(int *)0xC2B8CA0;
        t33 = *(int *)0xC2B8C98;
        if ((unsigned int)t33 > (unsigned int)((-t32) + 0x200000)) {
            *(unsigned int *)0xC2B8C98 = ((-t32) + 0x200000);
        }
        t34 = *(int *)0xC2B8C98;
        t35 = kmiTAallocEx(t34, 0xC2B8D20, 0xC2B8D24);
        if (t35 == 0) {
            t36 = *(int *)0xC2B8C98;
            *(unsigned int *)0xC2EAAD8 = t36;
            t37 = *(int *)0xC2B8C58;
            t38 = *(int *)0xC2EA6F8;
            t39 = *(int *)0xC2EA6F4;
            t40 = *(int *)0xC2EA6F0;
            t41 = *(int *)0xC2EA6EC;
            kmiSetTAEnvironment((t26 & (~t37)), 0x0);
            *(unsigned int *)0xC2EA88C = 0x1;
        }
        t49 = t35;
    }
    return t49;
}

int parkingCarExec(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    float t22;
    int t29;
    int t31;
    int t33;
    int t35;
    float u38;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    float u47;
    int t51;
    int t52;
    int t53;
    float u55;
    int t56;
    int t57;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    float u73;
    float u74;
    float u75;
    float u76;
    int t78;
    int t86;
    float u88;
    float u89;
    float u90;
    int t93;
    int t95;
    int t97;
    float u100;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    float u109;
    int t113;
    int t114;
    int t115;
    int t117;
    int t118;
    int t119;
    float u121;
    float u122;
    float u123;
    int t126;
    int t128;
    int t130;
    float u133;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    float u142;
    int t146;
    int t147;
    int t148;
    int t160;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    float t171;
    int t176;
    int t178;
    int t180;
    int t182;
    float u185;
    int t188;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    float u194;
    int t198;
    int t199;
    int t200;
    float u202;
    int t203;
    int t204;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    float u219;
    float u220;
    float u221;
    float u222;
    int t224;
    int t232;
    float u234;
    float u235;
    float u236;
    int t239;
    int t241;
    int t243;
    float u246;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t254;
    float u255;
    int t259;
    int t260;
    int t261;
    int t263;
    int t264;
    int t265;
    float u267;
    float u268;
    float u269;
    int t272;
    int t274;
    int t276;
    float u279;
    int t282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    float u288;
    int t292;
    int t293;
    int t294;
    int t302;
    int t156;
    float u28;
    int t154;
    int t152;
    int t150;
    float u175;
    int t300;
    int t298;
    int t296;
    int stk[11] = {0};

    t0 = *(int *)(((0x98 + a4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((0x98 + a4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((0x98 + a4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    technicalCheck(a4);
    calcColliCheck(a4);
    t5 = *(int *)((a4 + 0xD8));
    t6 = pointEventGet(t5);
    if (t6 == 0) {
        t7 = *(int *)((a4 + 0x84));
        if ((t7 & 0x10000) == 0) {
            t8 = pcarEnd(a4);
            t156 = t8;
        } else {
            t9 = *(int *)((a4 + 0x80));
            if (t9 != 0) {
                FUN_0c044f12(a4);
            }
            t15 = *(int *)((a4 + 0x84));
            if ((t15 & 8) != 0) {
                t16 = *(int *)(((a4 + 0x14) + 0x8));
                *(unsigned int *)(((0x8C + a4) + 0x8)) = t16;
                t17 = *(int *)(((a4 + 0x14) + 0x4));
                *(unsigned int *)(((0x8C + a4) + 0x4)) = t17;
                t18 = *(int *)(((a4 + 0x14) + 0x0));
                *(unsigned int *)(((0x8C + a4) + 0x0)) = t18;
                t19 = *(int *)(((a4 + 0x20) + 0x8));
                *(unsigned int *)(((0x98 + a4) + 0x8)) = t19;
                t20 = *(int *)(((a4 + 0x20) + 0x4));
                *(unsigned int *)(((0x98 + a4) + 0x4)) = t20;
                t21 = *(int *)(((a4 + 0x20) + 0x0));
                *(unsigned int *)(((0x98 + a4) + 0x0)) = t21;
                t22 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
                *(float *)((a4 + 0x100)) = t22;
                u28 = t22;
            }
            t29 = *(int *)((a4 + 0x84));
            if ((t29 & 4) == 0) {
                nlPushUnitMatrix();
                t31 = *(short *)((a4 + 0xA8));
                nlRotateAZ((-(unsigned short)t31));
                t33 = *(short *)((a4 + 0xA4));
                nlRotateAX((-(unsigned short)t33));
                t35 = *(short *)((a4 + 0xA6));
                nlRotateAY((-(unsigned short)t35));
                FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                u38 = *(float *)(((int)stk + 24));
                *(float *)((a4 + 0xCC)) = u38;
                nlPopMatrix(0x1);
                carEntry(a4);
                t41 = *(int *)(((0x8C + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x14) + 0x8)) = t41;
                t42 = *(int *)(((0x8C + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x14) + 0x4)) = t42;
                t43 = *(int *)(((0x8C + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x14) + 0x0)) = t43;
                t44 = *(int *)(((0x98 + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x20) + 0x8)) = t44;
                t45 = *(int *)(((0x98 + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x20) + 0x4)) = t45;
                t46 = *(int *)(((0x98 + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x20) + 0x0)) = t46;
                u47 = *(float *)((a4 + 0x100));
                nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u47 - u28));
                nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                t51 = *(short *)((a4 + 0xA8));
                t52 = *(short *)((a4 + 0xA6));
                t53 = *(short *)((a4 + 0xA4));
                FUN_0c036256((a4 + 0x44), (unsigned short)t53, (unsigned short)t52);
                *(unsigned int *)((a4 + 0x68)) = 0x0;
                t154 = 0x68;
            } else {
                u55 = *(float *)((a4 + 0x9C));
                *(float *)((a4 + 0x9C)) = (u55 - 0.073499985f);
                t56 = *(int *)((a4 + 0x110));
                if ((int)t56 > 0) {
                    t57 = *(int *)((a4 + 0x110));
                    *(unsigned int *)((a4 + 0x110)) = (t57 - 1);
                    carResistance();
                }
                nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
                nlAddVector((0x8C + a4), (0x98 + a4));
                t68 = GetCollision2D((0x8C + a4), 30.0f);
                t69 = *(int *)((t68 + 0x1C));
                if (t69 != -1) {
                    t70 = *(int *)(((t68 + 0xC) + 0x8));
                    *(unsigned int *)(((0xEC + a4) + 0x8)) = t70;
                    t71 = *(int *)(((t68 + 0xC) + 0x4));
                    *(unsigned int *)(((0xEC + a4) + 0x4)) = t71;
                    t72 = *(int *)(((t68 + 0xC) + 0x0));
                    *(unsigned int *)(((0xEC + a4) + 0x0)) = t72;
                    u73 = *(float *)((t68 + 0x18));
                    *(float *)((a4 + 0x104)) = u73;
                    u74 = *(float *)((a4 + 0x104));
                    u75 = *(float *)((a4 + 0x90));
                    if (u74 > u75) {
                        u76 = *(float *)((a4 + 0x104));
                        *(float *)((a4 + 0x90)) = u76;
                        carColliReflection();
                        t78 = *(int *)((a4 + 0x110));
                        *(unsigned int *)((a4 + 0x110)) = (int)((float)t78 + 5.0f);
                    }
                    t86 = *(int *)((a4 + 0x110));
                    if ((int)t86 > (int)0xA) {
                        *(unsigned int *)((a4 + 0x110)) = 0xA;
                    }
                    nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                    u88 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                    u89 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u89 - (u88 * (1.0f + 1.0f)));
                    u90 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u90 * 0.799999952f);
                    Put_Motion2D(a4);
                    nlPushUnitMatrix();
                    t93 = *(short *)((a4 + 0xA8));
                    nlRotateAZ((-(unsigned short)t93));
                    t95 = *(short *)((a4 + 0xA4));
                    nlRotateAX((-(unsigned short)t95));
                    t97 = *(short *)((a4 + 0xA6));
                    nlRotateAY((-(unsigned short)t97));
                    FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                    u100 = *(float *)(((int)stk + 24));
                    *(float *)((a4 + 0xCC)) = u100;
                    nlPopMatrix(0x1);
                    carEntry(a4);
                    t103 = *(int *)(((0x8C + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t103;
                    t104 = *(int *)(((0x8C + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t104;
                    t105 = *(int *)(((0x8C + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t105;
                    t106 = *(int *)(((0x98 + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x20) + 0x8)) = t106;
                    t107 = *(int *)(((0x98 + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x20) + 0x4)) = t107;
                    t108 = *(int *)(((0x98 + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x20) + 0x0)) = t108;
                    u109 = *(float *)((a4 + 0x100));
                    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u109 - u28));
                    nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                    t113 = *(short *)((a4 + 0xA8));
                    t114 = *(short *)((a4 + 0xA6));
                    t115 = *(short *)((a4 + 0xA4));
                    FUN_0c036256((a4 + 0x44), (unsigned short)t115, (unsigned short)t114);
                    *(unsigned int *)((a4 + 0x68)) = 0x0;
                    t152 = 0x68;
                } else {
                    t117 = dropOutCheck(a4);
                    if (t117 != 0) {
                        t118 = pcarEnd(a4);
                        t150 = t118;
                    } else {
                        t119 = *(int *)((a4 + 0x110));
                        if ((int)t119 > (int)0xA) {
                            *(unsigned int *)((a4 + 0x110)) = 0xA;
                        }
                        nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                        u121 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                        u122 = *(float *)((a4 + 0xF8));
                        *(float *)((a4 + 0xF8)) = (u122 - (u121 * (1.0f + 1.0f)));
                        u123 = *(float *)((a4 + 0xF8));
                        *(float *)((a4 + 0xF8)) = (u123 * 0.799999952f);
                        Put_Motion2D(a4);
                        nlPushUnitMatrix();
                        t126 = *(short *)((a4 + 0xA8));
                        nlRotateAZ((-(unsigned short)t126));
                        t128 = *(short *)((a4 + 0xA4));
                        nlRotateAX((-(unsigned short)t128));
                        t130 = *(short *)((a4 + 0xA6));
                        nlRotateAY((-(unsigned short)t130));
                        FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                        u133 = *(float *)(((int)stk + 24));
                        *(float *)((a4 + 0xCC)) = u133;
                        nlPopMatrix(0x1);
                        carEntry(a4);
                        t136 = *(int *)(((0x8C + a4) + 0x8));
                        *(unsigned int *)(((a4 + 0x14) + 0x8)) = t136;
                        t137 = *(int *)(((0x8C + a4) + 0x4));
                        *(unsigned int *)(((a4 + 0x14) + 0x4)) = t137;
                        t138 = *(int *)(((0x8C + a4) + 0x0));
                        *(unsigned int *)(((a4 + 0x14) + 0x0)) = t138;
                        t139 = *(int *)(((0x98 + a4) + 0x8));
                        *(unsigned int *)(((a4 + 0x20) + 0x8)) = t139;
                        t140 = *(int *)(((0x98 + a4) + 0x4));
                        *(unsigned int *)(((a4 + 0x20) + 0x4)) = t140;
                        t141 = *(int *)(((0x98 + a4) + 0x0));
                        *(unsigned int *)(((a4 + 0x20) + 0x0)) = t141;
                        u142 = *(float *)((a4 + 0x100));
                        nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u142 - u28));
                        nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                        nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                        t146 = *(short *)((a4 + 0xA8));
                        t147 = *(short *)((a4 + 0xA6));
                        t148 = *(short *)((a4 + 0xA4));
                        FUN_0c036256((a4 + 0x44), (unsigned short)t148, (unsigned short)t147);
                        *(unsigned int *)((a4 + 0x68)) = 0x0;
                        t150 = 0x68;
                    }
                    t152 = t150;
                }
                t154 = t152;
            }
            t156 = t154;
        }
        t302 = t156;
    } else {
        t160 = *(int *)((a4 + 0x80));
        if (t160 != 0) {
            FUN_0c044f12(a4);
        }
        t164 = *(int *)((a4 + 0x84));
        if ((t164 & 8) != 0) {
            t165 = *(int *)(((a4 + 0x14) + 0x8));
            *(unsigned int *)(((0x8C + a4) + 0x8)) = t165;
            t166 = *(int *)(((a4 + 0x14) + 0x4));
            *(unsigned int *)(((0x8C + a4) + 0x4)) = t166;
            t167 = *(int *)(((a4 + 0x14) + 0x0));
            *(unsigned int *)(((0x8C + a4) + 0x0)) = t167;
            t168 = *(int *)(((a4 + 0x20) + 0x8));
            *(unsigned int *)(((0x98 + a4) + 0x8)) = t168;
            t169 = *(int *)(((a4 + 0x20) + 0x4));
            *(unsigned int *)(((0x98 + a4) + 0x4)) = t169;
            t170 = *(int *)(((a4 + 0x20) + 0x0));
            *(unsigned int *)(((0x98 + a4) + 0x0)) = t170;
            t171 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
            *(float *)((a4 + 0x100)) = t171;
            u175 = t171;
        }
        t176 = *(int *)((a4 + 0x84));
        if ((t176 & 4) == 0) {
            nlPushUnitMatrix();
            t178 = *(short *)((a4 + 0xA8));
            nlRotateAZ((-(unsigned short)t178));
            t180 = *(short *)((a4 + 0xA4));
            nlRotateAX((-(unsigned short)t180));
            t182 = *(short *)((a4 + 0xA6));
            nlRotateAY((-(unsigned short)t182));
            FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
            u185 = *(float *)(((int)stk + 24));
            *(float *)((a4 + 0xCC)) = u185;
            nlPopMatrix(0x1);
            carEntry(a4);
            t188 = *(int *)(((0x8C + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x14) + 0x8)) = t188;
            t189 = *(int *)(((0x8C + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x14) + 0x4)) = t189;
            t190 = *(int *)(((0x8C + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x14) + 0x0)) = t190;
            t191 = *(int *)(((0x98 + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x20) + 0x8)) = t191;
            t192 = *(int *)(((0x98 + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x20) + 0x4)) = t192;
            t193 = *(int *)(((0x98 + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x20) + 0x0)) = t193;
            u194 = *(float *)((a4 + 0x100));
            nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u194 - u175));
            nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
            t198 = *(short *)((a4 + 0xA8));
            t199 = *(short *)((a4 + 0xA6));
            t200 = *(short *)((a4 + 0xA4));
            FUN_0c036256((a4 + 0x44), (unsigned short)t200, (unsigned short)t199);
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            t300 = 0x68;
        } else {
            u202 = *(float *)((a4 + 0x9C));
            *(float *)((a4 + 0x9C)) = (u202 - 0.073499985f);
            t203 = *(int *)((a4 + 0x110));
            if ((int)t203 > 0) {
                t204 = *(int *)((a4 + 0x110));
                *(unsigned int *)((a4 + 0x110)) = (t204 - 1);
                carResistance();
            }
            nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
            nlAddVector((0x8C + a4), (0x98 + a4));
            t214 = GetCollision2D((0x8C + a4), 30.0f);
            t215 = *(int *)((t214 + 0x1C));
            if (t215 != -1) {
                t216 = *(int *)(((t214 + 0xC) + 0x8));
                *(unsigned int *)(((0xEC + a4) + 0x8)) = t216;
                t217 = *(int *)(((t214 + 0xC) + 0x4));
                *(unsigned int *)(((0xEC + a4) + 0x4)) = t217;
                t218 = *(int *)(((t214 + 0xC) + 0x0));
                *(unsigned int *)(((0xEC + a4) + 0x0)) = t218;
                u219 = *(float *)((t214 + 0x18));
                *(float *)((a4 + 0x104)) = u219;
                u220 = *(float *)((a4 + 0x104));
                u221 = *(float *)((a4 + 0x90));
                if (u220 > u221) {
                    u222 = *(float *)((a4 + 0x104));
                    *(float *)((a4 + 0x90)) = u222;
                    carColliReflection();
                    t224 = *(int *)((a4 + 0x110));
                    *(unsigned int *)((a4 + 0x110)) = (int)((float)t224 + 5.0f);
                }
                t232 = *(int *)((a4 + 0x110));
                if ((int)t232 > (int)0xA) {
                    *(unsigned int *)((a4 + 0x110)) = 0xA;
                }
                nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                u234 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                u235 = *(float *)((a4 + 0xF8));
                *(float *)((a4 + 0xF8)) = (u235 - (u234 * (1.0f + 1.0f)));
                u236 = *(float *)((a4 + 0xF8));
                *(float *)((a4 + 0xF8)) = (u236 * 0.799999952f);
                Put_Motion2D(a4);
                nlPushUnitMatrix();
                t239 = *(short *)((a4 + 0xA8));
                nlRotateAZ((-(unsigned short)t239));
                t241 = *(short *)((a4 + 0xA4));
                nlRotateAX((-(unsigned short)t241));
                t243 = *(short *)((a4 + 0xA6));
                nlRotateAY((-(unsigned short)t243));
                FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                u246 = *(float *)(((int)stk + 24));
                *(float *)((a4 + 0xCC)) = u246;
                nlPopMatrix(0x1);
                carEntry(a4);
                t249 = *(int *)(((0x8C + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x14) + 0x8)) = t249;
                t250 = *(int *)(((0x8C + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x14) + 0x4)) = t250;
                t251 = *(int *)(((0x8C + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x14) + 0x0)) = t251;
                t252 = *(int *)(((0x98 + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x20) + 0x8)) = t252;
                t253 = *(int *)(((0x98 + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x20) + 0x4)) = t253;
                t254 = *(int *)(((0x98 + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x20) + 0x0)) = t254;
                u255 = *(float *)((a4 + 0x100));
                nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u255 - u175));
                nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                t259 = *(short *)((a4 + 0xA8));
                t260 = *(short *)((a4 + 0xA6));
                t261 = *(short *)((a4 + 0xA4));
                FUN_0c036256((a4 + 0x44), (unsigned short)t261, (unsigned short)t260);
                *(unsigned int *)((a4 + 0x68)) = 0x0;
                t298 = 0x68;
            } else {
                t263 = dropOutCheck(a4);
                if (t263 != 0) {
                    t264 = pcarEnd(a4);
                    t296 = t264;
                } else {
                    t265 = *(int *)((a4 + 0x110));
                    if ((int)t265 > (int)0xA) {
                        *(unsigned int *)((a4 + 0x110)) = 0xA;
                    }
                    nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                    u267 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                    u268 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u268 - (u267 * (1.0f + 1.0f)));
                    u269 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u269 * 0.799999952f);
                    Put_Motion2D(a4);
                    nlPushUnitMatrix();
                    t272 = *(short *)((a4 + 0xA8));
                    nlRotateAZ((-(unsigned short)t272));
                    t274 = *(short *)((a4 + 0xA4));
                    nlRotateAX((-(unsigned short)t274));
                    t276 = *(short *)((a4 + 0xA6));
                    nlRotateAY((-(unsigned short)t276));
                    FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                    u279 = *(float *)(((int)stk + 24));
                    *(float *)((a4 + 0xCC)) = u279;
                    nlPopMatrix(0x1);
                    carEntry(a4);
                    t282 = *(int *)(((0x8C + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t282;
                    t283 = *(int *)(((0x8C + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t283;
                    t284 = *(int *)(((0x8C + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t284;
                    t285 = *(int *)(((0x98 + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x20) + 0x8)) = t285;
                    t286 = *(int *)(((0x98 + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x20) + 0x4)) = t286;
                    t287 = *(int *)(((0x98 + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x20) + 0x0)) = t287;
                    u288 = *(float *)((a4 + 0x100));
                    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u288 - u175));
                    nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                    t292 = *(short *)((a4 + 0xA8));
                    t293 = *(short *)((a4 + 0xA6));
                    t294 = *(short *)((a4 + 0xA4));
                    FUN_0c036256((a4 + 0x44), (unsigned short)t294, (unsigned short)t293);
                    *(unsigned int *)((a4 + 0x68)) = 0x0;
                    t296 = 0x68;
                }
                t298 = t296;
            }
            t300 = t298;
        }
        t302 = t300;
    }
    return t302;
}

