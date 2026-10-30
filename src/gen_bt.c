/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int, int);
int cableCarDrive(int);
int carBalance(int, int);
int carColliReflection(int);
int carEntry(int);
int carMultiCollision(int, float);
int carResistance(int);
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
int technicalCheck(int, int, int);
int cableCarExec(int a4, int a5, int a6);

int cableCarExec(int a4, int a5, int a6)
{
    int t1;
    int t86;
    int t78;
    float t7;
    int t27;
    float u10;
    int stk[11];
    float R1024;

    R1024 = *(float *)((int)stk + 24);

    t1 = *(int *)(((*(int *)0xC2A1B30) + 0x64));
    t86 = 0x64;
    if ((int)t1 < 0) {
    } else {
        t78 = 0x64;
        if ((int)t1 > (int)0x5) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x98 + a4)); }
            technicalCheck(a4, a5, a6);
            *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0xD);
            cableCarDrive(a4);
            if (((*(int *)((a4 + 0x84))) & 8) != 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x14)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((a4 + 0x20)); }
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.199999988f);
                t7 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
                *(float *)((a4 + 0x100)) = t7;
                u10 = t7;
            }
            if (((*(int *)((a4 + 0x84))) & 4) == 0) {
            } else {
                *(float *)((a4 + 0x9C)) = ((*(float *)((a4 + 0x9C))) - 0.073499985f);
                if ((int)(*(int *)((a4 + 0x110))) > 0) {
                    *(unsigned int *)((a4 + 0x110)) = ((*(int *)((a4 + 0x110))) - 1);
                    carSteering(a4);
                    carResistance(a4);
                }
                nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
                nlAddVector((0x8C + a4), (0x98 + a4));
                t27 = GetCollision2D((0x8C + a4), 30.0f);
                if ((*(int *)((t27 + 0x1C))) != -1) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t27 + 0xC)); }
                    *(float *)((a4 + 0x104)) = (*(float *)((t27 + 0x18)));
                    carMultiCollision(a4, 28.5f);
                    if ((*(float *)((a4 + 0x104))) > (*(float *)((a4 + 0x90)))) {
                        *(float *)((a4 + 0x90)) = (*(float *)((a4 + 0x104)));
                        carColliReflection(a4);
                        *(unsigned int *)((a4 + 0x110)) = (int)((float)(*(int *)((a4 + 0x110))) + 5.0f);
                    }
                } else {
                    dropOutCheck(a4);
                }
                if ((int)(*(int *)((a4 + 0x110))) > (int)0xA) {
                    *(unsigned int *)((a4 + 0x110)) = 0xA;
                }
                nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) - ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * (1.0f + 1.0f)));
                *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) * 0.849999964f);
                carBalance(a4, ((int)stk + 4));
            }
            nlPushUnitMatrix();
            nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
            nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
            nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
            nlCalcVector((0x98 + a4), (((int)stk + 4) + 0xC));
            *(float *)((a4 + 0xCC)) = (R1024);
            nlPopMatrix(0x1);
            carEntry(a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
            nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), ((*(float *)((a4 + 0x100))) - u10));
            nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.899999976f);
            GetRotVec4Ang((a4 + 0x44), (unsigned short)(*(short *)((a4 + 0xA4))), (unsigned short)(*(short *)((a4 + 0xA6))), (unsigned short)(*(short *)((a4 + 0xA8))));
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            t78 = 0x68;
        }
        t86 = t78;
    }
    return t86;
}
