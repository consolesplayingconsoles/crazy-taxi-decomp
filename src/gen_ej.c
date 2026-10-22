/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int);
int KillColliObj(int);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int);
int getYXZrot(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int technicalCheck(int);
int trailerExec(int a4);

int trailerExec(int a4)
{
    int t3;
    int t5;
    int t23;
    int t68;
    int t70;
    int t110;
    int stk[23] = {0};

    technicalCheck(a4);
    if (((*(int *)((a4 + 0x84))) & 1) == 0) {
        KillColliObj((a4 + 0x14));
        t3 = nlCloseEvent(a4);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) - 1);
        t110 = t3;
    } else {
        t5 = *(int *)((a4 + 0x4));
        nlPushUnitMatrix();
        nlTranslateV((0x8C + t5));
        nlRotateAY((unsigned short)(*(short *)((t5 + 0xA6))));
        nlRotateAX((unsigned short)(*(short *)((t5 + 0xA4))));
        nlRotateAZ((unsigned short)(*(short *)((t5 + 0xA8))));
        nlTranslate(0.0f, ((*(float *)((t5 + 0xF8))) + (*(float *)((t5 + 0xFC)))), -32.0f);
        nlGetTranslate((((int)stk + 8) + 0x24));
        nlPopMatrix(0x1);
        *(unsigned int *)((a4 + 0x84)) = (*(int *)((t5 + 0x84)));
        *(float *)((a4 + 0xC8)) = (*(float *)((t5 + 0xC8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)((0x8C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x14)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((a4 + 0x20)); }
        *(float *)((a4 + 0x9C)) = ((*(float *)((a4 + 0x9C))) - 0.073499985f);
        nlAddVector((0x8C + a4), (0x98 + a4));
        t23 = GetCollision2D((0x8C + a4), 30.0f);
        if ((*(int *)((t23 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t23 + 0xC)); }
            *(float *)((a4 + 0x104)) = (*(float *)((t23 + 0x18)));
            if ((*(float *)((a4 + 0x104))) > (*(float *)((a4 + 0x90)))) {
                *(float *)((a4 + 0x90)) = (*(float *)((a4 + 0x104)));
                carColliReflection();
            }
        }
        nlPushUnitMatrix();
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 16)) = 1.0f;
        nlSubVector3op((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24), (0x8C + a4));
        nlUnitVector((((int)stk + 8) + 0xC));
        nlRotateV(((int)stk + 8), (((int)stk + 8) + 0xC));
        getYXZrot((0xA4 + a4));
        nlPushUnitMatrix();
        nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
        nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
        FUN_0c077210((0xEC + a4), (((int)stk + 8) + 0xC));
        *(unsigned short *)(((0xA8 + a4) + 0x0)) = (-(nlArcTan2((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlSubVector3op((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24), (0x8C + a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 8) + 0xC)); }
        nlScaleUnitVector(((int)stk + 8), ((int)stk + 8), 100.0f);
        nlSubVector((((int)stk + 8) + 0xC), ((int)stk + 8));
        nlAddVector((0x8C + a4), (((int)stk + 8) + 0xC));
        t68 = convergeRot((*(short *)((a4 + 0xA6))), (*(short *)((t5 + 0xA6))), 1.0f);
        if (_builtin_fabsf((float)t68) > 12288.0f) {
            t70 = (t68 - 12288);
            if ((int)t68 < 0) {
                t70 = (t68 + 0x3000);
            }
            nlPushUnitMatrix();
            nlSubVector3op((((int)stk + 8) + 0xC), (0x8C + a4), (((int)stk + 8) + 0x24));
            nlRotateAY(t70);
            FUN_0c077210((((int)stk + 8) + 0xC), ((int)stk + 8));
            FUN_0c078a70((0x8C + a4), (((int)stk + 8) + 0x24), ((int)stk + 8));
            *(unsigned short *)((a4 + 0xA6)) = ((*(short *)((a4 + 0xA6))) + t70);
            nlPopMatrix(0x1);
        } else {
            _builtin_fabsf((float)t68);
        }
        nlSubVector3op((0x98 + a4), (0x8C + a4), (((int)stk + 8) + 0x18));
        carResistance();
        nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
        *(unsigned char *)(((0x108 + a4) + 0x0)) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4));
        nlPushUnitMatrix();
        nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
        nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
        nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
        FUN_0c077210((0x98 + a4), (((int)stk + 8) + 0xC));
        *(float *)((a4 + 0xCC)) = (*(float *)(((int)stk + 28)));
        nlPopMatrix(0x1);
        carEntry(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
        *(volatile short *)((a4 + 0xA8));
        GetRotVec4Ang((a4 + 0x44), (unsigned short)(*(short *)((a4 + 0xA4))), (unsigned short)(*(short *)((a4 + 0xA6))));
        *(unsigned int *)((a4 + 0x68)) = 0x0;
        t110 = 0x68;
    }
    return t110;
}
