/* Straight-line functions with calls and guards (batch gen_afx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c078a70(int, int, int);
int FUN_0c07b980(void);
int nlAddVector(int, int);
int nlObjPutUseViewMatrix(int);
int nlScaleVector(int, int, float);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int PutCollisionPoly(int a4);

int PutCollisionPoly(int a4)
{
    int t3;
    int t9;
    int t14;
    int t16;
    int stk[27] = {0};

    nlTriPutTextureInit(0xC271258, 0xFFFFFFFF, 0x0);
    t3 = *(int *)((a4 + 0x44));
    nlTriPutSetAttrib(0xC271258, 0x2, 0x0, 0xFFFFFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, ((*(int *)((a4 + 0x48)))), 0.5f, 0.5f, (*(float *)((((t3 * 0x1C) + 0xC08F748) + 0x4))), (*(float *)((((t3 * 0x1C) + 0xC08F748) + 0x8))), (*(float *)((((t3 * 0x1C) + 0xC08F748) + 0xC))), 0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC271278 = ((*(int *)0xC271278) | 0xC0);
    t9 = *(int *)((a4 + 0x44));
    *(volatile float *)((((t9 * 0x1C) + 0xC08F748) + 0x4));
    *(volatile float *)((((t9 * 0x1C) + 0xC08F748) + 0x8));
    *(volatile float *)((((t9 * 0x1C) + 0xC08F748) + 0xC));
    nlScaleVector(((int)stk + 28), a4, 0.00999999978f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0xC)) = *(struct mv3 *)(0xC0965F0); }
    t14 = 0x0;
    for (;;) {
        if ((int)t14 >= (int)(*(int *)((a4 + 0x48)))) {
            break;
        }
        t16 = *(int *)(((t14 << 2) + 0xC0ED910));
        FUN_0c078a70((((int)stk + 28) + 0x18), ((int)stk + 28), ((signed char)(((t16 << 1) + t16) << 2) + (a4 + 0x14)));
        nlAddVector((((int)stk + 28) + 0xC), (((int)stk + 28) + 0x18));
        nlTriPutSetPoint(0xC271258, t14, (*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 56))), (*(float *)(((int)stk + 60))), (*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))), 0.0f, 0.0f);
        t14 = (t14 + 0x1);
    }
    nlTriPutSetClipping(0xC271258, (*(float *)(((a4 + 0x14) + 0x0))), (*(float *)(((a4 + 0x14) + 0x4))), (*(float *)(((a4 + 0x14) + 0x8))), (*(float *)((a4 + 0x10))));
    nlObjPutUseViewMatrix(0xC271258);
    nlScaleVector((((int)stk + 28) + 0xC), (((int)stk + 28) + 0xC), (1.0f / (float)(*(int *)((a4 + 0x48)))));
    nlScaleVector((((int)stk + 28) + 0x18), a4, ((*(float *)((a4 + 0x10))) * 0.099999994f));
    nlAddVector((((int)stk + 28) + 0x18), (((int)stk + 28) + 0xC));
    return (FUN_0c07b980());
}
