/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { short x, y, z; } AngleR;
int Model_Put_Sprite3D(int, int, AngleR, float, int);
int ResetFadeColor(void);
int nlAddVector(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
/* manual: the angle goes to Model_Put_Sprite3D by value (the generated form dropped it) */
int Put_Time_Spark(int a4);

int Put_Time_Spark(int a4)
{
    int stk[8];

    nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    nlPushMatrix(0x0);
    Model_Put_Sprite3D((int)(*(float *)((a4 + 0x18))), (int)(*(float *)((a4 + 0x1C))), *(AngleR *)(a4 + 0x30), 1.1999999f, 0xC0EAC20);
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(signed char *)(((a4 + 0x30) + 0x0)));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (*(signed char *)(((a4 + 0x30) + 0x1)));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x2)) = (*(signed char *)(((a4 + 0x30) + 0x2)));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x3)) = (*(signed char *)(((a4 + 0x30) + 0x3)));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x4)) = (*(signed char *)(((a4 + 0x30) + 0x4)));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x5)) = (*(signed char *)(((a4 + 0x30) + 0x5)));
    *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x2)) = ((*(short *)(((((int)stk + 4) + 0x8) + 0x2))) + 0x8000);
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x18), (a4 + 0x24));
    *(unsigned short *)((a4 + 0x32)) = ((*(short *)((a4 + 0x32))) + (*(short *)(((0x36 + a4) + 0x0))));
    return (ResetFadeColor());
}
