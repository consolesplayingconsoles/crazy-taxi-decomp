/* Straight-line functions with calls and guards (batch gen_wn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMatrixMode(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslate(float, float, float);
typedef struct { short x, y, z; } AngleR;
int Model_Put_Sprite3D(int a4, int a5, AngleR ang, float f4, int a6);

/* manual: (x, y, angle by value on the stack, scale, object): the generated form gave it r4-r7 and four stack words */
int Model_Put_Sprite3D(int a4, int a5, AngleR ang, float f4, int a6)
{
    int stk[22];

    *(AngleR *)&stk[10] = ang;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlMatrixMode(0x3);
    nlPushMatrix(0xC0D09D0);
    nlMatrixMode(0x2);
    nlPushUnitMatrix();
    nlMatrixMode(0x1);
    nlPushUnitMatrix();
    nlTranslate(((float)((*(int *)(((int)stk + 4))) - 320) * 0.000999999931f), ((float)(0xF0 - (*(int *)(((int)stk + 12)))) * 0.000999999931f), -0.599999964f);
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 4) + 0x24) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((((int)stk + 4) + 0x24) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((((int)stk + 4) + 0x24) + 0x4))));
    nlScale(f4, f4, f4);
    nlScale((f4 * 0.000999999931f), (f4 * 0.000999999931f), (f4 * 0.000999999931f));
    nlSetScaleFactor((f4 * 0.000999999931f));
    nlObjPut((*(int *)(((int)stk + 8))));
    nlPopMatrix(0x1);
    nlMatrixMode(0x2);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlPopMatrix(0x1);
    return (nlMatrixMode(0x1));
}
