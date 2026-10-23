/* Straight-line functions with calls and guards (batch gen_zu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int, int);
int calcColliCheck(int);
int carBalance(int, int);
int carColliReflection(int);
int carEntry(int);
int carResistance(int);
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
int pcarEnd(int);
int pcarRejoinLane(int);
int pointEventGet(int);
int technicalCheck(int, int, int);
int parkingCarExec(int a4, int a5, int a6);

int parkingCarExec(int a4, int a5, int a6)
{
    float t14;
    int t53;
    int t4;
    int t132;
    float u18;
    int t129;
    int t126;
    int t123;
    int stk[11];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x98 + a4)); }
    technicalCheck(a4, a5, a6);
    calcColliCheck(a4);
    if (((pointEventGet((*(int *)((a4 + 0xD8))))) == 0) && (t4 = *(int *)((a4 + 0x84)), (t4 & 0x10000) == 0)) {
        t132 = (pcarEnd(a4));
    } else {
        if ((*(int *)((a4 + 0x80))) != 0) {
            pcarRejoinLane(a4);
        }
        if (((*(int *)((a4 + 0x84))) & 8) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x14)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((a4 + 0x20)); }
            t14 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
            *(float *)((a4 + 0x100)) = t14;
            u18 = t14;
        }
        if (((*(int *)((a4 + 0x84))) & 4) == 0) {
            nlPushUnitMatrix();
            nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
            nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
            nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
            nlCalcVector((0x98 + a4), (((int)stk + 4) + 0xC));
            *(float *)((a4 + 0xCC)) = (*(float *)(((int)stk + 24)));
            nlPopMatrix(0x1);
            carEntry(a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
            nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), ((*(float *)((a4 + 0x100))) - u18));
            nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
            GetRotVec4Ang((a4 + 0x44), (unsigned short)(*(short *)((a4 + 0xA4))), (unsigned short)(*(short *)((a4 + 0xA6))), (unsigned short)(*(short *)((a4 + 0xA8))));
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            t129 = 0x68;
        } else {
            *(float *)((a4 + 0x9C)) = ((*(float *)((a4 + 0x9C))) - 0.073499985f);
            if ((int)(*(int *)((a4 + 0x110))) > 0) {
                *(unsigned int *)((a4 + 0x110)) = ((*(int *)((a4 + 0x110))) - 1);
                carResistance(a4);
            }
            nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
            nlAddVector((0x8C + a4), (0x98 + a4));
            t53 = GetCollision2D((0x8C + a4), 30.0f);
            if ((*(int *)((t53 + 0x1C))) != -1) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t53 + 0xC)); }
                *(float *)((a4 + 0x104)) = (*(float *)((t53 + 0x18)));
                if ((*(float *)((a4 + 0x104))) > (*(float *)((a4 + 0x90)))) {
                    *(float *)((a4 + 0x90)) = (*(float *)((a4 + 0x104)));
                    carColliReflection(a4);
                    *(unsigned int *)((a4 + 0x110)) = (int)((float)(*(int *)((a4 + 0x110))) + 5.0f);
                }
                if ((int)(*(int *)((a4 + 0x110))) > (int)0xA) {
                    *(unsigned int *)((a4 + 0x110)) = 0xA;
                }
                nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) - ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * (1.0f + 1.0f)));
                *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) * 0.799999952f);
                carBalance(a4, ((int)stk + 4));
                nlPushUnitMatrix();
                nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
                nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
                nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
                nlCalcVector((0x98 + a4), (((int)stk + 4) + 0xC));
                *(float *)((a4 + 0xCC)) = (*(float *)(((int)stk + 24)));
                nlPopMatrix(0x1);
                carEntry(a4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
                nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), ((*(float *)((a4 + 0x100))) - u18));
                nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                GetRotVec4Ang((a4 + 0x44), (unsigned short)(*(short *)((a4 + 0xA4))), (unsigned short)(*(short *)((a4 + 0xA6))), (unsigned short)(*(short *)((a4 + 0xA8))));
                *(unsigned int *)((a4 + 0x68)) = 0x0;
                t126 = 0x68;
            } else {
                if ((dropOutCheck(a4)) != 0) {
                    t123 = (pcarEnd(a4));
                } else {
                    if ((int)(*(int *)((a4 + 0x110))) > (int)0xA) {
                        *(unsigned int *)((a4 + 0x110)) = 0xA;
                    }
                    nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                    *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) - ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * (1.0f + 1.0f)));
                    *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) * 0.799999952f);
                    carBalance(a4, ((int)stk + 4));
                    nlPushUnitMatrix();
                    nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
                    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
                    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
                    nlCalcVector((0x98 + a4), (((int)stk + 4) + 0xC));
                    *(float *)((a4 + 0xCC)) = (*(float *)(((int)stk + 24)));
                    nlPopMatrix(0x1);
                    carEntry(a4);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
                    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), ((*(float *)((a4 + 0x100))) - u18));
                    nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                    GetRotVec4Ang((a4 + 0x44), (unsigned short)(*(short *)((a4 + 0xA4))), (unsigned short)(*(short *)((a4 + 0xA6))), (unsigned short)(*(short *)((a4 + 0xA8))));
                    *(unsigned int *)((a4 + 0x68)) = 0x0;
                    t123 = 0x68;
                }
                t126 = t123;
            }
            t129 = t126;
        }
        t132 = t129;
    }
    return t132;
}
