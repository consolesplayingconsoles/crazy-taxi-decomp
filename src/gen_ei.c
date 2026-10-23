/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int nlScaleUnitVector(int, int, float);
void Reflection(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);

void Reflection(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[22];

    stk[9] = a8;
    stk[10] = a9;
    stk[11] = a10;
    stk[12] = a11;
    stk[13] = a12;
    nlScaleUnitVector((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), (-((nlInnerProduct((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x30))) * (1.0f + 1.0f))));
    nlAddVector3op(((int)stk + 4), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((int)stk + 4)); }
}
