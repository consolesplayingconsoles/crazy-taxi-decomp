/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CableControlInit(int);
int GetRotVec4Ang(int, int, int);
int NextWindow(int);
int windowOpenStep(void);
int windowEnterStep(void);
int GetNowLanguage(int);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int);
int nd_SprPut(int, int, float, float);
int Init_Window_Sprite(int);
int Start_Excellent(void);
int Start_Fault(int);
int Exec_Remain_Arrow(void);
int Put_Remain_Icon(void);
int fcvTranslateCurve(void);
int fcvRotateCurve(void);
int fcvSolveIK(int, int, int, int, int);
float BigOneKeyValue(int, int, float);
int BigOneRotate(int, int, int);
int BigOneHomeAngle(int, int, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMultiViewMatrix(void);
int nlQuickInvertMatrix(void);
int nlTranslateNV(int);
int nlAddVector3op(int, int, int);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int nlMvClipEdge(int, int, int);
int nlMvPutFaceClip(int, int, int, int);
int nlMvGetFaceVerts(int, int);
int kmiUpdateRenderStatus(void);
int kmiStartNextDMA(void);
int kmiStartNextRender(void);
int GetAverageAngle(int, int, float);
int GetCollision2D(int, float);
int KillColliObj(int);
int PutWindow(int, float, float);
int MultiRot4Vec(int);
int Sound_Request(int, int);
extern float _builtin_sqrtf(float);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int colliBoxAhead(int, int, int);
int extRand(void);
int getYXZrot(int);
extern int kmiCreateRegionArray();
int kmiDMAHazardReset(void);
int menuPutSprites(int, int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
float nlFloor(float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
extern int pcarSpawn();
int putString(int, int, float, float, float);
int setTechnicalBonus(int, int, int);
int signalInit(int, int);
int technicalCheck(int);
int trainControlInit(void);
int vsklRotate(int);
void nlUnitRotation(void);
int kmiCopyTextureToTexture(void);
float carGripCurve(float f4);
int windowBoxAdvice(void);
int Exec_DCmini_Game7(void);
void nlMvPutPolygon(int a4, int a5, int a6, int a7);
int breathSteer(int a4, int a5);
int SetSpark(int a4, int a5, int a6);
int nlLineDrawThick(int a4, int a5, int a6, int a7);
int colliBoxSphere(int a4, int a5);
int Put_Window_SpriteXtoY(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int kmiEndOfRenderISR(void);
int trailerExec(int a4);
int BigOneSwimMove(void);
int trafficSectionControl(int a4, int a5, int a6, float f4);
int humanDraw(int a4, int a5, int a6, int a7);
int FcvPlay(int a4, int a5, float f4);


int kmiCopyTextureToTexture(void)
{
    return 0x1;
}




void nlMvPutPolygon(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
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
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 28)) = a6;
    t0 = *(int *)0xC2B7670;
    *(unsigned int *)(((int)stk + 4)) = t0;
    *(unsigned int *)(((int)stk + 32)) = 0xC2B7678;
    t1 = *(int *)((a7 + 0x0));
    t2 = (((int)stk + 4) + 0x1C);
    if ((t1 & 0x1) != 0) {
        t2 = ((int)stk + 4);
    }
    t3 = 0xC2B7670;
    t4 = a4;
    t5 = a5;
    while ((int)t5 > 0) {
        t3 = 0xC078AC0;
        t6 = *(int *)((t2 + 0x0));
        t7 = nlInnerProduct(t4, t6);
        if (0.0f > t7) {
            t8 = (t4 + 0x12);
            t9 = 0x3;
            do {
                t10 = *(short *)((t8 + 0x0));
                t8 = (t8 + 0x2);
                t11 = *(int *)0xC2B766C;
                t12 = *(signed char *)(((t11 + t10) + 0x0));
                t3 = t12;
                if (t3 != 0) {
                    *(unsigned char *)(((t11 + t10) + 0x0)) = 0x2;
                } else {
                    *(unsigned char *)(((t11 + t10) + 0x0)) = 0x1;
                    t13 = *(int *)(((int)stk + 28));
                    t3 = t13;
                    t14 = *(short *)((((t10 << 2) + t3) + 0x0));
                    t15 = ((t10 << 2) + t3);
                    t3 = t14;
                    *(unsigned int *)(((int)stk + 24)) = t3;
                    t16 = *(short *)((t15 + 0x2));
                    *(unsigned int *)(((int)stk + 8)) = t16;
                    *(unsigned int *)(((int)stk + 20)) = ((t10 << 2) << 2);
                    t17 = *(int *)(((int)stk + 8));
                    t18 = *(int *)0xC2B7664;
                    *(unsigned int *)(((int)stk + 12)) = ((t17 << 2) << 2);
                    t19 = *(int *)(((int)stk + 24));
                    t20 = *(int *)0xC2B7658;
                    t3 = t20;
                    *(unsigned int *)(((int)stk + 16)) = ((t19 << 2) << 2);
                    nlMvClipEdge((((t19 << 2) << 2) + t3), (((t17 << 2) << 2) + t3), (((t10 << 2) << 2) + t18));
                    t3 = 0xC2B7668;
                    t22 = *(int *)0xC2B765C;
                    t23 = *(int *)(((int)stk + 12));
                    t24 = *(int *)((t3 + 0x0));
                    t25 = *(int *)(((int)stk + 20));
                    t26 = *(int *)(((int)stk + 16));
                    nlMvClipEdge((t26 + t22), (t23 + t22), (t25 + t24));
                }
                t9 = (t9 - 0x1);
            } while (t9 != 0);
            t3 = 0xC2B7658;
            t29 = *(int *)0xC2B7664;
            t30 = *(int *)((t3 + 0x0));
            t31 = nlMvGetFaceVerts(t30, (t4 + 0xC));
            t3 = 0xC2B765C;
            t32 = *(int *)0xC2B7668;
            t33 = *(int *)((t3 + 0x0));
            t34 = nlMvGetFaceVerts(t33, (t4 + 0xC));
            if ((t31 | t34) != 0) {
                nlMvPutFaceClip(t31, t34, (t4 + 0xC), (t4 + 0x12));
            }
        }
        t37 = *(int *)(((int)stk + 4));
        t3 = t37;
        t4 = (t4 + 0x18);
        t5 = (t5 - 1);
        t3 = (t3 + 0xC);
        *(unsigned int *)(((int)stk + 4)) = t3;
    }
}



int nlLineDrawThick(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t7;
    float u9;
    int t10;
    int t11;
    int t12;
    float u13;
    float u14;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    int t45;
    int t28;
    int t29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u46;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    float u55;
    float u56;
    float u57;
    int t65;
    float u66;
    int t61;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a6 + 0x4));
    u4 = *(float *)0xC14A9F4;
    if ((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)) == 0.0f) {
        u5 = *(float *)((a5 + 0x8));
        u6 = *(float *)((a6 + 0x8));
        t7 = a6;
        if (!(u5 > u6)) {
            t7 = a5;
        }
        nlLineSendQuadE(a4, t7, a7, (u4 * 0.5f));
        t65 = (a4 + 0x80);
        u66 = (u4 * 0.5f);
    } else {
        u9 = *(float *)0xC14A9F0;
        t10 = (int)((1.0f / u9) * (u0 - u1));
        if ((int)(int)((1.0f / u9) * (u0 - u1)) < 0) {
            t10 = (-(int)((1.0f / u9) * (u0 - u1)));
        }
        t11 = (int)((1.0f / u9) * (u2 - u3));
        if ((int)(int)((1.0f / u9) * (u2 - u3)) < 0) {
            t11 = (-(int)((1.0f / u9) * (u2 - u3)));
        }
        t12 = t11;
        if ((int)t10 < (int)t11) {
            t12 = t10;
        }
        u13 = *(float *)((a5 + 0x8));
        *(float *)((a5 + 0x8)) = (1.0f / u13);
        u14 = *(float *)((a6 + 0x8));
        *(float *)((a6 + 0x8)) = (1.0f / u14);
        if ((int)t12 <= (int)0x1) {
            nlLineSendQuadA(a4, a5, a6, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
            t61 = a4;
        } else {
            *(float *)0xC2B7634 = ((1.0f / (float)t12) * (u0 - u1));
            *(float *)0xC2B7638 = ((1.0f / (float)t12) * (u2 - u3));
            u16 = *(float *)((a5 + 0x8));
            u17 = *(float *)((a6 + 0x8));
            *(float *)0xC2B763C = ((u16 - u17) * (1.0f / (float)t12));
            u18 = *(float *)((a6 + 0x0));
            *(float *)0xC2B7640 = u18;
            u19 = *(float *)0xC2B7640;
            u20 = *(float *)0xC2B7634;
            *(float *)0xC2B764C = (u19 + u20);
            u21 = *(float *)((a6 + 0x4));
            *(float *)0xC2B7644 = u21;
            u22 = *(float *)0xC2B7638;
            u23 = *(float *)0xC2B7644;
            *(float *)0xC2B7650 = (u23 + u22);
            u24 = *(float *)((a6 + 0x8));
            *(float *)0xC2B7648 = u24;
            u25 = *(float *)0xC2B7648;
            u26 = *(float *)0xC2B763C;
            *(float *)0xC2B7654 = (u25 + u26);
            nlLineSendQuadD(a4, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
            t45 = (a4 + 0x80);
            if ((int)0x1 < (int)(t12 - 1)) {
                t28 = 0x1;
                t29 = (a4 + 0x80);
                do {
                    u30 = *(float *)0xC2B7634;
                    u31 = *(float *)0xC2B7640;
                    *(float *)0xC2B7640 = (u31 + u30);
                    u32 = *(float *)0xC2B764C;
                    u33 = *(float *)0xC2B7634;
                    *(float *)0xC2B764C = (u32 + u33);
                    u34 = *(float *)0xC2B7638;
                    u35 = *(float *)0xC2B7644;
                    *(float *)0xC2B7644 = (u35 + u34);
                    u36 = *(float *)0xC2B7638;
                    u37 = *(float *)0xC2B7650;
                    *(float *)0xC2B7650 = (u37 + u36);
                    u38 = *(float *)0xC2B763C;
                    u39 = *(float *)0xC2B7648;
                    *(float *)0xC2B7648 = (u39 + u38);
                    u40 = *(float *)0xC2B763C;
                    u41 = *(float *)0xC2B7654;
                    *(float *)0xC2B7654 = (u41 + u40);
                    nlLineSendQuadC(t29, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
                    t28 = (t28 + 0x1);
                    t29 = (t29 + 0x80);
                } while ((int)t28 < (int)(t12 - 1));
                t45 = t29;
            }
            u46 = *(float *)0xC2B7634;
            u47 = *(float *)0xC2B7640;
            *(float *)0xC2B7640 = (u47 + u46);
            u48 = *(float *)0xC2B7634;
            u49 = *(float *)0xC2B764C;
            *(float *)0xC2B764C = (u49 + u48);
            u50 = *(float *)0xC2B7638;
            u51 = *(float *)0xC2B7644;
            *(float *)0xC2B7644 = (u51 + u50);
            u52 = *(float *)0xC2B7638;
            u53 = *(float *)0xC2B7650;
            *(float *)0xC2B7650 = (u53 + u52);
            u54 = *(float *)0xC2B763C;
            u55 = *(float *)0xC2B7648;
            *(float *)0xC2B7648 = (u55 + u54);
            u56 = *(float *)0xC2B763C;
            u57 = *(float *)0xC2B7654;
            *(float *)0xC2B7654 = (u57 + u56);
            nlLineSendQuadB(t45, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
            t61 = t45;
        }
        t65 = (t61 + 0x80);
        u66 = ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f)));
    }
    return t65;
}



int kmiEndOfRenderISR(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t19;
    int t23;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t129;
    int t40;
    int t122;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
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
    int t70;
    int t71;
    int t72;
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
    int t83;
    int t84;
    int t85;
    int t86;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t97;
    int t98;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t128;
    int t125;
    int t127;
    int t5;
    int t34;
    int t38;
    int t15;
    int t18;
    int t30;
    int t33;
    int t116;
    int stk[18] = {0};

    *(unsigned int *)0xA05F6900 = 0x8;
    t0 = *(int *)0xC2EA930;
    *(unsigned int *)0xC2EA930 = (t0 | 0x2);
    t1 = *(int *)0xC2EA9F0;
    *(unsigned int *)0xC2EA9F0 = (t1 + 0x1);
    t2 = *(int *)0xC2EA684;
    if ((t2 & 2) != 0) {
        t3 = *(int *)0xA05F810C;
        t5 = ((unsigned int)((unsigned int)(t3 & 0x400) >> 8) >> 2);
    } else {
        t4 = *(int *)0xC1786F4;
        *(unsigned int *)0xC1786F4 = ((t4 + 0x1) & 0x1);
        t5 = ((t4 + 0x1) & 0x1);
    }
    *(unsigned int *)0xC2F9200 = t5;
    t8 = *(int *)0xC2EA6A0;
    if ((t8 & 0x4) == 4) {
        t9 = *(int *)0xC2F9200;
        t19 = t9;
        t23 = 0x1;
        if (t9 != 1) {
            t10 = *(int *)0xC2EA860;
            *(unsigned int *)0xC2EA860 = (t10 - 1);
            t11 = *(int *)0xC2EA860;
            if ((int)t11 >= 0) {
                t12 = *(int *)0xC2F91A4;
                t13 = 0x1;
                if (t12 != 0) {
                    *(unsigned int *)0xC2F91A4 = 0x0;
                    t13 = 0x0;
                }
                t15 = t12;
                t18 = t13;
            } else {
                t14 = *(int *)0xC2EA864;
                *(unsigned int *)0xC2EA860 = t14;
                t15 = 0xC2EA860;
                t18 = 0x0;
            }
            t19 = t15;
            t23 = t18;
        }
        t34 = t19;
        t38 = t23;
    } else {
        t25 = *(int *)0xC2EA860;
        *(unsigned int *)0xC2EA860 = (t25 - 1);
        t26 = *(int *)0xC2EA860;
        if ((int)t26 >= 0) {
            t27 = *(int *)0xC2F91A4;
            t28 = 0x1;
            if (t27 != 0) {
                *(unsigned int *)0xC2F91A4 = 0x0;
                t28 = 0x0;
            }
            t30 = t27;
            t33 = t28;
        } else {
            t29 = *(int *)0xC2EA864;
            *(unsigned int *)0xC2EA860 = t29;
            t30 = 0xC2EA860;
            t33 = 0x0;
        }
        t34 = t30;
        t38 = t33;
    }
    t129 = 0x0;
    if (t38 == 0) {
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        t40 = *(int *)0xC2EA9FC;
        t122 = 0x1;
        if (t40 == 0) {
            t41 = *(int *)0xC2EA9F8;
            if (t41 != 0) {
                t42 = *(int *)0xC2F91C0;
                *(unsigned int *)0xC2F91C0 = (t42 + 0x1);
                if ((unsigned int)(t42 + 0x1) > (unsigned int)0x10) {
                    t43 = *(int *)0xC2EA94C;
                    *(unsigned int *)0xA05F8048 = t43;
                    t44 = *(int *)0xC2EA944;
                    *(unsigned int *)0xA05F804C = t44;
                    t45 = *(int *)0xC2EA934;
                    *(unsigned int *)0xA05F8068 = t45;
                    t46 = *(int *)0xC2EA938;
                    *(unsigned int *)0xA05F806C = t46;
                    *(unsigned int *)0xC2EA888 = 0x0;
                    *(unsigned int *)0xC2F91C0 = 0x0;
                }
                t116 = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                *(unsigned int *)(((int)stk + 32)) = 0x0;
                *(unsigned int *)(((int)stk + 24)) = 0x0;
                *(unsigned int *)(((int)stk + 28)) = 0x0;
                t51 = t34;
                t52 = 0xC2EA9F8;
                for (;;) {
                    t53 = *(int *)(((int)stk + 20));
                    if ((int)t53 < (int)0x4) {
                        t54 = *(int *)(((int)stk + 20));
                        t51 = 0xC2EA9CC;
                        t55 = *(int *)(((t54 << 2) + t51));
                        t52 = t55;
                        if ((int)t52 >= 0) {
                            t56 = *(int *)(((t54 << 2) + t51));
                            t52 = t56;
                            if ((t52 & 0x1) == 0) {
                                t57 = *(int *)0xC2EA8A4;
                                if (t57 == 0) {
                                    t58 = *(int *)(((t54 << 2) + t51));
                                    t51 = t58;
                                    if (t51 == 4) {
                                        t51 = 0xC2EA9CC;
                                        *(unsigned int *)(((t54 << 2) + t51)) = 0x5;
                                        t59 = *(int *)0xC2EA888;
                                        t52 = t59;
                                        if (t52 != 0) {
                                            t60 = *(int *)0xC2F91B0;
                                            t52 = t60;
                                            t52 = (t52 + 0x1);
                                            *(unsigned int *)0xC2F91B0 = t52;
                                        }
                                        *(unsigned int *)0xC2EA888 = 0x0;
                                        t52 = 0x2;
                                        *(unsigned int *)0xA05F8008 = t52;
                                        *(unsigned int *)0xA05F8008 = 0x0;
                                    } else {
                                        t51 = 0xC2EA9CC;
                                        *(unsigned int *)0xC2F91A4 = 0x1;
                                        *(unsigned int *)(((int)stk + 36)) = 0x1;
                                        t61 = *(int *)(((t54 << 2) + t51));
                                        t51 = t61;
                                        if (t51 == 2) {
                                            t62 = *(int *)0xC2F91AC;
                                            *(unsigned int *)0xC2F91AC = (t62 + 0x1);
                                            t63 = *(int *)0xC2F91AC;
                                            t51 = t63;
                                            t64 = *(int *)0xC2EA8A8;
                                            t52 = t64;
                                            if ((unsigned int)t51 > (unsigned int)t52) {
                                                t65 = *(int *)0xC2F91B4;
                                                t52 = t65;
                                                t52 = (t52 + 0x1);
                                                *(unsigned int *)0xC2F91B4 = t52;
                                                t52 = 0xC155422;
                                                t66 = kmiDMAHazardReset();
                                                t51 = t66;
                                                t51 = 0xC2EA9CC;
                                                *(unsigned int *)(((t54 << 2) + t51)) = 0xFFFFFFFF;
                                                t52 = 0xC2EA88C;
                                                *(unsigned int *)((t52 + 0x0)) = 0x0;
                                                *(unsigned int *)0xC2F91AC = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t51 = 0xC2EA9CC;
                                    *(unsigned int *)0xC2F91A4 = 0x1;
                                    *(unsigned int *)(((int)stk + 36)) = 0x1;
                                    t70 = *(int *)(((t54 << 2) + t51));
                                    t51 = t70;
                                    if (t51 == 4) {
                                        t71 = *(int *)0xC2F91A8;
                                        *(unsigned int *)0xC2F91A8 = (t71 + 0x1);
                                        t72 = *(int *)0xC2F91A8;
                                        t51 = t72;
                                        t73 = *(int *)0xC2EA8A4;
                                        t52 = t73;
                                        if ((unsigned int)t51 > (unsigned int)t52) {
                                            t74 = *(int *)0xC2F91B0;
                                            t52 = t74;
                                            t52 = (t52 + 0x1);
                                            *(unsigned int *)0xC2F91B0 = t52;
                                            t52 = 0xFFFFFFFE;
                                            t75 = *(int *)0xC2EA948;
                                            t51 = t75;
                                            t51 = (t51 & t52);
                                            *(unsigned int *)0xA05F8044 = t51;
                                            *(unsigned int *)0xA05F8008 = 0x6;
                                            *(unsigned int *)0xA05F8008 = 0x0;
                                            t76 = *(int *)0xC2EA948;
                                            *(unsigned int *)0xA05F8044 = t76;
                                            t77 = *(int *)0xC2EA6E8;
                                            t51 = t77;
                                            t51 = (~t51);
                                            t52 = 0xC2EAAE0;
                                            t51 = (t51 & 0x1);
                                            t78 = *(int *)((t52 + 0x0));
                                            t52 = 0xC15EA40;
                                            t79 = *(int *)0xC2EAADC;
                                            t80 = ((int (*)(int, int, int))(kmiCreateRegionArray))(t79, t78, 0x0);
                                            t51 = t80;
                                            t52 = 0xC2EA6E8;
                                            t81 = *(int *)((t52 + 0x0));
                                            t82 = *(int *)0xC2EAAE0;
                                            t51 = 0xC2EAADC;
                                            t83 = *(int *)((t51 + 0x0));
                                            t84 = ((int (*)(int, int, int, int, int, int, int, int))(kmiCreateRegionArray))(t83, t82, 0x0, 0x1, 0x1, ((~t81) & 0x1), 0x0, t51);
                                            t51 = t84;
                                            t51 = 0xC2EA9CC;
                                            t85 = *(int *)(((int)stk + 28));
                                            t52 = t85;
                                            *(unsigned int *)((t52 + t51)) = 0x5;
                                            t52 = 0xC2EA888;
                                            *(unsigned int *)((t52 + 0x0)) = 0x0;
                                            t86 = *(int *)0xC2F91F8;
                                            *(unsigned int *)0xC2F91F8 = (t86 + 0x1);
                                            *(unsigned int *)0xC2F91A8 = 0x0;
                                        }
                                    }
                                    t51 = 0xC2EA9CC;
                                    t91 = *(int *)(((int)stk + 24));
                                    t52 = t91;
                                    t92 = *(int *)((t52 + t51));
                                    t51 = t92;
                                    if (t51 == 2) {
                                        t51 = 0xC2EA8A8;
                                        t93 = *(int *)0xC2F91AC;
                                        t52 = t93;
                                        t52 = (t52 + 0x1);
                                        *(unsigned int *)0xC2F91AC = t52;
                                        t94 = *(int *)((t51 + 0x0));
                                        if ((unsigned int)t52 > (unsigned int)t94) {
                                            t95 = *(int *)0xC2F91B4;
                                            t52 = t95;
                                            t52 = (t52 + 0x1);
                                            *(unsigned int *)0xC2F91B4 = t52;
                                            t97 = kmiDMAHazardReset();
                                            t51 = t97;
                                            t51 = 0xC2EA9CC;
                                            t52 = 0xFFFFFFFF;
                                            t98 = *(int *)(((int)stk + 32));
                                            *(unsigned int *)((t98 + t51)) = t52;
                                            *(unsigned int *)0xC2EA88C = 0x0;
                                            *(unsigned int *)0xC2F91AC = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                        t106 = *(int *)(((int)stk + 20));
                        t52 = t106;
                        t52 = (t52 + 0x1);
                        *(unsigned int *)(((int)stk + 20)) = t52;
                        t107 = *(int *)(((int)stk + 32));
                        *(unsigned int *)(((int)stk + 32)) = (t107 + 0x4);
                        t108 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t108 + 0x4);
                        t109 = *(int *)(((int)stk + 28));
                        t52 = t109;
                        t52 = (t52 + 0x4);
                        *(unsigned int *)(((int)stk + 28)) = t52;
                        continue;
                    }
                    break;
                }
                t110 = *(int *)0xC2EA888;
                t111 = *(int *)(((int)stk + 36));
                *(unsigned int *)(((int)stk + 36)) = (t111 | t110);
                t116 = (t111 | t110);
            }
            t122 = t116;
        }
        t128 = 0x0;
        if (t122 == 0) {
            kmiUpdateRenderStatus();
            t125 = kmiStartNextDMA();
            t127 = 0x1;
            if (t125 != 0) {
                kmiStartNextRender();
                *(unsigned int *)0xC2EA9F4 = 0x0;
                t127 = 0x0;
            }
            t128 = t127;
        }
        t129 = t128;
    }
    return t129;
}









