/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int, int);
int KillColliObj(int);
int carEntry(int);
int getCourseDistPoint(int, int, int, int, int, float);
int getNearLinkedLine(int, int, int, int, int);
int getYXZrot(int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int technicalCheck(int, int, int);
float trainExec(int a4, int a5, int a6);
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };


float trainExec(int a4, int a5, int a6)
{
    int t5;
    int t29;
    int t39;
    float t114;
    float u146;
    int t122;
    int stk[32];

    technicalCheck(a4, a5, a6);
    if ((((((struct o84_int *)(a4))->v)) & 1) == 0) {
        KillColliObj((a4 + 0x14));
        nlCloseEvent(a4);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) - 1);
    } else {
        t5 = *(int *)((a4 + 0x4));
        nlPushUnitMatrix();
        nlTranslateV((0x8C + t5));
        nlRotateAY((unsigned short)((((struct oA6_short *)(t5))->v)));
        nlRotateAX((unsigned short)((((struct oA4_short *)(t5))->v)));
        nlRotateAZ((unsigned short)((((struct oA8_short *)(t5))->v)));
        nlTranslate(0.0f, (((((struct oF8_float *)(t5))->v)) + ((((struct oFC_float *)(t5))->v))), -85.0f);
        nlGetTranslate((((int)stk + 16) + 0x3C));
        nlPopMatrix(0x1);
        (((struct o84_uint *)(a4))->v) = ((((struct o84_int *)(t5))->v));
        (((struct oC8_float *)(a4))->v) = ((((struct oC8_float *)(t5))->v));
        (((struct o88_uint *)(a4))->v) = ((((struct o88_int *)(t5))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x30)) = *(struct mv3 *)((0x8C + a4)); }
        (((struct o9C_float *)(a4))->v) = (((((struct o9C_float *)(a4))->v)) - 0.073499985f);
        getCourseDistPoint(0xFFFFFFFF, (((int)stk + 16) + 0x3C), ((((struct o80_int *)(a4))->v)), ((((struct oD4_int *)(t5))->v)), (((int)stk + 16) + 0xC), 40.0f);
        getCourseDistPoint(0xFFFFFFFF, (((int)stk + 12) + 0x10), ((((struct o80_int *)(a4))->v)), ((((struct oD4_int *)(a4))->v)), (((int)stk + 12) + 0x4), 90.0f);
        t29 = GetCollision2D((((int)stk + 16) + 0xC), 10.0f);
        if ((*(int *)((t29 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t29 + 0xC)); }
            *(float *)(((int)stk + 32)) = ((((struct o18_float *)(t29))->v));
            (((struct o104_float *)(a4))->v) = ((((struct o18_float *)(t29))->v));
        }
        t39 = GetCollision2D(((int)stk + 16), 10.0f);
        if ((*(int *)((t39 + 0x1C))) != -1) {
            nlGetAverageVector((0xEC + a4), (t39 + 0xC), (0xEC + a4), 0.5f, 0.5f);
            *(float *)(((int)stk + 20)) = ((((struct o18_float *)(t39))->v));
            (((struct o104_float *)(a4))->v) = ((((((struct o18_float *)(t39))->v)) + ((((struct o104_float *)(a4))->v))) * 0.5f);
        }
        nlGetAverageVector((((int)stk + 16) + 0xC), ((int)stk + 16), (0x8C + a4), 0.5f, 0.5f);
        nlPushUnitMatrix();
        *(float *)(((int)stk + 44)) = 0.0f;
        *(float *)(((int)stk + 40)) = 0.0f;
        *(float *)(((int)stk + 48)) = 1.0f;
        nlSubVector3op((((int)stk + 16) + 0x24), (((int)stk + 16) + 0xC), ((int)stk + 16));
        nlUnitVector((((int)stk + 16) + 0x24));
        nlRotateV((((int)stk + 16) + 0x18), (((int)stk + 16) + 0x24));
        getYXZrot((0xA4 + a4));
        nlPushUnitMatrix();
        nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
        nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
        nlCalcVector((0xEC + a4), (((int)stk + 16) + 0x24));
        (((struct oA8_ushort *)(a4))->v) = (-(nlArcTan2((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 56))))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlSubVector3op((0x98 + a4), (0x8C + a4), (((int)stk + 16) + 0x30));
        getCourseDistPoint(0x1, (((int)stk + 16) + 0xC), ((((struct o80_int *)(a4))->v)), ((((struct oD4_int *)(a4))->v)), (((int)stk + 16) + 0x3C), 30.0f);
        nlSubVector((((int)stk + 12) + 0x10), (((int)stk + 12) + 0x40));
        getCourseDistPoint(0x1, (((int)stk + 12) + 0x4), ((((struct o80_int *)(a4))->v)), ((((struct oD4_int *)(a4))->v)), (((int)stk + 12) + 0x40), 30.0f);
        nlSubVector((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x44));
        nlPushUnitMatrix();
        nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
        nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
        nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
        nlCalcVector((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x2C));
        (((struct oC0_uint *)(a4))->v) = (nlArcTan2((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 60)))));
        nlCalcVector((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x2C));
        (((struct oAC_ushort *)(a4))->v) = (nlArcTan2((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 60)))));
        nlPopMatrix(0x1);
        (((struct o108_uchar *)(a4))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
        nlPushUnitMatrix();
        nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
        nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
        nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
        nlCalcVector((0x98 + a4), (((int)stk + 16) + 0x24));
        (((struct oCC_float *)(a4))->v) = (*(float *)(((int)stk + 60)));
        nlPopMatrix(0x1);
        carEntry(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
        GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
        (((struct o68_uint *)(a4))->v) = 0x0;
        t114 = nlLength(((*(int *)0xC2A1B30) + 0x78), (0x8C + a4));
        if (800.0f > t114) {
            if (((((struct oCC_float *)(a4))->v)) > 0.694444537f) {
                if ((int)((((struct o78_int *)(a4))->v)) <= (int)0x12) {
                    t122 = ((*(int *)0xC2A4E48) | 0x2);
                } else {
                    t122 = ((*(int *)0xC2A4E48) | 0x8);
                }
                *(unsigned int *)0xC2A4E48 = t122;
            }
        }
        u146 = t114;
    }
    return u146;
}
