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
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oCC_float { char p[0xCC]; float v; };
struct oF8_float { char p[0xF8]; float v; };


int cableCarExec(int a4, int a5, int a6)
{
    int t1;
    int t86;
    float t7;
    int t27;
    float u10;
    int stk[10];
    float R1024;

    R1024 = *(float *)((int)stk + 20);

    t1 = (((struct o64_int *)((*(int *)0xC2A1B30)))->v);
    t86 = 0x64;
    if ((int)t1 < 0) {
    } else {
        t86 = 0x64;
        if ((int)t1 > (int)0x5) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x98 + a4)); }
            technicalCheck(a4, a5, a6);
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0xD);
            cableCarDrive(a4);
            if ((((((struct o84_int *)(a4))->v)) & 8) != 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x14)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((a4 + 0x20)); }
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.199999988f);
                t7 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
                (((struct o100_float *)(a4))->v) = t7;
                u10 = t7;
            }
            if ((((((struct o84_int *)(a4))->v)) & 4) == 0) {
            } else {
                (((struct o9C_float *)(a4))->v) = (((((struct o9C_float *)(a4))->v)) - 0.073499985f);
                if ((int)((((struct o110_int *)(a4))->v)) > 0) {
                    (((struct o110_uint *)(a4))->v) = (((((struct o110_int *)(a4))->v)) - 1);
                    carSteering(a4);
                    carResistance(a4);
                }
                nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
                nlAddVector((0x8C + a4), (0x98 + a4));
                t27 = GetCollision2D((0x8C + a4), 30.0f);
                if ((*(int *)((t27 + 0x1C))) != -1) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t27 + 0xC)); }
                    (((struct o104_float *)(a4))->v) = ((((struct o18_float *)(t27))->v));
                    carMultiCollision(a4, 28.5f);
                    if (((((struct o104_float *)(a4))->v)) > ((((struct o90_float *)(a4))->v))) {
                        (((struct o90_float *)(a4))->v) = ((((struct o104_float *)(a4))->v));
                        carColliReflection(a4);
                        (((struct o110_uint *)(a4))->v) = (int)((float)((((struct o110_int *)(a4))->v)) + 5.0f);
                    }
                } else {
                    dropOutCheck(a4);
                }
                if ((int)((((struct o110_int *)(a4))->v)) > (int)0xA) {
                    (((struct o110_uint *)(a4))->v) = 0xA;
                }
                nlSubVector3op(((int)stk + 0), (0x98 + a4), ((int)stk + 0));
                (((struct oF8_float *)(a4))->v) = (((((struct oF8_float *)(a4))->v)) - (((((struct o4_float *)(((int)stk + 0)))->v)) * (1.0f + 1.0f)));
                (((struct oF8_float *)(a4))->v) = (((((struct oF8_float *)(a4))->v)) * 0.849999964f);
                carBalance(a4, ((int)stk + 0));
            }
            nlPushUnitMatrix();
            nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
            nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
            nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
            nlCalcVector((0x98 + a4), (((int)stk + 0) + 0xC));
            (((struct oCC_float *)(a4))->v) = (R1024);
            nlPopMatrix(0x1);
            carEntry(a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
            nlScaleVector((((int)stk + 0) + 0xC), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u10));
            nlAddVector((a4 + 0x5C), (((int)stk + 0) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.899999976f);
            GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
            (((struct o68_uint *)(a4))->v) = 0x0;
            t86 = 0x68;
        }
    }
    return t86;
}
