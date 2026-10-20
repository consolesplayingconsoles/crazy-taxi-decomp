/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow4Normal(int, int);
int CheckClipping(float);
int CheckClippingProject3D(int, float);
int FUN_0c043b68(void);
int FUN_0c049aa8(int, int, float);
int FUN_0c04a090(int, int, int, int, int);
int FUN_0c04d49e(int, float, float);
int FUN_0c05003c(void);
int FUN_0c067c14(int, int, int, int, int);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c0789c0(int);
int FUN_0c078a70(int, int, int);
int FUN_0c07b570(int);
int FUN_0c080990(int, int);
int FUN_0c080d70(int, int);
int FUN_0c0813d0(int);
int FUN_0c1573a0(void);
int FUN_0c1573f2(int, int, int);
int FUN_0c157852(int, int, int, int, int, int);
int FUN_0c15a9a8(int);
int FUN_0c169514(int);
int GetCollision2D(int, float);
int Sound_Request(int, int);
int adxt_stat_decend(int);
int adxt_stat_decinfo(int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int);
int courseStatusEntry(int, int);
int courseStatusGet(int, int, int, int);
int courseStatusInit(int);
int crowdCreate(int, int);
int extRand(void);
int fcvRotate(int);
int findSplineSection(int, int, int);
int getCoursePointMove(int, int, int);
int getPieceWindow(int, int, int, int, int, int, int, int);
int kmSetPixelClipping(int, int, int, int);
int kmiFlipVertexBuffer(int);
int kmiReadRegister(int);
int kmiStartRenderTextureEntry(int);
int kmiWriteRegister(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int nlAddVector(int, int);
int nlArcTan(float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlProjectScreen3D(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleVector(int, int, float);
int nlSprPut(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int putCarModel(int, int);
int putTrainModel(int, int);
int replay(int);
int sklRotate(int);
void nlSetTranslate(int a4);
void nlUnitMatrix(void);
int nlDispStripTexOfsTrnsl(int a4, int a5, int a6);
int nlObjPutMLPreCalcLightRestore(void);
int FUN_0c1696c4(int a4);
int FUN_0c044f12(int a4);
int FUN_0c031d62(int a4, int a5, int a6);
int FUN_0c021600(int a4, int a5);
int FUN_0c156f4c(int a4, int a5, int a6);
int entryCarPut(int a4);
int FUN_0c051eea(void);
int kmRenderTextureDirect(int a4);
int carBalance(int a4, float f4);
int crowdSpawn(int a4, int a5, float f4);
int pedDodgeCheck(int a4, float f4, float f5);
int SklPlay(int a4, int a5, int a6, int a7);
int FcvPlayBuffer(int a4, int a5);



int nlDispStripTexOfsTrnsl(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c080990(0xC14AB40, a6);
    if (t0 == 0) {
        return FUN_0c080d70(a4, a5);
    }
    return t0;
}

int nlObjPutMLPreCalcLightRestore(void)
{
    return FUN_0c07b570(0x0);
}

int FUN_0c1696c4(int a4)
{
    int t0;
    int t3;
    int t6;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        adxt_stat_playing(a4);
    } else {
        if (t0 == 1) {
            adxt_stat_decinfo(a4);
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            if (t3 == 2) {
                adxt_stat_prep(a4);
            } else {
                if (t3 == 4) {
                    adxt_stat_decend(a4);
                } else {
                    t6 = *(signed char *)((a4 + 0x1));
                    if (t6 == 5) {
                        adxt_stat_playend();
                    }
                }
            }
        }
    }
    return FUN_0c169514(a4);
}

int FUN_0c044f12(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t9;
    int t7;
    float u8;
    int t11;
    int t21;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t24;
    int t25;
    int t27;
    int t28;
    int t29;
    int t32;
    int t30;
    float u31;
    int t34;
    int t23;
    int t10;
    int t33;

    t0 = *(int *)((a4 + 0x84));
    if ((t0 & 0xC00) != 0x400) {
        if ((t0 & 0xC00) == 0x800) {
            t1 = *(int *)((a4 + 0x11C));
            if ((float)t1 > 150.0f) {
                t2 = *(int *)((a4 + 0x11C));
                *(unsigned int *)((a4 + 0x11C)) = (t2 - 1);
                t10 = 0x11C;
            } else {
                FUN_0c04a090(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
                t4 = *(int *)((a4 + 0xD4));
                t5 = *(int *)((a4 + 0x80));
                t6 = courseStatusGet(t5, (t4 - 2), 0x0, 0x8);
                t9 = t6;
                if (t6 == 0) {
                    *(unsigned int *)((a4 + 0xC)) = 0xC0465A8;
                    t7 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t7 & 0xFFFFFFEF);
                    u8 = *(float *)((a4 + 0xB4));
                    *(float *)((a4 + 0xD0)) = (0.0599999987f + 0.00999999978f * (1000.0f / u8));
                    t9 = 0xD0;
                }
                t10 = t9;
            }
            t23 = t10;
        } else {
            t11 = extRand();
            t21 = t11;
            if ((t11 & 0x3FF) == 0) {
                t12 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t12 & 0xFFFFF3FF);
                t13 = *(int *)((a4 + 0x80));
                t14 = *(int *)0xC2A6690;
                t15 = *(int *)((((((t13 << 1) + t13) << 2) + t14) + 0x8));
                t16 = *(int *)((t15 + 0x0));
                if ((t16 & 0x4000) != 0) {
                    t17 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t17 | 0x800);
                } else {
                    t18 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t18 | 0x400);
                }
                *(unsigned int *)((a4 + 0x11C)) = 0x10E;
                t21 = 0x11C;
            }
            t23 = t21;
        }
        t34 = t23;
    } else {
        t24 = *(int *)((a4 + 0x11C));
        if ((float)t24 > 150.0f) {
            t25 = *(int *)((a4 + 0x11C));
            *(unsigned int *)((a4 + 0x11C)) = (t25 - 1);
            t33 = 0x11C;
        } else {
            FUN_0c04a090(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
            t27 = *(int *)((a4 + 0xD4));
            t28 = *(int *)((a4 + 0x80));
            t29 = courseStatusGet(t28, (t27 - 2), 0x0, 0x8);
            t32 = t29;
            if (t29 == 0) {
                *(unsigned int *)((a4 + 0xC)) = 0xC0465A8;
                t30 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t30 & 0xFFFFFFEF);
                u31 = *(float *)((a4 + 0xB4));
                *(float *)((a4 + 0xD0)) = (0.0599999987f + 0.00999999978f * (1000.0f / u31));
                t32 = 0xD0;
            }
            t33 = t32;
        }
        t34 = t33;
    }
    return t34;
}

int FUN_0c031d62(int a4, int a5, int a6)
{
    float t0;
    int t87;
    float t1;
    float u2;
    float u3;
    float u4;
    int t84;
    int t81;
    float u6;
    float u7;
    float u8;
    int t77;
    int t10;
    float u11;
    float u12;
    float u13;
    float u14;
    int t41;
    float u16;
    float u17;
    float u18;
    float u19;
    int t37;
    float u21;
    float u22;
    float u23;
    float u24;
    int t34;
    float u25;
    float u26;
    float u27;
    float u28;
    int t31;
    float u29;
    float u30;
    float u45;
    float u46;
    float u48;
    float u49;
    float u50;
    float u51;
    int t69;
    float u53;
    float u54;
    float u55;
    float u56;
    int t66;
    float u57;
    float u58;
    float u59;
    float u60;
    int t63;
    float u61;
    float u62;
    int t73;
    int stk[18] = {0};

    t0 = nlInnerProduct((a4 + 0xC), a5);
    t87 = 0x0;
    if (0.0f > t0) {
        t1 = nlInnerProduct(a5, a4);
        u2 = *(float *)((a5 + 0xC));
        u3 = *(float *)((a4 + 0x18));
        u4 = *(float *)((a6 + 0x8));
        t84 = 0x0;
        if (u4 > ((((-t1) - u2) + u3) / t0)) {
            t81 = 0x0;
            if (!((u3 / t0) > ((((-t1) - u2) + u3) / t0))) {
                FUN_0c0771b0((a5 + 0x14), (((int)stk + 4) + 0x18));
                u6 = *(float *)(((int)stk + 28));
                u7 = *(float *)(((int)stk + 32));
                u8 = *(float *)((a5 + 0x10));
                t77 = 0x0;
                if (!(((u7 * u7) + u6 * u6) > (u8 * u8))) {
                    FUN_0c0771b0(((a5 + 0x14) + 0xC), (((int)stk + 4) + 0xC));
                    t10 = *(int *)((a5 + 0x48));
                    if (t10 != 3) {
                        u11 = *(float *)(((int)stk + 20));
                        u12 = *(float *)(((int)stk + 28));
                        u13 = *(float *)(((int)stk + 16));
                        u14 = *(float *)(((int)stk + 32));
                        t41 = 0x0;
                        if (!(((u12 * u11) - (u14 * u13)) > 0.0f)) {
                            FUN_0c0771b0((((a5 + 0x14) + 0xC) + 0xC), ((int)stk + 4));
                            u16 = *(float *)(((int)stk + 8));
                            u17 = *(float *)(((int)stk + 16));
                            u18 = *(float *)(((int)stk + 20));
                            u19 = *(float *)(((int)stk + 4));
                            t37 = 0x0;
                            if (!(((u17 * u16) - (u18 * u19)) > 0.0f)) {
                                FUN_0c0771b0(((((a5 + 0x14) + 0xC) + 0xC) + 0xC), (((int)stk + 4) + 0xC));
                                u21 = *(float *)(((int)stk + 4));
                                u22 = *(float *)(((int)stk + 20));
                                u23 = *(float *)(((int)stk + 16));
                                u24 = *(float *)(((int)stk + 8));
                                t34 = 0x0;
                                if (!(((u21 * u22) - (u24 * u23)) > 0.0f)) {
                                    u25 = *(float *)(((int)stk + 32));
                                    u26 = *(float *)(((int)stk + 16));
                                    u27 = *(float *)(((int)stk + 28));
                                    u28 = *(float *)(((int)stk + 20));
                                    t31 = 0x0;
                                    if (!(((u26 * u25) - (u28 * u27)) > 0.0f)) {
                                        *(float *)((a6 + 0x8)) = ((((-t1) - u2) + u3) / t0);
                                        *(unsigned int *)((a6 + 0x0)) = a5;
                                        *(float *)((a6 + 0x4)) = t0;
                                        u29 = *(float *)((a4 + 0x18));
                                        u30 = *(float *)((a4 + 0x1C));
                                        *(float *)((a4 + 0x20)) = (u29 + ((((-t1) - u2) + u3) / t0) * u30);
                                        t31 = 0x1;
                                    }
                                    t34 = t31;
                                }
                                t37 = t34;
                            }
                            t41 = t37;
                        }
                        t73 = t41;
                    } else {
                        u45 = *(float *)(((int)stk + 16));
                        *(float *)(((int)stk + 28)) = u45;
                        u46 = *(float *)(((int)stk + 20));
                        *(float *)(((int)stk + 32)) = u46;
                        FUN_0c0771b0((((a5 + 0x14) + 0xC) + 0xC), ((int)stk + 4));
                        u48 = *(float *)(((int)stk + 8));
                        u49 = *(float *)(((int)stk + 16));
                        u50 = *(float *)(((int)stk + 20));
                        u51 = *(float *)(((int)stk + 4));
                        t69 = 0x0;
                        if (!(((u49 * u48) - (u50 * u51)) > 0.0f)) {
                            FUN_0c0771b0(((((a5 + 0x14) + 0xC) + 0xC) + 0xC), (((int)stk + 4) + 0xC));
                            u53 = *(float *)(((int)stk + 4));
                            u54 = *(float *)(((int)stk + 20));
                            u55 = *(float *)(((int)stk + 16));
                            u56 = *(float *)(((int)stk + 8));
                            t66 = 0x0;
                            if (!(((u53 * u54) - (u56 * u55)) > 0.0f)) {
                                u57 = *(float *)(((int)stk + 32));
                                u58 = *(float *)(((int)stk + 16));
                                u59 = *(float *)(((int)stk + 28));
                                u60 = *(float *)(((int)stk + 20));
                                t63 = 0x0;
                                if (!(((u58 * u57) - (u60 * u59)) > 0.0f)) {
                                    *(float *)((a6 + 0x8)) = ((((-t1) - u2) + u3) / t0);
                                    *(unsigned int *)((a6 + 0x0)) = a5;
                                    *(float *)((a6 + 0x4)) = t0;
                                    u61 = *(float *)((a4 + 0x18));
                                    u62 = *(float *)((a4 + 0x1C));
                                    *(float *)((a4 + 0x20)) = (u61 + ((((-t1) - u2) + u3) / t0) * u62);
                                    t63 = 0x1;
                                }
                                t66 = t63;
                            }
                            t69 = t66;
                        }
                        t73 = t69;
                    }
                    t77 = t73;
                }
                t81 = t77;
            }
            t84 = t81;
        }
        t87 = t84;
    }
    return t87;
}

int FUN_0c021600(int a4, int a5)
{
    float u3;
    int t0;
    float u5;
    float u6;
    float u7;
    int t8;
    float u9;
    float u14;
    float u22;
    int t19;
    float u24;
    float u25;
    float u26;
    float u27;
    int t28;
    float u29;
    float u44;
    float u40;
    float u43;
    float u18;
    float u13;
    float u37;
    float u33;

    if ((int)(short)a5 >= 0) {
        u3 = ((float)(short)a5 * 0.000224946518f);
        if ((int)(short)a5 >= (int)0x480) {
            t0 = nlArcTan(((float)((short)a5 - 1280) / 5888.0f));
            u3 = (0.287931502f + 9.10497765e-05f * (((-((float)t0 / 16384.0f)) + 1.0f) * (float)((short)a5 - 1280)));
        }
        u5 = *(float *)((a4 + 0x10));
        if (!(30.6122456f > u5)) {
            u6 = *(float *)((a4 + 0x10));
            if (51.0204086f > u6) {
                u7 = *(float *)((a4 + 0x10));
                t8 = nlArcTan(((u7 + -30.6122456f) / 20.4081631f));
                u13 = (6.12244844f + 0.199999988f * ((u7 + -30.6122456f) * ((-((float)t8 / 16384.0f)) + 1.0f)));
            } else {
                u9 = *(float *)((a4 + 0x10));
                u13 = ((-((u9 + -51.0204086f) * 0.199999988f)) + 8.16326427f);
            }
            u18 = u13;
        } else {
            u14 = *(float *)((a4 + 0x10));
            u18 = (u14 * 0.199999988f);
        }
        u40 = u3;
        u43 = u18;
    } else {
        u22 = ((float)(short)a5 * 0.000224946518f);
        if ((int)(short)a5 <= (int)0xFFFFFB80) {
            t19 = nlArcTan(((float)((short)a5 + 0x500) / -5888.0f));
            u22 = (-0.287931502f + 9.10497765e-05f * (((-((float)t19 / 16384.0f)) + 1.0f) * (float)((short)a5 + 0x500)));
        }
        u24 = *(float *)((a4 + 0x10));
        if (30.6122456f > u24) {
            u25 = *(float *)((a4 + 0x10));
            u37 = (u25 * 0.199999988f);
        } else {
            u26 = *(float *)((a4 + 0x10));
            if (51.0204086f > u26) {
                u27 = *(float *)((a4 + 0x10));
                t28 = nlArcTan(((u27 + -30.6122456f) / 20.4081631f));
                u33 = (6.12244844f + 0.199999988f * ((u27 + -30.6122456f) * ((-((float)t28 / 16384.0f)) + 1.0f)));
            } else {
                u29 = *(float *)((a4 + 0x10));
                u33 = ((-((u29 + -51.0204086f) * 0.199999988f)) + 8.16326427f);
            }
            u37 = u33;
        }
        u40 = u22;
        u43 = u37;
    }
    u44 = (u43 * 0.994999945f);
    if (0.199999988f > (u43 * 0.994999945f)) {
        u44 = 0.199999988f;
    }
    *(float *)((a4 + 0x20)) = (u40 * u44);
    return 0x20;
}

int FUN_0c156f4c(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t30;
    int t33;
    int t34;
    int t35;
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
    int t18;
    int t19;
    int t23;
    int t26;
    int t38;
    int t39;
    int t36;
    int t37;
    int t82;
    int t40;
    int t41;
    int t42;
    int t43;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t54;
    int t55;
    int t56;
    int t57;
    int t74;
    int t58;
    int t59;
    int t60;
    int t61;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t71;
    int t72;
    int t73;
    int t28;
    int t25;
    int t79;
    int t76;
    int stk[14] = {0};

    *(unsigned short *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t1 = a5;
    if (t0 != 0) {
        t1 = (a5 + (0x20 - t0));
    }
    t2 = *(short *)(((int)stk + 20));
    t3 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x8));
    t30 = 0x0;
    t33 = a5;
    t34 = 0x0;
    t35 = 0x0;
    if (t3 != 0) {
        t4 = (((t2 << 2) + t2) << 2);
        t5 = t2;
        t6 = t3;
        t7 = a5;
        t8 = 0x0;
        t9 = 0x0;
        t10 = 0x0;
        do {
            t11 = *(int *)((t6 + 0x10));
            if ((int)t11 >= (int)t1) {
                if (t9 == 0) {
                    t9 = t6;
                }
                t5 = 0xC08106C;
                t12 = *(int *)((t6 + 0xC));
                t4 = 0x800;
                t13 = (int)((int)t12 % (int)t4);
                t4 = t13;
                if (t4 != 0) {
                    t14 = *(int *)((t6 + 0xC));
                    t7 = t14;
                    t5 = 0xFFFFF800;
                    *(unsigned int *)(((int)stk + 12)) = t7;
                    t7 = (t7 + 0x800);
                    t15 = *(int *)((t6 + 0x10));
                    t7 = (t7 & t5);
                    t16 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 12)) = (t16 + t15);
                    if ((int)t7 < (int)(t16 + t15)) {
                        t17 = *(int *)((t6 + 0xC));
                        if ((int)(t7 - t17) < (int)t1) {
                            t18 = *(int *)(((int)stk + 12));
                            if ((int)(t18 - t7) >= (int)t1) {
                                t8 = 0x2;
                                t10 = t6;
                                t6 = 0x0;
                            } else {
                                t19 = *(int *)((t6 + 0x8));
                                t6 = t19;
                            }
                        } else {
                            t8 = 0x1;
                            t10 = t6;
                            t6 = 0x0;
                        }
                    } else {
                        t8 = 0x1;
                        t10 = t6;
                        t6 = 0x0;
                    }
                    t25 = t5;
                } else {
                    t23 = *(int *)((t6 + 0xC));
                    t7 = t23;
                    t8 = 0x1;
                    t10 = t6;
                    t6 = 0x0;
                    t25 = 0xC08106C;
                }
                t28 = t25;
            } else {
                t26 = *(int *)((t6 + 0x8));
                t6 = t26;
                t28 = t5;
            }
            t5 = t28;
        } while (t6 != 0);
        t30 = t10;
        t33 = t7;
        t34 = t8;
        t35 = t9;
    }
    t38 = t30;
    t39 = t34;
    if (t34 == 0) {
        t36 = t30;
        t37 = t34;
        if (t35 != 0) {
            t36 = t35;
            t37 = 0x1;
        }
        t38 = t36;
        t39 = t37;
    }
    t82 = 0x3;
    if (t38 != 0) {
        if (t39 == 2) {
            t40 = *(short *)(((int)stk + 20));
            t41 = *(int *)(((int)stk + 16));
            t42 = FUN_0c157852(t40, t33, t1, t41, 0x0, 0x1);
            t79 = t42;
        } else {
            t43 = *(int *)((t38 + 0x10));
            if (t43 == t1) {
                kmytex_FBDeQueueEntry((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x8), (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0xC), t38);
                FUN_0c1573f2(((((t2 << 2) + t2) << 2) + 0xC177FBC), (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x4), t38);
                t46 = *(int *)((t38 + 0xC));
                t47 = *(int *)(((int)stk + 16));
                *(unsigned int *)((t47 + 0x8)) = t46;
                t48 = *(int *)(((int)stk + 16));
                *(unsigned int *)((t38 + 0x14)) = t48;
                *(unsigned short *)((t38 + 0x0)) = 0x1;
                t49 = *(short *)(((int)stk + 20));
                if (t49 == 0) {
                    t50 = *(short *)((t38 + 0x0));
                    *(unsigned short *)((t38 + 0x0)) = (t50 | 0x200);
                } else {
                    t51 = *(short *)((t38 + 0x0));
                    *(unsigned short *)((t38 + 0x0)) = (t51 | 0x400);
                }
                t54 = *(short *)((t38 + 0x0));
                *(unsigned short *)((t38 + 0x0)) = (t54 | 0x4);
                t55 = *(int *)((t38 + 0x10));
                t56 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10));
                *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10)) = (t56 - t55);
                t76 = 0x0;
            } else {
                t57 = FUN_0c1573a0();
                t74 = 0x3;
                if (t57 != 0) {
                    t58 = *(int *)((t38 + 0xC));
                    *(unsigned int *)((t57 + 0xC)) = t58;
                    *(unsigned int *)((t57 + 0x10)) = t1;
                    t59 = *(int *)((t38 + 0x10));
                    *(unsigned int *)((t38 + 0x10)) = (t59 - t1);
                    t60 = *(int *)((t38 + 0xC));
                    *(unsigned int *)((t38 + 0xC)) = (t60 + t1);
                    *(unsigned int *)(((int)stk + 12)) = ((((t2 << 2) + t2) << 2) + 0xC177FBC);
                    t61 = *(int *)(((int)stk + 12));
                    FUN_0c1573f2(t61, (((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x4), t57);
                    t63 = *(int *)((t57 + 0xC));
                    t64 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((t64 + 0x8)) = t63;
                    t65 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((t57 + 0x14)) = t65;
                    t66 = *(short *)(((int)stk + 20));
                    if (t66 == 0) {
                        t67 = *(short *)((t57 + 0x0));
                        *(unsigned short *)((t57 + 0x0)) = (t67 | 0x200);
                    } else {
                        t68 = *(short *)((t57 + 0x0));
                        *(unsigned short *)((t57 + 0x0)) = (t68 | 0x400);
                    }
                    t71 = *(short *)((t57 + 0x0));
                    *(unsigned short *)((t57 + 0x0)) = (t71 | 0x4);
                    t72 = *(int *)((t57 + 0x10));
                    t73 = *(int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10));
                    *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0xC177FBC) + 0x10)) = (t73 - t72);
                    t74 = 0x0;
                }
                t76 = t74;
            }
            t79 = t76;
        }
        t82 = t79;
    }
    return t82;
}

int entryCarPut(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
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
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u25;
    int t26;
    float u27;
    float u28;
    int t29;
    float u30;
    int t34;
    float u31;
    float u32;
    int t33;
    float u37;
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
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int stk[17] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A44C8 = 0x0;
        *(unsigned int *)0xC2A44A8 = 0x0;
        t0 = 0xC2A44CC;
        t1 = 0x0;
        do {
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
        } while ((int)t1 < (int)0x64);
        *(unsigned int *)0xC2A44AC = 0x0;
        t2 = *(int *)0xC0A4790;
        *(unsigned int *)0xC2A44B8 = t2;
        t3 = *(int *)0xC0A478C;
        *(unsigned int *)0xC2A44B4 = t3;
        t4 = *(int *)0xC0A4788;
        *(unsigned int *)0xC2A44B0 = t4;
        *(float *)0xC2A44BC = 0.0f;
        *(float *)0xC2A44C0 = 20.0f;
        *(float *)0xC2A44C4 = -100.0f;
        courseStatusInit(0x0);
        t6 = FUN_0c043b68();
        t55 = t6;
    } else {
        courseStatusInit(0x2);
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        t8 = 0xC0449C8;
        t9 = 0xC2A44CC;
        for (;;) {
            t10 = *(int *)(((int)stk + 12));
            t11 = *(int *)0xC2A44C8;
            if ((unsigned int)t10 < (unsigned int)t11) {
                t8 = 0x84;
                t12 = *(int *)((t9 + 0x0));
                t13 = *(int *)((t12 + t8));
                if ((t13 & 0x10) == 0) {
                    t8 = 0xD4;
                    t14 = *(int *)((t12 + t8));
                    t8 = (t8 - 84);
                    t15 = *(int *)((t12 + t8));
                    t16 = courseStatusEntry(t15, t14);
                    t8 = t16;
                    t8 = 0x78;
                    t17 = *(int *)((t12 + t8));
                    if ((int)t17 >= (int)0xA) {
                        t8 = 0x80;
                        t18 = *(int *)((t12 + t8));
                        t8 = 0xD4;
                        *(unsigned int *)(((int)stk + 8)) = t18;
                        t19 = *(int *)((t12 + t8));
                        *(unsigned int *)(((int)stk + 4)) = (t19 - 1);
                        t20 = getCoursePointMove((((int)stk + 4) + 0x4), ((int)stk + 4), 0x0);
                        t8 = t20;
                        t21 = *(int *)(((int)stk + 4));
                        t22 = *(int *)(((int)stk + 8));
                        t23 = courseStatusEntry(t22, t21);
                        t8 = t23;
                    }
                }
                t24 = nlProjectScreen3D((0x8C + t12));
                t8 = t24;
                t8 = 0xB0;
                u25 = *(float *)((t12 + t8));
                t26 = CheckClippingProject3D((((int)stk + 4) + 0xC), u25);
                t8 = t26;
                if (t8 != 0) {
                    t8 = 0xC044AD0;
                    u27 = *(float *)((t8 + 0x0));
                    t8 = 0x14;
                    u28 = *(float *)((((int)stk + 4) + t8));
                    if (u28 > u27) {
                        t8 = 0x84;
                        t29 = *(int *)((t12 + t8));
                        *(unsigned int *)((t12 + t8)) = (t29 | 0x10000);
                        t8 = 0x14;
                        u30 = *(float *)((((int)stk + 4) + t8));
                        t34 = 0x1;
                        if (u30 > -400.0f) {
                            t8 = 0xC;
                            u31 = *(float *)((((int)stk + 4) + t8));
                            t8 = 0xC044AD8;
                            u32 = *(float *)((t8 + 0x0));
                            t33 = 0x1;
                            if (u32 > (u31 < 0.0f ? -u31 : u31)) {
                                t33 = 0x0;
                            }
                            t34 = t33;
                        }
                        u37 = *(float *)0xC1798A4;
                        t38 = t34;
                        if (40.0f > u37) {
                            t38 = 0x0;
                        }
                        t39 = nlPushMatrix(0x0);
                        t8 = t39;
                        t40 = nlTranslateV((0x8C + t12));
                        t8 = t40;
                        t8 = 0xA6;
                        t41 = *(short *)((t12 + t8));
                        t42 = nlRotateAY((unsigned short)t41);
                        t8 = t42;
                        t8 = 0xA4;
                        t43 = *(short *)((t12 + t8));
                        t44 = nlRotateAX((unsigned short)t43);
                        t8 = t44;
                        t8 = 0xA8;
                        t45 = *(short *)((t12 + t8));
                        t46 = nlRotateAZ((unsigned short)t45);
                        t8 = t46;
                        t8 = 0x78;
                        t47 = *(int *)((t12 + t8));
                        if ((int)t47 < (int)0x10) {
                            t48 = putCarModel(t12, t38);
                            t8 = t48;
                        } else {
                            t49 = putTrainModel(t12, t38);
                            t8 = t49;
                        }
                        t50 = nlPopMatrix(0x1);
                        t8 = t50;
                    } else {
                        t8 = 0x84;
                        t51 = *(int *)((t12 + t8));
                        *(unsigned int *)((t12 + t8)) = (t51 & 0xFFFEFFFF);
                    }
                } else {
                    t8 = 0x84;
                    t52 = *(int *)((t12 + t8));
                    *(unsigned int *)((t12 + t8)) = (t52 & 0xFFFEFFFF);
                }
                t53 = *(int *)(((int)stk + 12));
                t9 = (t9 + 0x4);
                *(unsigned int *)(((int)stk + 12)) = (t53 + 0x1);
                continue;
            }
            break;
        }
        t54 = replay(0x0);
        if (t54 != 4) {
            *(unsigned int *)0xC2A44C8 = 0x0;
        }
        t55 = t54;
    }
    return t55;
}

int FUN_0c051eea(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u5;
    float u8;
    float u11;
    float u12;
    int t17;
    float u18;
    float u19;
    float u22;
    float u23;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t68;
    float u50;
    int t51;
    int t52;
    float u53;
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
    int t67;
    float u69;
    int t70;
    int t71;
    float u72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t86;
    float u88;
    int t89;
    int t90;
    float u91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t105;
    int t106;
    int t87;
    int stk[16] = {0};

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = *(int *)0xC0D0844;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t0;
    t1 = *(int *)0xC0D0840;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t1;
    t2 = *(int *)0xC0D083C;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2A759C;
    u4 = *(float *)0xC2A7500;
    if (t3 == 0) {
        if (0.0f > u4) {
            u5 = *(float *)0xC2A7500;
            *(float *)0xC2A7500 = (u5 + 90.0f);
        } else {
            FUN_0c04d49e(0xC2A7500, 0.599999964f, 0.0f);
        }
    } else {
        if (t3 == 1) {
            if (u4 > 0.0f) {
                u8 = *(float *)0xC2A7500;
                *(float *)0xC2A7500 = (u8 - 60.0f);
            } else {
                FUN_0c04d49e(0xC2A7500, 0.599999964f, 0.0f);
            }
            u11 = *(float *)0xC2A7508;
            if (0.0f > u11) {
                u12 = *(float *)0xC2A7508;
                *(float *)0xC2A7508 = (u12 + (1.0f + 1.0f));
            } else {
                FUN_0c04d49e(0xC2A7508, 0.599999964f, 0.0f);
            }
        }
    }
    t17 = *(int *)0xC2A759C;
    if (t17 == 2) {
        u18 = *(float *)0xC2A7500;
        if (0.0f > u18) {
            u19 = *(float *)0xC2A7500;
            *(float *)0xC2A7500 = (u19 + 30.0f);
        } else {
            FUN_0c04d49e(0xC2A7500, 0.599999964f, 0.0f);
        }
        u22 = *(float *)0xC2A7508;
        if (u22 > 0.0f) {
            u23 = *(float *)0xC2A7508;
            *(float *)0xC2A7508 = (u23 - 1.0f);
        } else {
            *(float *)0xC2A7508 = 0.0f;
        }
        u25 = *(float *)0xC2A7500;
        if (!(0.0f > u25)) {
            u26 = *(float *)0xC2A7500;
            if (0.00999999978f > u26) {
                u27 = *(float *)0xC2A7504;
                if (u27 > 0.0f) {
                    u28 = *(float *)0xC2A7504;
                    *(float *)0xC2A7504 = (u28 - 49.0f);
                } else {
                    if (0.0f > u27) {
                        u29 = *(float *)0xC2A7504;
                        *(float *)0xC2A7504 = (u29 + 10.0f);
                    } else {
                        *(float *)0xC2A7504 = 0.0f;
                    }
                }
            }
        }
    }
    t45 = *(int *)0xC2A751C;
    t46 = *(int *)((t45 + 0x0));
    if (t46 == 3) {
        *(unsigned int *)(((int)stk + 8)) = 0xFFFFFFE8;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC1305D8;
    t47 = 0x0;
    do {
        t48 = 0x0;
        do {
            if (t47 == 3) {
                if (t48 == 2) {
                    t49 = *(int *)0xC2A75C4;
                    t68 = t49;
                    if (t49 != 1) {
                        u50 = *(float *)0xC2A7500;
                        *(float *)0xC2A7464 = (float)(int)((float)((((((t47 - 2) << 2) << 2) << 2) << 1) + 0x14E) + u50);
                        t51 = *(int *)0xC2A751C;
                        t52 = *(int *)((t51 + 0x0));
                        u53 = *(float *)0xC2A7504;
                        t54 = *(int *)(((t52 << 2) + 0xC130728));
                        t55 = *(int *)(((int)stk + 8));
                        *(float *)0xC2A7468 = (float)(int)((float)((((((((t48 - 1) << 2) << 2) << 2) << 1) - t54) + t55) + 0x118) + u53);
                        *(unsigned int *)0xC2A7488 = 0x0;
                        t56 = *(int *)0xC2A75C4;
                        if (t56 == 0) {
                            t57 = *(int *)0xC2A751C;
                            t58 = *(int *)((t57 + 0x0));
                            t59 = *(int *)((0xC1305C8 + (t58 << 2)));
                            t60 = *(int *)(((((t48 << 2) + t47) << 2) + t59));
                            *(unsigned int *)0xC2A7460 = t60;
                        } else {
                            t61 = *(int *)(((int)stk + 4));
                            t62 = *(int *)((t61 + 0x0));
                            t63 = *(int *)(((((t48 << 2) + t47) << 2) + t62));
                            *(unsigned int *)0xC2A7460 = t63;
                        }
                        t67 = nlSprPut(0xC2A7460);
                        t68 = t67;
                    }
                    t87 = t68;
                } else {
                    u69 = *(float *)0xC2A7500;
                    *(float *)0xC2A7464 = (float)(int)((float)((((((t47 - 2) << 2) << 2) << 2) << 1) + 0x14E) + u69);
                    t70 = *(int *)0xC2A751C;
                    t71 = *(int *)((t70 + 0x0));
                    u72 = *(float *)0xC2A7504;
                    t73 = *(int *)(((t71 << 2) + 0xC130728));
                    t74 = *(int *)(((int)stk + 8));
                    *(float *)0xC2A7468 = (float)(int)((float)((((((((t48 - 1) << 2) << 2) << 2) << 1) - t73) + t74) + 0x118) + u72);
                    *(unsigned int *)0xC2A7488 = 0x0;
                    t75 = *(int *)0xC2A75C4;
                    if (t75 == 0) {
                        t76 = *(int *)0xC2A751C;
                        t77 = *(int *)((t76 + 0x0));
                        t78 = *(int *)((0xC1305C8 + (t77 << 2)));
                        t79 = *(int *)(((((t48 << 2) + t47) << 2) + t78));
                        *(unsigned int *)0xC2A7460 = t79;
                    } else {
                        t80 = *(int *)(((int)stk + 4));
                        t81 = *(int *)((t80 + 0x0));
                        t82 = *(int *)(((((t48 << 2) + t47) << 2) + t81));
                        *(unsigned int *)0xC2A7460 = t82;
                    }
                    t86 = nlSprPut(0xC2A7460);
                    t87 = t86;
                }
                t106 = t87;
            } else {
                u88 = *(float *)0xC2A7500;
                *(float *)0xC2A7464 = (float)(int)((float)((((((t47 - 2) << 2) << 2) << 2) << 1) + 0x14E) + u88);
                t89 = *(int *)0xC2A751C;
                t90 = *(int *)((t89 + 0x0));
                u91 = *(float *)0xC2A7504;
                t92 = *(int *)(((t90 << 2) + 0xC130728));
                t93 = *(int *)(((int)stk + 8));
                *(float *)0xC2A7468 = (float)(int)((float)((((((((t48 - 1) << 2) << 2) << 2) << 1) - t92) + t93) + 0x118) + u91);
                *(unsigned int *)0xC2A7488 = 0x0;
                t94 = *(int *)0xC2A75C4;
                if (t94 == 0) {
                    t95 = *(int *)0xC2A751C;
                    t96 = *(int *)((t95 + 0x0));
                    t97 = *(int *)((0xC1305C8 + (t96 << 2)));
                    t98 = *(int *)(((((t48 << 2) + t47) << 2) + t97));
                    *(unsigned int *)0xC2A7460 = t98;
                } else {
                    t99 = *(int *)(((int)stk + 4));
                    t100 = *(int *)((t99 + 0x0));
                    t101 = *(int *)(((((t48 << 2) + t47) << 2) + t100));
                    *(unsigned int *)0xC2A7460 = t101;
                }
                t105 = nlSprPut(0xC2A7460);
                t106 = t105;
            }
            t48 = (t48 + 0x1);
        } while ((int)t48 < (int)0x3);
        t47 = (t47 + 0x1);
    } while ((int)t47 < (int)0x4);
    return t106;
}

int kmRenderTextureDirect(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t794;
    int t798;
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
    int t41;
    int t43;
    int t45;
    int t47;
    int t49;
    int t53;
    int t54;
    int t55;
    int t58;
    int t60;
    int t62;
    int t64;
    int t66;
    int t70;
    int t71;
    int t72;
    int t75;
    int t77;
    int t79;
    int t81;
    int t83;
    int t87;
    int t88;
    int t89;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t103;
    int t105;
    int t107;
    int t109;
    int t111;
    int t115;
    int t116;
    int t117;
    int t120;
    int t122;
    int t124;
    int t126;
    int t128;
    int t132;
    int t133;
    int t134;
    int t137;
    int t139;
    int t141;
    int t143;
    int t145;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t167;
    int t169;
    int t171;
    int t173;
    int t175;
    int t179;
    int t180;
    int t181;
    int t184;
    int t186;
    int t188;
    int t190;
    int t192;
    int t196;
    int t197;
    int t198;
    int t201;
    int t203;
    int t205;
    int t207;
    int t209;
    int t213;
    int t214;
    int t215;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t226;
    int t229;
    int t231;
    int t233;
    int t235;
    int t237;
    int t241;
    int t242;
    int t243;
    int t246;
    int t248;
    int t250;
    int t252;
    int t254;
    int t258;
    int t259;
    int t260;
    int t263;
    int t265;
    int t267;
    int t269;
    int t271;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t281;
    int t282;
    int t283;
    int t284;
    int t285;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t292;
    int t293;
    int t294;
    int t295;
    int t296;
    int t299;
    int t301;
    int t303;
    int t305;
    int t307;
    int t311;
    int t312;
    int t313;
    int t316;
    int t318;
    int t320;
    int t322;
    int t324;
    int t328;
    int t329;
    int t330;
    int t333;
    int t335;
    int t337;
    int t339;
    int t341;
    int t345;
    int t346;
    int t347;
    int t349;
    int t350;
    int t351;
    int t352;
    int t353;
    int t354;
    int t355;
    int t356;
    int t357;
    int t358;
    int t361;
    int t363;
    int t365;
    int t367;
    int t369;
    int t373;
    int t374;
    int t375;
    int t378;
    int t380;
    int t382;
    int t384;
    int t386;
    int t390;
    int t391;
    int t392;
    int t395;
    int t397;
    int t399;
    int t401;
    int t403;
    int t407;
    int t408;
    int t409;
    int t410;
    int t411;
    int t413;
    int t414;
    int t415;
    int t416;
    int t417;
    int t418;
    int t419;
    int t420;
    int t421;
    int t422;
    int t425;
    int t427;
    int t429;
    int t431;
    int t433;
    int t437;
    int t438;
    int t439;
    int t442;
    int t444;
    int t446;
    int t448;
    int t450;
    int t454;
    int t455;
    int t456;
    int t459;
    int t461;
    int t463;
    int t465;
    int t467;
    int t471;
    int t472;
    int t473;
    int t475;
    int t476;
    int t477;
    int t478;
    int t479;
    int t480;
    int t481;
    int t482;
    int t483;
    int t484;
    int t487;
    int t489;
    int t491;
    int t493;
    int t495;
    int t499;
    int t500;
    int t501;
    int t504;
    int t506;
    int t508;
    int t510;
    int t512;
    int t516;
    int t517;
    int t518;
    int t521;
    int t523;
    int t525;
    int t527;
    int t529;
    int t533;
    int t534;
    int t535;
    int t536;
    int t537;
    int t538;
    int t539;
    int t540;
    int t541;
    int t542;
    int t543;
    int t545;
    int t546;
    int t547;
    int t548;
    int t549;
    int t550;
    int t551;
    int t552;
    int t553;
    int t554;
    int t557;
    int t559;
    int t561;
    int t563;
    int t565;
    int t569;
    int t570;
    int t571;
    int t574;
    int t576;
    int t578;
    int t580;
    int t582;
    int t586;
    int t587;
    int t588;
    int t591;
    int t593;
    int t595;
    int t597;
    int t599;
    int t603;
    int t604;
    int t605;
    int t607;
    int t608;
    int t609;
    int t610;
    int t611;
    int t612;
    int t613;
    int t614;
    int t615;
    int t616;
    int t619;
    int t621;
    int t623;
    int t625;
    int t627;
    int t631;
    int t632;
    int t633;
    int t636;
    int t638;
    int t640;
    int t642;
    int t644;
    int t648;
    int t649;
    int t650;
    int t653;
    int t655;
    int t657;
    int t659;
    int t661;
    int t665;
    int t666;
    int t667;
    int t668;
    int t669;
    int t671;
    int t672;
    int t673;
    int t674;
    int t675;
    int t676;
    int t677;
    int t678;
    int t679;
    int t680;
    int t683;
    int t685;
    int t687;
    int t689;
    int t691;
    int t695;
    int t696;
    int t697;
    int t700;
    int t702;
    int t704;
    int t706;
    int t708;
    int t712;
    int t713;
    int t714;
    int t717;
    int t719;
    int t721;
    int t723;
    int t725;
    int t729;
    int t730;
    int t731;
    int t733;
    int t734;
    int t735;
    int t736;
    int t737;
    int t738;
    int t739;
    int t740;
    int t741;
    int t742;
    int t745;
    int t747;
    int t749;
    int t751;
    int t753;
    int t757;
    int t758;
    int t759;
    int t762;
    int t764;
    int t766;
    int t768;
    int t770;
    int t774;
    int t775;
    int t776;
    int t779;
    int t781;
    int t783;
    int t785;
    int t787;
    int t791;
    int t792;
    int t793;
    int t1145;
    int t799;
    int t1064;
    int t1068;
    int t800;
    int t801;
    int t802;
    int t803;
    int t804;
    int t805;
    int t806;
    int t807;
    int t808;
    int t809;
    int t810;
    int t811;
    int t812;
    int t813;
    int t815;
    int t816;
    int t817;
    int t818;
    int t819;
    int t820;
    int t821;
    int t822;
    int t823;
    int t824;
    int t827;
    int t829;
    int t831;
    int t833;
    int t835;
    int t839;
    int t840;
    int t841;
    int t844;
    int t846;
    int t848;
    int t850;
    int t852;
    int t856;
    int t857;
    int t858;
    int t861;
    int t863;
    int t865;
    int t867;
    int t869;
    int t873;
    int t874;
    int t875;
    int t877;
    int t878;
    int t879;
    int t880;
    int t881;
    int t882;
    int t883;
    int t884;
    int t885;
    int t886;
    int t889;
    int t891;
    int t893;
    int t895;
    int t897;
    int t901;
    int t902;
    int t903;
    int t906;
    int t908;
    int t910;
    int t912;
    int t914;
    int t918;
    int t919;
    int t920;
    int t923;
    int t925;
    int t927;
    int t929;
    int t931;
    int t935;
    int t936;
    int t937;
    int t938;
    int t939;
    int t941;
    int t942;
    int t943;
    int t944;
    int t945;
    int t946;
    int t947;
    int t948;
    int t949;
    int t950;
    int t953;
    int t955;
    int t957;
    int t959;
    int t961;
    int t965;
    int t966;
    int t967;
    int t970;
    int t972;
    int t974;
    int t976;
    int t978;
    int t982;
    int t983;
    int t984;
    int t987;
    int t989;
    int t991;
    int t993;
    int t995;
    int t999;
    int t1000;
    int t1001;
    int t1003;
    int t1004;
    int t1005;
    int t1006;
    int t1007;
    int t1008;
    int t1009;
    int t1010;
    int t1011;
    int t1012;
    int t1015;
    int t1017;
    int t1019;
    int t1021;
    int t1023;
    int t1027;
    int t1028;
    int t1029;
    int t1032;
    int t1034;
    int t1036;
    int t1038;
    int t1040;
    int t1044;
    int t1045;
    int t1046;
    int t1049;
    int t1051;
    int t1053;
    int t1055;
    int t1057;
    int t1061;
    int t1062;
    int t1063;
    int t1069;
    int t1070;
    int t1071;
    int t1072;
    int t1073;
    int t1076;
    int t1074;
    int t1077;
    int t1080;
    int t1078;
    int t1082;
    int t1083;
    int t1084;
    int t1085;
    int t1109;
    int t1111;
    int t1086;
    int t1087;
    int t1088;
    int t1089;
    int t1090;
    int t1091;
    int t1094;
    int t1096;
    int t1098;
    int t1100;
    int t1102;
    int t1106;
    int t1107;
    int t1108;
    int t1116;
    int t1118;
    int t1120;
    int t1122;
    int t1124;
    int t1128;
    int t1129;
    int t1130;
    int t1153;
    int t1138;
    int t1131;

    t0 = FUN_0c15a9a8(a4);
    if (t0 != 0) {
        t1 = *(int *)0xC178274;
        kmiFlipVertexBuffer(t1);
        t1153 = t0;
    } else {
        t3 = *(int *)((a4 + 0xC));
        *(unsigned int *)0xC2EAB88 = ((unsigned int)((unsigned int)((unsigned int)((t3 << 2) << 2) >> 2) >> 2) >> 2);
        t4 = *(int *)((a4 + 0x1C));
        *(unsigned int *)0xC2EAB8C = (t4 | 0x1000000);
        t5 = *(int *)0xC2EA9DC;
        *(unsigned int *)0xC2EA9F0 = 0x0;
        t6 = *(int *)0xC2EA88C;
        t794 = 0xC2EA88C;
        t798 = 0x0;
        if (t6 != 0) {
            for (;;) {
                t7 = *(int *)0xC2EA8E8;
                t8 = *(int *)0xC2EA8EC;
                t9 = ((int (*)(int))(t7))(t8);
                t10 = *(int *)0xC2EA8A8;
                t11 = *(int *)0xC2EA9F0;
                if ((unsigned int)t11 > (unsigned int)t10) break;
                t12 = *(int *)0xC2EA88C;
                if (t12 == 0) {
                    if (0x0 != 0) {
                        return 0xC2EA8A8;
                    }
                    *(unsigned int *)0xC2EA9F0 = 0x0;
                    t13 = *(int *)0xC2EA888;
                    if (t13 != 0) {
                        for (;;) {
                            t14 = *(int *)0xC2EA8E8;
                            t15 = *(int *)0xC2EA8EC;
                            t16 = ((int (*)(int))(t14))(t15);
                            t17 = *(int *)0xC2EA8A4;
                            t18 = *(int *)0xC2EA9F0;
                            if ((unsigned int)t18 > (unsigned int)t17) break;
                            t19 = *(int *)0xC2EA888;
                            if (t19 == 0) {
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC2EA888 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                *(unsigned int *)0xC2EA9F8 = 0x1;
                                t20 = *(int *)0xC2EA934;
                                t21 = *(int *)0xC2EA938;
                                t22 = *(int *)((a4 + 0x10));
                                t23 = *(int *)0xC2EA6CC;
                                t24 = *(int *)((a4 + 0xC));
                                if ((unsigned int)t22 > (unsigned int)t23) {
                                    t25 = *(int *)0xC2EA6CC;
                                    t26 = *(int *)0xC2EA6C8;
                                    if ((unsigned int)t24 > (unsigned int)t26) {
                                        t27 = *(int *)0xC2EA6C8;
                                        kmSetPixelClipping(0x0, 0x0, t27, t25);
                                        t29 = *(int *)0xC2EA934;
                                        *(unsigned int *)0xC2EAB90 = t29;
                                        t30 = *(int *)0xC2EA938;
                                        *(unsigned int *)0xC2EAB94 = t30;
                                        *(unsigned int *)0xC2EA934 = t20;
                                        *(unsigned int *)0xC2EA938 = t21;
                                        t31 = kmiStartRenderTextureEntry(0xC2EAB84);
                                        *(unsigned int *)0xC2EA9F0 = 0x0;
                                        t32 = *(int *)0xC2EA888;
                                        if (t32 != 0) {
                                            for (;;) {
                                                t33 = *(int *)0xC2EA8E8;
                                                t34 = *(int *)0xC2EA8EC;
                                                t35 = ((int (*)(int))(t33))(t34);
                                                t36 = *(int *)0xC2EA8A4;
                                                t37 = *(int *)0xC2EA9F0;
                                                if ((unsigned int)t37 > (unsigned int)t36) break;
                                                t38 = *(int *)0xC2EA888;
                                                if (t38 == 0) {
                                                    if (0x0 != 0) {
                                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                                        return 0xC2EA8A4;
                                                    }
                                                    kmiWriteRegister(0x8, 0x1);
                                                    kmiWriteRegister(0x8, 0x0);
                                                    t41 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                                    kmiWriteRegister(0x124, t41);
                                                    t43 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                                    kmiWriteRegister(0x12C, t43);
                                                    t45 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                                    kmiWriteRegister(0x128, t45);
                                                    t47 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                                    kmiWriteRegister(0x130, t47);
                                                    t49 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                                    kmiWriteRegister(0x164, t49);
                                                    kmiWriteRegister(0x144, 0x80000000);
                                                    kmiReadRegister(0x144);
                                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                                    t53 = *(int *)0xC2EAAE8;
                                                    *(unsigned int *)0xC2EA9E8 = t53;
                                                    t54 = *(int *)0xC2EA9DC;
                                                    *(unsigned int *)0xC2EA9E4 = t54;
                                                    *(unsigned int *)0xC2EA88C = 0x1;
                                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                                    t55 = *(int *)0xC2EA9DC;
                                                    *(unsigned int *)(((t55 << 2) + 0xC2EA9CC)) = 0x2;
                                                    return 0x0;
                                                }
                                            }
                                            if (0x1 != 0) {
                                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                                return 0xC2EA8A4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            t58 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                            kmiWriteRegister(0x124, t58);
                                            t60 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                            kmiWriteRegister(0x12C, t60);
                                            t62 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                            kmiWriteRegister(0x128, t62);
                                            t64 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                            kmiWriteRegister(0x130, t64);
                                            t66 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                            kmiWriteRegister(0x164, t66);
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC2EA9EC = 0x0;
                                            t70 = *(int *)0xC2EAAE8;
                                            *(unsigned int *)0xC2EA9E8 = t70;
                                            t71 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)0xC2EA9E4 = t71;
                                            *(unsigned int *)0xC2EA88C = 0x1;
                                            *(unsigned int *)0xC2EA9FC = 0x1;
                                            t72 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((t72 << 2) + 0xC2EA9CC)) = 0x2;
                                            return 0x0;
                                        }
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return t31;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t75 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t75);
                                        t77 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t77);
                                        t79 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t79);
                                        t81 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t81);
                                        t83 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t83);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t87 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t87;
                                        t88 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t88;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t89 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t89 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                    kmSetPixelClipping(0x0, 0x0, t24, t25);
                                    t91 = *(int *)0xC2EA934;
                                    *(unsigned int *)0xC2EAB90 = t91;
                                    t92 = *(int *)0xC2EA938;
                                    *(unsigned int *)0xC2EAB94 = t92;
                                    *(unsigned int *)0xC2EA934 = t20;
                                    *(unsigned int *)0xC2EA938 = t21;
                                    t93 = kmiStartRenderTextureEntry(0xC2EAB84);
                                    *(unsigned int *)0xC2EA9F0 = 0x0;
                                    t94 = *(int *)0xC2EA888;
                                    if (t94 != 0) {
                                        for (;;) {
                                            t95 = *(int *)0xC2EA8E8;
                                            t96 = *(int *)0xC2EA8EC;
                                            t97 = ((int (*)(int))(t95))(t96);
                                            t98 = *(int *)0xC2EA8A4;
                                            t99 = *(int *)0xC2EA9F0;
                                            if ((unsigned int)t99 > (unsigned int)t98) break;
                                            t100 = *(int *)0xC2EA888;
                                            if (t100 == 0) {
                                                if (0x0 != 0) {
                                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                                    return 0xC2EA8A4;
                                                }
                                                kmiWriteRegister(0x8, 0x1);
                                                kmiWriteRegister(0x8, 0x0);
                                                t103 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                                kmiWriteRegister(0x124, t103);
                                                t105 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                                kmiWriteRegister(0x12C, t105);
                                                t107 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                                kmiWriteRegister(0x128, t107);
                                                t109 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                                kmiWriteRegister(0x130, t109);
                                                t111 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                                kmiWriteRegister(0x164, t111);
                                                kmiWriteRegister(0x144, 0x80000000);
                                                kmiReadRegister(0x144);
                                                *(unsigned int *)0xC2EA9EC = 0x0;
                                                t115 = *(int *)0xC2EAAE8;
                                                *(unsigned int *)0xC2EA9E8 = t115;
                                                t116 = *(int *)0xC2EA9DC;
                                                *(unsigned int *)0xC2EA9E4 = t116;
                                                *(unsigned int *)0xC2EA88C = 0x1;
                                                *(unsigned int *)0xC2EA9FC = 0x1;
                                                t117 = *(int *)0xC2EA9DC;
                                                *(unsigned int *)(((t117 << 2) + 0xC2EA9CC)) = 0x2;
                                                return 0x0;
                                            }
                                        }
                                        if (0x1 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t120 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t120);
                                        t122 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t122);
                                        t124 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t124);
                                        t126 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t126);
                                        t128 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t128);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t132 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t132;
                                        t133 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t133;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t134 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t134 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return t93;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t137 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t137);
                                    t139 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t139);
                                    t141 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t141);
                                    t143 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t143);
                                    t145 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t145);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t149 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t149;
                                    t150 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t150;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t151 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t151 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                                t152 = *(int *)0xC2EA6C8;
                                if ((unsigned int)t24 > (unsigned int)t152) {
                                    t153 = *(int *)0xC2EA6C8;
                                    kmSetPixelClipping(0x0, 0x0, t153, t22);
                                    t155 = *(int *)0xC2EA934;
                                    *(unsigned int *)0xC2EAB90 = t155;
                                    t156 = *(int *)0xC2EA938;
                                    *(unsigned int *)0xC2EAB94 = t156;
                                    *(unsigned int *)0xC2EA934 = t20;
                                    *(unsigned int *)0xC2EA938 = t21;
                                    t157 = kmiStartRenderTextureEntry(0xC2EAB84);
                                    *(unsigned int *)0xC2EA9F0 = 0x0;
                                    t158 = *(int *)0xC2EA888;
                                    if (t158 != 0) {
                                        for (;;) {
                                            t159 = *(int *)0xC2EA8E8;
                                            t160 = *(int *)0xC2EA8EC;
                                            t161 = ((int (*)(int))(t159))(t160);
                                            t162 = *(int *)0xC2EA8A4;
                                            t163 = *(int *)0xC2EA9F0;
                                            if ((unsigned int)t163 > (unsigned int)t162) break;
                                            t164 = *(int *)0xC2EA888;
                                            if (t164 == 0) {
                                                if (0x0 != 0) {
                                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                                    return 0xC2EA8A4;
                                                }
                                                kmiWriteRegister(0x8, 0x1);
                                                kmiWriteRegister(0x8, 0x0);
                                                t167 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                                kmiWriteRegister(0x124, t167);
                                                t169 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                                kmiWriteRegister(0x12C, t169);
                                                t171 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                                kmiWriteRegister(0x128, t171);
                                                t173 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                                kmiWriteRegister(0x130, t173);
                                                t175 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                                kmiWriteRegister(0x164, t175);
                                                kmiWriteRegister(0x144, 0x80000000);
                                                kmiReadRegister(0x144);
                                                *(unsigned int *)0xC2EA9EC = 0x0;
                                                t179 = *(int *)0xC2EAAE8;
                                                *(unsigned int *)0xC2EA9E8 = t179;
                                                t180 = *(int *)0xC2EA9DC;
                                                *(unsigned int *)0xC2EA9E4 = t180;
                                                *(unsigned int *)0xC2EA88C = 0x1;
                                                *(unsigned int *)0xC2EA9FC = 0x1;
                                                t181 = *(int *)0xC2EA9DC;
                                                *(unsigned int *)(((t181 << 2) + 0xC2EA9CC)) = 0x2;
                                                return 0x0;
                                            }
                                        }
                                        if (0x1 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t184 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t184);
                                        t186 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t186);
                                        t188 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t188);
                                        t190 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t190);
                                        t192 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t192);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t196 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t196;
                                        t197 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t197;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t198 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t198 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return t157;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t201 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t201);
                                    t203 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t203);
                                    t205 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t205);
                                    t207 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t207);
                                    t209 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t209);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t213 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t213;
                                    t214 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t214;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t215 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t215 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                                kmSetPixelClipping(0x0, 0x0, t24, t22);
                                t217 = *(int *)0xC2EA934;
                                *(unsigned int *)0xC2EAB90 = t217;
                                t218 = *(int *)0xC2EA938;
                                *(unsigned int *)0xC2EAB94 = t218;
                                *(unsigned int *)0xC2EA934 = t20;
                                *(unsigned int *)0xC2EA938 = t21;
                                t219 = kmiStartRenderTextureEntry(0xC2EAB84);
                                *(unsigned int *)0xC2EA9F0 = 0x0;
                                t220 = *(int *)0xC2EA888;
                                if (t220 != 0) {
                                    for (;;) {
                                        t221 = *(int *)0xC2EA8E8;
                                        t222 = *(int *)0xC2EA8EC;
                                        t223 = ((int (*)(int))(t221))(t222);
                                        t224 = *(int *)0xC2EA8A4;
                                        t225 = *(int *)0xC2EA9F0;
                                        if ((unsigned int)t225 > (unsigned int)t224) break;
                                        t226 = *(int *)0xC2EA888;
                                        if (t226 == 0) {
                                            if (0x0 != 0) {
                                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                                return 0xC2EA8A4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            t229 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                            kmiWriteRegister(0x124, t229);
                                            t231 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                            kmiWriteRegister(0x12C, t231);
                                            t233 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                            kmiWriteRegister(0x128, t233);
                                            t235 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                            kmiWriteRegister(0x130, t235);
                                            t237 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                            kmiWriteRegister(0x164, t237);
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC2EA9EC = 0x0;
                                            t241 = *(int *)0xC2EAAE8;
                                            *(unsigned int *)0xC2EA9E8 = t241;
                                            t242 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)0xC2EA9E4 = t242;
                                            *(unsigned int *)0xC2EA88C = 0x1;
                                            *(unsigned int *)0xC2EA9FC = 0x1;
                                            t243 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((t243 << 2) + 0xC2EA9CC)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t246 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t246);
                                    t248 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t248);
                                    t250 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t250);
                                    t252 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t252);
                                    t254 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t254);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t258 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t258;
                                    t259 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t259;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t260 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t260 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return t219;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t263 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t263);
                                t265 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t265);
                                t267 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t267);
                                t269 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t269);
                                t271 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t271);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t275 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t275;
                                t276 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t276;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t277 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t277 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                        }
                        if (0x1 != 0) {
                            *(unsigned int *)0xC2EA888 = 0x0;
                            return 0xC2EA8A4;
                        }
                        *(unsigned int *)0xC2EA9F8 = 0x1;
                        t278 = *(int *)0xC2EA934;
                        t279 = *(int *)0xC2EA938;
                        t280 = *(int *)((a4 + 0x10));
                        t281 = *(int *)0xC2EA6CC;
                        t282 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t280 > (unsigned int)t281) {
                            t283 = *(int *)0xC2EA6CC;
                            t284 = *(int *)0xC2EA6C8;
                            if ((unsigned int)t282 > (unsigned int)t284) {
                                t285 = *(int *)0xC2EA6C8;
                                kmSetPixelClipping(0x0, 0x0, t285, t283);
                                t287 = *(int *)0xC2EA934;
                                *(unsigned int *)0xC2EAB90 = t287;
                                t288 = *(int *)0xC2EA938;
                                *(unsigned int *)0xC2EAB94 = t288;
                                *(unsigned int *)0xC2EA934 = t278;
                                *(unsigned int *)0xC2EA938 = t279;
                                t289 = kmiStartRenderTextureEntry(0xC2EAB84);
                                *(unsigned int *)0xC2EA9F0 = 0x0;
                                t290 = *(int *)0xC2EA888;
                                if (t290 != 0) {
                                    for (;;) {
                                        t291 = *(int *)0xC2EA8E8;
                                        t292 = *(int *)0xC2EA8EC;
                                        t293 = ((int (*)(int))(t291))(t292);
                                        t294 = *(int *)0xC2EA8A4;
                                        t295 = *(int *)0xC2EA9F0;
                                        if ((unsigned int)t295 > (unsigned int)t294) break;
                                        t296 = *(int *)0xC2EA888;
                                        if (t296 == 0) {
                                            if (0x0 != 0) {
                                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                                return 0xC2EA8A4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            t299 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                            kmiWriteRegister(0x124, t299);
                                            t301 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                            kmiWriteRegister(0x12C, t301);
                                            t303 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                            kmiWriteRegister(0x128, t303);
                                            t305 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                            kmiWriteRegister(0x130, t305);
                                            t307 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                            kmiWriteRegister(0x164, t307);
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC2EA9EC = 0x0;
                                            t311 = *(int *)0xC2EAAE8;
                                            *(unsigned int *)0xC2EA9E8 = t311;
                                            t312 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)0xC2EA9E4 = t312;
                                            *(unsigned int *)0xC2EA88C = 0x1;
                                            *(unsigned int *)0xC2EA9FC = 0x1;
                                            t313 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((t313 << 2) + 0xC2EA9CC)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t316 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t316);
                                    t318 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t318);
                                    t320 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t320);
                                    t322 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t322);
                                    t324 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t324);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t328 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t328;
                                    t329 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t329;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t330 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t330 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return t289;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t333 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t333);
                                t335 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t335);
                                t337 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t337);
                                t339 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t339);
                                t341 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t341);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t345 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t345;
                                t346 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t346;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t347 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t347 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            kmSetPixelClipping(0x0, 0x0, t282, t283);
                            t349 = *(int *)0xC2EA934;
                            *(unsigned int *)0xC2EAB90 = t349;
                            t350 = *(int *)0xC2EA938;
                            *(unsigned int *)0xC2EAB94 = t350;
                            *(unsigned int *)0xC2EA934 = t278;
                            *(unsigned int *)0xC2EA938 = t279;
                            t351 = kmiStartRenderTextureEntry(0xC2EAB84);
                            *(unsigned int *)0xC2EA9F0 = 0x0;
                            t352 = *(int *)0xC2EA888;
                            if (t352 != 0) {
                                for (;;) {
                                    t353 = *(int *)0xC2EA8E8;
                                    t354 = *(int *)0xC2EA8EC;
                                    t355 = ((int (*)(int))(t353))(t354);
                                    t356 = *(int *)0xC2EA8A4;
                                    t357 = *(int *)0xC2EA9F0;
                                    if ((unsigned int)t357 > (unsigned int)t356) break;
                                    t358 = *(int *)0xC2EA888;
                                    if (t358 == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t361 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t361);
                                        t363 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t363);
                                        t365 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t365);
                                        t367 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t367);
                                        t369 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t369);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t373 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t373;
                                        t374 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t374;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t375 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t375 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t378 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t378);
                                t380 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t380);
                                t382 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t382);
                                t384 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t384);
                                t386 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t386);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t390 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t390;
                                t391 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t391;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t392 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t392 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return t351;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t395 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t395);
                            t397 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t397);
                            t399 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t399);
                            t401 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t401);
                            t403 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t403);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t407 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t407;
                            t408 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t408;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t409 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t409 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        t410 = *(int *)0xC2EA6C8;
                        if ((unsigned int)t282 > (unsigned int)t410) {
                            t411 = *(int *)0xC2EA6C8;
                            kmSetPixelClipping(0x0, 0x0, t411, t280);
                            t413 = *(int *)0xC2EA934;
                            *(unsigned int *)0xC2EAB90 = t413;
                            t414 = *(int *)0xC2EA938;
                            *(unsigned int *)0xC2EAB94 = t414;
                            *(unsigned int *)0xC2EA934 = t278;
                            *(unsigned int *)0xC2EA938 = t279;
                            t415 = kmiStartRenderTextureEntry(0xC2EAB84);
                            *(unsigned int *)0xC2EA9F0 = 0x0;
                            t416 = *(int *)0xC2EA888;
                            if (t416 != 0) {
                                for (;;) {
                                    t417 = *(int *)0xC2EA8E8;
                                    t418 = *(int *)0xC2EA8EC;
                                    t419 = ((int (*)(int))(t417))(t418);
                                    t420 = *(int *)0xC2EA8A4;
                                    t421 = *(int *)0xC2EA9F0;
                                    if ((unsigned int)t421 > (unsigned int)t420) break;
                                    t422 = *(int *)0xC2EA888;
                                    if (t422 == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t425 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t425);
                                        t427 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t427);
                                        t429 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t429);
                                        t431 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t431);
                                        t433 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t433);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t437 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t437;
                                        t438 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t438;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t439 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t439 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t442 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t442);
                                t444 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t444);
                                t446 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t446);
                                t448 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t448);
                                t450 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t450);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t454 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t454;
                                t455 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t455;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t456 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t456 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return t415;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t459 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t459);
                            t461 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t461);
                            t463 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t463);
                            t465 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t465);
                            t467 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t467);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t471 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t471;
                            t472 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t472;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t473 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t473 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        kmSetPixelClipping(0x0, 0x0, t282, t280);
                        t475 = *(int *)0xC2EA934;
                        *(unsigned int *)0xC2EAB90 = t475;
                        t476 = *(int *)0xC2EA938;
                        *(unsigned int *)0xC2EAB94 = t476;
                        *(unsigned int *)0xC2EA934 = t278;
                        *(unsigned int *)0xC2EA938 = t279;
                        t477 = kmiStartRenderTextureEntry(0xC2EAB84);
                        *(unsigned int *)0xC2EA9F0 = 0x0;
                        t478 = *(int *)0xC2EA888;
                        if (t478 != 0) {
                            for (;;) {
                                t479 = *(int *)0xC2EA8E8;
                                t480 = *(int *)0xC2EA8EC;
                                t481 = ((int (*)(int))(t479))(t480);
                                t482 = *(int *)0xC2EA8A4;
                                t483 = *(int *)0xC2EA9F0;
                                if ((unsigned int)t483 > (unsigned int)t482) break;
                                t484 = *(int *)0xC2EA888;
                                if (t484 == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t487 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t487);
                                    t489 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t489);
                                    t491 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t491);
                                    t493 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t493);
                                    t495 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t495);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t499 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t499;
                                    t500 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t500;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t501 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t501 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return 0xC2EA8A4;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t504 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t504);
                            t506 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t506);
                            t508 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t508);
                            t510 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t510);
                            t512 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t512);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t516 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t516;
                            t517 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t517;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t518 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t518 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC2EA9F8 = 0x0;
                            return t477;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t521 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t521);
                        t523 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t523);
                        t525 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t525);
                        t527 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t527);
                        t529 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t529);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t533 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t533;
                        t534 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t534;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        t535 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t535 << 2) + 0xC2EA9CC)) = 0x2;
                        return 0x0;
                    }
                    if (0x0 != 0) {
                        *(unsigned int *)0xC2EA888 = 0x0;
                        return 0xC2EA8A8;
                    }
                    *(unsigned int *)0xC2EA9F8 = 0x1;
                    t536 = *(int *)0xC2EA934;
                    t537 = *(int *)0xC2EA938;
                    t538 = *(int *)((a4 + 0x10));
                    t539 = *(int *)0xC2EA6CC;
                    t540 = *(int *)((a4 + 0xC));
                    if ((unsigned int)t538 > (unsigned int)t539) {
                        t541 = *(int *)0xC2EA6CC;
                        t542 = *(int *)0xC2EA6C8;
                        if ((unsigned int)t540 > (unsigned int)t542) {
                            t543 = *(int *)0xC2EA6C8;
                            kmSetPixelClipping(0x0, 0x0, t543, t541);
                            t545 = *(int *)0xC2EA934;
                            *(unsigned int *)0xC2EAB90 = t545;
                            t546 = *(int *)0xC2EA938;
                            *(unsigned int *)0xC2EAB94 = t546;
                            *(unsigned int *)0xC2EA934 = t536;
                            *(unsigned int *)0xC2EA938 = t537;
                            t547 = kmiStartRenderTextureEntry(0xC2EAB84);
                            *(unsigned int *)0xC2EA9F0 = 0x0;
                            t548 = *(int *)0xC2EA888;
                            if (t548 != 0) {
                                for (;;) {
                                    t549 = *(int *)0xC2EA8E8;
                                    t550 = *(int *)0xC2EA8EC;
                                    t551 = ((int (*)(int))(t549))(t550);
                                    t552 = *(int *)0xC2EA8A4;
                                    t553 = *(int *)0xC2EA9F0;
                                    if ((unsigned int)t553 > (unsigned int)t552) break;
                                    t554 = *(int *)0xC2EA888;
                                    if (t554 == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t557 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t557);
                                        t559 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t559);
                                        t561 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t561);
                                        t563 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t563);
                                        t565 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t565);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t569 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t569;
                                        t570 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t570;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t571 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t571 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t574 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t574);
                                t576 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t576);
                                t578 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t578);
                                t580 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t580);
                                t582 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t582);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t586 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t586;
                                t587 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t587;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t588 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t588 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return t547;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t591 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t591);
                            t593 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t593);
                            t595 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t595);
                            t597 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t597);
                            t599 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t599);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t603 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t603;
                            t604 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t604;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t605 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t605 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        kmSetPixelClipping(0x0, 0x0, t540, t541);
                        t607 = *(int *)0xC2EA934;
                        *(unsigned int *)0xC2EAB90 = t607;
                        t608 = *(int *)0xC2EA938;
                        *(unsigned int *)0xC2EAB94 = t608;
                        *(unsigned int *)0xC2EA934 = t536;
                        *(unsigned int *)0xC2EA938 = t537;
                        t609 = kmiStartRenderTextureEntry(0xC2EAB84);
                        *(unsigned int *)0xC2EA9F0 = 0x0;
                        t610 = *(int *)0xC2EA888;
                        if (t610 != 0) {
                            for (;;) {
                                t611 = *(int *)0xC2EA8E8;
                                t612 = *(int *)0xC2EA8EC;
                                t613 = ((int (*)(int))(t611))(t612);
                                t614 = *(int *)0xC2EA8A4;
                                t615 = *(int *)0xC2EA9F0;
                                if ((unsigned int)t615 > (unsigned int)t614) break;
                                t616 = *(int *)0xC2EA888;
                                if (t616 == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t619 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t619);
                                    t621 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t621);
                                    t623 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t623);
                                    t625 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t625);
                                    t627 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t627);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t631 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t631;
                                    t632 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t632;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t633 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t633 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return 0xC2EA8A4;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t636 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t636);
                            t638 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t638);
                            t640 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t640);
                            t642 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t642);
                            t644 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t644);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t648 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t648;
                            t649 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t649;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t650 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t650 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC2EA9F8 = 0x0;
                            return t609;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t653 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t653);
                        t655 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t655);
                        t657 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t657);
                        t659 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t659);
                        t661 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t661);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t665 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t665;
                        t666 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t666;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        t667 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t667 << 2) + 0xC2EA9CC)) = 0x2;
                        return 0x0;
                    }
                    t668 = *(int *)0xC2EA6C8;
                    if ((unsigned int)t540 > (unsigned int)t668) {
                        t669 = *(int *)0xC2EA6C8;
                        kmSetPixelClipping(0x0, 0x0, t669, t538);
                        t671 = *(int *)0xC2EA934;
                        *(unsigned int *)0xC2EAB90 = t671;
                        t672 = *(int *)0xC2EA938;
                        *(unsigned int *)0xC2EAB94 = t672;
                        *(unsigned int *)0xC2EA934 = t536;
                        *(unsigned int *)0xC2EA938 = t537;
                        t673 = kmiStartRenderTextureEntry(0xC2EAB84);
                        *(unsigned int *)0xC2EA9F0 = 0x0;
                        t674 = *(int *)0xC2EA888;
                        if (t674 != 0) {
                            for (;;) {
                                t675 = *(int *)0xC2EA8E8;
                                t676 = *(int *)0xC2EA8EC;
                                t677 = ((int (*)(int))(t675))(t676);
                                t678 = *(int *)0xC2EA8A4;
                                t679 = *(int *)0xC2EA9F0;
                                if ((unsigned int)t679 > (unsigned int)t678) break;
                                t680 = *(int *)0xC2EA888;
                                if (t680 == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t683 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t683);
                                    t685 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t685);
                                    t687 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t687);
                                    t689 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t689);
                                    t691 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t691);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t695 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t695;
                                    t696 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t696;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t697 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t697 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return 0xC2EA8A4;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t700 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t700);
                            t702 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t702);
                            t704 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t704);
                            t706 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t706);
                            t708 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t708);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t712 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t712;
                            t713 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t713;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t714 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t714 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC2EA9F8 = 0x0;
                            return t673;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t717 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t717);
                        t719 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t719);
                        t721 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t721);
                        t723 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t723);
                        t725 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t725);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t729 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t729;
                        t730 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t730;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        t731 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t731 << 2) + 0xC2EA9CC)) = 0x2;
                        return 0x0;
                    }
                    kmSetPixelClipping(0x0, 0x0, t540, t538);
                    t733 = *(int *)0xC2EA934;
                    *(unsigned int *)0xC2EAB90 = t733;
                    t734 = *(int *)0xC2EA938;
                    *(unsigned int *)0xC2EAB94 = t734;
                    *(unsigned int *)0xC2EA934 = t536;
                    *(unsigned int *)0xC2EA938 = t537;
                    t735 = kmiStartRenderTextureEntry(0xC2EAB84);
                    *(unsigned int *)0xC2EA9F0 = 0x0;
                    t736 = *(int *)0xC2EA888;
                    if (t736 != 0) {
                        for (;;) {
                            t737 = *(int *)0xC2EA8E8;
                            t738 = *(int *)0xC2EA8EC;
                            t739 = ((int (*)(int))(t737))(t738);
                            t740 = *(int *)0xC2EA8A4;
                            t741 = *(int *)0xC2EA9F0;
                            if ((unsigned int)t741 > (unsigned int)t740) break;
                            t742 = *(int *)0xC2EA888;
                            if (t742 == 0) {
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t745 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t745);
                                t747 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t747);
                                t749 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t749);
                                t751 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t751);
                                t753 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t753);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t757 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t757;
                                t758 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t758;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t759 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t759 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                        }
                        if (0x1 != 0) {
                            *(unsigned int *)0xC2EA9F8 = 0x0;
                            return 0xC2EA8A4;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t762 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t762);
                        t764 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t764);
                        t766 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t766);
                        t768 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t768);
                        t770 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t770);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t774 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t774;
                        t775 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t775;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        t776 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t776 << 2) + 0xC2EA9CC)) = 0x2;
                        return 0x0;
                    }
                    if (0x0 != 0) {
                        *(unsigned int *)0xC2EA9F8 = 0x0;
                        return t735;
                    }
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    t779 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                    kmiWriteRegister(0x124, t779);
                    t781 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                    kmiWriteRegister(0x12C, t781);
                    t783 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                    kmiWriteRegister(0x128, t783);
                    t785 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                    kmiWriteRegister(0x130, t785);
                    t787 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                    kmiWriteRegister(0x164, t787);
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    *(unsigned int *)0xC2EA9EC = 0x0;
                    t791 = *(int *)0xC2EAAE8;
                    *(unsigned int *)0xC2EA9E8 = t791;
                    t792 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9E4 = t792;
                    *(unsigned int *)0xC2EA88C = 0x1;
                    *(unsigned int *)0xC2EA9FC = 0x1;
                    t793 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((t793 << 2) + 0xC2EA9CC)) = 0x2;
                    return 0x0;
                }
            }
            t794 = 0xC2EA8A8;
            t798 = 0x1;
        }
        t1145 = t794;
        if (t798 == 0) {
            *(unsigned int *)0xC2EA9F0 = 0x0;
            t799 = *(int *)0xC2EA888;
            t1064 = t794;
            t1068 = 0x0;
            if (t799 != 0) {
                for (;;) {
                    t800 = *(int *)0xC2EA8E8;
                    t801 = *(int *)0xC2EA8EC;
                    t802 = ((int (*)(int))(t800))(t801);
                    t803 = *(int *)0xC2EA8A4;
                    t804 = *(int *)0xC2EA9F0;
                    if ((unsigned int)t804 > (unsigned int)t803) break;
                    t805 = *(int *)0xC2EA888;
                    if (t805 == 0) {
                        if (0x0 != 0) {
                            *(unsigned int *)0xC2EA888 = 0x0;
                            return 0xC2EA8A4;
                        }
                        *(unsigned int *)0xC2EA9F8 = 0x1;
                        t806 = *(int *)0xC2EA934;
                        t807 = *(int *)0xC2EA938;
                        t808 = *(int *)((a4 + 0x10));
                        t809 = *(int *)0xC2EA6CC;
                        t810 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t808 > (unsigned int)t809) {
                            t811 = *(int *)0xC2EA6CC;
                            t812 = *(int *)0xC2EA6C8;
                            if ((unsigned int)t810 > (unsigned int)t812) {
                                t813 = *(int *)0xC2EA6C8;
                                kmSetPixelClipping(0x0, 0x0, t813, t811);
                                t815 = *(int *)0xC2EA934;
                                *(unsigned int *)0xC2EAB90 = t815;
                                t816 = *(int *)0xC2EA938;
                                *(unsigned int *)0xC2EAB94 = t816;
                                *(unsigned int *)0xC2EA934 = t806;
                                *(unsigned int *)0xC2EA938 = t807;
                                t817 = kmiStartRenderTextureEntry(0xC2EAB84);
                                *(unsigned int *)0xC2EA9F0 = 0x0;
                                t818 = *(int *)0xC2EA888;
                                if (t818 != 0) {
                                    for (;;) {
                                        t819 = *(int *)0xC2EA8E8;
                                        t820 = *(int *)0xC2EA8EC;
                                        t821 = ((int (*)(int))(t819))(t820);
                                        t822 = *(int *)0xC2EA8A4;
                                        t823 = *(int *)0xC2EA9F0;
                                        if ((unsigned int)t823 > (unsigned int)t822) break;
                                        t824 = *(int *)0xC2EA888;
                                        if (t824 == 0) {
                                            if (0x0 != 0) {
                                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                                return 0xC2EA8A4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            t827 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                            kmiWriteRegister(0x124, t827);
                                            t829 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                            kmiWriteRegister(0x12C, t829);
                                            t831 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                            kmiWriteRegister(0x128, t831);
                                            t833 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                            kmiWriteRegister(0x130, t833);
                                            t835 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                            kmiWriteRegister(0x164, t835);
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC2EA9EC = 0x0;
                                            t839 = *(int *)0xC2EAAE8;
                                            *(unsigned int *)0xC2EA9E8 = t839;
                                            t840 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)0xC2EA9E4 = t840;
                                            *(unsigned int *)0xC2EA88C = 0x1;
                                            *(unsigned int *)0xC2EA9FC = 0x1;
                                            t841 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((t841 << 2) + 0xC2EA9CC)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t844 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t844);
                                    t846 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t846);
                                    t848 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t848);
                                    t850 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t850);
                                    t852 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t852);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t856 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t856;
                                    t857 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t857;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t858 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t858 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return t817;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t861 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t861);
                                t863 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t863);
                                t865 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t865);
                                t867 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t867);
                                t869 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t869);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t873 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t873;
                                t874 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t874;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t875 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t875 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            kmSetPixelClipping(0x0, 0x0, t810, t811);
                            t877 = *(int *)0xC2EA934;
                            *(unsigned int *)0xC2EAB90 = t877;
                            t878 = *(int *)0xC2EA938;
                            *(unsigned int *)0xC2EAB94 = t878;
                            *(unsigned int *)0xC2EA934 = t806;
                            *(unsigned int *)0xC2EA938 = t807;
                            t879 = kmiStartRenderTextureEntry(0xC2EAB84);
                            *(unsigned int *)0xC2EA9F0 = 0x0;
                            t880 = *(int *)0xC2EA888;
                            if (t880 != 0) {
                                for (;;) {
                                    t881 = *(int *)0xC2EA8E8;
                                    t882 = *(int *)0xC2EA8EC;
                                    t883 = ((int (*)(int))(t881))(t882);
                                    t884 = *(int *)0xC2EA8A4;
                                    t885 = *(int *)0xC2EA9F0;
                                    if ((unsigned int)t885 > (unsigned int)t884) break;
                                    t886 = *(int *)0xC2EA888;
                                    if (t886 == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t889 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t889);
                                        t891 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t891);
                                        t893 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t893);
                                        t895 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t895);
                                        t897 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t897);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t901 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t901;
                                        t902 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t902;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t903 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t903 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t906 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t906);
                                t908 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t908);
                                t910 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t910);
                                t912 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t912);
                                t914 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t914);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t918 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t918;
                                t919 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t919;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t920 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t920 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return t879;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t923 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t923);
                            t925 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t925);
                            t927 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t927);
                            t929 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t929);
                            t931 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t931);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t935 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t935;
                            t936 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t936;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t937 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t937 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        t938 = *(int *)0xC2EA6C8;
                        if ((unsigned int)t810 > (unsigned int)t938) {
                            t939 = *(int *)0xC2EA6C8;
                            kmSetPixelClipping(0x0, 0x0, t939, t808);
                            t941 = *(int *)0xC2EA934;
                            *(unsigned int *)0xC2EAB90 = t941;
                            t942 = *(int *)0xC2EA938;
                            *(unsigned int *)0xC2EAB94 = t942;
                            *(unsigned int *)0xC2EA934 = t806;
                            *(unsigned int *)0xC2EA938 = t807;
                            t943 = kmiStartRenderTextureEntry(0xC2EAB84);
                            *(unsigned int *)0xC2EA9F0 = 0x0;
                            t944 = *(int *)0xC2EA888;
                            if (t944 != 0) {
                                for (;;) {
                                    t945 = *(int *)0xC2EA8E8;
                                    t946 = *(int *)0xC2EA8EC;
                                    t947 = ((int (*)(int))(t945))(t946);
                                    t948 = *(int *)0xC2EA8A4;
                                    t949 = *(int *)0xC2EA9F0;
                                    if ((unsigned int)t949 > (unsigned int)t948) break;
                                    t950 = *(int *)0xC2EA888;
                                    if (t950 == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC2EA9F8 = 0x0;
                                            return 0xC2EA8A4;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t953 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t953);
                                        t955 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t955);
                                        t957 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t957);
                                        t959 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t959);
                                        t961 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t961);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t965 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t965;
                                        t966 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t966;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        t967 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t967 << 2) + 0xC2EA9CC)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC2EA9F8 = 0x0;
                                    return 0xC2EA8A4;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t970 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t970);
                                t972 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t972);
                                t974 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t974);
                                t976 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t976);
                                t978 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t978);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t982 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t982;
                                t983 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t983;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                t984 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t984 << 2) + 0xC2EA9CC)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return t943;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t987 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t987);
                            t989 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t989);
                            t991 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t991);
                            t993 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t993);
                            t995 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t995);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t999 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t999;
                            t1000 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t1000;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t1001 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t1001 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        kmSetPixelClipping(0x0, 0x0, t810, t808);
                        t1003 = *(int *)0xC2EA934;
                        *(unsigned int *)0xC2EAB90 = t1003;
                        t1004 = *(int *)0xC2EA938;
                        *(unsigned int *)0xC2EAB94 = t1004;
                        *(unsigned int *)0xC2EA934 = t806;
                        *(unsigned int *)0xC2EA938 = t807;
                        t1005 = kmiStartRenderTextureEntry(0xC2EAB84);
                        *(unsigned int *)0xC2EA9F0 = 0x0;
                        t1006 = *(int *)0xC2EA888;
                        if (t1006 != 0) {
                            for (;;) {
                                t1007 = *(int *)0xC2EA8E8;
                                t1008 = *(int *)0xC2EA8EC;
                                t1009 = ((int (*)(int))(t1007))(t1008);
                                t1010 = *(int *)0xC2EA8A4;
                                t1011 = *(int *)0xC2EA9F0;
                                if ((unsigned int)t1011 > (unsigned int)t1010) break;
                                t1012 = *(int *)0xC2EA888;
                                if (t1012 == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC2EA9F8 = 0x0;
                                        return 0xC2EA8A4;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t1015 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t1015);
                                    t1017 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t1017);
                                    t1019 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t1019);
                                    t1021 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t1021);
                                    t1023 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t1023);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t1027 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t1027;
                                    t1028 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t1028;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    t1029 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t1029 << 2) + 0xC2EA9CC)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return 0xC2EA8A4;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t1032 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t1032);
                            t1034 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t1034);
                            t1036 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t1036);
                            t1038 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t1038);
                            t1040 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t1040);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t1044 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t1044;
                            t1045 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t1045;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t1046 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t1046 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC2EA9F8 = 0x0;
                            return t1005;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t1049 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t1049);
                        t1051 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t1051);
                        t1053 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t1053);
                        t1055 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t1055);
                        t1057 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t1057);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t1061 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t1061;
                        t1062 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t1062;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        t1063 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t1063 << 2) + 0xC2EA9CC)) = 0x2;
                        return 0x0;
                    }
                }
                t1064 = 0xC2EA8A4;
                t1068 = 0x1;
            }
            if (t1068 != 0) {
                *(unsigned int *)0xC2EA888 = 0x0;
                t1138 = t1064;
            } else {
                *(unsigned int *)0xC2EA9F8 = 0x1;
                t1069 = *(int *)0xC2EA934;
                t1070 = *(int *)0xC2EA938;
                t1071 = *(int *)((a4 + 0x10));
                t1072 = *(int *)0xC2EA6CC;
                t1073 = *(int *)((a4 + 0xC));
                t1076 = t1071;
                if ((unsigned int)t1071 > (unsigned int)t1072) {
                    t1074 = *(int *)0xC2EA6CC;
                    t1076 = t1074;
                }
                t1077 = *(int *)0xC2EA6C8;
                t1080 = t1073;
                if ((unsigned int)t1073 > (unsigned int)t1077) {
                    t1078 = *(int *)0xC2EA6C8;
                    t1080 = t1078;
                }
                kmSetPixelClipping(0x0, 0x0, t1080, t1076);
                t1082 = *(int *)0xC2EA934;
                *(unsigned int *)0xC2EAB90 = t1082;
                t1083 = *(int *)0xC2EA938;
                *(unsigned int *)0xC2EAB94 = t1083;
                *(unsigned int *)0xC2EA934 = t1069;
                *(unsigned int *)0xC2EA938 = t1070;
                t1084 = kmiStartRenderTextureEntry(0xC2EAB84);
                *(unsigned int *)0xC2EA9F0 = 0x0;
                t1085 = *(int *)0xC2EA888;
                t1109 = t1084;
                t1111 = 0x0;
                if (t1085 != 0) {
                    for (;;) {
                        t1086 = *(int *)0xC2EA8E8;
                        t1087 = *(int *)0xC2EA8EC;
                        t1088 = ((int (*)(int))(t1086))(t1087);
                        t1089 = *(int *)0xC2EA8A4;
                        t1090 = *(int *)0xC2EA9F0;
                        if ((unsigned int)t1090 > (unsigned int)t1089) break;
                        t1091 = *(int *)0xC2EA888;
                        if (t1091 == 0) {
                            if (0x0 != 0) {
                                *(unsigned int *)0xC2EA9F8 = 0x0;
                                return 0xC2EA8A4;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t1094 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t1094);
                            t1096 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t1096);
                            t1098 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t1098);
                            t1100 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t1100);
                            t1102 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t1102);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t1106 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t1106;
                            t1107 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t1107;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            t1108 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t1108 << 2) + 0xC2EA9CC)) = 0x2;
                            return 0x0;
                        }
                    }
                    t1109 = 0xC2EA8A4;
                    t1111 = 0x1;
                }
                if (t1111 != 0) {
                    *(unsigned int *)0xC2EA9F8 = 0x0;
                    t1131 = t1109;
                } else {
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    t1116 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAF8));
                    kmiWriteRegister(0x124, t1116);
                    t1118 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAAFC));
                    kmiWriteRegister(0x12C, t1118);
                    t1120 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
                    kmiWriteRegister(0x128, t1120);
                    t1122 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB08));
                    kmiWriteRegister(0x130, t1122);
                    t1124 = *(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC2EAB00));
                    kmiWriteRegister(0x164, t1124);
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    *(unsigned int *)0xC2EA9EC = 0x0;
                    t1128 = *(int *)0xC2EAAE8;
                    *(unsigned int *)0xC2EA9E8 = t1128;
                    t1129 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9E4 = t1129;
                    *(unsigned int *)0xC2EA88C = 0x1;
                    *(unsigned int *)0xC2EA9FC = 0x1;
                    t1130 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((t1130 << 2) + 0xC2EA9CC)) = 0x2;
                    t1131 = 0x0;
                }
                t1138 = t1131;
            }
            t1145 = t1138;
        }
        t1153 = t1145;
    }
    return t1153;
}

int carBalance(int a4, float f4)
{
    int t0;
    int t12;
    int t1;
    int t9;
    int t2;
    int t5;
    int t3;
    int t4;
    int t15;
    int t16;
    int t19;
    int t20;
    float u21;
    int t22;
    int t24;
    int t23;
    float u25;
    int t26;
    int t27;
    int t28;
    int t31;
    int t33;
    int t35;
    int t37;
    int t39;
    int t41;
    int t43;
    int t45;
    int t47;
    int t48;
    float u49;
    int t50;
    int t51;
    int t52;
    float u53;
    float u54;
    int t55;
    int t56;
    float u57;
    float u58;
    int t60;
    int t59;
    int t62;
    int t61;
    float u63;
    float u64;
    float u65;
    float u66;
    int t67;
    int t68;
    float u72;
    float u73;
    float u74;
    float u75;
    float u79;
    int t81;
    float u85;
    int t86;
    int t87;
    int t88;
    int t91;
    int t93;
    int t95;
    int t97;
    int t99;
    int t101;
    int t103;
    int t105;
    int t107;
    int t108;
    float u109;
    int t110;
    int t111;
    int t112;
    float u113;
    float u114;
    int t115;
    int t116;
    float u117;
    float u118;
    int t120;
    int t119;
    int t122;
    int t121;
    float u123;
    float u124;
    float u125;
    float u126;
    int t127;
    int t128;
    float u132;
    float u133;
    float u134;
    float u135;
    float u139;
    int t141;
    int t17;
    int t142;
    int t82;
    float u76;
    float u136;
    int stk[15] = {0};

    t0 = *(short *)((a4 + 0xAE));
    t12 = 0x0;
    if ((int)(unsigned short)t0 >= (int)0x3000) {
        t1 = *(short *)((a4 + 0xAE));
        t9 = 0x4000;
        if ((int)(unsigned short)t1 >= (int)0x4800) {
            t2 = *(short *)((a4 + 0xAE));
            t5 = 0x8000;
            if ((int)(unsigned short)t2 >= (int)0xB800) {
                t3 = *(short *)((a4 + 0xAE));
                t4 = 0x0;
                if ((int)(unsigned short)t3 < (int)0xD000) {
                    t4 = 0xC000;
                }
                t5 = t4;
            }
            t9 = t5;
        }
        t12 = t9;
    }
    if (t12 == 0) {
        t15 = *(int *)((a4 + 0x84));
        t17 = (t15 & 0xFFFFFFDF);
    } else {
        t16 = *(int *)((a4 + 0x84));
        t17 = (t16 | 0x20);
    }
    *(unsigned int *)((a4 + 0x84)) = t17;
    t19 = *(short *)((a4 + 0xAE));
    t20 = FUN_0c049aa8(t19, t12, 1.0f);
    u21 = *(float *)((a4 + 0x100));
    if (9.99999975e-06f > (u21 < 0.0f ? -u21 : u21)) {
        t22 = FUN_0c0813d0(t20);
        if ((int)t22 < (int)0x400) {
            *(unsigned short *)((a4 + 0xAE)) = t12;
            *(float *)((a4 + 0x100)) = 0.0f;
            t24 = 0x100;
            if (t12 == 0) {
                *(float *)((a4 + 0xFC)) = 0.0f;
                t23 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t23 & 0xFFFFFF9F);
                t24 = 0x84;
            }
            t82 = t24;
        } else {
            u25 = *(float *)(((0x100 + a4) + 0x0));
            t26 = *(short *)((a4 + 0xAE));
            *(unsigned short *)((a4 + 0xAE)) = (t26 + ((int)(((u25 * 3276800.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
            t27 = *(short *)((a4 + 0xAE));
            t28 = FUN_0c049aa8(t27, t12, 1.0f);
            nlPushUnitMatrix();
            nlSetTranslate((0x8C + a4));
            t31 = *(short *)((a4 + 0x10C));
            nlRotateAZ((-(unsigned short)t31));
            t33 = *(short *)((a4 + 0x108));
            nlRotateAX((-(unsigned short)t33));
            t35 = *(short *)((a4 + 0x10A));
            nlRotateAY((-(unsigned short)t35));
            t37 = *(short *)((a4 + 0xA6));
            nlRotateAY((unsigned short)t37);
            t39 = *(short *)((a4 + 0xA4));
            nlRotateAX((unsigned short)t39);
            t41 = *(short *)((a4 + 0xA8));
            nlRotateAZ((unsigned short)t41);
            t43 = *(short *)((a4 + 0xAA));
            nlRotateAX((unsigned short)t43);
            t45 = *(short *)((a4 + 0xAE));
            nlRotateAZ((unsigned short)t45);
            t47 = *(short *)((a4 + 0x78));
            t48 = *(short *)(((short)((short)t47 * (short)0xA8) + 0xC0A26C8));
            u49 = *(float *)((a4 + 0x104));
            t50 = 0x104;
            t51 = ((short)(((((t48 << 1) + t48) << 2) << 2) << 1) + 0xC2A465C);
            t52 = 0x8;
            u53 = f4;
            u54 = u49;
            while (t52 != 0) {
                t55 = t51;
                t51 = (t51 + 0xC);
                t56 = FUN_0c0771b0(t55, (((int)stk + 4) + 0x4));
                t50 = t56;
                t50 = 0x8;
                u57 = *(float *)((((int)stk + 4) + t50));
                u53 = u57;
                t52 = (t52 - 1);
                if (u54 > u53) {
                    u54 = u53;
                }
            }
            u58 = *(float *)((a4 + 0x104));
            if ((u58 - u54) > 0.0f) {
                *(float *)((a4 + 0xFC)) = (u58 - u54);
                t60 = 0x1;
                if ((int)t28 <= 0) {
                    t59 = 0x0;
                    if ((int)t28 < 0) {
                        t59 = 0xFFFFFFFF;
                    }
                    t60 = t59;
                }
                t62 = 0x1;
                if ((int)t20 <= 0) {
                    t61 = 0x0;
                    if ((int)t20 < 0) {
                        t61 = 0xFFFFFFFF;
                    }
                    t62 = t61;
                }
                if (t60 != t62) {
                    u63 = *(float *)((a4 + 0x100));
                    if (9.99999975e-05f > (u63 < 0.0f ? -u63 : u63)) {
                        *(float *)((a4 + 0x100)) = 0.0f;
                    } else {
                        u64 = *(float *)((a4 + 0x100));
                        *(float *)((a4 + 0x100)) = (u64 * 0.299999982f);
                        u65 = *(float *)((a4 + 0x2C));
                        if (100.0f > u65) {
                            u66 = *(float *)((a4 + 0x100));
                            t67 = 0x6;
                            if ((unsigned int)(int)(u66 * 8000.0f) < (unsigned int)0x6) {
                                t67 = (int)(u66 * 8000.0f);
                            }
                            *(unsigned int *)(((int)stk + 4)) = t67;
                            t68 = *(int *)(((t67 << 2) + 0xC0A3618));
                            Sound_Request(t68, 0x1);
                        }
                    }
                } else {
                    if ((int)t20 < 0) {
                        u72 = *(float *)((a4 + 0x100));
                        u73 = *(float *)(((0xB4 + a4) + 0x0));
                        u76 = (u72 - (u73 * 9.99999905e-09f));
                    } else {
                        u74 = *(float *)((a4 + 0x100));
                        u75 = *(float *)(((0xB4 + a4) + 0x0));
                        u76 = (u74 + 9.99999905e-09f * u75);
                    }
                    *(float *)((a4 + 0x100)) = u76;
                }
            } else {
                u79 = *(float *)((a4 + 0x100));
                *(float *)((a4 + 0x100)) = (u79 * 0.979999959f);
            }
            t81 = nlPopMatrix(0x1);
            t82 = t81;
        }
        t142 = t82;
    } else {
        u85 = *(float *)(((0x100 + a4) + 0x0));
        t86 = *(short *)((a4 + 0xAE));
        *(unsigned short *)((a4 + 0xAE)) = (t86 + ((int)(((u85 * 3276800.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
        t87 = *(short *)((a4 + 0xAE));
        t88 = FUN_0c049aa8(t87, t12, 1.0f);
        nlPushUnitMatrix();
        nlSetTranslate((0x8C + a4));
        t91 = *(short *)((a4 + 0x10C));
        nlRotateAZ((-(unsigned short)t91));
        t93 = *(short *)((a4 + 0x108));
        nlRotateAX((-(unsigned short)t93));
        t95 = *(short *)((a4 + 0x10A));
        nlRotateAY((-(unsigned short)t95));
        t97 = *(short *)((a4 + 0xA6));
        nlRotateAY((unsigned short)t97);
        t99 = *(short *)((a4 + 0xA4));
        nlRotateAX((unsigned short)t99);
        t101 = *(short *)((a4 + 0xA8));
        nlRotateAZ((unsigned short)t101);
        t103 = *(short *)((a4 + 0xAA));
        nlRotateAX((unsigned short)t103);
        t105 = *(short *)((a4 + 0xAE));
        nlRotateAZ((unsigned short)t105);
        t107 = *(short *)((a4 + 0x78));
        t108 = *(short *)(((short)((short)t107 * (short)0xA8) + 0xC0A26C8));
        u109 = *(float *)((a4 + 0x104));
        t110 = 0x104;
        t111 = ((short)(((((t108 << 1) + t108) << 2) << 2) << 1) + 0xC2A465C);
        t112 = 0x8;
        u113 = f4;
        u114 = u109;
        while (t112 != 0) {
            t115 = t111;
            t111 = (t111 + 0xC);
            t116 = FUN_0c0771b0(t115, (((int)stk + 4) + 0x4));
            t110 = t116;
            t110 = 0x8;
            u117 = *(float *)((((int)stk + 4) + t110));
            u113 = u117;
            t112 = (t112 - 1);
            if (u114 > u113) {
                u114 = u113;
            }
        }
        u118 = *(float *)((a4 + 0x104));
        if ((u118 - u114) > 0.0f) {
            *(float *)((a4 + 0xFC)) = (u118 - u114);
            t120 = 0x1;
            if ((int)t88 <= 0) {
                t119 = 0x0;
                if ((int)t88 < 0) {
                    t119 = 0xFFFFFFFF;
                }
                t120 = t119;
            }
            t122 = 0x1;
            if ((int)t20 <= 0) {
                t121 = 0x0;
                if ((int)t20 < 0) {
                    t121 = 0xFFFFFFFF;
                }
                t122 = t121;
            }
            if (t120 != t122) {
                u123 = *(float *)((a4 + 0x100));
                if (9.99999975e-05f > (u123 < 0.0f ? -u123 : u123)) {
                    *(float *)((a4 + 0x100)) = 0.0f;
                } else {
                    u124 = *(float *)((a4 + 0x100));
                    *(float *)((a4 + 0x100)) = (u124 * 0.299999982f);
                    u125 = *(float *)((a4 + 0x2C));
                    if (100.0f > u125) {
                        u126 = *(float *)((a4 + 0x100));
                        t127 = 0x6;
                        if ((unsigned int)(int)(u126 * 8000.0f) < (unsigned int)0x6) {
                            t127 = (int)(u126 * 8000.0f);
                        }
                        *(unsigned int *)(((int)stk + 4)) = t127;
                        t128 = *(int *)(((t127 << 2) + 0xC0A3618));
                        Sound_Request(t128, 0x1);
                    }
                }
            } else {
                if ((int)t20 < 0) {
                    u132 = *(float *)((a4 + 0x100));
                    u133 = *(float *)(((0xB4 + a4) + 0x0));
                    u136 = (u132 - (u133 * 9.99999905e-09f));
                } else {
                    u134 = *(float *)((a4 + 0x100));
                    u135 = *(float *)(((0xB4 + a4) + 0x0));
                    u136 = (u134 + 9.99999905e-09f * u135);
                }
                *(float *)((a4 + 0x100)) = u136;
            }
        } else {
            u139 = *(float *)((a4 + 0x100));
            *(float *)((a4 + 0x100)) = (u139 * 0.979999959f);
        }
        t141 = nlPopMatrix(0x1);
        t142 = t141;
    }
    return t142;
}

int crowdSpawn(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t203;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t16;
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
    int t29;
    int t30;
    int t31;
    int t32;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    float u45;
    int t46;
    int t47;
    float t48;
    float u49;
    float u50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t65;
    int t66;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t76;
    float t77;
    float u78;
    int t79;
    float u80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t86;
    int t87;
    int t100;
    int t101;
    int t197;
    int t102;
    int t103;
    int t105;
    int t106;
    int t107;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    float u141;
    int t142;
    int t143;
    float t144;
    float u145;
    float u146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t161;
    int t162;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t172;
    float t173;
    float u174;
    int t175;
    float u176;
    int t177;
    int t178;
    int t179;
    int t180;
    int t182;
    int t183;
    int t196;
    int t200;
    int stk[35] = {0};

    t0 = *(int *)0xC0CF58C;
    *(unsigned int *)(((((int)stk + 20) + 0x20) + 0x8)) = t0;
    t1 = *(int *)0xC0CF588;
    *(unsigned int *)(((((int)stk + 20) + 0x20) + 0x4)) = t1;
    t2 = *(int *)0xC0CF584;
    *(unsigned int *)(((((int)stk + 20) + 0x20) + 0x0)) = t2;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    t3 = FUN_0c05003c();
    *(unsigned int *)0xC2A6FD8 = t3;
    t4 = *(int *)0xC179130;
    t203 = 0x64;
    if ((int)t4 >= 0) {
        t5 = *(int *)0xC1EE20C;
        if (t5 == 0) {
            t6 = *(int *)0xC2A6FDC;
            t7 = *(int *)0xC2A6FE0;
            nlPushUnitMatrix();
            t9 = *(int *)0xC1791D0;
            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t9;
            t10 = *(int *)0xC1791CC;
            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t10;
            t11 = *(int *)0xC1791C8;
            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t11;
            nlUnitVector((((int)stk + 20) + 0x2C));
            nlRotateV((((int)stk + 20) + 0x2C), 0xC12FF18);
            FUN_0c0789c0(0xC179144);
            nlGetMatrix(0xC2A6FE4);
            t16 = (t6 - t7);
            if ((int)(t6 - t7) > (int)0x3) {
                t16 = 0x3;
            }
            if ((int)t16 > 0) {
                t17 = *(int *)0xC1EE20C;
                if (t17 != 0) {
                    if (t17 == 1) {
                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                        *(unsigned int *)(((int)stk + 40)) = 0x0;
                        *(unsigned int *)(((int)stk + 36)) = 0x0;
                        t18 = t17;
                        t19 = t16;
                        t20 = 0x0;
                        t21 = 0xC1EE20C;
                        for (;;) {
                            t22 = *(short *)0xC179130;
                            t23 = *(int *)(((int)stk + 32));
                            t24 = *(int *)(((t23 << 2) + ((short)((short)t22 * (short)0xC8) + 0xC124500)));
                            if (t24 != -1) {
                                t25 = *(short *)0xC179130;
                                t18 = 0xC124500;
                                t26 = *(int *)(((int)stk + 36));
                                t27 = *(int *)((((short)((short)t25 * (short)0xC8) + t18) + t26));
                                if (t27 == 0) {
                                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                                } else {
                                    t28 = *(short *)0xC179130;
                                    t29 = *(int *)(((int)stk + 40));
                                    t30 = *(int *)((((short)((short)t28 * (short)0xC8) + t18) + t29));
                                    t31 = (int)((int)(t30 - 1) % (int)0x60);
                                    t32 = *(int *)((0xC0CF400 + (t31 << 2)));
                                    *(unsigned int *)(((int)stk + 20)) = (t32 + 0x1);
                                }
                                t37 = *(short *)0xC179130;
                                t38 = *(int *)(((int)stk + 24));
                                t39 = *(int *)((((0xC124500 + (short)((short)t37 * (short)0xC8)) + t38) + 0x0));
                                t40 = *(int *)(((t39 << 2) + 0xC0CF400));
                                *(unsigned int *)(((int)stk + 28)) = t40;
                                t41 = *(int *)(((int)stk + 20));
                                t21 = t41;
                                t42 = 0xC0CF400;
                                t43 = t38;
                                t44 = a5;
                                u45 = f4;
                                for (;;) {
                                    t46 = *(int *)(((int)stk + 28));
                                    if ((int)t21 > (int)t46) break;
                                    t20 = t21;
                                    t20 = (t20 << 2);
                                    t43 = 0xC0771B0;
                                    t20 = (t20 + t21);
                                    t44 = ((int)stk + 20);
                                    t20 = (t20 << 2);
                                    t20 = (t20 + 0xC0C8420);
                                    t44 = (t44 + 0x20);
                                    t18 = t20;
                                    t47 = FUN_0c0771b0(t18, t44);
                                    t42 = t47;
                                    t18 = 0xC1790CC;
                                    t44 = t20;
                                    t18 = (t18 + 0x78);
                                    t48 = nlLength(t18, t44);
                                    t42 = t48;
                                    u45 = t48;
                                    if (u45 > 1000.0f) {
                                        t42 = 0xC04F5B4;
                                        u49 = *(float *)((t42 + 0x0));
                                        if (u49 > u45) {
                                            t42 = 0x28;
                                            u50 = *(float *)((((int)stk + 20) + t42));
                                            if (0.0f > u50) {
                                                t51 = *(short *)((t20 + 0xE));
                                                t42 = t51;
                                                t44 = (unsigned short)t42;
                                                t18 = t20;
                                                t52 = CheckClipping(u45);
                                                t42 = t52;
                                                if (t42 != 0) {
                                                    t42 = 0x20;
                                                    t53 = (int)((int)t21 % (int)t42);
                                                    t42 = t53;
                                                    t44 = t42;
                                                    if ((int)t44 > 0) {
                                                        t18 = 0x1;
                                                        t44 = (t44 - 1);
                                                        t18 = (((int)t44 >= 0) ? (t18 << (t44 & 31)) : ((-(int)t44 & 31) ? ((int)t18 >> (-(int)t44 & 31)) : ((int)t18 >> 31)));
                                                    } else {
                                                        t18 = 0x0;
                                                    }
                                                    t43 = t21;
                                                    t42 = 0xC2A7064;
                                                    t43 = ((int)t43 >> 5);
                                                    t43 = (t43 << 2);
                                                    t54 = *(int *)((t43 + t42));
                                                    t43 = t54;
                                                    t43 = (t43 & t18);
                                                    if (t18 != t43) {
                                                        t44 = t21;
                                                        t18 = t20;
                                                        t55 = crowdCreate(t18, t44);
                                                        t42 = t55;
                                                        t18 = t42;
                                                        t19 = (t19 - t18);
                                                        if ((int)t19 > 0) {
                                                            t21 = (t21 + 0x1);
                                                            continue;
                                                        }
                                                        break;
                                                    }
                                                    t21 = (t21 + 0x1);
                                                    continue;
                                                }
                                                t21 = (t21 + 0x1);
                                                continue;
                                            }
                                            t21 = (t21 + 0x1);
                                            continue;
                                        }
                                        t21 = (t21 + 0x1);
                                        continue;
                                    }
                                    t21 = (t21 + 0x1);
                                }
                                t56 = *(int *)(((int)stk + 32));
                                *(unsigned int *)(((int)stk + 32)) = (t56 + 0x1);
                                t57 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t57 + 0x4);
                                t58 = *(int *)(((int)stk + 40));
                                *(unsigned int *)(((int)stk + 40)) = (t58 + 0x4);
                                t59 = *(int *)(((int)stk + 36));
                                *(unsigned int *)(((int)stk + 36)) = (t59 + 0x4);
                                continue;
                            }
                            break;
                        }
                    }
                } else {
                    t65 = findSplineSection(0xC0CF2F0, 0xC0CF374, 0xC17912C);
                    *(unsigned int *)(((int)stk + 48)) = t65;
                    if (t65 != -1) {
                        t66 = *(int *)0xC0CB0D0;
                        getPieceWindow((((int)stk + 4) + 0x2C), 0xC0CF378, 0xC0CF374, 0xC0CF3FC, t66, (((int)stk + 12) + 0x8), (((int)stk + 16) + 0xC), (((int)stk + 20) + 0x18));
                        t68 = t16;
                        t69 = 0x0;
                        for (;;) {
                            t70 = *(int *)(((int)stk + 44));
                            if ((int)t69 >= (int)t70) {
                                t71 = nlPopMatrix(0x1);
                                return t71;
                            }
                            t72 = *(int *)(((int)stk + 20));
                            t73 = *(int *)0xC0CB0D0;
                            t74 = (int)((int)(t72 + t69) % (int)t73);
                            *(unsigned int *)(((int)stk + 24)) = ((((t74 << 2) + t74) << 2) + 0xC0C8420);
                            FUN_0c0771b0(((((t74 << 2) + t74) << 2) + 0xC0C8420), (((int)stk + 20) + 0x20));
                            t76 = *(int *)(((int)stk + 24));
                            t77 = nlLength(0xC179144, t76);
                            if (t77 > 1000.0f) {
                                if (1500.0f > t77) {
                                    u78 = *(float *)(((int)stk + 60));
                                    if (0.0f > u78) {
                                        *(unsigned int *)(((int)stk + 24)) = ((((t74 << 2) + t74) << 2) + 0xC0C8420);
                                        t79 = *(short *)((((((t74 << 2) + t74) << 2) + 0xC0C8420) + 0xE));
                                        u80 = *(float *)0xC2A6AC8;
                                        t81 = *(int *)(((int)stk + 24));
                                        t82 = CheckClipping(((float)(unsigned short)t79 * u80));
                                        if (t82 != 0) {
                                            t83 = (int)((int)t74 % (int)0x20);
                                            t84 = 0x0;
                                            if ((int)t83 > 0) {
                                                t84 = (((int)(t83 - 1) >= 0) ? (0x1 << ((t83 - 1) & 31)) : ((-(int)(t83 - 1) & 31) ? ((int)0x1 >> (-(int)(t83 - 1) & 31)) : ((int)0x1 >> 31)));
                                            }
                                            t86 = *(int *)(((((int)t74 >> 5) << 2) + 0xC2A7064));
                                            if (t84 != (t86 & t84)) {
                                                t87 = crowdCreate(((((t74 << 2) + t74) << 2) + 0xC0C8420), t74);
                                                t68 = (t68 - t87);
                                                if ((int)t68 <= 0) break;
                                                t69 = (t69 + 0x1);
                                                continue;
                                            }
                                            t69 = (t69 + 0x1);
                                            continue;
                                        }
                                        t69 = (t69 + 0x1);
                                        continue;
                                    }
                                    t69 = (t69 + 0x1);
                                    continue;
                                }
                                t69 = (t69 + 0x1);
                                continue;
                            }
                            t69 = (t69 + 0x1);
                        }
                    }
                }
            }
            t100 = nlPopMatrix(0x1);
            t200 = t100;
        } else {
            t101 = *(int *)0xC1EE20C;
            t197 = t101;
            if (t101 == 1) {
                t102 = *(int *)0xC2A6FDC;
                t103 = *(int *)0xC2A6FE0;
                nlPushUnitMatrix();
                t105 = *(int *)0xC1791D0;
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t105;
                t106 = *(int *)0xC1791CC;
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t106;
                t107 = *(int *)0xC1791C8;
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t107;
                nlUnitVector((((int)stk + 20) + 0x2C));
                nlRotateV((((int)stk + 20) + 0x2C), 0xC12FF18);
                FUN_0c0789c0(0xC179144);
                nlGetMatrix(0xC2A6FE4);
                t112 = (t102 - t103);
                if ((int)(t102 - t103) > (int)0x3) {
                    t112 = 0x3;
                }
                if ((int)t112 > 0) {
                    t113 = *(int *)0xC1EE20C;
                    if (t113 != 0) {
                        if (t113 == 1) {
                            *(unsigned int *)(((int)stk + 24)) = 0x0;
                            *(unsigned int *)(((int)stk + 40)) = 0x0;
                            *(unsigned int *)(((int)stk + 36)) = 0x0;
                            t114 = t113;
                            t115 = t112;
                            t116 = 0x0;
                            t117 = 0xC1EE20C;
                            for (;;) {
                                t118 = *(short *)0xC179130;
                                t119 = *(int *)(((int)stk + 32));
                                t120 = *(int *)(((t119 << 2) + ((short)((short)t118 * (short)0xC8) + 0xC124500)));
                                if (t120 != -1) {
                                    t121 = *(short *)0xC179130;
                                    t114 = 0xC124500;
                                    t122 = *(int *)(((int)stk + 36));
                                    t123 = *(int *)((((short)((short)t121 * (short)0xC8) + t114) + t122));
                                    if (t123 == 0) {
                                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                                    } else {
                                        t124 = *(short *)0xC179130;
                                        t125 = *(int *)(((int)stk + 40));
                                        t126 = *(int *)((((short)((short)t124 * (short)0xC8) + t114) + t125));
                                        t127 = (int)((int)(t126 - 1) % (int)0x60);
                                        t128 = *(int *)((0xC0CF400 + (t127 << 2)));
                                        *(unsigned int *)(((int)stk + 20)) = (t128 + 0x1);
                                    }
                                    t133 = *(short *)0xC179130;
                                    t134 = *(int *)(((int)stk + 24));
                                    t135 = *(int *)((((0xC124500 + (short)((short)t133 * (short)0xC8)) + t134) + 0x0));
                                    t136 = *(int *)(((t135 << 2) + 0xC0CF400));
                                    *(unsigned int *)(((int)stk + 28)) = t136;
                                    t137 = *(int *)(((int)stk + 20));
                                    t117 = t137;
                                    t138 = 0xC0CF400;
                                    t139 = t134;
                                    t140 = a5;
                                    u141 = f4;
                                    for (;;) {
                                        t142 = *(int *)(((int)stk + 28));
                                        if ((int)t117 > (int)t142) break;
                                        t116 = t117;
                                        t116 = (t116 << 2);
                                        t116 = (t116 + t117);
                                        t140 = ((int)stk + 20);
                                        t116 = (t116 << 2);
                                        t116 = (t116 + 0xC0CB0D4);
                                        t140 = (t140 + 0x20);
                                        t114 = t116;
                                        t143 = FUN_0c0771b0(t114, t140);
                                        t138 = t143;
                                        t114 = 0xC1790CC;
                                        t140 = t116;
                                        t114 = (t114 + 0x78);
                                        t144 = nlLength(t114, t140);
                                        u141 = t144;
                                        if (u141 > 1000.0f) {
                                            t138 = 0xC04F5B4;
                                            u145 = *(float *)((t138 + 0x0));
                                            if (u145 > u141) {
                                                t138 = 0x28;
                                                u146 = *(float *)((((int)stk + 20) + t138));
                                                if (0.0f > u146) {
                                                    t147 = *(short *)((t116 + 0xE));
                                                    t138 = t147;
                                                    t140 = (unsigned short)t138;
                                                    t114 = t116;
                                                    t148 = CheckClipping(u141);
                                                    t138 = t148;
                                                    if (t138 != 0) {
                                                        t138 = 0x20;
                                                        t149 = (int)((int)t117 % (int)t138);
                                                        t138 = t149;
                                                        t140 = t138;
                                                        if ((int)t140 > 0) {
                                                            t114 = 0x1;
                                                            t140 = (t140 - 1);
                                                            t114 = (((int)t140 >= 0) ? (t114 << (t140 & 31)) : ((-(int)t140 & 31) ? ((int)t114 >> (-(int)t140 & 31)) : ((int)t114 >> 31)));
                                                        } else {
                                                            t114 = 0x0;
                                                        }
                                                        t139 = t117;
                                                        t138 = 0xC2A7064;
                                                        t139 = ((int)t139 >> 5);
                                                        t139 = (t139 << 2);
                                                        t150 = *(int *)((t139 + t138));
                                                        t139 = t150;
                                                        t139 = (t139 & t114);
                                                        if (t114 != t139) {
                                                            t140 = t117;
                                                            t114 = t116;
                                                            t151 = crowdCreate(t114, t140);
                                                            t138 = t151;
                                                            t114 = t138;
                                                            t115 = (t115 - t114);
                                                            if ((int)t115 > 0) {
                                                                t117 = (t117 + 0x1);
                                                                continue;
                                                            }
                                                            break;
                                                        }
                                                        t117 = (t117 + 0x1);
                                                        continue;
                                                    }
                                                    t117 = (t117 + 0x1);
                                                    continue;
                                                }
                                                t117 = (t117 + 0x1);
                                                continue;
                                            }
                                            t117 = (t117 + 0x1);
                                            continue;
                                        }
                                        t117 = (t117 + 0x1);
                                    }
                                    t152 = *(int *)(((int)stk + 32));
                                    *(unsigned int *)(((int)stk + 32)) = (t152 + 0x1);
                                    t153 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t153 + 0x4);
                                    t154 = *(int *)(((int)stk + 40));
                                    *(unsigned int *)(((int)stk + 40)) = (t154 + 0x4);
                                    t155 = *(int *)(((int)stk + 36));
                                    *(unsigned int *)(((int)stk + 36)) = (t155 + 0x4);
                                    continue;
                                }
                                break;
                            }
                        }
                    } else {
                        t161 = findSplineSection(0xC0CF2F0, 0xC0CF374, 0xC17912C);
                        *(unsigned int *)(((int)stk + 48)) = t161;
                        if (t161 != -1) {
                            t162 = *(int *)0xC0CB0D0;
                            getPieceWindow((((int)stk + 4) + 0x2C), 0xC0CF378, 0xC0CF374, 0xC0CF3FC, t162, (((int)stk + 12) + 0x8), (((int)stk + 16) + 0xC), (((int)stk + 20) + 0x18));
                            t164 = t112;
                            t165 = 0x0;
                            for (;;) {
                                t166 = *(int *)(((int)stk + 44));
                                if ((int)t165 >= (int)t166) {
                                    t167 = nlPopMatrix(0x1);
                                    return t167;
                                }
                                t168 = *(int *)(((int)stk + 20));
                                t169 = *(int *)0xC0CB0D0;
                                t170 = (int)((int)(t168 + t165) % (int)t169);
                                *(unsigned int *)(((int)stk + 24)) = ((((t170 << 2) + t170) << 2) + 0xC0CB0D4);
                                FUN_0c0771b0(((((t170 << 2) + t170) << 2) + 0xC0CB0D4), (((int)stk + 20) + 0x20));
                                t172 = *(int *)(((int)stk + 24));
                                t173 = nlLength(0xC179144, t172);
                                if (t173 > 1000.0f) {
                                    if (1500.0f > t173) {
                                        u174 = *(float *)(((int)stk + 60));
                                        if (0.0f > u174) {
                                            *(unsigned int *)(((int)stk + 24)) = ((((t170 << 2) + t170) << 2) + 0xC0CB0D4);
                                            t175 = *(short *)((((((t170 << 2) + t170) << 2) + 0xC0CB0D4) + 0xE));
                                            u176 = *(float *)0xC2A6AC8;
                                            t177 = *(int *)(((int)stk + 24));
                                            t178 = CheckClipping(((float)(unsigned short)t175 * u176));
                                            if (t178 != 0) {
                                                t179 = (int)((int)t170 % (int)0x20);
                                                t180 = 0x0;
                                                if ((int)t179 > 0) {
                                                    t180 = (((int)(t179 - 1) >= 0) ? (0x1 << ((t179 - 1) & 31)) : ((-(int)(t179 - 1) & 31) ? ((int)0x1 >> (-(int)(t179 - 1) & 31)) : ((int)0x1 >> 31)));
                                                }
                                                t182 = *(int *)(((((int)t170 >> 5) << 2) + 0xC2A7064));
                                                if (t180 != (t182 & t180)) {
                                                    t183 = crowdCreate(((((t170 << 2) + t170) << 2) + 0xC0CB0D4), t170);
                                                    t164 = (t164 - t183);
                                                    if ((int)t164 <= 0) break;
                                                    t165 = (t165 + 0x1);
                                                    continue;
                                                }
                                                t165 = (t165 + 0x1);
                                                continue;
                                            }
                                            t165 = (t165 + 0x1);
                                            continue;
                                        }
                                        t165 = (t165 + 0x1);
                                        continue;
                                    }
                                    t165 = (t165 + 0x1);
                                    continue;
                                }
                                t165 = (t165 + 0x1);
                            }
                        }
                    }
                }
                t196 = nlPopMatrix(0x1);
                t197 = t196;
            }
            t200 = t197;
        }
        t203 = t200;
    }
    return t203;
}

int pedDodgeCheck(int a4, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t16;
    int t17;
    int t19;
    float u20;
    float u25;
    float u26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;
    int t43;
    float u44;
    int t45;
    int t46;
    float u47;
    int t48;
    int t49;
    int t50;
    int t71;
    int t73;
    int t74;
    float u78;
    int t81;
    int t82;
    int t83;
    int t84;
    float u85;
    float u86;
    float u89;
    float u90;
    int t93;
    float u94;
    float u95;
    float u102;
    int t147;
    float u103;
    int t146;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t115;
    int t116;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    float u123;
    float u124;
    int t128;
    float u129;
    float u130;
    int t135;
    int t136;
    float u137;
    float u138;
    int t40;
    int t145;
    int t144;
    int t142;
    int t133;
    int t127;
    int t125;
    float u126;
    int t131;
    float u132;
    int t141;
    int t139;
    float u140;
    int stk[31] = {0};

    t0 = *(int *)((a4 + 0x50));
    if (t0 == 2) {
        t1 = *(int *)(((a4 + 0x40) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t1;
        t2 = *(int *)(((a4 + 0x40) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t2;
        t3 = *(int *)(((a4 + 0x40) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t3;
    } else {
        t4 = *(int *)(((a4 + 0xC) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t4;
        t5 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t5;
        t6 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t6;
    }
    u8 = *(float *)0xC179228;
    if ((50.0f + 15.0f * (u8 < 0.0f ? -u8 : u8)) > f4) {
        t9 = *(int *)((a4 + 0x50));
        if (t9 != 2) {
            if (20.0f > (f5 < 0.0f ? -f5 : f5)) {
                t10 = *(int *)((a4 + 0x50));
                if (t10 != 2) {
                    nlSubVector3op((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x30), 0xC179144);
                    nlUnitVector((((int)stk + 4) + 0x48));
                    *(unsigned int *)((a4 + 0x20)) = 0x0;
                    *(unsigned int *)((a4 + 0x50)) = 0x2;
                    t13 = *(int *)((a4 + 0x24));
                    t14 = *(int *)(((t13 << 2) + 0xC12FF7C));
                    Sound_Request(t14, 0x1);
                    t16 = *(short *)0xC1791C0;
                    *(unsigned short *)((a4 + 0x1A)) = t16;
                    t17 = *(int *)((a4 + 0x4C));
                    if (t17 == 0) {
                        nlPushUnitMatrix();
                        t19 = *(short *)0xC1791E0;
                        u20 = *(float *)0xC179228;
                        nlRotateAY((int)((float)t19 / u20));
                        FUN_0c077210(0xC1791C8, ((int)stk + 4));
                        nlPopMatrix(0x1);
                        nlOuterProduct((((int)stk + 4) + 0x48), ((int)stk + 4), (((int)stk + 4) + 0x3C));
                        u25 = *(float *)0xC179228;
                        u26 = *(float *)(((int)stk + 68));
                        if ((u26 * u25) > 0.0f) {
                            t27 = nlRand();
                            t28 = *(int *)0xC0D61BC;
                            t29 = (int)((unsigned int)t28 + (unsigned int)0x0);
                            t30 = (int)((unsigned int)t29 + ((((int)0x0 > (int)t28)) ? 1u : 0u));
                            t32 = (int)((int)t27 % (int)(t30 >> 1));
                            *(unsigned int *)((a4 + 0x28)) = (t32 << 1);
                            t40 = 0xC000;
                        } else {
                            t33 = nlRand();
                            t34 = *(int *)0xC0D61BC;
                            t35 = (int)((unsigned int)t34 + (unsigned int)0x0);
                            t36 = (int)((unsigned int)t35 + ((((int)0x0 > (int)t34)) ? 1u : 0u));
                            t38 = (int)((int)t33 % (int)(t36 >> 1));
                            *(unsigned int *)((a4 + 0x28)) = ((t38 << 1) + 0x1);
                            t40 = 0x4000;
                        }
                        *(unsigned short *)((a4 + 0x38)) = t40;
                    }
                    t43 = *(int *)((a4 + 0x28));
                    u44 = *(float *)(((t43 << 2) + 0xC12FF24));
                    t45 = *(int *)(((t43 << 2) + 0xC0D61AC));
                    t46 = *(int *)((t45 + 0x0));
                    u47 = (float)t46;
                    if ((int)t46 < 0) {
                        u47 = ((float)t46 + 4.2949673e+09f);
                    }
                    *(float *)(((0x3C + a4) + 0x0)) = (u44 / u47);
                    t48 = *(int *)(((a4 + 0xC) + 0x8));
                    *(unsigned int *)(((a4 + 0x40) + 0x8)) = t48;
                    t49 = *(int *)(((a4 + 0xC) + 0x4));
                    *(unsigned int *)(((a4 + 0x40) + 0x4)) = t49;
                    t50 = *(int *)(((a4 + 0xC) + 0x0));
                    *(unsigned int *)(((a4 + 0x40) + 0x0)) = t50;
                }
            }
        }
    }
    t71 = *(int *)((a4 + 0x50));
    if (t71 == 2) {
        nlPushUnitMatrix();
        t73 = *(short *)((a4 + 0x38));
        t74 = *(short *)0xC1791C0;
        nlRotateAY(((unsigned short)t73 + (unsigned short)t74));
        FUN_0c0771b0(0xC12FF0C, (a4 + 0x2C));
        nlPopMatrix(0x1);
        u78 = *(float *)((a4 + 0x3C));
        nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x2C), (u78 * (1.0f + 1.0f)));
        nlAddVector((a4 + 0x40), (((int)stk + 4) + 0xC));
        t81 = GetCollision2D((a4 + 0x40), 16.5f);
        t82 = *(int *)((t81 + 0x1C));
        if (t82 != -1) {
            if (t82 != 2) {
                t83 = *(short *)((a4 + 0x60));
                if (t83 != 0) {
                    if (t82 == 21) {
                        t84 = *(short *)((a4 + 0x60));
                        if (t84 == 0) {
                            u85 = *(float *)((t81 + 0x18));
                            *(float *)((a4 + 0x44)) = u85;
                            u86 = *(float *)((t81 + 0x18));
                            *(float *)((a4 + 0x10)) = u86;
                            CalcShadow4Normal((a4 + 0x54), (t81 + 0xC));
                        } else {
                            *(unsigned int *)((a4 + 0x50)) = 0x0;
                        }
                    } else {
                        u89 = *(float *)((t81 + 0x18));
                        *(float *)((a4 + 0x44)) = u89;
                        u90 = *(float *)((t81 + 0x18));
                        *(float *)((a4 + 0x10)) = u90;
                        CalcShadow4Normal((a4 + 0x54), (t81 + 0xC));
                    }
                } else {
                    t93 = *(short *)((a4 + 0x60));
                    if (t93 == 0) {
                        u94 = *(float *)((t81 + 0x18));
                        *(float *)((a4 + 0x44)) = u94;
                        u95 = *(float *)((t81 + 0x18));
                        *(float *)((a4 + 0x10)) = u95;
                        CalcShadow4Normal((a4 + 0x54), (t81 + 0xC));
                    } else {
                        *(unsigned int *)((a4 + 0x50)) = 0x0;
                    }
                }
            } else {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
            }
        } else {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
        }
    }
    u102 = *(float *)0xC0500A8;
    t147 = 0xC0500A8;
    if (u102 > f4) {
        u103 = *(float *)0xC0500AC;
        t146 = 0xC0500AC;
        if (u103 > (f5 < 0.0f ? -f5 : f5)) {
            t104 = *(int *)((a4 + 0x50));
            if (t104 == 2) {
                t105 = *(int *)(((a4 + 0x40) + 0x8));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t105;
                t106 = *(int *)(((a4 + 0x40) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t106;
                t107 = *(int *)(((a4 + 0x40) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t107;
            } else {
                t108 = *(int *)(((a4 + 0xC) + 0x8));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t108;
                t109 = *(int *)(((a4 + 0xC) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t109;
                t110 = *(int *)(((a4 + 0xC) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t110;
            }
            nlSubVector3op((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x30), 0xC179144);
            nlUnitVector((((int)stk + 4) + 0x48));
            nlScaleVector((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x48), u102);
            t115 = *(int *)((a4 + 0x50));
            t116 = (a4 + 0xC);
            if (t115 == 2) {
                t116 = (a4 + 0x40);
            }
            FUN_0c078a70(t116, 0xC179144, (((int)stk + 4) + 0x24));
            t118 = GetCollision2D((((int)stk + 4) + 0x30), 16.5f);
            t119 = *(int *)((t118 + 0x1C));
            if (t119 != -1) {
                if (t119 != 2) {
                    t120 = *(short *)((a4 + 0x60));
                    if (t120 != 0) {
                        if (t119 == 21) {
                            t121 = *(short *)((a4 + 0x60));
                            if (t121 == 0) {
                                t122 = *(int *)((a4 + 0x50));
                                if (t122 == 2) {
                                    u123 = *(float *)((t118 + 0x18));
                                    t125 = 0x44;
                                    u126 = u123;
                                } else {
                                    u124 = *(float *)((t118 + 0x18));
                                    t125 = 0x10;
                                    u126 = u124;
                                }
                                *(float *)((a4 + t125)) = u126;
                                t127 = t125;
                            } else {
                                *(unsigned int *)((a4 + 0x50)) = 0x0;
                                t127 = 0x50;
                            }
                            t133 = t127;
                        } else {
                            t128 = *(int *)((a4 + 0x50));
                            if (t128 == 2) {
                                u129 = *(float *)((t118 + 0x18));
                                t131 = 0x44;
                                u132 = u129;
                            } else {
                                u130 = *(float *)((t118 + 0x18));
                                t131 = 0x10;
                                u132 = u130;
                            }
                            *(float *)((a4 + t131)) = u132;
                            t133 = t131;
                        }
                        t142 = t133;
                    } else {
                        t135 = *(short *)((a4 + 0x60));
                        if (t135 == 0) {
                            t136 = *(int *)((a4 + 0x50));
                            if (t136 == 2) {
                                u137 = *(float *)((t118 + 0x18));
                                t139 = 0x44;
                                u140 = u137;
                            } else {
                                u138 = *(float *)((t118 + 0x18));
                                t139 = 0x10;
                                u140 = u138;
                            }
                            *(float *)((a4 + t139)) = u140;
                            t141 = t139;
                        } else {
                            *(unsigned int *)((a4 + 0x50)) = 0x0;
                            t141 = 0x50;
                        }
                        t142 = t141;
                    }
                    t144 = t142;
                } else {
                    *(unsigned int *)((a4 + 0x50)) = 0x0;
                    t144 = 0x50;
                }
                t145 = t144;
            } else {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
                t145 = 0x50;
            }
            t146 = t145;
        }
        t147 = t146;
    }
    return t147;
}

int SklPlay(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u7;
    int t13;
    int t14;
    int t52;
    int t53;
    int t113;
    int t119;
    int t120;
    int t143;
    int t144;
    int t155;
    int t156;
    int t159;
    int t169;
    int t170;
    int t193;
    int t194;
    int t199;
    int t200;
    int t203;
    int t210;
    int t211;
    int t248;
    int t254;
    int t255;
    int t268;
    int t269;
    int t274;
    int t275;
    int t282;
    int t283;
    int t296;
    int t297;
    int t302;
    int t303;
    int t306;

    t0 = *(int *)(((a5 << 2) + 0xC1331B0));
    t1 = *(short *)((a4 + 0x0));
    t2 = (int)((int)a6 % (int)(unsigned short)t1);
    t3 = *(int *)((a4 + 0x4));
    t4 = *(int *)((a4 + 0x8));
    nlPushMatrix(0x0);
    if (a7 == 0) {
        nlTranslateV(((a4 - t3) + (((t2 << 1) + t2) << 2)));
    } else {
        u7 = *(float *)((((a4 - t3) + (((t2 << 1) + t2) << 2)) + 0x4));
        nlTranslate(0.0f, u7, 0.0f);
    }
    sklRotate(((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))));
    nlPushMatrix(0x0);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x30));
    t13 = *(int *)(((t0 + 0x20) + 0x0));
    if (t13 != 0) {
        t14 = *(int *)(((t0 + 0x20) + 0x0));
        nlObjPutUseViewMatrix(t14);
    }
    if (a5 != 1) {
        if (a5 != 3) {
            if (a5 != 12) {
                if (a5 != 17) {
                    if (a5 != 18) {
                        if (a5 != 19) {
                            if (a5 != 20) {
                                if (a5 != 21) {
                                    if (a5 != 23) {
                                        if (a5 != 29) {
                                            if (a5 != 34) {
                                                if (a5 != 37) {
                                                    if (a5 != 53) {
                                                        if (a5 != 54) {
                                                            if (a5 != 59) {
                                                                if (a5 == 61) {
                                                                    nlObjPutUseViewMatrix(0xC49AFA8);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC56E778);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC55C470);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC5027E8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC4EE460);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC4B15B8);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC4AAA40);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4A87C8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4A68B0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4A49E0);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4A2C40);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A0878);
            }
        } else {
            nlObjPutUseViewMatrix(0xC495C20);
        }
    } else {
        nlObjPutUseViewMatrix(0xC567178);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5430);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x6));
    t52 = *(int *)(((t0 + 0x4) + 0x0));
    if (t52 != 0) {
        t53 = *(int *)(((t0 + 0x4) + 0x0));
        nlObjPutUseViewMatrix(t53);
    }
    if ((unsigned int)(a5 - 1) < (unsigned int)0x3E) {
        switch (((a5 - 1) << 1)) {
            case 0:
            {
                nlObjPutUseViewMatrix(0xC5634F8);
                nlObjPutUseViewMatrix(0xC5638B8);
                nlObjPutUseViewMatrix(0xC563D68);
            }
                break;
            case 2:
            {
                nlObjPutUseViewMatrix(0xC572F28);
                nlObjPutUseViewMatrix(0xC572D08);
                nlObjPutUseViewMatrix(0xC573600);
            }
                break;
            case 4:
            {
                nlObjPutUseViewMatrix(0xC492DA0);
                nlObjPutUseViewMatrix(0xC493068);
            }
                break;
            case 6:
            {
                nlObjPutUseViewMatrix(0xC5849B0);
            }
                break;
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 34:
            case 46:
            case 48:
            case 50:
            case 54:
            case 56:
            case 60:
            case 62:
            case 64:
            case 70:
            case 72:
            case 74:
            case 82:
            case 88:
            case 96:
            case 104:
            {
            }
                break;
            case 20:
            {
                nlObjPutUseViewMatrix(0xC59E200);
            }
                break;
            case 24:
            {
                nlObjPutUseViewMatrix(0xC5A1B78);
            }
                break;
            case 26:
            {
                nlObjPutUseViewMatrix(0xC5A3430);
                nlObjPutUseViewMatrix(0xC5A3788);
            }
                break;
            case 28:
            {
                nlObjPutUseViewMatrix(0xC5A5CD0);
                nlObjPutUseViewMatrix(0xC5A6028);
            }
                break;
            case 30:
            {
                nlObjPutUseViewMatrix(0xC5A8688);
            }
                break;
            case 32:
            {
                nlObjPutUseViewMatrix(0xC4A1DC0);
            }
                break;
            case 36:
            {
                nlObjPutUseViewMatrix(0xC4A5A30);
            }
                break;
            case 38:
            {
                nlObjPutUseViewMatrix(0xC4A7900);
            }
                break;
            case 40:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 42:
            {
                nlObjPutUseViewMatrix(0xC4ABD18);
            }
                break;
            case 44:
            {
                nlObjPutUseViewMatrix(0xC4AF058);
            }
                break;
            case 52:
            {
                nlObjPutUseViewMatrix(0xC4C5B10);
                nlObjPutUseViewMatrix(0xC4C5CF8);
                nlObjPutUseViewMatrix(0xC4C5EF8);
            }
                break;
            case 58:
            {
                nlObjPutUseViewMatrix(0xC4D6B70);
                nlObjPutUseViewMatrix(0xC4D6D60);
            }
                break;
            case 66:
            {
                nlObjPutUseViewMatrix(0xC4EC4E8);
            }
                break;
            case 68:
            {
                nlObjPutUseViewMatrix(0xC4F6420);
            }
                break;
            case 76:
            {
                nlObjPutUseViewMatrix(0xC50B4E0);
            }
                break;
            case 78:
            {
                nlObjPutUseViewMatrix(0xC511448);
                nlObjPutUseViewMatrix(0xC5116E8);
            }
                break;
            case 80:
            {
                nlObjPutUseViewMatrix(0xC516FD0);
            }
                break;
            case 84:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
            }
                break;
            case 86:
            {
                nlObjPutUseViewMatrix(0xC527BC8);
            }
                break;
            case 90:
            {
                nlObjPutUseViewMatrix(0xC532F58);
            }
                break;
            case 92:
            {
                nlObjPutUseViewMatrix(0xC5386F8);
            }
                break;
            case 94:
            {
                nlObjPutUseViewMatrix(0xC53E200);
            }
                break;
            case 98:
            {
                nlObjPutUseViewMatrix(0xC549570);
            }
                break;
            case 100:
            {
                nlObjPutUseViewMatrix(0xC54EB48);
            }
                break;
            case 102:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
            }
                break;
            case 106:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 108:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 110:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 112:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 114:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 116:
            {
                nlObjPutUseViewMatrix(0xC569030);
                nlObjPutUseViewMatrix(0xC5693F0);
                nlObjPutUseViewMatrix(0xC5698A0);
            }
                break;
            case 118:
            {
                nlObjPutUseViewMatrix(0xC579890);
                nlObjPutUseViewMatrix(0xC579670);
                nlObjPutUseViewMatrix(0xC5794F0);
            }
                break;
            case 120:
            {
                nlObjPutUseViewMatrix(0xC4970A0);
                nlObjPutUseViewMatrix(0xC497368);
            }
                break;
            default:
            {
                nlObjPutUseViewMatrix(0xC58B1E0);
            }
                break;
        }
    }
    t113 = *(int *)0xC13ED9C;
    if (t113 != 0) {
        nlGetTranslate(0xC13EDA4);
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D543C);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x18));
    t119 = *(int *)(((t0 + 0x10) + 0x0));
    if (t119 != 0) {
        t120 = *(int *)(((t0 + 0x10) + 0x0));
        nlObjPutUseViewMatrix(t120);
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 == 62) {
                                        nlObjPutUseViewMatrix(0xC58DAC0);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57CEC8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56C0E8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51D520);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E21F8);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB208);
                }
            } else {
                nlObjPutUseViewMatrix(0xC586508);
            }
        } else {
            nlObjPutUseViewMatrix(0xC574EA0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5654D8);
    }
    nlTranslateV(0xC0D5448);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x12));
    t143 = *(int *)(((t0 + 0xC) + 0x0));
    if (t143 != 0) {
        t144 = *(int *)(((t0 + 0xC) + 0x0));
        nlObjPutUseViewMatrix(t144);
    }
    if (a5 != 4) {
        if (a5 != 5) {
            if (a5 == 62) {
                nlObjPutUseViewMatrix(0xC58C9E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC594548);
        }
    } else {
        nlObjPutUseViewMatrix(0xC585FA0);
    }
    nlTranslateV(0xC0D5454);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0xC));
    t155 = *(int *)(((t0 + 0x8) + 0x0));
    if (t155 != 0) {
        t156 = *(int *)(((t0 + 0x8) + 0x0));
        nlObjPutUseViewMatrix(t156);
    }
    t159 = *(int *)0xC13ED98;
    if (t159 != 0) {
        if (a5 != 33) {
            if (a5 == 36) {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5460);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x2A));
    t169 = *(int *)(((t0 + 0x1C) + 0x0));
    if (t169 != 0) {
        t170 = *(int *)(((t0 + 0x1C) + 0x0));
        nlObjPutUseViewMatrix(t170);
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 == 62) {
                                        nlObjPutUseViewMatrix(0xC58FB18);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57F2C8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56DCC0);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51DA80);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E2720);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB7A8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC587E40);
            }
        } else {
            nlObjPutUseViewMatrix(0xC5768B8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC566CB0);
    }
    nlTranslateV(0xC0D546C);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x24));
    t193 = *(int *)(((t0 + 0x18) + 0x0));
    if (t193 != 0) {
        t194 = *(int *)(((t0 + 0x18) + 0x0));
        nlObjPutUseViewMatrix(t194);
    }
    nlTranslateV(0xC0D5478);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x1E));
    t199 = *(int *)(((t0 + 0x14) + 0x0));
    if (t199 != 0) {
        t200 = *(int *)(((t0 + 0x14) + 0x0));
        nlObjPutUseViewMatrix(t200);
    }
    t203 = *(int *)0xC13ED98;
    if (t203 != 0) {
        if (a5 == 35) {
            nlObjPutUseViewMatrix(0xC4FA698);
        }
    }
    nlPopMatrix(0x2);
    nlPushMatrix(0x0);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x5A));
    t210 = *(int *)(((t0 + 0x3C) + 0x0));
    if (t210 != 0) {
        t211 = *(int *)(((t0 + 0x3C) + 0x0));
        nlObjPutUseViewMatrix(t211);
    }
    if (a5 != 2) {
        if (a5 != 3) {
            if (a5 != 14) {
                if (a5 != 15) {
                    if (a5 != 29) {
                        if (a5 != 31) {
                            if (a5 != 35) {
                                if (a5 != 37) {
                                    if (a5 != 39) {
                                        if (a5 != 44) {
                                            if (a5 != 45) {
                                                if (a5 != 46) {
                                                    if (a5 != 51) {
                                                        if (a5 != 54) {
                                                            if (a5 != 55) {
                                                                if (a5 != 60) {
                                                                    if (a5 == 61) {
                                                                        nlObjPutUseViewMatrix(0xC499990);
                                                                    }
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC5836A0);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC4DCDE0);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D2010);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC550020);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC533FA8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC52E6C8);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC528C18);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC50C828);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC501220);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4F7C78);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4DCDE0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4D2010);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC5A8088);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A57E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4948E0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5786B8);
    }
    t248 = *(int *)0xC13EDA0;
    if (t248 != 0) {
        nlGetTranslate(0xC13EDB0);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5484);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x42));
    t254 = *(int *)(((t0 + 0x2C) + 0x0));
    if (t254 != 0) {
        t255 = *(int *)(((t0 + 0x2C) + 0x0));
        nlObjPutUseViewMatrix(t255);
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 == 44) {
                    nlObjPutUseViewMatrix(0xC529218);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E450);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F8138);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC440);
    }
    nlTranslateV(0xC0D5490);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x3C));
    t268 = *(int *)(((t0 + 0x28) + 0x0));
    if (t268 != 0) {
        t269 = *(int *)(((t0 + 0x28) + 0x0));
        nlObjPutUseViewMatrix(t269);
    }
    nlTranslateV(0xC0D549C);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x36));
    t274 = *(int *)(((t0 + 0x24) + 0x0));
    if (t274 != 0) {
        t275 = *(int *)(((t0 + 0x24) + 0x0));
        nlObjPutUseViewMatrix(t275);
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D54A8);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x54));
    t282 = *(int *)(((t0 + 0x38) + 0x0));
    if (t282 != 0) {
        t283 = *(int *)(((t0 + 0x38) + 0x0));
        nlObjPutUseViewMatrix(t283);
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 == 44) {
                    nlObjPutUseViewMatrix(0xC5296D8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E990);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F85A8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC8C8);
    }
    nlTranslateV(0xC0D54B4);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x4E));
    t296 = *(int *)(((t0 + 0x34) + 0x0));
    if (t296 != 0) {
        t297 = *(int *)(((t0 + 0x34) + 0x0));
        nlObjPutUseViewMatrix(t297);
    }
    nlTranslateV(0xC0D54C0);
    sklRotate((((a4 - t4) + ((((t2 << 2) << 2) << 1) + (((t2 << 2) << 2) << 2))) + 0x48));
    t302 = *(int *)(((t0 + 0x30) + 0x0));
    if (t302 != 0) {
        t303 = *(int *)(((t0 + 0x30) + 0x0));
        nlObjPutUseViewMatrix(t303);
    }
    t306 = nlPopMatrix(0x3);
    return t306;
}

int FcvPlayBuffer(int a4, int a5)
{
    int t0;
    int t20;
    int t21;
    int t60;
    int t61;
    int t121;
    int t130;
    int t132;
    int t133;
    int t155;
    int t157;
    int t158;
    int t169;
    int t170;
    int t173;
    int t187;
    int t189;
    int t190;
    int t212;
    int t214;
    int t215;
    int t220;
    int t221;
    int t224;
    int t233;
    int t234;
    int t271;
    int t280;
    int t282;
    int t283;
    int t295;
    int t297;
    int t298;
    int t303;
    int t304;
    int t315;
    int t317;
    int t318;
    int t330;
    int t332;
    int t333;
    int t338;
    int t339;
    int t345;
    int stk[32] = {0};

    t0 = *(int *)(((a5 << 2) + 0xC1331B0));
    nlPushMatrix(0x0);
    nlPushMatrix(0x0);
    nlTranslateV((a4 + 0xC));
    nlGetTranslate((((int)stk + 8) + 0x3C));
    nlGetPushedMatrix(0x0);
    nlTranslateV((a4 + 0x18));
    nlGetTranslate((((int)stk + 8) + 0x30));
    nlGetPushedMatrix(0x0);
    nlTranslateV((a4 + 0x24));
    nlGetTranslate((((int)stk + 8) + 0x24));
    nlGetPushedMatrix(0x0);
    nlTranslateV((a4 + 0x30));
    nlGetTranslate((((int)stk + 8) + 0x18));
    nlPopMatrix(0x1);
    nlTranslateV(a4);
    fcvRotate((a4 + 0x3C));
    nlRotateAY(0x4000);
    nlPushMatrix(0x0);
    fcvRotate((a4 + 0x48));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x20);
    t20 = *(int *)(((t0 + 0x20) + 0x0));
    if (t20 != 0) {
        t21 = *(int *)(((t0 + 0x20) + 0x0));
        nlObjPutUseViewMatrix(t21);
    }
    if (a5 != 1) {
        if (a5 != 3) {
            if (a5 != 12) {
                if (a5 != 17) {
                    if (a5 != 18) {
                        if (a5 != 19) {
                            if (a5 != 20) {
                                if (a5 != 21) {
                                    if (a5 != 23) {
                                        if (a5 != 29) {
                                            if (a5 != 34) {
                                                if (a5 != 37) {
                                                    if (a5 != 53) {
                                                        if (a5 != 54) {
                                                            if (a5 != 59) {
                                                                if (a5 == 61) {
                                                                    nlObjPutUseViewMatrix(0xC49AFA8);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC56E778);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC55C470);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC5027E8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC4EE460);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC4B15B8);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC4AAA40);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4A87C8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4A68B0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4A49E0);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4A2C40);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A0878);
            }
        } else {
            nlObjPutUseViewMatrix(0xC495C20);
        }
    } else {
        nlObjPutUseViewMatrix(0xC567178);
    }
    nlPushMatrix(0x0);
    nlRotateAZ(0xFFFFC000);
    nlTranslate(0.0f, 4.4849f, 0.0f);
    fcvRotate((a4 + 0x54));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x4);
    t60 = *(int *)(((t0 + 0x4) + 0x0));
    if (t60 != 0) {
        t61 = *(int *)(((t0 + 0x4) + 0x0));
        nlObjPutUseViewMatrix(t61);
    }
    if ((unsigned int)(a5 - 1) < (unsigned int)0x3E) {
        switch (((a5 - 1) << 1)) {
            case 0:
            {
                nlObjPutUseViewMatrix(0xC5634F8);
                nlObjPutUseViewMatrix(0xC5638B8);
                nlObjPutUseViewMatrix(0xC563D68);
            }
                break;
            case 2:
            {
                nlObjPutUseViewMatrix(0xC572F28);
                nlObjPutUseViewMatrix(0xC572D08);
                nlObjPutUseViewMatrix(0xC573600);
            }
                break;
            case 4:
            {
                nlObjPutUseViewMatrix(0xC492DA0);
                nlObjPutUseViewMatrix(0xC493068);
            }
                break;
            case 6:
            {
                nlObjPutUseViewMatrix(0xC5849B0);
            }
                break;
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 34:
            case 46:
            case 48:
            case 50:
            case 54:
            case 56:
            case 60:
            case 62:
            case 64:
            case 70:
            case 72:
            case 74:
            case 82:
            case 88:
            case 96:
            case 104:
            {
            }
                break;
            case 20:
            {
                nlObjPutUseViewMatrix(0xC59E200);
            }
                break;
            case 24:
            {
                nlObjPutUseViewMatrix(0xC5A1B78);
            }
                break;
            case 26:
            {
                nlObjPutUseViewMatrix(0xC5A3430);
                nlObjPutUseViewMatrix(0xC5A3788);
            }
                break;
            case 28:
            {
                nlObjPutUseViewMatrix(0xC5A5CD0);
                nlObjPutUseViewMatrix(0xC5A6028);
            }
                break;
            case 30:
            {
                nlObjPutUseViewMatrix(0xC5A8688);
            }
                break;
            case 32:
            {
                nlObjPutUseViewMatrix(0xC4A1DC0);
            }
                break;
            case 36:
            {
                nlObjPutUseViewMatrix(0xC4A5A30);
            }
                break;
            case 38:
            {
                nlObjPutUseViewMatrix(0xC4A7900);
            }
                break;
            case 40:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 42:
            {
                nlObjPutUseViewMatrix(0xC4ABD18);
            }
                break;
            case 44:
            {
                nlObjPutUseViewMatrix(0xC4AF058);
            }
                break;
            case 52:
            {
                nlObjPutUseViewMatrix(0xC4C5B10);
                nlObjPutUseViewMatrix(0xC4C5CF8);
                nlObjPutUseViewMatrix(0xC4C5EF8);
            }
                break;
            case 58:
            {
                nlObjPutUseViewMatrix(0xC4D6B70);
                nlObjPutUseViewMatrix(0xC4D6D60);
            }
                break;
            case 66:
            {
                nlObjPutUseViewMatrix(0xC4EC4E8);
            }
                break;
            case 68:
            {
                nlObjPutUseViewMatrix(0xC4F6420);
            }
                break;
            case 76:
            {
                nlObjPutUseViewMatrix(0xC50B4E0);
            }
                break;
            case 78:
            {
                nlObjPutUseViewMatrix(0xC511448);
                nlObjPutUseViewMatrix(0xC5116E8);
            }
                break;
            case 80:
            {
                nlObjPutUseViewMatrix(0xC516FD0);
            }
                break;
            case 84:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
            }
                break;
            case 86:
            {
                nlObjPutUseViewMatrix(0xC527BC8);
            }
                break;
            case 90:
            {
                nlObjPutUseViewMatrix(0xC532F58);
            }
                break;
            case 92:
            {
                nlObjPutUseViewMatrix(0xC5386F8);
            }
                break;
            case 94:
            {
                nlObjPutUseViewMatrix(0xC53E200);
            }
                break;
            case 98:
            {
                nlObjPutUseViewMatrix(0xC549570);
            }
                break;
            case 100:
            {
                nlObjPutUseViewMatrix(0xC54EB48);
            }
                break;
            case 102:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
            }
                break;
            case 106:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 108:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 110:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 112:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 114:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 116:
            {
                nlObjPutUseViewMatrix(0xC569030);
                nlObjPutUseViewMatrix(0xC5693F0);
                nlObjPutUseViewMatrix(0xC5698A0);
            }
                break;
            case 118:
            {
                nlObjPutUseViewMatrix(0xC579890);
                nlObjPutUseViewMatrix(0xC579670);
                nlObjPutUseViewMatrix(0xC5794F0);
            }
                break;
            case 120:
            {
                nlObjPutUseViewMatrix(0xC4970A0);
                nlObjPutUseViewMatrix(0xC497368);
            }
                break;
            default:
            {
                nlObjPutUseViewMatrix(0xC58B1E0);
            }
                break;
        }
    }
    t121 = *(int *)0xC13ED9C;
    if (t121 != 0) {
        nlGetTranslate(0xC13EDA4);
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(3.66109991f, 0.055999998f, -1.78759992f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    fcvRotate((a4 + 0x60));
    nlPushMatrix(0x0);
    FUN_0c067c14(0x0, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x40), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    t130 = *(int *)(((int)stk + 12));
    nlRotateAZ(t130);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x10);
    t132 = *(int *)(((t0 + 0x10) + 0x0));
    if (t132 != 0) {
        t133 = *(int *)(((t0 + 0x10) + 0x0));
        nlObjPutUseViewMatrix(t133);
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 == 62) {
                                        nlObjPutUseViewMatrix(0xC58DAC0);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57CEC8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56C0E8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51D520);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E21F8);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB208);
                }
            } else {
                nlObjPutUseViewMatrix(0xC586508);
            }
        } else {
            nlObjPutUseViewMatrix(0xC574EA0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5654D8);
    }
    nlTranslate(2.5079999f, 0.0f, 0.0f);
    t155 = *(int *)(((int)stk + 16));
    nlRotateAZ(t155);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0xC);
    t157 = *(int *)(((t0 + 0xC) + 0x0));
    if (t157 != 0) {
        t158 = *(int *)(((t0 + 0xC) + 0x0));
        nlObjPutUseViewMatrix(t158);
    }
    if (a5 != 4) {
        if (a5 != 5) {
            if (a5 == 62) {
                nlObjPutUseViewMatrix(0xC58C9E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC594548);
        }
    } else {
        nlObjPutUseViewMatrix(0xC585FA0);
    }
    nlTranslate(2.5144999f, 0.0f, 0.0f);
    fcvRotate((a4 + 0x6C));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x8);
    t169 = *(int *)(((t0 + 0x8) + 0x0));
    if (t169 != 0) {
        t170 = *(int *)(((t0 + 0x8) + 0x0));
        nlObjPutUseViewMatrix(t170);
    }
    t173 = *(int *)0xC13ED98;
    if (t173 != 0) {
        if (a5 != 33) {
            if (a5 == 36) {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(3.66109991f, 0.055999998f, 1.78759992f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    fcvRotate((a4 + 0x78));
    nlPushMatrix(0x0);
    FUN_0c067c14(0x0, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x34), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    t187 = *(int *)(((int)stk + 12));
    nlRotateAZ(t187);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x1C);
    t189 = *(int *)(((t0 + 0x1C) + 0x0));
    if (t189 != 0) {
        t190 = *(int *)(((t0 + 0x1C) + 0x0));
        nlObjPutUseViewMatrix(t190);
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 == 62) {
                                        nlObjPutUseViewMatrix(0xC58FB18);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57F2C8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56DCC0);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51DA80);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E2720);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB7A8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC587E40);
            }
        } else {
            nlObjPutUseViewMatrix(0xC5768B8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC566CB0);
    }
    nlTranslate(2.5079999f, 0.0f, 0.0f);
    t212 = *(int *)(((int)stk + 16));
    nlRotateAZ(t212);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x18);
    t214 = *(int *)(((t0 + 0x18) + 0x0));
    if (t214 != 0) {
        t215 = *(int *)(((t0 + 0x18) + 0x0));
        nlObjPutUseViewMatrix(t215);
    }
    nlTranslate(2.5144999f, 0.0f, 0.0f);
    fcvRotate(((a4 + 0x3C) + 0x48));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x14);
    t220 = *(int *)(((t0 + 0x14) + 0x0));
    if (t220 != 0) {
        t221 = *(int *)(((t0 + 0x14) + 0x0));
        nlObjPutUseViewMatrix(t221);
    }
    t224 = *(int *)0xC13ED98;
    if (t224 != 0) {
        if (a5 == 35) {
            nlObjPutUseViewMatrix(0xC4FA698);
        }
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    fcvRotate(((a4 + 0x3C) + 0x54));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x3C);
    t233 = *(int *)(((t0 + 0x3C) + 0x0));
    if (t233 != 0) {
        t234 = *(int *)(((t0 + 0x3C) + 0x0));
        nlObjPutUseViewMatrix(t234);
    }
    if (a5 != 2) {
        if (a5 != 3) {
            if (a5 != 14) {
                if (a5 != 15) {
                    if (a5 != 29) {
                        if (a5 != 31) {
                            if (a5 != 35) {
                                if (a5 != 37) {
                                    if (a5 != 39) {
                                        if (a5 != 44) {
                                            if (a5 != 45) {
                                                if (a5 != 46) {
                                                    if (a5 != 51) {
                                                        if (a5 != 54) {
                                                            if (a5 != 55) {
                                                                if (a5 != 60) {
                                                                    if (a5 == 61) {
                                                                        nlObjPutUseViewMatrix(0xC499990);
                                                                    }
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC5836A0);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC4DCDE0);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D2010);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC550020);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC533FA8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC52E6C8);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC528C18);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC50C828);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC501220);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4F7C78);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4DCDE0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4D2010);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC5A8088);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A57E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4948E0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5786B8);
    }
    t271 = *(int *)0xC13EDA0;
    if (t271 != 0) {
        nlGetTranslate(0xC13EDB0);
    }
    nlPushMatrix(0x0);
    nlTranslate(1.1602999f, 0.148599997f, -1.17639995f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    fcvRotate(((a4 + 0x3C) + 0x60));
    nlPushMatrix(0x0);
    FUN_0c067c14(0x1, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    t280 = *(int *)(((int)stk + 12));
    nlRotateAZ(t280);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x2C);
    t282 = *(int *)(((t0 + 0x2C) + 0x0));
    if (t282 != 0) {
        t283 = *(int *)(((t0 + 0x2C) + 0x0));
        nlObjPutUseViewMatrix(t283);
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 == 44) {
                    nlObjPutUseViewMatrix(0xC529218);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E450);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F8138);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC440);
    }
    nlTranslate(4.05099964f, 0.0f, 0.0f);
    t295 = *(int *)(((int)stk + 16));
    nlRotateAZ(t295);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x28);
    t297 = *(int *)(((t0 + 0x28) + 0x0));
    if (t297 != 0) {
        t298 = *(int *)(((t0 + 0x28) + 0x0));
        nlObjPutUseViewMatrix(t298);
    }
    nlTranslate(4.24659967f, 0.0f, 0.0f);
    fcvRotate(((a4 + 0x3C) + 0x6C));
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x24);
    t303 = *(int *)(((t0 + 0x24) + 0x0));
    if (t303 != 0) {
        t304 = *(int *)(((t0 + 0x24) + 0x0));
        nlObjPutUseViewMatrix(t304);
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(1.1602999f, 0.148599997f, 1.17639995f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    fcvRotate(((a4 + 0x3C) + 0x78));
    nlPushMatrix(0x0);
    FUN_0c067c14(0x1, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    t315 = *(int *)(((int)stk + 12));
    nlRotateAZ(t315);
    *(unsigned int *)(((int)stk + 8)) = (t0 + 0x38);
    t317 = *(int *)(((t0 + 0x38) + 0x0));
    if (t317 != 0) {
        t318 = *(int *)(((t0 + 0x38) + 0x0));
        nlObjPutUseViewMatrix(t318);
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 == 44) {
                    nlObjPutUseViewMatrix(0xC5296D8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E990);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F85A8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC8C8);
    }
    nlTranslate(4.05099964f, 0.0f, 0.0f);
    t330 = *(int *)(((int)stk + 16));
    nlRotateAZ(t330);
    t332 = *(int *)(((t0 + 0x34) + 0x0));
    if (t332 != 0) {
        t333 = *(int *)(((t0 + 0x34) + 0x0));
        nlObjPutUseViewMatrix(t333);
    }
    nlTranslate(4.24659967f, 0.0f, 0.0f);
    fcvRotate(((a4 + 0x3C) + 0x84));
    t338 = *(int *)(((t0 + 0x30) + 0x0));
    if (t338 != 0) {
        t339 = *(int *)(((t0 + 0x30) + 0x0));
        nlObjPutUseViewMatrix(t339);
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    t345 = nlPopMatrix(0x1);
    return t345;
}

