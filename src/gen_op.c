/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ReflectColliWallBox(int, int, int, int);
float nlFastCos(int);
float nlFastSin(int);
int nlLineSetThickness(float);
int nlScaleVector(int, int, float);
int nlSingleLineUseViewMatrix(int, int, int);
int ColliWallTest(void);

int ColliWallTest(void)
{
    int stk[11];

    *(float *)(((int)stk + 16)) = (nlFastCos((*(int *)0xC0ED8B4)));
    *(float *)(((int)stk + 20)) = (nlFastSin((*(int *)0xC0ED8B4)));
    *(float *)0xC0ED8E8 = (*(float *)0xC0ED8A4);
    *(float *)0xC0ED8EC = 0.0f;
    *(float *)0xC0ED8F0 = (*(float *)0xC0ED8A8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC0ED8D0) = *(struct mv3 *)(0xC0965F0); }
    nlLineSetThickness(3.0f);
    nlScaleVector(((int)stk + 4), 0xC0ED8E8, 100.0f);
    nlSingleLineUseViewMatrix(0xC0965F0, ((int)stk + 4), 0xFFFF7F7F);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 16))) * 10.0f);
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 20))) * 10.0f);
    nlSingleLineUseViewMatrix(0xC0965F0, ((int)stk + 4), 0xFF7FFFFF);
    ReflectColliWallBox(0xC0ED8DC, 0xC0ED8AC, (((int)stk + 4) + 0xC), 0x0);
    nlScaleVector(((int)stk + 4), 0xC0ED8E8, 100.0f);
    nlSingleLineUseViewMatrix(0xC0965F0, ((int)stk + 4), 0xFFFF7FFF);
    nlScaleVector(((int)stk + 4), 0xC0ED8D0, 100000.0f);
    return (nlSingleLineUseViewMatrix(0xC0965F0, ((int)stk + 4), 0xFF7FFF7F));
}
