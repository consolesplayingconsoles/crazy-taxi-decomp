/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetRotVec4Ang(int, int, int);
int KillColliObj(int);
int carEntry(int);
extern int getCourseDistPoint();
int getNearLinkedLine(int, int, int, int);
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
int technicalCheck(int);
float trainExec(int a4);

float trainExec(int a4)
{
    int t5;
    int t25;
    int t28;
    int t29;
    int t39;
    int t69;
    int t73;
    float t114;
    float u146;
    int t122;
    int stk[32];

    technicalCheck(a4);
    if (((*(int *)((a4 + 0x84))) & 1) == 0) {
        KillColliObj((a4 + 0x14));
        nlCloseEvent(a4);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) - 1);
    } else {
        t5 = *(int *)((a4 + 0x4));
        nlPushUnitMatrix();
        nlTranslateV((0x8C + t5));
        nlRotateAY((unsigned short)(*(short *)((t5 + 0xA6))));
        nlRotateAX((unsigned short)(*(short *)((t5 + 0xA4))));
        nlRotateAZ((unsigned short)(*(short *)((t5 + 0xA8))));
        nlTranslate(0.0f, ((*(float *)((t5 + 0xF8))) + (*(float *)((t5 + 0xFC)))), -85.0f);
        nlGetTranslate((((int)stk + 16) + 0x3C));
        nlPopMatrix(0x1);
        *(unsigned int *)((a4 + 0x84)) = (*(int *)((t5 + 0x84)));
        *(float *)((a4 + 0xC8)) = (*(float *)((t5 + 0xC8)));
        *(unsigned int *)((a4 + 0x88)) = (*(int *)((t5 + 0x88)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x30)) = *(struct mv3 *)((0x8C + a4)); }
        *(float *)((a4 + 0x9C)) = ((*(float *)((a4 + 0x9C))) - 0.073499985f);
        t25 = ((int (*)(int, int, int, int, float))(getCourseDistPoint))(0xFFFFFFFF, (((int)stk + 16) + 0x3C), (*(int *)((a4 + 0x80))), (*(int *)((t5 + 0xD4))), 40.0f);
        t28 = ((int (*)(int, int, int, int, int, int, float))(getCourseDistPoint))(0xFFFFFFFF, (((int)stk + 12) + 0x10), (*(int *)((a4 + 0x80))), (*(int *)((a4 + 0xD4))), (((int)stk + 12) + 0x4), (((int)stk + 16) + 0xC), 90.0f);
        t29 = GetCollision2D((((int)stk + 16) + 0xC), 10.0f);
        if ((*(int *)((t29 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t29 + 0xC)); }
            *(float *)(((int)stk + 32)) = (*(float *)((t29 + 0x18)));
            *(float *)((a4 + 0x104)) = (*(float *)((t29 + 0x18)));
        }
        t39 = GetCollision2D(((int)stk + 16), 10.0f);
        if ((*(int *)((t39 + 0x1C))) != -1) {
            nlGetAverageVector((0xEC + a4), (t39 + 0xC), (0xEC + a4), 0.5f, 0.5f);
            *(float *)(((int)stk + 20)) = (*(float *)((t39 + 0x18)));
            *(float *)((a4 + 0x104)) = (((*(float *)((t39 + 0x18))) + (*(float *)((a4 + 0x104)))) * 0.5f);
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
        nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
        nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
        nlCalcVector((0xEC + a4), (((int)stk + 16) + 0x24));
        *(unsigned short *)(((0xA8 + a4) + 0x0)) = (-(nlArcTan2((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 56))))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlSubVector3op((0x98 + a4), (0x8C + a4), (((int)stk + 16) + 0x30));
        t69 = ((int (*)(int, int, int, int, float))(getCourseDistPoint))(0x1, (((int)stk + 16) + 0xC), (*(int *)((a4 + 0x80))), (*(int *)((a4 + 0xD4))), 30.0f);
        nlSubVector((((int)stk + 12) + 0x10), (((int)stk + 12) + 0x40));
        t73 = ((int (*)(int, int, int, int, float))(getCourseDistPoint))(0x1, (((int)stk + 12) + 0x4), (*(int *)((a4 + 0x80))), (*(int *)((a4 + 0xD4))), 30.0f);
        nlSubVector((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x44));
        nlPushUnitMatrix();
        nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
        nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
        nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
        nlCalcVector((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x2C));
        *(unsigned int *)(((0xC0 + a4) + 0x0)) = (nlArcTan2((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 60)))));
        nlCalcVector((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x2C));
        *(unsigned short *)(((0xAC + a4) + 0x0)) = (nlArcTan2((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 60)))));
        nlPopMatrix(0x1);
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
        nlCalcVector((0x98 + a4), (((int)stk + 16) + 0x24));
        *(float *)((a4 + 0xCC)) = (*(float *)(((int)stk + 60)));
        nlPopMatrix(0x1);
        carEntry(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
        *(volatile short *)((a4 + 0xA8));
        GetRotVec4Ang((a4 + 0x44), (unsigned short)(*(short *)((a4 + 0xA4))), (unsigned short)(*(short *)((a4 + 0xA6))));
        *(unsigned int *)((a4 + 0x68)) = 0x0;
        t114 = nlLength(((*(int *)0xC2A1B30) + 0x78), (0x8C + a4));
        if (800.0f > t114) {
            if ((*(float *)((a4 + 0xCC))) > 0.694444537f) {
                if ((int)(*(int *)((a4 + 0x78))) <= (int)0x12) {
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
