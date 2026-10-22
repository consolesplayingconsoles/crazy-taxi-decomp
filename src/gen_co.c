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








