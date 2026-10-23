/* Straight-line functions with calls and guards (batch gen_ui): generated from the code and checked by tests. Calls are
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
int nlTranslate(float, float, float);
int Model_Put_Sprite(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int Model_Put_Sprite(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int stk[20];

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlMatrixMode(0x3);
    nlPushMatrix(0xC0D09D0);
    nlMatrixMode(0x2);
    nlPushUnitMatrix();
    nlMatrixMode(0x1);
    nlPushUnitMatrix();
    nlTranslate((float)((*(int *)(((int)stk + 4))) - 320), (float)(0xF0 - (*(int *)(((int)stk + 12)))), -0.299999982f);
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x4))));
    nlScale(f4, f4, 1.0f);
    nlObjPut((*(int *)(((int)stk + 8))));
    nlPopMatrix(0x1);
    nlMatrixMode(0x2);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlPopMatrix(0x1);
    return (nlMatrixMode(0x1));
}
