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















