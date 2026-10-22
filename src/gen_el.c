/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c075860(float);
int FUN_0c077210(int, int);
float FUN_0c078de0(int, int);
int nlArcTan2(float, float);
float nlInnerProduct(int, int);
int nlOuterProduct(int, int, int);
int nlRotateAX(int);
int nlRotateV(int, int);
int nlSubVector3op(int, int, int);
int fcvSolveIK(int a4, int a5, int a6, int a7, int a8);

int fcvSolveIK(int a4, int a5, int a6, int a7, int a8)
{
    float t6;
    float t16;
    int t20;
    float u21;
    float u22;
    float u23;
    float u26;
    int t29;
    int stk[44] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x88 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5510); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x80 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5518); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 8) + 0x78)) = *(struct mv2 *)(0xC0D5520); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 8) + 0x70)) = *(struct mv2 *)(0xC0D5528); }
    FUN_0c077210(0xC0D553C, (((int)stk + 8) + 0x64));
    FUN_0c077210(0xC0D5548, (((int)stk + 8) + 0x58));
    FUN_0c077210(0xC0D5554, (((int)stk + 8) + 0x4C));
    nlSubVector3op((((int)stk + 8) + 0x1C), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 20))));
    t6 = FUN_0c078de0((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x40));
    nlOuterProduct((((int)stk + 8) + 0x4C), (((int)stk + 8) + 0x40), (((int)stk + 8) + 0x34));
    nlOuterProduct((((int)stk + 8) + 0x40), (((int)stk + 8) + 0x34), (((int)stk + 8) + 0x28));
    *(float *)(((int)stk + 24)) = (nlInnerProduct((((int)stk + 8) + 0x40), (((int)stk + 8) + 0x64)));
    *(float *)(((int)stk + 28)) = (nlInnerProduct((((int)stk + 8) + 0x40), (((int)stk + 8) + 0x58)));
    *(float *)(((int)stk + 32)) = (nlInnerProduct((((int)stk + 8) + 0x40), (((int)stk + 8) + 0x4C)));
    nlRotateV(0xC0D553C, (((int)stk + 8) + 0x10));
    FUN_0c077210(0xC0D553C, (((int)stk + 8) + 0x40));
    FUN_0c077210(0xC0D5548, (((int)stk + 8) + 0x34));
    FUN_0c077210(0xC0D5554, (((int)stk + 8) + 0x28));
    t16 = nlInnerProduct((((int)stk + 8) + 0x4C), (((int)stk + 8) + 0x28));
    *(float *)(((int)stk + 4)) = t16;
    nlRotateAX((-(nlArcTan2((nlInnerProduct((((int)stk + 4) + 0x5C), (((int)stk + 4) + 0x2C))), t16))));
    t20 = *(int *)(((int)stk + 12));
    u21 = *(float *)((((((int)stk + 8) + 0x78) + (t20 << 2)) + 0x0));
    u22 = *(float *)((((((int)stk + 8) + 0x70) + (t20 << 2)) + 0x0));
    u23 = *(float *)((((0x88 + ((int)stk + 8)) + (t20 << 2)) + 0x0));
    u26 = ((*(float *)((((t20 << 2) + (0x80 + ((int)stk + 8))) + 0x0))) * u23);
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (FUN_0c075860((((u21 - u22) + (t6 * t6)) / (((u23 * t6)) * (1.0f + 1.0f)))));
    t29 = FUN_0c075860(((((t6 * t6) - u22) - u21) / (u26 * (1.0f + 1.0f))));
    *(unsigned int *)((a8 + 0x0)) = (-t29);
    return (-t29);
}
