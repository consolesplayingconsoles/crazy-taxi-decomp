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
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct oF8_float { char p[0xF8]; float v; };


int parkingCarExec(int a4, int a5, int a6)
{
    float t14;
    int t53;
    int t4;
    int t132;
    float u18;
    int stk[10];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x98 + a4)); }
    technicalCheck(a4, a5, a6);
    calcColliCheck(a4);
    if (((pointEventGet(((((struct oD8_int *)(a4))->v)))) == 0) && (t4 = (((struct o84_int *)(a4))->v), (t4 & 0x10000) == 0)) {
        t132 = (pcarEnd(a4));
    } else {
        if (((((struct o80_int *)(a4))->v)) != 0) {
            pcarRejoinLane(a4);
        }
        if ((((((struct o84_int *)(a4))->v)) & 8) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x14)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((a4 + 0x20)); }
            t14 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
            (((struct o100_float *)(a4))->v) = t14;
            u18 = t14;
        }
        if ((((((struct o84_int *)(a4))->v)) & 4) == 0) {
            nlPushUnitMatrix();
            nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
            nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
            nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
            nlCalcVector((0x98 + a4), (((int)stk + 0) + 0xC));
            (((struct oCC_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
            nlPopMatrix(0x1);
            carEntry(a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
            nlScaleVector((((int)stk + 0) + 0xC), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u18));
            nlAddVector((a4 + 0x5C), (((int)stk + 0) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
            GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
            (((struct o68_uint *)(a4))->v) = 0x0;
            t132 = 0x68;
        } else {
            (((struct o9C_float *)(a4))->v) = (((((struct o9C_float *)(a4))->v)) - 0.073499985f);
            if ((int)((((struct o110_int *)(a4))->v)) > 0) {
                (((struct o110_uint *)(a4))->v) = (((((struct o110_int *)(a4))->v)) - 1);
                carResistance(a4);
            }
            nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
            nlAddVector((0x8C + a4), (0x98 + a4));
            t53 = GetCollision2D((0x8C + a4), 30.0f);
            if ((*(int *)((t53 + 0x1C))) != -1) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t53 + 0xC)); }
                (((struct o104_float *)(a4))->v) = ((((struct o18_float *)(t53))->v));
                if (((((struct o104_float *)(a4))->v)) > ((((struct o90_float *)(a4))->v))) {
                    (((struct o90_float *)(a4))->v) = ((((struct o104_float *)(a4))->v));
                    carColliReflection(a4);
                    (((struct o110_uint *)(a4))->v) = (int)((float)((((struct o110_int *)(a4))->v)) + 5.0f);
                }
                if ((int)((((struct o110_int *)(a4))->v)) > (int)0xA) {
                    (((struct o110_uint *)(a4))->v) = 0xA;
                }
                nlSubVector3op(((int)stk + 0), (0x98 + a4), ((int)stk + 0));
                (((struct oF8_float *)(a4))->v) = (((((struct oF8_float *)(a4))->v)) - (((((struct o4_float *)(((int)stk + 0)))->v)) * (1.0f + 1.0f)));
                (((struct oF8_float *)(a4))->v) = (((((struct oF8_float *)(a4))->v)) * 0.799999952f);
                carBalance(a4, ((int)stk + 0));
                nlPushUnitMatrix();
                nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
                nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
                nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
                nlCalcVector((0x98 + a4), (((int)stk + 0) + 0xC));
                (((struct oCC_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
                nlPopMatrix(0x1);
                carEntry(a4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
                nlScaleVector((((int)stk + 0) + 0xC), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u18));
                nlAddVector((a4 + 0x5C), (((int)stk + 0) + 0xC));
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
                (((struct o68_uint *)(a4))->v) = 0x0;
                t132 = 0x68;
            } else {
                if ((dropOutCheck(a4)) != 0) {
                    t132 = (pcarEnd(a4));
                } else {
                    if ((int)((((struct o110_int *)(a4))->v)) > (int)0xA) {
                        (((struct o110_uint *)(a4))->v) = 0xA;
                    }
                    nlSubVector3op(((int)stk + 0), (0x98 + a4), ((int)stk + 0));
                    (((struct oF8_float *)(a4))->v) = (((((struct oF8_float *)(a4))->v)) - (((((struct o4_float *)(((int)stk + 0)))->v)) * (1.0f + 1.0f)));
                    (((struct oF8_float *)(a4))->v) = (((((struct oF8_float *)(a4))->v)) * 0.799999952f);
                    carBalance(a4, ((int)stk + 0));
                    nlPushUnitMatrix();
                    nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
                    nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
                    nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
                    nlCalcVector((0x98 + a4), (((int)stk + 0) + 0xC));
                    (((struct oCC_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
                    nlPopMatrix(0x1);
                    carEntry(a4);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
                    nlScaleVector((((int)stk + 0) + 0xC), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u18));
                    nlAddVector((a4 + 0x5C), (((int)stk + 0) + 0xC));
                    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                    GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
                    (((struct o68_uint *)(a4))->v) = 0x0;
                    t132 = 0x68;
                }
            }
        }
    }
    return t132;
}
