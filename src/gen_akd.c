/* Straight-line functions with calls and guards (batch gen_akd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int, int);
int KillColliObj(int);
int carColliReflection(int);
int carEntry(int);
int carResistance(int);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int, int);
int getYXZrot(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlCloseEvent(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleUnitVector(int, int, Stk3, float);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int technicalCheck(int, int, int);
int trailerExec(int a4, int a5, int a6);

int trailerExec(int a4, int a5, int a6)
{
    int stk[23];

    register int R2;
    register int R3;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    technicalCheck(v0_3, v0_0, v0_1);
    v0_0 = (v0_3);
    if ((((*(int *)((v0_3 + 0x84))) & 1) != 0)) goto L_C048720;
    KillColliObj((v0_0 + 0x14));
    v0_0 = nlCloseEvent(v0_0);
    *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) - 1);
    v0_3 = (v0_0);
    L_C048A80:;
    return v0_3;
    L_C048720:;
    v0_2 = *(int *)((v0_0 + 0x4));
    nlPushUnitMatrix();
    nlTranslateV((0x8C + v0_2));
    nlRotateAY((unsigned short)(*(short *)((v0_2 + 0xA6))));
    nlRotateAX((unsigned short)(*(short *)((v0_2 + 0xA4))));
    nlRotateAZ((unsigned short)(*(short *)((v0_2 + 0xA8))));
    nlTranslate(0.0f, ((*(float *)((v0_2 + 0xF8))) + (*(float *)((v0_2 + 0xFC)))), -32.0f);
    nlGetTranslate((((int)stk + 8) + 0x24));
    nlPopMatrix(0x1);
    *(unsigned int *)((v0_0 + 0x84)) = (*(int *)((v0_2 + 0x84)));
    *(float *)((v0_0 + 0xC8)) = (*(float *)((v0_2 + 0xC8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)((0x8C + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + v0_0)) = *(struct mv3 *)((v0_0 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + v0_0)) = *(struct mv3 *)((v0_0 + 0x20)); }
    *(float *)((v0_0 + 0x9C)) = ((*(float *)((v0_0 + 0x9C))) - 0.073499985f);
    nlAddVector((0x8C + v0_0), (0x98 + v0_0));
    v0_4 = GetCollision2D((0x8C + v0_0), 30.0f);
    v0_1 = *(int *)((v0_4 + 0x1C));
    v0_3 = (v0_1);
    v0_3 = (0xC0785D0);
    v0_3 = (0xC078200);
    v0_3 = (0xC0782E0);
    v0_2 = (v0_2);
    v0_3 = (v0_4);
    v0_4 = (0xC078420);
    w0_0 = (0.0f);
    if ((v0_1 == -1)) goto L_C048802;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + v0_0)) = *(struct mv3 *)((v0_3 + 0xC)); }
    *(float *)((v0_0 + 0x104)) = (*(float *)((v0_3 + 0x18)));
    if ((!((*(float *)((v0_0 + 0x104))) > (*(float *)((v0_0 + 0x90)))))) goto L_C048802;
    *(float *)((v0_0 + 0x90)) = (*(float *)((v0_0 + 0x104)));
    carColliReflection(v0_0);
    L_C048802:;
    nlPushUnitMatrix();
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 8)) = w0_0;
    *(float *)(((int)stk + 16)) = 1.0f;
    nlSubVector3op((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24), (0x8C + v0_0));
    nlUnitVector((((int)stk + 8) + 0xC));
    nlRotateV(((int)stk + 8), (((int)stk + 8) + 0xC));
    getYXZrot((0xA4 + v0_0));
    nlPushUnitMatrix();
    nlRotateAX((-(unsigned short)(*(short *)((v0_0 + 0xA4)))));
    nlRotateAY((-(unsigned short)(*(short *)((v0_0 + 0xA6)))));
    nlCalcVector((0xEC + v0_0), (((int)stk + 8) + 0xC));
    v0_3 = ((-(nlArcTan2((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24)))))));
    v0_1 = ((0xA8 + v0_0));
    v0_4 = (0xC078C30);
    w0_0 = (1.0f);
    *(unsigned short *)((v0_1 + 0x0)) = v0_3;
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24), (0x8C + v0_0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 8) + 0xC)); }
    nlScaleUnitVector(((int)stk + 8), ((int)stk + 8), *(Stk3 *)(((int)stk + 8)), 100.0f);
    nlSubVector((((int)stk + 8) + 0xC), ((int)stk + 8));
    nlAddVector((0x8C + v0_0), (((int)stk + 8) + 0xC));
    v0_1 = convergeRot((*(short *)((v0_0 + 0xA6))), (*(short *)((v0_2 + 0xA6))), w0_0);
    v0_2 = (v0_1);
    if ((!(_builtin_fabsf((float)v0_1) > 12288.0f))) goto L_C0489AE;
    if (((int)v0_2 >= 0)) goto L_C048970;
    v0_2 = ((v0_2 + 0x3000));
    L_C048974:;
    nlPushUnitMatrix();
    nlSubVector3op((((int)stk + 8) + 0xC), (0x8C + v0_0), (((int)stk + 8) + 0x24));
    nlRotateAY(v0_2);
    nlCalcVector((((int)stk + 8) + 0xC), ((int)stk + 8));
    nlAddVector3op((0x8C + v0_0), (((int)stk + 8) + 0x24), ((int)stk + 8));
    *(unsigned short *)((v0_0 + 0xA6)) = ((*(short *)((v0_0 + 0xA6))) + v0_2);
    nlPopMatrix(0x1);
    L_C0489AE:;
    nlSubVector3op((0x98 + v0_0), (0x8C + v0_0), (((int)stk + 8) + 0x18));
    carResistance(v0_0);
    nlScaleVector((0x98 + v0_0), (0x98 + v0_0), 0.999799967f);
    *(unsigned char *)(((0x108 + v0_0) + 0x0)) = (*(signed char *)(((0xA4 + v0_0) + 0x0)));
    *(unsigned char *)(((0x108 + v0_0) + 0x1)) = (*(signed char *)(((0xA4 + v0_0) + 0x1)));
    *(unsigned char *)(((0x108 + v0_0) + 0x2)) = (*(signed char *)(((0xA4 + v0_0) + 0x2)));
    *(unsigned char *)(((0x108 + v0_0) + 0x3)) = (*(signed char *)(((0xA4 + v0_0) + 0x3)));
    *(unsigned char *)(((0x108 + v0_0) + 0x4)) = (*(signed char *)(((0xA4 + v0_0) + 0x4)));
    *(unsigned char *)(((0x108 + v0_0) + 0x5)) = (*(signed char *)(((0xA4 + v0_0) + 0x5)));
    *(int *)((int)stk + 4) = (0x8C + v0_0);
    getNearLinkedLine(0x2, 0x0, (0x80 + v0_0), (0xD4 + v0_0), (0x8C + v0_0));
    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)(*(short *)((v0_0 + 0xA8)))));
    nlRotateAX((-(unsigned short)(*(short *)((v0_0 + 0xA4)))));
    nlRotateAY((-(unsigned short)(*(short *)((v0_0 + 0xA6)))));
    nlCalcVector((0x98 + v0_0), (((int)stk + 8) + 0xC));
    *(float *)((v0_0 + 0xCC)) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    carEntry(v0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x14)) = *(struct mv3 *)((0x8C + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((0x98 + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
    GetRotVec4Ang((v0_0 + 0x44), (unsigned short)(*(short *)((v0_0 + 0xA4))), (unsigned short)(*(short *)((v0_0 + 0xA6))), (unsigned short)(*(short *)((v0_0 + 0xA8))));
    *(unsigned int *)((v0_0 + 0x68)) = 0x0;
    v0_3 = (0x68);
    goto L_C048A80;
    L_C048970:;
    v0_2 = ((v0_2 - 12288));
    goto L_C048974;
}
