/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow4Normal(int, int);
int CheckClipping(float);
int CheckClippingProject3D(int, float);
int carBoxVertexInit(void);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int, int);
int HomingPosX(int, float, float);
int pedGetSubwayFlag(void);
int fcvSolveIK(int, int, int, int, int);
int nlSqrt(int, int);
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
int pcarRejoinLane(int a4);
int CheckCollisionPoly(int a4, int a5, int a6);
int carCorneringForce(int a4, int a5);
int FUN_0c156f4c(int a4, int a5, int a6);
int entryCarPut(int a4);
int selectDrawDriverTiles(void);
int kmRenderTextureDirect(int a4);
int carBalanceRoll(int a4, float f4);
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

int pcarRejoinLane(int a4)
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
                getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
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
            getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
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

int CheckCollisionPoly(int a4, int a5, int a6)
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
                nlSqrt((a5 + 0x14), (((int)stk + 4) + 0x18));
                u6 = *(float *)(((int)stk + 28));
                u7 = *(float *)(((int)stk + 32));
                u8 = *(float *)((a5 + 0x10));
                t77 = 0x0;
                if (!(((u7 * u7) + u6 * u6) > (u8 * u8))) {
                    nlSqrt(((a5 + 0x14) + 0xC), (((int)stk + 4) + 0xC));
                    t10 = *(int *)((a5 + 0x48));
                    if (t10 != 3) {
                        u11 = *(float *)(((int)stk + 20));
                        u12 = *(float *)(((int)stk + 28));
                        u13 = *(float *)(((int)stk + 16));
                        u14 = *(float *)(((int)stk + 32));
                        t41 = 0x0;
                        if (!(((u12 * u11) - (u14 * u13)) > 0.0f)) {
                            nlSqrt((((a5 + 0x14) + 0xC) + 0xC), ((int)stk + 4));
                            u16 = *(float *)(((int)stk + 8));
                            u17 = *(float *)(((int)stk + 16));
                            u18 = *(float *)(((int)stk + 20));
                            u19 = *(float *)(((int)stk + 4));
                            t37 = 0x0;
                            if (!(((u17 * u16) - (u18 * u19)) > 0.0f)) {
                                nlSqrt(((((a5 + 0x14) + 0xC) + 0xC) + 0xC), (((int)stk + 4) + 0xC));
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
                        nlSqrt((((a5 + 0x14) + 0xC) + 0xC), ((int)stk + 4));
                        u48 = *(float *)(((int)stk + 8));
                        u49 = *(float *)(((int)stk + 16));
                        u50 = *(float *)(((int)stk + 20));
                        u51 = *(float *)(((int)stk + 4));
                        t69 = 0x0;
                        if (!(((u49 * u48) - (u50 * u51)) > 0.0f)) {
                            nlSqrt(((((a5 + 0x14) + 0xC) + 0xC) + 0xC), (((int)stk + 4) + 0xC));
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

int carCorneringForce(int a4, int a5)
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
        t6 = carBoxVertexInit();
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

int selectDrawDriverTiles(void)
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
            HomingPosX(0xC2A7500, 0.599999964f, 0.0f);
        }
    } else {
        if (t3 == 1) {
            if (u4 > 0.0f) {
                u8 = *(float *)0xC2A7500;
                *(float *)0xC2A7500 = (u8 - 60.0f);
            } else {
                HomingPosX(0xC2A7500, 0.599999964f, 0.0f);
            }
            u11 = *(float *)0xC2A7508;
            if (0.0f > u11) {
                u12 = *(float *)0xC2A7508;
                *(float *)0xC2A7508 = (u12 + (1.0f + 1.0f));
            } else {
                HomingPosX(0xC2A7508, 0.599999964f, 0.0f);
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
            HomingPosX(0xC2A7500, 0.599999964f, 0.0f);
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
        nlSqrt(0xC12FF0C, (a4 + 0x2C));
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


