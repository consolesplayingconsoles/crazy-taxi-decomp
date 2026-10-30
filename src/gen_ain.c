/* Straight-line functions with calls and guards (batch gen_ain): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int, int);
int calcCheck(int);
int calcCheckExec(int, int);
int carBalance(int, int);
int carColliReflection(int);
int carEntry(int);
int carMultiCollision(int, float);
int carResistance(int, int, int, int, float);
int carSteering(int);
int dropOutCheck(int);
int nlAddVector(int, int);
int nlCalcVector(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int pcarDrive(int, int, int, int);
int pcarEnd(int);
int technicalCheck(int, int, int);
int pcarExec(int a4, int a5, int a6);

int pcarExec(int a4, int a5, int a6)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_3 = a4;
    v0_1 = a5;
    v0_2 = a6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((0x98 + v0_3)); }
    technicalCheck(v0_3, v0_1, v0_2);
    v0_4 = *(int *)((v0_3 + 0x84));
    calcCheck(v0_3);
    v0_5 = *(int *)((v0_3 + 0x84));
    v0_6 = ((v0_4 ^ v0_5));
    v0_0 = (v0_3);
    if (((v0_4 ^ v0_5) == 0)) goto L_C0465E6;
    v0_3 = (calcCheckExec(v0_0, v0_6)) != 0;
    if (v0_3) goto L_C0465E6;
    L_C046748:;
    v0_4 = ((pcarEnd(v0_0)));
    L_C046850:;
    return v0_4;
    L_C0465E6:;
    pcarDrive(v0_0, v0_1, v0_2, R7);
    v0_3 = *(int *)((v0_0 + 0x84));
    v0_4 = (v0_3);
    if (((v0_3 & 8) == 0)) goto L_C046622;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + v0_0)) = *(struct mv3 *)((v0_0 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + v0_0)) = *(struct mv3 *)((v0_0 + 0x20)); }
    w0_0 = nlInnerProduct((v0_0 + 0x5C), (v0_0 + 0x44));
    *(float *)((v0_0 + 0x100)) = w0_0;
    F15 = (w0_0);
    L_C046622:;
    v0_6 = (0xC078BC0);
    if (!((((*(int *)((v0_0 + 0x84))) & 4) != 0))) goto L_C0467A6;
    *(float *)((v0_0 + 0x9C)) = ((*(float *)((v0_0 + 0x9C))) - 0.073499985f);
    if (((int)(*(int *)((v0_0 + 0x110))) <= 0)) goto L_C04666E;
    *(unsigned int *)((v0_0 + 0x110)) = ((*(int *)((v0_0 + 0x110))) - 1);
    if ((((*(int *)((v0_0 + 0x84))) & 32) != 0)) goto L_C046668;
    if ((!(9.99999975e-06f > (*(float *)((v0_0 + 0x60)))))) goto L_C046668;
    carSteering(v0_0);
    goto L_C046668;
    L_C0467A6:;
    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)(*(short *)((v0_0 + 0xA8)))));
    nlRotateAX((-(unsigned short)(*(short *)((v0_0 + 0xA4)))));
    nlRotateAY((-(unsigned short)(*(short *)((v0_0 + 0xA6)))));
    nlCalcVector((0x98 + v0_0), ((int)stk + 4));
    *(float *)((v0_0 + 0xCC)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    carEntry(v0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x14)) = *(struct mv3 *)((0x8C + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((0x98 + v0_0)); }
    nlScaleVector(((int)stk + 4), (v0_0 + 0x44), ((*(float *)((v0_0 + 0x100))) - F15));
    nlAddVector((v0_0 + 0x5C), ((int)stk + 4));
    nlScaleVector((v0_0 + 0x5C), (v0_0 + 0x5C), 0.996999979f);
    GetRotVec4Ang((v0_0 + 0x44), (unsigned short)(*(short *)((v0_0 + 0xA4))), (unsigned short)(*(short *)((v0_0 + 0xA6))), (unsigned short)(*(short *)((v0_0 + 0xA8))));
    *(unsigned int *)((v0_0 + 0x68)) = 0x0;
    v0_4 = (0x68);
    goto L_C046850;
    L_C046668:;
    carResistance(v0_0, v0_1, v0_2, R7, F4);
    L_C04666E:;
    nlScaleVector((0x98 + v0_0), (0x98 + v0_0), 0.999799967f);
    nlAddVector((0x8C + v0_0), (0x98 + v0_0));
    v0_2 = GetCollision2D((0x8C + v0_0), 30.0f);
    v0_1 = *(int *)((v0_2 + 0x1C));
    v0_4 = (v0_1);
    v0_3 = (v0_2);
    if ((v0_1 == -1)) goto L_C046740;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + v0_0)) = *(struct mv3 *)((v0_3 + 0xC)); }
    *(float *)((v0_0 + 0x104)) = (*(float *)((v0_3 + 0x18)));
    if (((*(int *)((v0_0 + 0x78))) != 10)) goto L_C04670E;
    v0_3 = (v0_0);
    F4 = (36.6999969f);
    carMultiCollision(v0_3, F4);
    L_C04670E:;
    if ((!((*(float *)((v0_0 + 0x104))) > (*(float *)((v0_0 + 0x90)))))) goto L_C046760;
    *(float *)((v0_0 + 0x90)) = (*(float *)((v0_0 + 0x104)));
    carColliReflection(v0_0);
    *(unsigned int *)((v0_0 + 0x110)) = (int)((float)(*(int *)((v0_0 + 0x110))) + 5.0f);
    L_C046760:;
    v0_4 = (0x110);
    v0_3 = (0xA);
    if (((int)(*(int *)((v0_0 + 0x110))) <= (int)0xA)) goto L_C04676C;
    *(unsigned int *)((v0_0 + v0_4)) = v0_3;
    L_C04676C:;
    nlSubVector3op((((int)stk + 4) + 0xC), (0x98 + v0_0), (((int)stk + 4) + 0xC));
    *(float *)((v0_0 + 0xF8)) = ((*(float *)((v0_0 + 0xF8))) - ((*(float *)(((((int)stk + 4) + 0x10) + 0x0))) * (1.0f + 1.0f)));
    *(float *)((v0_0 + 0xF8)) = ((*(float *)((v0_0 + 0xF8))) * 0.849999964f);
    carBalance(v0_0, (((int)stk + 4) + 0xC));
    goto L_C0467A6;
    L_C046740:;
    v0_1 = (dropOutCheck(v0_0)) == 0;
    if (v0_1) goto L_C046760;
    goto L_C046748;
}
